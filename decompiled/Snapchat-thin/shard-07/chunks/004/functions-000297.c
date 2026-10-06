/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055598b8; end: 105559f87;  */

undefined *** FUN_1055598b8(long param_1,undefined ***param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  long unaff_x27;
  undefined **unaff_x28;
  undefined8 auStack_480 [17];
  long lStack_3f8;
  undefined **ppuStack_3f0;
  long lStack_3e8;
  undefined ***pppuStack_3e0;
  undefined ***pppuStack_3d8;
  undefined ***pppuStack_3d0;
  undefined ***pppuStack_3c8;
  undefined8 *puStack_3c0;
  undefined ***pppuStack_3b8;
  undefined1 *puStack_3b0;
  code *pcStack_3a8;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined4 uStack_344;
  undefined1 *puStack_340;
  undefined1 *puStack_338;
  undefined8 uStack_330;
  undefined1 auStack_328 [31];
  undefined1 uStack_309;
  undefined **appuStack_308 [3];
  byte bStack_2ef;
  byte bStack_2ee;
  byte bStack_2ed;
  undefined1 auStack_2c0 [24];
  long *plStack_2a8;
  long *plStack_2a0;
  undefined **ppuStack_298;
  undefined4 uStack_290;
  undefined4 uStack_280;
  undefined1 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  long *plStack_230;
  undefined1 uStack_221;
  undefined **ppuStack_220;
  undefined4 uStack_218;
  undefined2 uStack_208;
  undefined2 uStack_206;
  undefined1 *puStack_1e8;
  undefined ***pppuStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined **ppuStack_1b0;
  undefined4 uStack_1a8;
  undefined1 uStack_198;
  byte bStack_197;
  byte bStack_196;
  byte bStack_195;
  undefined ***pppuStack_178;
  undefined ***pppuStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126bacd8);
  if (param_2 == (undefined ***)0x0) {
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_140,param_2);
  }
  puVar2 = &uStack_221;
  FUN_105568aac();
  uStack_268 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c14c220();
  uStack_290 = 0xf;
  uStack_280 = 0x100;
  pppuVar5 = (undefined ***)&UNK_1108971f8;
  ppuStack_298 = &PTR_DAT_110897208;
  uStack_258 = 0;
  uStack_260 = 0;
  lStack_248 = 0;
  lStack_250 = 0;
  plStack_238 = (long *)0x0;
  uStack_240 = 0;
  plStack_230 = (long *)0x0;
  uStack_206 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_218 = 10;
  uStack_208 = 0x100;
  ppuVar8 = &PTR_FUN_110897148;
  ppuStack_220 = &PTR_FUN_110897148;
  pppuStack_1e0 = &ppuStack_298;
  lStack_1d0 = 0;
  lStack_1d8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1c8 = 0;
  plStack_1b8 = (long *)0x0;
  puVar3 = &uStack_309;
  puStack_1e8 = puVar2;
  FUN_105568934(puVar3);
  uStack_80 = *(undefined8 *)(param_1 + 0x28);
  pppuVar14 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  pppuVar15 = &ppuStack_1b0;
  FUN_105559f88(auStack_328,pppuVar14);
  func_0x0001004c2e3c(appuStack_308,0xc,puVar3,auStack_328);
  bStack_195 = uStack_206._1_1_ & bStack_2ed;
  bStack_197 = (uStack_208._1_1_ | bStack_2ef) & 1;
  bStack_196 = ((byte)uStack_206 | bStack_2ee) & 1;
  uStack_1a8 = 4;
  uStack_198 = 0;
  ppuStack_1b0 = &PTR_SUB_1108629c8;
  pppuStack_178 = &ppuStack_220;
  uStack_160 = 0;
  lStack_168 = 0;
  plStack_150 = (long *)0x0;
  uStack_158 = 0;
  plStack_148 = (long *)0x0;
  puStack_340 = (undefined1 *)0x0;
  puStack_338 = (undefined1 *)0x0;
  uStack_330 = 0;
  uStack_344 = 0;
  puVar11 = &uStack_140;
  pppuVar7 = &ppuStack_1b0;
  pppuStack_170 = appuStack_308;
  func_0x0001000e77a0(puVar11,pppuVar7,&puStack_340,&uStack_344);
  _objc_retainAutoreleasedReturnValue();
  puStack_398 = puVar11;
  if (puStack_340 != (undefined1 *)0x0) {
    puStack_338 = puStack_340;
    __ZdlPv();
  }
  plVar1 = plStack_148;
  ppuStack_1b0 = &PTR_SUB_1108629c8;
  plStack_148 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_150;
  plStack_150 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_168 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_2a0;
  appuStack_308[0] = &PTR_FUN_110862700;
  plStack_2a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2a8;
  plStack_2a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_340 = auStack_2c0;
  func_0x000100105004(&puStack_340);
  puStack_340 = auStack_328;
  func_0x000100105004(&puStack_340);
  _objc_release(pppuVar14);
  plVar1 = plStack_1b8;
  ppuStack_220 = &PTR_FUN_110897148;
  plStack_1b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1c0;
  plStack_1c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1d8 != 0) {
    lStack_1d0 = lStack_1d8;
    __ZdlPv();
  }
  plVar1 = plStack_230;
  ppuStack_298 = &PTR_DAT_110897208;
  plStack_230 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_238;
  plStack_238 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_250 != 0) {
    lStack_248 = lStack_250;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_118);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  puVar4 = puStack_398;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar11 = puStack_398;
  puVar12 = (undefined8 *)(ulong)(puVar4 == (undefined8 *)0x0);
  if (puVar4 != (undefined8 *)0x0) {
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    lStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    plStack_380 = (long *)0x0;
    _objc_retain(puStack_398);
    puVar4 = puVar11;
    func_0x00010bf52a60();
    pppuVar5 = (undefined ***)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      pppuVar15 = (undefined ***)0x0;
      unaff_x27 = *plStack_380;
      unaff_x28 = &PTR_PTR_1126ba000;
      do {
        puVar11 = (undefined8 *)0x0;
        ppuVar8 = (undefined **)pppuVar15;
        do {
          if (*plStack_380 != unaff_x27) {
            _objc_enumerationMutation(puStack_398);
          }
          pppuVar15 = *(undefined ****)(lStack_388 + (long)puVar11 * 8);
          pppuVar14 = (undefined ***)PTR_PTR_1126bad20;
          pppuVar7 = pppuVar15;
          FUN_105569770();
          _objc_retainAutoreleasedReturnValue();
          pppuVar5 = pppuVar15;
          func_0x00010c084f80(pppuVar15);
          _objc_retainAutoreleasedReturnValue();
          if (pppuVar14 == (undefined ***)0x0) {
            _objc_release(pppuVar5);
          }
          else {
            _objc_setProperty_nonatomic_copy(pppuVar14);
            _objc_release(pppuVar5);
            _objc_setProperty_nonatomic_copy(pppuVar14);
          }
          pppuVar5 = pppuVar15;
          func_0x00010bf5cfe0(pppuVar15);
          _objc_retainAutoreleasedReturnValue();
          if (pppuVar14 != (undefined ***)0x0) {
            _objc_setProperty_nonatomic_copy(pppuVar14);
          }
          _objc_release(pppuVar5);
          pppuVar5 = pppuVar15;
          func_0x00010c1554e0(pppuVar15);
          _objc_retainAutoreleasedReturnValue();
          if (pppuVar14 != (undefined ***)0x0) {
            _objc_setProperty_nonatomic_copy(pppuVar14);
          }
          _objc_release(pppuVar5);
          pppuVar5 = pppuVar15;
          func_0x00010c27dd80();
          if (pppuVar14 != (undefined ***)0x0) {
            *(char *)((long)pppuVar14 + 0x14) = (char)pppuVar5;
          }
          func_0x00010bf4e080();
          if (pppuVar14 != (undefined ***)0x0) {
            *(char *)((long)pppuVar14 + 0x15) = (char)pppuVar15;
          }
          pppuVar15 = param_2;
          func_0x00010c25ed40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar8);
          if (pppuVar15 == (undefined ***)0x0) {
            pppuVar5 = param_2;
            func_0x00010bf987e0();
            _objc_retainAutoreleasedReturnValue();
            pppuVar15 = pppuVar5;
            func_0x00010bf51e00();
            lVar10 = *(long *)(*(long *)(param_1 + 0x38) + 8);
            uVar13 = *(undefined8 *)(lVar10 + 0x28);
            *(undefined ****)(lVar10 + 0x28) = pppuVar15;
            _objc_release(uVar13);
            _objc_release(pppuVar5);
            func_0x00010beec4e0(param_2);
            pppuVar15 = pppuVar14;
            goto LAB_105559e20;
          }
          _objc_release(pppuVar14);
          puVar11 = (undefined8 *)((long)puVar11 + 1);
          ppuVar8 = (undefined **)pppuVar15;
        } while (puVar4 != puVar11);
        puVar4 = puStack_398;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined8 *)0x0);
      pppuVar5 = (undefined ***)0x0;
LAB_105559e20:
      _objc_release(pppuVar15);
    }
    _objc_release(puStack_398);
    puVar12 = puVar11;
  }
  _objc_release(puStack_398);
  pppuVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  _objc_release(pppuVar15);
  _objc_release(puStack_398);
  _objc_release(puStack_398);
  _objc_release(param_2);
  pppuVar15 = pppuVar6;
  __Unwind_Resume();
  pcStack_3a8 = FUN_105559f88;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_3f0 = unaff_x28;
  lStack_3e8 = unaff_x27;
  pppuStack_3e0 = (undefined ***)ppuVar8;
  pppuStack_3d8 = pppuVar5;
  pppuStack_3d0 = pppuVar14;
  pppuStack_3c8 = pppuVar6;
  puStack_3c0 = puVar12;
  pppuStack_3b8 = param_2;
  puStack_3b0 = &stack0xfffffffffffffff0;
  _objc_retain(pppuVar7);
  pppuVar15[1] = (undefined **)0x0;
  pppuVar15[2] = (undefined **)0x0;
  *pppuVar15 = (undefined **)0x0;
  pppuVar5 = pppuVar7;
  func_0x00010bf529e0();
  iVar9 = (int)pppuVar5;
  func_0x0001004c2bb4(pppuVar15);
  _objc_retain(pppuVar7);
  pppuVar5 = pppuVar7;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (pppuVar5 != (undefined ***)0x0) {
    pppuVar14 = (undefined ***)0x0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(pppuVar7);
      }
      uVar13 = *(undefined8 *)((long)pppuVar14 * 8);
      _objc_retain(uVar13);
      iVar9 = (int)auStack_480;
      auStack_480[0] = uVar13;
      func_0x0001004c2d3c(pppuVar15);
      _objc_release(auStack_480[0]);
      pppuVar14 = (undefined ***)((long)pppuVar14 + 1);
    } while (pppuVar5 != pppuVar14);
    pppuVar5 = pppuVar7;
    func_0x00010bf52a60();
  }
  _objc_release(pppuVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  if (iVar9 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *pppuVar7 = &PTR_FUN_110897148;
  ppuVar8 = pppuVar7[0xd];
  pppuVar7[0xd] = (undefined **)0x0;
  if (ppuVar8 != (undefined **)0x0) {
    (**(code **)(*ppuVar8 + 8))();
  }
  ppuVar8 = pppuVar7[0xc];
  pppuVar7[0xc] = (undefined **)0x0;
  if (ppuVar8 != (undefined **)0x0) {
    (**(code **)(*ppuVar8 + 8))();
  }
  if (pppuVar7[9] != (undefined **)0x0) {
    pppuVar7[10] = pppuVar7[9];
    __ZdlPv();
  }
  return pppuVar7;
}



/* Entry: 105559f88; end: 10555a0eb;  */

undefined8 * FUN_105559f88(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 auStack_e0 [17];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar2 = param_2;
  func_0x00010bf529e0();
  iVar4 = (int)puVar2;
  func_0x0001004c2bb4(param_1);
  _objc_retain(param_2);
  puVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar2 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar5 = *(undefined8 *)((long)puVar6 * 8);
      _objc_retain(uVar5);
      iVar4 = (int)auStack_e0;
      auStack_e0[0] = uVar5;
      func_0x0001004c2d3c(param_1);
      _objc_release(auStack_e0[0]);
      puVar6 = (undefined8 *)((long)puVar6 + 1);
    } while (puVar2 != puVar6);
    puVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_2;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *param_2 = &PTR_FUN_110897148;
  plVar3 = (long *)param_2[0xd];
  param_2[0xd] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_2[0xc];
  param_2[0xc] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (param_2[9] != 0) {
    param_2[10] = param_2[9];
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10555a0ec; end: 10555a1c7;  */

undefined8 * FUN_10555a0ec(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110897148;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10555a1c8; end: 10555a203;  */

void FUN_10555a1c8(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010555a1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,0);
    return;
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010555a1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
    return;
  }
  return;
}



/* Entry: 10555a204; end: 10555a23f;  */

void FUN_10555a204(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  return;
}



/* Entry: 10555a240; end: 10555acbb; -[CTPDocObjectsItemsPersistenceService synchronouslyUpsertItemsForFeedId:upsertedItems:deletedItemIds:updateFeedSyncMetadata:transactionContext:] */

undefined **
FUN_10555a240(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
             undefined8 param_5,int param_6,undefined **param_7)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **unaff_x28;
  undefined **ppuStack_5b8;
  undefined4 uStack_55c;
  undefined1 *puStack_558;
  undefined1 *puStack_550;
  undefined8 uStack_548;
  undefined1 auStack_540 [31];
  undefined1 uStack_521;
  undefined **appuStack_520 [3];
  byte bStack_507;
  byte bStack_506;
  byte bStack_505;
  undefined1 auStack_4d8 [24];
  long *plStack_4c0;
  long *plStack_4b8;
  undefined **ppuStack_4b0;
  undefined4 uStack_4a8;
  undefined4 uStack_498;
  undefined1 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long lStack_460;
  undefined8 uStack_458;
  long *plStack_450;
  long *plStack_448;
  undefined1 uStack_439;
  undefined **ppuStack_438;
  undefined4 uStack_430;
  undefined2 uStack_420;
  byte bStack_41e;
  byte bStack_41d;
  undefined1 *puStack_400;
  undefined ***pppuStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3e0;
  long *plStack_3d8;
  long *plStack_3d0;
  undefined **ppuStack_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3b0;
  undefined1 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_380;
  long lStack_378;
  undefined8 uStack_370;
  long *plStack_368;
  long *plStack_360;
  undefined1 uStack_351;
  undefined **ppuStack_350;
  undefined4 uStack_348;
  undefined2 uStack_338;
  undefined2 uStack_336;
  undefined1 *puStack_318;
  undefined ***pppuStack_310;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  undefined **ppuStack_2e0;
  undefined4 uStack_2d8;
  undefined2 uStack_2c8;
  byte bStack_2c6;
  byte bStack_2c5;
  undefined ***pppuStack_2a8;
  undefined ***pppuStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  long *plStack_278;
  undefined **ppuStack_270;
  undefined4 uStack_268;
  undefined1 uStack_258;
  byte bStack_257;
  byte bStack_256;
  byte bStack_255;
  undefined ***pppuStack_238;
  undefined ***pppuStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  long *plStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  _objc_retain(param_4);
  ppuVar1 = param_4;
  func_0x00010bf52a60();
  ppuVar8 = (undefined **)0x0;
  if (ppuVar1 != (undefined **)0x0) {
    lVar10 = *plStack_1b0;
    do {
      ppuVar7 = (undefined **)0x0;
      ppuVar3 = ppuVar8;
      do {
        if (*plStack_1b0 != lVar10) {
          _objc_enumerationMutation(param_4);
        }
        ppuVar8 = *(undefined ***)(lStack_1b8 + (long)ppuVar7 * 8);
        FUN_105551e10(ppuVar8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar8;
        FUN_105569db4();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar8);
        ppuVar8 = param_7;
        func_0x00010c25ed40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        ppuVar3 = (undefined **)PTR_PTR_1126af5d0;
        if (ppuVar8 == (undefined **)0x0) {
          ppuVar8 = param_7;
          func_0x00010bf987e0(param_7);
          _objc_retainAutoreleasedReturnValue();
          ppuVar1 = ppuVar8;
          func_0x00010bf51e00();
          func_0x00010bfa01c0(ppuVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar1);
          _objc_release(ppuVar8);
          ppuStack_5b8 = param_4;
          goto LAB_10555aa50;
        }
        _objc_release(ppuVar2);
        ppuVar7 = (undefined **)((long)ppuVar7 + 1);
        ppuVar3 = ppuVar8;
      } while (ppuVar1 != ppuVar7);
      ppuVar1 = param_4;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_4);
  _objc_opt_class(PTR_PTR_1126bacd8);
  if (param_7 == (undefined **)0x0) {
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    puStack_200 = (undefined *)0x0;
  }
  else {
    func_0x00010bfa6be0(&puStack_200,param_7);
  }
  puVar4 = &uStack_351;
  FUN_105568aac();
  ppuVar1 = param_3;
  func_0x00010c14c220();
  uStack_3c0 = 0xf;
  uStack_3b0 = 0x100;
  uStack_398 = SUB81(ppuVar1,0);
  ppuStack_3c8 = &PTR_DAT_110897208;
  uStack_388 = 0;
  uStack_390 = 0;
  lStack_378 = 0;
  lStack_380 = 0;
  plStack_368 = (long *)0x0;
  uStack_370 = 0;
  plStack_360 = (long *)0x0;
  uStack_336 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_348 = 10;
  uStack_338 = 0x100;
  ppuStack_350 = &PTR_FUN_110897148;
  pppuStack_310 = &ppuStack_3c8;
  lStack_300 = 0;
  lStack_308 = 0;
  plStack_2f0 = (long *)0x0;
  uStack_2f8 = 0;
  plStack_2e8 = (long *)0x0;
  puVar5 = &uStack_439;
  puStack_318 = puVar4;
  FUN_105568bf8();
  ppuVar1 = param_3;
  func_0x00010c14c200();
  uStack_4a8 = 0xf;
  uStack_498 = 0x100;
  uStack_480 = SUB81(ppuVar1,0);
  ppuStack_4b0 = &PTR_DAT_110897278;
  uStack_470 = 0;
  uStack_478 = 0;
  lStack_460 = 0;
  lStack_468 = 0;
  plStack_450 = (long *)0x0;
  uStack_458 = 0;
  plStack_448 = (long *)0x0;
  bStack_41e = puVar5[0x1a];
  bStack_41d = puVar5[0x1b];
  uStack_430 = 10;
  uStack_420 = 0x100;
  unaff_x28 = &PTR_FUN_1108971a8;
  ppuStack_438 = &PTR_FUN_1108971a8;
  pppuStack_3f8 = &ppuStack_4b0;
  lStack_3e8 = 0;
  lStack_3f0 = 0;
  plStack_3d8 = (long *)0x0;
  uStack_3e0 = 0;
  plStack_3d0 = (long *)0x0;
  bStack_2c6 = (byte)uStack_336 | bStack_41e;
  bStack_2c5 = uStack_336._1_1_ & bStack_41d;
  uStack_2d8 = 4;
  uStack_2c8 = 0x100;
  ppuStack_2e0 = &PTR_SUB_1108629c8;
  pppuStack_2a8 = &ppuStack_350;
  pppuStack_2a0 = &ppuStack_438;
  plStack_278 = (long *)0x0;
  plStack_280 = (long *)0x0;
  uStack_288 = 0;
  uStack_290 = 0;
  lStack_298 = 0;
  puVar4 = &uStack_521;
  puStack_400 = puVar5;
  FUN_105568934(puVar4);
  FUN_105559f88(auStack_540,param_5);
  func_0x0001004c2e3c(appuStack_520,0xc,puVar4,auStack_540);
  bStack_255 = bStack_2c5 & bStack_505;
  bStack_257 = (uStack_2c8._1_1_ | bStack_507) & 1;
  bStack_256 = (bStack_2c6 | bStack_506) & 1;
  uStack_268 = 4;
  uStack_258 = 0;
  ppuStack_270 = &PTR_SUB_1108629c8;
  pppuStack_238 = &ppuStack_2e0;
  uStack_220 = 0;
  lStack_228 = 0;
  plStack_210 = (long *)0x0;
  uStack_218 = 0;
  plStack_208 = (long *)0x0;
  puStack_558 = (undefined1 *)0x0;
  puStack_550 = (undefined1 *)0x0;
  uStack_548 = 0;
  uStack_55c = 0;
  ppuStack_5b8 = &puStack_200;
  pppuStack_230 = appuStack_520;
  func_0x0001000e77a0(ppuStack_5b8,&ppuStack_270,&puStack_558,&uStack_55c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_558 != (undefined1 *)0x0) {
    puStack_550 = puStack_558;
    __ZdlPv();
  }
  plVar6 = plStack_208;
  ppuStack_270 = &PTR_SUB_1108629c8;
  plStack_208 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_210;
  plStack_210 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_228 != 0) {
    __ZdlPv();
  }
  plVar6 = plStack_4b8;
  appuStack_520[0] = &PTR_FUN_110862700;
  plStack_4b8 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_4c0;
  plStack_4c0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  puStack_558 = auStack_4d8;
  func_0x000100105004(&puStack_558);
  puStack_558 = auStack_540;
  func_0x000100105004(&puStack_558);
  plVar6 = plStack_278;
  ppuStack_2e0 = &PTR_SUB_1108629c8;
  plStack_278 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_280;
  plStack_280 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_298 != 0) {
    __ZdlPv();
  }
  plVar6 = plStack_3d0;
  ppuStack_438 = &PTR_FUN_1108971a8;
  plStack_3d0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_3d8;
  plStack_3d8 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_3f0 != 0) {
    lStack_3e8 = lStack_3f0;
    __ZdlPv();
  }
  plVar6 = plStack_448;
  ppuStack_4b0 = &PTR_DAT_110897278;
  plStack_448 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_450;
  plStack_450 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_468 != 0) {
    lStack_460 = lStack_468;
    __ZdlPv();
  }
  plVar6 = plStack_2e8;
  ppuStack_350 = &PTR_FUN_110897148;
  plStack_2e8 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_2f0;
  plStack_2f0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_308 != 0) {
    lStack_300 = lStack_308;
    __ZdlPv();
  }
  plVar6 = plStack_360;
  ppuStack_3c8 = &PTR_DAT_110897208;
  plStack_360 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_368;
  plStack_368 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_380 != 0) {
    lStack_378 = lStack_380;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_1d8);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1f0);
  ppuVar2 = ppuStack_5b8;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar2;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (ppuVar7 != (undefined **)0x0) {
    ppuVar9 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(ppuVar2);
      }
      ppuVar1 = (undefined **)PTR_PTR_1126bad20;
      FUN_105569d40(PTR_PTR_1126bad20,*(undefined8 *)((long)ppuVar9 * 8));
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = param_7;
      func_0x00010c25ed40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      ppuVar3 = (undefined **)PTR_PTR_1126af5d0;
      if (unaff_x28 == (undefined **)0x0) {
        unaff_x28 = param_7;
        func_0x00010bf987e0(param_7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = unaff_x28;
        func_0x00010bf51e00();
        func_0x00010bfa01c0(ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar8);
        _objc_release(unaff_x28);
        _objc_release(ppuVar1);
        goto LAB_10555aa50;
      }
      _objc_release(ppuVar1);
      ppuVar9 = (undefined **)((long)ppuVar9 + 1);
      ppuVar8 = unaff_x28;
    } while (ppuVar7 != ppuVar9);
    ppuVar7 = ppuVar2;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar8;
  if (param_6 != 0) {
    ppuVar1 = param_3;
    FUN_1055519fc(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    FUN_10556bc74();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    ppuVar1 = param_7;
    func_0x00010c25ed40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    ppuVar3 = (undefined **)PTR_PTR_1126af5d0;
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar1 = param_7;
      func_0x00010bf987e0(param_7);
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = ppuVar1;
      func_0x00010bf51e00();
      func_0x00010bfa01c0(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x28);
      _objc_release(ppuVar1);
      goto LAB_10555aa50;
    }
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar1;
  }
  ppuVar3 = (undefined **)PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar2;
LAB_10555aa50:
  _objc_release(ppuVar2);
  _objc_release(ppuStack_5b8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  ppuVar8 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
    return ppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x28);
  _objc_release(ppuVar1);
  _objc_release(ppuVar2);
  _objc_release(ppuStack_5b8);
  _objc_release(0);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  *ppuVar8 = (undefined *)&PTR_FUN_1108971a8;
  plVar6 = (long *)ppuVar8[0xd];
  ppuVar8[0xd] = (undefined *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = (long *)ppuVar8[0xc];
  ppuVar8[0xc] = (undefined *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (ppuVar8[9] != (undefined *)0x0) {
    ppuVar8[10] = ppuVar8[9];
    __ZdlPv();
  }
  return ppuVar8;
}



/* Entry: 10555acbc; end: 10555ad97;  */

undefined8 * FUN_10555acbc(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1108971a8;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10555ad98; end: 10555af67; -[CTPDocObjectsItemsPersistenceService setItemsForFeedId:items:doNotClearIfNoSyncData:pageToken:] */

void FUN_10555ad98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_60 = param_5;
  _objc_retain(param_6);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10555af68; end: 10555afbf;  */

void FUN_10555af68(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be72800(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10555afc0; end: 10555b64b; -[CTPDocObjectsItemsPersistenceService synchronouslyDeleteItemsForFeedId:transactionContext:] */

void FUN_10555afc0(long param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined1 auStack_420 [8];
  undefined1 auStack_418 [8];
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined **ppuStack_400;
  undefined8 *puStack_3f8;
  undefined1 *puStack_3f0;
  code *pcStack_3e8;
  long lStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined4 uStack_38c;
  long lStack_388;
  long lStack_380;
  undefined8 uStack_378;
  undefined **ppuStack_370;
  undefined4 uStack_368;
  undefined4 uStack_358;
  undefined1 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long lStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  long *plStack_308;
  undefined1 uStack_2f9;
  undefined **ppuStack_2f8;
  undefined4 uStack_2f0;
  undefined2 uStack_2e0;
  byte bStack_2de;
  byte bStack_2dd;
  undefined1 *puStack_2c0;
  undefined ***pppuStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  long *plStack_298;
  long *plStack_290;
  undefined **ppuStack_288;
  undefined4 uStack_280;
  undefined4 uStack_270;
  undefined1 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  long *plStack_220;
  undefined1 uStack_211;
  undefined **ppuStack_210;
  undefined4 uStack_208;
  undefined2 uStack_1f8;
  undefined2 uStack_1f6;
  undefined1 *puStack_1d8;
  undefined ***pppuStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined **ppuStack_1a0;
  undefined4 uStack_198;
  undefined2 uStack_188;
  byte bStack_186;
  byte bStack_185;
  undefined ***pppuStack_168;
  undefined ***pppuStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_3d8 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bacd8);
  if (lVar2 == 0) {
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_130,lVar2);
  }
  puVar3 = &uStack_211;
  FUN_105568aac();
  lVar6 = lStack_3d8;
  lVar4 = lStack_3d8;
  func_0x00010c14c220();
  uStack_280 = 0xf;
  uStack_270 = 0x100;
  uStack_258 = (undefined1)lVar4;
  ppuStack_288 = &PTR_DAT_110897208;
  uStack_248 = 0;
  uStack_250 = 0;
  lStack_238 = 0;
  lStack_240 = 0;
  plStack_228 = (long *)0x0;
  uStack_230 = 0;
  plStack_220 = (long *)0x0;
  uStack_1f6 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_208 = 10;
  uStack_1f8 = 0x100;
  ppuVar14 = &PTR_FUN_110897148;
  ppuStack_210 = &PTR_FUN_110897148;
  pppuStack_1d0 = &ppuStack_288;
  lStack_1c0 = 0;
  lStack_1c8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_1b8 = 0;
  plStack_1a8 = (long *)0x0;
  puVar5 = &uStack_2f9;
  puStack_1d8 = puVar3;
  FUN_105568bf8();
  func_0x00010c14c200();
  uStack_368 = 0xf;
  uStack_358 = 0x100;
  uStack_340 = (undefined1)lVar6;
  ppuStack_370 = &PTR_DAT_110897278;
  uStack_330 = 0;
  uStack_338 = 0;
  lStack_320 = 0;
  lStack_328 = 0;
  plStack_310 = (long *)0x0;
  uStack_318 = 0;
  plStack_308 = (long *)0x0;
  bStack_2de = puVar5[0x1a];
  bStack_2dd = puVar5[0x1b];
  uStack_2f0 = 10;
  uStack_2e0 = 0x100;
  ppuStack_2f8 = &PTR_FUN_1108971a8;
  pppuStack_2b8 = &ppuStack_370;
  lStack_2a8 = 0;
  lStack_2b0 = 0;
  plStack_298 = (long *)0x0;
  uStack_2a0 = 0;
  plStack_290 = (long *)0x0;
  bStack_186 = (byte)uStack_1f6 | bStack_2de;
  bStack_185 = uStack_1f6._1_1_ & bStack_2dd;
  uStack_198 = 4;
  uStack_188 = 0x100;
  ppuStack_1a0 = &PTR_SUB_1108629c8;
  pppuStack_168 = &ppuStack_210;
  pppuStack_160 = &ppuStack_2f8;
  plStack_138 = (long *)0x0;
  plStack_140 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_158 = 0;
  lStack_388 = 0;
  lStack_380 = 0;
  uStack_378 = 0;
  uStack_38c = 0;
  puVar7 = &uStack_130;
  puStack_2c0 = puVar5;
  func_0x0001000e77a0(puVar7,&ppuStack_1a0,&lStack_388,&uStack_38c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_388 != 0) {
    lStack_380 = lStack_388;
    __ZdlPv();
  }
  plVar1 = plStack_138;
  ppuStack_1a0 = &PTR_SUB_1108629c8;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_158 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_290;
  ppuStack_2f8 = &PTR_FUN_1108971a8;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_298;
  plStack_298 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2b0 != 0) {
    lStack_2a8 = lStack_2b0;
    __ZdlPv();
  }
  plVar1 = plStack_308;
  ppuStack_370 = &PTR_DAT_110897278;
  plStack_308 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_310;
  plStack_310 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_328 != 0) {
    lStack_320 = lStack_328;
    __ZdlPv();
  }
  plVar1 = plStack_1a8;
  ppuStack_210 = &PTR_FUN_110897148;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1b0;
  plStack_1b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1c8 != 0) {
    lStack_1c0 = lStack_1c8;
    __ZdlPv();
  }
  plVar1 = plStack_220;
  ppuStack_288 = &PTR_DAT_110897208;
  plStack_220 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_228;
  plStack_228 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_240 != 0) {
    lStack_238 = lStack_240;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_108);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(lVar2);
  puVar8 = puVar7;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = (undefined8 *)(ulong)(puVar8 == (undefined8 *)0x0);
  _objc_release();
  puVar10 = PTR_PTR_1126af5d0;
  puVar9 = puVar7;
  if (puVar8 == (undefined8 *)0x0) {
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    lStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    plStack_3c0 = (long *)0x0;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010bf52a60();
    if (puVar8 != (undefined8 *)0x0) {
      ppuVar14 = (undefined **)0x0;
      lVar2 = *plStack_3c0;
      do {
        puVar12 = (undefined8 *)0x0;
        ppuVar15 = ppuVar14;
        do {
          if (*plStack_3c0 != lVar2) {
            _objc_enumerationMutation(puVar9);
          }
          puVar10 = PTR_PTR_1126bad20;
          FUN_105569d40(PTR_PTR_1126bad20,*(undefined8 *)(lStack_3c8 + (long)puVar12 * 8));
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = param_4;
          func_0x00010c25ed40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar15);
          _objc_release(puVar10);
          puVar10 = PTR_PTR_1126af5d0;
          if (ppuVar14 == (undefined **)0x0) {
            ppuVar14 = param_4;
            func_0x00010bf987e0(param_4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa01c0(puVar10);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar14);
            _objc_release(puVar9);
            goto LAB_10555b51c;
          }
          puVar12 = (undefined8 *)((long)puVar12 + 1);
          ppuVar15 = ppuVar14;
        } while (puVar8 != puVar12);
        puVar8 = puVar9;
        func_0x00010bf52a60();
      } while (puVar8 != (undefined8 *)0x0);
      _objc_release(ppuVar14);
    }
    _objc_release(puVar9);
    puVar10 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
  }
LAB_10555b51c:
  _objc_release(puVar7);
  _objc_release(param_4);
  lVar2 = lStack_3d8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _objc_release(ppuVar14);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(param_4);
    _objc_release(lStack_3d8);
    __Unwind_Resume();
    pcStack_3e8 = FUN_10555b64c;
    puVar11 = PTR_PTR_1126ae560;
    puStack_410 = puVar9;
    puStack_408 = puVar7;
    ppuStack_400 = param_4;
    puStack_3f8 = puVar12;
    puStack_3f0 = &stack0xfffffffffffffff0;
    _objc_opt_new();
    _objc_initWeak(auStack_418,lVar2);
    uVar13 = *(undefined8 *)(lVar2 + 0x10);
    _objc_copyWeak(auStack_420,auStack_418);
    _objc_retain(puVar11);
    func_0x00010c0f7fc0(uVar13);
    puVar10 = puVar11;
    func_0x00010bfbc3e0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_destroyWeak(auStack_420);
    _objc_destroyWeak(auStack_418);
    _objc_release(puVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10555b64c; end: 10555b753; -[CTPDocObjectsItemsPersistenceService deleteAllItems] */

void FUN_10555b64c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10555b754; end: 10555b7a3;  */

void FUN_10555b754(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be719a0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10555b7a4; end: 10555bc5b; -[CTPDocObjectsItemsPersistenceService observableForUpdatesForFeedId:] */

void FUN_10555b7a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_2e8 [12];
  undefined4 uStack_2dc;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined **ppuStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2a8;
  undefined1 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long lStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined1 uStack_249;
  undefined **ppuStack_248;
  undefined4 uStack_240;
  undefined2 uStack_230;
  byte bStack_22e;
  byte bStack_22d;
  undefined1 *puStack_210;
  undefined ***pppuStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  undefined **ppuStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1c0;
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  long *plStack_170;
  undefined1 uStack_161;
  undefined **ppuStack_160;
  undefined4 uStack_158;
  undefined2 uStack_148;
  undefined2 uStack_146;
  undefined1 *puStack_128;
  undefined ***pppuStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined **ppuStack_f0;
  undefined4 uStack_e8;
  undefined2 uStack_d8;
  byte bStack_d6;
  byte bStack_d5;
  undefined ***pppuStack_b8;
  undefined ***pppuStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bacd8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_80,lVar2);
  }
  puVar4 = &uStack_161;
  FUN_105568aac();
  uVar5 = param_3;
  func_0x00010c14c220();
  uStack_1d0 = 0xf;
  uStack_1c0 = 0x100;
  uStack_1a8 = (undefined1)uVar5;
  ppuStack_1d8 = &PTR_DAT_110897208;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lStack_188 = 0;
  lStack_190 = 0;
  plStack_178 = (long *)0x0;
  uStack_180 = 0;
  plStack_170 = (long *)0x0;
  uStack_146 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_158 = 10;
  uStack_148 = 0x100;
  ppuStack_160 = &PTR_FUN_110897148;
  pppuStack_120 = &ppuStack_1d8;
  lStack_110 = 0;
  lStack_118 = 0;
  plStack_100 = (long *)0x0;
  uStack_108 = 0;
  plStack_f8 = (long *)0x0;
  puVar6 = &uStack_249;
  puStack_128 = puVar4;
  FUN_105568bf8();
  uVar5 = param_3;
  func_0x00010c14c200();
  uStack_2b8 = 0xf;
  uStack_2a8 = 0x100;
  uStack_290 = (undefined1)uVar5;
  ppuStack_2c0 = &PTR_DAT_110897278;
  uStack_280 = 0;
  uStack_288 = 0;
  lStack_270 = 0;
  lStack_278 = 0;
  plStack_260 = (long *)0x0;
  uStack_268 = 0;
  plStack_258 = (long *)0x0;
  bStack_22e = puVar6[0x1a];
  bStack_22d = puVar6[0x1b];
  uStack_240 = 10;
  uStack_230 = 0x100;
  ppuStack_248 = &PTR_FUN_1108971a8;
  pppuStack_208 = &ppuStack_2c0;
  lStack_1f8 = 0;
  lStack_200 = 0;
  plStack_1e8 = (long *)0x0;
  uStack_1f0 = 0;
  plStack_1e0 = (long *)0x0;
  bStack_d6 = (byte)uStack_146 | bStack_22e;
  bStack_d5 = uStack_146._1_1_ & bStack_22d;
  uStack_e8 = 4;
  uStack_d8 = 0x100;
  ppuStack_f0 = &PTR_SUB_1108629c8;
  pppuStack_b8 = &ppuStack_160;
  pppuStack_b0 = &ppuStack_248;
  plStack_88 = (long *)0x0;
  plStack_90 = (long *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lStack_a8 = 0;
  lStack_2d8 = 0;
  lStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_2dc = 0;
  puVar7 = &uStack_80;
  puStack_210 = puVar6;
  func_0x000108c7f678(puVar7,&ppuStack_f0,&lStack_2d8,&uStack_2dc);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_2d8 != 0) {
    lStack_2d0 = lStack_2d8;
    __ZdlPv();
  }
  plVar1 = plStack_88;
  ppuStack_f0 = &PTR_SUB_1108629c8;
  plStack_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_90;
  plStack_90 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_a8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_1e0;
  ppuStack_248 = &PTR_FUN_1108971a8;
  plStack_1e0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1e8;
  plStack_1e8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_200 != 0) {
    lStack_1f8 = lStack_200;
    __ZdlPv();
  }
  plVar1 = plStack_258;
  ppuStack_2c0 = &PTR_DAT_110897278;
  plStack_258 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_260;
  plStack_260 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_278 != 0) {
    lStack_270 = lStack_278;
    __ZdlPv();
  }
  plVar1 = plStack_f8;
  ppuStack_160 = &PTR_FUN_110897148;
  plStack_f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_100;
  plStack_100 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_118 != 0) {
    lStack_110 = lStack_118;
    __ZdlPv();
  }
  plVar1 = plStack_170;
  ppuStack_1d8 = &PTR_DAT_110897208;
  plStack_170 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_178;
  plStack_178 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_initWeak(&ppuStack_f0,param_1);
  _objc_copyWeak(auStack_2e8,&ppuStack_f0);
  puVar8 = puVar7;
  func_0x00010bfb2660(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_2e8);
  _objc_destroyWeak(&ppuStack_f0);
  _objc_release(puVar7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10555bc5c; end: 10555bd1f;  */

void FUN_10555bc5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bebe3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10555bd20; end: 10555bd27; -[CTPDocObjectsItemsPersistenceService docObjectContext] */

void FUN_10555bd20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 10555bd28; end: 10555c207; -[CTPDocObjectsItemsPersistenceService _performFeedSyncMetadataForFeedId:withPromise:] */

void FUN_10555bd28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uStack_30c;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined1 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  long lStack_140;
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
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bacc8);
  if (lVar2 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,lVar2);
  }
  puVar3 = &uStack_191;
  FUN_10556b2b8();
  uVar4 = param_3;
  func_0x00010c14c220();
  uStack_200 = 0xf;
  pppuStack_150 = &ppuStack_208;
  uStack_1f0 = 0x100;
  uStack_1d8 = (undefined1)uVar4;
  ppuStack_208 = &PTR_DAT_110897208;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1b8 = 0;
  lStack_1c0 = 0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_FUN_110897148;
  lStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar5 = &uStack_279;
  puStack_158 = puVar3;
  FUN_10556b404();
  uVar4 = param_3;
  func_0x00010c14c200();
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  uStack_2c0 = (undefined1)uVar4;
  ppuStack_2f0 = &PTR_DAT_110897278;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  lStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar5[0x1a];
  bStack_25d = puVar5[0x1b];
  uStack_270 = 10;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_FUN_1108971a8;
  lStack_228 = 0;
  lStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  plStack_210 = (long *)0x0;
  bStack_106 = (byte)uStack_176 | bStack_25e;
  bStack_105 = uStack_176._1_1_ & bStack_25d;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  pppuStack_e0 = &ppuStack_278;
  plStack_b8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  lStack_308 = 0;
  lStack_300 = 0;
  uStack_2f8 = 0;
  uStack_30c = 0;
  puVar6 = &uStack_b0;
  puStack_240 = puVar5;
  pppuStack_238 = &ppuStack_2f0;
  func_0x0001000e77a0(puVar6,&ppuStack_120,&lStack_308,&uStack_30c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_308 != 0) {
    lStack_300 = lStack_308;
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
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_FUN_1108971a8;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_DAT_110897278;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a8 != 0) {
    lStack_2a0 = lStack_2a8;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_FUN_110897148;
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
    lStack_140 = lStack_148;
    __ZdlPv();
  }
  plVar1 = plStack_1a0;
  ppuStack_208 = &PTR_DAT_110897208;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1c0 != 0) {
    lStack_1b8 = lStack_1c0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(lVar2);
  puVar7 = puVar6;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar8 = puVar6;
  if (puVar7 == (undefined8 *)0x0) {
    func_0x00010bfb1920(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    FUN_1055518d8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(param_4);
    _objc_release(puVar7);
  }
  else {
    func_0x00010bf987e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(param_4);
  }
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10555c208; end: 10555c72b; -[CTPDocObjectsItemsPersistenceService _performItemsForFeedId:withPromise:startTime:] */

void FUN_10555c208(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uStack_31c;
  long lStack_318;
  long lStack_310;
  undefined8 uStack_308;
  undefined **ppuStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2e8;
  undefined1 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  undefined1 uStack_289;
  undefined **ppuStack_288;
  undefined4 uStack_280;
  undefined2 uStack_270;
  byte bStack_26e;
  byte bStack_26d;
  undefined1 *puStack_250;
  undefined ***pppuStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  long *plStack_220;
  undefined **ppuStack_218;
  undefined4 uStack_210;
  undefined4 uStack_200;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined1 uStack_1a1;
  undefined **ppuStack_1a0;
  undefined4 uStack_198;
  undefined2 uStack_188;
  undefined2 uStack_186;
  undefined1 *puStack_168;
  undefined ***pppuStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined **ppuStack_130;
  undefined4 uStack_128;
  undefined2 uStack_118;
  byte bStack_116;
  byte bStack_115;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1[1];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bacd8);
  if (lVar2 == 0) {
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_c0,lVar2);
  }
  puVar3 = &uStack_1a1;
  FUN_105568aac();
  uVar7 = param_3;
  func_0x00010c14c220();
  uStack_210 = 0xf;
  pppuStack_160 = &ppuStack_218;
  uStack_200 = 0x100;
  uStack_1e8 = (undefined1)uVar7;
  ppuStack_218 = &PTR_DAT_110897208;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  lStack_1c8 = 0;
  lStack_1d0 = 0;
  plStack_1b8 = (long *)0x0;
  uStack_1c0 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_186 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_198 = 10;
  uStack_188 = 0x100;
  ppuStack_1a0 = &PTR_FUN_110897148;
  lStack_150 = 0;
  lStack_158 = 0;
  plStack_140 = (long *)0x0;
  uStack_148 = 0;
  plStack_138 = (long *)0x0;
  puVar4 = &uStack_289;
  puStack_168 = puVar3;
  FUN_105568bf8();
  uVar7 = param_3;
  func_0x00010c14c200();
  uStack_2f8 = 0xf;
  uStack_2e8 = 0x100;
  uStack_2d0 = (undefined1)uVar7;
  ppuStack_300 = &PTR_DAT_110897278;
  uStack_2c0 = 0;
  uStack_2c8 = 0;
  lStack_2b0 = 0;
  lStack_2b8 = 0;
  plStack_2a0 = (long *)0x0;
  uStack_2a8 = 0;
  plStack_298 = (long *)0x0;
  bStack_26e = puVar4[0x1a];
  bStack_26d = puVar4[0x1b];
  uStack_280 = 10;
  uStack_270 = 0x100;
  ppuStack_288 = &PTR_FUN_1108971a8;
  lStack_238 = 0;
  lStack_240 = 0;
  plStack_228 = (long *)0x0;
  uStack_230 = 0;
  plStack_220 = (long *)0x0;
  bStack_116 = (byte)uStack_186 | bStack_26e;
  bStack_115 = uStack_186._1_1_ & bStack_26d;
  uStack_128 = 4;
  uStack_118 = 0x100;
  ppuStack_130 = &PTR_SUB_1108629c8;
  pppuStack_f8 = &ppuStack_1a0;
  pppuStack_f0 = &ppuStack_288;
  plStack_c8 = (long *)0x0;
  plStack_d0 = (long *)0x0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_e8 = 0;
  lStack_318 = 0;
  lStack_310 = 0;
  uStack_308 = 0;
  uStack_31c = 0;
  puVar5 = &uStack_c0;
  puStack_250 = puVar4;
  pppuStack_248 = &ppuStack_300;
  func_0x0001000e77a0(puVar5,&ppuStack_130,&lStack_318,&uStack_31c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_318 != 0) {
    lStack_310 = lStack_318;
    __ZdlPv();
  }
  plVar1 = plStack_c8;
  ppuStack_130 = &PTR_SUB_1108629c8;
  plStack_c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_d0;
  plStack_d0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_e8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_220;
  ppuStack_288 = &PTR_FUN_1108971a8;
  plStack_220 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_228;
  plStack_228 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_240 != 0) {
    lStack_238 = lStack_240;
    __ZdlPv();
  }
  plVar1 = plStack_298;
  ppuStack_300 = &PTR_DAT_110897278;
  plStack_298 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2a0;
  plStack_2a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2b8 != 0) {
    lStack_2b0 = lStack_2b8;
    __ZdlPv();
  }
  plVar1 = plStack_138;
  ppuStack_1a0 = &PTR_FUN_110897148;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_158 != 0) {
    lStack_150 = lStack_158;
    __ZdlPv();
  }
  plVar1 = plStack_1b0;
  ppuStack_218 = &PTR_DAT_110897208;
  plStack_1b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1b8;
  plStack_1b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1d0 != 0) {
    lStack_1c8 = lStack_1d0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_98);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(lVar2);
  puVar6 = puVar5;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = param_1;
    func_0x00010bebe360(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(param_4);
    _CACurrentMediaTime();
    uVar7 = param_1[3];
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1de0();
    _objc_release(uVar7);
  }
  else {
    puVar6 = puVar5;
    func_0x00010bf987e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(param_4);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10555c72c; end: 10555ca1b; -[CTPDocObjectsItemsPersistenceService _synchronousPerformItemForCTId:] */

void FUN_10555c72c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined ***pppuVar9;
  undefined4 uStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [31];
  undefined1 uStack_111;
  undefined **appuStack_110 [9];
  undefined1 auStack_c8 [24];
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_1[1];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bacd8);
  if (lVar2 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,lVar2);
  }
  puVar3 = &uStack_111;
  FUN_105568934(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  FUN_105559f88(auStack_130,puVar4);
  func_0x0001004c2e3c(appuStack_110,0xc,puVar3,auStack_130);
  puStack_148 = (undefined1 *)0x0;
  puStack_140 = (undefined1 *)0x0;
  uStack_138 = 0;
  uStack_14c = 0;
  puVar5 = &uStack_a0;
  pppuVar9 = appuStack_110;
  func_0x0001000e77a0(puVar5,pppuVar9,&puStack_148,&uStack_14c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_148 != (undefined1 *)0x0) {
    puStack_140 = puStack_148;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  appuStack_110[0] = &PTR_FUN_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_148 = auStack_c8;
  func_0x000100105004(&puStack_148);
  puStack_148 = auStack_130;
  func_0x000100105004(&puStack_148);
  _objc_release(puVar4);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(lVar2);
  puVar6 = puVar5;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR_PTR_1126af5d0;
  if (puVar6 == (undefined8 *)0x0) {
    func_0x00010bebe360();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = puVar5;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010bfa01c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(puVar5);
  uVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_1);
    _objc_release(puVar5);
    _objc_release(param_3);
    __Unwind_Resume(uVar7);
    lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010bf0a540(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c2469a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246cc0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar4);
    puVar6 = puVar5;
    _objc_release(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
      ___stack_chk_fail();
      _objc_release(puVar8);
      _objc_release(puVar4);
      _objc_release(puVar5);
      __Unwind_Resume(puVar6);
      FUN_105551ac8(pppuVar9);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10555ca1c; end: 10555cb77; -[CTPDocObjectsItemsPersistenceService _sortedPersistedItemsForFetchResult:] */

void FUN_10555ca1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf0a540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c2469a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246cc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar4 = uVar1;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar1);
    __Unwind_Resume(uVar4);
    FUN_105551ac8(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10555cb78; end: 10555cb97;  */

void FUN_10555cb78(undefined8 param_1,undefined8 param_2)

{
  FUN_105551ac8(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10555cb98; end: 10555d0f3; -[CTPDocObjectsItemsPersistenceService _sortedPersistedSectionsForFetchResult:] */

void FUN_10555cb98(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar15 = *(undefined8 *)(lVar13 * 8);
      uVar5 = uVar15;
      func_0x00010c1554e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c156a60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar15;
      func_0x00010c1554e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      func_0x00010c1554e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f520();
      func_0x00010c14de00(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar15);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      puVar9 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar9 == (undefined *)0x0) {
        puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar9);
      }
      puVar9 = puVar2;
      func_0x00010c0e00e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(puVar9);
      _objc_release(puVar8);
      lVar13 = lVar13 + 1;
    } while (lVar4 != lVar13);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar10;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (puVar8 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(puVar10);
      }
      uVar15 = *(undefined8 *)((long)puVar14 * 8);
      uVar5 = uVar15;
      func_0x00010bfb1920(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c1554e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      FUN_105551d4c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar5);
      func_0x00010c0b8620(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010bebe340(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126bad28;
      _objc_alloc(PTR_PTR_1126bad28);
      func_0x00010bf85520(uVar7);
      func_0x00010c0204a0(puVar11);
      func_0x00010befa120(puVar9);
      _objc_release(puVar11);
      _objc_release(uVar5);
      _objc_release(uVar15);
      _objc_release(uVar7);
      puVar14 = puVar14 + 1;
    } while (puVar8 != puVar14);
    puVar8 = puVar10;
    func_0x00010bf52a60();
  }
  _objc_release(puVar10);
  func_0x00010bebe380(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar2);
  lVar4 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    _objc_release(puVar9);
    _objc_release(puVar2);
    _objc_release(param_3);
    __Unwind_Resume(lVar4);
    FUN_105551ac8(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10555d0f4; end: 10555d113;  */

void FUN_10555d0f4(undefined8 param_1,undefined8 param_2)

{
  FUN_105551ac8(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10555d114; end: 10555d5d3; -[CTPDocObjectsItemsPersistenceService _performSectionsForFeedId:withPromise:] */

void FUN_10555d114(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uStack_30c;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined1 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  long lStack_140;
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
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1[1];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bacd8);
  if (lVar2 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,lVar2);
  }
  puVar3 = &uStack_191;
  FUN_105568aac();
  uVar4 = param_3;
  func_0x00010c14c220();
  uStack_200 = 0xf;
  pppuStack_150 = &ppuStack_208;
  uStack_1f0 = 0x100;
  uStack_1d8 = (undefined1)uVar4;
  ppuStack_208 = &PTR_DAT_110897208;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1b8 = 0;
  lStack_1c0 = 0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_FUN_110897148;
  lStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar5 = &uStack_279;
  puStack_158 = puVar3;
  FUN_105568bf8();
  uVar4 = param_3;
  func_0x00010c14c200();
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  uStack_2c0 = (undefined1)uVar4;
  ppuStack_2f0 = &PTR_DAT_110897278;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  lStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar5[0x1a];
  bStack_25d = puVar5[0x1b];
  uStack_270 = 10;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_FUN_1108971a8;
  lStack_228 = 0;
  lStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  plStack_210 = (long *)0x0;
  bStack_106 = (byte)uStack_176 | bStack_25e;
  bStack_105 = uStack_176._1_1_ & bStack_25d;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  pppuStack_e0 = &ppuStack_278;
  plStack_b8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  lStack_308 = 0;
  lStack_300 = 0;
  uStack_2f8 = 0;
  uStack_30c = 0;
  puVar6 = &uStack_b0;
  puStack_240 = puVar5;
  pppuStack_238 = &ppuStack_2f0;
  func_0x0001000e77a0(puVar6,&ppuStack_120,&lStack_308,&uStack_30c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_308 != 0) {
    lStack_300 = lStack_308;
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
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_FUN_1108971a8;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_DAT_110897278;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a8 != 0) {
    lStack_2a0 = lStack_2a8;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_FUN_110897148;
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
    lStack_140 = lStack_148;
    __ZdlPv();
  }
  plVar1 = plStack_1a0;
  ppuStack_208 = &PTR_DAT_110897208;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1c0 != 0) {
    lStack_1b8 = lStack_1c0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(lVar2);
  puVar7 = puVar6;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar7 == (undefined8 *)0x0) {
    func_0x00010bebe3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(param_4);
  }
  else {
    param_1 = puVar6;
    func_0x00010bf987e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(param_4);
  }
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10555d5d4; end: 10555d6f3; -[CTPDocObjectsItemsPersistenceService _sortedPersistedSectionArray:] */

void FUN_10555d5d4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c2469a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  puVar7 = puVar2;
  func_0x00010c246cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(param_3);
    __Unwind_Resume(puVar4);
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar7);
    puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c2469a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 1;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    puVar8 = puVar2;
    func_0x00010c246cc0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar4 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      ___stack_chk_fail();
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(puVar7);
      __Unwind_Resume();
      _objc_retain(puVar8);
      _objc_retain(uVar9);
      _objc_retain(param_6);
      _objc_retain(param_7);
      puStack_118 = &uStack_120;
      uStack_120 = 0;
      uStack_110 = 0x3032000000;
      pcStack_108 = FUN_1055598a0;
      uStack_100 = 0x1055598b0;
      uStack_f8 = 0;
      uVar5 = *(undefined8 *)(puVar4 + 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar8);
      _objc_retain(uVar9);
      _objc_retain(param_6);
      uVar6 = *(undefined8 *)(puVar4 + 0x10);
      func_0x00010c11de00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_7);
      func_0x00010c0f8500(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(uVar9);
      _objc_release(puVar8);
      __Block_object_dispose(&uStack_120,8);
      _objc_release(uStack_f8);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(uVar9);
      _objc_release(puVar8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10555d6f4; end: 10555d813; -[CTPDocObjectsItemsPersistenceService _sortedPersistedItemArray:] */

void FUN_10555d6f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c2469a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  puVar7 = puVar2;
  func_0x00010c246cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  pcStack_c8 = FUN_1055598a0;
  uStack_c0 = 0x1055598b0;
  uStack_b8 = 0;
  uVar5 = *(undefined8 *)(lVar4 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  _objc_retain(param_6);
  uVar6 = *(undefined8 *)(lVar4 + 0x10);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  func_0x00010c0f8500(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar8);
  _objc_release(puVar7);
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(uStack_b8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar8);
  _objc_release(puVar7);
  return;
}



/* Entry: 10555d814; end: 10555da6b; -[CTPDocObjectsItemsPersistenceService _performSetItemsForFeedId:items:doNotClearIfNoSyncData:pageToken:promise:] */

void FUN_10555d814(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_1055598a0;
  uStack_80 = 0x1055598b0;
  uStack_78 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10555da6c; end: 10555e7b3;  */

void FUN_10555da6c(long param_1,undefined8 *param_2)

{
  bool bVar1;
  long *plVar2;
  undefined1 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puStack_498;
  undefined4 uStack_40c;
  long lStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined **ppuStack_3f0;
  undefined4 uStack_3e8;
  undefined4 uStack_3d8;
  undefined1 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  long *plStack_390;
  long *plStack_388;
  undefined1 uStack_379;
  undefined **ppuStack_378;
  undefined4 uStack_370;
  undefined2 uStack_360;
  byte bStack_35e;
  byte bStack_35d;
  undefined1 *puStack_340;
  undefined ***pppuStack_338;
  long lStack_330;
  long lStack_328;
  undefined8 uStack_320;
  long *plStack_318;
  long *plStack_310;
  undefined **ppuStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2f0;
  undefined1 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined1 uStack_291;
  undefined **ppuStack_290;
  undefined4 uStack_288;
  undefined2 uStack_278;
  undefined2 uStack_276;
  undefined1 *puStack_258;
  undefined ***pppuStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined **ppuStack_220;
  undefined4 uStack_218;
  undefined2 uStack_208;
  byte bStack_206;
  byte bStack_205;
  undefined ***pppuStack_1e8;
  undefined ***pppuStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bacc8);
    if (lVar4 == 0) {
      uStack_180 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_1b0,lVar4);
    }
    puVar5 = &uStack_291;
    FUN_10556b2b8();
    uStack_2d8 = (undefined1)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c14c220();
    uStack_300 = 0xf;
    uStack_2f0 = 0x100;
    ppuStack_308 = &PTR_DAT_110897208;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    lStack_2b8 = 0;
    lStack_2c0 = 0;
    plStack_2a8 = (long *)0x0;
    uStack_2b0 = 0;
    plStack_2a0 = (long *)0x0;
    uStack_276 = *(undefined2 *)(puVar5 + 0x1a);
    uStack_288 = 10;
    uStack_278 = 0x100;
    ppuStack_290 = &PTR_FUN_110897148;
    pppuStack_250 = &ppuStack_308;
    lStack_240 = 0;
    lStack_248 = 0;
    plStack_230 = (long *)0x0;
    uStack_238 = 0;
    plStack_228 = (long *)0x0;
    puVar6 = &uStack_379;
    puStack_258 = puVar5;
    FUN_10556b404();
    uStack_3c0 = (undefined1)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c14c200();
    uStack_3e8 = 0xf;
    uStack_3d8 = 0x100;
    ppuStack_3f0 = &PTR_DAT_110897278;
    uStack_3b0 = 0;
    uStack_3b8 = 0;
    lStack_3a0 = 0;
    lStack_3a8 = 0;
    plStack_390 = (long *)0x0;
    uStack_398 = 0;
    plStack_388 = (long *)0x0;
    bStack_35e = puVar6[0x1a];
    bStack_35d = puVar6[0x1b];
    uStack_370 = 10;
    uStack_360 = 0x100;
    ppuStack_378 = &PTR_FUN_1108971a8;
    pppuStack_338 = &ppuStack_3f0;
    lStack_328 = 0;
    lStack_330 = 0;
    plStack_318 = (long *)0x0;
    uStack_320 = 0;
    plStack_310 = (long *)0x0;
    bStack_206 = (byte)uStack_276 | bStack_35e;
    bStack_205 = uStack_276._1_1_ & bStack_35d;
    uStack_218 = 4;
    uStack_208 = 0x100;
    ppuStack_220 = &PTR_SUB_1108629c8;
    pppuStack_1e8 = &ppuStack_290;
    pppuStack_1e0 = &ppuStack_378;
    plStack_1b8 = (long *)0x0;
    plStack_1c0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    lStack_1d8 = 0;
    lStack_408 = 0;
    lStack_400 = 0;
    uStack_3f8 = 0;
    uStack_40c = 0;
    puVar14 = &uStack_1b0;
    puStack_340 = puVar6;
    func_0x0001000e77a0(puVar14,&ppuStack_220,&lStack_408,&uStack_40c);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_408 != 0) {
      lStack_400 = lStack_408;
      __ZdlPv();
    }
    plVar2 = plStack_1b8;
    ppuStack_220 = &PTR_SUB_1108629c8;
    plStack_1b8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_1c0;
    plStack_1c0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_1d8 != 0) {
      __ZdlPv();
    }
    plVar2 = plStack_310;
    ppuStack_378 = &PTR_FUN_1108971a8;
    plStack_310 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_318;
    plStack_318 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_330 != 0) {
      lStack_328 = lStack_330;
      __ZdlPv();
    }
    plVar2 = plStack_388;
    ppuStack_3f0 = &PTR_DAT_110897278;
    plStack_388 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_390;
    plStack_390 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_3a8 != 0) {
      lStack_3a0 = lStack_3a8;
      __ZdlPv();
    }
    plVar2 = plStack_228;
    ppuStack_290 = &PTR_FUN_110897148;
    plStack_228 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_230;
    plStack_230 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_248 != 0) {
      lStack_240 = lStack_248;
      __ZdlPv();
    }
    plVar2 = plStack_2a0;
    ppuStack_308 = &PTR_DAT_110897208;
    plStack_2a0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_2a8;
    plStack_2a8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_2c0 != 0) {
      lStack_2b8 = lStack_2c0;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_188);
    _objc_release(uStack_198);
    _objc_release(uStack_1a0);
    _objc_release(lVar4);
    puVar7 = puVar14;
    func_0x00010bf529e0();
    _objc_release(puVar14);
    if (puVar7 == (undefined8 *)0x0) {
      bVar1 = false;
      puVar14 = (undefined8 *)0x0;
      goto LAB_10555e2f4;
    }
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bacd8);
  if (lVar4 == 0) {
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1b0,lVar4);
  }
  puVar5 = &uStack_291;
  FUN_105568aac();
  uVar3 = (char)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c14c220();
  uStack_2d8 = uVar3;
  uStack_300 = 0xf;
  uStack_2f0 = 0x100;
  ppuStack_308 = &PTR_DAT_110897208;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  lStack_2b8 = 0;
  lStack_2c0 = 0;
  plStack_2a8 = (long *)0x0;
  uStack_2b0 = 0;
  plStack_2a0 = (long *)0x0;
  uStack_276 = *(undefined2 *)(puVar5 + 0x1a);
  uStack_288 = 10;
  uStack_278 = 0x100;
  ppuStack_290 = &PTR_FUN_110897148;
  pppuStack_250 = &ppuStack_308;
  lStack_240 = 0;
  lStack_248 = 0;
  plStack_230 = (long *)0x0;
  uStack_238 = 0;
  plStack_228 = (long *)0x0;
  puVar6 = &uStack_379;
  puStack_258 = puVar5;
  FUN_105568bf8();
  uVar3 = (char)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c14c200();
  uStack_3c0 = uVar3;
  uStack_3e8 = 0xf;
  uStack_3d8 = 0x100;
  ppuStack_3f0 = &PTR_DAT_110897278;
  uStack_3b0 = 0;
  uStack_3b8 = 0;
  lStack_3a0 = 0;
  lStack_3a8 = 0;
  plStack_390 = (long *)0x0;
  uStack_398 = 0;
  plStack_388 = (long *)0x0;
  bStack_35e = puVar6[0x1a];
  bStack_35d = puVar6[0x1b];
  uStack_370 = 10;
  uStack_360 = 0x100;
  ppuStack_378 = &PTR_FUN_1108971a8;
  pppuStack_338 = &ppuStack_3f0;
  lStack_328 = 0;
  lStack_330 = 0;
  plStack_318 = (long *)0x0;
  uStack_320 = 0;
  plStack_310 = (long *)0x0;
  bStack_206 = (byte)uStack_276 | bStack_35e;
  bStack_205 = uStack_276._1_1_ & bStack_35d;
  uStack_218 = 4;
  uStack_208 = 0x100;
  ppuStack_220 = &PTR_SUB_1108629c8;
  pppuStack_1e8 = &ppuStack_290;
  pppuStack_1e0 = &ppuStack_378;
  plStack_1b8 = (long *)0x0;
  plStack_1c0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1d8 = 0;
  lStack_408 = 0;
  lStack_400 = 0;
  uStack_3f8 = 0;
  uStack_40c = 0;
  puStack_498 = &uStack_1b0;
  puStack_340 = puVar6;
  func_0x0001000e77a0(puStack_498,&ppuStack_220,&lStack_408,&uStack_40c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_408 != 0) {
    lStack_400 = lStack_408;
    __ZdlPv();
  }
  plVar2 = plStack_1b8;
  ppuStack_220 = &PTR_SUB_1108629c8;
  plStack_1b8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_1c0;
  plStack_1c0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_1d8 != 0) {
    __ZdlPv();
  }
  plVar2 = plStack_310;
  ppuStack_378 = &PTR_FUN_1108971a8;
  plStack_310 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_318;
  plStack_318 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_330 != 0) {
    lStack_328 = lStack_330;
    __ZdlPv();
  }
  plVar2 = plStack_388;
  ppuStack_3f0 = &PTR_DAT_110897278;
  plStack_388 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_390;
  plStack_390 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_3a8 != 0) {
    lStack_3a0 = lStack_3a8;
    __ZdlPv();
  }
  plVar2 = plStack_228;
  ppuStack_290 = &PTR_FUN_110897148;
  plStack_228 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_230;
  plStack_230 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_248 != 0) {
    lStack_240 = lStack_248;
    __ZdlPv();
  }
  plVar2 = plStack_2a0;
  ppuStack_308 = &PTR_DAT_110897208;
  plStack_2a0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_2a8;
  plStack_2a8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_2c0 != 0) {
    lStack_2b8 = lStack_2c0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_188);
  _objc_release(uStack_198);
  _objc_release(uStack_1a0);
  _objc_release(lVar4);
  puVar13 = puStack_498;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar13;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  puVar14 = (undefined8 *)0x0;
  while (puVar7 != (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
    puVar9 = puVar14;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(puVar13);
      }
      puVar12 = *(undefined8 **)((long)puVar15 * 8);
      puVar8 = PTR_PTR_1126bad20;
      FUN_105569d40(PTR_PTR_1126bad20);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = param_2;
      func_0x00010c25ed40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar8);
      if (puVar14 == (undefined8 *)0x0) {
        puVar14 = param_2;
        func_0x00010bf987e0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar14;
        func_0x00010bf51e00();
        lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
        uVar11 = *(undefined8 *)(lVar4 + 0x28);
        *(undefined8 **)(lVar4 + 0x28) = puVar15;
        _objc_release(uVar11);
        _objc_release(puVar14);
        func_0x00010beec4e0(param_2);
        goto LAB_10555e53c;
      }
      puVar15 = (undefined8 *)((long)puVar15 + 1);
      puVar9 = puVar14;
    } while (puVar7 != puVar15);
    puVar7 = puVar13;
    func_0x00010bf52a60();
  }
  _objc_release(puVar13);
  _objc_release(puStack_498);
  bVar1 = true;
LAB_10555e2f4:
  puStack_498 = *(undefined8 **)(param_1 + 0x30);
  _objc_retain(puStack_498);
  puVar7 = puStack_498;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  do {
    if (puVar7 == (undefined8 *)0x0) {
      _objc_release(puStack_498);
      puVar13 = (undefined8 *)PTR_PTR_1126bacc8;
      _objc_alloc(PTR_PTR_1126bacc8);
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfa3da0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c220(*(undefined8 *)(param_1 + 0x28));
      puVar9 = *(undefined8 **)(param_1 + 0x28);
      func_0x00010c14c200(puVar9);
      func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x00010c012800(puVar13);
      _objc_release(uVar11);
      puVar12 = (undefined8 *)0x0;
      puVar7 = puVar13;
      FUN_10556bc74(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puStack_498 = param_2;
      func_0x00010c25ed40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      if (puStack_498 == (undefined8 *)0x0) {
        puVar9 = param_2;
        func_0x00010bf987e0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar9;
        func_0x00010bf51e00();
        lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
        uVar11 = *(undefined8 *)(lVar4 + 0x28);
        *(undefined8 **)(lVar4 + 0x28) = puVar14;
        _objc_release(uVar11);
        _objc_release(puVar9);
        func_0x00010beec4e0(param_2);
      }
      _objc_release(puVar7);
LAB_10555e53c:
      _objc_release(puVar13);
LAB_10555e590:
      _objc_release(puStack_498);
      puVar14 = param_2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar13);
      _objc_release(0);
      _objc_release(param_2);
      __Unwind_Resume(puVar14);
      _objc_retain(puVar12[4]);
      _objc_retain(puVar12[5]);
      _objc_retain(puVar12[6]);
      _objc_retain(puVar12[7]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___Block_object_assign_11034bce0)(puVar14 + 8,puVar12[8],8);
      return;
    }
    puVar13 = (undefined8 *)0x0;
    puVar15 = puVar14;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(puStack_498);
      }
      puVar10 = (undefined8 *)PTR_PTR_1126bad20;
      puVar9 = *(undefined8 **)((long)puVar13 * 8);
      if (bVar1) {
        FUN_105551e10();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar9;
        FUN_105569330(puVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = param_2;
        func_0x00010c25ed40();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        FUN_105551e10();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = (undefined8 *)0x0;
        puVar10 = puVar9;
        FUN_105569db4();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = param_2;
        func_0x00010c25ed40();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar15);
      _objc_release(puVar10);
      _objc_release(puVar9);
      if (puVar14 == (undefined8 *)0x0) {
        puVar13 = param_2;
        func_0x00010bf987e0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010bf51e00();
        lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
        uVar11 = *(undefined8 *)(lVar4 + 0x28);
        *(undefined8 **)(lVar4 + 0x28) = puVar14;
        _objc_release(uVar11);
        _objc_release(puVar13);
        func_0x00010beec4e0(param_2);
        goto LAB_10555e590;
      }
      puVar13 = (undefined8 *)((long)puVar13 + 1);
      puVar15 = puVar14;
    } while (puVar7 != puVar13);
    puVar7 = puStack_498;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10555e7b4; end: 10555e843;  */

void FUN_10555e7b4(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  return;
}



/* Entry: 10555e844; end: 10555e8cf;  */

/* WARNING: Possible PIC construction at 0x00010555e8a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010555e8ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10555e844(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  if (param_2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    ppuVar2 = *(undefined ***)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110deab38;
      FUN_105558204(&PTR____CFConstantStringClassReference_110deab38);
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_completeWithError__1125ae8d0,ppuVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,0);
  return;
}



/* Entry: 10555e8d0; end: 10555ea67; -[CTPDocObjectsItemsPersistenceService _performDeleteFeedSyncDataForFeedTreeContext:completionBlock:] */

void FUN_10555e8d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1055598a0;
  uStack_60 = 0x1055598b0;
  uStack_58 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 10555ea68; end: 10555ee57;  */

void FUN_10555ea68(long param_1,undefined *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  int iVar9;
  undefined ***pppuVar10;
  undefined8 uVar11;
  long lVar12;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined4 uStack_234;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined **ppuStack_218;
  undefined4 uStack_210;
  undefined4 uStack_200;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined1 uStack_1a1;
  undefined **ppuStack_1a0;
  undefined4 uStack_198;
  undefined2 uStack_188;
  undefined2 uStack_186;
  undefined1 *puStack_168;
  undefined ***pppuStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bacc8);
  if (lVar2 == 0) {
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_130,lVar2);
  }
  puVar3 = &uStack_1a1;
  FUN_10556b404();
  uStack_210 = 0xf;
  uStack_200 = 0x100;
  uStack_1e8 = *(undefined1 *)(param_1 + 0x30);
  puVar13 = &UNK_110897268;
  uStack_220 = 0;
  ppuStack_218 = &PTR_DAT_110897278;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  lStack_1c8 = 0;
  lStack_1d0 = 0;
  plStack_1b8 = (long *)0x0;
  uStack_1c0 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_186 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_198 = 10;
  uStack_188 = 0x100;
  ppuStack_1a0 = &PTR_FUN_1108971a8;
  pppuStack_160 = &ppuStack_218;
  plStack_138 = (long *)0x0;
  lStack_150 = 0;
  lStack_158 = 0;
  plStack_140 = (long *)0x0;
  uStack_148 = 0;
  lStack_230 = 0;
  lStack_228 = 0;
  uStack_234 = 0;
  puVar4 = &uStack_130;
  pppuVar10 = &ppuStack_1a0;
  puStack_168 = puVar3;
  func_0x0001000e77a0(puVar4,pppuVar10,&lStack_230,&uStack_234);
  iVar9 = (int)pppuVar10;
  _objc_retainAutoreleasedReturnValue();
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  plVar1 = plStack_138;
  ppuStack_1a0 = &PTR_FUN_1108971a8;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_158 != 0) {
    lStack_150 = lStack_158;
    __ZdlPv();
  }
  plVar1 = plStack_1b0;
  ppuStack_218 = &PTR_DAT_110897278;
  plStack_1b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1b8;
  plStack_1b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1d0 != 0) {
    lStack_1c8 = lStack_1d0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_108);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(lVar2);
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (puVar5 != (undefined8 *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      puVar14 = (undefined8 *)0x0;
      puVar7 = puVar13;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar4);
        }
        iVar9 = (int)*(undefined8 *)((long)puVar14 * 8);
        puVar6 = PTR_PTR_1126bad30;
        FUN_10556bc00(PTR_PTR_1126bad30);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = param_2;
        func_0x00010c25ed40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar6);
        if (puVar13 == (undefined *)0x0) {
          puVar7 = param_2;
          func_0x00010bf987e0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar7;
          func_0x00010bf51e00();
          lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
          uVar11 = *(undefined8 *)(lVar2 + 0x28);
          *(undefined **)(lVar2 + 0x28) = puVar6;
          _objc_release(uVar11);
          _objc_release(puVar7);
          func_0x00010beec4e0(param_2);
          goto LAB_10555ed78;
        }
        puVar14 = (undefined8 *)((long)puVar14 + 1);
        puVar7 = puVar13;
      } while (puVar5 != puVar14);
      puVar5 = puVar4;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined8 *)0x0);
    _objc_release(puVar13);
  }
LAB_10555ed78:
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(param_2);
  __Unwind_Resume();
  if (iVar9 == 0) {
    lVar2 = *(long *)(puVar7 + 0x20);
    lVar12 = *(long *)(*(long *)(*(long *)(puVar7 + 0x28) + 8) + 0x28);
    if (lVar12 == 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110deab58;
      FUN_105558204(&PTR____CFConstantStringClassReference_110deab58);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x10);
    uVar11 = 0;
  }
  else {
    lVar2 = *(long *)(puVar7 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x10);
    uVar11 = 1;
    lVar12 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010555eea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar2,uVar11,lVar12);
  return;
}



/* Entry: 10555ee58; end: 10555eef3;  */

void FUN_10555ee58(long param_1,int param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    if (lVar4 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110deab58;
      FUN_105558204(&PTR____CFConstantStringClassReference_110deab58);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))(lVar1,0,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
    uVar3 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
    uVar3 = 1;
    lVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010555eea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar1,uVar3,lVar4);
  return;
}



/* Entry: 10555eef4; end: 10555f0bf; -[CTPDocObjectsItemsPersistenceService _performDeleteFeedSyncDataForFeedId:completionBlock:] */

void FUN_10555eef4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1055598a0;
  uStack_60 = 0x1055598b0;
  uStack_58 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10555f0c0; end: 10555f5c7;  */

void FUN_10555f0c0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uStack_30c;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined1 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  long lStack_140;
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
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bacc8);
  if (lVar2 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,lVar2);
  }
  puVar3 = &uStack_191;
  FUN_10556b2b8();
  uStack_1d8 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c14c220();
  uStack_200 = 0xf;
  pppuStack_150 = &ppuStack_208;
  uStack_1f0 = 0x100;
  ppuStack_208 = &PTR_DAT_110897208;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1b8 = 0;
  lStack_1c0 = 0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_FUN_110897148;
  lStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar4 = &uStack_279;
  puStack_158 = puVar3;
  FUN_10556b404();
  uStack_2c0 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c14c200();
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  ppuStack_2f0 = &PTR_DAT_110897278;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  lStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar4[0x1a];
  bStack_25d = puVar4[0x1b];
  uStack_270 = 10;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_FUN_1108971a8;
  lStack_228 = 0;
  lStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  plStack_210 = (long *)0x0;
  bStack_106 = (byte)uStack_176 | bStack_25e;
  bStack_105 = uStack_176._1_1_ & bStack_25d;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  pppuStack_e0 = &ppuStack_278;
  plStack_b8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  lStack_308 = 0;
  lStack_300 = 0;
  uStack_2f8 = 0;
  uStack_30c = 0;
  puVar5 = &uStack_b0;
  puStack_240 = puVar4;
  pppuStack_238 = &ppuStack_2f0;
  func_0x0001000e77a0(puVar5,&ppuStack_120,&lStack_308,&uStack_30c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_308 != 0) {
    lStack_300 = lStack_308;
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
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_FUN_1108971a8;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_DAT_110897278;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a8 != 0) {
    lStack_2a0 = lStack_2a8;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_FUN_110897148;
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
    lStack_140 = lStack_148;
    __ZdlPv();
  }
  plVar1 = plStack_1a0;
  ppuStack_208 = &PTR_DAT_110897208;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1c0 != 0) {
    lStack_1b8 = lStack_1c0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(lVar2);
  puVar6 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR_PTR_1126bad30;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6 = puVar5;
    func_0x00010bfb1920(puVar5);
    _objc_retainAutoreleasedReturnValue();
    FUN_10556bc00(puVar7,puVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c25ed40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    if (lVar2 != 0) goto LAB_10555f514;
    lVar2 = param_2;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010bf51e00();
    lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar9 = *(undefined8 *)(lVar10 + 0x28);
    *(long *)(lVar10 + 0x28) = lVar8;
    _objc_release(uVar9);
    _objc_release(lVar2);
    func_0x00010beec4e0(param_2);
  }
  lVar2 = 0;
LAB_10555f514:
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 10555f5c8; end: 10555f663;  */

void FUN_10555f5c8(long param_1,int param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    if (lVar4 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110deab58;
      FUN_105558204(&PTR____CFConstantStringClassReference_110deab58);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))(lVar1,0,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
    uVar3 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
    uVar3 = 1;
    lVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010555f610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar1,uVar3,lVar4);
  return;
}



/* Entry: 10555f664; end: 10555f8f3; -[CTPDocObjectsItemsPersistenceService _performUpsertItemsForFeedId:upsertedItems:deletedItemIds:updateFeedSyncMetadata:promise:startTime:] */

void FUN_10555f664(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if ((lVar1 == 0) && (lVar1 = param_5, func_0x00010bf529e0(), lVar1 == 0)) {
    func_0x00010bf43d60(param_7);
  }
  else {
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_1055598a0;
    uStack_80 = 0x1055598b0;
    uStack_78 = 0;
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_7);
    func_0x00010c0f8500(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10555f8f4; end: 10555f9db;  */

void FUN_10555f8f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c266cc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010c0c0800(uVar1);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10555f9dc; end: 10555fa4b;  */

void FUN_10555f9dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  func_0x00010beec4e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10555fa4c; end: 10555fb1b;  */

/* WARNING: Possible PIC construction at 0x00010555faf0: Changing call to branch */

void FUN_10555fa4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  if ((int)param_2 == 0) {
    ppuVar2 = *(undefined ***)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110deab78;
      FUN_105558204(&PTR____CFConstantStringClassReference_110deab78);
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_completeWithError__1125ae8d0,ppuVar2);
    return;
  }
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20),param_2,0);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10555fb1c; end: 10555fce7; -[CTPDocObjectsItemsPersistenceService _performDeleteItemsWithCtId:completionBlock:] */

void FUN_10555fb1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1055598a0;
  uStack_60 = 0x1055598b0;
  uStack_58 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10555fce8; end: 105560093;  */

void FUN_10555fce8(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  int iVar9;
  undefined ***pppuVar10;
  undefined8 uVar11;
  code *UNRECOVERED_JUMPTABLE;
  long lVar12;
  undefined8 *puVar13;
  long unaff_x24;
  undefined4 uStack_1dc;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [31];
  undefined1 uStack_1a1;
  undefined **appuStack_1a0 [9];
  undefined1 auStack_158 [24];
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bacd8);
  if (lVar2 == 0) {
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_130,lVar2);
  }
  puVar3 = &uStack_1a1;
  FUN_105568934();
  uStack_78 = *(undefined8 *)(param_1 + 0x28);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  FUN_105559f88(auStack_1c0,puVar4);
  func_0x0001004c2e3c(appuStack_1a0,0xc,puVar3,auStack_1c0);
  puStack_1d8 = (undefined1 *)0x0;
  puStack_1d0 = (undefined1 *)0x0;
  uStack_1c8 = 0;
  uStack_1dc = 0;
  puVar5 = &uStack_130;
  pppuVar10 = appuStack_1a0;
  func_0x0001000e77a0(puVar5,pppuVar10,&puStack_1d8,&uStack_1dc);
  iVar9 = (int)pppuVar10;
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1d8 != (undefined1 *)0x0) {
    puStack_1d0 = puStack_1d8;
    __ZdlPv();
  }
  plVar1 = plStack_138;
  appuStack_1a0[0] = &PTR_FUN_110862700;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1d8 = auStack_158;
  func_0x000100105004(&puStack_1d8);
  puStack_1d8 = auStack_1c0;
  func_0x000100105004(&puStack_1d8);
  _objc_release(puVar4);
  func_0x0001000e76e0(&uStack_108);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(lVar2);
  puVar6 = puVar5;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (puVar7 != (undefined8 *)0x0) {
    unaff_x24 = 0;
    do {
      puVar13 = (undefined8 *)0x0;
      lVar12 = unaff_x24;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar6);
        }
        iVar9 = (int)*(undefined8 *)((long)puVar13 * 8);
        puVar4 = PTR_PTR_1126bad20;
        FUN_105569d40(PTR_PTR_1126bad20);
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = param_2;
        func_0x00010c25ed40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar12);
        _objc_release(puVar4);
        if (unaff_x24 == 0) {
          lVar2 = param_2;
          func_0x00010bf987e0();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 8);
          uVar11 = *(undefined8 *)(lVar12 + 0x28);
          *(long *)(lVar12 + 0x28) = lVar2;
          _objc_release(uVar11);
          func_0x00010beec4e0(param_2);
          goto LAB_10555ffac;
        }
        puVar13 = (undefined8 *)((long)puVar13 + 1);
        lVar12 = unaff_x24;
      } while (puVar7 != puVar13);
      puVar7 = puVar6;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined8 *)0x0);
    _objc_release(unaff_x24);
  }
LAB_10555ffac:
  _objc_release(puVar6);
  _objc_release(puVar5);
  lVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x24);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_2);
  __Unwind_Resume();
  lVar12 = *(long *)(lVar2 + 0x20);
  if (lVar12 != 0) {
    if (iVar9 == 0) {
      lVar2 = *(long *)(*(long *)(*(long *)(lVar2 + 0x28) + 8) + 0x28);
      if (lVar2 == 0) {
        ppuVar8 = &PTR____CFConstantStringClassReference_110deab58;
        FUN_105558204(&PTR____CFConstantStringClassReference_110deab58);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar12 + 0x10))(lVar12,0,ppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x10);
      uVar11 = 0;
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x10);
      uVar11 = 1;
      lVar2 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0001055600f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(lVar12,uVar11,lVar2);
    return;
  }
  return;
}



/* Entry: 105560094; end: 105560143;  */

void FUN_105560094(long param_1,int param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    return;
  }
  if (param_2 == 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    if (lVar3 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110deab58;
      FUN_105558204(&PTR____CFConstantStringClassReference_110deab58);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,0,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x10);
    uVar2 = 0;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x10);
    uVar2 = 1;
    lVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001055600f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar4,uVar2,lVar3);
  return;
}



/* Entry: 105560144; end: 105560293; -[CTPDocObjectsItemsPersistenceService _performDeleteAllItemsWithPromise:] */

void FUN_105560144(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105560294;
  puStack_58 = &UNK_110897108;
  lStack_50 = param_1;
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = param_3;
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1055608dc;
  puStack_80 = &UNK_110896ce8;
  _objc_retain(param_3);
  uStack_78 = param_3;
  func_0x00010c0f8500(uVar2,param_2,&puStack_70,uVar3,&puStack_98);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_78);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105560294; end: 1055608db;  */

void FUN_105560294(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  int iVar8;
  undefined ***pppuVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined4 uStack_23c;
  long lStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined **ppuStack_220;
  undefined4 uStack_218;
  undefined4 uStack_208;
  undefined1 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bacd8);
  if (lVar2 == 0) {
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1b0,lVar2);
  }
  uStack_218 = 0x10;
  uStack_208 = 0x100;
  uStack_1f0 = 1;
  uStack_228 = 0;
  ppuStack_220 = &PTR_SUB_1108629c8;
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  uStack_1d0 = 0;
  lStack_1d8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1c8 = 0;
  plStack_1b8 = (long *)0x0;
  lStack_238 = 0;
  lStack_230 = 0;
  uStack_23c = 0;
  puVar3 = &uStack_1b0;
  func_0x0001000e77a0(puVar3,&ppuStack_220,&lStack_238,&uStack_23c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_238 != 0) {
    lStack_230 = lStack_238;
    __ZdlPv();
  }
  plVar1 = plStack_1b8;
  ppuStack_220 = &PTR_SUB_1108629c8;
  plStack_1b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1c0;
  plStack_1c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1d8 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_188);
  _objc_release(uStack_198);
  _objc_release(uStack_1a0);
  _objc_release(lVar2);
  puVar13 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar13;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar12 = (undefined8 *)0x0;
  while (puVar4 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    puVar6 = puVar12;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar13);
      }
      iVar8 = (int)*(undefined8 *)((long)puVar11 * 8);
      puVar5 = PTR_PTR_1126bad20;
      FUN_105569d40(PTR_PTR_1126bad20);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = param_2;
      func_0x00010c25ed40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      if (puVar12 == (undefined8 *)0x0) {
        uVar10 = *(undefined8 *)(param_1 + 0x28);
        puVar12 = param_2;
        func_0x00010bf987e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf43ca0(uVar10);
        _objc_release(puVar12);
        func_0x00010beec4e0(param_2);
        puVar11 = puVar13;
        goto LAB_105560774;
      }
      puVar11 = (undefined8 *)((long)puVar11 + 1);
      puVar6 = puVar12;
    } while (puVar4 != puVar11);
    puVar4 = puVar13;
    func_0x00010bf52a60();
  }
  _objc_release(puVar13);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bacc8);
  if (lVar2 == 0) {
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1b0,lVar2);
  }
  uStack_218 = 0x10;
  uStack_208 = 0x100;
  uStack_1f0 = 1;
  uStack_228 = 0;
  ppuStack_220 = &PTR_SUB_1108629c8;
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  uStack_1d0 = 0;
  lStack_1d8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1c8 = 0;
  plStack_1b8 = (long *)0x0;
  lStack_238 = 0;
  lStack_230 = 0;
  uStack_23c = 0;
  puVar11 = &uStack_1b0;
  pppuVar9 = &ppuStack_220;
  func_0x0001000e77a0(puVar11,pppuVar9,&lStack_238,&uStack_23c);
  iVar8 = (int)pppuVar9;
  _objc_retainAutoreleasedReturnValue();
  if (lStack_238 != 0) {
    lStack_230 = lStack_238;
    __ZdlPv();
  }
  plVar1 = plStack_1b8;
  ppuStack_220 = &PTR_SUB_1108629c8;
  plStack_1b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1c0;
  plStack_1c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1d8 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_188);
  _objc_release(uStack_198);
  _objc_release(uStack_1a0);
  _objc_release(lVar2);
  puVar4 = puVar11;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar13 = puVar12;
  do {
    if (puVar6 == (undefined8 *)0x0) {
LAB_105560764:
      _objc_release(puVar4);
      _objc_release(puVar11);
LAB_105560774:
      _objc_release(puVar13);
      _objc_release(puVar3);
      puVar12 = param_2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(puVar4);
      _objc_release(puVar11);
      _objc_release(puVar13);
      _objc_release(puVar3);
      _objc_release(param_2);
      __Unwind_Resume();
      uVar10 = puVar12[4];
      if (iVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(uVar10,PTR_s_completeWithValue__1125ae900,0);
        return;
      }
      ppuVar7 = &PTR____CFConstantStringClassReference_110deab98;
      FUN_105558204(&PTR____CFConstantStringClassReference_110deab98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
      return;
    }
    puVar12 = (undefined8 *)0x0;
    puVar14 = puVar13;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar4);
      }
      iVar8 = (int)*(undefined8 *)((long)puVar12 * 8);
      puVar5 = PTR_PTR_1126bad30;
      FUN_10556bc00(PTR_PTR_1126bad30);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = param_2;
      func_0x00010c25ed40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      _objc_release(puVar5);
      if (puVar13 == (undefined8 *)0x0) {
        uVar10 = *(undefined8 *)(param_1 + 0x28);
        puVar12 = param_2;
        func_0x00010bf987e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf43ca0(uVar10);
        _objc_release(puVar12);
        puVar13 = (undefined8 *)0x0;
        func_0x00010beec4e0(param_2);
        goto LAB_105560764;
      }
      puVar12 = (undefined8 *)((long)puVar12 + 1);
      puVar14 = puVar13;
    } while (puVar6 != puVar12);
    puVar6 = puVar4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1055608dc; end: 10556094b;  */

void FUN_1055608dc(long param_1,int param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_completeWithValue__1125ae900,0);
    return;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110deab98;
  FUN_105558204(&PTR____CFConstantStringClassReference_110deab98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 10556094c; end: 1055609f7; -[CTPDocObjectsItemsPersistenceService .cxx_destruct] */

void FUN_10556094c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055609f8; end: 1055610b3;  */

void FUN_1055609f8(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000105561058;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000105561078;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000105561078;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000105560fec:
                    /* WARNING: Could not recover jumptable at 0x000105561010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000105560fec;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)));
      goto code_r0x000105561078;
    }
    goto code_r0x00010556106c;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x00010556106c;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)));
    goto code_r0x000105561078;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000105561078;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_105561088;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000105561058:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x00010556106c:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000105561078:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_105561088:
  return;
}



/* Entry: 1055610b4; end: 10556113b;  */

void FUN_1055610b4(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000105561128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 10556113c; end: 105561273;  */

void FUN_10556113c(long param_1,undefined8 param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  char *pcVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      pcVar1 = *(char **)(param_1 + 0x50);
      for (pcVar5 = *(char **)(param_1 + 0x48); pcVar5 != pcVar1; pcVar5 = pcVar5 + 1) {
        cVar3 = *pcVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,(long)cVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,(long)*(char *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000105561268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 105561274; end: 105561323;  */

int FUN_105561274(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    cVar3 = '\0';
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    cVar3 = *(char *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    lVar4 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      lVar4 = param_2;
    }
    (**(code **)(param_1 + lVar1))(lVar4,param_4);
    cVar3 = (char)lVar4;
  }
  else {
    cVar3 = '\0';
  }
  _objc_release(param_3);
  return (int)cVar3;
}



/* Entry: 105561324; end: 10556135f;  */

undefined8 FUN_105561324(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_105561360(uVar1,param_1);
  return uVar1;
}



/* Entry: 105561360; end: 10556150b;  */

void FUN_105561360(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x0001055615a0(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x00010556150c(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_10556144c:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_1055616a0(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_10556144c;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110897208;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 10556150c; end: 10556169f;  */

undefined8 * FUN_10556150c(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_DAT_110897208;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1055616a0; end: 105561733;  */

undefined8 * FUN_1055616a0(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_110897208;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_105561734(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 105561734; end: 1055617ab;  */

void FUN_105561734(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1055617ac(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1055617ac; end: 1055617e7;  */

void FUN_1055617ac(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  if (-1 < param_2) {
    lVar1 = param_2;
    __Znwm();
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2;
    return;
  }
  FUN_1055617e8();
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar2 = &PTR_FUN_110897148;
  plVar3 = (long *)puVar2[0xd];
  puVar2[0xd] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)puVar2[0xc];
  puVar2[0xc] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (puVar2[9] != 0) {
    puVar2[10] = puVar2[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 1055617e8; end: 1055617fb;  */

void FUN_1055617e8(void)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar1 = &PTR_FUN_110897148;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1055617fc; end: 105561867;  */

void FUN_1055617fc(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110897148;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 105561868; end: 105561f23;  */

void FUN_105561868(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000105561ec8;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000105561ee8;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000105561ee8;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000105561e5c:
                    /* WARNING: Could not recover jumptable at 0x000105561e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000105561e5c;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)));
      goto code_r0x000105561ee8;
    }
    goto code_r0x000105561edc;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000105561edc;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)));
    goto code_r0x000105561ee8;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000105561ee8;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_105561ef8;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000105561ec8:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000105561edc:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000105561ee8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_105561ef8:
  return;
}



/* Entry: 105561f24; end: 105561fab;  */

void FUN_105561f24(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000105561f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 105561fac; end: 1055620e3;  */

void FUN_105561fac(long param_1,undefined8 param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  char *pcVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      pcVar1 = *(char **)(param_1 + 0x50);
      for (pcVar5 = *(char **)(param_1 + 0x48); pcVar5 != pcVar1; pcVar5 = pcVar5 + 1) {
        cVar3 = *pcVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,(long)cVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001055620d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1055620e4; end: 1055622f7;  */

uint FUN_1055620e4(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  byte *pbVar8;
  uint uVar9;
  long *plVar10;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain(param_3);
  uVar9 = *(uint *)(param_1 + 8);
  if ((int)uVar9 < 0xe) {
    if (1 < uVar9 - 1) {
      if (uVar9 - 0xc < 2) {
        plVar10 = *(long **)(param_1 + 0x38);
        _objc_retain(param_3);
        (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,param_4);
        pbVar2 = *(byte **)(param_1 + 0x48);
        pbVar3 = *(byte **)(param_1 + 0x50);
        if (uVar9 == 0xc) {
          if (pbVar2 == pbVar3) {
            uVar9 = 0;
          }
          else {
            do {
              pbVar8 = pbVar2 + 1;
              bVar5 = ((uint)plVar10 & 0xff) == (uint)*pbVar2;
              uVar9 = (uint)bVar5;
              pbVar2 = pbVar8;
            } while (!bVar5 && pbVar8 != pbVar3);
          }
        }
        else if (pbVar2 == pbVar3) {
          uVar9 = 1;
        }
        else {
          do {
            pbVar8 = pbVar2 + 1;
            bVar5 = ((uint)plVar10 & 0xff) != (uint)*pbVar2;
            uVar9 = (uint)bVar5;
            pbVar2 = pbVar8;
          } while (bVar5 && pbVar8 != pbVar3);
        }
        _objc_release(param_3);
        goto LAB_1055622d0;
      }
      goto LAB_105562218;
    }
    *param_4 = 0;
    bStack_43 = 0;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
              (*(long **)(param_1 + 0x38),param_2,param_3,&bStack_43);
    bVar5 = uVar9 != 1;
    bVar4 = bStack_43;
  }
  else {
    if (uVar9 - 0xf < 2) {
      *param_4 = 0;
      uVar9 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_1055622d0;
    }
    if (uVar9 == 0xe) {
      lVar1 = 0x28;
      lVar6 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar6 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar6,param_4);
      uVar9 = (uint)lVar6;
      goto LAB_1055622d0;
    }
LAB_105562218:
    if ((uVar9 & 0xfffffffe) != 10) {
      uVar9 = 0;
      goto LAB_1055622d0;
    }
    plVar10 = *(long **)(param_1 + 0x38);
    plVar7 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,&bStack_41);
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    bVar5 = uVar9 == 0xb;
    bVar4 = (int)plVar10 == (int)plVar7;
  }
  uVar9 = (uint)(bVar5 ^ bVar4);
LAB_1055622d0:
  _objc_release(param_3);
  return uVar9 & 1;
}



/* Entry: 1055622f8; end: 10556256f;  */

undefined8 * FUN_1055622f8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  iVar10 = *(int *)(param_1 + 8);
  if (0xb < iVar10) {
    if (iVar10 < 0xf) {
      if (iVar10 - 0xcU < 2) {
        plVar7 = *(long **)(param_1 + 0x38);
        (**(code **)(*plVar7 + 0x30))();
        uVar5 = *(undefined2 *)((long)plVar7 + 0x19);
        uVar3 = *(undefined1 *)((long)plVar7 + 0x1b);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(puVar6 + 3) = 0;
        *(undefined2 *)((long)puVar6 + 0x19) = uVar5;
        *(undefined1 *)((long)puVar6 + 0x1b) = uVar3;
        *puVar6 = &PTR_FUN_110897148;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        FUN_105561734(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1);
        puVar6[0xc] = plVar7;
        puVar6[0xd] = 0;
        return puVar6;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      bVar9 = *(byte *)(param_1 + 0x18);
      bVar12 = *(byte *)(param_1 + 0x19);
      *(undefined4 *)(puVar6 + 1) = 0xe;
      puVar6[2] = uVar11;
      *(byte *)(puVar6 + 3) = bVar9;
      *(byte *)((long)puVar6 + 0x19) = bVar12;
      *(byte *)((long)puVar6 + 0x1a) = bVar12 ^ 1;
      *(byte *)((long)puVar6 + 0x1b) = (bVar12 | bVar9) ^ 1;
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      puVar6[5] = *(undefined8 *)(param_1 + 0x28);
      puVar6[4] = uVar11;
    }
    else {
      if (iVar10 != 0xf) {
        iVar10 = 0x10;
      }
      *(int *)(puVar6 + 1) = iVar10;
      *(undefined4 *)(puVar6 + 3) = 0x100;
      *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_1 + 0x30);
    }
    *puVar6 = &PTR_FUN_110897148;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    return puVar6;
  }
  if (8 < iVar10 - 3U) {
    plVar7 = *(long **)(param_1 + 0x38);
    (**(code **)(*plVar7 + 0x30))();
    uVar3 = *(undefined1 *)((long)plVar7 + 0x19);
    uVar4 = *(undefined1 *)((long)plVar7 + 0x1a);
    if (*(int *)(param_1 + 8) == 0) {
      bVar9 = 1;
    }
    else {
      bVar9 = *(byte *)((long)plVar7 + 0x1b);
    }
    *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined1 *)((long)puVar6 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar6 + 0x1a) = uVar4;
    *(byte *)((long)puVar6 + 0x1b) = bVar9 & 1;
    *puVar6 = &PTR_FUN_110897148;
    puVar6[7] = plVar7;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xc] = plVar7;
    return puVar6;
  }
  plVar7 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar7 + 0x30))();
  plVar8 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar8 + 0x30))();
  if ((*(byte *)((long)plVar7 + 0x19) & 1) == 0) {
    bVar9 = *(byte *)((long)plVar8 + 0x19);
  }
  else {
    bVar9 = 1;
  }
  if ((*(byte *)((long)plVar7 + 0x1a) & 1) == 0) {
    bVar12 = *(byte *)((long)plVar8 + 0x1a);
  }
  else {
    bVar12 = 1;
  }
  if (*(int *)(param_1 + 8) == 4) {
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) == 0) {
      bVar13 = 0;
      goto LAB_10556241c;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_10556241c;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_10556241c:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_FUN_110897148;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 105562570; end: 1055625df;  */

void FUN_105562570(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_110897278;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1055625e0; end: 105562c9b;  */

void FUN_1055625e0(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000105562c40;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000105562c60;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000105562c60;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000105562bd4:
                    /* WARNING: Could not recover jumptable at 0x000105562bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000105562bd4;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)));
      goto code_r0x000105562c60;
    }
    goto code_r0x000105562c54;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000105562c54;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)));
    goto code_r0x000105562c60;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000105562c60;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_105562c70;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000105562c40:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000105562c54:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000105562c60:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_105562c70:
  return;
}



/* Entry: 105562c9c; end: 105562d23;  */

void FUN_105562c9c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000105562d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 105562d24; end: 105562e5b;  */

void FUN_105562d24(long param_1,undefined8 param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  char *pcVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      pcVar1 = *(char **)(param_1 + 0x50);
      for (pcVar5 = *(char **)(param_1 + 0x48); pcVar5 != pcVar1; pcVar5 = pcVar5 + 1) {
        cVar3 = *pcVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,(long)cVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,(long)*(char *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000105562e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 105562e5c; end: 105562f0b;  */

int FUN_105562e5c(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    cVar3 = '\0';
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    cVar3 = *(char *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    lVar4 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      lVar4 = param_2;
    }
    (**(code **)(param_1 + lVar1))(lVar4,param_4);
    cVar3 = (char)lVar4;
  }
  else {
    cVar3 = '\0';
  }
  _objc_release(param_3);
  return (int)cVar3;
}



/* Entry: 105562f0c; end: 105562f47;  */

undefined8 FUN_105562f0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_105562f48(uVar1,param_1);
  return uVar1;
}



/* Entry: 105562f48; end: 1055630f3;  */

void FUN_105562f48(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x000105563188(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x0001055630f4(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_105563034:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_105563288(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_105563034;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110897278;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 1055630f4; end: 105563287;  */

undefined8 * FUN_1055630f4(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_DAT_110897278;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 105563288; end: 10556331b;  */

undefined8 * FUN_105563288(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_110897278;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_10556331c(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 10556331c; end: 105563393;  */

void FUN_10556331c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_105563394(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 105563394; end: 1055633cf;  */

void FUN_105563394(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  if (-1 < param_2) {
    lVar1 = param_2;
    __Znwm();
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2;
    return;
  }
  FUN_1055633d0();
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar2 = &PTR_FUN_1108971a8;
  plVar3 = (long *)puVar2[0xd];
  puVar2[0xd] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)puVar2[0xc];
  puVar2[0xc] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (puVar2[9] != 0) {
    puVar2[10] = puVar2[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 1055633d0; end: 1055633e3;  */

void FUN_1055633d0(void)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar1 = &PTR_FUN_1108971a8;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1055633e4; end: 10556344f;  */

void FUN_1055633e4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1108971a8;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 105563450; end: 105563b0b;  */

void FUN_105563450(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000105563ab0;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000105563ad0;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000105563ad0;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000105563a44:
                    /* WARNING: Could not recover jumptable at 0x000105563a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000105563a44;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)));
      goto code_r0x000105563ad0;
    }
    goto code_r0x000105563ac4;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000105563ac4;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)));
    goto code_r0x000105563ad0;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000105563ad0;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_105563ae0;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000105563ab0:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000105563ac4:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000105563ad0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_105563ae0:
  return;
}



/* Entry: 105563b0c; end: 105563b93;  */

void FUN_105563b0c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000105563b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 105563b94; end: 105563ccb;  */

void FUN_105563b94(long param_1,undefined8 param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  char *pcVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      pcVar1 = *(char **)(param_1 + 0x50);
      for (pcVar5 = *(char **)(param_1 + 0x48); pcVar5 != pcVar1; pcVar5 = pcVar5 + 1) {
        cVar3 = *pcVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,(long)cVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000105563cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 105563ccc; end: 105563edf;  */

uint FUN_105563ccc(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  byte *pbVar8;
  uint uVar9;
  long *plVar10;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain(param_3);
  uVar9 = *(uint *)(param_1 + 8);
  if ((int)uVar9 < 0xe) {
    if (1 < uVar9 - 1) {
      if (uVar9 - 0xc < 2) {
        plVar10 = *(long **)(param_1 + 0x38);
        _objc_retain(param_3);
        (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,param_4);
        pbVar2 = *(byte **)(param_1 + 0x48);
        pbVar3 = *(byte **)(param_1 + 0x50);
        if (uVar9 == 0xc) {
          if (pbVar2 == pbVar3) {
            uVar9 = 0;
          }
          else {
            do {
              pbVar8 = pbVar2 + 1;
              bVar5 = ((uint)plVar10 & 0xff) == (uint)*pbVar2;
              uVar9 = (uint)bVar5;
              pbVar2 = pbVar8;
            } while (!bVar5 && pbVar8 != pbVar3);
          }
        }
        else if (pbVar2 == pbVar3) {
          uVar9 = 1;
        }
        else {
          do {
            pbVar8 = pbVar2 + 1;
            bVar5 = ((uint)plVar10 & 0xff) != (uint)*pbVar2;
            uVar9 = (uint)bVar5;
            pbVar2 = pbVar8;
          } while (bVar5 && pbVar8 != pbVar3);
        }
        _objc_release(param_3);
        goto LAB_105563eb8;
      }
      goto LAB_105563e00;
    }
    *param_4 = 0;
    bStack_43 = 0;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
              (*(long **)(param_1 + 0x38),param_2,param_3,&bStack_43);
    bVar5 = uVar9 != 1;
    bVar4 = bStack_43;
  }
  else {
    if (uVar9 - 0xf < 2) {
      *param_4 = 0;
      uVar9 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_105563eb8;
    }
    if (uVar9 == 0xe) {
      lVar1 = 0x28;
      lVar6 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar6 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar6,param_4);
      uVar9 = (uint)lVar6;
      goto LAB_105563eb8;
    }
LAB_105563e00:
    if ((uVar9 & 0xfffffffe) != 10) {
      uVar9 = 0;
      goto LAB_105563eb8;
    }
    plVar10 = *(long **)(param_1 + 0x38);
    plVar7 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,&bStack_41);
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    bVar5 = uVar9 == 0xb;
    bVar4 = (int)plVar10 == (int)plVar7;
  }
  uVar9 = (uint)(bVar5 ^ bVar4);
LAB_105563eb8:
  _objc_release(param_3);
  return uVar9 & 1;
}



/* Entry: 105563ee0; end: 105564157;  */

undefined8 * FUN_105563ee0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  iVar10 = *(int *)(param_1 + 8);
  if (0xb < iVar10) {
    if (iVar10 < 0xf) {
      if (iVar10 - 0xcU < 2) {
        plVar7 = *(long **)(param_1 + 0x38);
        (**(code **)(*plVar7 + 0x30))();
        uVar5 = *(undefined2 *)((long)plVar7 + 0x19);
        uVar3 = *(undefined1 *)((long)plVar7 + 0x1b);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(puVar6 + 3) = 0;
        *(undefined2 *)((long)puVar6 + 0x19) = uVar5;
        *(undefined1 *)((long)puVar6 + 0x1b) = uVar3;
        *puVar6 = &PTR_FUN_1108971a8;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        FUN_10556331c(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1);
        puVar6[0xc] = plVar7;
        puVar6[0xd] = 0;
        return puVar6;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      bVar9 = *(byte *)(param_1 + 0x18);
      bVar12 = *(byte *)(param_1 + 0x19);
      *(undefined4 *)(puVar6 + 1) = 0xe;
      puVar6[2] = uVar11;
      *(byte *)(puVar6 + 3) = bVar9;
      *(byte *)((long)puVar6 + 0x19) = bVar12;
      *(byte *)((long)puVar6 + 0x1a) = bVar12 ^ 1;
      *(byte *)((long)puVar6 + 0x1b) = (bVar12 | bVar9) ^ 1;
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      puVar6[5] = *(undefined8 *)(param_1 + 0x28);
      puVar6[4] = uVar11;
    }
    else {
      if (iVar10 != 0xf) {
        iVar10 = 0x10;
      }
      *(int *)(puVar6 + 1) = iVar10;
      *(undefined4 *)(puVar6 + 3) = 0x100;
      *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_1 + 0x30);
    }
    *puVar6 = &PTR_FUN_1108971a8;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    return puVar6;
  }
  if (8 < iVar10 - 3U) {
    plVar7 = *(long **)(param_1 + 0x38);
    (**(code **)(*plVar7 + 0x30))();
    uVar3 = *(undefined1 *)((long)plVar7 + 0x19);
    uVar4 = *(undefined1 *)((long)plVar7 + 0x1a);
    if (*(int *)(param_1 + 8) == 0) {
      bVar9 = 1;
    }
    else {
      bVar9 = *(byte *)((long)plVar7 + 0x1b);
    }
    *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined1 *)((long)puVar6 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar6 + 0x1a) = uVar4;
    *(byte *)((long)puVar6 + 0x1b) = bVar9 & 1;
    *puVar6 = &PTR_FUN_1108971a8;
    puVar6[7] = plVar7;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xc] = plVar7;
    return puVar6;
  }
  plVar7 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar7 + 0x30))();
  plVar8 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar8 + 0x30))();
  if ((*(byte *)((long)plVar7 + 0x19) & 1) == 0) {
    bVar9 = *(byte *)((long)plVar8 + 0x19);
  }
  else {
    bVar9 = 1;
  }
  if ((*(byte *)((long)plVar7 + 0x1a) & 1) == 0) {
    bVar12 = *(byte *)((long)plVar8 + 0x1a);
  }
  else {
    bVar12 = 1;
  }
  if (*(int *)(param_1 + 8) == 4) {
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) == 0) {
      bVar13 = 0;
      goto LAB_105564004;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_105564004;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_105564004:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_FUN_1108971a8;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 105564158; end: 10556422f; -[CTPDocObjectsSearchSectionPersistenceService initWithDocObjectContext:] */

undefined1 * FUN_105564158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8f48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105564230; end: 105564387; -[CTPDocObjectsSearchSectionPersistenceService searchSectionForPersistedSection:searchTerm:] */

void FUN_105564230(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_3;
  _objc_retain(param_4);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105564388; end: 10556451f;  */

void FUN_105564388(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  uVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010be13c40(uVar1,param_2,*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain();
    if (uVar2 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = PTR_PTR_1126bad40;
      _objc_alloc(PTR_PTR_1126bad40);
      uVar3 = uVar2;
      func_0x00010c1554e0(uVar2);
      uVar4 = uVar2;
      func_0x00010c26b3c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c08ac80(uVar2);
      uVar6 = uVar2;
      func_0x00010bfd4a60(uVar2);
      uVar7 = uVar2;
      func_0x00010bfd5000(uVar2);
      uVar8 = uVar2;
      func_0x00010bf63640(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c042da0(puVar10,param_2,uVar3 & 0xffffffff,uVar4,uVar5,uVar6,uVar7,uVar8);
      _objc_release(uVar8);
      _objc_release(uVar4);
    }
    _objc_release(uVar2);
    func_0x00010bf43d60(uVar9,param_2,puVar10);
    _objc_release(puVar10);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105564520; end: 105564667; -[CTPDocObjectsSearchSectionPersistenceService upsertSearchSection:] */

void FUN_105564520(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105564668; end: 1055646b7;  */

void FUN_105564668(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bec4160(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1055646b8; end: 1055648bf; -[CTPDocObjectsSearchSectionPersistenceService _storeSearchSection:promise:] */

void FUN_1055646b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1055648c0;
  uStack_70 = 0x1055648d0;
  uStack_68 = 0;
  _objc_initWeak(auStack_98,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a0,auStack_98);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055648c0; end: 1055648d7;  */

void FUN_1055648c0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1055648d8; end: 1055649cb;  */

void FUN_1055648d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    _objc_retain(param_2);
    func_0x00010c0f8240(uVar2);
    _objc_release(param_2);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055649cc; end: 105564cb3;  */

void FUN_1055649cc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  
  func_0x00010c1554e0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c26b3c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be13c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    lVar8 = 0;
LAB_105564aa0:
    puVar3 = PTR_PTR_1126bad48;
    lVar9 = *(long *)(param_1 + 0x30);
    lVar10 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar10);
    if (lVar10 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR_PTR_1126bad38;
      _objc_alloc();
      func_0x00010c1554e0(lVar10);
      lVar5 = lVar10;
      func_0x00010c26b3c0(lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08a800(lVar10);
      func_0x00010bfd4a60(lVar10);
      func_0x00010bfd5000(lVar10);
      lVar6 = lVar10;
      func_0x00010bf63640(lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c042dc0(puVar11);
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    _objc_release(lVar10);
    FUN_10556cb08(puVar3,puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(puVar3);
    _objc_release(puVar11);
    if (lVar9 != 0) goto LAB_105564bf8;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bf51e00();
  }
  else {
    lVar8 = *(long *)(param_1 + 0x30);
    puVar3 = PTR_PTR_1126bad48;
    FUN_10556d158(PTR_PTR_1126bad48,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (lVar8 != 0) goto LAB_105564aa0;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bf51e00();
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = uVar1;
  _objc_release(uVar7);
  _objc_release(uVar4);
  func_0x00010beec4e0(*(undefined8 *)(param_1 + 0x30));
  lVar9 = 0;
LAB_105564bf8:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 105564cb4; end: 105564d27;  */

void FUN_105564cb4(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x30,param_2 + 0x30);
  return;
}



/* Entry: 105564d28; end: 105564ecb;  */

/* WARNING: Possible PIC construction at 0x000105564e54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105564e58) */
/* WARNING: Removing unreachable block (ram,0x000105564e70) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105564d28(long param_1,int param_2,undefined *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 uStack_35c;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 uStack_348;
  undefined **ppuStack_340;
  undefined4 uStack_338;
  undefined4 uStack_328;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
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
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long *plStack_268;
  long *plStack_260;
  undefined **ppuStack_258;
  undefined4 uStack_250;
  undefined4 uStack_240;
  undefined4 uStack_228;
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
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  
  if (param_2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_3 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    if (param_3 == (undefined *)0x0) {
      _objc_retain(&PTR____CFConstantStringClassReference_110deabd8);
      param_3 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(&PTR____CFConstantStringClassReference_110deabd8);
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0)
    goto LAB_105564e88;
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_completeWithError__1125ae8d0,param_3);
    return;
  }
  param_1 = *(long *)(param_1 + 0x20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_completeWithValue__1125ae900,0);
    return;
  }
LAB_105564e88:
  uVar8 = SUB84(param_3,0);
  ___stack_chk_fail();
  _objc_release();
  __Unwind_Resume();
  _objc_retain(param_4);
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bad38);
  if (lVar4 == 0) {
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_100,lVar4);
  }
  puVar5 = &uStack_1e1;
  FUN_10556c630();
  uStack_250 = 0xf;
  uStack_240 = 0x100;
  ppuStack_258 = &PTR_FUN_1108962d0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_208 = 0;
  lStack_210 = 0;
  plStack_1f8 = (long *)0x0;
  uStack_200 = 0;
  plStack_1f0 = (long *)0x0;
  uStack_1c6 = *(undefined2 *)(puVar5 + 0x1a);
  uStack_1d8 = 10;
  uStack_1c8 = 0x100;
  ppuStack_1e0 = &PTR_FUN_110897348;
  lStack_190 = 0;
  lStack_198 = 0;
  plStack_180 = (long *)0x0;
  uStack_188 = 0;
  plStack_178 = (long *)0x0;
  puVar6 = &uStack_2c9;
  uStack_228 = uVar8;
  puStack_1a8 = puVar5;
  pppuStack_1a0 = &ppuStack_258;
  FUN_10556c774();
  uStack_338 = 0xf;
  uStack_328 = 0x100;
  _objc_retain(param_4);
  ppuStack_340 = &PTR_SUB_110862760;
  uStack_300 = 0;
  uStack_308 = 0;
  uStack_2f0 = 0;
  uStack_2f8 = 0;
  plStack_2e0 = (long *)0x0;
  uStack_2e8 = 0;
  plStack_2d8 = (long *)0x0;
  bStack_2ae = puVar6[0x1a];
  bStack_2ad = puVar6[0x1b];
  uStack_2c0 = 10;
  uStack_2b0 = 0x100;
  ppuStack_2c8 = &PTR_FUN_110862700;
  pppuStack_130 = &ppuStack_2c8;
  uStack_278 = 0;
  uStack_280 = 0;
  plStack_268 = (long *)0x0;
  uStack_270 = 0;
  plStack_260 = (long *)0x0;
  bStack_156 = (byte)uStack_1c6 | bStack_2ae;
  bStack_155 = uStack_1c6._1_1_ & bStack_2ad;
  uStack_168 = 4;
  uStack_158 = 0x100;
  ppuStack_170 = &PTR_SUB_1108629c8;
  pppuStack_138 = &ppuStack_1e0;
  plStack_108 = (long *)0x0;
  plStack_110 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_128 = 0;
  puStack_358 = (undefined8 *)0x0;
  puStack_350 = (undefined8 *)0x0;
  uStack_348 = 0;
  uStack_35c = 0;
  puVar7 = &uStack_100;
  uStack_310 = param_4;
  puStack_290 = puVar6;
  pppuStack_288 = &ppuStack_340;
  func_0x0001000e77a0(puVar7,&ppuStack_170,&puStack_358,&uStack_35c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_358 != (undefined8 *)0x0) {
    puStack_350 = puStack_358;
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
  ppuStack_2c8 = &PTR_FUN_110862700;
  plStack_260 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_268;
  plStack_268 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  puStack_358 = &uStack_280;
  func_0x000100105004(&puStack_358);
  plVar2 = plStack_2d8;
  ppuStack_340 = &PTR_SUB_110862760;
  plStack_2d8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_2e0;
  plStack_2e0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  puStack_358 = &uStack_2f8;
  func_0x000100105004(&puStack_358);
  _objc_release(uStack_310);
  plVar2 = plStack_178;
  ppuStack_1e0 = &PTR_FUN_110897348;
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
  ppuStack_258 = &PTR_FUN_1108962d0;
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
  func_0x0001000e76e0(&uStack_d8);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(lVar4);
  puVar9 = puVar7;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = puVar7;
    func_0x00010bfb1920(puVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar9 = (undefined8 *)0x0;
  }
  _objc_release(puVar7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105564ecc; end: 105565313; -[CTPDocObjectsSearchSectionPersistenceService _fetchSearchSectionWithPersistedSection:searchTerm:] */

void FUN_105564ecc(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uStack_30c;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  long lStack_140;
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
  
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bad38);
  if (lVar2 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,lVar2);
  }
  puVar3 = &uStack_191;
  FUN_10556c630();
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  ppuStack_208 = &PTR_FUN_1108962d0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1b8 = 0;
  lStack_1c0 = 0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_FUN_110897348;
  lStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar4 = &uStack_279;
  uStack_1d8 = param_3;
  puStack_158 = puVar3;
  pppuStack_150 = &ppuStack_208;
  FUN_10556c774();
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  _objc_retain(param_4);
  ppuStack_2f0 = &PTR_SUB_110862760;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar4[0x1a];
  bStack_25d = puVar4[0x1b];
  uStack_270 = 10;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_FUN_110862700;
  pppuStack_e0 = &ppuStack_278;
  uStack_228 = 0;
  uStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  plStack_210 = (long *)0x0;
  bStack_106 = (byte)uStack_176 | bStack_25e;
  bStack_105 = uStack_176._1_1_ & bStack_25d;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  plStack_b8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  puStack_308 = (undefined8 *)0x0;
  puStack_300 = (undefined8 *)0x0;
  uStack_2f8 = 0;
  uStack_30c = 0;
  puVar5 = &uStack_b0;
  uStack_2c0 = param_4;
  puStack_240 = puVar4;
  pppuStack_238 = &ppuStack_2f0;
  func_0x0001000e77a0(puVar5,&ppuStack_120,&puStack_308,&uStack_30c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_308 != (undefined8 *)0x0) {
    puStack_300 = puStack_308;
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
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_FUN_110862700;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_308 = &uStack_230;
  func_0x000100105004(&puStack_308);
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_SUB_110862760;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_308 = &uStack_2a8;
  func_0x000100105004(&puStack_308);
  _objc_release(uStack_2c0);
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_FUN_110897348;
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
    lStack_140 = lStack_148;
    __ZdlPv();
  }
  plVar1 = plStack_1a0;
  ppuStack_208 = &PTR_FUN_1108962d0;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1c0 != 0) {
    lStack_1b8 = lStack_1c0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(lVar2);
  puVar6 = puVar5;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = puVar5;
    func_0x00010bfb1920(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = (undefined8 *)0x0;
  }
  _objc_release(puVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105565314; end: 105565383;  */

undefined8 * FUN_105565314(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110897348;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 105565384; end: 105565423; -[CTPDocObjectsSearchSectionPersistenceService .cxx_destruct] */

void FUN_105565384(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105565424; end: 105565adf;  */

void FUN_105565424(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000105565a84;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000105565aa4;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000105565aa4;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000105565a18:
                    /* WARNING: Could not recover jumptable at 0x000105565a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000105565a18;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x000105565aa4;
    }
    goto code_r0x000105565a98;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000105565a98;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x000105565aa4;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000105565aa4;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_105565ab4;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000105565a84:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000105565a98:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000105565aa4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_105565ab4:
  return;
}



/* Entry: 105565ae0; end: 105565b67;  */

void FUN_105565ae0(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000105565b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 105565b68; end: 105565c9b;  */

void FUN_105565b68(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000105565c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 105565c9c; end: 105566067;  */

uint FUN_105565c9c(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  byte bVar11;
  int *piVar12;
  long *plVar13;
  uint uVar14;
  uint uStack_5c;
  uint uStack_58;
  byte bStack_52;
  byte bStack_51;
  
  _objc_retain(param_3);
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 < 0xe) {
    if (iVar4 - 1U < 2) {
      *param_4 = 0;
      uStack_58 = uStack_58 & 0xffffff00;
      (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
                (*(long **)(param_1 + 0x38),param_2,param_3,&uStack_58);
      uVar14 = (uint)(iVar4 != 1 ^ (byte)uStack_58);
      goto LAB_10556603c;
    }
    if (1 < iVar4 - 0xcU) goto LAB_105565dd0;
    plVar13 = *(long **)(param_1 + 0x38);
    _objc_retain(param_3);
    (**(code **)(*plVar13 + 0x28))(plVar13,param_2,param_3,param_4);
    piVar2 = *(int **)(param_1 + 0x48);
    piVar3 = *(int **)(param_1 + 0x50);
    iVar6 = (int)plVar13;
    if (iVar4 == 0xc) {
      if (piVar2 == piVar3) {
        uVar14 = 0;
      }
      else {
        do {
          piVar12 = piVar2 + 1;
          iVar4 = *piVar2;
          uVar14 = (uint)(iVar6 == iVar4);
          piVar2 = piVar12;
        } while (iVar6 != iVar4 && piVar12 != piVar3);
      }
    }
    else if (piVar2 == piVar3) {
      uVar14 = 1;
    }
    else {
      do {
        piVar12 = piVar2 + 1;
        iVar4 = *piVar2;
        uVar14 = (uint)(iVar6 != iVar4);
        piVar2 = piVar12;
      } while (iVar6 != iVar4 && piVar12 != piVar3);
    }
    goto LAB_105566034;
  }
  if (iVar4 - 0xfU < 2) {
    *param_4 = 0;
    uVar14 = (uint)*(byte *)(param_1 + 0x30);
    goto LAB_10556603c;
  }
  if (iVar4 == 0xe) {
    lVar1 = 0x28;
    lVar8 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      lVar8 = param_2;
    }
    (**(code **)(param_1 + lVar1))(lVar8,param_4);
    uVar14 = (uint)lVar8;
    goto LAB_10556603c;
  }
LAB_105565dd0:
  plVar13 = *(long **)(param_1 + 0x38);
  plVar10 = *(long **)(param_1 + 0x40);
  _objc_retain(param_3);
  uVar14 = 0;
  if (iVar4 < 5) {
    if (iVar4 == 0) {
      (**(code **)(*plVar13 + 0x28))(plVar13,param_2,param_3,param_4);
      uVar14 = (uint)((int)plVar13 == 0);
      goto LAB_105566034;
    }
    if (iVar4 == 3) {
      (**(code **)(*plVar13 + 0x28))(plVar13,param_2,param_3,&uStack_58);
      (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,&uStack_5c);
      *param_4 = ((byte)uStack_58 | (byte)uStack_5c) & 1;
      uVar14 = 0;
      uVar7 = (uint)plVar10;
      if (uVar7 != 0) {
        uVar14 = (uint)plVar13 / uVar7;
      }
      bVar5 = (uint)plVar13 == uVar14 * uVar7;
    }
    else {
      if (iVar4 != 4) goto LAB_105566034;
      (**(code **)(*plVar13 + 0x28))(plVar13,param_2,param_3,&uStack_58);
      (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,&uStack_5c);
      if (((int)plVar13 == 0) && (bVar11 = (byte)uStack_5c, (uStack_58 & 1) == 0)) {
LAB_105565efc:
        bVar11 = (byte)uStack_58 & bVar11;
      }
      else {
        if (((int)plVar10 == 0) && ((uStack_5c & 1) == 0)) {
          bVar11 = 0;
          goto LAB_105565efc;
        }
        bVar11 = (byte)uStack_58 | (byte)uStack_5c;
      }
      *param_4 = bVar11 & 1;
      bVar5 = (int)plVar13 == 0 || (int)plVar10 == 0;
    }
LAB_105566030:
    uVar14 = (uint)!bVar5;
  }
  else if (iVar4 - 6U < 6) {
    plVar9 = plVar13;
    (**(code **)(*plVar13 + 0x28))(plVar13,param_2,param_3,&bStack_51);
    uStack_58 = (uint)plVar9;
    (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,&bStack_52);
    uStack_5c = (uint)plVar10;
    *param_4 = (bStack_51 | bStack_52) & 1;
    FUN_105536a68(plVar13,&uStack_58,&uStack_5c,iVar4,0);
    uVar14 = (uint)plVar13;
  }
  else if (iVar4 == 5) {
    (**(code **)(*plVar13 + 0x28))(plVar13,param_2,param_3,&uStack_58);
    (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,&uStack_5c);
    if (((int)plVar13 == 0) || (bVar11 = (byte)uStack_5c, (uStack_58 & 1) != 0)) {
      if (((int)plVar10 != 0) && ((uStack_5c & 1) == 0)) {
        bVar11 = 0;
        goto LAB_105565f74;
      }
      bVar11 = (byte)uStack_58 | (byte)uStack_5c;
    }
    else {
LAB_105565f74:
      bVar11 = (byte)uStack_58 & bVar11;
    }
    *param_4 = bVar11 & 1;
    bVar5 = (int)plVar13 == 0 && (int)plVar10 == 0;
    goto LAB_105566030;
  }
LAB_105566034:
  _objc_release(param_3);
LAB_10556603c:
  _objc_release(param_3);
  return uVar14 & 1;
}



/* Entry: 105566068; end: 1055660a3;  */

undefined8 FUN_105566068(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_1055660a4(uVar1,param_1);
  return uVar1;
}


