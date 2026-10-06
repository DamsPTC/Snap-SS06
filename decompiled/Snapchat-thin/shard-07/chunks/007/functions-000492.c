/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10594b8d4; end: 10594b9d7;  */

void FUN_10594b8d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126c0688;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf50280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe2ee0();
  uVar4 = uVar2;
  func_0x00010c0b5940(uVar2);
  func_0x000100c4a928(uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0cb5a0(param_2);
  _objc_release(param_2);
  func_0x00010c0df880(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0051e0(puVar1);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10594b9d8; end: 10594ba8f; +[SCFideliusUtils assistedRetryInfosToArroyoRetryInfos:senderUserId:friendUserId:] */

void FUN_10594b9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10594ba90;
  puStack_48 = &UNK_1108c1358;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x000100504554(param_3,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10594ba90; end: 10594bd8f;  */

void FUN_10594ba90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  puVar1 = PTR_PTR_1126c0690;
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010c149460();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c0faa60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c296c80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c086b40(param_2);
  func_0x00010c0df880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044740(puVar1);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar9 = PTR_PTR_1126c0688;
  _objc_alloc(PTR_PTR_1126c0688);
  uVar2 = param_2;
  func_0x00010c0cb5a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe2ee0();
  uVar5 = uVar3;
  func_0x00010c0b5940(uVar3);
  func_0x000100c4a928(uVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = param_2;
  func_0x00010c0cb5a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cb5a0();
  func_0x00010c0df7c0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0051e0(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar10 = PTR_PTR_1126c0698;
  _objc_alloc(PTR_PTR_1126c0698);
  puVar8 = PTR_PTR_1126c0388;
  uVar2 = param_2;
  func_0x00010c11a480(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bef8420(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar8;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff40c0(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(uVar2);
  _objc_release(puVar9);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10594bd90; end: 10594bf1f; +[SCFideliusUtils makeMeshInitializeDeviceKeyRequest:hashedPublicKeys:deviceID:grpcFideliusIdentityService:circumstanceEngine:successCallback:failureCallback:] */

void FUN_10594bd90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  FUN_105954430(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010594735c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_7;
  func_0x00010c0b5020(param_7);
  _objc_release(param_7);
  uVar3 = param_6;
  func_0x00010c269d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar4 = 0;
  FUN_105954300(0,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010c064860(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_8);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_9);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10594bf20; end: 10594bf43;  */

void FUN_10594bf20(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0x20;
  if (param_2 != 0 && param_3 == 0) {
    lVar1 = 0x28;
    param_3 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010594bf40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + lVar1) + 0x10))(*(long *)(param_1 + lVar1),param_3);
  return;
}



/* Entry: 10594bf44; end: 10594c28f; +[SCFideliusUtils friendDeviceInfoToMetadataMap:] */

void FUN_10594bf44(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined *unaff_x22;
  undefined **ppuVar12;
  undefined **unaff_x23;
  undefined **ppuVar13;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  long lVar14;
  undefined **unaff_x28;
  undefined *puStack_4d8;
  undefined8 uStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4c0;
  undefined1 *puStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  undefined **ppuStack_488;
  undefined **ppuStack_480;
  undefined **ppuStack_478;
  undefined **ppuStack_470;
  undefined **ppuStack_468;
  undefined1 ***pppuStack_460;
  code *pcStack_458;
  undefined *puStack_450;
  long lStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined1 auStack_410 [128];
  long lStack_390;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined1 **ppuStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [128];
  long lStack_260;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined *puStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
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
  undefined *apuStack_170 [32];
  long lStack_70;
  
  ppuVar11 = &puStack_1f0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  ppuVar2 = param_3;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x27 = (undefined **)*plStack_1a0;
    unaff_x28 = &PTR_PTR_1126c0000;
    do {
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined **)*plStack_1a0 != unaff_x27) {
          _objc_enumerationMutation(param_3);
        }
        ppuVar13 = *(undefined ***)(lStack_1a8 + (long)unaff_x26 * 8);
        unaff_x22 = PTR_PTR_1126c03f8;
        _objc_alloc();
        ppuVar3 = ppuVar13;
        func_0x00010c26cfc0(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar13;
        func_0x00010c298be0(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b4ca0();
        func_0x00010c0326c0();
        _objc_release(ppuVar4);
        _objc_release(ppuVar3);
        ppuVar3 = ppuVar13;
        func_0x00010c2923e0(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = ppuVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(ppuVar3);
        if (unaff_x25 == (undefined **)0x0) {
          unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf0a100();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(ppuVar1);
          unaff_x23 = ppuVar13;
        }
        else {
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = ppuVar1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          unaff_x24 = ppuVar13;
        }
        _objc_release(unaff_x23);
        _objc_release(unaff_x24);
        _objc_release(unaff_x22);
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar2 != unaff_x26);
      ppuVar2 = param_3;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(param_3);
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_1e8 = 0;
  puStack_1f0 = (undefined *)0x0;
  uStack_1d8 = 0;
  puStack_1e0 = (undefined8 *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  _objc_retain(ppuVar1);
  ppuVar2 = apuStack_170;
  ppuVar4 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_1e0;
    unaff_x27 = &PTR_PTR_1126c0000;
    do {
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_1e0 != unaff_x26) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x23 = *(undefined ***)(lStack_1e8 + (long)unaff_x28 * 8);
        unaff_x24 = (undefined **)PTR_PTR_1126c04c0;
        _objc_alloc();
        unaff_x25 = ppuVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c05b060();
        _objc_release(unaff_x25);
        func_0x00010c1d0640(ppuVar3);
        _objc_release(unaff_x24);
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar4 != unaff_x28);
      ppuVar2 = apuStack_170;
      ppuVar4 = ppuVar1;
      ppuVar11 = &puStack_1f0;
      func_0x00010bf52a60();
      unaff_x22 = (undefined *)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuVar4 = &puStack_320;
    pcStack_1f8 = FUN_10594c290;
    lStack_260 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_250 = unaff_x28;
    ppuStack_248 = unaff_x27;
    ppuStack_240 = unaff_x26;
    ppuStack_238 = unaff_x25;
    ppuStack_230 = unaff_x24;
    ppuStack_228 = unaff_x23;
    puStack_220 = unaff_x22;
    ppuStack_218 = ppuVar3;
    ppuStack_210 = ppuVar1;
    ppuStack_208 = param_3;
    puStack_200 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar11);
    _objc_retain(ppuVar2);
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_318 = 0;
    puStack_320 = (undefined *)0x0;
    uStack_308 = 0;
    plStack_310 = (long *)0x0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    _objc_retain(ppuVar11);
    puVar9 = auStack_2e0;
    uVar10 = 0x10;
    ppuVar3 = ppuVar11;
    func_0x00010bf52a60();
    if (ppuVar3 != (undefined **)0x0) {
      unaff_x27 = (undefined **)*plStack_310;
      do {
        unaff_x28 = (undefined **)0x0;
        do {
          if ((undefined **)*plStack_310 != unaff_x27) {
            _objc_enumerationMutation(ppuVar11);
          }
          unaff_x23 = *(undefined ***)(lStack_318 + (long)unaff_x28 * 8);
          unaff_x24 = ppuVar11;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = ppuVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010c071b00();
          _objc_release(unaff_x25);
          if (((ulong)unaff_x26 & 1) == 0) {
            func_0x00010c1d0640(ppuVar1);
          }
          _objc_release(unaff_x24);
          unaff_x28 = (undefined **)((long)unaff_x28 + 1);
        } while (ppuVar3 != unaff_x28);
        puVar9 = auStack_2e0;
        uVar10 = 0x10;
        ppuVar3 = ppuVar11;
        ppuVar4 = &puStack_320;
        func_0x00010bf52a60();
      } while (ppuVar3 != (undefined **)0x0);
    }
    _objc_release(ppuVar11);
    ppuVar3 = ppuVar1;
    func_0x00010bf51e00();
    _objc_release(ppuVar1);
    _objc_release(ppuVar2);
    _objc_release(ppuVar11);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_260) {
      ___stack_chk_fail();
      ppuVar8 = &puStack_450;
      pcStack_328 = FUN_10594c438;
      lStack_390 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar7 = ppuVar4;
      ppuStack_380 = unaff_x28;
      ppuStack_378 = unaff_x27;
      ppuStack_370 = unaff_x26;
      ppuStack_368 = unaff_x25;
      ppuStack_360 = unaff_x24;
      ppuStack_358 = unaff_x23;
      ppuStack_350 = ppuVar3;
      ppuStack_348 = ppuVar1;
      ppuStack_340 = ppuVar2;
      ppuStack_338 = ppuVar11;
      ppuStack_330 = &puStack_200;
      _objc_retain(ppuVar4);
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      ppuVar13 = (undefined **)PTR____NSArray0__struct_11034ab48;
      ppuVar12 = ppuVar3;
      if (ppuVar4 != (undefined **)0x0) {
        func_0x00010bf529e0(ppuVar4);
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        lStack_448 = 0;
        puStack_450 = (undefined *)0x0;
        uStack_438 = 0;
        plStack_440 = (long *)0x0;
        uStack_428 = 0;
        uStack_430 = 0;
        uStack_418 = 0;
        uStack_420 = 0;
        _objc_retain(ppuVar4);
        puVar9 = auStack_410;
        uVar10 = 0x10;
        ppuVar2 = ppuVar4;
        func_0x00010bf52a60();
        if (ppuVar2 != (undefined **)0x0) {
          lVar14 = *plStack_440;
          do {
            ppuVar11 = (undefined **)0x0;
            do {
              if (*plStack_440 != lVar14) {
                _objc_enumerationMutation(ppuVar4);
              }
              ppuVar3 = (undefined **)PTR_PTR_1126c0388;
              unaff_x23 = *(undefined ***)(lStack_448 + (long)ppuVar11 * 8);
              unaff_x24 = unaff_x23;
              func_0x00010c26cfc0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12c580();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x24);
              if (ppuVar3 != (undefined **)0x0) {
                unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
                _objc_alloc();
                func_0x00010bff6b20();
                unaff_x25 = (undefined **)PTR_PTR_1126c05b0;
                _objc_alloc();
                unaff_x26 = unaff_x23;
                func_0x00010c0d4ee0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c298be0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c067ec0();
                func_0x00010c03bc40();
                _objc_release(unaff_x23);
                _objc_release(unaff_x26);
                func_0x00010befa120(ppuVar1);
                _objc_release(unaff_x25);
                _objc_release(unaff_x24);
              }
              _objc_release(ppuVar3);
              ppuVar11 = (undefined **)((long)ppuVar11 + 1);
            } while (ppuVar2 != ppuVar11);
            puVar9 = auStack_410;
            uVar10 = 0x10;
            ppuVar2 = ppuVar4;
            ppuVar8 = &puStack_450;
            func_0x00010bf52a60();
          } while (ppuVar2 != (undefined **)0x0);
        }
        _objc_release(ppuVar4);
        ppuVar13 = ppuVar1;
        func_0x00010bf51e00();
        _objc_release(ppuVar1);
        ppuVar7 = ppuVar8;
        ppuVar2 = ppuVar1;
        ppuVar12 = ppuVar3;
      }
      ppuVar3 = ppuVar13;
      _objc_release(ppuVar4);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_390) {
        ___stack_chk_fail();
        pcStack_458 = FUN_10594c678;
        ppuStack_4a0 = unaff_x26;
        ppuStack_498 = unaff_x25;
        ppuStack_490 = unaff_x24;
        ppuStack_488 = unaff_x23;
        ppuStack_480 = ppuVar12;
        ppuStack_478 = ppuVar3;
        ppuStack_470 = ppuVar2;
        ppuStack_468 = ppuVar11;
        pppuStack_460 = &ppuStack_330;
        _objc_retain(puVar9);
        _objc_retain(uVar10);
        _objc_retain(param_6);
        puVar5 = PTR_PTR_1126c0388;
        _objc_retain(ppuVar7);
        ppuVar11 = ppuVar7;
        func_0x00010c2923e0(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc2320(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar11);
        ppuVar11 = ppuVar7;
        func_0x00010bfb8020(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        puStack_4d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_4d0 = 0xc2000000;
        pcStack_4c8 = FUN_10594c820;
        puStack_4c0 = &UNK_1108c13b8;
        puStack_4b8 = puVar9;
        uStack_4b0 = uVar10;
        uStack_4a8 = param_6;
        _objc_retain(param_6);
        _objc_retain(uVar10);
        _objc_retain(puVar9);
        ppuVar1 = ppuVar11;
        func_0x000100504554(ppuVar11,&puStack_4d8);
        _objc_release(ppuVar11);
        puVar6 = PTR_PTR_1126c05a8;
        _objc_alloc(PTR_PTR_1126c05a8);
        func_0x00010c00f280();
        ppuVar3 = (undefined **)PTR_PTR_1126c05c8;
        _objc_alloc(PTR_PTR_1126c05c8);
        func_0x00010c05b280();
        _objc_release(puVar6);
        _objc_release(ppuVar1);
        _objc_release(uStack_4a8);
        _objc_release(uStack_4b0);
        _objc_release(puStack_4b8);
        _objc_release(param_6);
        _objc_release(uVar10);
        _objc_release(puVar9);
        _objc_release(puVar5);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10594c290; end: 10594c437; +[SCFideliusUtils diffTargetFideliusFriendMetadataMap:currentFriendMetadataMap:] */

void FUN_10594c290(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long unaff_x27;
  long lVar10;
  undefined *unaff_x28;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
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
  
  puVar5 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar7 = auStack_f0;
  uVar8 = 0x10;
  puVar2 = param_3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = (undefined *)0x0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x23 = *(undefined **)(lStack_128 + (long)unaff_x28 * 8);
        unaff_x24 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x25;
        func_0x00010c071b00();
        _objc_release(unaff_x25);
        if (((ulong)unaff_x26 & 1) == 0) {
          func_0x00010c1d0640(puVar1);
        }
        _objc_release(unaff_x24);
        unaff_x28 = unaff_x28 + 1;
      } while (puVar2 != unaff_x28);
      puVar7 = auStack_f0;
      uVar8 = 0x10;
      puVar2 = param_3;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar6 = &uStack_260;
    pcStack_138 = FUN_10594c438;
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = (undefined *)puVar5;
    puStack_190 = unaff_x28;
    lStack_188 = unaff_x27;
    puStack_180 = unaff_x26;
    puStack_178 = unaff_x25;
    puStack_170 = unaff_x24;
    puStack_168 = unaff_x23;
    puStack_160 = puVar2;
    puStack_158 = puVar1;
    puStack_150 = param_4;
    puStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar5);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar3 = PTR____NSArray0__struct_11034ab48;
    puVar9 = puVar2;
    if (puVar5 != (undefined8 *)0x0) {
      func_0x00010bf529e0(puVar5);
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      lStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      plStack_250 = (long *)0x0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      _objc_retain(puVar5);
      puVar7 = auStack_220;
      uVar8 = 0x10;
      puVar3 = (undefined *)puVar5;
      func_0x00010bf52a60();
      if (puVar3 != (undefined *)0x0) {
        lVar10 = *plStack_250;
        do {
          param_3 = (undefined *)0x0;
          do {
            if (*plStack_250 != lVar10) {
              _objc_enumerationMutation(puVar5);
            }
            puVar2 = PTR_PTR_1126c0388;
            unaff_x23 = *(undefined **)(lStack_258 + (long)param_3 * 8);
            unaff_x24 = unaff_x23;
            func_0x00010c26cfc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12c580();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x24);
            if (puVar2 != (undefined *)0x0) {
              unaff_x24 = PTR__OBJC_CLASS___NSData_1126ae778;
              _objc_alloc();
              func_0x00010bff6b20();
              unaff_x25 = PTR_PTR_1126c05b0;
              _objc_alloc();
              unaff_x26 = unaff_x23;
              func_0x00010c0d4ee0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c298be0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c067ec0();
              func_0x00010c03bc40();
              _objc_release(unaff_x23);
              _objc_release(unaff_x26);
              func_0x00010befa120(puVar1);
              _objc_release(unaff_x25);
              _objc_release(unaff_x24);
            }
            _objc_release(puVar2);
            param_3 = param_3 + 1;
          } while (puVar3 != param_3);
          puVar7 = auStack_220;
          uVar8 = 0x10;
          puVar3 = (undefined *)puVar5;
          puVar6 = &uStack_260;
          func_0x00010bf52a60();
        } while (puVar3 != (undefined *)0x0);
      }
      _objc_release(puVar5);
      puVar3 = puVar1;
      func_0x00010bf51e00();
      _objc_release(puVar1);
      puVar4 = (undefined *)puVar6;
      param_4 = puVar1;
      puVar9 = puVar2;
    }
    puVar2 = puVar3;
    _objc_release(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
      ___stack_chk_fail();
      pcStack_268 = FUN_10594c678;
      puStack_2b0 = unaff_x26;
      puStack_2a8 = unaff_x25;
      puStack_2a0 = unaff_x24;
      puStack_298 = unaff_x23;
      puStack_290 = puVar9;
      puStack_288 = puVar2;
      puStack_280 = param_4;
      puStack_278 = param_3;
      ppuStack_270 = &puStack_140;
      _objc_retain(puVar7);
      _objc_retain(uVar8);
      _objc_retain(param_6);
      puVar1 = PTR_PTR_1126c0388;
      _objc_retain(puVar4);
      puVar2 = puVar4;
      func_0x00010c2923e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc2320(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = puVar4;
      func_0x00010bfb8020(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puStack_2e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2e0 = 0xc2000000;
      pcStack_2d8 = FUN_10594c820;
      puStack_2d0 = &UNK_1108c13b8;
      puStack_2c8 = puVar7;
      uStack_2c0 = uVar8;
      uStack_2b8 = param_6;
      _objc_retain(param_6);
      _objc_retain(uVar8);
      _objc_retain(puVar7);
      puVar3 = puVar2;
      func_0x000100504554(puVar2,&puStack_2e8);
      _objc_release(puVar2);
      puVar4 = PTR_PTR_1126c05a8;
      _objc_alloc(PTR_PTR_1126c05a8);
      func_0x00010c00f280();
      puVar2 = PTR_PTR_1126c05c8;
      _objc_alloc(PTR_PTR_1126c05c8);
      func_0x00010c05b280();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(uStack_2b8);
      _objc_release(uStack_2c0);
      _objc_release(puStack_2c8);
      _objc_release(param_6);
      _objc_release(uVar8);
      _objc_release(puVar7);
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10594c438; end: 10594c677; +[SCFideliusUtils extractKeysFromDevices:] */

void FUN_10594c438(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *unaff_x19;
  undefined *unaff_x20;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long lVar7;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined1 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined1 *puStack_148;
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
  puVar2 = param_3;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined1 *)0x0) {
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0();
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
    param_4 = auStack_f0;
    param_5 = 0x10;
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      lVar7 = *plStack_120;
      do {
        unaff_x19 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x22 = PTR_PTR_1126c0388;
          unaff_x23 = *(undefined **)(lStack_128 + (long)unaff_x19 * 8);
          unaff_x24 = unaff_x23;
          func_0x00010c26cfc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12c580();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x24);
          if (unaff_x22 != (undefined *)0x0) {
            unaff_x24 = PTR__OBJC_CLASS___NSData_1126ae778;
            _objc_alloc();
            func_0x00010bff6b20();
            unaff_x25 = PTR_PTR_1126c05b0;
            _objc_alloc();
            unaff_x26 = unaff_x23;
            func_0x00010c0d4ee0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c298be0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067ec0();
            func_0x00010c03bc40();
            _objc_release(unaff_x23);
            _objc_release(unaff_x26);
            func_0x00010befa120(puVar1);
            _objc_release(unaff_x25);
            _objc_release(unaff_x24);
          }
          _objc_release(unaff_x22);
          unaff_x19 = unaff_x19 + 1;
        } while (puVar2 != unaff_x19);
        param_4 = auStack_f0;
        param_5 = 0x10;
        puVar2 = param_3;
        puVar6 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    puVar3 = puVar1;
    func_0x00010bf51e00();
    _objc_release(puVar1);
    puVar2 = (undefined1 *)puVar6;
    unaff_x20 = puVar1;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_10594c678;
    puStack_180 = unaff_x26;
    puStack_178 = unaff_x25;
    puStack_170 = unaff_x24;
    puStack_168 = unaff_x23;
    puStack_160 = unaff_x22;
    puStack_158 = puVar3;
    puStack_150 = unaff_x20;
    puStack_148 = unaff_x19;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    puVar1 = PTR_PTR_1126c0388;
    _objc_retain(puVar2);
    puVar4 = puVar2;
    func_0x00010c2923e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2320(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010bfb8020(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b0 = 0xc2000000;
    pcStack_1a8 = FUN_10594c820;
    puStack_1a0 = &UNK_1108c13b8;
    puStack_198 = param_4;
    uStack_190 = param_5;
    uStack_188 = param_6;
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_4);
    puVar2 = puVar4;
    func_0x000100504554(puVar4,&puStack_1b8);
    _objc_release(puVar4);
    puVar5 = PTR_PTR_1126c05a8;
    _objc_alloc(PTR_PTR_1126c05a8);
    func_0x00010c00f280();
    puVar3 = PTR_PTR_1126c05c8;
    _objc_alloc(PTR_PTR_1126c05c8);
    func_0x00010c05b280();
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(uStack_188);
    _objc_release(uStack_190);
    _objc_release(puStack_198);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10594c678; end: 10594c81f; +[SCFideliusUtils friendKeysToParticipantKey:userIdentity:logger:source:] */

void FUN_10594c678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126c0388;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc2320(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfb8020(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10594c820;
  puStack_70 = &UNK_1108c13b8;
  uStack_68 = param_4;
  uStack_60 = param_5;
  uStack_58 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar3 = uVar1;
  func_0x000100504554(uVar1,&puStack_88);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126c05a8;
  _objc_alloc(PTR_PTR_1126c05a8);
  func_0x00010c00f280();
  puVar5 = PTR_PTR_1126c05c8;
  _objc_alloc(PTR_PTR_1126c05c8);
  func_0x00010c05b280();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10594c820; end: 10594c9eb;  */

void FUN_10594c820(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf19880(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c11a480(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c22bf60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126c05b0;
  _objc_alloc(PTR_PTR_1126c05b0);
  uVar2 = param_2;
  func_0x00010c11a480(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298be0(param_2);
  func_0x00010c03bc40(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10594c9ec; end: 10594ca83; -[SCOrderedDictionary init] */

undefined1 * FUN_10594c9ec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eafd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18d4a0(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
    func_0x00010c1b6f60(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10594ca84; end: 10594cac7; -[SCOrderedDictionary initWithMaxSize:] */

long FUN_10594ca84(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfee200();
  if (param_1 != 0) {
    func_0x00010c1c36e0(param_1,param_2,param_3);
    func_0x00010c200c60(param_1,param_2,1);
  }
  return param_1;
}



/* Entry: 10594cac8; end: 10594cb67; -[SCOrderedDictionary objectForKeyedSubscript:] */

void FUN_10594cac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_1;
  func_0x00010bf71de0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10594cb68; end: 10594ce0f; -[SCOrderedDictionary setObject:forKeyedSubscript:] */

void FUN_10594cb68(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_1;
  func_0x00010c086dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c086dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf71de0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c086dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066b00();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c2322e0();
  if ((int)uVar1 == 0) {
    bVar6 = false;
  }
  else {
    uVar1 = param_1;
    func_0x00010c086dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf529e0();
    uVar5 = param_1;
    func_0x00010c0c2e00();
    bVar6 = uVar5 < uVar4;
    _objc_release(uVar1);
  }
  if ((uVar2 & 1) == 0) {
    func_0x00010c0e26e0(param_1,param_2,bVar6,uVar3);
  }
  if (bVar6 != false) {
    while (uVar1 = param_1, func_0x00010c2322e0(), (int)uVar1 != 0) {
      uVar1 = param_1;
      func_0x00010c086dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf529e0();
      uVar3 = param_1;
      func_0x00010c0c2e00();
      _objc_release(uVar1);
      if (uVar2 <= uVar3) break;
      uVar1 = param_1;
      func_0x00010c086dc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010bf71de0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010c086dc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360();
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010bf71de0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0();
      _objc_release(uVar1);
      func_0x00010c0e5d20(param_1,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10594ce10; end: 10594ce13; -[SCOrderedDictionary onAdd:countBefore:] */

void FUN_10594ce10(void)

{
  return;
}



/* Entry: 10594ce14; end: 10594ce17; -[SCOrderedDictionary onPurge:] */

void FUN_10594ce14(void)

{
  return;
}



/* Entry: 10594ce18; end: 10594cec7; -[SCOrderedDictionary removeObjectForKey:] */

void FUN_10594ce18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_1;
  func_0x00010bf71de0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c086dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10594cec8; end: 10594d0cf; -[SCOrderedDictionary allOrderedValues] */

void FUN_10594cec8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter(param_1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar1 = param_1;
  func_0x00010c086dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar1 = param_1;
  func_0x00010c086dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        lVar4 = param_1;
        func_0x00010bf71de0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != 0) {
          lVar4 = param_1;
          func_0x00010bf71de0(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3,param_2,lVar5);
          _objc_release(lVar5);
          _objc_release(lVar4);
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      puVar6 = &uStack_130;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_sync_exit(param_1);
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume(lVar1);
  _objc_retain(puVar6);
  _objc_retain(lVar1);
  _objc_sync_enter(lVar1);
  lVar2 = lVar1;
  func_0x00010bf71de0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(puVar6,param_2,lVar2,&PTR____CFConstantStringClassReference_110e11238);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c086dc0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(puVar6,param_2,lVar2,&PTR____CFConstantStringClassReference_110e11258);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c0c2e00(lVar1);
  func_0x00010bf92fc0(puVar6,param_2,lVar2,&PTR____CFConstantStringClassReference_110e0faf8);
  lVar2 = lVar1;
  func_0x00010c2322e0(lVar1);
  func_0x00010bf92da0(puVar6,param_2,lVar2,&PTR____CFConstantStringClassReference_110e11278);
  _objc_sync_exit(lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 10594d0d0; end: 10594d1cf; -[SCOrderedDictionary encodeWithCoder:] */

void FUN_10594d0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_1;
  func_0x00010bf71de0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e11238);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c086dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e11258);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0c2e00(param_1);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e0faf8);
  uVar1 = param_1;
  func_0x00010c2322e0(param_1);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e11278);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10594d1d0; end: 10594d1d7; -[SCOrderedDictionary shouldPrune] */

undefined1 FUN_10594d1d0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10594d1d8; end: 10594d207; -[SCOrderedDictionary .cxx_destruct] */

void FUN_10594d1d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10594d208; end: 10594d21f;  */

void FUN_10594d208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010594d21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),0);
  return;
}



/* Entry: 10594d220; end: 10594d36b; -[SCFideliusUserDatabaseFetcher onFideliusStatusFailed] */

void FUN_10594d220(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar5 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        lVar2 = *(long *)(lStack_108 + lVar8 * 8);
        (**(code **)(lVar2 + 0x10))(lVar2,0,0);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar5;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar5);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
  lVar1 = param_1 + 0x20;
  __ZNSt3__15mutex6unlockEv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    __ZNSt3__15mutex6unlockEv(param_1 + 0x20);
    __Unwind_Resume();
    _objc_retain(puVar4);
    __ZNSt3__15mutex4lockEv(lVar1 + 0x20);
    if (*(char *)(lVar1 + 0x10) == '\x01') {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)((long)puVar4 + 0x10))(puVar4,0,puVar3);
    }
    else {
      lVar5 = *(long *)(lVar1 + 8);
      puVar3 = (undefined *)puVar4;
      if (lVar5 == 0) {
        uVar7 = *(undefined8 *)(lVar1 + 0x18);
        _objc_retainBlock(puVar4);
        func_0x00010befa120(uVar7);
      }
      else {
        _objc_retain(puVar4);
        func_0x00010c0f7fc0(lVar5);
      }
    }
    _objc_release(puVar3);
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x20);
    _objc_release(puVar4);
    return;
  }
  return;
}



/* Entry: 10594d36c; end: 10594d4cb; -[SCFideliusUserDatabaseFetcher fetchUserDatabase:] */

void FUN_10594d36c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,0,puVar1);
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    puVar1 = param_3;
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      _objc_retainBlock(param_3);
      func_0x00010befa120(uVar3);
    }
    else {
      _objc_retain(param_3);
      func_0x00010c0f7fc0(lVar2);
    }
  }
  _objc_release(puVar1);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x20);
  _objc_release(param_3);
  return;
}



/* Entry: 10594d4cc; end: 10594d4e3;  */

void FUN_10594d4cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010594d4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),0);
  return;
}



/* Entry: 10594d4e4; end: 10594d69f; -[SCFideliusUserDatabaseFetcher fetchUserDatabaseSync] */

void FUN_10594d4e4(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_a0;
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10594d6a0;
  uStack_50 = 0x10594d6b0;
  uStack_48 = 0;
  uVar1 = 0;
  _dispatch_semaphore_create();
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar4 = *(long *)(param_1 + 8);
    if (lVar4 == 0) {
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_10594d6b8;
      puStack_88 = &UNK_1108c13e8;
      puStack_78 = &uStack_70;
      _objc_retain(uVar1);
      uStack_80 = uVar1;
      _objc_retainBlock(&puStack_a0);
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      puVar3 = (undefined1 *)ppuVar2;
      _objc_retainBlock();
      func_0x00010befa120(uVar5);
      _objc_release(puVar3);
      _objc_release(ppuVar2);
      _objc_release(uStack_80);
      __ZNSt3__15mutex6unlockEv(param_1 + 0x20);
      _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
      __ZNSt3__15mutex4lockEv(param_1 + 0x20);
      if ((*(byte *)(param_1 + 0x10) & 1) != 0) goto LAB_10594d548;
      lVar4 = puStack_68[5];
    }
    _objc_retain(lVar4);
  }
  else {
LAB_10594d548:
    lVar4 = 0;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x20);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10594d6a0; end: 10594d6b7;  */

void FUN_10594d6a0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10594d6b8; end: 10594d713;  */

void FUN_10594d6b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10594d714; end: 10594d743; -[SCFideliusUserDatabaseFetcher dataInvalidated] */

void FUN_10594d714(long param_1)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x10) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x20);
  return;
}



/* Entry: 10594d744; end: 10594d76f; -[SCFideliusUserDatabaseFetcher clearInvalidation] */

void FUN_10594d744(long param_1)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x20);
  return;
}



/* Entry: 10594d770; end: 10594d7a7; -[SCFideliusUserDatabaseFetcher .cxx_destruct] */

void FUN_10594d770(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10594d7a8; end: 10594d857; -[SCFideliusEncryptedBackupRecord initWithCoder:] */

undefined1 * FUN_10594d7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eafe8;
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10594d858; end: 10594d903; -[SCFideliusEncryptedBackupRecord initWithHashedBeta:encryptedIdentity:] */

undefined1 *
FUN_10594d858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eafe8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10594d904; end: 10594d927; -[SCFideliusEncryptedBackupRecord copyWithZone:] */

undefined8 FUN_10594d904(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10594d928; end: 10594d987; -[SCFideliusEncryptedBackupRecord encodeWithCoder:] */

void FUN_10594d928(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e112b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e112d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10594d988; end: 10594d9fb; -[SCFideliusEncryptedBackupRecord hash] */

undefined8 * FUN_10594d988(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10594da7c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10594da88;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10594da88;
        }
        goto LAB_10594da7c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10594da88:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10594d9fc; end: 10594daa3; -[SCFideliusEncryptedBackupRecord isEqual:] */

long FUN_10594d9fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10594da7c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10594da88;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10594da88;
        }
        goto LAB_10594da7c;
      }
    }
    lVar3 = 0;
  }
LAB_10594da88:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10594daa4; end: 10594daab; -[SCFideliusEncryptedBackupRecord hashedBeta] */

undefined8 FUN_10594daa4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10594daac; end: 10594dab3; -[SCFideliusEncryptedBackupRecord encryptedIdentity] */

undefined8 FUN_10594daac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10594dab4; end: 10594dae3; -[SCFideliusEncryptedBackupRecord .cxx_destruct] */

void FUN_10594dab4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10594dae4; end: 10594dbf7; -[SCFideliusMessageEncryptionKeyRecord initWithConversationId:messageId:encryptionKey:timestamp:purgePolicy:] */

undefined1 *
FUN_10594dae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126eaff0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10594dbf8; end: 10594dc1b; -[SCFideliusMessageEncryptionKeyRecord copyWithZone:] */

undefined8 FUN_10594dbf8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10594dc1c; end: 10594dcb3; -[SCFideliusMessageEncryptionKeyRecord hash] */

undefined8 * FUN_10594dc1c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10594dd74:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10594dd80;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10594dd80;
            }
            goto LAB_10594dd74;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10594dd80:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10594dcb4; end: 10594dd9b; -[SCFideliusMessageEncryptionKeyRecord isEqual:] */

long FUN_10594dcb4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10594dd74:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10594dd80;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10594dd80;
            }
            goto LAB_10594dd74;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10594dd80:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10594dd9c; end: 10594dda3; -[SCFideliusMessageEncryptionKeyRecord conversationId] */

undefined8 FUN_10594dd9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10594dda4; end: 10594ddab; -[SCFideliusMessageEncryptionKeyRecord messageId] */

undefined8 FUN_10594dda4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10594ddac; end: 10594ddb3; -[SCFideliusMessageEncryptionKeyRecord encryptionKey] */

undefined8 FUN_10594ddac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10594ddb4; end: 10594ddbb; -[SCFideliusMessageEncryptionKeyRecord timestamp] */

undefined8 FUN_10594ddb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10594ddbc; end: 10594ddc3; -[SCFideliusMessageEncryptionKeyRecord purgePolicy] */

undefined8 FUN_10594ddbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10594ddc4; end: 10594de0b; -[SCFideliusMessageEncryptionKeyRecord .cxx_destruct] */

void FUN_10594ddc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10594de0c; end: 10594de93; -[SCFideliusArroyoId initWithConversationId:messageId:] */

undefined1 *
FUN_10594de0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126eaff8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10594de94; end: 10594deb7; -[SCFideliusArroyoId copyWithZone:] */

undefined8 FUN_10594de94(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10594deb8; end: 10594df2b; -[SCFideliusArroyoId hash] */

undefined8 * FUN_10594deb8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10594dfb0;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_10594dfb0;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10594dfb0;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_10594dfb0:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10594df2c; end: 10594dfcb; -[SCFideliusArroyoId isEqual:] */

long FUN_10594df2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10594dfb0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10594dfb0;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10594dfb0;
    }
  }
  lVar3 = 1;
LAB_10594dfb0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10594dfcc; end: 10594dfd3; -[SCFideliusArroyoId conversationId] */

undefined8 FUN_10594dfcc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10594dfd4; end: 10594dfdb; -[SCFideliusArroyoId messageId] */

undefined8 FUN_10594dfd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10594dfdc; end: 10594dfe7; -[SCFideliusArroyoId .cxx_destruct] */

void FUN_10594dfdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10594dfe8; end: 10594e053; +[SCFideliusRetryId arroyoIdWithArroyoId:] */

void FUN_10594dfe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c0600;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10594e054; end: 10594e0a7; +[SCFideliusRetryId snapIdWithSnapId:] */

void FUN_10594e054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c0600;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10594e0a8; end: 10594e0cb; -[SCFideliusRetryId copyWithZone:] */

undefined8 FUN_10594e0a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10594e0cc; end: 10594e137; -[SCFideliusRetryId hash] */

void FUN_10594e0cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar3 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_20 = uVar2;
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126eb000;
  puStack_60 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594e138; end: 10594e17b; -[SCFideliusRetryId internalInit] */

void FUN_10594e138(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126eb000;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594e17c; end: 10594e22b; -[SCFideliusRetryId isEqual:] */

long FUN_10594e17c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10594e210;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
      lVar3 = 0;
      goto LAB_10594e210;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10594e210;
    }
  }
  lVar3 = 1;
LAB_10594e210:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10594e22c; end: 10594e2af; -[SCFideliusRetryId matchSnapId:arroyoId:] */

void FUN_10594e22c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10594e294;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10594e294;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar1 = param_3;
  }
  (*pcVar3)(lVar1,uVar2);
LAB_10594e294:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10594e2b0; end: 10594e2bb; -[SCFideliusRetryId .cxx_destruct] */

void FUN_10594e2b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10594e2bc; end: 10594e343; -[SCFideliusRetryIdWithReset initWithRetryId:reset:] */

undefined1 *
FUN_10594e2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126eb008;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10594e344; end: 10594e367; -[SCFideliusRetryIdWithReset copyWithZone:] */

undefined8 FUN_10594e344(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10594e368; end: 10594e3d3; -[SCFideliusRetryIdWithReset hash] */

undefined8 * FUN_10594e368(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10594e458;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10594e458;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10594e458;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10594e458:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10594e3d4; end: 10594e473; -[SCFideliusRetryIdWithReset isEqual:] */

long FUN_10594e3d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10594e458;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10594e458;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10594e458;
    }
  }
  lVar3 = 1;
LAB_10594e458:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10594e474; end: 10594e47b; -[SCFideliusRetryIdWithReset retryId] */

undefined8 FUN_10594e474(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10594e47c; end: 10594e483; -[SCFideliusRetryIdWithReset reset] */

undefined1 FUN_10594e47c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10594e484; end: 10594e48f; -[SCFideliusRetryIdWithReset .cxx_destruct] */

void FUN_10594e484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10594e490; end: 10594e53b; -[SCFideliusUserIdentityAndId initWithIdentity:userId:] */

undefined1 *
FUN_10594e490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb010;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10594e53c; end: 10594e55f; -[SCFideliusUserIdentityAndId copyWithZone:] */

undefined8 FUN_10594e53c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10594e560; end: 10594e5bf; -[SCFideliusUserIdentityAndId encodeWithCoder:] */

void FUN_10594e560(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110daf8f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110de81d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10594e5c0; end: 10594e633; -[SCFideliusUserIdentityAndId hash] */

undefined8 * FUN_10594e5c0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10594e6b4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10594e6c0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10594e6c0;
        }
        goto LAB_10594e6b4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10594e6c0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10594e634; end: 10594e6db; -[SCFideliusUserIdentityAndId isEqual:] */

long FUN_10594e634(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10594e6b4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10594e6c0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10594e6c0;
        }
        goto LAB_10594e6b4;
      }
    }
    lVar3 = 0;
  }
LAB_10594e6c0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10594e6dc; end: 10594e70b; -[SCFideliusUserIdentityAndId .cxx_destruct] */

void FUN_10594e6dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10594e70c; end: 10594e737; +[SCGrapheneFideliusMetric tempIdentityInit] */

void FUN_10594e70c(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594e738; end: 10594e75f; +[SCGrapheneFideliusMetric newIdentityInit] */

void FUN_10594e738(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
                    /* WARNING: Could not recover jumptable at 0x00010c01b790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10594e760; end: 10594e78b; +[SCGrapheneFideliusMetric postServerInit] */

void FUN_10594e760(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594e78c; end: 10594e7b7; +[SCGrapheneFideliusMetric serverBetaMatch] */

void FUN_10594e78c(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594e7b8; end: 10594e7e3; +[SCGrapheneFideliusMetric userIdentityCreated] */

void FUN_10594e7b8(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594e7e4; end: 10594e80f; +[SCGrapheneFideliusMetric generateKeyPairLatency] */

void FUN_10594e7e4(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594e810; end: 10594e83b; +[SCGrapheneFideliusMetric hmacTagLatency] */

void FUN_10594e810(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594e83c; end: 10594e867; +[SCGrapheneFideliusMetric recreateUserDb] */

void FUN_10594e83c(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594e868; end: 10594e893; +[SCGrapheneFideliusMetric snapPhi] */

void FUN_10594e868(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594e894; end: 10594e8bf; +[SCGrapheneFideliusMetric snapRewrap] */

void FUN_10594e894(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594e8c0; end: 10594e8eb; +[SCGrapheneFideliusMetric stopRewrap] */

void FUN_10594e8c0(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594e8ec; end: 10594e917; +[SCGrapheneFideliusMetric snapSendClear] */

void FUN_10594e8ec(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594e918; end: 10594e943; +[SCGrapheneFideliusMetric snapInversePhi] */

void FUN_10594e918(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594e944; end: 10594e96f; +[SCGrapheneFideliusMetric retryProcessed] */

void FUN_10594e944(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594e970; end: 10594e99b; +[SCGrapheneFideliusMetric retryClear] */

void FUN_10594e970(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594e99c; end: 10594e9c7; +[SCGrapheneFideliusMetric keysReceived] */

void FUN_10594e99c(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594e9c8; end: 10594e9f3; +[SCGrapheneFideliusMetric keysReceivedFriendsCount] */

void FUN_10594e9c8(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594e9f4; end: 10594ea1f; +[SCGrapheneFideliusMetric keysReceivedVersions] */

void FUN_10594e9f4(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594ea20; end: 10594ea4b; +[SCGrapheneFideliusMetric friendAdded] */

void FUN_10594ea20(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594ea4c; end: 10594ea77; +[SCGrapheneFideliusMetric secretGenerated] */

void FUN_10594ea4c(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594ea78; end: 10594eaa3; +[SCGrapheneFideliusMetric recipientStatusChange] */

void FUN_10594ea78(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594eaa4; end: 10594eacf; +[SCGrapheneFideliusMetric retryInit] */

void FUN_10594eaa4(void)

{
  _objc_alloc(PTR_PTR_1126c04d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


