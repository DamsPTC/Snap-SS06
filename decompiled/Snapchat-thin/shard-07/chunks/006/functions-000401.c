/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057504b0; end: 10575064f;  */

void FUN_1057504b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  lVar5 = *(long *)(param_2 + 0x20);
  _os_unfair_lock_lock(lVar5 + 0x1c);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010be05920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105750650;
  puStack_60 = &UNK_1108af4c0;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar3);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1057507d0;
  puStack_98 = &UNK_1108af4f0;
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = uVar3;
  _objc_retain(uVar4);
  uStack_88 = *(undefined8 *)(param_2 + 0x20);
  uStack_90 = uVar4;
  uStack_80 = param_1;
  func_0x00010c0f8500(uVar2,param_3,&puStack_78,0,&puStack_b0);
  _objc_release(uVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_58);
  _os_unfair_lock_unlock(lVar5 + 0x1c);
  lStack_c0 = *(long *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(lStack_c0 + 0x30);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_10575097c;
  puStack_c8 = &UNK_110883780;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar2);
  uStack_b8 = uVar2;
  func_0x00010c0f7fc0(uVar3,param_3,&puStack_e0);
  _objc_release(uStack_b8);
  return;
}



/* Entry: 105750650; end: 1057507cf;  */

void FUN_105750650(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar6);
      }
      puVar2 = PTR_PTR_1126bdbd0;
      FUN_105755ac8(PTR_PTR_1126bdbd0,*(undefined8 *)(lVar7 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    lVar1 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  lVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar6);
  _objc_release(param_2);
  __Unwind_Resume();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar9 = 0.0;
  lVar7 = *(long *)(lVar1 + 0x20);
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar7);
      }
      uVar4 = *(undefined8 *)(lVar8 * 8);
      func_0x00010bef47c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  lVar5 = *(long *)(lVar1 + 0x28);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  lVar3 = lVar5;
  func_0x00010be50f80(dVar9 - *(double *)(lVar1 + 0x30));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar5);
  __Unwind_Resume();
  func_0x00010bf3b2e0(*(undefined8 *)(lVar3 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1057507d0; end: 10575097b;  */

void FUN_1057507d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar7 = 0.0;
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar4);
      }
      uVar2 = *(undefined8 *)(lVar6 * 8);
      func_0x00010bef47c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar2);
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar6);
    lVar1 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  lVar5 = *(long *)(param_1 + 0x28);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  lVar1 = lVar5;
  func_0x00010be50f80(dVar7 - *(double *)(param_1 + 0x30));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar5);
  __Unwind_Resume();
  func_0x00010bf3b2e0(*(undefined8 *)(lVar1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10575097c; end: 10575099f;  */

void FUN_10575097c(long param_1,undefined8 param_2)

{
  func_0x00010bf3b2e0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1057509a0; end: 1057509bf; -[SCAdResponsePersistentCache getAdResponse:] */

void FUN_1057509a0(void)

{
  func_0x00010be1cc40();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057509c0; end: 1057509e3; -[SCAdResponsePersistentCache getAdResponse:brandSafetyType:] */

void FUN_1057509c0(void)

{
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057509e4; end: 105750a07; -[SCAdResponsePersistentCache peekAdResponse:brandSafetyType:] */

void FUN_1057509e4(void)

{
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105750a08; end: 105750a77; -[SCAdResponsePersistentCache peekAdResponse:] */

void FUN_105750a08(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010be1cc40(param_1,param_2,param_3,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105750a78; end: 10575123b; -[SCAdResponsePersistentCache clearExpiredCache:] */

void FUN_105750a78(double param_1,undefined ***param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined1 uStack_469;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined8 uStack_458;
  long lStack_450;
  long lStack_448;
  undefined **ppuStack_438;
  undefined4 uStack_430;
  undefined4 uStack_420;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long *plStack_3d8;
  long *plStack_3d0;
  undefined1 uStack_3c1;
  undefined **ppuStack_3c0;
  undefined4 uStack_3b8;
  undefined2 uStack_3a8;
  byte bStack_3a6;
  byte bStack_3a5;
  undefined1 *puStack_388;
  undefined ***pppuStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long *plStack_360;
  long *plStack_358;
  undefined **ppuStack_350;
  undefined4 uStack_348;
  undefined4 uStack_338;
  undefined4 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  undefined1 uStack_2d9;
  undefined **ppuStack_2d8;
  undefined4 uStack_2d0;
  undefined2 uStack_2c0;
  byte bStack_2be;
  byte bStack_2bd;
  undefined1 *puStack_2a0;
  undefined ***pppuStack_298;
  long lStack_290;
  long lStack_288;
  undefined8 uStack_280;
  long *plStack_278;
  long *plStack_270;
  undefined **ppuStack_268;
  undefined4 uStack_260;
  undefined4 uStack_250;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  long *plStack_200;
  undefined1 uStack_1f1;
  undefined **ppuStack_1f0;
  undefined4 uStack_1e8;
  undefined2 uStack_1d8;
  undefined2 uStack_1d6;
  undefined1 *puStack_1b8;
  undefined ***pppuStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  byte bStack_166;
  byte bStack_165;
  undefined ***pppuStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined ***pppuStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 *puStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined4 uStack_94;
  code *pcStack_90;
  undefined8 uStack_88;
  long alStack_80 [2];
  
  alStack_80[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar2);
  puVar3 = &uStack_1f1;
  FUN_1057552d8();
  lStack_238 = (long)param_1;
  uStack_260 = 0xf;
  uStack_250 = 0x100;
  ppuStack_268 = &PTR_DAT_110864b98;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_218 = 0;
  lStack_220 = 0;
  plStack_208 = (long *)0x0;
  uStack_210 = 0;
  plStack_200 = (long *)0x0;
  uStack_1d6 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_1e8 = 6;
  uStack_1d8 = 0x100;
  ppuStack_1f0 = &PTR_FUN_110864b38;
  pppuStack_1b0 = &ppuStack_268;
  lStack_1a0 = 0;
  lStack_1a8 = 0;
  plStack_190 = (long *)0x0;
  uStack_198 = 0;
  plStack_188 = (long *)0x0;
  puVar4 = &uStack_2d9;
  puStack_1b8 = puVar3;
  FUN_105755564();
  uStack_348 = 0xf;
  uStack_338 = 0x100;
  uStack_320 = 2;
  ppuStack_350 = &PTR_FUN_110864c08;
  uStack_310 = 0;
  uStack_318 = 0;
  lStack_300 = 0;
  lStack_308 = 0;
  plStack_2f0 = (long *)0x0;
  uStack_2f8 = 0;
  plStack_2e8 = (long *)0x0;
  bStack_2be = puVar4[0x1a];
  bStack_2bd = puVar4[0x1b];
  uStack_2d0 = 6;
  uStack_2c0 = 0x100;
  ppuStack_2d8 = &PTR_FUN_110866be0;
  pppuStack_298 = &ppuStack_350;
  plStack_270 = (long *)0x0;
  lStack_288 = 0;
  lStack_290 = 0;
  plStack_278 = (long *)0x0;
  uStack_280 = 0;
  bStack_166 = (byte)uStack_1d6 | bStack_2be;
  bStack_165 = uStack_1d6._1_1_ | bStack_2bd;
  uStack_178 = 5;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_SUB_1108629c8;
  pppuStack_148 = &ppuStack_1f0;
  pppuStack_140 = &ppuStack_2d8;
  uStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  plStack_118 = (long *)0x0;
  puVar3 = &uStack_3c1;
  puStack_2a0 = puVar4;
  FUN_105755160();
  uStack_430 = 0xf;
  uStack_420 = 0x100;
  _objc_retain(param_4);
  ppuStack_438 = &PTR_SUB_110862760;
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  plStack_3d8 = (long *)0x0;
  uStack_3e0 = 0;
  plStack_3d0 = (long *)0x0;
  bStack_3a6 = puVar3[0x1a];
  bStack_3a5 = puVar3[0x1b];
  uStack_3b8 = 10;
  uStack_3a8 = 0x100;
  ppuStack_3c0 = &PTR_FUN_110862700;
  pppuStack_380 = &ppuStack_438;
  pppuVar8 = &ppuStack_3c0;
  uStack_370 = 0;
  uStack_378 = 0;
  plStack_360 = (long *)0x0;
  uStack_368 = 0;
  plStack_358 = (long *)0x0;
  bStack_f6 = bStack_166 | bStack_3a6;
  bStack_f5 = bStack_165 & bStack_3a5;
  uStack_108 = 4;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d8 = &ppuStack_180;
  plStack_a8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_c8 = 0;
  puVar4 = &uStack_469;
  uStack_408 = param_4;
  puStack_388 = puVar3;
  pppuStack_d0 = pppuVar8;
  FUN_1057552d8();
  puStack_a0 = *(undefined8 **)(puVar4 + 0x10);
  uStack_98 = puVar4[0x19];
  uStack_97 = puVar4[0x18];
  uStack_88 = *(undefined8 *)(puVar4 + 0x28);
  uStack_94 = 1;
  pcStack_90 = FUN_105754af8;
  puStack_460 = (undefined *)0x0;
  uStack_458 = 0;
  puStack_468 = (undefined *)0x0;
  func_0x000100c435d0(&puStack_468,&puStack_a0,alStack_80,1);
  ppuVar10 = &puStack_468;
  func_0x000100c436b8(&lStack_450,ppuVar10);
  pppuVar5 = param_2;
  func_0x00010be98620();
  _objc_retainAutoreleasedReturnValue();
  pppuVar6 = pppuVar5;
  func_0x00010c0d3c80();
  _objc_release(pppuVar5);
  if (lStack_450 != 0) {
    lStack_448 = lStack_450;
    __ZdlPv();
  }
  if (puStack_468 != (undefined *)0x0) {
    puStack_460 = puStack_468;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_358;
  ppuStack_3c0 = &PTR_FUN_110862700;
  plStack_358 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_360;
  plStack_360 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_a0 = &uStack_378;
  func_0x000100105004(&puStack_a0);
  plVar1 = plStack_3d0;
  ppuStack_438 = &PTR_SUB_110862760;
  plStack_3d0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3d8;
  plStack_3d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_a0 = &uStack_3f0;
  func_0x000100105004(&puStack_a0);
  _objc_release(uStack_408);
  plVar1 = plStack_118;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_138 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_270;
  ppuStack_2d8 = &PTR_FUN_110866be0;
  plStack_270 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_278;
  plStack_278 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_290 != 0) {
    lStack_288 = lStack_290;
    __ZdlPv();
  }
  plVar1 = plStack_2e8;
  ppuStack_350 = &PTR_FUN_110864c08;
  plStack_2e8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2f0;
  plStack_2f0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_308 != 0) {
    lStack_300 = lStack_308;
    __ZdlPv();
  }
  plVar1 = plStack_188;
  ppuStack_1f0 = &PTR_FUN_110864b38;
  plStack_188 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_190;
  plStack_190 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1a8 != 0) {
    lStack_1a0 = lStack_1a8;
    __ZdlPv();
  }
  plVar1 = plStack_200;
  ppuStack_268 = &PTR_DAT_110864b98;
  plStack_200 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_208;
  plStack_208 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_220 != 0) {
    lStack_218 = lStack_220;
    __ZdlPv();
  }
  pppuVar5 = (undefined ***)PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(pppuVar5);
  pppuVar7 = pppuVar6;
  func_0x00010bf529e0();
  if (pppuVar7 != (undefined ***)0x0) {
    pppuVar8 = pppuVar6;
    func_0x00010c0d3c80();
    pppuVar5 = pppuVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar5;
    func_0x00010bf9c880();
    _objc_release(pppuVar5);
    if (param_1 - (double)pppuVar7 <= 86400000.0) {
      func_0x00010c12d3c0(pppuVar8);
    }
    func_0x00010be98500(param_2);
    ppuVar10 = &PTR___NSConcreteGlobalBlock_1108af540;
    func_0x000100504554(pppuVar6,&PTR___NSConcreteGlobalBlock_1108af540);
    _objc_release(pppuVar8);
  }
  _objc_release(pppuVar6);
  uVar9 = param_4;
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_80[0]) {
    ___stack_chk_fail();
    _objc_release(pppuVar5);
    _objc_release(pppuVar8);
    _objc_release(pppuVar6);
    _objc_release(param_4);
    __Unwind_Resume(uVar9);
    func_0x00010bef47c0(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10575123c; end: 10575125b;  */

void FUN_10575123c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bef47c0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10575125c; end: 105751bcb; -[SCAdResponsePersistentCache clearExpiredCacheForAllURLs] */

void FUN_10575125c(double param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined *puStack_448;
  undefined8 uStack_440;
  code *pcStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined1 *puStack_420;
  code *pcStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  long lStack_3c8;
  uint uStack_3bc;
  long lStack_3b8;
  long lStack_3b0;
  ulong uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined4 uStack_35c;
  long lStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined **ppuStack_340;
  undefined4 uStack_338;
  undefined4 uStack_328;
  undefined4 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined1 uStack_2c9;
  undefined **ppuStack_2c8;
  undefined4 uStack_2c0;
  undefined2 uStack_2b0;
  byte bStack_2ae;
  byte bStack_2ad;
  undefined1 *puStack_290;
  undefined ***pppuStack_288;
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  long *plStack_268;
  long *plStack_260;
  undefined **ppuStack_258;
  undefined4 uStack_250;
  undefined4 uStack_240;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  undefined1 uStack_1e1;
  undefined **ppuStack_1e0;
  undefined4 uStack_1d8;
  undefined2 uStack_1c8;
  undefined2 uStack_1c6;
  undefined1 *puStack_1a8;
  undefined ***pppuStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined **ppuStack_170;
  undefined4 uStack_168;
  undefined2 uStack_158;
  byte bStack_156;
  byte bStack_155;
  undefined ***pppuStack_138;
  undefined ***pppuStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf18ba0();
  puStack_410 = puVar4;
  _objc_release(puVar3);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar5 = *(ulong *)(param_2 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c067f60();
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  uStack_3a8 = param_2;
  func_0x00010bf18ba0();
  puStack_408 = puVar7;
  _objc_release(puVar4);
  uVar5 = 0;
  uStack_3bc = 0;
  lStack_3b8 = 0;
  lStack_3b0 = 0;
  lVar14 = 0;
  lStack_3c8 = (long)param_1;
  uStack_3f8 = uVar6 & 0xffffffff;
  uStack_400 = (ulong)(int)uVar6;
  ppuStack_3d0 = &PTR_DAT_110864b98;
  ppuStack_3d8 = &PTR_FUN_110864b38;
  ppuStack_3e0 = &PTR_FUN_110864c08;
  ppuStack_3e8 = &PTR_FUN_110866be0;
  ppuStack_3f0 = &PTR_SUB_1108629c8;
  do {
    _objc_autoreleasePoolPush();
    puVar7 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar7);
    puVar8 = &uStack_1e1;
    FUN_1057552d8();
    uStack_250 = 0xf;
    uStack_240 = 0x100;
    lStack_228 = lStack_3c8;
    ppuStack_258 = ppuStack_3d0;
    pppuStack_1a0 = &ppuStack_258;
    uStack_218 = 0;
    uStack_220 = 0;
    lStack_208 = 0;
    lStack_210 = 0;
    plStack_1f8 = (long *)0x0;
    uStack_200 = 0;
    plStack_1f0 = (long *)0x0;
    uStack_1c6 = *(undefined2 *)(puVar8 + 0x1a);
    uStack_1d8 = 6;
    uStack_1c8 = 0x100;
    ppuStack_1e0 = ppuStack_3d8;
    lStack_190 = 0;
    lStack_198 = 0;
    plStack_180 = (long *)0x0;
    uStack_188 = 0;
    plStack_178 = (long *)0x0;
    puVar9 = &uStack_2c9;
    puStack_1a8 = puVar8;
    FUN_105755564();
    uStack_338 = 0xf;
    uStack_328 = 0x100;
    uStack_310 = 2;
    ppuStack_340 = ppuStack_3e0;
    pppuStack_288 = &ppuStack_340;
    uStack_300 = 0;
    uStack_308 = 0;
    lStack_2f0 = 0;
    lStack_2f8 = 0;
    plStack_2e0 = (long *)0x0;
    uStack_2e8 = 0;
    plStack_2d8 = (long *)0x0;
    bStack_2ae = puVar9[0x1a];
    bStack_2ad = puVar9[0x1b];
    uStack_2c0 = 6;
    uStack_2b0 = 0x100;
    ppuStack_2c8 = ppuStack_3e8;
    pppuStack_130 = &ppuStack_2c8;
    plStack_260 = (long *)0x0;
    plStack_268 = (long *)0x0;
    uStack_270 = 0;
    lStack_278 = 0;
    lStack_280 = 0;
    bStack_156 = (byte)uStack_1c6 | bStack_2ae;
    bStack_155 = uStack_1c6._1_1_ | bStack_2ad;
    uStack_168 = 5;
    uStack_158 = 0x100;
    ppuStack_170 = ppuStack_3f0;
    plStack_108 = (long *)0x0;
    plStack_110 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_128 = 0;
    lStack_358 = 0;
    lStack_350 = 0;
    uStack_348 = 0;
    uStack_35c = 0x14;
    uVar6 = uStack_3a8;
    puStack_290 = puVar9;
    pppuStack_138 = &ppuStack_1e0;
    func_0x00010be98620(uStack_3a8,param_3,&ppuStack_170,&lStack_358,&uStack_35c);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_358 != 0) {
      lStack_350 = lStack_358;
      __ZdlPv();
    }
    plVar2 = plStack_108;
    ppuStack_170 = &PTR_SUB_1108629c8;
    plStack_108 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_110;
    plStack_110 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_128 != 0) {
      __ZdlPv();
    }
    plVar2 = plStack_260;
    ppuStack_2c8 = &PTR_FUN_110866be0;
    plStack_260 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_268;
    plStack_268 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_280 != 0) {
      lStack_278 = lStack_280;
      __ZdlPv();
    }
    plVar2 = plStack_2d8;
    ppuStack_340 = &PTR_FUN_110864c08;
    plStack_2d8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_2e0;
    plStack_2e0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_2f8 != 0) {
      lStack_2f0 = lStack_2f8;
      __ZdlPv();
    }
    plVar2 = plStack_178;
    ppuStack_1e0 = &PTR_FUN_110864b38;
    plStack_178 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_180;
    plStack_180 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_198 != 0) {
      lStack_190 = lStack_198;
      __ZdlPv();
    }
    plVar2 = plStack_1f0;
    ppuStack_258 = &PTR_DAT_110864b98;
    plStack_1f0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_1f8;
    plStack_1f8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_210 != 0) {
      lStack_208 = lStack_210;
      __ZdlPv();
    }
    puVar7 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar7);
    uVar10 = uVar6;
    func_0x00010bf529e0();
    if ((uStack_3bc & 1) == 0 && uVar10 != 0) {
      uVar11 = uVar6;
      func_0x00010bfb1920(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be50f60(uStack_3a8,param_3,uVar11);
      _objc_release(uVar11);
      uStack_3bc = 1;
LAB_10575176c:
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      lStack_398 = 0;
      uStack_3a0 = 0;
      uStack_388 = 0;
      plStack_390 = (long *)0x0;
      _objc_retain(uVar6);
      uVar11 = uVar6;
      func_0x00010bf52a60(uVar6,param_3,&uStack_3a0,auStack_100,0x10);
      if (uVar11 != 0) {
        lVar15 = *plStack_390;
        do {
          uVar13 = 0;
          do {
            if (*plStack_390 != lVar15) {
              _objc_enumerationMutation(uVar6);
            }
            uVar12 = *(undefined8 *)(lStack_398 + uVar13 * 8);
            func_0x00010bf26da0(uVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3,param_3,uVar12);
            _objc_release(uVar12);
            uVar13 = uVar13 + 1;
          } while (uVar11 != uVar13);
          uVar11 = uVar6;
          func_0x00010bf52a60(uVar6,param_3,&uStack_3a0,auStack_100,0x10);
        } while (uVar11 != 0);
      }
      _objc_release(uVar6);
      puVar7 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf18ba0();
      _objc_release(puVar7);
      uVar11 = uStack_3a8;
      func_0x00010be98520(uStack_3a8,param_3,uVar6);
      iVar16 = (int)uVar11;
      puVar7 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95660();
      _objc_release(puVar7);
      lStack_3b0 = uVar10 + lStack_3b0;
      lStack_3b8 = uVar10 + lStack_3b8;
      uVar5 = uVar5 + (uVar11 & 0xffffffff);
    }
    else {
      if (uVar10 != 0) goto LAB_10575176c;
      iVar16 = 1;
    }
    _objc_release(uVar6);
    _objc_autoreleasePoolPop(puVar4);
    lVar14 = uVar10 + lVar14;
    iVar1 = 0;
    if (0x13 < uVar10) {
      iVar1 = iVar16;
    }
    if ((iVar1 != 1) || (uStack_3f8 != 0 && uStack_400 <= uVar5)) {
      puVar4 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95660();
      _objc_release(puVar4);
      uVar12 = *(undefined8 *)(uStack_3a8 + 0x20);
      puVar4 = PTR_PTR_1126b8d98;
      func_0x00010c0cc160(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9180(uVar12,param_3,puVar4,lVar14);
      _objc_release(puVar4);
      uVar12 = *(undefined8 *)(uStack_3a8 + 0x20);
      puVar4 = PTR_PTR_1126b8d98;
      func_0x00010bf26460(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010bf529e0(puVar3);
      func_0x00010bef9180(uVar12,param_3,puVar4,puVar7);
      _objc_release(puVar4);
      uVar12 = *(undefined8 *)(uStack_3a8 + 0x20);
      puVar4 = PTR_PTR_1126b8d98;
      func_0x00010bf26420(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9180(uVar12,param_3,puVar4,lStack_3b0);
      _objc_release(puVar4);
      uVar12 = *(undefined8 *)(uStack_3a8 + 0x20);
      puVar4 = PTR_PTR_1126b8d98;
      func_0x00010bf26440(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9180(uVar12,param_3,puVar4,lStack_3b8);
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95660();
      _objc_release(puVar4);
      puVar7 = puVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(puVar4);
      _objc_release(puVar3);
      __Unwind_Resume();
      pcStack_418 = FUN_105751bcc;
      puStack_448 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_440 = 0xc2000000;
      pcStack_438 = FUN_105751c28;
      puStack_430 = &UNK_11087bb00;
      puStack_428 = puVar7;
      puStack_420 = &stack0xfffffffffffffff0;
      func_0x00010c0f7fc0(*(undefined8 *)(puVar7 + 0x30),param_3,&puStack_448);
      return;
    }
  } while( true );
}



/* Entry: 105751bcc; end: 105751c27; -[SCAdResponsePersistentCache clearExpiredCacheForAllURLsAsync] */

void FUN_105751bcc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105751c28;
  puStack_20 = &UNK_11087bb00;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_38);
  return;
}



/* Entry: 105751c28; end: 105751c2f;  */

void FUN_105751c28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3b330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_clearExpiredCacheForAllURLs_1125ac670);
  return;
}



/* Entry: 105751c30; end: 105751ce3; -[SCAdResponsePersistentCache clearExpiredCacheAsync:] */

void FUN_105751c30(long param_1,undefined8 param_2,long param_3)

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
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105751ce4;
    puStack_48 = &UNK_110883780;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105751ce4; end: 105751d07;  */

void FUN_105751ce4(long param_1,undefined8 param_2)

{
  func_0x00010bf3b2e0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105751d08; end: 105751df7; -[SCAdResponsePersistentCache timeSinceLastExpirationInMSAsync:completion:] */

void FUN_105751d08(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105751df8;
    puStack_50 = &UNK_1108a5ee8;
    _objc_retain(param_4);
    lStack_48 = param_1;
    lStack_38 = param_4;
    _objc_retain(param_3);
    lStack_40 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
    _objc_release(lStack_40);
    _objc_release(lStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105751df8; end: 105751e53;  */

void FUN_105751df8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26f7e0(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105751e54; end: 10575232f; -[SCAdResponsePersistentCache allUnexpiredAdResponsesByCacheURL] */

void FUN_105751e54(double param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  double dVar9;
  undefined **ppuStack_398;
  undefined4 uStack_390;
  undefined4 uStack_380;
  undefined4 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_350;
  long lStack_348;
  undefined8 uStack_340;
  long *plStack_338;
  long *plStack_330;
  undefined1 uStack_321;
  undefined **ppuStack_320;
  undefined4 uStack_318;
  undefined2 uStack_308;
  byte bStack_306;
  byte bStack_305;
  undefined1 *puStack_2e8;
  undefined ***pppuStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined **ppuStack_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_298;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long lStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  long *plStack_248;
  undefined1 uStack_239;
  undefined **ppuStack_238;
  undefined4 uStack_230;
  undefined2 uStack_220;
  byte bStack_21e;
  byte bStack_21d;
  undefined1 *puStack_200;
  undefined ***pppuStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  undefined **ppuStack_1c8;
  undefined4 uStack_1c0;
  undefined2 uStack_1b0;
  byte bStack_1ae;
  byte bStack_1ad;
  undefined ***pppuStack_190;
  undefined ***pppuStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined **ppuStack_158;
  undefined4 uStack_150;
  undefined2 uStack_140;
  byte bStack_13e;
  undefined1 uStack_13d;
  undefined ***pppuStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined **ppuStack_e8;
  undefined4 uStack_e0;
  undefined2 uStack_d0;
  byte bStack_ce;
  undefined1 uStack_cd;
  undefined ***pppuStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  puVar4 = &uStack_239;
  FUN_1057552d8();
  lStack_280 = (long)param_1;
  uStack_2a8 = 0xf;
  uStack_298 = 0x100;
  ppuStack_2b0 = &PTR_DAT_110864b98;
  uStack_270 = 0;
  uStack_278 = 0;
  lStack_260 = 0;
  lStack_268 = 0;
  plStack_250 = (long *)0x0;
  uStack_258 = 0;
  plStack_248 = (long *)0x0;
  bVar1 = puVar4[0x1a];
  bVar2 = puVar4[0x1b];
  uStack_230 = 8;
  uStack_220 = 0x100;
  ppuStack_238 = &PTR_FUN_110864b38;
  pppuStack_1f8 = &ppuStack_2b0;
  plStack_1d0 = (long *)0x0;
  plStack_1d8 = (long *)0x0;
  uStack_1e0 = 0;
  lStack_1e8 = 0;
  lStack_1f0 = 0;
  puVar5 = &uStack_321;
  bStack_21e = bVar1;
  bStack_21d = bVar2;
  puStack_200 = puVar4;
  FUN_105755564();
  uStack_390 = 0xf;
  uStack_380 = 0x100;
  uStack_368 = 2;
  ppuStack_398 = &PTR_FUN_110864c08;
  dVar9 = 0.0;
  uStack_358 = 0;
  uStack_360 = 0;
  lStack_348 = 0;
  lStack_350 = 0;
  plStack_338 = (long *)0x0;
  uStack_340 = 0;
  plStack_330 = (long *)0x0;
  bStack_306 = puVar5[0x1a];
  bStack_305 = puVar5[0x1b];
  uStack_318 = 10;
  uStack_308 = 0x100;
  ppuStack_320 = &PTR_FUN_110866be0;
  pppuStack_2e0 = &ppuStack_398;
  plStack_2b8 = (long *)0x0;
  plStack_2c0 = (long *)0x0;
  uStack_2c8 = 0;
  lStack_2d0 = 0;
  lStack_2d8 = 0;
  bStack_1ae = bStack_306 | bVar1;
  bStack_1ad = bStack_305 & bVar2;
  uStack_1c0 = 4;
  uStack_1b0 = 0x100;
  ppuStack_1c8 = &PTR_SUB_1108629c8;
  uStack_178 = 0;
  lStack_180 = 0;
  plStack_168 = (long *)0x0;
  uStack_170 = 0;
  plStack_160 = (long *)0x0;
  uStack_150 = 0;
  uStack_140 = 0x100;
  uStack_13d = 1;
  ppuStack_158 = &PTR_SUB_1108629c8;
  pppuStack_120 = &ppuStack_1c8;
  plStack_f0 = (long *)0x0;
  plStack_f8 = (long *)0x0;
  uStack_100 = 0;
  uStack_108 = 0;
  lStack_110 = 0;
  uStack_118 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0x100;
  uStack_cd = 1;
  ppuStack_e8 = &PTR_SUB_1108629c8;
  pppuStack_b0 = &ppuStack_158;
  lStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = (long *)0x0;
  uVar6 = param_2;
  puStack_2e8 = puVar5;
  pppuStack_190 = &ppuStack_238;
  pppuStack_188 = &ppuStack_320;
  bStack_13e = bStack_1ae;
  bStack_ce = bStack_1ae;
  func_0x00010be985e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  plVar3 = plStack_80;
  ppuStack_e8 = &PTR_SUB_1108629c8;
  plStack_80 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_88;
  plStack_88 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_a0 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_f0;
  ppuStack_158 = &PTR_SUB_1108629c8;
  plStack_f0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_f8;
  plStack_f8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_110 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_160;
  ppuStack_1c8 = &PTR_SUB_1108629c8;
  plStack_160 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_168;
  plStack_168 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_180 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_2b8;
  ppuStack_320 = &PTR_FUN_110866be0;
  plStack_2b8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_2c0;
  plStack_2c0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_2d8 != 0) {
    lStack_2d0 = lStack_2d8;
    __ZdlPv();
  }
  plVar3 = plStack_330;
  ppuStack_398 = &PTR_FUN_110864c08;
  plStack_330 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_338;
  plStack_338 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_350 != 0) {
    lStack_348 = lStack_350;
    __ZdlPv();
  }
  plVar3 = plStack_1d0;
  ppuStack_238 = &PTR_FUN_110864b38;
  plStack_1d0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_1d8;
  plStack_1d8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_1f0 != 0) {
    lStack_1e8 = lStack_1f0;
    __ZdlPv();
  }
  plVar3 = plStack_248;
  ppuStack_2b0 = &PTR_DAT_110864b98;
  plStack_248 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_250;
  plStack_250 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_268 != 0) {
    lStack_260 = lStack_268;
    __ZdlPv();
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar8 = uVar6;
  func_0x00010bd86870(uVar6,puVar7,&PTR___NSConcreteGlobalBlock_1108af580);
  _objc_release(puVar7);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010be50f80(dVar9 - param_1,param_2);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 105752330; end: 1057524df;  */

void FUN_105752330(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf93380();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010574c8f0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_2;
    func_0x00010bf26da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar3 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar1 = param_2;
      func_0x00010bf26da0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(lVar1);
      _objc_release(puVar4);
    }
    lVar1 = param_2;
    func_0x00010bf26da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1057524e0; end: 1057527df; -[SCAdResponsePersistentCache clearCache:] */

void FUN_1057524e0(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuStack_230;
  undefined4 uStack_228;
  undefined4 uStack_218;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined1 uStack_1b9;
  undefined **ppuStack_1b8;
  undefined4 uStack_1b0;
  undefined2 uStack_1a0;
  undefined1 uStack_19e;
  undefined1 uStack_19d;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long *plStack_150;
  undefined **ppuStack_148;
  undefined4 uStack_140;
  undefined2 uStack_130;
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  undefined ***pppuStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined **ppuStack_d8;
  undefined4 uStack_d0;
  undefined2 uStack_c0;
  undefined1 uStack_be;
  undefined1 uStack_bd;
  undefined ***pppuStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 *puStack_68;
  
  _objc_retain(param_3);
  puVar2 = &uStack_1b9;
  FUN_105755160();
  uStack_228 = 0xf;
  uStack_218 = 0x100;
  _objc_retain(param_3);
  ppuStack_230 = &PTR_SUB_110862760;
  uStack_1f0 = 0;
  uStack_1f8 = 0;
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  plStack_1d0 = (long *)0x0;
  uStack_1d8 = 0;
  plStack_1c8 = (long *)0x0;
  uStack_19e = puVar2[0x1a];
  uStack_19d = puVar2[0x1b];
  uStack_1b0 = 10;
  uStack_1a0 = 0x100;
  ppuStack_1b8 = &PTR_FUN_110862700;
  uStack_168 = 0;
  uStack_170 = 0;
  plStack_158 = (long *)0x0;
  uStack_160 = 0;
  plStack_150 = (long *)0x0;
  uStack_140 = 0;
  uStack_130 = 0x100;
  uStack_12d = 1;
  ppuStack_148 = &PTR_SUB_1108629c8;
  uStack_f0 = 0;
  uStack_f8 = 0;
  plStack_e0 = (long *)0x0;
  plStack_e8 = (long *)0x0;
  lStack_100 = 0;
  uStack_108 = 0;
  uStack_d0 = 0;
  uStack_c0 = 0x100;
  uStack_bd = 1;
  ppuStack_d8 = &PTR_SUB_1108629c8;
  pppuStack_a0 = &ppuStack_148;
  uStack_80 = 0;
  uStack_88 = 0;
  plStack_70 = (long *)0x0;
  plStack_78 = (long *)0x0;
  lStack_90 = 0;
  uStack_98 = 0;
  puVar3 = param_1;
  uStack_200 = param_3;
  puStack_180 = puVar2;
  puStack_178 = (undefined1 *)&ppuStack_230;
  uStack_12e = uStack_19e;
  pppuStack_110 = &ppuStack_1b8;
  uStack_be = uStack_19e;
  func_0x00010be985e0();
  _objc_retainAutoreleasedReturnValue();
  plVar1 = plStack_70;
  ppuStack_d8 = &PTR_SUB_1108629c8;
  plStack_70 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_78;
  plStack_78 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_90 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_e0;
  ppuStack_148 = &PTR_SUB_1108629c8;
  plStack_e0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_e8;
  plStack_e8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_100 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_150;
  ppuStack_1b8 = &PTR_FUN_110862700;
  plStack_150 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_158;
  plStack_158 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_68 = &uStack_170;
  func_0x000100105004(&puStack_68);
  plVar1 = plStack_1c8;
  ppuStack_230 = &PTR_SUB_110862760;
  plStack_1c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1d0;
  plStack_1d0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_68 = &uStack_1e8;
  func_0x000100105004(&puStack_68);
  _objc_release(uStack_200);
  puVar4 = puVar3;
  func_0x00010bf529e0();
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if (puVar4 != (undefined *)0x0) {
    func_0x00010be98500(param_1);
    puVar5 = puVar3;
    func_0x000100504554(puVar3,&PTR___NSConcreteGlobalBlock_1108af5a0);
  }
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1057527e0; end: 1057527ff;  */

void FUN_1057527e0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bef47c0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105752800; end: 10575296b; -[SCAdResponsePersistentCache clearAllCache] */

void FUN_105752800(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _os_unfair_lock_lock(param_1 + 0x1c);
  lVar1 = param_1;
  func_0x00010be05920();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bdbc8);
  if (lVar1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,lVar1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar2 = &uStack_70;
  func_0x00010054c81c(puVar2,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x1c);
  func_0x00010be98500(param_1);
  _objc_release(puVar3);
  return;
}



/* Entry: 10575296c; end: 105752f3b; -[SCAdResponsePersistentCache timeSinceLastExpirationInMS:] */

/* WARNING: Removing unreachable block (ram,0x000105753880) */

void FUN_10575296c(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  int iVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  undefined1 uStack_7d1;
  long lStack_7d0;
  long lStack_7c8;
  undefined8 uStack_7c0;
  long lStack_7b8;
  long lStack_7b0;
  undefined **ppuStack_7a0;
  undefined4 uStack_798;
  undefined4 uStack_788;
  undefined4 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  long lStack_758;
  long lStack_750;
  undefined8 uStack_748;
  long *plStack_740;
  long *plStack_738;
  undefined1 uStack_729;
  undefined **ppuStack_728;
  undefined4 uStack_720;
  undefined2 uStack_710;
  byte bStack_70e;
  byte bStack_70d;
  undefined1 *puStack_6f0;
  undefined ***pppuStack_6e8;
  long lStack_6e0;
  long lStack_6d8;
  undefined8 uStack_6d0;
  long *plStack_6c8;
  long *plStack_6c0;
  undefined **ppuStack_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6a0;
  long lStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  long lStack_670;
  long lStack_668;
  undefined8 uStack_660;
  long *plStack_658;
  long *plStack_650;
  undefined1 uStack_641;
  undefined **ppuStack_640;
  undefined4 uStack_638;
  undefined2 uStack_628;
  byte bStack_626;
  byte bStack_625;
  undefined1 *puStack_608;
  undefined ***pppuStack_600;
  long lStack_5f8;
  long lStack_5f0;
  undefined8 uStack_5e8;
  long *plStack_5e0;
  long *plStack_5d8;
  undefined **ppuStack_5d0;
  undefined4 uStack_5c8;
  undefined4 uStack_5b8;
  undefined **ppuStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined *puStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long *plStack_570;
  long *plStack_568;
  undefined1 uStack_559;
  undefined **ppuStack_558;
  undefined4 uStack_550;
  undefined2 uStack_540;
  undefined2 uStack_53e;
  undefined1 *puStack_520;
  undefined ***pppuStack_518;
  undefined *puStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  long *plStack_4f8;
  long *plStack_4f0;
  undefined **ppuStack_4e8;
  undefined4 uStack_4e0;
  undefined2 uStack_4d0;
  byte bStack_4ce;
  byte bStack_4cd;
  undefined ***pppuStack_4b0;
  undefined ***pppuStack_4a8;
  long lStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long *plStack_488;
  long *plStack_480;
  undefined **ppuStack_478;
  undefined4 uStack_470;
  undefined2 uStack_460;
  byte bStack_45e;
  byte bStack_45d;
  undefined ***pppuStack_440;
  undefined ***pppuStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long *plStack_418;
  long *plStack_410;
  undefined **ppuStack_408;
  undefined8 uStack_400;
  undefined1 uStack_3f8;
  undefined1 uStack_3f7;
  undefined4 uStack_3f4;
  code *pcStack_3f0;
  undefined8 uStack_3e8;
  long alStack_3e0 [2];
  undefined1 uStack_311;
  long lStack_310;
  long lStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined **ppuStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2c8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  long *plStack_278;
  undefined1 uStack_269;
  undefined **ppuStack_268;
  undefined4 uStack_260;
  undefined2 uStack_250;
  byte bStack_24e;
  byte bStack_24d;
  undefined1 *puStack_230;
  undefined ***pppuStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  long *plStack_200;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  undefined2 uStack_166;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined ***pppuStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 *puStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined4 uStack_94;
  code *pcStack_90;
  undefined8 uStack_88;
  long alStack_80 [2];
  
  alStack_80[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  ppuVar2 = (undefined **)PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf18ba0();
  _objc_release(ppuVar2);
  puVar4 = &uStack_181;
  FUN_1057552d8();
  lStack_1c8 = (long)param_1;
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  ppuStack_1f8 = &PTR_DAT_110864b98;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1a8 = 0;
  lStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  uStack_166 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_178 = 6;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_FUN_110864b38;
  pppuStack_140 = &ppuStack_1f8;
  lStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  plStack_118 = (long *)0x0;
  puVar5 = &uStack_269;
  puStack_148 = puVar4;
  FUN_105755160();
  uStack_2d8 = 0xf;
  uStack_2c8 = 0x100;
  _objc_retain(param_4);
  ppuStack_2e0 = &PTR_SUB_110862760;
  dVar15 = 0.0;
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  uStack_290 = 0;
  uStack_298 = 0;
  plStack_280 = (long *)0x0;
  uStack_288 = 0;
  plStack_278 = (long *)0x0;
  bStack_24e = puVar5[0x1a];
  bStack_24d = puVar5[0x1b];
  uStack_260 = 10;
  uStack_250 = 0x100;
  ppuStack_268 = &PTR_FUN_110862700;
  pppuStack_228 = &ppuStack_2e0;
  pppuStack_d0 = &ppuStack_268;
  uStack_218 = 0;
  uStack_220 = 0;
  plStack_208 = (long *)0x0;
  uStack_210 = 0;
  plStack_200 = (long *)0x0;
  bStack_f6 = (byte)uStack_166 | bStack_24e;
  bStack_f5 = uStack_166._1_1_ & bStack_24d;
  uStack_108 = 4;
  uStack_f8 = 0x100;
  ppuVar2 = (undefined **)&UNK_1108629b8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d8 = &ppuStack_180;
  plStack_a8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_c8 = 0;
  puVar4 = &uStack_311;
  uStack_2b0 = param_4;
  puStack_230 = puVar5;
  FUN_1057552d8();
  puStack_a0 = *(undefined8 **)(puVar4 + 0x10);
  uStack_98 = puVar4[0x19];
  uStack_97 = puVar4[0x18];
  uStack_88 = *(undefined8 *)(puVar4 + 0x28);
  uStack_94 = 1;
  pcStack_90 = FUN_105754af8;
  lStack_308 = 0;
  uStack_300 = 0;
  lStack_310 = 0;
  func_0x000100c435d0(&lStack_310,&puStack_a0,alStack_80,1);
  func_0x000100c436b8(&lStack_2f8,&lStack_310);
  iVar13 = (int)&lStack_2f8;
  func_0x00010be98620();
  _objc_retainAutoreleasedReturnValue();
  if (lStack_2f8 != 0) {
    lStack_2f0 = lStack_2f8;
    __ZdlPv();
  }
  if (lStack_310 != 0) {
    lStack_308 = lStack_310;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_200;
  ppuStack_268 = &PTR_FUN_110862700;
  plStack_200 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_208;
  plStack_208 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_a0 = &uStack_220;
  func_0x000100105004(&puStack_a0);
  plVar1 = plStack_278;
  ppuStack_2e0 = &PTR_SUB_110862760;
  plStack_278 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_280;
  plStack_280 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_a0 = &uStack_298;
  func_0x000100105004(&puStack_a0);
  _objc_release(uStack_2b0);
  plVar1 = plStack_118;
  ppuStack_180 = &PTR_FUN_110864b38;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_138 != 0) {
    lStack_130 = lStack_138;
    __ZdlPv();
  }
  plVar1 = plStack_190;
  ppuStack_1f8 = &PTR_DAT_110864b98;
  plStack_190 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1b0 != 0) {
    lStack_1a8 = lStack_1b0;
    __ZdlPv();
  }
  puVar6 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar6);
  puVar7 = param_2;
  func_0x00010bf529e0();
  ppuVar9 = (undefined **)PTR_PTR_1126ae750;
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar7 == (undefined *)0x0) {
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf9c880();
    dVar15 = param_1 - (double)puVar7;
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar8;
    func_0x00010c2468a0(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    _objc_release(puVar6);
    ppuVar2 = ppuVar8;
  }
  _objc_release(param_2);
  uVar10 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_80[0]) {
    ___stack_chk_fail();
    _objc_release(ppuVar2);
    _objc_release(puVar6);
    _objc_release(param_2);
    _objc_release(param_4);
    __Unwind_Resume(uVar10);
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar12 = ppuVar3;
    _objc_retain(ppuVar3);
    ppuVar8 = ppuVar3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010c08fa60();
    _objc_release(ppuVar8);
    ppuVar2 = (undefined **)0x0;
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar8 = ppuVar3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      iVar13 = 1;
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar2;
      func_0x00010be984e0(uVar10);
      _objc_release(ppuVar2);
      _objc_release(ppuVar8);
    }
    ppuVar9 = ppuVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar2);
    _objc_release(ppuVar8);
    _objc_release(ppuVar3);
    __Unwind_Resume();
    alStack_3e0[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar12);
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    puVar4 = &uStack_559;
    FUN_105755160();
    uStack_5c8 = 0xf;
    uStack_5b8 = 0x100;
    _objc_retain(ppuVar12);
    ppuStack_5d0 = &PTR_SUB_110862760;
    uStack_590 = 0;
    uStack_598 = 0;
    uStack_580 = 0;
    puStack_588 = (undefined *)0x0;
    plStack_570 = (long *)0x0;
    uStack_578 = 0;
    plStack_568 = (long *)0x0;
    uStack_53e = *(undefined2 *)(puVar4 + 0x1a);
    uStack_550 = 10;
    uStack_540 = 0x100;
    ppuStack_558 = &PTR_FUN_110862700;
    uStack_508 = 0;
    puStack_510 = (undefined *)0x0;
    plStack_4f8 = (long *)0x0;
    uStack_500 = 0;
    plStack_4f0 = (long *)0x0;
    puVar5 = &uStack_641;
    ppuStack_5a0 = ppuVar12;
    puStack_520 = puVar4;
    pppuStack_518 = &ppuStack_5d0;
    FUN_1057552d8();
    lStack_688 = (long)dVar15;
    uStack_6b0 = 0xf;
    uStack_6a0 = 0x100;
    ppuStack_6b8 = &PTR_DAT_110864b98;
    uStack_678 = 0;
    uStack_680 = 0;
    lStack_668 = 0;
    lStack_670 = 0;
    plStack_658 = (long *)0x0;
    uStack_660 = 0;
    plStack_650 = (long *)0x0;
    bStack_626 = puVar5[0x1a];
    bStack_625 = puVar5[0x1b];
    uStack_638 = 8;
    uStack_628 = 0x100;
    ppuStack_640 = &PTR_FUN_110864b38;
    plStack_5d8 = (long *)0x0;
    lStack_5f0 = 0;
    lStack_5f8 = 0;
    plStack_5e0 = (long *)0x0;
    uStack_5e8 = 0;
    bStack_4ce = (byte)uStack_53e | bStack_626;
    bStack_4cd = uStack_53e._1_1_ & bStack_625;
    uStack_4e0 = 4;
    uStack_4d0 = 0x100;
    ppuStack_4e8 = &PTR_SUB_1108629c8;
    pppuStack_4a8 = &ppuStack_640;
    uStack_498 = 0;
    lStack_4a0 = 0;
    plStack_488 = (long *)0x0;
    uStack_490 = 0;
    plStack_480 = (long *)0x0;
    puVar4 = &uStack_729;
    puStack_608 = puVar5;
    pppuStack_600 = &ppuStack_6b8;
    pppuStack_4b0 = &ppuStack_558;
    FUN_105755564();
    uStack_798 = 0xf;
    uStack_788 = 0x100;
    uStack_770 = 2;
    ppuStack_7a0 = &PTR_FUN_110864c08;
    dVar16 = 0.0;
    uStack_760 = 0;
    uStack_768 = 0;
    lStack_750 = 0;
    lStack_758 = 0;
    plStack_740 = (long *)0x0;
    uStack_748 = 0;
    plStack_738 = (long *)0x0;
    bStack_70e = puVar4[0x1a];
    bStack_70d = puVar4[0x1b];
    uStack_720 = 10;
    uStack_710 = 0x100;
    ppuVar2 = (undefined **)&UNK_110866bd0;
    ppuStack_728 = &PTR_FUN_110866be0;
    plStack_6c0 = (long *)0x0;
    lStack_6d8 = 0;
    lStack_6e0 = 0;
    plStack_6c8 = (long *)0x0;
    uStack_6d0 = 0;
    bStack_45e = bStack_4ce | bStack_70e;
    bStack_45d = bStack_4cd & bStack_70d;
    uStack_470 = 4;
    uStack_460 = 0x100;
    ppuStack_478 = &PTR_SUB_1108629c8;
    pppuStack_438 = &ppuStack_728;
    uStack_428 = 0;
    lStack_430 = 0;
    plStack_418 = (long *)0x0;
    uStack_420 = 0;
    plStack_410 = (long *)0x0;
    puVar5 = &uStack_7d1;
    puStack_6f0 = puVar4;
    pppuStack_6e8 = &ppuStack_7a0;
    pppuStack_440 = &ppuStack_4e8;
    FUN_10575541c();
    uStack_400 = *(undefined8 *)(puVar5 + 0x10);
    uStack_3f8 = puVar5[0x19];
    uStack_3f7 = puVar5[0x18];
    uStack_3e8 = *(undefined8 *)(puVar5 + 0x28);
    uStack_3f4 = 0;
    pcStack_3f0 = FUN_105754af8;
    lStack_7c8 = 0;
    uStack_7c0 = 0;
    lStack_7d0 = 0;
    func_0x000100c435d0(&lStack_7d0,&uStack_400,alStack_3e0,1);
    func_0x000100c436b8(&lStack_7b8,&lStack_7d0);
    ppuVar3 = ppuVar9;
    func_0x00010be98620();
    _objc_retainAutoreleasedReturnValue();
    if (lStack_7b8 != 0) {
      lStack_7b0 = lStack_7b8;
      __ZdlPv();
    }
    if (lStack_7d0 != 0) {
      lStack_7c8 = lStack_7d0;
      __ZdlPv();
    }
    plVar1 = plStack_410;
    ppuStack_478 = &PTR_SUB_1108629c8;
    plStack_410 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_418;
    plStack_418 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_430 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_6c0;
    ppuStack_728 = &PTR_FUN_110866be0;
    plStack_6c0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_6c8;
    plStack_6c8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_6e0 != 0) {
      lStack_6d8 = lStack_6e0;
      __ZdlPv();
    }
    plVar1 = plStack_738;
    ppuStack_7a0 = &PTR_FUN_110864c08;
    plStack_738 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_740;
    plStack_740 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_758 != 0) {
      lStack_750 = lStack_758;
      __ZdlPv();
    }
    plVar1 = plStack_480;
    ppuStack_4e8 = &PTR_SUB_1108629c8;
    plStack_480 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_488;
    plStack_488 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_4a0 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_5d8;
    ppuStack_640 = &PTR_FUN_110864b38;
    plStack_5d8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_5e0;
    plStack_5e0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_5f8 != 0) {
      lStack_5f0 = lStack_5f8;
      __ZdlPv();
    }
    plVar1 = plStack_650;
    ppuStack_6b8 = &PTR_DAT_110864b98;
    plStack_650 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_658;
    plStack_658 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_670 != 0) {
      lStack_668 = lStack_670;
      __ZdlPv();
    }
    plVar1 = plStack_4f0;
    ppuVar8 = &puStack_510;
    ppuStack_558 = &PTR_FUN_110862700;
    plStack_4f0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_4f8;
    plStack_4f8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_640 = ppuVar8;
    func_0x000100105004(&ppuStack_640);
    plVar1 = plStack_568;
    ppuStack_5d0 = &PTR_SUB_110862760;
    plStack_568 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_570;
    plStack_570 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_640 = &puStack_588;
    func_0x000100105004(&ppuStack_640);
    _objc_release(ppuStack_5a0);
    ppuVar11 = ppuVar3;
    func_0x00010bf529e0();
    if (ppuVar11 == (undefined **)0x0) {
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      func_0x00010be50f80(dVar16 - dVar15,ppuVar9);
      ppuVar9 = (undefined **)PTR_PTR_1126ae750;
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar2 = ppuVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (iVar13 != 0) {
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_408 = ppuVar2;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be98500(ppuVar9);
        _objc_release(puVar6);
      }
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      func_0x00010be50f80(dVar16 - dVar15,ppuVar9);
      ppuVar9 = ppuVar2;
      func_0x00010bf93380(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar9;
      func_0x00010574c8f0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      ppuVar9 = (undefined **)PTR_PTR_1126ae750;
      func_0x00010c0ec800(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      _objc_release(ppuVar2);
    }
    _objc_release(ppuVar3);
    ppuVar11 = ppuVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_3e0[0]) {
      ___stack_chk_fail();
      _objc_release(ppuVar8);
      _objc_release(ppuVar2);
      _objc_release(ppuVar3);
      _objc_release(ppuVar12);
      __Unwind_Resume(ppuVar11);
      func_0x00010be98620();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar11;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return;
}



/* Entry: 105752f3c; end: 10575306f; -[SCAdResponsePersistentCache deleteAdResponse:] */

/* WARNING: Removing unreachable block (ram,0x000105753880) */

void FUN_105752f3c(double param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  int param_5)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  double dVar12;
  undefined1 uStack_4b1;
  long lStack_4b0;
  long lStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  long lStack_490;
  undefined **ppuStack_480;
  undefined4 uStack_478;
  undefined4 uStack_468;
  undefined4 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long lStack_430;
  undefined8 uStack_428;
  long *plStack_420;
  long *plStack_418;
  undefined1 uStack_409;
  undefined **ppuStack_408;
  undefined4 uStack_400;
  undefined2 uStack_3f0;
  byte bStack_3ee;
  byte bStack_3ed;
  undefined1 *puStack_3d0;
  undefined ***pppuStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  long *plStack_3a8;
  long *plStack_3a0;
  undefined **ppuStack_398;
  undefined4 uStack_390;
  undefined4 uStack_380;
  long lStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_350;
  long lStack_348;
  undefined8 uStack_340;
  long *plStack_338;
  long *plStack_330;
  undefined1 uStack_321;
  undefined **ppuStack_320;
  undefined4 uStack_318;
  undefined2 uStack_308;
  byte bStack_306;
  byte bStack_305;
  undefined1 *puStack_2e8;
  undefined ***pppuStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined **ppuStack_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_298;
  undefined **ppuStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  long *plStack_248;
  undefined1 uStack_239;
  undefined **ppuStack_238;
  undefined4 uStack_230;
  undefined2 uStack_220;
  undefined2 uStack_21e;
  undefined1 *puStack_200;
  undefined ***pppuStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  undefined **ppuStack_1c8;
  undefined4 uStack_1c0;
  undefined2 uStack_1b0;
  byte bStack_1ae;
  byte bStack_1ad;
  undefined ***pppuStack_190;
  undefined ***pppuStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined **ppuStack_158;
  undefined4 uStack_150;
  undefined2 uStack_140;
  byte bStack_13e;
  byte bStack_13d;
  undefined ***pppuStack_120;
  undefined ***pppuStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined4 uStack_d4;
  code *pcStack_d0;
  undefined8 uStack_c8;
  long alStack_c0 [2];
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = param_4;
  _objc_retain(param_4);
  ppuVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c08fa60();
  _objc_release(ppuVar2);
  ppuVar4 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    param_5 = 1;
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar4;
    func_0x00010be984e0(param_2);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  _objc_release(param_4);
  __Unwind_Resume();
  alStack_c0[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar10);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  puVar5 = &uStack_239;
  FUN_105755160();
  uStack_2a8 = 0xf;
  uStack_298 = 0x100;
  _objc_retain(ppuVar10);
  ppuStack_2b0 = &PTR_SUB_110862760;
  uStack_270 = 0;
  uStack_278 = 0;
  uStack_260 = 0;
  puStack_268 = (undefined *)0x0;
  plStack_250 = (long *)0x0;
  uStack_258 = 0;
  plStack_248 = (long *)0x0;
  uStack_21e = *(undefined2 *)(puVar5 + 0x1a);
  uStack_230 = 10;
  uStack_220 = 0x100;
  ppuStack_238 = &PTR_FUN_110862700;
  uStack_1e8 = 0;
  puStack_1f0 = (undefined *)0x0;
  plStack_1d8 = (long *)0x0;
  uStack_1e0 = 0;
  plStack_1d0 = (long *)0x0;
  puVar6 = &uStack_321;
  ppuStack_280 = ppuVar10;
  puStack_200 = puVar5;
  pppuStack_1f8 = &ppuStack_2b0;
  FUN_1057552d8();
  lStack_368 = (long)param_1;
  uStack_390 = 0xf;
  uStack_380 = 0x100;
  ppuStack_398 = &PTR_DAT_110864b98;
  uStack_358 = 0;
  uStack_360 = 0;
  lStack_348 = 0;
  lStack_350 = 0;
  plStack_338 = (long *)0x0;
  uStack_340 = 0;
  plStack_330 = (long *)0x0;
  bStack_306 = puVar6[0x1a];
  bStack_305 = puVar6[0x1b];
  uStack_318 = 8;
  uStack_308 = 0x100;
  ppuStack_320 = &PTR_FUN_110864b38;
  plStack_2b8 = (long *)0x0;
  lStack_2d0 = 0;
  lStack_2d8 = 0;
  plStack_2c0 = (long *)0x0;
  uStack_2c8 = 0;
  bStack_1ae = (byte)uStack_21e | bStack_306;
  bStack_1ad = uStack_21e._1_1_ & bStack_305;
  uStack_1c0 = 4;
  uStack_1b0 = 0x100;
  ppuStack_1c8 = &PTR_SUB_1108629c8;
  pppuStack_188 = &ppuStack_320;
  uStack_178 = 0;
  lStack_180 = 0;
  plStack_168 = (long *)0x0;
  uStack_170 = 0;
  plStack_160 = (long *)0x0;
  puVar5 = &uStack_409;
  puStack_2e8 = puVar6;
  pppuStack_2e0 = &ppuStack_398;
  pppuStack_190 = &ppuStack_238;
  FUN_105755564();
  uStack_478 = 0xf;
  uStack_468 = 0x100;
  uStack_450 = 2;
  ppuStack_480 = &PTR_FUN_110864c08;
  dVar12 = 0.0;
  uStack_440 = 0;
  uStack_448 = 0;
  lStack_430 = 0;
  lStack_438 = 0;
  plStack_420 = (long *)0x0;
  uStack_428 = 0;
  plStack_418 = (long *)0x0;
  bStack_3ee = puVar5[0x1a];
  bStack_3ed = puVar5[0x1b];
  uStack_400 = 10;
  uStack_3f0 = 0x100;
  ppuVar4 = (undefined **)&UNK_110866bd0;
  ppuStack_408 = &PTR_FUN_110866be0;
  plStack_3a0 = (long *)0x0;
  lStack_3b8 = 0;
  lStack_3c0 = 0;
  plStack_3a8 = (long *)0x0;
  uStack_3b0 = 0;
  bStack_13e = bStack_1ae | bStack_3ee;
  bStack_13d = bStack_1ad & bStack_3ed;
  uStack_150 = 4;
  uStack_140 = 0x100;
  ppuStack_158 = &PTR_SUB_1108629c8;
  pppuStack_118 = &ppuStack_408;
  uStack_108 = 0;
  lStack_110 = 0;
  plStack_f8 = (long *)0x0;
  uStack_100 = 0;
  plStack_f0 = (long *)0x0;
  puVar6 = &uStack_4b1;
  puStack_3d0 = puVar5;
  pppuStack_3c8 = &ppuStack_480;
  pppuStack_120 = &ppuStack_1c8;
  FUN_10575541c();
  uStack_e0 = *(undefined8 *)(puVar6 + 0x10);
  uStack_d8 = puVar6[0x19];
  uStack_d7 = puVar6[0x18];
  uStack_c8 = *(undefined8 *)(puVar6 + 0x28);
  uStack_d4 = 0;
  pcStack_d0 = FUN_105754af8;
  lStack_4a8 = 0;
  uStack_4a0 = 0;
  lStack_4b0 = 0;
  func_0x000100c435d0(&lStack_4b0,&uStack_e0,alStack_c0,1);
  func_0x000100c436b8(&lStack_498,&lStack_4b0);
  ppuVar2 = ppuVar3;
  func_0x00010be98620();
  _objc_retainAutoreleasedReturnValue();
  if (lStack_498 != 0) {
    lStack_490 = lStack_498;
    __ZdlPv();
  }
  if (lStack_4b0 != 0) {
    lStack_4a8 = lStack_4b0;
    __ZdlPv();
  }
  plVar1 = plStack_f0;
  ppuStack_158 = &PTR_SUB_1108629c8;
  plStack_f0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_f8;
  plStack_f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_110 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_3a0;
  ppuStack_408 = &PTR_FUN_110866be0;
  plStack_3a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3a8;
  plStack_3a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_3c0 != 0) {
    lStack_3b8 = lStack_3c0;
    __ZdlPv();
  }
  plVar1 = plStack_418;
  ppuStack_480 = &PTR_FUN_110864c08;
  plStack_418 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_420;
  plStack_420 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_438 != 0) {
    lStack_430 = lStack_438;
    __ZdlPv();
  }
  plVar1 = plStack_160;
  ppuStack_1c8 = &PTR_SUB_1108629c8;
  plStack_160 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_168;
  plStack_168 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_180 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_2b8;
  ppuStack_320 = &PTR_FUN_110864b38;
  plStack_2b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2c0;
  plStack_2c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2d8 != 0) {
    lStack_2d0 = lStack_2d8;
    __ZdlPv();
  }
  plVar1 = plStack_330;
  ppuStack_398 = &PTR_DAT_110864b98;
  plStack_330 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_338;
  plStack_338 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_350 != 0) {
    lStack_348 = lStack_350;
    __ZdlPv();
  }
  plVar1 = plStack_1d0;
  ppuVar9 = &puStack_1f0;
  ppuStack_238 = &PTR_FUN_110862700;
  plStack_1d0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1d8;
  plStack_1d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_320 = ppuVar9;
  func_0x000100105004(&ppuStack_320);
  plVar1 = plStack_248;
  ppuStack_2b0 = &PTR_SUB_110862760;
  plStack_248 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_250;
  plStack_250 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_320 = &puStack_268;
  func_0x000100105004(&ppuStack_320);
  _objc_release(ppuStack_280);
  ppuVar7 = ppuVar2;
  func_0x00010bf529e0();
  if (ppuVar7 == (undefined **)0x0) {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010be50f80(dVar12 - param_1,ppuVar3);
    ppuVar3 = (undefined **)PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar4 = ppuVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if (param_5 != 0) {
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_e8 = ppuVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be98500(ppuVar3);
      _objc_release(puVar8);
    }
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010be50f80(dVar12 - param_1,ppuVar3);
    ppuVar3 = ppuVar4;
    func_0x00010bf93380(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar3;
    func_0x00010574c8f0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    ppuVar3 = (undefined **)PTR_PTR_1126ae750;
    func_0x00010c0ec800(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar9);
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar2);
  ppuVar7 = ppuVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_c0[0]) {
    ___stack_chk_fail();
    _objc_release(ppuVar9);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
    _objc_release(ppuVar10);
    __Unwind_Resume(ppuVar7);
    func_0x00010be98620();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105753070; end: 105753843; -[SCAdResponsePersistentCache _getAdResponse:removeAdResponseOnHit:] */

/* WARNING: Removing unreachable block (ram,0x000105753880) */

void FUN_105753070(double param_1,undefined **param_2,undefined8 param_3,undefined *param_4,
                  int param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  double dVar10;
  undefined1 uStack_471;
  long lStack_470;
  long lStack_468;
  undefined8 uStack_460;
  long lStack_458;
  long lStack_450;
  undefined **ppuStack_440;
  undefined4 uStack_438;
  undefined4 uStack_428;
  undefined4 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  undefined1 uStack_3c9;
  undefined **ppuStack_3c8;
  undefined4 uStack_3c0;
  undefined2 uStack_3b0;
  byte bStack_3ae;
  byte bStack_3ad;
  undefined1 *puStack_390;
  undefined ***pppuStack_388;
  long lStack_380;
  long lStack_378;
  undefined8 uStack_370;
  long *plStack_368;
  long *plStack_360;
  undefined **ppuStack_358;
  undefined4 uStack_350;
  undefined4 uStack_340;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_310;
  long lStack_308;
  undefined8 uStack_300;
  long *plStack_2f8;
  long *plStack_2f0;
  undefined1 uStack_2e1;
  undefined **ppuStack_2e0;
  undefined4 uStack_2d8;
  undefined2 uStack_2c8;
  byte bStack_2c6;
  byte bStack_2c5;
  undefined1 *puStack_2a8;
  undefined ***pppuStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  long *plStack_278;
  undefined **ppuStack_270;
  undefined4 uStack_268;
  undefined4 uStack_258;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  long *plStack_208;
  undefined1 uStack_1f9;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined2 uStack_1e0;
  undefined2 uStack_1de;
  undefined1 *puStack_1c0;
  undefined ***pppuStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined2 uStack_170;
  byte bStack_16e;
  byte bStack_16d;
  undefined ***pppuStack_150;
  undefined ***pppuStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined **ppuStack_118;
  undefined4 uStack_110;
  undefined2 uStack_100;
  byte bStack_fe;
  byte bStack_fd;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined4 uStack_94;
  code *pcStack_90;
  undefined8 uStack_88;
  long alStack_80 [2];
  
  alStack_80[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  puVar2 = &uStack_1f9;
  FUN_105755160();
  uStack_268 = 0xf;
  uStack_258 = 0x100;
  _objc_retain(param_4);
  ppuStack_270 = &PTR_SUB_110862760;
  uStack_230 = 0;
  uStack_238 = 0;
  uStack_220 = 0;
  puStack_228 = (undefined *)0x0;
  plStack_210 = (long *)0x0;
  uStack_218 = 0;
  plStack_208 = (long *)0x0;
  uStack_1de = *(undefined2 *)(puVar2 + 0x1a);
  uStack_1f0 = 10;
  uStack_1e0 = 0x100;
  ppuStack_1f8 = &PTR_FUN_110862700;
  uStack_1a8 = 0;
  puStack_1b0 = (undefined *)0x0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  puVar3 = &uStack_2e1;
  puStack_240 = param_4;
  puStack_1c0 = puVar2;
  pppuStack_1b8 = &ppuStack_270;
  FUN_1057552d8();
  lStack_328 = (long)param_1;
  uStack_350 = 0xf;
  uStack_340 = 0x100;
  ppuStack_358 = &PTR_DAT_110864b98;
  uStack_318 = 0;
  uStack_320 = 0;
  lStack_308 = 0;
  lStack_310 = 0;
  plStack_2f8 = (long *)0x0;
  uStack_300 = 0;
  plStack_2f0 = (long *)0x0;
  bStack_2c6 = puVar3[0x1a];
  bStack_2c5 = puVar3[0x1b];
  uStack_2d8 = 8;
  uStack_2c8 = 0x100;
  ppuStack_2e0 = &PTR_FUN_110864b38;
  plStack_278 = (long *)0x0;
  lStack_290 = 0;
  lStack_298 = 0;
  plStack_280 = (long *)0x0;
  uStack_288 = 0;
  bStack_16e = (byte)uStack_1de | bStack_2c6;
  bStack_16d = uStack_1de._1_1_ & bStack_2c5;
  uStack_180 = 4;
  uStack_170 = 0x100;
  ppuStack_188 = &PTR_SUB_1108629c8;
  pppuStack_148 = &ppuStack_2e0;
  uStack_138 = 0;
  lStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  puVar2 = &uStack_3c9;
  puStack_2a8 = puVar3;
  pppuStack_2a0 = &ppuStack_358;
  pppuStack_150 = &ppuStack_1f8;
  FUN_105755564();
  uStack_438 = 0xf;
  uStack_428 = 0x100;
  uStack_410 = 2;
  ppuStack_440 = &PTR_FUN_110864c08;
  dVar10 = 0.0;
  uStack_400 = 0;
  uStack_408 = 0;
  lStack_3f0 = 0;
  lStack_3f8 = 0;
  plStack_3e0 = (long *)0x0;
  uStack_3e8 = 0;
  plStack_3d8 = (long *)0x0;
  bStack_3ae = puVar2[0x1a];
  bStack_3ad = puVar2[0x1b];
  uStack_3c0 = 10;
  uStack_3b0 = 0x100;
  ppuVar6 = (undefined **)&UNK_110866bd0;
  ppuStack_3c8 = &PTR_FUN_110866be0;
  plStack_360 = (long *)0x0;
  lStack_378 = 0;
  lStack_380 = 0;
  plStack_368 = (long *)0x0;
  uStack_370 = 0;
  bStack_fe = bStack_16e | bStack_3ae;
  bStack_fd = bStack_16d & bStack_3ad;
  uStack_110 = 4;
  uStack_100 = 0x100;
  ppuStack_118 = &PTR_SUB_1108629c8;
  pppuStack_d8 = &ppuStack_3c8;
  uStack_c8 = 0;
  lStack_d0 = 0;
  plStack_b8 = (long *)0x0;
  uStack_c0 = 0;
  plStack_b0 = (long *)0x0;
  puVar3 = &uStack_471;
  puStack_390 = puVar2;
  pppuStack_388 = &ppuStack_440;
  pppuStack_e0 = &ppuStack_188;
  FUN_10575541c();
  uStack_a0 = *(undefined8 *)(puVar3 + 0x10);
  uStack_98 = puVar3[0x19];
  uStack_97 = puVar3[0x18];
  uStack_88 = *(undefined8 *)(puVar3 + 0x28);
  uStack_94 = 0;
  pcStack_90 = FUN_105754af8;
  lStack_468 = 0;
  uStack_460 = 0;
  lStack_470 = 0;
  func_0x000100c435d0(&lStack_470,&uStack_a0,alStack_80,1);
  func_0x000100c436b8(&lStack_458,&lStack_470);
  ppuVar4 = param_2;
  func_0x00010be98620();
  _objc_retainAutoreleasedReturnValue();
  if (lStack_458 != 0) {
    lStack_450 = lStack_458;
    __ZdlPv();
  }
  if (lStack_470 != 0) {
    lStack_468 = lStack_470;
    __ZdlPv();
  }
  plVar1 = plStack_b0;
  ppuStack_118 = &PTR_SUB_1108629c8;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d0 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_360;
  ppuStack_3c8 = &PTR_FUN_110866be0;
  plStack_360 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_368;
  plStack_368 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_380 != 0) {
    lStack_378 = lStack_380;
    __ZdlPv();
  }
  plVar1 = plStack_3d8;
  ppuStack_440 = &PTR_FUN_110864c08;
  plStack_3d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3e0;
  plStack_3e0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_3f8 != 0) {
    lStack_3f0 = lStack_3f8;
    __ZdlPv();
  }
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_1108629c8;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_140 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_278;
  ppuStack_2e0 = &PTR_FUN_110864b38;
  plStack_278 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_280;
  plStack_280 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_298 != 0) {
    lStack_290 = lStack_298;
    __ZdlPv();
  }
  plVar1 = plStack_2f0;
  ppuStack_358 = &PTR_DAT_110864b98;
  plStack_2f0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2f8;
  plStack_2f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_310 != 0) {
    lStack_308 = lStack_310;
    __ZdlPv();
  }
  plVar1 = plStack_190;
  ppuVar7 = &puStack_1b0;
  ppuStack_1f8 = &PTR_FUN_110862700;
  plStack_190 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_2e0 = ppuVar7;
  func_0x000100105004(&ppuStack_2e0);
  plVar1 = plStack_208;
  ppuStack_270 = &PTR_SUB_110862760;
  plStack_208 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_210;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_2e0 = &puStack_228;
  func_0x000100105004(&ppuStack_2e0);
  _objc_release(puStack_240);
  ppuVar5 = ppuVar4;
  func_0x00010bf529e0();
  if (ppuVar5 == (undefined **)0x0) {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010be50f80(dVar10 - param_1,param_2);
    puVar8 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar6 = ppuVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if (param_5 != 0) {
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_a8 = ppuVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be98500(param_2);
      _objc_release(puVar8);
    }
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010be50f80(dVar10 - param_1,param_2);
    ppuVar5 = ppuVar6;
    func_0x00010bf93380(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar5;
    func_0x00010574c8f0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    puVar8 = PTR_PTR_1126ae750;
    func_0x00010c0ec800(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
  }
  _objc_release(ppuVar4);
  puVar9 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_80[0]) {
    ___stack_chk_fail();
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar4);
    _objc_release(param_4);
    __Unwind_Resume(puVar9);
    func_0x00010be98620();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105753844; end: 1057538b7; -[SCAdResponsePersistentCache _safeQueryCacheItems:] */

/* WARNING: Removing unreachable block (ram,0x000105753880) */

void FUN_105753844(undefined8 param_1)

{
  func_0x00010be98620();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1057538b8; end: 1057538cb; -[SCAdResponsePersistentCache _safeQueryCacheItems:orderBy:limit:] */

void FUN_1057538b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be98610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__safeQueryCacheItems_excludingId_112583b20,param_3,
             PTR____NSArray0__struct_11034ab48,param_4,param_5);
  return;
}



/* Entry: 1057538cc; end: 105753cf7; -[SCAdResponsePersistentCache _safeQueryCacheItems:excludingIds:orderBy:limit:] */

void FUN_1057538cc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b1;
  undefined **appuStack_1b0 [3];
  byte bStack_197;
  byte bStack_196;
  byte bStack_195;
  undefined *apuStack_168 [3];
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined4 uStack_f0;
  undefined1 uStack_e0;
  byte bStack_df;
  byte bStack_de;
  byte bStack_dd;
  long lStack_c0;
  undefined ***pppuStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c0d3c80();
  _os_unfair_lock_unlock(param_1 + 0x18);
  func_0x00010befa160(lVar2);
  puVar3 = &uStack_1b1;
  FUN_105754fe8(puVar3);
  _objc_retain(lVar2);
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  puStack_1d0 = (undefined *)0x0;
  lVar4 = lVar2;
  func_0x00010bf529e0(lVar2);
  func_0x0001004c2bb4(&puStack_1d0,lVar4);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(lVar2);
  lVar4 = lVar2;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar9 = *plStack_130;
    do {
      lVar7 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        uVar8 = *(undefined8 *)(lStack_138 + lVar7 * 8);
        _objc_retain(uVar8);
        uStack_100 = uVar8;
        func_0x0001004c2d3c(&puStack_1d0,&uStack_100);
        _objc_release(uStack_100);
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = lVar2;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  func_0x0001004c2e3c(appuStack_1b0,0xd,puVar3,&puStack_1d0);
  ppuStack_f8 = &puStack_1d0;
  func_0x000100105004(&ppuStack_f8);
  _os_unfair_lock_lock(param_1 + 0x1c);
  lVar4 = param_1;
  func_0x00010be05920();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bdbc8);
  if (lVar4 == 0) {
    uStack_110 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_140,lVar4);
  }
  bStack_dd = *(byte *)(param_3 + 0x1b) & bStack_195;
  bStack_df = (*(byte *)(param_3 + 0x19) | bStack_197) & 1;
  bStack_de = (*(byte *)(param_3 + 0x1a) | bStack_196) & 1;
  uStack_f0 = 4;
  uStack_e0 = 0;
  ppuStack_f8 = &PTR_SUB_1108629c8;
  pppuStack_b8 = appuStack_1b0;
  uStack_a8 = 0;
  lStack_b0 = 0;
  plStack_98 = (long *)0x0;
  uStack_a0 = 0;
  plStack_90 = (long *)0x0;
  puVar5 = &uStack_140;
  lStack_c0 = param_3;
  func_0x0001000e77a0(puVar5,&ppuStack_f8,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  plVar1 = plStack_90;
  ppuStack_f8 = &PTR_SUB_1108629c8;
  plStack_90 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_98;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b0 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_118);
  _objc_release(uStack_128);
  _objc_release(plStack_130);
  _objc_release(lVar4);
  _os_unfair_lock_unlock(param_1 + 0x1c);
  plVar1 = plStack_148;
  appuStack_1b0[0] = &PTR_FUN_110862700;
  plStack_148 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_150;
  plStack_150 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_f8 = apuStack_168;
  func_0x000100105004(&ppuStack_f8);
  _objc_release(lVar2);
  uVar8 = param_4;
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  func_0x000105007830(&ppuStack_f8);
  func_0x000104d96620(&uStack_140);
  _objc_release(lVar4);
  _os_unfair_lock_unlock(param_1 + 0x1c);
  FUN_1050048c0(appuStack_1b0);
  _objc_release(lVar2);
  _objc_release(param_4);
  __Unwind_Resume(uVar8);
  func_0x000104bd46a0(uVar8);
  func_0x000100504554(param_5,&PTR___NSConcreteGlobalBlock_1108af5c0);
  func_0x00010be984e0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105753cf8; end: 105753d4b; -[SCAdResponsePersistentCache _safeDeleteCacheItems:] */

void FUN_105753cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108af5c0);
  func_0x00010be984e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105753d4c; end: 105753d6b;  */

void FUN_105753d4c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bef47c0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105753d6c; end: 105753fab; -[SCAdResponsePersistentCache _safeDeleteCacheItemsSync:] */

undefined1 FUN_105753d6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108af5e0);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  uVar4 = 0;
  _dispatch_semaphore_create();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  _os_unfair_lock_lock(param_1 + 0x18);
  func_0x00010befa160(*(undefined8 *)(param_1 + 0x10));
  _os_unfair_lock_unlock(param_1 + 0x18);
  lVar1 = param_1 + 0x1c;
  _os_unfair_lock_lock(lVar1);
  func_0x00010be05920(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar3);
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  func_0x00010c0f8500(param_1);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar3);
  _os_unfair_lock_unlock(lVar1);
  _dispatch_semaphore_wait(uVar4,0xffffffffffffffff);
  uVar2 = *(undefined1 *)(puStack_78 + 3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105753fac; end: 105753fcb;  */

void FUN_105753fac(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bef47c0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105753fcc; end: 10575419f;  */

void FUN_105753fcc(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2;
  _objc_retain(param_2);
  iVar4 = (int)lVar1;
  dVar11 = 0.0;
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar7);
      }
      puVar2 = PTR_PTR_1126bdbc8;
      _objc_alloc();
      func_0x00010bff1ca0();
      puVar3 = PTR_PTR_1126bdbd0;
      puVar5 = puVar2;
      FUN_1057561ec(PTR_PTR_1126bdbd0);
      iVar4 = (int)puVar5;
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      lVar10 = lVar10 + 1;
    } while (lVar1 != lVar10);
    lVar1 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  lVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar7);
  _objc_release(param_2);
  __Unwind_Resume();
  *(char *)(*(long *)(*(long *)(lVar1 + 0x38) + 8) + 0x18) = (char)iVar4;
  if (iVar4 != 0) {
    lVar8 = *(long *)(lVar1 + 0x20);
    _os_unfair_lock_lock(lVar8 + 0x18);
    func_0x00010c12d500(*(undefined8 *)(*(long *)(lVar1 + 0x20) + 0x10));
    _os_unfair_lock_unlock(lVar8 + 0x18);
  }
  uVar9 = *(undefined8 *)(lVar1 + 0x20);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010be50f80(dVar11 - *(double *)(lVar1 + 0x40),uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(lVar1 + 0x30));
  return;
}



/* Entry: 1057541a0; end: 105754237;  */

void FUN_1057541a0(double param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *(char *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x18) = (char)param_3;
  if (param_3 != 0) {
    lVar1 = *(long *)(param_2 + 0x20);
    _os_unfair_lock_lock(lVar1 + 0x18);
    func_0x00010c12d500(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10));
    _os_unfair_lock_unlock(lVar1 + 0x18);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010be50f80(param_1 - *(double *)(param_2 + 0x40),uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_2 + 0x30));
  return;
}



/* Entry: 105754238; end: 1057543ef; -[SCAdResponsePersistentCache _safeDeleteAdRequestClientIds:] */

void FUN_105754238(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  _os_unfair_lock_lock(param_2 + 0x18);
  func_0x00010befa160(*(undefined8 *)(param_2 + 0x10),param_3,param_4);
  _os_unfair_lock_unlock(param_2 + 0x18);
  _os_unfair_lock_lock(param_2 + 0x1c);
  lVar2 = param_2;
  func_0x00010be05920(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1057543f0;
  puStack_60 = &UNK_1108af4c0;
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = param_4;
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1057545c4;
  puStack_98 = &UNK_1108af4f0;
  lStack_90 = param_2;
  _objc_retain(param_4);
  uStack_88 = param_4;
  uStack_80 = param_1;
  func_0x00010c0f8500(lVar2,param_3,&puStack_78,uVar3,&puStack_b0);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uStack_88);
  _objc_release(uStack_58);
  _os_unfair_lock_unlock(param_2 + 0x1c);
  _objc_release(param_4);
  return;
}



/* Entry: 1057543f0; end: 1057545c3;  */

void FUN_1057543f0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2;
  _objc_retain(param_2);
  iVar4 = (int)lVar1;
  lVar8 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar8);
  lVar1 = lVar8;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(lVar8);
      }
      puVar2 = PTR_PTR_1126bdbc8;
      _objc_alloc();
      func_0x00010bff1ca0();
      puVar3 = PTR_PTR_1126bdbd0;
      puVar5 = puVar2;
      FUN_1057561ec();
      iVar4 = (int)puVar5;
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      lVar10 = lVar10 + 1;
    } while (lVar1 != lVar10);
    lVar1 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  lVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar8);
  _objc_release(param_2);
  __Unwind_Resume();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (iVar4 != 0) {
    lVar6 = *(long *)(lVar1 + 0x20);
    _os_unfair_lock_lock(lVar6 + 0x18);
    func_0x00010c12d500(*(undefined8 *)(*(long *)(lVar1 + 0x20) + 0x10));
    _os_unfair_lock_unlock(lVar6 + 0x18);
  }
  dVar11 = 0.0;
  lVar10 = *(long *)(lVar1 + 0x28);
  _objc_retain(lVar10);
  lVar6 = lVar10;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar10);
      }
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar9 = lVar9 + 1;
    } while (lVar6 != lVar9);
    lVar6 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  lVar8 = *(long *)(lVar1 + 0x20);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  lVar6 = lVar8;
  func_0x00010be50f80(dVar11 - *(double *)(lVar1 + 0x30));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(lVar8 + 0x18);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(lVar6 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 1057545c4; end: 105754777;  */

void FUN_1057545c4(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    _os_unfair_lock_lock(lVar2 + 0x18);
    func_0x00010c12d500(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
    _os_unfair_lock_unlock(lVar2 + 0x18);
  }
  dVar6 = 0.0;
  lVar3 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar3);
      }
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  lVar2 = lVar4;
  func_0x00010be50f80(dVar6 - *(double *)(param_1 + 0x30));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar1) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(lVar4 + 0x18);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(lVar2 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 105754778; end: 10575477f; -[SCAdResponsePersistentCache _docObjectContext] */

void FUN_105754778(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 105754780; end: 1057548ff; -[SCAdResponsePersistentCache _logCacheItemMemory:] */

void FUN_105754780(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_3;
    _malloc_size(param_3);
    lVar4 = param_3;
    func_0x00010bf93380(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    _malloc_size();
    lVar6 = param_3;
    func_0x00010bf26da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    _malloc_size();
    lVar8 = param_3;
    func_0x00010bef47c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    _malloc_size();
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar4);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    puVar10 = PTR_PTR_1126b8d98;
    func_0x00010bf267a0(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180(uVar11,param_2,puVar10,lVar5 + lVar3 + lVar7 + lVar9);
    _objc_release(puVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105754900; end: 105754a97; -[SCAdResponsePersistentCache _logCacheLatency:success:accessType:] */

void FUN_105754900(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c0cc200(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110dfbc58,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110dab0d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bef9180(*(undefined8 *)(param_2 + 0x20),param_3,puVar3,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105754a98; end: 105754af7; -[SCAdResponsePersistentCache .cxx_destruct] */

void FUN_105754a98(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105754af8; end: 105754ba7;  */

undefined4 FUN_105754af8(ulong param_1,ulong param_2,code *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bStack_32;
  byte bStack_31;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_1;
  (*param_3)(param_1,&bStack_31);
  uVar3 = param_2;
  (*param_3)(param_2,&bStack_32);
  uVar4 = 2;
  if (bStack_32 == 0) {
    uVar4 = 0;
  }
  if (bStack_31 == 0) {
    uVar4 = 1;
  }
  uVar5 = 1;
  if (uVar3 > uVar2 || uVar2 == uVar3) {
    uVar5 = 2;
  }
  uVar1 = 0;
  if (uVar3 <= uVar2) {
    uVar1 = uVar5;
  }
  uVar5 = uVar4;
  if ((bStack_32 & 1) == 0) {
    uVar5 = uVar1;
  }
  if ((bStack_31 & 1) == 0) {
    uVar4 = uVar5;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 105754ba8; end: 105754ce7; -[SCAdResponseCacheItem initWithAdRequestClientId:cacheURL:expirationTimestamp:resolvedTimestamp:encodedAdResponse:version:isPrefetchEnabled:prefetchRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105754ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126ea108;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112728d8c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112728d8c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112728d90);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112728d90) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112728d94) = param_5;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112728d98) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112728d9c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112728d9c) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_112728da0) = param_8;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112728da4) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112728da8) = param_9._1_1_;
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105754ce8; end: 105754d0b; -[SCAdResponseCacheItem copyWithZone:] */

undefined8 FUN_105754ce8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105754d0c; end: 105754dc7; -[SCAdResponseCacheItem hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105754d0c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112728d8c);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112728d90);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uStack_58 = *(undefined8 *)(param_1 + _DAT_112728d94);
  uStack_50 = *(undefined8 *)(param_1 + _DAT_112728d98);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112728d9c);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  lStack_40 = (long)*(int *)(param_1 + _DAT_112728da0);
  uStack_38 = (ulong)*(byte *)(param_1 + _DAT_112728da4);
  uStack_30 = (ulong)*(byte *)(param_1 + _DAT_112728da8);
  puVar3 = &uStack_68;
  uStack_48 = uVar1;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105754ef0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105754efc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(long *)((long)puVar3 + (long)_DAT_112728d94) ==
           *(long *)((long)param_3 + (long)_DAT_112728d94) &&
          (*(long *)((long)puVar3 + (long)_DAT_112728d98) ==
           *(long *)((long)param_3 + (long)_DAT_112728d98))) &&
         (*(int *)((long)puVar3 + (long)_DAT_112728da0) ==
          *(int *)((long)param_3 + (long)_DAT_112728da0))) &&
        ((*(char *)((long)puVar3 + (long)_DAT_112728da4) ==
          *(char *)((long)param_3 + (long)_DAT_112728da4) &&
         (*(char *)((long)puVar3 + (long)_DAT_112728da8) ==
          *(char *)((long)param_3 + (long)_DAT_112728da8))))))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112728d8c);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112728d8c)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_112728d90);
        if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112728d90)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_112728d9c);
          if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_112728d9c)) {
            func_0x00010c071ae0();
            goto LAB_105754efc;
          }
          goto LAB_105754ef0;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105754efc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105754dc8; end: 105754f17; -[SCAdResponseCacheItem isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105754dc8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105754ef0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105754efc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + (long)_DAT_112728d94) == *(long *)(param_3 + (long)_DAT_112728d94) &&
          (*(long *)(param_1 + (long)_DAT_112728d98) == *(long *)(param_3 + (long)_DAT_112728d98)))
         && (*(int *)(param_1 + (long)_DAT_112728da0) == *(int *)(param_3 + (long)_DAT_112728da0)))
        && ((*(char *)(param_1 + (long)_DAT_112728da4) == *(char *)(param_3 + (long)_DAT_112728da4)
            && (*(char *)(param_1 + (long)_DAT_112728da8) ==
                *(char *)(param_3 + (long)_DAT_112728da8))))))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_112728d8c);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112728d8c)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_112728d90);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_112728d90)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_112728d9c);
          if (lVar3 != *(long *)(param_3 + (long)_DAT_112728d9c)) {
            func_0x00010c071ae0();
            goto LAB_105754efc;
          }
          goto LAB_105754ef0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105754efc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105754f18; end: 105754f27; -[SCAdResponseCacheItem adRequestClientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105754f18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112728d8c);
}



/* Entry: 105754f28; end: 105754f37; -[SCAdResponseCacheItem cacheURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105754f28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112728d90);
}



/* Entry: 105754f38; end: 105754f47; -[SCAdResponseCacheItem expirationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105754f38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112728d94);
}



/* Entry: 105754f48; end: 105754f57; -[SCAdResponseCacheItem resolvedTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105754f48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112728d98);
}



/* Entry: 105754f58; end: 105754f67; -[SCAdResponseCacheItem encodedAdResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105754f58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112728d9c);
}



/* Entry: 105754f68; end: 105754f77; -[SCAdResponseCacheItem version] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_105754f68(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112728da0);
}



/* Entry: 105754f78; end: 105754f87; -[SCAdResponseCacheItem isPrefetchEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105754f78(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112728da4);
}



/* Entry: 105754f88; end: 105754f97; -[SCAdResponseCacheItem prefetchRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105754f88(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112728da8);
}



/* Entry: 105754f98; end: 105754fe7; -[SCAdResponseCacheItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105754f98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112728d9c,0);
  _objc_storeStrong(param_1 + _DAT_112728d90,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112728d8c,0);
  return;
}



/* Entry: 105754fe8; end: 10575504b;  */

undefined ** FUN_105754fe8(void)

{
  int iVar1;
  
  if ((bRam0000000113819ec8 & 1) == 0) {
    iVar1 = 0x13819ec8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130f9898,0x100000000);
      ___cxa_guard_release(0x113819ec8);
    }
  }
  return &PTR_PTR_1130f9898;
}



/* Entry: 10575504c; end: 1057550d3;  */

void FUN_10575504c(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
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



/* Entry: 1057550d4; end: 10575515f;  */

void FUN_1057550d4(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bef47c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bef47c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105755160; end: 1057551c3;  */

undefined ** FUN_105755160(void)

{
  int iVar1;
  
  if ((bRam0000000113819ed0 & 1) == 0) {
    iVar1 = 0x13819ed0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130f9908,0x100000000);
      ___cxa_guard_release(0x113819ed0);
    }
  }
  return &PTR_PTR_1130f9908;
}



/* Entry: 1057551c4; end: 10575524b;  */

void FUN_1057551c4(uint *param_1,undefined1 *param_2)

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



/* Entry: 10575524c; end: 1057552d7;  */

void FUN_10575524c(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf26da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bf26da0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057552d8; end: 10575538f;  */

undefined8 FUN_1057552d8(void)

{
  int iVar1;
  
  if ((bRam0000000113819f48 & 1) == 0) {
    iVar1 = 0x13819f48;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113819ee0 = 0xe;
      puRam0000000113819ee8 = &UNK_10f2f17ac;
      uRam0000000113819ef0 = 0x100;
      pcRam0000000113819ef8 = FUN_105755390;
      pcRam0000000113819f00 = FUN_1057553c8;
      ppuRam0000000113819ed8 = &PTR_DAT_110864b98;
      uRam0000000113819f18 = 0;
      uRam0000000113819f10 = 0;
      uRam0000000113819f28 = 0;
      uRam0000000113819f20 = 0;
      uRam0000000113819f38 = 0;
      uRam0000000113819f30 = 0;
      uRam0000000113819f40 = 0;
      ___cxa_atexit(0x105077cd4,0x113819ed8,0x100000000);
      ___cxa_guard_release(0x113819f48);
    }
  }
  return 0x113819ed8;
}



/* Entry: 105755390; end: 1057553c7;  */

undefined8 FUN_105755390(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 1057553c8; end: 10575541b;  */

undefined8 FUN_1057553c8(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf9c880(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10575541c; end: 1057554d7;  */

undefined8 FUN_10575541c(void)

{
  int iVar1;
  
  if ((bRam0000000113819fc0 & 1) == 0) {
    iVar1 = 0x13819fc0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113819f58 = 0xe;
      puRam0000000113819f60 = &UNK_10f2f17c0;
      uRam0000000113819f68 = 0x1010000;
      pcRam0000000113819f70 = FUN_1057554d8;
      pcRam0000000113819f78 = FUN_105755510;
      ppuRam0000000113819f50 = &PTR_DAT_110864b98;
      uRam0000000113819f90 = 0;
      uRam0000000113819f88 = 0;
      uRam0000000113819fa0 = 0;
      uRam0000000113819f98 = 0;
      uRam0000000113819fb0 = 0;
      uRam0000000113819fa8 = 0;
      uRam0000000113819fb8 = 0;
      ___cxa_atexit(0x105077cd4,0x113819f50,0x100000000);
      ___cxa_guard_release(0x113819fc0);
    }
  }
  return 0x113819f50;
}



/* Entry: 1057554d8; end: 10575550f;  */

undefined8 FUN_1057554d8(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 105755510; end: 105755563;  */

undefined8 FUN_105755510(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c13b0e0(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105755564; end: 10575561f;  */

undefined8 FUN_105755564(void)

{
  int iVar1;
  
  if ((bRam000000011381a038 & 1) == 0) {
    iVar1 = 0x1381a038;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113819fd0 = 0xe;
      puRam0000000113819fd8 = &UNK_10f2f17d2;
      uRam0000000113819fe0 = 0x1010000;
      pcRam0000000113819fe8 = FUN_105755620;
      pcRam0000000113819ff0 = FUN_105755658;
      ppuRam0000000113819fc8 = &PTR_FUN_110864c08;
      uRam000000011381a008 = 0;
      uRam000000011381a000 = 0;
      uRam000000011381a018 = 0;
      uRam000000011381a010 = 0;
      uRam000000011381a028 = 0;
      uRam000000011381a020 = 0;
      uRam000000011381a030 = 0;
      ___cxa_atexit(FUN_1050797f4,0x113819fc8,0x100000000);
      ___cxa_guard_release(0x11381a038);
    }
  }
  return 0x113819fc8;
}



/* Entry: 105755620; end: 105755657;  */

undefined4 FUN_105755620(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar2 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 105755658; end: 1057556ab;  */

undefined8 FUN_105755658(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c298be0(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1057556ac; end: 1057556b7; +[SCAdResponseCacheItem table] */

undefined * FUN_1057556ac(void)

{
  return &UNK_10f2f17da;
}



/* Entry: 1057556b8; end: 10575594b; +[SCAdResponseCacheItem immutableObjectParse:bufferSize:] */

void FUN_1057556b8(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ushort uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126bdbc8;
  _objc_alloc(PTR_PTR_1126bdbc8);
  lVar7 = (long)*piVar1;
  uVar6 = *(ushort *)((long)piVar1 - lVar7);
  if (uVar6 < 5) {
    puVar9 = (undefined *)0x0;
LAB_1057557a4:
    puVar10 = (undefined *)0x0;
LAB_1057557a8:
    uVar11 = 0;
LAB_1057557ac:
    uVar12 = 0;
LAB_1057557b0:
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar1 - lVar7))[2];
    if (uVar8 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar8);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - lVar7);
    }
    lVar7 = -lVar7;
    if (uVar6 < 7) goto LAB_1057557a4;
    uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 6);
    if (uVar8 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar8);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar6 < 9) goto LAB_1057557a8;
    uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 8);
    if (uVar8 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)((long)piVar1 + uVar8);
    }
    if (uVar6 < 0xb) goto LAB_1057557ac;
    uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 10);
    if (uVar8 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)((long)piVar1 + uVar8);
    }
    if (uVar6 < 0xd) goto LAB_1057557b0;
    if (*(short *)((long)piVar1 + lVar7 + 0xc) == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      lVar7 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (0xe < uVar6) {
      uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 0xe);
      if (uVar8 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)((long)piVar1 + uVar8);
      }
      if (uVar6 < 0x11) {
        bVar3 = false;
      }
      else {
        uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 0x10);
        bVar3 = false;
        if (uVar8 != 0) {
          bVar3 = *(char *)((long)piVar1 + uVar8) != '\0';
        }
      }
      goto LAB_1057557c0;
    }
  }
  bVar3 = false;
  uVar5 = 0;
LAB_1057557c0:
  func_0x00010bff1ca0(puVar4,param_2,puVar9,puVar10,uVar11,uVar12,puVar13,uVar5,bVar3);
  _objc_release(puVar13);
  _objc_release(puVar10);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10575594c; end: 10575595f; +[SCAdResponseCacheItem objectClassFunctionPointer] */

undefined1  [16] FUN_10575594c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_1057559ac;
  auVar1._0_8_ = FUN_105755960;
  return auVar1;
}



/* Entry: 105755960; end: 1057559ab;  */

void FUN_105755960(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf2f17a3;
  _strcmp(&DAT_10f2f17a3,param_1);
  if (iVar1 != 0) {
    _strcmp("expirationTimestamp",param_1);
  }
  return;
}



/* Entry: 1057559ac; end: 105755ac7;  */

bool FUN_1057559ac(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  if (param_1 == 1) {
    func_0x0001001b9e08(param_2,&UNK_10f2f183e);
    _sqlite3_bind_int64();
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
       (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar5 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar5);
    }
    _sqlite3_bind_int64(param_2,2,uVar4);
  }
  else {
    if (param_1 != 0) {
      return false;
    }
    func_0x0001001b9e08(param_2,&UNK_10f2f17ee);
    _sqlite3_bind_int64();
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar5 == 0)) {
      _sqlite3_bind_null(param_2,2);
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar5);
      puVar3 = (undefined4 *)((long)puVar2 + (ulong)*puVar2);
      _sqlite3_bind_text(param_2,2,puVar3 + 1,*puVar3,0);
    }
  }
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 105755ac8; end: 105755c5f;  */

void FUN_105755ac8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar8 = PTR_PTR_1126bdbd0;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010bef47c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf26da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bf9c880(param_2);
    lVar4 = param_2;
    func_0x00010c13b0e0(param_2);
    lVar5 = param_2;
    func_0x00010bf93380(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010c298be0(param_2);
    lVar7 = param_2;
    func_0x00010c07a9e0();
    func_0x00010c107cc0();
    FUN_105755c60(puVar8,0xffffffffffffffff,lVar1,lVar2,lVar3,lVar4,lVar5,lVar6,(char)lVar7);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar8 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105755c60; end: 105755d97;  */

undefined1 *
FUN_105755c60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined4 param_9)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_1126ea110;
    lStack_70 = param_1;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_3;
      _objc_release(uVar2);
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_4;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x30) = param_5;
      *(undefined8 *)((long)plVar1 + 0x38) = param_6;
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x40);
      *(undefined8 *)((long)plVar1 + 0x40) = param_7;
      _objc_release(uVar2);
      *(undefined4 *)((long)plVar1 + 0x18) = param_8;
      *(undefined1 *)((long)plVar1 + 0x14) = (undefined1)param_9;
      *(undefined1 *)((long)plVar1 + 0x15) = param_9._1_1_;
    }
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 105755d98; end: 1057561eb;  */

void FUN_105755d98(undefined *param_1)

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
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010bef47c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar10,&UNK_10f2f18a4);
        if (puVar10 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010bef47c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar10,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar10;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar10;
            _sqlite3_column_int64(puVar10,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bdbc8);
            _sqlite3_column_blob(puVar10,1);
            _sqlite3_column_bytes(puVar10,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar10);
            if (puVar3 == (undefined *)0x0) goto LAB_10575611c;
            puVar10 = PTR_PTR_1126bdbd0;
            _objc_alloc(PTR_PTR_1126bdbd0);
            puVar2 = puVar3;
            func_0x00010bef47c0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf26da0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010bf9c880(puVar3);
            puVar6 = puVar3;
            func_0x00010c13b0e0(puVar3);
            puVar7 = puVar3;
            func_0x00010bf93380(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar3;
            func_0x00010c298be0(puVar3);
            puVar9 = puVar3;
            func_0x00010c07a9e0();
            func_0x00010c107cc0();
            FUN_105755c60(puVar10,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,(char)puVar9);
            param_1 = puVar3;
            goto LAB_105755ef0;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar10 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bdbc8);
      puVar3 = puVar10;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar10);
      if (puVar3 != (undefined *)0x0) {
        puVar10 = PTR_PTR_1126bdbd0;
        _objc_alloc(PTR_PTR_1126bdbd0);
        puVar2 = puVar3;
        func_0x00010bef47c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf26da0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bf9c880(puVar3);
        puVar6 = puVar3;
        func_0x00010c13b0e0(puVar3);
        puVar7 = puVar3;
        func_0x00010bf93380(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        func_0x00010c298be0(puVar3);
        puVar9 = puVar3;
        func_0x00010c07a9e0();
        func_0x00010c107cc0();
        FUN_105755c60(puVar10,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,(char)puVar9);
        param_1 = puVar3;
LAB_105755ef0:
        _objc_release(puVar7);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_105756124;
      }
LAB_10575611c:
      param_1 = (undefined *)0x0;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_105756124:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1057561ec; end: 10575625f;  */

void FUN_1057561ec(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_105755d98();
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



/* Entry: 105756260; end: 1057562db;  */

void FUN_105756260(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bdbc8;
    _objc_alloc(PTR_PTR_1126bdbc8);
    func_0x00010bff1ca0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057562dc; end: 105756317; -[SCAdResponseCacheItemChangeRequest .cxx_destruct] */

void FUN_1057562dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 105756318; end: 105756323; -[SCAdResponseCacheItemChangeRequest table] */

undefined * FUN_105756318(void)

{
  return &UNK_10f2f17da;
}



/* Entry: 105756324; end: 105756437; -[SCAdResponseCacheItemChangeRequest createTableWithSQLite:] */

void FUN_105756324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddbcd70,0x97,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddbce07,0x6a,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10ddbce71,0x7a,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddbceeb,0x81,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10ddbcf6c,0x9b,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 105756438; end: 105756be3; -[SCAdResponseCacheItemChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_105756438(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar7 = param_1;
  if (iVar3 == 1) {
    FUN_105756260(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    FUN_105756be4(param_4,puVar7);
    func_0x0001001ce6fc(param_4,lVar8,0,0);
    puVar14 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar14;
    puVar12 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar12;
    func_0x00010bf636c0();
    FUN_1050da3a4();
    _objc_release(puVar12);
    lVar8 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2f19a4);
    if (lVar8 == 0) goto LAB_105756b0c;
    _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar14 + (ulong)uVar4);
    puVar14 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
    _sqlite3_bind_text(lVar8,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar8 != 0x65) goto LAB_105756b0c;
    uVar13 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar9 & 1) != 0) {
      lVar8 = param_3;
      func_0x0001001b9e08(param_3,&UNK_10f2f17ee);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar11 == 0)) {
        _sqlite3_bind_null(lVar8,2);
      }
      else {
        puVar14 = (uint *)((long)piVar1 + uVar11);
        puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
        _sqlite3_bind_text(lVar8,2,puVar2 + 1,*puVar2,0);
      }
      _sqlite3_step();
      if ((int)lVar8 != 0x65) goto LAB_105756b0c;
    }
    if (((uint)puVar9 >> 8 & 1) != 0) {
      func_0x0001001b9e08(param_3,&UNK_10f2f183e);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
         (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar11 == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)((long)piVar1 + uVar11);
      }
      _sqlite3_bind_int64(param_3,2,uVar10);
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_105756b0c;
    }
    *(undefined8 *)(param_1 + 8) = uVar13;
    func_0x00010c1eeb60(puVar7);
    puVar12 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bdbc8);
    func_0x00010c21c9a0(puVar12);
LAB_105756ae4:
    _objc_release(puVar12);
    _objc_retain(puVar7);
    puVar12 = puVar7;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar8 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f2f18f0);
        if (lVar8 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar8 == 0x65) {
            lVar8 = param_3;
            func_0x0001001b9e08(param_3,&UNK_10f2f191f);
            if (lVar8 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar8 != 0x65) goto LAB_105756598;
            }
            func_0x0001001b9e08(param_3,&UNK_10f2f195c);
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_105756598;
            }
            puVar7 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bdbc8);
            func_0x00010c21c9a0(puVar7);
            _objc_release(puVar12);
            _objc_release(puVar7);
            puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105756b18;
          }
        }
      }
LAB_105756598:
      puVar12 = (undefined *)0x0;
      goto LAB_105756b18;
    }
    FUN_105756260();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    FUN_105756be4(param_4,puVar7);
    func_0x0001001ce6fc(param_4,lVar8,0,0);
    puVar14 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar14;
    uVar13 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar7);
    lVar8 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2f19eb);
    if (lVar8 != 0) {
      _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(lVar8,2,uVar13);
      piVar1 = (int *)((long)puVar14 + (ulong)uVar4);
      puVar14 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
      _sqlite3_bind_text(lVar8,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar8 == 0x65) {
        puVar12 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126bdbc8);
        puVar9 = puVar12;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        puVar12 = puVar9;
        func_0x00010bf26da0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar7;
        func_0x00010bf26da0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar12);
        _objc_retain(puVar5);
        if (puVar12 == (undefined *)0x0 && puVar5 == (undefined *)0x0) {
LAB_105756a1c:
          puVar12 = puVar9;
          func_0x00010bf9c880();
          puVar5 = puVar7;
          func_0x00010bf9c880();
          if (puVar12 != puVar5) {
            func_0x0001001b9e08(param_3,&UNK_10f2f1a8c);
            if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
               (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar11 == 0)) {
              uVar10 = 0;
            }
            else {
              uVar10 = *(undefined8 *)((long)piVar1 + uVar11);
            }
            _sqlite3_bind_int64(param_3,1,uVar10);
            _sqlite3_bind_int64(param_3,2,uVar13);
            _sqlite3_step();
            if ((int)param_3 != 0x65) goto LAB_105756afc;
          }
          _objc_release(puVar9);
          _objc_release(puVar7);
          puVar12 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0(PTR_PTR_1126b04a8);
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126bdbc8);
          func_0x00010c21c9a0(puVar12);
          goto LAB_105756ae4;
        }
        if ((puVar12 == (undefined *)0x0) || (puVar5 == (undefined *)0x0)) {
          _objc_release(puVar5);
          _objc_release(puVar12);
          _objc_release(puVar5);
          _objc_release(puVar12);
        }
        else {
          puVar6 = puVar12;
          func_0x00010c0720c0();
          _objc_release(puVar5);
          _objc_release(puVar12);
          _objc_release(puVar5);
          _objc_release(puVar12);
          if (((ulong)puVar6 & 1) != 0) goto LAB_105756a1c;
        }
        lVar8 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f2f1a3c);
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
           (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar11 == 0)) {
          _sqlite3_bind_null(lVar8,1);
        }
        else {
          puVar14 = (uint *)((long)piVar1 + uVar11);
          puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
          _sqlite3_bind_text(lVar8,1,puVar2 + 1,*puVar2,0);
        }
        _sqlite3_bind_int64(lVar8,2,uVar13);
        _sqlite3_step();
        if ((int)lVar8 == 0x65) goto LAB_105756a1c;
LAB_105756afc:
        _objc_release(puVar9);
      }
    }
    _objc_release(puVar7);
LAB_105756b0c:
    puVar12 = (undefined *)0x0;
  }
  _objc_release(puVar7);
LAB_105756b18:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105756be4; end: 105756e5b;  */

ulong FUN_105756be4(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bef47c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_105756e5c(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010bf26da0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_105756e5c(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010bf9c880(param_2);
  uVar9 = param_2;
  func_0x00010c13b0e0(param_2);
  uVar10 = param_2;
  func_0x00010bf93380();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar10 == 0) {
    uVar14 = 0;
  }
  else {
    uVar11 = uVar10;
    _objc_retainAutorelease(uVar10);
    func_0x00010bf25f00();
    uVar12 = uVar10;
    func_0x00010c08fa60(uVar10);
    uVar14 = param_1;
    func_0x0001001d1030(param_1,uVar11,uVar12);
  }
  _objc_release(uVar10);
  uVar11 = param_2;
  func_0x00010c298be0(param_2);
  uVar12 = param_2;
  func_0x00010c07a9e0();
  uVar13 = param_2;
  func_0x00010c107cc0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce170(param_1,10,uVar9,0);
  func_0x0001001ce170(param_1,8,uVar8,0);
  func_0x000100c3b024(param_1,0xe,uVar11,0);
  func_0x0001001ce220(param_1,0xc,uVar14 & 0xffffffff);
  func_0x0001001ce2e4(param_1,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x000100ab13ac(param_1,0x12,uVar13,0);
  func_0x000100ab13ac(param_1,0x10,uVar12 & 0xffffffff,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105756e5c; end: 105756f8b;  */

undefined8 FUN_105756e5c(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_105756f3c;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_105756f3c;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_105756efc;
    param_1 = 0;
  }
  else {
LAB_105756efc:
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
LAB_105756f3c:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105756f8c; end: 1057570af; -[SCAdContentDeliveryApiImpl initWithContentDelivery:simpleContentFetcher:adConfigProviderV2:valdiRuntimeProvider:queuePerformer:] */

undefined1 *
FUN_105756f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ea118;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057570b0; end: 105757183; -[SCAdContentDeliveryApiImpl initWithContentDelivery:simpleContentFetcher:adConfigProviderV2:valdiRuntimeProvider:] */

undefined8
FUN_1057570b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c021520();
  func_0x00010c003260(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 105757184; end: 1057573ff; -[SCAdContentDeliveryApiImpl downloadContentForAdMedia:profileInfo:mediaId:userInitiated:contexts:expirationDate:preferredVideoDeliveryMethod:forceFullDownload:successBlock:failureBlock:] */

void FUN_105757184(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_13);
  lVar1 = param_3;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c6c20();
  if (lVar2 != 2) {
    lVar2 = param_3;
    func_0x00010c274c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6c20();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105757400;
  puStack_b8 = &UNK_1108af630;
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_3);
  lStack_b0 = param_3;
  _objc_retain(param_5);
  uStack_a8 = param_5;
  _objc_retain(param_7);
  uStack_a0 = param_7;
  _objc_retain(param_8);
  uStack_78 = param_9;
  uStack_70 = param_10;
  uStack_98 = param_8;
  _objc_retain(param_12);
  uStack_90 = param_12;
  _objc_retain(param_13);
  uStack_88 = param_13;
  func_0x0001084c2ccc(param_3,param_4,param_5,uVar3,uVar4,&puStack_d0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(lStack_b0);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105757400; end: 1057574af;  */

void FUN_105757400(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010be05e00();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057574b0; end: 1057576db; -[SCAdContentDeliveryApiImpl queryContentStatusForAdMedia:mediaId:] */

undefined * FUN_1057574b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084c41dc(param_3,0,param_4,puVar1,puVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar1);
  puVar5 = &uStack_130;
  puVar6 = auStack_f0;
  uVar7 = 0x10;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 == (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = (undefined *)0x0;
    lVar10 = *plStack_120;
    do {
      puVar11 = (undefined *)0x0;
      puVar13 = puVar12;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(puVar1);
        }
        uVar7 = *(undefined8 *)(lStack_128 + (long)puVar11 * 8);
        puVar4 = puVar2;
        func_0x00010bf4b900();
        puVar12 = puVar13;
        if (((ulong)puVar4 & 1) == 0) {
          puVar4 = *(undefined **)(param_1 + 8);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x0001084c44f4(uVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar4;
          func_0x00010c11d220();
          _objc_release(uVar7);
          _objc_release(puVar4);
          if (puVar12 + -1 < (undefined *)0x4) {
            uVar8 = *(ulong *)(&UNK_10ddbd008 + (long)(puVar12 + -1) * 8);
          }
          else {
            uVar8 = 0;
          }
          if (puVar13 + -1 < (undefined *)0x4) {
            uVar9 = *(ulong *)(&UNK_10ddbd008 + (long)(puVar13 + -1) * 8);
          }
          else {
            uVar9 = 0;
          }
          if (uVar8 <= uVar9) {
            puVar12 = puVar13;
          }
        }
        puVar11 = puVar11 + 1;
        puVar13 = puVar12;
      } while (puVar3 != puVar11);
      puVar5 = &uStack_130;
      puVar6 = auStack_f0;
      uVar7 = 0x10;
      puVar3 = puVar1;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    _objc_retain(uVar7);
    puVar1 = PTR_PTR_1126b1060;
    _objc_retain(puVar6);
    _objc_alloc(puVar1);
    func_0x00010c032f60();
    _objc_release(puVar6);
    _objc_retain(uVar7);
    _objc_retain(puVar5);
    func_0x00010be96ae0(param_3);
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar1);
    return puVar1;
  }
  return puVar12;
}



/* Entry: 1057576dc; end: 1057577d7; -[SCAdContentDeliveryApiImpl retrieveProfileIconForProfileInfo:contexts:completion:] */

void FUN_1057576dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b1060;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c032f60();
  _objc_release(param_4);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1057577d8;
  puStack_60 = &UNK_1108a05d0;
  uStack_58 = param_1;
  uStack_50 = param_3;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010be96ae0(param_1,param_2,param_3,puVar1,&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1057577d8; end: 1057577e3;  */

void FUN_1057577d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057577e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  return;
}



/* Entry: 1057577e4; end: 105757b4f; -[SCAdContentDeliveryApiImpl retrieveContentForAdMedia:profileInfo:mediaId:contexts:completionHandler:] */

void FUN_1057577e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126b1060;
  _objc_alloc();
  func_0x00010c032f60();
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_105757b50;
  uStack_88 = 0x105757b60;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_105757b50;
  uStack_b8 = 0x105757b60;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_105757b50;
  uStack_e8 = 0x105757b60;
  uStack_e0 = 0;
  puVar3 = puVar2;
  puStack_a0 = &uStack_a8;
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar4 = param_3;
  func_0x00010c274c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_105757b68;
  puStack_120 = &UNK_1108af660;
  puStack_110 = &uStack_a8;
  _objc_retain(puVar3);
  puStack_118 = puVar3;
  func_0x00010be96d00(param_1);
  _objc_release(uVar4);
  _dispatch_group_enter(puVar3);
  uVar4 = param_3;
  func_0x00010bf20540(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_168 = puVar1;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x105757bc4;
  puStack_150 = &UNK_1108af690;
  puStack_140 = &uStack_d8;
  _objc_retain(puVar3);
  puStack_148 = puVar3;
  func_0x00010be96280(param_1);
  _objc_release(uVar4);
  _dispatch_group_enter(puVar3);
  puStack_198 = puVar1;
  uStack_190 = 0xc2000000;
  uStack_188 = 0x105757c20;
  puStack_180 = &UNK_1108a0910;
  puStack_170 = &uStack_108;
  _objc_retain(puVar3);
  puStack_178 = puVar3;
  func_0x00010be96ae0(param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_1e8 = puVar1;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_105757c7c;
  puStack_1d0 = &UNK_1108af6c0;
  puStack_1a8 = &uStack_d8;
  puStack_1a0 = &uStack_108;
  puStack_1b0 = &uStack_a8;
  lStack_1c8 = param_1;
  uStack_1c0 = param_5;
  uStack_1b8 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x000100bc0718(puVar3,uVar4,&puStack_1e8);
  _objc_release(uVar4);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1c0);
  _objc_release(puStack_178);
  _objc_release(puStack_148);
  _objc_release(puStack_118);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105757b50; end: 105757b67;  */

void FUN_105757b50(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105757b68; end: 105757c7b;  */

void FUN_105757b68(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105757c7c; end: 105757d63;  */

void FUN_105757c7c(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bdbd8;
    _objc_alloc(PTR_PTR_1126bdbd8);
    func_0x00010c054280();
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105757d64; end: 105757d9f; -[SCAdContentDeliveryApiImpl removeAllAdMedia] */

void FUN_105757d64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12abe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105757da0; end: 105758113; -[SCAdContentDeliveryApiImpl prefetchAdMedia:prefetchDurationMs:profileInfo:mediaId:contexts:completion:] */

void FUN_105757da0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
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
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126b1060;
  _objc_alloc();
  func_0x00010c032f60();
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_105757b50;
  uStack_88 = 0x105757b60;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_105757b50;
  uStack_b8 = 0x105757b60;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_105757b50;
  uStack_e8 = 0x105757b60;
  uStack_e0 = 0;
  puVar3 = puVar2;
  puStack_a0 = &uStack_a8;
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar4 = param_3;
  func_0x00010c274c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_105758114;
  puStack_120 = &UNK_1108af660;
  puStack_110 = &uStack_a8;
  _objc_retain(puVar3);
  puStack_118 = puVar3;
  func_0x00010be96d00(param_1);
  _objc_release(uVar4);
  _dispatch_group_enter(puVar3);
  uVar4 = param_3;
  func_0x00010bf20540(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_168 = puVar1;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x105758170;
  puStack_150 = &UNK_1108af690;
  puStack_140 = &uStack_d8;
  _objc_retain(puVar3);
  puStack_148 = puVar3;
  func_0x00010be96280(param_1);
  _objc_release(uVar4);
  _dispatch_group_enter(puVar3);
  puStack_198 = puVar1;
  uStack_190 = 0xc2000000;
  uStack_188 = 0x1057581cc;
  puStack_180 = &UNK_1108a0910;
  puStack_170 = &uStack_108;
  _objc_retain(puVar3);
  puStack_178 = puVar3;
  func_0x00010be96ae0(param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_1e8 = puVar1;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_105758228;
  puStack_1d0 = &UNK_1108af6c0;
  puStack_1a8 = &uStack_d8;
  puStack_1a0 = &uStack_108;
  puStack_1b0 = &uStack_a8;
  lStack_1c8 = param_1;
  uStack_1c0 = param_6;
  uStack_1b8 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_6);
  func_0x000100bc0718(puVar3,uVar4,&puStack_1e8);
  _objc_release(uVar4);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1c0);
  _objc_release(puStack_178);
  _objc_release(puStack_148);
  _objc_release(puStack_118);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105758114; end: 105758227;  */

void FUN_105758114(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


