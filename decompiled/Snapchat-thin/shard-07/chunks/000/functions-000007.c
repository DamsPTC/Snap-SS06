/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105013554; end: 105013583; -[SCProfileFlatlandGroupProfileLoggingHelper setBlizzardLogger:] */

void FUN_105013554(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105013584; end: 1050135b3; -[SCProfileFlatlandGroupProfileLoggingHelper .cxx_destruct] */

void FUN_105013584(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050135b4; end: 10501392f; -[SCProfileFlatlandGroupProfileRootViewCreator initWithParams:scopedValdiRuntimeProvider:composerAlertPresenterFactory:flatlandLoggingHelper:bitmojiAvatarProvider:bitmojiFlatlandConfigProvider:bitmojiFlatlandInfoProvider:composerCOFStore:snapchattersObservableRepository:conversationUpdatesPublisher:userSession:composerSUPServices:charmsDataCoordinator:circumstanceEngine:groupProfileSubType:streakProvider:] */

undefined8 *
FUN_1050135b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126e5a60;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    puVar1[0x10] = param_17;
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_18);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105013930; end: 105013b27; -[SCProfileFlatlandGroupProfileRootViewCreator createRootViewAsyncWithOwner:actionHandler:profileManagementComposerViewProvider:presentingViewController:delegate:] */

void FUN_105013930(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_7);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_60,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_70,auStack_60);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = auStack_68;
  _objc_copyWeak(puVar2,auStack_58);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc9d60(uVar4);
  _objc_release(puVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105013b28; end: 105013bdf;  */

void FUN_105013b28(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  lVar2 = lVar1;
  func_0x00010bdf2aa0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf43d60(uVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105013be0; end: 105013cdb; -[SCProfileFlatlandGroupProfileRootViewCreator _createRootViewWithOwner:valdiRuntime:actionHandler:profileManagementComposerViewProvider:presentingViewController:delegate:] */

void FUN_105013be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010bdec760(param_1,param_2,param_5,param_7,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  puVar1 = PTR_PTR_1126b3cc0;
  _objc_alloc(PTR_PTR_1126b3cc0);
  func_0x00010c032a60();
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105013cdc; end: 105014cc3; -[SCProfileFlatlandGroupProfileRootViewCreator _createContextWithActionHandler:presentingViewController:delegate:] */

void FUN_105013cdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined1 uVar25;
  long lVar26;
  long lVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puStack_4f8;
  undefined *puStack_4e8;
  undefined1 auStack_478 [8];
  undefined *puStack_470;
  undefined8 uStack_468;
  code *pcStack_460;
  undefined *puStack_458;
  undefined8 uStack_450;
  undefined1 auStack_448 [8];
  undefined *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined *puStack_428;
  undefined8 uStack_420;
  undefined1 auStack_418 [8];
  undefined *puStack_410;
  undefined8 uStack_408;
  code *pcStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined1 auStack_3e8 [8];
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined1 auStack_3b8 [8];
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined1 auStack_388 [8];
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  undefined1 auStack_358 [8];
  undefined *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined1 auStack_330 [8];
  undefined *puStack_328;
  undefined8 uStack_320;
  code *pcStack_318;
  undefined *puStack_310;
  undefined1 auStack_308 [8];
  undefined *puStack_300;
  undefined8 uStack_2f8;
  code *pcStack_2f0;
  undefined *puStack_2e8;
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [8];
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined *puStack_2b8;
  long lStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  ulong uStack_260;
  undefined1 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_188 [264];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_188,param_5);
  uVar1 = *(ulong *)(param_1 + 0x60);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar3;
  func_0x00010bf52a60();
  if (lVar27 != 0) {
    lVar24 = *plStack_1c0;
    do {
      lVar26 = 0;
      do {
        if (*plStack_1c0 != lVar24) {
          _objc_enumerationMutation(lVar3);
        }
        puVar28 = *(undefined **)(lStack_1c8 + lVar26 * 8);
        puVar29 = puVar28;
        func_0x00010bf1bae0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar29;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar29);
        puVar29 = puVar11;
        func_0x00010c08fa60();
        if (puVar29 != (undefined *)0x0) {
          puVar29 = puVar28;
          func_0x00010c2923e0(puVar28);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar1;
          func_0x00010c0720c0();
          if ((uVar4 & 1) == 0) {
            puVar9 = puVar28;
            func_0x00010bfb8280();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar9;
            func_0x00010c261440();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010bf0a8a0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010c06d440();
            _objc_release(puVar6);
            _objc_release(puVar5);
            _objc_release(puVar9);
            _objc_release(puVar29);
            if ((int)puVar7 == 0) goto LAB_1050140c0;
            puVar5 = puVar28;
            func_0x00010bf1bae0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010bf1c000();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010c08fa60();
            puVar9 = PTR_PTR_1126af5d0;
            puVar29 = PTR_PTR_1126ae6b8;
            if (puVar7 == (undefined *)0x0) {
              puVar8 = *(undefined **)(param_1 + 0x50);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar28;
              func_0x00010c2923e0(puVar28);
              _objc_retainAutoreleasedReturnValue();
              puVar29 = puVar8;
              func_0x00010bf6a200();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar8 = puVar28;
              func_0x00010bf1bae0(puVar28);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar8;
              func_0x00010bf1c000();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2619e0(puVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0860a0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar9);
            }
            _objc_release(puVar7);
            _objc_release(puVar8);
            _objc_release(puVar6);
            _objc_release(puVar5);
            if (puVar29 == (undefined *)0x0) {
              puVar9 = *(undefined **)(param_1 + 0x50);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              if (puVar9 == (undefined *)0x0) {
                puVar29 = (undefined *)0x0;
                goto LAB_1050140b8;
              }
            }
            else {
              puVar5 = puVar28;
              func_0x00010bf85d80();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              func_0x00010c08fa60();
              puVar9 = puVar28;
              if (puVar6 == (undefined *)0x0) {
                func_0x00010c294420();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                func_0x00010bf85d80();
                _objc_retainAutoreleasedReturnValue();
              }
              _objc_release(puVar5);
              puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
              func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar28;
              func_0x00010901cdb0(puVar28,puVar5);
              _objc_release(puVar5);
              puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_208 = 0xc2000000;
              pcStack_200 = FUN_105014cc4;
              puStack_1f8 = &UNK_110863078;
              uStack_1d8 = SUB81(puVar6,0);
              puVar5 = puVar29;
              puStack_1f0 = puVar11;
              puStack_1e8 = puVar9;
              puStack_1e0 = puVar28;
              func_0x00010c0b8600(puVar29);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar2);
              _objc_release(puVar5);
            }
            _objc_release(puVar9);
          }
LAB_1050140b8:
          _objc_release(puVar29);
        }
LAB_1050140c0:
        _objc_release(puVar11);
        lVar26 = lVar26 + 1;
      } while (lVar27 != lVar26);
      lVar27 = lVar3;
      func_0x00010bf52a60();
    } while (lVar27 != 0);
  }
  _objc_release(lVar3);
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010c292580();
  _objc_retainAutoreleasedReturnValue();
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  puVar11 = *(undefined **)(param_1 + 8);
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar11;
  func_0x00010bf52a60();
  if (puVar29 != (undefined *)0x0) {
    lVar27 = *plStack_240;
    do {
      puVar28 = (undefined *)0x0;
      do {
        if (*plStack_240 != lVar27) {
          _objc_enumerationMutation(puVar11);
        }
        lVar24 = *(long *)(lStack_248 + (long)puVar28 * 8);
        lVar3 = lVar24;
        func_0x00010c2923e0(lVar24);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010c0720c0();
        _objc_release(lVar3);
        if ((uVar4 & 1) != 0) {
          _objc_retain(lVar24);
          _objc_release(puVar11);
          if (lVar24 == 0) {
            uVar25 = 0;
            goto LAB_105014228;
          }
          puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          lVar27 = lVar24;
          func_0x00010901cdb0(lVar24,puVar11);
          uVar25 = (undefined1)lVar27;
          goto LAB_105014218;
        }
        puVar28 = puVar28 + 1;
      } while (puVar29 != puVar28);
      puVar29 = puVar11;
      func_0x00010bf52a60();
    } while (puVar29 != (undefined *)0x0);
  }
  uVar25 = 0;
  lVar24 = 0;
LAB_105014218:
  _objc_release(puVar11);
LAB_105014228:
  lVar26 = *(long *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar27;
  func_0x00010c14fa80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar27);
  _objc_release(lVar26);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf12ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar13;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  puStack_4e8 = PTR_PTR_1126ae6b8;
  if (lVar3 == 0) {
    puVar11 = *(undefined **)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar11;
    func_0x00010bf6a1e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_4e8 = puVar29;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar29);
  }
  else {
    puVar11 = PTR_PTR_1126ae750;
    func_0x00010c2468a0(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar11);
  puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_278 = 0xc2000000;
  pcStack_270 = FUN_105014f48;
  puStack_268 = &UNK_110863128;
  uVar13 = uVar17;
  uStack_260 = uVar1;
  uStack_258 = uVar25;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar2;
  func_0x00010bf529e0();
  puStack_4f8 = PTR_PTR_1126ae6b8;
  if (puVar29 == (undefined *)0x0) {
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar27 = param_1;
  func_0x00010be247a0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar27;
  func_0x00010c22ad80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar27);
  puVar29 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2a0 = 0xc2000000;
  pcStack_298 = FUN_1050151ec;
  puStack_290 = &UNK_1108631e8;
  puVar11 = puStack_4f8;
  uStack_288 = uVar10;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  puStack_2d0 = puVar29;
  uStack_2c8 = 0xc2000000;
  pcStack_2c0 = FUN_10501545c;
  puStack_2b8 = &UNK_110863248;
  _objc_retain(lVar26);
  uVar15 = uVar13;
  lStack_2b0 = lVar26;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  _objc_initWeak(auStack_2d8,param_1);
  puVar29 = PTR_PTR_1126b3cd0;
  _objc_alloc();
  puStack_300 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2f8 = 0xc2000000;
  pcStack_2f0 = FUN_105015694;
  puStack_2e8 = &UNK_110862d58;
  _objc_copyWeak(auStack_2e0,auStack_188);
  puStack_328 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_320 = 0xc2000000;
  pcStack_318 = FUN_1050156f0;
  puStack_310 = &UNK_1108434b0;
  _objc_copyWeak(auStack_308,auStack_188);
  puStack_350 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_348 = 0xc2000000;
  uStack_340 = 0x10501571c;
  puStack_338 = &UNK_1108434b0;
  _objc_copyWeak(auStack_330,auStack_188);
  puStack_380 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_378 = 0xc2000000;
  uStack_370 = 0x105015748;
  puStack_368 = &UNK_110841fb0;
  _objc_copyWeak(auStack_358,auStack_2d8);
  _objc_retain(param_3);
  puStack_3b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3a8 = 0xc2000000;
  uStack_3a0 = 0x105015788;
  puStack_398 = &UNK_110841fb0;
  uStack_360 = param_3;
  _objc_copyWeak(auStack_388,auStack_2d8);
  _objc_retain(param_3);
  puVar18 = auStack_188;
  uStack_390 = param_3;
  _objc_loadWeakRetained(puVar18);
  puVar19 = puVar18;
  func_0x00010c141880();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1;
  func_0x00010bdd4960();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar11;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e120();
  _objc_release(puVar28);
  _objc_release(lVar27);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  lVar27 = *(long *)(param_1 + 8);
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar27 != 0) && (*(long *)(param_1 + 0x80) == 0)) {
    lVar21 = param_1;
    func_0x00010be249e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4ba0(puVar29);
    _objc_release(lVar21);
  }
  uVar12 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c262a80(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20fd40(puVar29);
  _objc_release(uVar15);
  _objc_release(uVar12);
  puStack_3e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3d8 = 0xc2000000;
  uStack_3d0 = 0x1050157c8;
  puStack_3c8 = &UNK_110841fb0;
  _objc_copyWeak(auStack_3b8,auStack_2d8);
  _objc_retain(param_3);
  uStack_3c0 = param_3;
  func_0x00010c18fa40(puVar29);
  puStack_410 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_408 = 0xc2000000;
  pcStack_400 = FUN_105015808;
  puStack_3f8 = &UNK_11085c6a8;
  _objc_copyWeak(auStack_3e8,auStack_2d8);
  _objc_retain(param_3);
  uStack_3f0 = param_3;
  func_0x00010c21a780(puVar29);
  puStack_440 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_438 = 0xc2000000;
  uStack_430 = 0x105015890;
  puStack_428 = &UNK_110841fb0;
  _objc_copyWeak(auStack_418,auStack_2d8);
  _objc_retain(param_3);
  uStack_420 = param_3;
  func_0x00010c18f9e0(puVar29);
  puStack_470 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_468 = 0xc2000000;
  pcStack_460 = FUN_105015900;
  puStack_458 = &UNK_110863278;
  puVar18 = auStack_2d8;
  _objc_copyWeak(auStack_448,puVar18);
  _objc_retain(param_3);
  uStack_450 = param_3;
  func_0x00010c1fed60(puVar29);
  lVar22 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar22;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar21;
  func_0x00010c08fa60();
  _objc_release(lVar21);
  _objc_release(lVar22);
  if (lVar23 != 0) {
    puVar18 = auStack_2d8;
    _objc_copyWeak(auStack_478,puVar18);
    _objc_retain(param_3);
    func_0x00010c18f9a0(puVar29);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_478);
  }
  _objc_release(uStack_450);
  _objc_destroyWeak(auStack_448);
  _objc_release(uStack_420);
  _objc_destroyWeak(auStack_418);
  _objc_release(uStack_3f0);
  _objc_destroyWeak(auStack_3e8);
  _objc_release(uStack_3c0);
  _objc_destroyWeak(auStack_3b8);
  _objc_release(lVar27);
  _objc_release(uStack_390);
  _objc_destroyWeak(auStack_388);
  _objc_release(uStack_360);
  _objc_destroyWeak(auStack_358);
  _objc_destroyWeak(auStack_330);
  _objc_destroyWeak(auStack_308);
  _objc_destroyWeak(auStack_2e0);
  _objc_destroyWeak(auStack_2d8);
  _objc_release(uVar16);
  _objc_release(lStack_2b0);
  _objc_release(puVar11);
  _objc_release(lVar26);
  _objc_release(puStack_4f8);
  _objc_release(uVar13);
  _objc_release(puStack_4e8);
  _objc_release(uVar17);
  _objc_release(lVar3);
  _objc_release(lVar24);
  _objc_release(uVar10);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_188);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_188);
    __Unwind_Resume();
    func_0x00010c0b8600(puVar18);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105014cc4; end: 105014d33;  */

void FUN_105014cc4(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105014d34;
  puStack_38 = &UNK_110863048;
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uStack_20 = *(undefined8 *)(param_1 + 0x30);
  uStack_18 = *(undefined1 *)(param_1 + 0x38);
  func_0x00010c0b8600(param_2,param_2,&puStack_50);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105014d34; end: 105014de3;  */

void FUN_105014d34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b3cc8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff60e0(puVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010c1a4620(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105014de4; end: 105014df3;  */

void FUN_105014de4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2468b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae750,PTR_s_someWithValue__11266f450,param_2);
  return;
}



/* Entry: 105014df4; end: 105014ef7;  */

void FUN_105014df4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  pcStack_38 = FUN_105014ef8;
  uStack_30 = 0x105014f08;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
  puVar1 = PTR_PTR_1126ae750;
  if (puStack_48[5] == 0) {
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2468a0();
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105014ef8; end: 105014f0f;  */

void FUN_105014ef8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105014f10; end: 105014f47;  */

void FUN_105014f10(long param_1,undefined8 param_2)

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



/* Entry: 105014f48; end: 105015067;  */

void FUN_105014f48(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126b3cc8;
      _objc_alloc(PTR_PTR_1126b3cc8);
      lVar1 = param_2;
      func_0x00010c0ec5e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c0ec5e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff60e0(puVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (*(char *)(param_1 + 0x28) == '\x01') {
        func_0x00010c1a4620(puVar3);
      }
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105015068; end: 1050151db;  */

void FUN_105015068(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      func_0x00010c0c0800(*(undefined8 *)(lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_addObject__11259c1f0,lVar4);
  return;
}



/* Entry: 1050151dc; end: 1050151eb;  */

void FUN_1050151dc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 1050151ec; end: 10501545b;  */

void FUN_1050151ec(long param_1,undefined *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar9 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar9 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar11 = *(undefined8 *)((long)puVar8 * 8);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      uVar10 = uVar11;
      func_0x00010bfce740();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar10;
      func_0x00010bf4b900();
      _objc_release(uVar10);
      if ((int)uVar3 != 0) {
        func_0x00010befa120(puVar2);
      }
      uVar10 = uVar11;
      func_0x00010c2923e0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar4 != 0) {
        func_0x00010bf35b80(lVar4);
        func_0x00010c0df760(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(puVar5);
      }
      func_0x00010c1a4620(uVar11);
      _objc_release(lVar4);
      _objc_release(puVar2);
      puVar8 = puVar8 + 1;
    } while (puVar9 != puVar8);
    puVar9 = param_2;
    func_0x00010bf52a60();
  }
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar10);
  _objc_retain(uVar10);
  puVar9 = param_2;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar10);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    puVar8 = PTR_PTR_1126ae6b8;
    if (puVar6 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
    }
    else {
      puVar9 = *(undefined **)(param_2 + 0x20);
      _objc_retain(puVar6);
      func_0x00010c0b8600(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar6;
    }
    _objc_release(puVar2);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10501545c; end: 10501555f;  */

void FUN_10501545c(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126ae6b8;
  if (param_2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010c0b8600(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105015560; end: 105015693;  */

void FUN_105015560(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfce740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4b900();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    func_0x00010befa120(puVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar4 != 0) {
    func_0x00010bf35b80(lVar4);
    func_0x00010c0df760(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar5);
  }
  func_0x00010c1a4620(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  _objc_release(lVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105015694; end: 1050156ef;  */

void FUN_105015694(undefined8 param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010c141900(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050156f0; end: 105015807;  */

void FUN_1050156f0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c141820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105015808; end: 1050158ff;  */

void FUN_105015808(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afdb8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bff0880();
  _objc_release(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9e6c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105015900; end: 1050159e3;  */

void FUN_105015900(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126afdf0;
    _objc_alloc(PTR_PTR_1126afdf0);
    func_0x00010c041b40();
    puVar2 = PTR_PTR_1126afdb8;
    _objc_alloc(PTR_PTR_1126afdb8);
    func_0x00010bff0880();
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be9e6c0();
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1050159e4; end: 105015c5f;  */

/* WARNING: Possible PIC construction at 0x000105015bf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105015bfc) */

void FUN_1050159e4(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (param_2 == 0) {
    _objc_release(0);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar6 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar8 = *(long *)(lVar7 * 8);
        lVar3 = lVar8;
        func_0x00010bf12ea0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          lVar4 = lVar8;
          func_0x00010c14fa80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar3);
          if (lVar4 != 0) {
            puVar5 = PTR_PTR_1126b3cd8;
            _objc_alloc(PTR_PTR_1126b3cd8);
            lVar3 = lVar8;
            func_0x00010bf12ea0(lVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14fa80(lVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bff60a0(puVar5);
            func_0x00010befa120(puVar2);
            _objc_release(puVar5);
            _objc_release(lVar8);
            _objc_release(lVar3);
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
      lVar6 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    _objc_alloc(PTR_PTR_1126afdf0);
    func_0x00010c041b40();
    _objc_loadWeakRetained(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be9e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105015c60; end: 105015c6b; -[SCProfileFlatlandGroupProfileRootViewCreator _sendActionIdentifier:toActionHandler:] */

void FUN_105015c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendActionIdentifier_actionData_112585358,param_3,0,param_4);
  return;
}



/* Entry: 105015c6c; end: 105015d0b; -[SCProfileFlatlandGroupProfileRootViewCreator _sendActionIdentifier:actionDataModel:toActionHandler:] */

void FUN_105015c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01b460();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bfd0140(param_5,param_2,param_1,puVar1,0);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105015d0c; end: 105015dd3; -[SCProfileFlatlandGroupProfileRootViewCreator _groupStreakObservable:] */

void FUN_105015d0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c25c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_1108632d8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105015dd4; end: 105015e2f;  */

void FUN_105015dd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25c060();
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105015e30; end: 105015f07; -[SCProfileFlatlandGroupProfileRootViewCreator _bitmojiProfileBackground] */

void FUN_105015e30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfceb20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfa4cc0(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 105015f08; end: 105015f3f;  */

bool FUN_105015f08(undefined8 param_1,long param_2)

{
  func_0x00010bf500c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 105015f40; end: 1050160ff;  */

void FUN_105015f40(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126b3ce0;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  lVar2 = param_2;
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = lVar2;
  func_0x00010bf37ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126b1428;
    _objc_alloc(PTR_PTR_1126b1428);
    lVar2 = lVar3;
    func_0x00010bf4cce0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0038e0(puVar4);
    func_0x00010c1822a0(puVar1);
    _objc_release(puVar4);
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bf93e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      puVar4 = PTR_PTR_1126b1430;
      _objc_alloc(PTR_PTR_1126b1430);
      lVar2 = lVar3;
      func_0x00010bf93e00(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010bf93e00(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020ba0(puVar4);
      puVar8 = puVar1;
      func_0x00010bf4cce0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195c60();
      _objc_release(puVar8);
      _objc_release(puVar4);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105016100; end: 105016207; -[SCProfileFlatlandGroupProfileRootViewCreator _groupCharmsObservable] */

void FUN_105016100(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x80) == 0) {
    _objc_initWeak(auStack_38,param_1);
    puVar1 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf54280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c22ad80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,PTR____NSDictionary0__struct_11034ab58);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105016208; end: 10501637b;  */

void FUN_105016208(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    func_0x00010c0d9840(param_2);
    puVar4 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = param_2;
    _objc_release(uVar1);
    func_0x00010bef7c60(*(undefined8 *)(param_1 + 0x70));
    puVar2 = PTR_PTR_1126b3ce8;
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfceb20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf36700(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126b3cf0;
    _objc_alloc(PTR_PTR_1126b3cf0);
    func_0x00010bffd8a0();
    func_0x00010bfd0a00(*(undefined8 *)(param_1 + 0x70));
    puVar4 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10501637c; end: 1050163af;  */

void FUN_10501637c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12bd60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050163b0; end: 10501648b; -[SCProfileFlatlandGroupProfileRootViewCreator _fetchAndEmitCharms] */

void FUN_1050163b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfceb20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfa5960(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10501648c; end: 105016663;  */

void FUN_10501648c(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x90) != 0)) {
    if (param_3 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      _objc_retain(param_2);
      lVar3 = param_2;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_2);
          }
          lVar8 = *(long *)(lVar9 * 8);
          func_0x00010bfce020();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar8;
          func_0x00010c110560();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar8);
          if (lVar4 != 0) {
            func_0x00010c1d0640(puVar2);
          }
          _objc_release(lVar4);
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = param_2;
        func_0x00010bf52a60();
      }
      _objc_release(param_2);
      puVar6 = puVar2;
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x90));
      func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x90));
      uVar5 = *(undefined8 *)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x90) = 0;
      _objc_release(uVar5);
    }
    else {
      puVar6 = PTR____NSDictionary0__struct_11034ab58;
      func_0x00010c0d9840();
      func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x90));
      puVar2 = *(undefined **)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b0288;
  _objc_retain(puVar6);
  func_0x00010bf63740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar2);
  if (puVar6 != puVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0f510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__fetchAndEmitCharms_1125616e0);
  return;
}



/* Entry: 105016664; end: 1050166db; -[SCProfileFlatlandGroupProfileRootViewCreator dataCoordinatorDidUpdateWithIdentifier:dataRequest:] */

void FUN_105016664(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0288;
  _objc_retain(param_3);
  func_0x00010bf63740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  if (param_3 != puVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0f510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchAndEmitCharms_1125616e0);
  return;
}



/* Entry: 1050166dc; end: 1050167bf; -[SCProfileFlatlandGroupProfileRootViewCreator .cxx_destruct] */

void FUN_1050166dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
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



/* Entry: 1050167c0; end: 1050169b7;  */

ulong FUN_1050167c0(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_2;
  func_0x00010bfce740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4b900();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bfce740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf4b900();
  _objc_release(lVar2);
  uVar1 = (uint)lVar3 ^ 1;
  uVar8 = (uint)lVar4;
  if (((uVar1 & 1) == 0) && (uVar8 == 0)) {
    uVar6 = 0xffffffffffffffff;
  }
  else if ((uVar1 & uVar8 & 1) == 0) {
    if (((uint)lVar3 & uVar8 & 1) == 0) {
      uVar7 = *(ulong *)(param_1 + 0x20);
      lVar2 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c282820();
      _objc_release(uVar7);
      _objc_release(lVar2);
      uVar6 = *(ulong *)(param_1 + 0x20);
      lVar2 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c282820();
      _objc_release(uVar6);
      _objc_release(lVar2);
      if (uVar5 == 0 && uVar7 == 0) {
        lVar2 = param_2;
        func_0x00010bfce740();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf529e0();
        _objc_release(lVar2);
        lVar2 = param_3;
        func_0x00010bfce740();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010bf529e0();
        _objc_release(lVar2);
        uVar1 = (uint)(lVar3 == 0);
        if (lVar4 != 0) {
          uVar1 = 1;
        }
        uVar8 = 0;
        if (lVar4 != 0) {
          uVar8 = (uint)(lVar3 == 0);
        }
        uVar6 = (ulong)uVar8;
        if (uVar1 == 0) {
          uVar6 = 0xffffffffffffffff;
        }
        goto LAB_10501698c;
      }
      if (uVar5 != uVar7) {
        uVar6 = 1;
        if (uVar7 < uVar5) {
          uVar6 = 0xffffffffffffffff;
        }
        goto LAB_10501698c;
      }
    }
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
LAB_10501698c:
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar6;
}



/* Entry: 1050169b8; end: 1050169bf;  */

undefined8 FUN_1050169b8(void)

{
  return 0;
}



/* Entry: 1050169c0; end: 105016ce7; -[SCProfileFlatlandGroupProfileRootViewCreatorFactoryImpl initWithScopedValdiRuntimeProvider:composerAlertPresenterFactory:snapchattersObservableRepository:composerBlizzardLogger:bitmojiAvatarProvider:bitmojiFlatlandConfigProvider:bitmojiFlatlandInfoProvider:composerCOFStore:conversationUpdatesPublisher:userSession:composerSUPServices:charmsDataCoordinator:circumstanceEngine:streakProvider:] */

undefined8 *
FUN_1050169c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126e5a68;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105016ce8; end: 105016def; -[SCProfileFlatlandGroupProfileRootViewCreatorFactoryImpl createWithParams:groupProfileSubType:] */

void FUN_105016ce8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b3cf8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171b20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c117240(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e44c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b3d00;
  _objc_alloc(PTR_PTR_1126b3d00);
  func_0x00010c033880();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105016df0; end: 105016eaf; -[SCProfileFlatlandGroupProfileRootViewCreatorFactoryImpl .cxx_destruct] */

void FUN_105016df0(long param_1)

{
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



/* Entry: 105016eb0; end: 105016f9f; -[SCProfileFlatlandGroupProfileServiceProvider provide] */

void FUN_105016eb0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126b3d08;
  _objc_alloc(PTR_PTR_1126b3d08);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0403a0(puVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105016fa0; end: 105016fdf;  */

void FUN_105016fa0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105016fe0; end: 1050173f7; -[SCProfileFlatlandGroupProfileServiceProvider _createRootViewCreatorFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105016fe0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1050173f8;
  puStack_90 = &UNK_110862fe8;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b3d10;
  _objc_alloc();
  lVar4 = param_1 + _DAT_1127198a4;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_1127198a8;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_1127198ac;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_1127198b0;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_1127198b4;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_1127198b8;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf1b5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_1127198bc;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf50a60();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_1127198c0;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_1127198c4;
  _objc_loadWeakRetained();
  lVar21 = param_1 + _DAT_1127198c8;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bf35c80();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_1127198cc;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127198d0;
  _objc_loadWeakRetained();
  lVar26 = param_1;
  func_0x00010c25c100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042220();
  _objc_release(lVar26);
  _objc_release(param_1);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
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
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1050173f8; end: 10501750f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050173f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_1127198d4;
    _objc_loadWeakRetained(lVar3);
  }
  lVar1 = lVar3;
  func_0x00010bf1cf00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105017510; end: 1050175d7; -[SCProfileFlatlandGroupProfileServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105017510(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127198d0);
  _objc_destroyWeak(param_1 + _DAT_1127198c8);
  _objc_destroyWeak(param_1 + _DAT_1127198b8);
  _objc_destroyWeak(param_1 + _DAT_1127198cc);
  _objc_destroyWeak(param_1 + _DAT_1127198b4);
  _objc_destroyWeak(param_1 + _DAT_1127198b0);
  _objc_destroyWeak(param_1 + _DAT_1127198d8);
  _objc_destroyWeak(param_1 + _DAT_1127198d4);
  _objc_destroyWeak(param_1 + _DAT_1127198ac);
  _objc_destroyWeak(param_1 + _DAT_1127198bc);
  _objc_destroyWeak(param_1 + _DAT_1127198c4);
  _objc_destroyWeak(param_1 + _DAT_1127198a8);
  _objc_destroyWeak(param_1 + _DAT_1127198a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127198c0);
  return;
}



/* Entry: 1050175d8; end: 105017793; -[SCFriendActionSheetPrivacySettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050175d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = param_1 + _DAT_1127198dc;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010bf1f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar9 != 0) {
    lVar9 = (long)_DAT_1127198e0;
    lVar1 = param_1 + lVar9;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3d18;
    _objc_alloc(PTR_PTR_1126b3d18);
    lVar2 = param_1 + lVar9;
    _objc_loadWeakRetained(lVar2);
    lVar5 = lVar2;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + lVar9;
    _objc_loadWeakRetained(lVar9);
    lVar6 = lVar9;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_1127198e4;
    _objc_loadWeakRetained(lVar7);
    param_1 = param_1 + _DAT_1127198e8;
    _objc_loadWeakRetained(param_1);
    lVar8 = param_1;
    func_0x00010c0cb4c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c015380(puVar4,param_2,lVar5,lVar6,lVar7,lVar8);
    func_0x00010c125b60(lVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar8);
    _objc_release(param_1);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar9);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105017794; end: 1050177b3; -[SCFriendActionSheetPrivacySettingsEntryPoint messagingExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105017794(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127198e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050177b4; end: 1050177c7; -[SCFriendActionSheetPrivacySettingsEntryPoint setMessagingExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050177b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127198e8,param_3);
  return;
}



/* Entry: 1050177c8; end: 105017817; -[SCFriendActionSheetPrivacySettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050177c8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127198e8);
  _objc_destroyWeak(param_1 + _DAT_1127198dc);
  _objc_destroyWeak(param_1 + _DAT_1127198e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127198e0);
  return;
}



/* Entry: 105017818; end: 10501792b; -[SCPrivacySettingsAction initWithFriend:context:storiesPreferencesServices:messagingExperimentService:] */

undefined1 *
FUN_105017818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e5a70;
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
    *(undefined8 *)((long)puVar1 + 0x28) = 0x18;
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d76c0();
    *(char *)((long)puVar1 + 0x20) = (char)uVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10501792c; end: 105017aeb; -[SCPrivacySettingsAction actionSheetCell] */

void FUN_10501792c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c101e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010beeeee0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      puVar6 = (undefined *)0x0;
      goto LAB_105017a90;
    }
  }
  else {
    _objc_release();
  }
  puVar4 = auStack_48;
  _objc_initWeak(puVar4,param_1);
  FUN_1050180b0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfaf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b10a0;
  func_0x00010bf6e3c0(PTR_PTR_1126b10a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  puVar6 = puVar5;
  func_0x00010bf1d200(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c161a60(puVar6);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_48);
LAB_105017a90:
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105017aec; end: 105017b0b;  */

bool FUN_105017aec(undefined8 param_1,long param_2)

{
  func_0x00010c104260(param_2);
  return param_2 == 0x19;
}



/* Entry: 105017b0c; end: 105017b53;  */

void FUN_105017b0c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e6e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105017b54; end: 105017c33; -[SCPrivacySettingsAction _description] */

void FUN_105017b54(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = param_1;
  func_0x0001050180e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0001050180f8();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010be44540();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)puVar4 == 0) {
    if (param_1[0x20] == '\0') {
      puVar4 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar1);
      puVar4 = puVar1;
    }
  }
  else if (param_1[0x20] == '\0') {
    func_0x0001050180f8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000105018110();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar3;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105017c34; end: 105017ccb; -[SCPrivacySettingsAction _isStoryVisible] */

undefined8 FUN_105017c34(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c25aae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25aac0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar3 < 2) {
    uVar4 = 1;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfb8280(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf2d540();
    _objc_release(uVar5);
  }
  return uVar4;
}



/* Entry: 105017ccc; end: 10501800b; -[SCPrivacySettingsAction _handlePrivacySettingsWithActionSheet:] */

void FUN_105017ccc(long param_1,undefined *param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined *puStack_140;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = *(undefined **)(param_1 + 0x10);
  func_0x00010c0a0440();
  puStack_140 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    func_0x0001050180c8();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010901d7c4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  else {
    FUN_1050180b0();
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = puVar2;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010c101e20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      uVar12 = *(ulong *)(lVar13 * 8);
      uVar6 = uVar12;
      func_0x00010c104260();
      if ((uVar6 == 0x16) && (*(char *)(param_1 + 0x20) == '\x01')) {
        uVar7 = uVar12;
        func_0x00010beeeee0();
        _objc_retainAutoreleasedReturnValue();
        param_2 = PTR_PTR_1126b10a0;
        _objc_opt_class(PTR_PTR_1126b10a0);
        uVar8 = uVar7;
        _objc_opt_isKindOfClass(uVar7,param_2);
        uVar6 = uVar7;
        if ((uVar8 & 1) == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar7);
        if (uVar6 != 0) {
          func_0x00010c066b00(puVar2);
        }
        _objc_release(uVar6);
      }
      uVar6 = uVar12;
      func_0x00010c104260();
      if (uVar6 == 0x19) {
        func_0x00010beeeee0();
        _objc_retainAutoreleasedReturnValue();
        param_2 = PTR_PTR_1126b10a0;
        _objc_opt_class(PTR_PTR_1126b10a0);
        uVar7 = uVar12;
        _objc_opt_isKindOfClass(uVar12,param_2);
        uVar6 = uVar12;
        if ((uVar7 & 1) == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar12);
        if (uVar6 != 0) {
          func_0x00010befa120(puVar2);
        }
        _objc_release(uVar6);
      }
      puVar10 = (undefined *)0x1;
      if (*(char *)(param_1 + 0x20) != '\0') {
        puVar10 = (undefined *)0x2;
      }
      puVar9 = puVar2;
      func_0x00010bf529e0();
      if (puVar10 <= puVar9) goto LAB_105017f38;
      lVar13 = lVar13 + 1;
    } while (lVar5 != lVar13);
    lVar5 = lVar4;
    func_0x00010bf52a60();
  }
LAB_105017f38:
  _objc_release(lVar4);
  puVar10 = PTR_PTR_1126b10a0;
  func_0x000105018128();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar10;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(lVar4);
  func_0x00010c1312e0(param_3);
  _objc_release(puVar9);
  _objc_release(puVar2);
  _objc_release(puStack_140);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar2 = param_2;
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeef20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10501800c; end: 105018057;  */

void FUN_10501800c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeef20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105018058; end: 10501805f; -[SCPrivacySettingsAction position] */

undefined8 FUN_105018058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105018060; end: 105018067; -[SCPrivacySettingsAction prominentActionButton] */

undefined8 FUN_105018060(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105018068; end: 1050180af; -[SCPrivacySettingsAction .cxx_destruct] */

void FUN_105018068(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050180b0; end: 10501813f;  */

void FUN_1050180b0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc2bf8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc2bf8,
                      &PTR____CFConstantStringClassReference_110dc2bd8,0);
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



/* Entry: 105018140; end: 10501817f;  */

void FUN_105018140(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4a100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105018180; end: 105018203; -[SCProfileHeaderTooltipsServicesEntryPoint _legacyProfileTooltipsService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105018180(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b3d28;
  _objc_alloc(PTR_PTR_1126b3d28);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112719908;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bfa2b80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011c80(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105018204; end: 10501824b; -[SCProfileHeaderTooltipsServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105018204(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271990c,0);
  _objc_destroyWeak(param_1 + _DAT_112719908);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112719904);
  return;
}



/* Entry: 10501824c; end: 105018363; -[SCProfileSectionTooltipsServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10501824c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112719918);
  }
  _objc_retain(uVar3);
  puVar2 = PTR_PTR_1126b3d20;
  _objc_alloc(PTR_PTR_1126b3d20);
  func_0x00010c0223e0();
  func_0x00010bf9d660(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105018364; end: 1050183a3;  */

void FUN_105018364(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4a100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050183a4; end: 105018427; -[SCProfileSectionTooltipsServicesEntryPoint _legacyProfileTooltipsService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050183a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b3d28;
  _objc_alloc(PTR_PTR_1126b3d28);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112719914;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bfa2b80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011c80(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105018428; end: 10501846f; -[SCProfileSectionTooltipsServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105018428(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112719918,0);
  _objc_destroyWeak(param_1 + _DAT_112719914);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112719910);
  return;
}



/* Entry: 105018470; end: 10501847b; -[SCFeatureSettingsService hasSeenMyUnifiedProfilePhoneNumberVerificationActivityCard] */

void FUN_105018470(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc2c98);
  return;
}



/* Entry: 10501847c; end: 105018487; -[SCFeatureSettingsService seenMyUnifiedProfilePhoneNumberVerificationActivityCardServerParam] */

undefined ** FUN_10501847c(void)

{
  return &PTR____CFConstantStringClassReference_110dc2c98;
}



/* Entry: 105018488; end: 105018497; -[SCFeatureSettingsService setSeenMyUnifiedProfilePhoneNumberVerificationActivityCard:] */

void FUN_105018488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dc2c98,param_3);
  return;
}



/* Entry: 105018498; end: 10501849f; -[SCFeatureSettingsService profile_v3_phone_number_verification_prompt_tooltip_client_value:] */

undefined * FUN_105018498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1050184a0; end: 1050184a7; -[SCFeatureSettingsService profile_v3_phone_number_verification_prompt_tooltip_server_value:] */

void FUN_1050184a0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1050184a8; end: 1050184b7; -[SCFeatureSettingsService seenMyUnifiedProfilePhoneNumberVerificationActivityCard] */

void FUN_1050184a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dc2c98,0);
  return;
}



/* Entry: 1050184b8; end: 1050184c3; -[SCFeatureSettingsService hasSeenMyUnifiedProfileStoryManagementLinkSharingBadge] */

void FUN_1050184b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc2cb8);
  return;
}



/* Entry: 1050184c4; end: 1050184cf; -[SCFeatureSettingsService seenMyUnifiedProfileStoryManagementLinkSharingBadgeServerParam] */

undefined ** FUN_1050184c4(void)

{
  return &PTR____CFConstantStringClassReference_110dc2cb8;
}



/* Entry: 1050184d0; end: 1050184df; -[SCFeatureSettingsService setSeenMyUnifiedProfileStoryManagementLinkSharingBadge:] */

void FUN_1050184d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dc2cb8,param_3);
  return;
}



/* Entry: 1050184e0; end: 1050184e7; -[SCFeatureSettingsService story_management_link_sharing_tooltip_client_value:] */

undefined * FUN_1050184e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1050184e8; end: 1050184ef; -[SCFeatureSettingsService story_management_link_sharing_tooltip_server_value:] */

void FUN_1050184e8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1050184f0; end: 1050184ff; -[SCFeatureSettingsService seenMyUnifiedProfileStoryManagementLinkSharingBadge] */

void FUN_1050184f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dc2cb8,0);
  return;
}



/* Entry: 105018500; end: 10501850b; -[SCFeatureSettingsService isBirthdayMiniSeenCountAvailable] */

void FUN_105018500(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc2cd8);
  return;
}



/* Entry: 10501850c; end: 105018517; -[SCFeatureSettingsService birthdayMiniSeenCountServerParam] */

undefined ** FUN_10501850c(void)

{
  return &PTR____CFConstantStringClassReference_110dc2cd8;
}



/* Entry: 105018518; end: 105018527; -[SCFeatureSettingsService setBirthdayMiniSeenCount:] */

void FUN_105018518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dc2cd8,param_3);
  return;
}



/* Entry: 105018528; end: 10501852f; -[SCFeatureSettingsService birthday_mini_seen_count_client_value:] */

void FUN_105018528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 105018530; end: 105018537; -[SCFeatureSettingsService birthday_mini_seen_count_server_value:] */

void FUN_105018530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 105018538; end: 105018547; -[SCFeatureSettingsService birthdayMiniSeenCount] */

void FUN_105018538(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dc2cd8,0);
  return;
}



/* Entry: 105018548; end: 105018553; -[SCFeatureSettingsService isBirthdayMiniDismissedAvailable] */

void FUN_105018548(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc2cf8);
  return;
}



/* Entry: 105018554; end: 10501855f; -[SCFeatureSettingsService birthdayMiniDismissedServerParam] */

undefined ** FUN_105018554(void)

{
  return &PTR____CFConstantStringClassReference_110dc2cf8;
}



/* Entry: 105018560; end: 10501856f; -[SCFeatureSettingsService setBirthdayMiniDismissed:] */

void FUN_105018560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dc2cf8,param_3);
  return;
}



/* Entry: 105018570; end: 105018577; -[SCFeatureSettingsService birthday_mini_dismissed_client_value:] */

undefined * FUN_105018570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 105018578; end: 10501857f; -[SCFeatureSettingsService birthday_mini_dismissed_server_value:] */

void FUN_105018578(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105018580; end: 10501858f; -[SCFeatureSettingsService birthdayMiniDismissed] */

void FUN_105018580(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dc2cf8,0);
  return;
}



/* Entry: 105018590; end: 10501859b; -[SCFeatureSettingsService isRunForOfficeMiniSeenCountAvailable] */

void FUN_105018590(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc2d18);
  return;
}



/* Entry: 10501859c; end: 1050185a7; -[SCFeatureSettingsService runForOfficeMiniSeenCountServerParam] */

undefined ** FUN_10501859c(void)

{
  return &PTR____CFConstantStringClassReference_110dc2d18;
}



/* Entry: 1050185a8; end: 1050185b7; -[SCFeatureSettingsService setRunForOfficeMiniSeenCount:] */

void FUN_1050185a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dc2d18,param_3);
  return;
}



/* Entry: 1050185b8; end: 1050185bf; -[SCFeatureSettingsService run_for_office_mini_seen_count_client_value:] */

void FUN_1050185b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1050185c0; end: 1050185c7; -[SCFeatureSettingsService run_for_office_mini_seen_count_server_value:] */

void FUN_1050185c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}


