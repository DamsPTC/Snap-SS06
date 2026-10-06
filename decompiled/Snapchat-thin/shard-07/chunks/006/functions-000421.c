/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057bd8a0; end: 1057bd93f;  */

void FUN_1057bd8a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bed40c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),param_3,param_4);
    func_0x00010bdcb6e0(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057bd940; end: 1057bd9b3;  */

void FUN_1057bd940(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdcc0a0(param_1,param_2,param_3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057bd9b4; end: 1057bda2f; -[SCCommerceUnifiedCartCoordinator _cancelArtifactRequestForLineItem:] */

void FUN_1057bd9b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2de40();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057bda30; end: 1057bdb4f; -[SCCommerceUnifiedCartCoordinator _updateBitmojiItemWithLineItem:productImageUrl:highResAssetUrl:] */

void FUN_1057bda30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1057bdb50;
  puStack_50 = &UNK_1108b2888;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_68,0,0);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057bdb50; end: 1057be24b;  */

void FUN_1057bdb50(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined4 uStack_464;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 uStack_450;
  undefined **ppuStack_448;
  undefined4 uStack_440;
  undefined4 uStack_430;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  undefined1 uStack_3d1;
  undefined **ppuStack_3d0;
  undefined4 uStack_3c8;
  undefined2 uStack_3b8;
  byte bStack_3b6;
  byte bStack_3b5;
  undefined1 *puStack_398;
  undefined ***pppuStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  long *plStack_368;
  undefined **ppuStack_360;
  undefined4 uStack_358;
  undefined4 uStack_348;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined1 uStack_2e9;
  undefined **ppuStack_2e8;
  undefined4 uStack_2e0;
  undefined2 uStack_2d0;
  byte bStack_2ce;
  byte bStack_2cd;
  undefined1 *puStack_2b0;
  undefined ***pppuStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long *plStack_288;
  long *plStack_280;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined4 uStack_260;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined1 uStack_201;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  undefined2 uStack_1e8;
  undefined2 uStack_1e6;
  undefined1 *puStack_1c8;
  undefined ***pppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126be530);
  if (param_2 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_2);
  }
  puVar2 = &uStack_201;
  FUN_1057bf8e4();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  uStack_270 = 0xf;
  uStack_260 = 0x100;
  _objc_retain();
  ppuStack_278 = &PTR_SUB_110862760;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  puStack_230 = (undefined *)0x0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  plStack_210 = (long *)0x0;
  uStack_1e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_1f8 = 10;
  uStack_1e8 = 0x100;
  ppuStack_200 = &PTR_FUN_110862700;
  uStack_1b0 = 0;
  puStack_1b8 = (undefined *)0x0;
  plStack_1a0 = (long *)0x0;
  uStack_1a8 = 0;
  plStack_198 = (long *)0x0;
  puVar4 = &uStack_2e9;
  uStack_248 = uVar3;
  puStack_1c8 = puVar2;
  pppuStack_1c0 = &ppuStack_278;
  FUN_1057bf76c();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c115e60();
  _objc_retainAutoreleasedReturnValue();
  uStack_358 = 0xf;
  uStack_348 = 0x100;
  _objc_retain();
  ppuStack_360 = &PTR_SUB_110862760;
  uStack_320 = 0;
  uStack_328 = 0;
  uStack_310 = 0;
  puStack_318 = (undefined *)0x0;
  plStack_300 = (long *)0x0;
  uStack_308 = 0;
  plStack_2f8 = (long *)0x0;
  bStack_2ce = puVar4[0x1a];
  bStack_2cd = puVar4[0x1b];
  uStack_2e0 = 10;
  uStack_2d0 = 0x100;
  ppuStack_2e8 = &PTR_FUN_110862700;
  pppuStack_150 = &ppuStack_2e8;
  uStack_298 = 0;
  puStack_2a0 = (undefined *)0x0;
  plStack_288 = (long *)0x0;
  uStack_290 = 0;
  plStack_280 = (long *)0x0;
  bStack_176 = (byte)uStack_1e6 | bStack_2ce;
  bStack_175 = uStack_1e6._1_1_ & bStack_2cd;
  uStack_188 = 4;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_SUB_1108629c8;
  pppuStack_158 = &ppuStack_200;
  plStack_128 = (long *)0x0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_148 = 0;
  puVar2 = &uStack_3d1;
  uStack_330 = uVar5;
  puStack_2b0 = puVar4;
  pppuStack_2a8 = &ppuStack_360;
  FUN_1057bfbd4();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2975a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_440 = 0xf;
  uStack_430 = 0x100;
  _objc_retain();
  ppuStack_448 = &PTR_SUB_110862760;
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  plStack_3e8 = (long *)0x0;
  uStack_3f0 = 0;
  plStack_3e0 = (long *)0x0;
  bStack_3b6 = puVar2[0x1a];
  bStack_3b5 = puVar2[0x1b];
  uStack_3c8 = 10;
  uStack_3b8 = 0x100;
  ppuStack_3d0 = &PTR_FUN_110862700;
  pppuStack_e0 = &ppuStack_3d0;
  uStack_380 = 0;
  uStack_388 = 0;
  plStack_370 = (long *)0x0;
  uStack_378 = 0;
  plStack_368 = (long *)0x0;
  bStack_106 = bStack_176 | bStack_3b6;
  bStack_105 = bStack_175 & bStack_3b5;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  puStack_460 = (undefined8 *)0x0;
  puStack_458 = (undefined8 *)0x0;
  uStack_450 = 0;
  uStack_464 = 0;
  puVar7 = &uStack_b0;
  uStack_418 = uVar6;
  puStack_398 = puVar2;
  pppuStack_390 = &ppuStack_448;
  pppuStack_e8 = &ppuStack_190;
  func_0x0001000e77a0(puVar7,&ppuStack_120,&puStack_460,&uStack_464);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_460 != (undefined8 *)0x0) {
    puStack_458 = puStack_460;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_368;
  ppuStack_3d0 = &PTR_FUN_110862700;
  plStack_368 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_370;
  plStack_370 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_460 = &uStack_388;
  func_0x000100105004(&puStack_460);
  plVar1 = plStack_3e0;
  ppuStack_448 = &PTR_SUB_110862760;
  plStack_3e0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3e8;
  plStack_3e8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_460 = &uStack_400;
  func_0x000100105004(&puStack_460);
  _objc_release(uStack_418);
  _objc_release(uVar6);
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_SUB_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_280;
  ppuStack_2e8 = &PTR_FUN_110862700;
  plStack_280 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_288;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_3d0 = &puStack_2a0;
  func_0x000100105004(&ppuStack_3d0);
  plVar1 = plStack_2f8;
  ppuStack_360 = &PTR_SUB_110862760;
  plStack_2f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_300;
  plStack_300 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_3d0 = &puStack_318;
  func_0x000100105004(&ppuStack_3d0);
  _objc_release(uStack_330);
  _objc_release(uVar5);
  plVar1 = plStack_198;
  ppuStack_200 = &PTR_FUN_110862700;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_2e8 = &puStack_1b8;
  func_0x000100105004(&ppuStack_2e8);
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_SUB_110862760;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_2e8 = &puStack_230;
  func_0x000100105004(&ppuStack_2e8);
  _objc_release(uStack_248);
  _objc_release(uVar3);
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  puVar8 = puVar7;
  func_0x00010bf529e0();
  puVar9 = PTR_PTR_1126be538;
  if (puVar8 != (undefined8 *)0x0) {
    puVar8 = puVar7;
    func_0x00010c0dfd40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    FUN_1057c1b38(puVar9,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    if (puVar9 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar9);
      _objc_setProperty_nonatomic_copy(puVar9);
    }
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar9);
  }
  _objc_release(puVar7);
  _objc_release(param_2);
  return;
}



/* Entry: 1057be24c; end: 1057be3f3; -[SCCommerceUnifiedCartCoordinator _announceLineItemArtifactFetchingFailure:] */

void FUN_1057be24c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  lVar2 = param_3;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c257800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(lVar2);
  }
  _objc_initWeak(auStack_48,param_1);
  uVar3 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1057be3f4;
  puStack_60 = &UNK_110896d48;
  _objc_copyWeak(auStack_50,auStack_48);
  puStack_58 = puVar1;
  _objc_retain(puVar1);
  func_0x00010007380c(uVar3,&puStack_78);
  _objc_release(uVar3);
  _objc_release(puStack_58);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1057be3f4; end: 1057be49b;  */

void FUN_1057be3f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    lVar2 = lVar1;
    _objc_opt_class(lVar1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e890b8,lVar2,
                        *(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057be49c; end: 1057be4d7; -[SCCommerceUnifiedCartCoordinator .cxx_destruct] */

void FUN_1057be49c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057be4d8; end: 1057be5bb;  */

undefined4 FUN_1057be4d8(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  (*param_3)(param_1,&bStack_41);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  (*param_3)(param_2,&bStack_42);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 2;
  if (bStack_42 == 0) {
    uVar5 = 0;
  }
  if (bStack_41 == 0) {
    uVar5 = 1;
  }
  if (((bStack_41 & 1) == 0) && ((bStack_42 & 1) == 0)) {
    lVar3 = lVar1;
    func_0x00010bf433a0();
    uVar4 = 1;
    if (lVar3 != 1) {
      uVar4 = 2;
    }
    uVar5 = 0;
    if (lVar3 != -1) {
      uVar5 = uVar4;
    }
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 1057be5bc; end: 1057bec47; -[SCCommercePersistentCartUnifiedLineItem initWithIdentifier:productId:storeId:storeName:storeIconUrl:quantity:maxQuantity:title:variantDescription:unitPrice:strikethroughUnitPrice:currency:productIconUrl:returnPolicyUrl:bitmojiAvatarIds:comicId:assetId:productImageUrl:highResAssetUrl:variantId:userIds:thumbnailImageModel:isFromLegacyStore:isNativeCheckoutEligible:thumbnailOriginSize:thumbnailMaxOutputSize:frames:type:taxable:requiresShipping:pixelItemId:isThirdPartyStore:snapCommercePolicy:storeTermsPolicy:doesShipToUserLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1057be5bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined4 param_25,undefined4 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined4 param_31,undefined4 param_32,
             undefined8 param_33,undefined1 param_34,undefined4 param_35,undefined8 param_36,
             undefined8 param_37,undefined1 param_38)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_33);
  _objc_retain(param_36);
  _objc_retain(param_37);
  puStack_70 = PTR_PTR_1126ea420;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127298e8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127298e8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127298ec);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127298ec) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127298f0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127298f0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127298f4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127298f4) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127298f8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127298f8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127298fc) = param_8;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112729900) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112729904);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112729904) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112729908);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112729908) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272990c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272990c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112729910);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112729910) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112729914);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112729914) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112729918);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112729918) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272991c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272991c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112729920);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112729920) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112729924);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112729924) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112729928);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112729928) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272992c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272992c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112729930);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112729930) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112729934);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112729934) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_23;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112729938);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112729938) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_24;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272993c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272993c) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112729940) = (undefined1)param_25;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112729944) = param_25._1_1_;
    uVar2 = param_27;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112729948);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112729948) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_28;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272994c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272994c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_29;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112729950);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112729950) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_30;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112729954);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112729954) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112729958) = (undefined1)param_31;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11272995c) = param_31._1_1_;
    uVar2 = param_33;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112729960);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112729960) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112729964) = param_34;
    uVar2 = param_36;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112729968);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112729968) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_37;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272996c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272996c) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112729970) = param_38;
  }
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_33);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1057bec48; end: 1057bec6b; -[SCCommercePersistentCartUnifiedLineItem copyWithZone:] */

undefined8 FUN_1057bec48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1057bec6c; end: 1057beed3; -[SCCommercePersistentCartUnifiedLineItem hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1057bec6c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
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
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  long lStack_38;
  
  puVar3 = &uStack_150;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127298e8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127298ec);
  uStack_150 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127298f0);
  uStack_148 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127298f4);
  uStack_140 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127298f8);
  uStack_138 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + _DAT_1127298fc);
  lStack_128 = -lVar5;
  if (-1 < lVar5) {
    lStack_128 = lVar5;
  }
  lVar5 = *(long *)(param_1 + _DAT_112729900);
  lStack_120 = -lVar5;
  if (-1 < lVar5) {
    lStack_120 = lVar5;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112729904);
  uStack_130 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112729908);
  uStack_118 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272990c);
  uStack_110 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112729910);
  uStack_108 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112729914);
  uStack_100 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112729918);
  uStack_f8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272991c);
  uStack_f0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112729920);
  uStack_e8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112729924);
  uStack_e0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112729928);
  uStack_d8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272992c);
  uStack_d0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112729930);
  uStack_c8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112729934);
  uStack_c0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112729938);
  uStack_b8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272993c);
  uStack_b0 = uVar1;
  func_0x00010bfde980();
  uStack_a0 = (ulong)*(byte *)(param_1 + _DAT_112729940);
  uStack_98 = (ulong)*(byte *)(param_1 + _DAT_112729944);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112729948);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272994c);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112729950);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112729954);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uStack_70 = (ulong)*(byte *)(param_1 + _DAT_112729958);
  uStack_68 = (ulong)*(byte *)(param_1 + _DAT_11272995c);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112729960);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + _DAT_112729964);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112729968);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272996c);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + _DAT_112729970);
  uStack_48 = uVar1;
  func_0x000100505190(&uStack_150,0x23);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1057bf344:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1057bf350;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((*(long *)((long)puVar3 + (long)_DAT_1127298fc) == *(long *)(param_3 + _DAT_1127298fc)
            && (*(long *)((long)puVar3 + (long)_DAT_112729900) ==
                *(long *)(param_3 + _DAT_112729900))) &&
           (*(char *)((long)puVar3 + (long)_DAT_112729940) == param_3[_DAT_112729940])) &&
          ((*(char *)((long)puVar3 + (long)_DAT_112729944) == param_3[_DAT_112729944] &&
           (*(char *)((long)puVar3 + (long)_DAT_112729958) == param_3[_DAT_112729958])))))) &&
        (*(char *)((long)puVar3 + (long)_DAT_11272995c) == param_3[_DAT_11272995c])) &&
       ((*(char *)((long)puVar3 + (long)_DAT_112729964) == param_3[_DAT_112729964] &&
        (*(char *)((long)puVar3 + (long)_DAT_112729970) == param_3[_DAT_112729970])))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127298e8);
      if ((lVar5 == *(long *)(param_3 + _DAT_1127298e8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127298ec);
        if ((lVar5 == *(long *)(param_3 + _DAT_1127298ec)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127298f0);
          if ((lVar5 == *(long *)(param_3 + _DAT_1127298f0)) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127298f4);
            if ((lVar5 == *(long *)(param_3 + _DAT_1127298f4)) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127298f8);
              if ((lVar5 == *(long *)(param_3 + _DAT_1127298f8)) ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = *(long *)((long)puVar3 + (long)_DAT_112729904);
                if ((lVar5 == *(long *)(param_3 + _DAT_112729904)) ||
                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = *(long *)((long)puVar3 + (long)_DAT_112729908);
                  if ((lVar5 == *(long *)(param_3 + _DAT_112729908)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + (long)_DAT_11272990c);
                    if ((lVar5 == *(long *)(param_3 + _DAT_11272990c)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112729910);
                      if ((lVar5 == *(long *)(param_3 + _DAT_112729910)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)puVar3 + (long)_DAT_112729914);
                        if ((lVar5 == *(long *)(param_3 + _DAT_112729914)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = *(long *)((long)puVar3 + (long)_DAT_112729918);
                          if ((lVar5 == *(long *)(param_3 + _DAT_112729918)) ||
                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = *(long *)((long)puVar3 + (long)_DAT_11272991c);
                            if ((lVar5 == *(long *)(param_3 + _DAT_11272991c)) ||
                               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                              lVar5 = *(long *)((long)puVar3 + (long)_DAT_112729920);
                              if ((lVar5 == *(long *)(param_3 + _DAT_112729920)) ||
                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                lVar5 = *(long *)((long)puVar3 + (long)_DAT_112729924);
                                if ((lVar5 == *(long *)(param_3 + _DAT_112729924)) ||
                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                  lVar5 = *(long *)((long)puVar3 + (long)_DAT_112729928);
                                  if ((lVar5 == *(long *)(param_3 + _DAT_112729928)) ||
                                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                    lVar5 = *(long *)((long)puVar3 + (long)_DAT_11272992c);
                                    if ((lVar5 == *(long *)(param_3 + _DAT_11272992c)) ||
                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112729930);
                                      if ((lVar5 == *(long *)(param_3 + _DAT_112729930)) ||
                                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                        lVar5 = *(long *)((long)puVar3 + (long)_DAT_112729934);
                                        if ((lVar5 == *(long *)(param_3 + _DAT_112729934)) ||
                                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                          lVar5 = *(long *)((long)puVar3 + (long)_DAT_112729938);
                                          if ((lVar5 == *(long *)(param_3 + _DAT_112729938)) ||
                                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                            lVar5 = *(long *)((long)puVar3 + (long)_DAT_11272993c);
                                            if ((lVar5 == *(long *)(param_3 + _DAT_11272993c)) ||
                                               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                              lVar5 = *(long *)((long)puVar3 + (long)_DAT_112729948)
                                              ;
                                              if ((lVar5 == *(long *)(param_3 + _DAT_112729948)) ||
                                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                lVar5 = *(long *)((long)puVar3 +
                                                                 (long)_DAT_11272994c);
                                                if ((lVar5 == *(long *)(param_3 + _DAT_11272994c))
                                                   || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                  lVar5 = *(long *)((long)puVar3 +
                                                                   (long)_DAT_112729950);
                                                  if ((lVar5 == *(long *)(param_3 + _DAT_112729950))
                                                     || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                    lVar5 = *(long *)((long)puVar3 +
                                                                     (long)_DAT_112729954);
                                                    if ((lVar5 == *(long *)(param_3 + _DAT_112729954
                                                                           )) ||
                                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                      lVar5 = *(long *)((long)puVar3 +
                                                                       (long)_DAT_112729960);
                                                      if ((lVar5 == *(long *)(param_3 +
                                                                             _DAT_112729960)) ||
                                                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                        lVar5 = *(long *)((long)puVar3 +
                                                                         (long)_DAT_112729968);
                                                        if ((lVar5 == *(long *)(param_3 +
                                                                               _DAT_112729968)) ||
                                                           (func_0x00010c071ae0(), (int)lVar5 != 0))
                                                        {
                                                          puVar6 = *(undefined1 **)
                                                                    ((long)puVar3 +
                                                                    (long)_DAT_11272996c);
                                                          if (puVar6 != *(undefined1 **)
                                                                         (param_3 + _DAT_11272996c))
                                                          {
                                                            func_0x00010c071ae0();
                                                            goto LAB_1057bf350;
                                                          }
                                                          goto LAB_1057bf344;
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
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1057bf350:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1057beed4; end: 1057bf36b; -[SCCommercePersistentCartUnifiedLineItem isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1057beed4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1057bf344:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1057bf350;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + (long)_DAT_1127298fc) == *(long *)(param_3 + (long)_DAT_1127298fc)
            && (*(long *)(param_1 + (long)_DAT_112729900) ==
                *(long *)(param_3 + (long)_DAT_112729900))) &&
           (*(char *)(param_1 + (long)_DAT_112729940) == *(char *)(param_3 + (long)_DAT_112729940)))
          && ((*(char *)(param_1 + (long)_DAT_112729944) ==
               *(char *)(param_3 + (long)_DAT_112729944) &&
              (*(char *)(param_1 + (long)_DAT_112729958) ==
               *(char *)(param_3 + (long)_DAT_112729958))))))) &&
        (*(char *)(param_1 + (long)_DAT_11272995c) == *(char *)(param_3 + (long)_DAT_11272995c))) &&
       ((*(char *)(param_1 + (long)_DAT_112729964) == *(char *)(param_3 + (long)_DAT_112729964) &&
        (*(char *)(param_1 + (long)_DAT_112729970) == *(char *)(param_3 + (long)_DAT_112729970)))))
    {
      lVar3 = *(long *)(param_1 + (long)_DAT_1127298e8);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127298e8)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_1127298ec);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127298ec)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_1127298f0);
          if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127298f0)) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + (long)_DAT_1127298f4);
            if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127298f4)) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + (long)_DAT_1127298f8);
              if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127298f8)) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                lVar3 = *(long *)(param_1 + (long)_DAT_112729904);
                if ((lVar3 == *(long *)(param_3 + (long)_DAT_112729904)) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                  lVar3 = *(long *)(param_1 + (long)_DAT_112729908);
                  if ((lVar3 == *(long *)(param_3 + (long)_DAT_112729908)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + (long)_DAT_11272990c);
                    if ((lVar3 == *(long *)(param_3 + (long)_DAT_11272990c)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + (long)_DAT_112729910);
                      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112729910)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + (long)_DAT_112729914);
                        if ((lVar3 == *(long *)(param_3 + (long)_DAT_112729914)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + (long)_DAT_112729918);
                          if ((lVar3 == *(long *)(param_3 + (long)_DAT_112729918)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + (long)_DAT_11272991c);
                            if ((lVar3 == *(long *)(param_3 + (long)_DAT_11272991c)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + (long)_DAT_112729920);
                              if ((lVar3 == *(long *)(param_3 + (long)_DAT_112729920)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + (long)_DAT_112729924);
                                if ((lVar3 == *(long *)(param_3 + (long)_DAT_112729924)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + (long)_DAT_112729928);
                                  if ((lVar3 == *(long *)(param_3 + (long)_DAT_112729928)) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                    lVar3 = *(long *)(param_1 + (long)_DAT_11272992c);
                                    if ((lVar3 == *(long *)(param_3 + (long)_DAT_11272992c)) ||
                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                      lVar3 = *(long *)(param_1 + (long)_DAT_112729930);
                                      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112729930)) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                        lVar3 = *(long *)(param_1 + (long)_DAT_112729934);
                                        if ((lVar3 == *(long *)(param_3 + (long)_DAT_112729934)) ||
                                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                          lVar3 = *(long *)(param_1 + (long)_DAT_112729938);
                                          if ((lVar3 == *(long *)(param_3 + (long)_DAT_112729938))
                                             || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                            lVar3 = *(long *)(param_1 + (long)_DAT_11272993c);
                                            if ((lVar3 == *(long *)(param_3 + (long)_DAT_11272993c))
                                               || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                              lVar3 = *(long *)(param_1 + (long)_DAT_112729948);
                                              if ((lVar3 == *(long *)(param_3 + (long)_DAT_112729948
                                                                     )) ||
                                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                lVar3 = *(long *)(param_1 + (long)_DAT_11272994c);
                                                if ((lVar3 == *(long *)(param_3 +
                                                                       (long)_DAT_11272994c)) ||
                                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                  lVar3 = *(long *)(param_1 + (long)_DAT_112729950);
                                                  if ((lVar3 == *(long *)(param_3 +
                                                                         (long)_DAT_112729950)) ||
                                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                    lVar3 = *(long *)(param_1 + (long)_DAT_112729954
                                                                     );
                                                    if ((lVar3 == *(long *)(param_3 +
                                                                           (long)_DAT_112729954)) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                      lVar3 = *(long *)(param_1 +
                                                                       (long)_DAT_112729960);
                                                      if ((lVar3 == *(long *)(param_3 +
                                                                             (long)_DAT_112729960))
                                                         || (func_0x00010c071ae0(), (int)lVar3 != 0)
                                                         ) {
                                                        lVar3 = *(long *)(param_1 +
                                                                         (long)_DAT_112729968);
                                                        if ((lVar3 == *(long *)(param_3 +
                                                                               (long)_DAT_112729968)
                                                            ) || (func_0x00010c071ae0(),
                                                                 (int)lVar3 != 0)) {
                                                          lVar3 = *(long *)(param_1 +
                                                                           (long)_DAT_11272996c);
                                                          if (lVar3 != *(long *)(param_3 +
                                                                                (long)_DAT_11272996c
                                                                                )) {
                                                            func_0x00010c071ae0();
                                                            goto LAB_1057bf350;
                                                          }
                                                          goto LAB_1057bf344;
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
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1057bf350:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1057bf36c; end: 1057bf37b; -[SCCommercePersistentCartUnifiedLineItem identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf36c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127298e8);
}



/* Entry: 1057bf37c; end: 1057bf38b; -[SCCommercePersistentCartUnifiedLineItem productId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf37c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127298ec);
}



/* Entry: 1057bf38c; end: 1057bf39b; -[SCCommercePersistentCartUnifiedLineItem storeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf38c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127298f0);
}



/* Entry: 1057bf39c; end: 1057bf3ab; -[SCCommercePersistentCartUnifiedLineItem storeName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf39c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127298f4);
}



/* Entry: 1057bf3ac; end: 1057bf3bb; -[SCCommercePersistentCartUnifiedLineItem storeIconUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf3ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127298f8);
}



/* Entry: 1057bf3bc; end: 1057bf3cb; -[SCCommercePersistentCartUnifiedLineItem quantity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf3bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127298fc);
}



/* Entry: 1057bf3cc; end: 1057bf3db; -[SCCommercePersistentCartUnifiedLineItem maxQuantity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf3cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112729900);
}



/* Entry: 1057bf3dc; end: 1057bf3eb; -[SCCommercePersistentCartUnifiedLineItem title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf3dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112729904);
}



/* Entry: 1057bf3ec; end: 1057bf3fb; -[SCCommercePersistentCartUnifiedLineItem variantDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf3ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112729908);
}



/* Entry: 1057bf3fc; end: 1057bf40b; -[SCCommercePersistentCartUnifiedLineItem unitPrice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf3fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272990c);
}



/* Entry: 1057bf40c; end: 1057bf41b; -[SCCommercePersistentCartUnifiedLineItem strikethroughUnitPrice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf40c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112729910);
}



/* Entry: 1057bf41c; end: 1057bf42b; -[SCCommercePersistentCartUnifiedLineItem currency] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf41c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112729914);
}



/* Entry: 1057bf42c; end: 1057bf43b; -[SCCommercePersistentCartUnifiedLineItem productIconUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf42c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112729918);
}



/* Entry: 1057bf43c; end: 1057bf44b; -[SCCommercePersistentCartUnifiedLineItem returnPolicyUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf43c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272991c);
}



/* Entry: 1057bf44c; end: 1057bf45b; -[SCCommercePersistentCartUnifiedLineItem bitmojiAvatarIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf44c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112729920);
}



/* Entry: 1057bf45c; end: 1057bf46b; -[SCCommercePersistentCartUnifiedLineItem comicId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf45c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112729924);
}



/* Entry: 1057bf46c; end: 1057bf47b; -[SCCommercePersistentCartUnifiedLineItem assetId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf46c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112729928);
}



/* Entry: 1057bf47c; end: 1057bf48b; -[SCCommercePersistentCartUnifiedLineItem productImageUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf47c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272992c);
}



/* Entry: 1057bf48c; end: 1057bf49b; -[SCCommercePersistentCartUnifiedLineItem highResAssetUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf48c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112729930);
}



/* Entry: 1057bf49c; end: 1057bf4ab; -[SCCommercePersistentCartUnifiedLineItem variantId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf49c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112729934);
}



/* Entry: 1057bf4ac; end: 1057bf4bb; -[SCCommercePersistentCartUnifiedLineItem userIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf4ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112729938);
}



/* Entry: 1057bf4bc; end: 1057bf4cb; -[SCCommercePersistentCartUnifiedLineItem thumbnailImageModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf4bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272993c);
}



/* Entry: 1057bf4cc; end: 1057bf4db; -[SCCommercePersistentCartUnifiedLineItem isFromLegacyStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1057bf4cc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112729940);
}



/* Entry: 1057bf4dc; end: 1057bf4eb; -[SCCommercePersistentCartUnifiedLineItem isNativeCheckoutEligible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1057bf4dc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112729944);
}



/* Entry: 1057bf4ec; end: 1057bf4fb; -[SCCommercePersistentCartUnifiedLineItem thumbnailOriginSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf4ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112729948);
}



/* Entry: 1057bf4fc; end: 1057bf50b; -[SCCommercePersistentCartUnifiedLineItem thumbnailMaxOutputSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf4fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272994c);
}



/* Entry: 1057bf50c; end: 1057bf51b; -[SCCommercePersistentCartUnifiedLineItem frames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf50c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112729950);
}



/* Entry: 1057bf51c; end: 1057bf52b; -[SCCommercePersistentCartUnifiedLineItem type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf51c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112729954);
}



/* Entry: 1057bf52c; end: 1057bf53b; -[SCCommercePersistentCartUnifiedLineItem taxable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1057bf52c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112729958);
}



/* Entry: 1057bf53c; end: 1057bf54b; -[SCCommercePersistentCartUnifiedLineItem requiresShipping] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1057bf53c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11272995c);
}



/* Entry: 1057bf54c; end: 1057bf55b; -[SCCommercePersistentCartUnifiedLineItem pixelItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf54c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112729960);
}



/* Entry: 1057bf55c; end: 1057bf56b; -[SCCommercePersistentCartUnifiedLineItem isThirdPartyStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1057bf55c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112729964);
}



/* Entry: 1057bf56c; end: 1057bf57b; -[SCCommercePersistentCartUnifiedLineItem snapCommercePolicy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf56c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112729968);
}



/* Entry: 1057bf57c; end: 1057bf58b; -[SCCommercePersistentCartUnifiedLineItem storeTermsPolicy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057bf57c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272996c);
}



/* Entry: 1057bf58c; end: 1057bf59b; -[SCCommercePersistentCartUnifiedLineItem doesShipToUserLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1057bf58c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112729970);
}



/* Entry: 1057bf59c; end: 1057bf76b; -[SCCommercePersistentCartUnifiedLineItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057bf59c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272996c,0);
  _objc_storeStrong(param_1 + _DAT_112729968,0);
  _objc_storeStrong(param_1 + _DAT_112729960,0);
  _objc_storeStrong(param_1 + _DAT_112729954,0);
  _objc_storeStrong(param_1 + _DAT_112729950,0);
  _objc_storeStrong(param_1 + _DAT_11272994c,0);
  _objc_storeStrong(param_1 + _DAT_112729948,0);
  _objc_storeStrong(param_1 + _DAT_11272993c,0);
  _objc_storeStrong(param_1 + _DAT_112729938,0);
  _objc_storeStrong(param_1 + _DAT_112729934,0);
  _objc_storeStrong(param_1 + _DAT_112729930,0);
  _objc_storeStrong(param_1 + _DAT_11272992c,0);
  _objc_storeStrong(param_1 + _DAT_112729928,0);
  _objc_storeStrong(param_1 + _DAT_112729924,0);
  _objc_storeStrong(param_1 + _DAT_112729920,0);
  _objc_storeStrong(param_1 + _DAT_11272991c,0);
  _objc_storeStrong(param_1 + _DAT_112729918,0);
  _objc_storeStrong(param_1 + _DAT_112729914,0);
  _objc_storeStrong(param_1 + _DAT_112729910,0);
  _objc_storeStrong(param_1 + _DAT_11272990c,0);
  _objc_storeStrong(param_1 + _DAT_112729908,0);
  _objc_storeStrong(param_1 + _DAT_112729904,0);
  _objc_storeStrong(param_1 + _DAT_1127298f8,0);
  _objc_storeStrong(param_1 + _DAT_1127298f4,0);
  _objc_storeStrong(param_1 + _DAT_1127298f0,0);
  _objc_storeStrong(param_1 + _DAT_1127298ec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127298e8,0);
  return;
}



/* Entry: 1057bf76c; end: 1057bf7cf;  */

undefined ** FUN_1057bf76c(void)

{
  int iVar1;
  
  if ((bRam000000011381a1b0 & 1) == 0) {
    iVar1 = 0x1381a1b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_113100180,0x100000000);
      ___cxa_guard_release(0x11381a1b0);
    }
  }
  return &PTR_PTR_113100180;
}



/* Entry: 1057bf7d0; end: 1057bf857;  */

void FUN_1057bf7d0(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 7) || (puVar1[3] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057bf858; end: 1057bf8e3;  */

void FUN_1057bf858(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c115e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c115e60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057bf8e4; end: 1057bf947;  */

undefined ** FUN_1057bf8e4(void)

{
  int iVar1;
  
  if ((bRam000000011381a1b8 & 1) == 0) {
    iVar1 = 0x1381a1b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1131001f0,0x100000000);
      ___cxa_guard_release(0x11381a1b8);
    }
  }
  return &PTR_PTR_1131001f0;
}



/* Entry: 1057bf948; end: 1057bf9cf;  */

void FUN_1057bf948(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 9) || (puVar1[4] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057bf9d0; end: 1057bfa5b;  */

void FUN_1057bf9d0(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c257800(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057bfa5c; end: 1057bfabf;  */

undefined ** FUN_1057bfa5c(void)

{
  int iVar1;
  
  if ((bRam000000011381a1c0 & 1) == 0) {
    iVar1 = 0x1381a1c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_113100260,0x100000000);
      ___cxa_guard_release(0x11381a1c0);
    }
  }
  return &PTR_PTR_113100260;
}



/* Entry: 1057bfac0; end: 1057bfb47;  */

void FUN_1057bfac0(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 0x27) || (puVar1[0x13] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057bfb48; end: 1057bfbd3;  */

void FUN_1057bfb48(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf41a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bf41a00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057bfbd4; end: 1057bfc37;  */

undefined ** FUN_1057bfbd4(void)

{
  int iVar1;
  
  if ((bRam000000011381a1c8 & 1) == 0) {
    iVar1 = 0x1381a1c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1131002d0,0x100000000);
      ___cxa_guard_release(0x11381a1c8);
    }
  }
  return &PTR_PTR_1131002d0;
}



/* Entry: 1057bfc38; end: 1057bfcbf;  */

void FUN_1057bfc38(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 0x2f) || (puVar1[0x17] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057bfcc0; end: 1057bfd4b;  */

void FUN_1057bfcc0(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c2975a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c2975a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057bfd4c; end: 1057bfd57; +[SCCommercePersistentCartUnifiedLineItem table] */

undefined * FUN_1057bfd4c(void)

{
  return &UNK_10f2fa093;
}



/* Entry: 1057bfd58; end: 1057c0dbb; +[SCCommercePersistentCartUnifiedLineItem immutableObjectParse:bufferSize:] */

void FUN_1057bfd58(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  ushort uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_d0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126be530;
  _objc_alloc();
  lVar7 = (long)*piVar1;
  uVar6 = *(ushort *)((long)piVar1 - lVar7);
  if (uVar6 < 5) {
    puVar17 = (undefined *)0x0;
LAB_1057bfe48:
    puVar19 = (undefined *)0x0;
LAB_1057bfe4c:
    puVar18 = (undefined *)0x0;
LAB_1057bfe50:
    puStack_78 = (undefined *)0x0;
LAB_1057bfe54:
    puVar16 = (undefined *)0x0;
    uStack_110 = 0;
    uStack_118 = 0;
LAB_1057bfe60:
    puStack_d0 = (undefined *)0x0;
LAB_1057bfe68:
    puVar21 = (undefined *)0x0;
LAB_1057bfe6c:
    puStack_80 = (undefined *)0x0;
LAB_1057bfe70:
    puStack_88 = (undefined *)0x0;
LAB_1057bfe74:
    puStack_70 = (undefined *)0x0;
LAB_1057bfe7c:
    puStack_f8 = (undefined *)0x0;
LAB_1057bfe80:
    puVar15 = (undefined *)0x0;
    lVar7 = 0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar1 - lVar7))[2];
    if (uVar11 == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - lVar7);
    }
    lVar7 = -lVar7;
    if (uVar6 < 7) goto LAB_1057bfe48;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 6);
    if (uVar11 == 0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar6 < 9) goto LAB_1057bfe4c;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 8);
    if (uVar11 == 0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar6 < 0xb) goto LAB_1057bfe50;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 10);
    if (uVar11 == 0) {
      puStack_78 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puStack_78 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar6 < 0xd) goto LAB_1057bfe54;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 0xc);
    if (uVar11 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar6 < 0xf) {
      uStack_110 = 0;
LAB_1057c0760:
      uStack_118 = 0;
      goto LAB_1057bfe60;
    }
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 0xe);
    if (uVar11 == 0) {
      uStack_110 = 0;
    }
    else {
      uStack_110 = *(undefined8 *)((long)piVar1 + uVar11);
    }
    if (uVar6 < 0x11) goto LAB_1057c0760;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 0x10);
    if (uVar11 == 0) {
      uStack_118 = 0;
    }
    else {
      uStack_118 = *(undefined8 *)((long)piVar1 + uVar11);
    }
    if (uVar6 < 0x13) goto LAB_1057bfe60;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 0x12);
    if (uVar11 == 0) {
      puStack_d0 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puStack_d0 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar6 < 0x15) goto LAB_1057bfe68;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 0x14);
    if (uVar11 == 0) {
      puVar21 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar6 < 0x17) goto LAB_1057bfe6c;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 0x16);
    if (uVar11 == 0) {
      puStack_80 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puStack_80 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar6 < 0x1b) goto LAB_1057bfe70;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 0x1a);
    if (uVar11 == 0) {
      puStack_88 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puStack_88 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar6 < 0x1f) goto LAB_1057bfe74;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 0x1e);
    if (uVar11 == 0) {
      puStack_70 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puStack_70 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar6 < 0x21) goto LAB_1057bfe7c;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 0x20);
    if (uVar11 == 0) {
      puStack_f8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puStack_f8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar6 < 0x23) goto LAB_1057bfe80;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 0x22);
    puVar15 = (undefined *)0x0;
    if (uVar11 != 0) {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((uVar6 < 0x25) || (uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 0x24), uVar11 == 0)) {
      lVar7 = 0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      lVar7 = (long)puVar2 + (ulong)*puVar2;
    }
  }
  FUN_1057c39dc();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)*piVar1;
  uVar6 = *(ushort *)((long)piVar1 - lVar8);
  if (uVar6 < 0x27) {
    puStack_90 = (undefined *)0x0;
LAB_1057bff5c:
    puStack_98 = (undefined *)0x0;
LAB_1057bff60:
    puStack_100 = (undefined *)0x0;
LAB_1057bff64:
    puStack_a0 = (undefined *)0x0;
LAB_1057bff68:
    puStack_a8 = (undefined *)0x0;
LAB_1057bff6c:
    lVar8 = 0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar1 - lVar8))[0x13];
    if (uVar11 == 0) {
      puStack_90 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puStack_90 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = (long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - lVar8);
    }
    lVar8 = -lVar8;
    if (uVar6 < 0x29) goto LAB_1057bff5c;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 0x28);
    if (uVar11 == 0) {
      puStack_98 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puStack_98 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar6 < 0x2b) goto LAB_1057bff60;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 0x2a);
    if (uVar11 == 0) {
      puStack_100 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puStack_100 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar6 < 0x2d) goto LAB_1057bff64;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 0x2c);
    if (uVar11 == 0) {
      puStack_a0 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puStack_a0 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar6 < 0x2f) goto LAB_1057bff68;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 0x2e);
    if (uVar11 == 0) {
      puStack_a8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puStack_a8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((uVar6 < 0x31) || (uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 0x30), uVar11 == 0))
    goto LAB_1057bff6c;
    puVar2 = (uint *)((long)piVar1 + uVar11);
    lVar8 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_1057c39dc();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)*piVar1;
  uVar6 = *(ushort *)((long)piVar1 - lVar10);
  if (uVar6 < 0x33) {
    puVar14 = (undefined *)0x0;
LAB_1057c001c:
    bVar3 = false;
LAB_1057c0024:
    puStack_128 = (undefined *)0x0;
LAB_1057c0028:
    puStack_130 = (undefined *)0x0;
LAB_1057c002c:
    lVar10 = 0;
  }
  else {
    if (((ushort *)((long)piVar1 - lVar10))[0x19] == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc();
      func_0x00010bffa160();
      lVar10 = (long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - lVar10);
    }
    lVar10 = -lVar10;
    if (uVar6 < 0x35) goto LAB_1057c001c;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar10 + 0x34);
    if (uVar11 == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)((long)piVar1 + uVar11) != '\0';
    }
    if ((uVar6 < 0x37) || (uVar6 < 0x39)) goto LAB_1057c0024;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar10 + 0x38);
    if (uVar11 == 0) {
      puStack_128 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puStack_128 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar6 < 0x3b) goto LAB_1057c0028;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar10 + 0x3a);
    if (uVar11 == 0) {
      puStack_130 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puStack_130 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((uVar6 < 0x3d) || (uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar10 + 0x3c), uVar11 == 0))
    goto LAB_1057c002c;
    puVar2 = (uint *)((long)piVar1 + uVar11);
    lVar10 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_1057c39dc();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)*piVar1;
  uVar6 = *(ushort *)((long)piVar1 - lVar9);
  if (uVar6 < 0x3f) {
    puVar13 = (undefined *)0x0;
LAB_1057c00f4:
    puVar20 = (undefined *)0x0;
LAB_1057c0108:
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar1 - lVar9))[0x1f];
    if (uVar11 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - lVar9);
    }
    lVar9 = -lVar9;
    if (((uVar6 < 0x41) || (uVar6 < 0x43)) || (uVar6 < 0x45)) goto LAB_1057c00f4;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0x44);
    if (uVar11 == 0) {
      puVar20 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((uVar6 < 0x47) || (uVar6 < 0x49)) goto LAB_1057c0108;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0x48);
    if (uVar11 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (0x4a < uVar6) {
      uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0x4a);
      puVar12 = (undefined *)0x0;
      if (uVar11 != 0) {
        puVar2 = (uint *)((long)piVar1 + uVar11);
        puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar2 + (ulong)*puVar2 + 4);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_1057c0114;
    }
  }
  puVar12 = (undefined *)0x0;
LAB_1057c0114:
  func_0x00010c01b8c0(puVar4,param_2,puVar17,puVar19,puVar18,puStack_78,puVar16,uStack_110,
                      uStack_118,puStack_d0,puVar21,puStack_80,puStack_88,puStack_70,puStack_f8,
                      puVar15,lVar7,puStack_90,puStack_98,puStack_100,puStack_a0,puStack_a8,lVar8,
                      puVar14,bVar3);
  _objc_release(puVar12);
  _objc_release(puVar5);
  _objc_release(puVar20);
  _objc_release(puVar13);
  _objc_release(lVar10);
  _objc_release(puStack_130);
  _objc_release(puStack_128);
  _objc_release(puVar14);
  _objc_release(lVar8);
  _objc_release(puStack_a8);
  _objc_release(puStack_a0);
  _objc_release(puStack_100);
  _objc_release(puStack_98);
  _objc_release(puStack_90);
  _objc_release(lVar7);
  _objc_release(puVar15);
  _objc_release(puStack_f8);
  _objc_release(puStack_70);
  _objc_release(puStack_88);
  _objc_release(puStack_80);
  _objc_release(puVar21);
  _objc_release(puStack_d0);
  _objc_release(puVar16);
  _objc_release(puStack_78);
  _objc_release(puVar18);
  _objc_release(puVar19);
  _objc_release(puVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1057c0dbc; end: 1057c0ddf; +[SCCommercePersistentCartUnifiedLineItem objectClassFunctionPointer] */

undefined1  [16] FUN_1057c0dbc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1057c0dd8;
  auVar1._0_8_ = 0x1057c0dd0;
  return auVar1;
}



/* Entry: 1057c0de0; end: 1057c145f;  */

void FUN_1057c0de0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
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
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined *puVar31;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar31 = PTR_PTR_1126be538;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar31 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c115e60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c257800();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c257a40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010c2577e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010c11cf60();
    lVar7 = param_2;
    func_0x00010c0c2a60();
    lVar8 = param_2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_2;
    func_0x00010c297560();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_2;
    func_0x00010c2807c0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_2;
    func_0x00010c25cd20();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_2;
    func_0x00010bf5de60();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_2;
    func_0x00010c115e40();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_2;
    func_0x00010c13fc20();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_2;
    func_0x00010bf1ad20();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_2;
    func_0x00010bf41a00();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_2;
    func_0x00010bf0b260();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_2;
    func_0x00010c115f40();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_2;
    func_0x00010bfe2fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_2;
    func_0x00010c2975a0();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_2;
    func_0x00010c292720();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_2;
    func_0x00010c26de80();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_2;
    func_0x00010c073c00();
    func_0x00010c078780();
    lVar24 = param_2;
    func_0x00010c26e160();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = param_2;
    func_0x00010c26e000();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_2;
    func_0x00010bfb72c0();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = param_2;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26aa40();
    func_0x00010c137b20();
    lVar28 = param_2;
    func_0x00010c0fcb60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c080ec0();
    lVar29 = param_2;
    func_0x00010c23f840();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = param_2;
    func_0x00010c257cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf87a40();
    FUN_1057c1460(puVar31,0xffffffffffffffff,lVar1,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9,
                  lVar10,lVar11,lVar12,lVar13,lVar14,lVar15,lVar16,lVar17,lVar18,lVar19,lVar20,
                  lVar21,lVar22,(char)lVar23);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
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
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar31 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar31);
  return;
}



/* Entry: 1057c1460; end: 1057c1b37;  */

long * FUN_1057c1460(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,long param_12
                    ,long param_13,long param_14,long param_15,long param_16,long param_17,
                    long param_18,long param_19,long param_20,long param_21,long param_22,
                    long param_23,long param_24,undefined4 param_25,undefined4 param_26,
                    long param_27,long param_28,long param_29,long param_30,undefined4 param_31,
                    undefined4 param_32,long param_33,undefined1 param_34,undefined4 param_35,
                    long param_36,long param_37,undefined1 param_38)

{
  long lVar1;
  long *plVar2;
  long lStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_33);
  _objc_retain(param_36);
  _objc_retain(param_37);
  if (param_1 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    puStack_70 = PTR_PTR_1126ea428;
    plVar2 = &lStack_78;
    lStack_78 = param_1;
    _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
    if (plVar2 != (long *)0x0) {
      plVar2[1] = param_2;
      _objc_retain(param_3);
      lVar1 = plVar2[4];
      plVar2[4] = param_3;
      _objc_release(lVar1);
      _objc_retain(param_4);
      lVar1 = plVar2[5];
      plVar2[5] = param_4;
      _objc_release(lVar1);
      _objc_retain(param_5);
      lVar1 = plVar2[6];
      plVar2[6] = param_5;
      _objc_release(lVar1);
      _objc_retain(param_6);
      lVar1 = plVar2[7];
      plVar2[7] = param_6;
      _objc_release(lVar1);
      _objc_retain(param_7);
      lVar1 = plVar2[8];
      plVar2[8] = param_7;
      _objc_release(lVar1);
      plVar2[9] = param_8;
      plVar2[10] = param_9;
      _objc_retain(param_10);
      lVar1 = plVar2[0xb];
      plVar2[0xb] = param_10;
      _objc_release(lVar1);
      _objc_retain(param_11);
      lVar1 = plVar2[0xc];
      plVar2[0xc] = param_11;
      _objc_release(lVar1);
      _objc_retain(param_12);
      lVar1 = plVar2[0xd];
      plVar2[0xd] = param_12;
      _objc_release(lVar1);
      _objc_retain(param_13);
      lVar1 = plVar2[0xe];
      plVar2[0xe] = param_13;
      _objc_release(lVar1);
      _objc_retain(param_14);
      lVar1 = plVar2[0xf];
      plVar2[0xf] = param_14;
      _objc_release(lVar1);
      _objc_retain(param_15);
      lVar1 = plVar2[0x10];
      plVar2[0x10] = param_15;
      _objc_release(lVar1);
      _objc_retain(param_16);
      lVar1 = plVar2[0x11];
      plVar2[0x11] = param_16;
      _objc_release(lVar1);
      _objc_retain(param_17);
      lVar1 = plVar2[0x12];
      plVar2[0x12] = param_17;
      _objc_release(lVar1);
      _objc_retain(param_18);
      lVar1 = plVar2[0x13];
      plVar2[0x13] = param_18;
      _objc_release(lVar1);
      _objc_retain(param_19);
      lVar1 = plVar2[0x14];
      plVar2[0x14] = param_19;
      _objc_release(lVar1);
      _objc_retain(param_20);
      lVar1 = plVar2[0x15];
      plVar2[0x15] = param_20;
      _objc_release(lVar1);
      _objc_retain(param_21);
      lVar1 = plVar2[0x16];
      plVar2[0x16] = param_21;
      _objc_release(lVar1);
      _objc_retain(param_22);
      lVar1 = plVar2[0x17];
      plVar2[0x17] = param_22;
      _objc_release(lVar1);
      _objc_retain(param_23);
      lVar1 = plVar2[0x18];
      plVar2[0x18] = param_23;
      _objc_release(lVar1);
      _objc_retain(param_24);
      lVar1 = plVar2[0x19];
      plVar2[0x19] = param_24;
      _objc_release(lVar1);
      *(undefined1 *)((long)plVar2 + 0x14) = (undefined1)param_25;
      *(undefined1 *)((long)plVar2 + 0x15) = param_25._1_1_;
      _objc_retain(param_27);
      lVar1 = plVar2[0x1a];
      plVar2[0x1a] = param_27;
      _objc_release(lVar1);
      _objc_retain(param_28);
      lVar1 = plVar2[0x1b];
      plVar2[0x1b] = param_28;
      _objc_release(lVar1);
      _objc_retain(param_29);
      lVar1 = plVar2[0x1c];
      plVar2[0x1c] = param_29;
      _objc_release(lVar1);
      _objc_retain(param_30);
      lVar1 = plVar2[0x1d];
      plVar2[0x1d] = param_30;
      _objc_release(lVar1);
      *(undefined1 *)((long)plVar2 + 0x16) = (undefined1)param_31;
      *(undefined1 *)((long)plVar2 + 0x17) = param_31._1_1_;
      _objc_retain(param_33);
      lVar1 = plVar2[0x1e];
      plVar2[0x1e] = param_33;
      _objc_release(lVar1);
      *(undefined1 *)(plVar2 + 3) = param_34;
      _objc_retain(param_36);
      lVar1 = plVar2[0x1f];
      plVar2[0x1f] = param_36;
      _objc_release(lVar1);
      _objc_retain(param_37);
      lVar1 = plVar2[0x20];
      plVar2[0x20] = param_37;
      _objc_release(lVar1);
      *(undefined1 *)((long)plVar2 + 0x19) = param_38;
    }
  }
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_33);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return plVar2;
}



/* Entry: 1057c1b38; end: 1057c1bab;  */

void FUN_1057c1b38(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1057c1bac();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057c1bac; end: 1057c27e3;  */

void FUN_1057c1bac(undefined *param_1)

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
  undefined *puStack_70;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar9 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar9 < 0) {
      puVar9 = param_1;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar9 != (undefined *)0x0) {
        puVar9 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar9;
        func_0x00010bf636c0();
        _objc_release(puVar9);
        func_0x0001001b9e08(puVar1,&UNK_10f2fa0bb);
        puVar9 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_1057c253c;
        puVar9 = param_1;
        func_0x00010bfe5ec0(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar2 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
        _sqlite3_bind_text(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
        _objc_release(puVar9);
        _objc_release(puVar9);
        puVar9 = puVar1;
        _sqlite3_step();
        if ((int)puVar9 == 100) {
          puVar2 = puVar1;
          _sqlite3_column_int64(puVar1,0);
          puVar9 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126be530);
          _sqlite3_column_blob(puVar1,1);
          _sqlite3_column_bytes(puVar1,1);
          puVar3 = puVar9;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar9);
          _sqlite3_reset(puVar1);
          if (puVar3 == (undefined *)0x0) goto LAB_1057c2534;
          puVar9 = PTR_PTR_1126be538;
          _objc_alloc();
          puStack_70 = puVar3;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          puStack_78 = puVar3;
          func_0x00010c115e60();
          _objc_retainAutoreleasedReturnValue();
          puStack_80 = puVar3;
          func_0x00010c257800();
          _objc_retainAutoreleasedReturnValue();
          puStack_88 = puVar3;
          func_0x00010c257a40();
          _objc_retainAutoreleasedReturnValue();
          puStack_90 = puVar3;
          func_0x00010c2577e0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar3;
          func_0x00010c11cf60();
          puVar4 = puVar3;
          func_0x00010c0c2a60();
          puStack_98 = puVar3;
          func_0x00010c2711a0();
          _objc_retainAutoreleasedReturnValue();
          puStack_a0 = puVar3;
          func_0x00010c297560();
          _objc_retainAutoreleasedReturnValue();
          puStack_a8 = puVar3;
          func_0x00010c2807c0();
          _objc_retainAutoreleasedReturnValue();
          puStack_b0 = puVar3;
          func_0x00010c25cd20();
          _objc_retainAutoreleasedReturnValue();
          puStack_b8 = puVar3;
          func_0x00010bf5de60();
          _objc_retainAutoreleasedReturnValue();
          puStack_c0 = puVar3;
          func_0x00010c115e40();
          _objc_retainAutoreleasedReturnValue();
          puStack_c8 = puVar3;
          func_0x00010c13fc20();
          _objc_retainAutoreleasedReturnValue();
          puStack_d0 = puVar3;
          func_0x00010bf1ad20();
          _objc_retainAutoreleasedReturnValue();
          puStack_d8 = puVar3;
          func_0x00010bf41a00();
          _objc_retainAutoreleasedReturnValue();
          puStack_e0 = puVar3;
          func_0x00010bf0b260();
          _objc_retainAutoreleasedReturnValue();
          puStack_e8 = puVar3;
          func_0x00010c115f40();
          _objc_retainAutoreleasedReturnValue();
          puStack_f0 = puVar3;
          func_0x00010bfe2fa0();
          _objc_retainAutoreleasedReturnValue();
          puStack_f8 = puVar3;
          func_0x00010c2975a0();
          _objc_retainAutoreleasedReturnValue();
          puStack_100 = puVar3;
          func_0x00010c292720();
          _objc_retainAutoreleasedReturnValue();
          puStack_108 = puVar3;
          func_0x00010c26de80();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010c073c00();
          func_0x00010c078780();
          puStack_110 = puVar3;
          func_0x00010c26e160();
          _objc_retainAutoreleasedReturnValue();
          puStack_118 = puVar3;
          func_0x00010c26e000();
          _objc_retainAutoreleasedReturnValue();
          puStack_120 = puVar3;
          func_0x00010bfb72c0();
          _objc_retainAutoreleasedReturnValue();
          puStack_128 = puVar3;
          func_0x00010c27dd80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26aa40();
          func_0x00010c137b20();
          puVar6 = puVar3;
          func_0x00010c0fcb60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c080ec0();
          puVar7 = puVar3;
          func_0x00010c23f840();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar3;
          func_0x00010c257cc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf87a40();
          FUN_1057c1460(puVar9,puVar2,puStack_70,puStack_78,puStack_80,puStack_88,puStack_90,puVar1,
                        puVar4,puStack_98,puStack_a0,puStack_a8,puStack_b0,puStack_b8,puStack_c0,
                        puStack_c8,puStack_d0,puStack_d8,puStack_e0,puStack_e8,puStack_f0,puStack_f8
                        ,puStack_100,puStack_108,(char)puVar5);
          goto LAB_1057c1fa8;
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar9 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126be530);
      puVar3 = puVar9;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar9);
      if (puVar3 != (undefined *)0x0) {
        puVar9 = PTR_PTR_1126be538;
        _objc_alloc();
        puStack_70 = puVar3;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        puStack_78 = puVar3;
        func_0x00010c115e60();
        _objc_retainAutoreleasedReturnValue();
        puStack_80 = puVar3;
        func_0x00010c257800();
        _objc_retainAutoreleasedReturnValue();
        puStack_88 = puVar3;
        func_0x00010c257a40();
        _objc_retainAutoreleasedReturnValue();
        puStack_90 = puVar3;
        func_0x00010c2577e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c11cf60();
        puVar4 = puVar3;
        func_0x00010c0c2a60();
        puStack_98 = puVar3;
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
        puStack_a0 = puVar3;
        func_0x00010c297560();
        _objc_retainAutoreleasedReturnValue();
        puStack_a8 = puVar3;
        func_0x00010c2807c0();
        _objc_retainAutoreleasedReturnValue();
        puStack_b0 = puVar3;
        func_0x00010c25cd20();
        _objc_retainAutoreleasedReturnValue();
        puStack_b8 = puVar3;
        func_0x00010bf5de60();
        _objc_retainAutoreleasedReturnValue();
        puStack_c0 = puVar3;
        func_0x00010c115e40();
        _objc_retainAutoreleasedReturnValue();
        puStack_c8 = puVar3;
        func_0x00010c13fc20();
        _objc_retainAutoreleasedReturnValue();
        puStack_d0 = puVar3;
        func_0x00010bf1ad20();
        _objc_retainAutoreleasedReturnValue();
        puStack_d8 = puVar3;
        func_0x00010bf41a00();
        _objc_retainAutoreleasedReturnValue();
        puStack_e0 = puVar3;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        puStack_e8 = puVar3;
        func_0x00010c115f40();
        _objc_retainAutoreleasedReturnValue();
        puStack_f0 = puVar3;
        func_0x00010bfe2fa0();
        _objc_retainAutoreleasedReturnValue();
        puStack_f8 = puVar3;
        func_0x00010c2975a0();
        _objc_retainAutoreleasedReturnValue();
        puStack_100 = puVar3;
        func_0x00010c292720();
        _objc_retainAutoreleasedReturnValue();
        puStack_108 = puVar3;
        func_0x00010c26de80();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c073c00();
        func_0x00010c078780();
        puStack_110 = puVar3;
        func_0x00010c26e160();
        _objc_retainAutoreleasedReturnValue();
        puStack_118 = puVar3;
        func_0x00010c26e000();
        _objc_retainAutoreleasedReturnValue();
        puStack_120 = puVar3;
        func_0x00010bfb72c0();
        _objc_retainAutoreleasedReturnValue();
        puStack_128 = puVar3;
        func_0x00010c27dd80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26aa40();
        func_0x00010c137b20();
        puVar6 = puVar3;
        func_0x00010c0fcb60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c080ec0();
        puVar7 = puVar3;
        func_0x00010c23f840();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        func_0x00010c257cc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf87a40();
        FUN_1057c1460(puVar9,puVar1,puStack_70,puStack_78,puStack_80,puStack_88,puStack_90,puVar2,
                      puVar4,puStack_98,puStack_a0,puStack_a8,puStack_b0,puStack_b8,puStack_c0,
                      puStack_c8,puStack_d0,puStack_d8,puStack_e0,puStack_e8,puStack_f0,puStack_f8,
                      puStack_100,puStack_108,(char)puVar5);
LAB_1057c1fa8:
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puStack_128);
        _objc_release(puStack_120);
        _objc_release(puStack_118);
        _objc_release(puStack_110);
        _objc_release(puStack_108);
        _objc_release(puStack_100);
        _objc_release(puStack_f8);
        _objc_release(puStack_f0);
        _objc_release(puStack_e8);
        _objc_release(puStack_e0);
        _objc_release(puStack_d8);
        _objc_release(puStack_d0);
        _objc_release(puStack_c8);
        _objc_release(puStack_c0);
        _objc_release(puStack_b8);
        _objc_release(puStack_b0);
        _objc_release(puStack_a8);
        _objc_release(puStack_a0);
        _objc_release(puStack_98);
        _objc_release(puStack_90);
        _objc_release(puStack_88);
        _objc_release(puStack_80);
        _objc_release(puStack_78);
        _objc_release(puStack_70);
        param_1 = puVar3;
        goto LAB_1057c253c;
      }
LAB_1057c2534:
      param_1 = (undefined *)0x0;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_1057c253c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1057c27e4; end: 1057c2857;  */

void FUN_1057c27e4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1057c1bac();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057c2858; end: 1057c2937;  */

void FUN_1057c2858(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126be530;
    _objc_alloc(PTR_PTR_1126be530);
    func_0x00010c01b8c0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057c2938; end: 1057c2a93; -[SCCommercePersistentCartUnifiedLineItemChangeRequest .cxx_destruct] */

void FUN_1057c2938(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1057c2a94; end: 1057c2a9f; -[SCCommercePersistentCartUnifiedLineItemChangeRequest table] */

undefined * FUN_1057c2a94(void)

{
  return &UNK_10f2fa093;
}



/* Entry: 1057c2aa0; end: 1057c2ae7; -[SCCommercePersistentCartUnifiedLineItemChangeRequest createTableWithSQLite:] */

void FUN_1057c2aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddbdb3e,0x9d,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1057c2ae8; end: 1057c2e6f; -[SCCommercePersistentCartUnifiedLineItemChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1057c2ae8(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_1057c2858(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1057c2e70(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2fa157);
    if (lVar6 == 0) goto LAB_1057c2e0c;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1057c2e0c;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126be530);
    func_0x00010c21c9a0(puVar7);
LAB_1057c2df4:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f2fa114);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126be530);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1057c2e18;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_1057c2e18;
    }
    FUN_1057c2858(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1057c2e70(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f2fa1ab);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126be530);
        func_0x00010c21c9a0(puVar7);
        goto LAB_1057c2df4;
      }
    }
LAB_1057c2e0c:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1057c2e18:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1057c2e70; end: 1057c39db;  */

ulong FUN_1057c2e70(ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  ulong uVar58;
  ulong uVar59;
  ulong uVar60;
  ulong uVar61;
  ulong uVar62;
  ulong uVar63;
  undefined4 uStack_1c0;
  long lStack_b0;
  long lStack_a8;
  long lStack_98;
  long lStack_90;
  long lStack_80;
  long lStack_78;
  
  _objc_retain(param_2);
  uVar6 = param_2;
  func_0x00010bf1ad20(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057c3ac8(&lStack_80,param_1,uVar6);
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010c292720(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057c3ac8(&lStack_98,param_1,uVar6);
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010bfb72c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057c3ac8(&lStack_b0,param_1,uVar6);
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_1057c3c38(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010c115e60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_1057c3c38(param_1,uVar8);
  uVar10 = param_2;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_1057c3c38(param_1,uVar10);
  uVar12 = param_2;
  func_0x00010c257a40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  FUN_1057c3c38(param_1,uVar12);
  uVar14 = param_2;
  func_0x00010c2577e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  FUN_1057c3c38(param_1,uVar14);
  uVar16 = param_2;
  func_0x00010c11cf60();
  uVar17 = param_2;
  func_0x00010c0c2a60();
  uVar18 = param_2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_1;
  FUN_1057c3c38(param_1,uVar18);
  uVar20 = param_2;
  func_0x00010c297560();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_1;
  FUN_1057c3c38(param_1,uVar20);
  uVar22 = param_2;
  func_0x00010c2807c0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_1;
  FUN_1057c3c38(param_1,uVar22);
  uVar24 = param_2;
  func_0x00010c25cd20();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_1;
  FUN_1057c3c38(param_1,uVar24);
  uVar26 = param_2;
  func_0x00010bf5de60();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_1;
  FUN_1057c3c38(param_1,uVar26);
  uVar28 = param_2;
  func_0x00010c115e40();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_1;
  FUN_1057c3c38(param_1,uVar28);
  uVar30 = param_2;
  func_0x00010c13fc20();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = param_1;
  FUN_1057c3c38(param_1,uVar30);
  lVar1 = 0x1130c2400;
  lVar2 = lVar1;
  if (lStack_78 - lStack_80 != 0) {
    lVar2 = lStack_80;
  }
  uVar32 = param_1;
  func_0x000100c47e34(param_1,lVar2,lStack_78 - lStack_80 >> 2);
  uVar33 = param_2;
  func_0x00010bf41a00();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = param_1;
  FUN_1057c3c38(param_1,uVar33);
  uVar35 = param_2;
  func_0x00010bf0b260();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = param_1;
  FUN_1057c3c38(param_1,uVar35);
  uVar37 = param_2;
  func_0x00010c115f40();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = param_1;
  FUN_1057c3c38(param_1,uVar37);
  uVar39 = param_2;
  func_0x00010bfe2fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = param_1;
  FUN_1057c3c38(param_1,uVar39);
  uVar41 = param_2;
  func_0x00010c2975a0();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = param_1;
  FUN_1057c3c38(param_1,uVar41);
  lVar2 = lVar1;
  if (lStack_90 - lStack_98 != 0) {
    lVar2 = lStack_98;
  }
  uVar43 = param_1;
  func_0x000100c47e34(param_1,lVar2,lStack_90 - lStack_98 >> 2);
  uVar44 = param_2;
  func_0x00010c26de80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar44 == 0) {
    uStack_1c0 = 0;
  }
  else {
    uVar45 = uVar44;
    _objc_retainAutorelease(uVar44);
    func_0x00010bf25f00();
    uVar46 = uVar44;
    func_0x00010c08fa60(uVar44);
    uVar47 = param_1;
    func_0x0001001d1030(param_1,uVar45,uVar46);
    uStack_1c0 = (undefined4)uVar47;
  }
  _objc_release(uVar44);
  uVar45 = param_2;
  func_0x00010c073c00();
  uVar46 = param_2;
  func_0x00010c078780();
  uVar47 = param_2;
  func_0x00010c26e160();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = param_1;
  FUN_1057c3c38(param_1,uVar47);
  uVar49 = param_2;
  func_0x00010c26e000();
  _objc_retainAutoreleasedReturnValue();
  uVar50 = param_1;
  FUN_1057c3c38(param_1,uVar49);
  if (lStack_a8 - lStack_b0 != 0) {
    lVar1 = lStack_b0;
  }
  uVar51 = param_1;
  func_0x000100c47e34(param_1,lVar1,lStack_a8 - lStack_b0 >> 2);
  uVar52 = param_2;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  uVar53 = param_1;
  FUN_1057c3c38(param_1,uVar52);
  uVar54 = param_2;
  func_0x00010c26aa40();
  uVar55 = param_2;
  func_0x00010c137b20();
  uVar56 = param_2;
  func_0x00010c0fcb60();
  _objc_retainAutoreleasedReturnValue();
  uVar57 = param_1;
  FUN_1057c3c38(param_1,uVar56);
  uVar58 = param_2;
  func_0x00010c080ec0();
  uVar59 = param_2;
  func_0x00010c23f840();
  _objc_retainAutoreleasedReturnValue();
  uVar60 = param_1;
  FUN_1057c3c38(param_1,uVar59);
  uVar61 = param_2;
  func_0x00010c257cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar62 = param_1;
  FUN_1057c3c38(param_1,uVar61);
  uVar63 = param_2;
  func_0x00010bf87a40();
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,0x10,uVar17,0);
  func_0x0001001ce1c8(param_1,0xe,uVar16,0);
  func_0x0001001ce2e4(param_1,0x4a,uVar62 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x48,uVar60 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x44,uVar57 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x3e,uVar53 & 0xffffffff);
  func_0x000100c47f00(param_1,0x3c,uVar51 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x3a,uVar50 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x38,uVar48 & 0xffffffff);
  func_0x0001001ce220(param_1,0x32,uStack_1c0);
  func_0x000100c47f00(param_1,0x30,uVar43 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x2e,uVar42 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x2c,uVar40 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x2a,uVar38 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x28,uVar36 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x26,uVar34 & 0xffffffff);
  func_0x000100c47f00(param_1,0x24,uVar32 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x22,uVar31 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x20,uVar29 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x1e,uVar27 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x1a,uVar25 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x16,uVar23 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x14,uVar21 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x12,uVar19 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0xc,uVar15 & 0xffffffff);
  func_0x0001001ce2e4(param_1,10,uVar13 & 0xffffffff);
  func_0x0001001ce2e4(param_1,8,uVar11 & 0xffffffff);
  func_0x0001001ce2e4(param_1,6,uVar9 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar7 & 0xffffffff);
  func_0x000100ab13ac(param_1,0x4c,uVar63 & 0xffffffff,0);
  func_0x000100ab13ac(param_1,0x46,uVar58 & 0xffffffff,0);
  func_0x000100ab13ac(param_1,0x42,uVar55 & 0xffffffff,0);
  func_0x000100ab13ac(param_1,0x40,uVar54 & 0xffffffff,0);
  func_0x000100ab13ac(param_1,0x36,uVar46 & 0xffffffff,0);
  func_0x000100ab13ac(param_1,0x34,uVar45 & 0xffffffff,0);
  func_0x0001001ce548(param_1,(iVar3 - iVar4) + iVar5);
  _objc_release(uVar61);
  _objc_release(uVar59);
  _objc_release(uVar56);
  _objc_release(uVar52);
  _objc_release(uVar49);
  _objc_release(uVar47);
  _objc_release(uVar44);
  _objc_release(uVar41);
  _objc_release(uVar39);
  _objc_release(uVar37);
  _objc_release(uVar35);
  _objc_release(uVar33);
  _objc_release(uVar30);
  _objc_release(uVar28);
  _objc_release(uVar26);
  _objc_release(uVar24);
  _objc_release(uVar22);
  _objc_release(uVar20);
  _objc_release(uVar18);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    __ZdlPv();
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1057c39dc; end: 1057c3ac7;  */

void FUN_1057c39dc(uint *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  
  puVar2 = (undefined *)0x0;
  if (param_1 != (uint *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1 + 1;
    if (*param_1 != 0) {
      do {
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar3 + (ulong)*puVar3 + 4);
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 != (undefined *)0x0) {
          func_0x00010befa120(puVar1,param_2,puVar2);
        }
        _objc_release(puVar2);
        puVar3 = puVar3 + 1;
      } while (puVar3 != param_1 + 1 + *param_1);
    }
    puVar2 = puVar1;
    func_0x00010bf51e00(puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057c3ac8; end: 1057c3c37;  */

long FUN_1057c3ac8(long *param_1,int *param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int aiStack_124 [3];
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar5 = param_2;
  _objc_retain(param_3);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lStack_118 = 0;
  aiStack_124[1] = 0;
  aiStack_124[2] = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        piVar5 = *(int **)(lStack_118 + lVar8 * 8);
        piVar1 = param_2;
        FUN_1057c3c38();
        aiStack_124[0] = (int)piVar1;
        if (aiStack_124[0] != 0) {
          piVar5 = aiStack_124;
          func_0x000100c47d40(param_1);
        }
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
      lVar6 = param_3;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(param_3);
  lVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar6;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  _objc_release(param_3);
  __Unwind_Resume(lVar6);
  _objc_retain(piVar5);
  if (piVar5 == (int *)0x0) {
    lVar6 = 0;
    goto LAB_1057c3d18;
  }
  piVar1 = piVar5;
  _CFStringGetCStringPtr(piVar5,0x8000100);
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1;
    _strlen(piVar1);
    func_0x0001001cde08(lVar6,piVar1,piVar2);
    goto LAB_1057c3d18;
  }
  piVar1 = piVar5;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (piVar1 == (int *)0x0) {
    piVar1 = piVar5;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (piVar1 != (int *)0x0) goto LAB_1057c3cd8;
    lVar6 = 0;
  }
  else {
LAB_1057c3cd8:
    piVar3 = piVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    piVar4 = piVar1;
    func_0x00010c08fa60(piVar1);
    piVar2 = (int *)"";
    if (piVar3 != (int *)0x0) {
      piVar2 = piVar3;
    }
    func_0x0001001cde08(lVar6,piVar2,piVar4);
  }
  _objc_release(piVar1);
LAB_1057c3d18:
  _objc_release(piVar5);
  return lVar6;
}



/* Entry: 1057c3c38; end: 1057c3d67;  */

undefined8 FUN_1057c3c38(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_1057c3d18;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_1057c3d18;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_1057c3cd8;
    param_1 = 0;
  }
  else {
LAB_1057c3cd8:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_1057c3d18:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1057c3d68; end: 1057c3d87;  */

void FUN_1057c3d68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf64c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bdbc0,PTR_s_dataWithRootObject__1125b6cb0,param_1);
  return;
}



/* Entry: 1057c3d88; end: 1057c3ee7; +[SCCommerceProductCheckoutLineItemConverter thumbnailImageIndexForProductInfo:variant:] */

long FUN_1057c3d88(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bfe9920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010bfe9920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar2 = 0;
    if ((param_4 != 0) && (lVar3 != 0)) {
      lVar1 = param_4;
      func_0x00010c2975a0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = 0;
      if (lVar1 != 0) {
        lVar2 = param_4;
        func_0x00010bfe9920();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf529e0();
        _objc_release(lVar2);
        _objc_release(lVar1);
        if (lVar3 == 0) {
          lVar2 = 0;
        }
        else {
          lVar1 = param_3;
          func_0x00010bfe9920();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = param_4;
          func_0x00010bfe9920(param_4);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar1;
          func_0x00010bfecde0(lVar1,param_2,lVar3);
          _objc_release(lVar3);
          _objc_release(lVar2);
          _objc_release(lVar1);
          lVar2 = 0;
          if (lVar4 != 0x7fffffffffffffff) {
            lVar2 = lVar4;
          }
        }
      }
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 1057c3ee8; end: 1057c407f; +[SCCommerceProductVariantConverter productVariantViewModelForProductVariantInfo:withProductInfo:] */

void FUN_1057c3ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126be548;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010becc4a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c115e60(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c26aa40(param_3);
  uVar5 = param_1;
  func_0x00010bdca620(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bec5480(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bdf6660(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c137b20();
  func_0x00010be36f20(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf125a0();
  func_0x00010c0410e0(puVar1,param_2,param_3,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,(char)uVar8);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057c4080; end: 1057c40e7; +[SCCommerceProductVariantConverter imageUrlStringForProductVariant:] */

void FUN_1057c4080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfe7420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf69920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1057c40e8; end: 1057c4157; +[SCCommerceProductVariantConverter _titleForProductVariant:] */

void FUN_1057c40e8(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  
  _objc_retain(param_3);
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar1 != (undefined **)0x0) {
      ppuVar1 = param_3;
      func_0x00010c2711a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1057c4140;
    }
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_1057c4140:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1057c4158; end: 1057c421f; +[SCCommerceProductVariantConverter _amountForProductVariant:] */

void FUN_1057c4158(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c112a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010c112a80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf02460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110db2618);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      goto LAB_1057c4200;
    }
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_1057c4200:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1057c4220; end: 1057c4313; +[SCCommerceProductVariantConverter _strikethroughPriceForProductVariant:] */

void FUN_1057c4220(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c25ccc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010c25ccc0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar1 == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        lVar2 = param_3;
        func_0x00010c25ccc0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf02460();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110db2618);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        _objc_release(lVar2);
      }
      _objc_release(lVar1);
      goto LAB_1057c42f0;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_1057c42f0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1057c4314; end: 1057c43db; +[SCCommerceProductVariantConverter _currencyForProductVariant:] */

void FUN_1057c4314(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
    func_0x00010c112a80();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar1 != (undefined **)0x0) {
      ppuVar2 = param_3;
      func_0x00010c112a80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x00010bf5de60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar2);
      _objc_release(ppuVar1);
      if (ppuVar3 != (undefined **)0x0) {
        ppuVar2 = param_3;
        func_0x00010c112a80(param_3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = ppuVar2;
        func_0x00010bf5de60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar2);
        goto LAB_1057c43c0;
      }
    }
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_1057c43c0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1057c43dc; end: 1057c4523; +[SCCommerceProductVariantConverter _imageDetailsForProductVariant:withProductInfo:] */

void FUN_1057c43dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x00010bfe9920(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1057c448c;
  puStack_40 = &UNK_1108b28b8;
  uStack_38 = param_4;
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bd86420(param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057c4524; end: 1057c4963;  */

void FUN_1057c4524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  _objc_retain();
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_opt_new(puVar1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e02a38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e02a38,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x000106d785f4(param_5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  FUN_1057c4964(ppuVar2,uVar3,&PTR____CFConstantStringClassReference_110e02a38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(ppuVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  if (param_8 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e02a58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e02a58,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar5 = param_8;
    func_0x000106d785f4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    FUN_1057c4964(ppuVar2,puVar6,&PTR____CFConstantStringClassReference_110e02a78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(ppuVar4);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(ppuVar2);
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e02a98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e02a98,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x000106d785f4(param_6);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  FUN_1057c4964(ppuVar2,uVar3,&PTR____CFConstantStringClassReference_110e02a98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(ppuVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e02ab8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e02ab8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_7;
  func_0x000106d785f4(param_7);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  FUN_1057c4964(ppuVar2,uVar3,&PTR____CFConstantStringClassReference_110e02ab8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(ppuVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  uVar3 = param_5;
  func_0x000106d782a0(param_5,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar7 = uVar3;
  func_0x000106d782a0(uVar3,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e02ad8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e02ad8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x000106d785f4(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  FUN_1057c4a4c(0x4014000000000000,0x4032000000000000,0,0x4032000000000000,ppuVar2,uVar8,puVar6,
                puVar9,&PTR____CFConstantStringClassReference_110e02ad8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(ppuVar4);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(uVar8);
  _objc_release(ppuVar2);
  puVar6 = PTR_PTR_1126b0740;
  _objc_alloc(PTR_PTR_1126b0740);
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd2e0(param_1,param_2,param_3,param_4,puVar6);
  _objc_release(puVar9);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1057c4964; end: 1057c4a4b;  */

void FUN_1057c4964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c0c7340(0x402c000000000000,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  FUN_1057c4a4c(0,0x4032000000000000,0,0x4032000000000000,param_1,param_2,puVar1,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1057c4a4c; end: 1057c4c9b;  */

void FUN_1057c4a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840();
  _objc_release(param_5);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar2);
  _objc_release(param_6);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b0730;
  _objc_alloc(PTR_PTR_1126b0730);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  puVar5 = puVar1;
  func_0x00010c022100(param_1,param_2,param_3,param_4,puVar3);
  _objc_release(param_9);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) &&
     ((___stack_chk_fail(), puVar5 == (undefined *)0x0 || (puVar5 == (undefined *)0x1)))) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057c4c9c; end: 1057c4cd7; +[SCProductCheckoutTheme themeColor:] */

void FUN_1057c4c9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0x94;
  }
  else {
    if (param_3 != 1) goto LAB_1057c4cd4;
    uVar1 = 0x7d;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_1057c4cd4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057c4cd8; end: 1057c4d13; +[SCProductCheckoutTheme themeTitleColor:] */

void FUN_1057c4cd8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0x94;
  }
  else {
    if (param_3 != 1) goto LAB_1057c4d10;
    uVar1 = 0xd4;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_1057c4d10:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057c4d14; end: 1057c4d23; +[SCProductTheme gradientViewTopColor] */

void FUN_1057c4d14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xd5);
  return;
}



/* Entry: 1057c4d24; end: 1057c4d77; +[SCProductTheme gradientViewBottomColor] */

void FUN_1057c4d24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe8000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057c4d78; end: 1057c4d8b; +[SCProductTheme lightGraySeparatorColor] */

void FUN_1057c4d78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x400000ad);
  return;
}



/* Entry: 1057c4d8c; end: 1057c4d8f; +[SCProductTheme fontWithSize:fontWeight:] */

void FUN_1057c4d8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc5b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_getFontWithFontWeight_size__1125cf068);
  return;
}



/* Entry: 1057c4d90; end: 1057c4e8b; +[SCProductTheme addTableViewCellSeparatorLineForContainerView:] */

void FUN_1057c4d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3fef1f1f20000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010befbb60(param_3,param_2,puVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1057c4e8c;
  puStack_40 = &UNK_1108471b0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0bbfc0(puVar1,param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057c4e8c; end: 1057c4fbf;  */

void FUN_1057c4e8c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057c4fc0; end: 1057c4fc7; +[SCProductTheme labelWithFontSize:textColor:] */

void FUN_1057c4fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0878f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_labelWithFontSize_textColor_text_1125ff848,param_3,0);
  return;
}



/* Entry: 1057c4fc8; end: 1057c4fcf; +[SCProductTheme labelWithFontSize:fontWeight:textColor:] */

void FUN_1057c4fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0878d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_labelWithFontSize_fontWeight_tex_1125ff840,param_3,param_4,0);
  return;
}


