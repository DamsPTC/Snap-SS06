/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106fa32e8; end: 106fa32ef; +[SCSpectaclesLagunaRequestMessage syncLenses] */

undefined8 FUN_106fa32e8(void)

{
  return 0;
}



/* Entry: 106fa32f0; end: 106fa32f7; +[SCSpectaclesLagunaRequestMessage firmwareUpdateUpload:startPosition:overwriteExistingFile:] */

undefined8 FUN_106fa32f0(void)

{
  return 0;
}



/* Entry: 106fa32f8; end: 106fa32ff; +[SCSpectaclesLagunaRequestMessage firmwareGetChecksum] */

undefined8 FUN_106fa32f8(void)

{
  return 0;
}



/* Entry: 106fa3300; end: 106fa3307; +[SCSpectaclesLagunaRequestMessage firmwareApplyFullUpdate] */

undefined8 FUN_106fa3300(void)

{
  return 0;
}



/* Entry: 106fa3308; end: 106fa330f; +[SCSpectaclesLagunaRequestMessage firmwwareRebootAndSwitchPartition] */

undefined8 FUN_106fa3308(void)

{
  return 0;
}



/* Entry: 106fa3310; end: 106fa3317; +[SCSpectaclesLagunaRequestMessage firmwareScheduleUpdate:targetDigest:isFullUpdate:] */

undefined8 FUN_106fa3310(void)

{
  return 0;
}



/* Entry: 106fa3318; end: 106fa331f; +[SCSpectaclesLagunaRequestMessage firmwareCancelScheduledUpdate] */

undefined8 FUN_106fa3318(void)

{
  return 0;
}



/* Entry: 106fa3320; end: 106fa3327; +[SCSpectaclesLagunaRequestMessage debugLogFileListRequest] */

undefined8 FUN_106fa3320(void)

{
  return 0;
}



/* Entry: 106fa3328; end: 106fa332f; +[SCSpectaclesLagunaRequestMessage debugLogFileRequestWithFilename:range:] */

undefined8 FUN_106fa3328(void)

{
  return 0;
}



/* Entry: 106fa3330; end: 106fa3337; +[SCSpectaclesLagunaRequestMessage analyticsFileListRequest] */

undefined8 FUN_106fa3330(void)

{
  return 0;
}



/* Entry: 106fa3338; end: 106fa333f; +[SCSpectaclesLagunaRequestMessage analyticsFileGetWithFilename:range:] */

undefined8 FUN_106fa3338(void)

{
  return 0;
}



/* Entry: 106fa3340; end: 106fa3347; +[SCSpectaclesLagunaRequestMessage analyticsFileDeleteRequest] */

undefined8 FUN_106fa3340(void)

{
  return 0;
}



/* Entry: 106fa3348; end: 106fa334f; +[SCSpectaclesLagunaRequestMessage enableLostMode] */

undefined8 FUN_106fa3348(void)

{
  return 0;
}



/* Entry: 106fa3350; end: 106fa3357; +[SCSpectaclesLagunaRequestMessage startFlightImuCalibrationRequest] */

undefined8 FUN_106fa3350(void)

{
  return 0;
}



/* Entry: 106fa3358; end: 106fa335f; +[SCSpectaclesLagunaRequestMessage stopFlightImuCalibrationRequest] */

undefined8 FUN_106fa3358(void)

{
  return 0;
}



/* Entry: 106fa3360; end: 106fa3367; -[SCSpectaclesLagunaRequestMessage nrfRequest] */

undefined8 FUN_106fa3360(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106fa3368; end: 106fa3373; -[SCSpectaclesLagunaRequestMessage .cxx_destruct] */

void FUN_106fa3368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fa3374; end: 106fa33e7; -[SCSpectaclesMalibuRequestMessage initWithRpcInvocations:] */

undefined1 * FUN_106fa3374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f81a0;
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



/* Entry: 106fa33e8; end: 106fa3553; +[SCSpectaclesMalibuRequestMessage turnBluetoothClassicOn:name:] */

undefined *
FUN_106fa33e8(double param_1,double param_2,undefined *param_3,undefined8 param_4,undefined *param_5
             ,undefined8 param_6,long param_7)

{
  undefined *puVar1;
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
  undefined8 uVar13;
  undefined *puStack_810;
  long lStack_808;
  undefined *puStack_7b0;
  long lStack_7a8;
  undefined *puStack_7a0;
  undefined *puStack_798;
  undefined *puStack_790;
  undefined *puStack_788;
  undefined8 **ppuStack_780;
  code *pcStack_778;
  undefined *puStack_770;
  long lStack_768;
  undefined *puStack_760;
  undefined *puStack_758;
  undefined *puStack_750;
  undefined *puStack_748;
  undefined8 **ppuStack_740;
  code *pcStack_738;
  undefined *puStack_730;
  long lStack_728;
  undefined *puStack_720;
  undefined *puStack_718;
  undefined *puStack_710;
  undefined *puStack_708;
  undefined8 **ppuStack_700;
  code *pcStack_6f8;
  undefined *puStack_6f0;
  long lStack_6e8;
  undefined *puStack_6e0;
  undefined *puStack_6d8;
  undefined *puStack_6d0;
  undefined *puStack_6c8;
  undefined8 **ppuStack_6c0;
  code *pcStack_6b8;
  undefined *puStack_6b0;
  long lStack_6a8;
  undefined *puStack_6a0;
  undefined *puStack_698;
  undefined *puStack_690;
  undefined *puStack_688;
  undefined8 **ppuStack_680;
  code *pcStack_678;
  undefined *puStack_670;
  long lStack_668;
  undefined *puStack_660;
  undefined *puStack_658;
  undefined *puStack_650;
  undefined *puStack_648;
  undefined8 **ppuStack_640;
  code *pcStack_638;
  undefined *puStack_628;
  undefined *puStack_620;
  undefined *puStack_618;
  undefined *puStack_610;
  undefined *puStack_608;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined *puStack_5f0;
  undefined *puStack_5e8;
  undefined *puStack_5e0;
  undefined *puStack_5d8;
  undefined *puStack_5d0;
  undefined *puStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5b0;
  undefined *puStack_5a8;
  undefined *puStack_5a0;
  undefined *puStack_598;
  undefined *puStack_590;
  undefined *puStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined *puStack_550;
  undefined *puStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  long lStack_520;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined *puStack_4d0;
  undefined *puStack_4c8;
  undefined8 **ppuStack_4c0;
  code *pcStack_4b8;
  undefined *puStack_4b0;
  long lStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined8 **ppuStack_480;
  code *pcStack_478;
  undefined *puStack_470;
  long lStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined8 **ppuStack_440;
  code *pcStack_438;
  undefined *puStack_428;
  undefined *puStack_420;
  long lStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined8 **ppuStack_3e0;
  code *pcStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  long lStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 **ppuStack_320;
  code *pcStack_318;
  undefined *puStack_310;
  long lStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined8 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 **ppuStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 **ppuStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 **ppuStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  func_0x00010c25cfc0(param_5,param_4,&PTR____CFConstantStringClassReference_110db3638,
                      &PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3ad0;
  _objc_alloc_init();
  func_0x00010c21acc0();
  func_0x00010c18fca0(puVar1,param_4,param_6);
  _objc_release(param_6);
  puVar2 = param_5;
  func_0x00010bf64920(param_5,param_4,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18cfc0(puVar1,param_4,puVar2);
  _objc_release(puVar2);
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  func_0x00010bf1e6c0(PTR_PTR_1126d3ad8,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_3,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar3 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_58 = FUN_106fa3554;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_80 = puVar2;
    puStack_78 = param_3;
    puStack_70 = puVar1;
    puStack_68 = param_5;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_alloc();
    puVar1 = PTR_PTR_1126d3ad8;
    puVar2 = PTR_PTR_1126d3ae0;
    _objc_alloc_init();
    func_0x00010bf1e700(puVar1,param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = (undefined *)0x1;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_90);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c040a80(puVar3,param_4,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release();
    param_3 = puVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      pcStack_98 = FUN_106fa3630;
      lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_a0 = &puStack_60;
      _objc_retain(puVar12);
      _objc_retain(param_7);
      puVar1 = PTR_PTR_1126d3ae8;
      _objc_retain(puVar5);
      _objc_alloc_init();
      func_0x00010c21acc0();
      func_0x00010c208f60(puVar1,param_4,puVar5);
      _objc_release(puVar5);
      if (puVar12 != (undefined *)0x0) {
        func_0x00010c1d96e0(puVar1,param_4,puVar12);
      }
      if (param_7 != 0) {
        func_0x00010c184920(puVar1,param_4,param_7);
      }
      _objc_alloc();
      puVar3 = PTR_PTR_1126d3ad8;
      func_0x00010c2a5540(PTR_PTR_1126d3ad8,param_4,puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = 1;
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_e0 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_e0,1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c040a80(puVar2,param_4,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar1);
      _objc_release(param_7);
      puVar3 = puVar12;
      _objc_release();
      param_3 = puVar2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
        ___stack_chk_fail();
        puVar4 = PTR_PTR_1126d3ae8;
        pcStack_e8 = FUN_106fa378c;
        lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_110 = puVar2;
        puStack_108 = puVar1;
        lStack_100 = param_7;
        puStack_f8 = puVar12;
        ppuStack_f0 = &ppuStack_a0;
        _objc_retain(uVar13);
        _objc_retain(puVar5);
        _objc_alloc_init();
        func_0x00010c21acc0();
        func_0x00010c208f60(puVar4,param_4,puVar5);
        _objc_release(puVar5);
        func_0x00010c1d96e0(puVar4,param_4,uVar13);
        _objc_release(uVar13);
        _objc_alloc();
        puVar1 = PTR_PTR_1126d3ad8;
        func_0x00010c2a5540(PTR_PTR_1126d3ad8,param_4,puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_120 = puVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_120,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c040a80(puVar3,param_4,puVar2);
        _objc_release(puVar2);
        _objc_release(puVar1);
        puVar5 = puVar4;
        _objc_release();
        param_3 = puVar3;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
          ___stack_chk_fail();
          pcStack_128 = FUN_106fa38b8;
          lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puStack_150 = puVar2;
          puStack_148 = puVar1;
          puStack_140 = puVar3;
          puStack_138 = puVar4;
          ppuStack_130 = &ppuStack_f0;
          _objc_alloc();
          puVar1 = PTR_PTR_1126d3ad8;
          puVar2 = PTR_PTR_1126d3ae0;
          _objc_alloc_init();
          func_0x00010c2a5600(puVar1,param_4,puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_160 = puVar1;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_160,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c040a80(puVar5,param_4,puVar3);
          _objc_release(puVar3);
          _objc_release(puVar1);
          puVar4 = puVar2;
          _objc_release();
          param_3 = puVar5;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
            ___stack_chk_fail();
            pcStack_168 = FUN_106fa3994;
            lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puStack_190 = puVar3;
            puStack_188 = puVar2;
            puStack_180 = puVar1;
            puStack_178 = puVar5;
            ppuStack_170 = &ppuStack_130;
            _objc_alloc();
            puVar1 = PTR_PTR_1126d3ad8;
            puVar2 = PTR_PTR_1126d3ae0;
            _objc_alloc_init();
            func_0x00010bfa44e0(puVar1,param_4,puVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_1a0 = puVar1;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_1a0,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c040a80(puVar4,param_4,puVar3);
            _objc_release(puVar3);
            _objc_release(puVar1);
            puVar5 = puVar2;
            _objc_release();
            param_3 = puVar4;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
              ___stack_chk_fail();
              pcStack_1a8 = FUN_106fa3a70;
              lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
              puStack_1d0 = puVar3;
              puStack_1c8 = puVar2;
              puStack_1c0 = puVar1;
              puStack_1b8 = puVar4;
              ppuStack_1b0 = &ppuStack_170;
              _objc_alloc();
              puVar1 = PTR_PTR_1126d3ad8;
              puVar2 = PTR_PTR_1126d3ae0;
              _objc_alloc_init();
              func_0x00010bfcfee0(puVar1,param_4,puVar2);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_1e0 = puVar1;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_1e0,1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c040a80(puVar5,param_4,puVar3);
              _objc_release(puVar3);
              _objc_release(puVar1);
              _objc_release();
              param_3 = puVar5;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
                ___stack_chk_fail();
                pcStack_1e8 = FUN_106fa3b4c;
                lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
                puVar3 = PTR_PTR_1126d3af0;
                ppuStack_1f0 = &ppuStack_1b0;
                _objc_alloc_init();
                puStack_2b0 = puVar3;
                func_0x00010c1ec220();
                _objc_alloc();
                puVar1 = PTR_PTR_1126d3ad8;
                puVar4 = PTR_PTR_1126d3af8;
                puStack_2c8 = puVar2;
                _objc_alloc_init();
                puStack_290 = puVar4;
                func_0x00010bfca120(puVar1,param_4,puVar4);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR_PTR_1126d3ad8;
                puVar4 = PTR_PTR_1126d3ae0;
                puStack_298 = puVar1;
                puStack_288 = puVar1;
                _objc_alloc_init();
                puStack_2a0 = puVar4;
                func_0x00010bf1e960(puVar2,param_4,puVar4);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = PTR_PTR_1126d3ad8;
                puVar4 = PTR_PTR_1126d3ae0;
                puStack_2a8 = puVar2;
                puStack_280 = puVar2;
                _objc_alloc_init();
                puStack_2b8 = puVar4;
                func_0x00010bfccc40(puVar1,param_4,puVar4);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = PTR_PTR_1126d3ad8;
                puStack_2c0 = puVar1;
                puStack_278 = puVar1;
                func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar3);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = PTR_PTR_1126d3ad8;
                puVar12 = PTR_PTR_1126d3ae0;
                puStack_270 = puVar5;
                _objc_alloc_init();
                func_0x00010bf35ae0(puVar1,param_4,puVar12);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR_PTR_1126d3ad8;
                puVar6 = PTR_PTR_1126d3ae0;
                puStack_268 = puVar1;
                _objc_alloc_init();
                func_0x00010bf21ee0(puVar2,param_4,puVar6);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR_PTR_1126d3ad8;
                puVar7 = PTR_PTR_1126d3ae0;
                puStack_260 = puVar2;
                _objc_alloc_init();
                func_0x00010bfc7660(puVar3,param_4,puVar7);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = PTR_PTR_1126d3ad8;
                puVar8 = PTR_PTR_1126d3ae0;
                puStack_258 = puVar3;
                _objc_alloc_init();
                func_0x00010bfc5d20(puVar4,param_4,puVar8);
                _objc_retainAutoreleasedReturnValue();
                puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_250 = puVar4;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_288,8);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c040a80(puStack_2c8,param_4,puVar9);
                _objc_release(puVar9);
                _objc_release(puVar4);
                _objc_release(puVar8);
                _objc_release(puVar3);
                _objc_release(puVar7);
                _objc_release(puVar2);
                _objc_release(puVar6);
                _objc_release(puVar1);
                _objc_release(puVar12);
                _objc_release(puVar5);
                _objc_release(puStack_2c0);
                _objc_release(puStack_2b8);
                _objc_release(puStack_2a8);
                _objc_release(puStack_2a0);
                _objc_release(puStack_298);
                _objc_release(puStack_290);
                puVar10 = puStack_2b0;
                _objc_release();
                param_3 = puStack_2c8;
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
                  ___stack_chk_fail();
                  pcStack_2d8 = FUN_106fa3dfc;
                  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  puStack_300 = puVar2;
                  puStack_2f8 = puVar9;
                  puStack_2f0 = puVar6;
                  puStack_2e8 = puVar3;
                  ppuStack_2e0 = &ppuStack_1f0;
                  _objc_alloc();
                  puVar2 = PTR_PTR_1126d3ad8;
                  puVar3 = PTR_PTR_1126d3af8;
                  _objc_alloc_init();
                  func_0x00010bfca120(puVar2,param_4,puVar3);
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
                  puStack_310 = puVar2;
                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_310,1);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c040a80(puVar10,param_4,puVar6);
                  _objc_release(puVar6);
                  _objc_release(puVar2);
                  puVar9 = puVar3;
                  _objc_release();
                  param_3 = puVar10;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
                    ___stack_chk_fail();
                    pcStack_318 = FUN_106fa3ed8;
                    lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
                    puVar11 = PTR_PTR_1126d3af0;
                    puStack_370 = puVar12;
                    puStack_368 = puVar5;
                    puStack_360 = puVar1;
                    puStack_358 = puVar4;
                    puStack_350 = puVar8;
                    puStack_348 = puVar7;
                    puStack_340 = puVar6;
                    puStack_338 = puVar3;
                    puStack_330 = puVar2;
                    puStack_328 = puVar10;
                    ppuStack_320 = &ppuStack_2e0;
                    _objc_alloc_init();
                    puStack_3b0 = puVar11;
                    func_0x00010c1ec220();
                    _objc_alloc();
                    puVar2 = PTR_PTR_1126d3ad8;
                    puStack_3d0 = puVar9;
                    func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar11);
                    _objc_retainAutoreleasedReturnValue();
                    puVar1 = PTR_PTR_1126d3ad8;
                    puVar3 = PTR_PTR_1126d3ae0;
                    puStack_3b8 = puVar2;
                    puStack_3a8 = puVar2;
                    _objc_alloc_init();
                    puStack_3c0 = puVar3;
                    func_0x00010bf35ae0(puVar1,param_4,puVar3);
                    _objc_retainAutoreleasedReturnValue();
                    puVar2 = PTR_PTR_1126d3ad8;
                    puVar5 = PTR_PTR_1126d3ae0;
                    puStack_3c8 = puVar1;
                    puStack_3a0 = puVar1;
                    _objc_alloc_init();
                    func_0x00010bfcb140(puVar2,param_4,puVar5);
                    _objc_retainAutoreleasedReturnValue();
                    puVar1 = PTR_PTR_1126d3ad8;
                    puVar12 = PTR_PTR_1126d3ae0;
                    puStack_398 = puVar2;
                    _objc_alloc_init();
                    func_0x00010bfc35a0(puVar1,param_4,puVar12);
                    _objc_retainAutoreleasedReturnValue();
                    puVar3 = PTR_PTR_1126d3ad8;
                    puVar6 = PTR_PTR_1126d3ae0;
                    puStack_390 = puVar1;
                    _objc_alloc_init();
                    func_0x00010bfc7660(puVar3,param_4,puVar6);
                    _objc_retainAutoreleasedReturnValue();
                    puVar4 = PTR_PTR_1126d3ad8;
                    puVar7 = PTR_PTR_1126d3ae0;
                    puStack_388 = puVar3;
                    _objc_alloc_init();
                    func_0x00010bfc2c00(puVar4,param_4,puVar7);
                    _objc_retainAutoreleasedReturnValue();
                    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
                    puStack_380 = puVar4;
                    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_3a8,6);
                    _objc_retainAutoreleasedReturnValue();
                    param_3 = puStack_3d0;
                    func_0x00010c040a80(puStack_3d0,param_4,puVar8);
                    _objc_release(puVar8);
                    _objc_release(puVar4);
                    _objc_release(puVar7);
                    _objc_release(puVar3);
                    _objc_release(puVar6);
                    _objc_release(puVar1);
                    _objc_release(puVar12);
                    _objc_release(puVar2);
                    _objc_release(puVar5);
                    _objc_release(puStack_3c8);
                    _objc_release(puStack_3c0);
                    _objc_release(puStack_3b8);
                    puVar9 = puStack_3b0;
                    _objc_release();
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_378) {
                      ___stack_chk_fail();
                      pcStack_3d8 = FUN_106fa410c;
                      lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
                      puVar10 = PTR_PTR_1126d3af0;
                      puStack_410 = param_3;
                      puStack_408 = puVar5;
                      puStack_400 = puVar4;
                      puStack_3f8 = puVar7;
                      puStack_3f0 = puVar6;
                      puStack_3e8 = puVar8;
                      ppuStack_3e0 = &ppuStack_320;
                      _objc_alloc_init();
                      func_0x00010c1ec220();
                      _objc_alloc();
                      puVar5 = PTR_PTR_1126d3ad8;
                      func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar10);
                      _objc_retainAutoreleasedReturnValue();
                      puVar4 = PTR_PTR_1126d3ad8;
                      puVar6 = PTR_PTR_1126d3ae0;
                      puStack_428 = puVar5;
                      _objc_alloc_init();
                      func_0x00010bf35ae0(puVar4,param_4,puVar6);
                      _objc_retainAutoreleasedReturnValue();
                      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
                      puStack_420 = puVar4;
                      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_428,2
                                         );
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c040a80(puVar9,param_4,puVar7);
                      _objc_release(puVar7);
                      _objc_release(puVar4);
                      _objc_release(puVar6);
                      _objc_release(puVar5);
                      puVar8 = puVar10;
                      _objc_release();
                      param_3 = puVar9;
                      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_418) {
                        ___stack_chk_fail();
                        pcStack_438 = FUN_106fa423c;
                        lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
                        puVar11 = PTR_PTR_1126d3af0;
                        puStack_460 = puVar4;
                        puStack_458 = puVar5;
                        puStack_450 = puVar9;
                        puStack_448 = puVar10;
                        ppuStack_440 = &ppuStack_3e0;
                        _objc_alloc_init();
                        func_0x00010c1ec220();
                        func_0x00010c189920(puVar11,param_4,1);
                        func_0x00010c2027c0(puVar11,param_4,1);
                        _objc_alloc();
                        puVar4 = PTR_PTR_1126d3ad8;
                        func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar11);
                        _objc_retainAutoreleasedReturnValue();
                        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
                        puStack_470 = puVar4;
                        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_470
                                            ,1);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c040a80(puVar8,param_4,puVar5);
                        _objc_release(puVar5);
                        _objc_release(puVar4);
                        puVar9 = puVar11;
                        _objc_release();
                        param_3 = puVar8;
                        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_468) {
                          ___stack_chk_fail();
                          pcStack_478 = FUN_106fa433c;
                          lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                          puVar10 = PTR_PTR_1126d3af0;
                          puStack_4a0 = puVar5;
                          puStack_498 = puVar4;
                          puStack_490 = puVar8;
                          puStack_488 = puVar11;
                          ppuStack_480 = &ppuStack_440;
                          _objc_alloc_init();
                          func_0x00010c1ec220();
                          func_0x00010c189920(puVar10,param_4,1);
                          func_0x00010c2027c0(puVar10,param_4,2);
                          _objc_alloc();
                          puVar4 = PTR_PTR_1126d3ad8;
                          func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar10);
                          _objc_retainAutoreleasedReturnValue();
                          puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
                          puStack_4b0 = puVar4;
                          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                              &puStack_4b0,1);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c040a80(puVar9,param_4,puVar5);
                          _objc_release(puVar5);
                          _objc_release(puVar4);
                          puVar8 = puVar10;
                          _objc_release();
                          param_3 = puVar9;
                          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4a8) {
                            ___stack_chk_fail();
                            pcStack_4b8 = FUN_106fa443c;
                            lStack_520 = *(long *)PTR____stack_chk_guard_11034bdc0;
                            puVar11 = PTR_PTR_1126d3af0;
                            puStack_590 = puVar8;
                            puStack_510 = puVar3;
                            puStack_508 = puVar1;
                            puStack_500 = puVar12;
                            puStack_4f8 = puVar2;
                            puStack_4f0 = puVar7;
                            puStack_4e8 = puVar6;
                            puStack_4e0 = puVar5;
                            puStack_4d8 = puVar4;
                            puStack_4d0 = puVar9;
                            puStack_4c8 = puVar10;
                            ppuStack_4c0 = &ppuStack_480;
                            _objc_alloc_init();
                            puStack_5a8 = puVar11;
                            func_0x00010c1ec220();
                            puVar3 = PTR_PTR_1126d3b00;
                            _objc_alloc_init();
                            puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
                            func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c26f320();
                            func_0x00010c2156a0(puVar3,param_4,(long)param_1);
                            _objc_release(puVar1);
                            puVar1 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
                            func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
                            _objc_retainAutoreleasedReturnValue();
                            puVar2 = puVar1;
                            func_0x00010c1552e0();
                            puStack_5d0 = puVar3;
                            func_0x00010c215860(puVar3,param_4,puVar2);
                            _objc_release(puVar1);
                            puVar4 = PTR_PTR_1126d3b08;
                            _objc_alloc_init();
                            puStack_600 = puVar4;
                            func_0x00010c173020();
                            puVar1 = PTR_PTR_1126d3ad8;
                            puStack_5e8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                            puVar2 = PTR_PTR_1126d3af8;
                            _objc_alloc_init();
                            puStack_598 = puVar2;
                            func_0x00010bfca120(puVar1,param_4,puVar2);
                            _objc_retainAutoreleasedReturnValue();
                            puVar2 = PTR_PTR_1126d3ad8;
                            puVar5 = PTR_PTR_1126d3ae0;
                            puStack_5a0 = puVar1;
                            puStack_588 = puVar1;
                            _objc_alloc_init();
                            puStack_5b0 = puVar5;
                            func_0x00010bfc5d20(puVar2,param_4,puVar5);
                            _objc_retainAutoreleasedReturnValue();
                            puVar1 = PTR_PTR_1126d3ad8;
                            puVar5 = PTR_PTR_1126d3ae0;
                            puStack_5b8 = puVar2;
                            puStack_580 = puVar2;
                            _objc_alloc_init();
                            puStack_5c0 = puVar5;
                            func_0x00010bfccc40(puVar1,param_4,puVar5);
                            _objc_retainAutoreleasedReturnValue();
                            puVar2 = PTR_PTR_1126d3ad8;
                            puStack_5c8 = puVar1;
                            puStack_578 = puVar1;
                            func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar11);
                            _objc_retainAutoreleasedReturnValue();
                            puVar1 = PTR_PTR_1126d3ad8;
                            puVar5 = PTR_PTR_1126d3ae0;
                            puStack_5d8 = puVar2;
                            puStack_570 = puVar2;
                            _objc_alloc_init();
                            puStack_5e0 = puVar5;
                            func_0x00010bf35ae0(puVar1,param_4,puVar5);
                            _objc_retainAutoreleasedReturnValue();
                            puVar2 = PTR_PTR_1126d3ad8;
                            puVar5 = PTR_PTR_1126d3ae0;
                            puStack_5f0 = puVar1;
                            puStack_568 = puVar1;
                            _objc_alloc_init();
                            puStack_5f8 = puVar5;
                            func_0x00010bfcb140(puVar2,param_4,puVar5);
                            _objc_retainAutoreleasedReturnValue();
                            puVar1 = PTR_PTR_1126d3ad8;
                            puVar5 = PTR_PTR_1126d3ae0;
                            puStack_608 = puVar2;
                            puStack_560 = puVar2;
                            _objc_alloc_init();
                            puStack_610 = puVar5;
                            func_0x00010bfc35a0(puVar1,param_4,puVar5);
                            _objc_retainAutoreleasedReturnValue();
                            puVar2 = PTR_PTR_1126d3ad8;
                            puStack_618 = puVar1;
                            puStack_558 = puVar1;
                            func_0x00010c214bc0(PTR_PTR_1126d3ad8,param_4,puVar3);
                            _objc_retainAutoreleasedReturnValue();
                            puVar1 = PTR_PTR_1126d3ad8;
                            puVar3 = PTR_PTR_1126d3ae0;
                            puStack_620 = puVar2;
                            puStack_550 = puVar2;
                            _objc_alloc_init();
                            puStack_628 = puVar3;
                            func_0x00010bfc7660(puVar1,param_4,puVar3);
                            _objc_retainAutoreleasedReturnValue();
                            puVar2 = PTR_PTR_1126d3ad8;
                            puVar5 = PTR_PTR_1126d3ae0;
                            puStack_548 = puVar1;
                            _objc_alloc_init(PTR_PTR_1126d3ae0);
                            func_0x00010bf1e960(puVar2,param_4,puVar5);
                            _objc_retainAutoreleasedReturnValue();
                            puVar12 = PTR_PTR_1126d3ad8;
                            puStack_540 = puVar2;
                            func_0x00010bf906c0(PTR_PTR_1126d3ad8,param_4,puVar4);
                            _objc_retainAutoreleasedReturnValue();
                            puVar3 = PTR_PTR_1126d3ad8;
                            puVar6 = PTR_PTR_1126d3ae0;
                            puStack_538 = puVar12;
                            _objc_alloc_init(PTR_PTR_1126d3ae0);
                            func_0x00010bfc6ca0(puVar3,param_4,puVar6);
                            _objc_retainAutoreleasedReturnValue();
                            puVar4 = PTR_PTR_1126d3ad8;
                            puVar7 = PTR_PTR_1126d3ae0;
                            puStack_530 = puVar3;
                            _objc_alloc_init(PTR_PTR_1126d3ae0);
                            func_0x00010bfc2c00(puVar4,param_4,puVar7);
                            _objc_retainAutoreleasedReturnValue();
                            puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
                            puStack_528 = puVar4;
                            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                &puStack_588,0xd);
                            _objc_retainAutoreleasedReturnValue();
                            puVar9 = puStack_5e8;
                            func_0x00010bf0a0c0(puStack_5e8,param_4,puVar8);
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release(puVar8);
                            _objc_release(puVar4);
                            _objc_release(puVar7);
                            _objc_release(puVar3);
                            _objc_release(puVar6);
                            _objc_release(puVar12);
                            _objc_release(puVar2);
                            _objc_release(puVar5);
                            _objc_release(puVar1);
                            _objc_release(puStack_628);
                            _objc_release(puStack_620);
                            _objc_release(puStack_618);
                            _objc_release(puStack_610);
                            _objc_release(puStack_608);
                            _objc_release(puStack_5f8);
                            _objc_release(puStack_5f0);
                            _objc_release(puStack_5e0);
                            _objc_release(puStack_5d8);
                            _objc_release(puStack_5c8);
                            _objc_release(puStack_5c0);
                            _objc_release(puStack_5b8);
                            _objc_release(puStack_5b0);
                            _objc_release(puStack_5a0);
                            _objc_release(puStack_598);
                            param_3 = puStack_590;
                            _objc_alloc();
                            puVar3 = puVar9;
                            func_0x00010c040a80();
                            _objc_release(puVar9);
                            _objc_release(puStack_600);
                            _objc_release(puStack_5d0);
                            puVar2 = puStack_5a8;
                            _objc_release();
                            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_520) {
                              ___stack_chk_fail();
                              puVar5 = PTR_PTR_1126d3b10;
                              pcStack_638 = FUN_106fa48b0;
                              lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
                              puStack_660 = puVar4;
                              puStack_658 = puVar9;
                              puStack_650 = puVar1;
                              puStack_648 = param_3;
                              ppuStack_640 = &ppuStack_4c0;
                              _objc_retain(puVar3);
                              _objc_alloc_init();
                              func_0x00010c1cafa0();
                              _objc_release(puVar3);
                              _objc_alloc();
                              puVar1 = PTR_PTR_1126d3ad8;
                              func_0x00010c1cafa0(PTR_PTR_1126d3ad8,param_4,puVar5);
                              _objc_retainAutoreleasedReturnValue();
                              puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                              puStack_670 = puVar1;
                              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                  &puStack_670,1);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010c040a80(puVar2,param_4,puVar3);
                              _objc_release(puVar3);
                              _objc_release(puVar1);
                              puVar4 = puVar5;
                              _objc_release();
                              param_3 = puVar2;
                              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_668) {
                                ___stack_chk_fail();
                                pcStack_678 = FUN_106fa49b0;
                                lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                puStack_6a0 = puVar3;
                                puStack_698 = puVar5;
                                puStack_690 = puVar1;
                                puStack_688 = puVar2;
                                ppuStack_680 = &ppuStack_640;
                                _objc_alloc();
                                puVar1 = PTR_PTR_1126d3ad8;
                                puVar2 = PTR_PTR_1126d3ae0;
                                _objc_alloc_init();
                                func_0x00010bfc59a0(puVar1,param_4,puVar2);
                                _objc_retainAutoreleasedReturnValue();
                                puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                puStack_6b0 = puVar1;
                                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                    &puStack_6b0,1);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010c040a80(puVar4,param_4,puVar3);
                                _objc_release(puVar3);
                                _objc_release(puVar1);
                                puVar5 = puVar2;
                                _objc_release();
                                param_3 = puVar4;
                                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6a8) {
                                  ___stack_chk_fail();
                                  pcStack_6b8 = FUN_106fa4a8c;
                                  lStack_6e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                  puStack_6e0 = puVar3;
                                  puStack_6d8 = puVar2;
                                  puStack_6d0 = puVar1;
                                  puStack_6c8 = puVar4;
                                  ppuStack_6c0 = &ppuStack_680;
                                  _objc_alloc();
                                  puVar1 = PTR_PTR_1126d3ad8;
                                  puVar2 = PTR_PTR_1126d3ae0;
                                  _objc_alloc_init();
                                  func_0x00010bf08480(puVar1,param_4,puVar2);
                                  _objc_retainAutoreleasedReturnValue();
                                  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                  puStack_6f0 = puVar1;
                                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                      &puStack_6f0,1);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010c040a80(puVar5,param_4,puVar3);
                                  _objc_release(puVar3);
                                  _objc_release(puVar1);
                                  puVar4 = puVar2;
                                  _objc_release();
                                  param_3 = puVar5;
                                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6e8) {
                                    ___stack_chk_fail();
                                    pcStack_6f8 = FUN_106fa4b68;
                                    lStack_728 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                    puStack_720 = puVar3;
                                    puStack_718 = puVar2;
                                    puStack_710 = puVar1;
                                    puStack_708 = puVar5;
                                    ppuStack_700 = &ppuStack_6c0;
                                    _objc_alloc();
                                    puVar1 = PTR_PTR_1126d3ad8;
                                    puVar2 = PTR_PTR_1126d3ae0;
                                    _objc_alloc_init();
                                    func_0x00010c263e60(puVar1,param_4,puVar2);
                                    _objc_retainAutoreleasedReturnValue();
                                    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                    puStack_730 = puVar1;
                                    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                        &puStack_730,1);
                                    _objc_retainAutoreleasedReturnValue();
                                    func_0x00010c040a80(puVar4,param_4,puVar3);
                                    _objc_release(puVar3);
                                    _objc_release(puVar1);
                                    puVar5 = puVar2;
                                    _objc_release();
                                    param_3 = puVar4;
                                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_728) {
                                      ___stack_chk_fail();
                                      pcStack_738 = FUN_106fa4c44;
                                      lStack_768 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                      puVar12 = PTR_PTR_1126d3b18;
                                      puStack_760 = puVar3;
                                      puStack_758 = puVar2;
                                      puStack_750 = puVar1;
                                      puStack_748 = puVar4;
                                      ppuStack_740 = &ppuStack_700;
                                      _objc_alloc_init();
                                      func_0x00010c18d400();
                                      _objc_alloc();
                                      puVar1 = PTR_PTR_1126d3ad8;
                                      func_0x00010bfb24c0(PTR_PTR_1126d3ad8,param_4,puVar12);
                                      _objc_retainAutoreleasedReturnValue();
                                      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                      puStack_770 = puVar1;
                                      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,
                                                          param_4,&puStack_770,1);
                                      _objc_retainAutoreleasedReturnValue();
                                      func_0x00010c040a80(puVar5,param_4,puVar2);
                                      _objc_release(puVar2);
                                      _objc_release(puVar1);
                                      puVar3 = puVar12;
                                      _objc_release();
                                      param_3 = puVar5;
                                      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_768) {
                                        ___stack_chk_fail();
                                        pcStack_778 = FUN_106fa4d2c;
                                        lStack_7a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                        puStack_7a0 = puVar2;
                                        puStack_798 = puVar1;
                                        puStack_790 = puVar12;
                                        puStack_788 = puVar5;
                                        ppuStack_780 = &ppuStack_740;
                                        _objc_alloc();
                                        puVar1 = PTR_PTR_1126d3ad8;
                                        puVar2 = PTR_PTR_1126d3ae0;
                                        _objc_alloc_init();
                                        func_0x00010bfc2ca0(puVar1,param_4,puVar2);
                                        _objc_retainAutoreleasedReturnValue();
                                        uVar13 = 1;
                                        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                        puStack_7b0 = puVar1;
                                        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,
                                                            param_4,&puStack_7b0,1);
                                        _objc_retainAutoreleasedReturnValue();
                                        puVar5 = puVar4;
                                        func_0x00010c040a80(puVar3,param_4,puVar4);
                                        _objc_release(puVar4);
                                        _objc_release(puVar1);
                                        _objc_release(puVar2);
                                        param_3 = puVar3;
                                        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_7a8)
                                        {
                                          ___stack_chk_fail();
                                          puVar1 = PTR_PTR_1126d3b20;
                                          lStack_808 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                          _objc_retain(uVar13);
                                          _objc_retain(puVar5);
                                          _objc_alloc_init(puVar1);
                                          func_0x00010c212460();
                                          _objc_release(uVar13);
                                          puVar3 = puVar5;
                                          func_0x00010bf6e340(puVar5);
                                          _objc_retainAutoreleasedReturnValue();
                                          _objc_release(puVar5);
                                          func_0x00010c212640(puVar1,param_4,puVar3);
                                          _objc_release(puVar3);
                                          param_1 = param_1 * 1000.0;
                                          if (param_1 <= 0.0) {
                                            param_1 = 0.0;
                                          }
                                          func_0x00010c215680(puVar1,param_4,(int)param_1);
                                          param_2 = param_2 * 1000.0;
                                          if (param_2 <= 0.0) {
                                            param_2 = 0.0;
                                          }
                                          func_0x00010c225ae0(puVar1,param_4,(int)param_2);
                                          _objc_alloc(puVar2);
                                          puVar3 = PTR_PTR_1126d3ad8;
                                          func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar1);
                                          _objc_retainAutoreleasedReturnValue();
                                          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                          puStack_810 = puVar3;
                                          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,
                                                              param_4,&puStack_810,1);
                                          _objc_retainAutoreleasedReturnValue();
                                          func_0x00010c040a80(puVar2,param_4,puVar4);
                                          _objc_release(puVar4);
                                          _objc_release(puVar3);
                                          _objc_release(puVar1);
                                          param_3 = puVar2;
                                          if (*(long *)PTR____stack_chk_guard_11034bdc0 !=
                                              lStack_808) {
                                            ___stack_chk_fail();
                                            return (undefined *)0x0;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 106fa3554; end: 106fa362f; +[SCSpectaclesMalibuRequestMessage turnBluetoothClassicOff] */

undefined *
FUN_106fa3554(double param_1,double param_2,undefined *param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6,long param_7)

{
  undefined *puVar1;
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
  undefined8 uVar13;
  undefined *puStack_7c0;
  long lStack_7b8;
  undefined *puStack_760;
  long lStack_758;
  undefined *puStack_750;
  undefined *puStack_748;
  undefined *puStack_740;
  undefined *puStack_738;
  undefined8 **ppuStack_730;
  code *pcStack_728;
  undefined *puStack_720;
  long lStack_718;
  undefined *puStack_710;
  undefined *puStack_708;
  undefined *puStack_700;
  undefined *puStack_6f8;
  undefined8 **ppuStack_6f0;
  code *pcStack_6e8;
  undefined *puStack_6e0;
  long lStack_6d8;
  undefined *puStack_6d0;
  undefined *puStack_6c8;
  undefined *puStack_6c0;
  undefined *puStack_6b8;
  undefined8 **ppuStack_6b0;
  code *pcStack_6a8;
  undefined *puStack_6a0;
  long lStack_698;
  undefined *puStack_690;
  undefined *puStack_688;
  undefined *puStack_680;
  undefined *puStack_678;
  undefined8 **ppuStack_670;
  code *pcStack_668;
  undefined *puStack_660;
  long lStack_658;
  undefined *puStack_650;
  undefined *puStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined8 **ppuStack_630;
  code *pcStack_628;
  undefined *puStack_620;
  long lStack_618;
  undefined *puStack_610;
  undefined *puStack_608;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined8 **ppuStack_5f0;
  code *pcStack_5e8;
  undefined *puStack_5d8;
  undefined *puStack_5d0;
  undefined *puStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5b0;
  undefined *puStack_5a8;
  undefined *puStack_5a0;
  undefined *puStack_598;
  undefined *puStack_590;
  undefined *puStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined *puStack_550;
  undefined *puStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined *puStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  long lStack_4d0;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined8 **ppuStack_470;
  code *pcStack_468;
  undefined *puStack_460;
  long lStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 **ppuStack_430;
  code *pcStack_428;
  undefined *puStack_420;
  long lStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined8 **ppuStack_3f0;
  code *pcStack_3e8;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  long lStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 **ppuStack_390;
  code *pcStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  long lStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 **ppuStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 **ppuStack_290;
  code *pcStack_288;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined8 **ppuStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 **ppuStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 **ppuStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 **ppuStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  puVar1 = PTR_PTR_1126d3ae0;
  _objc_alloc_init();
  func_0x00010bf1e700(puVar2,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = (undefined *)0x1;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_40);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c040a80(param_3,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106fa3630;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_retain(puVar12);
    _objc_retain(param_7);
    puVar2 = PTR_PTR_1126d3ae8;
    _objc_retain(puVar4);
    _objc_alloc_init();
    func_0x00010c21acc0();
    func_0x00010c208f60(puVar2,param_4,puVar4);
    _objc_release(puVar4);
    if (puVar12 != (undefined *)0x0) {
      func_0x00010c1d96e0(puVar2,param_4,puVar12);
    }
    if (param_7 != 0) {
      func_0x00010c184920(puVar2,param_4,param_7);
    }
    _objc_alloc();
    puVar3 = PTR_PTR_1126d3ad8;
    func_0x00010c2a5540(PTR_PTR_1126d3ad8,param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = 1;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_90,1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c040a80(puVar1,param_4,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_7);
    puVar3 = puVar12;
    _objc_release();
    param_3 = puVar1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      puVar4 = PTR_PTR_1126d3ae8;
      pcStack_98 = FUN_106fa378c;
      lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_c0 = puVar1;
      puStack_b8 = puVar2;
      lStack_b0 = param_7;
      puStack_a8 = puVar12;
      ppuStack_a0 = &puStack_50;
      _objc_retain(uVar13);
      _objc_retain(puVar5);
      _objc_alloc_init();
      func_0x00010c21acc0();
      func_0x00010c208f60(puVar4,param_4,puVar5);
      _objc_release(puVar5);
      func_0x00010c1d96e0(puVar4,param_4,uVar13);
      _objc_release(uVar13);
      _objc_alloc();
      puVar2 = PTR_PTR_1126d3ad8;
      func_0x00010c2a5540(PTR_PTR_1126d3ad8,param_4,puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_d0 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_d0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040a80(puVar3,param_4,puVar1);
      _objc_release(puVar1);
      _objc_release(puVar2);
      puVar12 = puVar4;
      _objc_release();
      param_3 = puVar3;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
        ___stack_chk_fail();
        pcStack_d8 = FUN_106fa38b8;
        lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_100 = puVar1;
        puStack_f8 = puVar2;
        puStack_f0 = puVar3;
        puStack_e8 = puVar4;
        ppuStack_e0 = &ppuStack_a0;
        _objc_alloc();
        puVar2 = PTR_PTR_1126d3ad8;
        puVar1 = PTR_PTR_1126d3ae0;
        _objc_alloc_init();
        func_0x00010c2a5600(puVar2,param_4,puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_110 = puVar2;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_110,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c040a80(puVar12,param_4,puVar3);
        _objc_release(puVar3);
        _objc_release(puVar2);
        puVar4 = puVar1;
        _objc_release();
        param_3 = puVar12;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
          ___stack_chk_fail();
          pcStack_118 = FUN_106fa3994;
          lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puStack_140 = puVar3;
          puStack_138 = puVar1;
          puStack_130 = puVar2;
          puStack_128 = puVar12;
          ppuStack_120 = &ppuStack_e0;
          _objc_alloc();
          puVar2 = PTR_PTR_1126d3ad8;
          puVar1 = PTR_PTR_1126d3ae0;
          _objc_alloc_init();
          func_0x00010bfa44e0(puVar2,param_4,puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_150 = puVar2;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_150,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c040a80(puVar4,param_4,puVar3);
          _objc_release(puVar3);
          _objc_release(puVar2);
          puVar12 = puVar1;
          _objc_release();
          param_3 = puVar4;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
            ___stack_chk_fail();
            pcStack_158 = FUN_106fa3a70;
            lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puStack_180 = puVar3;
            puStack_178 = puVar1;
            puStack_170 = puVar2;
            puStack_168 = puVar4;
            ppuStack_160 = &ppuStack_120;
            _objc_alloc();
            puVar2 = PTR_PTR_1126d3ad8;
            puVar1 = PTR_PTR_1126d3ae0;
            _objc_alloc_init();
            func_0x00010bfcfee0(puVar2,param_4,puVar1);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_190 = puVar2;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_190,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c040a80(puVar12,param_4,puVar3);
            _objc_release(puVar3);
            _objc_release(puVar2);
            _objc_release();
            param_3 = puVar12;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
              ___stack_chk_fail();
              pcStack_198 = FUN_106fa3b4c;
              lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
              puVar3 = PTR_PTR_1126d3af0;
              ppuStack_1a0 = &ppuStack_160;
              _objc_alloc_init();
              puStack_260 = puVar3;
              func_0x00010c1ec220();
              _objc_alloc();
              puVar2 = PTR_PTR_1126d3ad8;
              puVar4 = PTR_PTR_1126d3af8;
              puStack_278 = puVar1;
              _objc_alloc_init();
              puStack_240 = puVar4;
              func_0x00010bfca120(puVar2,param_4,puVar4);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR_PTR_1126d3ad8;
              puVar4 = PTR_PTR_1126d3ae0;
              puStack_248 = puVar2;
              puStack_238 = puVar2;
              _objc_alloc_init();
              puStack_250 = puVar4;
              func_0x00010bf1e960(puVar1,param_4,puVar4);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR_PTR_1126d3ad8;
              puVar4 = PTR_PTR_1126d3ae0;
              puStack_258 = puVar1;
              puStack_230 = puVar1;
              _objc_alloc_init();
              puStack_268 = puVar4;
              func_0x00010bfccc40(puVar2,param_4,puVar4);
              _objc_retainAutoreleasedReturnValue();
              puVar12 = PTR_PTR_1126d3ad8;
              puStack_270 = puVar2;
              puStack_228 = puVar2;
              func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR_PTR_1126d3ad8;
              puVar5 = PTR_PTR_1126d3ae0;
              puStack_220 = puVar12;
              _objc_alloc_init();
              func_0x00010bf35ae0(puVar2,param_4,puVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR_PTR_1126d3ad8;
              puVar6 = PTR_PTR_1126d3ae0;
              puStack_218 = puVar2;
              _objc_alloc_init();
              func_0x00010bf21ee0(puVar1,param_4,puVar6);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR_PTR_1126d3ad8;
              puVar7 = PTR_PTR_1126d3ae0;
              puStack_210 = puVar1;
              _objc_alloc_init();
              func_0x00010bfc7660(puVar3,param_4,puVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR_PTR_1126d3ad8;
              puVar8 = PTR_PTR_1126d3ae0;
              puStack_208 = puVar3;
              _objc_alloc_init();
              func_0x00010bfc5d20(puVar4,param_4,puVar8);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_200 = puVar4;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_238,8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c040a80(puStack_278,param_4,puVar9);
              _objc_release(puVar9);
              _objc_release(puVar4);
              _objc_release(puVar8);
              _objc_release(puVar3);
              _objc_release(puVar7);
              _objc_release(puVar1);
              _objc_release(puVar6);
              _objc_release(puVar2);
              _objc_release(puVar5);
              _objc_release(puVar12);
              _objc_release(puStack_270);
              _objc_release(puStack_268);
              _objc_release(puStack_258);
              _objc_release(puStack_250);
              _objc_release(puStack_248);
              _objc_release(puStack_240);
              puVar10 = puStack_260;
              _objc_release();
              param_3 = puStack_278;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
                ___stack_chk_fail();
                pcStack_288 = FUN_106fa3dfc;
                lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                puStack_2b0 = puVar1;
                puStack_2a8 = puVar9;
                puStack_2a0 = puVar6;
                puStack_298 = puVar3;
                ppuStack_290 = &ppuStack_1a0;
                _objc_alloc();
                puVar1 = PTR_PTR_1126d3ad8;
                puVar3 = PTR_PTR_1126d3af8;
                _objc_alloc_init();
                func_0x00010bfca120(puVar1,param_4,puVar3);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_2c0 = puVar1;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_2c0,1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c040a80(puVar10,param_4,puVar6);
                _objc_release(puVar6);
                _objc_release(puVar1);
                puVar9 = puVar3;
                _objc_release();
                param_3 = puVar10;
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b8) {
                  ___stack_chk_fail();
                  pcStack_2c8 = FUN_106fa3ed8;
                  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  puVar11 = PTR_PTR_1126d3af0;
                  puStack_320 = puVar5;
                  puStack_318 = puVar12;
                  puStack_310 = puVar2;
                  puStack_308 = puVar4;
                  puStack_300 = puVar8;
                  puStack_2f8 = puVar7;
                  puStack_2f0 = puVar6;
                  puStack_2e8 = puVar3;
                  puStack_2e0 = puVar1;
                  puStack_2d8 = puVar10;
                  ppuStack_2d0 = &ppuStack_290;
                  _objc_alloc_init();
                  puStack_360 = puVar11;
                  func_0x00010c1ec220();
                  _objc_alloc();
                  puVar1 = PTR_PTR_1126d3ad8;
                  puStack_380 = puVar9;
                  func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar11);
                  _objc_retainAutoreleasedReturnValue();
                  puVar2 = PTR_PTR_1126d3ad8;
                  puVar3 = PTR_PTR_1126d3ae0;
                  puStack_368 = puVar1;
                  puStack_358 = puVar1;
                  _objc_alloc_init();
                  puStack_370 = puVar3;
                  func_0x00010bf35ae0(puVar2,param_4,puVar3);
                  _objc_retainAutoreleasedReturnValue();
                  puVar1 = PTR_PTR_1126d3ad8;
                  puVar12 = PTR_PTR_1126d3ae0;
                  puStack_378 = puVar2;
                  puStack_350 = puVar2;
                  _objc_alloc_init();
                  func_0x00010bfcb140(puVar1,param_4,puVar12);
                  _objc_retainAutoreleasedReturnValue();
                  puVar2 = PTR_PTR_1126d3ad8;
                  puVar5 = PTR_PTR_1126d3ae0;
                  puStack_348 = puVar1;
                  _objc_alloc_init();
                  func_0x00010bfc35a0(puVar2,param_4,puVar5);
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = PTR_PTR_1126d3ad8;
                  puVar6 = PTR_PTR_1126d3ae0;
                  puStack_340 = puVar2;
                  _objc_alloc_init();
                  func_0x00010bfc7660(puVar3,param_4,puVar6);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = PTR_PTR_1126d3ad8;
                  puVar7 = PTR_PTR_1126d3ae0;
                  puStack_338 = puVar3;
                  _objc_alloc_init();
                  func_0x00010bfc2c00(puVar4,param_4,puVar7);
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
                  puStack_330 = puVar4;
                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_358,6);
                  _objc_retainAutoreleasedReturnValue();
                  param_3 = puStack_380;
                  func_0x00010c040a80(puStack_380,param_4,puVar8);
                  _objc_release(puVar8);
                  _objc_release(puVar4);
                  _objc_release(puVar7);
                  _objc_release(puVar3);
                  _objc_release(puVar6);
                  _objc_release(puVar2);
                  _objc_release(puVar5);
                  _objc_release(puVar1);
                  _objc_release(puVar12);
                  _objc_release(puStack_378);
                  _objc_release(puStack_370);
                  _objc_release(puStack_368);
                  puVar9 = puStack_360;
                  _objc_release();
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_328) {
                    ___stack_chk_fail();
                    pcStack_388 = FUN_106fa410c;
                    lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                    puVar10 = PTR_PTR_1126d3af0;
                    puStack_3c0 = param_3;
                    puStack_3b8 = puVar12;
                    puStack_3b0 = puVar4;
                    puStack_3a8 = puVar7;
                    puStack_3a0 = puVar6;
                    puStack_398 = puVar8;
                    ppuStack_390 = &ppuStack_2d0;
                    _objc_alloc_init();
                    func_0x00010c1ec220();
                    _objc_alloc();
                    puVar12 = PTR_PTR_1126d3ad8;
                    func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar10);
                    _objc_retainAutoreleasedReturnValue();
                    puVar4 = PTR_PTR_1126d3ad8;
                    puVar6 = PTR_PTR_1126d3ae0;
                    puStack_3d8 = puVar12;
                    _objc_alloc_init();
                    func_0x00010bf35ae0(puVar4,param_4,puVar6);
                    _objc_retainAutoreleasedReturnValue();
                    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
                    puStack_3d0 = puVar4;
                    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_3d8,2);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c040a80(puVar9,param_4,puVar7);
                    _objc_release(puVar7);
                    _objc_release(puVar4);
                    _objc_release(puVar6);
                    _objc_release(puVar12);
                    puVar8 = puVar10;
                    _objc_release();
                    param_3 = puVar9;
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c8) {
                      ___stack_chk_fail();
                      pcStack_3e8 = FUN_106fa423c;
                      lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
                      puVar11 = PTR_PTR_1126d3af0;
                      puStack_410 = puVar4;
                      puStack_408 = puVar12;
                      puStack_400 = puVar9;
                      puStack_3f8 = puVar10;
                      ppuStack_3f0 = &ppuStack_390;
                      _objc_alloc_init();
                      func_0x00010c1ec220();
                      func_0x00010c189920(puVar11,param_4,1);
                      func_0x00010c2027c0(puVar11,param_4,1);
                      _objc_alloc();
                      puVar4 = PTR_PTR_1126d3ad8;
                      func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar11);
                      _objc_retainAutoreleasedReturnValue();
                      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
                      puStack_420 = puVar4;
                      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_420,1
                                         );
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c040a80(puVar8,param_4,puVar12);
                      _objc_release(puVar12);
                      _objc_release(puVar4);
                      puVar9 = puVar11;
                      _objc_release();
                      param_3 = puVar8;
                      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_418) {
                        ___stack_chk_fail();
                        pcStack_428 = FUN_106fa433c;
                        lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
                        puVar10 = PTR_PTR_1126d3af0;
                        puStack_450 = puVar12;
                        puStack_448 = puVar4;
                        puStack_440 = puVar8;
                        puStack_438 = puVar11;
                        ppuStack_430 = &ppuStack_3f0;
                        _objc_alloc_init();
                        func_0x00010c1ec220();
                        func_0x00010c189920(puVar10,param_4,1);
                        func_0x00010c2027c0(puVar10,param_4,2);
                        _objc_alloc();
                        puVar4 = PTR_PTR_1126d3ad8;
                        func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar10);
                        _objc_retainAutoreleasedReturnValue();
                        puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
                        puStack_460 = puVar4;
                        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_460
                                            ,1);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c040a80(puVar9,param_4,puVar12);
                        _objc_release(puVar12);
                        _objc_release(puVar4);
                        puVar8 = puVar10;
                        _objc_release();
                        param_3 = puVar9;
                        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_458) {
                          ___stack_chk_fail();
                          pcStack_468 = FUN_106fa443c;
                          lStack_4d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
                          puVar11 = PTR_PTR_1126d3af0;
                          puStack_540 = puVar8;
                          puStack_4c0 = puVar3;
                          puStack_4b8 = puVar2;
                          puStack_4b0 = puVar5;
                          puStack_4a8 = puVar1;
                          puStack_4a0 = puVar7;
                          puStack_498 = puVar6;
                          puStack_490 = puVar12;
                          puStack_488 = puVar4;
                          puStack_480 = puVar9;
                          puStack_478 = puVar10;
                          ppuStack_470 = &ppuStack_430;
                          _objc_alloc_init();
                          puStack_558 = puVar11;
                          func_0x00010c1ec220();
                          puVar3 = PTR_PTR_1126d3b00;
                          _objc_alloc_init();
                          puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
                          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c26f320();
                          func_0x00010c2156a0(puVar3,param_4,(long)param_1);
                          _objc_release(puVar2);
                          puVar2 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
                          func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
                          _objc_retainAutoreleasedReturnValue();
                          puVar1 = puVar2;
                          func_0x00010c1552e0();
                          puStack_580 = puVar3;
                          func_0x00010c215860(puVar3,param_4,puVar1);
                          _objc_release(puVar2);
                          puVar4 = PTR_PTR_1126d3b08;
                          _objc_alloc_init();
                          puStack_5b0 = puVar4;
                          func_0x00010c173020();
                          puVar2 = PTR_PTR_1126d3ad8;
                          puStack_598 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                          puVar1 = PTR_PTR_1126d3af8;
                          _objc_alloc_init();
                          puStack_548 = puVar1;
                          func_0x00010bfca120(puVar2,param_4,puVar1);
                          _objc_retainAutoreleasedReturnValue();
                          puVar1 = PTR_PTR_1126d3ad8;
                          puVar12 = PTR_PTR_1126d3ae0;
                          puStack_550 = puVar2;
                          puStack_538 = puVar2;
                          _objc_alloc_init();
                          puStack_560 = puVar12;
                          func_0x00010bfc5d20(puVar1,param_4,puVar12);
                          _objc_retainAutoreleasedReturnValue();
                          puVar2 = PTR_PTR_1126d3ad8;
                          puVar12 = PTR_PTR_1126d3ae0;
                          puStack_568 = puVar1;
                          puStack_530 = puVar1;
                          _objc_alloc_init();
                          puStack_570 = puVar12;
                          func_0x00010bfccc40(puVar2,param_4,puVar12);
                          _objc_retainAutoreleasedReturnValue();
                          puVar1 = PTR_PTR_1126d3ad8;
                          puStack_578 = puVar2;
                          puStack_528 = puVar2;
                          func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar11);
                          _objc_retainAutoreleasedReturnValue();
                          puVar2 = PTR_PTR_1126d3ad8;
                          puVar12 = PTR_PTR_1126d3ae0;
                          puStack_588 = puVar1;
                          puStack_520 = puVar1;
                          _objc_alloc_init();
                          puStack_590 = puVar12;
                          func_0x00010bf35ae0(puVar2,param_4,puVar12);
                          _objc_retainAutoreleasedReturnValue();
                          puVar1 = PTR_PTR_1126d3ad8;
                          puVar12 = PTR_PTR_1126d3ae0;
                          puStack_5a0 = puVar2;
                          puStack_518 = puVar2;
                          _objc_alloc_init();
                          puStack_5a8 = puVar12;
                          func_0x00010bfcb140(puVar1,param_4,puVar12);
                          _objc_retainAutoreleasedReturnValue();
                          puVar2 = PTR_PTR_1126d3ad8;
                          puVar12 = PTR_PTR_1126d3ae0;
                          puStack_5b8 = puVar1;
                          puStack_510 = puVar1;
                          _objc_alloc_init();
                          puStack_5c0 = puVar12;
                          func_0x00010bfc35a0(puVar2,param_4,puVar12);
                          _objc_retainAutoreleasedReturnValue();
                          puVar1 = PTR_PTR_1126d3ad8;
                          puStack_5c8 = puVar2;
                          puStack_508 = puVar2;
                          func_0x00010c214bc0(PTR_PTR_1126d3ad8,param_4,puVar3);
                          _objc_retainAutoreleasedReturnValue();
                          puVar2 = PTR_PTR_1126d3ad8;
                          puVar3 = PTR_PTR_1126d3ae0;
                          puStack_5d0 = puVar1;
                          puStack_500 = puVar1;
                          _objc_alloc_init();
                          puStack_5d8 = puVar3;
                          func_0x00010bfc7660(puVar2,param_4,puVar3);
                          _objc_retainAutoreleasedReturnValue();
                          puVar1 = PTR_PTR_1126d3ad8;
                          puVar12 = PTR_PTR_1126d3ae0;
                          puStack_4f8 = puVar2;
                          _objc_alloc_init(PTR_PTR_1126d3ae0);
                          func_0x00010bf1e960(puVar1,param_4,puVar12);
                          _objc_retainAutoreleasedReturnValue();
                          puVar5 = PTR_PTR_1126d3ad8;
                          puStack_4f0 = puVar1;
                          func_0x00010bf906c0(PTR_PTR_1126d3ad8,param_4,puVar4);
                          _objc_retainAutoreleasedReturnValue();
                          puVar3 = PTR_PTR_1126d3ad8;
                          puVar6 = PTR_PTR_1126d3ae0;
                          puStack_4e8 = puVar5;
                          _objc_alloc_init(PTR_PTR_1126d3ae0);
                          func_0x00010bfc6ca0(puVar3,param_4,puVar6);
                          _objc_retainAutoreleasedReturnValue();
                          puVar4 = PTR_PTR_1126d3ad8;
                          puVar7 = PTR_PTR_1126d3ae0;
                          puStack_4e0 = puVar3;
                          _objc_alloc_init(PTR_PTR_1126d3ae0);
                          func_0x00010bfc2c00(puVar4,param_4,puVar7);
                          _objc_retainAutoreleasedReturnValue();
                          puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
                          puStack_4d8 = puVar4;
                          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                              &puStack_538,0xd);
                          _objc_retainAutoreleasedReturnValue();
                          puVar9 = puStack_598;
                          func_0x00010bf0a0c0(puStack_598,param_4,puVar8);
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar8);
                          _objc_release(puVar4);
                          _objc_release(puVar7);
                          _objc_release(puVar3);
                          _objc_release(puVar6);
                          _objc_release(puVar5);
                          _objc_release(puVar1);
                          _objc_release(puVar12);
                          _objc_release(puVar2);
                          _objc_release(puStack_5d8);
                          _objc_release(puStack_5d0);
                          _objc_release(puStack_5c8);
                          _objc_release(puStack_5c0);
                          _objc_release(puStack_5b8);
                          _objc_release(puStack_5a8);
                          _objc_release(puStack_5a0);
                          _objc_release(puStack_590);
                          _objc_release(puStack_588);
                          _objc_release(puStack_578);
                          _objc_release(puStack_570);
                          _objc_release(puStack_568);
                          _objc_release(puStack_560);
                          _objc_release(puStack_550);
                          _objc_release(puStack_548);
                          param_3 = puStack_540;
                          _objc_alloc();
                          puVar3 = puVar9;
                          func_0x00010c040a80();
                          _objc_release(puVar9);
                          _objc_release(puStack_5b0);
                          _objc_release(puStack_580);
                          puVar1 = puStack_558;
                          _objc_release();
                          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4d0) {
                            ___stack_chk_fail();
                            puVar12 = PTR_PTR_1126d3b10;
                            pcStack_5e8 = FUN_106fa48b0;
                            lStack_618 = *(long *)PTR____stack_chk_guard_11034bdc0;
                            puStack_610 = puVar4;
                            puStack_608 = puVar9;
                            puStack_600 = puVar2;
                            puStack_5f8 = param_3;
                            ppuStack_5f0 = &ppuStack_470;
                            _objc_retain(puVar3);
                            _objc_alloc_init();
                            func_0x00010c1cafa0();
                            _objc_release(puVar3);
                            _objc_alloc();
                            puVar2 = PTR_PTR_1126d3ad8;
                            func_0x00010c1cafa0(PTR_PTR_1126d3ad8,param_4,puVar12);
                            _objc_retainAutoreleasedReturnValue();
                            puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                            puStack_620 = puVar2;
                            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                &puStack_620,1);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c040a80(puVar1,param_4,puVar3);
                            _objc_release(puVar3);
                            _objc_release(puVar2);
                            puVar4 = puVar12;
                            _objc_release();
                            param_3 = puVar1;
                            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_618) {
                              ___stack_chk_fail();
                              pcStack_628 = FUN_106fa49b0;
                              lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
                              puStack_650 = puVar3;
                              puStack_648 = puVar12;
                              puStack_640 = puVar2;
                              puStack_638 = puVar1;
                              ppuStack_630 = &ppuStack_5f0;
                              _objc_alloc();
                              puVar2 = PTR_PTR_1126d3ad8;
                              puVar1 = PTR_PTR_1126d3ae0;
                              _objc_alloc_init();
                              func_0x00010bfc59a0(puVar2,param_4,puVar1);
                              _objc_retainAutoreleasedReturnValue();
                              puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                              puStack_660 = puVar2;
                              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                  &puStack_660,1);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010c040a80(puVar4,param_4,puVar3);
                              _objc_release(puVar3);
                              _objc_release(puVar2);
                              puVar12 = puVar1;
                              _objc_release();
                              param_3 = puVar4;
                              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_658) {
                                ___stack_chk_fail();
                                pcStack_668 = FUN_106fa4a8c;
                                lStack_698 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                puStack_690 = puVar3;
                                puStack_688 = puVar1;
                                puStack_680 = puVar2;
                                puStack_678 = puVar4;
                                ppuStack_670 = &ppuStack_630;
                                _objc_alloc();
                                puVar2 = PTR_PTR_1126d3ad8;
                                puVar1 = PTR_PTR_1126d3ae0;
                                _objc_alloc_init();
                                func_0x00010bf08480(puVar2,param_4,puVar1);
                                _objc_retainAutoreleasedReturnValue();
                                puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                puStack_6a0 = puVar2;
                                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                    &puStack_6a0,1);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010c040a80(puVar12,param_4,puVar3);
                                _objc_release(puVar3);
                                _objc_release(puVar2);
                                puVar4 = puVar1;
                                _objc_release();
                                param_3 = puVar12;
                                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_698) {
                                  ___stack_chk_fail();
                                  pcStack_6a8 = FUN_106fa4b68;
                                  lStack_6d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                  puStack_6d0 = puVar3;
                                  puStack_6c8 = puVar1;
                                  puStack_6c0 = puVar2;
                                  puStack_6b8 = puVar12;
                                  ppuStack_6b0 = &ppuStack_670;
                                  _objc_alloc();
                                  puVar2 = PTR_PTR_1126d3ad8;
                                  puVar1 = PTR_PTR_1126d3ae0;
                                  _objc_alloc_init();
                                  func_0x00010c263e60(puVar2,param_4,puVar1);
                                  _objc_retainAutoreleasedReturnValue();
                                  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                  puStack_6e0 = puVar2;
                                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                      &puStack_6e0,1);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010c040a80(puVar4,param_4,puVar3);
                                  _objc_release(puVar3);
                                  _objc_release(puVar2);
                                  puVar12 = puVar1;
                                  _objc_release();
                                  param_3 = puVar4;
                                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6d8) {
                                    ___stack_chk_fail();
                                    pcStack_6e8 = FUN_106fa4c44;
                                    lStack_718 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                    puVar5 = PTR_PTR_1126d3b18;
                                    puStack_710 = puVar3;
                                    puStack_708 = puVar1;
                                    puStack_700 = puVar2;
                                    puStack_6f8 = puVar4;
                                    ppuStack_6f0 = &ppuStack_6b0;
                                    _objc_alloc_init();
                                    func_0x00010c18d400();
                                    _objc_alloc();
                                    puVar2 = PTR_PTR_1126d3ad8;
                                    func_0x00010bfb24c0(PTR_PTR_1126d3ad8,param_4,puVar5);
                                    _objc_retainAutoreleasedReturnValue();
                                    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                    puStack_720 = puVar2;
                                    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                        &puStack_720,1);
                                    _objc_retainAutoreleasedReturnValue();
                                    func_0x00010c040a80(puVar12,param_4,puVar1);
                                    _objc_release(puVar1);
                                    _objc_release(puVar2);
                                    puVar3 = puVar5;
                                    _objc_release();
                                    param_3 = puVar12;
                                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_718) {
                                      ___stack_chk_fail();
                                      pcStack_728 = FUN_106fa4d2c;
                                      lStack_758 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                      puStack_750 = puVar1;
                                      puStack_748 = puVar2;
                                      puStack_740 = puVar5;
                                      puStack_738 = puVar12;
                                      ppuStack_730 = &ppuStack_6f0;
                                      _objc_alloc();
                                      puVar2 = PTR_PTR_1126d3ad8;
                                      puVar1 = PTR_PTR_1126d3ae0;
                                      _objc_alloc_init();
                                      func_0x00010bfc2ca0(puVar2,param_4,puVar1);
                                      _objc_retainAutoreleasedReturnValue();
                                      uVar13 = 1;
                                      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                      puStack_760 = puVar2;
                                      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,
                                                          param_4,&puStack_760,1);
                                      _objc_retainAutoreleasedReturnValue();
                                      puVar12 = puVar4;
                                      func_0x00010c040a80(puVar3,param_4,puVar4);
                                      _objc_release(puVar4);
                                      _objc_release(puVar2);
                                      _objc_release(puVar1);
                                      param_3 = puVar3;
                                      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_758) {
                                        ___stack_chk_fail();
                                        puVar2 = PTR_PTR_1126d3b20;
                                        lStack_7b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                        _objc_retain(uVar13);
                                        _objc_retain(puVar12);
                                        _objc_alloc_init(puVar2);
                                        func_0x00010c212460();
                                        _objc_release(uVar13);
                                        puVar3 = puVar12;
                                        func_0x00010bf6e340(puVar12);
                                        _objc_retainAutoreleasedReturnValue();
                                        _objc_release(puVar12);
                                        func_0x00010c212640(puVar2,param_4,puVar3);
                                        _objc_release(puVar3);
                                        param_1 = param_1 * 1000.0;
                                        if (param_1 <= 0.0) {
                                          param_1 = 0.0;
                                        }
                                        func_0x00010c215680(puVar2,param_4,(int)param_1);
                                        param_2 = param_2 * 1000.0;
                                        if (param_2 <= 0.0) {
                                          param_2 = 0.0;
                                        }
                                        func_0x00010c225ae0(puVar2,param_4,(int)param_2);
                                        _objc_alloc(puVar1);
                                        puVar3 = PTR_PTR_1126d3ad8;
                                        func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar2);
                                        _objc_retainAutoreleasedReturnValue();
                                        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                        puStack_7c0 = puVar3;
                                        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,
                                                            param_4,&puStack_7c0,1);
                                        _objc_retainAutoreleasedReturnValue();
                                        func_0x00010c040a80(puVar1,param_4,puVar4);
                                        _objc_release(puVar4);
                                        _objc_release(puVar3);
                                        _objc_release(puVar2);
                                        param_3 = puVar1;
                                        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_7b8)
                                        {
                                          ___stack_chk_fail();
                                          return (undefined *)0x0;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 106fa3630; end: 106fa378b; +[SCSpectaclesMalibuRequestMessage turnWiFiOn:ssidPassword:countryCode:] */

undefined *
FUN_106fa3630(double param_1,double param_2,undefined *param_3,undefined8 param_4,undefined8 param_5
             ,undefined *param_6,long param_7)

{
  undefined *puVar1;
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
  undefined8 uVar13;
  undefined *puStack_780;
  long lStack_778;
  undefined *puStack_720;
  long lStack_718;
  undefined *puStack_710;
  undefined *puStack_708;
  undefined *puStack_700;
  undefined *puStack_6f8;
  undefined8 **ppuStack_6f0;
  code *pcStack_6e8;
  undefined *puStack_6e0;
  long lStack_6d8;
  undefined *puStack_6d0;
  undefined *puStack_6c8;
  undefined *puStack_6c0;
  undefined *puStack_6b8;
  undefined8 **ppuStack_6b0;
  code *pcStack_6a8;
  undefined *puStack_6a0;
  long lStack_698;
  undefined *puStack_690;
  undefined *puStack_688;
  undefined *puStack_680;
  undefined *puStack_678;
  undefined8 **ppuStack_670;
  code *pcStack_668;
  undefined *puStack_660;
  long lStack_658;
  undefined *puStack_650;
  undefined *puStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined8 **ppuStack_630;
  code *pcStack_628;
  undefined *puStack_620;
  long lStack_618;
  undefined *puStack_610;
  undefined *puStack_608;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined8 **ppuStack_5f0;
  code *pcStack_5e8;
  undefined *puStack_5e0;
  long lStack_5d8;
  undefined *puStack_5d0;
  undefined *puStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined8 **ppuStack_5b0;
  code *pcStack_5a8;
  undefined *puStack_598;
  undefined *puStack_590;
  undefined *puStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined *puStack_550;
  undefined *puStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined *puStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined *puStack_4d0;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  long lStack_490;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 **ppuStack_430;
  code *pcStack_428;
  undefined *puStack_420;
  long lStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined8 **ppuStack_3f0;
  code *pcStack_3e8;
  undefined *puStack_3e0;
  long lStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 **ppuStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_398;
  undefined *puStack_390;
  long lStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 **ppuStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  long lStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 **ppuStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 **ppuStack_250;
  code *pcStack_248;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined8 **ppuStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 **ppuStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 **ppuStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126d3ae8;
  _objc_retain(param_5);
  _objc_alloc_init();
  func_0x00010c21acc0();
  func_0x00010c208f60(puVar1,param_4,param_5);
  _objc_release(param_5);
  if (param_6 != (undefined *)0x0) {
    func_0x00010c1d96e0(puVar1,param_4,param_6);
  }
  if (param_7 != 0) {
    func_0x00010c184920(puVar1,param_4,param_7);
  }
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  func_0x00010c2a5540(PTR_PTR_1126d3ad8,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 1;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c040a80(param_3,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  puVar2 = param_6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar3 = PTR_PTR_1126d3ae8;
    pcStack_58 = FUN_106fa378c;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_80 = param_3;
    puStack_78 = puVar1;
    lStack_70 = param_7;
    puStack_68 = param_6;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_retain(uVar13);
    _objc_retain(puVar4);
    _objc_alloc_init();
    func_0x00010c21acc0();
    func_0x00010c208f60(puVar3,param_4,puVar4);
    _objc_release(puVar4);
    func_0x00010c1d96e0(puVar3,param_4,uVar13);
    _objc_release(uVar13);
    _objc_alloc();
    puVar1 = PTR_PTR_1126d3ad8;
    func_0x00010c2a5540(PTR_PTR_1126d3ad8,param_4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_90,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar2,param_4,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar1);
    puVar5 = puVar3;
    _objc_release();
    param_3 = puVar2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      pcStack_98 = FUN_106fa38b8;
      lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_c0 = puVar4;
      puStack_b8 = puVar1;
      puStack_b0 = puVar2;
      puStack_a8 = puVar3;
      ppuStack_a0 = &puStack_60;
      _objc_alloc();
      puVar1 = PTR_PTR_1126d3ad8;
      puVar2 = PTR_PTR_1126d3ae0;
      _objc_alloc_init();
      func_0x00010c2a5600(puVar1,param_4,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_d0 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_d0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040a80(puVar5,param_4,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar1);
      puVar4 = puVar2;
      _objc_release();
      param_3 = puVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
        ___stack_chk_fail();
        pcStack_d8 = FUN_106fa3994;
        lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_100 = puVar3;
        puStack_f8 = puVar2;
        puStack_f0 = puVar1;
        puStack_e8 = puVar5;
        ppuStack_e0 = &ppuStack_a0;
        _objc_alloc();
        puVar1 = PTR_PTR_1126d3ad8;
        puVar2 = PTR_PTR_1126d3ae0;
        _objc_alloc_init();
        func_0x00010bfa44e0(puVar1,param_4,puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_110 = puVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_110,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c040a80(puVar4,param_4,puVar3);
        _objc_release(puVar3);
        _objc_release(puVar1);
        puVar5 = puVar2;
        _objc_release();
        param_3 = puVar4;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
          ___stack_chk_fail();
          pcStack_118 = FUN_106fa3a70;
          lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puStack_140 = puVar3;
          puStack_138 = puVar2;
          puStack_130 = puVar1;
          puStack_128 = puVar4;
          ppuStack_120 = &ppuStack_e0;
          _objc_alloc();
          puVar1 = PTR_PTR_1126d3ad8;
          puVar2 = PTR_PTR_1126d3ae0;
          _objc_alloc_init();
          func_0x00010bfcfee0(puVar1,param_4,puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_150 = puVar1;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_150,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c040a80(puVar5,param_4,puVar3);
          _objc_release(puVar3);
          _objc_release(puVar1);
          _objc_release();
          param_3 = puVar5;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
            ___stack_chk_fail();
            pcStack_158 = FUN_106fa3b4c;
            lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puVar3 = PTR_PTR_1126d3af0;
            ppuStack_160 = &ppuStack_120;
            _objc_alloc_init();
            puStack_220 = puVar3;
            func_0x00010c1ec220();
            _objc_alloc();
            puVar1 = PTR_PTR_1126d3ad8;
            puVar4 = PTR_PTR_1126d3af8;
            puStack_238 = puVar2;
            _objc_alloc_init();
            puStack_200 = puVar4;
            func_0x00010bfca120(puVar1,param_4,puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR_PTR_1126d3ad8;
            puVar4 = PTR_PTR_1126d3ae0;
            puStack_208 = puVar1;
            puStack_1f8 = puVar1;
            _objc_alloc_init();
            puStack_210 = puVar4;
            func_0x00010bf1e960(puVar2,param_4,puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_PTR_1126d3ad8;
            puVar4 = PTR_PTR_1126d3ae0;
            puStack_218 = puVar2;
            puStack_1f0 = puVar2;
            _objc_alloc_init();
            puStack_228 = puVar4;
            func_0x00010bfccc40(puVar1,param_4,puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR_PTR_1126d3ad8;
            puStack_230 = puVar1;
            puStack_1e8 = puVar1;
            func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_PTR_1126d3ad8;
            puVar6 = PTR_PTR_1126d3ae0;
            puStack_1e0 = puVar5;
            _objc_alloc_init();
            func_0x00010bf35ae0(puVar1,param_4,puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR_PTR_1126d3ad8;
            puVar7 = PTR_PTR_1126d3ae0;
            puStack_1d8 = puVar1;
            _objc_alloc_init();
            func_0x00010bf21ee0(puVar2,param_4,puVar7);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR_PTR_1126d3ad8;
            puVar8 = PTR_PTR_1126d3ae0;
            puStack_1d0 = puVar2;
            _objc_alloc_init();
            func_0x00010bfc7660(puVar3,param_4,puVar8);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR_PTR_1126d3ad8;
            puVar9 = PTR_PTR_1126d3ae0;
            puStack_1c8 = puVar3;
            _objc_alloc_init();
            func_0x00010bfc5d20(puVar4,param_4,puVar9);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_1c0 = puVar4;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_1f8,8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c040a80(puStack_238,param_4,puVar10);
            _objc_release(puVar10);
            _objc_release(puVar4);
            _objc_release(puVar9);
            _objc_release(puVar3);
            _objc_release(puVar8);
            _objc_release(puVar2);
            _objc_release(puVar7);
            _objc_release(puVar1);
            _objc_release(puVar6);
            _objc_release(puVar5);
            _objc_release(puStack_230);
            _objc_release(puStack_228);
            _objc_release(puStack_218);
            _objc_release(puStack_210);
            _objc_release(puStack_208);
            _objc_release(puStack_200);
            puVar11 = puStack_220;
            _objc_release();
            param_3 = puStack_238;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
              ___stack_chk_fail();
              pcStack_248 = FUN_106fa3dfc;
              lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
              puStack_270 = puVar2;
              puStack_268 = puVar10;
              puStack_260 = puVar7;
              puStack_258 = puVar3;
              ppuStack_250 = &ppuStack_160;
              _objc_alloc();
              puVar2 = PTR_PTR_1126d3ad8;
              puVar3 = PTR_PTR_1126d3af8;
              _objc_alloc_init();
              func_0x00010bfca120(puVar2,param_4,puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_280 = puVar2;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_280,1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c040a80(puVar11,param_4,puVar7);
              _objc_release(puVar7);
              _objc_release(puVar2);
              puVar10 = puVar3;
              _objc_release();
              param_3 = puVar11;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
                ___stack_chk_fail();
                pcStack_288 = FUN_106fa3ed8;
                lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                puVar12 = PTR_PTR_1126d3af0;
                puStack_2e0 = puVar6;
                puStack_2d8 = puVar5;
                puStack_2d0 = puVar1;
                puStack_2c8 = puVar4;
                puStack_2c0 = puVar9;
                puStack_2b8 = puVar8;
                puStack_2b0 = puVar7;
                puStack_2a8 = puVar3;
                puStack_2a0 = puVar2;
                puStack_298 = puVar11;
                ppuStack_290 = &ppuStack_250;
                _objc_alloc_init();
                puStack_320 = puVar12;
                func_0x00010c1ec220();
                _objc_alloc();
                puVar2 = PTR_PTR_1126d3ad8;
                puStack_340 = puVar10;
                func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = PTR_PTR_1126d3ad8;
                puVar3 = PTR_PTR_1126d3ae0;
                puStack_328 = puVar2;
                puStack_318 = puVar2;
                _objc_alloc_init();
                puStack_330 = puVar3;
                func_0x00010bf35ae0(puVar1,param_4,puVar3);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR_PTR_1126d3ad8;
                puVar5 = PTR_PTR_1126d3ae0;
                puStack_338 = puVar1;
                puStack_310 = puVar1;
                _objc_alloc_init();
                func_0x00010bfcb140(puVar2,param_4,puVar5);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = PTR_PTR_1126d3ad8;
                puVar6 = PTR_PTR_1126d3ae0;
                puStack_308 = puVar2;
                _objc_alloc_init();
                func_0x00010bfc35a0(puVar1,param_4,puVar6);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR_PTR_1126d3ad8;
                puVar7 = PTR_PTR_1126d3ae0;
                puStack_300 = puVar1;
                _objc_alloc_init();
                func_0x00010bfc7660(puVar3,param_4,puVar7);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = PTR_PTR_1126d3ad8;
                puVar8 = PTR_PTR_1126d3ae0;
                puStack_2f8 = puVar3;
                _objc_alloc_init();
                func_0x00010bfc2c00(puVar4,param_4,puVar8);
                _objc_retainAutoreleasedReturnValue();
                puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_2f0 = puVar4;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_318,6);
                _objc_retainAutoreleasedReturnValue();
                param_3 = puStack_340;
                func_0x00010c040a80(puStack_340,param_4,puVar9);
                _objc_release(puVar9);
                _objc_release(puVar4);
                _objc_release(puVar8);
                _objc_release(puVar3);
                _objc_release(puVar7);
                _objc_release(puVar1);
                _objc_release(puVar6);
                _objc_release(puVar2);
                _objc_release(puVar5);
                _objc_release(puStack_338);
                _objc_release(puStack_330);
                _objc_release(puStack_328);
                puVar10 = puStack_320;
                _objc_release();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
                  ___stack_chk_fail();
                  pcStack_348 = FUN_106fa410c;
                  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  puVar11 = PTR_PTR_1126d3af0;
                  puStack_380 = param_3;
                  puStack_378 = puVar5;
                  puStack_370 = puVar4;
                  puStack_368 = puVar8;
                  puStack_360 = puVar7;
                  puStack_358 = puVar9;
                  ppuStack_350 = &ppuStack_290;
                  _objc_alloc_init();
                  func_0x00010c1ec220();
                  _objc_alloc();
                  puVar5 = PTR_PTR_1126d3ad8;
                  func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar11);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = PTR_PTR_1126d3ad8;
                  puVar7 = PTR_PTR_1126d3ae0;
                  puStack_398 = puVar5;
                  _objc_alloc_init();
                  func_0x00010bf35ae0(puVar4,param_4,puVar7);
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
                  puStack_390 = puVar4;
                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_398,2);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c040a80(puVar10,param_4,puVar8);
                  _objc_release(puVar8);
                  _objc_release(puVar4);
                  _objc_release(puVar7);
                  _objc_release(puVar5);
                  puVar9 = puVar11;
                  _objc_release();
                  param_3 = puVar10;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_388) {
                    ___stack_chk_fail();
                    pcStack_3a8 = FUN_106fa423c;
                    lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                    puVar12 = PTR_PTR_1126d3af0;
                    puStack_3d0 = puVar4;
                    puStack_3c8 = puVar5;
                    puStack_3c0 = puVar10;
                    puStack_3b8 = puVar11;
                    ppuStack_3b0 = &ppuStack_350;
                    _objc_alloc_init();
                    func_0x00010c1ec220();
                    func_0x00010c189920(puVar12,param_4,1);
                    func_0x00010c2027c0(puVar12,param_4,1);
                    _objc_alloc();
                    puVar4 = PTR_PTR_1126d3ad8;
                    func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
                    _objc_retainAutoreleasedReturnValue();
                    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
                    puStack_3e0 = puVar4;
                    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_3e0,1);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c040a80(puVar9,param_4,puVar5);
                    _objc_release(puVar5);
                    _objc_release(puVar4);
                    puVar10 = puVar12;
                    _objc_release();
                    param_3 = puVar9;
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d8) {
                      ___stack_chk_fail();
                      pcStack_3e8 = FUN_106fa433c;
                      lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
                      puVar11 = PTR_PTR_1126d3af0;
                      puStack_410 = puVar5;
                      puStack_408 = puVar4;
                      puStack_400 = puVar9;
                      puStack_3f8 = puVar12;
                      ppuStack_3f0 = &ppuStack_3b0;
                      _objc_alloc_init();
                      func_0x00010c1ec220();
                      func_0x00010c189920(puVar11,param_4,1);
                      func_0x00010c2027c0(puVar11,param_4,2);
                      _objc_alloc();
                      puVar4 = PTR_PTR_1126d3ad8;
                      func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar11);
                      _objc_retainAutoreleasedReturnValue();
                      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
                      puStack_420 = puVar4;
                      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_420,1
                                         );
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c040a80(puVar10,param_4,puVar5);
                      _objc_release(puVar5);
                      _objc_release(puVar4);
                      puVar9 = puVar11;
                      _objc_release();
                      param_3 = puVar10;
                      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_418) {
                        ___stack_chk_fail();
                        pcStack_428 = FUN_106fa443c;
                        lStack_490 = *(long *)PTR____stack_chk_guard_11034bdc0;
                        puVar12 = PTR_PTR_1126d3af0;
                        puStack_500 = puVar9;
                        puStack_480 = puVar3;
                        puStack_478 = puVar1;
                        puStack_470 = puVar6;
                        puStack_468 = puVar2;
                        puStack_460 = puVar8;
                        puStack_458 = puVar7;
                        puStack_450 = puVar5;
                        puStack_448 = puVar4;
                        puStack_440 = puVar10;
                        puStack_438 = puVar11;
                        ppuStack_430 = &ppuStack_3f0;
                        _objc_alloc_init();
                        puStack_518 = puVar12;
                        func_0x00010c1ec220();
                        puVar3 = PTR_PTR_1126d3b00;
                        _objc_alloc_init();
                        puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
                        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c26f320();
                        func_0x00010c2156a0(puVar3,param_4,(long)param_1);
                        _objc_release(puVar1);
                        puVar1 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
                        func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
                        _objc_retainAutoreleasedReturnValue();
                        puVar2 = puVar1;
                        func_0x00010c1552e0();
                        puStack_540 = puVar3;
                        func_0x00010c215860(puVar3,param_4,puVar2);
                        _objc_release(puVar1);
                        puVar4 = PTR_PTR_1126d3b08;
                        _objc_alloc_init();
                        puStack_570 = puVar4;
                        func_0x00010c173020();
                        puVar1 = PTR_PTR_1126d3ad8;
                        puStack_558 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                        puVar2 = PTR_PTR_1126d3af8;
                        _objc_alloc_init();
                        puStack_508 = puVar2;
                        func_0x00010bfca120(puVar1,param_4,puVar2);
                        _objc_retainAutoreleasedReturnValue();
                        puVar2 = PTR_PTR_1126d3ad8;
                        puVar5 = PTR_PTR_1126d3ae0;
                        puStack_510 = puVar1;
                        puStack_4f8 = puVar1;
                        _objc_alloc_init();
                        puStack_520 = puVar5;
                        func_0x00010bfc5d20(puVar2,param_4,puVar5);
                        _objc_retainAutoreleasedReturnValue();
                        puVar1 = PTR_PTR_1126d3ad8;
                        puVar5 = PTR_PTR_1126d3ae0;
                        puStack_528 = puVar2;
                        puStack_4f0 = puVar2;
                        _objc_alloc_init();
                        puStack_530 = puVar5;
                        func_0x00010bfccc40(puVar1,param_4,puVar5);
                        _objc_retainAutoreleasedReturnValue();
                        puVar2 = PTR_PTR_1126d3ad8;
                        puStack_538 = puVar1;
                        puStack_4e8 = puVar1;
                        func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
                        _objc_retainAutoreleasedReturnValue();
                        puVar1 = PTR_PTR_1126d3ad8;
                        puVar5 = PTR_PTR_1126d3ae0;
                        puStack_548 = puVar2;
                        puStack_4e0 = puVar2;
                        _objc_alloc_init();
                        puStack_550 = puVar5;
                        func_0x00010bf35ae0(puVar1,param_4,puVar5);
                        _objc_retainAutoreleasedReturnValue();
                        puVar2 = PTR_PTR_1126d3ad8;
                        puVar5 = PTR_PTR_1126d3ae0;
                        puStack_560 = puVar1;
                        puStack_4d8 = puVar1;
                        _objc_alloc_init();
                        puStack_568 = puVar5;
                        func_0x00010bfcb140(puVar2,param_4,puVar5);
                        _objc_retainAutoreleasedReturnValue();
                        puVar1 = PTR_PTR_1126d3ad8;
                        puVar5 = PTR_PTR_1126d3ae0;
                        puStack_578 = puVar2;
                        puStack_4d0 = puVar2;
                        _objc_alloc_init();
                        puStack_580 = puVar5;
                        func_0x00010bfc35a0(puVar1,param_4,puVar5);
                        _objc_retainAutoreleasedReturnValue();
                        puVar2 = PTR_PTR_1126d3ad8;
                        puStack_588 = puVar1;
                        puStack_4c8 = puVar1;
                        func_0x00010c214bc0(PTR_PTR_1126d3ad8,param_4,puVar3);
                        _objc_retainAutoreleasedReturnValue();
                        puVar1 = PTR_PTR_1126d3ad8;
                        puVar3 = PTR_PTR_1126d3ae0;
                        puStack_590 = puVar2;
                        puStack_4c0 = puVar2;
                        _objc_alloc_init();
                        puStack_598 = puVar3;
                        func_0x00010bfc7660(puVar1,param_4,puVar3);
                        _objc_retainAutoreleasedReturnValue();
                        puVar2 = PTR_PTR_1126d3ad8;
                        puVar5 = PTR_PTR_1126d3ae0;
                        puStack_4b8 = puVar1;
                        _objc_alloc_init(PTR_PTR_1126d3ae0);
                        func_0x00010bf1e960(puVar2,param_4,puVar5);
                        _objc_retainAutoreleasedReturnValue();
                        puVar6 = PTR_PTR_1126d3ad8;
                        puStack_4b0 = puVar2;
                        func_0x00010bf906c0(PTR_PTR_1126d3ad8,param_4,puVar4);
                        _objc_retainAutoreleasedReturnValue();
                        puVar3 = PTR_PTR_1126d3ad8;
                        puVar7 = PTR_PTR_1126d3ae0;
                        puStack_4a8 = puVar6;
                        _objc_alloc_init(PTR_PTR_1126d3ae0);
                        func_0x00010bfc6ca0(puVar3,param_4,puVar7);
                        _objc_retainAutoreleasedReturnValue();
                        puVar4 = PTR_PTR_1126d3ad8;
                        puVar8 = PTR_PTR_1126d3ae0;
                        puStack_4a0 = puVar3;
                        _objc_alloc_init(PTR_PTR_1126d3ae0);
                        func_0x00010bfc2c00(puVar4,param_4,puVar8);
                        _objc_retainAutoreleasedReturnValue();
                        puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
                        puStack_498 = puVar4;
                        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_4f8
                                            ,0xd);
                        _objc_retainAutoreleasedReturnValue();
                        puVar10 = puStack_558;
                        func_0x00010bf0a0c0(puStack_558,param_4,puVar9);
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release(puVar9);
                        _objc_release(puVar4);
                        _objc_release(puVar8);
                        _objc_release(puVar3);
                        _objc_release(puVar7);
                        _objc_release(puVar6);
                        _objc_release(puVar2);
                        _objc_release(puVar5);
                        _objc_release(puVar1);
                        _objc_release(puStack_598);
                        _objc_release(puStack_590);
                        _objc_release(puStack_588);
                        _objc_release(puStack_580);
                        _objc_release(puStack_578);
                        _objc_release(puStack_568);
                        _objc_release(puStack_560);
                        _objc_release(puStack_550);
                        _objc_release(puStack_548);
                        _objc_release(puStack_538);
                        _objc_release(puStack_530);
                        _objc_release(puStack_528);
                        _objc_release(puStack_520);
                        _objc_release(puStack_510);
                        _objc_release(puStack_508);
                        param_3 = puStack_500;
                        _objc_alloc();
                        puVar3 = puVar10;
                        func_0x00010c040a80();
                        _objc_release(puVar10);
                        _objc_release(puStack_570);
                        _objc_release(puStack_540);
                        puVar2 = puStack_518;
                        _objc_release();
                        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_490) {
                          ___stack_chk_fail();
                          puVar5 = PTR_PTR_1126d3b10;
                          pcStack_5a8 = FUN_106fa48b0;
                          lStack_5d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                          puStack_5d0 = puVar4;
                          puStack_5c8 = puVar10;
                          puStack_5c0 = puVar1;
                          puStack_5b8 = param_3;
                          ppuStack_5b0 = &ppuStack_430;
                          _objc_retain(puVar3);
                          _objc_alloc_init();
                          func_0x00010c1cafa0();
                          _objc_release(puVar3);
                          _objc_alloc();
                          puVar1 = PTR_PTR_1126d3ad8;
                          func_0x00010c1cafa0(PTR_PTR_1126d3ad8,param_4,puVar5);
                          _objc_retainAutoreleasedReturnValue();
                          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                          puStack_5e0 = puVar1;
                          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                              &puStack_5e0,1);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c040a80(puVar2,param_4,puVar3);
                          _objc_release(puVar3);
                          _objc_release(puVar1);
                          puVar4 = puVar5;
                          _objc_release();
                          param_3 = puVar2;
                          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5d8) {
                            ___stack_chk_fail();
                            pcStack_5e8 = FUN_106fa49b0;
                            lStack_618 = *(long *)PTR____stack_chk_guard_11034bdc0;
                            puStack_610 = puVar3;
                            puStack_608 = puVar5;
                            puStack_600 = puVar1;
                            puStack_5f8 = puVar2;
                            ppuStack_5f0 = &ppuStack_5b0;
                            _objc_alloc();
                            puVar1 = PTR_PTR_1126d3ad8;
                            puVar2 = PTR_PTR_1126d3ae0;
                            _objc_alloc_init();
                            func_0x00010bfc59a0(puVar1,param_4,puVar2);
                            _objc_retainAutoreleasedReturnValue();
                            puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                            puStack_620 = puVar1;
                            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                &puStack_620,1);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c040a80(puVar4,param_4,puVar3);
                            _objc_release(puVar3);
                            _objc_release(puVar1);
                            puVar5 = puVar2;
                            _objc_release();
                            param_3 = puVar4;
                            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_618) {
                              ___stack_chk_fail();
                              pcStack_628 = FUN_106fa4a8c;
                              lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
                              puStack_650 = puVar3;
                              puStack_648 = puVar2;
                              puStack_640 = puVar1;
                              puStack_638 = puVar4;
                              ppuStack_630 = &ppuStack_5f0;
                              _objc_alloc();
                              puVar1 = PTR_PTR_1126d3ad8;
                              puVar2 = PTR_PTR_1126d3ae0;
                              _objc_alloc_init();
                              func_0x00010bf08480(puVar1,param_4,puVar2);
                              _objc_retainAutoreleasedReturnValue();
                              puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                              puStack_660 = puVar1;
                              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                  &puStack_660,1);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010c040a80(puVar5,param_4,puVar3);
                              _objc_release(puVar3);
                              _objc_release(puVar1);
                              puVar4 = puVar2;
                              _objc_release();
                              param_3 = puVar5;
                              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_658) {
                                ___stack_chk_fail();
                                pcStack_668 = FUN_106fa4b68;
                                lStack_698 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                puStack_690 = puVar3;
                                puStack_688 = puVar2;
                                puStack_680 = puVar1;
                                puStack_678 = puVar5;
                                ppuStack_670 = &ppuStack_630;
                                _objc_alloc();
                                puVar1 = PTR_PTR_1126d3ad8;
                                puVar2 = PTR_PTR_1126d3ae0;
                                _objc_alloc_init();
                                func_0x00010c263e60(puVar1,param_4,puVar2);
                                _objc_retainAutoreleasedReturnValue();
                                puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                puStack_6a0 = puVar1;
                                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                    &puStack_6a0,1);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010c040a80(puVar4,param_4,puVar3);
                                _objc_release(puVar3);
                                _objc_release(puVar1);
                                puVar5 = puVar2;
                                _objc_release();
                                param_3 = puVar4;
                                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_698) {
                                  ___stack_chk_fail();
                                  pcStack_6a8 = FUN_106fa4c44;
                                  lStack_6d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                  puVar6 = PTR_PTR_1126d3b18;
                                  puStack_6d0 = puVar3;
                                  puStack_6c8 = puVar2;
                                  puStack_6c0 = puVar1;
                                  puStack_6b8 = puVar4;
                                  ppuStack_6b0 = &ppuStack_670;
                                  _objc_alloc_init();
                                  func_0x00010c18d400();
                                  _objc_alloc();
                                  puVar1 = PTR_PTR_1126d3ad8;
                                  func_0x00010bfb24c0(PTR_PTR_1126d3ad8,param_4,puVar6);
                                  _objc_retainAutoreleasedReturnValue();
                                  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                  puStack_6e0 = puVar1;
                                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                      &puStack_6e0,1);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010c040a80(puVar5,param_4,puVar2);
                                  _objc_release(puVar2);
                                  _objc_release(puVar1);
                                  puVar3 = puVar6;
                                  _objc_release();
                                  param_3 = puVar5;
                                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6d8) {
                                    ___stack_chk_fail();
                                    pcStack_6e8 = FUN_106fa4d2c;
                                    lStack_718 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                    puStack_710 = puVar2;
                                    puStack_708 = puVar1;
                                    puStack_700 = puVar6;
                                    puStack_6f8 = puVar5;
                                    ppuStack_6f0 = &ppuStack_6b0;
                                    _objc_alloc();
                                    puVar1 = PTR_PTR_1126d3ad8;
                                    puVar2 = PTR_PTR_1126d3ae0;
                                    _objc_alloc_init();
                                    func_0x00010bfc2ca0(puVar1,param_4,puVar2);
                                    _objc_retainAutoreleasedReturnValue();
                                    uVar13 = 1;
                                    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                    puStack_720 = puVar1;
                                    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                        &puStack_720,1);
                                    _objc_retainAutoreleasedReturnValue();
                                    puVar5 = puVar4;
                                    func_0x00010c040a80(puVar3,param_4,puVar4);
                                    _objc_release(puVar4);
                                    _objc_release(puVar1);
                                    _objc_release(puVar2);
                                    param_3 = puVar3;
                                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_718) {
                                      ___stack_chk_fail();
                                      puVar1 = PTR_PTR_1126d3b20;
                                      lStack_778 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                      _objc_retain(uVar13);
                                      _objc_retain(puVar5);
                                      _objc_alloc_init(puVar1);
                                      func_0x00010c212460();
                                      _objc_release(uVar13);
                                      puVar3 = puVar5;
                                      func_0x00010bf6e340(puVar5);
                                      _objc_retainAutoreleasedReturnValue();
                                      _objc_release(puVar5);
                                      func_0x00010c212640(puVar1,param_4,puVar3);
                                      _objc_release(puVar3);
                                      param_1 = param_1 * 1000.0;
                                      if (param_1 <= 0.0) {
                                        param_1 = 0.0;
                                      }
                                      func_0x00010c215680(puVar1,param_4,(int)param_1);
                                      param_2 = param_2 * 1000.0;
                                      if (param_2 <= 0.0) {
                                        param_2 = 0.0;
                                      }
                                      func_0x00010c225ae0(puVar1,param_4,(int)param_2);
                                      _objc_alloc(puVar2);
                                      puVar3 = PTR_PTR_1126d3ad8;
                                      func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar1);
                                      _objc_retainAutoreleasedReturnValue();
                                      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                      puStack_780 = puVar3;
                                      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,
                                                          param_4,&puStack_780,1);
                                      _objc_retainAutoreleasedReturnValue();
                                      func_0x00010c040a80(puVar2,param_4,puVar4);
                                      _objc_release(puVar4);
                                      _objc_release(puVar3);
                                      _objc_release(puVar1);
                                      param_3 = puVar2;
                                      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_778) {
                                        ___stack_chk_fail();
                                        return (undefined *)0x0;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 106fa378c; end: 106fa38b7; +[SCSpectaclesMalibuRequestMessage connectWifiTo:password:] */

undefined *
FUN_106fa378c(double param_1,double param_2,undefined *param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6)

{
  undefined *puVar1;
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
  undefined8 uVar13;
  undefined *puStack_730;
  long lStack_728;
  undefined *puStack_6d0;
  long lStack_6c8;
  undefined *puStack_6c0;
  undefined *puStack_6b8;
  undefined *puStack_6b0;
  undefined *puStack_6a8;
  undefined8 **ppuStack_6a0;
  code *pcStack_698;
  undefined *puStack_690;
  long lStack_688;
  undefined *puStack_680;
  undefined *puStack_678;
  undefined *puStack_670;
  undefined *puStack_668;
  undefined8 **ppuStack_660;
  code *pcStack_658;
  undefined *puStack_650;
  long lStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined *puStack_630;
  undefined *puStack_628;
  undefined8 **ppuStack_620;
  code *pcStack_618;
  undefined *puStack_610;
  long lStack_608;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined *puStack_5f0;
  undefined *puStack_5e8;
  undefined8 **ppuStack_5e0;
  code *pcStack_5d8;
  undefined *puStack_5d0;
  long lStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5b0;
  undefined *puStack_5a8;
  undefined8 **ppuStack_5a0;
  code *pcStack_598;
  undefined *puStack_590;
  long lStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined8 **ppuStack_560;
  code *pcStack_558;
  undefined *puStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined *puStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined *puStack_4d0;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  long lStack_440;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined8 **ppuStack_3e0;
  code *pcStack_3d8;
  undefined *puStack_3d0;
  long lStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined8 **ppuStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  long lStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined8 **ppuStack_360;
  code *pcStack_358;
  undefined *puStack_348;
  undefined *puStack_340;
  long lStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined8 **ppuStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined8 **ppuStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 **ppuStack_200;
  code *pcStack_1f8;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 **ppuStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 **ppuStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126d3ae8;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc_init();
  func_0x00010c21acc0();
  func_0x00010c208f60(puVar1,param_4,param_5);
  _objc_release(param_5);
  func_0x00010c1d96e0(puVar1,param_4,param_6);
  _objc_release(param_6);
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  func_0x00010c2a5540(PTR_PTR_1126d3ad8,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_3,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106fa38b8;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_70 = puVar3;
    puStack_68 = puVar2;
    puStack_60 = param_3;
    puStack_58 = puVar1;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_alloc();
    puVar1 = PTR_PTR_1126d3ad8;
    puVar2 = PTR_PTR_1126d3ae0;
    _objc_alloc_init();
    func_0x00010c2a5600(puVar1,param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar4,param_4,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar5 = puVar2;
    _objc_release();
    param_3 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      pcStack_88 = FUN_106fa3994;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_b0 = puVar3;
      puStack_a8 = puVar2;
      puStack_a0 = puVar1;
      puStack_98 = puVar4;
      ppuStack_90 = &puStack_50;
      _objc_alloc();
      puVar1 = PTR_PTR_1126d3ad8;
      puVar2 = PTR_PTR_1126d3ae0;
      _objc_alloc_init();
      func_0x00010bfa44e0(puVar1,param_4,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_c0 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_c0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040a80(puVar5,param_4,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar1);
      puVar4 = puVar2;
      _objc_release();
      param_3 = puVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
        ___stack_chk_fail();
        pcStack_c8 = FUN_106fa3a70;
        lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_f0 = puVar3;
        puStack_e8 = puVar2;
        puStack_e0 = puVar1;
        puStack_d8 = puVar5;
        ppuStack_d0 = &ppuStack_90;
        _objc_alloc();
        puVar1 = PTR_PTR_1126d3ad8;
        puVar2 = PTR_PTR_1126d3ae0;
        _objc_alloc_init();
        func_0x00010bfcfee0(puVar1,param_4,puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_100 = puVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_100,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c040a80(puVar4,param_4,puVar3);
        _objc_release(puVar3);
        _objc_release(puVar1);
        _objc_release();
        param_3 = puVar4;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
          ___stack_chk_fail();
          pcStack_108 = FUN_106fa3b4c;
          lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar3 = PTR_PTR_1126d3af0;
          ppuStack_110 = &ppuStack_d0;
          _objc_alloc_init();
          puStack_1d0 = puVar3;
          func_0x00010c1ec220();
          _objc_alloc();
          puVar1 = PTR_PTR_1126d3ad8;
          puVar4 = PTR_PTR_1126d3af8;
          puStack_1e8 = puVar2;
          _objc_alloc_init();
          puStack_1b0 = puVar4;
          func_0x00010bfca120(puVar1,param_4,puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126d3ad8;
          puVar4 = PTR_PTR_1126d3ae0;
          puStack_1b8 = puVar1;
          puStack_1a8 = puVar1;
          _objc_alloc_init();
          puStack_1c0 = puVar4;
          func_0x00010bf1e960(puVar2,param_4,puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126d3ad8;
          puVar4 = PTR_PTR_1126d3ae0;
          puStack_1c8 = puVar2;
          puStack_1a0 = puVar2;
          _objc_alloc_init();
          puStack_1d8 = puVar4;
          func_0x00010bfccc40(puVar1,param_4,puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR_PTR_1126d3ad8;
          puStack_1e0 = puVar1;
          puStack_198 = puVar1;
          func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126d3ad8;
          puVar6 = PTR_PTR_1126d3ae0;
          puStack_190 = puVar5;
          _objc_alloc_init();
          func_0x00010bf35ae0(puVar1,param_4,puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126d3ad8;
          puVar7 = PTR_PTR_1126d3ae0;
          puStack_188 = puVar1;
          _objc_alloc_init();
          func_0x00010bf21ee0(puVar2,param_4,puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126d3ad8;
          puVar8 = PTR_PTR_1126d3ae0;
          puStack_180 = puVar2;
          _objc_alloc_init();
          func_0x00010bfc7660(puVar3,param_4,puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126d3ad8;
          puVar9 = PTR_PTR_1126d3ae0;
          puStack_178 = puVar3;
          _objc_alloc_init();
          func_0x00010bfc5d20(puVar4,param_4,puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_170 = puVar4;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_1a8,8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c040a80(puStack_1e8,param_4,puVar10);
          _objc_release(puVar10);
          _objc_release(puVar4);
          _objc_release(puVar9);
          _objc_release(puVar3);
          _objc_release(puVar8);
          _objc_release(puVar2);
          _objc_release(puVar7);
          _objc_release(puVar1);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puStack_1e0);
          _objc_release(puStack_1d8);
          _objc_release(puStack_1c8);
          _objc_release(puStack_1c0);
          _objc_release(puStack_1b8);
          _objc_release(puStack_1b0);
          puVar11 = puStack_1d0;
          _objc_release();
          param_3 = puStack_1e8;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
            ___stack_chk_fail();
            pcStack_1f8 = FUN_106fa3dfc;
            lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puStack_220 = puVar2;
            puStack_218 = puVar10;
            puStack_210 = puVar7;
            puStack_208 = puVar3;
            ppuStack_200 = &ppuStack_110;
            _objc_alloc();
            puVar2 = PTR_PTR_1126d3ad8;
            puVar3 = PTR_PTR_1126d3af8;
            _objc_alloc_init();
            func_0x00010bfca120(puVar2,param_4,puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_230 = puVar2;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_230,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c040a80(puVar11,param_4,puVar7);
            _objc_release(puVar7);
            _objc_release(puVar2);
            puVar10 = puVar3;
            _objc_release();
            param_3 = puVar11;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
              ___stack_chk_fail();
              pcStack_238 = FUN_106fa3ed8;
              lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
              puVar12 = PTR_PTR_1126d3af0;
              puStack_290 = puVar6;
              puStack_288 = puVar5;
              puStack_280 = puVar1;
              puStack_278 = puVar4;
              puStack_270 = puVar9;
              puStack_268 = puVar8;
              puStack_260 = puVar7;
              puStack_258 = puVar3;
              puStack_250 = puVar2;
              puStack_248 = puVar11;
              ppuStack_240 = &ppuStack_200;
              _objc_alloc_init();
              puStack_2d0 = puVar12;
              func_0x00010c1ec220();
              _objc_alloc();
              puVar2 = PTR_PTR_1126d3ad8;
              puStack_2f0 = puVar10;
              func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR_PTR_1126d3ad8;
              puVar3 = PTR_PTR_1126d3ae0;
              puStack_2d8 = puVar2;
              puStack_2c8 = puVar2;
              _objc_alloc_init();
              puStack_2e0 = puVar3;
              func_0x00010bf35ae0(puVar1,param_4,puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR_PTR_1126d3ad8;
              puVar5 = PTR_PTR_1126d3ae0;
              puStack_2e8 = puVar1;
              puStack_2c0 = puVar1;
              _objc_alloc_init();
              func_0x00010bfcb140(puVar2,param_4,puVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR_PTR_1126d3ad8;
              puVar6 = PTR_PTR_1126d3ae0;
              puStack_2b8 = puVar2;
              _objc_alloc_init();
              func_0x00010bfc35a0(puVar1,param_4,puVar6);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR_PTR_1126d3ad8;
              puVar7 = PTR_PTR_1126d3ae0;
              puStack_2b0 = puVar1;
              _objc_alloc_init();
              func_0x00010bfc7660(puVar3,param_4,puVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR_PTR_1126d3ad8;
              puVar8 = PTR_PTR_1126d3ae0;
              puStack_2a8 = puVar3;
              _objc_alloc_init();
              func_0x00010bfc2c00(puVar4,param_4,puVar8);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_2a0 = puVar4;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_2c8,6);
              _objc_retainAutoreleasedReturnValue();
              param_3 = puStack_2f0;
              func_0x00010c040a80(puStack_2f0,param_4,puVar9);
              _objc_release(puVar9);
              _objc_release(puVar4);
              _objc_release(puVar8);
              _objc_release(puVar3);
              _objc_release(puVar7);
              _objc_release(puVar1);
              _objc_release(puVar6);
              _objc_release(puVar2);
              _objc_release(puVar5);
              _objc_release(puStack_2e8);
              _objc_release(puStack_2e0);
              _objc_release(puStack_2d8);
              puVar10 = puStack_2d0;
              _objc_release();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
                ___stack_chk_fail();
                pcStack_2f8 = FUN_106fa410c;
                lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
                puVar11 = PTR_PTR_1126d3af0;
                puStack_330 = param_3;
                puStack_328 = puVar5;
                puStack_320 = puVar4;
                puStack_318 = puVar8;
                puStack_310 = puVar7;
                puStack_308 = puVar9;
                ppuStack_300 = &ppuStack_240;
                _objc_alloc_init();
                func_0x00010c1ec220();
                _objc_alloc();
                puVar5 = PTR_PTR_1126d3ad8;
                func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar11);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = PTR_PTR_1126d3ad8;
                puVar7 = PTR_PTR_1126d3ae0;
                puStack_348 = puVar5;
                _objc_alloc_init();
                func_0x00010bf35ae0(puVar4,param_4,puVar7);
                _objc_retainAutoreleasedReturnValue();
                puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_340 = puVar4;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_348,2);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c040a80(puVar10,param_4,puVar8);
                _objc_release(puVar8);
                _objc_release(puVar4);
                _objc_release(puVar7);
                _objc_release(puVar5);
                puVar9 = puVar11;
                _objc_release();
                param_3 = puVar10;
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_338) {
                  ___stack_chk_fail();
                  pcStack_358 = FUN_106fa423c;
                  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  puVar12 = PTR_PTR_1126d3af0;
                  puStack_380 = puVar4;
                  puStack_378 = puVar5;
                  puStack_370 = puVar10;
                  puStack_368 = puVar11;
                  ppuStack_360 = &ppuStack_300;
                  _objc_alloc_init();
                  func_0x00010c1ec220();
                  func_0x00010c189920(puVar12,param_4,1);
                  func_0x00010c2027c0(puVar12,param_4,1);
                  _objc_alloc();
                  puVar4 = PTR_PTR_1126d3ad8;
                  func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
                  puStack_390 = puVar4;
                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_390,1);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c040a80(puVar9,param_4,puVar5);
                  _objc_release(puVar5);
                  _objc_release(puVar4);
                  puVar10 = puVar12;
                  _objc_release();
                  param_3 = puVar9;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_388) {
                    ___stack_chk_fail();
                    pcStack_398 = FUN_106fa433c;
                    lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                    puVar11 = PTR_PTR_1126d3af0;
                    puStack_3c0 = puVar5;
                    puStack_3b8 = puVar4;
                    puStack_3b0 = puVar9;
                    puStack_3a8 = puVar12;
                    ppuStack_3a0 = &ppuStack_360;
                    _objc_alloc_init();
                    func_0x00010c1ec220();
                    func_0x00010c189920(puVar11,param_4,1);
                    func_0x00010c2027c0(puVar11,param_4,2);
                    _objc_alloc();
                    puVar4 = PTR_PTR_1126d3ad8;
                    func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar11);
                    _objc_retainAutoreleasedReturnValue();
                    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
                    puStack_3d0 = puVar4;
                    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_3d0,1);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c040a80(puVar10,param_4,puVar5);
                    _objc_release(puVar5);
                    _objc_release(puVar4);
                    puVar9 = puVar11;
                    _objc_release();
                    param_3 = puVar10;
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c8) {
                      ___stack_chk_fail();
                      pcStack_3d8 = FUN_106fa443c;
                      lStack_440 = *(long *)PTR____stack_chk_guard_11034bdc0;
                      puVar12 = PTR_PTR_1126d3af0;
                      puStack_4b0 = puVar9;
                      puStack_430 = puVar3;
                      puStack_428 = puVar1;
                      puStack_420 = puVar6;
                      puStack_418 = puVar2;
                      puStack_410 = puVar8;
                      puStack_408 = puVar7;
                      puStack_400 = puVar5;
                      puStack_3f8 = puVar4;
                      puStack_3f0 = puVar10;
                      puStack_3e8 = puVar11;
                      ppuStack_3e0 = &ppuStack_3a0;
                      _objc_alloc_init();
                      puStack_4c8 = puVar12;
                      func_0x00010c1ec220();
                      puVar3 = PTR_PTR_1126d3b00;
                      _objc_alloc_init();
                      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
                      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c26f320();
                      func_0x00010c2156a0(puVar3,param_4,(long)param_1);
                      _objc_release(puVar1);
                      puVar1 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
                      func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
                      _objc_retainAutoreleasedReturnValue();
                      puVar2 = puVar1;
                      func_0x00010c1552e0();
                      puStack_4f0 = puVar3;
                      func_0x00010c215860(puVar3,param_4,puVar2);
                      _objc_release(puVar1);
                      puVar4 = PTR_PTR_1126d3b08;
                      _objc_alloc_init();
                      puStack_520 = puVar4;
                      func_0x00010c173020();
                      puVar1 = PTR_PTR_1126d3ad8;
                      puStack_508 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                      puVar2 = PTR_PTR_1126d3af8;
                      _objc_alloc_init();
                      puStack_4b8 = puVar2;
                      func_0x00010bfca120(puVar1,param_4,puVar2);
                      _objc_retainAutoreleasedReturnValue();
                      puVar2 = PTR_PTR_1126d3ad8;
                      puVar5 = PTR_PTR_1126d3ae0;
                      puStack_4c0 = puVar1;
                      puStack_4a8 = puVar1;
                      _objc_alloc_init();
                      puStack_4d0 = puVar5;
                      func_0x00010bfc5d20(puVar2,param_4,puVar5);
                      _objc_retainAutoreleasedReturnValue();
                      puVar1 = PTR_PTR_1126d3ad8;
                      puVar5 = PTR_PTR_1126d3ae0;
                      puStack_4d8 = puVar2;
                      puStack_4a0 = puVar2;
                      _objc_alloc_init();
                      puStack_4e0 = puVar5;
                      func_0x00010bfccc40(puVar1,param_4,puVar5);
                      _objc_retainAutoreleasedReturnValue();
                      puVar2 = PTR_PTR_1126d3ad8;
                      puStack_4e8 = puVar1;
                      puStack_498 = puVar1;
                      func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
                      _objc_retainAutoreleasedReturnValue();
                      puVar1 = PTR_PTR_1126d3ad8;
                      puVar5 = PTR_PTR_1126d3ae0;
                      puStack_4f8 = puVar2;
                      puStack_490 = puVar2;
                      _objc_alloc_init();
                      puStack_500 = puVar5;
                      func_0x00010bf35ae0(puVar1,param_4,puVar5);
                      _objc_retainAutoreleasedReturnValue();
                      puVar2 = PTR_PTR_1126d3ad8;
                      puVar5 = PTR_PTR_1126d3ae0;
                      puStack_510 = puVar1;
                      puStack_488 = puVar1;
                      _objc_alloc_init();
                      puStack_518 = puVar5;
                      func_0x00010bfcb140(puVar2,param_4,puVar5);
                      _objc_retainAutoreleasedReturnValue();
                      puVar1 = PTR_PTR_1126d3ad8;
                      puVar5 = PTR_PTR_1126d3ae0;
                      puStack_528 = puVar2;
                      puStack_480 = puVar2;
                      _objc_alloc_init();
                      puStack_530 = puVar5;
                      func_0x00010bfc35a0(puVar1,param_4,puVar5);
                      _objc_retainAutoreleasedReturnValue();
                      puVar2 = PTR_PTR_1126d3ad8;
                      puStack_538 = puVar1;
                      puStack_478 = puVar1;
                      func_0x00010c214bc0(PTR_PTR_1126d3ad8,param_4,puVar3);
                      _objc_retainAutoreleasedReturnValue();
                      puVar1 = PTR_PTR_1126d3ad8;
                      puVar3 = PTR_PTR_1126d3ae0;
                      puStack_540 = puVar2;
                      puStack_470 = puVar2;
                      _objc_alloc_init();
                      puStack_548 = puVar3;
                      func_0x00010bfc7660(puVar1,param_4,puVar3);
                      _objc_retainAutoreleasedReturnValue();
                      puVar2 = PTR_PTR_1126d3ad8;
                      puVar5 = PTR_PTR_1126d3ae0;
                      puStack_468 = puVar1;
                      _objc_alloc_init(PTR_PTR_1126d3ae0);
                      func_0x00010bf1e960(puVar2,param_4,puVar5);
                      _objc_retainAutoreleasedReturnValue();
                      puVar6 = PTR_PTR_1126d3ad8;
                      puStack_460 = puVar2;
                      func_0x00010bf906c0(PTR_PTR_1126d3ad8,param_4,puVar4);
                      _objc_retainAutoreleasedReturnValue();
                      puVar3 = PTR_PTR_1126d3ad8;
                      puVar7 = PTR_PTR_1126d3ae0;
                      puStack_458 = puVar6;
                      _objc_alloc_init(PTR_PTR_1126d3ae0);
                      func_0x00010bfc6ca0(puVar3,param_4,puVar7);
                      _objc_retainAutoreleasedReturnValue();
                      puVar4 = PTR_PTR_1126d3ad8;
                      puVar8 = PTR_PTR_1126d3ae0;
                      puStack_450 = puVar3;
                      _objc_alloc_init(PTR_PTR_1126d3ae0);
                      func_0x00010bfc2c00(puVar4,param_4,puVar8);
                      _objc_retainAutoreleasedReturnValue();
                      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
                      puStack_448 = puVar4;
                      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_4a8,
                                          0xd);
                      _objc_retainAutoreleasedReturnValue();
                      puVar10 = puStack_508;
                      func_0x00010bf0a0c0(puStack_508,param_4,puVar9);
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(puVar9);
                      _objc_release(puVar4);
                      _objc_release(puVar8);
                      _objc_release(puVar3);
                      _objc_release(puVar7);
                      _objc_release(puVar6);
                      _objc_release(puVar2);
                      _objc_release(puVar5);
                      _objc_release(puVar1);
                      _objc_release(puStack_548);
                      _objc_release(puStack_540);
                      _objc_release(puStack_538);
                      _objc_release(puStack_530);
                      _objc_release(puStack_528);
                      _objc_release(puStack_518);
                      _objc_release(puStack_510);
                      _objc_release(puStack_500);
                      _objc_release(puStack_4f8);
                      _objc_release(puStack_4e8);
                      _objc_release(puStack_4e0);
                      _objc_release(puStack_4d8);
                      _objc_release(puStack_4d0);
                      _objc_release(puStack_4c0);
                      _objc_release(puStack_4b8);
                      param_3 = puStack_4b0;
                      _objc_alloc();
                      puVar3 = puVar10;
                      func_0x00010c040a80();
                      _objc_release(puVar10);
                      _objc_release(puStack_520);
                      _objc_release(puStack_4f0);
                      puVar2 = puStack_4c8;
                      _objc_release();
                      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_440) {
                        ___stack_chk_fail();
                        puVar5 = PTR_PTR_1126d3b10;
                        pcStack_558 = FUN_106fa48b0;
                        lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
                        puStack_580 = puVar4;
                        puStack_578 = puVar10;
                        puStack_570 = puVar1;
                        puStack_568 = param_3;
                        ppuStack_560 = &ppuStack_3e0;
                        _objc_retain(puVar3);
                        _objc_alloc_init();
                        func_0x00010c1cafa0();
                        _objc_release(puVar3);
                        _objc_alloc();
                        puVar1 = PTR_PTR_1126d3ad8;
                        func_0x00010c1cafa0(PTR_PTR_1126d3ad8,param_4,puVar5);
                        _objc_retainAutoreleasedReturnValue();
                        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                        puStack_590 = puVar1;
                        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_590
                                            ,1);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c040a80(puVar2,param_4,puVar3);
                        _objc_release(puVar3);
                        _objc_release(puVar1);
                        puVar4 = puVar5;
                        _objc_release();
                        param_3 = puVar2;
                        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_588) {
                          ___stack_chk_fail();
                          pcStack_598 = FUN_106fa49b0;
                          lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                          puStack_5c0 = puVar3;
                          puStack_5b8 = puVar5;
                          puStack_5b0 = puVar1;
                          puStack_5a8 = puVar2;
                          ppuStack_5a0 = &ppuStack_560;
                          _objc_alloc();
                          puVar1 = PTR_PTR_1126d3ad8;
                          puVar2 = PTR_PTR_1126d3ae0;
                          _objc_alloc_init();
                          func_0x00010bfc59a0(puVar1,param_4,puVar2);
                          _objc_retainAutoreleasedReturnValue();
                          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                          puStack_5d0 = puVar1;
                          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                              &puStack_5d0,1);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c040a80(puVar4,param_4,puVar3);
                          _objc_release(puVar3);
                          _objc_release(puVar1);
                          puVar5 = puVar2;
                          _objc_release();
                          param_3 = puVar4;
                          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5c8) {
                            ___stack_chk_fail();
                            pcStack_5d8 = FUN_106fa4a8c;
                            lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
                            puStack_600 = puVar3;
                            puStack_5f8 = puVar2;
                            puStack_5f0 = puVar1;
                            puStack_5e8 = puVar4;
                            ppuStack_5e0 = &ppuStack_5a0;
                            _objc_alloc();
                            puVar1 = PTR_PTR_1126d3ad8;
                            puVar2 = PTR_PTR_1126d3ae0;
                            _objc_alloc_init();
                            func_0x00010bf08480(puVar1,param_4,puVar2);
                            _objc_retainAutoreleasedReturnValue();
                            puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                            puStack_610 = puVar1;
                            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                &puStack_610,1);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c040a80(puVar5,param_4,puVar3);
                            _objc_release(puVar3);
                            _objc_release(puVar1);
                            puVar4 = puVar2;
                            _objc_release();
                            param_3 = puVar5;
                            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_608) {
                              ___stack_chk_fail();
                              pcStack_618 = FUN_106fa4b68;
                              lStack_648 = *(long *)PTR____stack_chk_guard_11034bdc0;
                              puStack_640 = puVar3;
                              puStack_638 = puVar2;
                              puStack_630 = puVar1;
                              puStack_628 = puVar5;
                              ppuStack_620 = &ppuStack_5e0;
                              _objc_alloc();
                              puVar1 = PTR_PTR_1126d3ad8;
                              puVar2 = PTR_PTR_1126d3ae0;
                              _objc_alloc_init();
                              func_0x00010c263e60(puVar1,param_4,puVar2);
                              _objc_retainAutoreleasedReturnValue();
                              puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                              puStack_650 = puVar1;
                              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                  &puStack_650,1);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010c040a80(puVar4,param_4,puVar3);
                              _objc_release(puVar3);
                              _objc_release(puVar1);
                              puVar5 = puVar2;
                              _objc_release();
                              param_3 = puVar4;
                              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_648) {
                                ___stack_chk_fail();
                                pcStack_658 = FUN_106fa4c44;
                                lStack_688 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                puVar6 = PTR_PTR_1126d3b18;
                                puStack_680 = puVar3;
                                puStack_678 = puVar2;
                                puStack_670 = puVar1;
                                puStack_668 = puVar4;
                                ppuStack_660 = &ppuStack_620;
                                _objc_alloc_init();
                                func_0x00010c18d400();
                                _objc_alloc();
                                puVar1 = PTR_PTR_1126d3ad8;
                                func_0x00010bfb24c0(PTR_PTR_1126d3ad8,param_4,puVar6);
                                _objc_retainAutoreleasedReturnValue();
                                puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                puStack_690 = puVar1;
                                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                    &puStack_690,1);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010c040a80(puVar5,param_4,puVar2);
                                _objc_release(puVar2);
                                _objc_release(puVar1);
                                puVar3 = puVar6;
                                _objc_release();
                                param_3 = puVar5;
                                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_688) {
                                  ___stack_chk_fail();
                                  pcStack_698 = FUN_106fa4d2c;
                                  lStack_6c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                  puStack_6c0 = puVar2;
                                  puStack_6b8 = puVar1;
                                  puStack_6b0 = puVar6;
                                  puStack_6a8 = puVar5;
                                  ppuStack_6a0 = &ppuStack_660;
                                  _objc_alloc();
                                  puVar1 = PTR_PTR_1126d3ad8;
                                  puVar2 = PTR_PTR_1126d3ae0;
                                  _objc_alloc_init();
                                  func_0x00010bfc2ca0(puVar1,param_4,puVar2);
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar13 = 1;
                                  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                  puStack_6d0 = puVar1;
                                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                      &puStack_6d0,1);
                                  _objc_retainAutoreleasedReturnValue();
                                  puVar5 = puVar4;
                                  func_0x00010c040a80(puVar3,param_4,puVar4);
                                  _objc_release(puVar4);
                                  _objc_release(puVar1);
                                  _objc_release(puVar2);
                                  param_3 = puVar3;
                                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6c8) {
                                    ___stack_chk_fail();
                                    puVar1 = PTR_PTR_1126d3b20;
                                    lStack_728 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                    _objc_retain(uVar13);
                                    _objc_retain(puVar5);
                                    _objc_alloc_init(puVar1);
                                    func_0x00010c212460();
                                    _objc_release(uVar13);
                                    puVar3 = puVar5;
                                    func_0x00010bf6e340(puVar5);
                                    _objc_retainAutoreleasedReturnValue();
                                    _objc_release(puVar5);
                                    func_0x00010c212640(puVar1,param_4,puVar3);
                                    _objc_release(puVar3);
                                    param_1 = param_1 * 1000.0;
                                    if (param_1 <= 0.0) {
                                      param_1 = 0.0;
                                    }
                                    func_0x00010c215680(puVar1,param_4,(int)param_1);
                                    param_2 = param_2 * 1000.0;
                                    if (param_2 <= 0.0) {
                                      param_2 = 0.0;
                                    }
                                    func_0x00010c225ae0(puVar1,param_4,(int)param_2);
                                    _objc_alloc(puVar2);
                                    puVar3 = PTR_PTR_1126d3ad8;
                                    func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar1);
                                    _objc_retainAutoreleasedReturnValue();
                                    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                    puStack_730 = puVar3;
                                    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                        &puStack_730,1);
                                    _objc_retainAutoreleasedReturnValue();
                                    func_0x00010c040a80(puVar2,param_4,puVar4);
                                    _objc_release(puVar4);
                                    _objc_release(puVar3);
                                    _objc_release(puVar1);
                                    param_3 = puVar2;
                                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_728) {
                                      ___stack_chk_fail();
                                      return (undefined *)0x0;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 106fa38b8; end: 106fa3993; +[SCSpectaclesMalibuRequestMessage turnWiFiOff] */

undefined * FUN_106fa38b8(double param_1,double param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
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
  undefined8 uVar13;
  undefined *puStack_6f0;
  long lStack_6e8;
  undefined *puStack_690;
  long lStack_688;
  undefined *puStack_680;
  undefined *puStack_678;
  undefined *puStack_670;
  undefined *puStack_668;
  undefined8 **ppuStack_660;
  code *pcStack_658;
  undefined *puStack_650;
  long lStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined *puStack_630;
  undefined *puStack_628;
  undefined8 **ppuStack_620;
  code *pcStack_618;
  undefined *puStack_610;
  long lStack_608;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined *puStack_5f0;
  undefined *puStack_5e8;
  undefined8 **ppuStack_5e0;
  code *pcStack_5d8;
  undefined *puStack_5d0;
  long lStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5b0;
  undefined *puStack_5a8;
  undefined8 **ppuStack_5a0;
  code *pcStack_598;
  undefined *puStack_590;
  long lStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined8 **ppuStack_560;
  code *pcStack_558;
  undefined *puStack_550;
  long lStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined8 **ppuStack_520;
  code *pcStack_518;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined *puStack_4d0;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  long lStack_400;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined8 **ppuStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  long lStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined8 **ppuStack_360;
  code *pcStack_358;
  undefined *puStack_350;
  long lStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 **ppuStack_320;
  code *pcStack_318;
  undefined *puStack_308;
  undefined *puStack_300;
  long lStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 **ppuStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 **ppuStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  puVar1 = PTR_PTR_1126d3ae0;
  _objc_alloc_init();
  func_0x00010c2a5600(puVar2,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_3,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106fa3994;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_70 = puVar3;
    puStack_68 = puVar1;
    puStack_60 = puVar2;
    puStack_58 = param_3;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_alloc();
    puVar2 = PTR_PTR_1126d3ad8;
    puVar1 = PTR_PTR_1126d3ae0;
    _objc_alloc_init();
    func_0x00010bfa44e0(puVar2,param_4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar4,param_4,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar5 = puVar1;
    _objc_release();
    param_3 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      pcStack_88 = FUN_106fa3a70;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_b0 = puVar3;
      puStack_a8 = puVar1;
      puStack_a0 = puVar2;
      puStack_98 = puVar4;
      ppuStack_90 = &puStack_50;
      _objc_alloc();
      puVar2 = PTR_PTR_1126d3ad8;
      puVar1 = PTR_PTR_1126d3ae0;
      _objc_alloc_init();
      func_0x00010bfcfee0(puVar2,param_4,puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_c0 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_c0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040a80(puVar5,param_4,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release();
      param_3 = puVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
        ___stack_chk_fail();
        pcStack_c8 = FUN_106fa3b4c;
        lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar3 = PTR_PTR_1126d3af0;
        ppuStack_d0 = &ppuStack_90;
        _objc_alloc_init();
        puStack_190 = puVar3;
        func_0x00010c1ec220();
        _objc_alloc();
        puVar2 = PTR_PTR_1126d3ad8;
        puVar4 = PTR_PTR_1126d3af8;
        puStack_1a8 = puVar1;
        _objc_alloc_init();
        puStack_170 = puVar4;
        func_0x00010bfca120(puVar2,param_4,puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126d3ad8;
        puVar4 = PTR_PTR_1126d3ae0;
        puStack_178 = puVar2;
        puStack_168 = puVar2;
        _objc_alloc_init();
        puStack_180 = puVar4;
        func_0x00010bf1e960(puVar1,param_4,puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126d3ad8;
        puVar4 = PTR_PTR_1126d3ae0;
        puStack_188 = puVar1;
        puStack_160 = puVar1;
        _objc_alloc_init();
        puStack_198 = puVar4;
        func_0x00010bfccc40(puVar2,param_4,puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126d3ad8;
        puStack_1a0 = puVar2;
        puStack_158 = puVar2;
        func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126d3ad8;
        puVar6 = PTR_PTR_1126d3ae0;
        puStack_150 = puVar5;
        _objc_alloc_init();
        func_0x00010bf35ae0(puVar2,param_4,puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126d3ad8;
        puVar7 = PTR_PTR_1126d3ae0;
        puStack_148 = puVar2;
        _objc_alloc_init();
        func_0x00010bf21ee0(puVar1,param_4,puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126d3ad8;
        puVar8 = PTR_PTR_1126d3ae0;
        puStack_140 = puVar1;
        _objc_alloc_init();
        func_0x00010bfc7660(puVar3,param_4,puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126d3ad8;
        puVar9 = PTR_PTR_1126d3ae0;
        puStack_138 = puVar3;
        _objc_alloc_init();
        func_0x00010bfc5d20(puVar4,param_4,puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_130 = puVar4;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_168,8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c040a80(puStack_1a8,param_4,puVar10);
        _objc_release(puVar10);
        _objc_release(puVar4);
        _objc_release(puVar9);
        _objc_release(puVar3);
        _objc_release(puVar8);
        _objc_release(puVar1);
        _objc_release(puVar7);
        _objc_release(puVar2);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puStack_1a0);
        _objc_release(puStack_198);
        _objc_release(puStack_188);
        _objc_release(puStack_180);
        _objc_release(puStack_178);
        _objc_release(puStack_170);
        puVar11 = puStack_190;
        _objc_release();
        param_3 = puStack_1a8;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
          ___stack_chk_fail();
          pcStack_1b8 = FUN_106fa3dfc;
          lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puStack_1e0 = puVar1;
          puStack_1d8 = puVar10;
          puStack_1d0 = puVar7;
          puStack_1c8 = puVar3;
          ppuStack_1c0 = &ppuStack_d0;
          _objc_alloc();
          puVar1 = PTR_PTR_1126d3ad8;
          puVar3 = PTR_PTR_1126d3af8;
          _objc_alloc_init();
          func_0x00010bfca120(puVar1,param_4,puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_1f0 = puVar1;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_1f0,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c040a80(puVar11,param_4,puVar7);
          _objc_release(puVar7);
          _objc_release(puVar1);
          puVar10 = puVar3;
          _objc_release();
          param_3 = puVar11;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
            ___stack_chk_fail();
            pcStack_1f8 = FUN_106fa3ed8;
            lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puVar12 = PTR_PTR_1126d3af0;
            puStack_250 = puVar6;
            puStack_248 = puVar5;
            puStack_240 = puVar2;
            puStack_238 = puVar4;
            puStack_230 = puVar9;
            puStack_228 = puVar8;
            puStack_220 = puVar7;
            puStack_218 = puVar3;
            puStack_210 = puVar1;
            puStack_208 = puVar11;
            ppuStack_200 = &ppuStack_1c0;
            _objc_alloc_init();
            puStack_290 = puVar12;
            func_0x00010c1ec220();
            _objc_alloc();
            puVar1 = PTR_PTR_1126d3ad8;
            puStack_2b0 = puVar10;
            func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR_PTR_1126d3ad8;
            puVar3 = PTR_PTR_1126d3ae0;
            puStack_298 = puVar1;
            puStack_288 = puVar1;
            _objc_alloc_init();
            puStack_2a0 = puVar3;
            func_0x00010bf35ae0(puVar2,param_4,puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_PTR_1126d3ad8;
            puVar5 = PTR_PTR_1126d3ae0;
            puStack_2a8 = puVar2;
            puStack_280 = puVar2;
            _objc_alloc_init();
            func_0x00010bfcb140(puVar1,param_4,puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR_PTR_1126d3ad8;
            puVar6 = PTR_PTR_1126d3ae0;
            puStack_278 = puVar1;
            _objc_alloc_init();
            func_0x00010bfc35a0(puVar2,param_4,puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR_PTR_1126d3ad8;
            puVar7 = PTR_PTR_1126d3ae0;
            puStack_270 = puVar2;
            _objc_alloc_init();
            func_0x00010bfc7660(puVar3,param_4,puVar7);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR_PTR_1126d3ad8;
            puVar8 = PTR_PTR_1126d3ae0;
            puStack_268 = puVar3;
            _objc_alloc_init();
            func_0x00010bfc2c00(puVar4,param_4,puVar8);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_260 = puVar4;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_288,6);
            _objc_retainAutoreleasedReturnValue();
            param_3 = puStack_2b0;
            func_0x00010c040a80(puStack_2b0,param_4,puVar9);
            _objc_release(puVar9);
            _objc_release(puVar4);
            _objc_release(puVar8);
            _objc_release(puVar3);
            _objc_release(puVar7);
            _objc_release(puVar2);
            _objc_release(puVar6);
            _objc_release(puVar1);
            _objc_release(puVar5);
            _objc_release(puStack_2a8);
            _objc_release(puStack_2a0);
            _objc_release(puStack_298);
            puVar10 = puStack_290;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_258) {
              ___stack_chk_fail();
              pcStack_2b8 = FUN_106fa410c;
              lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
              puVar11 = PTR_PTR_1126d3af0;
              puStack_2f0 = param_3;
              puStack_2e8 = puVar5;
              puStack_2e0 = puVar4;
              puStack_2d8 = puVar8;
              puStack_2d0 = puVar7;
              puStack_2c8 = puVar9;
              ppuStack_2c0 = &ppuStack_200;
              _objc_alloc_init();
              func_0x00010c1ec220();
              _objc_alloc();
              puVar5 = PTR_PTR_1126d3ad8;
              func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar11);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR_PTR_1126d3ad8;
              puVar7 = PTR_PTR_1126d3ae0;
              puStack_308 = puVar5;
              _objc_alloc_init();
              func_0x00010bf35ae0(puVar4,param_4,puVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_300 = puVar4;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_308,2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c040a80(puVar10,param_4,puVar8);
              _objc_release(puVar8);
              _objc_release(puVar4);
              _objc_release(puVar7);
              _objc_release(puVar5);
              puVar9 = puVar11;
              _objc_release();
              param_3 = puVar10;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
                ___stack_chk_fail();
                pcStack_318 = FUN_106fa423c;
                lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
                puVar12 = PTR_PTR_1126d3af0;
                puStack_340 = puVar4;
                puStack_338 = puVar5;
                puStack_330 = puVar10;
                puStack_328 = puVar11;
                ppuStack_320 = &ppuStack_2c0;
                _objc_alloc_init();
                func_0x00010c1ec220();
                func_0x00010c189920(puVar12,param_4,1);
                func_0x00010c2027c0(puVar12,param_4,1);
                _objc_alloc();
                puVar4 = PTR_PTR_1126d3ad8;
                func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_350 = puVar4;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_350,1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c040a80(puVar9,param_4,puVar5);
                _objc_release(puVar5);
                _objc_release(puVar4);
                puVar10 = puVar12;
                _objc_release();
                param_3 = puVar9;
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
                  ___stack_chk_fail();
                  pcStack_358 = FUN_106fa433c;
                  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  puVar11 = PTR_PTR_1126d3af0;
                  puStack_380 = puVar5;
                  puStack_378 = puVar4;
                  puStack_370 = puVar9;
                  puStack_368 = puVar12;
                  ppuStack_360 = &ppuStack_320;
                  _objc_alloc_init();
                  func_0x00010c1ec220();
                  func_0x00010c189920(puVar11,param_4,1);
                  func_0x00010c2027c0(puVar11,param_4,2);
                  _objc_alloc();
                  puVar4 = PTR_PTR_1126d3ad8;
                  func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar11);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
                  puStack_390 = puVar4;
                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_390,1);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c040a80(puVar10,param_4,puVar5);
                  _objc_release(puVar5);
                  _objc_release(puVar4);
                  puVar9 = puVar11;
                  _objc_release();
                  param_3 = puVar10;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_388) {
                    ___stack_chk_fail();
                    pcStack_398 = FUN_106fa443c;
                    lStack_400 = *(long *)PTR____stack_chk_guard_11034bdc0;
                    puVar12 = PTR_PTR_1126d3af0;
                    puStack_470 = puVar9;
                    puStack_3f0 = puVar3;
                    puStack_3e8 = puVar2;
                    puStack_3e0 = puVar6;
                    puStack_3d8 = puVar1;
                    puStack_3d0 = puVar8;
                    puStack_3c8 = puVar7;
                    puStack_3c0 = puVar5;
                    puStack_3b8 = puVar4;
                    puStack_3b0 = puVar10;
                    puStack_3a8 = puVar11;
                    ppuStack_3a0 = &ppuStack_360;
                    _objc_alloc_init();
                    puStack_488 = puVar12;
                    func_0x00010c1ec220();
                    puVar3 = PTR_PTR_1126d3b00;
                    _objc_alloc_init();
                    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
                    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c26f320();
                    func_0x00010c2156a0(puVar3,param_4,(long)param_1);
                    _objc_release(puVar2);
                    puVar2 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
                    func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
                    _objc_retainAutoreleasedReturnValue();
                    puVar1 = puVar2;
                    func_0x00010c1552e0();
                    puStack_4b0 = puVar3;
                    func_0x00010c215860(puVar3,param_4,puVar1);
                    _objc_release(puVar2);
                    puVar4 = PTR_PTR_1126d3b08;
                    _objc_alloc_init();
                    puStack_4e0 = puVar4;
                    func_0x00010c173020();
                    puVar2 = PTR_PTR_1126d3ad8;
                    puStack_4c8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                    puVar1 = PTR_PTR_1126d3af8;
                    _objc_alloc_init();
                    puStack_478 = puVar1;
                    func_0x00010bfca120(puVar2,param_4,puVar1);
                    _objc_retainAutoreleasedReturnValue();
                    puVar1 = PTR_PTR_1126d3ad8;
                    puVar5 = PTR_PTR_1126d3ae0;
                    puStack_480 = puVar2;
                    puStack_468 = puVar2;
                    _objc_alloc_init();
                    puStack_490 = puVar5;
                    func_0x00010bfc5d20(puVar1,param_4,puVar5);
                    _objc_retainAutoreleasedReturnValue();
                    puVar2 = PTR_PTR_1126d3ad8;
                    puVar5 = PTR_PTR_1126d3ae0;
                    puStack_498 = puVar1;
                    puStack_460 = puVar1;
                    _objc_alloc_init();
                    puStack_4a0 = puVar5;
                    func_0x00010bfccc40(puVar2,param_4,puVar5);
                    _objc_retainAutoreleasedReturnValue();
                    puVar1 = PTR_PTR_1126d3ad8;
                    puStack_4a8 = puVar2;
                    puStack_458 = puVar2;
                    func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
                    _objc_retainAutoreleasedReturnValue();
                    puVar2 = PTR_PTR_1126d3ad8;
                    puVar5 = PTR_PTR_1126d3ae0;
                    puStack_4b8 = puVar1;
                    puStack_450 = puVar1;
                    _objc_alloc_init();
                    puStack_4c0 = puVar5;
                    func_0x00010bf35ae0(puVar2,param_4,puVar5);
                    _objc_retainAutoreleasedReturnValue();
                    puVar1 = PTR_PTR_1126d3ad8;
                    puVar5 = PTR_PTR_1126d3ae0;
                    puStack_4d0 = puVar2;
                    puStack_448 = puVar2;
                    _objc_alloc_init();
                    puStack_4d8 = puVar5;
                    func_0x00010bfcb140(puVar1,param_4,puVar5);
                    _objc_retainAutoreleasedReturnValue();
                    puVar2 = PTR_PTR_1126d3ad8;
                    puVar5 = PTR_PTR_1126d3ae0;
                    puStack_4e8 = puVar1;
                    puStack_440 = puVar1;
                    _objc_alloc_init();
                    puStack_4f0 = puVar5;
                    func_0x00010bfc35a0(puVar2,param_4,puVar5);
                    _objc_retainAutoreleasedReturnValue();
                    puVar1 = PTR_PTR_1126d3ad8;
                    puStack_4f8 = puVar2;
                    puStack_438 = puVar2;
                    func_0x00010c214bc0(PTR_PTR_1126d3ad8,param_4,puVar3);
                    _objc_retainAutoreleasedReturnValue();
                    puVar2 = PTR_PTR_1126d3ad8;
                    puVar3 = PTR_PTR_1126d3ae0;
                    puStack_500 = puVar1;
                    puStack_430 = puVar1;
                    _objc_alloc_init();
                    puStack_508 = puVar3;
                    func_0x00010bfc7660(puVar2,param_4,puVar3);
                    _objc_retainAutoreleasedReturnValue();
                    puVar1 = PTR_PTR_1126d3ad8;
                    puVar5 = PTR_PTR_1126d3ae0;
                    puStack_428 = puVar2;
                    _objc_alloc_init(PTR_PTR_1126d3ae0);
                    func_0x00010bf1e960(puVar1,param_4,puVar5);
                    _objc_retainAutoreleasedReturnValue();
                    puVar6 = PTR_PTR_1126d3ad8;
                    puStack_420 = puVar1;
                    func_0x00010bf906c0(PTR_PTR_1126d3ad8,param_4,puVar4);
                    _objc_retainAutoreleasedReturnValue();
                    puVar3 = PTR_PTR_1126d3ad8;
                    puVar7 = PTR_PTR_1126d3ae0;
                    puStack_418 = puVar6;
                    _objc_alloc_init(PTR_PTR_1126d3ae0);
                    func_0x00010bfc6ca0(puVar3,param_4,puVar7);
                    _objc_retainAutoreleasedReturnValue();
                    puVar4 = PTR_PTR_1126d3ad8;
                    puVar8 = PTR_PTR_1126d3ae0;
                    puStack_410 = puVar3;
                    _objc_alloc_init(PTR_PTR_1126d3ae0);
                    func_0x00010bfc2c00(puVar4,param_4,puVar8);
                    _objc_retainAutoreleasedReturnValue();
                    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
                    puStack_408 = puVar4;
                    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_468,0xd
                                       );
                    _objc_retainAutoreleasedReturnValue();
                    puVar10 = puStack_4c8;
                    func_0x00010bf0a0c0(puStack_4c8,param_4,puVar9);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar9);
                    _objc_release(puVar4);
                    _objc_release(puVar8);
                    _objc_release(puVar3);
                    _objc_release(puVar7);
                    _objc_release(puVar6);
                    _objc_release(puVar1);
                    _objc_release(puVar5);
                    _objc_release(puVar2);
                    _objc_release(puStack_508);
                    _objc_release(puStack_500);
                    _objc_release(puStack_4f8);
                    _objc_release(puStack_4f0);
                    _objc_release(puStack_4e8);
                    _objc_release(puStack_4d8);
                    _objc_release(puStack_4d0);
                    _objc_release(puStack_4c0);
                    _objc_release(puStack_4b8);
                    _objc_release(puStack_4a8);
                    _objc_release(puStack_4a0);
                    _objc_release(puStack_498);
                    _objc_release(puStack_490);
                    _objc_release(puStack_480);
                    _objc_release(puStack_478);
                    param_3 = puStack_470;
                    _objc_alloc();
                    puVar3 = puVar10;
                    func_0x00010c040a80();
                    _objc_release(puVar10);
                    _objc_release(puStack_4e0);
                    _objc_release(puStack_4b0);
                    puVar1 = puStack_488;
                    _objc_release();
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_400) {
                      ___stack_chk_fail();
                      puVar5 = PTR_PTR_1126d3b10;
                      pcStack_518 = FUN_106fa48b0;
                      lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
                      puStack_540 = puVar4;
                      puStack_538 = puVar10;
                      puStack_530 = puVar2;
                      puStack_528 = param_3;
                      ppuStack_520 = &ppuStack_3a0;
                      _objc_retain(puVar3);
                      _objc_alloc_init();
                      func_0x00010c1cafa0();
                      _objc_release(puVar3);
                      _objc_alloc();
                      puVar2 = PTR_PTR_1126d3ad8;
                      func_0x00010c1cafa0(PTR_PTR_1126d3ad8,param_4,puVar5);
                      _objc_retainAutoreleasedReturnValue();
                      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                      puStack_550 = puVar2;
                      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_550,1
                                         );
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c040a80(puVar1,param_4,puVar3);
                      _objc_release(puVar3);
                      _objc_release(puVar2);
                      puVar4 = puVar5;
                      _objc_release();
                      param_3 = puVar1;
                      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_548) {
                        ___stack_chk_fail();
                        pcStack_558 = FUN_106fa49b0;
                        lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
                        puStack_580 = puVar3;
                        puStack_578 = puVar5;
                        puStack_570 = puVar2;
                        puStack_568 = puVar1;
                        ppuStack_560 = &ppuStack_520;
                        _objc_alloc();
                        puVar2 = PTR_PTR_1126d3ad8;
                        puVar1 = PTR_PTR_1126d3ae0;
                        _objc_alloc_init();
                        func_0x00010bfc59a0(puVar2,param_4,puVar1);
                        _objc_retainAutoreleasedReturnValue();
                        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                        puStack_590 = puVar2;
                        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_590
                                            ,1);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c040a80(puVar4,param_4,puVar3);
                        _objc_release(puVar3);
                        _objc_release(puVar2);
                        puVar5 = puVar1;
                        _objc_release();
                        param_3 = puVar4;
                        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_588) {
                          ___stack_chk_fail();
                          pcStack_598 = FUN_106fa4a8c;
                          lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                          puStack_5c0 = puVar3;
                          puStack_5b8 = puVar1;
                          puStack_5b0 = puVar2;
                          puStack_5a8 = puVar4;
                          ppuStack_5a0 = &ppuStack_560;
                          _objc_alloc();
                          puVar2 = PTR_PTR_1126d3ad8;
                          puVar1 = PTR_PTR_1126d3ae0;
                          _objc_alloc_init();
                          func_0x00010bf08480(puVar2,param_4,puVar1);
                          _objc_retainAutoreleasedReturnValue();
                          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                          puStack_5d0 = puVar2;
                          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                              &puStack_5d0,1);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c040a80(puVar5,param_4,puVar3);
                          _objc_release(puVar3);
                          _objc_release(puVar2);
                          puVar4 = puVar1;
                          _objc_release();
                          param_3 = puVar5;
                          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5c8) {
                            ___stack_chk_fail();
                            pcStack_5d8 = FUN_106fa4b68;
                            lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
                            puStack_600 = puVar3;
                            puStack_5f8 = puVar1;
                            puStack_5f0 = puVar2;
                            puStack_5e8 = puVar5;
                            ppuStack_5e0 = &ppuStack_5a0;
                            _objc_alloc();
                            puVar2 = PTR_PTR_1126d3ad8;
                            puVar1 = PTR_PTR_1126d3ae0;
                            _objc_alloc_init();
                            func_0x00010c263e60(puVar2,param_4,puVar1);
                            _objc_retainAutoreleasedReturnValue();
                            puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                            puStack_610 = puVar2;
                            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                &puStack_610,1);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c040a80(puVar4,param_4,puVar3);
                            _objc_release(puVar3);
                            _objc_release(puVar2);
                            puVar5 = puVar1;
                            _objc_release();
                            param_3 = puVar4;
                            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_608) {
                              ___stack_chk_fail();
                              pcStack_618 = FUN_106fa4c44;
                              lStack_648 = *(long *)PTR____stack_chk_guard_11034bdc0;
                              puVar6 = PTR_PTR_1126d3b18;
                              puStack_640 = puVar3;
                              puStack_638 = puVar1;
                              puStack_630 = puVar2;
                              puStack_628 = puVar4;
                              ppuStack_620 = &ppuStack_5e0;
                              _objc_alloc_init();
                              func_0x00010c18d400();
                              _objc_alloc();
                              puVar2 = PTR_PTR_1126d3ad8;
                              func_0x00010bfb24c0(PTR_PTR_1126d3ad8,param_4,puVar6);
                              _objc_retainAutoreleasedReturnValue();
                              puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
                              puStack_650 = puVar2;
                              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                  &puStack_650,1);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010c040a80(puVar5,param_4,puVar1);
                              _objc_release(puVar1);
                              _objc_release(puVar2);
                              puVar3 = puVar6;
                              _objc_release();
                              param_3 = puVar5;
                              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_648) {
                                ___stack_chk_fail();
                                pcStack_658 = FUN_106fa4d2c;
                                lStack_688 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                puStack_680 = puVar1;
                                puStack_678 = puVar2;
                                puStack_670 = puVar6;
                                puStack_668 = puVar5;
                                ppuStack_660 = &ppuStack_620;
                                _objc_alloc();
                                puVar2 = PTR_PTR_1126d3ad8;
                                puVar1 = PTR_PTR_1126d3ae0;
                                _objc_alloc_init();
                                func_0x00010bfc2ca0(puVar2,param_4,puVar1);
                                _objc_retainAutoreleasedReturnValue();
                                uVar13 = 1;
                                puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                puStack_690 = puVar2;
                                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                    &puStack_690,1);
                                _objc_retainAutoreleasedReturnValue();
                                puVar5 = puVar4;
                                func_0x00010c040a80(puVar3,param_4,puVar4);
                                _objc_release(puVar4);
                                _objc_release(puVar2);
                                _objc_release(puVar1);
                                param_3 = puVar3;
                                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_688) {
                                  ___stack_chk_fail();
                                  puVar2 = PTR_PTR_1126d3b20;
                                  lStack_6e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                  _objc_retain(uVar13);
                                  _objc_retain(puVar5);
                                  _objc_alloc_init(puVar2);
                                  func_0x00010c212460();
                                  _objc_release(uVar13);
                                  puVar3 = puVar5;
                                  func_0x00010bf6e340(puVar5);
                                  _objc_retainAutoreleasedReturnValue();
                                  _objc_release(puVar5);
                                  func_0x00010c212640(puVar2,param_4,puVar3);
                                  _objc_release(puVar3);
                                  param_1 = param_1 * 1000.0;
                                  if (param_1 <= 0.0) {
                                    param_1 = 0.0;
                                  }
                                  func_0x00010c215680(puVar2,param_4,(int)param_1);
                                  param_2 = param_2 * 1000.0;
                                  if (param_2 <= 0.0) {
                                    param_2 = 0.0;
                                  }
                                  func_0x00010c225ae0(puVar2,param_4,(int)param_2);
                                  _objc_alloc(puVar1);
                                  puVar3 = PTR_PTR_1126d3ad8;
                                  func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar2);
                                  _objc_retainAutoreleasedReturnValue();
                                  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                  puStack_6f0 = puVar3;
                                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                      &puStack_6f0,1);
                                  _objc_retainAutoreleasedReturnValue();
                                  func_0x00010c040a80(puVar1,param_4,puVar4);
                                  _objc_release(puVar4);
                                  _objc_release(puVar3);
                                  _objc_release(puVar2);
                                  param_3 = puVar1;
                                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6e8) {
                                    ___stack_chk_fail();
                                    return (undefined *)0x0;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 106fa3994; end: 106fa3a6f; +[SCSpectaclesMalibuRequestMessage ambaWatchdogKick] */

undefined * FUN_106fa3994(double param_1,double param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
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
  undefined8 uVar13;
  undefined *puStack_6b0;
  long lStack_6a8;
  undefined *puStack_650;
  long lStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined *puStack_630;
  undefined *puStack_628;
  undefined8 **ppuStack_620;
  code *pcStack_618;
  undefined *puStack_610;
  long lStack_608;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined *puStack_5f0;
  undefined *puStack_5e8;
  undefined8 **ppuStack_5e0;
  code *pcStack_5d8;
  undefined *puStack_5d0;
  long lStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5b0;
  undefined *puStack_5a8;
  undefined8 **ppuStack_5a0;
  code *pcStack_598;
  undefined *puStack_590;
  long lStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined8 **ppuStack_560;
  code *pcStack_558;
  undefined *puStack_550;
  long lStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined8 **ppuStack_520;
  code *pcStack_518;
  undefined *puStack_510;
  long lStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined8 **ppuStack_4e0;
  code *pcStack_4d8;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  long lStack_3c0;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined8 **ppuStack_360;
  code *pcStack_358;
  undefined *puStack_350;
  long lStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 **ppuStack_320;
  code *pcStack_318;
  undefined *puStack_310;
  long lStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 **ppuStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  long lStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 **ppuStack_180;
  code *pcStack_178;
  undefined *puStack_168;
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
  long lStack_e8;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  puVar1 = PTR_PTR_1126d3ae0;
  _objc_alloc_init();
  func_0x00010bfa44e0(puVar2,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_3,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106fa3a70;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_70 = puVar3;
    puStack_68 = puVar1;
    puStack_60 = puVar2;
    puStack_58 = param_3;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_alloc();
    puVar2 = PTR_PTR_1126d3ad8;
    puVar1 = PTR_PTR_1126d3ae0;
    _objc_alloc_init();
    func_0x00010bfcfee0(puVar2,param_4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar4,param_4,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
    param_3 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      pcStack_88 = FUN_106fa3b4c;
      lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar3 = PTR_PTR_1126d3af0;
      ppuStack_90 = &puStack_50;
      _objc_alloc_init();
      puStack_150 = puVar3;
      func_0x00010c1ec220();
      _objc_alloc();
      puVar2 = PTR_PTR_1126d3ad8;
      puVar4 = PTR_PTR_1126d3af8;
      puStack_168 = puVar1;
      _objc_alloc_init();
      puStack_130 = puVar4;
      func_0x00010bfca120(puVar2,param_4,puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126d3ad8;
      puVar4 = PTR_PTR_1126d3ae0;
      puStack_138 = puVar2;
      puStack_128 = puVar2;
      _objc_alloc_init();
      puStack_140 = puVar4;
      func_0x00010bf1e960(puVar1,param_4,puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126d3ad8;
      puVar4 = PTR_PTR_1126d3ae0;
      puStack_148 = puVar1;
      puStack_120 = puVar1;
      _objc_alloc_init();
      puStack_158 = puVar4;
      func_0x00010bfccc40(puVar2,param_4,puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126d3ad8;
      puStack_160 = puVar2;
      puStack_118 = puVar2;
      func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126d3ad8;
      puVar6 = PTR_PTR_1126d3ae0;
      puStack_110 = puVar5;
      _objc_alloc_init();
      func_0x00010bf35ae0(puVar2,param_4,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126d3ad8;
      puVar7 = PTR_PTR_1126d3ae0;
      puStack_108 = puVar2;
      _objc_alloc_init();
      func_0x00010bf21ee0(puVar1,param_4,puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126d3ad8;
      puVar8 = PTR_PTR_1126d3ae0;
      puStack_100 = puVar1;
      _objc_alloc_init();
      func_0x00010bfc7660(puVar3,param_4,puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126d3ad8;
      puVar9 = PTR_PTR_1126d3ae0;
      puStack_f8 = puVar3;
      _objc_alloc_init();
      func_0x00010bfc5d20(puVar4,param_4,puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_f0 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_128,8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040a80(puStack_168,param_4,puVar10);
      _objc_release(puVar10);
      _objc_release(puVar4);
      _objc_release(puVar9);
      _objc_release(puVar3);
      _objc_release(puVar8);
      _objc_release(puVar1);
      _objc_release(puVar7);
      _objc_release(puVar2);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puStack_160);
      _objc_release(puStack_158);
      _objc_release(puStack_148);
      _objc_release(puStack_140);
      _objc_release(puStack_138);
      _objc_release(puStack_130);
      puVar11 = puStack_150;
      _objc_release();
      param_3 = puStack_168;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
        ___stack_chk_fail();
        pcStack_178 = FUN_106fa3dfc;
        lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_1a0 = puVar1;
        puStack_198 = puVar10;
        puStack_190 = puVar7;
        puStack_188 = puVar3;
        ppuStack_180 = &ppuStack_90;
        _objc_alloc();
        puVar1 = PTR_PTR_1126d3ad8;
        puVar3 = PTR_PTR_1126d3af8;
        _objc_alloc_init();
        func_0x00010bfca120(puVar1,param_4,puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_1b0 = puVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_1b0,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c040a80(puVar11,param_4,puVar7);
        _objc_release(puVar7);
        _objc_release(puVar1);
        puVar10 = puVar3;
        _objc_release();
        param_3 = puVar11;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
          ___stack_chk_fail();
          pcStack_1b8 = FUN_106fa3ed8;
          lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar12 = PTR_PTR_1126d3af0;
          puStack_210 = puVar6;
          puStack_208 = puVar5;
          puStack_200 = puVar2;
          puStack_1f8 = puVar4;
          puStack_1f0 = puVar9;
          puStack_1e8 = puVar8;
          puStack_1e0 = puVar7;
          puStack_1d8 = puVar3;
          puStack_1d0 = puVar1;
          puStack_1c8 = puVar11;
          ppuStack_1c0 = &ppuStack_180;
          _objc_alloc_init();
          puStack_250 = puVar12;
          func_0x00010c1ec220();
          _objc_alloc();
          puVar1 = PTR_PTR_1126d3ad8;
          puStack_270 = puVar10;
          func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126d3ad8;
          puVar3 = PTR_PTR_1126d3ae0;
          puStack_258 = puVar1;
          puStack_248 = puVar1;
          _objc_alloc_init();
          puStack_260 = puVar3;
          func_0x00010bf35ae0(puVar2,param_4,puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126d3ad8;
          puVar5 = PTR_PTR_1126d3ae0;
          puStack_268 = puVar2;
          puStack_240 = puVar2;
          _objc_alloc_init();
          func_0x00010bfcb140(puVar1,param_4,puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126d3ad8;
          puVar6 = PTR_PTR_1126d3ae0;
          puStack_238 = puVar1;
          _objc_alloc_init();
          func_0x00010bfc35a0(puVar2,param_4,puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126d3ad8;
          puVar7 = PTR_PTR_1126d3ae0;
          puStack_230 = puVar2;
          _objc_alloc_init();
          func_0x00010bfc7660(puVar3,param_4,puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126d3ad8;
          puVar8 = PTR_PTR_1126d3ae0;
          puStack_228 = puVar3;
          _objc_alloc_init();
          func_0x00010bfc2c00(puVar4,param_4,puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_220 = puVar4;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_248,6);
          _objc_retainAutoreleasedReturnValue();
          param_3 = puStack_270;
          func_0x00010c040a80(puStack_270,param_4,puVar9);
          _objc_release(puVar9);
          _objc_release(puVar4);
          _objc_release(puVar8);
          _objc_release(puVar3);
          _objc_release(puVar7);
          _objc_release(puVar2);
          _objc_release(puVar6);
          _objc_release(puVar1);
          _objc_release(puVar5);
          _objc_release(puStack_268);
          _objc_release(puStack_260);
          _objc_release(puStack_258);
          puVar10 = puStack_250;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
            ___stack_chk_fail();
            pcStack_278 = FUN_106fa410c;
            lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puVar11 = PTR_PTR_1126d3af0;
            puStack_2b0 = param_3;
            puStack_2a8 = puVar5;
            puStack_2a0 = puVar4;
            puStack_298 = puVar8;
            puStack_290 = puVar7;
            puStack_288 = puVar9;
            ppuStack_280 = &ppuStack_1c0;
            _objc_alloc_init();
            func_0x00010c1ec220();
            _objc_alloc();
            puVar5 = PTR_PTR_1126d3ad8;
            func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar11);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR_PTR_1126d3ad8;
            puVar7 = PTR_PTR_1126d3ae0;
            puStack_2c8 = puVar5;
            _objc_alloc_init();
            func_0x00010bf35ae0(puVar4,param_4,puVar7);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_2c0 = puVar4;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_2c8,2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c040a80(puVar10,param_4,puVar8);
            _objc_release(puVar8);
            _objc_release(puVar4);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar9 = puVar11;
            _objc_release();
            param_3 = puVar10;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b8) {
              ___stack_chk_fail();
              pcStack_2d8 = FUN_106fa423c;
              lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
              puVar12 = PTR_PTR_1126d3af0;
              puStack_300 = puVar4;
              puStack_2f8 = puVar5;
              puStack_2f0 = puVar10;
              puStack_2e8 = puVar11;
              ppuStack_2e0 = &ppuStack_280;
              _objc_alloc_init();
              func_0x00010c1ec220();
              func_0x00010c189920(puVar12,param_4,1);
              func_0x00010c2027c0(puVar12,param_4,1);
              _objc_alloc();
              puVar4 = PTR_PTR_1126d3ad8;
              func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_310 = puVar4;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_310,1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c040a80(puVar9,param_4,puVar5);
              _objc_release(puVar5);
              _objc_release(puVar4);
              puVar10 = puVar12;
              _objc_release();
              param_3 = puVar9;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
                ___stack_chk_fail();
                pcStack_318 = FUN_106fa433c;
                lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
                puVar11 = PTR_PTR_1126d3af0;
                puStack_340 = puVar5;
                puStack_338 = puVar4;
                puStack_330 = puVar9;
                puStack_328 = puVar12;
                ppuStack_320 = &ppuStack_2e0;
                _objc_alloc_init();
                func_0x00010c1ec220();
                func_0x00010c189920(puVar11,param_4,1);
                func_0x00010c2027c0(puVar11,param_4,2);
                _objc_alloc();
                puVar4 = PTR_PTR_1126d3ad8;
                func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar11);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_350 = puVar4;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_350,1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c040a80(puVar10,param_4,puVar5);
                _objc_release(puVar5);
                _objc_release(puVar4);
                puVar9 = puVar11;
                _objc_release();
                param_3 = puVar10;
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
                  ___stack_chk_fail();
                  pcStack_358 = FUN_106fa443c;
                  lStack_3c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  puVar12 = PTR_PTR_1126d3af0;
                  puStack_430 = puVar9;
                  puStack_3b0 = puVar3;
                  puStack_3a8 = puVar2;
                  puStack_3a0 = puVar6;
                  puStack_398 = puVar1;
                  puStack_390 = puVar8;
                  puStack_388 = puVar7;
                  puStack_380 = puVar5;
                  puStack_378 = puVar4;
                  puStack_370 = puVar10;
                  puStack_368 = puVar11;
                  ppuStack_360 = &ppuStack_320;
                  _objc_alloc_init();
                  puStack_448 = puVar12;
                  func_0x00010c1ec220();
                  puVar3 = PTR_PTR_1126d3b00;
                  _objc_alloc_init();
                  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
                  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c26f320();
                  func_0x00010c2156a0(puVar3,param_4,(long)param_1);
                  _objc_release(puVar2);
                  puVar2 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
                  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
                  _objc_retainAutoreleasedReturnValue();
                  puVar1 = puVar2;
                  func_0x00010c1552e0();
                  puStack_470 = puVar3;
                  func_0x00010c215860(puVar3,param_4,puVar1);
                  _objc_release(puVar2);
                  puVar4 = PTR_PTR_1126d3b08;
                  _objc_alloc_init();
                  puStack_4a0 = puVar4;
                  func_0x00010c173020();
                  puVar2 = PTR_PTR_1126d3ad8;
                  puStack_488 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                  puVar1 = PTR_PTR_1126d3af8;
                  _objc_alloc_init();
                  puStack_438 = puVar1;
                  func_0x00010bfca120(puVar2,param_4,puVar1);
                  _objc_retainAutoreleasedReturnValue();
                  puVar1 = PTR_PTR_1126d3ad8;
                  puVar5 = PTR_PTR_1126d3ae0;
                  puStack_440 = puVar2;
                  puStack_428 = puVar2;
                  _objc_alloc_init();
                  puStack_450 = puVar5;
                  func_0x00010bfc5d20(puVar1,param_4,puVar5);
                  _objc_retainAutoreleasedReturnValue();
                  puVar2 = PTR_PTR_1126d3ad8;
                  puVar5 = PTR_PTR_1126d3ae0;
                  puStack_458 = puVar1;
                  puStack_420 = puVar1;
                  _objc_alloc_init();
                  puStack_460 = puVar5;
                  func_0x00010bfccc40(puVar2,param_4,puVar5);
                  _objc_retainAutoreleasedReturnValue();
                  puVar1 = PTR_PTR_1126d3ad8;
                  puStack_468 = puVar2;
                  puStack_418 = puVar2;
                  func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
                  _objc_retainAutoreleasedReturnValue();
                  puVar2 = PTR_PTR_1126d3ad8;
                  puVar5 = PTR_PTR_1126d3ae0;
                  puStack_478 = puVar1;
                  puStack_410 = puVar1;
                  _objc_alloc_init();
                  puStack_480 = puVar5;
                  func_0x00010bf35ae0(puVar2,param_4,puVar5);
                  _objc_retainAutoreleasedReturnValue();
                  puVar1 = PTR_PTR_1126d3ad8;
                  puVar5 = PTR_PTR_1126d3ae0;
                  puStack_490 = puVar2;
                  puStack_408 = puVar2;
                  _objc_alloc_init();
                  puStack_498 = puVar5;
                  func_0x00010bfcb140(puVar1,param_4,puVar5);
                  _objc_retainAutoreleasedReturnValue();
                  puVar2 = PTR_PTR_1126d3ad8;
                  puVar5 = PTR_PTR_1126d3ae0;
                  puStack_4a8 = puVar1;
                  puStack_400 = puVar1;
                  _objc_alloc_init();
                  puStack_4b0 = puVar5;
                  func_0x00010bfc35a0(puVar2,param_4,puVar5);
                  _objc_retainAutoreleasedReturnValue();
                  puVar1 = PTR_PTR_1126d3ad8;
                  puStack_4b8 = puVar2;
                  puStack_3f8 = puVar2;
                  func_0x00010c214bc0(PTR_PTR_1126d3ad8,param_4,puVar3);
                  _objc_retainAutoreleasedReturnValue();
                  puVar2 = PTR_PTR_1126d3ad8;
                  puVar3 = PTR_PTR_1126d3ae0;
                  puStack_4c0 = puVar1;
                  puStack_3f0 = puVar1;
                  _objc_alloc_init();
                  puStack_4c8 = puVar3;
                  func_0x00010bfc7660(puVar2,param_4,puVar3);
                  _objc_retainAutoreleasedReturnValue();
                  puVar1 = PTR_PTR_1126d3ad8;
                  puVar5 = PTR_PTR_1126d3ae0;
                  puStack_3e8 = puVar2;
                  _objc_alloc_init(PTR_PTR_1126d3ae0);
                  func_0x00010bf1e960(puVar1,param_4,puVar5);
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = PTR_PTR_1126d3ad8;
                  puStack_3e0 = puVar1;
                  func_0x00010bf906c0(PTR_PTR_1126d3ad8,param_4,puVar4);
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = PTR_PTR_1126d3ad8;
                  puVar7 = PTR_PTR_1126d3ae0;
                  puStack_3d8 = puVar6;
                  _objc_alloc_init(PTR_PTR_1126d3ae0);
                  func_0x00010bfc6ca0(puVar3,param_4,puVar7);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = PTR_PTR_1126d3ad8;
                  puVar8 = PTR_PTR_1126d3ae0;
                  puStack_3d0 = puVar3;
                  _objc_alloc_init(PTR_PTR_1126d3ae0);
                  func_0x00010bfc2c00(puVar4,param_4,puVar8);
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
                  puStack_3c8 = puVar4;
                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_428,0xd);
                  _objc_retainAutoreleasedReturnValue();
                  puVar10 = puStack_488;
                  func_0x00010bf0a0c0(puStack_488,param_4,puVar9);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar9);
                  _objc_release(puVar4);
                  _objc_release(puVar8);
                  _objc_release(puVar3);
                  _objc_release(puVar7);
                  _objc_release(puVar6);
                  _objc_release(puVar1);
                  _objc_release(puVar5);
                  _objc_release(puVar2);
                  _objc_release(puStack_4c8);
                  _objc_release(puStack_4c0);
                  _objc_release(puStack_4b8);
                  _objc_release(puStack_4b0);
                  _objc_release(puStack_4a8);
                  _objc_release(puStack_498);
                  _objc_release(puStack_490);
                  _objc_release(puStack_480);
                  _objc_release(puStack_478);
                  _objc_release(puStack_468);
                  _objc_release(puStack_460);
                  _objc_release(puStack_458);
                  _objc_release(puStack_450);
                  _objc_release(puStack_440);
                  _objc_release(puStack_438);
                  param_3 = puStack_430;
                  _objc_alloc();
                  puVar3 = puVar10;
                  func_0x00010c040a80();
                  _objc_release(puVar10);
                  _objc_release(puStack_4a0);
                  _objc_release(puStack_470);
                  puVar1 = puStack_448;
                  _objc_release();
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c0) {
                    ___stack_chk_fail();
                    puVar5 = PTR_PTR_1126d3b10;
                    pcStack_4d8 = FUN_106fa48b0;
                    lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
                    puStack_500 = puVar4;
                    puStack_4f8 = puVar10;
                    puStack_4f0 = puVar2;
                    puStack_4e8 = param_3;
                    ppuStack_4e0 = &ppuStack_360;
                    _objc_retain(puVar3);
                    _objc_alloc_init();
                    func_0x00010c1cafa0();
                    _objc_release(puVar3);
                    _objc_alloc();
                    puVar2 = PTR_PTR_1126d3ad8;
                    func_0x00010c1cafa0(PTR_PTR_1126d3ad8,param_4,puVar5);
                    _objc_retainAutoreleasedReturnValue();
                    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                    puStack_510 = puVar2;
                    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_510,1);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c040a80(puVar1,param_4,puVar3);
                    _objc_release(puVar3);
                    _objc_release(puVar2);
                    puVar4 = puVar5;
                    _objc_release();
                    param_3 = puVar1;
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_508) {
                      ___stack_chk_fail();
                      pcStack_518 = FUN_106fa49b0;
                      lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
                      puStack_540 = puVar3;
                      puStack_538 = puVar5;
                      puStack_530 = puVar2;
                      puStack_528 = puVar1;
                      ppuStack_520 = &ppuStack_4e0;
                      _objc_alloc();
                      puVar2 = PTR_PTR_1126d3ad8;
                      puVar1 = PTR_PTR_1126d3ae0;
                      _objc_alloc_init();
                      func_0x00010bfc59a0(puVar2,param_4,puVar1);
                      _objc_retainAutoreleasedReturnValue();
                      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                      puStack_550 = puVar2;
                      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_550,1
                                         );
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c040a80(puVar4,param_4,puVar3);
                      _objc_release(puVar3);
                      _objc_release(puVar2);
                      puVar5 = puVar1;
                      _objc_release();
                      param_3 = puVar4;
                      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_548) {
                        ___stack_chk_fail();
                        pcStack_558 = FUN_106fa4a8c;
                        lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
                        puStack_580 = puVar3;
                        puStack_578 = puVar1;
                        puStack_570 = puVar2;
                        puStack_568 = puVar4;
                        ppuStack_560 = &ppuStack_520;
                        _objc_alloc();
                        puVar2 = PTR_PTR_1126d3ad8;
                        puVar1 = PTR_PTR_1126d3ae0;
                        _objc_alloc_init();
                        func_0x00010bf08480(puVar2,param_4,puVar1);
                        _objc_retainAutoreleasedReturnValue();
                        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                        puStack_590 = puVar2;
                        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_590
                                            ,1);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c040a80(puVar5,param_4,puVar3);
                        _objc_release(puVar3);
                        _objc_release(puVar2);
                        puVar4 = puVar1;
                        _objc_release();
                        param_3 = puVar5;
                        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_588) {
                          ___stack_chk_fail();
                          pcStack_598 = FUN_106fa4b68;
                          lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                          puStack_5c0 = puVar3;
                          puStack_5b8 = puVar1;
                          puStack_5b0 = puVar2;
                          puStack_5a8 = puVar5;
                          ppuStack_5a0 = &ppuStack_560;
                          _objc_alloc();
                          puVar2 = PTR_PTR_1126d3ad8;
                          puVar1 = PTR_PTR_1126d3ae0;
                          _objc_alloc_init();
                          func_0x00010c263e60(puVar2,param_4,puVar1);
                          _objc_retainAutoreleasedReturnValue();
                          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                          puStack_5d0 = puVar2;
                          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                              &puStack_5d0,1);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c040a80(puVar4,param_4,puVar3);
                          _objc_release(puVar3);
                          _objc_release(puVar2);
                          puVar5 = puVar1;
                          _objc_release();
                          param_3 = puVar4;
                          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5c8) {
                            ___stack_chk_fail();
                            pcStack_5d8 = FUN_106fa4c44;
                            lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
                            puVar6 = PTR_PTR_1126d3b18;
                            puStack_600 = puVar3;
                            puStack_5f8 = puVar1;
                            puStack_5f0 = puVar2;
                            puStack_5e8 = puVar4;
                            ppuStack_5e0 = &ppuStack_5a0;
                            _objc_alloc_init();
                            func_0x00010c18d400();
                            _objc_alloc();
                            puVar2 = PTR_PTR_1126d3ad8;
                            func_0x00010bfb24c0(PTR_PTR_1126d3ad8,param_4,puVar6);
                            _objc_retainAutoreleasedReturnValue();
                            puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
                            puStack_610 = puVar2;
                            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                &puStack_610,1);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c040a80(puVar5,param_4,puVar1);
                            _objc_release(puVar1);
                            _objc_release(puVar2);
                            puVar3 = puVar6;
                            _objc_release();
                            param_3 = puVar5;
                            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_608) {
                              ___stack_chk_fail();
                              pcStack_618 = FUN_106fa4d2c;
                              lStack_648 = *(long *)PTR____stack_chk_guard_11034bdc0;
                              puStack_640 = puVar1;
                              puStack_638 = puVar2;
                              puStack_630 = puVar6;
                              puStack_628 = puVar5;
                              ppuStack_620 = &ppuStack_5e0;
                              _objc_alloc();
                              puVar2 = PTR_PTR_1126d3ad8;
                              puVar1 = PTR_PTR_1126d3ae0;
                              _objc_alloc_init();
                              func_0x00010bfc2ca0(puVar2,param_4,puVar1);
                              _objc_retainAutoreleasedReturnValue();
                              uVar13 = 1;
                              puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                              puStack_650 = puVar2;
                              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                  &puStack_650,1);
                              _objc_retainAutoreleasedReturnValue();
                              puVar5 = puVar4;
                              func_0x00010c040a80(puVar3,param_4,puVar4);
                              _objc_release(puVar4);
                              _objc_release(puVar2);
                              _objc_release(puVar1);
                              param_3 = puVar3;
                              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_648) {
                                ___stack_chk_fail();
                                puVar2 = PTR_PTR_1126d3b20;
                                lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                                _objc_retain(uVar13);
                                _objc_retain(puVar5);
                                _objc_alloc_init(puVar2);
                                func_0x00010c212460();
                                _objc_release(uVar13);
                                puVar3 = puVar5;
                                func_0x00010bf6e340(puVar5);
                                _objc_retainAutoreleasedReturnValue();
                                _objc_release(puVar5);
                                func_0x00010c212640(puVar2,param_4,puVar3);
                                _objc_release(puVar3);
                                param_1 = param_1 * 1000.0;
                                if (param_1 <= 0.0) {
                                  param_1 = 0.0;
                                }
                                func_0x00010c215680(puVar2,param_4,(int)param_1);
                                param_2 = param_2 * 1000.0;
                                if (param_2 <= 0.0) {
                                  param_2 = 0.0;
                                }
                                func_0x00010c225ae0(puVar2,param_4,(int)param_2);
                                _objc_alloc(puVar1);
                                puVar3 = PTR_PTR_1126d3ad8;
                                func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar2);
                                _objc_retainAutoreleasedReturnValue();
                                puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                puStack_6b0 = puVar3;
                                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                    &puStack_6b0,1);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010c040a80(puVar1,param_4,puVar4);
                                _objc_release(puVar4);
                                _objc_release(puVar3);
                                _objc_release(puVar2);
                                param_3 = puVar1;
                                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6a8) {
                                  ___stack_chk_fail();
                                  return (undefined *)0x0;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 106fa3a70; end: 106fa3b4b; +[SCSpectaclesMalibuRequestMessage deviceRestart] */

undefined * FUN_106fa3a70(double param_1,double param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
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
  undefined8 uVar13;
  undefined *puStack_670;
  long lStack_668;
  undefined *puStack_610;
  long lStack_608;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined *puStack_5f0;
  undefined *puStack_5e8;
  undefined8 **ppuStack_5e0;
  code *pcStack_5d8;
  undefined *puStack_5d0;
  long lStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5b0;
  undefined *puStack_5a8;
  undefined8 **ppuStack_5a0;
  code *pcStack_598;
  undefined *puStack_590;
  long lStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined8 **ppuStack_560;
  code *pcStack_558;
  undefined *puStack_550;
  long lStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined8 **ppuStack_520;
  code *pcStack_518;
  undefined *puStack_510;
  long lStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined8 **ppuStack_4e0;
  code *pcStack_4d8;
  undefined *puStack_4d0;
  long lStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined8 **ppuStack_4a0;
  code *pcStack_498;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  long lStack_380;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 **ppuStack_320;
  code *pcStack_318;
  undefined *puStack_310;
  long lStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 **ppuStack_2a0;
  code *pcStack_298;
  undefined *puStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined8 **ppuStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 **ppuStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
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
  long lStack_a8;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  puVar1 = PTR_PTR_1126d3ae0;
  _objc_alloc_init();
  func_0x00010bfcfee0(puVar2,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_3,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106fa3b4c;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = PTR_PTR_1126d3af0;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_alloc_init();
    puStack_110 = puVar3;
    func_0x00010c1ec220();
    _objc_alloc();
    puVar2 = PTR_PTR_1126d3ad8;
    puVar4 = PTR_PTR_1126d3af8;
    puStack_128 = puVar1;
    _objc_alloc_init();
    puStack_f0 = puVar4;
    func_0x00010bfca120(puVar2,param_4,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d3ad8;
    puVar4 = PTR_PTR_1126d3ae0;
    puStack_f8 = puVar2;
    puStack_e8 = puVar2;
    _objc_alloc_init();
    puStack_100 = puVar4;
    func_0x00010bf1e960(puVar1,param_4,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d3ad8;
    puVar4 = PTR_PTR_1126d3ae0;
    puStack_108 = puVar1;
    puStack_e0 = puVar1;
    _objc_alloc_init();
    puStack_118 = puVar4;
    func_0x00010bfccc40(puVar2,param_4,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126d3ad8;
    puStack_120 = puVar2;
    puStack_d8 = puVar2;
    func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d3ad8;
    puVar6 = PTR_PTR_1126d3ae0;
    puStack_d0 = puVar5;
    _objc_alloc_init();
    func_0x00010bf35ae0(puVar2,param_4,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d3ad8;
    puVar7 = PTR_PTR_1126d3ae0;
    puStack_c8 = puVar2;
    _objc_alloc_init();
    func_0x00010bf21ee0(puVar1,param_4,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d3ad8;
    puVar8 = PTR_PTR_1126d3ae0;
    puStack_c0 = puVar1;
    _objc_alloc_init();
    func_0x00010bfc7660(puVar3,param_4,puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d3ad8;
    puVar9 = PTR_PTR_1126d3ae0;
    puStack_b8 = puVar3;
    _objc_alloc_init();
    func_0x00010bfc5d20(puVar4,param_4,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b0 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_e8,8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puStack_128,param_4,puVar10);
    _objc_release(puVar10);
    _objc_release(puVar4);
    _objc_release(puVar9);
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puStack_120);
    _objc_release(puStack_118);
    _objc_release(puStack_108);
    _objc_release(puStack_100);
    _objc_release(puStack_f8);
    _objc_release(puStack_f0);
    puVar11 = puStack_110;
    _objc_release();
    param_3 = puStack_128;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      pcStack_138 = FUN_106fa3dfc;
      lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_160 = puVar1;
      puStack_158 = puVar10;
      puStack_150 = puVar7;
      puStack_148 = puVar3;
      ppuStack_140 = &puStack_50;
      _objc_alloc();
      puVar1 = PTR_PTR_1126d3ad8;
      puVar3 = PTR_PTR_1126d3af8;
      _objc_alloc_init();
      func_0x00010bfca120(puVar1,param_4,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_170 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_170,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040a80(puVar11,param_4,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar1);
      puVar10 = puVar3;
      _objc_release();
      param_3 = puVar11;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
        ___stack_chk_fail();
        pcStack_178 = FUN_106fa3ed8;
        lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar12 = PTR_PTR_1126d3af0;
        puStack_1d0 = puVar6;
        puStack_1c8 = puVar5;
        puStack_1c0 = puVar2;
        puStack_1b8 = puVar4;
        puStack_1b0 = puVar9;
        puStack_1a8 = puVar8;
        puStack_1a0 = puVar7;
        puStack_198 = puVar3;
        puStack_190 = puVar1;
        puStack_188 = puVar11;
        ppuStack_180 = &ppuStack_140;
        _objc_alloc_init();
        puStack_210 = puVar12;
        func_0x00010c1ec220();
        _objc_alloc();
        puVar1 = PTR_PTR_1126d3ad8;
        puStack_230 = puVar10;
        func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126d3ad8;
        puVar3 = PTR_PTR_1126d3ae0;
        puStack_218 = puVar1;
        puStack_208 = puVar1;
        _objc_alloc_init();
        puStack_220 = puVar3;
        func_0x00010bf35ae0(puVar2,param_4,puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126d3ad8;
        puVar5 = PTR_PTR_1126d3ae0;
        puStack_228 = puVar2;
        puStack_200 = puVar2;
        _objc_alloc_init();
        func_0x00010bfcb140(puVar1,param_4,puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126d3ad8;
        puVar6 = PTR_PTR_1126d3ae0;
        puStack_1f8 = puVar1;
        _objc_alloc_init();
        func_0x00010bfc35a0(puVar2,param_4,puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126d3ad8;
        puVar7 = PTR_PTR_1126d3ae0;
        puStack_1f0 = puVar2;
        _objc_alloc_init();
        func_0x00010bfc7660(puVar3,param_4,puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126d3ad8;
        puVar8 = PTR_PTR_1126d3ae0;
        puStack_1e8 = puVar3;
        _objc_alloc_init();
        func_0x00010bfc2c00(puVar4,param_4,puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_1e0 = puVar4;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_208,6);
        _objc_retainAutoreleasedReturnValue();
        param_3 = puStack_230;
        func_0x00010c040a80(puStack_230,param_4,puVar9);
        _objc_release(puVar9);
        _objc_release(puVar4);
        _objc_release(puVar8);
        _objc_release(puVar3);
        _objc_release(puVar7);
        _objc_release(puVar2);
        _objc_release(puVar6);
        _objc_release(puVar1);
        _objc_release(puVar5);
        _objc_release(puStack_228);
        _objc_release(puStack_220);
        _objc_release(puStack_218);
        puVar10 = puStack_210;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
          ___stack_chk_fail();
          pcStack_238 = FUN_106fa410c;
          lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar11 = PTR_PTR_1126d3af0;
          puStack_270 = param_3;
          puStack_268 = puVar5;
          puStack_260 = puVar4;
          puStack_258 = puVar8;
          puStack_250 = puVar7;
          puStack_248 = puVar9;
          ppuStack_240 = &ppuStack_180;
          _objc_alloc_init();
          func_0x00010c1ec220();
          _objc_alloc();
          puVar5 = PTR_PTR_1126d3ad8;
          func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126d3ad8;
          puVar7 = PTR_PTR_1126d3ae0;
          puStack_288 = puVar5;
          _objc_alloc_init();
          func_0x00010bf35ae0(puVar4,param_4,puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_280 = puVar4;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_288,2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c040a80(puVar10,param_4,puVar8);
          _objc_release(puVar8);
          _objc_release(puVar4);
          _objc_release(puVar7);
          _objc_release(puVar5);
          puVar9 = puVar11;
          _objc_release();
          param_3 = puVar10;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
            ___stack_chk_fail();
            pcStack_298 = FUN_106fa423c;
            lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puVar12 = PTR_PTR_1126d3af0;
            puStack_2c0 = puVar4;
            puStack_2b8 = puVar5;
            puStack_2b0 = puVar10;
            puStack_2a8 = puVar11;
            ppuStack_2a0 = &ppuStack_240;
            _objc_alloc_init();
            func_0x00010c1ec220();
            func_0x00010c189920(puVar12,param_4,1);
            func_0x00010c2027c0(puVar12,param_4,1);
            _objc_alloc();
            puVar4 = PTR_PTR_1126d3ad8;
            func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_2d0 = puVar4;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_2d0,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c040a80(puVar9,param_4,puVar5);
            _objc_release(puVar5);
            _objc_release(puVar4);
            puVar10 = puVar12;
            _objc_release();
            param_3 = puVar9;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
              ___stack_chk_fail();
              pcStack_2d8 = FUN_106fa433c;
              lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
              puVar11 = PTR_PTR_1126d3af0;
              puStack_300 = puVar5;
              puStack_2f8 = puVar4;
              puStack_2f0 = puVar9;
              puStack_2e8 = puVar12;
              ppuStack_2e0 = &ppuStack_2a0;
              _objc_alloc_init();
              func_0x00010c1ec220();
              func_0x00010c189920(puVar11,param_4,1);
              func_0x00010c2027c0(puVar11,param_4,2);
              _objc_alloc();
              puVar4 = PTR_PTR_1126d3ad8;
              func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar11);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_310 = puVar4;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_310,1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c040a80(puVar10,param_4,puVar5);
              _objc_release(puVar5);
              _objc_release(puVar4);
              puVar9 = puVar11;
              _objc_release();
              param_3 = puVar10;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
                ___stack_chk_fail();
                pcStack_318 = FUN_106fa443c;
                lStack_380 = *(long *)PTR____stack_chk_guard_11034bdc0;
                puVar12 = PTR_PTR_1126d3af0;
                puStack_3f0 = puVar9;
                puStack_370 = puVar3;
                puStack_368 = puVar2;
                puStack_360 = puVar6;
                puStack_358 = puVar1;
                puStack_350 = puVar8;
                puStack_348 = puVar7;
                puStack_340 = puVar5;
                puStack_338 = puVar4;
                puStack_330 = puVar10;
                puStack_328 = puVar11;
                ppuStack_320 = &ppuStack_2e0;
                _objc_alloc_init();
                puStack_408 = puVar12;
                func_0x00010c1ec220();
                puVar3 = PTR_PTR_1126d3b00;
                _objc_alloc_init();
                puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
                func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c26f320();
                func_0x00010c2156a0(puVar3,param_4,(long)param_1);
                _objc_release(puVar2);
                puVar2 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
                func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = puVar2;
                func_0x00010c1552e0();
                puStack_430 = puVar3;
                func_0x00010c215860(puVar3,param_4,puVar1);
                _objc_release(puVar2);
                puVar4 = PTR_PTR_1126d3b08;
                _objc_alloc_init();
                puStack_460 = puVar4;
                func_0x00010c173020();
                puVar2 = PTR_PTR_1126d3ad8;
                puStack_448 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                puVar1 = PTR_PTR_1126d3af8;
                _objc_alloc_init();
                puStack_3f8 = puVar1;
                func_0x00010bfca120(puVar2,param_4,puVar1);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = PTR_PTR_1126d3ad8;
                puVar5 = PTR_PTR_1126d3ae0;
                puStack_400 = puVar2;
                puStack_3e8 = puVar2;
                _objc_alloc_init();
                puStack_410 = puVar5;
                func_0x00010bfc5d20(puVar1,param_4,puVar5);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR_PTR_1126d3ad8;
                puVar5 = PTR_PTR_1126d3ae0;
                puStack_418 = puVar1;
                puStack_3e0 = puVar1;
                _objc_alloc_init();
                puStack_420 = puVar5;
                func_0x00010bfccc40(puVar2,param_4,puVar5);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = PTR_PTR_1126d3ad8;
                puStack_428 = puVar2;
                puStack_3d8 = puVar2;
                func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR_PTR_1126d3ad8;
                puVar5 = PTR_PTR_1126d3ae0;
                puStack_438 = puVar1;
                puStack_3d0 = puVar1;
                _objc_alloc_init();
                puStack_440 = puVar5;
                func_0x00010bf35ae0(puVar2,param_4,puVar5);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = PTR_PTR_1126d3ad8;
                puVar5 = PTR_PTR_1126d3ae0;
                puStack_450 = puVar2;
                puStack_3c8 = puVar2;
                _objc_alloc_init();
                puStack_458 = puVar5;
                func_0x00010bfcb140(puVar1,param_4,puVar5);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR_PTR_1126d3ad8;
                puVar5 = PTR_PTR_1126d3ae0;
                puStack_468 = puVar1;
                puStack_3c0 = puVar1;
                _objc_alloc_init();
                puStack_470 = puVar5;
                func_0x00010bfc35a0(puVar2,param_4,puVar5);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = PTR_PTR_1126d3ad8;
                puStack_478 = puVar2;
                puStack_3b8 = puVar2;
                func_0x00010c214bc0(PTR_PTR_1126d3ad8,param_4,puVar3);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR_PTR_1126d3ad8;
                puVar3 = PTR_PTR_1126d3ae0;
                puStack_480 = puVar1;
                puStack_3b0 = puVar1;
                _objc_alloc_init();
                puStack_488 = puVar3;
                func_0x00010bfc7660(puVar2,param_4,puVar3);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = PTR_PTR_1126d3ad8;
                puVar5 = PTR_PTR_1126d3ae0;
                puStack_3a8 = puVar2;
                _objc_alloc_init(PTR_PTR_1126d3ae0);
                func_0x00010bf1e960(puVar1,param_4,puVar5);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = PTR_PTR_1126d3ad8;
                puStack_3a0 = puVar1;
                func_0x00010bf906c0(PTR_PTR_1126d3ad8,param_4,puVar4);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR_PTR_1126d3ad8;
                puVar7 = PTR_PTR_1126d3ae0;
                puStack_398 = puVar6;
                _objc_alloc_init(PTR_PTR_1126d3ae0);
                func_0x00010bfc6ca0(puVar3,param_4,puVar7);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = PTR_PTR_1126d3ad8;
                puVar8 = PTR_PTR_1126d3ae0;
                puStack_390 = puVar3;
                _objc_alloc_init(PTR_PTR_1126d3ae0);
                func_0x00010bfc2c00(puVar4,param_4,puVar8);
                _objc_retainAutoreleasedReturnValue();
                puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_388 = puVar4;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_3e8,0xd);
                _objc_retainAutoreleasedReturnValue();
                puVar10 = puStack_448;
                func_0x00010bf0a0c0(puStack_448,param_4,puVar9);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar9);
                _objc_release(puVar4);
                _objc_release(puVar8);
                _objc_release(puVar3);
                _objc_release(puVar7);
                _objc_release(puVar6);
                _objc_release(puVar1);
                _objc_release(puVar5);
                _objc_release(puVar2);
                _objc_release(puStack_488);
                _objc_release(puStack_480);
                _objc_release(puStack_478);
                _objc_release(puStack_470);
                _objc_release(puStack_468);
                _objc_release(puStack_458);
                _objc_release(puStack_450);
                _objc_release(puStack_440);
                _objc_release(puStack_438);
                _objc_release(puStack_428);
                _objc_release(puStack_420);
                _objc_release(puStack_418);
                _objc_release(puStack_410);
                _objc_release(puStack_400);
                _objc_release(puStack_3f8);
                param_3 = puStack_3f0;
                _objc_alloc();
                puVar3 = puVar10;
                func_0x00010c040a80();
                _objc_release(puVar10);
                _objc_release(puStack_460);
                _objc_release(puStack_430);
                puVar1 = puStack_408;
                _objc_release();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_380) {
                  ___stack_chk_fail();
                  puVar5 = PTR_PTR_1126d3b10;
                  pcStack_498 = FUN_106fa48b0;
                  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  puStack_4c0 = puVar4;
                  puStack_4b8 = puVar10;
                  puStack_4b0 = puVar2;
                  puStack_4a8 = param_3;
                  ppuStack_4a0 = &ppuStack_320;
                  _objc_retain(puVar3);
                  _objc_alloc_init();
                  func_0x00010c1cafa0();
                  _objc_release(puVar3);
                  _objc_alloc();
                  puVar2 = PTR_PTR_1126d3ad8;
                  func_0x00010c1cafa0(PTR_PTR_1126d3ad8,param_4,puVar5);
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                  puStack_4d0 = puVar2;
                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_4d0,1);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c040a80(puVar1,param_4,puVar3);
                  _objc_release(puVar3);
                  _objc_release(puVar2);
                  puVar4 = puVar5;
                  _objc_release();
                  param_3 = puVar1;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4c8) {
                    ___stack_chk_fail();
                    pcStack_4d8 = FUN_106fa49b0;
                    lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
                    puStack_500 = puVar3;
                    puStack_4f8 = puVar5;
                    puStack_4f0 = puVar2;
                    puStack_4e8 = puVar1;
                    ppuStack_4e0 = &ppuStack_4a0;
                    _objc_alloc();
                    puVar2 = PTR_PTR_1126d3ad8;
                    puVar1 = PTR_PTR_1126d3ae0;
                    _objc_alloc_init();
                    func_0x00010bfc59a0(puVar2,param_4,puVar1);
                    _objc_retainAutoreleasedReturnValue();
                    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                    puStack_510 = puVar2;
                    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_510,1);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c040a80(puVar4,param_4,puVar3);
                    _objc_release(puVar3);
                    _objc_release(puVar2);
                    puVar5 = puVar1;
                    _objc_release();
                    param_3 = puVar4;
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_508) {
                      ___stack_chk_fail();
                      pcStack_518 = FUN_106fa4a8c;
                      lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
                      puStack_540 = puVar3;
                      puStack_538 = puVar1;
                      puStack_530 = puVar2;
                      puStack_528 = puVar4;
                      ppuStack_520 = &ppuStack_4e0;
                      _objc_alloc();
                      puVar2 = PTR_PTR_1126d3ad8;
                      puVar1 = PTR_PTR_1126d3ae0;
                      _objc_alloc_init();
                      func_0x00010bf08480(puVar2,param_4,puVar1);
                      _objc_retainAutoreleasedReturnValue();
                      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                      puStack_550 = puVar2;
                      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_550,1
                                         );
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c040a80(puVar5,param_4,puVar3);
                      _objc_release(puVar3);
                      _objc_release(puVar2);
                      puVar4 = puVar1;
                      _objc_release();
                      param_3 = puVar5;
                      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_548) {
                        ___stack_chk_fail();
                        pcStack_558 = FUN_106fa4b68;
                        lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
                        puStack_580 = puVar3;
                        puStack_578 = puVar1;
                        puStack_570 = puVar2;
                        puStack_568 = puVar5;
                        ppuStack_560 = &ppuStack_520;
                        _objc_alloc();
                        puVar2 = PTR_PTR_1126d3ad8;
                        puVar1 = PTR_PTR_1126d3ae0;
                        _objc_alloc_init();
                        func_0x00010c263e60(puVar2,param_4,puVar1);
                        _objc_retainAutoreleasedReturnValue();
                        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                        puStack_590 = puVar2;
                        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_590
                                            ,1);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c040a80(puVar4,param_4,puVar3);
                        _objc_release(puVar3);
                        _objc_release(puVar2);
                        puVar5 = puVar1;
                        _objc_release();
                        param_3 = puVar4;
                        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_588) {
                          ___stack_chk_fail();
                          pcStack_598 = FUN_106fa4c44;
                          lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                          puVar6 = PTR_PTR_1126d3b18;
                          puStack_5c0 = puVar3;
                          puStack_5b8 = puVar1;
                          puStack_5b0 = puVar2;
                          puStack_5a8 = puVar4;
                          ppuStack_5a0 = &ppuStack_560;
                          _objc_alloc_init();
                          func_0x00010c18d400();
                          _objc_alloc();
                          puVar2 = PTR_PTR_1126d3ad8;
                          func_0x00010bfb24c0(PTR_PTR_1126d3ad8,param_4,puVar6);
                          _objc_retainAutoreleasedReturnValue();
                          puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
                          puStack_5d0 = puVar2;
                          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                              &puStack_5d0,1);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c040a80(puVar5,param_4,puVar1);
                          _objc_release(puVar1);
                          _objc_release(puVar2);
                          puVar3 = puVar6;
                          _objc_release();
                          param_3 = puVar5;
                          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5c8) {
                            ___stack_chk_fail();
                            pcStack_5d8 = FUN_106fa4d2c;
                            lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
                            puStack_600 = puVar1;
                            puStack_5f8 = puVar2;
                            puStack_5f0 = puVar6;
                            puStack_5e8 = puVar5;
                            ppuStack_5e0 = &ppuStack_5a0;
                            _objc_alloc();
                            puVar2 = PTR_PTR_1126d3ad8;
                            puVar1 = PTR_PTR_1126d3ae0;
                            _objc_alloc_init();
                            func_0x00010bfc2ca0(puVar2,param_4,puVar1);
                            _objc_retainAutoreleasedReturnValue();
                            uVar13 = 1;
                            puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                            puStack_610 = puVar2;
                            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                &puStack_610,1);
                            _objc_retainAutoreleasedReturnValue();
                            puVar5 = puVar4;
                            func_0x00010c040a80(puVar3,param_4,puVar4);
                            _objc_release(puVar4);
                            _objc_release(puVar2);
                            _objc_release(puVar1);
                            param_3 = puVar3;
                            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_608) {
                              ___stack_chk_fail();
                              puVar2 = PTR_PTR_1126d3b20;
                              lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
                              _objc_retain(uVar13);
                              _objc_retain(puVar5);
                              _objc_alloc_init(puVar2);
                              func_0x00010c212460();
                              _objc_release(uVar13);
                              puVar3 = puVar5;
                              func_0x00010bf6e340(puVar5);
                              _objc_retainAutoreleasedReturnValue();
                              _objc_release(puVar5);
                              func_0x00010c212640(puVar2,param_4,puVar3);
                              _objc_release(puVar3);
                              param_1 = param_1 * 1000.0;
                              if (param_1 <= 0.0) {
                                param_1 = 0.0;
                              }
                              func_0x00010c215680(puVar2,param_4,(int)param_1);
                              param_2 = param_2 * 1000.0;
                              if (param_2 <= 0.0) {
                                param_2 = 0.0;
                              }
                              func_0x00010c225ae0(puVar2,param_4,(int)param_2);
                              _objc_alloc(puVar1);
                              puVar3 = PTR_PTR_1126d3ad8;
                              func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar2);
                              _objc_retainAutoreleasedReturnValue();
                              puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                              puStack_670 = puVar3;
                              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                  &puStack_670,1);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010c040a80(puVar1,param_4,puVar4);
                              _objc_release(puVar4);
                              _objc_release(puVar3);
                              _objc_release(puVar2);
                              param_3 = puVar1;
                              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_668) {
                                ___stack_chk_fail();
                                return (undefined *)0x0;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 106fa3b4c; end: 106fa3dfb; +[SCSpectaclesMalibuRequestMessage deviceMinimalInfoRequest] */

undefined * FUN_106fa3b4c(double param_1,double param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
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
  undefined8 uVar14;
  undefined *puStack_630;
  long lStack_628;
  undefined *puStack_5d0;
  long lStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5b0;
  undefined *puStack_5a8;
  undefined8 **ppuStack_5a0;
  code *pcStack_598;
  undefined *puStack_590;
  long lStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined8 **ppuStack_560;
  code *pcStack_558;
  undefined *puStack_550;
  long lStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined8 **ppuStack_520;
  code *pcStack_518;
  undefined *puStack_510;
  long lStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined8 **ppuStack_4e0;
  code *pcStack_4d8;
  undefined *puStack_4d0;
  long lStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined8 **ppuStack_4a0;
  code *pcStack_498;
  undefined *puStack_490;
  long lStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined8 **ppuStack_460;
  code *pcStack_458;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  long lStack_340;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 **ppuStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  long lStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 **ppuStack_260;
  code *pcStack_258;
  undefined *puStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 **ppuStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
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
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d3af0;
  _objc_alloc_init();
  puStack_d0 = puVar1;
  func_0x00010c1ec220();
  _objc_alloc();
  puVar3 = PTR_PTR_1126d3ad8;
  puVar2 = PTR_PTR_1126d3af8;
  puStack_e8 = param_3;
  _objc_alloc_init();
  puStack_b0 = puVar2;
  func_0x00010bfca120(puVar3,param_4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d3ad8;
  puVar4 = PTR_PTR_1126d3ae0;
  puStack_b8 = puVar3;
  puStack_a8 = puVar3;
  _objc_alloc_init();
  puStack_c0 = puVar4;
  func_0x00010bf1e960(puVar2,param_4,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d3ad8;
  puVar4 = PTR_PTR_1126d3ae0;
  puStack_c8 = puVar2;
  puStack_a0 = puVar2;
  _objc_alloc_init();
  puStack_d8 = puVar4;
  func_0x00010bfccc40(puVar3,param_4,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d3ad8;
  puStack_e0 = puVar3;
  puStack_98 = puVar3;
  func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d3ad8;
  puVar6 = PTR_PTR_1126d3ae0;
  puStack_90 = puVar5;
  _objc_alloc_init();
  func_0x00010bf35ae0(puVar3,param_4,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d3ad8;
  puVar7 = PTR_PTR_1126d3ae0;
  puStack_88 = puVar3;
  _objc_alloc_init();
  func_0x00010bf21ee0(puVar2,param_4,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3ad8;
  puVar8 = PTR_PTR_1126d3ae0;
  puStack_80 = puVar2;
  _objc_alloc_init();
  func_0x00010bfc7660(puVar1,param_4,puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d3ad8;
  puVar9 = PTR_PTR_1126d3ae0;
  puStack_78 = puVar1;
  _objc_alloc_init();
  func_0x00010bfc5d20(puVar4,param_4,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_a8,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(puStack_e8,param_4,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puStack_e0);
  _objc_release(puStack_d8);
  _objc_release(puStack_c8);
  _objc_release(puStack_c0);
  _objc_release(puStack_b8);
  _objc_release(puStack_b0);
  puVar11 = puStack_d0;
  _objc_release();
  puVar12 = puStack_e8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_f8 = FUN_106fa3dfc;
    lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_120 = puVar2;
    puStack_118 = puVar10;
    puStack_110 = puVar7;
    puStack_108 = puVar1;
    puStack_100 = &stack0xfffffffffffffff0;
    _objc_alloc();
    puVar2 = PTR_PTR_1126d3ad8;
    puVar1 = PTR_PTR_1126d3af8;
    _objc_alloc_init();
    func_0x00010bfca120(puVar2,param_4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_130 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_130,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar11,param_4,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar2);
    puVar10 = puVar1;
    _objc_release();
    puVar12 = puVar11;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
      ___stack_chk_fail();
      pcStack_138 = FUN_106fa3ed8;
      lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar12 = PTR_PTR_1126d3af0;
      puStack_190 = puVar6;
      puStack_188 = puVar5;
      puStack_180 = puVar3;
      puStack_178 = puVar4;
      puStack_170 = puVar9;
      puStack_168 = puVar8;
      puStack_160 = puVar7;
      puStack_158 = puVar1;
      puStack_150 = puVar2;
      puStack_148 = puVar11;
      ppuStack_140 = &puStack_100;
      _objc_alloc_init();
      puStack_1d0 = puVar12;
      func_0x00010c1ec220();
      _objc_alloc();
      puVar2 = PTR_PTR_1126d3ad8;
      puStack_1f0 = puVar10;
      func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126d3ad8;
      puVar1 = PTR_PTR_1126d3ae0;
      puStack_1d8 = puVar2;
      puStack_1c8 = puVar2;
      _objc_alloc_init();
      puStack_1e0 = puVar1;
      func_0x00010bf35ae0(puVar3,param_4,puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126d3ad8;
      puVar5 = PTR_PTR_1126d3ae0;
      puStack_1e8 = puVar3;
      puStack_1c0 = puVar3;
      _objc_alloc_init();
      func_0x00010bfcb140(puVar2,param_4,puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126d3ad8;
      puVar6 = PTR_PTR_1126d3ae0;
      puStack_1b8 = puVar2;
      _objc_alloc_init();
      func_0x00010bfc35a0(puVar3,param_4,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126d3ad8;
      puVar7 = PTR_PTR_1126d3ae0;
      puStack_1b0 = puVar3;
      _objc_alloc_init();
      func_0x00010bfc7660(puVar1,param_4,puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126d3ad8;
      puVar8 = PTR_PTR_1126d3ae0;
      puStack_1a8 = puVar1;
      _objc_alloc_init();
      func_0x00010bfc2c00(puVar4,param_4,puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_1a0 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_1c8,6);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puStack_1f0;
      func_0x00010c040a80(puStack_1f0,param_4,puVar9);
      _objc_release(puVar9);
      _objc_release(puVar4);
      _objc_release(puVar8);
      _objc_release(puVar1);
      _objc_release(puVar7);
      _objc_release(puVar3);
      _objc_release(puVar6);
      _objc_release(puVar2);
      _objc_release(puVar5);
      _objc_release(puStack_1e8);
      _objc_release(puStack_1e0);
      _objc_release(puStack_1d8);
      puVar10 = puStack_1d0;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
        ___stack_chk_fail();
        pcStack_1f8 = FUN_106fa410c;
        lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar11 = PTR_PTR_1126d3af0;
        puStack_230 = puVar12;
        puStack_228 = puVar5;
        puStack_220 = puVar4;
        puStack_218 = puVar8;
        puStack_210 = puVar7;
        puStack_208 = puVar9;
        ppuStack_200 = &ppuStack_140;
        _objc_alloc_init();
        func_0x00010c1ec220();
        _objc_alloc();
        puVar5 = PTR_PTR_1126d3ad8;
        func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126d3ad8;
        puVar7 = PTR_PTR_1126d3ae0;
        puStack_248 = puVar5;
        _objc_alloc_init();
        func_0x00010bf35ae0(puVar4,param_4,puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_240 = puVar4;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_248,2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c040a80(puVar10,param_4,puVar8);
        _objc_release(puVar8);
        _objc_release(puVar4);
        _objc_release(puVar7);
        _objc_release(puVar5);
        puVar9 = puVar11;
        _objc_release();
        puVar12 = puVar10;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
          ___stack_chk_fail();
          pcStack_258 = FUN_106fa423c;
          lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar13 = PTR_PTR_1126d3af0;
          puStack_280 = puVar4;
          puStack_278 = puVar5;
          puStack_270 = puVar10;
          puStack_268 = puVar11;
          ppuStack_260 = &ppuStack_200;
          _objc_alloc_init();
          func_0x00010c1ec220();
          func_0x00010c189920(puVar13,param_4,1);
          func_0x00010c2027c0(puVar13,param_4,1);
          _objc_alloc();
          puVar4 = PTR_PTR_1126d3ad8;
          func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar13);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_290 = puVar4;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_290,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c040a80(puVar9,param_4,puVar5);
          _objc_release(puVar5);
          _objc_release(puVar4);
          puVar10 = puVar13;
          _objc_release();
          puVar12 = puVar9;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
            ___stack_chk_fail();
            pcStack_298 = FUN_106fa433c;
            lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puVar11 = PTR_PTR_1126d3af0;
            puStack_2c0 = puVar5;
            puStack_2b8 = puVar4;
            puStack_2b0 = puVar9;
            puStack_2a8 = puVar13;
            ppuStack_2a0 = &ppuStack_260;
            _objc_alloc_init();
            func_0x00010c1ec220();
            func_0x00010c189920(puVar11,param_4,1);
            func_0x00010c2027c0(puVar11,param_4,2);
            _objc_alloc();
            puVar4 = PTR_PTR_1126d3ad8;
            func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar11);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_2d0 = puVar4;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_2d0,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c040a80(puVar10,param_4,puVar5);
            _objc_release(puVar5);
            _objc_release(puVar4);
            puVar9 = puVar11;
            _objc_release();
            puVar12 = puVar10;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
              ___stack_chk_fail();
              pcStack_2d8 = FUN_106fa443c;
              lStack_340 = *(long *)PTR____stack_chk_guard_11034bdc0;
              puVar12 = PTR_PTR_1126d3af0;
              puStack_3b0 = puVar9;
              puStack_330 = puVar1;
              puStack_328 = puVar3;
              puStack_320 = puVar6;
              puStack_318 = puVar2;
              puStack_310 = puVar8;
              puStack_308 = puVar7;
              puStack_300 = puVar5;
              puStack_2f8 = puVar4;
              puStack_2f0 = puVar10;
              puStack_2e8 = puVar11;
              ppuStack_2e0 = &ppuStack_2a0;
              _objc_alloc_init();
              puStack_3c8 = puVar12;
              func_0x00010c1ec220();
              puVar1 = PTR_PTR_1126d3b00;
              _objc_alloc_init();
              puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
              func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f320();
              func_0x00010c2156a0(puVar1,param_4,(long)param_1);
              _objc_release(puVar3);
              puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
              func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar3;
              func_0x00010c1552e0();
              puStack_3f0 = puVar1;
              func_0x00010c215860(puVar1,param_4,puVar2);
              _objc_release(puVar3);
              puVar4 = PTR_PTR_1126d3b08;
              _objc_alloc_init();
              puStack_420 = puVar4;
              func_0x00010c173020();
              puVar3 = PTR_PTR_1126d3ad8;
              puStack_408 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              puVar2 = PTR_PTR_1126d3af8;
              _objc_alloc_init();
              puStack_3b8 = puVar2;
              func_0x00010bfca120(puVar3,param_4,puVar2);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR_PTR_1126d3ad8;
              puVar5 = PTR_PTR_1126d3ae0;
              puStack_3c0 = puVar3;
              puStack_3a8 = puVar3;
              _objc_alloc_init();
              puStack_3d0 = puVar5;
              func_0x00010bfc5d20(puVar2,param_4,puVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR_PTR_1126d3ad8;
              puVar5 = PTR_PTR_1126d3ae0;
              puStack_3d8 = puVar2;
              puStack_3a0 = puVar2;
              _objc_alloc_init();
              puStack_3e0 = puVar5;
              func_0x00010bfccc40(puVar3,param_4,puVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR_PTR_1126d3ad8;
              puStack_3e8 = puVar3;
              puStack_398 = puVar3;
              func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR_PTR_1126d3ad8;
              puVar5 = PTR_PTR_1126d3ae0;
              puStack_3f8 = puVar2;
              puStack_390 = puVar2;
              _objc_alloc_init();
              puStack_400 = puVar5;
              func_0x00010bf35ae0(puVar3,param_4,puVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR_PTR_1126d3ad8;
              puVar5 = PTR_PTR_1126d3ae0;
              puStack_410 = puVar3;
              puStack_388 = puVar3;
              _objc_alloc_init();
              puStack_418 = puVar5;
              func_0x00010bfcb140(puVar2,param_4,puVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR_PTR_1126d3ad8;
              puVar5 = PTR_PTR_1126d3ae0;
              puStack_428 = puVar2;
              puStack_380 = puVar2;
              _objc_alloc_init();
              puStack_430 = puVar5;
              func_0x00010bfc35a0(puVar3,param_4,puVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR_PTR_1126d3ad8;
              puStack_438 = puVar3;
              puStack_378 = puVar3;
              func_0x00010c214bc0(PTR_PTR_1126d3ad8,param_4,puVar1);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR_PTR_1126d3ad8;
              puVar1 = PTR_PTR_1126d3ae0;
              puStack_440 = puVar2;
              puStack_370 = puVar2;
              _objc_alloc_init();
              puStack_448 = puVar1;
              func_0x00010bfc7660(puVar3,param_4,puVar1);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR_PTR_1126d3ad8;
              puVar5 = PTR_PTR_1126d3ae0;
              puStack_368 = puVar3;
              _objc_alloc_init(PTR_PTR_1126d3ae0);
              func_0x00010bf1e960(puVar2,param_4,puVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = PTR_PTR_1126d3ad8;
              puStack_360 = puVar2;
              func_0x00010bf906c0(PTR_PTR_1126d3ad8,param_4,puVar4);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR_PTR_1126d3ad8;
              puVar7 = PTR_PTR_1126d3ae0;
              puStack_358 = puVar6;
              _objc_alloc_init(PTR_PTR_1126d3ae0);
              func_0x00010bfc6ca0(puVar1,param_4,puVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR_PTR_1126d3ad8;
              puVar8 = PTR_PTR_1126d3ae0;
              puStack_350 = puVar1;
              _objc_alloc_init(PTR_PTR_1126d3ae0);
              func_0x00010bfc2c00(puVar4,param_4,puVar8);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_348 = puVar4;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_3a8,0xd);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puStack_408;
              func_0x00010bf0a0c0(puStack_408,param_4,puVar9);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar9);
              _objc_release(puVar4);
              _objc_release(puVar8);
              _objc_release(puVar1);
              _objc_release(puVar7);
              _objc_release(puVar6);
              _objc_release(puVar2);
              _objc_release(puVar5);
              _objc_release(puVar3);
              _objc_release(puStack_448);
              _objc_release(puStack_440);
              _objc_release(puStack_438);
              _objc_release(puStack_430);
              _objc_release(puStack_428);
              _objc_release(puStack_418);
              _objc_release(puStack_410);
              _objc_release(puStack_400);
              _objc_release(puStack_3f8);
              _objc_release(puStack_3e8);
              _objc_release(puStack_3e0);
              _objc_release(puStack_3d8);
              _objc_release(puStack_3d0);
              _objc_release(puStack_3c0);
              _objc_release(puStack_3b8);
              puVar12 = puStack_3b0;
              _objc_alloc();
              puVar1 = puVar10;
              func_0x00010c040a80();
              _objc_release(puVar10);
              _objc_release(puStack_420);
              _objc_release(puStack_3f0);
              puVar2 = puStack_3c8;
              _objc_release();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_340) {
                ___stack_chk_fail();
                puVar5 = PTR_PTR_1126d3b10;
                pcStack_458 = FUN_106fa48b0;
                lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
                puStack_480 = puVar4;
                puStack_478 = puVar10;
                puStack_470 = puVar3;
                puStack_468 = puVar12;
                ppuStack_460 = &ppuStack_2e0;
                _objc_retain(puVar1);
                _objc_alloc_init();
                func_0x00010c1cafa0();
                _objc_release(puVar1);
                _objc_alloc();
                puVar3 = PTR_PTR_1126d3ad8;
                func_0x00010c1cafa0(PTR_PTR_1126d3ad8,param_4,puVar5);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_490 = puVar3;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_490,1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c040a80(puVar2,param_4,puVar1);
                _objc_release(puVar1);
                _objc_release(puVar3);
                puVar4 = puVar5;
                _objc_release();
                puVar12 = puVar2;
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_488) {
                  ___stack_chk_fail();
                  pcStack_498 = FUN_106fa49b0;
                  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  puStack_4c0 = puVar1;
                  puStack_4b8 = puVar5;
                  puStack_4b0 = puVar3;
                  puStack_4a8 = puVar2;
                  ppuStack_4a0 = &ppuStack_460;
                  _objc_alloc();
                  puVar3 = PTR_PTR_1126d3ad8;
                  puVar2 = PTR_PTR_1126d3ae0;
                  _objc_alloc_init();
                  func_0x00010bfc59a0(puVar3,param_4,puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
                  puStack_4d0 = puVar3;
                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_4d0,1);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c040a80(puVar4,param_4,puVar1);
                  _objc_release(puVar1);
                  _objc_release(puVar3);
                  puVar5 = puVar2;
                  _objc_release();
                  puVar12 = puVar4;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4c8) {
                    ___stack_chk_fail();
                    pcStack_4d8 = FUN_106fa4a8c;
                    lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
                    puStack_500 = puVar1;
                    puStack_4f8 = puVar2;
                    puStack_4f0 = puVar3;
                    puStack_4e8 = puVar4;
                    ppuStack_4e0 = &ppuStack_4a0;
                    _objc_alloc();
                    puVar3 = PTR_PTR_1126d3ad8;
                    puVar2 = PTR_PTR_1126d3ae0;
                    _objc_alloc_init();
                    func_0x00010bf08480(puVar3,param_4,puVar2);
                    _objc_retainAutoreleasedReturnValue();
                    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
                    puStack_510 = puVar3;
                    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_510,1);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c040a80(puVar5,param_4,puVar1);
                    _objc_release(puVar1);
                    _objc_release(puVar3);
                    puVar4 = puVar2;
                    _objc_release();
                    puVar12 = puVar5;
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_508) {
                      ___stack_chk_fail();
                      pcStack_518 = FUN_106fa4b68;
                      lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
                      puStack_540 = puVar1;
                      puStack_538 = puVar2;
                      puStack_530 = puVar3;
                      puStack_528 = puVar5;
                      ppuStack_520 = &ppuStack_4e0;
                      _objc_alloc();
                      puVar3 = PTR_PTR_1126d3ad8;
                      puVar2 = PTR_PTR_1126d3ae0;
                      _objc_alloc_init();
                      func_0x00010c263e60(puVar3,param_4,puVar2);
                      _objc_retainAutoreleasedReturnValue();
                      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
                      puStack_550 = puVar3;
                      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_550,1
                                         );
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c040a80(puVar4,param_4,puVar1);
                      _objc_release(puVar1);
                      _objc_release(puVar3);
                      puVar5 = puVar2;
                      _objc_release();
                      puVar12 = puVar4;
                      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_548) {
                        ___stack_chk_fail();
                        pcStack_558 = FUN_106fa4c44;
                        lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
                        puVar6 = PTR_PTR_1126d3b18;
                        puStack_580 = puVar1;
                        puStack_578 = puVar2;
                        puStack_570 = puVar3;
                        puStack_568 = puVar4;
                        ppuStack_560 = &ppuStack_520;
                        _objc_alloc_init();
                        func_0x00010c18d400();
                        _objc_alloc();
                        puVar3 = PTR_PTR_1126d3ad8;
                        func_0x00010bfb24c0(PTR_PTR_1126d3ad8,param_4,puVar6);
                        _objc_retainAutoreleasedReturnValue();
                        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
                        puStack_590 = puVar3;
                        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_590
                                            ,1);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c040a80(puVar5,param_4,puVar2);
                        _objc_release(puVar2);
                        _objc_release(puVar3);
                        puVar1 = puVar6;
                        _objc_release();
                        puVar12 = puVar5;
                        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_588) {
                          ___stack_chk_fail();
                          pcStack_598 = FUN_106fa4d2c;
                          lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                          puStack_5c0 = puVar2;
                          puStack_5b8 = puVar3;
                          puStack_5b0 = puVar6;
                          puStack_5a8 = puVar5;
                          ppuStack_5a0 = &ppuStack_560;
                          _objc_alloc();
                          puVar3 = PTR_PTR_1126d3ad8;
                          puVar2 = PTR_PTR_1126d3ae0;
                          _objc_alloc_init();
                          func_0x00010bfc2ca0(puVar3,param_4,puVar2);
                          _objc_retainAutoreleasedReturnValue();
                          uVar14 = 1;
                          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                          puStack_5d0 = puVar3;
                          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                              &puStack_5d0,1);
                          _objc_retainAutoreleasedReturnValue();
                          puVar5 = puVar4;
                          func_0x00010c040a80(puVar1,param_4,puVar4);
                          _objc_release(puVar4);
                          _objc_release(puVar3);
                          _objc_release(puVar2);
                          puVar12 = puVar1;
                          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5c8) {
                            ___stack_chk_fail();
                            puVar3 = PTR_PTR_1126d3b20;
                            lStack_628 = *(long *)PTR____stack_chk_guard_11034bdc0;
                            _objc_retain(uVar14);
                            _objc_retain(puVar5);
                            _objc_alloc_init(puVar3);
                            func_0x00010c212460();
                            _objc_release(uVar14);
                            puVar1 = puVar5;
                            func_0x00010bf6e340(puVar5);
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release(puVar5);
                            func_0x00010c212640(puVar3,param_4,puVar1);
                            _objc_release(puVar1);
                            param_1 = param_1 * 1000.0;
                            if (param_1 <= 0.0) {
                              param_1 = 0.0;
                            }
                            func_0x00010c215680(puVar3,param_4,(int)param_1);
                            param_2 = param_2 * 1000.0;
                            if (param_2 <= 0.0) {
                              param_2 = 0.0;
                            }
                            func_0x00010c225ae0(puVar3,param_4,(int)param_2);
                            _objc_alloc(puVar2);
                            puVar1 = PTR_PTR_1126d3ad8;
                            func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar3);
                            _objc_retainAutoreleasedReturnValue();
                            puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                            puStack_630 = puVar1;
                            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                                &puStack_630,1);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c040a80(puVar2,param_4,puVar4);
                            _objc_release(puVar4);
                            _objc_release(puVar1);
                            _objc_release(puVar3);
                            puVar12 = puVar2;
                            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_628) {
                              ___stack_chk_fail();
                              return (undefined *)0x0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return puVar12;
}



/* Entry: 106fa3dfc; end: 106fa3ed7; +[SCSpectaclesMalibuRequestMessage serialNumberRequest] */

undefined * FUN_106fa3dfc(double param_1,double param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
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
  undefined8 uVar13;
  undefined *puStack_540;
  long lStack_538;
  undefined *puStack_4e0;
  long lStack_4d8;
  undefined *puStack_4d0;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined8 **ppuStack_4b0;
  code *pcStack_4a8;
  undefined *puStack_4a0;
  long lStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined8 **ppuStack_470;
  code *pcStack_468;
  undefined *puStack_460;
  long lStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 **ppuStack_430;
  code *pcStack_428;
  undefined *puStack_420;
  long lStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined8 **ppuStack_3f0;
  code *pcStack_3e8;
  undefined *puStack_3e0;
  long lStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 **ppuStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_3a0;
  long lStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined8 **ppuStack_370;
  code *pcStack_368;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  long lStack_250;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 **ppuStack_170;
  code *pcStack_168;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
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
  long lStack_a8;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  puVar1 = PTR_PTR_1126d3af8;
  _objc_alloc_init();
  func_0x00010bfca120(puVar2,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_3,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106fa3ed8;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR_PTR_1126d3af0;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_alloc_init();
    puStack_e0 = puVar2;
    func_0x00010c1ec220();
    _objc_alloc();
    puVar3 = PTR_PTR_1126d3ad8;
    puStack_100 = puVar1;
    func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d3ad8;
    puVar1 = PTR_PTR_1126d3ae0;
    puStack_e8 = puVar3;
    puStack_d8 = puVar3;
    _objc_alloc_init();
    puStack_f0 = puVar1;
    func_0x00010bf35ae0(puVar2,param_4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d3ad8;
    puVar4 = PTR_PTR_1126d3ae0;
    puStack_f8 = puVar2;
    puStack_d0 = puVar2;
    _objc_alloc_init();
    func_0x00010bfcb140(puVar1,param_4,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d3ad8;
    puVar5 = PTR_PTR_1126d3ae0;
    puStack_c8 = puVar1;
    _objc_alloc_init();
    func_0x00010bfc35a0(puVar2,param_4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d3ad8;
    puVar6 = PTR_PTR_1126d3ae0;
    puStack_c0 = puVar2;
    _objc_alloc_init();
    func_0x00010bfc7660(puVar3,param_4,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126d3ad8;
    puVar7 = PTR_PTR_1126d3ae0;
    puStack_b8 = puVar3;
    _objc_alloc_init();
    func_0x00010bfc2c00(puVar8,param_4,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b0 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_d8,6);
    _objc_retainAutoreleasedReturnValue();
    param_3 = puStack_100;
    func_0x00010c040a80(puStack_100,param_4,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puStack_f8);
    _objc_release(puStack_f0);
    _objc_release(puStack_e8);
    puVar10 = puStack_e0;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      pcStack_108 = FUN_106fa410c;
      lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar11 = PTR_PTR_1126d3af0;
      puStack_140 = param_3;
      puStack_138 = puVar4;
      puStack_130 = puVar8;
      puStack_128 = puVar7;
      puStack_120 = puVar6;
      puStack_118 = puVar9;
      ppuStack_110 = &puStack_50;
      _objc_alloc_init();
      func_0x00010c1ec220();
      _objc_alloc();
      puVar4 = PTR_PTR_1126d3ad8;
      func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126d3ad8;
      puVar6 = PTR_PTR_1126d3ae0;
      puStack_158 = puVar4;
      _objc_alloc_init();
      func_0x00010bf35ae0(puVar8,param_4,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_150 = puVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_158,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040a80(puVar10,param_4,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar4);
      puVar9 = puVar11;
      _objc_release();
      param_3 = puVar10;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
        ___stack_chk_fail();
        pcStack_168 = FUN_106fa423c;
        lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar12 = PTR_PTR_1126d3af0;
        puStack_190 = puVar8;
        puStack_188 = puVar4;
        puStack_180 = puVar10;
        puStack_178 = puVar11;
        ppuStack_170 = &ppuStack_110;
        _objc_alloc_init();
        func_0x00010c1ec220();
        func_0x00010c189920(puVar12,param_4,1);
        func_0x00010c2027c0(puVar12,param_4,1);
        _objc_alloc();
        puVar8 = PTR_PTR_1126d3ad8;
        func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_1a0 = puVar8;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_1a0,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c040a80(puVar9,param_4,puVar4);
        _objc_release(puVar4);
        _objc_release(puVar8);
        puVar10 = puVar12;
        _objc_release();
        param_3 = puVar9;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
          ___stack_chk_fail();
          pcStack_1a8 = FUN_106fa433c;
          lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar11 = PTR_PTR_1126d3af0;
          puStack_1d0 = puVar4;
          puStack_1c8 = puVar8;
          puStack_1c0 = puVar9;
          puStack_1b8 = puVar12;
          ppuStack_1b0 = &ppuStack_170;
          _objc_alloc_init();
          func_0x00010c1ec220();
          func_0x00010c189920(puVar11,param_4,1);
          func_0x00010c2027c0(puVar11,param_4,2);
          _objc_alloc();
          puVar8 = PTR_PTR_1126d3ad8;
          func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_1e0 = puVar8;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_1e0,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c040a80(puVar10,param_4,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar8);
          puVar9 = puVar11;
          _objc_release();
          param_3 = puVar10;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
            ___stack_chk_fail();
            pcStack_1e8 = FUN_106fa443c;
            lStack_250 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puVar12 = PTR_PTR_1126d3af0;
            puStack_2c0 = puVar9;
            puStack_240 = puVar3;
            puStack_238 = puVar2;
            puStack_230 = puVar5;
            puStack_228 = puVar1;
            puStack_220 = puVar7;
            puStack_218 = puVar6;
            puStack_210 = puVar4;
            puStack_208 = puVar8;
            puStack_200 = puVar10;
            puStack_1f8 = puVar11;
            ppuStack_1f0 = &ppuStack_1b0;
            _objc_alloc_init();
            puStack_2d8 = puVar12;
            func_0x00010c1ec220();
            puVar3 = PTR_PTR_1126d3b00;
            _objc_alloc_init();
            puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f320();
            func_0x00010c2156a0(puVar3,param_4,(long)param_1);
            _objc_release(puVar2);
            puVar2 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
            func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = puVar2;
            func_0x00010c1552e0();
            puStack_300 = puVar3;
            func_0x00010c215860(puVar3,param_4,puVar1);
            _objc_release(puVar2);
            puVar8 = PTR_PTR_1126d3b08;
            _objc_alloc_init();
            puStack_330 = puVar8;
            func_0x00010c173020();
            puVar2 = PTR_PTR_1126d3ad8;
            puStack_318 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            puVar1 = PTR_PTR_1126d3af8;
            _objc_alloc_init();
            puStack_2c8 = puVar1;
            func_0x00010bfca120(puVar2,param_4,puVar1);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_PTR_1126d3ad8;
            puVar4 = PTR_PTR_1126d3ae0;
            puStack_2d0 = puVar2;
            puStack_2b8 = puVar2;
            _objc_alloc_init();
            puStack_2e0 = puVar4;
            func_0x00010bfc5d20(puVar1,param_4,puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR_PTR_1126d3ad8;
            puVar4 = PTR_PTR_1126d3ae0;
            puStack_2e8 = puVar1;
            puStack_2b0 = puVar1;
            _objc_alloc_init();
            puStack_2f0 = puVar4;
            func_0x00010bfccc40(puVar2,param_4,puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_PTR_1126d3ad8;
            puStack_2f8 = puVar2;
            puStack_2a8 = puVar2;
            func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR_PTR_1126d3ad8;
            puVar4 = PTR_PTR_1126d3ae0;
            puStack_308 = puVar1;
            puStack_2a0 = puVar1;
            _objc_alloc_init();
            puStack_310 = puVar4;
            func_0x00010bf35ae0(puVar2,param_4,puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_PTR_1126d3ad8;
            puVar4 = PTR_PTR_1126d3ae0;
            puStack_320 = puVar2;
            puStack_298 = puVar2;
            _objc_alloc_init();
            puStack_328 = puVar4;
            func_0x00010bfcb140(puVar1,param_4,puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR_PTR_1126d3ad8;
            puVar4 = PTR_PTR_1126d3ae0;
            puStack_338 = puVar1;
            puStack_290 = puVar1;
            _objc_alloc_init();
            puStack_340 = puVar4;
            func_0x00010bfc35a0(puVar2,param_4,puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_PTR_1126d3ad8;
            puStack_348 = puVar2;
            puStack_288 = puVar2;
            func_0x00010c214bc0(PTR_PTR_1126d3ad8,param_4,puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR_PTR_1126d3ad8;
            puVar3 = PTR_PTR_1126d3ae0;
            puStack_350 = puVar1;
            puStack_280 = puVar1;
            _objc_alloc_init();
            puStack_358 = puVar3;
            func_0x00010bfc7660(puVar2,param_4,puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_PTR_1126d3ad8;
            puVar4 = PTR_PTR_1126d3ae0;
            puStack_278 = puVar2;
            _objc_alloc_init(PTR_PTR_1126d3ae0);
            func_0x00010bf1e960(puVar1,param_4,puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR_PTR_1126d3ad8;
            puStack_270 = puVar1;
            func_0x00010bf906c0(PTR_PTR_1126d3ad8,param_4,puVar8);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR_PTR_1126d3ad8;
            puVar6 = PTR_PTR_1126d3ae0;
            puStack_268 = puVar5;
            _objc_alloc_init(PTR_PTR_1126d3ae0);
            func_0x00010bfc6ca0(puVar3,param_4,puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR_PTR_1126d3ad8;
            puVar7 = PTR_PTR_1126d3ae0;
            puStack_260 = puVar3;
            _objc_alloc_init(PTR_PTR_1126d3ae0);
            func_0x00010bfc2c00(puVar8,param_4,puVar7);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_258 = puVar8;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_2b8,0xd);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puStack_318;
            func_0x00010bf0a0c0(puStack_318,param_4,puVar9);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
            _objc_release(puVar8);
            _objc_release(puVar7);
            _objc_release(puVar3);
            _objc_release(puVar6);
            _objc_release(puVar5);
            _objc_release(puVar1);
            _objc_release(puVar4);
            _objc_release(puVar2);
            _objc_release(puStack_358);
            _objc_release(puStack_350);
            _objc_release(puStack_348);
            _objc_release(puStack_340);
            _objc_release(puStack_338);
            _objc_release(puStack_328);
            _objc_release(puStack_320);
            _objc_release(puStack_310);
            _objc_release(puStack_308);
            _objc_release(puStack_2f8);
            _objc_release(puStack_2f0);
            _objc_release(puStack_2e8);
            _objc_release(puStack_2e0);
            _objc_release(puStack_2d0);
            _objc_release(puStack_2c8);
            param_3 = puStack_2c0;
            _objc_alloc();
            puVar3 = puVar10;
            func_0x00010c040a80();
            _objc_release(puVar10);
            _objc_release(puStack_330);
            _objc_release(puStack_300);
            puVar1 = puStack_2d8;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_250) {
              ___stack_chk_fail();
              puVar4 = PTR_PTR_1126d3b10;
              pcStack_368 = FUN_106fa48b0;
              lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
              puStack_390 = puVar8;
              puStack_388 = puVar10;
              puStack_380 = puVar2;
              puStack_378 = param_3;
              ppuStack_370 = &ppuStack_1f0;
              _objc_retain(puVar3);
              _objc_alloc_init();
              func_0x00010c1cafa0();
              _objc_release(puVar3);
              _objc_alloc();
              puVar2 = PTR_PTR_1126d3ad8;
              func_0x00010c1cafa0(PTR_PTR_1126d3ad8,param_4,puVar4);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_3a0 = puVar2;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_3a0,1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c040a80(puVar1,param_4,puVar3);
              _objc_release(puVar3);
              _objc_release(puVar2);
              puVar8 = puVar4;
              _objc_release();
              param_3 = puVar1;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_398) {
                ___stack_chk_fail();
                pcStack_3a8 = FUN_106fa49b0;
                lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                puStack_3d0 = puVar3;
                puStack_3c8 = puVar4;
                puStack_3c0 = puVar2;
                puStack_3b8 = puVar1;
                ppuStack_3b0 = &ppuStack_370;
                _objc_alloc();
                puVar2 = PTR_PTR_1126d3ad8;
                puVar1 = PTR_PTR_1126d3ae0;
                _objc_alloc_init();
                func_0x00010bfc59a0(puVar2,param_4,puVar1);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_3e0 = puVar2;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_3e0,1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c040a80(puVar8,param_4,puVar3);
                _objc_release(puVar3);
                _objc_release(puVar2);
                puVar4 = puVar1;
                _objc_release();
                param_3 = puVar8;
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d8) {
                  ___stack_chk_fail();
                  pcStack_3e8 = FUN_106fa4a8c;
                  lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  puStack_410 = puVar3;
                  puStack_408 = puVar1;
                  puStack_400 = puVar2;
                  puStack_3f8 = puVar8;
                  ppuStack_3f0 = &ppuStack_3b0;
                  _objc_alloc();
                  puVar2 = PTR_PTR_1126d3ad8;
                  puVar1 = PTR_PTR_1126d3ae0;
                  _objc_alloc_init();
                  func_0x00010bf08480(puVar2,param_4,puVar1);
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                  puStack_420 = puVar2;
                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_420,1);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c040a80(puVar4,param_4,puVar3);
                  _objc_release(puVar3);
                  _objc_release(puVar2);
                  puVar8 = puVar1;
                  _objc_release();
                  param_3 = puVar4;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_418) {
                    ___stack_chk_fail();
                    pcStack_428 = FUN_106fa4b68;
                    lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
                    puStack_450 = puVar3;
                    puStack_448 = puVar1;
                    puStack_440 = puVar2;
                    puStack_438 = puVar4;
                    ppuStack_430 = &ppuStack_3f0;
                    _objc_alloc();
                    puVar2 = PTR_PTR_1126d3ad8;
                    puVar1 = PTR_PTR_1126d3ae0;
                    _objc_alloc_init();
                    func_0x00010c263e60(puVar2,param_4,puVar1);
                    _objc_retainAutoreleasedReturnValue();
                    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                    puStack_460 = puVar2;
                    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_460,1);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c040a80(puVar8,param_4,puVar3);
                    _objc_release(puVar3);
                    _objc_release(puVar2);
                    puVar4 = puVar1;
                    _objc_release();
                    param_3 = puVar8;
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_458) {
                      ___stack_chk_fail();
                      pcStack_468 = FUN_106fa4c44;
                      lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
                      puVar5 = PTR_PTR_1126d3b18;
                      puStack_490 = puVar3;
                      puStack_488 = puVar1;
                      puStack_480 = puVar2;
                      puStack_478 = puVar8;
                      ppuStack_470 = &ppuStack_430;
                      _objc_alloc_init();
                      func_0x00010c18d400();
                      _objc_alloc();
                      puVar2 = PTR_PTR_1126d3ad8;
                      func_0x00010bfb24c0(PTR_PTR_1126d3ad8,param_4,puVar5);
                      _objc_retainAutoreleasedReturnValue();
                      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
                      puStack_4a0 = puVar2;
                      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_4a0,1
                                         );
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c040a80(puVar4,param_4,puVar1);
                      _objc_release(puVar1);
                      _objc_release(puVar2);
                      puVar3 = puVar5;
                      _objc_release();
                      param_3 = puVar4;
                      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_498) {
                        ___stack_chk_fail();
                        pcStack_4a8 = FUN_106fa4d2c;
                        lStack_4d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                        puStack_4d0 = puVar1;
                        puStack_4c8 = puVar2;
                        puStack_4c0 = puVar5;
                        puStack_4b8 = puVar4;
                        ppuStack_4b0 = &ppuStack_470;
                        _objc_alloc();
                        puVar2 = PTR_PTR_1126d3ad8;
                        puVar1 = PTR_PTR_1126d3ae0;
                        _objc_alloc_init();
                        func_0x00010bfc2ca0(puVar2,param_4,puVar1);
                        _objc_retainAutoreleasedReturnValue();
                        uVar13 = 1;
                        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
                        puStack_4e0 = puVar2;
                        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_4e0
                                            ,1);
                        _objc_retainAutoreleasedReturnValue();
                        puVar4 = puVar8;
                        func_0x00010c040a80(puVar3,param_4,puVar8);
                        _objc_release(puVar8);
                        _objc_release(puVar2);
                        _objc_release(puVar1);
                        param_3 = puVar3;
                        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4d8) {
                          ___stack_chk_fail();
                          puVar2 = PTR_PTR_1126d3b20;
                          lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
                          _objc_retain(uVar13);
                          _objc_retain(puVar4);
                          _objc_alloc_init(puVar2);
                          func_0x00010c212460();
                          _objc_release(uVar13);
                          puVar3 = puVar4;
                          func_0x00010bf6e340(puVar4);
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar4);
                          func_0x00010c212640(puVar2,param_4,puVar3);
                          _objc_release(puVar3);
                          param_1 = param_1 * 1000.0;
                          if (param_1 <= 0.0) {
                            param_1 = 0.0;
                          }
                          func_0x00010c215680(puVar2,param_4,(int)param_1);
                          param_2 = param_2 * 1000.0;
                          if (param_2 <= 0.0) {
                            param_2 = 0.0;
                          }
                          func_0x00010c225ae0(puVar2,param_4,(int)param_2);
                          _objc_alloc(puVar1);
                          puVar3 = PTR_PTR_1126d3ad8;
                          func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar2);
                          _objc_retainAutoreleasedReturnValue();
                          puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
                          puStack_540 = puVar3;
                          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,
                                              &puStack_540,1);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c040a80(puVar1,param_4,puVar8);
                          _objc_release(puVar8);
                          _objc_release(puVar3);
                          _objc_release(puVar2);
                          param_3 = puVar1;
                          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_538) {
                            ___stack_chk_fail();
                            return (undefined *)0x0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 106fa3ed8; end: 106fa410b; +[SCSpectaclesMalibuRequestMessage deviceInfoUpdate] */

undefined * FUN_106fa3ed8(double param_1,double param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
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
  undefined8 uVar14;
  undefined *puStack_500;
  long lStack_4f8;
  undefined *puStack_4a0;
  long lStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined8 **ppuStack_470;
  code *pcStack_468;
  undefined *puStack_460;
  long lStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 **ppuStack_430;
  code *pcStack_428;
  undefined *puStack_420;
  long lStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined8 **ppuStack_3f0;
  code *pcStack_3e8;
  undefined *puStack_3e0;
  long lStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 **ppuStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_3a0;
  long lStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined8 **ppuStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  long lStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 **ppuStack_330;
  code *pcStack_328;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  long lStack_210;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 **ppuStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
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
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d3af0;
  _objc_alloc_init();
  puStack_a0 = puVar1;
  func_0x00010c1ec220();
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  puStack_c0 = param_3;
  func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3ad8;
  puVar3 = PTR_PTR_1126d3ae0;
  puStack_a8 = puVar2;
  puStack_98 = puVar2;
  _objc_alloc_init();
  puStack_b0 = puVar3;
  func_0x00010bf35ae0(puVar1,param_4,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d3ad8;
  puVar4 = PTR_PTR_1126d3ae0;
  puStack_b8 = puVar1;
  puStack_90 = puVar1;
  _objc_alloc_init();
  func_0x00010bfcb140(puVar2,param_4,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3ad8;
  puVar5 = PTR_PTR_1126d3ae0;
  puStack_88 = puVar2;
  _objc_alloc_init();
  func_0x00010bfc35a0(puVar1,param_4,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d3ad8;
  puVar6 = PTR_PTR_1126d3ae0;
  puStack_80 = puVar1;
  _objc_alloc_init();
  func_0x00010bfc7660(puVar3,param_4,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126d3ad8;
  puVar7 = PTR_PTR_1126d3ae0;
  puStack_78 = puVar3;
  _objc_alloc_init();
  func_0x00010bfc2c00(puVar8,param_4,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_98,6);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puStack_c0;
  func_0x00010c040a80(puStack_c0,param_4,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puStack_b8);
  _objc_release(puStack_b0);
  _objc_release(puStack_a8);
  puVar11 = puStack_a0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_c8 = FUN_106fa410c;
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar12 = PTR_PTR_1126d3af0;
    puStack_100 = puVar10;
    puStack_f8 = puVar4;
    puStack_f0 = puVar8;
    puStack_e8 = puVar7;
    puStack_e0 = puVar6;
    puStack_d8 = puVar9;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_alloc_init();
    func_0x00010c1ec220();
    _objc_alloc();
    puVar4 = PTR_PTR_1126d3ad8;
    func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126d3ad8;
    puVar6 = PTR_PTR_1126d3ae0;
    puStack_118 = puVar4;
    _objc_alloc_init();
    func_0x00010bf35ae0(puVar8,param_4,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_110 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_118,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar11,param_4,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar4);
    puVar9 = puVar12;
    _objc_release();
    puVar10 = puVar11;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
      ___stack_chk_fail();
      pcStack_128 = FUN_106fa423c;
      lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar13 = PTR_PTR_1126d3af0;
      puStack_150 = puVar8;
      puStack_148 = puVar4;
      puStack_140 = puVar11;
      puStack_138 = puVar12;
      ppuStack_130 = &puStack_d0;
      _objc_alloc_init();
      func_0x00010c1ec220();
      func_0x00010c189920(puVar13,param_4,1);
      func_0x00010c2027c0(puVar13,param_4,1);
      _objc_alloc();
      puVar8 = PTR_PTR_1126d3ad8;
      func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_160 = puVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_160,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040a80(puVar9,param_4,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar8);
      puVar11 = puVar13;
      _objc_release();
      puVar10 = puVar9;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
        ___stack_chk_fail();
        pcStack_168 = FUN_106fa433c;
        lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar12 = PTR_PTR_1126d3af0;
        puStack_190 = puVar4;
        puStack_188 = puVar8;
        puStack_180 = puVar9;
        puStack_178 = puVar13;
        ppuStack_170 = &ppuStack_130;
        _objc_alloc_init();
        func_0x00010c1ec220();
        func_0x00010c189920(puVar12,param_4,1);
        func_0x00010c2027c0(puVar12,param_4,2);
        _objc_alloc();
        puVar8 = PTR_PTR_1126d3ad8;
        func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_1a0 = puVar8;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_1a0,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c040a80(puVar11,param_4,puVar4);
        _objc_release(puVar4);
        _objc_release(puVar8);
        puVar9 = puVar12;
        _objc_release();
        puVar10 = puVar11;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
          ___stack_chk_fail();
          pcStack_1a8 = FUN_106fa443c;
          lStack_210 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar10 = PTR_PTR_1126d3af0;
          puStack_280 = puVar9;
          puStack_200 = puVar3;
          puStack_1f8 = puVar1;
          puStack_1f0 = puVar5;
          puStack_1e8 = puVar2;
          puStack_1e0 = puVar7;
          puStack_1d8 = puVar6;
          puStack_1d0 = puVar4;
          puStack_1c8 = puVar8;
          puStack_1c0 = puVar11;
          puStack_1b8 = puVar12;
          ppuStack_1b0 = &ppuStack_170;
          _objc_alloc_init();
          puStack_298 = puVar10;
          func_0x00010c1ec220();
          puVar3 = PTR_PTR_1126d3b00;
          _objc_alloc_init();
          puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          func_0x00010c2156a0(puVar3,param_4,(long)param_1);
          _objc_release(puVar1);
          puVar1 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
          func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010c1552e0();
          puStack_2c0 = puVar3;
          func_0x00010c215860(puVar3,param_4,puVar2);
          _objc_release(puVar1);
          puVar8 = PTR_PTR_1126d3b08;
          _objc_alloc_init();
          puStack_2f0 = puVar8;
          func_0x00010c173020();
          puVar1 = PTR_PTR_1126d3ad8;
          puStack_2d8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          puVar2 = PTR_PTR_1126d3af8;
          _objc_alloc_init();
          puStack_288 = puVar2;
          func_0x00010bfca120(puVar1,param_4,puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126d3ad8;
          puVar4 = PTR_PTR_1126d3ae0;
          puStack_290 = puVar1;
          puStack_278 = puVar1;
          _objc_alloc_init();
          puStack_2a0 = puVar4;
          func_0x00010bfc5d20(puVar2,param_4,puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126d3ad8;
          puVar4 = PTR_PTR_1126d3ae0;
          puStack_2a8 = puVar2;
          puStack_270 = puVar2;
          _objc_alloc_init();
          puStack_2b0 = puVar4;
          func_0x00010bfccc40(puVar1,param_4,puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126d3ad8;
          puStack_2b8 = puVar1;
          puStack_268 = puVar1;
          func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126d3ad8;
          puVar4 = PTR_PTR_1126d3ae0;
          puStack_2c8 = puVar2;
          puStack_260 = puVar2;
          _objc_alloc_init();
          puStack_2d0 = puVar4;
          func_0x00010bf35ae0(puVar1,param_4,puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126d3ad8;
          puVar4 = PTR_PTR_1126d3ae0;
          puStack_2e0 = puVar1;
          puStack_258 = puVar1;
          _objc_alloc_init();
          puStack_2e8 = puVar4;
          func_0x00010bfcb140(puVar2,param_4,puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126d3ad8;
          puVar4 = PTR_PTR_1126d3ae0;
          puStack_2f8 = puVar2;
          puStack_250 = puVar2;
          _objc_alloc_init();
          puStack_300 = puVar4;
          func_0x00010bfc35a0(puVar1,param_4,puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126d3ad8;
          puStack_308 = puVar1;
          puStack_248 = puVar1;
          func_0x00010c214bc0(PTR_PTR_1126d3ad8,param_4,puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126d3ad8;
          puVar3 = PTR_PTR_1126d3ae0;
          puStack_310 = puVar2;
          puStack_240 = puVar2;
          _objc_alloc_init();
          puStack_318 = puVar3;
          func_0x00010bfc7660(puVar1,param_4,puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126d3ad8;
          puVar4 = PTR_PTR_1126d3ae0;
          puStack_238 = puVar1;
          _objc_alloc_init(PTR_PTR_1126d3ae0);
          func_0x00010bf1e960(puVar2,param_4,puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR_PTR_1126d3ad8;
          puStack_230 = puVar2;
          func_0x00010bf906c0(PTR_PTR_1126d3ad8,param_4,puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126d3ad8;
          puVar6 = PTR_PTR_1126d3ae0;
          puStack_228 = puVar5;
          _objc_alloc_init(PTR_PTR_1126d3ae0);
          func_0x00010bfc6ca0(puVar3,param_4,puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126d3ad8;
          puVar7 = PTR_PTR_1126d3ae0;
          puStack_220 = puVar3;
          _objc_alloc_init(PTR_PTR_1126d3ae0);
          func_0x00010bfc2c00(puVar8,param_4,puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_218 = puVar8;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_278,0xd);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puStack_2d8;
          func_0x00010bf0a0c0(puStack_2d8,param_4,puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar3);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar2);
          _objc_release(puVar4);
          _objc_release(puVar1);
          _objc_release(puStack_318);
          _objc_release(puStack_310);
          _objc_release(puStack_308);
          _objc_release(puStack_300);
          _objc_release(puStack_2f8);
          _objc_release(puStack_2e8);
          _objc_release(puStack_2e0);
          _objc_release(puStack_2d0);
          _objc_release(puStack_2c8);
          _objc_release(puStack_2b8);
          _objc_release(puStack_2b0);
          _objc_release(puStack_2a8);
          _objc_release(puStack_2a0);
          _objc_release(puStack_290);
          _objc_release(puStack_288);
          puVar10 = puStack_280;
          _objc_alloc();
          puVar3 = puVar11;
          func_0x00010c040a80();
          _objc_release(puVar11);
          _objc_release(puStack_2f0);
          _objc_release(puStack_2c0);
          puVar2 = puStack_298;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_210) {
            ___stack_chk_fail();
            puVar4 = PTR_PTR_1126d3b10;
            pcStack_328 = FUN_106fa48b0;
            lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puStack_350 = puVar8;
            puStack_348 = puVar11;
            puStack_340 = puVar1;
            puStack_338 = puVar10;
            ppuStack_330 = &ppuStack_1b0;
            _objc_retain(puVar3);
            _objc_alloc_init();
            func_0x00010c1cafa0();
            _objc_release(puVar3);
            _objc_alloc();
            puVar1 = PTR_PTR_1126d3ad8;
            func_0x00010c1cafa0(PTR_PTR_1126d3ad8,param_4,puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_360 = puVar1;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_360,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c040a80(puVar2,param_4,puVar3);
            _objc_release(puVar3);
            _objc_release(puVar1);
            puVar8 = puVar4;
            _objc_release();
            puVar10 = puVar2;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_358) {
              ___stack_chk_fail();
              pcStack_368 = FUN_106fa49b0;
              lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
              puStack_390 = puVar3;
              puStack_388 = puVar4;
              puStack_380 = puVar1;
              puStack_378 = puVar2;
              ppuStack_370 = &ppuStack_330;
              _objc_alloc();
              puVar1 = PTR_PTR_1126d3ad8;
              puVar2 = PTR_PTR_1126d3ae0;
              _objc_alloc_init();
              func_0x00010bfc59a0(puVar1,param_4,puVar2);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_3a0 = puVar1;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_3a0,1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c040a80(puVar8,param_4,puVar3);
              _objc_release(puVar3);
              _objc_release(puVar1);
              puVar4 = puVar2;
              _objc_release();
              puVar10 = puVar8;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_398) {
                ___stack_chk_fail();
                pcStack_3a8 = FUN_106fa4a8c;
                lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                puStack_3d0 = puVar3;
                puStack_3c8 = puVar2;
                puStack_3c0 = puVar1;
                puStack_3b8 = puVar8;
                ppuStack_3b0 = &ppuStack_370;
                _objc_alloc();
                puVar1 = PTR_PTR_1126d3ad8;
                puVar2 = PTR_PTR_1126d3ae0;
                _objc_alloc_init();
                func_0x00010bf08480(puVar1,param_4,puVar2);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_3e0 = puVar1;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_3e0,1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c040a80(puVar4,param_4,puVar3);
                _objc_release(puVar3);
                _objc_release(puVar1);
                puVar8 = puVar2;
                _objc_release();
                puVar10 = puVar4;
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d8) {
                  ___stack_chk_fail();
                  pcStack_3e8 = FUN_106fa4b68;
                  lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  puStack_410 = puVar3;
                  puStack_408 = puVar2;
                  puStack_400 = puVar1;
                  puStack_3f8 = puVar4;
                  ppuStack_3f0 = &ppuStack_3b0;
                  _objc_alloc();
                  puVar1 = PTR_PTR_1126d3ad8;
                  puVar2 = PTR_PTR_1126d3ae0;
                  _objc_alloc_init();
                  func_0x00010c263e60(puVar1,param_4,puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                  puStack_420 = puVar1;
                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_420,1);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c040a80(puVar8,param_4,puVar3);
                  _objc_release(puVar3);
                  _objc_release(puVar1);
                  puVar4 = puVar2;
                  _objc_release();
                  puVar10 = puVar8;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_418) {
                    ___stack_chk_fail();
                    pcStack_428 = FUN_106fa4c44;
                    lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
                    puVar5 = PTR_PTR_1126d3b18;
                    puStack_450 = puVar3;
                    puStack_448 = puVar2;
                    puStack_440 = puVar1;
                    puStack_438 = puVar8;
                    ppuStack_430 = &ppuStack_3f0;
                    _objc_alloc_init();
                    func_0x00010c18d400();
                    _objc_alloc();
                    puVar1 = PTR_PTR_1126d3ad8;
                    func_0x00010bfb24c0(PTR_PTR_1126d3ad8,param_4,puVar5);
                    _objc_retainAutoreleasedReturnValue();
                    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
                    puStack_460 = puVar1;
                    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_460,1);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c040a80(puVar4,param_4,puVar2);
                    _objc_release(puVar2);
                    _objc_release(puVar1);
                    puVar3 = puVar5;
                    _objc_release();
                    puVar10 = puVar4;
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_458) {
                      ___stack_chk_fail();
                      pcStack_468 = FUN_106fa4d2c;
                      lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
                      puStack_490 = puVar2;
                      puStack_488 = puVar1;
                      puStack_480 = puVar5;
                      puStack_478 = puVar4;
                      ppuStack_470 = &ppuStack_430;
                      _objc_alloc();
                      puVar1 = PTR_PTR_1126d3ad8;
                      puVar2 = PTR_PTR_1126d3ae0;
                      _objc_alloc_init();
                      func_0x00010bfc2ca0(puVar1,param_4,puVar2);
                      _objc_retainAutoreleasedReturnValue();
                      uVar14 = 1;
                      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
                      puStack_4a0 = puVar1;
                      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_4a0,1
                                         );
                      _objc_retainAutoreleasedReturnValue();
                      puVar4 = puVar8;
                      func_0x00010c040a80(puVar3,param_4,puVar8);
                      _objc_release(puVar8);
                      _objc_release(puVar1);
                      _objc_release(puVar2);
                      puVar10 = puVar3;
                      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_498) {
                        ___stack_chk_fail();
                        puVar1 = PTR_PTR_1126d3b20;
                        lStack_4f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                        _objc_retain(uVar14);
                        _objc_retain(puVar4);
                        _objc_alloc_init(puVar1);
                        func_0x00010c212460();
                        _objc_release(uVar14);
                        puVar3 = puVar4;
                        func_0x00010bf6e340(puVar4);
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release(puVar4);
                        func_0x00010c212640(puVar1,param_4,puVar3);
                        _objc_release(puVar3);
                        param_1 = param_1 * 1000.0;
                        if (param_1 <= 0.0) {
                          param_1 = 0.0;
                        }
                        func_0x00010c215680(puVar1,param_4,(int)param_1);
                        param_2 = param_2 * 1000.0;
                        if (param_2 <= 0.0) {
                          param_2 = 0.0;
                        }
                        func_0x00010c225ae0(puVar1,param_4,(int)param_2);
                        _objc_alloc(puVar2);
                        puVar3 = PTR_PTR_1126d3ad8;
                        func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar1);
                        _objc_retainAutoreleasedReturnValue();
                        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
                        puStack_500 = puVar3;
                        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_500
                                            ,1);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c040a80(puVar2,param_4,puVar8);
                        _objc_release(puVar8);
                        _objc_release(puVar3);
                        _objc_release(puVar1);
                        puVar10 = puVar2;
                        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4f8) {
                          ___stack_chk_fail();
                          return (undefined *)0x0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return puVar10;
}



/* Entry: 106fa410c; end: 106fa423b; +[SCSpectaclesMalibuRequestMessage deviceInfoUpdateLowBattery] */

undefined * FUN_106fa410c(double param_1,double param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_440;
  long lStack_438;
  undefined *puStack_3e0;
  long lStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 **ppuStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_3a0;
  long lStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined8 **ppuStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  long lStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 **ppuStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  long lStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined8 **ppuStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  long lStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined8 **ppuStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d3af0;
  _objc_alloc_init();
  func_0x00010c1ec220();
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d3ad8;
  puVar3 = PTR_PTR_1126d3ae0;
  puStack_58 = puVar2;
  _objc_alloc_init();
  func_0x00010bf35ae0(puVar4,param_4,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_3,param_4,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_68 = FUN_106fa423c;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = PTR_PTR_1126d3af0;
    puStack_90 = puVar4;
    puStack_88 = puVar2;
    puStack_80 = param_3;
    puStack_78 = puVar1;
    puStack_70 = &stack0xfffffffffffffff0;
    _objc_alloc_init();
    func_0x00010c1ec220();
    func_0x00010c189920(puVar5,param_4,1);
    func_0x00010c2027c0(puVar5,param_4,1);
    _objc_alloc();
    puVar4 = PTR_PTR_1126d3ad8;
    func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_a0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar3,param_4,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar4);
    puVar2 = puVar5;
    _objc_release();
    param_3 = puVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      pcStack_a8 = FUN_106fa433c;
      lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar6 = PTR_PTR_1126d3af0;
      puStack_d0 = puVar1;
      puStack_c8 = puVar4;
      puStack_c0 = puVar3;
      puStack_b8 = puVar5;
      ppuStack_b0 = &puStack_70;
      _objc_alloc_init();
      func_0x00010c1ec220();
      func_0x00010c189920(puVar6,param_4,1);
      func_0x00010c2027c0(puVar6,param_4,2);
      _objc_alloc();
      puVar4 = PTR_PTR_1126d3ad8;
      func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_e0 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_e0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040a80(puVar2,param_4,puVar1);
      _objc_release(puVar1);
      _objc_release(puVar4);
      _objc_release();
      param_3 = puVar2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
        ___stack_chk_fail();
        pcStack_e8 = FUN_106fa443c;
        lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar2 = PTR_PTR_1126d3af0;
        puStack_1c0 = puVar6;
        ppuStack_f0 = &ppuStack_b0;
        _objc_alloc_init();
        puStack_1d8 = puVar2;
        func_0x00010c1ec220();
        puVar3 = PTR_PTR_1126d3b00;
        _objc_alloc_init();
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        func_0x00010c2156a0(puVar3,param_4,(long)param_1);
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
        func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar4;
        func_0x00010c1552e0();
        puStack_200 = puVar3;
        func_0x00010c215860(puVar3,param_4,puVar1);
        _objc_release(puVar4);
        puVar5 = PTR_PTR_1126d3b08;
        _objc_alloc_init();
        puStack_230 = puVar5;
        func_0x00010c173020();
        puVar4 = PTR_PTR_1126d3ad8;
        puStack_218 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        puVar1 = PTR_PTR_1126d3af8;
        _objc_alloc_init();
        puStack_1c8 = puVar1;
        func_0x00010bfca120(puVar4,param_4,puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126d3ad8;
        puVar6 = PTR_PTR_1126d3ae0;
        puStack_1d0 = puVar4;
        puStack_1b8 = puVar4;
        _objc_alloc_init();
        puStack_1e0 = puVar6;
        func_0x00010bfc5d20(puVar1,param_4,puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126d3ad8;
        puVar6 = PTR_PTR_1126d3ae0;
        puStack_1e8 = puVar1;
        puStack_1b0 = puVar1;
        _objc_alloc_init();
        puStack_1f0 = puVar6;
        func_0x00010bfccc40(puVar4,param_4,puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126d3ad8;
        puStack_1f8 = puVar4;
        puStack_1a8 = puVar4;
        func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126d3ad8;
        puVar2 = PTR_PTR_1126d3ae0;
        puStack_208 = puVar1;
        puStack_1a0 = puVar1;
        _objc_alloc_init();
        puStack_210 = puVar2;
        func_0x00010bf35ae0(puVar4,param_4,puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126d3ad8;
        puVar2 = PTR_PTR_1126d3ae0;
        puStack_220 = puVar4;
        puStack_198 = puVar4;
        _objc_alloc_init();
        puStack_228 = puVar2;
        func_0x00010bfcb140(puVar1,param_4,puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126d3ad8;
        puVar2 = PTR_PTR_1126d3ae0;
        puStack_238 = puVar1;
        puStack_190 = puVar1;
        _objc_alloc_init();
        puStack_240 = puVar2;
        func_0x00010bfc35a0(puVar4,param_4,puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126d3ad8;
        puStack_248 = puVar4;
        puStack_188 = puVar4;
        func_0x00010c214bc0(PTR_PTR_1126d3ad8,param_4,puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126d3ad8;
        puVar2 = PTR_PTR_1126d3ae0;
        puStack_250 = puVar1;
        puStack_180 = puVar1;
        _objc_alloc_init();
        puStack_258 = puVar2;
        func_0x00010bfc7660(puVar4,param_4,puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126d3ad8;
        puVar6 = PTR_PTR_1126d3ae0;
        puStack_178 = puVar4;
        _objc_alloc_init(PTR_PTR_1126d3ae0);
        func_0x00010bf1e960(puVar1,param_4,puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126d3ad8;
        puStack_170 = puVar1;
        func_0x00010bf906c0(PTR_PTR_1126d3ad8,param_4,puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126d3ad8;
        puVar5 = PTR_PTR_1126d3ae0;
        puStack_168 = puVar7;
        _objc_alloc_init(PTR_PTR_1126d3ae0);
        func_0x00010bfc6ca0(puVar2,param_4,puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126d3ad8;
        puVar8 = PTR_PTR_1126d3ae0;
        puStack_160 = puVar2;
        _objc_alloc_init(PTR_PTR_1126d3ae0);
        func_0x00010bfc2c00(puVar3,param_4,puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_158 = puVar3;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_1b8,0xd);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puStack_218;
        func_0x00010bf0a0c0(puStack_218,param_4,puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(puVar3);
        _objc_release(puVar8);
        _objc_release(puVar2);
        _objc_release(puVar5);
        _objc_release(puVar7);
        _objc_release(puVar1);
        _objc_release(puVar6);
        _objc_release(puVar4);
        _objc_release(puStack_258);
        _objc_release(puStack_250);
        _objc_release(puStack_248);
        _objc_release(puStack_240);
        _objc_release(puStack_238);
        _objc_release(puStack_228);
        _objc_release(puStack_220);
        _objc_release(puStack_210);
        _objc_release(puStack_208);
        _objc_release(puStack_1f8);
        _objc_release(puStack_1f0);
        _objc_release(puStack_1e8);
        _objc_release(puStack_1e0);
        _objc_release(puStack_1d0);
        _objc_release(puStack_1c8);
        param_3 = puStack_1c0;
        _objc_alloc();
        puVar2 = puVar10;
        func_0x00010c040a80();
        _objc_release(puVar10);
        _objc_release(puStack_230);
        _objc_release(puStack_200);
        puVar1 = puStack_1d8;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_150) {
          ___stack_chk_fail();
          puVar5 = PTR_PTR_1126d3b10;
          pcStack_268 = FUN_106fa48b0;
          lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puStack_290 = puVar3;
          puStack_288 = puVar10;
          puStack_280 = puVar4;
          puStack_278 = param_3;
          ppuStack_270 = &ppuStack_f0;
          _objc_retain(puVar2);
          _objc_alloc_init();
          func_0x00010c1cafa0();
          _objc_release(puVar2);
          _objc_alloc();
          puVar4 = PTR_PTR_1126d3ad8;
          func_0x00010c1cafa0(PTR_PTR_1126d3ad8,param_4,puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_2a0 = puVar4;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_2a0,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c040a80(puVar1,param_4,puVar2);
          _objc_release(puVar2);
          _objc_release(puVar4);
          puVar3 = puVar5;
          _objc_release();
          param_3 = puVar1;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
            ___stack_chk_fail();
            pcStack_2a8 = FUN_106fa49b0;
            lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puStack_2d0 = puVar2;
            puStack_2c8 = puVar5;
            puStack_2c0 = puVar4;
            puStack_2b8 = puVar1;
            ppuStack_2b0 = &ppuStack_270;
            _objc_alloc();
            puVar4 = PTR_PTR_1126d3ad8;
            puVar1 = PTR_PTR_1126d3ae0;
            _objc_alloc_init();
            func_0x00010bfc59a0(puVar4,param_4,puVar1);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_2e0 = puVar4;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_2e0,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c040a80(puVar3,param_4,puVar2);
            _objc_release(puVar2);
            _objc_release(puVar4);
            puVar5 = puVar1;
            _objc_release();
            param_3 = puVar3;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d8) {
              ___stack_chk_fail();
              pcStack_2e8 = FUN_106fa4a8c;
              lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
              puStack_310 = puVar2;
              puStack_308 = puVar1;
              puStack_300 = puVar4;
              puStack_2f8 = puVar3;
              ppuStack_2f0 = &ppuStack_2b0;
              _objc_alloc();
              puVar4 = PTR_PTR_1126d3ad8;
              puVar1 = PTR_PTR_1126d3ae0;
              _objc_alloc_init();
              func_0x00010bf08480(puVar4,param_4,puVar1);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_320 = puVar4;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_320,1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c040a80(puVar5,param_4,puVar2);
              _objc_release(puVar2);
              _objc_release(puVar4);
              puVar3 = puVar1;
              _objc_release();
              param_3 = puVar5;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_318) {
                ___stack_chk_fail();
                pcStack_328 = FUN_106fa4b68;
                lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
                puStack_350 = puVar2;
                puStack_348 = puVar1;
                puStack_340 = puVar4;
                puStack_338 = puVar5;
                ppuStack_330 = &ppuStack_2f0;
                _objc_alloc();
                puVar4 = PTR_PTR_1126d3ad8;
                puVar1 = PTR_PTR_1126d3ae0;
                _objc_alloc_init();
                func_0x00010c263e60(puVar4,param_4,puVar1);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_360 = puVar4;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_360,1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c040a80(puVar3,param_4,puVar2);
                _objc_release(puVar2);
                _objc_release(puVar4);
                puVar5 = puVar1;
                _objc_release();
                param_3 = puVar3;
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_358) {
                  ___stack_chk_fail();
                  pcStack_368 = FUN_106fa4c44;
                  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  puVar6 = PTR_PTR_1126d3b18;
                  puStack_390 = puVar2;
                  puStack_388 = puVar1;
                  puStack_380 = puVar4;
                  puStack_378 = puVar3;
                  ppuStack_370 = &ppuStack_330;
                  _objc_alloc_init();
                  func_0x00010c18d400();
                  _objc_alloc();
                  puVar4 = PTR_PTR_1126d3ad8;
                  func_0x00010bfb24c0(PTR_PTR_1126d3ad8,param_4,puVar6);
                  _objc_retainAutoreleasedReturnValue();
                  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
                  puStack_3a0 = puVar4;
                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_3a0,1);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c040a80(puVar5,param_4,puVar1);
                  _objc_release(puVar1);
                  _objc_release(puVar4);
                  puVar2 = puVar6;
                  _objc_release();
                  param_3 = puVar5;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_398) {
                    ___stack_chk_fail();
                    pcStack_3a8 = FUN_106fa4d2c;
                    lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                    puStack_3d0 = puVar1;
                    puStack_3c8 = puVar4;
                    puStack_3c0 = puVar6;
                    puStack_3b8 = puVar5;
                    ppuStack_3b0 = &ppuStack_370;
                    _objc_alloc();
                    puVar4 = PTR_PTR_1126d3ad8;
                    puVar1 = PTR_PTR_1126d3ae0;
                    _objc_alloc_init();
                    func_0x00010bfc2ca0(puVar4,param_4,puVar1);
                    _objc_retainAutoreleasedReturnValue();
                    uVar11 = 1;
                    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                    puStack_3e0 = puVar4;
                    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_3e0,1);
                    _objc_retainAutoreleasedReturnValue();
                    puVar5 = puVar3;
                    func_0x00010c040a80(puVar2,param_4,puVar3);
                    _objc_release(puVar3);
                    _objc_release(puVar4);
                    _objc_release(puVar1);
                    param_3 = puVar2;
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d8) {
                      ___stack_chk_fail();
                      puVar4 = PTR_PTR_1126d3b20;
                      lStack_438 = *(long *)PTR____stack_chk_guard_11034bdc0;
                      _objc_retain(uVar11);
                      _objc_retain(puVar5);
                      _objc_alloc_init(puVar4);
                      func_0x00010c212460();
                      _objc_release(uVar11);
                      puVar2 = puVar5;
                      func_0x00010bf6e340(puVar5);
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(puVar5);
                      func_0x00010c212640(puVar4,param_4,puVar2);
                      _objc_release(puVar2);
                      param_1 = param_1 * 1000.0;
                      if (param_1 <= 0.0) {
                        param_1 = 0.0;
                      }
                      func_0x00010c215680(puVar4,param_4,(int)param_1);
                      param_2 = param_2 * 1000.0;
                      if (param_2 <= 0.0) {
                        param_2 = 0.0;
                      }
                      func_0x00010c225ae0(puVar4,param_4,(int)param_2);
                      _objc_alloc(puVar1);
                      puVar2 = PTR_PTR_1126d3ad8;
                      func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar4);
                      _objc_retainAutoreleasedReturnValue();
                      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                      puStack_440 = puVar2;
                      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_440,1
                                         );
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c040a80(puVar1,param_4,puVar3);
                      _objc_release(puVar3);
                      _objc_release(puVar2);
                      _objc_release(puVar4);
                      param_3 = puVar1;
                      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_438) {
                        ___stack_chk_fail();
                        return (undefined *)0x0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 106fa423c; end: 106fa433b; +[SCSpectaclesMalibuRequestMessage deviceLeftBatteryStatus] */

undefined * FUN_106fa423c(double param_1,double param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_3e0;
  long lStack_3d8;
  undefined *puStack_380;
  long lStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 **ppuStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  long lStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 **ppuStack_310;
  code *pcStack_308;
  undefined *puStack_300;
  long lStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 **ppuStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 **ppuStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 **ppuStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 **ppuStack_210;
  code *pcStack_208;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
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
  long lStack_f0;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d3af0;
  _objc_alloc_init();
  func_0x00010c1ec220();
  func_0x00010c189920(puVar1,param_4,1);
  func_0x00010c2027c0(puVar1,param_4,1);
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_3,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106fa433c;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = PTR_PTR_1126d3af0;
    puStack_70 = puVar3;
    puStack_68 = puVar2;
    puStack_60 = param_3;
    puStack_58 = puVar1;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_alloc_init();
    func_0x00010c1ec220();
    func_0x00010c189920(puVar5,param_4,1);
    func_0x00010c2027c0(puVar5,param_4,2);
    _objc_alloc();
    puVar1 = PTR_PTR_1126d3ad8;
    func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar4,param_4,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release();
    param_3 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      pcStack_88 = FUN_106fa443c;
      lStack_f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar3 = PTR_PTR_1126d3af0;
      puStack_160 = puVar5;
      ppuStack_90 = &puStack_50;
      _objc_alloc_init();
      puStack_178 = puVar3;
      func_0x00010c1ec220();
      puVar4 = PTR_PTR_1126d3b00;
      _objc_alloc_init();
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c2156a0(puVar4,param_4,(long)param_1);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
      func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c1552e0();
      puStack_1a0 = puVar4;
      func_0x00010c215860(puVar4,param_4,puVar2);
      _objc_release(puVar1);
      puVar5 = PTR_PTR_1126d3b08;
      _objc_alloc_init();
      puStack_1d0 = puVar5;
      func_0x00010c173020();
      puVar1 = PTR_PTR_1126d3ad8;
      puStack_1b8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puVar2 = PTR_PTR_1126d3af8;
      _objc_alloc_init();
      puStack_168 = puVar2;
      func_0x00010bfca120(puVar1,param_4,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126d3ad8;
      puVar6 = PTR_PTR_1126d3ae0;
      puStack_170 = puVar1;
      puStack_158 = puVar1;
      _objc_alloc_init();
      puStack_180 = puVar6;
      func_0x00010bfc5d20(puVar2,param_4,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126d3ad8;
      puVar6 = PTR_PTR_1126d3ae0;
      puStack_188 = puVar2;
      puStack_150 = puVar2;
      _objc_alloc_init();
      puStack_190 = puVar6;
      func_0x00010bfccc40(puVar1,param_4,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126d3ad8;
      puStack_198 = puVar1;
      puStack_148 = puVar1;
      func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126d3ad8;
      puVar3 = PTR_PTR_1126d3ae0;
      puStack_1a8 = puVar2;
      puStack_140 = puVar2;
      _objc_alloc_init();
      puStack_1b0 = puVar3;
      func_0x00010bf35ae0(puVar1,param_4,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126d3ad8;
      puVar3 = PTR_PTR_1126d3ae0;
      puStack_1c0 = puVar1;
      puStack_138 = puVar1;
      _objc_alloc_init();
      puStack_1c8 = puVar3;
      func_0x00010bfcb140(puVar2,param_4,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126d3ad8;
      puVar3 = PTR_PTR_1126d3ae0;
      puStack_1d8 = puVar2;
      puStack_130 = puVar2;
      _objc_alloc_init();
      puStack_1e0 = puVar3;
      func_0x00010bfc35a0(puVar1,param_4,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126d3ad8;
      puStack_1e8 = puVar1;
      puStack_128 = puVar1;
      func_0x00010c214bc0(PTR_PTR_1126d3ad8,param_4,puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126d3ad8;
      puVar3 = PTR_PTR_1126d3ae0;
      puStack_1f0 = puVar2;
      puStack_120 = puVar2;
      _objc_alloc_init();
      puStack_1f8 = puVar3;
      func_0x00010bfc7660(puVar1,param_4,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126d3ad8;
      puVar6 = PTR_PTR_1126d3ae0;
      puStack_118 = puVar1;
      _objc_alloc_init(PTR_PTR_1126d3ae0);
      func_0x00010bf1e960(puVar2,param_4,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126d3ad8;
      puStack_110 = puVar2;
      func_0x00010bf906c0(PTR_PTR_1126d3ad8,param_4,puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126d3ad8;
      puVar5 = PTR_PTR_1126d3ae0;
      puStack_108 = puVar7;
      _objc_alloc_init(PTR_PTR_1126d3ae0);
      func_0x00010bfc6ca0(puVar3,param_4,puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126d3ad8;
      puVar8 = PTR_PTR_1126d3ae0;
      puStack_100 = puVar3;
      _objc_alloc_init(PTR_PTR_1126d3ae0);
      func_0x00010bfc2c00(puVar4,param_4,puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_f8 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_158,0xd);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puStack_1b8;
      func_0x00010bf0a0c0(puStack_1b8,param_4,puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar4);
      _objc_release(puVar8);
      _objc_release(puVar3);
      _objc_release(puVar5);
      _objc_release(puVar7);
      _objc_release(puVar2);
      _objc_release(puVar6);
      _objc_release(puVar1);
      _objc_release(puStack_1f8);
      _objc_release(puStack_1f0);
      _objc_release(puStack_1e8);
      _objc_release(puStack_1e0);
      _objc_release(puStack_1d8);
      _objc_release(puStack_1c8);
      _objc_release(puStack_1c0);
      _objc_release(puStack_1b0);
      _objc_release(puStack_1a8);
      _objc_release(puStack_198);
      _objc_release(puStack_190);
      _objc_release(puStack_188);
      _objc_release(puStack_180);
      _objc_release(puStack_170);
      _objc_release(puStack_168);
      param_3 = puStack_160;
      _objc_alloc();
      puVar3 = puVar10;
      func_0x00010c040a80();
      _objc_release(puVar10);
      _objc_release(puStack_1d0);
      _objc_release(puStack_1a0);
      puVar2 = puStack_178;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f0) {
        ___stack_chk_fail();
        puVar5 = PTR_PTR_1126d3b10;
        pcStack_208 = FUN_106fa48b0;
        lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_230 = puVar4;
        puStack_228 = puVar10;
        puStack_220 = puVar1;
        puStack_218 = param_3;
        ppuStack_210 = &ppuStack_90;
        _objc_retain(puVar3);
        _objc_alloc_init();
        func_0x00010c1cafa0();
        _objc_release(puVar3);
        _objc_alloc();
        puVar1 = PTR_PTR_1126d3ad8;
        func_0x00010c1cafa0(PTR_PTR_1126d3ad8,param_4,puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_240 = puVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_240,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c040a80(puVar2,param_4,puVar3);
        _objc_release(puVar3);
        _objc_release(puVar1);
        puVar4 = puVar5;
        _objc_release();
        param_3 = puVar2;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
          ___stack_chk_fail();
          pcStack_248 = FUN_106fa49b0;
          lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puStack_270 = puVar3;
          puStack_268 = puVar5;
          puStack_260 = puVar1;
          puStack_258 = puVar2;
          ppuStack_250 = &ppuStack_210;
          _objc_alloc();
          puVar1 = PTR_PTR_1126d3ad8;
          puVar2 = PTR_PTR_1126d3ae0;
          _objc_alloc_init();
          func_0x00010bfc59a0(puVar1,param_4,puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_280 = puVar1;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_280,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c040a80(puVar4,param_4,puVar3);
          _objc_release(puVar3);
          _objc_release(puVar1);
          puVar5 = puVar2;
          _objc_release();
          param_3 = puVar4;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
            ___stack_chk_fail();
            pcStack_288 = FUN_106fa4a8c;
            lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puStack_2b0 = puVar3;
            puStack_2a8 = puVar2;
            puStack_2a0 = puVar1;
            puStack_298 = puVar4;
            ppuStack_290 = &ppuStack_250;
            _objc_alloc();
            puVar1 = PTR_PTR_1126d3ad8;
            puVar2 = PTR_PTR_1126d3ae0;
            _objc_alloc_init();
            func_0x00010bf08480(puVar1,param_4,puVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_2c0 = puVar1;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_2c0,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c040a80(puVar5,param_4,puVar3);
            _objc_release(puVar3);
            _objc_release(puVar1);
            puVar4 = puVar2;
            _objc_release();
            param_3 = puVar5;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b8) {
              ___stack_chk_fail();
              pcStack_2c8 = FUN_106fa4b68;
              lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
              puStack_2f0 = puVar3;
              puStack_2e8 = puVar2;
              puStack_2e0 = puVar1;
              puStack_2d8 = puVar5;
              ppuStack_2d0 = &ppuStack_290;
              _objc_alloc();
              puVar1 = PTR_PTR_1126d3ad8;
              puVar2 = PTR_PTR_1126d3ae0;
              _objc_alloc_init();
              func_0x00010c263e60(puVar1,param_4,puVar2);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_300 = puVar1;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_300,1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c040a80(puVar4,param_4,puVar3);
              _objc_release(puVar3);
              _objc_release(puVar1);
              puVar5 = puVar2;
              _objc_release();
              param_3 = puVar4;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
                ___stack_chk_fail();
                pcStack_308 = FUN_106fa4c44;
                lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
                puVar6 = PTR_PTR_1126d3b18;
                puStack_330 = puVar3;
                puStack_328 = puVar2;
                puStack_320 = puVar1;
                puStack_318 = puVar4;
                ppuStack_310 = &ppuStack_2d0;
                _objc_alloc_init();
                func_0x00010c18d400();
                _objc_alloc();
                puVar1 = PTR_PTR_1126d3ad8;
                func_0x00010bfb24c0(PTR_PTR_1126d3ad8,param_4,puVar6);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_340 = puVar1;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_340,1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c040a80(puVar5,param_4,puVar2);
                _objc_release(puVar2);
                _objc_release(puVar1);
                puVar3 = puVar6;
                _objc_release();
                param_3 = puVar5;
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_338) {
                  ___stack_chk_fail();
                  pcStack_348 = FUN_106fa4d2c;
                  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  puStack_370 = puVar2;
                  puStack_368 = puVar1;
                  puStack_360 = puVar6;
                  puStack_358 = puVar5;
                  ppuStack_350 = &ppuStack_310;
                  _objc_alloc();
                  puVar1 = PTR_PTR_1126d3ad8;
                  puVar2 = PTR_PTR_1126d3ae0;
                  _objc_alloc_init();
                  func_0x00010bfc2ca0(puVar1,param_4,puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  uVar11 = 1;
                  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                  puStack_380 = puVar1;
                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_380,1);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = puVar4;
                  func_0x00010c040a80(puVar3,param_4,puVar4);
                  _objc_release(puVar4);
                  _objc_release(puVar1);
                  _objc_release(puVar2);
                  param_3 = puVar3;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_378) {
                    ___stack_chk_fail();
                    puVar1 = PTR_PTR_1126d3b20;
                    lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                    _objc_retain(uVar11);
                    _objc_retain(puVar5);
                    _objc_alloc_init(puVar1);
                    func_0x00010c212460();
                    _objc_release(uVar11);
                    puVar3 = puVar5;
                    func_0x00010bf6e340(puVar5);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar5);
                    func_0x00010c212640(puVar1,param_4,puVar3);
                    _objc_release(puVar3);
                    param_1 = param_1 * 1000.0;
                    if (param_1 <= 0.0) {
                      param_1 = 0.0;
                    }
                    func_0x00010c215680(puVar1,param_4,(int)param_1);
                    param_2 = param_2 * 1000.0;
                    if (param_2 <= 0.0) {
                      param_2 = 0.0;
                    }
                    func_0x00010c225ae0(puVar1,param_4,(int)param_2);
                    _objc_alloc(puVar2);
                    puVar3 = PTR_PTR_1126d3ad8;
                    func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar1);
                    _objc_retainAutoreleasedReturnValue();
                    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                    puStack_3e0 = puVar3;
                    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_3e0,1);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c040a80(puVar2,param_4,puVar4);
                    _objc_release(puVar4);
                    _objc_release(puVar3);
                    _objc_release(puVar1);
                    param_3 = puVar2;
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d8) {
                      ___stack_chk_fail();
                      return (undefined *)0x0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 106fa433c; end: 106fa443b; +[SCSpectaclesMalibuRequestMessage deviceRightBatteryStatus] */

undefined * FUN_106fa433c(double param_1,double param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_3a0;
  long lStack_398;
  undefined *puStack_340;
  long lStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 **ppuStack_310;
  code *pcStack_308;
  undefined *puStack_300;
  long lStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 **ppuStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 **ppuStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 **ppuStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 **ppuStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
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
  long lStack_b0;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d3af0;
  _objc_alloc_init();
  func_0x00010c1ec220();
  func_0x00010c189920(puVar1,param_4,1);
  func_0x00010c2027c0(puVar1,param_4,2);
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_3,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106fa443c;
    lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = PTR_PTR_1126d3af0;
    puStack_120 = puVar1;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_alloc_init();
    puStack_138 = puVar3;
    func_0x00010c1ec220();
    puVar4 = PTR_PTR_1126d3b00;
    _objc_alloc_init();
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c2156a0(puVar4,param_4,(long)param_1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c1552e0();
    puStack_160 = puVar4;
    func_0x00010c215860(puVar4,param_4,puVar2);
    _objc_release(puVar1);
    puVar5 = PTR_PTR_1126d3b08;
    _objc_alloc_init();
    puStack_190 = puVar5;
    func_0x00010c173020();
    puVar1 = PTR_PTR_1126d3ad8;
    puStack_178 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar2 = PTR_PTR_1126d3af8;
    _objc_alloc_init();
    puStack_128 = puVar2;
    func_0x00010bfca120(puVar1,param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d3ad8;
    puVar6 = PTR_PTR_1126d3ae0;
    puStack_130 = puVar1;
    puStack_118 = puVar1;
    _objc_alloc_init();
    puStack_140 = puVar6;
    func_0x00010bfc5d20(puVar2,param_4,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d3ad8;
    puVar6 = PTR_PTR_1126d3ae0;
    puStack_148 = puVar2;
    puStack_110 = puVar2;
    _objc_alloc_init();
    puStack_150 = puVar6;
    func_0x00010bfccc40(puVar1,param_4,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d3ad8;
    puStack_158 = puVar1;
    puStack_108 = puVar1;
    func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d3ad8;
    puVar3 = PTR_PTR_1126d3ae0;
    puStack_168 = puVar2;
    puStack_100 = puVar2;
    _objc_alloc_init();
    puStack_170 = puVar3;
    func_0x00010bf35ae0(puVar1,param_4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d3ad8;
    puVar3 = PTR_PTR_1126d3ae0;
    puStack_180 = puVar1;
    puStack_f8 = puVar1;
    _objc_alloc_init();
    puStack_188 = puVar3;
    func_0x00010bfcb140(puVar2,param_4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d3ad8;
    puVar3 = PTR_PTR_1126d3ae0;
    puStack_198 = puVar2;
    puStack_f0 = puVar2;
    _objc_alloc_init();
    puStack_1a0 = puVar3;
    func_0x00010bfc35a0(puVar1,param_4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d3ad8;
    puStack_1a8 = puVar1;
    puStack_e8 = puVar1;
    func_0x00010c214bc0(PTR_PTR_1126d3ad8,param_4,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d3ad8;
    puVar3 = PTR_PTR_1126d3ae0;
    puStack_1b0 = puVar2;
    puStack_e0 = puVar2;
    _objc_alloc_init();
    puStack_1b8 = puVar3;
    func_0x00010bfc7660(puVar1,param_4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d3ad8;
    puVar6 = PTR_PTR_1126d3ae0;
    puStack_d8 = puVar1;
    _objc_alloc_init(PTR_PTR_1126d3ae0);
    func_0x00010bf1e960(puVar2,param_4,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126d3ad8;
    puStack_d0 = puVar2;
    func_0x00010bf906c0(PTR_PTR_1126d3ad8,param_4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d3ad8;
    puVar5 = PTR_PTR_1126d3ae0;
    puStack_c8 = puVar7;
    _objc_alloc_init(PTR_PTR_1126d3ae0);
    func_0x00010bfc6ca0(puVar3,param_4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d3ad8;
    puVar8 = PTR_PTR_1126d3ae0;
    puStack_c0 = puVar3;
    _objc_alloc_init(PTR_PTR_1126d3ae0);
    func_0x00010bfc2c00(puVar4,param_4,puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b8 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_118,0xd);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puStack_178;
    func_0x00010bf0a0c0(puStack_178,param_4,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(puStack_1b8);
    _objc_release(puStack_1b0);
    _objc_release(puStack_1a8);
    _objc_release(puStack_1a0);
    _objc_release(puStack_198);
    _objc_release(puStack_188);
    _objc_release(puStack_180);
    _objc_release(puStack_170);
    _objc_release(puStack_168);
    _objc_release(puStack_158);
    _objc_release(puStack_150);
    _objc_release(puStack_148);
    _objc_release(puStack_140);
    _objc_release(puStack_130);
    _objc_release(puStack_128);
    param_3 = puStack_120;
    _objc_alloc();
    puVar3 = puVar10;
    func_0x00010c040a80();
    _objc_release(puVar10);
    _objc_release(puStack_190);
    _objc_release(puStack_160);
    puVar2 = puStack_138;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b0) {
      ___stack_chk_fail();
      puVar5 = PTR_PTR_1126d3b10;
      pcStack_1c8 = FUN_106fa48b0;
      lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_1f0 = puVar4;
      puStack_1e8 = puVar10;
      puStack_1e0 = puVar1;
      puStack_1d8 = param_3;
      ppuStack_1d0 = &puStack_50;
      _objc_retain(puVar3);
      _objc_alloc_init();
      func_0x00010c1cafa0();
      _objc_release(puVar3);
      _objc_alloc();
      puVar1 = PTR_PTR_1126d3ad8;
      func_0x00010c1cafa0(PTR_PTR_1126d3ad8,param_4,puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_200 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_200,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040a80(puVar2,param_4,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar1);
      puVar4 = puVar5;
      _objc_release();
      param_3 = puVar2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
        ___stack_chk_fail();
        pcStack_208 = FUN_106fa49b0;
        lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_230 = puVar3;
        puStack_228 = puVar5;
        puStack_220 = puVar1;
        puStack_218 = puVar2;
        ppuStack_210 = &ppuStack_1d0;
        _objc_alloc();
        puVar1 = PTR_PTR_1126d3ad8;
        puVar2 = PTR_PTR_1126d3ae0;
        _objc_alloc_init();
        func_0x00010bfc59a0(puVar1,param_4,puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_240 = puVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_240,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c040a80(puVar4,param_4,puVar3);
        _objc_release(puVar3);
        _objc_release(puVar1);
        puVar5 = puVar2;
        _objc_release();
        param_3 = puVar4;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
          ___stack_chk_fail();
          pcStack_248 = FUN_106fa4a8c;
          lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puStack_270 = puVar3;
          puStack_268 = puVar2;
          puStack_260 = puVar1;
          puStack_258 = puVar4;
          ppuStack_250 = &ppuStack_210;
          _objc_alloc();
          puVar1 = PTR_PTR_1126d3ad8;
          puVar2 = PTR_PTR_1126d3ae0;
          _objc_alloc_init();
          func_0x00010bf08480(puVar1,param_4,puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_280 = puVar1;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_280,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c040a80(puVar5,param_4,puVar3);
          _objc_release(puVar3);
          _objc_release(puVar1);
          puVar4 = puVar2;
          _objc_release();
          param_3 = puVar5;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
            ___stack_chk_fail();
            pcStack_288 = FUN_106fa4b68;
            lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puStack_2b0 = puVar3;
            puStack_2a8 = puVar2;
            puStack_2a0 = puVar1;
            puStack_298 = puVar5;
            ppuStack_290 = &ppuStack_250;
            _objc_alloc();
            puVar1 = PTR_PTR_1126d3ad8;
            puVar2 = PTR_PTR_1126d3ae0;
            _objc_alloc_init();
            func_0x00010c263e60(puVar1,param_4,puVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_2c0 = puVar1;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_2c0,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c040a80(puVar4,param_4,puVar3);
            _objc_release(puVar3);
            _objc_release(puVar1);
            puVar5 = puVar2;
            _objc_release();
            param_3 = puVar4;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b8) {
              ___stack_chk_fail();
              pcStack_2c8 = FUN_106fa4c44;
              lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
              puVar6 = PTR_PTR_1126d3b18;
              puStack_2f0 = puVar3;
              puStack_2e8 = puVar2;
              puStack_2e0 = puVar1;
              puStack_2d8 = puVar4;
              ppuStack_2d0 = &ppuStack_290;
              _objc_alloc_init();
              func_0x00010c18d400();
              _objc_alloc();
              puVar1 = PTR_PTR_1126d3ad8;
              func_0x00010bfb24c0(PTR_PTR_1126d3ad8,param_4,puVar6);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_300 = puVar1;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_300,1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c040a80(puVar5,param_4,puVar2);
              _objc_release(puVar2);
              _objc_release(puVar1);
              puVar3 = puVar6;
              _objc_release();
              param_3 = puVar5;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
                ___stack_chk_fail();
                pcStack_308 = FUN_106fa4d2c;
                lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
                puStack_330 = puVar2;
                puStack_328 = puVar1;
                puStack_320 = puVar6;
                puStack_318 = puVar5;
                ppuStack_310 = &ppuStack_2d0;
                _objc_alloc();
                puVar1 = PTR_PTR_1126d3ad8;
                puVar2 = PTR_PTR_1126d3ae0;
                _objc_alloc_init();
                func_0x00010bfc2ca0(puVar1,param_4,puVar2);
                _objc_retainAutoreleasedReturnValue();
                uVar11 = 1;
                puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_340 = puVar1;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_340,1);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar4;
                func_0x00010c040a80(puVar3,param_4,puVar4);
                _objc_release(puVar4);
                _objc_release(puVar1);
                _objc_release(puVar2);
                param_3 = puVar3;
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_338) {
                  ___stack_chk_fail();
                  puVar1 = PTR_PTR_1126d3b20;
                  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  _objc_retain(uVar11);
                  _objc_retain(puVar5);
                  _objc_alloc_init(puVar1);
                  func_0x00010c212460();
                  _objc_release(uVar11);
                  puVar3 = puVar5;
                  func_0x00010bf6e340(puVar5);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar5);
                  func_0x00010c212640(puVar1,param_4,puVar3);
                  _objc_release(puVar3);
                  param_1 = param_1 * 1000.0;
                  if (param_1 <= 0.0) {
                    param_1 = 0.0;
                  }
                  func_0x00010c215680(puVar1,param_4,(int)param_1);
                  param_2 = param_2 * 1000.0;
                  if (param_2 <= 0.0) {
                    param_2 = 0.0;
                  }
                  func_0x00010c225ae0(puVar1,param_4,(int)param_2);
                  _objc_alloc(puVar2);
                  puVar3 = PTR_PTR_1126d3ad8;
                  func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar1);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                  puStack_3a0 = puVar3;
                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_3a0,1);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c040a80(puVar2,param_4,puVar4);
                  _objc_release(puVar4);
                  _objc_release(puVar3);
                  _objc_release(puVar1);
                  param_3 = puVar2;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_398) {
                    ___stack_chk_fail();
                    return (undefined *)0x0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 106fa443c; end: 106fa48af; +[SCSpectaclesMalibuRequestMessage deviceInfoInitialEnableHevc:enableLocation:forceBoot:] */

undefined * FUN_106fa443c(double param_1,double param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_360;
  long lStack_358;
  undefined *puStack_300;
  long lStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 **ppuStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 **ppuStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 **ppuStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 **ppuStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
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
  puVar1 = PTR_PTR_1126d3af0;
  puStack_e0 = param_3;
  _objc_alloc_init();
  puStack_f8 = puVar1;
  func_0x00010c1ec220();
  puVar2 = PTR_PTR_1126d3b00;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c2156a0(puVar2,param_4,(long)param_1);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c1552e0();
  puStack_120 = puVar2;
  func_0x00010c215860(puVar2,param_4,puVar4);
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126d3b08;
  _objc_alloc_init();
  puStack_150 = puVar5;
  func_0x00010c173020();
  puVar3 = PTR_PTR_1126d3ad8;
  puStack_138 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar4 = PTR_PTR_1126d3af8;
  _objc_alloc_init();
  puStack_e8 = puVar4;
  func_0x00010bfca120(puVar3,param_4,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d3ad8;
  puVar6 = PTR_PTR_1126d3ae0;
  puStack_f0 = puVar3;
  puStack_d8 = puVar3;
  _objc_alloc_init();
  puStack_100 = puVar6;
  func_0x00010bfc5d20(puVar4,param_4,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d3ad8;
  puVar6 = PTR_PTR_1126d3ae0;
  puStack_108 = puVar4;
  puStack_d0 = puVar4;
  _objc_alloc_init();
  puStack_110 = puVar6;
  func_0x00010bfccc40(puVar3,param_4,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d3ad8;
  puStack_118 = puVar3;
  puStack_c8 = puVar3;
  func_0x00010bf17740(PTR_PTR_1126d3ad8,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d3ad8;
  puVar1 = PTR_PTR_1126d3ae0;
  puStack_128 = puVar4;
  puStack_c0 = puVar4;
  _objc_alloc_init();
  puStack_130 = puVar1;
  func_0x00010bf35ae0(puVar3,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d3ad8;
  puVar1 = PTR_PTR_1126d3ae0;
  puStack_140 = puVar3;
  puStack_b8 = puVar3;
  _objc_alloc_init();
  puStack_148 = puVar1;
  func_0x00010bfcb140(puVar4,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d3ad8;
  puVar1 = PTR_PTR_1126d3ae0;
  puStack_158 = puVar4;
  puStack_b0 = puVar4;
  _objc_alloc_init();
  puStack_160 = puVar1;
  func_0x00010bfc35a0(puVar3,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d3ad8;
  puStack_168 = puVar3;
  puStack_a8 = puVar3;
  func_0x00010c214bc0(PTR_PTR_1126d3ad8,param_4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d3ad8;
  puVar1 = PTR_PTR_1126d3ae0;
  puStack_170 = puVar4;
  puStack_a0 = puVar4;
  _objc_alloc_init();
  puStack_178 = puVar1;
  func_0x00010bfc7660(puVar3,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d3ad8;
  puVar6 = PTR_PTR_1126d3ae0;
  puStack_98 = puVar3;
  _objc_alloc_init(PTR_PTR_1126d3ae0);
  func_0x00010bf1e960(puVar4,param_4,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126d3ad8;
  puStack_90 = puVar4;
  func_0x00010bf906c0(PTR_PTR_1126d3ad8,param_4,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3ad8;
  puVar5 = PTR_PTR_1126d3ae0;
  puStack_88 = puVar7;
  _objc_alloc_init(PTR_PTR_1126d3ae0);
  func_0x00010bfc6ca0(puVar1,param_4,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d3ad8;
  puVar8 = PTR_PTR_1126d3ae0;
  puStack_80 = puVar1;
  _objc_alloc_init(PTR_PTR_1126d3ae0);
  func_0x00010bfc2c00(puVar2,param_4,puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_d8,0xd);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puStack_138;
  func_0x00010bf0a0c0(puStack_138,param_4,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puStack_178);
  _objc_release(puStack_170);
  _objc_release(puStack_168);
  _objc_release(puStack_160);
  _objc_release(puStack_158);
  _objc_release(puStack_148);
  _objc_release(puStack_140);
  _objc_release(puStack_130);
  _objc_release(puStack_128);
  _objc_release(puStack_118);
  _objc_release(puStack_110);
  _objc_release(puStack_108);
  _objc_release(puStack_100);
  _objc_release(puStack_f0);
  _objc_release(puStack_e8);
  puVar4 = puStack_e0;
  _objc_alloc();
  puVar5 = puVar10;
  func_0x00010c040a80();
  _objc_release(puVar10);
  _objc_release(puStack_150);
  _objc_release(puStack_120);
  puVar1 = puStack_f8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar6 = PTR_PTR_1126d3b10;
    pcStack_188 = FUN_106fa48b0;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_1b0 = puVar2;
    puStack_1a8 = puVar10;
    puStack_1a0 = puVar3;
    puStack_198 = puVar4;
    puStack_190 = &stack0xfffffffffffffff0;
    _objc_retain(puVar5);
    _objc_alloc_init();
    func_0x00010c1cafa0();
    _objc_release(puVar5);
    _objc_alloc();
    puVar3 = PTR_PTR_1126d3ad8;
    func_0x00010c1cafa0(PTR_PTR_1126d3ad8,param_4,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1c0 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_1c0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar1,param_4,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar5 = puVar6;
    _objc_release();
    puVar4 = puVar1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
      ___stack_chk_fail();
      pcStack_1c8 = FUN_106fa49b0;
      lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_1f0 = puVar2;
      puStack_1e8 = puVar6;
      puStack_1e0 = puVar3;
      puStack_1d8 = puVar1;
      ppuStack_1d0 = &puStack_190;
      _objc_alloc();
      puVar3 = PTR_PTR_1126d3ad8;
      puVar1 = PTR_PTR_1126d3ae0;
      _objc_alloc_init();
      func_0x00010bfc59a0(puVar3,param_4,puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_200 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_200,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040a80(puVar5,param_4,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar3);
      puVar6 = puVar1;
      _objc_release();
      puVar4 = puVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
        ___stack_chk_fail();
        pcStack_208 = FUN_106fa4a8c;
        lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_230 = puVar2;
        puStack_228 = puVar1;
        puStack_220 = puVar3;
        puStack_218 = puVar5;
        ppuStack_210 = &ppuStack_1d0;
        _objc_alloc();
        puVar3 = PTR_PTR_1126d3ad8;
        puVar1 = PTR_PTR_1126d3ae0;
        _objc_alloc_init();
        func_0x00010bf08480(puVar3,param_4,puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_240 = puVar3;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_240,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c040a80(puVar6,param_4,puVar2);
        _objc_release(puVar2);
        _objc_release(puVar3);
        puVar5 = puVar1;
        _objc_release();
        puVar4 = puVar6;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
          ___stack_chk_fail();
          pcStack_248 = FUN_106fa4b68;
          lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puStack_270 = puVar2;
          puStack_268 = puVar1;
          puStack_260 = puVar3;
          puStack_258 = puVar6;
          ppuStack_250 = &ppuStack_210;
          _objc_alloc();
          puVar3 = PTR_PTR_1126d3ad8;
          puVar1 = PTR_PTR_1126d3ae0;
          _objc_alloc_init();
          func_0x00010c263e60(puVar3,param_4,puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_280 = puVar3;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_280,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c040a80(puVar5,param_4,puVar2);
          _objc_release(puVar2);
          _objc_release(puVar3);
          puVar6 = puVar1;
          _objc_release();
          puVar4 = puVar5;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
            ___stack_chk_fail();
            pcStack_288 = FUN_106fa4c44;
            lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puVar7 = PTR_PTR_1126d3b18;
            puStack_2b0 = puVar2;
            puStack_2a8 = puVar1;
            puStack_2a0 = puVar3;
            puStack_298 = puVar5;
            ppuStack_290 = &ppuStack_250;
            _objc_alloc_init();
            func_0x00010c18d400();
            _objc_alloc();
            puVar3 = PTR_PTR_1126d3ad8;
            func_0x00010bfb24c0(PTR_PTR_1126d3ad8,param_4,puVar7);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_2c0 = puVar3;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_2c0,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c040a80(puVar6,param_4,puVar1);
            _objc_release(puVar1);
            _objc_release(puVar3);
            puVar2 = puVar7;
            _objc_release();
            puVar4 = puVar6;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b8) {
              ___stack_chk_fail();
              pcStack_2c8 = FUN_106fa4d2c;
              lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
              puStack_2f0 = puVar1;
              puStack_2e8 = puVar3;
              puStack_2e0 = puVar7;
              puStack_2d8 = puVar6;
              ppuStack_2d0 = &ppuStack_290;
              _objc_alloc();
              puVar3 = PTR_PTR_1126d3ad8;
              puVar1 = PTR_PTR_1126d3ae0;
              _objc_alloc_init();
              func_0x00010bfc2ca0(puVar3,param_4,puVar1);
              _objc_retainAutoreleasedReturnValue();
              uVar11 = 1;
              puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_300 = puVar3;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_300,1);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar4;
              func_0x00010c040a80(puVar2,param_4,puVar4);
              _objc_release(puVar4);
              _objc_release(puVar3);
              _objc_release(puVar1);
              puVar4 = puVar2;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
                ___stack_chk_fail();
                puVar3 = PTR_PTR_1126d3b20;
                lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
                _objc_retain(uVar11);
                _objc_retain(puVar5);
                _objc_alloc_init(puVar3);
                func_0x00010c212460();
                _objc_release(uVar11);
                puVar4 = puVar5;
                func_0x00010bf6e340(puVar5);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar5);
                func_0x00010c212640(puVar3,param_4,puVar4);
                _objc_release(puVar4);
                param_1 = param_1 * 1000.0;
                if (param_1 <= 0.0) {
                  param_1 = 0.0;
                }
                func_0x00010c215680(puVar3,param_4,(int)param_1);
                param_2 = param_2 * 1000.0;
                if (param_2 <= 0.0) {
                  param_2 = 0.0;
                }
                func_0x00010c225ae0(puVar3,param_4,(int)param_2);
                _objc_alloc(puVar1);
                puVar4 = PTR_PTR_1126d3ad8;
                func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar3);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_360 = puVar4;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_360,1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c040a80(puVar1,param_4,puVar2);
                _objc_release(puVar2);
                _objc_release(puVar4);
                _objc_release(puVar3);
                puVar4 = puVar1;
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_358) {
                  ___stack_chk_fail();
                  return (undefined *)0x0;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 106fa48b0; end: 106fa49af; +[SCSpectaclesMalibuRequestMessage deviceNameUpdateRequest:] */

undefined *
FUN_106fa48b0(double param_1,double param_2,undefined *param_3,undefined8 param_4,undefined8 param_5
             )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 **ppuStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 **ppuStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 **ppuStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126d3b10;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_alloc_init();
  func_0x00010c1cafa0();
  _objc_release(param_5);
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  func_0x00010c1cafa0(PTR_PTR_1126d3ad8,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_3,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106fa49b0;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_70 = puVar3;
    puStack_68 = puVar1;
    puStack_60 = puVar2;
    puStack_58 = param_3;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_alloc();
    puVar1 = PTR_PTR_1126d3ad8;
    puVar2 = PTR_PTR_1126d3ae0;
    _objc_alloc_init();
    func_0x00010bfc59a0(puVar1,param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar4,param_4,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar5 = puVar2;
    _objc_release();
    param_3 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      pcStack_88 = FUN_106fa4a8c;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_b0 = puVar3;
      puStack_a8 = puVar2;
      puStack_a0 = puVar1;
      puStack_98 = puVar4;
      ppuStack_90 = &puStack_50;
      _objc_alloc();
      puVar1 = PTR_PTR_1126d3ad8;
      puVar2 = PTR_PTR_1126d3ae0;
      _objc_alloc_init();
      func_0x00010bf08480(puVar1,param_4,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_c0 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_c0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040a80(puVar5,param_4,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar1);
      puVar4 = puVar2;
      _objc_release();
      param_3 = puVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
        ___stack_chk_fail();
        pcStack_c8 = FUN_106fa4b68;
        lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_f0 = puVar3;
        puStack_e8 = puVar2;
        puStack_e0 = puVar1;
        puStack_d8 = puVar5;
        ppuStack_d0 = &ppuStack_90;
        _objc_alloc();
        puVar1 = PTR_PTR_1126d3ad8;
        puVar2 = PTR_PTR_1126d3ae0;
        _objc_alloc_init();
        func_0x00010c263e60(puVar1,param_4,puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_100 = puVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_100,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c040a80(puVar4,param_4,puVar3);
        _objc_release(puVar3);
        _objc_release(puVar1);
        puVar5 = puVar2;
        _objc_release();
        param_3 = puVar4;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
          ___stack_chk_fail();
          pcStack_108 = FUN_106fa4c44;
          lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar6 = PTR_PTR_1126d3b18;
          puStack_130 = puVar3;
          puStack_128 = puVar2;
          puStack_120 = puVar1;
          puStack_118 = puVar4;
          ppuStack_110 = &ppuStack_d0;
          _objc_alloc_init();
          func_0x00010c18d400();
          _objc_alloc();
          puVar1 = PTR_PTR_1126d3ad8;
          func_0x00010bfb24c0(PTR_PTR_1126d3ad8,param_4,puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_140 = puVar1;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_140,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c040a80(puVar5,param_4,puVar2);
          _objc_release(puVar2);
          _objc_release(puVar1);
          puVar3 = puVar6;
          _objc_release();
          param_3 = puVar5;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
            ___stack_chk_fail();
            pcStack_148 = FUN_106fa4d2c;
            lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puStack_170 = puVar2;
            puStack_168 = puVar1;
            puStack_160 = puVar6;
            puStack_158 = puVar5;
            ppuStack_150 = &ppuStack_110;
            _objc_alloc();
            puVar1 = PTR_PTR_1126d3ad8;
            puVar2 = PTR_PTR_1126d3ae0;
            _objc_alloc_init();
            func_0x00010bfc2ca0(puVar1,param_4,puVar2);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = 1;
            puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_180 = puVar1;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_180,1);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010c040a80(puVar3,param_4,puVar4);
            _objc_release(puVar4);
            _objc_release(puVar1);
            _objc_release(puVar2);
            param_3 = puVar3;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
              ___stack_chk_fail();
              puVar1 = PTR_PTR_1126d3b20;
              lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
              _objc_retain(uVar7);
              _objc_retain(puVar5);
              _objc_alloc_init(puVar1);
              func_0x00010c212460();
              _objc_release(uVar7);
              puVar3 = puVar5;
              func_0x00010bf6e340(puVar5);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar5);
              func_0x00010c212640(puVar1,param_4,puVar3);
              _objc_release(puVar3);
              param_1 = param_1 * 1000.0;
              if (param_1 <= 0.0) {
                param_1 = 0.0;
              }
              func_0x00010c215680(puVar1,param_4,(int)param_1);
              param_2 = param_2 * 1000.0;
              if (param_2 <= 0.0) {
                param_2 = 0.0;
              }
              func_0x00010c225ae0(puVar1,param_4,(int)param_2);
              _objc_alloc(puVar2);
              puVar3 = PTR_PTR_1126d3ad8;
              func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar1);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_1e0 = puVar3;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_1e0,1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c040a80(puVar2,param_4,puVar4);
              _objc_release(puVar4);
              _objc_release(puVar3);
              _objc_release(puVar1);
              param_3 = puVar2;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
                ___stack_chk_fail();
                return (undefined *)0x0;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 106fa49b0; end: 106fa4a8b; +[SCSpectaclesMalibuRequestMessage firmwareGetDigest] */

undefined * FUN_106fa49b0(double param_1,double param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 **ppuStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 **ppuStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  puVar1 = PTR_PTR_1126d3ae0;
  _objc_alloc_init();
  func_0x00010bfc59a0(puVar2,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_3,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106fa4a8c;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_70 = puVar3;
    puStack_68 = puVar1;
    puStack_60 = puVar2;
    puStack_58 = param_3;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_alloc();
    puVar2 = PTR_PTR_1126d3ad8;
    puVar1 = PTR_PTR_1126d3ae0;
    _objc_alloc_init();
    func_0x00010bf08480(puVar2,param_4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar4,param_4,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar5 = puVar1;
    _objc_release();
    param_3 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      pcStack_88 = FUN_106fa4b68;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_b0 = puVar3;
      puStack_a8 = puVar1;
      puStack_a0 = puVar2;
      puStack_98 = puVar4;
      ppuStack_90 = &puStack_50;
      _objc_alloc();
      puVar2 = PTR_PTR_1126d3ad8;
      puVar1 = PTR_PTR_1126d3ae0;
      _objc_alloc_init();
      func_0x00010c263e60(puVar2,param_4,puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_c0 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_c0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040a80(puVar5,param_4,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar4 = puVar1;
      _objc_release();
      param_3 = puVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
        ___stack_chk_fail();
        pcStack_c8 = FUN_106fa4c44;
        lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar6 = PTR_PTR_1126d3b18;
        puStack_f0 = puVar3;
        puStack_e8 = puVar1;
        puStack_e0 = puVar2;
        puStack_d8 = puVar5;
        ppuStack_d0 = &ppuStack_90;
        _objc_alloc_init();
        func_0x00010c18d400();
        _objc_alloc();
        puVar2 = PTR_PTR_1126d3ad8;
        func_0x00010bfb24c0(PTR_PTR_1126d3ad8,param_4,puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_100 = puVar2;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_100,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c040a80(puVar4,param_4,puVar1);
        _objc_release(puVar1);
        _objc_release(puVar2);
        puVar3 = puVar6;
        _objc_release();
        param_3 = puVar4;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
          ___stack_chk_fail();
          pcStack_108 = FUN_106fa4d2c;
          lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puStack_130 = puVar1;
          puStack_128 = puVar2;
          puStack_120 = puVar6;
          puStack_118 = puVar4;
          ppuStack_110 = &ppuStack_d0;
          _objc_alloc();
          puVar2 = PTR_PTR_1126d3ad8;
          puVar1 = PTR_PTR_1126d3ae0;
          _objc_alloc_init();
          func_0x00010bfc2ca0(puVar2,param_4,puVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = 1;
          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_140 = puVar2;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_140,1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c040a80(puVar3,param_4,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar2);
          _objc_release(puVar1);
          param_3 = puVar3;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
            ___stack_chk_fail();
            puVar2 = PTR_PTR_1126d3b20;
            lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
            _objc_retain(uVar7);
            _objc_retain(puVar5);
            _objc_alloc_init(puVar2);
            func_0x00010c212460();
            _objc_release(uVar7);
            puVar3 = puVar5;
            func_0x00010bf6e340(puVar5);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            func_0x00010c212640(puVar2,param_4,puVar3);
            _objc_release(puVar3);
            param_1 = param_1 * 1000.0;
            if (param_1 <= 0.0) {
              param_1 = 0.0;
            }
            func_0x00010c215680(puVar2,param_4,(int)param_1);
            param_2 = param_2 * 1000.0;
            if (param_2 <= 0.0) {
              param_2 = 0.0;
            }
            func_0x00010c225ae0(puVar2,param_4,(int)param_2);
            _objc_alloc(puVar1);
            puVar3 = PTR_PTR_1126d3ad8;
            func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_1a0 = puVar3;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_1a0,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c040a80(puVar1,param_4,puVar4);
            _objc_release(puVar4);
            _objc_release(puVar3);
            _objc_release(puVar2);
            param_3 = puVar1;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
              ___stack_chk_fail();
              return (undefined *)0x0;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 106fa4a8c; end: 106fa4b67; +[SCSpectaclesMalibuRequestMessage firmwareApplyPatch] */

undefined * FUN_106fa4a8c(double param_1,double param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 **ppuStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  puVar1 = PTR_PTR_1126d3ae0;
  _objc_alloc_init();
  func_0x00010bf08480(puVar2,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_3,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106fa4b68;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_70 = puVar3;
    puStack_68 = puVar1;
    puStack_60 = puVar2;
    puStack_58 = param_3;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_alloc();
    puVar2 = PTR_PTR_1126d3ad8;
    puVar1 = PTR_PTR_1126d3ae0;
    _objc_alloc_init();
    func_0x00010c263e60(puVar2,param_4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar4,param_4,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar5 = puVar1;
    _objc_release();
    param_3 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      pcStack_88 = FUN_106fa4c44;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar6 = PTR_PTR_1126d3b18;
      puStack_b0 = puVar3;
      puStack_a8 = puVar1;
      puStack_a0 = puVar2;
      puStack_98 = puVar4;
      ppuStack_90 = &puStack_50;
      _objc_alloc_init();
      func_0x00010c18d400();
      _objc_alloc();
      puVar2 = PTR_PTR_1126d3ad8;
      func_0x00010bfb24c0(PTR_PTR_1126d3ad8,param_4,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_c0 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_c0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040a80(puVar5,param_4,puVar1);
      _objc_release(puVar1);
      _objc_release(puVar2);
      puVar3 = puVar6;
      _objc_release();
      param_3 = puVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
        ___stack_chk_fail();
        pcStack_c8 = FUN_106fa4d2c;
        lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_f0 = puVar1;
        puStack_e8 = puVar2;
        puStack_e0 = puVar6;
        puStack_d8 = puVar5;
        ppuStack_d0 = &ppuStack_90;
        _objc_alloc();
        puVar2 = PTR_PTR_1126d3ad8;
        puVar1 = PTR_PTR_1126d3ae0;
        _objc_alloc_init();
        func_0x00010bfc2ca0(puVar2,param_4,puVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = 1;
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_100 = puVar2;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_100,1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c040a80(puVar3,param_4,puVar4);
        _objc_release(puVar4);
        _objc_release(puVar2);
        _objc_release(puVar1);
        param_3 = puVar3;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
          ___stack_chk_fail();
          puVar2 = PTR_PTR_1126d3b20;
          lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
          _objc_retain(uVar7);
          _objc_retain(puVar5);
          _objc_alloc_init(puVar2);
          func_0x00010c212460();
          _objc_release(uVar7);
          puVar3 = puVar5;
          func_0x00010bf6e340(puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          func_0x00010c212640(puVar2,param_4,puVar3);
          _objc_release(puVar3);
          param_1 = param_1 * 1000.0;
          if (param_1 <= 0.0) {
            param_1 = 0.0;
          }
          func_0x00010c215680(puVar2,param_4,(int)param_1);
          param_2 = param_2 * 1000.0;
          if (param_2 <= 0.0) {
            param_2 = 0.0;
          }
          func_0x00010c225ae0(puVar2,param_4,(int)param_2);
          _objc_alloc(puVar1);
          puVar3 = PTR_PTR_1126d3ad8;
          func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_160 = puVar3;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_160,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c040a80(puVar1,param_4,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar2);
          param_3 = puVar1;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
            ___stack_chk_fail();
            return (undefined *)0x0;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 106fa4b68; end: 106fa4c43; +[SCSpectaclesMalibuRequestMessage firmwareRevertBinary] */

undefined * FUN_106fa4b68(double param_1,double param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  puVar1 = PTR_PTR_1126d3ae0;
  _objc_alloc_init();
  func_0x00010c263e60(puVar2,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_3,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106fa4c44;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = PTR_PTR_1126d3b18;
    puStack_70 = puVar3;
    puStack_68 = puVar1;
    puStack_60 = puVar2;
    puStack_58 = param_3;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_alloc_init();
    func_0x00010c18d400();
    _objc_alloc();
    puVar2 = PTR_PTR_1126d3ad8;
    func_0x00010bfb24c0(PTR_PTR_1126d3ad8,param_4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar4,param_4,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar5;
    _objc_release();
    param_3 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      pcStack_88 = FUN_106fa4d2c;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_b0 = puVar1;
      puStack_a8 = puVar2;
      puStack_a0 = puVar5;
      puStack_98 = puVar4;
      ppuStack_90 = &puStack_50;
      _objc_alloc();
      puVar2 = PTR_PTR_1126d3ad8;
      puVar1 = PTR_PTR_1126d3ae0;
      _objc_alloc_init();
      func_0x00010bfc2ca0(puVar2,param_4,puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 1;
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_c0 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_c0,1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c040a80(puVar3,param_4,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar1);
      param_3 = puVar3;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
        ___stack_chk_fail();
        puVar2 = PTR_PTR_1126d3b20;
        lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain(uVar6);
        _objc_retain(puVar5);
        _objc_alloc_init(puVar2);
        func_0x00010c212460();
        _objc_release(uVar6);
        puVar3 = puVar5;
        func_0x00010bf6e340(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        func_0x00010c212640(puVar2,param_4,puVar3);
        _objc_release(puVar3);
        param_1 = param_1 * 1000.0;
        if (param_1 <= 0.0) {
          param_1 = 0.0;
        }
        func_0x00010c215680(puVar2,param_4,(int)param_1);
        param_2 = param_2 * 1000.0;
        if (param_2 <= 0.0) {
          param_2 = 0.0;
        }
        func_0x00010c225ae0(puVar2,param_4,(int)param_2);
        _objc_alloc(puVar1);
        puVar3 = PTR_PTR_1126d3ad8;
        func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_120 = puVar3;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_120,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c040a80(puVar1,param_4,puVar4);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar2);
        param_3 = puVar1;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
          ___stack_chk_fail();
          return (undefined *)0x0;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 106fa4c44; end: 106fa4d2b; +[SCSpectaclesMalibuRequestMessage firmwareFlashUpdate] */

undefined * FUN_106fa4c44(double param_1,double param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d3b18;
  _objc_alloc_init();
  func_0x00010c18d400();
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  func_0x00010bfb24c0(PTR_PTR_1126d3ad8,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_3,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106fa4d2c;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_70 = puVar3;
    puStack_68 = puVar2;
    puStack_60 = puVar1;
    puStack_58 = param_3;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_alloc();
    puVar1 = PTR_PTR_1126d3ad8;
    puVar2 = PTR_PTR_1126d3ae0;
    _objc_alloc_init();
    func_0x00010bfc2ca0(puVar1,param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 1;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c040a80(puVar4,param_4,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar2);
    param_3 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      puVar1 = PTR_PTR_1126d3b20;
      lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(uVar6);
      _objc_retain(puVar5);
      _objc_alloc_init(puVar1);
      func_0x00010c212460();
      _objc_release(uVar6);
      puVar3 = puVar5;
      func_0x00010bf6e340(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      func_0x00010c212640(puVar1,param_4,puVar3);
      _objc_release(puVar3);
      param_1 = param_1 * 1000.0;
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      func_0x00010c215680(puVar1,param_4,(int)param_1);
      param_2 = param_2 * 1000.0;
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      func_0x00010c225ae0(puVar1,param_4,(int)param_2);
      _objc_alloc(puVar2);
      puVar3 = PTR_PTR_1126d3ad8;
      func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_e0 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_e0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040a80(puVar2,param_4,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar1);
      param_3 = puVar2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
        ___stack_chk_fail();
        return (undefined *)0x0;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 106fa4d2c; end: 106fa4e07; +[SCSpectaclesMalibuRequestMessage firmwareGetScheduledUpdateStatus] */

undefined * FUN_106fa4d2c(double param_1,double param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  puVar1 = PTR_PTR_1126d3ae0;
  _objc_alloc_init();
  func_0x00010bfc2ca0(puVar2,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 1;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c040a80(param_3,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126d3b20;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(uVar5);
    _objc_retain(puVar4);
    _objc_alloc_init(puVar2);
    func_0x00010c212460();
    _objc_release(uVar5);
    puVar3 = puVar4;
    func_0x00010bf6e340(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c212640(puVar2,param_4,puVar3);
    _objc_release(puVar3);
    param_1 = param_1 * 1000.0;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    func_0x00010c215680(puVar2,param_4,(int)param_1);
    param_2 = param_2 * 1000.0;
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    func_0x00010c225ae0(puVar2,param_4,(int)param_2);
    _objc_alloc(puVar1);
    puVar3 = PTR_PTR_1126d3ad8;
    func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_a0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar1,param_4,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    param_3 = puVar1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      return (undefined *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 106fa4e08; end: 106fa4f8f; +[SCSpectaclesMalibuRequestMessage firmwareScheduleUpdate:windowLength:targetVersion:targetDigest:] */

undefined8
FUN_106fa4e08(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126d3b20;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  func_0x00010c212460();
  _objc_release(param_6);
  uVar2 = param_5;
  func_0x00010bf6e340(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c212640(puVar1,param_4,uVar2);
  _objc_release(uVar2);
  param_1 = param_1 * 1000.0;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  func_0x00010c215680(puVar1,param_4,(int)param_1);
  param_2 = param_2 * 1000.0;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  func_0x00010c225ae0(puVar1,param_4,(int)param_2);
  _objc_alloc(param_3);
  puVar3 = PTR_PTR_1126d3ad8;
  func_0x00010c14fc40(PTR_PTR_1126d3ad8,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_3,param_4,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
    return param_3;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 106fa4f90; end: 106fa4f97; +[SCSpectaclesMalibuRequestMessage checkOTAUpdateAvailability:forceBoot:] */

undefined8 FUN_106fa4f90(void)

{
  return 0;
}



/* Entry: 106fa4f98; end: 106fa4f9f; +[SCSpectaclesMalibuRequestMessage installOTAUpdate:] */

undefined8 FUN_106fa4f98(void)

{
  return 0;
}



/* Entry: 106fa4fa0; end: 106fa4fa7; +[SCSpectaclesMalibuRequestMessage setOTAAutoUpdateEnabled:] */

undefined8 FUN_106fa4fa0(void)

{
  return 0;
}



/* Entry: 106fa4fa8; end: 106fa4faf; +[SCSpectaclesMalibuRequestMessage getOTAAutoUpdateEnabled] */

undefined8 FUN_106fa4fa8(void)

{
  return 0;
}



/* Entry: 106fa4fb0; end: 106fa4fb7; +[SCSpectaclesMalibuRequestMessage cancelOTAUpdate] */

undefined8 FUN_106fa4fb0(void)

{
  return 0;
}



/* Entry: 106fa4fb8; end: 106fa5093; +[SCSpectaclesMalibuRequestMessage requestCrashReport] */

undefined * FUN_106fa4fb8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 **ppuStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 **ppuStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 **ppuStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  puVar1 = PTR_PTR_1126d3ae0;
  _objc_alloc_init();
  func_0x00010bf21ee0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106fa5094;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_70 = puVar3;
    puStack_68 = puVar1;
    puStack_60 = puVar2;
    puStack_58 = param_1;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_alloc();
    puVar2 = PTR_PTR_1126d3ad8;
    puVar1 = PTR_PTR_1126d3ae0;
    _objc_alloc_init();
    func_0x00010bf3aae0(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar4,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar5 = puVar1;
    _objc_release();
    param_1 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      pcStack_88 = FUN_106fa5170;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_b0 = puVar3;
      puStack_a8 = puVar1;
      puStack_a0 = puVar2;
      puStack_98 = puVar4;
      ppuStack_90 = &puStack_50;
      _objc_alloc();
      puVar2 = PTR_PTR_1126d3ad8;
      puVar1 = PTR_PTR_1126d3ae0;
      _objc_alloc_init();
      func_0x00010bf3aec0(puVar2,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_c0 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_c0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040a80(puVar5,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar4 = puVar1;
      _objc_release();
      param_1 = puVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
        ___stack_chk_fail();
        pcStack_c8 = FUN_106fa524c;
        lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar6 = PTR_PTR_1126d3b28;
        puStack_f0 = puVar3;
        puStack_e8 = puVar1;
        puStack_e0 = puVar2;
        puStack_d8 = puVar5;
        ppuStack_d0 = &ppuStack_90;
        _objc_alloc_init();
        func_0x00010c18b4c0();
        _objc_alloc();
        puVar2 = PTR_PTR_1126d3ad8;
        func_0x00010c22c920(PTR_PTR_1126d3ad8,param_2,puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_100 = puVar2;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_100,1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010c040a80(puVar4,param_2,puVar1);
        _objc_release(puVar1);
        _objc_release(puVar2);
        puVar3 = puVar6;
        _objc_release();
        param_1 = puVar4;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
          ___stack_chk_fail();
          puVar7 = PTR_PTR_1126d3b30;
          pcStack_108 = FUN_106fa5334;
          lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puStack_130 = puVar1;
          puStack_128 = puVar2;
          puStack_120 = puVar6;
          puStack_118 = puVar4;
          ppuStack_110 = &ppuStack_d0;
          _objc_retain(puVar5);
          _objc_alloc_init();
          func_0x00010c21e6a0();
          _objc_release(puVar5);
          _objc_alloc();
          puVar2 = PTR_PTR_1126d3ad8;
          func_0x00010c291380(PTR_PTR_1126d3ad8,param_2,puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_140 = puVar2;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_140,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c040a80(puVar3,param_2,puVar1);
          _objc_release(puVar1);
          _objc_release(puVar2);
          puVar4 = puVar7;
          _objc_release(puVar7);
          param_1 = puVar3;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
            ___stack_chk_fail();
            pcStack_148 = FUN_106fa5434;
            lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puStack_170 = puVar1;
            puStack_168 = puVar7;
            puStack_160 = puVar2;
            puStack_158 = puVar3;
            ppuStack_150 = &ppuStack_110;
            _objc_alloc();
            puVar2 = PTR_PTR_1126d3ad8;
            puVar1 = PTR_PTR_1126d3ae0;
            _objc_alloc_init(PTR_PTR_1126d3ae0);
            func_0x00010c0f35a0(puVar2,param_2,puVar1);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_180 = puVar2;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_180,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c040a80(puVar4,param_2,puVar3);
            _objc_release(puVar3);
            _objc_release(puVar2);
            _objc_release(puVar1);
            param_1 = puVar4;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
              ___stack_chk_fail();
              return (undefined *)0x0;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 106fa5094; end: 106fa516f; +[SCSpectaclesMalibuRequestMessage clearCrashReport] */

undefined * FUN_106fa5094(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 **ppuStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 **ppuStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  puVar1 = PTR_PTR_1126d3ae0;
  _objc_alloc_init();
  func_0x00010bf3aae0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106fa5170;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_70 = puVar3;
    puStack_68 = puVar1;
    puStack_60 = puVar2;
    puStack_58 = param_1;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_alloc();
    puVar2 = PTR_PTR_1126d3ad8;
    puVar1 = PTR_PTR_1126d3ae0;
    _objc_alloc_init();
    func_0x00010bf3aec0(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar4,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar5 = puVar1;
    _objc_release();
    param_1 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      pcStack_88 = FUN_106fa524c;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar6 = PTR_PTR_1126d3b28;
      puStack_b0 = puVar3;
      puStack_a8 = puVar1;
      puStack_a0 = puVar2;
      puStack_98 = puVar4;
      ppuStack_90 = &puStack_50;
      _objc_alloc_init();
      func_0x00010c18b4c0();
      _objc_alloc();
      puVar2 = PTR_PTR_1126d3ad8;
      func_0x00010c22c920(PTR_PTR_1126d3ad8,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_c0 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_c0,1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c040a80(puVar5,param_2,puVar1);
      _objc_release(puVar1);
      _objc_release(puVar2);
      puVar3 = puVar6;
      _objc_release();
      param_1 = puVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
        ___stack_chk_fail();
        puVar7 = PTR_PTR_1126d3b30;
        pcStack_c8 = FUN_106fa5334;
        lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_f0 = puVar1;
        puStack_e8 = puVar2;
        puStack_e0 = puVar6;
        puStack_d8 = puVar5;
        ppuStack_d0 = &ppuStack_90;
        _objc_retain(puVar4);
        _objc_alloc_init();
        func_0x00010c21e6a0();
        _objc_release(puVar4);
        _objc_alloc();
        puVar2 = PTR_PTR_1126d3ad8;
        func_0x00010c291380(PTR_PTR_1126d3ad8,param_2,puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_100 = puVar2;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_100,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c040a80(puVar3,param_2,puVar1);
        _objc_release(puVar1);
        _objc_release(puVar2);
        puVar4 = puVar7;
        _objc_release(puVar7);
        param_1 = puVar3;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
          ___stack_chk_fail();
          pcStack_108 = FUN_106fa5434;
          lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puStack_130 = puVar1;
          puStack_128 = puVar7;
          puStack_120 = puVar2;
          puStack_118 = puVar3;
          ppuStack_110 = &ppuStack_d0;
          _objc_alloc();
          puVar2 = PTR_PTR_1126d3ad8;
          puVar1 = PTR_PTR_1126d3ae0;
          _objc_alloc_init(PTR_PTR_1126d3ae0);
          func_0x00010c0f35a0(puVar2,param_2,puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_140 = puVar2;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_140,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c040a80(puVar4,param_2,puVar3);
          _objc_release(puVar3);
          _objc_release(puVar2);
          _objc_release(puVar1);
          param_1 = puVar4;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
            ___stack_chk_fail();
            return (undefined *)0x0;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 106fa5170; end: 106fa524b; +[SCSpectaclesMalibuRequestMessage clearAllContent] */

undefined * FUN_106fa5170(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 **ppuStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  puVar1 = PTR_PTR_1126d3ae0;
  _objc_alloc_init();
  func_0x00010bf3aec0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106fa524c;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = PTR_PTR_1126d3b28;
    puStack_70 = puVar3;
    puStack_68 = puVar1;
    puStack_60 = puVar2;
    puStack_58 = param_1;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_alloc_init();
    func_0x00010c18b4c0();
    _objc_alloc();
    puVar2 = PTR_PTR_1126d3ad8;
    func_0x00010c22c920(PTR_PTR_1126d3ad8,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c040a80(puVar4,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar5;
    _objc_release();
    param_1 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      puVar6 = PTR_PTR_1126d3b30;
      pcStack_88 = FUN_106fa5334;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_b0 = puVar1;
      puStack_a8 = puVar2;
      puStack_a0 = puVar5;
      puStack_98 = puVar4;
      ppuStack_90 = &puStack_50;
      _objc_retain(puVar7);
      _objc_alloc_init();
      func_0x00010c21e6a0();
      _objc_release(puVar7);
      _objc_alloc();
      puVar2 = PTR_PTR_1126d3ad8;
      func_0x00010c291380(PTR_PTR_1126d3ad8,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_c0 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_c0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040a80(puVar3,param_2,puVar1);
      _objc_release(puVar1);
      _objc_release(puVar2);
      puVar4 = puVar6;
      _objc_release(puVar6);
      param_1 = puVar3;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
        ___stack_chk_fail();
        pcStack_c8 = FUN_106fa5434;
        lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_f0 = puVar1;
        puStack_e8 = puVar6;
        puStack_e0 = puVar2;
        puStack_d8 = puVar3;
        ppuStack_d0 = &ppuStack_90;
        _objc_alloc();
        puVar2 = PTR_PTR_1126d3ad8;
        puVar1 = PTR_PTR_1126d3ae0;
        _objc_alloc_init(PTR_PTR_1126d3ae0);
        func_0x00010c0f35a0(puVar2,param_2,puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_100 = puVar2;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_100,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c040a80(puVar4,param_2,puVar3);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar1);
        param_1 = puVar4;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
          ___stack_chk_fail();
          return (undefined *)0x0;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 106fa524c; end: 106fa5333; +[SCSpectaclesMalibuRequestMessage prepShippingState] */

undefined * FUN_106fa524c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d3b28;
  _objc_alloc_init();
  func_0x00010c18b4c0();
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  func_0x00010c22c920(PTR_PTR_1126d3ad8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c040a80(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126d3b30;
    pcStack_48 = FUN_106fa5334;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_70 = puVar3;
    puStack_68 = puVar2;
    puStack_60 = puVar1;
    puStack_58 = param_1;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    _objc_alloc_init();
    func_0x00010c21e6a0();
    _objc_release(puVar6);
    _objc_alloc();
    puVar1 = PTR_PTR_1126d3ad8;
    func_0x00010c291380(PTR_PTR_1126d3ad8,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar4,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar3 = puVar5;
    _objc_release(puVar5);
    param_1 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      pcStack_88 = FUN_106fa5434;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_b0 = puVar2;
      puStack_a8 = puVar5;
      puStack_a0 = puVar1;
      puStack_98 = puVar4;
      ppuStack_90 = &puStack_50;
      _objc_alloc();
      puVar1 = PTR_PTR_1126d3ad8;
      puVar2 = PTR_PTR_1126d3ae0;
      _objc_alloc_init(PTR_PTR_1126d3ae0);
      func_0x00010c0f35a0(puVar1,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_c0 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_c0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040a80(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar1);
      _objc_release(puVar2);
      param_1 = puVar3;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
        ___stack_chk_fail();
        return (undefined *)0x0;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 106fa5334; end: 106fa5433; +[SCSpectaclesMalibuRequestMessage userAssociationRequest:] */

undefined * FUN_106fa5334(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126d3b30;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc_init();
  func_0x00010c21e6a0();
  _objc_release(param_3);
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  func_0x00010c291380(PTR_PTR_1126d3ad8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106fa5434;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_70 = puVar3;
    puStack_68 = puVar1;
    puStack_60 = puVar2;
    puStack_58 = param_1;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_alloc();
    puVar1 = PTR_PTR_1126d3ad8;
    puVar2 = PTR_PTR_1126d3ae0;
    _objc_alloc_init(PTR_PTR_1126d3ae0);
    func_0x00010c0f35a0(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar4,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar2);
    param_1 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      return (undefined *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 106fa5434; end: 106fa550f; +[SCSpectaclesMalibuRequestMessage pairingTimerKick] */

undefined8 FUN_106fa5434(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  puVar1 = PTR_PTR_1126d3ae0;
  _objc_alloc_init(PTR_PTR_1126d3ae0);
  func_0x00010c0f35a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return param_1;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 106fa5510; end: 106fa5517; +[SCSpectaclesMalibuRequestMessage validatePairingWithUserId:] */

undefined8 FUN_106fa5510(void)

{
  return 0;
}



/* Entry: 106fa5518; end: 106fa5637; +[SCSpectaclesMalibuRequestMessage exchangeKey:nonce:] */

undefined *
FUN_106fa5518(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126d3b38;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init();
  func_0x00010c1e5720();
  _objc_release(param_3);
  func_0x00010c1cdaa0(puVar1,param_2,param_4);
  _objc_release(param_4);
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  func_0x00010c086620(PTR_PTR_1126d3ad8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 1;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c040a80(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126d3b40;
    pcStack_48 = FUN_106fa5638;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_70 = puVar3;
    puStack_68 = puVar2;
    puStack_60 = param_1;
    puStack_58 = puVar1;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_retain(uVar7);
    _objc_retain(puVar6);
    _objc_alloc_init(puVar5);
    func_0x00010c17c560();
    _objc_release(puVar6);
    func_0x00010c211780(puVar5,param_2,uVar7);
    _objc_release(uVar7);
    _objc_alloc(puVar4);
    puVar1 = PTR_PTR_1126d3ad8;
    func_0x00010c0f7120(PTR_PTR_1126d3ad8,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar4,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar5);
    param_1 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      return (undefined *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 106fa5638; end: 106fa5757; +[SCSpectaclesMalibuRequestMessage verifyPeer:tag:] */

undefined8
FUN_106fa5638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126d3b40;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c17c560();
  _objc_release(param_3);
  func_0x00010c211780(puVar1,param_2,param_4);
  _objc_release(param_4);
  _objc_alloc(param_1);
  puVar2 = PTR_PTR_1126d3ad8;
  func_0x00010c0f7120(PTR_PTR_1126d3ad8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return param_1;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 106fa5758; end: 106fa575f; +[SCSpectaclesMalibuRequestMessage encryptionSetupNonce:] */

undefined8 FUN_106fa5758(void)

{
  return 0;
}



/* Entry: 106fa5760; end: 106fa5767; +[SCSpectaclesMalibuRequestMessage accessToken:refreshToken:expirationTimeMs:userId:snapadsId:email:birthday:fideliusKeyProvider:scopes:] */

undefined8 FUN_106fa5760(void)

{
  return 0;
}



/* Entry: 106fa5768; end: 106fa576f; +[SCSpectaclesMalibuRequestMessage setPairingSessionId:] */

undefined8 FUN_106fa5768(void)

{
  return 0;
}



/* Entry: 106fa5770; end: 106fa584b; +[SCSpectaclesMalibuRequestMessage getClientId] */

undefined *
FUN_106fa5770(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_alloc();
  puVar3 = PTR_PTR_1126d3ad8;
  puVar2 = PTR_PTR_1126d3ae0;
  _objc_alloc_init();
  func_0x00010bfc3ac0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 1;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c040a80(param_1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar3 = PTR_PTR_1126d3b48;
    pcStack_48 = FUN_106fa584c;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_retain(param_5);
    _objc_retain(uVar7);
    _objc_retain(puVar5);
    _objc_alloc_init();
    func_0x00010c16cac0();
    _objc_release(puVar5);
    func_0x00010c17dcc0(puVar3,param_2,uVar7);
    _objc_release(uVar7);
    func_0x00010c1e9340(puVar3,param_2,param_5);
    _objc_release(param_5);
    _objc_alloc();
    puVar4 = PTR_PTR_1126d3ad8;
    func_0x00010c16cac0(PTR_PTR_1126d3ad8,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar6 = puVar3;
    _objc_release(puVar3);
    param_1 = puVar2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      pcStack_98 = FUN_106fa5994;
      lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_c0 = puVar5;
      puStack_b8 = puVar4;
      puStack_b0 = puVar2;
      puStack_a8 = puVar3;
      ppuStack_a0 = &puStack_50;
      _objc_alloc();
      puVar3 = PTR_PTR_1126d3ad8;
      puVar2 = PTR_PTR_1126d3ae0;
      _objc_alloc_init(PTR_PTR_1126d3ae0);
      func_0x00010bfcc3e0(puVar3,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_d0 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d0,1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c040a80(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      param_1 = puVar6;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
        ___stack_chk_fail();
        uVar1 = 0;
        if (puVar5 + -1 < (undefined *)0x3) {
          uVar1 = (int)(puVar5 + -1) + 1;
        }
        return (undefined *)(ulong)uVar1;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 106fa584c; end: 106fa5993; +[SCSpectaclesMalibuRequestMessage authzCode:codeVerifier:redirectUri:] */

undefined *
FUN_106fa584c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126d3b48;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init();
  func_0x00010c16cac0();
  _objc_release(param_3);
  func_0x00010c17dcc0(puVar2,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1e9340(puVar2,param_2,param_5);
  _objc_release(param_5);
  _objc_alloc();
  puVar3 = PTR_PTR_1126d3ad8;
  func_0x00010c16cac0(PTR_PTR_1126d3ad8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar5 = puVar2;
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_58 = FUN_106fa5994;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_80 = puVar4;
    puStack_78 = puVar3;
    puStack_70 = param_1;
    puStack_68 = puVar2;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_alloc();
    puVar2 = PTR_PTR_1126d3ad8;
    puVar3 = PTR_PTR_1126d3ae0;
    _objc_alloc_init(PTR_PTR_1126d3ae0);
    func_0x00010bfcc3e0(puVar2,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c040a80(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
    param_1 = puVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      uVar1 = 0;
      if (puVar6 + -1 < (undefined *)0x3) {
        uVar1 = (int)(puVar6 + -1) + 1;
      }
      return (undefined *)(ulong)uVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 106fa5994; end: 106fa5a6f; +[SCSpectaclesMalibuRequestMessage getWifiApList] */

ulong FUN_106fa5994(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_alloc();
  puVar3 = PTR_PTR_1126d3ad8;
  puVar2 = PTR_PTR_1126d3ae0;
  _objc_alloc_init(PTR_PTR_1126d3ae0);
  func_0x00010bfcc3e0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c040a80(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return param_1;
  }
  ___stack_chk_fail();
  uVar1 = 0;
  if (puVar5 + -1 < (undefined *)0x3) {
    uVar1 = (int)(puVar5 + -1) + 1;
  }
  return (ulong)uVar1;
}



/* Entry: 106fa5a70; end: 106fa5a7f; +[SCSpectaclesMalibuRequestMessage _convertWifiAPState:] */

int FUN_106fa5a70(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 3) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 106fa5a80; end: 106fa5ca7; +[SCSpectaclesMalibuRequestMessage setWifiApList:] */

undefined8 FUN_106fa5a80(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d3b50;
  _objc_alloc_init(PTR_PTR_1126d3b50);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_140,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar8 = *plStack_130;
    do {
      lVar9 = 0;
      do {
        if (*plStack_130 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(undefined8 *)(lStack_138 + lVar9 * 8);
        puVar3 = PTR_PTR_1126d3b58;
        _objc_alloc_init(PTR_PTR_1126d3b58);
        uVar4 = param_1;
        _objc_opt_class(param_1);
        uVar5 = uVar7;
        func_0x00010c252440(uVar7);
        func_0x00010bde97a0(uVar4,param_2,uVar5);
        func_0x00010c209fc0(puVar3,param_2,uVar4);
        func_0x00010c24cc00(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c208f60(puVar3,param_2,uVar7);
        _objc_release(uVar7);
        puVar6 = puVar1;
        func_0x00010c2a5240(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar6);
        _objc_release(puVar3);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_140,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_alloc(param_1);
  puVar3 = PTR_PTR_1126d3ad8;
  func_0x00010c225780(PTR_PTR_1126d3ad8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_f8 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f8,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return param_1;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 106fa5ca8; end: 106fa5caf; +[SCSpectaclesMalibuRequestMessage shareWiFiCredentials:password:] */

undefined8 FUN_106fa5ca8(void)

{
  return 0;
}



/* Entry: 106fa5cb0; end: 106fa5d8b; +[SCSpectaclesMalibuRequestMessage getLastCloudUploadTime] */

undefined8 FUN_106fa5cb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  puVar1 = PTR_PTR_1126d3ae0;
  _objc_alloc_init(PTR_PTR_1126d3ae0);
  func_0x00010bfc6ca0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return param_1;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 106fa5d8c; end: 106fa5d93; +[SCSpectaclesMalibuRequestMessage getWiFiStatusWithForceBoot:] */

undefined8 FUN_106fa5d8c(void)

{
  return 0;
}



/* Entry: 106fa5d94; end: 106fa5d9b; +[SCSpectaclesMalibuRequestMessage getAvailableWiFiNetworksWithForceBoot:] */

undefined8 FUN_106fa5d94(void)

{
  return 0;
}



/* Entry: 106fa5d9c; end: 106fa5da3; +[SCSpectaclesMalibuRequestMessage enableSpectaclesWiFiSettings:] */

undefined8 FUN_106fa5d9c(void)

{
  return 0;
}



/* Entry: 106fa5da4; end: 106fa5dab; +[SCSpectaclesMalibuRequestMessage forgetWiFiWithSSID:] */

undefined8 FUN_106fa5da4(void)

{
  return 0;
}



/* Entry: 106fa5dac; end: 106fa5eab; +[SCSpectaclesMalibuRequestMessage exchangeNonce:channelType:] */

undefined * FUN_106fa5dac(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126d3b60;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc_init();
  func_0x00010c1cdaa0();
  _objc_release(param_3);
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  func_0x00010bf93fc0(PTR_PTR_1126d3ad8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106fa5eac;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_70 = puVar3;
    puStack_68 = puVar1;
    puStack_60 = puVar2;
    puStack_58 = param_1;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_alloc();
    puVar1 = PTR_PTR_1126d3ad8;
    puVar2 = PTR_PTR_1126d3ae0;
    _objc_alloc_init(PTR_PTR_1126d3ae0);
    func_0x00010c281c80(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040a80(puVar4,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar2);
    param_1 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      return (undefined *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 106fa5eac; end: 106fa5f87; +[SCSpectaclesMalibuRequestMessage unpair] */

undefined8 FUN_106fa5eac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126d3ad8;
  puVar1 = PTR_PTR_1126d3ae0;
  _objc_alloc_init(PTR_PTR_1126d3ae0);
  func_0x00010c281c80(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a80(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return param_1;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 106fa5f88; end: 106fa5f8f; +[SCSpectaclesMalibuRequestMessage postPairingCompletionEvent] */

undefined8 FUN_106fa5f88(void)

{
  return 0;
}



/* Entry: 106fa5f90; end: 106fa5f97; +[SCSpectaclesMalibuRequestMessage getLocationEnabledWithForceBoot:] */

undefined8 FUN_106fa5f90(void)

{
  return 0;
}



/* Entry: 106fa5f98; end: 106fa5f9f; +[SCSpectaclesMalibuRequestMessage setLocationEnabled:] */

undefined8 FUN_106fa5f98(void)

{
  return 0;
}



/* Entry: 106fa5fa0; end: 106fa5fa7; +[SCSpectaclesMalibuRequestMessage setAudioLevel:] */

undefined8 FUN_106fa5fa0(void)

{
  return 0;
}



/* Entry: 106fa5fa8; end: 106fa5faf; +[SCSpectaclesMalibuRequestMessage getAudioLevelWithForceBoot:] */

undefined8 FUN_106fa5fa8(void)

{
  return 0;
}



/* Entry: 106fa5fb0; end: 106fa5fb7; +[SCSpectaclesMalibuRequestMessage setBrightnessLevel:] */

undefined8 FUN_106fa5fb0(void)

{
  return 0;
}



/* Entry: 106fa5fb8; end: 106fa5fbf; +[SCSpectaclesMalibuRequestMessage getBrightnessLevelWithForceBoot:] */

undefined8 FUN_106fa5fb8(void)

{
  return 0;
}



/* Entry: 106fa5fc0; end: 106fa5fc7; +[SCSpectaclesMalibuRequestMessage setAutoBrightness:] */

undefined8 FUN_106fa5fc0(void)

{
  return 0;
}



/* Entry: 106fa5fc8; end: 106fa5fcf; +[SCSpectaclesMalibuRequestMessage getAutoBrightness] */

undefined8 FUN_106fa5fc8(void)

{
  return 0;
}



/* Entry: 106fa5fd0; end: 106fa5fd7; +[SCSpectaclesMalibuRequestMessage muteSystemSound:] */

undefined8 FUN_106fa5fd0(void)

{
  return 0;
}



/* Entry: 106fa5fd8; end: 106fa5fdf; +[SCSpectaclesMalibuRequestMessage getSystemSoundMutedStatus] */

undefined8 FUN_106fa5fd8(void)

{
  return 0;
}



/* Entry: 106fa5fe0; end: 106fa5fe7; +[SCSpectaclesMalibuRequestMessage playSound:] */

undefined8 FUN_106fa5fe0(void)

{
  return 0;
}



/* Entry: 106fa5fe8; end: 106fa5fef; +[SCSpectaclesMalibuRequestMessage setUSBImportState:] */

undefined8 FUN_106fa5fe8(void)

{
  return 0;
}



/* Entry: 106fa5ff0; end: 106fa5ff7; +[SCSpectaclesMalibuRequestMessage getUSBImportState] */

undefined8 FUN_106fa5ff0(void)

{
  return 0;
}



/* Entry: 106fa5ff8; end: 106fa5fff; +[SCSpectaclesMalibuRequestMessage getUSBConnectionStatus] */

undefined8 FUN_106fa5ff8(void)

{
  return 0;
}



/* Entry: 106fa6000; end: 106fa6007; +[SCSpectaclesMalibuRequestMessage proxyStarted:password:port:ipv4:] */

undefined8 FUN_106fa6000(void)

{
  return 0;
}



/* Entry: 106fa6008; end: 106fa600f; +[SCSpectaclesMalibuRequestMessage proxyStatus:] */

undefined8 FUN_106fa6008(void)

{
  return 0;
}



/* Entry: 106fa6010; end: 106fa6017; +[SCSpectaclesMalibuRequestMessage proxyManualStart] */

undefined8 FUN_106fa6010(void)

{
  return 0;
}



/* Entry: 106fa6018; end: 106fa601f; +[SCSpectaclesMalibuRequestMessage proxyManualStop] */

undefined8 FUN_106fa6018(void)

{
  return 0;
}



/* Entry: 106fa6020; end: 106fa6027; +[SCSpectaclesMalibuRequestMessage eventRegisterListenerRequest] */

undefined8 FUN_106fa6020(void)

{
  return 0;
}



/* Entry: 106fa6028; end: 106fa602f; +[SCSpectaclesMalibuRequestMessage eventUnregisterListenerRequest] */

undefined8 FUN_106fa6028(void)

{
  return 0;
}



/* Entry: 106fa6030; end: 106fa6037; +[SCSpectaclesMalibuRequestMessage mediaListRequest] */

undefined8 FUN_106fa6030(void)

{
  return 0;
}



/* Entry: 106fa6038; end: 106fa603f; +[SCSpectaclesMalibuRequestMessage readRequestWithUUID:fileType:fileRange:] */

undefined8 FUN_106fa6038(void)

{
  return 0;
}



/* Entry: 106fa6040; end: 106fa6047; +[SCSpectaclesMalibuRequestMessage markTransferredRequestForContentUUID:] */

undefined8 FUN_106fa6040(void)

{
  return 0;
}



/* Entry: 106fa6048; end: 106fa604f; +[SCSpectaclesMalibuRequestMessage deletionRequestForContentUUID:] */

undefined8 FUN_106fa6048(void)

{
  return 0;
}



/* Entry: 106fa6050; end: 106fa6057; +[SCSpectaclesMalibuRequestMessage getGenericAssetWithFileIdentifier:range:] */

undefined8 FUN_106fa6050(void)

{
  return 0;
}



/* Entry: 106fa6058; end: 106fa605f; +[SCSpectaclesMalibuRequestMessage cancelBackupForIdentifiers:] */

undefined8 FUN_106fa6058(void)

{
  return 0;
}



/* Entry: 106fa6060; end: 106fa6067; +[SCSpectaclesMalibuRequestMessage resumeBackup] */

undefined8 FUN_106fa6060(void)

{
  return 0;
}



/* Entry: 106fa6068; end: 106fa606f; +[SCSpectaclesMalibuRequestMessage setPhoneName:] */

undefined8 FUN_106fa6068(void)

{
  return 0;
}



/* Entry: 106fa6070; end: 106fa6077; +[SCSpectaclesMalibuRequestMessage getLowPowerMode] */

undefined8 FUN_106fa6070(void)

{
  return 0;
}



/* Entry: 106fa6078; end: 106fa607f; +[SCSpectaclesMalibuRequestMessage setLowPowerMode:] */

undefined8 FUN_106fa6078(void)

{
  return 0;
}


