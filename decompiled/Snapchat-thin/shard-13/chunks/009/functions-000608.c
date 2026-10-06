/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aed1b14; end: 10aed1cbf;  */

void FUN_10aed1b14(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_10aed1c34;
  }
  puVar6 = PTR_PTR_1126de7c0;
  _objc_alloc(PTR_PTR_1126de7c0);
  lVar3 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar3);
  if (uVar2 < 5) {
    puVar5 = (undefined *)0x0;
LAB_10aed1bfc:
    puVar8 = (undefined *)0x0;
LAB_10aed1c00:
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_1 - lVar3))[2];
    if (uVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar3);
    }
    lVar3 = -lVar3;
    if (uVar2 < 7) goto LAB_10aed1bfc;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar3 + 6);
    if (uVar4 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = -(long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar2 < 9) || (uVar4 = (ulong)*(ushort *)((long)param_1 + lVar3 + 8), uVar4 == 0))
    goto LAB_10aed1c00;
    puVar1 = (uint *)((long)param_1 + uVar4);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c008120(puVar6,param_2,puVar5,puVar8,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar5);
LAB_10aed1c34:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10aed1cc0; end: 10aed1dd7;  */

void FUN_10aed1cc0(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  if (param_1 == (int *)0x0) {
    puVar7 = (undefined *)0x0;
    goto LAB_10aed1d94;
  }
  puVar7 = PTR_PTR_1126de7e8;
  _objc_alloc(PTR_PTR_1126de7e8);
  lVar5 = (long)*param_1;
  uVar4 = *(ushort *)((long)param_1 - lVar5);
  if (uVar4 < 5) {
    puVar8 = (undefined *)0x0;
LAB_10aed1d74:
    uVar2 = 0;
LAB_10aed1d78:
    uVar3 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_1 - lVar5))[2];
    if (uVar6 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - lVar5);
    }
    if (uVar4 < 7) goto LAB_10aed1d74;
    uVar6 = (ulong)*(ushort *)((long)param_1 + (6 - lVar5));
    if (uVar6 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)((long)param_1 + uVar6);
    }
    if ((uVar4 < 9) || (uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - lVar5)), uVar6 == 0))
    goto LAB_10aed1d78;
    uVar3 = *(undefined4 *)((long)param_1 + uVar6);
  }
  func_0x00010c018e40(puVar7,param_2,puVar8,uVar2,uVar3);
  _objc_release(puVar8);
LAB_10aed1d94:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10aed1dd8; end: 10aed20a3;  */

undefined8 * FUN_10aed1dd8(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined1 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined ***pppuVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  ulong uVar41;
  ulong uVar42;
  undefined8 *puVar43;
  ulong uVar44;
  ulong uVar45;
  long unaff_x21;
  undefined4 *puVar46;
  undefined4 *unaff_x23;
  undefined4 *puVar47;
  undefined8 uVar48;
  long lVar49;
  undefined8 unaff_x25;
  undefined8 *puVar50;
  long *unaff_x26;
  undefined8 uVar51;
  ulong uStack_458;
  long lStack_440;
  long lStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long lStack_420;
  undefined8 uStack_418;
  long lStack_410;
  long lStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3c8;
  long lStack_3c0;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  long lStack_3a8;
  long lStack_398;
  long lStack_390;
  undefined8 uStack_388;
  long lStack_380;
  long lStack_378;
  undefined8 uStack_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  long lStack_360;
  long lStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined1 uStack_331;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  code *pcStack_2e8;
  undefined ***pppuStack_2d8;
  undefined **ppuStack_2d0;
  code *pcStack_2c8;
  undefined ***pppuStack_2b8;
  undefined **ppuStack_2b0;
  code *pcStack_2a8;
  undefined ***pppuStack_298;
  undefined **ppuStack_290;
  code *pcStack_288;
  undefined ***pppuStack_278;
  undefined **ppuStack_270;
  code *pcStack_268;
  undefined ***pppuStack_258;
  long lStack_1d0;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined4 *puStack_198;
  undefined8 *puStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 auStack_f8 [17];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar43 = param_2;
  _objc_retain(param_4);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puStack_148 = param_1;
  _objc_retain(param_4);
  puVar8 = param_4;
  puStack_150 = param_4;
  func_0x00010bf52a60();
  if (puVar8 != (undefined8 *)0x0) {
    param_1 = (undefined8 *)0x0;
    puVar46 = (undefined4 *)0x0;
    unaff_x23 = (undefined4 *)0x0;
    unaff_x21 = *plStack_130;
    puStack_160 = param_2;
    do {
      param_4 = (undefined8 *)0x0;
      puVar10 = param_1;
      puVar47 = unaff_x23;
      puStack_158 = puVar8;
      do {
        if (*plStack_130 != unaff_x21) {
          _objc_enumerationMutation(puStack_150);
        }
        unaff_x25 = *(undefined8 *)(lStack_138 + (long)param_4 * 8);
        _objc_retain(unaff_x25);
        _objc_retain(unaff_x25);
        unaff_x26 = *(long **)(param_3 + 0x18);
        auStack_f8[0] = unaff_x25;
        if (unaff_x26 == (long *)0x0) {
          func_0x000104bfeb48();
          goto LAB_10aed2024;
        }
        puVar43 = param_2;
        (**(code **)(*unaff_x26 + 0x30))(unaff_x26,param_2,auStack_f8);
        _objc_release(auStack_f8[0]);
        if (puVar47 < puVar46) {
          unaff_x23 = puVar47 + 1;
          *puVar47 = (int)unaff_x26;
          param_1 = puVar10;
        }
        else {
          lVar49 = (long)puVar47 - (long)puVar10;
          uVar44 = (lVar49 >> 2) + 1;
          if (uVar44 >> 0x3e != 0) {
            FUN_10aed46b8();
LAB_10aed2024:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10aed2028);
            (*pcVar7)();
          }
          uVar45 = (long)puVar46 - (long)puVar10 >> 1;
          if (uVar45 <= uVar44) {
            uVar45 = uVar44;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar46 - (long)puVar10)) {
            uVar45 = 0x3fffffffffffffff;
          }
          if (uVar45 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_10aed2024;
          }
          lVar9 = uVar45 << 2;
          __Znwm();
          puVar47 = (undefined4 *)(lVar9 + lVar49);
          puVar46 = (undefined4 *)(lVar9 + uVar45 * 4);
          param_1 = (undefined8 *)(puVar47 + -(lVar49 >> 2));
          unaff_x23 = puVar47 + 1;
          *puVar47 = (int)unaff_x26;
          puVar43 = puVar10;
          _memcpy(param_1,puVar10,lVar49);
          *puStack_148 = param_1;
          puStack_148[1] = unaff_x23;
          puStack_148[2] = puVar46;
          param_2 = puStack_160;
          puVar8 = puStack_158;
          if (puVar10 != (undefined8 *)0x0) {
            __ZdlPv(puVar10);
            param_2 = puStack_160;
            puVar8 = puStack_158;
          }
        }
        puStack_148[1] = unaff_x23;
        _objc_release(unaff_x25);
        param_4 = (undefined8 *)((long)param_4 + 1);
        puVar10 = param_1;
        puVar47 = unaff_x23;
      } while (puVar8 != param_4);
      puVar8 = puStack_150;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined8 *)0x0);
  }
  _objc_release(puStack_150);
  puVar8 = puStack_150;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_release(puStack_150);
  _objc_release(puStack_150);
  puVar10 = puVar8;
  __Unwind_Resume();
  pcStack_168 = FUN_10aed20a4;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1c0 = 0;
  lStack_1b8 = param_3;
  plStack_1b0 = unaff_x26;
  uStack_1a8 = unaff_x25;
  puStack_1a0 = param_2;
  puStack_198 = unaff_x23;
  puStack_190 = puVar8;
  lStack_188 = unaff_x21;
  puStack_180 = param_1;
  puStack_178 = param_4;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(puVar43);
  ppuStack_270 = &PTR_FUN_110c8ff08;
  pcStack_268 = FUN_10aed46cc;
  pppuStack_258 = &ppuStack_270;
  puVar8 = puVar43;
  func_0x00010bfe3820();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uStack_340 = 0;
  lStack_350 = 0;
  lStack_348 = 0;
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  _objc_retain(puVar8);
  puVar11 = puVar8;
  func_0x00010bf52a60();
  if (puVar11 != (undefined8 *)0x0) {
    lVar49 = *plStack_320;
    do {
      puVar50 = (undefined8 *)0x0;
      do {
        if (*plStack_320 != lVar49) {
          _objc_enumerationMutation(puVar8);
        }
        uVar48 = *(undefined8 *)(lStack_328 + (long)puVar50 * 8);
        _objc_retain(uVar48);
        pppuVar12 = &ppuStack_270;
        FUN_10aed6dac(pppuVar12,puVar10,uVar48);
        uStack_368 = SUB84(pppuVar12,0);
        FUN_10aed6cec(&lStack_350,&uStack_368);
        _objc_release(uVar48);
        puVar50 = (undefined8 *)((long)puVar50 + 1);
      } while (puVar11 != puVar50);
      puVar11 = puVar8;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined8 *)0x0);
  }
  _objc_release(puVar8);
  _objc_release(puVar8);
  _objc_release(puVar8);
  if (pppuStack_258 == &ppuStack_270) {
    lVar49 = 0x20;
LAB_10aed221c:
    (**(code **)((long)*pppuStack_258 + lVar49))();
  }
  else if (pppuStack_258 != (undefined ***)0x0) {
    lVar49 = 0x28;
    goto LAB_10aed221c;
  }
  puVar8 = puVar43;
  func_0x00010c13b260();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 == (undefined8 *)0x0) {
    uStack_458 = 0;
  }
  else {
    puVar11 = puVar43;
    func_0x00010c13b260(puVar43);
    _objc_retainAutoreleasedReturnValue();
    puVar50 = puVar10;
    FUN_10aed47e8(puVar10,puVar11);
    _objc_release(puVar11);
    uStack_458 = (ulong)puVar50 & 0xffffffff;
  }
  _objc_release(puVar8);
  puVar8 = puVar43;
  func_0x00010bf33060(puVar43);
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4950(&uStack_368,puVar10,puVar8);
  _objc_release(puVar8);
  puVar8 = puVar43;
  func_0x00010c24a620();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined8 *)0x0) {
    puVar11 = puVar43;
    func_0x00010c24a620(puVar43);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aed4ac0(puVar10,puVar11);
    _objc_release(puVar11);
  }
  _objc_release(puVar8);
  ppuStack_290 = &PTR_FUN_110c8ffb8;
  pcStack_288 = FUN_10aed4c50;
  pppuStack_278 = &ppuStack_290;
  puVar8 = puVar43;
  func_0x00010c14fe60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uStack_370 = 0;
  lStack_380 = 0;
  lStack_378 = 0;
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  _objc_retain(puVar8);
  puVar11 = puVar8;
  func_0x00010bf52a60();
  if (puVar11 != (undefined8 *)0x0) {
    lVar49 = *plStack_320;
    do {
      puVar50 = (undefined8 *)0x0;
      do {
        if (*plStack_320 != lVar49) {
          _objc_enumerationMutation(puVar8);
        }
        uVar48 = *(undefined8 *)(lStack_328 + (long)puVar50 * 8);
        _objc_retain(uVar48);
        pppuVar12 = &ppuStack_290;
        FUN_10aed7b68(pppuVar12,puVar10,uVar48);
        lStack_398 = CONCAT44(lStack_398._4_4_,(int)pppuVar12);
        func_0x00010aed7aa8(&lStack_380,&lStack_398);
        _objc_release(uVar48);
        puVar50 = (undefined8 *)((long)puVar50 + 1);
      } while (puVar11 != puVar50);
      puVar11 = puVar8;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined8 *)0x0);
  }
  _objc_release(puVar8);
  _objc_release(puVar8);
  _objc_release(puVar8);
  if (pppuStack_278 == &ppuStack_290) {
    lVar49 = 0x20;
LAB_10aed2444:
    (**(code **)((long)*pppuStack_278 + lVar49))();
  }
  else if (pppuStack_278 != (undefined ***)0x0) {
    lVar49 = 0x28;
    goto LAB_10aed2444;
  }
  puVar8 = puVar43;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined8 *)0x0) {
    puVar11 = puVar43;
    func_0x00010c2813a0(puVar43);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aed4d10(puVar10,puVar11);
    _objc_release(puVar11);
  }
  _objc_release(puVar8);
  ppuStack_2b0 = &PTR_FUN_110c90118;
  pcStack_2a8 = FUN_10aed5090;
  pppuStack_298 = &ppuStack_2b0;
  puVar8 = puVar43;
  func_0x00010c0b8380();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uStack_388 = 0;
  lStack_398 = 0;
  lStack_390 = 0;
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  _objc_retain(puVar8);
  puVar11 = puVar8;
  func_0x00010bf52a60();
  if (puVar11 != (undefined8 *)0x0) {
    lVar49 = *plStack_320;
    do {
      puVar50 = (undefined8 *)0x0;
      do {
        if (*plStack_320 != lVar49) {
          _objc_enumerationMutation(puVar8);
        }
        uVar48 = *(undefined8 *)(lStack_328 + (long)puVar50 * 8);
        _objc_retain(uVar48);
        pppuVar12 = &ppuStack_2b0;
        FUN_10aed7f0c(pppuVar12,puVar10,uVar48);
        uStack_3b0 = SUB84(pppuVar12,0);
        FUN_10aed7e4c(&lStack_398,&uStack_3b0);
        _objc_release(uVar48);
        puVar50 = (undefined8 *)((long)puVar50 + 1);
      } while (puVar11 != puVar50);
      puVar11 = puVar8;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined8 *)0x0);
  }
  _objc_release(puVar8);
  _objc_release(puVar8);
  _objc_release(puVar8);
  if (pppuStack_298 == &ppuStack_2b0) {
    lVar49 = 0x20;
LAB_10aed25e8:
    (**(code **)((long)*pppuStack_298 + lVar49))();
  }
  else if (pppuStack_298 != (undefined ***)0x0) {
    lVar49 = 0x28;
    goto LAB_10aed25e8;
  }
  puVar8 = puVar43;
  func_0x00010bf29280(puVar43);
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4950(&uStack_3b0,puVar10,puVar8);
  _objc_release(puVar8);
  puVar8 = puVar43;
  func_0x00010bf07540(puVar43);
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4950(&lStack_3c8,puVar10,puVar8);
  _objc_release(puVar8);
  puVar8 = puVar43;
  func_0x00010c092760(puVar43);
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4950(&lStack_3e0,puVar10,puVar8);
  _objc_release(puVar8);
  puVar8 = puVar43;
  func_0x00010bf43020();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined8 *)0x0) {
    puVar11 = puVar43;
    func_0x00010bf43020(puVar43);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aed56a4(puVar10,puVar11);
    _objc_release(puVar11);
  }
  _objc_release(puVar8);
  puVar8 = puVar43;
  func_0x00010c2455c0(puVar43);
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4950(&lStack_3f8,puVar10,puVar8);
  _objc_release(puVar8);
  puVar8 = puVar43;
  func_0x00010c281560();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined8 *)0x0) {
    puVar11 = puVar43;
    func_0x00010c281560(puVar43);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aed5844(puVar10,puVar11);
    _objc_release(puVar11);
  }
  _objc_release(puVar8);
  puVar8 = puVar43;
  func_0x00010bf32760();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined8 *)0x0) {
    puVar11 = puVar43;
    func_0x00010bf32760(puVar43);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aed5bc0(puVar10,puVar11);
    _objc_release(puVar11);
  }
  _objc_release(puVar8);
  puVar8 = puVar43;
  func_0x00010bf48840();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined8 *)0x0) {
    puVar11 = puVar43;
    func_0x00010bf48840(puVar43);
    _objc_retainAutoreleasedReturnValue();
    puVar50 = puVar11;
    func_0x00010bf05300();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar10;
    FUN_10aed4588(puVar10,puVar50);
    *(undefined1 *)((long)puVar10 + 0x46) = 1;
    uVar48 = puVar10[5];
    uVar1 = puVar10[6];
    uVar51 = puVar10[4];
    func_0x000107c27ddc(puVar10,4,(ulong)puVar13 & 0xffffffff);
    func_0x000107c27dc0(puVar10,((int)uVar51 - (int)uVar1) + (int)uVar48);
    _objc_release(puVar50);
    _objc_release(puVar11);
  }
  _objc_release(puVar8);
  ppuStack_2d0 = &PTR_FUN_110c901c8;
  pcStack_2c8 = FUN_10aed5cac;
  pppuStack_2b8 = &ppuStack_2d0;
  puVar8 = puVar43;
  func_0x00010c0d3a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uStack_400 = 0;
  lStack_410 = 0;
  lStack_408 = 0;
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  _objc_retain(puVar8);
  puVar11 = puVar8;
  func_0x00010bf52a60();
  if (puVar11 != (undefined8 *)0x0) {
    lVar49 = *plStack_320;
    do {
      puVar50 = (undefined8 *)0x0;
      do {
        if (*plStack_320 != lVar49) {
          _objc_enumerationMutation(puVar8);
        }
        uVar48 = *(undefined8 *)(lStack_328 + (long)puVar50 * 8);
        _objc_retain(uVar48);
        pppuVar12 = &ppuStack_2d0;
        FUN_10aed948c(pppuVar12,puVar10,uVar48);
        lStack_428 = CONCAT44(lStack_428._4_4_,(int)pppuVar12);
        func_0x00010aed93cc(&lStack_410,&lStack_428);
        _objc_release(uVar48);
        puVar50 = (undefined8 *)((long)puVar50 + 1);
      } while (puVar11 != puVar50);
      puVar11 = puVar8;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined8 *)0x0);
  }
  _objc_release(puVar8);
  _objc_release(puVar8);
  _objc_release(puVar8);
  if (pppuStack_2b8 == &ppuStack_2d0) {
    lVar49 = 0x20;
LAB_10aed2998:
    (**(code **)((long)*pppuStack_2b8 + lVar49))();
  }
  else if (pppuStack_2b8 != (undefined ***)0x0) {
    lVar49 = 0x28;
    goto LAB_10aed2998;
  }
  puVar8 = puVar43;
  func_0x00010c129ce0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined8 *)0x0) {
    puVar11 = puVar43;
    func_0x00010c129ce0(puVar43);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aed5e38(puVar10,puVar11);
    _objc_release(puVar11);
  }
  _objc_release(puVar8);
  ppuStack_2f0 = &PTR_FUN_110c90278;
  pcStack_2e8 = FUN_10aed5f24;
  pppuStack_2d8 = &ppuStack_2f0;
  puVar8 = puVar43;
  func_0x00010bf32720();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uStack_418 = 0;
  lStack_428 = 0;
  lStack_420 = 0;
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  _objc_retain(puVar8);
  puVar11 = puVar8;
  func_0x00010bf52a60();
  if (puVar11 != (undefined8 *)0x0) {
    lVar49 = *plStack_320;
    do {
      puVar50 = (undefined8 *)0x0;
      do {
        if (*plStack_320 != lVar49) {
          _objc_enumerationMutation(puVar8);
        }
        uVar48 = *(undefined8 *)(lStack_328 + (long)puVar50 * 8);
        _objc_retain(uVar48);
        pppuVar12 = &ppuStack_2f0;
        FUN_10aed96e8(pppuVar12,puVar10,uVar48);
        lStack_440 = CONCAT44(lStack_440._4_4_,(int)pppuVar12);
        FUN_10aed9628(&lStack_428,&lStack_440);
        _objc_release(uVar48);
        puVar50 = (undefined8 *)((long)puVar50 + 1);
      } while (puVar11 != puVar50);
      puVar11 = puVar8;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined8 *)0x0);
  }
  _objc_release(puVar8);
  _objc_release(puVar8);
  _objc_release(puVar8);
  if (pppuStack_2d8 == &ppuStack_2f0) {
    lVar49 = 0x20;
  }
  else {
    if (pppuStack_2d8 == (undefined ***)0x0) goto LAB_10aed2b48;
    lVar49 = 0x28;
  }
  (**(code **)((long)*pppuStack_2d8 + lVar49))();
LAB_10aed2b48:
  puVar8 = puVar43;
  func_0x00010c1074c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uStack_430 = 0;
  lStack_440 = 0;
  lStack_438 = 0;
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  _objc_retain(puVar8);
  puVar11 = puVar8;
  func_0x00010bf52a60();
  if (puVar11 != (undefined8 *)0x0) {
    lVar49 = *plStack_320;
    do {
      puVar50 = (undefined8 *)0x0;
      do {
        if (*plStack_320 != lVar49) {
          _objc_enumerationMutation(puVar8);
        }
        uVar6 = (char)*(undefined8 *)(lStack_328 + (long)puVar50 * 8);
        func_0x00010bf358e0();
        uStack_331 = uVar6;
        FUN_10aed9884(&lStack_440,&uStack_331);
        puVar50 = (undefined8 *)((long)puVar50 + 1);
      } while (puVar11 != puVar50);
      puVar11 = puVar8;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined8 *)0x0);
  }
  _objc_release(puVar8);
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar8 = puVar43;
  func_0x00010bf62d40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined8 *)0x0) {
    puVar11 = puVar43;
    func_0x00010bf62d40(puVar43);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aed5fdc(puVar10,puVar11);
    _objc_release(puVar11);
  }
  _objc_release(puVar8);
  puVar8 = puVar43;
  func_0x00010c13b280();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined8 *)0x0) {
    puVar11 = puVar43;
    func_0x00010c13b280(puVar43);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aed6110(puVar10,puVar11);
    _objc_release(puVar11);
  }
  _objc_release(puVar8);
  puVar8 = puVar43;
  func_0x00010c095fe0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined8 *)0x0) {
    puVar11 = puVar43;
    func_0x00010c095fe0(puVar43);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aed63b8(puVar10,puVar11);
    _objc_release(puVar11);
  }
  _objc_release(puVar8);
  puVar8 = puVar43;
  func_0x00010c0953c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined8 *)0x0) {
    puVar11 = puVar43;
    func_0x00010c0953c0(puVar43);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar50 = puVar11;
    func_0x00010c29c5c0(puVar11);
    puVar13 = puVar11;
    func_0x00010bfb8680(puVar11);
    *(undefined1 *)((long)puVar10 + 0x46) = 1;
    iVar2 = *(int *)(puVar10 + 4);
    iVar3 = *(int *)(puVar10 + 6);
    iVar4 = *(int *)(puVar10 + 5);
    func_0x000107c27db0(puVar10,6,puVar13,0);
    func_0x000107c27db0(puVar10,4,puVar50,0);
    func_0x000107c27dc0(puVar10,(iVar2 - iVar3) + iVar4);
    _objc_release(puVar11);
    _objc_release(puVar11);
  }
  _objc_release(puVar8);
  puVar8 = puVar43;
  func_0x00010c095e40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined8 *)0x0) {
    puVar11 = puVar43;
    func_0x00010c095e40(puVar43);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aed652c(puVar10,puVar11);
    _objc_release(puVar11);
  }
  _objc_release(puVar8);
  puVar8 = puVar43;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  FUN_10aed4588();
  puVar50 = puVar43;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar10;
  FUN_10aed4588();
  puVar14 = puVar43;
  func_0x00010bf3ec40();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar10;
  FUN_10aed4588(puVar10,puVar14);
  puVar16 = puVar43;
  func_0x00010bfe3760();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar10;
  FUN_10aed4588();
  lVar49 = 0x11331362a;
  if (lStack_348 - lStack_350 != 0) {
    lVar49 = lStack_350;
  }
  puVar18 = puVar10;
  func_0x00010aeda8a0(puVar10,lVar49,lStack_348 - lStack_350 >> 2);
  puVar19 = puVar43;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar10;
  FUN_10aed4588(puVar10,puVar19);
  puVar21 = puVar43;
  func_0x00010bf1b100();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar10;
  FUN_10aed4588();
  puVar23 = puVar43;
  func_0x00010bf9c880();
  puVar24 = puVar43;
  func_0x00010c097820();
  puVar25 = puVar43;
  func_0x00010c1554e0();
  lVar49 = 0x1130c2400;
  lVar5 = lStack_360 - CONCAT44(uStack_364,uStack_368);
  lVar9 = lVar49;
  if (lVar5 != 0) {
    lVar9 = CONCAT44(uStack_364,uStack_368);
  }
  puVar26 = puVar10;
  func_0x000107c27e28(puVar10,lVar9,lVar5 >> 2);
  puVar27 = puVar43;
  func_0x00010c072c20();
  func_0x00010c07f200();
  lVar9 = 0x11331362b;
  if (lStack_378 - lStack_380 != 0) {
    lVar9 = lStack_380;
  }
  FUN_10aeda96c(puVar10,lVar9,lStack_378 - lStack_380 >> 2);
  func_0x00010c070700();
  func_0x00010bf6d780();
  func_0x00010beec6c0();
  lVar9 = 0x11331362c;
  if (lStack_390 - lStack_398 != 0) {
    lVar9 = lStack_398;
  }
  FUN_10aedaa38(puVar10,lVar9,lStack_390 - lStack_398 >> 2);
  func_0x00010c080e60();
  func_0x00010c080040();
  func_0x00010bef0200();
  puVar28 = puVar43;
  func_0x00010bf93ae0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4588(puVar10,puVar28);
  puVar29 = puVar43;
  func_0x00010c280be0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4588();
  lVar5 = lStack_3a8 - CONCAT44(uStack_3ac,uStack_3b0);
  lVar9 = lVar49;
  if (lVar5 != 0) {
    lVar9 = CONCAT44(uStack_3ac,uStack_3b0);
  }
  func_0x000107c27e28(puVar10,lVar9,lVar5 >> 2);
  lVar9 = lVar49;
  if (lStack_3c0 - lStack_3c8 != 0) {
    lVar9 = lStack_3c8;
  }
  func_0x000107c27e28(puVar10,lVar9,lStack_3c0 - lStack_3c8 >> 2);
  func_0x00010bfd5c20();
  puVar30 = puVar43;
  func_0x00010c0e3640();
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4588();
  func_0x00010c07bb00();
  func_0x00010c113c80();
  lVar9 = lVar49;
  if (lStack_3d8 - lStack_3e0 != 0) {
    lVar9 = lStack_3e0;
  }
  func_0x000107c27e28(puVar10,lVar9,lStack_3d8 - lStack_3e0 >> 2);
  func_0x00010c245600();
  puVar31 = puVar43;
  func_0x00010c245640();
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4588();
  if (lStack_3f0 - lStack_3f8 != 0) {
    lVar49 = lStack_3f8;
  }
  func_0x000107c27e28(puVar10,lVar49,lStack_3f0 - lStack_3f8 >> 2);
  func_0x00010c076320();
  puVar32 = puVar43;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4588(puVar10,puVar32);
  puVar33 = puVar43;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (puVar33 != (undefined8 *)0x0) {
    _objc_retainAutorelease(puVar33);
    puVar34 = puVar33;
    func_0x00010bf25f00(puVar33);
    puVar35 = puVar33;
    func_0x00010c08fa60(puVar33);
    func_0x000107c27df8(puVar10,puVar34,puVar35);
  }
  _objc_release(puVar33);
  func_0x00010c06ecc0();
  func_0x00010bf04b60();
  puVar34 = puVar43;
  func_0x00010c0915a0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4588(puVar10,puVar34);
  puVar35 = puVar43;
  func_0x00010c281320();
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4588(puVar10,puVar35);
  lVar49 = 0x11331362d;
  if (lStack_408 - lStack_410 != 0) {
    lVar49 = lStack_410;
  }
  FUN_10aedab04(puVar10,lVar49,lStack_408 - lStack_410 >> 2);
  puVar36 = puVar43;
  func_0x00010c22cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (puVar36 != (undefined8 *)0x0) {
    _objc_retainAutorelease(puVar36);
    puVar37 = puVar36;
    func_0x00010bf25f00(puVar36);
    puVar38 = puVar36;
    func_0x00010c08fa60(puVar36);
    func_0x000107c27df8(puVar10,puVar37,puVar38);
  }
  _objc_release(puVar36);
  func_0x00010c24ab20();
  puVar37 = puVar43;
  func_0x00010bef4380();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (puVar37 != (undefined8 *)0x0) {
    _objc_retainAutorelease(puVar37);
    puVar38 = puVar37;
    func_0x00010bf25f00(puVar37);
    puVar39 = puVar37;
    func_0x00010c08fa60(puVar37);
    func_0x000107c27df8(puVar10,puVar38,puVar39);
  }
  _objc_release(puVar37);
  lVar49 = 0x11331362e;
  if (lStack_420 - lStack_428 != 0) {
    lVar49 = lStack_428;
  }
  FUN_10aedabd0(puVar10,lVar49,lStack_420 - lStack_428 >> 2);
  puVar38 = puVar43;
  func_0x00010c093a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (puVar38 != (undefined8 *)0x0) {
    _objc_retainAutorelease(puVar38);
    puVar39 = puVar38;
    func_0x00010bf25f00(puVar38);
    puVar40 = puVar38;
    func_0x00010c08fa60(puVar38);
    func_0x000107c27df8(puVar10,puVar39,puVar40);
  }
  _objc_release(puVar38);
  lVar49 = 0x11331362f;
  if (lStack_438 - lStack_440 != 0) {
    lVar49 = lStack_440;
  }
  FUN_10aedac9c(puVar10,lVar49,lStack_438 - lStack_440);
  func_0x00010c07eda0();
  puVar39 = puVar43;
  func_0x00010c26a320();
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4588();
  puVar40 = puVar43;
  func_0x00010c112da0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4588(puVar10,puVar40);
  uVar44 = (ulong)puVar11 & 0xffffffff;
  FUN_10aed6680(puVar10,uVar44,(ulong)puVar13 & 0xffffffff,(ulong)puVar15 & 0xffffffff,
                (ulong)puVar17 & 0xffffffff,(ulong)puVar18 & 0xffffffff,(ulong)puVar20 & 0xffffffff,
                (ulong)puVar22 & 0xffffffff,uStack_458,puVar23,(int)puVar24,(int)puVar25,
                (ulong)puVar26 & 0xffffffff,(char)puVar27);
  _objc_release(puVar40);
  _objc_release(puVar39);
  _objc_release(puVar38);
  _objc_release(puVar37);
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar21);
  _objc_release(puVar19);
  _objc_release(puVar16);
  _objc_release(puVar14);
  _objc_release(puVar50);
  _objc_release(puVar8);
  if (lStack_440 != 0) {
    lStack_438 = lStack_440;
    __ZdlPv();
  }
  if (lStack_428 != 0) {
    lStack_420 = lStack_428;
    __ZdlPv();
  }
  if (lStack_410 != 0) {
    lStack_408 = lStack_410;
    __ZdlPv();
  }
  if (lStack_3f8 != 0) {
    lStack_3f0 = lStack_3f8;
    __ZdlPv();
  }
  if (lStack_3e0 != 0) {
    lStack_3d8 = lStack_3e0;
    __ZdlPv();
  }
  if (lStack_3c8 != 0) {
    lStack_3c0 = lStack_3c8;
    __ZdlPv();
  }
  if (CONCAT44(uStack_3ac,uStack_3b0) != 0) {
    lStack_3a8 = CONCAT44(uStack_3ac,uStack_3b0);
    __ZdlPv();
  }
  if (lStack_398 != 0) {
    lStack_390 = lStack_398;
    __ZdlPv();
  }
  if (lStack_380 != 0) {
    lStack_378 = lStack_380;
    __ZdlPv();
  }
  if (CONCAT44(uStack_364,uStack_368) != 0) {
    lStack_360 = CONCAT44(uStack_364,uStack_368);
    __ZdlPv();
  }
  if (lStack_350 != 0) {
    lStack_348 = lStack_350;
    __ZdlPv();
  }
  puVar11 = puVar43;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d0) {
    ___stack_chk_fail();
    _objc_release(puVar50);
    _objc_release(puVar8);
    if (lStack_440 != 0) {
      lStack_438 = lStack_440;
      __ZdlPv();
    }
    if (lStack_428 != 0) {
      lStack_420 = lStack_428;
      __ZdlPv();
    }
    if (lStack_410 != 0) {
      lStack_408 = lStack_410;
      __ZdlPv();
    }
    if (lStack_3f8 != 0) {
      lStack_3f0 = lStack_3f8;
      __ZdlPv();
    }
    if (lStack_3e0 != 0) {
      lStack_3d8 = lStack_3e0;
      __ZdlPv();
    }
    if (lStack_3c8 != 0) {
      lStack_3c0 = lStack_3c8;
      __ZdlPv();
    }
    if (CONCAT44(uStack_3ac,uStack_3b0) != 0) {
      lStack_3a8 = CONCAT44(uStack_3ac,uStack_3b0);
      __ZdlPv();
    }
    if (lStack_398 != 0) {
      lStack_390 = lStack_398;
      __ZdlPv();
    }
    if (lStack_380 != 0) {
      lStack_378 = lStack_380;
      __ZdlPv();
    }
    if (CONCAT44(uStack_364,uStack_368) != 0) {
      lStack_360 = CONCAT44(uStack_364,uStack_368);
      __ZdlPv();
    }
    if (lStack_350 != 0) {
      lStack_348 = lStack_350;
      __ZdlPv();
    }
    _objc_release(puVar43);
    __Unwind_Resume();
    _objc_retain(uVar44);
    uVar45 = uVar44;
    func_0x00010bf32840(uVar44);
    uVar41 = uVar44;
    func_0x00010c15ed20(uVar44);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar11;
    FUN_10aed4588(puVar11,uVar41);
    uVar42 = uVar44;
    func_0x00010bf93980(uVar44);
    _objc_retainAutoreleasedReturnValue();
    puVar43 = puVar11;
    FUN_10aed4588(puVar11,uVar42);
    *(undefined1 *)((long)puVar11 + 0x46) = 1;
    iVar2 = *(int *)(puVar11 + 4);
    iVar3 = *(int *)(puVar11 + 6);
    iVar4 = *(int *)(puVar11 + 5);
    func_0x000107c27db0(puVar11,4,uVar45,0);
    func_0x000107c27ddc(puVar11,8,(ulong)puVar43 & 0xffffffff);
    func_0x000107c27ddc(puVar11,6,(ulong)puVar8 & 0xffffffff);
    func_0x000107c27dc0(puVar11,(iVar2 - iVar3) + iVar4);
    _objc_release(uVar42);
    _objc_release(uVar41);
    _objc_release(uVar44);
    return puVar11;
  }
  return puVar10;
}



/* Entry: 10aed20a4; end: 10aed3fd7;  */

ulong FUN_10aed20a4(ulong param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined1 uVar7;
  ulong uVar8;
  undefined ***pppuVar9;
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
  undefined8 uVar39;
  long lVar40;
  ulong uVar41;
  undefined8 uVar42;
  ulong uStack_2f8;
  long lStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_280;
  long lStack_278;
  long lStack_268;
  long lStack_260;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  long lStack_248;
  long lStack_238;
  long lStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  long lStack_200;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d1;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  code *pcStack_188;
  undefined ***pppuStack_178;
  undefined **ppuStack_170;
  code *pcStack_168;
  undefined ***pppuStack_158;
  undefined **ppuStack_150;
  code *pcStack_148;
  undefined ***pppuStack_138;
  undefined **ppuStack_130;
  code *pcStack_128;
  undefined ***pppuStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_110 = &PTR_FUN_110c8ff08;
  pcStack_108 = FUN_10aed46cc;
  pppuStack_f8 = &ppuStack_110;
  uVar8 = param_2;
  func_0x00010bfe3820();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uStack_1e0 = 0;
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  _objc_retain(uVar8);
  uVar38 = uVar8;
  func_0x00010bf52a60();
  if (uVar38 != 0) {
    lVar40 = *plStack_1c0;
    do {
      uVar41 = 0;
      do {
        if (*plStack_1c0 != lVar40) {
          _objc_enumerationMutation(uVar8);
        }
        uVar39 = *(undefined8 *)(lStack_1c8 + uVar41 * 8);
        _objc_retain(uVar39);
        pppuVar9 = &ppuStack_110;
        FUN_10aed6dac(pppuVar9,param_1,uVar39);
        uStack_208 = SUB84(pppuVar9,0);
        FUN_10aed6cec(&lStack_1f0,&uStack_208);
        _objc_release(uVar39);
        uVar41 = uVar41 + 1;
      } while (uVar38 != uVar41);
      uVar38 = uVar8;
      func_0x00010bf52a60();
    } while (uVar38 != 0);
  }
  _objc_release(uVar8);
  _objc_release(uVar8);
  _objc_release(uVar8);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar40 = 0x20;
LAB_10aed221c:
    (**(code **)((long)*pppuStack_f8 + lVar40))();
  }
  else if (pppuStack_f8 != (undefined ***)0x0) {
    lVar40 = 0x28;
    goto LAB_10aed221c;
  }
  uVar8 = param_2;
  func_0x00010c13b260();
  _objc_retainAutoreleasedReturnValue();
  if (uVar8 == 0) {
    uStack_2f8 = 0;
  }
  else {
    uVar38 = param_2;
    func_0x00010c13b260(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_2f8 = param_1;
    FUN_10aed47e8(param_1,uVar38);
    _objc_release(uVar38);
    uStack_2f8 = uStack_2f8 & 0xffffffff;
  }
  _objc_release(uVar8);
  uVar8 = param_2;
  func_0x00010bf33060(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4950(&uStack_208,param_1,uVar8);
  _objc_release(uVar8);
  uVar8 = param_2;
  func_0x00010c24a620();
  _objc_retainAutoreleasedReturnValue();
  if (uVar8 != 0) {
    uVar38 = param_2;
    func_0x00010c24a620(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aed4ac0(param_1,uVar38);
    _objc_release(uVar38);
  }
  _objc_release(uVar8);
  ppuStack_130 = &PTR_FUN_110c8ffb8;
  pcStack_128 = FUN_10aed4c50;
  pppuStack_118 = &ppuStack_130;
  uVar8 = param_2;
  func_0x00010c14fe60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uStack_210 = 0;
  lStack_220 = 0;
  lStack_218 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  _objc_retain(uVar8);
  uVar38 = uVar8;
  func_0x00010bf52a60();
  if (uVar38 != 0) {
    lVar40 = *plStack_1c0;
    do {
      uVar41 = 0;
      do {
        if (*plStack_1c0 != lVar40) {
          _objc_enumerationMutation(uVar8);
        }
        uVar39 = *(undefined8 *)(lStack_1c8 + uVar41 * 8);
        _objc_retain(uVar39);
        pppuVar9 = &ppuStack_130;
        FUN_10aed7b68(pppuVar9,param_1,uVar39);
        lStack_238 = CONCAT44(lStack_238._4_4_,(int)pppuVar9);
        func_0x00010aed7aa8(&lStack_220,&lStack_238);
        _objc_release(uVar39);
        uVar41 = uVar41 + 1;
      } while (uVar38 != uVar41);
      uVar38 = uVar8;
      func_0x00010bf52a60();
    } while (uVar38 != 0);
  }
  _objc_release(uVar8);
  _objc_release(uVar8);
  _objc_release(uVar8);
  if (pppuStack_118 == &ppuStack_130) {
    lVar40 = 0x20;
LAB_10aed2444:
    (**(code **)((long)*pppuStack_118 + lVar40))();
  }
  else if (pppuStack_118 != (undefined ***)0x0) {
    lVar40 = 0x28;
    goto LAB_10aed2444;
  }
  uVar8 = param_2;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar8 != 0) {
    uVar38 = param_2;
    func_0x00010c2813a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aed4d10(param_1,uVar38);
    _objc_release(uVar38);
  }
  _objc_release(uVar8);
  ppuStack_150 = &PTR_FUN_110c90118;
  pcStack_148 = FUN_10aed5090;
  pppuStack_138 = &ppuStack_150;
  uVar8 = param_2;
  func_0x00010c0b8380();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uStack_228 = 0;
  lStack_238 = 0;
  lStack_230 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  _objc_retain(uVar8);
  uVar38 = uVar8;
  func_0x00010bf52a60();
  if (uVar38 != 0) {
    lVar40 = *plStack_1c0;
    do {
      uVar41 = 0;
      do {
        if (*plStack_1c0 != lVar40) {
          _objc_enumerationMutation(uVar8);
        }
        uVar39 = *(undefined8 *)(lStack_1c8 + uVar41 * 8);
        _objc_retain(uVar39);
        pppuVar9 = &ppuStack_150;
        FUN_10aed7f0c(pppuVar9,param_1,uVar39);
        uStack_250 = SUB84(pppuVar9,0);
        FUN_10aed7e4c(&lStack_238,&uStack_250);
        _objc_release(uVar39);
        uVar41 = uVar41 + 1;
      } while (uVar38 != uVar41);
      uVar38 = uVar8;
      func_0x00010bf52a60();
    } while (uVar38 != 0);
  }
  _objc_release(uVar8);
  _objc_release(uVar8);
  _objc_release(uVar8);
  if (pppuStack_138 == &ppuStack_150) {
    lVar40 = 0x20;
LAB_10aed25e8:
    (**(code **)((long)*pppuStack_138 + lVar40))();
  }
  else if (pppuStack_138 != (undefined ***)0x0) {
    lVar40 = 0x28;
    goto LAB_10aed25e8;
  }
  uVar8 = param_2;
  func_0x00010bf29280(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4950(&uStack_250,param_1,uVar8);
  _objc_release(uVar8);
  uVar8 = param_2;
  func_0x00010bf07540(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4950(&lStack_268,param_1,uVar8);
  _objc_release(uVar8);
  uVar8 = param_2;
  func_0x00010c092760(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4950(&lStack_280,param_1,uVar8);
  _objc_release(uVar8);
  uVar8 = param_2;
  func_0x00010bf43020();
  _objc_retainAutoreleasedReturnValue();
  if (uVar8 != 0) {
    uVar38 = param_2;
    func_0x00010bf43020(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aed56a4(param_1,uVar38);
    _objc_release(uVar38);
  }
  _objc_release(uVar8);
  uVar8 = param_2;
  func_0x00010c2455c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4950(&lStack_298,param_1,uVar8);
  _objc_release(uVar8);
  uVar8 = param_2;
  func_0x00010c281560();
  _objc_retainAutoreleasedReturnValue();
  if (uVar8 != 0) {
    uVar38 = param_2;
    func_0x00010c281560(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aed5844(param_1,uVar38);
    _objc_release(uVar38);
  }
  _objc_release(uVar8);
  uVar8 = param_2;
  func_0x00010bf32760();
  _objc_retainAutoreleasedReturnValue();
  if (uVar8 != 0) {
    uVar38 = param_2;
    func_0x00010bf32760(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aed5bc0(param_1,uVar38);
    _objc_release(uVar38);
  }
  _objc_release(uVar8);
  uVar8 = param_2;
  func_0x00010bf48840();
  _objc_retainAutoreleasedReturnValue();
  if (uVar8 != 0) {
    uVar38 = param_2;
    func_0x00010bf48840(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar41 = uVar38;
    func_0x00010bf05300();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_1;
    FUN_10aed4588(param_1,uVar41);
    *(undefined1 *)(param_1 + 0x46) = 1;
    uVar39 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar42 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c27ddc(param_1,4,uVar10 & 0xffffffff);
    func_0x000107c27dc0(param_1,((int)uVar42 - (int)uVar2) + (int)uVar39);
    _objc_release(uVar41);
    _objc_release(uVar38);
  }
  _objc_release(uVar8);
  ppuStack_170 = &PTR_FUN_110c901c8;
  pcStack_168 = FUN_10aed5cac;
  pppuStack_158 = &ppuStack_170;
  uVar8 = param_2;
  func_0x00010c0d3a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uStack_2a0 = 0;
  lStack_2b0 = 0;
  lStack_2a8 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  _objc_retain(uVar8);
  uVar38 = uVar8;
  func_0x00010bf52a60();
  if (uVar38 != 0) {
    lVar40 = *plStack_1c0;
    do {
      uVar41 = 0;
      do {
        if (*plStack_1c0 != lVar40) {
          _objc_enumerationMutation(uVar8);
        }
        uVar39 = *(undefined8 *)(lStack_1c8 + uVar41 * 8);
        _objc_retain(uVar39);
        pppuVar9 = &ppuStack_170;
        FUN_10aed948c(pppuVar9,param_1,uVar39);
        lStack_2c8 = CONCAT44(lStack_2c8._4_4_,(int)pppuVar9);
        func_0x00010aed93cc(&lStack_2b0,&lStack_2c8);
        _objc_release(uVar39);
        uVar41 = uVar41 + 1;
      } while (uVar38 != uVar41);
      uVar38 = uVar8;
      func_0x00010bf52a60();
    } while (uVar38 != 0);
  }
  _objc_release(uVar8);
  _objc_release(uVar8);
  _objc_release(uVar8);
  if (pppuStack_158 == &ppuStack_170) {
    lVar40 = 0x20;
LAB_10aed2998:
    (**(code **)((long)*pppuStack_158 + lVar40))();
  }
  else if (pppuStack_158 != (undefined ***)0x0) {
    lVar40 = 0x28;
    goto LAB_10aed2998;
  }
  uVar8 = param_2;
  func_0x00010c129ce0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar8 != 0) {
    uVar38 = param_2;
    func_0x00010c129ce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aed5e38(param_1,uVar38);
    _objc_release(uVar38);
  }
  _objc_release(uVar8);
  ppuStack_190 = &PTR_FUN_110c90278;
  pcStack_188 = FUN_10aed5f24;
  pppuStack_178 = &ppuStack_190;
  uVar8 = param_2;
  func_0x00010bf32720();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uStack_2b8 = 0;
  lStack_2c8 = 0;
  lStack_2c0 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  _objc_retain(uVar8);
  uVar38 = uVar8;
  func_0x00010bf52a60();
  if (uVar38 != 0) {
    lVar40 = *plStack_1c0;
    do {
      uVar41 = 0;
      do {
        if (*plStack_1c0 != lVar40) {
          _objc_enumerationMutation(uVar8);
        }
        uVar39 = *(undefined8 *)(lStack_1c8 + uVar41 * 8);
        _objc_retain(uVar39);
        pppuVar9 = &ppuStack_190;
        FUN_10aed96e8(pppuVar9,param_1,uVar39);
        lStack_2e0 = CONCAT44(lStack_2e0._4_4_,(int)pppuVar9);
        FUN_10aed9628(&lStack_2c8,&lStack_2e0);
        _objc_release(uVar39);
        uVar41 = uVar41 + 1;
      } while (uVar38 != uVar41);
      uVar38 = uVar8;
      func_0x00010bf52a60();
    } while (uVar38 != 0);
  }
  _objc_release(uVar8);
  _objc_release(uVar8);
  _objc_release(uVar8);
  if (pppuStack_178 == &ppuStack_190) {
    lVar40 = 0x20;
  }
  else {
    if (pppuStack_178 == (undefined ***)0x0) goto LAB_10aed2b48;
    lVar40 = 0x28;
  }
  (**(code **)((long)*pppuStack_178 + lVar40))();
LAB_10aed2b48:
  uVar8 = param_2;
  func_0x00010c1074c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  lStack_2d8 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  _objc_retain(uVar8);
  uVar38 = uVar8;
  func_0x00010bf52a60();
  if (uVar38 != 0) {
    lVar40 = *plStack_1c0;
    do {
      uVar41 = 0;
      do {
        if (*plStack_1c0 != lVar40) {
          _objc_enumerationMutation(uVar8);
        }
        uVar7 = (char)*(undefined8 *)(lStack_1c8 + uVar41 * 8);
        func_0x00010bf358e0();
        uStack_1d1 = uVar7;
        FUN_10aed9884(&lStack_2e0,&uStack_1d1);
        uVar41 = uVar41 + 1;
      } while (uVar38 != uVar41);
      uVar38 = uVar8;
      func_0x00010bf52a60();
    } while (uVar38 != 0);
  }
  _objc_release(uVar8);
  _objc_release(uVar8);
  _objc_release(uVar8);
  uVar8 = param_2;
  func_0x00010bf62d40();
  _objc_retainAutoreleasedReturnValue();
  if (uVar8 != 0) {
    uVar38 = param_2;
    func_0x00010bf62d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aed5fdc(param_1,uVar38);
    _objc_release(uVar38);
  }
  _objc_release(uVar8);
  uVar8 = param_2;
  func_0x00010c13b280();
  _objc_retainAutoreleasedReturnValue();
  if (uVar8 != 0) {
    uVar38 = param_2;
    func_0x00010c13b280(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aed6110(param_1,uVar38);
    _objc_release(uVar38);
  }
  _objc_release(uVar8);
  uVar8 = param_2;
  func_0x00010c095fe0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar8 != 0) {
    uVar38 = param_2;
    func_0x00010c095fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aed63b8(param_1,uVar38);
    _objc_release(uVar38);
  }
  _objc_release(uVar8);
  uVar8 = param_2;
  func_0x00010c0953c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar8 != 0) {
    uVar38 = param_2;
    func_0x00010c0953c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar41 = uVar38;
    func_0x00010c29c5c0(uVar38);
    uVar10 = uVar38;
    func_0x00010bfb8680(uVar38);
    *(undefined1 *)(param_1 + 0x46) = 1;
    iVar3 = *(int *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x30);
    iVar5 = *(int *)(param_1 + 0x28);
    func_0x000107c27db0(param_1,6,uVar10,0);
    func_0x000107c27db0(param_1,4,uVar41,0);
    func_0x000107c27dc0(param_1,(iVar3 - iVar4) + iVar5);
    _objc_release(uVar38);
    _objc_release(uVar38);
  }
  _objc_release(uVar8);
  uVar8 = param_2;
  func_0x00010c095e40();
  _objc_retainAutoreleasedReturnValue();
  if (uVar8 != 0) {
    uVar38 = param_2;
    func_0x00010c095e40(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aed652c(param_1,uVar38);
    _objc_release(uVar38);
  }
  _objc_release(uVar8);
  uVar8 = param_2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = param_1;
  FUN_10aed4588();
  uVar41 = param_2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  FUN_10aed4588();
  uVar11 = param_2;
  func_0x00010bf3ec40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  FUN_10aed4588(param_1,uVar11);
  uVar13 = param_2;
  func_0x00010bfe3760();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  FUN_10aed4588();
  lVar40 = 0x11331362a;
  if (lStack_1e8 - lStack_1f0 != 0) {
    lVar40 = lStack_1f0;
  }
  uVar15 = param_1;
  func_0x00010aeda8a0(param_1,lVar40,lStack_1e8 - lStack_1f0 >> 2);
  uVar16 = param_2;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_1;
  FUN_10aed4588(param_1,uVar16);
  uVar18 = param_2;
  func_0x00010bf1b100();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_1;
  FUN_10aed4588();
  uVar20 = param_2;
  func_0x00010bf9c880();
  uVar21 = param_2;
  func_0x00010c097820();
  uVar22 = param_2;
  func_0x00010c1554e0();
  lVar40 = 0x1130c2400;
  lVar6 = lStack_200 - CONCAT44(uStack_204,uStack_208);
  lVar1 = lVar40;
  if (lVar6 != 0) {
    lVar1 = CONCAT44(uStack_204,uStack_208);
  }
  uVar23 = param_1;
  func_0x000107c27e28(param_1,lVar1,lVar6 >> 2);
  uVar24 = param_2;
  func_0x00010c072c20();
  func_0x00010c07f200();
  lVar1 = 0x11331362b;
  if (lStack_218 - lStack_220 != 0) {
    lVar1 = lStack_220;
  }
  FUN_10aeda96c(param_1,lVar1,lStack_218 - lStack_220 >> 2);
  func_0x00010c070700();
  func_0x00010bf6d780();
  func_0x00010beec6c0();
  lVar1 = 0x11331362c;
  if (lStack_230 - lStack_238 != 0) {
    lVar1 = lStack_238;
  }
  FUN_10aedaa38(param_1,lVar1,lStack_230 - lStack_238 >> 2);
  func_0x00010c080e60();
  func_0x00010c080040();
  func_0x00010bef0200();
  uVar25 = param_2;
  func_0x00010bf93ae0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4588(param_1,uVar25);
  uVar26 = param_2;
  func_0x00010c280be0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4588();
  lVar6 = lStack_248 - CONCAT44(uStack_24c,uStack_250);
  lVar1 = lVar40;
  if (lVar6 != 0) {
    lVar1 = CONCAT44(uStack_24c,uStack_250);
  }
  func_0x000107c27e28(param_1,lVar1,lVar6 >> 2);
  lVar1 = lVar40;
  if (lStack_260 - lStack_268 != 0) {
    lVar1 = lStack_268;
  }
  func_0x000107c27e28(param_1,lVar1,lStack_260 - lStack_268 >> 2);
  func_0x00010bfd5c20();
  uVar27 = param_2;
  func_0x00010c0e3640();
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4588();
  func_0x00010c07bb00();
  func_0x00010c113c80();
  lVar1 = lVar40;
  if (lStack_278 - lStack_280 != 0) {
    lVar1 = lStack_280;
  }
  func_0x000107c27e28(param_1,lVar1,lStack_278 - lStack_280 >> 2);
  func_0x00010c245600();
  uVar28 = param_2;
  func_0x00010c245640();
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4588();
  if (lStack_290 - lStack_298 != 0) {
    lVar40 = lStack_298;
  }
  func_0x000107c27e28(param_1,lVar40,lStack_290 - lStack_298 >> 2);
  func_0x00010c076320();
  uVar29 = param_2;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4588(param_1,uVar29);
  uVar30 = param_2;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar30 != 0) {
    _objc_retainAutorelease(uVar30);
    uVar31 = uVar30;
    func_0x00010bf25f00(uVar30);
    uVar32 = uVar30;
    func_0x00010c08fa60(uVar30);
    func_0x000107c27df8(param_1,uVar31,uVar32);
  }
  _objc_release(uVar30);
  func_0x00010c06ecc0();
  func_0x00010bf04b60();
  uVar31 = param_2;
  func_0x00010c0915a0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4588(param_1,uVar31);
  uVar32 = param_2;
  func_0x00010c281320();
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4588(param_1,uVar32);
  lVar40 = 0x11331362d;
  if (lStack_2a8 - lStack_2b0 != 0) {
    lVar40 = lStack_2b0;
  }
  FUN_10aedab04(param_1,lVar40,lStack_2a8 - lStack_2b0 >> 2);
  uVar33 = param_2;
  func_0x00010c22cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar33 != 0) {
    _objc_retainAutorelease(uVar33);
    uVar34 = uVar33;
    func_0x00010bf25f00(uVar33);
    uVar35 = uVar33;
    func_0x00010c08fa60(uVar33);
    func_0x000107c27df8(param_1,uVar34,uVar35);
  }
  _objc_release(uVar33);
  func_0x00010c24ab20();
  uVar34 = param_2;
  func_0x00010bef4380();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar34 != 0) {
    _objc_retainAutorelease(uVar34);
    uVar35 = uVar34;
    func_0x00010bf25f00(uVar34);
    uVar36 = uVar34;
    func_0x00010c08fa60(uVar34);
    func_0x000107c27df8(param_1,uVar35,uVar36);
  }
  _objc_release(uVar34);
  lVar40 = 0x11331362e;
  if (lStack_2c0 - lStack_2c8 != 0) {
    lVar40 = lStack_2c8;
  }
  FUN_10aedabd0(param_1,lVar40,lStack_2c0 - lStack_2c8 >> 2);
  uVar35 = param_2;
  func_0x00010c093a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar35 != 0) {
    _objc_retainAutorelease(uVar35);
    uVar36 = uVar35;
    func_0x00010bf25f00(uVar35);
    uVar37 = uVar35;
    func_0x00010c08fa60(uVar35);
    func_0x000107c27df8(param_1,uVar36,uVar37);
  }
  _objc_release(uVar35);
  lVar40 = 0x11331362f;
  if (lStack_2d8 - lStack_2e0 != 0) {
    lVar40 = lStack_2e0;
  }
  FUN_10aedac9c(param_1,lVar40,lStack_2d8 - lStack_2e0);
  func_0x00010c07eda0();
  uVar36 = param_2;
  func_0x00010c26a320();
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4588();
  uVar37 = param_2;
  func_0x00010c112da0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4588(param_1,uVar37);
  uVar38 = uVar38 & 0xffffffff;
  FUN_10aed6680(param_1,uVar38,uVar10 & 0xffffffff,uVar12 & 0xffffffff,uVar14 & 0xffffffff,
                uVar15 & 0xffffffff,uVar17 & 0xffffffff,uVar19 & 0xffffffff,uStack_2f8,uVar20,
                (int)uVar21,(int)uVar22,uVar23 & 0xffffffff,(char)uVar24);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar18);
  _objc_release(uVar16);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar41);
  _objc_release(uVar8);
  if (lStack_2e0 != 0) {
    lStack_2d8 = lStack_2e0;
    __ZdlPv();
  }
  if (lStack_2c8 != 0) {
    lStack_2c0 = lStack_2c8;
    __ZdlPv();
  }
  if (lStack_2b0 != 0) {
    lStack_2a8 = lStack_2b0;
    __ZdlPv();
  }
  if (lStack_298 != 0) {
    lStack_290 = lStack_298;
    __ZdlPv();
  }
  if (lStack_280 != 0) {
    lStack_278 = lStack_280;
    __ZdlPv();
  }
  if (lStack_268 != 0) {
    lStack_260 = lStack_268;
    __ZdlPv();
  }
  if (CONCAT44(uStack_24c,uStack_250) != 0) {
    lStack_248 = CONCAT44(uStack_24c,uStack_250);
    __ZdlPv();
  }
  if (lStack_238 != 0) {
    lStack_230 = lStack_238;
    __ZdlPv();
  }
  if (lStack_220 != 0) {
    lStack_218 = lStack_220;
    __ZdlPv();
  }
  if (CONCAT44(uStack_204,uStack_208) != 0) {
    lStack_200 = CONCAT44(uStack_204,uStack_208);
    __ZdlPv();
  }
  if (lStack_1f0 != 0) {
    lStack_1e8 = lStack_1f0;
    __ZdlPv();
  }
  uVar10 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(uVar41);
    _objc_release(uVar8);
    if (lStack_2e0 != 0) {
      lStack_2d8 = lStack_2e0;
      __ZdlPv();
    }
    if (lStack_2c8 != 0) {
      lStack_2c0 = lStack_2c8;
      __ZdlPv();
    }
    if (lStack_2b0 != 0) {
      lStack_2a8 = lStack_2b0;
      __ZdlPv();
    }
    if (lStack_298 != 0) {
      lStack_290 = lStack_298;
      __ZdlPv();
    }
    if (lStack_280 != 0) {
      lStack_278 = lStack_280;
      __ZdlPv();
    }
    if (lStack_268 != 0) {
      lStack_260 = lStack_268;
      __ZdlPv();
    }
    if (CONCAT44(uStack_24c,uStack_250) != 0) {
      lStack_248 = CONCAT44(uStack_24c,uStack_250);
      __ZdlPv();
    }
    if (lStack_238 != 0) {
      lStack_230 = lStack_238;
      __ZdlPv();
    }
    if (lStack_220 != 0) {
      lStack_218 = lStack_220;
      __ZdlPv();
    }
    if (CONCAT44(uStack_204,uStack_208) != 0) {
      lStack_200 = CONCAT44(uStack_204,uStack_208);
      __ZdlPv();
    }
    if (lStack_1f0 != 0) {
      lStack_1e8 = lStack_1f0;
      __ZdlPv();
    }
    _objc_release(param_2);
    __Unwind_Resume();
    _objc_retain(uVar38);
    uVar8 = uVar38;
    func_0x00010bf32840(uVar38);
    uVar41 = uVar38;
    func_0x00010c15ed20(uVar38);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    FUN_10aed4588(uVar10,uVar41);
    uVar12 = uVar38;
    func_0x00010bf93980(uVar38);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar10;
    FUN_10aed4588(uVar10,uVar12);
    *(undefined1 *)(uVar10 + 0x46) = 1;
    iVar3 = *(int *)(uVar10 + 0x20);
    iVar4 = *(int *)(uVar10 + 0x30);
    iVar5 = *(int *)(uVar10 + 0x28);
    func_0x000107c27db0(uVar10,4,uVar8,0);
    func_0x000107c27ddc(uVar10,8,uVar13 & 0xffffffff);
    func_0x000107c27ddc(uVar10,6,uVar11 & 0xffffffff);
    func_0x000107c27dc0(uVar10,(iVar3 - iVar4) + iVar5);
    _objc_release(uVar12);
    _objc_release(uVar41);
    _objc_release(uVar38);
    return uVar10;
  }
  return param_1;
}



/* Entry: 10aed3fd8; end: 10aed411f;  */

ulong FUN_10aed3fd8(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bf32840(param_2);
  uVar5 = param_2;
  func_0x00010c15ed20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_10aed4588(param_1,uVar5);
  uVar7 = param_2;
  func_0x00010bf93980(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  FUN_10aed4588(param_1,uVar7);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,4,uVar4,0);
  func_0x000107c27ddc(param_1,8,uVar8 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar6 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed4120; end: 10aed43eb;  */

void FUN_10aed4120(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long unaff_x21;
  undefined4 *puVar13;
  undefined4 *unaff_x23;
  undefined4 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined8 uStack_1d8;
  char *pcStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined4 *puStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 *puStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 auStack_f8 [17];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_2;
  _objc_retain(param_4);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puStack_148 = param_1;
  _objc_retain(param_4);
  lVar16 = param_4;
  lStack_150 = param_4;
  func_0x00010bf52a60();
  if (lVar16 != 0) {
    param_1 = (undefined8 *)0x0;
    puVar13 = (undefined4 *)0x0;
    unaff_x23 = (undefined4 *)0x0;
    unaff_x21 = *plStack_130;
    puStack_160 = param_2;
    do {
      param_4 = 0;
      puVar12 = param_1;
      puVar14 = unaff_x23;
      lStack_158 = lVar16;
      do {
        if (*plStack_130 != unaff_x21) {
          _objc_enumerationMutation(lStack_150);
        }
        uVar15 = *(undefined8 *)(lStack_138 + param_4 * 8);
        _objc_retain(uVar15);
        _objc_retain(uVar15);
        plVar8 = *(long **)(param_3 + 0x18);
        auStack_f8[0] = uVar15;
        if (plVar8 == (long *)0x0) {
          func_0x000104bfeb48();
          goto LAB_10aed436c;
        }
        puVar10 = param_2;
        (**(code **)(*plVar8 + 0x30))(plVar8,param_2,auStack_f8);
        _objc_release(auStack_f8[0]);
        if (puVar14 < puVar13) {
          unaff_x23 = puVar14 + 1;
          *puVar14 = (int)plVar8;
          param_1 = puVar12;
        }
        else {
          lVar16 = (long)puVar14 - (long)puVar12;
          uVar1 = (lVar16 >> 2) + 1;
          if (uVar1 >> 0x3e != 0) {
            FUN_10aedb5c4();
LAB_10aed436c:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10aed4370);
            (*pcVar7)();
          }
          uVar11 = (long)puVar13 - (long)puVar12 >> 1;
          if (uVar11 <= uVar1) {
            uVar11 = uVar1;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar13 - (long)puVar12)) {
            uVar11 = 0x3fffffffffffffff;
          }
          if (uVar11 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_10aed436c;
          }
          lVar9 = uVar11 << 2;
          __Znwm();
          puVar14 = (undefined4 *)(lVar9 + lVar16);
          puVar13 = (undefined4 *)(lVar9 + uVar11 * 4);
          param_1 = (undefined8 *)(puVar14 + -(lVar16 >> 2));
          unaff_x23 = puVar14 + 1;
          *puVar14 = (int)plVar8;
          puVar10 = puVar12;
          _memcpy(param_1,puVar12,lVar16);
          *puStack_148 = param_1;
          puStack_148[1] = unaff_x23;
          puStack_148[2] = puVar13;
          param_2 = puStack_160;
          lVar16 = lStack_158;
          if (puVar12 != (undefined8 *)0x0) {
            __ZdlPv(puVar12);
            param_2 = puStack_160;
            lVar16 = lStack_158;
          }
        }
        puStack_148[1] = unaff_x23;
        _objc_release(uVar15);
        param_4 = param_4 + 1;
        puVar12 = param_1;
        puVar14 = unaff_x23;
      } while (lVar16 != param_4);
      lVar16 = lStack_150;
      func_0x00010bf52a60();
    } while (lVar16 != 0);
  }
  _objc_release(lStack_150);
  lVar16 = lStack_150;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(lStack_150);
    _objc_release(lStack_150);
    lVar9 = lVar16;
    __Unwind_Resume();
    pcStack_168 = FUN_10aed43ec;
    puStack_1a0 = param_2;
    puStack_198 = unaff_x23;
    lStack_190 = lVar16;
    lStack_188 = unaff_x21;
    puStack_180 = param_1;
    lStack_178 = param_4;
    puStack_170 = &stack0xfffffffffffffff0;
    func_0x00010c0840e0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = &uStack_1c0;
    uStack_1c0 = 0;
    uStack_1b0 = 0x2020000000;
    uStack_1a8 = 0;
    puStack_1f0 = &uStack_1f8;
    uStack_1f8 = 0;
    uStack_1e8 = 0x3812000000;
    pcStack_1e0 = FUN_10aedb5d8;
    uStack_1d8 = 0x10aedb5e4;
    pcStack_1d0 = "";
    uStack_1c8 = 0;
    func_0x00010c0bd320();
    uVar6 = *(undefined1 *)(puStack_1b8 + 3);
    uVar2 = *(undefined4 *)(puStack_1f0 + 6);
    __Block_object_dispose(&uStack_1f8,8);
    __Block_object_dispose(&uStack_1c0,8);
    _objc_release(puVar10);
    *(undefined1 *)(lVar9 + 0x46) = 1;
    iVar3 = *(int *)(lVar9 + 0x20);
    iVar4 = *(int *)(lVar9 + 0x30);
    iVar5 = *(int *)(lVar9 + 0x28);
    func_0x000107c27de8(lVar9,6,uVar2);
    func_0x000107c27dec(lVar9,4,uVar6,0);
    func_0x000107c27dc0(lVar9,(iVar3 - iVar4) + iVar5);
    return;
  }
  return;
}



/* Entry: 10aed43ec; end: 10aed4587;  */

void FUN_10aed43ec(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  char *pcStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  func_0x00010c0840e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3812000000;
  pcStack_80 = FUN_10aedb5d8;
  uStack_78 = 0x10aedb5e4;
  pcStack_70 = "";
  uStack_68 = 0;
  func_0x00010c0bd320();
  uVar5 = *(undefined1 *)(puStack_58 + 3);
  uVar1 = *(undefined4 *)(puStack_90 + 6);
  __Block_object_dispose(&uStack_98,8);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x30);
  iVar4 = *(int *)(param_1 + 0x28);
  func_0x000107c27de8(param_1,6,uVar1);
  func_0x000107c27dec(param_1,4,uVar5,0);
  func_0x000107c27dc0(param_1,(iVar2 - iVar3) + iVar4);
  return;
}



/* Entry: 10aed4588; end: 10aed46b7;  */

undefined8 FUN_10aed4588(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_10aed4668;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_10aed4668;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_10aed4628;
    param_1 = 0;
  }
  else {
LAB_10aed4628:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x000107c27df0(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_10aed4668:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed46b8; end: 10aed46cb;  */

undefined * FUN_10aed46b8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  _objc_retain(param_2);
  uVar5 = param_2;
  func_0x00010bfe3760(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  FUN_10aed4588(puVar4,uVar5);
  uVar7 = param_2;
  func_0x00010bfe36c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  FUN_10aed4588(puVar4,uVar7);
  puVar4[0x46] = 1;
  iVar1 = *(int *)(puVar4 + 0x20);
  iVar2 = *(int *)(puVar4 + 0x30);
  iVar3 = *(int *)(puVar4 + 0x28);
  func_0x000107c27ddc(puVar4,6,(ulong)puVar8 & 0xffffffff);
  func_0x000107c27ddc(puVar4,4,(ulong)puVar6 & 0xffffffff);
  func_0x000107c27dc0(puVar4,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10aed46cc; end: 10aed47e7;  */

ulong FUN_10aed46cc(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bfe3760(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_10aed4588(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010bfe36c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_10aed4588(param_1,uVar6);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed47e8; end: 10aed494f;  */

ulong FUN_10aed47e8(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bdc3360(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_10aed4588(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010bf38a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_10aed4588(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010c13b460(param_2);
  uVar9 = param_2;
  func_0x00010c072920(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dec(param_1,0xe,uVar9,0);
  func_0x000107c27e1c(param_1,0xc,uVar8,0);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed4950; end: 10aed4abf;  */

ulong FUN_10aed4950(long *param_1,int *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
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
  piVar7 = param_2;
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
  uVar4 = param_3;
  func_0x00010bf52a60();
  if (uVar4 != 0) {
    lVar8 = *plStack_110;
    do {
      uVar10 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        piVar7 = *(int **)(lStack_118 + uVar10 * 8);
        piVar5 = param_2;
        FUN_10aed4588();
        aiStack_124[0] = (int)piVar5;
        if (aiStack_124[0] != 0) {
          piVar7 = aiStack_124;
          func_0x000107c27e20(param_1);
        }
        uVar10 = uVar10 + 1;
      } while (uVar4 != uVar10);
      uVar4 = param_3;
      func_0x00010bf52a60();
    } while (uVar4 != 0);
  }
  _objc_release(param_3);
  uVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar4;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(piVar7);
  piVar5 = piVar7;
  func_0x00010c25dfa0();
  _objc_retainAutoreleasedReturnValue();
  if (piVar5 == (int *)0x0) {
    uVar10 = 0;
  }
  else {
    piVar6 = piVar7;
    func_0x00010c25dfa0(piVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    FUN_10aed6f48(uVar4,piVar6);
    _objc_release(piVar6);
    uVar10 = uVar10 & 0xffffffff;
  }
  _objc_release(piVar5);
  piVar5 = piVar7;
  func_0x00010bf6a9a0();
  _objc_retainAutoreleasedReturnValue();
  if (piVar5 == (int *)0x0) {
    uVar9 = 0;
  }
  else {
    piVar6 = piVar7;
    func_0x00010bf6a9a0(piVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    FUN_10aed71ac(uVar4,piVar6);
    _objc_release(piVar6);
    uVar9 = uVar9 & 0xffffffff;
  }
  _objc_release(piVar5);
  *(undefined1 *)(uVar4 + 0x46) = 1;
  iVar1 = *(int *)(uVar4 + 0x20);
  iVar2 = *(int *)(uVar4 + 0x30);
  iVar3 = *(int *)(uVar4 + 0x28);
  func_0x00010aed79c8(uVar4,6,uVar9);
  func_0x00010aed7a38(uVar4,4,uVar10);
  func_0x000107c27dc0(uVar4,(iVar1 - iVar2) + iVar3);
  _objc_release(piVar7);
  return uVar4;
}



/* Entry: 10aed4ac0; end: 10aed4c4f;  */

ulong FUN_10aed4ac0(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c25dfa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010c25dfa0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    FUN_10aed6f48(param_1,lVar5);
    _objc_release(lVar5);
    uVar6 = uVar6 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010bf6a9a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010bf6a9a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    FUN_10aed71ac(param_1,lVar5);
    _objc_release(lVar5);
    uVar7 = uVar7 & 0xffffffff;
  }
  _objc_release(lVar4);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x00010aed79c8(param_1,6,uVar7);
  func_0x00010aed7a38(param_1,4,uVar6);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed4c50; end: 10aed4d0f;  */

long FUN_10aed4c50(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  _objc_retain(param_3);
  func_0x00010c24e860(param_3);
  func_0x00010bf946c0(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(param_2,6);
  func_0x000107c27db8(param_1,0,param_2,4);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 10aed4d10; end: 10aed508f;  */

ulong FUN_10aed4d10(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bef4d80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  FUN_10aed4588(param_1,lVar1);
  lVar3 = param_2;
  func_0x00010c11ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  FUN_10aed4588(param_1,lVar3);
  lVar5 = param_2;
  func_0x00010c23e500();
  lVar6 = param_2;
  func_0x00010bf93c20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_10aed4588(param_1,lVar6);
  lVar8 = param_2;
  func_0x00010bef5fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_10aed4588(param_1,lVar8);
  lVar10 = param_2;
  func_0x00010c11fae0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_10aed4588(param_1,lVar10);
  lVar12 = param_2;
  func_0x00010c11fa40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  FUN_10aed4588(param_1,lVar12);
  lVar14 = param_2;
  func_0x00010bf93ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  FUN_10aed4588(param_1,lVar14);
  lVar16 = param_2;
  func_0x00010c23d7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_1;
  FUN_10aed4588(param_1,lVar16);
  lVar18 = param_2;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar18 == 0) {
    uVar22 = 0;
  }
  else {
    lVar19 = lVar18;
    _objc_retainAutorelease(lVar18);
    func_0x00010bf25f00();
    lVar20 = lVar18;
    func_0x00010c08fa60(lVar18);
    uVar22 = param_1;
    func_0x000107c27df8(param_1,lVar19,lVar20);
  }
  _objc_release(lVar18);
  lVar19 = param_2;
  func_0x00010bef4d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_1;
  FUN_10aed4588(param_1,lVar19);
  FUN_10aed7d04(param_1,uVar2 & 0xffffffff,uVar4 & 0xffffffff,lVar5,uVar7 & 0xffffffff,
                uVar9 & 0xffffffff,uVar11 & 0xffffffff,uVar13 & 0xffffffff,uVar15 & 0xffffffff,
                uVar17 & 0xffffffff,uVar22 & 0xffffffff,uVar21 & 0xffffffff);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar16);
  _objc_release(lVar14);
  _objc_release(lVar12);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed5090; end: 10aed56a3;  */

ulong FUN_10aed5090(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined ***pppuVar5;
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
  undefined8 uVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined4 uStack_154;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_110 = &PTR_FUN_110c90068;
  pcStack_108 = FUN_10aed7fdc;
  pppuStack_f8 = &ppuStack_110;
  uVar4 = param_2;
  func_0x00010c257200();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lStack_168 = 0;
  uStack_160 = 0;
  lStack_170 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(uVar4);
  uVar27 = uVar4;
  func_0x00010bf52a60();
  if (uVar27 != 0) {
    lVar30 = *plStack_140;
    do {
      uVar31 = 0;
      do {
        if (*plStack_140 != lVar30) {
          _objc_enumerationMutation(uVar4);
        }
        uVar29 = *(undefined8 *)(lStack_148 + uVar31 * 8);
        _objc_retain(uVar29);
        pppuVar5 = &ppuStack_110;
        FUN_10aed838c(pppuVar5,param_1,uVar29);
        uStack_154 = SUB84(pppuVar5,0);
        FUN_10aed82cc(&lStack_170,&uStack_154);
        _objc_release(uVar29);
        uVar31 = uVar31 + 1;
      } while (uVar27 != uVar31);
      uVar27 = uVar4;
      func_0x00010bf52a60();
    } while (uVar27 != 0);
  }
  _objc_release(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar4);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar30 = 0x20;
  }
  else {
    if (pppuStack_f8 == (undefined ***)0x0) goto LAB_10aed5208;
    lVar30 = 0x28;
  }
  (**(code **)((long)*pppuStack_f8 + lVar30))();
LAB_10aed5208:
  uVar4 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_1;
  FUN_10aed4588();
  uVar31 = param_2;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_10aed4588();
  uVar7 = param_2;
  func_0x00010c23c2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  FUN_10aed4588();
  uVar9 = param_2;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  FUN_10aed4588();
  uVar11 = param_2;
  func_0x00010bf0b760();
  uVar12 = param_2;
  func_0x00010c136b80();
  uVar13 = param_2;
  func_0x00010c14e120();
  uVar14 = param_2;
  func_0x00010c1087e0();
  uVar15 = param_2;
  func_0x00010c0ed520();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  FUN_10aed4588();
  uVar17 = param_2;
  func_0x00010bf933c0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_1;
  FUN_10aed4588();
  uVar19 = param_2;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_1;
  FUN_10aed4588();
  uVar21 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_1;
  FUN_10aed4588(param_1,uVar21);
  uVar23 = param_2;
  func_0x00010bf93ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar23 == 0) {
    uVar28 = 0;
  }
  else {
    _objc_retainAutorelease(uVar23);
    uVar24 = uVar23;
    func_0x00010bf25f00(uVar23);
    uVar32 = uVar23;
    func_0x00010c08fa60(uVar23);
    uVar28 = param_1;
    func_0x000107c27df8(param_1,uVar24,uVar32);
  }
  _objc_release(uVar23);
  uVar24 = param_2;
  func_0x00010bf93e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar24 == 0) {
    uVar32 = 0;
  }
  else {
    _objc_retainAutorelease(uVar24);
    uVar25 = uVar24;
    func_0x00010bf25f00(uVar24);
    uVar26 = uVar24;
    func_0x00010c08fa60(uVar24);
    uVar32 = param_1;
    func_0x000107c27df8(param_1,uVar25,uVar26);
  }
  _objc_release(uVar24);
  lVar30 = 0x113313628;
  if (lStack_168 - lStack_170 != 0) {
    lVar30 = lStack_170;
  }
  uVar25 = param_1;
  func_0x00010aed8598(param_1,lVar30,lStack_168 - lStack_170 >> 2);
  uVar27 = uVar27 & 0xffffffff;
  FUN_10aed8120(param_1,uVar27,uVar6 & 0xffffffff,uVar8 & 0xffffffff,uVar10 & 0xffffffff,
                uVar11 & 0xffffffff,uVar12 & 0xffffffff,uVar13,uVar14,uVar16 & 0xffffffff,
                uVar18 & 0xffffffff,uVar20 & 0xffffffff,uVar22 & 0xffffffff,uVar28 & 0xffffffff,
                uVar32 & 0xffffffff,uVar25 & 0xffffffff);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar21);
  _objc_release(uVar19);
  _objc_release(uVar17);
  _objc_release(uVar15);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar31);
  _objc_release(uVar4);
  if (lStack_170 != 0) {
    lStack_168 = lStack_170;
    __ZdlPv();
  }
  uVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(uVar23);
  _objc_release(uVar21);
  _objc_release(uVar19);
  _objc_release(uVar17);
  _objc_release(uVar15);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar31);
  _objc_release(uVar4);
  if (lStack_170 != 0) {
    lStack_168 = lStack_170;
    __ZdlPv();
  }
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain(uVar27);
  uVar4 = uVar27;
  func_0x00010c092120();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uVar31 = 0;
  }
  else {
    uVar7 = uVar27;
    func_0x00010c092120(uVar27);
    _objc_retainAutoreleasedReturnValue();
    uVar31 = uVar6;
    FUN_10aed8730(uVar6,uVar7);
    _objc_release(uVar7);
    uVar31 = uVar31 & 0xffffffff;
  }
  _objc_release(uVar4);
  uVar4 = uVar27;
  func_0x00010bf0ea80(uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  FUN_10aed4588(uVar6,uVar4);
  uVar8 = uVar27;
  func_0x00010c14f7e0(uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  FUN_10aed4588(uVar6,uVar8);
  *(undefined1 *)(uVar6 + 0x46) = 1;
  iVar1 = *(int *)(uVar6 + 0x20);
  iVar2 = *(int *)(uVar6 + 0x30);
  iVar3 = *(int *)(uVar6 + 0x28);
  func_0x000107c27ddc(uVar6,8,uVar9 & 0xffffffff);
  func_0x000107c27ddc(uVar6,6,uVar7 & 0xffffffff);
  FUN_10aed894c(uVar6,4,uVar31);
  func_0x000107c27dc0(uVar6,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar27);
  return uVar6;
}



/* Entry: 10aed56a4; end: 10aed5843;  */

ulong FUN_10aed56a4(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c092120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar8 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010c092120(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    FUN_10aed8730(param_1,lVar5);
    _objc_release(lVar5);
    uVar8 = uVar8 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010bf0ea80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_10aed4588(param_1,lVar4);
  lVar5 = param_2;
  func_0x00010c14f7e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_10aed4588(param_1,lVar5);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,8,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar6 & 0xffffffff);
  FUN_10aed894c(param_1,4,uVar8);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed5844; end: 10aed5bbf;  */

ulong FUN_10aed5844(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uStack_70;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c0b4b60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar11 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010c0b4b60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_1;
    FUN_10aed89bc(param_1,lVar5);
    _objc_release(lVar5);
    uVar11 = uVar11 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010c2a3d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar10 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010c2a3d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_1;
    FUN_10aed8b04(param_1,lVar5);
    _objc_release(lVar5);
    uVar10 = uVar10 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010bf05560();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uStack_70 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010bf05560(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = param_1;
    FUN_10aed8bf4(param_1,lVar5);
    _objc_release(lVar5);
    uStack_70 = uStack_70 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010bf67c00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar12 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010bf67c00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_1;
    FUN_10aed8dc0(param_1,lVar5);
    _objc_release(lVar5);
    uVar12 = uVar12 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010bf0d600();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_10aed4588(param_1,lVar4);
  lVar5 = param_2;
  func_0x00010bf5d560(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_10aed4588(param_1,lVar5);
  lVar8 = param_2;
  func_0x00010c09e4a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_10aed4588(param_1,lVar8);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,0x10,uVar9 & 0xffffffff);
  FUN_10aed920c(param_1,0xe,uVar12);
  func_0x00010aed927c(param_1,0xc,uStack_70);
  func_0x000107c27ddc(param_1,10,uVar7 & 0xffffffff);
  func_0x00010aed92ec(param_1,8,uVar10);
  func_0x00010aed935c(param_1,6,uVar11);
  func_0x000107c27ddc(param_1,4,uVar6 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed5bc0; end: 10aed5cab;  */

ulong FUN_10aed5bc0(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bfcef60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_10aed4588(param_2,uVar4);
  func_0x00010bf32a40(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(param_1,0,param_2,6);
  func_0x000107c27ddc(param_2,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 10aed5cac; end: 10aed5e37;  */

ulong FUN_10aed5cac(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c277e80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_10aed4588(param_1,lVar4);
  lVar6 = param_2;
  func_0x00010bf4d360();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar6 == 0) {
    uVar9 = 0;
  }
  else {
    lVar7 = lVar6;
    _objc_retainAutorelease(lVar6);
    func_0x00010bf25f00();
    lVar8 = lVar6;
    func_0x00010c08fa60(lVar6);
    uVar9 = param_1;
    func_0x000107c27df8(param_1,lVar7,lVar8);
  }
  _objc_release(lVar6);
  lVar7 = param_2;
  func_0x00010c290120(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27de4(param_1,6,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dec(param_1,8,lVar7,0);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed5e38; end: 10aed5f23;  */

ulong FUN_10aed5e38(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lStack_48;
  long lStack_40;
  
  func_0x00010c129dc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4950(&lStack_48,param_1,param_2);
  _objc_release(param_2);
  lVar1 = 0x1130c2400;
  if (lStack_40 - lStack_48 != 0) {
    lVar1 = lStack_48;
  }
  uVar4 = param_1;
  func_0x000107c27e28(param_1,lVar1,lStack_40 - lStack_48 >> 2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c27e24(param_1,4,uVar4 & 0xffffffff);
  func_0x000107c27dc0(param_1,((int)uVar5 - (int)uVar3) + (int)uVar2);
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aed5f24; end: 10aed5fdb;  */

long FUN_10aed5f24(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bf32b00(param_3);
  func_0x00010bfcd100(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(param_1,0,param_2,6);
  func_0x000107c27db0(param_2,4,uVar4,0);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 10aed5fdc; end: 10aed610f;  */

ulong FUN_10aed5fdc(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c106220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010c106220(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    FUN_10aed9958(param_1,lVar5);
    _objc_release(lVar5);
    uVar6 = uVar6 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010c27dd80(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  FUN_10aed9ac8(param_1,6,uVar6);
  func_0x000107c27e1c(param_1,4,lVar4,0);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed6110; end: 10aed63b7;  */

ulong FUN_10aed6110(ulong param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined ***pppuVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_144;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_f8;
  code *pcStack_f0;
  undefined ***pppuStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f8 = &PTR_FUN_110c90328;
  pcStack_f0 = FUN_10aed47e8;
  pppuStack_e0 = &ppuStack_f8;
  func_0x00010c096880();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_160 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_2);
  lVar14 = param_2;
  func_0x00010bf52a60();
  if (lVar14 != 0) {
    lVar17 = *plStack_130;
    do {
      lVar18 = 0;
      do {
        if (*plStack_130 != lVar17) {
          _objc_enumerationMutation(param_2);
        }
        uVar15 = *(undefined8 *)(lStack_138 + lVar18 * 8);
        _objc_retain(uVar15);
        pppuVar5 = &ppuStack_f8;
        FUN_10aed9bf8(pppuVar5,param_1,uVar15);
        uStack_144 = SUB84(pppuVar5,0);
        func_0x00010aed9b38(&uStack_160,&uStack_144);
        _objc_release(uVar15);
        lVar18 = lVar18 + 1;
      } while (lVar14 != lVar18);
      lVar14 = param_2;
      func_0x00010bf52a60();
    } while (lVar14 != 0);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  if (pppuStack_e0 == &ppuStack_f8) {
    lVar14 = 0x20;
LAB_10aed626c:
    (**(code **)((long)*pppuStack_e0 + lVar14))();
  }
  else if (pppuStack_e0 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_10aed626c;
  }
  uVar6 = 0x113313629;
  if (uStack_158 - uStack_160 != 0) {
    uVar6 = uStack_160;
  }
  uVar13 = param_1;
  func_0x00010aed9e04(param_1,uVar6,(long)(uStack_158 - uStack_160) >> 2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar15 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010aed9d94(param_1,4,uVar13 & 0xffffffff);
  uVar13 = (ulong)(uint)(((int)uVar16 - (int)uVar1) + (int)uVar15);
  func_0x000107c27dc0(param_1);
  uVar6 = uStack_160;
  if (uStack_160 != 0) {
    uStack_158 = uStack_160;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(uVar15);
  if (uStack_160 != 0) {
    uStack_158 = uStack_160;
    __ZdlPv();
  }
  _objc_release(uVar15);
  _objc_release(uVar15);
  if (pppuStack_e0 == &ppuStack_f8) {
    lVar14 = 0x20;
  }
  else {
    if (pppuStack_e0 == (undefined ***)0x0) goto LAB_10aed63b0;
    lVar14 = 0x28;
  }
  (**(code **)((long)*pppuStack_e0 + lVar14))();
LAB_10aed63b0:
  __Unwind_Resume();
  _objc_retain(uVar13);
  uVar7 = uVar13;
  func_0x00010c28f800();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  FUN_10aed4588(uVar6,uVar7);
  uVar9 = uVar13;
  func_0x00010c15e6c0(uVar13);
  uVar10 = uVar13;
  func_0x00010c15e5c0(uVar13);
  uVar11 = uVar13;
  func_0x00010c26e500(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar6;
  FUN_10aed4588(uVar6,uVar11);
  *(undefined1 *)(uVar6 + 0x46) = 1;
  iVar2 = *(int *)(uVar6 + 0x20);
  iVar3 = *(int *)(uVar6 + 0x30);
  iVar4 = *(int *)(uVar6 + 0x28);
  func_0x000107c27db0(uVar6,8,uVar10,0);
  func_0x000107c27db0(uVar6,6,uVar9,0);
  func_0x000107c27ddc(uVar6,10,uVar12 & 0xffffffff);
  func_0x000107c27ddc(uVar6,4,uVar8 & 0xffffffff);
  func_0x000107c27dc0(uVar6,(iVar2 - iVar3) + iVar4);
  _objc_release(uVar11);
  _objc_release(uVar7);
  _objc_release(uVar13);
  return uVar6;
}



/* Entry: 10aed63b8; end: 10aed652b;  */

ulong FUN_10aed63b8(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c28f800();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_10aed4588(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c15e6c0(param_2);
  uVar7 = param_2;
  func_0x00010c15e5c0(param_2);
  uVar8 = param_2;
  func_0x00010c26e500(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_10aed4588(param_1,uVar8);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,8,uVar7,0);
  func_0x000107c27db0(param_1,6,uVar6,0);
  func_0x000107c27ddc(param_1,10,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed652c; end: 10aed667f;  */

ulong FUN_10aed652c(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bfb7600();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010bfb7600(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    FUN_10aed9ed0(param_1,lVar5);
    _objc_release(lVar5);
    uVar6 = uVar6 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010c280e00(param_2);
  lVar5 = param_2;
  func_0x00010bf61400(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  FUN_10aed9fe0(param_1,8,uVar6);
  func_0x000107c27dec(param_1,6,lVar5,0);
  func_0x000107c27dec(param_1,4,lVar4,0);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed6680; end: 10aed6ceb;  */

ulong FUN_10aed6680(ulong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                   undefined4 param_9,undefined4 param_10,undefined8 param_11,char param_12,
                   char param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                   undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
                   undefined4 param_21,undefined1 param_22,undefined4 param_23,undefined8 param_24,
                   undefined8 param_25,undefined4 param_26,undefined4 param_27,undefined4 param_28,
                   undefined4 param_29,undefined4 param_30,char param_31,undefined4 param_32,
                   undefined4 param_33,undefined4 param_34,undefined4 param_35,undefined4 param_36,
                   undefined4 param_37,undefined4 param_38,undefined4 param_39,undefined1 param_40,
                   undefined4 param_41,undefined4 param_42,undefined4 param_43,undefined1 param_44,
                   undefined4 param_45,undefined8 param_46,undefined4 param_47,undefined4 param_48,
                   undefined4 param_49,undefined4 param_50,char param_51,undefined4 param_52,
                   undefined4 param_53,undefined4 param_54,undefined4 param_55,undefined4 param_56,
                   undefined1 param_57,undefined4 param_58,undefined4 param_59,undefined4 param_60,
                   undefined4 param_61,undefined4 param_62,undefined1 param_63,undefined4 param_64,
                   undefined4 param_65,undefined4 param_66,char param_67,undefined4 param_68,
                   undefined4 param_69,undefined4 param_70,undefined4 param_71,undefined4 param_72,
                   undefined4 param_73,undefined4 param_74,undefined4 param_75,undefined4 param_76,
                   undefined4 param_77,undefined4 param_78,undefined4 param_79,undefined4 param_80,
                   char param_81,undefined4 param_82,undefined4 param_83,undefined4 param_84,
                   undefined4 param_85,undefined4 param_86,undefined4 param_87,undefined4 param_88,
                   undefined4 param_89,undefined4 param_90,undefined4 param_91,undefined4 param_92,
                   undefined4 param_93,undefined4 param_94,undefined1 param_95,undefined4 param_96,
                   undefined4 param_97,undefined4 param_98,undefined4 param_99,undefined4 param_100,
                   undefined4 param_101,undefined4 param_102,undefined4 param_103,
                   undefined4 param_104,undefined4 param_105,undefined4 param_106,
                   undefined4 param_107)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  ulong uVar6;
  short *psVar7;
  long lVar8;
  uint *puVar9;
  short *psVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,0x46,param_46,0);
  func_0x000107c27db0(param_1,0x2a,param_25,0);
  func_0x000107c27dbc(param_1,0x28,param_24,0);
  func_0x000107c27dbc(param_1,0x16,param_11,0);
  func_0x00010aeda050(param_1,0x86,param_107);
  func_0x00010aeda0c0(param_1,0x84,param_105);
  func_0x000107c27ddc(param_1,0x82,param_103);
  func_0x00010aeda130(param_1,0x80,param_101);
  func_0x000107c27ddc(param_1,0x7e,param_99);
  func_0x00010aeda1a0(param_1,0x7c,param_97);
  func_0x00010aeda210(param_1,0x78,param_93);
  func_0x00010aeda280(param_1,0x76,param_91);
  func_0x000107c27de4(param_1,0x74,param_89);
  func_0x00010aeda2f0(param_1,0x72,param_87);
  func_0x000107c27de4(param_1,0x70,param_85);
  func_0x00010aeda360(param_1,0x6e,param_83);
  func_0x000107c27de4(param_1,0x68,param_79);
  func_0x00010aeda3d0(param_1,0x66,param_77);
  func_0x00010aeda440(param_1,100,param_75);
  func_0x000107c27ddc(param_1,0x62,param_73);
  func_0x00010aeda4b0(param_1,0x60,param_71);
  func_0x000107c27ddc(param_1,0x5e,param_69);
  func_0x00010aeda520(param_1,0x5a,param_65);
  func_0x000107c27de4(param_1,0x56,param_61);
  func_0x000107c27ddc(param_1,0x54,param_59);
  func_0x000107c27e24(param_1,0x50,param_55);
  func_0x000107c27ddc(param_1,0x4e,param_53);
  func_0x00010aeda590(param_1,0x4a,param_49);
  func_0x000107c27e24(param_1,0x48,param_47);
  func_0x000107c27ddc(param_1,0x40,param_42);
  func_0x000107c27e24(param_1,0x3c,param_38);
  func_0x000107c27e24(param_1,0x3a,param_36);
  func_0x000107c27ddc(param_1,0x38,param_34);
  func_0x000107c27ddc(param_1,0x36,param_32);
  func_0x00010aeda600(param_1,0x2e,param_28);
  func_0x00010aeda670(param_1,0x2c,param_26);
  func_0x00010aeda6e0(param_1,0x24,param_20);
  func_0x00010aeda750(param_1,0x22,param_18);
  func_0x000107c27e24(param_1,0x1c,param_14);
  func_0x00010aeda7c0(param_1,0x14,param_9);
  func_0x000107c27ddc(param_1,0x12,param_8);
  func_0x000107c27ddc(param_1,0xe,param_7);
  func_0x00010aeda830(param_1,0xc,param_6);
  func_0x000107c27ddc(param_1,10,param_5);
  func_0x000107c27ddc(param_1,8,param_4);
  func_0x000107c27ddc(param_1,6,param_3);
  func_0x000107c27ddc(param_1,4,param_2);
  func_0x000107c27dec(param_1,0x7a,param_95,0);
  func_0x000107c27e1c(param_1,0x6c,(int)param_81,0);
  func_0x000107c27e1c(param_1,0x5c,(int)param_67,0);
  func_0x000107c27dec(param_1,0x58,param_63,0);
  func_0x000107c27dec(param_1,0x52,param_57,0);
  func_0x000107c27e1c(param_1,0x4c,(int)param_51,0);
  func_0x000107c27dec(param_1,0x44,param_44,0);
  func_0x000107c27dec(param_1,0x3e,param_40,0);
  func_0x000107c27e1c(param_1,0x34,(int)param_31,0);
  func_0x000107c27dec(param_1,0x32,param_30._1_1_,0);
  func_0x000107c27dec(param_1,0x30,(undefined1)param_30,0);
  func_0x000107c27dec(param_1,0x26,param_22,0);
  func_0x000107c27dec(param_1,0x20,param_16._1_1_,0);
  func_0x000107c27dec(param_1,0x1e,(undefined1)param_16,0);
  func_0x000107c27e1c(param_1,0x1a,(int)param_13,0);
  func_0x000107c27e1c(param_1,0x18,(int)param_12,0);
  uVar6 = param_1;
  func_0x0001001ce4e8(param_1,0);
  uVar11 = *(ushort *)(param_1 + 0x44) + 2 & 0xffff;
  if (uVar11 < 5) {
    uVar11 = 4;
  }
  uVar12 = (ulong)uVar11;
  *(short *)(param_1 + 0x44) = (short)uVar11;
  lVar8 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar8 - *(long *)(param_1 + 0x38)) < uVar12) {
    func_0x0001001cde7c(param_1,uVar12);
    lVar8 = *(long *)(param_1 + 0x30);
  }
  *(ulong *)(param_1 + 0x30) = lVar8 - uVar12;
  func_0x000107c60ee4(lVar8 - uVar12,uVar12);
  psVar10 = *(short **)(param_1 + 0x30);
  puVar14 = *(uint **)(param_1 + 0x38);
  psVar10[1] = (short)uVar6 - (((short)uVar2 - (short)uVar3) + (short)uVar4);
  *psVar10 = *(short *)(param_1 + 0x44);
  puVar13 = puVar14 + (ulong)*(uint *)(param_1 + 0x40) * -2;
  puVar9 = puVar13;
  if (*(uint *)(param_1 + 0x40) != 0) {
    do {
      *(short *)((long)psVar10 + (ulong)(ushort)puVar9[1]) = (short)uVar6 - (short)*puVar9;
      puVar9 = puVar9 + 2;
    } while (puVar9 < puVar14);
  }
  *(uint **)(param_1 + 0x38) = puVar13;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  lVar8 = *(long *)(param_1 + 0x20);
  puVar9 = *(uint **)(param_1 + 0x28);
  uVar11 = ((int)lVar8 - (int)psVar10) + (int)puVar9;
  if (*(char *)(param_1 + 0x51) == '\x01' && puVar9 < puVar13) {
    sVar5 = *psVar10;
    puVar14 = puVar9;
    do {
      uVar1 = *puVar14;
      psVar7 = (short *)((long)puVar9 + (lVar8 - (ulong)uVar1));
      if ((sVar5 == *psVar7) && (func_0x000107c610b0(psVar7,psVar10,sVar5), (int)psVar7 == 0)) {
        psVar10 = (short *)((long)psVar10 + (ulong)(uVar11 - (int)uVar6));
        *(short **)(param_1 + 0x30) = psVar10;
        uVar11 = uVar1;
        break;
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 < puVar13);
  }
  if (uVar11 == ((int)lVar8 + (int)puVar9) - (int)psVar10) {
    if ((ulong)((long)psVar10 - (long)puVar13) < 4) {
      func_0x0001001cde7c(param_1,4);
      puVar13 = *(uint **)(param_1 + 0x38);
      lVar8 = *(long *)(param_1 + 0x20);
      puVar9 = *(uint **)(param_1 + 0x28);
    }
    *puVar13 = uVar11;
    *(uint **)(param_1 + 0x38) = puVar13 + 1;
  }
  *(uint *)((long)puVar9 + (lVar8 - (uVar6 & 0xffffffff))) = uVar11 - (int)uVar6;
  *(undefined1 *)(param_1 + 0x46) = 0;
  return uVar6;
}



/* Entry: 10aed6cec; end: 10aed6dab;  */

long * FUN_10aed6cec(long *param_1,undefined4 *param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uStack_68;
  
  plVar3 = param_1 + 2;
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 < (undefined4 *)*plVar3) {
    puVar9 = puVar7 + 1;
    *puVar7 = *param_2;
  }
  else {
    lVar8 = (long)puVar7 - *param_1;
    uVar1 = (lVar8 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      FUN_10aed6e34();
      _objc_retain(param_3);
      plVar3 = (long *)plVar3[3];
      uStack_68 = param_3;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,param_2,&uStack_68);
        _objc_release(uStack_68);
        return plVar3;
      }
      func_0x000104bfeb48();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10aed6e20);
      (*pcVar2)();
    }
    uVar4 = *plVar3 - *param_1;
    uVar5 = (long)uVar4 >> 1;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar5 = 0x3fffffffffffffff;
    }
    FUN_10aed6e48();
    puVar7 = (undefined4 *)((long)plVar3 + lVar8);
    lVar8 = (long)plVar3 + uVar5 * 4;
    lVar6 = (long)puVar7 - (param_1[1] - *param_1);
    puVar9 = puVar7 + 1;
    *puVar7 = *param_2;
    _memcpy(lVar6);
    plVar3 = (long *)*param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar9;
    param_1[2] = lVar8;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return plVar3;
}



/* Entry: 10aed6dac; end: 10aed6e33;  */

long * FUN_10aed6dac(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  uStack_38 = param_3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2,&uStack_38);
    _objc_release(uStack_38);
    return plVar2;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aed6e20);
  (*pcVar1)();
}



/* Entry: 10aed6e34; end: 10aed6e47;  */

void FUN_10aed6e34(undefined8 param_1,ulong param_2)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  return;
}



/* Entry: 10aed6e48; end: 10aed6e7b;  */

void FUN_10aed6e48(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  return;
}



/* Entry: 10aed6e7c; end: 10aed6e83;  */

void FUN_10aed6e7c(void)

{
  return;
}



/* Entry: 10aed6e84; end: 10aed6ebb;  */

void FUN_10aed6e84(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110c8ff08;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10aed6ebc; end: 10aed6eff;  */

void FUN_10aed6ebc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c8ff08;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10aed6f00; end: 10aed6f3b;  */

long FUN_10aed6f00(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110c8ff78);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aed6f3c; end: 10aed6f47;  */

undefined ** FUN_10aed6f3c(void)

{
  return &PTR_DAT_110c8ff78;
}



/* Entry: 10aed6f48; end: 10aed71ab;  */

ulong FUN_10aed6f48(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bf8ac40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar12 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010bf8ac40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_1;
    FUN_10aed74e0(param_1,lVar5);
    _objc_release(lVar5);
    uVar12 = uVar12 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_10aed4588(param_1,lVar4);
  lVar5 = param_2;
  func_0x00010c26c800();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_10aed4588(param_1,lVar5);
  lVar8 = param_2;
  func_0x00010bf40c40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_10aed4588(param_1,lVar8);
  lVar10 = param_2;
  func_0x00010bf8ac20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_10aed4588(param_1,lVar10);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  FUN_10aed75fc(param_1,0xc,uVar12);
  func_0x000107c27ddc(param_1,10,uVar11 & 0xffffffff);
  func_0x000107c27ddc(param_1,8,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar6 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed71ac; end: 10aed74df;  */

ulong FUN_10aed71ac(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uStack_88;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c29e100();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_88 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010c29e100(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = param_1;
    FUN_10aed766c(param_1,lVar2);
    _objc_release(lVar2);
    uStack_88 = uStack_88 & 0xffffffff;
  }
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010beffa20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  FUN_10aed4588(param_1,lVar1);
  lVar2 = param_2;
  func_0x00010c104260();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  FUN_10aed4588(param_1,lVar2);
  lVar5 = param_2;
  func_0x00010bfe3c20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_10aed4588(param_1,lVar5);
  lVar7 = param_2;
  func_0x00010c2a0740();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  FUN_10aed4588(param_1,lVar7);
  lVar9 = param_2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  FUN_10aed4588(param_1,lVar9);
  lVar11 = param_2;
  func_0x00010c24aae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  FUN_10aed4588(param_1,lVar11);
  lVar13 = param_2;
  func_0x00010c24a240(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  FUN_10aed4588(param_1,lVar13);
  lVar15 = param_2;
  func_0x00010c26f0e0();
  lVar16 = param_2;
  func_0x00010c0b5480(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_1;
  FUN_10aed4588(param_1,lVar16);
  lVar18 = param_2;
  func_0x00010c0b54a0();
  FUN_10aed780c(param_1,uStack_88,uVar3 & 0xffffffff,uVar4 & 0xffffffff,uVar6 & 0xffffffff,
                uVar8 & 0xffffffff,uVar10 & 0xffffffff,uVar12 & 0xffffffff,uVar14 & 0xffffffff,
                lVar15,uVar17 & 0xffffffff,lVar18);
  _objc_release(lVar16);
  _objc_release(lVar13);
  _objc_release(lVar11);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed74e0; end: 10aed75fb;  */

ulong FUN_10aed74e0(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c2be880(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_10aed4588(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c2beba0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_10aed4588(param_1,uVar6);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed75fc; end: 10aed766b;  */

void FUN_10aed75fc(ulong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x000107c27db4(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 10aed766c; end: 10aed780b;  */

ulong FUN_10aed766c(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c102a80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar8 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010c102a80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    FUN_10aed74e0(param_1,lVar5);
    _objc_release(lVar5);
    uVar8 = uVar8 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010c2a5040(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_10aed4588(param_1,lVar4);
  lVar5 = param_2;
  func_0x00010bfe0640(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_10aed4588(param_1,lVar5);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,8,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar6 & 0xffffffff);
  FUN_10aed75fc(param_1,4,uVar8);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed780c; end: 10aed7957;  */

ulong FUN_10aed780c(ulong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                   undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined4 param_12,
                   undefined4 param_13,undefined8 param_14)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  ulong uVar6;
  short *psVar7;
  long lVar8;
  uint *puVar9;
  short *psVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  func_0x000107c27dbc(param_1,0x18,param_14,0);
  func_0x000107c27dbc(param_1,0x14,param_11,0);
  func_0x000107c27ddc(param_1,0x16,param_12);
  func_0x000107c27ddc(param_1,0x12,param_9);
  func_0x000107c27ddc(param_1,0x10,param_8);
  func_0x000107c27ddc(param_1,0xe,param_7);
  func_0x000107c27ddc(param_1,0xc,param_6);
  func_0x000107c27ddc(param_1,10,param_5);
  func_0x000107c27ddc(param_1,8,param_4);
  func_0x000107c27ddc(param_1,6,param_3);
  FUN_10aed7958(param_1,4,param_2);
  uVar6 = param_1;
  func_0x0001001ce4e8(param_1,0);
  uVar11 = *(ushort *)(param_1 + 0x44) + 2 & 0xffff;
  if (uVar11 < 5) {
    uVar11 = 4;
  }
  uVar12 = (ulong)uVar11;
  *(short *)(param_1 + 0x44) = (short)uVar11;
  lVar8 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar8 - *(long *)(param_1 + 0x38)) < uVar12) {
    func_0x0001001cde7c(param_1,uVar12);
    lVar8 = *(long *)(param_1 + 0x30);
  }
  *(ulong *)(param_1 + 0x30) = lVar8 - uVar12;
  func_0x000107c60ee4(lVar8 - uVar12,uVar12);
  psVar10 = *(short **)(param_1 + 0x30);
  puVar14 = *(uint **)(param_1 + 0x38);
  psVar10[1] = (short)uVar6 - (((short)uVar2 - (short)uVar3) + (short)uVar4);
  *psVar10 = *(short *)(param_1 + 0x44);
  puVar13 = puVar14 + (ulong)*(uint *)(param_1 + 0x40) * -2;
  puVar9 = puVar13;
  if (*(uint *)(param_1 + 0x40) != 0) {
    do {
      *(short *)((long)psVar10 + (ulong)(ushort)puVar9[1]) = (short)uVar6 - (short)*puVar9;
      puVar9 = puVar9 + 2;
    } while (puVar9 < puVar14);
  }
  *(uint **)(param_1 + 0x38) = puVar13;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  lVar8 = *(long *)(param_1 + 0x20);
  puVar9 = *(uint **)(param_1 + 0x28);
  uVar11 = ((int)lVar8 - (int)psVar10) + (int)puVar9;
  if (*(char *)(param_1 + 0x51) == '\x01' && puVar9 < puVar13) {
    sVar5 = *psVar10;
    puVar14 = puVar9;
    do {
      uVar1 = *puVar14;
      psVar7 = (short *)((long)puVar9 + (lVar8 - (ulong)uVar1));
      if ((sVar5 == *psVar7) && (func_0x000107c610b0(psVar7,psVar10,sVar5), (int)psVar7 == 0)) {
        psVar10 = (short *)((long)psVar10 + (ulong)(uVar11 - (int)uVar6));
        *(short **)(param_1 + 0x30) = psVar10;
        uVar11 = uVar1;
        break;
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 < puVar13);
  }
  if (uVar11 == ((int)lVar8 + (int)puVar9) - (int)psVar10) {
    if ((ulong)((long)psVar10 - (long)puVar13) < 4) {
      func_0x0001001cde7c(param_1,4);
      puVar13 = *(uint **)(param_1 + 0x38);
      lVar8 = *(long *)(param_1 + 0x20);
      puVar9 = *(uint **)(param_1 + 0x28);
    }
    *puVar13 = uVar11;
    *(uint **)(param_1 + 0x38) = puVar13 + 1;
  }
  *(uint *)((long)puVar9 + (lVar8 - (uVar6 & 0xffffffff))) = uVar11 - (int)uVar6;
  *(undefined1 *)(param_1 + 0x46) = 0;
  return uVar6;
}



/* Entry: 10aed7958; end: 10aed7b67;  */

void FUN_10aed7958(ulong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x000107c27db4(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 10aed7b68; end: 10aed7bef;  */

long * FUN_10aed7b68(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  uStack_38 = param_3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2,&uStack_38);
    _objc_release(uStack_38);
    return plVar2;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aed7bdc);
  (*pcVar1)();
}



/* Entry: 10aed7bf0; end: 10aed7c03;  */

void FUN_10aed7bf0(undefined8 param_1,ulong param_2)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  return;
}



/* Entry: 10aed7c04; end: 10aed7c37;  */

void FUN_10aed7c04(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  return;
}



/* Entry: 10aed7c38; end: 10aed7c3f;  */

void FUN_10aed7c38(void)

{
  return;
}



/* Entry: 10aed7c40; end: 10aed7c77;  */

void FUN_10aed7c40(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110c8ffb8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10aed7c78; end: 10aed7cbb;  */

void FUN_10aed7c78(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c8ffb8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10aed7cbc; end: 10aed7cf7;  */

long FUN_10aed7cbc(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110c90028);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aed7cf8; end: 10aed7d03;  */

undefined ** FUN_10aed7cf8(void)

{
  return &PTR_DAT_110c90028;
}



/* Entry: 10aed7d04; end: 10aed7e4b;  */

ulong FUN_10aed7d04(ulong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                   undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                   undefined4 param_13,undefined4 param_14,undefined4 param_15)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  ulong uVar6;
  short *psVar7;
  long lVar8;
  uint *puVar9;
  short *psVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,8,param_4,0);
  func_0x000107c27ddc(param_1,0x1e,param_15);
  func_0x000107c27de4(param_1,0x1c,param_13);
  func_0x000107c27ddc(param_1,0x1a,param_11);
  func_0x000107c27ddc(param_1,0x12,param_9);
  func_0x000107c27ddc(param_1,0x10,param_8);
  func_0x000107c27ddc(param_1,0xe,param_7);
  func_0x000107c27ddc(param_1,0xc,param_6);
  func_0x000107c27ddc(param_1,10,param_5);
  func_0x000107c27ddc(param_1,6,param_3);
  func_0x000107c27ddc(param_1,4,param_2);
  uVar6 = param_1;
  func_0x0001001ce4e8(param_1,0);
  uVar11 = *(ushort *)(param_1 + 0x44) + 2 & 0xffff;
  if (uVar11 < 5) {
    uVar11 = 4;
  }
  uVar12 = (ulong)uVar11;
  *(short *)(param_1 + 0x44) = (short)uVar11;
  lVar8 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar8 - *(long *)(param_1 + 0x38)) < uVar12) {
    func_0x0001001cde7c(param_1,uVar12);
    lVar8 = *(long *)(param_1 + 0x30);
  }
  *(ulong *)(param_1 + 0x30) = lVar8 - uVar12;
  func_0x000107c60ee4(lVar8 - uVar12,uVar12);
  psVar10 = *(short **)(param_1 + 0x30);
  puVar14 = *(uint **)(param_1 + 0x38);
  psVar10[1] = (short)uVar6 - (((short)uVar2 - (short)uVar3) + (short)uVar4);
  *psVar10 = *(short *)(param_1 + 0x44);
  puVar13 = puVar14 + (ulong)*(uint *)(param_1 + 0x40) * -2;
  puVar9 = puVar13;
  if (*(uint *)(param_1 + 0x40) != 0) {
    do {
      *(short *)((long)psVar10 + (ulong)(ushort)puVar9[1]) = (short)uVar6 - (short)*puVar9;
      puVar9 = puVar9 + 2;
    } while (puVar9 < puVar14);
  }
  *(uint **)(param_1 + 0x38) = puVar13;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  lVar8 = *(long *)(param_1 + 0x20);
  puVar9 = *(uint **)(param_1 + 0x28);
  uVar11 = ((int)lVar8 - (int)psVar10) + (int)puVar9;
  if (*(char *)(param_1 + 0x51) == '\x01' && puVar9 < puVar13) {
    sVar5 = *psVar10;
    puVar14 = puVar9;
    do {
      uVar1 = *puVar14;
      psVar7 = (short *)((long)puVar9 + (lVar8 - (ulong)uVar1));
      if ((sVar5 == *psVar7) && (func_0x000107c610b0(psVar7,psVar10,sVar5), (int)psVar7 == 0)) {
        psVar10 = (short *)((long)psVar10 + (ulong)(uVar11 - (int)uVar6));
        *(short **)(param_1 + 0x30) = psVar10;
        uVar11 = uVar1;
        break;
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 < puVar13);
  }
  if (uVar11 == ((int)lVar8 + (int)puVar9) - (int)psVar10) {
    if ((ulong)((long)psVar10 - (long)puVar13) < 4) {
      func_0x0001001cde7c(param_1,4);
      puVar13 = *(uint **)(param_1 + 0x38);
      lVar8 = *(long *)(param_1 + 0x20);
      puVar9 = *(uint **)(param_1 + 0x28);
    }
    *puVar13 = uVar11;
    *(uint **)(param_1 + 0x38) = puVar13 + 1;
  }
  *(uint *)((long)puVar9 + (lVar8 - (uVar6 & 0xffffffff))) = uVar11 - (int)uVar6;
  *(undefined1 *)(param_1 + 0x46) = 0;
  return uVar6;
}



/* Entry: 10aed7e4c; end: 10aed7f0b;  */

long * FUN_10aed7e4c(long *param_1,undefined4 *param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uStack_68;
  
  plVar3 = param_1 + 2;
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 < (undefined4 *)*plVar3) {
    puVar9 = puVar7 + 1;
    *puVar7 = *param_2;
  }
  else {
    lVar8 = (long)puVar7 - *param_1;
    uVar1 = (lVar8 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      FUN_10aed7f94();
      _objc_retain(param_3);
      plVar3 = (long *)plVar3[3];
      uStack_68 = param_3;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,param_2,&uStack_68);
        _objc_release(uStack_68);
        return plVar3;
      }
      func_0x000104bfeb48();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10aed7f80);
      (*pcVar2)();
    }
    uVar4 = *plVar3 - *param_1;
    uVar5 = (long)uVar4 >> 1;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar5 = 0x3fffffffffffffff;
    }
    FUN_10aed7fa8();
    puVar7 = (undefined4 *)((long)plVar3 + lVar8);
    lVar8 = (long)plVar3 + uVar5 * 4;
    lVar6 = (long)puVar7 - (param_1[1] - *param_1);
    puVar9 = puVar7 + 1;
    *puVar7 = *param_2;
    _memcpy(lVar6);
    plVar3 = (long *)*param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar9;
    param_1[2] = lVar8;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return plVar3;
}



/* Entry: 10aed7f0c; end: 10aed7f93;  */

long * FUN_10aed7f0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  uStack_38 = param_3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2,&uStack_38);
    _objc_release(uStack_38);
    return plVar2;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aed7f80);
  (*pcVar1)();
}



/* Entry: 10aed7f94; end: 10aed7fa7;  */

undefined1  [16] FUN_10aed7f94(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3e == 0) {
    lVar5 = param_2 << 2;
    __Znwm(lVar5);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar5;
    return auVar11;
  }
  func_0x000104bd35f4();
  _objc_retain(param_2);
  uVar10 = param_2;
  func_0x00010c0ec560(param_2);
  uVar6 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  FUN_10aed4588(puVar4,uVar6);
  uVar8 = param_2;
  func_0x00010bf38a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  FUN_10aed4588(puVar4,uVar8);
  puVar4[0x46] = 1;
  iVar1 = *(int *)(puVar4 + 0x20);
  iVar2 = *(int *)(puVar4 + 0x30);
  iVar3 = *(int *)(puVar4 + 0x28);
  func_0x000107c27ddc(puVar4,8,(ulong)puVar9 & 0xffffffff);
  func_0x000107c27ddc(puVar4,6,(ulong)puVar7 & 0xffffffff);
  func_0x000107c27e1c(puVar4,4,uVar10,0);
  uVar10 = (ulong)(uint)((iVar1 - iVar2) + iVar3);
  func_0x000107c27dc0(puVar4,uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(param_2);
  auVar12._8_8_ = uVar10;
  auVar12._0_8_ = puVar4;
  return auVar12;
}



/* Entry: 10aed7fa8; end: 10aed7fdb;  */

undefined1  [16] FUN_10aed7fa8(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (param_2 >> 0x3e == 0) {
    lVar4 = param_2 << 2;
    __Znwm(lVar4);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar4;
    return auVar10;
  }
  func_0x000104bd35f4();
  _objc_retain(param_2);
  uVar9 = param_2;
  func_0x00010c0ec560(param_2);
  uVar5 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_10aed4588(param_1,uVar5);
  uVar7 = param_2;
  func_0x00010bf38a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  FUN_10aed4588(param_1,uVar7);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,8,uVar8 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar6 & 0xffffffff);
  func_0x000107c27e1c(param_1,4,uVar9,0);
  uVar9 = (ulong)(uint)((iVar1 - iVar2) + iVar3);
  func_0x000107c27dc0(param_1,uVar9);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(param_2);
  auVar11._8_8_ = uVar9;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Entry: 10aed7fdc; end: 10aed811f;  */

ulong FUN_10aed7fdc(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c0ec560(param_2);
  uVar5 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_10aed4588(param_1,uVar5);
  uVar7 = param_2;
  func_0x00010bf38a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  FUN_10aed4588(param_1,uVar7);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,8,uVar8 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar6 & 0xffffffff);
  func_0x000107c27e1c(param_1,4,uVar4,0);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed8120; end: 10aed82cb;  */

ulong FUN_10aed8120(ulong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,char param_6,char param_7,undefined8 param_8,
                   undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                   undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                   undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
                   undefined4 param_21,undefined4 param_22)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  ulong uVar6;
  short *psVar7;
  long lVar8;
  uint *puVar9;
  short *psVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,0x12,param_9,0);
  func_0x000107c27db0(param_1,0x10,param_8,0);
  FUN_10aed8528(param_1,0x20,param_22);
  func_0x000107c27de4(param_1,0x1e,param_20);
  func_0x000107c27de4(param_1,0x1c,param_18);
  func_0x000107c27ddc(param_1,0x1a,param_16);
  func_0x000107c27ddc(param_1,0x18,param_14);
  func_0x000107c27ddc(param_1,0x16,param_12);
  func_0x000107c27ddc(param_1,0x14,param_10);
  func_0x000107c27ddc(param_1,10,param_5);
  func_0x000107c27ddc(param_1,8,param_4);
  func_0x000107c27ddc(param_1,6,param_3);
  func_0x000107c27ddc(param_1,4,param_2);
  func_0x000107c27e1c(param_1,0xe,(int)param_7,0);
  func_0x000107c27e1c(param_1,0xc,(int)param_6,0);
  uVar6 = param_1;
  func_0x0001001ce4e8(param_1,0);
  uVar11 = *(ushort *)(param_1 + 0x44) + 2 & 0xffff;
  if (uVar11 < 5) {
    uVar11 = 4;
  }
  uVar12 = (ulong)uVar11;
  *(short *)(param_1 + 0x44) = (short)uVar11;
  lVar8 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar8 - *(long *)(param_1 + 0x38)) < uVar12) {
    func_0x0001001cde7c(param_1,uVar12);
    lVar8 = *(long *)(param_1 + 0x30);
  }
  *(ulong *)(param_1 + 0x30) = lVar8 - uVar12;
  func_0x000107c60ee4(lVar8 - uVar12,uVar12);
  psVar10 = *(short **)(param_1 + 0x30);
  puVar14 = *(uint **)(param_1 + 0x38);
  psVar10[1] = (short)uVar6 - (((short)uVar2 - (short)uVar3) + (short)uVar4);
  *psVar10 = *(short *)(param_1 + 0x44);
  puVar13 = puVar14 + (ulong)*(uint *)(param_1 + 0x40) * -2;
  puVar9 = puVar13;
  if (*(uint *)(param_1 + 0x40) != 0) {
    do {
      *(short *)((long)psVar10 + (ulong)(ushort)puVar9[1]) = (short)uVar6 - (short)*puVar9;
      puVar9 = puVar9 + 2;
    } while (puVar9 < puVar14);
  }
  *(uint **)(param_1 + 0x38) = puVar13;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  lVar8 = *(long *)(param_1 + 0x20);
  puVar9 = *(uint **)(param_1 + 0x28);
  uVar11 = ((int)lVar8 - (int)psVar10) + (int)puVar9;
  if (*(char *)(param_1 + 0x51) == '\x01' && puVar9 < puVar13) {
    sVar5 = *psVar10;
    puVar14 = puVar9;
    do {
      uVar1 = *puVar14;
      psVar7 = (short *)((long)puVar9 + (lVar8 - (ulong)uVar1));
      if ((sVar5 == *psVar7) && (func_0x000107c610b0(psVar7,psVar10,sVar5), (int)psVar7 == 0)) {
        psVar10 = (short *)((long)psVar10 + (ulong)(uVar11 - (int)uVar6));
        *(short **)(param_1 + 0x30) = psVar10;
        uVar11 = uVar1;
        break;
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 < puVar13);
  }
  if (uVar11 == ((int)lVar8 + (int)puVar9) - (int)psVar10) {
    if ((ulong)((long)psVar10 - (long)puVar13) < 4) {
      func_0x0001001cde7c(param_1,4);
      puVar13 = *(uint **)(param_1 + 0x38);
      lVar8 = *(long *)(param_1 + 0x20);
      puVar9 = *(uint **)(param_1 + 0x28);
    }
    *puVar13 = uVar11;
    *(uint **)(param_1 + 0x38) = puVar13 + 1;
  }
  *(uint *)((long)puVar9 + (lVar8 - (uVar6 & 0xffffffff))) = uVar11 - (int)uVar6;
  *(undefined1 *)(param_1 + 0x46) = 0;
  return uVar6;
}



/* Entry: 10aed82cc; end: 10aed838b;  */

long * FUN_10aed82cc(long *param_1,undefined4 *param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uStack_68;
  
  plVar3 = param_1 + 2;
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 < (undefined4 *)*plVar3) {
    puVar9 = puVar7 + 1;
    *puVar7 = *param_2;
  }
  else {
    lVar8 = (long)puVar7 - *param_1;
    uVar1 = (lVar8 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      FUN_10aed8414();
      _objc_retain(param_3);
      plVar3 = (long *)plVar3[3];
      uStack_68 = param_3;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,param_2,&uStack_68);
        _objc_release(uStack_68);
        return plVar3;
      }
      func_0x000104bfeb48();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10aed8400);
      (*pcVar2)();
    }
    uVar4 = *plVar3 - *param_1;
    uVar5 = (long)uVar4 >> 1;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar5 = 0x3fffffffffffffff;
    }
    FUN_10aed8428();
    puVar7 = (undefined4 *)((long)plVar3 + lVar8);
    lVar8 = (long)plVar3 + uVar5 * 4;
    lVar6 = (long)puVar7 - (param_1[1] - *param_1);
    puVar9 = puVar7 + 1;
    *puVar7 = *param_2;
    _memcpy(lVar6);
    plVar3 = (long *)*param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar9;
    param_1[2] = lVar8;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return plVar3;
}



/* Entry: 10aed838c; end: 10aed8413;  */

long * FUN_10aed838c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  uStack_38 = param_3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2,&uStack_38);
    _objc_release(uStack_38);
    return plVar2;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aed8400);
  (*pcVar1)();
}



/* Entry: 10aed8414; end: 10aed8427;  */

void FUN_10aed8414(undefined8 param_1,ulong param_2)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  return;
}



/* Entry: 10aed8428; end: 10aed845b;  */

void FUN_10aed8428(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  return;
}



/* Entry: 10aed845c; end: 10aed8463;  */

void FUN_10aed845c(void)

{
  return;
}



/* Entry: 10aed8464; end: 10aed849b;  */

void FUN_10aed8464(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110c90068;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10aed849c; end: 10aed84df;  */

void FUN_10aed849c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c90068;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10aed84e0; end: 10aed851b;  */

long FUN_10aed84e0(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110c900d8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aed851c; end: 10aed8527;  */

undefined ** FUN_10aed851c(void)

{
  return &PTR_DAT_110c900d8;
}



/* Entry: 10aed8528; end: 10aed861b;  */

void FUN_10aed8528(ulong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x000107c27db4(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 10aed861c; end: 10aed8663;  */

int FUN_10aed861c(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  func_0x000107c27db4(param_1,4);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce088(param_1,4);
  lVar4 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar4 - *(long *)(param_1 + 0x38)) < 4) {
    func_0x0001001cde7c(param_1,4);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  piVar5 = (int *)(lVar4 + -4);
  *piVar5 = (((iVar1 - iVar2) + iVar3) - param_2) + 4;
  *(int **)(param_1 + 0x30) = piVar5;
  return (*(int *)(param_1 + 0x20) - (int)piVar5) + *(int *)(param_1 + 0x28);
}



/* Entry: 10aed8664; end: 10aed866b;  */

void FUN_10aed8664(void)

{
  return;
}



/* Entry: 10aed866c; end: 10aed86a3;  */

void FUN_10aed866c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110c90118;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10aed86a4; end: 10aed86e7;  */

void FUN_10aed86a4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c90118;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10aed86e8; end: 10aed8723;  */

long FUN_10aed86e8(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110c90188);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aed8724; end: 10aed872f;  */

undefined ** FUN_10aed8724(void)

{
  return &PTR_DAT_110c90188;
}



/* Entry: 10aed8730; end: 10aed894b;  */

ulong FUN_10aed8730(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_10aed4588(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c291440();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_10aed4588(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010c2936e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_10aed4588(param_1,uVar8);
  uVar10 = param_2;
  func_0x00010c2427a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_10aed4588(param_1,uVar10);
  uVar12 = param_2;
  func_0x00010c242800(param_2);
  uVar13 = param_2;
  func_0x00010c078fa0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,10,uVar11 & 0xffffffff);
  func_0x000107c27ddc(param_1,8,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dec(param_1,0xe,uVar13,0);
  func_0x000107c27dec(param_1,0xc,uVar12,0);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed894c; end: 10aed89bb;  */

void FUN_10aed894c(ulong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x000107c27db4(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 10aed89bc; end: 10aed8b03;  */

ulong FUN_10aed89bc(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c29a460(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_10aed4588(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c29a900(param_2);
  uVar7 = param_2;
  func_0x00010c29bbe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  FUN_10aed4588(param_1,uVar7);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27dbc(param_1,6,uVar6,0);
  func_0x000107c27ddc(param_1,8,uVar8 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed8b04; end: 10aed8bf3;  */

ulong FUN_10aed8b04(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c2a4480(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_10aed4588(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c22dfc0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27dbc(param_1,6,uVar6,0);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed8bf4; end: 10aed8dbf;  */

ulong FUN_10aed8bf4(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bf05ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_10aed4588(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c06aee0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_10aed4588(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010bf02aa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_10aed4588(param_1,uVar8);
  uVar10 = param_2;
  func_0x00010bf052e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_10aed4588(param_1,uVar10);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,10,uVar11 & 0xffffffff);
  func_0x000107c27ddc(param_1,8,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed8dc0; end: 10aed90bf;  */

ulong FUN_10aed8dc0(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  FUN_10aed4588(param_1,uVar1);
  uVar3 = param_2;
  func_0x00010bfeb020();
  uVar4 = param_2;
  func_0x00010bf06520();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_10aed4588(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010bfeaf20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_10aed4588(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010c06aec0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_10aed4588(param_1,uVar8);
  uVar10 = param_2;
  func_0x00010c06aee0();
  uVar11 = param_2;
  func_0x00010bf02a60();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  FUN_10aed4588(param_1,uVar11);
  uVar13 = param_2;
  func_0x00010bf02ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  FUN_10aed4588(param_1,uVar13);
  uVar15 = param_2;
  func_0x00010c269100(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  FUN_10aed4588(param_1,uVar15);
  uVar17 = param_2;
  func_0x00010bf68380(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_1;
  FUN_10aed4588(param_1,uVar17);
  uVar19 = param_2;
  func_0x00010bf67dc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_1;
  FUN_10aed4588(param_1,uVar19);
  FUN_10aed90c0(param_1,uVar2 & 0xffffffff,uVar3,uVar5 & 0xffffffff,uVar7 & 0xffffffff,
                uVar9 & 0xffffffff,uVar10,uVar12 & 0xffffffff,uVar14 & 0xffffffff,
                uVar16 & 0xffffffff,uVar18 & 0xffffffff,uVar20 & 0xffffffff);
  _objc_release(uVar19);
  _objc_release(uVar17);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed90c0; end: 10aed920b;  */

ulong FUN_10aed90c0(ulong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
                   undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                   undefined4 param_13,undefined4 param_14,undefined4 param_15)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  ulong uVar6;
  short *psVar7;
  long lVar8;
  uint *puVar9;
  short *psVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  func_0x000107c27dbc(param_1,0xe,param_7,0);
  func_0x000107c27dbc(param_1,6,param_3,0);
  func_0x000107c27ddc(param_1,0x18,param_15);
  func_0x000107c27ddc(param_1,0x16,param_13);
  func_0x000107c27ddc(param_1,0x14,param_11);
  func_0x000107c27ddc(param_1,0x12,param_9);
  func_0x000107c27ddc(param_1,0x10,param_8);
  func_0x000107c27ddc(param_1,0xc,param_6);
  func_0x000107c27ddc(param_1,10,param_5);
  func_0x000107c27ddc(param_1,8,param_4);
  func_0x000107c27ddc(param_1,4,param_2);
  uVar6 = param_1;
  func_0x0001001ce4e8(param_1,0);
  uVar11 = *(ushort *)(param_1 + 0x44) + 2 & 0xffff;
  if (uVar11 < 5) {
    uVar11 = 4;
  }
  uVar12 = (ulong)uVar11;
  *(short *)(param_1 + 0x44) = (short)uVar11;
  lVar8 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar8 - *(long *)(param_1 + 0x38)) < uVar12) {
    func_0x0001001cde7c(param_1,uVar12);
    lVar8 = *(long *)(param_1 + 0x30);
  }
  *(ulong *)(param_1 + 0x30) = lVar8 - uVar12;
  func_0x000107c60ee4(lVar8 - uVar12,uVar12);
  psVar10 = *(short **)(param_1 + 0x30);
  puVar14 = *(uint **)(param_1 + 0x38);
  psVar10[1] = (short)uVar6 - (((short)uVar2 - (short)uVar3) + (short)uVar4);
  *psVar10 = *(short *)(param_1 + 0x44);
  puVar13 = puVar14 + (ulong)*(uint *)(param_1 + 0x40) * -2;
  puVar9 = puVar13;
  if (*(uint *)(param_1 + 0x40) != 0) {
    do {
      *(short *)((long)psVar10 + (ulong)(ushort)puVar9[1]) = (short)uVar6 - (short)*puVar9;
      puVar9 = puVar9 + 2;
    } while (puVar9 < puVar14);
  }
  *(uint **)(param_1 + 0x38) = puVar13;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  lVar8 = *(long *)(param_1 + 0x20);
  puVar9 = *(uint **)(param_1 + 0x28);
  uVar11 = ((int)lVar8 - (int)psVar10) + (int)puVar9;
  if (*(char *)(param_1 + 0x51) == '\x01' && puVar9 < puVar13) {
    sVar5 = *psVar10;
    puVar14 = puVar9;
    do {
      uVar1 = *puVar14;
      psVar7 = (short *)((long)puVar9 + (lVar8 - (ulong)uVar1));
      if ((sVar5 == *psVar7) && (func_0x000107c610b0(psVar7,psVar10,sVar5), (int)psVar7 == 0)) {
        psVar10 = (short *)((long)psVar10 + (ulong)(uVar11 - (int)uVar6));
        *(short **)(param_1 + 0x30) = psVar10;
        uVar11 = uVar1;
        break;
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 < puVar13);
  }
  if (uVar11 == ((int)lVar8 + (int)puVar9) - (int)psVar10) {
    if ((ulong)((long)psVar10 - (long)puVar13) < 4) {
      func_0x0001001cde7c(param_1,4);
      puVar13 = *(uint **)(param_1 + 0x38);
      lVar8 = *(long *)(param_1 + 0x20);
      puVar9 = *(uint **)(param_1 + 0x28);
    }
    *puVar13 = uVar11;
    *(uint **)(param_1 + 0x38) = puVar13 + 1;
  }
  *(uint *)((long)puVar9 + (lVar8 - (uVar6 & 0xffffffff))) = uVar11 - (int)uVar6;
  *(undefined1 *)(param_1 + 0x46) = 0;
  return uVar6;
}



/* Entry: 10aed920c; end: 10aed948b;  */

void FUN_10aed920c(ulong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x000107c27db4(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 10aed948c; end: 10aed9513;  */

long * FUN_10aed948c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  uStack_38 = param_3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2,&uStack_38);
    _objc_release(uStack_38);
    return plVar2;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aed9500);
  (*pcVar1)();
}



/* Entry: 10aed9514; end: 10aed9527;  */

void FUN_10aed9514(undefined8 param_1,ulong param_2)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  return;
}



/* Entry: 10aed9528; end: 10aed955b;  */

void FUN_10aed9528(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  return;
}



/* Entry: 10aed955c; end: 10aed9563;  */

void FUN_10aed955c(void)

{
  return;
}



/* Entry: 10aed9564; end: 10aed959b;  */

void FUN_10aed9564(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110c901c8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10aed959c; end: 10aed95df;  */

void FUN_10aed959c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c901c8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10aed95e0; end: 10aed961b;  */

long FUN_10aed95e0(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110c90238);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aed961c; end: 10aed9627;  */

undefined ** FUN_10aed961c(void)

{
  return &PTR_DAT_110c90238;
}



/* Entry: 10aed9628; end: 10aed96e7;  */

long * FUN_10aed9628(long *param_1,undefined4 *param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uStack_68;
  
  plVar3 = param_1 + 2;
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 < (undefined4 *)*plVar3) {
    puVar9 = puVar7 + 1;
    *puVar7 = *param_2;
  }
  else {
    lVar8 = (long)puVar7 - *param_1;
    uVar1 = (lVar8 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      FUN_10aed9770();
      _objc_retain(param_3);
      plVar3 = (long *)plVar3[3];
      uStack_68 = param_3;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,param_2,&uStack_68);
        _objc_release(uStack_68);
        return plVar3;
      }
      func_0x000104bfeb48();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10aed975c);
      (*pcVar2)();
    }
    uVar4 = *plVar3 - *param_1;
    uVar5 = (long)uVar4 >> 1;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar5 = 0x3fffffffffffffff;
    }
    FUN_10aed9784();
    puVar7 = (undefined4 *)((long)plVar3 + lVar8);
    lVar8 = (long)plVar3 + uVar5 * 4;
    lVar6 = (long)puVar7 - (param_1[1] - *param_1);
    puVar9 = puVar7 + 1;
    *puVar7 = *param_2;
    _memcpy(lVar6);
    plVar3 = (long *)*param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar9;
    param_1[2] = lVar8;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return plVar3;
}



/* Entry: 10aed96e8; end: 10aed976f;  */

long * FUN_10aed96e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  uStack_38 = param_3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2,&uStack_38);
    _objc_release(uStack_38);
    return plVar2;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aed975c);
  (*pcVar1)();
}



/* Entry: 10aed9770; end: 10aed9783;  */

void FUN_10aed9770(undefined8 param_1,ulong param_2)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  return;
}



/* Entry: 10aed9784; end: 10aed97b7;  */

void FUN_10aed9784(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  return;
}



/* Entry: 10aed97b8; end: 10aed97bf;  */

void FUN_10aed97b8(void)

{
  return;
}



/* Entry: 10aed97c0; end: 10aed97f7;  */

void FUN_10aed97c0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110c90278;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10aed97f8; end: 10aed983b;  */

void FUN_10aed97f8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c90278;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10aed983c; end: 10aed9877;  */

long FUN_10aed983c(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110c902e8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aed9878; end: 10aed9883;  */

undefined ** FUN_10aed9878(void)

{
  return &PTR_DAT_110c902e8;
}



/* Entry: 10aed9884; end: 10aed9957;  */

ulong * FUN_10aed9884(ulong *param_1,undefined1 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  undefined1 *puVar11;
  
  puVar4 = (undefined1 *)param_1[1];
  if (puVar4 < (undefined1 *)param_1[2]) {
    puVar11 = puVar4 + 1;
    *puVar4 = *param_2;
    puVar3 = param_1;
  }
  else {
    puVar8 = (ulong *)*param_1;
    lVar9 = (long)puVar4 - (long)puVar8;
    puVar10 = (ulong *)(lVar9 + 1);
    if ((long)puVar10 < 0) {
      func_0x00010533bba8();
      _objc_retain(param_2);
      puVar4 = param_2;
      func_0x00010bf62d20(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_1;
      FUN_10aed4588(param_1,puVar4);
      puVar11 = param_2;
      func_0x00010bf62c60(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_1;
      FUN_10aed4588(param_1,puVar11);
      puVar5 = param_2;
      func_0x00010c111ee0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1;
      FUN_10aed4588(param_1,puVar5);
      *(undefined1 *)((long)param_1 + 0x46) = 1;
      uVar6 = param_1[4];
      uVar1 = param_1[6];
      uVar2 = param_1[5];
      func_0x000107c27ddc(param_1,8,(ulong)puVar7 & 0xffffffff);
      func_0x000107c27ddc(param_1,6,(ulong)puVar8 & 0xffffffff);
      func_0x000107c27ddc(param_1,4,(ulong)puVar10 & 0xffffffff);
      func_0x000107c27dc0(param_1,((int)uVar6 - (int)uVar1) + (int)uVar2);
      _objc_release(puVar5);
      _objc_release(puVar11);
      _objc_release(puVar4);
      _objc_release(param_2);
      return param_1;
    }
    uVar6 = (long)param_1[2] - (long)puVar8;
    puVar7 = (ulong *)(uVar6 * 2);
    if (puVar7 < puVar10 || (long)puVar7 - (long)puVar10 == 0) {
      puVar7 = puVar10;
    }
    if (0x3ffffffffffffffe < uVar6) {
      puVar7 = (ulong *)0x7fffffffffffffff;
    }
    if (puVar7 == (ulong *)0x0) {
      puVar10 = (ulong *)0x0;
    }
    else {
      puVar10 = puVar7;
      __Znwm();
    }
    puVar11 = (undefined1 *)((long)puVar10 + lVar9) + 1;
    *(undefined1 *)((long)puVar10 + lVar9) = *param_2;
    puVar3 = puVar10;
    _memcpy(puVar10,puVar8,lVar9);
    *param_1 = (ulong)puVar10;
    param_1[1] = (ulong)puVar11;
    param_1[2] = (long)puVar10 + (long)puVar7;
    if (puVar8 != (ulong *)0x0) {
      __ZdlPv(puVar8);
      puVar3 = puVar8;
    }
  }
  param_1[1] = (ulong)puVar11;
  return puVar3;
}


