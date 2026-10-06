/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f27c08; end: 106f27cb3; -[SCContentProductSnapRendererImpl preparePlaybackModel:destination:withPlugins:] */

void FUN_106f27c08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c242b20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c109d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f27cb4; end: 106f27d1f; -[SCContentProductSnapRendererImpl unregisterPlugins] */

void FUN_106f27cb4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010c1392c0();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = PTR____NSArray0__struct_11034ab48;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar2;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106f27d20; end: 106f27e0f; -[SCContentProductSnapRendererImpl resetPlugins] */

void FUN_106f27d20(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010c1392a0(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12f6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106f27e10; end: 106f27e17; -[SCContentProductSnapRendererImpl render:watermarkProfile:toDestination:] */

void FUN_106f27e10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12f6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_render_watermarkProfile_toDestin_1126297c8);
  return;
}



/* Entry: 106f27e18; end: 106f27f7b; -[SCContentProductSnapRendererImpl render:watermarkProfile:toDestination:snapSource:] */

void FUN_106f27e18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126d33c8;
  _objc_alloc();
  func_0x00010c055280();
  puVar3 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106f27f7c;
  puStack_90 = &UNK_1108e17c0;
  _objc_retain(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puStack_88 = puVar2;
  lStack_80 = param_1;
  uStack_78 = param_3;
  uStack_70 = param_4;
  puStack_68 = puVar3;
  uStack_60 = param_5;
  uStack_58 = param_6;
  _objc_retain(puVar3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f98a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar5,param_2,&puStack_a8,uVar4);
  _objc_release(uVar4);
  puVar1 = puStack_68;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(puStack_88);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f27f7c; end: 106f28163;  */

void FUN_106f27f7c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if (((uVar1 & 1) == 0) && (*(long *)(*(long *)(param_1 + 0x28) + 0x10) != 0)) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    func_0x00010c242b20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c12f6c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c178000(uVar4);
    uVar4 = uVar3;
    func_0x00010c1178e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar2 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010c13cb40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c297260(uVar4);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar3);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 106f28164; end: 106f2816b;  */

void FUN_106f28164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 106f2816c; end: 106f28193;  */

void FUN_106f2816c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb2c80(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c288d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_updateProgress__11267fd70);
  return;
}



/* Entry: 106f28194; end: 106f281ab;  */

void FUN_106f28194(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithSnapDocEditor__1125ae8e8,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
  return;
}



/* Entry: 106f281ac; end: 106f2826f; -[SCContentProductSnapRendererImpl render:watermarkProfile:toDestination:withPlugins:] */

void FUN_106f281ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c242b20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c12f6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f28270; end: 106f28343; -[SCContentProductSnapRendererImpl render:watermarkProfile:toDestination:snapSource:withPlugins:] */

void FUN_106f28270(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c242b20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c12f6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f28344; end: 106f2834b; -[SCContentProductSnapRendererImpl renderForSpotlight:] */

void FUN_106f28344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_renderForSpotlight_snapSource__112629900,param_3,0xffffffffffffffff);
  return;
}



/* Entry: 106f2834c; end: 106f2841b; -[SCContentProductSnapRendererImpl renderForSpotlight:snapSource:] */

void FUN_106f2834c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c5a0();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c242b20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c12f6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106f2841c; end: 106f2841f; -[SCContentProductSnapRendererImpl clearCachedRenderResources] */

void FUN_106f2841c(void)

{
  return;
}



/* Entry: 106f28420; end: 106f28473; -[SCContentProductSnapRendererImpl .cxx_destruct] */

void FUN_106f28420(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f28474; end: 106f284df; -[SCContentProductSnapRendererServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f28474(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276132c,0);
  _objc_destroyWeak(param_1 + _DAT_112761328);
  _objc_destroyWeak(param_1 + _DAT_112761320);
  _objc_destroyWeak(param_1 + _DAT_112761324);
  _objc_destroyWeak(param_1 + _DAT_11276131c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112761318);
  return;
}



/* Entry: 106f284e0; end: 106f2854b; -[SCMemoriesSnapRendererImpl unregisterPlugins] */

void FUN_106f284e0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010c1392c0();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = PTR____NSArray0__struct_11034ab48;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar2;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106f2854c; end: 106f2863b; -[SCMemoriesSnapRendererImpl resetPlugins] */

void FUN_106f2854c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar10;
  undefined *unaff_x24;
  long lVar11;
  long lVar12;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined1 *puStack_290;
  long lStack_288;
  undefined *puStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  undefined1 *puStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [128];
  long lStack_180;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar6 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar9 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar9);
  lVar1 = lVar9;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x21 = *plStack_100;
    do {
      unaff_x22 = 0;
      do {
        if (*plStack_100 != unaff_x21) {
          _objc_enumerationMutation(lVar9);
        }
        func_0x00010c1392a0(*(undefined8 *)(lStack_108 + unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (lVar1 != unaff_x22);
      lVar1 = lVar9;
      puVar6 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_240;
  pcStack_118 = FUN_106f2863c;
  lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lVar9 = *(long *)(lVar9 + 0x10);
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(lVar9);
  puVar8 = auStack_200;
  lVar1 = lVar9;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar11 = *plStack_230;
    do {
      lVar12 = 0;
      do {
        if (*plStack_230 != lVar11) {
          _objc_enumerationMutation(lVar9);
        }
        unaff_x22 = *(long *)(lStack_238 + lVar12 * 8);
        unaff_x23 = unaff_x22;
        func_0x00010bf6eec0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = unaff_x23;
        func_0x00010bf529e0();
        if (lVar2 == 0) {
LAB_106f28724:
          func_0x00010c1392a0(unaff_x22);
        }
        else {
          unaff_x24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar6);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = unaff_x23;
          func_0x00010bf4b900(unaff_x23,param_2,unaff_x24);
          _objc_release(unaff_x24);
          if ((int)lVar2 != 0) goto LAB_106f28724;
        }
        _objc_release(unaff_x23);
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      puVar8 = auStack_200;
      lVar1 = lVar9;
      puVar7 = &uStack_240;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = lVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
    return;
  }
  ___stack_chk_fail();
  if (puVar7 != (undefined8 *)0x0) {
    pcStack_248 = FUN_106f287a0;
    lStack_288 = 0;
    puVar3 = PTR_PTR_1126d33e0;
    puStack_280 = unaff_x24;
    lStack_278 = unaff_x23;
    lStack_270 = unaff_x22;
    lStack_268 = unaff_x21;
    lStack_260 = lVar9;
    puStack_258 = (undefined1 *)puVar6;
    ppuStack_250 = &puStack_120;
    func_0x00010bf5cdc0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lStack_288;
    _objc_retain(lStack_288);
    if ((lVar9 == 0) && (puVar4 = puVar3, func_0x00010bf529e0(), puVar4 != (undefined *)0x0)) {
      uVar10 = *(undefined8 *)(lVar1 + 0x20);
      puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2b0 = 0xc2000000;
      pcStack_2a8 = FUN_106f2889c;
      puStack_2a0 = &UNK_110907248;
      puStack_290 = puVar8;
      _objc_retain(puVar3);
      uVar5 = *(undefined8 *)(lVar1 + 8);
      puStack_298 = puVar3;
      func_0x00010c0f98a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar10,param_2,&puStack_2b8,uVar5);
      _objc_release(uVar5);
      _objc_release(puStack_298);
    }
    _objc_release(puVar3);
    _objc_release(lVar9);
  }
  return;
}



/* Entry: 106f2863c; end: 106f2879f; -[SCMemoriesSnapRendererImpl resetPluginsForDestination:] */

void FUN_106f2863c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar9;
  undefined *unaff_x24;
  long lVar10;
  long lVar11;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar8 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar8);
  puVar7 = auStack_f0;
  lVar1 = lVar8;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar8);
        }
        unaff_x22 = *(long *)(lStack_128 + lVar11 * 8);
        unaff_x23 = unaff_x22;
        func_0x00010bf6eec0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = unaff_x23;
        func_0x00010bf529e0();
        if (lVar2 == 0) {
LAB_106f28724:
          func_0x00010c1392a0(unaff_x22);
        }
        else {
          unaff_x24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = unaff_x23;
          func_0x00010bf4b900(unaff_x23,param_2,unaff_x24);
          _objc_release(unaff_x24);
          if ((int)lVar2 != 0) goto LAB_106f28724;
        }
        _objc_release(unaff_x23);
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      puVar7 = auStack_f0;
      lVar1 = lVar8;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = lVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (puVar6 != (undefined8 *)0x0) {
    pcStack_138 = FUN_106f287a0;
    lStack_178 = 0;
    puVar3 = PTR_PTR_1126d33e0;
    puStack_170 = unaff_x24;
    lStack_168 = unaff_x23;
    lStack_160 = unaff_x22;
    uStack_158 = unaff_x21;
    lStack_150 = lVar8;
    uStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x00010bf5cdc0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lStack_178;
    _objc_retain(lStack_178);
    if ((lVar8 == 0) && (puVar4 = puVar3, func_0x00010bf529e0(), puVar4 != (undefined *)0x0)) {
      uVar9 = *(undefined8 *)(lVar1 + 0x20);
      puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a0 = 0xc2000000;
      pcStack_198 = FUN_106f2889c;
      puStack_190 = &UNK_110907248;
      puStack_180 = puVar7;
      _objc_retain(puVar3);
      uVar5 = *(undefined8 *)(lVar1 + 8);
      puStack_188 = puVar3;
      func_0x00010c0f98a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar9,param_2,&puStack_1a8,uVar5);
      _objc_release(uVar5);
      _objc_release(puStack_188);
    }
    _objc_release(puVar3);
    _objc_release(lVar8);
  }
  return;
}



/* Entry: 106f287a0; end: 106f2889b; -[SCMemoriesSnapRendererImpl warmContentForSnapDoc:destination:] */

void FUN_106f287a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if (param_3 != 0) {
    lStack_48 = 0;
    puVar2 = PTR_PTR_1126d33e0;
    func_0x00010bf5cdc0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_48;
    _objc_retain(lStack_48);
    if ((lVar1 == 0) && (puVar3 = puVar2, func_0x00010bf529e0(), puVar3 != (undefined *)0x0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_106f2889c;
      puStack_60 = &UNK_110907248;
      uStack_50 = param_4;
      _objc_retain(puVar2);
      uVar4 = *(undefined8 *)(param_1 + 8);
      puStack_58 = puVar2;
      func_0x00010c0f98a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar5,param_2,&puStack_78,uVar4);
      _objc_release(uVar4);
      _objc_release(puStack_58);
    }
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 106f2889c; end: 106f28a93;  */

void FUN_106f2889c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puVar6 = &uStack_1b0;
  lVar2 = param_2;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_1a0;
    do {
      lVar14 = 0;
      do {
        if (*plStack_1a0 != lVar13) {
          _objc_enumerationMutation(param_2);
        }
        lVar10 = *(long *)(lStack_1a8 + lVar14 * 8);
        lVar3 = lVar10;
        func_0x00010bf6eec0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf529e0();
        if (lVar4 == 0) {
LAB_106f28988:
          lVar11 = *(long *)(param_1 + 0x20);
          _objc_retain(lVar11);
          lVar4 = lVar11;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (lVar4 != 0) {
            lVar7 = 0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar11);
              }
              func_0x00010c2a1b80(lVar10);
              lVar7 = lVar7 + 1;
            } while (lVar4 != lVar7);
            lVar4 = lVar11;
            func_0x00010bf52a60();
          }
          _objc_release(lVar11);
        }
        else {
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bf4b900();
          _objc_release(puVar5);
          if ((int)lVar4 != 0) goto LAB_106f28988;
        }
        _objc_release(lVar3);
        lVar14 = lVar14 + 1;
      } while (lVar14 != lVar2);
      puVar6 = &uStack_1b0;
      lVar2 = param_2;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar5 = PTR_PTR_1126d33c0;
  _objc_alloc();
  func_0x00010c055280();
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar8);
  uVar12 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(puVar5);
  uVar9 = *(undefined8 *)(param_2 + 8);
  _objc_retain(uVar8);
  _objc_retain(puVar6);
  func_0x00010c0f98a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar12);
  _objc_release(uVar9);
  _objc_retain(puVar5);
  _objc_release(uVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f28a94; end: 106f28bbf; -[SCMemoriesSnapRendererImpl preparePlaybackModel:destination:] */

void FUN_106f28a94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d33c0;
  _objc_alloc();
  func_0x00010c055280();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106f28bc0;
  puStack_70 = &UNK_110983788;
  _objc_retain(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_68 = puVar1;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = uVar2;
  uStack_48 = param_4;
  _objc_retain(uVar2);
  _objc_retain(param_3);
  func_0x00010c0f98a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar4,param_2,&puStack_88,uVar3);
  _objc_release(uVar3);
  uVar3 = uStack_50;
  _objc_retain(puVar1);
  _objc_release(uVar3);
  _objc_release(uStack_58);
  _objc_release(puStack_68);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f28bc0; end: 106f28dcf;  */

void FUN_106f28bc0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (*(long *)(lVar2 + 0x10) != 0) {
      func_0x00010be88f40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c109d00();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain();
        func_0x00010c178000(uVar5);
        uVar5 = uVar3;
        func_0x00010c1178e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar6);
        uVar4 = uVar5;
        func_0x00010c25ff60(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(uVar4);
        _objc_release(uVar5);
        uVar5 = uVar3;
        func_0x00010c13cb40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar7);
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        _objc_retain(uVar4);
        func_0x00010c297260(uVar5);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar3);
        _objc_release(uVar3);
      }
      else {
        func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
        func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x38));
      }
      _objc_release(lVar2);
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 106f28dd0; end: 106f28dd7;  */

void FUN_106f28dd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 106f28dd8; end: 106f28e3b;  */

void FUN_106f28dd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb2c80(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c288d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_updateProgress__11267fd70);
  return;
}



/* Entry: 106f28e3c; end: 106f28ee7; -[SCMemoriesSnapRendererImpl preparePlaybackModel:destination:withPlugins:] */

void FUN_106f28e3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c242b20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c109d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f28ee8; end: 106f29033; -[SCMemoriesSnapRendererImpl _refusalErrorForPlaybackSnapDoc:destination:] */

void FUN_106f28ee8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_4 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010bf1f440();
    if (iVar1 != 0) {
      puVar2 = PTR_PTR_1126bf688;
      func_0x00010c100640();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (puVar2 == (undefined *)0x0) {
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
      }
      _objc_release(puVar2);
      goto LAB_106f28fe8;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_106f28fe8:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12f6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106f29034; end: 106f2903b; -[SCMemoriesSnapRendererImpl render:watermarkProfile:toDestination:] */

void FUN_106f29034(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12f6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_render_watermarkProfile_toDestin_1126297c8);
  return;
}



/* Entry: 106f2903c; end: 106f2916f; -[SCMemoriesSnapRendererImpl render:watermarkProfile:toDestination:snapSource:] */

void FUN_106f2903c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d33c8;
  _objc_alloc();
  func_0x00010c055280();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106f29170;
  puStack_88 = &UNK_1109837e8;
  _objc_retain();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_80 = puVar1;
  lStack_78 = param_1;
  uStack_70 = param_3;
  uStack_68 = param_4;
  uStack_60 = param_5;
  uStack_58 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f98a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar3,param_2,&puStack_a0,uVar2);
  _objc_release(uVar2);
  uVar2 = uStack_68;
  _objc_retain(puVar1);
  _objc_release(uVar2);
  _objc_release(uStack_70);
  _objc_release(puStack_80);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f29170; end: 106f2935b;  */

void FUN_106f29170(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if (((uVar1 & 1) == 0) && (*(long *)(*(long *)(param_1 + 0x28) + 0x10) != 0)) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    func_0x00010c242b20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c12f6c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c178000(uVar4);
    uVar4 = uVar3;
    func_0x00010c1178e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar2 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010c13cb40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c297260(uVar4);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar3);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 106f2935c; end: 106f29363;  */

void FUN_106f2935c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 106f29364; end: 106f2938b;  */

void FUN_106f29364(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb2c80(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c288d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_updateProgress__11267fd70);
  return;
}



/* Entry: 106f2938c; end: 106f293a3;  */

void FUN_106f2938c(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithSnapDocEditor__1125ae8e8,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
  return;
}



/* Entry: 106f293a4; end: 106f29467; -[SCMemoriesSnapRendererImpl render:watermarkProfile:toDestination:withPlugins:] */

void FUN_106f293a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c242b20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c12f6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f29468; end: 106f2953b; -[SCMemoriesSnapRendererImpl render:watermarkProfile:toDestination:snapSource:withPlugins:] */

void FUN_106f29468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c242b20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c12f6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f2953c; end: 106f29587; -[SCMemoriesSnapRendererImpl clearCachedRenderResources] */

void FUN_106f2953c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c242b20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ad00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f29588; end: 106f295e7; -[SCMemoriesSnapRendererImpl .cxx_destruct] */

void FUN_106f29588(long param_1)

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



/* Entry: 106f295e8; end: 106f29647; -[SCMemoriesSnapRendererQCServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f295e8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112761358,0);
  _objc_destroyWeak(param_1 + _DAT_112761354);
  _objc_destroyWeak(param_1 + _DAT_11276134c);
  _objc_destroyWeak(param_1 + _DAT_112761348);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112761350);
  return;
}



/* Entry: 106f29648; end: 106f296a7; -[SCMemoriesSnapRendererServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f29648(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276136c,0);
  _objc_destroyWeak(param_1 + _DAT_112761368);
  _objc_destroyWeak(param_1 + _DAT_112761360);
  _objc_destroyWeak(param_1 + _DAT_11276135c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112761364);
  return;
}



/* Entry: 106f296a8; end: 106f297db; -[SCPlaybackPackageResponseImpl initWithTranscodingRenderer:] */

undefined1 * FUN_106f296a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7d88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)((long)puVar1 + 0x10));
    func_0x00010c1a59e0(puVar1);
    func_0x00010c1a5a00(puVar1);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f297dc; end: 106f2980b; -[SCPlaybackPackageResponseImpl setPerformer:] */

void FUN_106f297dc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f2980c; end: 106f2989b; -[SCPlaybackPackageResponseImpl completeWithPlaybackPackage:] */

void FUN_106f2980c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106f2989c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f2989c; end: 106f2990b;  */

void FUN_106f2989c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bfd4980();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010bfd49a0();
    if ((uVar1 & 1) == 0) {
      func_0x00010c1a5a00(*(undefined8 *)(param_1 + 0x20));
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
      _objc_release(uVar2);
      func_0x00010bf43d60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_complete_1125ae760);
      return;
    }
  }
  return;
}



/* Entry: 106f2990c; end: 106f2999b; -[SCPlaybackPackageResponseImpl completeWithError:] */

void FUN_106f2990c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106f2999c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f2999c; end: 106f29a0b;  */

void FUN_106f2999c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bfd4980();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010bfd49a0();
    if ((uVar1 & 1) == 0) {
      func_0x00010c1a5a00(*(undefined8 *)(param_1 + 0x20));
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
      _objc_release(uVar2);
      func_0x00010bf43ca0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_complete_1125ae760);
      return;
    }
  }
  return;
}



/* Entry: 106f29a0c; end: 106f29a9b; -[SCPlaybackPackageResponseImpl setCancelCallbackBlock:] */

void FUN_106f29a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106f29a9c;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f29a9c; end: 106f29acf;  */

void FUN_106f29a9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106f29ad0; end: 106f29b3f; -[SCPlaybackPackageResponseImpl updateProgress:] */

void FUN_106f29ad0(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_2;
  func_0x00010c06e0e0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106f29b40; end: 106f29b47; -[SCPlaybackPackageResponseImpl resultFuture] */

void FUN_106f29b40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 106f29b48; end: 106f29b6f; -[SCPlaybackPackageResponseImpl progressObservable] */

void FUN_106f29b48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f29b70; end: 106f29b73; -[SCPlaybackPackageResponseImpl isCancelled] */

void FUN_106f29b70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd4990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hasBeenCancelled_1125d2c08);
  return;
}



/* Entry: 106f29b74; end: 106f29bcb; -[SCPlaybackPackageResponseImpl cancel] */

void FUN_106f29b74(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106f29bcc;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_38);
  return;
}



/* Entry: 106f29bcc; end: 106f29c9b;  */

void FUN_106f29bcc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bfd4980();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010bfd49a0();
    if ((uVar1 & 1) == 0) {
      func_0x00010c1a59e0(*(undefined8 *)(param_1 + 0x20),param_2,1);
      lVar4 = *(long *)(param_1 + 0x20);
      if (*(long *)(lVar4 + 0x20) != 0) {
        (**(code **)(*(long *)(lVar4 + 0x20) + 0x10))();
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
        *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = 0;
        _objc_release(uVar2);
        lVar4 = *(long *)(param_1 + 0x20);
      }
      uVar2 = *(undefined8 *)(lVar4 + 0x18);
      *(undefined8 *)(lVar4 + 0x18) = 0;
      _objc_release(uVar2);
      func_0x00010bf436e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e877f8,
                          &PTR____CFConstantStringClassReference_110e8e0b8,0x10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(uVar2,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
  return;
}



/* Entry: 106f29c9c; end: 106f29ca7; -[SCPlaybackPackageResponseImpl hasBeenCompleted] */

byte FUN_106f29c9c(long param_1)

{
  return *(byte *)(param_1 + 0x30) & 1;
}



/* Entry: 106f29ca8; end: 106f29caf; -[SCPlaybackPackageResponseImpl setHasBeenCompleted:] */

void FUN_106f29ca8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 106f29cb0; end: 106f29cbb; -[SCPlaybackPackageResponseImpl hasBeenCancelled] */

byte FUN_106f29cb0(long param_1)

{
  return *(byte *)(param_1 + 0x31) & 1;
}



/* Entry: 106f29cbc; end: 106f29cc3; -[SCPlaybackPackageResponseImpl setHasBeenCancelled:] */

void FUN_106f29cbc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x31) = param_3;
  return;
}



/* Entry: 106f29cc4; end: 106f29d17; -[SCPlaybackPackageResponseImpl .cxx_destruct] */

void FUN_106f29cc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f29d18; end: 106f29ebf; -[SCPreviewRewriteSnapRendererImpl initWithCircumstanceEngine:timeProvider:snapDocEditorFactory:snapImageTranscoder:snapVideoTranscoder:memoriesTranscoder:blizzardLogger:backgroundTaskWrapper:] */

undefined1 *
FUN_106f29d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f7d90;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f29ec0; end: 106f29edb; -[SCPreviewRewriteSnapRendererImpl render:toPreviewRewriteDestination:fromPreviewRewriteSource:] */

void FUN_106f29ec0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12f650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_render_toPreviewRewriteDestinati_1126297b0);
  return;
}



/* Entry: 106f29edc; end: 106f29ee3; -[SCPreviewRewriteSnapRendererImpl render:toPreviewRewriteDestination:fromPreviewRewriteSource:snapSource:] */

void FUN_106f29edc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12f670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_render_toPreviewRewriteDestinati_1126297b8);
  return;
}



/* Entry: 106f29ee4; end: 106f29fe3; -[SCPreviewRewriteSnapRendererImpl render:toPreviewRewriteDestination:fromPreviewRewriteSource:snapSource:retryContext:] */

void FUN_106f29ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d3400;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c052520();
  func_0x00010c23c1c0();
  puVar2 = PTR_PTR_1126d3408;
  _objc_alloc(PTR_PTR_1126d3408);
  func_0x00010c048040();
  puVar3 = PTR_PTR_1126d33c8;
  _objc_alloc(PTR_PTR_1126d33c8);
  func_0x00010c055280();
  func_0x00010c1300a0(puVar2,param_2,param_3,0,puVar3,param_4,param_5,param_6,param_7,0);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f29fe4; end: 106f2a05b; -[SCPreviewRewriteSnapRendererImpl .cxx_destruct] */

void FUN_106f29fe4(long param_1)

{
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



/* Entry: 106f2a05c; end: 106f2a27f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f2a05c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
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
  undefined *puVar16;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar16 = PTR_PTR_1126d3410;
    _objc_alloc();
    lVar1 = param_1 + _DAT_1127613b8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    lVar4 = param_1 + _DAT_1127613b0;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010bf9f4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_1127613c0;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c279ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_1127613bc;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010c279ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + _DAT_1127613c4;
    _objc_loadWeakRetained(lVar10);
    lVar11 = lVar10;
    func_0x00010c279ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + _DAT_1127613b4;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1 + _DAT_1127613c8;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010bf145c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffec20(puVar16,param_2,lVar2,puVar3,lVar5,lVar7,lVar9,lVar11,lVar13,lVar15);
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
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 106f2a280; end: 106f2a2ff; -[SCPreviewRewriteSnapRendererServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f2a280(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127613c8);
  _objc_destroyWeak(param_1 + _DAT_1127613c4);
  _objc_destroyWeak(param_1 + _DAT_1127613c0);
  _objc_destroyWeak(param_1 + _DAT_1127613bc);
  _objc_destroyWeak(param_1 + _DAT_1127613b8);
  _objc_destroyWeak(param_1 + _DAT_1127613b4);
  _objc_destroyWeak(param_1 + _DAT_1127613b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127613ac);
  return;
}



/* Entry: 106f2a300; end: 106f2a81f; -[SCSnapRendererImpl initWithSnapDocManager:circumstanceEngine:timeProvider:snapDocEditorFactory:lazyVideoTranscoder:userSession:previewAssetVideoProviderFactory:audioProcessingSessionFactory:musicMediaLoader:musicTrackAudioDataLoader:voiceoverMediaLoader:activeVideoPaths:imageCommandProvider:previewCameraSourceOverlayService:targetTrajectoryFactory:captionDataProvider:creativeToolsMemoriesResources:directorModeVideoOptimizationConfig:memoriesBackupTranscoder:snapVideoFilterServices:snapDocOverlayImageGenerationServices:overlayFormatServices:ngsmeSnapDocResolver:snapDocConverterServices:watermarkServices:blizzardLogger:ctpItemViewService:temporaryFileWriterServices:appLifecycleObservable:valdiRuntimeProvider:mediaEngineImageServices:performer:] */

undefined8 *
FUN_106f2a300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34)

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
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  puStack_70 = PTR_PTR_1126f7d98;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[5];
    puVar1[5] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[2];
    puVar1[2] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[7];
    puVar1[7] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[8];
    puVar1[8] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[9];
    puVar1[9] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[10];
    puVar1[10] = param_33;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_alloc_init();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    func_0x00010c184700(puVar1[0xb]);
    puVar3 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_alloc_init();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    func_0x00010c184700(puVar1[0xc]);
    puVar3 = PTR_PTR_1126d3420;
    _objc_alloc();
    func_0x00010c0477e0();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
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
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106f2a820; end: 106f2a827; -[SCSnapRendererImpl preparePlaybackModel:destination:] */

void FUN_106f2a820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c109d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_preparePlaybackModel_destination_112620160,param_3,param_4,0);
  return;
}



/* Entry: 106f2a828; end: 106f2aa3f; -[SCSnapRendererImpl preparePlaybackModel:destination:withPlugins:] */

void FUN_106f2a828(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126d3400;
  _objc_alloc(PTR_PTR_1126d3400);
  func_0x00010c052480();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0da2c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d33c0;
  _objc_alloc(PTR_PTR_1126d33c0);
  func_0x00010c055280();
  if (param_3 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(puVar4);
  }
  else {
    _objc_retain(param_5);
    puVar5 = param_5;
    func_0x00010bf529e0();
    puVar6 = param_5;
    if (puVar5 == (undefined *)0x0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
      func_0x000100c57964();
      if ((iVar1 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
        puVar5 = PTR_PTR_1126d3428;
        _objc_alloc();
        func_0x0001091286fc(*(undefined8 *)(param_1 + 0x38));
        func_0x000109128710(*(undefined8 *)(param_1 + 0x38));
        func_0x00010c05ff40();
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_5);
        _objc_release(puVar5);
      }
    }
    func_0x00010c109d20(uVar3);
  }
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12f6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106f2aa40; end: 106f2aa4b; -[SCSnapRendererImpl render:watermarkProfile:toDestination:] */

void FUN_106f2aa40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12f6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_render_watermarkProfile_toDestin_1126297d0);
  return;
}



/* Entry: 106f2aa4c; end: 106f2aa53; -[SCSnapRendererImpl render:watermarkProfile:toDestination:snapSource:] */

void FUN_106f2aa4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12f6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_render_watermarkProfile_toDestin_1126297d0);
  return;
}



/* Entry: 106f2aa54; end: 106f2aa5f; -[SCSnapRendererImpl render:watermarkProfile:toDestination:withPlugins:] */

void FUN_106f2aa54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12f6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_render_watermarkProfile_toDestin_1126297d0);
  return;
}



/* Entry: 106f2aa60; end: 106f2ae1f; -[SCSnapRendererImpl render:watermarkProfile:toDestination:snapSource:withPlugins:] */

/* WARNING: Possible PIC construction at 0x000106f2ae34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106f2ae38) */
/* WARNING: Removing unreachable block (ram,0x000106f2ace4) */

void FUN_106f2aa60(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_7);
  puVar2 = param_7;
  func_0x00010bf529e0();
  puVar3 = param_7;
  if (puVar2 == (undefined *)0x0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
    func_0x000100c57964();
    if ((iVar1 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
      puVar2 = PTR_PTR_1126d3428;
      _objc_alloc();
      func_0x0001091286fc(*(undefined8 *)(param_1 + 0x38));
      func_0x000109128710(*(undefined8 *)(param_1 + 0x38));
      func_0x00010c05ff40();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_7);
      _objc_release(puVar2);
    }
  }
  puVar2 = &UNK_10f3e8963;
  func_0x0001000ba800();
  puVar4 = PTR_PTR_1126d3400;
  _objc_alloc(PTR_PTR_1126d3400);
  func_0x00010c052480();
  func_0x00010c23c1c0();
  puVar5 = PTR_PTR_1126b0018;
  _objc_alloc();
  func_0x00010c047840();
  lVar6 = *(long *)(param_1 + 0x20);
  func_0x00010c130680();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  puVar7 = PTR_PTR_1126d33c8;
  _objc_alloc(PTR_PTR_1126d33c8);
  func_0x00010c055280();
  if (param_3 == 0) {
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(puVar7);
  }
  else {
    lVar8 = lVar6;
    func_0x00010c137ae0();
    if ((int)lVar8 == 0) {
      if (lVar6 != 0) goto LAB_106f2acc0;
      func_0x00010c1ec660(puVar4);
      func_0x00010c23c1a0(puVar4);
      puVar9 = *(undefined **)(param_1 + 0x30);
      func_0x00010bf8cb40(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d00(puVar7);
    }
    else {
      puVar9 = puVar3;
      func_0x00010bf529e0();
      if (puVar9 != (undefined *)0x0) {
LAB_106f2acc0:
        func_0x00010c1300c0(lVar6);
        goto LAB_106f2ad20;
      }
      puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(puVar7);
    }
  }
  _objc_release(puVar9);
LAB_106f2ad20:
  _objc_release(lVar6);
  _objc_release(0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x0001000e2a84(puVar2);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  func_0x0001000e2a84(puVar2);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x58),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 106f2ae20; end: 106f2ae47; -[SCSnapRendererImpl clearCachedRenderResources] */

/* WARNING: Possible PIC construction at 0x000106f2ae34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106f2ae38) */

void FUN_106f2ae20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 106f2ae48; end: 106f2aeef; -[SCSnapRendererImpl .cxx_destruct] */

void FUN_106f2ae48(long param_1)

{
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



/* Entry: 106f2aef0; end: 106f2af1b; -[SCSnapRendererLoggerImpl initWithTimeProvider:previewRewriteDestination:blizzardLogger:appLifecycleObservable:] */

void FUN_106f2aef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 1;
  if (param_4 == 0x10) {
    uVar1 = 7;
  }
  uVar2 = 8;
  if (param_4 != 0x20) {
    uVar2 = uVar1;
  }
  uVar1 = 6;
  if (param_4 != 1) {
    uVar1 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c052450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithTimeProvider_blizzardDes_1125f2318,param_3,uVar1);
  return;
}



/* Entry: 106f2af1c; end: 106f2af3b; -[SCSnapRendererLoggerImpl initWithTimeProvider:destination:blizzardLogger:appLifecycleObservable:] */

void FUN_106f2af1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  
  if (param_4 < 8) {
    uVar1 = *(undefined8 *)(&UNK_10de18c60 + param_4 * 8);
  }
  else {
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c052450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithTimeProvider_blizzardDes_1125f2318,param_3,uVar1);
  return;
}



/* Entry: 106f2af3c; end: 106f2b1d3; -[SCSnapRendererLoggerImpl initWithTimeProvider:blizzardDestination:blizzardLogger:appLifecycleObservable:] */

undefined8 *
FUN_106f2af3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f7da0;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d3430;
    _objc_opt_new();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    uVar4 = puVar1[3];
    puVar1[2] = param_4;
    puVar1[3] = 0;
    _objc_release(uVar4);
    func_0x00010c18c2a0(puVar1[1]);
    _objc_retain(param_3);
    uVar4 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = puVar1[0xc];
    puVar1[0xc] = param_5;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0xb];
    puVar1[0xb] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126d3438;
    _objc_alloc_init();
    uVar4 = puVar1[0xd];
    puVar1[0xd] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = puVar1[0xe];
    puVar1[0xe] = puVar2;
    _objc_release(uVar4);
    _objc_initWeak(auStack_68,puVar1);
    uVar4 = param_6;
    func_0x00010bf79200(param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106f2b1d4; end: 106f2b1f7;  */

void FUN_106f2b1d4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x7a) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106f2b1f8; end: 106f2b203; -[SCSnapRendererLoggerImpl handleMediaServicesResetNotification:] */

void FUN_106f2b1f8(long param_1)

{
  *(undefined1 *)(param_1 + 0x78) = 1;
  return;
}



/* Entry: 106f2b204; end: 106f2b20f; -[SCSnapRendererLoggerImpl handleMediaServicesLostNotification:] */

void FUN_106f2b204(long param_1)

{
  *(undefined1 *)(param_1 + 0x79) = 1;
  return;
}



/* Entry: 106f2b210; end: 106f2b247; -[SCSnapRendererLoggerImpl signalRTDStart] */

void FUN_106f2b210(double param_1,long param_2)

{
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x20));
  *(long *)(param_2 + 0x28) = (long)(param_1 * 1000.0);
  return;
}



/* Entry: 106f2b248; end: 106f2b473; -[SCSnapRendererLoggerImpl signalRTDFinish] */

void FUN_106f2b248(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  double dVar6;
  
  if (*(long *)(param_2 + 0x28) != 0) {
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x20));
    dVar6 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 0x28));
    func_0x00010c218520(*(undefined8 *)(param_2 + 8));
    uVar2 = *(undefined8 *)(param_2 + 8);
    lVar1 = param_2;
    func_0x00010be166c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1de000(uVar2);
    _objc_release(lVar1);
    if (*(char *)(param_2 + 0x7b) == '\x01') {
      ppuVar3 = &PTR____CFConstantStringClassReference_110df6498;
      func_0x00010c1972e0(*(undefined8 *)(param_2 + 8));
      ppuVar4 = ppuVar3;
    }
    else {
      lVar1 = *(long *)(param_2 + 0x18);
      if (lVar1 == 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110db8138;
        ppuVar3 = &PTR____CFConstantStringClassReference_110dae278;
      }
      else {
        if (*(char *)(param_2 + 0x7a) == '\x01') {
          func_0x00010c25ce40();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = *(undefined8 *)(param_2 + 0x18);
          *(long *)(param_2 + 0x18) = lVar1;
          _objc_release(uVar2);
          lVar1 = *(long *)(param_2 + 0x18);
        }
        if (*(char *)(param_2 + 0x79) == '\x01') {
          func_0x00010c25ce40();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = *(undefined8 *)(param_2 + 0x18);
          *(long *)(param_2 + 0x18) = lVar1;
          _objc_release(uVar2);
          lVar1 = *(long *)(param_2 + 0x18);
        }
        if (*(char *)(param_2 + 0x78) == '\x01') {
          func_0x00010c25ce40();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = *(undefined8 *)(param_2 + 0x18);
          *(long *)(param_2 + 0x18) = lVar1;
          _objc_release(uVar2);
        }
        func_0x00010c1972e0(*(undefined8 *)(param_2 + 8));
        ppuVar3 = *(undefined ***)(param_2 + 0x18);
        _objc_retain(ppuVar3);
        ppuVar4 = &PTR____CFConstantStringClassReference_110db8118;
      }
    }
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(param_2 + 0x68);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010bb10da8(uVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_106f442f0(uVar5,uVar2,ppuVar3,1);
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(param_2 + 0x68);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010bb10da8(uVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_106f44520(uVar5,uVar2,ppuVar4,(long)(param_1 * 1000.0 - dVar6));
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
    return;
  }
  return;
}



/* Entry: 106f2b474; end: 106f2b4ab; -[SCSnapRendererLoggerImpl signalPluginPreparationStart] */

void FUN_106f2b474(double param_1,long param_2)

{
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x20));
  *(long *)(param_2 + 0x30) = (long)(param_1 * 1000.0);
  return;
}



/* Entry: 106f2b4ac; end: 106f2b4fb; -[SCSnapRendererLoggerImpl signalPluginPreparationFinish] */

void FUN_106f2b4ac(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  if (*(long *)(param_2 + 0x30) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 8);
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x20));
    dVar2 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010c1de030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar1,PTR_s_setPluginsPreparationTimeMs__112655230,(long)(param_1 * 1000.0 - dVar2));
    return;
  }
  return;
}



/* Entry: 106f2b4fc; end: 106f2b533; -[SCSnapRendererLoggerImpl signalMediaPreparationStart] */

void FUN_106f2b4fc(double param_1,long param_2)

{
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x20));
  *(long *)(param_2 + 0x38) = (long)(param_1 * 1000.0);
  return;
}



/* Entry: 106f2b534; end: 106f2b583; -[SCSnapRendererLoggerImpl signalMediaPreparationFinish] */

void FUN_106f2b534(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  if (*(long *)(param_2 + 0x38) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 8);
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x20));
    dVar2 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010c1c5030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar1,PTR_s_setMediaPreprarationTimeMs__11264ee30,(long)(param_1 * 1000.0 - dVar2));
    return;
  }
  return;
}



/* Entry: 106f2b584; end: 106f2b5bb; -[SCSnapRendererLoggerImpl signalRenderPreparationStart] */

void FUN_106f2b584(double param_1,long param_2)

{
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x20));
  *(long *)(param_2 + 0x40) = (long)(param_1 * 1000.0);
  return;
}



/* Entry: 106f2b5bc; end: 106f2b60b; -[SCSnapRendererLoggerImpl signalRenderPreparationFinish] */

void FUN_106f2b5bc(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  if (*(long *)(param_2 + 0x40) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 8);
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x20));
    dVar2 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010c1ea8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar1,PTR_s_setRenderPreparationTimeMs__112658458,(long)(param_1 * 1000.0 - dVar2));
    return;
  }
  return;
}



/* Entry: 106f2b60c; end: 106f2b643; -[SCSnapRendererLoggerImpl signalPluginWarmingUpStart] */

void FUN_106f2b60c(double param_1,long param_2)

{
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x20));
  *(long *)(param_2 + 0x48) = (long)(param_1 * 1000.0);
  return;
}



/* Entry: 106f2b644; end: 106f2b693; -[SCSnapRendererLoggerImpl signalPluginWarmingUpFinish] */

void FUN_106f2b644(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  if (*(long *)(param_2 + 0x48) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 8);
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x20));
    dVar2 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010c1de050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar1,PTR_s_setPluginsWarmingUpTimeMs__112655238,(long)(param_1 * 1000.0 - dVar2));
    return;
  }
  return;
}



/* Entry: 106f2b694; end: 106f2b6eb; -[SCSnapRendererLoggerImpl setErrorString:] */

void FUN_106f2b694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1972e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f2b6ec; end: 106f2b6f3; -[SCSnapRendererLoggerImpl setCancelled:] */

void FUN_106f2b6ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x7b) = param_3;
  return;
}



/* Entry: 106f2b6f4; end: 106f2b723; -[SCSnapRendererLoggerImpl setInputMediaVideoCount:imageCount:] */

void FUN_106f2b6f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c1ad780(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c1ad430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setInputImageMediaCount__112648f30,param_4);
  return;
}



/* Entry: 106f2b724; end: 106f2b72b; -[SCSnapRendererLoggerImpl setInputMediaAudioCount:] */

void FUN_106f2b724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ad1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setInputAudioMediaCount__112648ea0);
  return;
}



/* Entry: 106f2b72c; end: 106f2b737; -[SCSnapRendererLoggerImpl setInputRenderEffectCount:] */

void FUN_106f2b72c(long param_1,undefined8 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ad610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setInputRenderEffectsCount__112648fa8,(long)param_3)
  ;
  return;
}



/* Entry: 106f2b738; end: 106f2b73f; -[SCSnapRendererLoggerImpl setRequiresTranscode:] */

void FUN_106f2b738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ec670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setRequiresTranscode__112658bc0);
  return;
}



/* Entry: 106f2b740; end: 106f2b76f; -[SCSnapRendererLoggerImpl setPluginsList:] */

void FUN_106f2b740(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f2b770; end: 106f2b777; -[SCSnapRendererLoggerImpl appendLensId:] */

void FUN_106f2b770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x58),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 106f2b778; end: 106f2b79b; -[SCSnapRendererLoggerImpl signalContentManagerVideoResultURLWasWrittenToDisk:] */

void FUN_106f2b778(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_1 + 0x68);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e8e198;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e51178;
  }
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar1;
  _objc_retain(ppuVar1);
  if (lVar2 != 0) {
    plVar6 = *(long **)(lVar2 + 8);
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f3e98bd;
    }
    else {
      ppuVar3 = ppuVar1;
      _objc_retainAutorelease(ppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar1);
    func_0x00010002b838(auStack_60,ppuVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar3 = (undefined **)&UNK_1109845d8;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1109845d8,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  ppuVar4 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  ppuVar5 = ppuVar4;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106f448c4;
  if (ppuVar5 != (undefined **)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    ppuStack_a0 = ppuVar4;
    ppuStack_98 = ppuVar1;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(*(long *)ppuVar5[1] + 0x18))(ppuVar5[1],&UNK_110984628,&uStack_c0,ppuVar3);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106f2b79c; end: 106f2b83b; -[SCSnapRendererLoggerImpl _finalPluginsList] */

void FUN_106f2b79c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x50);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010befa160(puVar1,param_2,*(undefined8 *)(param_1 + 0x50));
  }
  lVar2 = *(long *)(param_1 + 0x58);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010befa160(puVar1,param_2,*(undefined8 *)(param_1 + 0x58));
  }
  puVar3 = puVar1;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar1;
    func_0x00010bf446e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


