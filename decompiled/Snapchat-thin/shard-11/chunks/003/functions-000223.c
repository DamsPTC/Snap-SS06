/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108432314; end: 1084323af; -[SCContextMentionEducationDialogSimpleLauncher presentDialog:] */

void FUN_108432314(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfceea0();
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  func_0x00010be7afc0(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bede130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePromptFeatureSettings__1125951f0,1);
  return;
}



/* Entry: 1084323b0; end: 1084325c3; -[SCContextMentionEducationDialogSimpleLauncher _presentDialogOnContainer:] */

void FUN_1084323b0(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 == 0) {
    (**(code **)(param_3 + 0x10))(param_3,1);
  }
  else {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1084325c4;
    puStack_88 = &UNK_110a486e0;
    _objc_retain(param_3);
    lStack_80 = lVar8;
    lStack_78 = param_3;
    _objc_retain(lVar8);
    ppuVar1 = &puStack_a0;
    _objc_retainBlock(ppuVar1);
    puVar2 = PTR_PTR_1126aebd8;
    func_0x00010c14e3a0(PTR_PTR_1126aebd8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    lVar6 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar5);
    func_0x00010bf88c20(uVar4);
    _objc_release(puVar5);
    _objc_release(lVar6);
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126b0648;
    _objc_alloc(PTR_PTR_1126b0648);
    func_0x00010c01cb60();
    puVar7 = PTR_PTR_1126d95d0;
    _objc_alloc(PTR_PTR_1126d95d0);
    func_0x00010c031940();
    func_0x00010bf0c980(*(undefined8 *)(param_1 + 8));
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
    _objc_release(lStack_78);
    _objc_release(lVar8);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1084325c4; end: 1084325ff;  */

void FUN_1084325c4(long param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = 2;
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 108432600; end: 108432613;  */

void FUN_108432600(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
    return;
  }
  return;
}



/* Entry: 108432614; end: 10843264f; -[SCContextMentionEducationDialogSimpleLauncher _updatePromptFeatureSettings:] */

void FUN_108432614(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108432650; end: 10843268b; -[SCContextMentionEducationDialogSimpleLauncher .cxx_destruct] */

void FUN_108432650(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10843268c; end: 108432807; -[SCContextMentionEducationDialogVerifyingLauncher initWithSnapEditor:caption:stickerContainer:snapchattersDataFetcher:featureSettingsService:onDemandResourceDownloader:contextExperimentService:] */

undefined1 *
FUN_10843268c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126fc838;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108432808; end: 108432917; -[SCContextMentionEducationDialogVerifyingLauncher presentDialog:] */

void FUN_108432808(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c5078;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27ed00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cfd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056ba0(puVar1,param_2,uVar4,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108432918;
  puStack_58 = &UNK_110858070;
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010beb5e60(param_1,param_2,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 108432918; end: 108432937;  */

void FUN_108432918(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c10be50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_presentDialog__1126209b0,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108432934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),1);
  return;
}



/* Entry: 108432938; end: 108432a2b; -[SCContextMentionEducationDialogVerifyingLauncher _shouldShowDialogWithCompletion:] */

void FUN_108432938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1084329d8;
  puStack_48 = &UNK_110875d40;
  uStack_40 = uVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010be65400(param_1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108432a2c; end: 108432ecf; -[SCContextMentionEducationDialogVerifyingLauncher _numMentionedUsers:] */

void FUN_108432a2c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puStack_378;
  undefined8 uStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  long lStack_350;
  undefined8 *puStack_348;
  undefined *puStack_340;
  long lStack_338;
  undefined1 *puStack_330;
  code *pcStack_328;
  long lStack_318;
  long lStack_310;
  undefined8 *puStack_308;
  long lStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  long lStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_78;
  
  puVar13 = &uStack_280;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_310 = param_3;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar2 = *(undefined8 **)(param_1 + 8);
  lStack_318 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bf30960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  _objc_retain(puVar6);
  puStack_308 = puVar6;
  func_0x00010bf52a60();
  if (puVar6 != (undefined8 *)0x0) {
    lStack_300 = *plStack_230;
    do {
      puVar13 = (undefined8 *)0x0;
      do {
        if (*plStack_230 != lStack_300) {
          _objc_enumerationMutation(puStack_308);
        }
        lVar3 = *(long *)(lStack_238 + (long)puVar13 * 8);
        lStack_278 = 0;
        uStack_280 = 0;
        uStack_268 = 0;
        plStack_270 = (long *)0x0;
        uStack_258 = 0;
        uStack_260 = 0;
        uStack_248 = 0;
        uStack_250 = 0;
        func_0x00010c268460();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar3;
        func_0x00010bf00d20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        lVar3 = lVar14;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar12 = *plStack_270;
          do {
            lVar15 = 0;
            do {
              if (*plStack_270 != lVar12) {
                _objc_enumerationMutation(lVar14);
              }
              uVar16 = *(undefined8 *)(lStack_278 + lVar15 * 8);
              uVar4 = uVar16;
              func_0x00010c290fa0();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              func_0x000100bf119c();
              _objc_release(uVar4);
              if ((int)uVar5 != 0) {
                func_0x00010c290fa0(uVar16);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar1);
                _objc_release(uVar16);
              }
              lVar15 = lVar15 + 1;
            } while (lVar3 != lVar15);
            lVar3 = lVar14;
            func_0x00010bf52a60();
          } while (lVar3 != 0);
        }
        _objc_release(lVar14);
        puVar13 = (undefined8 *)((long)puVar13 + 1);
      } while (puVar13 != puVar6);
      puVar6 = puStack_308;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined8 *)0x0);
  }
  _objc_release(puStack_308);
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar14 = lStack_318;
  lStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  puVar6 = *(undefined8 **)(lStack_318 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c255460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = &uStack_2c0;
  puVar8 = puVar7;
  func_0x00010bf52a60();
  if (puVar8 != (undefined8 *)0x0) {
    lVar3 = *plStack_2b0;
    do {
      puVar13 = (undefined8 *)0x0;
      do {
        if (*plStack_2b0 != lVar3) {
          _objc_enumerationMutation(puVar7);
        }
        lVar17 = *(long *)(lStack_2b8 + (long)puVar13 * 8);
        lVar12 = lVar17;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar12;
        func_0x00010c0ca400();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar12);
        if (lVar15 != 0) {
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar17;
          func_0x00010c0ca400();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar12;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar12);
          _objc_release(lVar17);
          lVar12 = lVar15;
          func_0x00010c08fa60();
          if (lVar12 != 0) {
            func_0x00010befa120(puVar2);
          }
          _objc_release(lVar15);
        }
        puVar13 = (undefined8 *)((long)puVar13 + 1);
      } while (puVar8 != puVar13);
      puVar6 = &uStack_2c0;
      puVar8 = puVar7;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined8 *)0x0);
  }
  _objc_release(puVar7);
  puVar9 = puVar1;
  func_0x00010bf529e0();
  puVar7 = puVar2;
  func_0x00010bf529e0();
  puVar10 = (undefined *)((long)puVar7 + (long)puVar9);
  if (puVar10 < (undefined *)0x2) {
    pcVar11 = *(code **)(lStack_310 + 0x10);
  }
  else {
    puVar7 = puVar2;
    func_0x00010bf529e0();
    lVar3 = lStack_310;
    if (puVar7 != (undefined8 *)0x0) {
      lVar14 = *(long *)(lVar14 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puStack_2f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2f0 = 0xc2000000;
      pcStack_2e8 = FUN_108432ed0;
      puStack_2e0 = &UNK_110a48710;
      _objc_retain(lVar3);
      lStack_2d0 = lVar3;
      puVar6 = puVar2;
      puStack_2d8 = puVar1;
      puStack_2c8 = puVar9;
      func_0x00010c244e80(lVar14);
      _objc_release(lVar14);
      _objc_release(lStack_2d0);
      goto LAB_108432e74;
    }
    pcVar11 = *(code **)(lStack_310 + 0x10);
    puVar10 = puVar9;
  }
  lVar3 = lStack_310;
  (*pcVar11)(lStack_310);
LAB_108432e74:
  _objc_release(puVar2);
  _objc_release(puStack_308);
  _objc_release(puVar1);
  lVar12 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_328 = FUN_108432ed0;
  lStack_350 = lVar14;
  puStack_348 = puVar13;
  puStack_340 = puVar1;
  lStack_338 = lVar3;
  puStack_330 = &stack0xfffffffffffffff0;
  if ((puVar10 != (undefined *)0x0) && (puVar6 == (undefined8 *)0x0)) {
    puStack_378 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_370 = 0xc2000000;
    pcStack_368 = FUN_108432f8c;
    puStack_360 = &UNK_11085a548;
    uStack_358 = *(undefined8 *)(lVar12 + 0x20);
    func_0x0001006372a4(puVar10,&puStack_378);
    lVar14 = *(long *)(lVar12 + 0x28);
    puVar1 = puVar10;
    func_0x00010bf529e0();
    (**(code **)(lVar14 + 0x10))(lVar14,puVar1 + *(long *)(lVar12 + 0x30));
    _objc_release(puVar10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108432f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar12 + 0x28) + 0x10))
            (*(long *)(lVar12 + 0x28),*(undefined8 *)(lVar12 + 0x30));
  return;
}



/* Entry: 108432ed0; end: 108432f8b;  */

void FUN_108432ed0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if ((param_2 != 0) && (param_3 == 0)) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108432f8c;
    puStack_40 = &UNK_11085a548;
    uStack_38 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001006372a4(param_2,&puStack_58);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = param_2;
    func_0x00010bf529e0();
    (**(code **)(lVar2 + 0x10))(lVar2,*(long *)(param_1 + 0x30) + lVar1);
    _objc_release(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108432f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 108432f8c; end: 108432fe3;  */

uint FUN_108432f8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x000100bf119c();
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf4b900(uVar1);
    uVar2 = (uint)uVar1 ^ 1;
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 108432fe4; end: 10843304f; -[SCContextMentionEducationDialogVerifyingLauncher .cxx_destruct] */

void FUN_108432fe4(long param_1)

{
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



/* Entry: 108433050; end: 10843330f; -[SCContextMentionStoryShareGroupMessageSender initWithUserTaggingStoryShareMessageSender:userSession:customStoriesDataFetcher:conversationDestinationParser:storyShareSender:snapchatterFetcher:groupsDataCreator:groupsDataFetcher:contextExperimentService:circumstanceEngine:] */

undefined8 *
FUN_108433050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_68 = PTR_PTR_1126fc840;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cf4d8;
    _objc_alloc();
    func_0x00010c004b00();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_12;
    func_0x00010bf1f440();
    *(char *)(puVar1 + 0xc) = (char)uVar2;
    uVar2 = param_12;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + 0x61) = (char)uVar2;
  }
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



/* Entry: 108433310; end: 1084334bf; -[SCContextMentionStoryShareGroupMessageSender notifyTaggedUserWithStoryType:mediaType:storyIdToStorySnapId:notifiedUserIds:businessId:storyTypeVariant:] */

void FUN_108433310(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1084334c0;
  puStack_b0 = &UNK_110925c58;
  uStack_a8 = uVar6;
  uStack_88 = param_3;
  uStack_80 = param_4;
  _objc_retain(param_5);
  uStack_a0 = param_5;
  _objc_retain(param_6);
  uStack_98 = param_6;
  _objc_retain(param_7);
  ppuVar2 = &puStack_c8;
  uStack_90 = param_7;
  uStack_78 = param_8;
  _objc_retainBlock();
  uVar3 = *(ulong *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_6;
  func_0x00010bf529e0(param_6);
  uVar5 = uVar3;
  func_0x00010bf56640(uVar3,param_2,uVar4);
  _objc_release(uVar3);
  if ((uVar5 & 1) == 0) {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  else {
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x1084334d8;
    puStack_d8 = &UNK_110842508;
    ppuStack_d0 = ppuVar2;
    func_0x00010bdd0e00(param_1,param_2,param_5,param_4,param_6,&puStack_f0);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uVar6);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1084334c0; end: 1084334eb;  */

void FUN_1084334c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dd5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_notifyTaggedUserWithStoryType_me_112614f90,
             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x50));
  return;
}



/* Entry: 1084334ec; end: 10843372b; -[SCContextMentionStoryShareGroupMessageSender _attemptToCreateGroupChatForMentionedFriends:mediaType:notifiedUserIds:completion:] */

void FUN_1084334ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(uVar1);
  uVar2 = param_5;
  func_0x00010bf4b900();
  uVar3 = param_5;
  if ((int)uVar2 == 0) {
    func_0x00010c0d3c80();
    func_0x00010befa120();
  }
  else {
    _objc_retain(param_5);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  uVar2 = uVar3;
  func_0x00010bf529e0();
  if (uVar2 < 3) {
    (**(code **)(param_6 + 0x10))(param_6,0);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar6);
    _objc_initWeak(auStack_68,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_6);
    _objc_retain(param_3);
    uStack_70 = param_4;
    _objc_retain(param_5);
    func_0x00010c244e80(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar6);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10843372c; end: 108433ab7;  */

void FUN_10843372c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (((lVar2 == 0) || (param_2 == 0)) || (param_3 != 0)) {
    uVar10 = 0;
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retain(param_2);
    lVar5 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar13 = *(ulong *)(lVar12 * 8);
        uVar10 = uVar13;
        func_0x000100bf119c();
        if ((uVar10 & 1) == 0) {
          uVar10 = uVar13;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar10;
          func_0x00010c0720c0();
          _objc_release(uVar10);
          if ((int)uVar6 != 0) goto LAB_108433840;
          func_0x00010c2923e0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(uVar13);
        }
        else {
LAB_108433840:
          func_0x00010befa120(puVar3);
        }
        lVar12 = lVar12 + 1;
      } while (lVar5 != lVar12);
      lVar5 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    puVar7 = puVar3;
    func_0x00010bf529e0();
    if (puVar7 < (undefined *)0x3) {
      uVar10 = 0;
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      if ((*(byte *)(lVar2 + 0x61) & 1) == 0) {
        func_0x00010bf00d20(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
      }
      else {
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
      }
      auVar16 = *(undefined1 (*) [16])(param_1 + 0x28);
      _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x28));
      auVar15 = NEON_ext(auVar16,auVar16,8,1);
      uVar8 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar8);
      func_0x00010be9f420(lVar2);
      auVar16 = *(undefined1 (*) [16])(param_1 + 0x28);
      _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x28));
      auVar16 = NEON_ext(auVar16,auVar16,8,1);
      uVar14 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar14);
      func_0x00010be64980(lVar2);
      uVar10 = 1;
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
      _objc_release(uVar14);
      _objc_release(auVar16._8_8_);
      _objc_release(uVar8);
      _objc_release(auVar15._8_8_);
      _objc_release(uVar9);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  if ((uVar10 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0dd5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_notifyTaggedUserWithStoryType_me_112614f90,0,
             *(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x28),
             *(undefined8 *)(param_2 + 0x30),0,0);
  return;
}



/* Entry: 108433ab8; end: 108433adb;  */

void FUN_108433ab8(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0dd5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_notifyTaggedUserWithStoryType_me_112614f90,0,
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),0,0);
  return;
}



/* Entry: 108433adc; end: 108433bcb;  */

void FUN_108433adc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [8];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [136];
  long lStack_e8;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = *(undefined1 **)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  lVar13 = 1;
  uVar15 = 0;
  puVar8 = puVar3;
  func_0x00010c0dd5e0(uVar4);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar13);
  _objc_retain(uVar17);
  _objc_retain(puVar8);
  _objc_retain(uVar15);
  uVar4 = *(undefined8 *)(puVar2 + 0x18);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  _objc_initWeak(auStack_170);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  _objc_retain(puVar8);
  puVar3 = puVar8;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar16 = *plStack_1a0;
    do {
      puVar20 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar16) {
          _objc_enumerationMutation(puVar8);
        }
        uVar21 = *(undefined8 *)(lStack_1a8 + (long)puVar20 * 8);
        puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_210 = 0xc2000000;
        pcStack_208 = FUN_108433ea0;
        puStack_200 = &UNK_110a487a0;
        _objc_retain(lVar13);
        lStack_1f8 = lVar13;
        uStack_1f0 = uVar4;
        _objc_retain(uVar17);
        uStack_1e8 = uVar17;
        puStack_1e0 = puVar2;
        _objc_retain(puVar8);
        puVar12 = auStack_170;
        puStack_1d8 = puVar8;
        uStack_1d0 = uVar21;
        _objc_copyWeak(auStack_1c0);
        uStack_1b8 = uVar14;
        _objc_retain(uVar15);
        ppuVar5 = &puStack_218;
        uStack_1c8 = uVar15;
        _objc_retainBlock();
        uVar21 = *(undefined8 *)(puVar2 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(puVar2 + 0x38);
        func_0x00010c11de00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf62500(uVar21);
        _objc_release(uVar6);
        _objc_release(uVar21);
        _objc_release(ppuVar5);
        _objc_release(uStack_1c8);
        _objc_destroyWeak(auStack_1c0);
        _objc_release(puStack_1d8);
        _objc_release(uStack_1e8);
        _objc_release(lStack_1f8);
        puVar20 = puVar20 + 1;
      } while (puVar3 != puVar20);
      puVar3 = puVar8;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_170);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(puVar8);
  _objc_release(uVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_170);
  __Unwind_Resume();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar12;
  _objc_retain(puVar12);
  puVar7 = puVar12;
  func_0x00010c27dd80();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (puVar7 == (undefined1 *)0x1) {
    puVar7 = puVar12;
    func_0x00010c29ef80(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = *(long *)(lVar13 + 0x20);
    _objc_retain(lVar19);
    lVar9 = lVar19;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar9 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar19);
        }
        uVar14 = *(undefined8 *)(lVar18 * 8);
        uVar4 = uVar14;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar4;
        func_0x00010c0720c0();
        if ((int)uVar17 == 0) {
          func_0x00010c2923e0(uVar14);
          _objc_retainAutoreleasedReturnValue();
          puVar20 = puVar3;
          func_0x00010bf4b900();
          _objc_release(uVar14);
          _objc_release(uVar4);
          if (((ulong)puVar20 & 1) == 0) {
            func_0x00010c12d360(puVar8);
          }
        }
        else {
          _objc_release(uVar4);
        }
        lVar18 = lVar18 + 1;
      } while (lVar9 != lVar18);
      lVar9 = lVar19;
      func_0x00010bf52a60();
    }
    _objc_release(lVar19);
    puVar20 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = *(long *)(lVar13 + 0x30);
    _objc_retain(lVar19);
    lVar9 = lVar19;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar9 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar19);
        }
        puVar10 = puVar3;
        func_0x00010bf4b900();
        if (((ulong)puVar10 & 1) == 0) {
          func_0x00010c12d360(puVar20);
        }
        lVar18 = lVar18 + 1;
      } while (lVar9 != lVar18);
      lVar9 = lVar19;
      func_0x00010bf52a60();
    }
    _objc_release(lVar19);
    if ((*(byte *)(*(long *)(lVar13 + 0x38) + 0x60) & 1) == 0) {
      uVar4 = *(undefined8 *)(lVar13 + 0x48);
      _objc_retain(uVar4);
    }
    else {
      uVar4 = *(undefined8 *)(lVar13 + 0x40);
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar9 = lVar13 + 0x58;
    _objc_loadWeakRetained(lVar9);
    puVar10 = puVar8;
    func_0x00010bf00560(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar20;
    func_0x00010bf00560(puVar20);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(lVar13 + 0x50);
    _objc_retain(uVar17);
    func_0x00010be9f420(lVar9);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(lVar9);
    _objc_release(uVar17);
    _objc_release(uVar4);
    _objc_release(puVar20);
    _objc_release(puVar8);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  if (((ulong)puVar2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108434274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar12 + 0x28) + 0x10))
            (*(long *)(puVar12 + 0x28),*(undefined8 *)(puVar12 + 0x20));
  return;
}



/* Entry: 108433bcc; end: 108433e9f; -[SCContextMentionStoryShareGroupMessageSender _notifyGroupChatAndIndividualFriendsForCustomStory:nonMutualFriendUserIds:storyIdToStorySnapId:mediaType:sendIndividuallyBlock:] */

void FUN_108433bcc(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 *puStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [136];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_1;
  _objc_initWeak(auStack_110);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(param_5);
  lVar13 = param_5;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar12 = *plStack_140;
    do {
      lVar16 = 0;
      do {
        if (*plStack_140 != lVar12) {
          _objc_enumerationMutation(param_5);
        }
        uVar17 = *(undefined8 *)(lStack_148 + lVar16 * 8);
        puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1b0 = 0xc2000000;
        pcStack_1a8 = FUN_108433ea0;
        puStack_1a0 = &UNK_110a487a0;
        _objc_retain(param_3);
        lStack_198 = param_3;
        uStack_190 = uVar1;
        _objc_retain(param_4);
        uStack_188 = param_4;
        puStack_180 = param_1;
        _objc_retain(param_5);
        puVar10 = auStack_110;
        lStack_178 = param_5;
        uStack_170 = uVar17;
        _objc_copyWeak(auStack_160);
        uStack_158 = param_6;
        _objc_retain(param_7);
        ppuVar2 = &puStack_1b8;
        uStack_168 = param_7;
        _objc_retainBlock();
        uVar17 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c11de00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf62500(uVar17);
        _objc_release(uVar3);
        _objc_release(uVar17);
        _objc_release(ppuVar2);
        _objc_release(uStack_168);
        _objc_destroyWeak(auStack_160);
        _objc_release(lStack_178);
        _objc_release(uStack_188);
        _objc_release(lStack_198);
        lVar16 = lVar16 + 1;
      } while (lVar13 != lVar16);
      lVar13 = param_5;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  _objc_release(param_5);
  _objc_destroyWeak(auStack_110);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_110);
  __Unwind_Resume();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar10;
  _objc_retain(puVar10);
  puVar4 = puVar10;
  func_0x00010c27dd80();
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (puVar4 == (undefined1 *)0x1) {
    puVar4 = puVar10;
    func_0x00010c29ef80(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = *(long *)(param_3 + 0x20);
    _objc_retain(lVar15);
    lVar12 = lVar15;
    func_0x00010bf52a60();
    lVar16 = lRam0000000000000000;
    while (lVar12 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar16) {
          _objc_enumerationMutation(lVar15);
        }
        uVar3 = *(undefined8 *)(lVar14 * 8);
        uVar1 = uVar3;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar1;
        func_0x00010c0720c0();
        if ((int)uVar17 == 0) {
          func_0x00010c2923e0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar5;
          func_0x00010bf4b900();
          _objc_release(uVar3);
          _objc_release(uVar1);
          if (((ulong)puVar7 & 1) == 0) {
            func_0x00010c12d360(puVar6);
          }
        }
        else {
          _objc_release(uVar1);
        }
        lVar14 = lVar14 + 1;
      } while (lVar12 != lVar14);
      lVar12 = lVar15;
      func_0x00010bf52a60();
    }
    _objc_release(lVar15);
    puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = *(long *)(param_3 + 0x30);
    _objc_retain(lVar15);
    lVar12 = lVar15;
    func_0x00010bf52a60();
    lVar16 = lRam0000000000000000;
    while (lVar12 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar16) {
          _objc_enumerationMutation(lVar15);
        }
        puVar8 = puVar5;
        func_0x00010bf4b900();
        if (((ulong)puVar8 & 1) == 0) {
          func_0x00010c12d360(puVar7);
        }
        lVar14 = lVar14 + 1;
      } while (lVar12 != lVar14);
      lVar12 = lVar15;
      func_0x00010bf52a60();
    }
    _objc_release(lVar15);
    if ((*(byte *)(*(long *)(param_3 + 0x38) + 0x60) & 1) == 0) {
      uVar1 = *(undefined8 *)(param_3 + 0x48);
      _objc_retain(uVar1);
    }
    else {
      uVar1 = *(undefined8 *)(param_3 + 0x40);
      func_0x00010c0e00e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar12 = param_3 + 0x58;
    _objc_loadWeakRetained(lVar12);
    puVar8 = puVar6;
    func_0x00010bf00560(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf00560(puVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_3 + 0x50);
    _objc_retain(uVar17);
    func_0x00010be9f420(lVar12);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(lVar12);
    _objc_release(uVar17);
    _objc_release(uVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  if (((ulong)puVar11 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108434274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar10 + 0x28) + 0x10))
            (*(long *)(puVar10 + 0x28),*(undefined8 *)(puVar10 + 0x20));
  return;
}



/* Entry: 108433ea0; end: 10843425f;  */

void FUN_108433ea0(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_2;
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c27dd80();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (uVar2 == 1) {
    uVar2 = param_2;
    func_0x00010c29ef80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar13);
    lVar5 = lVar13;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar13);
        }
        uVar15 = *(undefined8 *)(lVar12 * 8);
        uVar14 = uVar15;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar14;
        func_0x00010c0720c0();
        if ((int)uVar11 == 0) {
          func_0x00010c2923e0(uVar15);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          func_0x00010bf4b900();
          _objc_release(uVar15);
          _objc_release(uVar14);
          if (((ulong)puVar6 & 1) == 0) {
            func_0x00010c12d360(puVar4);
          }
        }
        else {
          _objc_release(uVar14);
        }
        lVar12 = lVar12 + 1;
      } while (lVar5 != lVar12);
      lVar5 = lVar13;
      func_0x00010bf52a60();
    }
    _objc_release(lVar13);
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = *(long *)(param_1 + 0x30);
    _objc_retain(lVar13);
    lVar5 = lVar13;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar13);
        }
        puVar7 = puVar3;
        func_0x00010bf4b900();
        if (((ulong)puVar7 & 1) == 0) {
          func_0x00010c12d360(puVar6);
        }
        lVar12 = lVar12 + 1;
      } while (lVar5 != lVar12);
      lVar5 = lVar13;
      func_0x00010bf52a60();
    }
    _objc_release(lVar13);
    if ((*(byte *)(*(long *)(param_1 + 0x38) + 0x60) & 1) == 0) {
      uVar14 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(uVar14);
    }
    else {
      uVar14 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c0e00e0(uVar14);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar5 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar5);
    puVar7 = puVar4;
    func_0x00010bf00560(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf00560(puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar11);
    func_0x00010be9f420(lVar5);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(lVar5);
    _objc_release(uVar11);
    _objc_release(uVar14);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  if ((uVar9 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108434274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))
            (*(long *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 108434260; end: 108434277;  */

void FUN_108434260(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108434274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108434278; end: 10843443f; -[SCContextMentionStoryShareGroupMessageSender _sendGroupchatNotificationToStory:mentionedFriends:nonMutualFriendUserIds:mediaType:completion:] */

void FUN_108434278(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if ((param_3 == 0) || (uVar1 = param_4, func_0x00010bf529e0(), uVar1 < 3)) {
    (**(code **)(param_7 + 0x10))(param_7,0);
  }
  else {
    uVar1 = param_4;
    func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_110a487d0);
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar4);
    _objc_retain(uVar3);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_7);
    _objc_retain(param_5);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf56ee0(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_7);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108434440; end: 108434447;  */

void FUN_108434440(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 108434448; end: 10843451f;  */

void FUN_108434448(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_110a487f0);
    uVar2 = uVar1;
    func_0x00010c0d3c80();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126b01c0;
    func_0x00010bfcf680(PTR_PTR_1126b01c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(puVar3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c15cd60(uVar1);
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108434520; end: 10843452f;  */

void FUN_108434520(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c294270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b01c0,PTR_s_userWithId__112682ac0,param_2);
  return;
}



/* Entry: 108434530; end: 1084345cb; -[SCContextMentionStoryShareGroupMessageSender .cxx_destruct] */

void FUN_108434530(long param_1)

{
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



/* Entry: 1084345cc; end: 10843466f; -[SCContextMentionStoryShareMessageSenderHelper initWithConversationDestinationParser:storyShareSender:] */

undefined1 *
FUN_1084345cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc848;
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



/* Entry: 108434670; end: 1084347f7; -[SCContextMentionStoryShareMessageSenderHelper sendStoryShareMessageForChatIdentifiers:numGroupParticipants:storySnapId:mediaType:performer:] */

void FUN_108434670(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c246920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uStack_68 = param_4;
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(param_5);
  uStack_60 = param_6;
  _objc_retain(param_7);
  func_0x00010c297260(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1084347f8; end: 108434893;  */

void FUN_1084347f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf529e0(uVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea06a0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108434894; end: 108434a63; -[SCContextMentionStoryShareMessageSenderHelper _sendStoryShareMessageToSortedConversations:error:storySnapId:mediaType:recipientsCount:performer:] */

void FUN_108434894(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  if (param_4 == 0) {
    uVar1 = param_3;
    func_0x00010bf026a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_1086063f4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010860511c();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_5);
    uStack_60 = param_6;
    _objc_retain(param_3);
    _objc_retain(uVar1);
    _objc_retain(param_8);
    func_0x00010c0f7fe0(0x4000000000000000,param_8);
    _objc_release(param_8);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108434a64; end: 108434ad7;  */

void FUN_108434a64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf50b20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea0660(lVar2,param_2,uVar1,uVar4,uVar3,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108434ad8; end: 108434c37; -[SCContextMentionStoryShareMessageSenderHelper _sendStoryShareForStorySnapId:mediaType:toArroyoConversationIds:platformAnalytics:performer:] */

void FUN_108434ad8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_5;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c2810;
    _objc_alloc(PTR_PTR_1126c2810);
    func_0x00010c04e240();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_7;
    func_0x00010c11de00(param_7);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108434c38;
    puStack_60 = &UNK_110855e40;
    _objc_retain(param_5);
    lStack_58 = param_5;
    func_0x00010c15d8c0(uVar3,param_2,puVar2,param_5,param_6,0,uVar4,&puStack_78);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lStack_58);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108434c38; end: 108434c3b;  */

void FUN_108434c38(void)

{
  return;
}



/* Entry: 108434c3c; end: 108434de3; -[SCContextMentionStoryShareMessageSenderHelper sendSnapProStoryShareMessageForChatIdentifiers:numGroupParticipants:businessId:snapId:performer:] */

void FUN_108434c3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c246920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uStack_60 = param_4;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c297260(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108434de4; end: 108434e7f;  */

void FUN_108434de4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf529e0(uVar1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea0440();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108434e80; end: 10843506f; -[SCContextMentionStoryShareMessageSenderHelper _sendSnapProStoryShareWithBusinessId:snapId:sortedConversations:error:recipientsCount:performer:] */

void FUN_108434e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  if (param_6 == 0) {
    uVar1 = param_5;
    func_0x00010bf026a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_1086063f4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010860511c();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(uVar1);
    _objc_retain(param_8);
    func_0x00010c0f7fe0(0x4000000000000000,param_8);
    _objc_release(param_8);
    _objc_release(uVar1);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108435070; end: 1084350e3;  */

void FUN_108435070(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf50b20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea0420(lVar3,param_2,uVar1,uVar2,uVar4,*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40));
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1084350e4; end: 10843524b; -[SCContextMentionStoryShareMessageSenderHelper _sendSnapProStoryShareForBusinessId:snapId:toArroyoConversationIds:platformAnalytics:performer:] */

void FUN_1084350e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_5;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d95d8;
    _objc_alloc(PTR_PTR_1126d95d8);
    func_0x00010bff9c60();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_7;
    func_0x00010c11de00(param_7);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10843524c;
    puStack_60 = &UNK_110855e40;
    _objc_retain(param_5);
    lStack_58 = param_5;
    func_0x00010c15ca60(uVar3,param_2,puVar2,param_5,param_6,uVar4,&puStack_78);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lStack_58);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10843524c; end: 10843524f;  */

void FUN_10843524c(void)

{
  return;
}



/* Entry: 108435250; end: 10843527f; -[SCContextMentionStoryShareMessageSenderHelper .cxx_destruct] */

void FUN_108435250(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108435280; end: 10843528b; -[SCFeatureSettingsService hasGroupMentionStorySharePopupAccepted] */

void FUN_108435280(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed82f8);
  return;
}



/* Entry: 10843528c; end: 108435297; -[SCFeatureSettingsService groupMentionStorySharePopupAcceptedServerParam] */

undefined ** FUN_10843528c(void)

{
  return &PTR____CFConstantStringClassReference_110ed82f8;
}



/* Entry: 108435298; end: 1084352a7; -[SCFeatureSettingsService setGroupMentionStorySharePopupAccepted:] */

void FUN_108435298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed82f8,param_3);
  return;
}



/* Entry: 1084352a8; end: 1084352af; -[SCFeatureSettingsService GROUP_MENTION_STORY_SHARE_POPUP_ACCEPTED_client_value:] */

undefined * FUN_1084352a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1084352b0; end: 1084352b7; -[SCFeatureSettingsService GROUP_MENTION_STORY_SHARE_POPUP_ACCEPTED_server_value:] */

void FUN_1084352b0(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1084352b8; end: 108435327; -[SCFeatureSettingsService groupMentionStorySharePopupAccepted] */

void FUN_1084352b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed82f8,0);
  return;
}



/* Entry: 108435328; end: 1084354c3;  */

undefined * FUN_108435328(long param_1,undefined *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar14;
  undefined *puVar15;
  undefined *puVar13;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c25d0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80();
  if (((ulong)puVar3 & 1) == 0) {
    _objc_retain(param_2);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c25d780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80();
    if (((ulong)puVar3 & 1) == 0) {
      _objc_retain(param_2);
    }
    else {
      puVar3 = PTR_PTR_1126d95e0;
      _objc_opt_new();
      puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar15;
      func_0x00010c0d3c80();
      func_0x00010c1d8f40(puVar3);
      _objc_release(puVar5);
      _objc_release(puVar15);
      func_0x00010c1d0640(param_2);
      _objc_retain(param_2);
      _objc_release(puVar3);
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar5 = puVar3;
    FUN_108435fdc();
    if ((int)puVar5 != 0) {
      puVar5 = PTR_PTR_1126d95e0;
      _objc_opt_new(PTR_PTR_1126d95e0);
      ppuVar6 = &PTR__OBJC_CLASS___NSConstantDictionary_111174e50;
      func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174e50);
      func_0x00010c1d8f40(puVar5);
      _objc_release(ppuVar6);
      func_0x00010c1d0640(puVar15);
      _objc_release(puVar5);
    }
    puVar5 = PTR_PTR_1126d95e0;
    _objc_opt_new();
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantDictionary_111174e78;
    func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174e78);
    func_0x00010c1d8f40(puVar5);
    _objc_release(ppuVar6);
    func_0x00010c1d0640(puVar15);
    puVar7 = puVar3;
    func_0x00010bf1f460();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf1f3c0();
    _objc_release(puVar7);
    puVar7 = puVar3;
    func_0x00010bf1f460();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf1f3c0();
    _objc_release(puVar7);
    puVar7 = puVar3;
    func_0x00010bf1f460();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010bf1f3c0();
    _objc_release(puVar7);
    puVar7 = puVar3;
    func_0x00010bf1f460();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar7;
    func_0x00010bf1f3c0();
    _objc_release(puVar7);
    puVar7 = puVar3;
    func_0x00010bf1f460();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar7;
    func_0x00010bf1f3c0();
    if ((int)puVar12 == 0) {
      iVar1 = 0;
    }
    else {
      puVar12 = puVar3;
      func_0x00010bf1f460();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bf1f3c0();
      iVar1 = (int)puVar13;
      _objc_release(puVar12);
    }
    _objc_release(puVar7);
    if ((((uint)puVar8 | (uint)puVar9 | (uint)puVar10 | (uint)puVar11) & 1) != 0) {
      puVar7 = puVar3;
      func_0x00010bf1f460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(puVar7);
      if (iVar1 != 0) {
        puVar7 = puVar3;
        func_0x00010bf1f460();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        _objc_release(puVar7);
      }
    }
    func_0x00010c078040();
    puVar7 = PTR_PTR_1126d95e0;
    _objc_opt_new();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0d3c80();
    func_0x00010c1d8f40(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar8);
    func_0x00010c1d0640(puVar15);
    puVar8 = puVar3;
    func_0x00010bf1f460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(puVar8);
    puVar8 = puVar3;
    func_0x00010bf1f460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(puVar8);
    puVar8 = puVar3;
    func_0x00010bf1f460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(puVar8);
    puVar8 = puVar3;
    func_0x00010bf1f460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126d95e0;
    _objc_opt_new(PTR_PTR_1126d95e0);
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c0d3c80();
    func_0x00010c1d8f40(puVar8);
    _objc_release(puVar10);
    _objc_release(puVar9);
    func_0x00010c1d0640(puVar15);
    puVar9 = puVar3;
    func_0x00010bf1f460();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf1f3c0();
    _objc_release(puVar9);
    if ((int)puVar10 != 0) {
      puVar9 = PTR_PTR_1126d95e0;
      _objc_opt_new(PTR_PTR_1126d95e0);
      ppuVar6 = &PTR__OBJC_CLASS___NSConstantDictionary_111174ea0;
      func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174ea0);
      func_0x00010c1d8f40(puVar9);
      _objc_release(ppuVar6);
      func_0x00010c1d0640(puVar15);
      _objc_release(puVar9);
    }
    puVar9 = puVar3;
    func_0x00010bf1f460();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf1f3c0();
    _objc_release(puVar9);
    if ((int)puVar10 != 0) {
      puVar9 = PTR_PTR_1126d95e0;
      _objc_opt_new(PTR_PTR_1126d95e0);
      ppuVar6 = &PTR__OBJC_CLASS___NSConstantDictionary_111174ec8;
      func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174ec8);
      func_0x00010c1d8f40(puVar9);
      _objc_release(ppuVar6);
      func_0x00010c1d0640(puVar15);
      _objc_release(puVar9);
    }
    puVar9 = PTR_PTR_1126d95e0;
    _objc_opt_new(PTR_PTR_1126d95e0);
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c0d3c80();
    func_0x00010c1d8f40(puVar9);
    _objc_release(puVar11);
    _objc_release(puVar10);
    func_0x00010c1d0640(puVar15);
    _objc_retain(puVar3);
    puVar10 = PTR____NSDictionary0__struct_11034ab58;
    if (puVar3 != (undefined *)0x0) {
      puVar11 = puVar3;
      func_0x00010c25cd80();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf529e0();
      puVar10 = PTR____NSDictionary0__struct_11034ab58;
      if (puVar12 != (undefined *)0x0) {
        _objc_retain(puVar3);
        puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new();
        puVar12 = puVar11;
        func_0x00010c124d20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        puVar10 = puVar12;
        func_0x00010bf51e00(puVar12);
        _objc_release(puVar12);
        _objc_release(puVar3);
      }
      _objc_release(puVar11);
    }
    _objc_release(puVar3);
    func_0x00010bef7f60(puVar15);
    param_2 = puVar15;
    func_0x00010bf51e00(puVar15);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar15);
    _objc_release(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
      ___stack_chk_fail();
      _objc_retain();
      puVar15 = PTR__OBJC_CLASS___AVCaptureMultiCamSession_1126b70a0;
      func_0x00010c078040();
      if ((int)puVar15 == 0) {
        puVar15 = (undefined *)0x0;
      }
      else {
        puVar15 = puVar3;
        func_0x00010bf1f460(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar15;
        func_0x00010bf1f3c0();
        _objc_release(puVar15);
        puVar15 = puVar3;
        func_0x00010bf1f460(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar15;
        func_0x00010bf1f3c0();
        _objc_release(puVar15);
        puVar15 = (undefined *)(ulong)((uint)puVar5 & (uint)puVar7);
      }
      _objc_release(puVar3);
      return puVar15;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return param_2;
}



/* Entry: 1084354c4; end: 108435ccb;  */

undefined * FUN_1084354c4(undefined *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar12;
  uint uVar13;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  undefined *puVar11;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = param_1;
  FUN_108435fdc();
  if ((int)puVar3 != 0) {
    puVar3 = PTR_PTR_1126d95e0;
    _objc_opt_new(PTR_PTR_1126d95e0);
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174e50;
    func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174e50);
    func_0x00010c1d8f40(puVar3,param_2,ppuVar4);
    _objc_release(ppuVar4);
    func_0x00010c1d0640(puVar12,param_2,puVar3,&PTR____CFConstantStringClassReference_110ed8538);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126d95e0;
  _objc_opt_new();
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174e78;
  func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174e78);
  func_0x00010c1d8f40(puVar3,param_2,ppuVar4);
  _objc_release(ppuVar4);
  func_0x00010c1d0640(puVar12,param_2,puVar3,&PTR____CFConstantStringClassReference_110ed8558);
  puVar5 = param_1;
  func_0x00010bf1f460(param_1,param_2,&PTR____CFConstantStringClassReference_110ed8378,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf1f3c0();
  _objc_release(puVar5);
  puVar5 = param_1;
  func_0x00010bf1f460(param_1,param_2,&PTR____CFConstantStringClassReference_110ed8398,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf1f3c0();
  _objc_release(puVar5);
  puVar5 = param_1;
  func_0x00010bf1f460(param_1,param_2,&PTR____CFConstantStringClassReference_110ed83b8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bf1f3c0();
  _objc_release(puVar5);
  puVar5 = param_1;
  func_0x00010bf1f460(param_1,param_2,&PTR____CFConstantStringClassReference_110ed83d8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar5;
  func_0x00010bf1f3c0();
  _objc_release(puVar5);
  puVar5 = param_1;
  func_0x00010bf1f460(param_1,param_2,&PTR____CFConstantStringClassReference_110ed8418,0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  func_0x00010bf1f3c0();
  if ((int)puVar10 == 0) {
    uVar1 = 0;
  }
  else {
    puVar10 = param_1;
    func_0x00010bf1f460(param_1,param_2,&PTR____CFConstantStringClassReference_110de4d18,0);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf1f3c0();
    uVar1 = (uint)puVar11;
    _objc_release(puVar10);
  }
  _objc_release(puVar5);
  if ((((uint)puVar6 | (uint)puVar7 | (uint)puVar8 | (uint)puVar9) & 1) == 0) {
    uVar2 = 0;
    uVar13 = 0;
  }
  else {
    puVar5 = param_1;
    func_0x00010bf1f460(param_1,param_2,&PTR____CFConstantStringClassReference_110ed83f8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    func_0x00010bf1f3c0();
    uVar2 = (uint)puVar10;
    _objc_release(puVar5);
    uVar13 = uVar2;
    if (uVar1 != 0) {
      puVar5 = param_1;
      func_0x00010bf1f460(param_1,param_2,&PTR____CFConstantStringClassReference_110de4db8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar5;
      func_0x00010bf1f3c0();
      _objc_release(puVar5);
      uVar13 = (uint)puVar10;
    }
  }
  puVar5 = PTR__OBJC_CLASS___AVCaptureMultiCamSession_1126b70a0;
  func_0x00010c078040();
  puVar10 = PTR_PTR_1126d95e0;
  _objc_opt_new();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dad378;
  if (((uint)puVar5 & uVar13 & (uint)puVar6) == 0) {
    ppuStack_90 = &PTR____CFConstantStringClassReference_110dad398;
  }
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110ed8578;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110ed8598;
  uVar2 = (uint)puVar5 & uVar2;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dad378;
  if ((uVar2 & (uint)puVar7) == 0) {
    ppuStack_88 = &PTR____CFConstantStringClassReference_110dad398;
  }
  ppuStack_80 = &PTR____CFConstantStringClassReference_110dad378;
  if ((uVar2 & (uint)puVar8) == 0) {
    ppuStack_80 = &PTR____CFConstantStringClassReference_110dad398;
  }
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110ed85b8;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110ed85d8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dad378;
  if ((uVar2 & (uint)puVar9) == 0) {
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dad398;
  }
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_90,&ppuStack_b0,4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0d3c80();
  func_0x00010c1d8f40(puVar10,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c1d0640(puVar12,param_2,puVar10,&PTR____CFConstantStringClassReference_110ed85f8);
  puVar5 = param_1;
  func_0x00010bf1f460(param_1,param_2,&PTR____CFConstantStringClassReference_110ed8438,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf1f3c0();
  _objc_release(puVar5);
  puVar5 = param_1;
  func_0x00010bf1f460(param_1,param_2,&PTR____CFConstantStringClassReference_110ed8458,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf1f3c0();
  _objc_release(puVar5);
  puVar5 = param_1;
  func_0x00010bf1f460(param_1,param_2,&PTR____CFConstantStringClassReference_110ed8478,0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bf1f3c0();
  _objc_release(puVar5);
  puVar5 = param_1;
  func_0x00010bf1f460(param_1,param_2,&PTR____CFConstantStringClassReference_110ed8498,0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar5;
  func_0x00010bf1f3c0();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126d95e0;
  _objc_opt_new(PTR_PTR_1126d95e0);
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110dad378;
  if ((uVar1 & (uint)puVar6) == 0) {
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110dad398;
  }
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110ed8578;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110ed8598;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110dad378;
  if ((uVar1 & (uint)puVar7) == 0) {
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110dad398;
  }
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110dad378;
  if ((uVar1 & (uint)puVar8) == 0) {
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110dad398;
  }
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110ed85b8;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110ed85d8;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110dad378;
  if ((uVar1 & (uint)puVar9) == 0) {
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110dad398;
  }
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_d0,&ppuStack_f0,4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0d3c80();
  func_0x00010c1d8f40(puVar5,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c1d0640(puVar12,param_2,puVar5,&PTR____CFConstantStringClassReference_110e42c58);
  puVar6 = param_1;
  func_0x00010bf1f460(param_1,param_2,&PTR____CFConstantStringClassReference_110ed84b8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf1f3c0();
  _objc_release(puVar6);
  if ((int)puVar7 != 0) {
    puVar6 = PTR_PTR_1126d95e0;
    _objc_opt_new(PTR_PTR_1126d95e0);
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174ea0;
    func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174ea0);
    func_0x00010c1d8f40(puVar6,param_2,ppuVar4);
    _objc_release(ppuVar4);
    func_0x00010c1d0640(puVar12,param_2,puVar6,&PTR____CFConstantStringClassReference_110ed84b8);
    _objc_release(puVar6);
  }
  puVar6 = param_1;
  func_0x00010bf1f460(param_1,param_2,&PTR____CFConstantStringClassReference_110ed84d8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf1f3c0();
  _objc_release(puVar6);
  if ((int)puVar7 != 0) {
    puVar6 = PTR_PTR_1126d95e0;
    _objc_opt_new(PTR_PTR_1126d95e0);
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174ec8;
    func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174ec8);
    func_0x00010c1d8f40(puVar6,param_2,ppuVar4);
    _objc_release(ppuVar4);
    func_0x00010c1d0640(puVar12,param_2,puVar6,&PTR____CFConstantStringClassReference_110ed84d8);
    _objc_release(puVar6);
  }
  puVar6 = PTR_PTR_1126d95e0;
  _objc_opt_new(PTR_PTR_1126d95e0);
  ppuStack_100 = &PTR____CFConstantStringClassReference_110de5df8;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110dad398;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_f8,&ppuStack_100,1)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0d3c80();
  func_0x00010c1d8f40(puVar6,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x00010c1d0640(puVar12,param_2,puVar6,&PTR____CFConstantStringClassReference_110ed84f8);
  _objc_retain(param_1);
  puVar7 = PTR____NSDictionary0__struct_11034ab58;
  if (param_1 != (undefined *)0x0) {
    puVar8 = param_1;
    func_0x00010c25cd80(param_1,param_2,&PTR____CFConstantStringClassReference_110ed8518,
                        PTR____NSArray0__struct_11034ab48,0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf529e0();
    puVar7 = PTR____NSDictionary0__struct_11034ab58;
    if (puVar9 != (undefined *)0x0) {
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_108435328;
      puStack_110 = &UNK_110a488a0;
      _objc_retain(param_1);
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      puStack_108 = param_1;
      _objc_opt_new();
      puVar9 = puVar8;
      func_0x00010c124d20(puVar8,param_2,&puStack_128,puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = puVar9;
      func_0x00010bf51e00(puVar9);
      _objc_release(puVar9);
      _objc_release(puStack_108);
    }
    _objc_release(puVar8);
  }
  _objc_release(param_1);
  func_0x00010bef7f60(puVar12,param_2,puVar7);
  puVar8 = puVar12;
  func_0x00010bf51e00(puVar12);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar10);
  _objc_release(puVar3);
  _objc_release(puVar12);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain();
    puVar12 = PTR__OBJC_CLASS___AVCaptureMultiCamSession_1126b70a0;
    func_0x00010c078040();
    if ((int)puVar12 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = param_1;
      func_0x00010bf1f460(param_1,param_2,&PTR____CFConstantStringClassReference_110ed83f8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar12;
      func_0x00010bf1f3c0();
      _objc_release(puVar12);
      puVar12 = param_1;
      func_0x00010bf1f460(param_1,param_2,&PTR____CFConstantStringClassReference_110ed83b8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar12;
      func_0x00010bf1f3c0();
      _objc_release(puVar12);
      puVar12 = (undefined *)(ulong)((uint)puVar3 & (uint)puVar5);
    }
    _objc_release(param_1);
    return puVar12;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return puVar8;
}



/* Entry: 108435ccc; end: 108435e47;  */

uint FUN_108435ccc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___AVCaptureMultiCamSession_1126b70a0;
  func_0x00010c078040();
  if ((int)puVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010bf1f460(param_1,param_2,&PTR____CFConstantStringClassReference_110ed83f8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bf1f460(param_1,param_2,&PTR____CFConstantStringClassReference_110ed83b8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    uVar5 = (uint)uVar3 & (uint)uVar4;
  }
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 108435e48; end: 108435e6f;  */

void FUN_108435e48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ed8618,0,0);
  return;
}



/* Entry: 108435e70; end: 108435fdb;  */

undefined8 FUN_108435e70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110ed8638,0,0);
  uVar2 = 0;
  if ((int)uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110ed8658,0,0);
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108435fdc; end: 108436153;  */

void FUN_108435fdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ed86b8,0,0);
  return;
}



/* Entry: 108436154; end: 108436287;  */

void FUN_108436154(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x000108f4b700(param_2,0);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_108436288;
    uStack_40 = 0x108436298;
    uStack_38 = 0;
    uVar1 = param_1;
    func_0x00010bfa29a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bed40();
    _objc_release(uVar1);
    uVar1 = puStack_58[5];
    _objc_retain(uVar1);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108436288; end: 10843629f;  */

void FUN_108436288(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1084362a0; end: 1084362d7;  */

void FUN_1084362a0(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x5;
  long lVar2;
  
  _objc_retain(in_x5);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = in_x5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084362d8; end: 108436377;  */

void FUN_1084362d8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  FUN_108436154(param_1,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(param_2);
    lVar2 = param_2;
  }
  else {
    lVar1 = param_1;
    func_0x00010c290fa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108436378; end: 10843645f;  */

void FUN_108436378(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108436288;
  uStack_30 = 0x108436298;
  uStack_28 = 0;
  func_0x00010c0bed40(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108436460; end: 1084364b7;  */

void FUN_108436460(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x5;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = in_x5;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x5);
  return;
}



/* Entry: 1084364b8; end: 1084365df;  */

void FUN_1084364b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c131ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c07f4a0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 == 0) {
    lVar1 = param_1;
    func_0x00010c290fa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    FUN_108436154(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
      goto LAB_1084365a0;
    }
  }
  else {
    lVar3 = param_3;
    func_0x00010c242420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c131ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
  }
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
LAB_1084365a0:
  _objc_release(lVar3);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1084365e0; end: 108436673;  */

void FUN_1084365e0(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf4e420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf4e420();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b5c10;
    _objc_opt_class(PTR_PTR_1126b5c10);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar4 = uVar1;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108436674; end: 10843675f;  */

undefined1 FUN_108436674(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bfa29a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0bed40();
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uVar2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108436760; end: 108436767;  */

void FUN_108436760(void)

{
  return;
}



/* Entry: 108436768; end: 10843679f;  */

void FUN_108436768(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010c08fa60();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_4 != 0;
  return;
}



/* Entry: 1084367a0; end: 1084368d3;  */

void FUN_1084367a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1084368d4;
  uStack_40 = 0x1084368e4;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010bfa29a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010c0bed40(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084368d4; end: 1084368eb;  */

void FUN_1084368d4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1084368ec; end: 1084369db;  */

void FUN_1084368ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf85ee0(uVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1084369dc; end: 108436ae3;  */

void FUN_1084369dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1084368d4;
  uStack_40 = 0x1084368e4;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010bfa29a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108436ae4; end: 108436b9f;  */

void FUN_108436ae4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = param_6;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_5;
  }
  else {
    uVar4 = param_5;
    func_0x00010c25ce40(param_5,param_2,&PTR____CFConstantStringClassReference_110dc1338);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar1;
    _objc_release(uVar2);
  }
  _objc_release(uVar4);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108436ba0; end: 108436cc3;  */

byte FUN_108436ba0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    bVar3 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    uVar2 = param_1;
    func_0x00010bfa29a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010c0bed40(uVar2);
    _objc_release(uVar2);
    bVar3 = *(byte *)(puStack_48 + 3);
    _objc_release(param_2);
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar3 & 1;
}



/* Entry: 108436cc4; end: 108436cf7;  */

void FUN_108436cc4(long param_1,undefined8 param_2)

{
  undefined8 in_stack_00000010;
  
  func_0x00010c0720c0(in_stack_00000010,param_2,*(undefined8 *)(param_1 + 0x20));
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)in_stack_00000010;
  return;
}



/* Entry: 108436cf8; end: 108436ddb;  */

undefined1 FUN_108436cf8(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010bfa29a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108436ddc; end: 108436def;  */

void FUN_108436ddc(long param_1)

{
  undefined1 in_stack_00000000;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_stack_00000000;
  return;
}



/* Entry: 108436df0; end: 108436f3b;  */

void FUN_108436df0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain();
  lVar5 = param_1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  _objc_release(lVar5);
  lVar5 = 0;
  if (lVar2 == 0) goto LAB_108436f1c;
  lVar1 = param_1;
  FUN_1084365e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bfd8500();
  if ((int)lVar5 == 0) {
LAB_108436ef8:
    lVar5 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c091b80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c1185e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      _objc_release(lVar5);
      lVar5 = 0;
    }
    else {
      lVar3 = lVar1;
      func_0x00010c091b80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c11cb60();
      _objc_release(lVar3);
      _objc_release(lVar5);
      _objc_release(lVar2);
      if ((int)lVar4 != 3) goto LAB_108436ef8;
      lVar2 = lVar1;
      func_0x00010c091b80(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c1185e0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
LAB_108436f1c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 108436f3c; end: 108437063;  */

byte FUN_108436f3c(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  if (param_1 == 0) {
    bVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c08bda0();
    if (((uVar1 - 3 < 0x20) && ((0xa000003fU >> (ulong)((uint)(uVar1 - 3) & 0x1f) & 1) != 0)) ||
       (uVar1 = param_1, FUN_108437064(), (uVar1 & 1) != 0)) {
      bVar2 = 1;
    }
    else {
      puStack_48 = &uStack_50;
      uStack_50 = 0;
      uStack_40 = 0x2020000000;
      uStack_38 = 0;
      uVar1 = param_1;
      func_0x00010bfa29a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bed40();
      _objc_release(uVar1);
      bVar2 = *(byte *)(puStack_48 + 3);
      __Block_object_dispose(&uStack_50,8);
    }
  }
  _objc_release(param_1);
  return bVar2 & 1;
}



/* Entry: 108437064; end: 108437147;  */

undefined1 FUN_108437064(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010bfa29a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108437148; end: 10843715b;  */

void FUN_108437148(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10843715c; end: 10843728b;  */

void FUN_10843715c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1084368d4;
    uStack_40 = 0x1084368e4;
    uStack_38 = 0;
    lVar1 = param_1;
    func_0x00010bfa29a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bed40();
    _objc_release(lVar1);
    uVar2 = puStack_58[5];
    _objc_retain(uVar2);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10843728c; end: 1084372fb;  */

void FUN_10843728c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 in_stack_00000000;
  
  _objc_retain(in_stack_00000000);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = in_stack_00000000;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084372fc; end: 10843740f;  */

void FUN_1084372fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1084368d4;
    uStack_40 = 0x1084368e4;
    uStack_38 = 0;
    lVar1 = param_1;
    func_0x00010bfa29a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bed40();
    _objc_release(lVar1);
    uVar2 = puStack_58[5];
    _objc_retain(uVar2);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108437410; end: 108437447;  */

void FUN_108437410(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 in_stack_00000018;
  
  _objc_retain(in_stack_00000018);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = in_stack_00000018;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108437448; end: 10843754f;  */

void FUN_108437448(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1084368d4;
  uStack_40 = 0x1084368e4;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010bfa29a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108437550; end: 108437587;  */

void FUN_108437550(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108437588; end: 108437a2f;  */

void FUN_108437588(double param_1,undefined **param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  
  _objc_retain();
  ppuVar1 = param_2;
  FUN_1084365e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0ca760();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c0ca7c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar1;
  func_0x00010c0ca5c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar1;
  func_0x00010c0ca660();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar4;
  func_0x00010bf529e0();
  if (ppuVar15 != (undefined **)0x0) {
    ppuVar13 = (undefined **)0x0;
    ppuVar15 = (undefined **)0x0;
    do {
      ppuVar12 = ppuVar4;
      func_0x00010c296de0();
      if ((int)ppuVar12 == 3) {
        ppuVar13 = (undefined **)((long)ppuVar13 + 1);
      }
      ppuVar15 = (undefined **)((long)ppuVar15 + 1);
      ppuVar12 = ppuVar4;
      func_0x00010bf529e0();
    } while (ppuVar15 < ppuVar12);
    puVar14 = (undefined *)0x0;
    if (ppuVar13 == (undefined **)0x0) goto LAB_1084379d8;
    ppuVar15 = ppuVar2;
    func_0x00010bf529e0();
    if (ppuVar13 <= ppuVar15) {
      func_0x00010bf529e0();
      ppuVar13 = param_2;
      FUN_108437448();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar13 != (undefined **)0x0) {
        ppuVar15 = ppuVar13;
      }
      _objc_retain(ppuVar15);
      _objc_release(ppuVar13);
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar4;
      func_0x00010bf529e0();
      if (ppuVar13 != (undefined **)0x0) {
        ppuVar13 = (undefined **)0x0;
        ppuVar12 = (undefined **)0x0;
        do {
          ppuVar7 = ppuVar4;
          func_0x00010c296de0();
          if (((int)ppuVar7 == 3) && (ppuVar7 = ppuVar3, func_0x00010bf529e0(), ppuVar13 < ppuVar7))
          {
            ppuVar8 = ppuVar3;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
            if (ppuVar8 != (undefined **)0x0) {
              ppuVar7 = ppuVar8;
            }
            _objc_retain(ppuVar7);
            _objc_release(ppuVar8);
            ppuVar8 = ppuVar5;
            func_0x00010bf529e0();
            if (ppuVar13 < ppuVar8) {
              ppuVar8 = ppuVar5;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              ppuVar9 = ppuVar8;
              func_0x00010bf94880();
              ppuVar10 = ppuVar8;
              func_0x00010c24d960();
              if ((uint)ppuVar9 <= (uint)ppuVar10) {
                _objc_release(ppuVar8);
                goto LAB_1084377e0;
              }
              puVar14 = PTR_PTR_1126d95e8;
              _objc_alloc();
              ppuVar9 = ppuVar8;
              func_0x00010c24d960();
              param_1 = (double)((ulong)ppuVar9 & 0xffffffff);
              ppuVar9 = ppuVar8;
              func_0x00010bf94880(ppuVar8);
              func_0x00010c04b8c0(param_1,(double)((ulong)ppuVar9 & 0xffffffff));
              _objc_release(ppuVar8);
              if (puVar14 == (undefined *)0x0) goto LAB_1084377e0;
LAB_1084378a4:
              func_0x00010bf94880(puVar14);
              if (ppuVar12 <= (undefined **)(long)param_1) {
                ppuVar12 = (undefined **)(long)param_1;
              }
              ppuVar8 = ppuVar2;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              ppuVar9 = ppuVar8;
              func_0x00010bfe2ee0();
              param_3 = ppuVar8;
              func_0x00010c0b5940();
              func_0x000100c4a928(ppuVar9);
              _objc_retainAutoreleasedReturnValue();
              ppuVar10 = ppuVar9;
              func_0x00010c0b5ac0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar9);
              puVar11 = PTR_PTR_1126d95f0;
              _objc_alloc(PTR_PTR_1126d95f0);
              func_0x00010c05c140();
              func_0x00010befa120(puVar6);
              _objc_release(puVar11);
              _objc_release(ppuVar10);
              _objc_release(ppuVar8);
              _objc_release(puVar14);
            }
            else {
LAB_1084377e0:
              _objc_retain(ppuVar7);
              _objc_retain(ppuVar15);
              ppuVar8 = ppuVar7;
              func_0x00010c08fa60();
              if ((ppuVar8 == (undefined **)0x0) ||
                 (ppuVar8 = ppuVar15, func_0x00010c08fa60(), ppuVar8 <= ppuVar12)) {
                puVar14 = (undefined *)0x0;
              }
              else {
                ppuVar8 = &PTR____CFConstantStringClassReference_110dae4f8;
                func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dae4f8);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c08fa60(ppuVar15);
                ppuVar9 = ppuVar15;
                func_0x00010c11f460();
                if (ppuVar9 == (undefined **)0x7fffffffffffffff) {
                  puVar14 = (undefined *)0x0;
                }
                else {
                  ppuVar12 = (undefined **)((long)ppuVar9 + (long)param_3);
                  puVar14 = PTR_PTR_1126d95e8;
                  _objc_alloc();
                  param_1 = (double)((ulong)ppuVar9 & 0xffffffff);
                  func_0x00010c04b8c0(param_1,(double)((ulong)ppuVar12 & 0xffffffff));
                }
                _objc_release(ppuVar8);
              }
              _objc_release(ppuVar15);
              _objc_release(ppuVar7);
              if (puVar14 != (undefined *)0x0) goto LAB_1084378a4;
            }
            _objc_release(ppuVar7);
          }
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
          ppuVar7 = ppuVar4;
          func_0x00010bf529e0();
        } while (ppuVar13 < ppuVar7);
      }
      puVar11 = puVar6;
      func_0x00010bf529e0();
      puVar14 = (undefined *)0x0;
      if (puVar11 != (undefined *)0x0) {
        puVar14 = puVar6;
      }
      _objc_retain(puVar14);
      _objc_release(puVar6);
      _objc_release(ppuVar15);
      goto LAB_1084379d8;
    }
  }
  puVar14 = (undefined *)0x0;
LAB_1084379d8:
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 108437a30; end: 108437b13;  */

undefined1 FUN_108437a30(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010bfa29a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108437b14; end: 108437b27;  */

void FUN_108437b14(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108437b28; end: 108437c2f;  */

void FUN_108437b28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1084368d4;
  uStack_40 = 0x1084368e4;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010bfa29a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108437c30; end: 108437c67;  */

void FUN_108437c30(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x6;
  long lVar2;
  
  _objc_retain(in_x6);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = in_x6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108437c68; end: 108437e6b;  */

bool FUN_108437c68(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_1084365e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c1344a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60(lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 108437e6c; end: 108437e87;  */

void FUN_108437e6c(long param_1)

{
  long in_stack_00000008;
  
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_stack_00000008 == 1;
  return;
}



/* Entry: 108437e88; end: 108437f63;  */

void FUN_108437e88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108437f64;
  uStack_30 = 0x108437f74;
  uStack_28 = 0;
  func_0x00010c0c12a0(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108437f64; end: 108437f7b;  */

void FUN_108437f64(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108437f7c; end: 108437ffb;  */

void FUN_108437f7c(long param_1,undefined8 param_2)

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



/* Entry: 108437ffc; end: 108438003; -[SCPollServices pollsDataCreator] */

undefined8 FUN_108437ffc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108438004; end: 10843800b; -[SCPollServices pollsCreationManager] */

undefined8 FUN_108438004(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10843800c; end: 108438013; -[SCPollServices pollsVotingService] */

undefined8 FUN_10843800c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108438014; end: 10843801b; -[SCPollServices pollsComposerGRPCService] */

undefined8 FUN_108438014(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10843801c; end: 108438063; -[SCPollServices .cxx_destruct] */

void FUN_10843801c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


