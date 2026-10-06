/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1065a8b08; end: 1065a94e7; -[SCChatConversationDataCoordinator _handleUpdatesWithDataRequest:] */

void FUN_1065a8b08(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puStack_528;
  undefined8 uStack_520;
  code *pcStack_518;
  undefined *puStack_510;
  ulong uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  ulong uStack_4d8;
  long lStack_4d0;
  ulong uStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  undefined8 *puStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 *puStack_448;
  undefined8 uStack_440;
  code *pcStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined *puStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined *puStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  undefined8 *puStack_3e8;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined *puStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  code *pcStack_388;
  undefined *puStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  undefined8 *puStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined1 auStack_2f0 [8];
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [8];
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x60) != 0) {
    puVar3 = PTR_PTR_1126cba20;
    _objc_opt_class(PTR_PTR_1126cba20);
    uVar9 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar9 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    if (uVar1 == 0) {
      uVar9 = 0;
      uVar12 = 0;
    }
    else {
      uVar9 = param_3;
      func_0x00010c0cce80();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_3;
      func_0x00010c272ec0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126cbb90;
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar2 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_3);
    uVar4 = uVar9;
    uVar5 = uVar12;
    if (uVar2 != 0) {
      uVar4 = param_3;
      func_0x00010c0cce80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      uVar5 = param_3;
      func_0x00010c272ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
    }
    uVar9 = uVar4;
    func_0x00010c278920();
    _dispatch_group_create();
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_1065a94e8;
    uStack_88 = 0x1065a94f8;
    uStack_80 = 0;
    puStack_d0 = &uStack_d8;
    uStack_d8 = 0;
    uStack_c8 = 0x3032000000;
    pcStack_c0 = FUN_1065a94e8;
    uStack_b8 = 0x1065a94f8;
    uStack_b0 = 0;
    puStack_100 = &uStack_108;
    uStack_108 = 0;
    uStack_f8 = 0x3032000000;
    pcStack_f0 = FUN_1065a94e8;
    uStack_e8 = 0x1065a94f8;
    uStack_e0 = 0;
    puStack_120 = &uStack_128;
    uStack_128 = 0;
    uStack_118 = 0x2020000000;
    uStack_110 = 0;
    puStack_140 = &uStack_148;
    uStack_148 = 0;
    uStack_138 = 0x2020000000;
    uStack_130 = 0;
    puStack_160 = &uStack_168;
    uStack_168 = 0;
    uStack_158 = 0x2020000000;
    uStack_150 = 0;
    puStack_180 = &uStack_188;
    uStack_188 = 0;
    uStack_178 = 0x2020000000;
    uStack_170 = 3;
    puStack_1a0 = &uStack_1a8;
    uStack_1a8 = 0;
    uStack_198 = 0x2020000000;
    uStack_190 = 3;
    puStack_1d0 = &uStack_1d8;
    uStack_1d8 = 0;
    uStack_1c8 = 0x3032000000;
    pcStack_1c0 = FUN_1065a94e8;
    uStack_1b8 = 0x1065a94f8;
    uStack_1b0 = 0;
    puStack_200 = &uStack_208;
    uStack_208 = 0;
    uStack_1f8 = 0x3032000000;
    pcStack_1f0 = FUN_1065a94e8;
    uStack_1e8 = 0x1065a94f8;
    uStack_1e0 = 0;
    puStack_230 = &uStack_238;
    uStack_238 = 0;
    uStack_228 = 0x3032000000;
    pcStack_220 = FUN_1065a94e8;
    uStack_218 = 0x1065a94f8;
    uStack_210 = 0;
    puStack_260 = &uStack_268;
    uStack_268 = 0;
    uStack_258 = 0x3032000000;
    pcStack_250 = FUN_1065a94e8;
    uStack_248 = 0x1065a94f8;
    uStack_240 = 0;
    uVar6 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain();
    uVar7 = *(undefined8 *)(param_1 + 0x108);
    _objc_retain(uVar7);
    func_0x00010c1b18e0(uVar4);
    _objc_initWeak(auStack_270,param_1);
    uVar10 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010c077ca0();
    _objc_release(uVar10);
    _dispatch_group_enter(uVar9);
    if ((int)uVar8 == 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x40);
      puStack_358 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_350 = 0xc2000000;
      pcStack_348 = FUN_1065a976c;
      puStack_340 = &UNK_11092d598;
      _objc_retain(uVar5);
      puStack_320 = &uStack_a8;
      puStack_318 = &uStack_d8;
      puStack_310 = &uStack_128;
      puStack_308 = &uStack_188;
      puStack_300 = &uStack_1a8;
      puStack_2f8 = &uStack_268;
      uStack_338 = uVar5;
      _objc_copyWeak(auStack_2f0,auStack_270);
      _objc_retain(uVar4);
      uStack_330 = uVar4;
      _objc_retain(uVar9);
      uStack_328 = uVar9;
      func_0x00010bef06e0(uVar10);
      _objc_release(uStack_328);
      _objc_release(uStack_330);
      _objc_destroyWeak(auStack_2f0);
      _objc_release(uStack_338);
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x48);
      puStack_2e8 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_2d8 = FUN_1065a9500;
      puStack_2d0 = &UNK_11092d568;
      puStack_2b8 = &uStack_a8;
      puStack_2b0 = &uStack_d8;
      puStack_2a8 = &uStack_128;
      puStack_2a0 = &uStack_148;
      puStack_298 = &uStack_168;
      puStack_290 = &uStack_188;
      puStack_288 = &uStack_1a8;
      puStack_280 = &uStack_268;
      uStack_2e0 = 0xc2000000;
      _objc_copyWeak(auStack_278,auStack_270);
      _objc_retain(uVar4);
      uStack_2c8 = uVar4;
      _objc_retain(uVar9);
      uStack_2c0 = uVar9;
      func_0x00010bef06e0(uVar10);
      _objc_release(uStack_2c0);
      _objc_release(uStack_2c8);
      _objc_destroyWeak(auStack_278);
    }
    if (*(char *)(param_1 + 0x90) == '\x01') {
      _dispatch_group_enter(uVar9);
      uVar10 = *(undefined8 *)(param_1 + 0x38);
      puStack_398 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_390 = 0xc2000000;
      pcStack_388 = FUN_1065a99b0;
      puStack_380 = &UNK_11092d5c8;
      _objc_retain(uVar5);
      puStack_360 = &uStack_108;
      uStack_378 = uVar5;
      _objc_retain(uVar4);
      uStack_370 = uVar4;
      _objc_retain(uVar9);
      uStack_368 = uVar9;
      func_0x00010bf27100(uVar10);
      _objc_release(uStack_368);
      _objc_release(uStack_370);
      _objc_release(uStack_378);
    }
    _dispatch_group_enter(uVar9);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    puStack_3e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3d8 = 0xc2000000;
    uStack_3d0 = 0x1065a9a18;
    puStack_3c8 = &UNK_11092d5f8;
    _objc_retain(uVar5);
    uStack_3c0 = uVar5;
    _objc_retain(uVar4);
    puStack_3a8 = &uStack_208;
    puStack_3a0 = &uStack_238;
    uStack_3b8 = uVar4;
    _objc_retain(uVar9);
    uStack_3b0 = uVar9;
    func_0x00010bef0fc0(uVar10);
    _dispatch_group_enter(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x78);
    puStack_420 = puVar3;
    uStack_418 = 0xc2000000;
    uStack_410 = 0x1065a9abc;
    puStack_408 = &UNK_110900558;
    _objc_retain(uVar5);
    puStack_3e8 = &uStack_1d8;
    uStack_400 = uVar5;
    _objc_retain(uVar4);
    uStack_3f8 = uVar4;
    _objc_retain(uVar9);
    uStack_3f0 = uVar9;
    func_0x00010bef0440(uVar10);
    uStack_450 = 0;
    uStack_440 = 0x3032000000;
    pcStack_438 = FUN_1065a94e8;
    uStack_430 = 0x1065a94f8;
    uVar10 = *(undefined8 *)(param_1 + 0xd8);
    puStack_448 = &uStack_450;
    _objc_retain(uVar10);
    uVar13 = *(undefined8 *)(param_1 + 0x28);
    uStack_428 = uVar10;
    _objc_retain(uVar13);
    uVar8 = *(undefined8 *)(param_1 + 0xf0);
    _objc_retain(uVar8);
    uVar11 = *(undefined8 *)(param_1 + 0x118);
    _objc_retain(uVar11);
    uVar10 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c11de00(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puStack_528 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_520 = 0xc2000000;
    pcStack_518 = FUN_1065a9b24;
    puStack_510 = &UNK_11092d658;
    puStack_4c0 = &uStack_a8;
    puStack_4b8 = &uStack_108;
    puStack_4b0 = &uStack_208;
    puStack_4a8 = &uStack_238;
    puStack_4a0 = &uStack_d8;
    puStack_498 = &uStack_128;
    puStack_490 = &uStack_148;
    puStack_488 = &uStack_168;
    puStack_480 = &uStack_188;
    puStack_478 = &uStack_1a8;
    puStack_470 = &uStack_1d8;
    puStack_460 = &uStack_268;
    uStack_458 = 0;
    uStack_508 = uVar4;
    uStack_500 = uVar6;
    uStack_4f8 = uVar13;
    uStack_4f0 = uVar11;
    uStack_4e8 = uVar7;
    uStack_4e0 = uVar8;
    uStack_4d8 = uVar5;
    lStack_4d0 = param_1;
    puStack_468 = &uStack_450;
    _objc_retain(param_3);
    uStack_4c8 = param_3;
    _objc_retain(uVar5);
    _objc_retain(uVar8);
    _objc_retain(uVar7);
    _objc_retain(uVar11);
    _objc_retain(uVar13);
    _objc_retain(uVar6);
    _objc_retain(uVar4);
    func_0x000100bc0718(uVar9,uVar10,&puStack_528);
    _objc_release(uVar10);
    _objc_release(uStack_4c8);
    _objc_release(uStack_4d8);
    _objc_release(uStack_4e0);
    _objc_release(uStack_4e8);
    _objc_release(uStack_4f0);
    _objc_release(uStack_4f8);
    _objc_release(uStack_500);
    _objc_release(uStack_508);
    _objc_release(uVar11);
    _objc_release(uVar8);
    _objc_release(uVar13);
    __Block_object_dispose(&uStack_450,8);
    _objc_release(uStack_428);
    _objc_release(uStack_3f0);
    _objc_release(uStack_3f8);
    _objc_release(uStack_400);
    _objc_release(uStack_3b0);
    _objc_release(uStack_3b8);
    _objc_release(uStack_3c0);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_270);
    _objc_release(uVar6);
    __Block_object_dispose(&uStack_268,8);
    _objc_release(uStack_240);
    __Block_object_dispose(&uStack_238,8);
    _objc_release(uStack_210);
    __Block_object_dispose(&uStack_208,8);
    _objc_release(uStack_1e0);
    __Block_object_dispose(&uStack_1d8,8);
    _objc_release(uStack_1b0);
    __Block_object_dispose(&uStack_1a8,8);
    __Block_object_dispose(&uStack_188,8);
    __Block_object_dispose(&uStack_168,8);
    __Block_object_dispose(&uStack_148,8);
    __Block_object_dispose(&uStack_128,8);
    __Block_object_dispose(&uStack_108,8);
    _objc_release(uStack_e0);
    __Block_object_dispose(&uStack_d8,8);
    _objc_release(uStack_b0);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(uVar4);
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1065a94e8; end: 1065a94ff;  */

void FUN_1065a94e8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1065a9500; end: 1065a9623;  */

void FUN_1065a9500(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = param_4;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = param_5;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) = param_6;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18) = param_7;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x18) = 4;
  lVar1 = *(long *)(*(long *)(param_1 + 0x68) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  _objc_release(uVar2);
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be87640();
  _objc_release(lVar1);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065a9624; end: 1065a976b;  */

void FUN_1065a9624(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x70,param_2 + 0x70);
  return;
}



/* Entry: 1065a976c; end: 1065a988f;  */

void FUN_1065a976c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_7);
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = param_4;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) = param_5;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18) = param_6;
  lVar1 = *(long *)(*(long *)(param_1 + 0x60) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar2);
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be87640();
  _objc_release(lVar1);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  _objc_release(param_7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065a9890; end: 1065a99af;  */

void FUN_1065a9890(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x68,param_2 + 0x68);
  return;
}



/* Entry: 1065a99b0; end: 1065a9b23;  */

void FUN_1065a99b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  func_0x00010c278920(*(undefined8 *)(param_1 + 0x28));
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065a9b24; end: 1065aa0eb;  */

void FUN_1065a9b24(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x28);
  if ((lVar1 != 0) &&
     ((func_0x00010c074920(), (int)lVar1 == 0 ||
      (*(long *)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x28) != 0)))) {
    func_0x00010c278920(*(undefined8 *)(param_1 + 0x20));
    puStack_110 = &uStack_118;
    uStack_118 = 0;
    uStack_108 = 0x3032000000;
    pcStack_100 = FUN_1065a94e8;
    uStack_f8 = 0x1065a94f8;
    lStack_f0 = 0;
    puStack_140 = &uStack_148;
    uStack_148 = 0;
    uStack_138 = 0x3032000000;
    pcStack_130 = FUN_1065a94e8;
    uStack_128 = 0x1065a94f8;
    uStack_120 = 0;
    uVar14 = *(undefined8 *)(param_1 + 0x28);
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar10);
    func_0x00010c0be1a0(uVar14);
    lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x28);
    uVar14 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(lVar13);
    _objc_retain(uVar14);
    lVar1 = lVar13;
    func_0x00010bf500c0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    func_0x00010c06e040();
    _objc_release(lVar1);
    if ((int)lVar11 == 0) {
      uVar12 = 0;
    }
    else {
      lVar1 = lVar13;
      func_0x00010bf500c0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar1;
      func_0x00010bef4a80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar11;
      func_0x00010c08fa60();
      if (lVar1 == 0) {
        uVar12 = 0;
      }
      else {
        uVar2 = uVar14;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar2;
        func_0x00010c0f3e20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
      }
      _objc_release(lVar11);
    }
    _objc_release(uVar14);
    _objc_release(lVar13);
    uVar3 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x28);
    func_0x00010c074920();
    if ((uVar3 & 1) == 0) {
      lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x78) + 8) + 0x28);
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar13;
      func_0x00010bf52a60();
      lVar11 = lRam0000000000000000;
      while (lVar1 != 0) {
        lVar15 = 0;
        do {
          if (lRam0000000000000000 != lVar11) {
            _objc_enumerationMutation(lVar13);
          }
          uVar4 = *(ulong *)(lVar15 * 8);
          func_0x00010c244280();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar4;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          if ((uVar5 & 1) != 0) goto LAB_1065a9e10;
          _objc_release(uVar4);
          lVar15 = lVar15 + 1;
        } while (lVar1 != lVar15);
        lVar1 = lVar13;
        func_0x00010bf52a60();
      }
      uVar4 = 0;
LAB_1065a9e10:
      _objc_release(lVar13);
      puVar6 = PTR_PTR_1126cbac8;
      _objc_alloc(PTR_PTR_1126cbac8);
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x28);
      func_0x00010bf500c0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar7;
      func_0x0001070ba4ac();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar12;
      func_0x00010bf85d80(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c007be0(puVar6);
      _objc_release(uVar2);
      _objc_release(uVar14);
      _objc_release(uVar7);
      puVar8 = PTR_PTR_1126cbad0;
      func_0x00010c0e82c0(PTR_PTR_1126cbad0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(uVar4);
    }
    else {
      puVar8 = PTR_PTR_1126cbad0;
      func_0x00010bfcf5e0(PTR_PTR_1126cbad0);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR_PTR_1126cbb98;
    _objc_alloc(PTR_PTR_1126cbb98);
    func_0x00010c004a60();
    puVar9 = PTR_PTR_1126cb388;
    func_0x00010c261880();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0x60) != 0) {
      uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x100);
      func_0x00010c269d40(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c123540();
      _objc_release(uVar14);
    }
    func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0xb8));
    param_3 = puVar9;
    func_0x00010bdcb7e0(*(undefined8 *)(param_1 + 0x58));
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(uVar12);
    _objc_release(uVar10);
    __Block_object_dispose(&uStack_148,8);
    _objc_release(uStack_120);
    __Block_object_dispose(&uStack_118,8);
    lVar1 = lStack_f0;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_148,8);
  __Block_object_dispose(&uStack_118,8);
  __Unwind_Resume();
  _objc_retain(param_3);
  uVar14 = *(undefined8 *)(lVar1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(*(long *)(lVar1 + 0x28) + 8);
  uVar10 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = uVar14;
  _objc_release(uVar10);
  lVar1 = *(long *)(*(long *)(lVar1 + 0x30) + 8);
  uVar14 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined **)(lVar1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar14);
  return;
}



/* Entry: 1065aa0ec; end: 1065aa37f;  */

void FUN_1065aa0ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065aa380; end: 1065aa3e7; -[SCChatConversationDataCoordinator _announceDataCoordinatorUpdateWithDataRequest:] */

void FUN_1065aa380(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bf63740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63720(uVar1,param_2,param_1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065aa3e8; end: 1065aa543; -[SCChatConversationDataCoordinator _logActiveChatRequestWithChatIdentifier:] */

void FUN_1065aa3e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1065a94e8;
  uStack_40 = 0x1065a94f8;
  uStack_38 = 0;
  func_0x00010c0c11e0(param_3);
  puVar1 = PTR_PTR_1126b2950;
  func_0x00010bef0600(PTR_PTR_1126b2950);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1065aa544; end: 1065aa57b;  */

void FUN_1065aa544(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110de3558;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065aa57c; end: 1065aa947; -[SCChatConversationDataCoordinator _startActiveConversationForIDResolvingRequest:] */

void FUN_1065aa57c(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_1d8 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1065a94e8;
  uStack_60 = 0x1065a94f8;
  uStack_58 = 0;
  puStack_140 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_1065a94e8;
  uStack_90 = 0x1065a94f8;
  uStack_88 = 0;
  puStack_138 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x2020000000;
  uStack_b8 = 0;
  puStack_180 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x2020000000;
  uStack_d8 = 0;
  puStack_1b0 = &uStack_110;
  uStack_110 = 0;
  uStack_100 = 0x2020000000;
  uStack_f8 = 0;
  puStack_1e0 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x2020000000;
  uStack_118 = 0;
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_1065aa948;
  puStack_158 = &UNK_11092d688;
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_1065aa9ec;
  puStack_188 = &UNK_11092d6b8;
  puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c8 = 0xc2000000;
  uStack_1c0 = 0x1065aaa34;
  puStack_1b8 = &UNK_11092d6b8;
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0xc2000000;
  uStack_1f0 = 0x1065aaa7c;
  puStack_1e8 = &UNK_11092d6b8;
  puStack_1a8 = puStack_1d8;
  puStack_178 = puStack_1d8;
  lStack_150 = param_1;
  puStack_148 = puStack_1d8;
  puStack_128 = puStack_1e0;
  puStack_108 = puStack_1b0;
  puStack_e8 = puStack_180;
  puStack_c8 = puStack_138;
  puStack_a8 = puStack_140;
  puStack_78 = puStack_1d8;
  func_0x00010c0bfc80(param_3);
  iVar2 = (int)puStack_78[5];
  if (*(char *)(puStack_108 + 3) == '\x01') {
    func_0x00010c071ae0();
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x91) = 1;
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x91);
    func_0x00010c071ae0();
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x91) = 0;
    }
    if (*(char *)(puStack_c8 + 3) == '\x01') {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x68);
      func_0x00010c071ae0();
      if (iVar2 != 0) {
        uVar3 = (uint)*(undefined8 *)(param_1 + 0xa0);
        func_0x00010c071ae0();
        if (((uVar3 | bVar1) & 1) == 0) goto LAB_1065aa85c;
      }
    }
    if (*(char *)(puStack_e8 + 3) == '\x01') {
      uVar4 = puStack_78[5];
      func_0x00010c071ae0();
      if ((uVar4 & 1) != 0) goto LAB_1065aa85c;
    }
    if (*(char *)(puStack_128 + 3) == '\x01') {
      iVar2 = (int)puStack_78[5];
      func_0x00010c071ae0();
      if (iVar2 == 0) goto LAB_1065aa85c;
      uVar6 = puStack_78[5];
      _objc_retain(uVar6);
      uVar5 = *(undefined8 *)(param_1 + 0xa0);
      *(undefined8 *)(param_1 + 0xa0) = uVar6;
      _objc_release(uVar5);
    }
    uVar6 = puStack_78[5];
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = uVar6;
    _objc_release(uVar5);
    _objc_initWeak(auStack_208,param_1);
    _objc_copyWeak(auStack_210,auStack_208);
    _objc_retain(param_3);
    func_0x00010be109c0(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_210);
    _objc_destroyWeak(auStack_208);
  }
LAB_1065aa85c:
  __Block_object_dispose(&uStack_130,8);
  __Block_object_dispose(&uStack_110,8);
  __Block_object_dispose(&uStack_f0,8);
  __Block_object_dispose(&uStack_d0,8);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1065aa948; end: 1065aa9eb;  */

void FUN_1065aa948(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
  func_0x00010be4fd80(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065aa9ec; end: 1065aaac3;  */

void FUN_1065aa9ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065aaac4; end: 1065aaccb;  */

void FUN_1065aaac4(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(lVar1 + 0x98);
    func_0x00010c071ae0();
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0xa0);
      *(undefined8 *)(lVar1 + 0xa0) = 0;
      _objc_release(uVar3);
    }
    else {
      puStack_58 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      func_0x00010c0c11e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) & 1) == 0) {
        func_0x00010be534e0(lVar1);
      }
      if ((param_2 & 1) == 0) {
        func_0x00010bf43820(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
        func_0x00010becba80(lVar1);
        uVar3 = *(undefined8 *)(lVar1 + 0xa0);
        *(undefined8 *)(lVar1 + 0xa0) = 0;
      }
      else {
        func_0x00010c278920();
        func_0x00010becba60(lVar1);
        uVar3 = *(undefined8 *)(lVar1 + 0x110);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126cbba0;
        func_0x00010c088820(PTR_PTR_1126cbba0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d07a0(uVar3);
        _objc_release(puVar4);
      }
      _objc_release(uVar3);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065aaccc; end: 1065aace3;  */

void FUN_1065aaccc(void)

{
  return;
}



/* Entry: 1065aace4; end: 1065aad27; -[SCChatConversationDataCoordinator _logFetchConversationIdWithSuccess:convoId:isGroup:failureReason:] */

void FUN_1065aace4(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c123540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde2a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__completeChatDisplayReadyFlowWit_112556420,param_6);
  return;
}



/* Entry: 1065aad28; end: 1065aae2b; -[SCChatConversationDataCoordinator _throwFailureForChatIdentifier:] */

void FUN_1065aad28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1065aadb8;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1065aae2c; end: 1065ab013; -[SCChatConversationDataCoordinator _throwActiveConversationForIDResolvingRequest:conversationId:metadata:metricsTracker:] */

void FUN_1065aae2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1065a94e8;
  uStack_70 = 0x1065a94f8;
  uStack_68 = 0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0bfc80(param_3);
  func_0x00010bfd0a00(param_1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065ab014; end: 1065ab0ff;  */

void FUN_1065ab014(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cb390;
  func_0x00010c1626a0(PTR_PTR_1126cb390,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1065ab100; end: 1065ab1f7; -[SCChatConversationDataCoordinator _fetchConversationIdAndMetadataForChatIdentifier:metricsTracker:completion:] */

void FUN_1065ab100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1065ab1f8;
  puStack_70 = &UNK_11086c960;
  uStack_68 = param_1;
  uStack_60 = param_4;
  _objc_retain(param_5);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1065ab20c;
  puStack_98 = &UNK_110848438;
  uStack_90 = param_5;
  uStack_58 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0c11e0(param_3,param_2,&puStack_88,&puStack_b0);
  _objc_release(uStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1065ab1f8; end: 1065ab20b;  */

void FUN_1065ab1f8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be10a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchConversationIdAndMetadataF_112561c20,
             param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1065ab20c; end: 1065ab27f;  */

void FUN_1065ab20c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126cbba8;
  func_0x00010bfce400(PTR_PTR_1126cbba8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,1,param_2,puVar1,0);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065ab280; end: 1065ab487; -[SCChatConversationDataCoordinator _fetchConversationIdAndMetadataForUserId:metricsTracker:completion:] */

void FUN_1065ab280(long param_1,undefined1 *param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **unaff_x25;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    if (param_5 != 0) {
      param_2 = (undefined1 *)0x0;
      (**(code **)(param_5 + 0x10))(param_5,0,0,0,4);
    }
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1065ab488;
    puStack_90 = &UNK_110854260;
    unaff_x25 = &puStack_a8;
    param_2 = auStack_68;
    _objc_copyWeak(auStack_70);
    _objc_retain(param_4);
    uStack_88 = param_4;
    _objc_retain(param_5);
    lStack_78 = param_5;
    _objc_retain(param_3);
    lStack_80 = param_3;
    func_0x00010c09d7c0(uVar1);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(uVar1);
    _objc_release(lStack_80);
    _objc_release(lStack_78);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 7);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == (undefined1 *)0x0) {
    func_0x00010bf43820(*(undefined8 *)(param_3 + 0x20));
    lVar4 = *(long *)(param_3 + 0x30);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,0,0,0,4);
    }
  }
  else {
    param_3 = param_3 + 0x38;
    _objc_loadWeakRetained(param_3);
    func_0x00010be109e0();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065ab488; end: 1065ab51f;  */

void FUN_1065ab488(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    func_0x00010bf43820(*(undefined8 *)(param_1 + 0x20));
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0,0,0,4);
    }
  }
  else {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010be109e0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065ab520; end: 1065ab61b; -[SCChatConversationDataCoordinator _recordConversationMetricsForConversation:metricsTracker:] */

void FUN_1065ab520(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c278920(param_4,param_2,6);
  lVar1 = param_3;
  func_0x00010c0f4aa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  func_0x00010c1d92c0(param_4,param_2,lVar2);
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126cbbb0;
  _objc_alloc(PTR_PTR_1126cbbb0);
  lVar1 = param_3;
  func_0x00010bf37ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c034260(puVar3,param_2,lVar2,lVar1 != 0);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1235e0();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1065ab61c; end: 1065ab657; -[SCChatConversationDataCoordinator _completeChatDisplayReadyFlowWithFailure:] */

void FUN_1065ab61c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065ab658; end: 1065ab893; -[SCChatConversationDataCoordinator _fetchConversationIdAndMetadataForSnapchatter:metricsTracker:completion:] */

void FUN_1065ab658(long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar6 = param_3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) || (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b01c0;
    func_0x00010c294260();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(lVar6);
    _objc_retain(lVar1);
    _objc_retain(param_5);
    func_0x00010bf504e0(uVar2);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_release(lVar1);
    _objc_release(lVar6);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  else if (param_5 != 0) {
    param_2 = 0;
    (**(code **)(param_5 + 0x10))(param_5,0,0,0,4);
  }
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    lVar6 = *(long *)(param_3 + 0x40);
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x10))(lVar6,0,0,0,1);
    }
  }
  else {
    puVar3 = PTR_PTR_1126cbba8;
    func_0x00010c294320(PTR_PTR_1126cbba8);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_3 + 0x40);
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x10))(lVar6,1,param_2,puVar3,0);
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065ab894; end: 1065ab93b;  */

void FUN_1065ab894(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0,0,0,1);
    }
  }
  else {
    puVar1 = PTR_PTR_1126cbba8;
    func_0x00010c294320(PTR_PTR_1126cbba8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,1,param_2,puVar1,0);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065ab93c; end: 1065ab963; -[SCChatConversationDataCoordinator updateRequests] */

void FUN_1065ab93c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065ab964; end: 1065abae7; -[SCChatConversationDataCoordinator _subscribeToStoriesSummariesIfNecessary] */

void FUN_1065ab964(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (uVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c25b4e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar1 = *(ulong *)(param_1 + 0x20);
  }
  func_0x00010c06f880();
  if ((uVar1 & 1) == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar2 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1065abae8; end: 1065abb37;  */

void FUN_1065abae8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf0a540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010050471c();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065abb38; end: 1065abbaf;  */

void FUN_1065abb38(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010c259cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1065abbb0; end: 1065abc1f;  */

void FUN_1065abbb0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1065abc20; end: 1065abc5b; -[SCChatConversationDataCoordinator _updateStoriesSummaryInfo:] */

void FUN_1065abc20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be32c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleUpdatesWithDataRequest__11256a4c0,0);
  return;
}



/* Entry: 1065abc5c; end: 1065abd8b; -[SCChatConversationDataCoordinator _subscribeToReactionsUpdatesIfNecessary] */

void FUN_1065abc5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c120c40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c0e0ea0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar2 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1065abd8c; end: 1065abdd3;  */

void FUN_1065abd8c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bede4e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065abdd4; end: 1065abe0f; -[SCChatConversationDataCoordinator _updateReactionMetadata:] */

void FUN_1065abdd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be32c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleUpdatesWithDataRequest__11256a4c0,0);
  return;
}



/* Entry: 1065abe10; end: 1065abf43; -[SCChatConversationDataCoordinator _subscribeToPostSnapActionsIfNecessary] */

void FUN_1065abe10(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0xd0) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 200);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c105140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c0e0ec0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar2 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1065abf44; end: 1065abf8b;  */

void FUN_1065abf44(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedd900();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065abf8c; end: 1065abfc7; -[SCChatConversationDataCoordinator _updatePostSnapConversationActions:] */

void FUN_1065abf8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be32c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleUpdatesWithDataRequest__11256a4c0,0);
  return;
}



/* Entry: 1065abfc8; end: 1065ac177; -[SCChatConversationDataCoordinator .cxx_destruct] */

void FUN_1065abfc8(long param_1)

{
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
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
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065ac178; end: 1065ac24b;  */

undefined8 FUN_1065ac178(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0be1a0(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1065ac24c; end: 1065ac26f;  */

void FUN_1065ac24c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1065ac270; end: 1065ac60f;  */

void FUN_1065ac270(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  func_0x00010bf97e80(param_1);
  lVar4 = param_1;
  func_0x00010c0d3c80();
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar5 == 0) {
      _objc_release(param_2);
      lVar5 = lVar4;
      func_0x00010bf51e00();
      _objc_release(lVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(param_2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
        return;
      }
      ___stack_chk_fail();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_retain(lVar10);
      func_0x00010c0df840(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      lVar5 = lVar10;
      func_0x00010bf6e760(lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb5a0();
      func_0x00010c0df7c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar12);
      _objc_release(puVar3);
      _objc_release(lVar5);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      lVar5 = lVar10;
      func_0x00010bf6e760(lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb5a0();
      func_0x00010c0df7c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar12);
      _objc_release(lVar10);
      _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar5);
      return;
    }
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar14 = *(undefined8 *)(lVar13 * 8);
      uVar12 = uVar14;
      func_0x00010bf6e760(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb5a0();
      _objc_release(uVar12);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar12 = uVar14;
      func_0x00010bf6e760(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb5a0();
      func_0x00010c0df7c0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar6);
      _objc_release(uVar12);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar7 == (undefined *)0x0) {
LAB_1065ac534:
        func_0x00010befa120(lVar4);
      }
      else {
        uVar12 = uVar14;
        func_0x00010bf6e760(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cb5a0();
        func_0x00010c0df7c0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c2827c0();
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(uVar12);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bf6e760(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cb5a0();
        func_0x00010c0df7c0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(uVar14);
        puVar6 = puVar7;
        func_0x00010c252440();
        if (puVar6 == (undefined *)0x2) {
          puVar6 = puVar7;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          func_0x00010bf5a4a0();
          if (puVar9 != (undefined *)0x0) {
            func_0x00010c0ecae0(puVar7);
          }
          _objc_release(puVar6);
        }
        _objc_release(puVar7);
        if (puVar8 == (undefined *)0x7fffffffffffffff) goto LAB_1065ac534;
        func_0x00010c1d04c0(lVar4);
      }
      lVar13 = lVar13 + 1;
    } while (lVar5 != lVar13);
    lVar5 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1065ac610; end: 1065ac72f;  */

void FUN_1065ac610(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010bf6e760(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cb5a0();
  func_0x00010c0df7c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = param_2;
  func_0x00010bf6e760(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cb5a0();
  func_0x00010c0df7c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1065ac730; end: 1065ac95f;  */

void FUN_1065ac730(undefined *param_1,undefined **param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  ppuVar2 = param_2;
  func_0x00010bf529e0();
  if (ppuVar2 == (undefined **)0x0) {
    _objc_retain(param_1);
    puVar5 = param_1;
  }
  else {
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_1065ad4e0;
    puStack_100 = &UNK_11092d908;
    ppuStack_f8 = &PTR___NSConcreteGlobalBlock_11092d888;
    ppuVar7 = &puStack_118;
    puVar3 = param_1;
    func_0x000100504554(param_1,ppuVar7);
    _objc_release(ppuStack_f8);
    puVar4 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
    _objc_retain(param_2);
    ppuVar2 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar2 != (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0cb5a0(*(undefined8 *)((long)ppuVar8 * 8));
        func_0x00010c0df7c0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bfecde0();
        _objc_release(puVar5);
        if (puVar6 != (undefined *)0x7fffffffffffffff) {
          func_0x00010bef92c0(puVar4);
        }
        ppuVar8 = (undefined **)((long)ppuVar8 + 1);
      } while (ppuVar2 != ppuVar8);
      ppuVar2 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    puVar6 = param_1;
    func_0x00010c0d3c80(param_1);
    func_0x00010c12d480();
    puVar5 = puVar6;
    func_0x00010bf51e00(puVar6);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010bf6e760(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0cb5a0();
    func_0x00010c0df7c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1065ac960; end: 1065ac9bb;  */

void FUN_1065ac960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf6e760(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0cb5a0();
  func_0x00010c0df7c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065ac9bc; end: 1065acf17;  */

undefined * FUN_1065ac9bc(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long lStack_380;
  long lStack_378;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar14 = *(undefined8 *)(lVar16 * 8);
      func_0x00010bf490e0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(uVar14);
      lVar16 = lVar16 + 1;
    } while (lVar3 != lVar16);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar13 = *(undefined8 *)(lVar16 * 8);
      uVar14 = uVar13;
      func_0x00010bf6e760(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb5a0();
      _objc_release(uVar14);
      uVar14 = uVar13;
      func_0x00010bf490e0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
      if ((puVar4 != (undefined *)0x0) &&
         (puVar5 = puVar4, func_0x00010c252440(), puVar5 == (undefined *)0x2)) {
        puVar5 = puVar4;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf5a4a0();
        if (puVar6 != (undefined *)0x0) {
          func_0x00010c0ecae0(puVar4);
        }
        _objc_release(puVar5);
      }
      func_0x00010bf490e0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(uVar13);
      _objc_release(puVar4);
      lVar16 = lVar16 + 1;
    } while (lVar3 != lVar16);
    lVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar14 = *(undefined8 *)(lVar16 * 8);
      func_0x00010bf6e760(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb5a0();
      func_0x00010c0df7c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(uVar14);
      func_0x00010c12d3e0(puVar2);
      _objc_release(puVar5);
      lVar16 = lVar16 + 1;
    } while (lVar3 != lVar16);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  if (param_4 == 0) {
    lStack_378 = -0x8000000000000000;
  }
  else {
    lStack_378 = param_4;
    func_0x00010c0b4ca0();
  }
  if (param_5 == 0) {
    lStack_380 = 0x7fffffffffffffff;
  }
  else {
    lStack_380 = param_5;
    func_0x00010c0b4ca0();
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = puVar2;
  func_0x00010c0dfe00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar6);
      }
      uVar15 = *(ulong *)((long)puVar12 * 8);
      if ((((param_4 == 0 && param_5 == 0) || (uVar7 = uVar15, func_0x00010c252440(), uVar7 != 2))
          || (uVar7 = uVar15, func_0x00010c0ecae0(), (uVar7 >> 0x3e & 1) != 0)) ||
         ((uVar7 = uVar15, func_0x00010c0ecae0(), lStack_378 <= (long)uVar7 &&
          (func_0x00010c0ecae0(), (long)uVar15 <= lStack_380)))) {
        func_0x00010befa120(puVar5);
      }
      puVar12 = puVar12 + 1;
    } while (puVar4 != puVar12);
    puVar4 = puVar6;
    func_0x00010bf52a60();
  }
  _objc_release(puVar6);
  ppuVar10 = &PTR___NSConcreteGlobalBlock_11092d8a8;
  func_0x00010c246ba0(puVar5);
  puVar4 = puVar5;
  func_0x00010bf51e00();
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar10);
  func_0x00010c0ecae0();
  ppuVar9 = ppuVar10;
  func_0x00010c0ecae0();
  _objc_release(ppuVar10);
  puVar2 = (undefined *)0xffffffffffffffff;
  if ((long)ppuVar9 < lVar8) {
    puVar2 = (undefined *)0x1;
  }
  return puVar2;
}



/* Entry: 1065acf18; end: 1065acfcf;  */

undefined8 FUN_1065acf18(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c0ecae0();
  lVar2 = param_3;
  func_0x00010c0ecae0();
  _objc_release(param_3);
  uVar1 = 0xffffffffffffffff;
  if (lVar2 < param_2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1065acfd0; end: 1065acfef;  */

undefined8 FUN_1065acfd0(ulong param_1)

{
  if (param_1 < 0xd) {
    return *(undefined8 *)(&UNK_10dddcc98 + param_1 * 8);
  }
  return 4;
}



/* Entry: 1065acff0; end: 1065ad0d7;  */

void FUN_1065acff0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = param_1;
  if (param_2 == 0 && param_3 == 0) {
    _objc_retain(param_1);
    goto LAB_1065ad0a8;
  }
  if (param_2 == 0) {
    lVar3 = -0x8000000000000000;
    if (param_3 == 0) goto LAB_1065ad064;
LAB_1065ad040:
    lVar1 = param_3;
    func_0x00010c0b4ca0();
  }
  else {
    lVar3 = param_2;
    func_0x00010c0b4ca0();
    if (param_3 != 0) goto LAB_1065ad040;
LAB_1065ad064:
    lVar1 = 0x7fffffffffffffff;
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc0000000;
  pcStack_50 = FUN_1065ad0d8;
  puStack_48 = &UNK_11092d8e8;
  lStack_40 = lVar3;
  lStack_38 = lVar1;
  func_0x0001006372a4(param_1,&puStack_60);
LAB_1065ad0a8:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1065ad0d8; end: 1065ad15f;  */

bool FUN_1065ad0d8(long param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c252440();
  if ((uVar1 == 2) && (uVar1 = param_2, func_0x00010c0ecae0(), (uVar1 >> 0x3e & 1) == 0)) {
    uVar1 = param_2;
    func_0x00010c0ecae0();
    if ((long)uVar1 < *(long *)(param_1 + 0x20)) {
      bVar2 = false;
    }
    else {
      uVar1 = param_2;
      func_0x00010c0ecae0(param_2);
      bVar2 = (long)uVar1 <= *(long *)(param_1 + 0x28);
    }
  }
  else {
    bVar2 = true;
  }
  _objc_release(param_2);
  return bVar2;
}



/* Entry: 1065ad160; end: 1065ad2ef;  */

void FUN_1065ad160(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar14;
  ulong uVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 == 0) {
    lVar10 = 0;
    lVar11 = 0;
  }
  else {
    lVar10 = 0;
    lVar11 = 0;
    do {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar13 = *(ulong *)(lVar14 * 8);
        iVar12 = (int)uVar13;
        func_0x00010c07bc00();
        if ((uVar13 & 1) == 0) {
          func_0x00010c07ea80();
          if (iVar12 == 0) {
            lVar10 = lVar10 + 1;
          }
          else {
            lVar11 = lVar11 + 1;
          }
        }
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  FUN_1065ad2f0(lVar11,&PTR____CFConstantStringClassReference_110dbddd8,param_3,param_4);
  ppuVar7 = &PTR____CFConstantStringClassReference_110dbb9d8;
  uVar8 = param_4;
  FUN_1065ad2f0(lVar10,&PTR____CFConstantStringClassReference_110dbb9d8,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    _objc_retain(uVar8);
    puVar3 = PTR_PTR_1126b2950;
    _objc_retain(ppuVar7);
    func_0x00010bf36460(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c2ac460(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010c2ac460(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar5;
    func_0x00010c2ac460(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c2ac460(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010bfec2a0(uVar8);
    if (param_1 != 0) {
      func_0x00010bef9180(uVar8);
    }
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar8);
    return;
  }
  return;
}



/* Entry: 1065ad2f0; end: 1065ad4df;  */

void FUN_1065ad2f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2950;
  _objc_retain(param_2);
  func_0x00010bf36460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bfec2a0(param_4);
  if (param_1 != 0) {
    func_0x00010bef9180(param_4);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1065ad4e0; end: 1065ad547;  */

void FUN_1065ad4e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  (**(code **)(puVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065ad548; end: 1065ad553; +[SCChatGroupDataCoordinator dataCoordinatorIdentifier] */

undefined ** FUN_1065ad548(void)

{
  return &PTR____CFConstantStringClassReference_110e54d18;
}



/* Entry: 1065ad554; end: 1065ad55b; -[SCChatGroupDataCoordinator removeDataUpdateListener:] */

void FUN_1065ad554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1065ad55c; end: 1065ad5eb; -[SCChatGroupDataCoordinator handleDataRequest:] */

void FUN_1065ad55c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1065ad5ec;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1065ad5ec; end: 1065ad637;  */

void FUN_1065ad5ec(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126cb390;
  _objc_opt_class(PTR_PTR_1126cb390);
  _objc_opt_isKindOfClass(uVar2,puVar1);
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be253d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s__handleActiveConversationDataReq_112566e90,
               *(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 1065ad638; end: 1065ad75f; -[SCChatGroupDataCoordinator cachedGroupForId:withCompletion:] */

void FUN_1065ad638(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1065ad6f0;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065ad760; end: 1065ad84f; -[SCChatGroupDataCoordinator _announceChangeForGroup:withGroupId:] */

void FUN_1065ad760(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cb370;
  func_0x00010bf373a0(PTR_PTR_1126cb370,param_2,6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1065ad850;
  puStack_68 = &UNK_11084c4a0;
  uStack_60 = param_4;
  lStack_58 = param_1;
  uStack_50 = param_3;
  puStack_48 = puVar1;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_80);
  _objc_release(puStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1065ad850; end: 1065ad8ff;  */

void FUN_1065ad850(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0(uVar2,param_2,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28));
  if ((int)uVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(lVar1 + 0x48);
    *(undefined8 *)(lVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0cce60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2786a0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdcb810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s__announceDataCoordinatorUpdateWi_1125507a0,
               *(undefined8 *)(param_1 + 0x38));
    return;
  }
  return;
}



/* Entry: 1065ad900; end: 1065ad9b3; -[SCChatGroupDataCoordinator _announceDataCoordinatorUpdateWithDataRequestAndMetricsTracker:] */

void FUN_1065ad900(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bf63740();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126cbb90;
  _objc_alloc(PTR_PTR_1126cbb90);
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053e60(puVar1,param_2,puVar2,param_3);
  _objc_release(param_3);
  func_0x00010bf63720(uVar3,param_2,param_1,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065ad9b4; end: 1065ada9f; -[SCChatGroupDataCoordinator _handleActiveConversationDataRequest:] */

void FUN_1065ad9b4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cb390;
  _objc_opt_class(PTR_PTR_1126cb390);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c0bfca0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065adaa0; end: 1065adac3;  */

void FUN_1065adaa0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setActiveConversationId__112586000,param_2);
  return;
}



/* Entry: 1065adac4; end: 1065adc1b; -[SCChatGroupDataCoordinator _setActiveConversationId:] */

void FUN_1065adac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x38));
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bfcefc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1065adc1c; end: 1065adc8f;  */

void FUN_1065adc1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfceb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcb780(param_1);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065adc90; end: 1065add07; -[SCChatGroupDataCoordinator .cxx_destruct] */

void FUN_1065adc90(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 1065add08; end: 1065ade67; -[SCChatReactionsDataProvider initWithReactionMetadataProvider:currentUserId:] */

undefined1 *
FUN_1065add08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f1de8;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065ade68; end: 1065adeff; -[SCChatReactionsDataProvider setActiveConversation:] */

void FUN_1065ade68(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1065adf00;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1065adf00; end: 1065adf0b;  */

void FUN_1065adf00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be13690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchReactionsMetadataForConver_112562740,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1065adf0c; end: 1065adf33; -[SCChatReactionsDataProvider reactionMetadataObservable] */

void FUN_1065adf0c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065adf34; end: 1065adf9f; -[SCChatReactionsDataProvider _publishReactionMetadata] */

void FUN_1065adf34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cbbb8;
  _objc_alloc(PTR_PTR_1126cbbb8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  func_0x00010c03cf20(puVar1,param_2,uVar2,*(undefined1 *)(param_1 + 0x30));
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065adfa0; end: 1065adfc7; -[SCChatReactionsDataProvider _handleReactionsLoad:requestedIntentIds:] */

void FUN_1065adfa0(long param_1)

{
  func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010be842f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__publishReactionMetadata_11257ea58);
  return;
}



/* Entry: 1065adfc8; end: 1065ae473; -[SCChatReactionsDataProvider _fetchReactionsMetadataForConversation:] */

void FUN_1065adfc8(long param_1,undefined1 *param_2,undefined **param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined **ppuVar19;
  int iVar20;
  long lVar21;
  undefined **ppuVar22;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  ppuVar3 = param_3;
  func_0x00010c0cbb80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_260 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuStack_260 == (undefined **)0x0) {
    _objc_release(ppuVar3);
    bVar1 = *(byte *)(param_1 + 0x30);
    ppuVar19 = param_3;
  }
  else {
    ppuVar19 = (undefined **)0x0;
    lVar17 = *plStack_1b0;
    do {
      ppuStack_258 = (undefined **)0x0;
      do {
        if (*plStack_1b0 != lVar17) {
          _objc_enumerationMutation(ppuVar3);
        }
        lVar4 = *(long *)(lStack_1b8 + (long)ppuStack_258 * 8);
        lStack_1f8 = 0;
        uStack_200 = 0;
        uStack_1e8 = 0;
        plStack_1f0 = (long *)0x0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        func_0x00010c120dc0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf52a60();
        if (lVar5 != 0) {
          lVar18 = *plStack_1f0;
          do {
            lVar21 = 0;
            ppuVar10 = ppuVar19;
            do {
              if (*plStack_1f0 != lVar18) {
                _objc_enumerationMutation(lVar4);
              }
              ppuVar22 = *(undefined ***)(lStack_1f8 + lVar21 * 8);
              ppuVar6 = ppuVar22;
              func_0x00010c1209e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar19 = ppuVar6;
              func_0x00010c120a80();
              _objc_retainAutoreleasedReturnValue();
              ppuVar7 = ppuVar19;
              func_0x00010c0682a0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar19);
              if (ppuVar7 != (undefined **)0x0) {
                lVar8 = *(long *)(param_1 + 0x28);
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (lVar8 == 0) {
                  func_0x00010befa120(puVar2);
                }
              }
              iVar20 = (int)*(undefined8 *)(param_1 + 0x10);
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar19 = ppuVar22;
              func_0x00010c272380();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0720c0();
              if (iVar20 == 0) {
                _objc_release(ppuVar19);
                _objc_release(ppuVar22);
LAB_1065ae1d8:
                ppuVar22 = ppuVar6;
                func_0x00010c120b60();
                _objc_retainAutoreleasedReturnValue();
                ppuVar19 = ppuVar22;
                func_0x00010c0b4ca0();
                _objc_release(ppuVar22);
                if ((long)ppuVar19 <= (long)ppuVar10) {
                  ppuVar19 = ppuVar10;
                }
              }
              else {
                ppuVar9 = param_3;
                func_0x00010c07d680();
                _objc_release(ppuVar19);
                _objc_release(ppuVar22);
                ppuVar19 = ppuVar10;
                if (((ulong)ppuVar9 & 1) != 0) goto LAB_1065ae1d8;
              }
              _objc_release(ppuVar7);
              _objc_release(ppuVar6);
              lVar21 = lVar21 + 1;
              ppuVar10 = ppuVar19;
            } while (lVar5 != lVar21);
            lVar5 = lVar4;
            func_0x00010bf52a60();
          } while (lVar5 != 0);
        }
        _objc_release(lVar4);
        ppuStack_258 = (undefined **)((long)ppuStack_258 + 1);
      } while (ppuStack_258 != ppuStack_260);
      ppuStack_260 = ppuVar3;
      func_0x00010bf52a60();
    } while (ppuStack_260 != (undefined **)0x0);
    _objc_release(ppuVar3);
    bVar1 = *(byte *)(param_1 + 0x30);
    if (0 < (long)ppuVar19) {
      ppuVar3 = param_3;
      func_0x00010c08b1a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar3;
      func_0x00010c0b4ca0();
      *(byte *)(param_1 + 0x30) = (long)ppuVar10 < (long)ppuVar19;
      _objc_release(ppuVar3);
      goto LAB_1065ae2d4;
    }
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
LAB_1065ae2d4:
  puVar11 = puVar2;
  func_0x00010bf529e0();
  if (puVar11 == (undefined *)0x0) {
    if (((*(byte *)(param_1 + 0x30) | bVar1) & 1) != 0) {
      func_0x00010be842e0(param_1);
    }
  }
  else {
    _objc_initWeak(auStack_208,param_1);
    uVar12 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c120e60();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_230 = 0xc2000000;
    pcStack_228 = FUN_1065ae474;
    puStack_220 = &UNK_110851330;
    ppuVar19 = &puStack_238;
    param_2 = auStack_208;
    _objc_copyWeak(auStack_210,param_2);
    _objc_retain(puVar2);
    uVar16 = uVar15;
    puStack_218 = puVar2;
    func_0x00010c25ff60(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(puStack_218);
    _objc_destroyWeak(auStack_210);
    _objc_destroyWeak(auStack_208);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _objc_destroyWeak(ppuVar19 + 5);
    _objc_destroyWeak(auStack_208);
    __Unwind_Resume();
    _objc_retain(param_2);
    param_3 = param_3 + 5;
    _objc_loadWeakRetained(param_3);
    func_0x00010be2eb20();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1065ae474; end: 1065ae4c7;  */

void FUN_1065ae474(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2eb20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065ae4c8; end: 1065ae527; -[SCChatReactionsDataProvider .cxx_destruct] */

void FUN_1065ae4c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065ae528; end: 1065ae533; +[SCChatSnapchattersDataCoordinator dataCoordinatorIdentifier] */

undefined ** FUN_1065ae528(void)

{
  return &PTR____CFConstantStringClassReference_110e54d38;
}



/* Entry: 1065ae534; end: 1065ae53b; -[SCChatSnapchattersDataCoordinator removeDataUpdateListener:] */

void FUN_1065ae534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1065ae53c; end: 1065ae743; -[SCChatSnapchattersDataCoordinator activeSnapchattersDataForConversationId:completion:] */

void FUN_1065ae53c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1065ae5cc;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1065ae744; end: 1065ae7d3; -[SCChatSnapchattersDataCoordinator handleDataRequest:] */

void FUN_1065ae744(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1065ae7d4;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1065ae7d4; end: 1065ae84f;  */

void FUN_1065ae7d4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126cb390;
  _objc_opt_class(PTR_PTR_1126cb390);
  _objc_opt_isKindOfClass(uVar2,puVar1);
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be253d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s__handleActiveConversationDataReq_112566e90,
               *(undefined8 *)(param_1 + 0x20));
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126cba20;
  _objc_opt_class(PTR_PTR_1126cba20);
  _objc_opt_isKindOfClass(uVar2,puVar1);
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be25430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s__handleActiveRenderingConversati_112566ea8,
               *(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 1065ae850; end: 1065ae8cb; -[SCChatSnapchattersDataCoordinator didUpdateWithAnnouncerIdentifier:] */

void FUN_1065ae850(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f698f8);
  if ((int)param_3 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_1065ae8cc;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_48);
  }
  return;
}



/* Entry: 1065ae8cc; end: 1065aeb1b;  */

void FUN_1065ae8cc(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  ulong uVar11;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  long lStack_138;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c2444a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar3 = lVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = &uStack_130;
  iVar9 = (int)auStack_f0;
  lStack_138 = lVar3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    unaff_x19 = *plStack_120;
    lStack_140 = param_1;
    do {
      unaff_x21 = 0;
      do {
        if (*plStack_120 != unaff_x19) {
          _objc_enumerationMutation(lStack_138);
        }
        uVar11 = *(ulong *)(lStack_128 + unaff_x21 * 8);
        func_0x00010c0720c0();
        if ((uVar11 & 1) == 0) {
          lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x68);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar4 != 0) {
            uVar5 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x68);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar1;
            func_0x00010c0e00e0(lVar1);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar5;
            func_0x00010c071f40();
            _objc_release(lVar6);
            param_1 = lStack_140;
            _objc_release(uVar5);
            _objc_release(lVar4);
            unaff_x22 = lVar1;
            if ((uVar11 & 1) != 0) goto LAB_1065aea4c;
          }
          func_0x00010befa120(puVar2);
        }
LAB_1065aea4c:
        unaff_x21 = unaff_x21 + 1;
      } while (lVar3 != unaff_x21);
      puVar8 = &uStack_130;
      iVar9 = (int)auStack_f0;
      lVar3 = lStack_138;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lStack_138);
  puVar7 = puVar2;
  func_0x00010bf529e0();
  if (puVar7 != (undefined8 *)0x0) {
    lVar3 = lVar1;
    func_0x00010c0d3c80();
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
    *(long *)(*(long *)(param_1 + 0x20) + 0x68) = lVar3;
    _objc_release(uVar10);
    unaff_x22 = *(long *)(param_1 + 0x20);
    puVar7 = puVar2;
    func_0x00010bf51e00();
    iVar9 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
    puVar8 = puVar7;
    func_0x00010be14320(unaff_x22);
    _objc_release(puVar7);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_1065aeb1c;
  lStack_170 = unaff_x22;
  lStack_168 = unaff_x21;
  lStack_160 = param_1;
  lStack_158 = unaff_x19;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  if (iVar9 != 0) {
    _objc_initWeak(auStack_178,lVar1);
    uVar10 = *(undefined8 *)(lVar1 + 0x10);
    _objc_copyWeak(auStack_180,auStack_178);
    _objc_retain(puVar8);
    func_0x00010c0f7fc0(uVar10);
    _objc_release(puVar8);
    _objc_destroyWeak(auStack_180);
    _objc_destroyWeak(auStack_178);
  }
  _objc_release(puVar8);
  return;
}



/* Entry: 1065aeb1c; end: 1065aebfb; -[SCChatSnapchattersDataCoordinator didUpdateFriendStorySettingWithUpdateRequest:success:] */

void FUN_1065aeb1c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_4 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1065aebfc; end: 1065aec2f;  */

void FUN_1065aebfc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065aec30; end: 1065aed23; -[SCChatSnapchattersDataCoordinator _didUpdateFriendStorySettingWithUpdateRequest:] */

void FUN_1065aec30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    puStack_38 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 0;
    func_0x00010c0bede0(param_3);
    if (*(char *)(puStack_38 + 3) == '\x01') {
      func_0x00010bdcb7c0(param_1);
    }
    __Block_object_dispose(&uStack_40,8);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1065aed24; end: 1065aee1b;  */

void FUN_1065aed24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1065aee1c; end: 1065aee1f;  */

void FUN_1065aee1c(void)

{
  return;
}



/* Entry: 1065aee20; end: 1065aee23; -[SCChatSnapchattersDataCoordinator didStartSnapchattersUpdateDataRequest:] */

void FUN_1065aee20(void)

{
  return;
}



/* Entry: 1065aee24; end: 1065aef1f; -[SCChatSnapchattersDataCoordinator didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_1065aee24(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_3);
    uStack_40 = 1;
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1065aef20; end: 1065aef57;  */

void FUN_1065aef20(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065aef58; end: 1065af03f; -[SCChatSnapchattersDataCoordinator _didEndSnapchattersUpdateDataRequest:withSuccess:] */

void FUN_1065aef58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    puStack_38 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 0;
    func_0x00010c0bc6c0(param_3);
    if (*(char *)(puStack_38 + 3) == '\x01') {
      func_0x00010bdcb7c0(param_1);
    }
    __Block_object_dispose(&uStack_40,8);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1065af040; end: 1065af053;  */

void FUN_1065af040(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1065af054; end: 1065af13f; -[SCChatSnapchattersDataCoordinator _handleActiveConversationDataRequest:] */

void FUN_1065af054(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cb390;
  _objc_opt_class(PTR_PTR_1126cb390);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c0bfca0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065af140; end: 1065af15f;  */

void FUN_1065af140(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setActiveConversation_metadata__112585ff8,
             param_2,param_3);
  return;
}



/* Entry: 1065af160; end: 1065af1ef;  */

void FUN_1065af160(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c0720c0(uVar1,param_2,param_2);
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48) = 0;
    _objc_release(uVar1);
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x58) = 0;
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50) = 0;
    _objc_release(uVar1);
    func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60));
    func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68));
    func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010c12b130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40),
               PTR_s_removeAllTrackedSnapchatters_112628668);
    return;
  }
  return;
}



/* Entry: 1065af1f0; end: 1065af383; -[SCChatSnapchattersDataCoordinator _handleActiveRenderingConversationDataRequest:] */

void FUN_1065af1f0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x48) != 0) {
    puVar1 = PTR_PTR_1126cba20;
    _objc_opt_class(PTR_PTR_1126cba20);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    uVar3 = param_3;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    uVar2 = uVar3;
    func_0x00010bf500c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    iVar8 = (int)*(undefined8 *)(param_1 + 0x48);
    uVar3 = uVar2;
    func_0x00010bfe5d80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if (iVar8 != 0) {
      uVar3 = uVar2;
      func_0x00010c0cbb80(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0f4aa0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c086fa0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c074920(uVar2);
      lVar6 = param_1;
      func_0x00010bea6060(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      lVar7 = lVar6;
      func_0x00010bf51e00(lVar6);
      uVar3 = uVar2;
      func_0x00010bfe5d80(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be14320(param_1);
      _objc_release(uVar3);
      _objc_release(lVar7);
      _objc_release(lVar6);
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


