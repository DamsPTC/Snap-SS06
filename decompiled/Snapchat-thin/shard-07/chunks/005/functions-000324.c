/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055e67a0; end: 1055e67b3; -[SCUnlockableAPINetworkConfig _routingTagFromCOF] */

void FUN_1055e67a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stringValueForConfigKeySync_feat_112675010,
             &PTR____CFConstantStringClassReference_110def598,0);
  return;
}



/* Entry: 1055e67b4; end: 1055e67bf; -[SCUnlockableAPINetworkConfig unlocksEndpoint] */

undefined ** FUN_1055e67b4(void)

{
  return &PTR____CFConstantStringClassReference_110def5b8;
}



/* Entry: 1055e67c0; end: 1055e67cb; -[SCUnlockableAPINetworkConfig addUnlockEndpoint] */

undefined ** FUN_1055e67c0(void)

{
  return &PTR____CFConstantStringClassReference_110def5d8;
}



/* Entry: 1055e67cc; end: 1055e67d7; -[SCUnlockableAPINetworkConfig removeUnlockEndpoint] */

undefined ** FUN_1055e67cc(void)

{
  return &PTR____CFConstantStringClassReference_110def5f8;
}



/* Entry: 1055e67d8; end: 1055e67e3; -[SCUnlockableAPINetworkConfig unlockableMetadataEndpoint] */

undefined ** FUN_1055e67d8(void)

{
  return &PTR____CFConstantStringClassReference_110def618;
}



/* Entry: 1055e67e4; end: 1055e67fb; -[SCUnlockableAPINetworkConfig shouldUseGzipCompressionForRequests] */

void FUN_1055e67e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110def578,0,0);
  return;
}



/* Entry: 1055e67fc; end: 1055e687f; -[SCUnlockableAPINetworkConfig _unlocksHostFromCOF] */

undefined ** FUN_1055e67fc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c25d780(uVar1,param_2,&PTR____CFConstantStringClassReference_110def518,
                      &PTR____CFConstantStringClassReference_110def558,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  ppuVar3 = &PTR____CFConstantStringClassReference_110def498;
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110def538);
    ppuVar3 = &PTR____CFConstantStringClassReference_110def4f8;
    if ((int)uVar2 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110def498;
    }
  }
  _objc_release(uVar1);
  return ppuVar3;
}



/* Entry: 1055e6880; end: 1055e68af; -[SCUnlockableAPINetworkConfig .cxx_destruct] */

void FUN_1055e6880(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055e68b0; end: 1055e6be3; +[SCUnlockableNetworkGetUnlocksResponseMapper unlockableNetworkGetUnlocksResponseFromProtoGetUnlocksResponse:lensSnapchatMapper:] */

void FUN_1055e68b0(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *unaff_x23;
  undefined *unaff_x24;
  long lVar9;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 uVar10;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined8 *puVar11;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  code *pcStack_4b8;
  undefined *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 **ppuStack_4a0;
  code *pcStack_498;
  undefined8 uStack_490;
  long lStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined1 auStack_450 [128];
  long lStack_3d0;
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
  undefined1 **ppuStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_290;
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
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  long lStack_1f8;
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
  puVar8 = param_3;
  puVar1 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar7 = param_3;
  func_0x00010bfcf7a0();
  if (puVar7 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puStack_210 = param_4;
    puStack_208 = param_3;
    func_0x00010bfcf780(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_220 = param_1;
    func_0x00010be6e4e0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    unaff_x23 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    puStack_218 = param_1;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puStack_200 = param_1;
    func_0x00010bf52a60();
    if (param_1 != (undefined *)0x0) {
      lStack_1f8 = *plStack_1a0;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_1a0 != lStack_1f8) {
            _objc_enumerationMutation(puStack_200);
          }
          unaff_x26 = *(undefined **)(lStack_1a8 + (long)puVar7 * 8);
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          func_0x00010c281780();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = unaff_x26;
          func_0x00010bf52a60();
          if (puVar8 != (undefined *)0x0) {
            lVar9 = *plStack_1e0;
            unaff_x27 = puVar8;
            do {
              puVar8 = (undefined *)0x0;
              do {
                if (*plStack_1e0 != lVar9) {
                  _objc_enumerationMutation(unaff_x26);
                }
                unaff_x28 = *(undefined **)(lStack_1e8 + (long)puVar8 * 8);
                puVar1 = unaff_x28;
                func_0x00010bfe5e40();
                _objc_retainAutoreleasedReturnValue();
                if (puVar1 != (undefined *)0x0) {
                  puVar2 = unaff_x28;
                  func_0x00010bf38a80();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  _objc_release(puVar1);
                  if (puVar2 != (undefined *)0x0) {
                    puVar1 = unaff_x28;
                    func_0x00010bf38a80(unaff_x28);
                    _objc_retainAutoreleasedReturnValue();
                    puVar2 = unaff_x28;
                    func_0x00010bfe5e40(unaff_x28);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640(unaff_x23,param_2,puVar1,puVar2);
                    _objc_release(puVar2);
                    _objc_release(puVar1);
                  }
                }
                puVar8 = puVar8 + 1;
              } while (unaff_x27 != puVar8);
              unaff_x27 = unaff_x26;
              func_0x00010bf52a60(unaff_x26,param_2,&uStack_1f0,auStack_170,0x10);
            } while (unaff_x27 != (undefined *)0x0);
          }
          _objc_release(unaff_x26);
          puVar7 = puVar7 + 1;
        } while (puVar7 != param_1);
        param_1 = puStack_200;
        func_0x00010bf52a60(puStack_200,param_2,&uStack_1b0,auStack_f0,0x10);
        unaff_x25 = (undefined *)0x0;
      } while (param_1 != (undefined *)0x0);
    }
    _objc_release(puStack_200);
    param_3 = puStack_208;
    puVar7 = puStack_208;
    func_0x00010c098320(puStack_208);
    _objc_retainAutoreleasedReturnValue();
    param_4 = puStack_210;
    unaff_x24 = puStack_220;
    param_5 = unaff_x23;
    func_0x00010be4b4a0(puStack_220,param_2,puVar7,puStack_210);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126bbfe8;
    _objc_alloc();
    param_1 = puStack_218;
    puVar8 = unaff_x24;
    puVar1 = puStack_218;
    func_0x00010c025d60();
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(param_1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_228 = FUN_1055e6be4;
    lStack_290 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_280 = unaff_x28;
    puStack_278 = unaff_x27;
    puStack_270 = unaff_x26;
    puStack_268 = unaff_x25;
    puStack_260 = unaff_x24;
    puStack_258 = unaff_x23;
    puStack_250 = puVar7;
    puStack_248 = param_1;
    puStack_240 = param_4;
    puStack_238 = param_3;
    puStack_230 = &stack0xfffffffffffffff0;
    _objc_retain(puVar8);
    _objc_retain(puVar1);
    _objc_retain(param_5);
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puVar2 = puVar8;
    func_0x00010bf529e0(puVar8);
    func_0x00010bf71fe0(puVar7,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    plStack_340 = (long *)0x0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    puStack_358 = puVar7;
    _objc_retain(puVar8);
    puVar6 = &uStack_350;
    puStack_360 = puVar8;
    func_0x00010bf52a60();
    if (puVar8 != (undefined *)0x0) {
      lVar9 = *plStack_340;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_340 != lVar9) {
            _objc_enumerationMutation(puStack_360);
          }
          unaff_x24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar10 = *(undefined8 *)(lStack_348 + (long)puVar7 * 8);
          func_0x00010c08fb40(uVar10);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar10;
          func_0x00010bfe5ea0();
          func_0x00010c0df7c0(unaff_x24,param_2,uVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar10);
          unaff_x25 = param_5;
          func_0x00010c0e00e0(param_5,param_2,unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = PTR_PTR_1126bbee8;
          _objc_alloc();
          puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf87060(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0259e0(unaff_x27,param_2,4,unaff_x25,puVar2,0);
          _objc_release(puVar2);
          puVar2 = puVar1;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = puVar2;
          func_0x00010c095100();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          puVar2 = unaff_x26;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          unaff_x28 = (undefined *)0x0;
          if (puVar2 != (undefined *)0x0) {
            unaff_x28 = unaff_x26;
            func_0x00010c094540();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puStack_358,param_2,unaff_x26,unaff_x28);
            _objc_release(unaff_x28);
          }
          _objc_release(unaff_x26);
          _objc_release(unaff_x27);
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          puVar7 = puVar7 + 1;
        } while (puVar8 != puVar7);
        puVar6 = &uStack_350;
        puVar8 = puStack_360;
        func_0x00010bf52a60();
      } while (puVar8 != (undefined *)0x0);
    }
    puVar7 = puStack_360;
    _objc_release(puStack_360);
    puVar8 = puStack_358;
    puVar2 = puStack_358;
    func_0x00010bf51e00();
    _objc_release(puVar8);
    _objc_release(param_5);
    _objc_release(puVar1);
    puVar4 = puVar7;
    _objc_release(puVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_290) {
      ___stack_chk_fail();
      puVar11 = &uStack_490;
      puStack_390 = puVar8;
      puStack_378 = puVar7;
      pcStack_368 = FUN_1055e6ea4;
      lStack_3d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_3c0 = unaff_x28;
      puStack_3b8 = unaff_x27;
      puStack_3b0 = unaff_x26;
      puStack_3a8 = unaff_x25;
      puStack_3a0 = unaff_x24;
      puStack_398 = puVar2;
      puStack_388 = param_5;
      puStack_380 = puVar1;
      ppuStack_370 = &puStack_230;
      _objc_retain(puVar6);
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      puVar5 = puVar6;
      func_0x00010bf529e0(puVar6);
      func_0x00010bf71fe0(puVar7,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      lStack_488 = 0;
      uStack_490 = 0;
      uStack_478 = 0;
      plStack_480 = (long *)0x0;
      uStack_468 = 0;
      uStack_470 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      _objc_retain(puVar6);
      puVar5 = puVar6;
      func_0x00010bf52a60(puVar6,param_2,&uStack_490,auStack_450,0x10);
      if (puVar5 != (undefined8 *)0x0) {
        lVar9 = *plStack_480;
        do {
          puVar11 = (undefined8 *)0x0;
          do {
            if (*plStack_480 != lVar9) {
              _objc_enumerationMutation(puVar6);
            }
            uVar10 = *(undefined8 *)(lStack_488 + (long)puVar11 * 8);
            uVar3 = uVar10;
            func_0x00010bfce400(uVar10);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar4;
            func_0x00010be24900(puVar4,param_2,uVar3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            func_0x00010c2817a0(uVar10);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = puVar4;
            func_0x00010bdde760(puVar4,param_2,uVar10);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar10);
            puVar2 = PTR_PTR_1126bbff0;
            _objc_alloc(PTR_PTR_1126bbff0);
            func_0x00010c059440();
            func_0x00010c1d0640(puVar7,param_2,puVar2,puVar8);
            _objc_release(puVar2);
            _objc_release(puVar1);
            _objc_release(puVar8);
            puVar11 = (undefined8 *)((long)puVar11 + 1);
          } while (puVar5 != puVar11);
          puVar5 = puVar6;
          puVar11 = &uStack_490;
          func_0x00010bf52a60(puVar6,param_2,&uStack_490,auStack_450,0x10);
        } while (puVar5 != (undefined8 *)0x0);
      }
      _objc_release(puVar6);
      func_0x00010bf51e00(puVar7);
      _objc_release(puVar7);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d0) {
        ___stack_chk_fail();
        pcStack_498 = FUN_1055e709c;
        puStack_4c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_4c0 = 0xc0000000;
        pcStack_4b8 = FUN_1055e70fc;
        puStack_4b0 = &UNK_11089e2b8;
        puStack_4a8 = puVar6;
        ppuStack_4a0 = &ppuStack_370;
        func_0x00010c0b8600(puVar11,param_2,&puStack_4c8);
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055e6be4; end: 1055e6ea3; +[SCUnlockableNetworkGetUnlocksResponseMapper _lensMetadataFromLensSnapchatArray:lensSnapchatMapper:idToChecksumMap:] */

void FUN_1055e6be4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined *unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  undefined8 uVar10;
  undefined *unaff_x27;
  long unaff_x28;
  undefined8 *puVar11;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined8 *puStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [128];
  long lStack_1b0;
  long lStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar8 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0(puVar1,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puStack_138 = puVar1;
  _objc_retain(param_3);
  puVar7 = &uStack_130;
  lStack_140 = param_3;
  func_0x00010bf52a60();
  if (param_3 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lStack_140);
        }
        unaff_x24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar10 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        func_0x00010c08fb40(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar10;
        func_0x00010bfe5ea0();
        func_0x00010c0df7c0(unaff_x24,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        unaff_x25 = param_5;
        func_0x00010c0e00e0(param_5,param_2,unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = PTR_PTR_1126bbee8;
        _objc_alloc();
        puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf87060(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0259e0(unaff_x27,param_2,4,unaff_x25,puVar1,0);
        _objc_release(puVar1);
        lVar3 = param_4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = lVar3;
        func_0x00010c095100();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        lVar3 = unaff_x26;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        unaff_x28 = 0;
        if (lVar3 != 0) {
          unaff_x28 = unaff_x26;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puStack_138,param_2,unaff_x26,unaff_x28);
          _objc_release(unaff_x28);
        }
        _objc_release(unaff_x26);
        _objc_release(unaff_x27);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        lVar9 = lVar9 + 1;
      } while (param_3 != lVar9);
      puVar7 = &uStack_130;
      param_3 = lStack_140;
      func_0x00010bf52a60();
    } while (param_3 != 0);
  }
  lVar8 = lStack_140;
  _objc_release(lStack_140);
  puVar1 = puStack_138;
  puVar4 = puStack_138;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar9 = lVar8;
  _objc_release(lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar11 = &uStack_270;
    puStack_170 = puVar1;
    lStack_158 = lVar8;
    pcStack_148 = FUN_1055e6ea4;
    lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_1a0 = unaff_x28;
    puStack_198 = unaff_x27;
    lStack_190 = unaff_x26;
    uStack_188 = unaff_x25;
    puStack_180 = unaff_x24;
    puStack_178 = puVar4;
    uStack_168 = param_5;
    lStack_160 = param_4;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puVar5 = puVar7;
    func_0x00010bf529e0(puVar7);
    func_0x00010bf71fe0(puVar1,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    _objc_retain(puVar7);
    puVar5 = puVar7;
    func_0x00010bf52a60(puVar7,param_2,&uStack_270,auStack_230,0x10);
    if (puVar5 != (undefined8 *)0x0) {
      lVar8 = *plStack_260;
      do {
        puVar11 = (undefined8 *)0x0;
        do {
          if (*plStack_260 != lVar8) {
            _objc_enumerationMutation(puVar7);
          }
          uVar10 = *(undefined8 *)(lStack_268 + (long)puVar11 * 8);
          uVar2 = uVar10;
          func_0x00010bfce400(uVar10);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar9;
          func_0x00010be24900(lVar9,param_2,uVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          func_0x00010c2817a0(uVar10);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar9;
          func_0x00010bdde760(lVar9,param_2,uVar10);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar10);
          puVar4 = PTR_PTR_1126bbff0;
          _objc_alloc(PTR_PTR_1126bbff0);
          func_0x00010c059440();
          func_0x00010c1d0640(puVar1,param_2,puVar4,lVar3);
          _objc_release(puVar4);
          _objc_release(lVar6);
          _objc_release(lVar3);
          puVar11 = (undefined8 *)((long)puVar11 + 1);
        } while (puVar5 != puVar11);
        puVar5 = puVar7;
        puVar11 = &uStack_270;
        func_0x00010bf52a60(puVar7,param_2,&uStack_270,auStack_230,0x10);
      } while (puVar5 != (undefined8 *)0x0);
    }
    _objc_release(puVar7);
    func_0x00010bf51e00(puVar1);
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
      ___stack_chk_fail();
      pcStack_278 = FUN_1055e709c;
      puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2a0 = 0xc0000000;
      pcStack_298 = FUN_1055e70fc;
      puStack_290 = &UNK_11089e2b8;
      puStack_288 = puVar7;
      ppuStack_280 = &puStack_150;
      func_0x00010c0b8600(puVar11,param_2,&puStack_2a8);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055e6ea4; end: 1055e709b; +[SCUnlockableNetworkGetUnlocksResponseMapper _orderedUnlocksFromGroupedUnlocks:] */

void FUN_1055e6ea4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        uVar3 = uVar7;
        func_0x00010bfce400(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_1;
        func_0x00010be24900(param_1,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        func_0x00010c2817a0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
        func_0x00010bdde760(param_1,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        puVar5 = PTR_PTR_1126bbff0;
        _objc_alloc(PTR_PTR_1126bbff0);
        func_0x00010c059440();
        func_0x00010c1d0640(puVar2,param_2,puVar5,uVar4);
        _objc_release(puVar5);
        _objc_release(uVar3);
        _objc_release(uVar4);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_1055e709c;
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc0000000;
    pcStack_158 = FUN_1055e70fc;
    puStack_150 = &UNK_11089e2b8;
    lStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x00010c0b8600(puVar6,param_2,&puStack_168);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055e709c; end: 1055e70fb; +[SCUnlockableNetworkGetUnlocksResponseMapper _checksumResponsesFromChecksumEntries:] */

void FUN_1055e709c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_1055e70fc;
  puStack_20 = &UNK_11089e2b8;
  uStack_18 = param_1;
  func_0x00010c0b8600(param_3,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055e70fc; end: 1055e7107;  */

void FUN_1055e70fc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdde750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__checksumResponseFromChecksumEnt_112555370,
             param_2);
  return;
}



/* Entry: 1055e7108; end: 1055e71fb; +[SCUnlockableNetworkGetUnlocksResponseMapper _checksumResponseFromChecksumEntry:] */

void FUN_1055e7108(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126bbff8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_3;
  func_0x00010bfe5ea0(param_3);
  func_0x00010c0df7c0(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf38a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = param_3;
  func_0x00010bf26d40(param_3);
  _objc_release(param_3);
  func_0x00010c0df720((double)lVar4 / 60000.0,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b380(puVar1,param_2,puVar3,lVar2,puVar5);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055e71fc; end: 1055e724f; +[SCUnlockableNetworkGetUnlocksResponseMapper _groupNameForUnlockGroup:] */

void FUN_1055e71fc(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  func_0x00010c280e20();
  if (param_3 - 2U < 3) {
    ppuVar1 = (undefined **)(&PTR_PTR_11089e2d8)[param_3 - 2U];
  }
  else {
    ppuVar1 = &PTR_PTR_110cb8530;
  }
  puVar2 = *ppuVar1;
  _objc_retain(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055e7250; end: 1055e7327; -[SCUnlockableNetworkLogger reportGetUnlockablesSuccessful:duration:server:] */

void FUN_1055e7250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bb928;
  _objc_retain(param_4);
  func_0x00010bfcba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8fcc0(param_1,param_2,param_3,puVar1,param_5,0,
                      &PTR____CFConstantStringClassReference_110de1318,0,0);
  uVar2 = param_4;
  func_0x00010c281740(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010bf529e0(uVar2);
  _objc_release(uVar2);
  func_0x00010be8f9e0(param_2,param_3,&PTR____CFConstantStringClassReference_110def778,uVar3,param_5
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055e7328; end: 1055e73ff; -[SCUnlockableNetworkLogger reportGetUnlockablesFailure:duration:responseCode:server:] */

void FUN_1055e7328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bb928;
  _objc_retain(param_4);
  func_0x00010bfcba60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8fcc0(param_1,param_2,param_3,puVar1,param_6,0,
                      &PTR____CFConstantStringClassReference_110de1318,puVar3,param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055e7400; end: 1055e7497; -[SCUnlockableNetworkLogger reportAddUnlockSuccessfulForUnlockType:duration:server:] */

void FUN_1055e7400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bb928;
  func_0x00010befc700(PTR_PTR_1126bb928);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bed16c0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8fcc0(param_1,param_2,param_3,puVar1,param_5,uVar2,0,0,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055e7498; end: 1055e7597; -[SCUnlockableNetworkLogger reportAddUnlockFailureForUnlockType:duration:responseCode:server:error:] */

void FUN_1055e7498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bb928;
  _objc_retain(param_7);
  func_0x00010befc6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bed16c0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8fcc0(param_1,param_2,param_3,puVar1,param_6,uVar2,0,puVar4,param_7);
  _objc_release(param_7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055e7598; end: 1055e765b; -[SCUnlockableNetworkLogger reportRemoveUnlockSuccessfulForUnlockType:unlockableType:duration:server:] */

void FUN_1055e7598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bb928;
  func_0x00010c12ee20(PTR_PTR_1126bb928);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bed16c0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bed1860(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8fcc0(param_1,param_2,param_3,puVar1,param_6,uVar2,uVar3,0,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055e765c; end: 1055e777f; -[SCUnlockableNetworkLogger reportRemoveUnlockFailureForUnlockType:unlockableType:duration:responseCode:server:error:] */

void FUN_1055e765c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126bb928;
  _objc_retain(param_8);
  func_0x00010c12ee00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bed16c0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bed1860(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8fcc0(param_1,param_2,param_3,puVar1,param_7,uVar2,uVar3,puVar5,param_8);
  _objc_release(param_8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055e7780; end: 1055e77f3; -[SCUnlockableNetworkLogger reportGetMetadataSuccessfulWithDuration:server:] */

void FUN_1055e7780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb928;
  func_0x00010c0cc6c0(PTR_PTR_1126bb928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8fcc0(param_1,param_2,param_3,puVar1,param_4,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055e77f4; end: 1055e78c7; -[SCUnlockableNetworkLogger reportGetMetadataFailureWithDuration:responseCode:server:error:] */

void FUN_1055e77f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bb928;
  _objc_retain(param_6);
  func_0x00010c0cc6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8fcc0(param_1,param_2,param_3,puVar1,param_5,0,0,puVar3,param_6);
  _objc_release(param_6);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055e78c8; end: 1055e7b2f; -[SCUnlockableNetworkLogger _reportMetric:server:unlockType:unlockableType:responseCode:error:duration:] */

void FUN_1055e78c8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8,long param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **unaff_x27;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010bea15a0(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c2ac460(param_4,param_3,&PTR____CFConstantStringClassReference_110dab258,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  if (param_6 != 0) {
    func_0x00010c2ac460(uVar2,param_3,&PTR____CFConstantStringClassReference_110def698,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  uVar2 = uVar3;
  if (param_7 != 0) {
    func_0x00010c2ac460(uVar3,param_3,&PTR____CFConstantStringClassReference_110def678,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  uVar3 = uVar2;
  if (param_8 != 0) {
    func_0x00010c2ac460(uVar2,param_3,&PTR____CFConstantStringClassReference_110daf558,param_8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar4 = param_8;
    func_0x00010c067fc0();
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar4 == 0) {
      if (param_9 == 0) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110dd2518;
      }
      else {
        lVar4 = param_9;
        func_0x00010bf3ec40(param_9);
        func_0x00010c0df780(ppuVar5,param_3,lVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar5;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = ppuVar5;
      }
      uVar2 = uVar3;
      func_0x00010c2ac460(uVar3,param_3,&PTR____CFConstantStringClassReference_110def798,ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar2;
      if (param_9 != 0) {
        _objc_release(ppuVar6);
        _objc_release(unaff_x27);
      }
    }
  }
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c094240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x00010bfec2a0(uVar2,param_3,uVar3);
  func_0x00010befc000(param_1,uVar2,param_3,uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1055e7b30; end: 1055e7c3f; -[SCUnlockableNetworkLogger _reportGetUnlocksHistogramForReportType:count:server:] */

void FUN_1055e7b30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bea15a0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bb928;
  func_0x00010bfcbaa0(PTR_PTR_1126bb928);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110def758,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c094240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1055e7c40; end: 1055e7c7b; -[SCUnlockableNetworkLogger _serverStringWithServerType:] */

void FUN_1055e7c40(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110def638;
  if (param_3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110def658;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1055e7c7c; end: 1055e7ca3; -[SCUnlockableNetworkLogger _unlockTypeStringWithUnlockType:] */

undefined ** FUN_1055e7c7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 4) {
    return (undefined **)(&PTR_PTR_11089e2f0)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110def6b8;
}



/* Entry: 1055e7ca4; end: 1055e7caf; -[SCUnlockableNetworkLogger _unlockableTypeStringWithUnlockableType:] */

undefined ** FUN_1055e7ca4(void)

{
  return &PTR____CFConstantStringClassReference_110de1318;
}



/* Entry: 1055e7cb0; end: 1055e7cb7; -[SCUnlockableNetworkLogger grapheneRegistry] */

undefined8 FUN_1055e7cb0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1055e7cb8; end: 1055e7ce7; -[SCUnlockableNetworkLogger setGrapheneRegistry:] */

void FUN_1055e7cb8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1055e7ce8; end: 1055e7cf3; -[SCUnlockableNetworkLogger .cxx_destruct] */

void FUN_1055e7ce8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055e7cf4; end: 1055e7cf7; -[SCUnlockablesNetworkFactory unlockableRemotePinner] */

void FUN_1055e7cf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdee170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createGTQUnlockNetworkManager_1125591f8);
  return;
}



/* Entry: 1055e7cf8; end: 1055e7d7b; -[SCUnlockablesNetworkFactory unlockableRemoteFetcher] */

void FUN_1055e7cf8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010bdee160();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bc008;
  _objc_alloc(PTR_PTR_1126bc008);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010c059280(puVar2,param_2,lVar1,uVar4,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055e7d7c; end: 1055e7dc7; -[SCUnlockablesNetworkFactory unlockManager] */

void FUN_1055e7d7c(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010bdee160();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bc010;
  _objc_alloc(PTR_PTR_1126bc010);
  func_0x00010c059260();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055e7dc8; end: 1055e7e4b; -[SCUnlockablesNetworkFactory unlockableRemover] */

void FUN_1055e7dc8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010bdee160();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bc018;
  _objc_alloc(PTR_PTR_1126bc018);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010c059280(puVar2,param_2,lVar1,uVar4,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055e7e4c; end: 1055e7e53; -[SCUnlockablesNetworkFactory _createGTQUnlockNetworkManager] */

void FUN_1055e7e4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdee190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createGTQUnlockableNetworkManag_112559200,1)
  ;
  return;
}



/* Entry: 1055e7e54; end: 1055e7e83;  */

void FUN_1055e7e54(void)

{
  _objc_alloc(PTR_PTR_1126bbf08);
  func_0x00010c025840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055e7e84; end: 1055e7e8b; -[SCUnlockablesNetworkFactory gtqRequestManager] */

undefined8 FUN_1055e7e84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1055e7e8c; end: 1055e7ebb; -[SCUnlockablesNetworkFactory setGtqRequestManager:] */

void FUN_1055e7e8c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1055e7ebc; end: 1055e7ec3; -[SCUnlockablesNetworkFactory requestInfoProvider] */

undefined8 FUN_1055e7ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1055e7ec4; end: 1055e7ef3; -[SCUnlockablesNetworkFactory setRequestInfoProvider:] */

void FUN_1055e7ec4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1055e7ef4; end: 1055e7efb; -[SCUnlockablesNetworkFactory networkLogging] */

undefined8 FUN_1055e7ef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1055e7efc; end: 1055e7f2b; -[SCUnlockablesNetworkFactory setNetworkLogging:] */

void FUN_1055e7efc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1055e7f2c; end: 1055e7f33; -[SCUnlockablesNetworkFactory circumstanceEngine] */

undefined8 FUN_1055e7f2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1055e7f34; end: 1055e7f63; -[SCUnlockablesNetworkFactory setCircumstanceEngine:] */

void FUN_1055e7f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055e7f64; end: 1055e7f6b; -[SCUnlockablesNetworkFactory lensCoreVersionProvider] */

undefined8 FUN_1055e7f64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1055e7f6c; end: 1055e7f9b; -[SCUnlockablesNetworkFactory setLensCoreVersionProvider:] */

void FUN_1055e7f6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055e7f9c; end: 1055e7fa3; -[SCUnlockablesNetworkFactory lensSnapchatMapper] */

undefined8 FUN_1055e7f9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1055e7fa4; end: 1055e7fd3; -[SCUnlockablesNetworkFactory setLensSnapchatMapper:] */

void FUN_1055e7fa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055e7fd4; end: 1055e8033; -[SCUnlockablesNetworkFactory .cxx_destruct] */

void FUN_1055e7fd4(long param_1)

{
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



/* Entry: 1055e8034; end: 1055e8147; -[SCGtqAddUnlockNetworkPersistanceRequest initWithCoder:] */

undefined1 * FUN_1055e8034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9490;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055e8148; end: 1055e825b; -[SCGtqAddUnlockNetworkPersistanceRequest initWithGtqRequest:host:path:additionalHttpHeaders:useGzipRequestCompression:] */

undefined1 *
FUN_1055e8148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

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
  puStack_48 = PTR_PTR_1126e9490;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055e825c; end: 1055e827f; -[SCGtqAddUnlockNetworkPersistanceRequest copyWithZone:] */

undefined8 FUN_1055e825c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1055e8280; end: 1055e831b; -[SCGtqAddUnlockNetworkPersistanceRequest encodeWithCoder:] */

void FUN_1055e8280(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110def7b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110def7d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110def7f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110def818);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110def838);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055e831c; end: 1055e83ab; -[SCGtqAddUnlockNetworkPersistanceRequest hash] */

undefined8 * FUN_1055e831c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1055e846c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1055e8478;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_1055e8478;
            }
            goto LAB_1055e846c;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1055e8478:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1055e83ac; end: 1055e8493; -[SCGtqAddUnlockNetworkPersistanceRequest isEqual:] */

long FUN_1055e83ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1055e846c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1055e8478;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_1055e8478;
            }
            goto LAB_1055e846c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1055e8478:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1055e8494; end: 1055e849b; -[SCGtqAddUnlockNetworkPersistanceRequest gtqRequest] */

undefined8 FUN_1055e8494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1055e849c; end: 1055e84a3; -[SCGtqAddUnlockNetworkPersistanceRequest host] */

undefined8 FUN_1055e849c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1055e84a4; end: 1055e84ab; -[SCGtqAddUnlockNetworkPersistanceRequest path] */

undefined8 FUN_1055e84a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1055e84ac; end: 1055e84b3; -[SCGtqAddUnlockNetworkPersistanceRequest additionalHttpHeaders] */

undefined8 FUN_1055e84ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1055e84b4; end: 1055e84bb; -[SCGtqAddUnlockNetworkPersistanceRequest useGzipRequestCompression] */

undefined1 FUN_1055e84b4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1055e84bc; end: 1055e8503; -[SCGtqAddUnlockNetworkPersistanceRequest .cxx_destruct] */

void FUN_1055e84bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1055e8504; end: 1055e8617; -[SCGtqGetUnlockablesNetworkPersistanceRequest initWithCoder:] */

undefined1 * FUN_1055e8504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9498;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055e8618; end: 1055e872b; -[SCGtqGetUnlockablesNetworkPersistanceRequest initWithGtqRequest:host:path:additionalHttpHeaders:useGzipRequestCompression:] */

undefined1 *
FUN_1055e8618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

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
  puStack_48 = PTR_PTR_1126e9498;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055e872c; end: 1055e874f; -[SCGtqGetUnlockablesNetworkPersistanceRequest copyWithZone:] */

undefined8 FUN_1055e872c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1055e8750; end: 1055e87eb; -[SCGtqGetUnlockablesNetworkPersistanceRequest encodeWithCoder:] */

void FUN_1055e8750(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110def7b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110def7d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110def7f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110def818);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110def838);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055e87ec; end: 1055e887b; -[SCGtqGetUnlockablesNetworkPersistanceRequest hash] */

undefined8 * FUN_1055e87ec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1055e893c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1055e8948;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_1055e8948;
            }
            goto LAB_1055e893c;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1055e8948:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1055e887c; end: 1055e8963; -[SCGtqGetUnlockablesNetworkPersistanceRequest isEqual:] */

long FUN_1055e887c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1055e893c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1055e8948;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_1055e8948;
            }
            goto LAB_1055e893c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1055e8948:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1055e8964; end: 1055e896b; -[SCGtqGetUnlockablesNetworkPersistanceRequest gtqRequest] */

undefined8 FUN_1055e8964(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1055e896c; end: 1055e8973; -[SCGtqGetUnlockablesNetworkPersistanceRequest host] */

undefined8 FUN_1055e896c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1055e8974; end: 1055e897b; -[SCGtqGetUnlockablesNetworkPersistanceRequest path] */

undefined8 FUN_1055e8974(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1055e897c; end: 1055e8983; -[SCGtqGetUnlockablesNetworkPersistanceRequest additionalHttpHeaders] */

undefined8 FUN_1055e897c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1055e8984; end: 1055e898b; -[SCGtqGetUnlockablesNetworkPersistanceRequest useGzipRequestCompression] */

undefined1 FUN_1055e8984(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1055e898c; end: 1055e89d3; -[SCGtqGetUnlockablesNetworkPersistanceRequest .cxx_destruct] */

void FUN_1055e898c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1055e89d4; end: 1055e8ad3; -[SCGtqLensMetadataNetworkPersistanceRequest initWithCoder:] */

undefined1 * FUN_1055e89d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e94a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055e8ad4; end: 1055e8bdf; -[SCGtqLensMetadataNetworkPersistanceRequest initWithGtqRequest:host:path:additionalHttpHeaders:] */

undefined1 *
FUN_1055e8ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126e94a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055e8be0; end: 1055e8c03; -[SCGtqLensMetadataNetworkPersistanceRequest copyWithZone:] */

undefined8 FUN_1055e8be0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1055e8c04; end: 1055e8c8b; -[SCGtqLensMetadataNetworkPersistanceRequest encodeWithCoder:] */

void FUN_1055e8c04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110def7b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110def7d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110def7f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110def818);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055e8c8c; end: 1055e8d17; -[SCGtqLensMetadataNetworkPersistanceRequest hash] */

undefined8 * FUN_1055e8c8c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1055e8dc8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1055e8dd4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_1055e8dd4;
            }
            goto LAB_1055e8dc8;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1055e8dd4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1055e8d18; end: 1055e8def; -[SCGtqLensMetadataNetworkPersistanceRequest isEqual:] */

long FUN_1055e8d18(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1055e8dc8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1055e8dd4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_1055e8dd4;
            }
            goto LAB_1055e8dc8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1055e8dd4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1055e8df0; end: 1055e8df7; -[SCGtqLensMetadataNetworkPersistanceRequest gtqRequest] */

undefined8 FUN_1055e8df0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1055e8df8; end: 1055e8dff; -[SCGtqLensMetadataNetworkPersistanceRequest host] */

undefined8 FUN_1055e8df8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1055e8e00; end: 1055e8e07; -[SCGtqLensMetadataNetworkPersistanceRequest path] */

undefined8 FUN_1055e8e00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1055e8e08; end: 1055e8e0f; -[SCGtqLensMetadataNetworkPersistanceRequest additionalHttpHeaders] */

undefined8 FUN_1055e8e08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1055e8e10; end: 1055e8e57; -[SCGtqLensMetadataNetworkPersistanceRequest .cxx_destruct] */

void FUN_1055e8e10(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055e8e58; end: 1055e8f6b; -[SCGtqMetadataNetworkPersistanceRequest initWithCoder:] */

undefined1 * FUN_1055e8e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e94a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055e8f6c; end: 1055e907f; -[SCGtqMetadataNetworkPersistanceRequest initWithGtqRequest:host:path:additionalHttpHeaders:useGzipRequestCompression:] */

undefined1 *
FUN_1055e8f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

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
  puStack_48 = PTR_PTR_1126e94a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055e9080; end: 1055e90a3; -[SCGtqMetadataNetworkPersistanceRequest copyWithZone:] */

undefined8 FUN_1055e9080(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1055e90a4; end: 1055e913f; -[SCGtqMetadataNetworkPersistanceRequest encodeWithCoder:] */

void FUN_1055e90a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110def7b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110def7d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110def7f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110def818);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110def838);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055e9140; end: 1055e91cf; -[SCGtqMetadataNetworkPersistanceRequest hash] */

undefined8 * FUN_1055e9140(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1055e9290:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1055e929c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_1055e929c;
            }
            goto LAB_1055e9290;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1055e929c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1055e91d0; end: 1055e92b7; -[SCGtqMetadataNetworkPersistanceRequest isEqual:] */

long FUN_1055e91d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1055e9290:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1055e929c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_1055e929c;
            }
            goto LAB_1055e9290;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1055e929c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1055e92b8; end: 1055e92bf; -[SCGtqMetadataNetworkPersistanceRequest gtqRequest] */

undefined8 FUN_1055e92b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1055e92c0; end: 1055e92c7; -[SCGtqMetadataNetworkPersistanceRequest host] */

undefined8 FUN_1055e92c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1055e92c8; end: 1055e92cf; -[SCGtqMetadataNetworkPersistanceRequest path] */

undefined8 FUN_1055e92c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1055e92d0; end: 1055e92d7; -[SCGtqMetadataNetworkPersistanceRequest additionalHttpHeaders] */

undefined8 FUN_1055e92d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1055e92d8; end: 1055e92df; -[SCGtqMetadataNetworkPersistanceRequest useGzipRequestCompression] */

undefined1 FUN_1055e92d8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1055e92e0; end: 1055e9327; -[SCGtqMetadataNetworkPersistanceRequest .cxx_destruct] */

void FUN_1055e92e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1055e9328; end: 1055e943b; -[SCGtqRemoveUnlockNetworkPersistanceRequest initWithCoder:] */

undefined1 * FUN_1055e9328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e94b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055e943c; end: 1055e954f; -[SCGtqRemoveUnlockNetworkPersistanceRequest initWithGtqRequest:host:path:additionalHttpHeaders:useGzipRequestCompression:] */

undefined1 *
FUN_1055e943c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

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
  puStack_48 = PTR_PTR_1126e94b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055e9550; end: 1055e9573; -[SCGtqRemoveUnlockNetworkPersistanceRequest copyWithZone:] */

undefined8 FUN_1055e9550(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


