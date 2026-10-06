/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f2b83c; end: 106f2b8b3; -[SCSnapRendererLoggerImpl .cxx_destruct] */

void FUN_106f2b83c(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f2b8b4; end: 106f2b9b3; -[SCSnapRendererUtilsSegmentInfo description] */

void FUN_106f2b8b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c277f00();
  func_0x00010c0c6c20();
  func_0x00010c299e60();
  func_0x00010c26f620(&uStack_80,param_1);
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_a0 = uStack_70;
  _CMTimeGetSeconds(&uStack_b0);
  func_0x00010c26f620(&uStack_b0,param_1);
  uStack_c8 = uStack_90;
  uStack_d0 = uStack_98;
  uStack_c0 = uStack_88;
  _CMTimeGetSeconds(&uStack_d0);
  func_0x00010c0c5980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e8e1b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f2b9b4; end: 106f2b9bb; -[SCSnapRendererUtilsSegmentInfo mediaObject] */

undefined8 FUN_106f2b9b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f2b9bc; end: 106f2b9eb; -[SCSnapRendererUtilsSegmentInfo setMediaObject:] */

void FUN_106f2b9bc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f2b9ec; end: 106f2b9f3; -[SCSnapRendererUtilsSegmentInfo mediaType] */

undefined4 FUN_106f2b9ec(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106f2b9f4; end: 106f2b9fb; -[SCSnapRendererUtilsSegmentInfo setMediaType:] */

void FUN_106f2b9f4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106f2b9fc; end: 106f2ba03; -[SCSnapRendererUtilsSegmentInfo videoDurationMs] */

undefined8 FUN_106f2b9fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106f2ba04; end: 106f2ba0b; -[SCSnapRendererUtilsSegmentInfo setVideoDurationMs:] */

void FUN_106f2ba04(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 106f2ba0c; end: 106f2ba1f; -[SCSnapRendererUtilsSegmentInfo timeRange] */

void FUN_106f2ba0c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  param_1[1] = *(undefined8 *)(param_2 + 0x38);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  param_1[5] = *(undefined8 *)(param_2 + 0x58);
  param_1[4] = uVar1;
  return;
}



/* Entry: 106f2ba20; end: 106f2ba33; -[SCSnapRendererUtilsSegmentInfo setTimeRange:] */

void FUN_106f2ba20(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar3 = param_3[2];
  uVar5 = param_3[5];
  uVar4 = param_3[4];
  *(undefined8 *)(param_1 + 0x48) = param_3[3];
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}



/* Entry: 106f2ba34; end: 106f2ba3b; -[SCSnapRendererUtilsSegmentInfo trackIndex] */

undefined4 FUN_106f2ba34(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 106f2ba3c; end: 106f2ba43; -[SCSnapRendererUtilsSegmentInfo setTrackIndex:] */

void FUN_106f2ba3c(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 106f2ba44; end: 106f2ba4b; -[SCSnapRendererUtilsSegmentInfo localCacheKey] */

undefined8 FUN_106f2ba44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106f2ba4c; end: 106f2ba7b; -[SCSnapRendererUtilsSegmentInfo setLocalCacheKey:] */

void FUN_106f2ba4c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f2ba7c; end: 106f2ba83; -[SCSnapRendererUtilsSegmentInfo mediaId] */

undefined8 FUN_106f2ba7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106f2ba84; end: 106f2bab3; -[SCSnapRendererUtilsSegmentInfo setMediaId:] */

void FUN_106f2ba84(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f2bab4; end: 106f2baef; -[SCSnapRendererUtilsSegmentInfo .cxx_destruct] */

void FUN_106f2bab4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106f2baf0; end: 106f2bb47; +[SCSnapRendererPluginEffectRenderUtils ctItemInstanceForTranscodingPluginSnapDoc:destination:error:] */

void FUN_106f2baf0(long param_1)

{
  long lVar1;
  
  func_0x00010c23ff20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf5cc00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106f2bb48; end: 106f2bbab; +[SCSnapRendererPluginEffectRenderUtils ctItemInstancesForTranscodingPluginSnapDoc:destination:error:] */

void FUN_106f2bb48(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c23ff40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0b8620(param_1,param_2,&PTR___NSConcreteGlobalBlock_110983898,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106f2bbac; end: 106f2bbb3;  */

void FUN_106f2bbac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5cc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_ctItem_1125b4ca8);
  return;
}



/* Entry: 106f2bbb4; end: 106f2bd37; +[SCSnapRendererPluginEffectRenderUtils playbackLayerMapFromSnapDoc:] */

void FUN_106f2bbb4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1b0;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar12 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
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
  uVar17 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar17;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar17);
  puVar13 = auStack_e8;
  uVar14 = 0x10;
  uVar17 = uVar2;
  func_0x00010bf52a60();
  if (uVar17 != 0) {
    lVar15 = *plStack_120;
    do {
      uVar18 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(uVar2);
        }
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0ff5c0(*(undefined8 *)(lStack_128 + uVar18 * 8));
        func_0x00010c0df820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar3);
        uVar18 = uVar18 + 1;
      } while (uVar17 != uVar18);
      puVar13 = auStack_e8;
      uVar14 = 0x10;
      uVar17 = uVar2;
      puVar12 = &uStack_130;
      func_0x00010bf52a60();
    } while (uVar17 != 0);
  }
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar12);
    _objc_retain(puVar13);
    _objc_retain(uVar14);
    func_0x00010c065da0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar4 = PTR_PTR_1126b1060;
    _objc_alloc();
    func_0x00010c032f60();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar17 = param_3;
    func_0x00010bf529e0();
    if (uVar17 != 0) {
      uVar17 = 0;
      do {
        uVar2 = param_3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar2;
        func_0x00010c0c5980();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126ae560;
        _objc_opt_new();
        puVar6 = puVar1;
        func_0x00010bfbc3e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(puVar6);
        uVar16 = uVar18;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar16;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        if ((uVar7 == 0) || (uVar16 = uVar7, func_0x00010c0c55e0(), (long)uVar16 < 0)) {
          uVar16 = 0;
        }
        else {
          uStack_248 = 0;
          uStack_250 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          lStack_268 = 0;
          uStack_270 = 0;
          uStack_258 = 0;
          plStack_260 = (long *)0x0;
          puVar8 = (undefined1 *)puVar12;
          func_0x00010c0c6280();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010bf52a60();
          if (puVar9 != (undefined1 *)0x0) {
            lVar15 = *plStack_260;
            do {
              puVar19 = (undefined1 *)0x0;
              do {
                if (*plStack_260 != lVar15) {
                  _objc_enumerationMutation(puVar8);
                }
                uVar16 = *(ulong *)(lStack_268 + (long)puVar19 * 8);
                uVar10 = uVar16;
                func_0x00010c0c55e0();
                uVar11 = uVar7;
                func_0x00010c0c55e0();
                if (uVar10 == uVar11) {
                  uVar10 = uVar16;
                  func_0x00010c09d7e0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar11 = uVar10;
                  func_0x00010c08fa60();
                  _objc_release(uVar10);
                  if (uVar11 != 0) {
                    func_0x00010c09d7e0();
                    _objc_retainAutoreleasedReturnValue();
                    goto LAB_106f2bfec;
                  }
                  uVar10 = uVar16;
                  func_0x00010bdc2b80();
                  _objc_retainAutoreleasedReturnValue();
                  uVar11 = uVar10;
                  func_0x00010c08fa60();
                  _objc_release(uVar10);
                  if (uVar11 == 0) goto LAB_106f2bfe8;
                  func_0x00010bdc2b80();
                  _objc_retainAutoreleasedReturnValue();
                  goto LAB_106f2bfec;
                }
                puVar19 = puVar19 + 1;
              } while (puVar9 != puVar19);
              puVar9 = puVar8;
              func_0x00010bf52a60();
            } while (puVar9 != (undefined1 *)0x0);
          }
LAB_106f2bfe8:
          uVar16 = 0;
LAB_106f2bfec:
          _objc_release(puVar8);
        }
        puStack_288 = &uStack_290;
        uStack_290 = 0;
        uStack_280 = 0x2020000000;
        uStack_278 = 0;
        _objc_retain(uVar7);
        _objc_retain(puVar1);
        func_0x00010c0f7fe0(0x4024000000000000,uVar14);
        _objc_retain(uVar14);
        _objc_retain(uVar2);
        _objc_retain(uVar16);
        _objc_retain(uVar7);
        _objc_retain(puVar1);
        func_0x00010c13eb40(puVar13);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(uVar7);
        _objc_release(uVar16);
        _objc_release(uVar2);
        _objc_release(uVar14);
        _objc_release(puVar1);
        _objc_release(uVar7);
        __Block_object_dispose(&uStack_290,8);
        _objc_release(uVar16);
        _objc_release(uVar7);
        _objc_release(puVar1);
        _objc_release(uVar18);
        _objc_release(uVar2);
        uVar2 = param_3;
        func_0x00010bf529e0();
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar2);
    }
    puVar1 = PTR_PTR_1126ae558;
    func_0x00010beffb40(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    func_0x00010c297260(puVar1);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(param_3);
    _objc_release(uVar14);
    _objc_release(puVar13);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
      ___stack_chk_fail();
      __Block_object_dispose(&uStack_290,8);
      __Unwind_Resume();
      if ((*(byte *)(*(long *)(*(long *)((long)puVar12 + 0x30) + 8) + 0x18) & 1) == 0) {
        *(undefined1 *)(*(long *)(*(long *)((long)puVar12 + 0x30) + 8) + 0x18) = 1;
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        _objc_retain();
        func_0x00010bf43ca0(*(undefined8 *)((long)puVar12 + 0x28));
        _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar3);
        return;
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f2bd38; end: 106f2c277; +[SCSnapRendererPluginEffectRenderUtils inputVideoImageContentResultsForSnapDoc:snapDocManager:completionPerformer:] */

void FUN_106f2bd38(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c065da0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126b1060;
  _objc_alloc();
  func_0x00010c032f60();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar15 = param_1;
  func_0x00010bf529e0();
  if (uVar15 != 0) {
    uVar15 = 0;
    do {
      uVar4 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0c5980();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126ae560;
      _objc_opt_new();
      puVar7 = puVar6;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(puVar7);
      uVar14 = uVar5;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar14;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
      if ((uVar8 == 0) || (uVar14 = uVar8, func_0x00010c0c55e0(), (long)uVar14 < 0)) {
        uVar14 = 0;
      }
      else {
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        lStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        plStack_130 = (long *)0x0;
        lVar12 = param_3;
        func_0x00010c0c6280();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar12;
        func_0x00010bf52a60();
        if (lVar9 != 0) {
          lVar13 = *plStack_130;
          do {
            lVar16 = 0;
            do {
              if (*plStack_130 != lVar13) {
                _objc_enumerationMutation(lVar12);
              }
              uVar14 = *(ulong *)(lStack_138 + lVar16 * 8);
              uVar10 = uVar14;
              func_0x00010c0c55e0();
              uVar11 = uVar8;
              func_0x00010c0c55e0();
              if (uVar10 == uVar11) {
                uVar10 = uVar14;
                func_0x00010c09d7e0();
                _objc_retainAutoreleasedReturnValue();
                uVar11 = uVar10;
                func_0x00010c08fa60();
                _objc_release(uVar10);
                if (uVar11 != 0) {
                  func_0x00010c09d7e0();
                  _objc_retainAutoreleasedReturnValue();
                  goto LAB_106f2bfec;
                }
                uVar10 = uVar14;
                func_0x00010bdc2b80();
                _objc_retainAutoreleasedReturnValue();
                uVar11 = uVar10;
                func_0x00010c08fa60();
                _objc_release(uVar10);
                if (uVar11 == 0) goto LAB_106f2bfe8;
                func_0x00010bdc2b80();
                _objc_retainAutoreleasedReturnValue();
                goto LAB_106f2bfec;
              }
              lVar16 = lVar16 + 1;
            } while (lVar9 != lVar16);
            lVar9 = lVar12;
            func_0x00010bf52a60();
          } while (lVar9 != 0);
        }
LAB_106f2bfe8:
        uVar14 = 0;
LAB_106f2bfec:
        _objc_release(lVar12);
      }
      puStack_158 = &uStack_160;
      uStack_160 = 0;
      uStack_150 = 0x2020000000;
      uStack_148 = 0;
      _objc_retain(uVar8);
      _objc_retain(puVar6);
      func_0x00010c0f7fe0(0x4024000000000000,param_5);
      _objc_retain(param_5);
      _objc_retain(uVar4);
      _objc_retain(uVar14);
      _objc_retain(uVar8);
      _objc_retain(puVar6);
      func_0x00010c13eb40(param_4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(uVar8);
      _objc_release(uVar14);
      _objc_release(uVar4);
      _objc_release(param_5);
      _objc_release(puVar6);
      _objc_release(uVar8);
      __Block_object_dispose(&uStack_160,8);
      _objc_release(uVar14);
      _objc_release(uVar8);
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      uVar4 = param_1;
      func_0x00010bf529e0();
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar4);
  }
  puVar6 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00010c297260(puVar6);
  _objc_release(puVar6);
  puVar6 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_160,8);
  __Unwind_Resume();
  lVar12 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  if ((*(byte *)(lVar12 + 0x18) & 1) == 0) {
    *(undefined1 *)(lVar12 + 0x18) = 1;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_retain();
    func_0x00010bf43ca0(*(undefined8 *)(param_3 + 0x28));
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106f2c278; end: 106f2c333;  */

void FUN_106f2c278(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  if ((*(byte *)(lVar3 + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(lVar3 + 0x18) = 1;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e8e1d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e877f8,puVar1,0x1a);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_retain();
  func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28),param_2,puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106f2c334; end: 106f2c37f;  */

void FUN_106f2c334(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e877f8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_1 = puVar1;
  }
  return;
}



/* Entry: 106f2c380; end: 106f2c593;  */

void FUN_106f2c380(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 106f2c594; end: 106f2c5a7;  */

void FUN_106f2c594(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106f2c5a8; end: 106f2c5f3; +[SCSnapRendererPluginEffectRenderUtils contentMediaIdsForSnapDocRender:] */

void FUN_106f2c5a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c065da0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f2c5f4; end: 106f2c65b;  */

void FUN_106f2c5f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0c5980(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f2c65c; end: 106f2c8f7; +[SCSnapRendererPluginEffectRenderUtils playbackLayerTypeCountsForSnapDoc:] */

undefined * FUN_106f2c65c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
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
  puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar10 = &uStack_130;
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar15 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(lVar2);
        }
        uVar13 = *(undefined8 *)(lStack_128 + lVar11 * 8);
        uVar14 = uVar13;
        func_0x00010c08c3a0();
        if ((int)uVar14 == 4) {
          uVar14 = 3;
        }
        else if ((int)uVar14 == 1) {
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar13;
          func_0x00010bf0b760();
          _objc_release(uVar13);
          uVar14 = 1;
          if ((int)uVar3 == 6) {
            uVar14 = 2;
          }
        }
        else {
          uVar14 = 0;
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar12;
        func_0x00010c0e00e0(puVar12,param_2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar14);
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 == (undefined *)0x0) {
          func_0x00010c1d0640(puVar12,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c98f8,
                              puVar4);
        }
        else {
          puVar5 = puVar12;
          func_0x00010c0e00e0(puVar12,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          puVar6 = puVar5;
          func_0x00010c067ec0(puVar5);
          func_0x00010c0df760(puVar4,param_2,(int)puVar6 + 1);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar12,param_2,puVar4,puVar6);
          _objc_release(puVar6);
          _objc_release(puVar4);
          puVar4 = puVar5;
        }
        _objc_release(puVar4);
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      puVar10 = &uStack_130;
      lVar1 = lVar2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return puVar12;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  puVar7 = puVar10;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bfdb0c0();
  _objc_release(puVar8);
  _objc_release(puVar7);
  if (((ulong)puVar9 & 1) == 0) {
    func_0x00010c0ff620(param_3,param_2,puVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067fc0();
    _objc_release(lVar1);
    if (lVar2 < 1) {
      lVar1 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9928);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c067fc0();
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9940);
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar1;
      func_0x00010c067fc0();
      _objc_release(lVar1);
      puVar12 = (undefined *)(ulong)((lVar2 == 1 && lVar15 != 0) && (lVar2 != 1 || -1 < lVar15));
    }
    else {
      puVar12 = (undefined *)0x0;
    }
    _objc_release(param_3);
  }
  else {
    puVar12 = (undefined *)0x0;
  }
  _objc_release(puVar10);
  return puVar12;
}



/* Entry: 106f2c8f8; end: 106f2ca3f; +[SCSnapRendererPluginEffectRenderUtils snapDocContainsSingleMediaAndCTItemEditsWithNoOverlay:] */

bool FUN_106f2c8f8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdb0c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    func_0x00010c0ff620(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c067fc0();
    _objc_release(lVar4);
    if (lVar5 < 1) {
      lVar4 = param_1;
      func_0x00010c0e00e0(param_1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9928);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c067fc0();
      _objc_release(lVar4);
      lVar4 = param_1;
      func_0x00010c0e00e0(param_1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9940);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010c067fc0();
      _objc_release(lVar4);
      bVar7 = (lVar5 == 1 && lVar6 != 0) && (lVar5 != 1 || -1 < lVar6);
    }
    else {
      bVar7 = false;
    }
    _objc_release(param_1);
  }
  else {
    bVar7 = false;
  }
  _objc_release(param_3);
  return bVar7;
}



/* Entry: 106f2ca40; end: 106f2cb1f; +[SCSnapRendererPluginEffectRenderUtils snapDocDoesNotRequireOverlayRendering:] */

undefined8 FUN_106f2ca40(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010c0ff620();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    lVar1 = param_1;
    func_0x00010c0e00e0(param_1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9940);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067fc0();
    _objc_release(lVar1);
    if (0 < lVar2) {
      lVar1 = param_1;
      func_0x00010c0e00e0(param_1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9910);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c067fc0();
      _objc_release(lVar1);
      if (lVar2 < 1) goto LAB_106f2cb00;
    }
    uVar3 = 1;
  }
  else {
LAB_106f2cb00:
    uVar3 = 0;
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 106f2cb20; end: 106f2cd3b; +[SCSnapRendererPluginEffectRenderUtils snapDocContainsOnlyVideoAudioAndCTItemEdits:] */

undefined *
FUN_106f2cb20(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined1 *param_4)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined **ppuVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  uint uVar21;
  undefined *puVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined *puVar26;
  undefined8 uVar27;
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
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar24 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_3);
  puVar20 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar20;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar3;
  func_0x00010bfdb0c0();
  _objc_release(puVar3);
  _objc_release(puVar20);
  if (((ulong)puVar26 & 1) == 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puVar20 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar20;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    param_4 = auStack_e8;
    puVar20 = puVar3;
    func_0x00010bf52a60();
    if (puVar20 == (undefined *)0x0) {
      lVar23 = 0;
    }
    else {
      lVar23 = 0;
      lVar25 = *plStack_120;
      do {
        puVar26 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar25) {
            _objc_enumerationMutation(puVar3);
          }
          uVar27 = *(undefined8 *)(lStack_128 + (long)puVar26 * 8);
          uVar4 = uVar27;
          func_0x00010c08c3a0();
          if ((int)uVar4 == 4) {
            lVar23 = lVar23 + 1;
          }
          else {
            if ((int)uVar4 != 1) {
LAB_106f2ccd4:
              uVar21 = 0;
              goto LAB_106f2cce4;
            }
            uVar4 = uVar27;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010c27dd80();
            if ((int)uVar5 == 1) {
              _objc_release(uVar4);
            }
            else {
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar27;
              func_0x00010bf0b760();
              _objc_release(uVar27);
              _objc_release(uVar4);
              if ((int)uVar5 != 2) goto LAB_106f2ccd4;
            }
          }
          puVar26 = puVar26 + 1;
        } while (puVar20 != puVar26);
        param_4 = auStack_e8;
        puVar20 = puVar3;
        puVar24 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar20 != (undefined *)0x0);
    }
    uVar21 = 1;
LAB_106f2cce4:
    _objc_release(puVar3);
    uVar1 = 0;
    if (lVar23 != 0) {
      uVar1 = uVar21;
    }
    puVar20 = (undefined *)(ulong)uVar1;
  }
  else {
    puVar20 = (undefined *)0x0;
    puVar24 = (undefined8 *)puVar6;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar20;
  }
  ___stack_chk_fail();
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar19 = param_4;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = (undefined *)puVar24;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar20;
  func_0x00010c12fae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar20);
  _objc_release(puVar24);
  puVar20 = puVar3;
  func_0x00010c12fb20();
  if (puVar20 == (undefined *)0x1) {
    puVar20 = puVar3;
    func_0x00010c12fb00();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar20;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    puVar20 = puVar26;
    func_0x00010c14fb60();
    if ((int)puVar20 == 2) {
      puVar20 = puVar26;
      func_0x00010c12f9c0();
      if (puVar20 != (undefined *)0x1) {
        ppuVar18 = &PTR____CFConstantStringClassReference_110e8e238;
        goto LAB_106f2d050;
      }
      puVar20 = puVar26;
      func_0x00010c12f9a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar20;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar20);
      puVar20 = puVar6;
      func_0x00010c12fa60();
      if (puVar20 == (undefined *)0x1) {
        puVar20 = puVar6;
        func_0x00010c12fa40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar20;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar20);
        puVar20 = puVar7;
        func_0x00010bf8cec0();
        if ((int)puVar20 == 1) {
          puVar20 = puVar7;
          func_0x00010bf5cc00();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar20;
          func_0x00010bfd8220();
          _objc_release(puVar20);
          if (((ulong)puVar8 & 1) == 0) {
            ppuVar18 = &PTR____CFConstantStringClassReference_110e8e298;
            goto LAB_106f2d0cc;
          }
          puVar20 = puVar7;
          func_0x00010bf5cc00();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar20;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010bfd6be0();
          _objc_release(puVar8);
          _objc_release(puVar20);
          if (((ulong)puVar9 & 1) == 0) {
            ppuVar18 = &PTR____CFConstantStringClassReference_110e8e2b8;
            goto LAB_106f2d0cc;
          }
          puVar20 = puVar7;
          func_0x00010c0664a0();
          if (puVar20 == (undefined *)0x0) {
            ppuVar18 = &PTR____CFConstantStringClassReference_110e8e2d8;
            goto LAB_106f2d0cc;
          }
          puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
          func_0x00010c1607a0();
          _objc_retainAutoreleasedReturnValue();
          lStack_258 = 0;
          uStack_260 = 0;
          uStack_248 = 0;
          plStack_250 = (long *)0x0;
          uStack_238 = 0;
          uStack_240 = 0;
          uStack_228 = 0;
          uStack_230 = 0;
          puVar20 = puVar7;
          func_0x00010c066480();
          _objc_retainAutoreleasedReturnValue();
          puVar24 = &uStack_260;
          puVar19 = auStack_220;
          puVar9 = puVar20;
          func_0x00010bf52a60();
          if (puVar9 != (undefined *)0x0) {
            lVar23 = *plStack_250;
            do {
              puVar22 = (undefined *)0x0;
              do {
                if (*plStack_250 != lVar23) {
                  _objc_enumerationMutation(puVar20);
                }
                uVar27 = *(undefined8 *)(lStack_258 + (long)puVar22 * 8);
                uVar4 = uVar27;
                func_0x00010c065ee0();
                puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                if ((int)uVar4 != 8) {
                  puVar24 = (undefined8 *)0x2;
                  FUN_106f2c334(param_4,&PTR____CFConstantStringClassReference_110e8e2f8);
                  _objc_release(puVar20);
                  goto LAB_106f2d14c;
                }
                func_0x00010c277f00(uVar27);
                func_0x00010c0df820();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar8);
                _objc_release(puVar10);
                puVar22 = puVar22 + 1;
              } while (puVar9 != puVar22);
              puVar24 = &uStack_260;
              puVar19 = auStack_220;
              puVar9 = puVar20;
              func_0x00010bf52a60();
            } while (puVar9 != (undefined *)0x0);
          }
          _objc_release(puVar20);
          puVar20 = puVar8;
          func_0x00010bf529e0();
          puVar9 = puVar7;
          func_0x00010c0664a0();
          if (puVar20 == puVar9) {
            _objc_retain(puVar7);
            puVar20 = puVar7;
          }
          else {
            puVar24 = (undefined8 *)0x2;
            FUN_106f2c334(param_4,&PTR____CFConstantStringClassReference_110e8e318);
LAB_106f2d14c:
            puVar20 = (undefined *)0x0;
          }
          _objc_release(puVar8);
        }
        else {
          ppuVar18 = &PTR____CFConstantStringClassReference_110e8e278;
LAB_106f2d0cc:
          puVar24 = (undefined8 *)0x2;
          FUN_106f2c334(param_4,ppuVar18);
          puVar20 = (undefined *)0x0;
        }
        _objc_release(puVar7);
      }
      else {
        puVar24 = (undefined8 *)0x2;
        FUN_106f2c334(param_4,&PTR____CFConstantStringClassReference_110e8e258);
        puVar20 = (undefined *)0x0;
      }
      _objc_release(puVar6);
    }
    else {
      ppuVar18 = &PTR____CFConstantStringClassReference_110e8e218;
LAB_106f2d050:
      puVar24 = (undefined8 *)0x2;
      FUN_106f2c334(param_4,ppuVar18);
      puVar20 = (undefined *)0x0;
    }
    _objc_release(puVar26);
  }
  else {
    puVar24 = (undefined8 *)0x2;
    FUN_106f2c334(param_4,&PTR____CFConstantStringClassReference_110e8e1f8);
    puVar20 = (undefined *)0x0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar24;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c12fae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar24);
  puVar24 = puVar12;
  func_0x00010c12fb20();
  if (puVar24 == (undefined8 *)0x1) {
    puVar24 = puVar12;
    func_0x00010c12fb00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar24;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    puVar24 = puVar11;
    func_0x00010c14fb60();
    if ((int)puVar24 == 2) {
      puVar24 = puVar11;
      func_0x00010c12f9c0();
      if (puVar24 != (undefined8 *)0x1) {
        ppuVar18 = &PTR____CFConstantStringClassReference_110e8e238;
        goto LAB_106f2d3f0;
      }
      puVar24 = puVar11;
      func_0x00010c12f9a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar24;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar24);
      puVar24 = puVar13;
      func_0x00010c12fa60();
      puVar26 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      if (puVar24 == (undefined8 *)0x0) {
        FUN_106f2c334(puVar19,&PTR____CFConstantStringClassReference_110e8e338,2);
        puVar20 = (undefined *)0x0;
      }
      else {
        func_0x00010c12fa60(puVar13);
        func_0x00010bf0a0e0(puVar26);
        _objc_retainAutoreleasedReturnValue();
        puVar24 = puVar13;
        func_0x00010c12fa60();
        if (puVar24 != (undefined8 *)0x0) {
          puVar24 = (undefined8 *)0x0;
          do {
            puVar14 = puVar13;
            func_0x00010c12fa40();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar14;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar14);
            puVar14 = puVar15;
            func_0x00010bf8cec0();
            if ((int)puVar14 != 1) {
LAB_106f2d450:
              puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df840();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14de00(puVar20);
              _objc_retainAutoreleasedReturnValue();
              FUN_106f2c334(puVar19,puVar20,2);
              _objc_release(puVar20);
              _objc_release(puVar3);
              _objc_release(puVar15);
              puVar20 = (undefined *)0x0;
              goto LAB_106f2d4bc;
            }
            puVar14 = puVar15;
            func_0x00010bf5cc00();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar14;
            func_0x00010bfd8220();
            _objc_release(puVar14);
            if ((int)puVar16 == 0) goto LAB_106f2d450;
            puVar14 = puVar15;
            func_0x00010bf5cc00();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar14;
            func_0x00010c0840e0();
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar16;
            func_0x00010bfd6be0();
            _objc_release(puVar16);
            _objc_release(puVar14);
            if (((int)puVar17 == 0) ||
               (puVar14 = puVar15, func_0x00010c0664a0(), puVar14 == (undefined8 *)0x0))
            goto LAB_106f2d450;
            if (puVar24 == (undefined8 *)0x0) {
              puVar20 = puVar3;
              func_0x00010c12fa20();
              if (((ulong)puVar20 & 1) == 0) goto LAB_106f2d450;
            }
            else {
              iVar2 = (int)puVar3;
              func_0x00010c12fa00();
              if (iVar2 == 0) goto LAB_106f2d450;
            }
            func_0x00010befa120(puVar26);
            _objc_release(puVar15);
            puVar24 = (undefined8 *)((long)puVar24 + 1);
            puVar14 = puVar13;
            func_0x00010c12fa60();
          } while (puVar24 < puVar14);
        }
        _objc_retain(puVar26);
        puVar20 = puVar26;
LAB_106f2d4bc:
        _objc_release(puVar26);
      }
      _objc_release(puVar13);
    }
    else {
      ppuVar18 = &PTR____CFConstantStringClassReference_110e8e218;
LAB_106f2d3f0:
      FUN_106f2c334(puVar19,ppuVar18,2);
      puVar20 = (undefined *)0x0;
    }
    _objc_release(puVar11);
  }
  else {
    FUN_106f2c334(puVar19,&PTR____CFConstantStringClassReference_110e8e1f8,2);
    puVar20 = (undefined *)0x0;
  }
  _objc_release(puVar12);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return puVar20;
}



/* Entry: 106f2cd3c; end: 106f2d15f; +[SCSnapRendererPluginEffectRenderUtils snapDocContainsValidLensRenderEffect:error:] */

void FUN_106f2cd3c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined **ppuVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
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
  puVar18 = param_4;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = param_3;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar19;
  func_0x00010c12fae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(param_3);
  puVar19 = puVar2;
  func_0x00010c12fb20();
  if (puVar19 == (undefined *)0x1) {
    puVar19 = puVar2;
    func_0x00010c12fb00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar19;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    puVar19 = puVar3;
    func_0x00010c14fb60();
    if ((int)puVar19 == 2) {
      puVar19 = puVar3;
      func_0x00010c12f9c0();
      if (puVar19 != (undefined *)0x1) {
        ppuVar17 = &PTR____CFConstantStringClassReference_110e8e238;
        goto LAB_106f2d050;
      }
      puVar19 = puVar3;
      func_0x00010c12f9a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar19;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      puVar19 = puVar4;
      func_0x00010c12fa60();
      if (puVar19 == (undefined *)0x1) {
        puVar19 = puVar4;
        func_0x00010c12fa40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar19;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar19);
        puVar19 = puVar5;
        func_0x00010bf8cec0();
        if ((int)puVar19 == 1) {
          puVar19 = puVar5;
          func_0x00010bf5cc00();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar19;
          func_0x00010bfd8220();
          _objc_release(puVar19);
          if (((ulong)puVar6 & 1) == 0) {
            ppuVar17 = &PTR____CFConstantStringClassReference_110e8e298;
            goto LAB_106f2d0cc;
          }
          puVar19 = puVar5;
          func_0x00010bf5cc00();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar19;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bfd6be0();
          _objc_release(puVar6);
          _objc_release(puVar19);
          if (((ulong)puVar7 & 1) == 0) {
            ppuVar17 = &PTR____CFConstantStringClassReference_110e8e2b8;
            goto LAB_106f2d0cc;
          }
          puVar19 = puVar5;
          func_0x00010c0664a0();
          if (puVar19 == (undefined *)0x0) {
            ppuVar17 = &PTR____CFConstantStringClassReference_110e8e2d8;
            goto LAB_106f2d0cc;
          }
          puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
          func_0x00010c1607a0();
          _objc_retainAutoreleasedReturnValue();
          lStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          plStack_120 = (long *)0x0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          puVar19 = puVar5;
          func_0x00010c066480();
          _objc_retainAutoreleasedReturnValue();
          puVar22 = &uStack_130;
          puVar18 = auStack_f0;
          puVar7 = puVar19;
          func_0x00010bf52a60();
          if (puVar7 != (undefined *)0x0) {
            lVar21 = *plStack_120;
            do {
              puVar20 = (undefined *)0x0;
              do {
                if (*plStack_120 != lVar21) {
                  _objc_enumerationMutation(puVar19);
                }
                uVar23 = *(undefined8 *)(lStack_128 + (long)puVar20 * 8);
                uVar8 = uVar23;
                func_0x00010c065ee0();
                puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                if ((int)uVar8 != 8) {
                  puVar22 = (undefined8 *)0x2;
                  FUN_106f2c334(param_4,&PTR____CFConstantStringClassReference_110e8e2f8);
                  _objc_release(puVar19);
                  goto LAB_106f2d14c;
                }
                func_0x00010c277f00(uVar23);
                func_0x00010c0df820();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar6);
                _objc_release(puVar9);
                puVar20 = puVar20 + 1;
              } while (puVar7 != puVar20);
              puVar22 = &uStack_130;
              puVar18 = auStack_f0;
              puVar7 = puVar19;
              func_0x00010bf52a60();
            } while (puVar7 != (undefined *)0x0);
          }
          _objc_release(puVar19);
          puVar19 = puVar6;
          func_0x00010bf529e0();
          puVar7 = puVar5;
          func_0x00010c0664a0();
          if (puVar19 == puVar7) {
            _objc_retain(puVar5);
            puVar19 = puVar5;
          }
          else {
            puVar22 = (undefined8 *)0x2;
            FUN_106f2c334(param_4,&PTR____CFConstantStringClassReference_110e8e318);
LAB_106f2d14c:
            puVar19 = (undefined *)0x0;
          }
          _objc_release(puVar6);
        }
        else {
          ppuVar17 = &PTR____CFConstantStringClassReference_110e8e278;
LAB_106f2d0cc:
          puVar22 = (undefined8 *)0x2;
          FUN_106f2c334(param_4,ppuVar17);
          puVar19 = (undefined *)0x0;
        }
        _objc_release(puVar5);
      }
      else {
        puVar22 = (undefined8 *)0x2;
        FUN_106f2c334(param_4,&PTR____CFConstantStringClassReference_110e8e258);
        puVar19 = (undefined *)0x0;
      }
      _objc_release(puVar4);
    }
    else {
      ppuVar17 = &PTR____CFConstantStringClassReference_110e8e218;
LAB_106f2d050:
      puVar22 = (undefined8 *)0x2;
      FUN_106f2c334(param_4,ppuVar17);
      puVar19 = (undefined *)0x0;
    }
    _objc_release(puVar3);
  }
  else {
    puVar22 = (undefined8 *)0x2;
    FUN_106f2c334(param_4,&PTR____CFConstantStringClassReference_110e8e1f8);
    puVar19 = (undefined *)0x0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar22;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c12fae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar22);
  puVar22 = puVar11;
  func_0x00010c12fb20();
  if (puVar22 == (undefined8 *)0x1) {
    puVar22 = puVar11;
    func_0x00010c12fb00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar22;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar22);
    puVar22 = puVar10;
    func_0x00010c14fb60();
    if ((int)puVar22 == 2) {
      puVar22 = puVar10;
      func_0x00010c12f9c0();
      if (puVar22 != (undefined8 *)0x1) {
        ppuVar17 = &PTR____CFConstantStringClassReference_110e8e238;
        goto LAB_106f2d3f0;
      }
      puVar22 = puVar10;
      func_0x00010c12f9a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar22;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
      puVar22 = puVar12;
      func_0x00010c12fa60();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      if (puVar22 == (undefined8 *)0x0) {
        FUN_106f2c334(puVar18,&PTR____CFConstantStringClassReference_110e8e338,2);
        puVar19 = (undefined *)0x0;
      }
      else {
        func_0x00010c12fa60(puVar12);
        func_0x00010bf0a0e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar22 = puVar12;
        func_0x00010c12fa60();
        if (puVar22 != (undefined8 *)0x0) {
          puVar22 = (undefined8 *)0x0;
          do {
            puVar13 = puVar12;
            func_0x00010c12fa40();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar13;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar13);
            puVar13 = puVar14;
            func_0x00010bf8cec0();
            if ((int)puVar13 != 1) {
LAB_106f2d450:
              puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df840();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14de00(puVar19);
              _objc_retainAutoreleasedReturnValue();
              FUN_106f2c334(puVar18,puVar19,2);
              _objc_release(puVar19);
              _objc_release(puVar2);
              _objc_release(puVar14);
              puVar19 = (undefined *)0x0;
              goto LAB_106f2d4bc;
            }
            puVar13 = puVar14;
            func_0x00010bf5cc00();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar13;
            func_0x00010bfd8220();
            _objc_release(puVar13);
            if ((int)puVar15 == 0) goto LAB_106f2d450;
            puVar13 = puVar14;
            func_0x00010bf5cc00();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar13;
            func_0x00010c0840e0();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar15;
            func_0x00010bfd6be0();
            _objc_release(puVar15);
            _objc_release(puVar13);
            if (((int)puVar16 == 0) ||
               (puVar13 = puVar14, func_0x00010c0664a0(), puVar13 == (undefined8 *)0x0))
            goto LAB_106f2d450;
            if (puVar22 == (undefined8 *)0x0) {
              puVar19 = puVar2;
              func_0x00010c12fa20();
              if (((ulong)puVar19 & 1) == 0) goto LAB_106f2d450;
            }
            else {
              iVar1 = (int)puVar2;
              func_0x00010c12fa00();
              if (iVar1 == 0) goto LAB_106f2d450;
            }
            func_0x00010befa120(puVar3);
            _objc_release(puVar14);
            puVar22 = (undefined8 *)((long)puVar22 + 1);
            puVar13 = puVar12;
            func_0x00010c12fa60();
          } while (puVar22 < puVar13);
        }
        _objc_retain(puVar3);
        puVar19 = puVar3;
LAB_106f2d4bc:
        _objc_release(puVar3);
      }
      _objc_release(puVar12);
    }
    else {
      ppuVar17 = &PTR____CFConstantStringClassReference_110e8e218;
LAB_106f2d3f0:
      FUN_106f2c334(puVar18,ppuVar17,2);
      puVar19 = (undefined *)0x0;
    }
    _objc_release(puVar10);
  }
  else {
    FUN_106f2c334(puVar18,&PTR____CFConstantStringClassReference_110e8e1f8,2);
    puVar19 = (undefined *)0x0;
  }
  _objc_release(puVar11);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 106f2d160; end: 106f2d51f; +[SCSnapRendererPluginEffectRenderUtils snapDocContainsValidLensRenderEffectNodes:error:] */

void FUN_106f2d160(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  ulong uVar13;
  
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar13;
  func_0x00010c12fae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(param_3);
  uVar13 = uVar2;
  func_0x00010c12fb20();
  if (uVar13 != 1) {
    FUN_106f2c334(param_4,&PTR____CFConstantStringClassReference_110e8e1f8,2);
    puVar12 = (undefined *)0x0;
    goto LAB_106f2d4d8;
  }
  uVar13 = uVar2;
  func_0x00010c12fb00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  uVar13 = uVar3;
  func_0x00010c14fb60();
  if ((int)uVar13 == 2) {
    uVar13 = uVar3;
    func_0x00010c12f9c0();
    if (uVar13 != 1) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110e8e238;
      goto LAB_106f2d3f0;
    }
    uVar13 = uVar3;
    func_0x00010c12f9a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar13;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    uVar13 = uVar4;
    func_0x00010c12fa60();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (uVar13 == 0) {
      FUN_106f2c334(param_4,&PTR____CFConstantStringClassReference_110e8e338,2);
      puVar12 = (undefined *)0x0;
    }
    else {
      func_0x00010c12fa60(uVar4);
      func_0x00010bf0a0e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar4;
      func_0x00010c12fa60();
      if (uVar13 != 0) {
        uVar13 = 0;
        do {
          uVar6 = uVar4;
          func_0x00010c12fa40();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          uVar6 = uVar7;
          func_0x00010bf8cec0();
          if ((int)uVar6 != 1) {
LAB_106f2d450:
            puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14de00(puVar12);
            _objc_retainAutoreleasedReturnValue();
            FUN_106f2c334(param_4,puVar12,2);
            _objc_release(puVar12);
            _objc_release(puVar10);
            _objc_release(uVar7);
            puVar12 = (undefined *)0x0;
            goto LAB_106f2d4bc;
          }
          uVar6 = uVar7;
          func_0x00010bf5cc00();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar6;
          func_0x00010bfd8220();
          _objc_release(uVar6);
          if ((int)uVar8 == 0) goto LAB_106f2d450;
          uVar6 = uVar7;
          func_0x00010bf5cc00();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar6;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010bfd6be0();
          _objc_release(uVar8);
          _objc_release(uVar6);
          if (((int)uVar9 == 0) || (uVar6 = uVar7, func_0x00010c0664a0(), uVar6 == 0))
          goto LAB_106f2d450;
          if (uVar13 == 0) {
            uVar6 = param_1;
            func_0x00010c12fa20();
            if ((uVar6 & 1) == 0) goto LAB_106f2d450;
          }
          else {
            iVar1 = (int)param_1;
            func_0x00010c12fa00();
            if (iVar1 == 0) goto LAB_106f2d450;
          }
          func_0x00010befa120(puVar5);
          _objc_release(uVar7);
          uVar13 = uVar13 + 1;
          uVar6 = uVar4;
          func_0x00010c12fa60();
        } while (uVar13 < uVar6);
      }
      _objc_retain(puVar5);
      puVar12 = puVar5;
LAB_106f2d4bc:
      _objc_release(puVar5);
    }
    _objc_release(uVar4);
  }
  else {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e8e218;
LAB_106f2d3f0:
    FUN_106f2c334(param_4,ppuVar11,2);
    puVar12 = (undefined *)0x0;
  }
  _objc_release(uVar3);
LAB_106f2d4d8:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 106f2d520; end: 106f2d6cf; +[SCSnapRendererPluginEffectRenderUtils renderEffectNodeInputConsistsFromTracksOnly:] */

bool FUN_106f2d520(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar3 = param_3;
  func_0x00010c066480();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar9 = *plStack_120;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(puVar3);
        }
        uVar8 = *(undefined8 *)(lStack_128 + (long)puVar10 * 8);
        uVar5 = uVar8;
        func_0x00010c065ee0();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)uVar5 != 8) {
          _objc_release(puVar3);
          bVar1 = false;
          goto LAB_106f2d680;
        }
        func_0x00010c277f00(uVar8);
        func_0x00010c0df820(puVar6,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = (undefined8 *)puVar6;
        func_0x00010befa120(puVar2);
        _objc_release(puVar6);
        puVar10 = puVar10 + 1;
      } while (puVar4 != puVar10);
      puVar4 = puVar3;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bf529e0();
  puVar4 = param_3;
  func_0x00010c0664a0();
  bVar1 = puVar3 == puVar4;
LAB_106f2d680:
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return bVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar2 = (undefined *)puVar7;
  func_0x00010c0664a0();
  if (puVar2 == (undefined *)0x1) {
    puVar2 = (undefined *)puVar7;
    func_0x00010c066480(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c065ee0();
    bVar1 = (int)puVar4 == 9;
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(puVar7);
  return bVar1;
}



/* Entry: 106f2d6d0; end: 106f2d75f; +[SCSnapRendererPluginEffectRenderUtils renderEffectNodeInputConsistsFromRenderNodeOutputOnly:] */

bool FUN_106f2d6d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0664a0();
  if (lVar2 == 1) {
    lVar2 = param_3;
    func_0x00010c066480(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c065ee0();
    bVar1 = (int)lVar4 == 9;
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106f2d760; end: 106f2d9f7; +[SCSnapRendererPluginEffectRenderUtils durationMsOfSnapDoc:] */

undefined8 ***** FUN_106f2d760(undefined8 param_1,undefined8 param_2,undefined8 *****param_3)

{
  long lVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined8 *****pppppuVar18;
  undefined8 *****pppppuVar19;
  undefined8 *****pppppuVar20;
  undefined8 *****pppppuVar21;
  undefined **ppuVar22;
  undefined8 *****unaff_x23;
  long lVar23;
  undefined8 *****unaff_x24;
  long lVar24;
  uint uVar25;
  undefined8 *****unaff_x25;
  undefined8 *****pppppuVar26;
  undefined8 *****unaff_x26;
  undefined8 *****pppppuVar27;
  long lVar28;
  undefined8 *****unaff_x27;
  ulong uVar29;
  undefined8 *****unaff_x28;
  undefined8 uVar30;
  ulong uVar31;
  undefined8 ****ppppuStack_d28;
  undefined8 uStack_cc0;
  long lStack_cb8;
  long *plStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  long lStack_c78;
  long *plStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined1 auStack_bc0 [256];
  long lStack_ac0;
  undefined8 ****ppppuStack_ab0;
  undefined8 ****ppppuStack_aa8;
  undefined8 ****ppppuStack_aa0;
  undefined8 ****ppppuStack_a98;
  undefined8 ****ppppuStack_a90;
  undefined8 ****ppppuStack_a88;
  undefined8 ****ppppuStack_a80;
  undefined8 ****ppppuStack_a78;
  undefined8 ****ppppuStack_a70;
  undefined8 ****ppppuStack_a68;
  undefined1 ***pppuStack_a60;
  code *pcStack_a58;
  long lStack_a50;
  undefined8 ****ppppuStack_a48;
  undefined8 ****ppppuStack_a40;
  undefined8 ****ppppuStack_a38;
  undefined8 ****ppppuStack_a30;
  long lStack_a28;
  undefined8 ****ppppuStack_a20;
  undefined8 ****ppppuStack_a18;
  undefined8 ****ppppuStack_a10;
  undefined8 ****ppppuStack_a08;
  undefined8 ****ppppuStack_a00;
  undefined8 ****ppppuStack_9f8;
  undefined8 ****ppppuStack_9f0;
  undefined8 ****ppppuStack_9e8;
  undefined8 ****ppppuStack_9e0;
  undefined8 ****ppppuStack_9d8;
  undefined8 ***pppuStack_9d0;
  long lStack_9c8;
  ulong *puStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined1 auStack_958 [24];
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 ***pppuStack_910;
  long lStack_908;
  long *plStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  long lStack_8c8;
  long *plStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  long lStack_888;
  long *plStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 ***pppuStack_850;
  long lStack_848;
  long *plStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  long lStack_808;
  ulong *puStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 ****appppuStack_7c8 [97];
  long lStack_4c0;
  undefined8 ****ppppuStack_4b0;
  undefined8 ****ppppuStack_4a8;
  undefined8 ****ppppuStack_4a0;
  undefined8 ****ppppuStack_498;
  undefined8 ****ppppuStack_490;
  undefined8 ****ppppuStack_488;
  undefined8 ****ppppuStack_480;
  undefined8 ****ppppuStack_478;
  undefined8 ****ppppuStack_470;
  undefined8 ****ppppuStack_468;
  undefined1 **ppuStack_460;
  code *pcStack_458;
  undefined8 ****ppppuStack_450;
  long lStack_448;
  undefined8 ****ppppuStack_440;
  undefined8 ****ppppuStack_438;
  undefined8 ****ppppuStack_430;
  undefined8 ****ppppuStack_428;
  undefined8 ****ppppuStack_420;
  undefined8 ****ppppuStack_418;
  long lStack_410;
  uint uStack_404;
  undefined8 ***pppuStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 ***pppuStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_280;
  undefined8 ****ppppuStack_270;
  undefined8 ****ppppuStack_268;
  undefined8 ****ppppuStack_260;
  undefined8 ****ppppuStack_258;
  undefined8 ****ppppuStack_250;
  undefined8 ****ppppuStack_248;
  undefined8 ****ppppuStack_240;
  undefined8 ****ppppuStack_238;
  undefined8 ****ppppuStack_230;
  undefined8 ****ppppuStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined8 ****ppppuStack_208;
  long lStack_200;
  undefined8 ****ppppuStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  ulong *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = 0;
  pppuStack_1b0 = (undefined8 ****)0x0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar3 = param_3;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar2 = pppppuVar3;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar19 = pppppuVar2;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppppuVar2);
  _objc_release(pppppuVar3);
  _objc_release(param_3);
  pppppuVar3 = (undefined8 *****)&pppuStack_1b0;
  uVar25 = (uint)auStack_f0;
  pppppuVar18 = (undefined8 *****)0x10;
  pppppuVar27 = pppppuVar19;
  ppppuStack_208 = pppppuVar19;
  func_0x00010bf52a60();
  pppppuVar21 = (undefined8 *****)0x0;
  ppppuStack_1f8 = pppppuVar27;
  if (pppppuVar27 != (undefined8 *****)0x0) {
    lStack_200 = *plStack_1a0;
    do {
      pppppuVar19 = (undefined8 *****)0x0;
      do {
        if (*plStack_1a0 != lStack_200) {
          _objc_enumerationMutation(ppppuStack_208);
        }
        pppppuVar2 = *(undefined8 ******)(lStack_1a8 + (long)pppppuVar19 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        puStack_1e0 = (ulong *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        func_0x00010c2787a0();
        _objc_retainAutoreleasedReturnValue();
        pppppuVar3 = pppppuVar2;
        func_0x00010bf52a60();
        if (pppppuVar3 != (undefined8 *****)0x0) {
          unaff_x28 = (undefined8 *****)*puStack_1e0;
          unaff_x23 = pppppuVar3;
          do {
            param_3 = (undefined8 *****)0x0;
            do {
              if ((undefined8 *****)*puStack_1e0 != unaff_x28) {
                _objc_enumerationMutation(pppppuVar2);
              }
              unaff_x24 = *(undefined8 ******)(lStack_1e8 + (long)param_3 * 8);
              pppppuVar3 = unaff_x24;
              func_0x00010bfdda80();
              if ((int)pppppuVar3 != 0) {
                unaff_x25 = unaff_x24;
                func_0x00010c2667a0();
                _objc_retainAutoreleasedReturnValue();
                pppppuVar3 = unaff_x25;
                func_0x00010c26f280();
                unaff_x27 = unaff_x24;
                func_0x00010c27c540();
                _objc_retainAutoreleasedReturnValue();
                pppppuVar18 = unaff_x27;
                func_0x00010bf8b160();
                unaff_x26 = (undefined8 *****)((long)pppppuVar18 + (long)pppppuVar3);
                _objc_release(unaff_x27);
                _objc_release(unaff_x25);
                if (pppppuVar21 < unaff_x26) {
                  unaff_x25 = unaff_x24;
                  func_0x00010c2667a0();
                  _objc_retainAutoreleasedReturnValue();
                  pppppuVar3 = unaff_x25;
                  func_0x00010c26f280();
                  func_0x00010c27c540();
                  _objc_retainAutoreleasedReturnValue();
                  pppppuVar21 = unaff_x24;
                  func_0x00010bf8b160();
                  pppppuVar21 = (undefined8 *****)((long)pppppuVar21 + (long)pppppuVar3);
                  _objc_release(unaff_x24);
                  _objc_release(unaff_x25);
                }
              }
              param_3 = (undefined8 *****)((long)param_3 + 1);
            } while (unaff_x23 != param_3);
            unaff_x23 = pppppuVar2;
            func_0x00010bf52a60();
          } while (unaff_x23 != (undefined8 *****)0x0);
        }
        _objc_release(pppppuVar2);
        pppppuVar19 = (undefined8 *****)((long)pppppuVar19 + 1);
      } while (pppppuVar19 != (undefined8 *****)ppppuStack_1f8);
      pppppuVar3 = (undefined8 *****)&pppuStack_1b0;
      uVar25 = (uint)auStack_f0;
      pppppuVar18 = (undefined8 *****)0x10;
      pppppuVar27 = (undefined8 *****)ppppuStack_208;
      func_0x00010bf52a60();
      ppppuStack_1f8 = pppppuVar27;
    } while (pppppuVar27 != (undefined8 *****)0x0);
  }
  pppppuVar27 = (undefined8 *****)ppppuStack_208;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppppuVar21;
  }
  ___stack_chk_fail();
  pcStack_218 = FUN_106f2d9f8;
  lStack_280 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_404 = uVar25;
  ppppuStack_270 = unaff_x28;
  ppppuStack_268 = unaff_x27;
  ppppuStack_260 = unaff_x26;
  ppppuStack_258 = unaff_x25;
  ppppuStack_250 = unaff_x24;
  ppppuStack_248 = unaff_x23;
  ppppuStack_240 = pppppuVar2;
  ppppuStack_238 = pppppuVar21;
  ppppuStack_230 = param_3;
  ppppuStack_228 = pppppuVar19;
  puStack_220 = &stack0xfffffffffffffff0;
  _objc_retain(pppppuVar3);
  ppuVar22 = (undefined **)pppppuVar3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar21 = (undefined8 *****)ppuVar22;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar19 = pppppuVar21;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppppuVar21);
  _objc_release(ppuVar22);
  pppppuVar21 = pppppuVar19;
  func_0x00010c2791e0();
  if (pppppuVar21 == (undefined8 *****)0x0) {
    pppppuVar21 = (undefined8 *****)0x1;
    FUN_106f2c334(pppppuVar18,&PTR____CFConstantStringClassReference_110e8e418);
    pppppuVar2 = (undefined8 *****)0x0;
  }
  else {
    func_0x00010c0ff600();
    _objc_retainAutoreleasedReturnValue();
    lStack_3b8 = 0;
    pppuStack_3c0 = (undefined8 ****)0x0;
    uStack_3a8 = 0;
    plStack_3b0 = (long *)0x0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    ppuVar22 = (undefined **)pppppuVar19;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar21 = (undefined8 *****)&pppuStack_3c0;
    pppppuVar2 = (undefined8 *****)ppuVar22;
    func_0x00010bf52a60();
    ppppuStack_438 = pppppuVar2;
    if (pppppuVar2 == (undefined8 *****)0x0) {
      pppppuVar2 = (undefined8 *****)0x1;
    }
    else {
      lVar23 = *plStack_3b0;
      ppppuStack_450 = pppppuVar18;
      lStack_448 = lVar23;
      ppppuStack_440 = pppppuVar3;
      ppppuStack_428 = (undefined8 ****)ppuVar22;
      ppppuStack_420 = pppppuVar19;
      do {
        unaff_x25 = (undefined8 *****)0x0;
        do {
          if (*plStack_3b0 != lVar23) {
            _objc_enumerationMutation(ppuVar22);
          }
          pppppuVar3 = *(undefined8 ******)(lStack_3b8 + (long)unaff_x25 * 8);
          lStack_3f8 = 0;
          pppuStack_400 = (undefined8 ****)0x0;
          uStack_3e8 = 0;
          plStack_3f0 = (long *)0x0;
          uStack_3d8 = 0;
          uStack_3e0 = 0;
          uStack_3c8 = 0;
          uStack_3d0 = 0;
          ppppuStack_430 = unaff_x25;
          func_0x00010c2787a0();
          _objc_retainAutoreleasedReturnValue();
          pppppuVar21 = (undefined8 *****)&pppuStack_400;
          ppppuStack_418 = pppppuVar3;
          func_0x00010bf52a60();
          if (pppppuVar3 != (undefined8 *****)0x0) {
            lStack_410 = *plStack_3f0;
            unaff_x28 = pppppuVar3;
            do {
              pppppuVar18 = (undefined8 *****)0x0;
              do {
                if (*plStack_3f0 != lStack_410) {
                  _objc_enumerationMutation(ppppuStack_418);
                }
                pppppuVar3 = *(undefined8 ******)(lStack_3f8 + (long)pppppuVar18 * 8);
                if (uStack_404 != 0) {
                  unaff_x27 = pppppuVar3;
                  func_0x00010c27c540();
                  _objc_retainAutoreleasedReturnValue();
                  pppppuVar19 = unaff_x27;
                  func_0x00010bf8b160();
                  if (pppppuVar19 != (undefined8 *****)0x0) goto LAB_106f2df00;
                  unaff_x26 = pppppuVar3;
                  func_0x00010c2667a0();
                  _objc_retainAutoreleasedReturnValue();
                  pppppuVar19 = unaff_x26;
                  func_0x00010c26f280();
                  _objc_release(unaff_x26);
                  _objc_release(unaff_x27);
                  unaff_x27 = pppppuVar3;
                  if (0 < (long)pppppuVar19) goto LAB_106f2df08;
                }
                pppppuVar19 = pppppuVar3;
                func_0x00010c0ff680();
                if (pppppuVar19 != (undefined8 *****)0x0) {
                  pppppuVar19 = pppppuVar3;
                  func_0x00010c0ff680();
                  unaff_x27 = pppppuVar3;
                  if (pppppuVar19 == (undefined8 *****)0x0) goto LAB_106f2dd7c;
                  pppppuVar19 = (undefined8 *****)0x0;
                  unaff_x25 = (undefined8 *****)0x0;
                  do {
                    pppppuVar2 = (undefined8 *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
                    pppppuVar26 = pppppuVar3;
                    func_0x00010c0ff660(pppppuVar3);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c296de0();
                    func_0x00010c0df820();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x26 = pppppuVar27;
                    pppppuVar21 = pppppuVar2;
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(pppppuVar2);
                    _objc_release(pppppuVar26);
                    pppppuVar2 = unaff_x26;
                    func_0x00010c08c3a0();
                    if ((int)pppppuVar2 == 1) {
                      pppppuVar2 = unaff_x26;
                      func_0x00010c0c3fe0();
                      _objc_retainAutoreleasedReturnValue();
                      pppppuVar26 = pppppuVar2;
                      func_0x00010bf0b760();
                      _objc_release(pppppuVar2);
                      uVar25 = (uint)unaff_x25;
                      if ((int)pppppuVar26 == 5) {
                        uVar25 = uVar25 + 1;
                      }
                      unaff_x25 = (undefined8 *****)(ulong)uVar25;
                    }
                    _objc_release(unaff_x26);
                    pppppuVar19 = (undefined8 *****)((long)pppppuVar19 + 1);
                    pppppuVar2 = pppppuVar3;
                    func_0x00010c0ff680();
                  } while (pppppuVar19 < pppppuVar2);
                  if ((int)unaff_x25 == 0) goto LAB_106f2dd7c;
                  if ((int)unaff_x25 < 2) goto LAB_106f2dcc4;
                  pppppuVar21 = (undefined8 *****)0x1;
                  FUN_106f2c334(ppppuStack_450,&PTR____CFConstantStringClassReference_110e8e438);
                  _objc_retain(pppppuVar3);
                  _objc_retain(pppppuVar27);
                  pppppuVar19 = pppppuVar3;
                  func_0x00010c0ff680();
                  if (pppppuVar19 != (undefined8 *****)0x0) {
                    pppppuVar19 = (undefined8 *****)0x0;
                    do {
                      pppppuVar2 = (undefined8 *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
                      pppppuVar26 = pppppuVar3;
                      func_0x00010c0ff660(pppppuVar3);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c296de0();
                      func_0x00010c0df820();
                      _objc_retainAutoreleasedReturnValue();
                      pppppuVar18 = pppppuVar27;
                      pppppuVar21 = pppppuVar2;
                      func_0x00010c0e00e0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(pppppuVar2);
                      _objc_release(pppppuVar26);
                      func_0x00010c08c3a0(pppppuVar18);
                      _objc_release(pppppuVar18);
                      pppppuVar19 = (undefined8 *****)((long)pppppuVar19 + 1);
                      pppppuVar2 = pppppuVar3;
                      func_0x00010c0ff680();
                    } while (pppppuVar19 < pppppuVar2);
                  }
                  _objc_release(pppppuVar27);
LAB_106f2df00:
                  _objc_release(unaff_x27);
LAB_106f2df08:
                  _objc_release(ppppuStack_418);
                  pppppuVar2 = (undefined8 *****)0x0;
                  pppppuVar3 = (undefined8 *****)ppppuStack_440;
                  pppppuVar19 = (undefined8 *****)ppppuStack_420;
                  ppuVar22 = (undefined **)ppppuStack_428;
                  goto LAB_106f2df1c;
                }
LAB_106f2dcc4:
                pppppuVar2 = pppppuVar3;
                func_0x00010c0ff680();
                pppppuVar19 = (undefined8 *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
                unaff_x27 = pppppuVar3;
                if (pppppuVar2 == (undefined8 *****)0x1) {
                  func_0x00010c0ff660(pppppuVar3);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c296de0();
                  func_0x00010c0df820();
                  _objc_retainAutoreleasedReturnValue();
                  pppppuVar2 = pppppuVar27;
                  pppppuVar21 = pppppuVar19;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x27 = pppppuVar2;
                  func_0x00010c0c3fe0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(pppppuVar2);
                  _objc_release(pppppuVar19);
                  _objc_release(pppppuVar3);
                  if ((unaff_x27 != (undefined8 *****)0x0) &&
                     (pppppuVar3 = unaff_x27, func_0x00010c27dd80(), (int)pppppuVar3 != 0)) {
                    pppppuVar3 = unaff_x27;
                    func_0x00010c27dd80();
                    if (((uStack_404 & 1) != 0) || ((int)pppppuVar3 != 1)) {
                      ppuVar22 = &PTR____CFConstantStringClassReference_110e8e478;
                      if ((int)pppppuVar3 == 1) {
                        ppuVar22 = &PTR____CFConstantStringClassReference_110e8e458;
                      }
                      pppppuVar21 = (undefined8 *****)0x3;
                      FUN_106f2c334(ppppuStack_450,ppuVar22);
                      goto LAB_106f2df00;
                    }
                  }
                  _objc_release(unaff_x27);
                }
LAB_106f2dd7c:
                pppppuVar18 = (undefined8 *****)((long)pppppuVar18 + 1);
              } while (pppppuVar18 != unaff_x28);
              pppppuVar21 = (undefined8 *****)&pppuStack_400;
              unaff_x28 = (undefined8 *****)ppppuStack_418;
              func_0x00010bf52a60();
            } while (unaff_x28 != (undefined8 *****)0x0);
          }
          _objc_release(ppppuStack_418);
          pppppuVar19 = (undefined8 *****)ppppuStack_420;
          ppuVar22 = (undefined **)ppppuStack_428;
          lVar23 = lStack_448;
          unaff_x25 = (undefined8 *****)((long)ppppuStack_430 + 1);
        } while (unaff_x25 != (undefined8 *****)ppppuStack_438);
        pppppuVar21 = (undefined8 *****)&pppuStack_3c0;
        pppppuVar3 = (undefined8 *****)ppppuStack_428;
        func_0x00010bf52a60();
        ppppuStack_438 = pppppuVar3;
      } while (pppppuVar3 != (undefined8 *****)0x0);
      pppppuVar2 = (undefined8 *****)0x1;
      pppppuVar3 = (undefined8 *****)ppppuStack_440;
    }
LAB_106f2df1c:
    _objc_release(ppuVar22);
    _objc_release(pppppuVar27);
  }
  _objc_release(pppppuVar19);
  _objc_release(pppppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_280) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  pcStack_458 = FUN_106f2df7c;
  lStack_4c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_4b0 = unaff_x28;
  ppppuStack_4a8 = unaff_x27;
  ppppuStack_4a0 = unaff_x26;
  ppppuStack_498 = unaff_x25;
  ppppuStack_490 = pppppuVar18;
  ppppuStack_488 = pppppuVar2;
  ppppuStack_480 = (undefined8 ****)ppuVar22;
  ppppuStack_478 = pppppuVar27;
  ppppuStack_470 = pppppuVar19;
  ppppuStack_468 = pppppuVar3;
  ppuStack_460 = &puStack_220;
  _objc_retain(pppppuVar21);
  pppppuVar3 = pppppuVar21;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar19 = pppppuVar3;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar27 = pppppuVar19;
  func_0x00010c12fae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppppuVar19);
  _objc_release(pppppuVar3);
  pppppuVar3 = pppppuVar27;
  func_0x00010c12fb00();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar19 = pppppuVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppppuVar3);
  pppppuVar3 = pppppuVar19;
  func_0x00010c12f9a0();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar26 = pppppuVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppppuVar3);
  pppppuVar3 = pppppuVar26;
  func_0x00010c12fa40();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar4 = pppppuVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppppuVar3);
  pppppuVar3 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppppuStack_9f8 = pppppuVar4;
  if (pppppuVar4 == (undefined8 *****)0x0) {
    uStack_9a8 = 0;
    uStack_9b0 = 0;
    uStack_998 = 0;
    uStack_9a0 = 0;
    lStack_9c8 = 0;
    pppuStack_9d0 = (undefined8 ****)0x0;
    uStack_9b8 = 0;
    puStack_9c0 = (ulong *)0x0;
    pppppuVar8 = pppppuVar21;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar9 = pppppuVar8;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppppuVar8);
    pppppuVar4 = (undefined8 *****)&pppuStack_9d0;
    pppppuVar10 = pppppuVar9;
    func_0x00010bf52a60();
    pppppuVar20 = (undefined8 *****)PTR____NSArray0__struct_11034ab48;
    pppppuVar3 = pppppuVar18;
    if (pppppuVar10 != (undefined8 *****)0x0) {
      pppppuVar3 = (undefined8 *****)0x0;
      ppuVar22 = (undefined **)*puStack_9c0;
      ppppuStack_a00 = pppppuVar26;
      do {
        pppppuVar2 = (undefined8 *****)0x0;
        do {
          if ((undefined8 *****)*puStack_9c0 != (undefined8 *****)ppuVar22) {
            _objc_enumerationMutation(pppppuVar9);
          }
          pppppuVar26 = *(undefined8 ******)(lStack_9c8 + (long)pppppuVar2 * 8);
          pppppuVar18 = pppppuVar26;
          func_0x00010c08c3a0();
          if ((int)pppppuVar18 == 1) {
            if (pppppuVar3 != (undefined8 *****)0x0) goto LAB_106f2e8ec;
            _objc_retain(pppppuVar26);
            pppppuVar3 = pppppuVar26;
          }
          pppppuVar2 = (undefined8 *****)((long)pppppuVar2 + 1);
        } while (pppppuVar10 != pppppuVar2);
        pppppuVar4 = (undefined8 *****)&pppuStack_9d0;
        pppppuVar10 = pppppuVar9;
        func_0x00010bf52a60();
      } while (pppppuVar10 != (undefined8 *****)0x0);
      _objc_release(pppppuVar9);
      pppppuVar20 = (undefined8 *****)PTR____NSArray0__struct_11034ab48;
      pppppuVar26 = (undefined8 *****)ppppuStack_a00;
      if (pppppuVar3 == (undefined8 *****)0x0) goto LAB_106f2e904;
      pppppuVar9 = (undefined8 *****)PTR_PTR_1126d3440;
      _objc_opt_new();
      func_0x00010c1c4c00();
      pppppuVar10 = pppppuVar3;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      func_0x00010c1c5440(pppppuVar9);
      _objc_release(pppppuVar10);
      pppppuVar18 = pppppuVar9;
      func_0x00010c0c6c20();
      if ((int)pppppuVar18 == 1) {
        pppppuVar10 = pppppuVar3;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c4bc0();
        func_0x00010c2215c0(pppppuVar9);
        _objc_release(pppppuVar10);
      }
      pppppuVar4 = appppuStack_7c8;
      pppppuVar20 = (undefined8 *****)PTR__OBJC_CLASS___NSArray_1126ae530;
      appppuStack_7c8[0] = pppppuVar9;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106f2e8ec;
    }
  }
  else {
    ppuVar22 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    ppppuStack_a10 = pppppuVar27;
    ppppuStack_a00 = pppppuVar26;
    func_0x00010c0664a0(pppppuVar4);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_808 = 0;
    uStack_810 = 0;
    uStack_7f8 = 0;
    puStack_800 = (ulong *)0x0;
    uStack_7e8 = 0;
    uStack_7f0 = 0;
    uStack_7d8 = 0;
    uStack_7e0 = 0;
    func_0x00010c066480();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar18 = pppppuVar4;
    func_0x00010bf52a60();
    if (pppppuVar18 != (undefined8 *****)0x0) {
      pppppuVar2 = (undefined8 *****)*puStack_800;
      do {
        pppppuVar27 = (undefined8 *****)0x0;
        do {
          if ((undefined8 *****)*puStack_800 != pppppuVar2) {
            _objc_enumerationMutation(pppppuVar4);
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c277f00(*(undefined8 *)(lStack_808 + (long)pppppuVar27 * 8));
          func_0x00010c0df820(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(pppppuVar3);
          _objc_release(puVar5);
          pppppuVar27 = (undefined8 *****)((long)pppppuVar27 + 1);
        } while (pppppuVar18 != pppppuVar27);
        pppppuVar18 = pppppuVar4;
        func_0x00010bf52a60();
      } while (pppppuVar18 != (undefined8 *****)0x0);
    }
    _objc_release(pppppuVar4);
    pppppuVar18 = pppppuVar21;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar27 = pppppuVar18;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar9 = pppppuVar27;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppppuVar27);
    _objc_release(pppppuVar18);
    pppppuVar18 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    ppppuStack_a08 = pppppuVar21;
    ppppuStack_9f0 = pppppuVar18;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar18 = pppppuVar21;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppppuVar21);
    uStack_828 = 0;
    uStack_830 = 0;
    uStack_818 = 0;
    uStack_820 = 0;
    lStack_848 = 0;
    pppuStack_850 = (undefined8 ****)0x0;
    uStack_838 = 0;
    plStack_840 = (long *)0x0;
    _objc_retain(pppppuVar3);
    pppppuVar4 = (undefined8 *****)&pppuStack_850;
    pppppuVar21 = pppppuVar3;
    func_0x00010bf52a60();
    if (pppppuVar21 != (undefined8 *****)0x0) {
      lVar23 = *plStack_840;
      lStack_a50 = lVar23;
      ppppuStack_a38 = pppppuVar19;
      ppppuStack_9e0 = pppppuVar9;
      do {
        pppppuVar27 = (undefined8 *****)0x0;
        ppppuStack_a48 = pppppuVar21;
        do {
          if (*plStack_840 != lVar23) {
            _objc_enumerationMutation(pppppuVar3);
          }
          uVar30 = *(undefined8 *)(lStack_848 + (long)pppppuVar27 * 8);
          lStack_888 = 0;
          uStack_890 = 0;
          uStack_878 = 0;
          plStack_880 = (long *)0x0;
          uStack_868 = 0;
          uStack_870 = 0;
          uStack_858 = 0;
          uStack_860 = 0;
          ppppuStack_a40 = pppppuVar27;
          func_0x00010c2791c0();
          _objc_retainAutoreleasedReturnValue();
          pppppuVar19 = pppppuVar9;
          func_0x00010bf52a60();
          if (pppppuVar19 == (undefined8 *****)0x0) {
            pppppuVar21 = (undefined8 *****)0x0;
          }
          else {
            pppppuVar21 = (undefined8 *****)0x0;
            lVar23 = *plStack_880;
            do {
              pppppuVar27 = (undefined8 *****)0x0;
              do {
                if (*plStack_880 != lVar23) {
                  _objc_enumerationMutation(pppppuVar9);
                }
                ppuVar22 = *(undefined ***)(lStack_888 + (long)pppppuVar27 * 8);
                pppppuVar2 = (undefined8 *****)ppuVar22;
                func_0x00010c277f00();
                uVar6 = uVar30;
                func_0x00010c067ec0();
                if ((int)pppppuVar2 == (int)uVar6) {
                  _objc_retain(ppuVar22);
                  _objc_release(pppppuVar21);
                  pppppuVar21 = (undefined8 *****)ppuVar22;
                }
                pppppuVar27 = (undefined8 *****)((long)pppppuVar27 + 1);
              } while (pppppuVar19 != pppppuVar27);
              pppppuVar19 = pppppuVar9;
              func_0x00010bf52a60();
            } while (pppppuVar19 != (undefined8 *****)0x0);
          }
          _objc_release(pppppuVar9);
          uStack_8a8 = 0;
          uStack_8b0 = 0;
          uStack_898 = 0;
          uStack_8a0 = 0;
          lStack_8c8 = 0;
          uStack_8d0 = 0;
          uStack_8b8 = 0;
          plStack_8c0 = (long *)0x0;
          pppppuVar19 = pppppuVar21;
          func_0x00010c2787a0();
          _objc_retainAutoreleasedReturnValue();
          pppppuVar27 = pppppuVar19;
          func_0x00010bf52a60();
          pppppuVar9 = (undefined8 *****)ppppuStack_9e0;
          ppppuStack_a30 = pppppuVar27;
          if (pppppuVar27 != (undefined8 *****)0x0) {
            lStack_a28 = *plStack_8c0;
            ppppuStack_a20 = pppppuVar19;
            do {
              pppppuVar27 = (undefined8 *****)0x0;
              do {
                if (*plStack_8c0 != lStack_a28) {
                  _objc_enumerationMutation(pppppuVar19);
                }
                pppppuVar2 = *(undefined8 ******)(lStack_8c8 + (long)pppppuVar27 * 8);
                pppppuVar19 = pppppuVar2;
                ppppuStack_a18 = pppppuVar27;
                func_0x00010c0ff660();
                _objc_retainAutoreleasedReturnValue();
                pppppuVar27 = pppppuVar19;
                func_0x00010bf529e0();
                _objc_release(pppppuVar19);
                if (pppppuVar27 != (undefined8 *****)0x0) {
                  ppuVar22 = (undefined **)0x0;
                  ppppuStack_9e8 = pppppuVar2;
                  do {
                    pppppuVar19 = pppppuVar2;
                    func_0x00010c0ff660();
                    _objc_retainAutoreleasedReturnValue();
                    pppppuVar27 = pppppuVar19;
                    pppppuVar4 = (undefined8 *****)ppuVar22;
                    ppppuStack_9d8 = (undefined8 ****)ppuVar22;
                    func_0x00010c296de0();
                    _objc_release(pppppuVar19);
                    if ((int)pppppuVar27 == 0) {
LAB_106f2e8b4:
                      _objc_release(ppppuStack_a20);
                      _objc_release(pppppuVar21);
                      _objc_release(pppppuVar3);
                      pppppuVar20 = (undefined8 *****)0x0;
                      pppppuVar10 = (undefined8 *****)ppppuStack_9f0;
                      pppppuVar19 = (undefined8 *****)ppppuStack_a38;
                      goto LAB_106f2e8d8;
                    }
                    uStack_8e8 = 0;
                    uStack_8f0 = 0;
                    uStack_8d8 = 0;
                    uStack_8e0 = 0;
                    lStack_908 = 0;
                    pppuStack_910 = (undefined8 ****)0x0;
                    uStack_8f8 = 0;
                    plStack_900 = (long *)0x0;
                    _objc_retain(pppppuVar18);
                    pppppuVar4 = (undefined8 *****)&pppuStack_910;
                    pppppuVar19 = pppppuVar18;
                    func_0x00010bf52a60();
                    if (pppppuVar19 == (undefined8 *****)0x0) {
                      _objc_release(pppppuVar18);
                      goto LAB_106f2e8b4;
                    }
                    pppppuVar26 = (undefined8 *****)0x0;
                    lVar23 = *plStack_900;
                    do {
                      pppppuVar2 = (undefined8 *****)0x0;
                      do {
                        if (*plStack_900 != lVar23) {
                          _objc_enumerationMutation(pppppuVar18);
                        }
                        ppuVar22 = *(undefined ***)(lStack_908 + (long)pppppuVar2 * 8);
                        pppppuVar4 = (undefined8 *****)ppuVar22;
                        func_0x00010c0ff5c0();
                        if ((int)pppppuVar4 == (int)pppppuVar27) {
                          _objc_retain(ppuVar22);
                          _objc_release(pppppuVar26);
                          pppppuVar26 = (undefined8 *****)ppuVar22;
                        }
                        pppppuVar2 = (undefined8 *****)((long)pppppuVar2 + 1);
                      } while (pppppuVar19 != pppppuVar2);
                      pppppuVar4 = (undefined8 *****)&pppuStack_910;
                      pppppuVar19 = pppppuVar18;
                      func_0x00010bf52a60();
                    } while (pppppuVar19 != (undefined8 *****)0x0);
                    _objc_release(pppppuVar18);
                    pppppuVar9 = (undefined8 *****)ppppuStack_9e0;
                    pppppuVar2 = (undefined8 *****)ppppuStack_9e8;
                    if (pppppuVar26 == (undefined8 *****)0x0) goto LAB_106f2e8b4;
                    pppppuVar19 = pppppuVar26;
                    func_0x00010c08c3a0();
                    if ((int)pppppuVar19 == 1) {
                      pppppuVar19 = pppppuVar26;
                      func_0x00010c0c3fe0();
                      _objc_retainAutoreleasedReturnValue();
                      pppppuVar27 = pppppuVar19;
                      func_0x00010bf0b760();
                      _objc_release(pppppuVar19);
                      if ((int)pppppuVar27 == 5) {
                        puVar5 = PTR_PTR_1126d3440;
                        _objc_opt_new();
                        func_0x00010c1c4c00();
                        pppppuVar19 = pppppuVar26;
                        func_0x00010c0c3fe0(pppppuVar26);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c27dd80();
                        func_0x00010c1c5440(puVar5);
                        _objc_release(pppppuVar19);
                        puVar7 = puVar5;
                        func_0x00010c0c6c20();
                        if ((int)puVar7 == 1) {
                          pppppuVar19 = pppppuVar26;
                          func_0x00010c0c3fe0(pppppuVar26);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c0c4bc0();
                          func_0x00010c2215c0(puVar5);
                          _objc_release(pppppuVar19);
                        }
                        func_0x00010c067ec0(uVar30);
                        func_0x00010c218fc0(puVar5);
                        pppppuVar19 = pppppuVar2;
                        func_0x00010bfdda80();
                        if ((int)pppppuVar19 != 0) {
                          pppppuVar19 = pppppuVar2;
                          func_0x00010c2667a0(pppppuVar2);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c26f280();
                          _CMTimeMake(&uStack_990);
                          pppppuVar27 = pppppuVar2;
                          func_0x00010c27c540(pppppuVar2);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bf8b160();
                          _CMTimeMake(auStack_958);
                          _CMTimeRangeMake(&uStack_940,&uStack_990,auStack_958);
                          uStack_988 = uStack_938;
                          uStack_990 = uStack_940;
                          uStack_978 = uStack_928;
                          uStack_980 = uStack_930;
                          uStack_968 = uStack_918;
                          uStack_970 = uStack_920;
                          func_0x00010c214ec0(puVar5);
                          _objc_release(pppppuVar27);
                          _objc_release(pppppuVar19);
                        }
                        func_0x00010befa120(ppppuStack_9f0);
                        _objc_release(puVar5);
                      }
                    }
                    _objc_release(pppppuVar26);
                    ppuVar22 = (undefined **)((long)ppppuStack_9d8 + 1);
                    pppppuVar19 = pppppuVar2;
                    func_0x00010c0ff660();
                    _objc_retainAutoreleasedReturnValue();
                    pppppuVar27 = pppppuVar19;
                    func_0x00010bf529e0();
                    _objc_release(pppppuVar19);
                  } while (ppuVar22 < pppppuVar27);
                }
                pppppuVar19 = (undefined8 *****)ppppuStack_a20;
                pppppuVar27 = (undefined8 *****)((long)ppppuStack_a18 + 1);
              } while (pppppuVar27 != (undefined8 *****)ppppuStack_a30);
              pppppuVar27 = (undefined8 *****)ppppuStack_a20;
              func_0x00010bf52a60();
              ppppuStack_a30 = pppppuVar27;
            } while (pppppuVar27 != (undefined8 *****)0x0);
          }
          _objc_release(pppppuVar19);
          _objc_release(pppppuVar21);
          pppppuVar19 = (undefined8 *****)ppppuStack_a38;
          lVar23 = lStack_a50;
          pppppuVar27 = (undefined8 *****)((long)ppppuStack_a40 + 1);
        } while (pppppuVar27 != (undefined8 *****)ppppuStack_a48);
        pppppuVar4 = (undefined8 *****)&pppuStack_850;
        pppppuVar21 = pppppuVar3;
        func_0x00010bf52a60();
      } while (pppppuVar21 != (undefined8 *****)0x0);
    }
    _objc_release(pppppuVar3);
    pppppuVar20 = (undefined8 *****)ppppuStack_9f0;
    _objc_retain(ppppuStack_9f0);
    pppppuVar10 = pppppuVar20;
LAB_106f2e8d8:
    _objc_release(pppppuVar18);
    _objc_release(pppppuVar10);
    pppppuVar27 = (undefined8 *****)ppppuStack_a10;
    pppppuVar21 = (undefined8 *****)ppppuStack_a08;
LAB_106f2e8ec:
    _objc_release(pppppuVar9);
    pppppuVar8 = pppppuVar10;
    pppppuVar26 = (undefined8 *****)ppppuStack_a00;
    pppppuVar9 = pppppuVar3;
  }
  pppppuVar10 = pppppuVar8;
  _objc_release(pppppuVar9);
LAB_106f2e904:
  _objc_release(ppppuStack_9f8);
  _objc_release(pppppuVar26);
  _objc_release(pppppuVar19);
  _objc_release(pppppuVar27);
  _objc_release(pppppuVar21);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4c0) {
    ___stack_chk_fail();
    pcStack_a58 = FUN_106f2e97c;
    lStack_ac0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppuStack_ab0 = pppppuVar19;
    ppppuStack_aa8 = pppppuVar21;
    ppppuStack_aa0 = pppppuVar9;
    ppppuStack_a98 = pppppuVar27;
    ppppuStack_a90 = pppppuVar3;
    ppppuStack_a88 = pppppuVar2;
    ppppuStack_a80 = (undefined8 ****)ppuVar22;
    ppppuStack_a78 = pppppuVar26;
    ppppuStack_a70 = pppppuVar20;
    ppppuStack_a68 = pppppuVar10;
    pppuStack_a60 = &ppuStack_460;
    _objc_retain(pppppuVar4);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_c78 = 0;
    uStack_c80 = 0;
    uStack_c68 = 0;
    plStack_c70 = (long *)0x0;
    uStack_c58 = 0;
    uStack_c60 = 0;
    uStack_c48 = 0;
    uStack_c50 = 0;
    pppppuVar3 = pppppuVar4;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar19 = pppppuVar3;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppppuVar3);
    pppppuVar3 = pppppuVar19;
    func_0x00010bf52a60();
    if (pppppuVar3 != (undefined8 *****)0x0) {
      lVar23 = *plStack_c70;
      do {
        pppppuVar18 = (undefined8 *****)0x0;
        do {
          if (*plStack_c70 != lVar23) {
            _objc_enumerationMutation(pppppuVar19);
          }
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0ff5c0(*(undefined8 *)(lStack_c78 + (long)pppppuVar18 * 8));
          func_0x00010c0df820(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar5);
          _objc_release(puVar7);
          pppppuVar18 = (undefined8 *****)((long)pppppuVar18 + 1);
        } while (pppppuVar3 != pppppuVar18);
        pppppuVar3 = pppppuVar19;
        func_0x00010bf52a60();
      } while (pppppuVar3 != (undefined8 *****)0x0);
    }
    _objc_release(pppppuVar19);
    pppppuVar20 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_cb8 = 0;
    uStack_cc0 = 0;
    uStack_ca8 = 0;
    plStack_cb0 = (long *)0x0;
    uStack_c98 = 0;
    uStack_ca0 = 0;
    uStack_c88 = 0;
    uStack_c90 = 0;
    pppppuVar3 = pppppuVar4;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar19 = pppppuVar3;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar18 = pppppuVar19;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar21 = pppppuVar18;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppppuVar18);
    _objc_release(pppppuVar19);
    _objc_release(pppppuVar3);
    puVar16 = &uStack_cc0;
    puVar17 = auStack_bc0;
    ppppuStack_d28 = pppppuVar21;
    func_0x00010bf52a60();
    if ((undefined8 *****)ppppuStack_d28 != (undefined8 *****)0x0) {
      lVar23 = *plStack_cb0;
      do {
        pppppuVar3 = (undefined8 *****)0x0;
        do {
          if (*plStack_cb0 != lVar23) {
            _objc_enumerationMutation(pppppuVar21);
          }
          lVar24 = *(long *)(lStack_cb8 + (long)pppppuVar3 * 8);
          lVar11 = lVar24;
          func_0x00010c2787a0();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar11;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (lVar12 != 0) {
            lVar28 = 0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar11);
              }
              uVar29 = *(ulong *)(lVar28 * 8);
              uVar31 = uVar29;
              func_0x00010c0ff680();
              if (uVar31 != 0) {
                uVar31 = 0;
                do {
                  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  uVar13 = uVar29;
                  func_0x00010c0ff660();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c296de0();
                  func_0x00010c0df820();
                  _objc_retainAutoreleasedReturnValue();
                  puVar14 = puVar5;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar7);
                  _objc_release(uVar13);
                  puVar7 = puVar14;
                  func_0x00010c08c3a0();
                  if ((int)puVar7 == 1) {
                    puVar7 = puVar14;
                    func_0x00010c0c3fe0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar15 = puVar7;
                    func_0x00010bf0b760();
                    _objc_release(puVar7);
                    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    if ((int)puVar15 == 6) {
                      func_0x00010c277f00(lVar24);
                      func_0x00010c0df820();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(pppppuVar20);
                      _objc_release(puVar7);
                    }
                  }
                  _objc_release(puVar14);
                  uVar31 = uVar31 + 1;
                  uVar13 = uVar29;
                  func_0x00010c0ff680();
                } while (uVar31 < uVar13);
              }
              lVar28 = lVar28 + 1;
            } while (lVar28 != lVar12);
            lVar12 = lVar11;
            func_0x00010bf52a60();
          }
          _objc_release(lVar11);
          pppppuVar3 = (undefined8 *****)((long)pppppuVar3 + 1);
        } while (pppppuVar3 != (undefined8 *****)ppppuStack_d28);
        puVar16 = &uStack_cc0;
        puVar17 = auStack_bc0;
        ppppuStack_d28 = pppppuVar21;
        func_0x00010bf52a60();
      } while ((undefined8 *****)ppppuStack_d28 != (undefined8 *****)0x0);
    }
    _objc_release(pppppuVar21);
    _objc_release(puVar5);
    _objc_release(pppppuVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_ac0) {
      ___stack_chk_fail();
      _objc_retain(puVar16);
      _objc_retain(puVar17);
      puVar5 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
      func_0x00010bf69700(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f5fe0(0x3ff0000000000000);
      func_0x00010c1d4c20(puVar5);
      func_0x00010c1e0260(puVar5);
      pppppuVar3 = (undefined8 *****)PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
      _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
      func_0x00010c23d0a0(puVar17);
      func_0x00010c046ac0(pppppuVar3);
      _objc_retain(puVar16);
      _objc_retain(puVar17);
      pppppuVar20 = pppppuVar3;
      func_0x00010bfe91c0(pppppuVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar17);
      _objc_release(pppppuVar3);
      _objc_release(puVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppppuVar20);
  return pppppuVar20;
}



/* Entry: 106f2d9f8; end: 106f2df7b; +[SCSnapRendererPluginEffectRenderUtils snapDocIsValidToRender:mustOutputImage:error:] */

undefined8 *****
FUN_106f2d9f8(undefined8 *****param_1,undefined8 param_2,undefined8 *****param_3,uint param_4,
             undefined8 *****param_5)

{
  long lVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *****pppppuVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined8 *****pppppuVar18;
  undefined8 *****pppppuVar19;
  undefined **ppuVar20;
  long lVar21;
  undefined8 *****pppppuVar22;
  long lVar23;
  uint uVar24;
  undefined8 *****unaff_x25;
  undefined8 *****pppppuVar25;
  undefined8 *****unaff_x26;
  undefined8 *****pppppuVar26;
  long lVar27;
  undefined8 *****unaff_x27;
  ulong uVar28;
  undefined8 *****unaff_x28;
  undefined8 uVar29;
  ulong uVar30;
  undefined8 ****ppppuStack_b18;
  undefined8 uStack_ab0;
  long lStack_aa8;
  long *plStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  long lStack_a68;
  long *plStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined1 auStack_9b0 [256];
  long lStack_8b0;
  undefined8 ****ppppuStack_8a0;
  undefined8 ****ppppuStack_898;
  undefined8 ****ppppuStack_890;
  undefined8 ****ppppuStack_888;
  undefined8 ****ppppuStack_880;
  undefined8 ****ppppuStack_878;
  undefined8 ****ppppuStack_870;
  undefined8 ****ppppuStack_868;
  undefined8 ****ppppuStack_860;
  undefined8 ****ppppuStack_858;
  undefined1 **ppuStack_850;
  code *pcStack_848;
  long lStack_840;
  undefined8 ****ppppuStack_838;
  undefined8 ****ppppuStack_830;
  undefined8 ****ppppuStack_828;
  undefined8 ****ppppuStack_820;
  long lStack_818;
  undefined8 ****ppppuStack_810;
  undefined8 ****ppppuStack_808;
  undefined8 ****ppppuStack_800;
  undefined8 ****ppppuStack_7f8;
  undefined8 ****ppppuStack_7f0;
  undefined8 ****ppppuStack_7e8;
  undefined8 ****ppppuStack_7e0;
  undefined8 ****ppppuStack_7d8;
  undefined8 ****ppppuStack_7d0;
  undefined8 ****ppppuStack_7c8;
  undefined8 ***pppuStack_7c0;
  long lStack_7b8;
  ulong *puStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined1 auStack_748 [24];
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 ***pppuStack_700;
  long lStack_6f8;
  long *plStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  long lStack_6b8;
  long *plStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  long lStack_678;
  long *plStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 ***pppuStack_640;
  long lStack_638;
  long *plStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  long lStack_5f8;
  ulong *puStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 ****appppuStack_5b8 [97];
  long lStack_2b0;
  undefined8 ****ppppuStack_2a0;
  undefined8 ****ppppuStack_298;
  undefined8 ****ppppuStack_290;
  undefined8 ****ppppuStack_288;
  undefined8 ****ppppuStack_280;
  undefined8 ****ppppuStack_278;
  undefined8 ****ppppuStack_270;
  undefined8 ****ppppuStack_268;
  undefined8 ****ppppuStack_260;
  undefined8 ****ppppuStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined8 ****ppppuStack_240;
  long lStack_238;
  undefined8 ****ppppuStack_230;
  undefined8 ****ppppuStack_228;
  undefined8 ****ppppuStack_220;
  undefined8 ****ppppuStack_218;
  undefined8 ****ppppuStack_210;
  undefined8 ****ppppuStack_208;
  long lStack_200;
  uint uStack_1f4;
  undefined8 ***pppuStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1f4 = param_4;
  _objc_retain(param_3);
  ppuVar20 = (undefined **)param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar15 = (undefined8 *****)ppuVar20;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar2 = pppppuVar15;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppppuVar15);
  _objc_release(ppuVar20);
  pppppuVar15 = pppppuVar2;
  func_0x00010c2791e0();
  if (pppppuVar15 == (undefined8 *****)0x0) {
    pppppuVar15 = (undefined8 *****)0x1;
    FUN_106f2c334(param_5,&PTR____CFConstantStringClassReference_110e8e418);
    pppppuVar22 = (undefined8 *****)0x0;
  }
  else {
    func_0x00010c0ff600();
    _objc_retainAutoreleasedReturnValue();
    lStack_1a8 = 0;
    pppuStack_1b0 = (undefined8 ****)0x0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    ppuVar20 = (undefined **)pppppuVar2;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = (undefined8 *****)&pppuStack_1b0;
    pppppuVar22 = (undefined8 *****)ppuVar20;
    func_0x00010bf52a60();
    ppppuStack_228 = pppppuVar22;
    if (pppppuVar22 == (undefined8 *****)0x0) {
      pppppuVar22 = (undefined8 *****)0x1;
    }
    else {
      lVar21 = *plStack_1a0;
      ppppuStack_240 = param_5;
      lStack_238 = lVar21;
      ppppuStack_230 = param_3;
      ppppuStack_218 = (undefined8 ****)ppuVar20;
      ppppuStack_210 = pppppuVar2;
      do {
        unaff_x25 = (undefined8 *****)0x0;
        do {
          if (*plStack_1a0 != lVar21) {
            _objc_enumerationMutation(ppuVar20);
          }
          pppppuVar2 = *(undefined8 ******)(lStack_1a8 + (long)unaff_x25 * 8);
          lStack_1e8 = 0;
          pppuStack_1f0 = (undefined8 ****)0x0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          ppppuStack_220 = unaff_x25;
          func_0x00010c2787a0();
          _objc_retainAutoreleasedReturnValue();
          pppppuVar15 = (undefined8 *****)&pppuStack_1f0;
          ppppuStack_208 = pppppuVar2;
          func_0x00010bf52a60();
          if (pppppuVar2 != (undefined8 *****)0x0) {
            lStack_200 = *plStack_1e0;
            unaff_x28 = pppppuVar2;
            do {
              param_5 = (undefined8 *****)0x0;
              do {
                if (*plStack_1e0 != lStack_200) {
                  _objc_enumerationMutation(ppppuStack_208);
                }
                pppppuVar2 = *(undefined8 ******)(lStack_1e8 + (long)param_5 * 8);
                if (uStack_1f4 != 0) {
                  unaff_x27 = pppppuVar2;
                  func_0x00010c27c540();
                  _objc_retainAutoreleasedReturnValue();
                  pppppuVar22 = unaff_x27;
                  func_0x00010bf8b160();
                  if (pppppuVar22 != (undefined8 *****)0x0) goto LAB_106f2df00;
                  unaff_x26 = pppppuVar2;
                  func_0x00010c2667a0();
                  _objc_retainAutoreleasedReturnValue();
                  pppppuVar22 = unaff_x26;
                  func_0x00010c26f280();
                  _objc_release(unaff_x26);
                  _objc_release(unaff_x27);
                  unaff_x27 = pppppuVar2;
                  if (0 < (long)pppppuVar22) goto LAB_106f2df08;
                }
                pppppuVar22 = pppppuVar2;
                func_0x00010c0ff680();
                if (pppppuVar22 != (undefined8 *****)0x0) {
                  pppppuVar22 = pppppuVar2;
                  func_0x00010c0ff680();
                  unaff_x27 = pppppuVar2;
                  if (pppppuVar22 == (undefined8 *****)0x0) goto LAB_106f2dd7c;
                  pppppuVar22 = (undefined8 *****)0x0;
                  unaff_x25 = (undefined8 *****)0x0;
                  do {
                    pppppuVar18 = (undefined8 *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
                    pppppuVar3 = pppppuVar2;
                    func_0x00010c0ff660(pppppuVar2);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c296de0();
                    func_0x00010c0df820();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x26 = param_1;
                    pppppuVar15 = pppppuVar18;
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(pppppuVar18);
                    _objc_release(pppppuVar3);
                    pppppuVar18 = unaff_x26;
                    func_0x00010c08c3a0();
                    if ((int)pppppuVar18 == 1) {
                      pppppuVar18 = unaff_x26;
                      func_0x00010c0c3fe0();
                      _objc_retainAutoreleasedReturnValue();
                      pppppuVar3 = pppppuVar18;
                      func_0x00010bf0b760();
                      _objc_release(pppppuVar18);
                      uVar24 = (uint)unaff_x25;
                      if ((int)pppppuVar3 == 5) {
                        uVar24 = uVar24 + 1;
                      }
                      unaff_x25 = (undefined8 *****)(ulong)uVar24;
                    }
                    _objc_release(unaff_x26);
                    pppppuVar22 = (undefined8 *****)((long)pppppuVar22 + 1);
                    pppppuVar18 = pppppuVar2;
                    func_0x00010c0ff680();
                  } while (pppppuVar22 < pppppuVar18);
                  if ((int)unaff_x25 == 0) goto LAB_106f2dd7c;
                  if ((int)unaff_x25 < 2) goto LAB_106f2dcc4;
                  pppppuVar15 = (undefined8 *****)0x1;
                  FUN_106f2c334(ppppuStack_240,&PTR____CFConstantStringClassReference_110e8e438);
                  _objc_retain(pppppuVar2);
                  _objc_retain(param_1);
                  pppppuVar22 = pppppuVar2;
                  func_0x00010c0ff680();
                  if (pppppuVar22 != (undefined8 *****)0x0) {
                    pppppuVar22 = (undefined8 *****)0x0;
                    do {
                      pppppuVar18 = (undefined8 *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
                      pppppuVar3 = pppppuVar2;
                      func_0x00010c0ff660(pppppuVar2);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c296de0();
                      func_0x00010c0df820();
                      _objc_retainAutoreleasedReturnValue();
                      param_5 = param_1;
                      pppppuVar15 = pppppuVar18;
                      func_0x00010c0e00e0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(pppppuVar18);
                      _objc_release(pppppuVar3);
                      func_0x00010c08c3a0(param_5);
                      _objc_release(param_5);
                      pppppuVar22 = (undefined8 *****)((long)pppppuVar22 + 1);
                      pppppuVar18 = pppppuVar2;
                      func_0x00010c0ff680();
                    } while (pppppuVar22 < pppppuVar18);
                  }
                  _objc_release(param_1);
LAB_106f2df00:
                  _objc_release(unaff_x27);
LAB_106f2df08:
                  _objc_release(ppppuStack_208);
                  pppppuVar22 = (undefined8 *****)0x0;
                  param_3 = (undefined8 *****)ppppuStack_230;
                  pppppuVar2 = (undefined8 *****)ppppuStack_210;
                  ppuVar20 = (undefined **)ppppuStack_218;
                  goto LAB_106f2df1c;
                }
LAB_106f2dcc4:
                pppppuVar18 = pppppuVar2;
                func_0x00010c0ff680();
                pppppuVar22 = (undefined8 *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
                unaff_x27 = pppppuVar2;
                if (pppppuVar18 == (undefined8 *****)0x1) {
                  func_0x00010c0ff660(pppppuVar2);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c296de0();
                  func_0x00010c0df820();
                  _objc_retainAutoreleasedReturnValue();
                  pppppuVar18 = param_1;
                  pppppuVar15 = pppppuVar22;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x27 = pppppuVar18;
                  func_0x00010c0c3fe0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(pppppuVar18);
                  _objc_release(pppppuVar22);
                  _objc_release(pppppuVar2);
                  if ((unaff_x27 != (undefined8 *****)0x0) &&
                     (pppppuVar2 = unaff_x27, func_0x00010c27dd80(), (int)pppppuVar2 != 0)) {
                    pppppuVar2 = unaff_x27;
                    func_0x00010c27dd80();
                    if (((uStack_1f4 & 1) != 0) || ((int)pppppuVar2 != 1)) {
                      ppuVar20 = &PTR____CFConstantStringClassReference_110e8e478;
                      if ((int)pppppuVar2 == 1) {
                        ppuVar20 = &PTR____CFConstantStringClassReference_110e8e458;
                      }
                      pppppuVar15 = (undefined8 *****)0x3;
                      FUN_106f2c334(ppppuStack_240,ppuVar20);
                      goto LAB_106f2df00;
                    }
                  }
                  _objc_release(unaff_x27);
                }
LAB_106f2dd7c:
                param_5 = (undefined8 *****)((long)param_5 + 1);
              } while (param_5 != unaff_x28);
              pppppuVar15 = (undefined8 *****)&pppuStack_1f0;
              unaff_x28 = (undefined8 *****)ppppuStack_208;
              func_0x00010bf52a60();
            } while (unaff_x28 != (undefined8 *****)0x0);
          }
          _objc_release(ppppuStack_208);
          pppppuVar2 = (undefined8 *****)ppppuStack_210;
          ppuVar20 = (undefined **)ppppuStack_218;
          lVar21 = lStack_238;
          unaff_x25 = (undefined8 *****)((long)ppppuStack_220 + 1);
        } while (unaff_x25 != (undefined8 *****)ppppuStack_228);
        pppppuVar15 = (undefined8 *****)&pppuStack_1b0;
        pppppuVar22 = (undefined8 *****)ppppuStack_218;
        func_0x00010bf52a60();
        ppppuStack_228 = pppppuVar22;
      } while (pppppuVar22 != (undefined8 *****)0x0);
      pppppuVar22 = (undefined8 *****)0x1;
      param_3 = (undefined8 *****)ppppuStack_230;
    }
LAB_106f2df1c:
    _objc_release(ppuVar20);
    _objc_release(param_1);
  }
  _objc_release(pppppuVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppppuVar22;
  }
  ___stack_chk_fail();
  pcStack_248 = FUN_106f2df7c;
  lStack_2b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_2a0 = unaff_x28;
  ppppuStack_298 = unaff_x27;
  ppppuStack_290 = unaff_x26;
  ppppuStack_288 = unaff_x25;
  ppppuStack_280 = param_5;
  ppppuStack_278 = pppppuVar22;
  ppppuStack_270 = (undefined8 ****)ppuVar20;
  ppppuStack_268 = param_1;
  ppppuStack_260 = pppppuVar2;
  ppppuStack_258 = param_3;
  puStack_250 = &stack0xfffffffffffffff0;
  _objc_retain(pppppuVar15);
  pppppuVar2 = pppppuVar15;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar18 = pppppuVar2;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar3 = pppppuVar18;
  func_0x00010c12fae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppppuVar18);
  _objc_release(pppppuVar2);
  pppppuVar2 = pppppuVar3;
  func_0x00010c12fb00();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar18 = pppppuVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppppuVar2);
  pppppuVar2 = pppppuVar18;
  func_0x00010c12f9a0();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar26 = pppppuVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppppuVar2);
  pppppuVar2 = pppppuVar26;
  func_0x00010c12fa40();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar4 = pppppuVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppppuVar2);
  pppppuVar2 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppppuStack_7e8 = pppppuVar4;
  if (pppppuVar4 == (undefined8 *****)0x0) {
    uStack_798 = 0;
    uStack_7a0 = 0;
    uStack_788 = 0;
    uStack_790 = 0;
    lStack_7b8 = 0;
    pppuStack_7c0 = (undefined8 ****)0x0;
    uStack_7a8 = 0;
    puStack_7b0 = (ulong *)0x0;
    pppppuVar19 = pppppuVar15;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar8 = pppppuVar19;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppppuVar19);
    pppppuVar4 = (undefined8 *****)&pppuStack_7c0;
    pppppuVar9 = pppppuVar8;
    func_0x00010bf52a60();
    pppppuVar25 = (undefined8 *****)PTR____NSArray0__struct_11034ab48;
    pppppuVar2 = param_5;
    if (pppppuVar9 != (undefined8 *****)0x0) {
      pppppuVar2 = (undefined8 *****)0x0;
      ppuVar20 = (undefined **)*puStack_7b0;
      ppppuStack_7f0 = pppppuVar26;
      do {
        pppppuVar22 = (undefined8 *****)0x0;
        do {
          if ((undefined8 *****)*puStack_7b0 != (undefined8 *****)ppuVar20) {
            _objc_enumerationMutation(pppppuVar8);
          }
          pppppuVar19 = *(undefined8 ******)(lStack_7b8 + (long)pppppuVar22 * 8);
          pppppuVar26 = pppppuVar19;
          func_0x00010c08c3a0();
          if ((int)pppppuVar26 == 1) {
            if (pppppuVar2 != (undefined8 *****)0x0) goto LAB_106f2e8ec;
            _objc_retain(pppppuVar19);
            pppppuVar2 = pppppuVar19;
          }
          pppppuVar22 = (undefined8 *****)((long)pppppuVar22 + 1);
        } while (pppppuVar9 != pppppuVar22);
        pppppuVar4 = (undefined8 *****)&pppuStack_7c0;
        pppppuVar9 = pppppuVar8;
        func_0x00010bf52a60();
      } while (pppppuVar9 != (undefined8 *****)0x0);
      _objc_release(pppppuVar8);
      pppppuVar25 = (undefined8 *****)PTR____NSArray0__struct_11034ab48;
      pppppuVar26 = (undefined8 *****)ppppuStack_7f0;
      if (pppppuVar2 == (undefined8 *****)0x0) goto LAB_106f2e904;
      pppppuVar8 = (undefined8 *****)PTR_PTR_1126d3440;
      _objc_opt_new();
      func_0x00010c1c4c00();
      pppppuVar9 = pppppuVar2;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      func_0x00010c1c5440(pppppuVar8);
      _objc_release(pppppuVar9);
      pppppuVar26 = pppppuVar8;
      func_0x00010c0c6c20();
      if ((int)pppppuVar26 == 1) {
        pppppuVar9 = pppppuVar2;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c4bc0();
        func_0x00010c2215c0(pppppuVar8);
        _objc_release(pppppuVar9);
      }
      pppppuVar4 = appppuStack_5b8;
      pppppuVar25 = (undefined8 *****)PTR__OBJC_CLASS___NSArray_1126ae530;
      appppuStack_5b8[0] = pppppuVar8;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106f2e8ec;
    }
  }
  else {
    ppuVar20 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    ppppuStack_800 = pppppuVar3;
    ppppuStack_7f0 = pppppuVar26;
    func_0x00010c0664a0(pppppuVar4);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_5f8 = 0;
    uStack_600 = 0;
    uStack_5e8 = 0;
    puStack_5f0 = (ulong *)0x0;
    uStack_5d8 = 0;
    uStack_5e0 = 0;
    uStack_5c8 = 0;
    uStack_5d0 = 0;
    func_0x00010c066480();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar3 = pppppuVar4;
    func_0x00010bf52a60();
    if (pppppuVar3 != (undefined8 *****)0x0) {
      pppppuVar22 = (undefined8 *****)*puStack_5f0;
      do {
        pppppuVar26 = (undefined8 *****)0x0;
        do {
          if ((undefined8 *****)*puStack_5f0 != pppppuVar22) {
            _objc_enumerationMutation(pppppuVar4);
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c277f00(*(undefined8 *)(lStack_5f8 + (long)pppppuVar26 * 8));
          func_0x00010c0df820(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(pppppuVar2);
          _objc_release(puVar5);
          pppppuVar26 = (undefined8 *****)((long)pppppuVar26 + 1);
        } while (pppppuVar3 != pppppuVar26);
        pppppuVar3 = pppppuVar4;
        func_0x00010bf52a60();
      } while (pppppuVar3 != (undefined8 *****)0x0);
    }
    _objc_release(pppppuVar4);
    pppppuVar3 = pppppuVar15;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar26 = pppppuVar3;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar8 = pppppuVar26;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppppuVar26);
    _objc_release(pppppuVar3);
    pppppuVar3 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    ppppuStack_7f8 = pppppuVar15;
    ppppuStack_7e0 = pppppuVar3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar3 = pppppuVar15;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppppuVar15);
    uStack_618 = 0;
    uStack_620 = 0;
    uStack_608 = 0;
    uStack_610 = 0;
    lStack_638 = 0;
    pppuStack_640 = (undefined8 ****)0x0;
    uStack_628 = 0;
    plStack_630 = (long *)0x0;
    _objc_retain(pppppuVar2);
    pppppuVar4 = (undefined8 *****)&pppuStack_640;
    pppppuVar15 = pppppuVar2;
    func_0x00010bf52a60();
    if (pppppuVar15 != (undefined8 *****)0x0) {
      lVar21 = *plStack_630;
      lStack_840 = lVar21;
      ppppuStack_828 = pppppuVar18;
      ppppuStack_7d0 = pppppuVar8;
      do {
        pppppuVar26 = (undefined8 *****)0x0;
        ppppuStack_838 = pppppuVar15;
        do {
          if (*plStack_630 != lVar21) {
            _objc_enumerationMutation(pppppuVar2);
          }
          uVar29 = *(undefined8 *)(lStack_638 + (long)pppppuVar26 * 8);
          lStack_678 = 0;
          uStack_680 = 0;
          uStack_668 = 0;
          plStack_670 = (long *)0x0;
          uStack_658 = 0;
          uStack_660 = 0;
          uStack_648 = 0;
          uStack_650 = 0;
          ppppuStack_830 = pppppuVar26;
          func_0x00010c2791c0();
          _objc_retainAutoreleasedReturnValue();
          pppppuVar15 = pppppuVar8;
          func_0x00010bf52a60();
          if (pppppuVar15 == (undefined8 *****)0x0) {
            pppppuVar18 = (undefined8 *****)0x0;
          }
          else {
            pppppuVar18 = (undefined8 *****)0x0;
            lVar21 = *plStack_670;
            do {
              pppppuVar26 = (undefined8 *****)0x0;
              do {
                if (*plStack_670 != lVar21) {
                  _objc_enumerationMutation(pppppuVar8);
                }
                ppuVar20 = *(undefined ***)(lStack_678 + (long)pppppuVar26 * 8);
                pppppuVar22 = (undefined8 *****)ppuVar20;
                func_0x00010c277f00();
                uVar6 = uVar29;
                func_0x00010c067ec0();
                if ((int)pppppuVar22 == (int)uVar6) {
                  _objc_retain(ppuVar20);
                  _objc_release(pppppuVar18);
                  pppppuVar18 = (undefined8 *****)ppuVar20;
                }
                pppppuVar26 = (undefined8 *****)((long)pppppuVar26 + 1);
              } while (pppppuVar15 != pppppuVar26);
              pppppuVar15 = pppppuVar8;
              func_0x00010bf52a60();
            } while (pppppuVar15 != (undefined8 *****)0x0);
          }
          _objc_release(pppppuVar8);
          uStack_698 = 0;
          uStack_6a0 = 0;
          uStack_688 = 0;
          uStack_690 = 0;
          lStack_6b8 = 0;
          uStack_6c0 = 0;
          uStack_6a8 = 0;
          plStack_6b0 = (long *)0x0;
          pppppuVar15 = pppppuVar18;
          func_0x00010c2787a0();
          _objc_retainAutoreleasedReturnValue();
          pppppuVar26 = pppppuVar15;
          func_0x00010bf52a60();
          pppppuVar8 = (undefined8 *****)ppppuStack_7d0;
          ppppuStack_820 = pppppuVar26;
          if (pppppuVar26 != (undefined8 *****)0x0) {
            lStack_818 = *plStack_6b0;
            ppppuStack_810 = pppppuVar15;
            do {
              pppppuVar26 = (undefined8 *****)0x0;
              do {
                if (*plStack_6b0 != lStack_818) {
                  _objc_enumerationMutation(pppppuVar15);
                }
                pppppuVar22 = *(undefined8 ******)(lStack_6b8 + (long)pppppuVar26 * 8);
                pppppuVar15 = pppppuVar22;
                ppppuStack_808 = pppppuVar26;
                func_0x00010c0ff660();
                _objc_retainAutoreleasedReturnValue();
                pppppuVar26 = pppppuVar15;
                func_0x00010bf529e0();
                _objc_release(pppppuVar15);
                if (pppppuVar26 != (undefined8 *****)0x0) {
                  ppuVar20 = (undefined **)0x0;
                  ppppuStack_7d8 = pppppuVar22;
                  do {
                    pppppuVar15 = pppppuVar22;
                    func_0x00010c0ff660();
                    _objc_retainAutoreleasedReturnValue();
                    pppppuVar26 = pppppuVar15;
                    pppppuVar4 = (undefined8 *****)ppuVar20;
                    ppppuStack_7c8 = (undefined8 ****)ppuVar20;
                    func_0x00010c296de0();
                    _objc_release(pppppuVar15);
                    if ((int)pppppuVar26 == 0) {
LAB_106f2e8b4:
                      _objc_release(ppppuStack_810);
                      _objc_release(pppppuVar18);
                      _objc_release(pppppuVar2);
                      pppppuVar25 = (undefined8 *****)0x0;
                      pppppuVar9 = (undefined8 *****)ppppuStack_7e0;
                      pppppuVar18 = (undefined8 *****)ppppuStack_828;
                      goto LAB_106f2e8d8;
                    }
                    uStack_6d8 = 0;
                    uStack_6e0 = 0;
                    uStack_6c8 = 0;
                    uStack_6d0 = 0;
                    lStack_6f8 = 0;
                    pppuStack_700 = (undefined8 ****)0x0;
                    uStack_6e8 = 0;
                    plStack_6f0 = (long *)0x0;
                    _objc_retain(pppppuVar3);
                    pppppuVar4 = (undefined8 *****)&pppuStack_700;
                    pppppuVar15 = pppppuVar3;
                    func_0x00010bf52a60();
                    if (pppppuVar15 == (undefined8 *****)0x0) {
                      _objc_release(pppppuVar3);
                      goto LAB_106f2e8b4;
                    }
                    pppppuVar25 = (undefined8 *****)0x0;
                    lVar21 = *plStack_6f0;
                    do {
                      pppppuVar22 = (undefined8 *****)0x0;
                      do {
                        if (*plStack_6f0 != lVar21) {
                          _objc_enumerationMutation(pppppuVar3);
                        }
                        ppuVar20 = *(undefined ***)(lStack_6f8 + (long)pppppuVar22 * 8);
                        pppppuVar4 = (undefined8 *****)ppuVar20;
                        func_0x00010c0ff5c0();
                        if ((int)pppppuVar4 == (int)pppppuVar26) {
                          _objc_retain(ppuVar20);
                          _objc_release(pppppuVar25);
                          pppppuVar25 = (undefined8 *****)ppuVar20;
                        }
                        pppppuVar22 = (undefined8 *****)((long)pppppuVar22 + 1);
                      } while (pppppuVar15 != pppppuVar22);
                      pppppuVar4 = (undefined8 *****)&pppuStack_700;
                      pppppuVar15 = pppppuVar3;
                      func_0x00010bf52a60();
                    } while (pppppuVar15 != (undefined8 *****)0x0);
                    _objc_release(pppppuVar3);
                    pppppuVar8 = (undefined8 *****)ppppuStack_7d0;
                    pppppuVar22 = (undefined8 *****)ppppuStack_7d8;
                    if (pppppuVar25 == (undefined8 *****)0x0) goto LAB_106f2e8b4;
                    pppppuVar15 = pppppuVar25;
                    func_0x00010c08c3a0();
                    if ((int)pppppuVar15 == 1) {
                      pppppuVar15 = pppppuVar25;
                      func_0x00010c0c3fe0();
                      _objc_retainAutoreleasedReturnValue();
                      pppppuVar26 = pppppuVar15;
                      func_0x00010bf0b760();
                      _objc_release(pppppuVar15);
                      if ((int)pppppuVar26 == 5) {
                        puVar5 = PTR_PTR_1126d3440;
                        _objc_opt_new();
                        func_0x00010c1c4c00();
                        pppppuVar15 = pppppuVar25;
                        func_0x00010c0c3fe0(pppppuVar25);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c27dd80();
                        func_0x00010c1c5440(puVar5);
                        _objc_release(pppppuVar15);
                        puVar7 = puVar5;
                        func_0x00010c0c6c20();
                        if ((int)puVar7 == 1) {
                          pppppuVar15 = pppppuVar25;
                          func_0x00010c0c3fe0(pppppuVar25);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c0c4bc0();
                          func_0x00010c2215c0(puVar5);
                          _objc_release(pppppuVar15);
                        }
                        func_0x00010c067ec0(uVar29);
                        func_0x00010c218fc0(puVar5);
                        pppppuVar15 = pppppuVar22;
                        func_0x00010bfdda80();
                        if ((int)pppppuVar15 != 0) {
                          pppppuVar15 = pppppuVar22;
                          func_0x00010c2667a0(pppppuVar22);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c26f280();
                          _CMTimeMake(&uStack_780);
                          pppppuVar26 = pppppuVar22;
                          func_0x00010c27c540(pppppuVar22);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bf8b160();
                          _CMTimeMake(auStack_748);
                          _CMTimeRangeMake(&uStack_730,&uStack_780,auStack_748);
                          uStack_778 = uStack_728;
                          uStack_780 = uStack_730;
                          uStack_768 = uStack_718;
                          uStack_770 = uStack_720;
                          uStack_758 = uStack_708;
                          uStack_760 = uStack_710;
                          func_0x00010c214ec0(puVar5);
                          _objc_release(pppppuVar26);
                          _objc_release(pppppuVar15);
                        }
                        func_0x00010befa120(ppppuStack_7e0);
                        _objc_release(puVar5);
                      }
                    }
                    _objc_release(pppppuVar25);
                    ppuVar20 = (undefined **)((long)ppppuStack_7c8 + 1);
                    pppppuVar15 = pppppuVar22;
                    func_0x00010c0ff660();
                    _objc_retainAutoreleasedReturnValue();
                    pppppuVar26 = pppppuVar15;
                    func_0x00010bf529e0();
                    _objc_release(pppppuVar15);
                  } while (ppuVar20 < pppppuVar26);
                }
                pppppuVar15 = (undefined8 *****)ppppuStack_810;
                pppppuVar26 = (undefined8 *****)((long)ppppuStack_808 + 1);
              } while (pppppuVar26 != (undefined8 *****)ppppuStack_820);
              pppppuVar26 = (undefined8 *****)ppppuStack_810;
              func_0x00010bf52a60();
              ppppuStack_820 = pppppuVar26;
            } while (pppppuVar26 != (undefined8 *****)0x0);
          }
          _objc_release(pppppuVar15);
          _objc_release(pppppuVar18);
          pppppuVar18 = (undefined8 *****)ppppuStack_828;
          lVar21 = lStack_840;
          pppppuVar26 = (undefined8 *****)((long)ppppuStack_830 + 1);
        } while (pppppuVar26 != (undefined8 *****)ppppuStack_838);
        pppppuVar4 = (undefined8 *****)&pppuStack_640;
        pppppuVar15 = pppppuVar2;
        func_0x00010bf52a60();
      } while (pppppuVar15 != (undefined8 *****)0x0);
    }
    _objc_release(pppppuVar2);
    pppppuVar25 = (undefined8 *****)ppppuStack_7e0;
    _objc_retain(ppppuStack_7e0);
    pppppuVar9 = pppppuVar25;
LAB_106f2e8d8:
    _objc_release(pppppuVar3);
    _objc_release(pppppuVar9);
    pppppuVar3 = (undefined8 *****)ppppuStack_800;
    pppppuVar15 = (undefined8 *****)ppppuStack_7f8;
LAB_106f2e8ec:
    _objc_release(pppppuVar8);
    pppppuVar19 = pppppuVar9;
    pppppuVar26 = (undefined8 *****)ppppuStack_7f0;
    pppppuVar8 = pppppuVar2;
  }
  pppppuVar9 = pppppuVar19;
  _objc_release(pppppuVar8);
LAB_106f2e904:
  _objc_release(ppppuStack_7e8);
  _objc_release(pppppuVar26);
  _objc_release(pppppuVar18);
  _objc_release(pppppuVar3);
  _objc_release(pppppuVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b0) {
    ___stack_chk_fail();
    pcStack_848 = FUN_106f2e97c;
    lStack_8b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppuStack_8a0 = pppppuVar18;
    ppppuStack_898 = pppppuVar15;
    ppppuStack_890 = pppppuVar8;
    ppppuStack_888 = pppppuVar3;
    ppppuStack_880 = pppppuVar2;
    ppppuStack_878 = pppppuVar22;
    ppppuStack_870 = (undefined8 ****)ppuVar20;
    ppppuStack_868 = pppppuVar26;
    ppppuStack_860 = pppppuVar25;
    ppppuStack_858 = pppppuVar9;
    ppuStack_850 = &puStack_250;
    _objc_retain(pppppuVar4);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_a68 = 0;
    uStack_a70 = 0;
    uStack_a58 = 0;
    plStack_a60 = (long *)0x0;
    uStack_a48 = 0;
    uStack_a50 = 0;
    uStack_a38 = 0;
    uStack_a40 = 0;
    pppppuVar2 = pppppuVar4;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = pppppuVar2;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppppuVar2);
    pppppuVar2 = pppppuVar15;
    func_0x00010bf52a60();
    if (pppppuVar2 != (undefined8 *****)0x0) {
      lVar21 = *plStack_a60;
      do {
        pppppuVar22 = (undefined8 *****)0x0;
        do {
          if (*plStack_a60 != lVar21) {
            _objc_enumerationMutation(pppppuVar15);
          }
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0ff5c0(*(undefined8 *)(lStack_a68 + (long)pppppuVar22 * 8));
          func_0x00010c0df820(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar5);
          _objc_release(puVar7);
          pppppuVar22 = (undefined8 *****)((long)pppppuVar22 + 1);
        } while (pppppuVar2 != pppppuVar22);
        pppppuVar2 = pppppuVar15;
        func_0x00010bf52a60();
      } while (pppppuVar2 != (undefined8 *****)0x0);
    }
    _objc_release(pppppuVar15);
    pppppuVar25 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_aa8 = 0;
    uStack_ab0 = 0;
    uStack_a98 = 0;
    plStack_aa0 = (long *)0x0;
    uStack_a88 = 0;
    uStack_a90 = 0;
    uStack_a78 = 0;
    uStack_a80 = 0;
    pppppuVar2 = pppppuVar4;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = pppppuVar2;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar22 = pppppuVar15;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar18 = pppppuVar22;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppppuVar22);
    _objc_release(pppppuVar15);
    _objc_release(pppppuVar2);
    puVar16 = &uStack_ab0;
    puVar17 = auStack_9b0;
    ppppuStack_b18 = pppppuVar18;
    func_0x00010bf52a60();
    if ((undefined8 *****)ppppuStack_b18 != (undefined8 *****)0x0) {
      lVar21 = *plStack_aa0;
      do {
        pppppuVar2 = (undefined8 *****)0x0;
        do {
          if (*plStack_aa0 != lVar21) {
            _objc_enumerationMutation(pppppuVar18);
          }
          lVar23 = *(long *)(lStack_aa8 + (long)pppppuVar2 * 8);
          lVar10 = lVar23;
          func_0x00010c2787a0();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (lVar11 != 0) {
            lVar27 = 0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar10);
              }
              uVar28 = *(ulong *)(lVar27 * 8);
              uVar30 = uVar28;
              func_0x00010c0ff680();
              if (uVar30 != 0) {
                uVar30 = 0;
                do {
                  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  uVar12 = uVar28;
                  func_0x00010c0ff660();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c296de0();
                  func_0x00010c0df820();
                  _objc_retainAutoreleasedReturnValue();
                  puVar13 = puVar5;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar7);
                  _objc_release(uVar12);
                  puVar7 = puVar13;
                  func_0x00010c08c3a0();
                  if ((int)puVar7 == 1) {
                    puVar7 = puVar13;
                    func_0x00010c0c3fe0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar14 = puVar7;
                    func_0x00010bf0b760();
                    _objc_release(puVar7);
                    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    if ((int)puVar14 == 6) {
                      func_0x00010c277f00(lVar23);
                      func_0x00010c0df820();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(pppppuVar25);
                      _objc_release(puVar7);
                    }
                  }
                  _objc_release(puVar13);
                  uVar30 = uVar30 + 1;
                  uVar12 = uVar28;
                  func_0x00010c0ff680();
                } while (uVar30 < uVar12);
              }
              lVar27 = lVar27 + 1;
            } while (lVar27 != lVar11);
            lVar11 = lVar10;
            func_0x00010bf52a60();
          }
          _objc_release(lVar10);
          pppppuVar2 = (undefined8 *****)((long)pppppuVar2 + 1);
        } while (pppppuVar2 != (undefined8 *****)ppppuStack_b18);
        puVar16 = &uStack_ab0;
        puVar17 = auStack_9b0;
        ppppuStack_b18 = pppppuVar18;
        func_0x00010bf52a60();
      } while ((undefined8 *****)ppppuStack_b18 != (undefined8 *****)0x0);
    }
    _objc_release(pppppuVar18);
    _objc_release(puVar5);
    _objc_release(pppppuVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_8b0) {
      ___stack_chk_fail();
      _objc_retain(puVar16);
      _objc_retain(puVar17);
      puVar5 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
      func_0x00010bf69700(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f5fe0(0x3ff0000000000000);
      func_0x00010c1d4c20(puVar5);
      func_0x00010c1e0260(puVar5);
      pppppuVar2 = (undefined8 *****)PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
      _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
      func_0x00010c23d0a0(puVar17);
      func_0x00010c046ac0(pppppuVar2);
      _objc_retain(puVar16);
      _objc_retain(puVar17);
      pppppuVar25 = pppppuVar2;
      func_0x00010bfe91c0(pppppuVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar17);
      _objc_release(pppppuVar2);
      _objc_release(puVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppppuVar25);
  return pppppuVar25;
}



/* Entry: 106f2df7c; end: 106f2e97b; +[SCSnapRendererPluginEffectRenderUtils inputPlaybackLayersForRender:] */

void FUN_106f2df7c(undefined8 param_1,undefined8 param_2,undefined8 ****param_3)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 ****ppppuVar18;
  undefined **unaff_x22;
  undefined8 ****unaff_x23;
  undefined8 ****unaff_x24;
  long lVar19;
  undefined8 ****ppppuVar20;
  undefined8 ****ppppuVar21;
  long lVar22;
  undefined8 ****ppppuVar23;
  ulong uVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined8 ***pppuStack_8d8;
  undefined8 uStack_870;
  long lStack_868;
  long *plStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  long lStack_828;
  long *plStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined1 auStack_770 [256];
  long lStack_670;
  undefined8 ***pppuStack_660;
  undefined8 ***pppuStack_658;
  undefined8 ***pppuStack_650;
  undefined8 ***pppuStack_648;
  undefined8 ***pppuStack_640;
  undefined8 ***pppuStack_638;
  undefined8 ***pppuStack_630;
  undefined8 ***pppuStack_628;
  undefined8 ***pppuStack_620;
  undefined8 ***pppuStack_618;
  undefined1 *puStack_610;
  code *pcStack_608;
  long lStack_600;
  undefined8 ***pppuStack_5f8;
  undefined8 ***pppuStack_5f0;
  undefined8 ***pppuStack_5e8;
  undefined8 ***pppuStack_5e0;
  long lStack_5d8;
  undefined8 ***pppuStack_5d0;
  undefined8 ***pppuStack_5c8;
  undefined8 ***pppuStack_5c0;
  undefined8 ***pppuStack_5b8;
  undefined8 ***pppuStack_5b0;
  undefined8 ***pppuStack_5a8;
  undefined8 ***pppuStack_5a0;
  undefined8 ***pppuStack_598;
  undefined8 ***pppuStack_590;
  undefined8 ***pppuStack_588;
  undefined8 **ppuStack_580;
  long lStack_578;
  ulong *puStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 auStack_508 [24];
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 **ppuStack_4c0;
  long lStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long lStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 **ppuStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  ulong *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 ***apppuStack_378 [97];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppppuVar16 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar2 = ppppuVar16;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar23 = ppppuVar2;
  func_0x00010c12fae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppppuVar2);
  _objc_release(ppppuVar16);
  ppppuVar16 = ppppuVar23;
  func_0x00010c12fb00();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar2 = ppppuVar16;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppppuVar16);
  ppppuVar16 = ppppuVar2;
  func_0x00010c12f9a0();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar21 = ppppuVar16;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppppuVar16);
  ppppuVar16 = ppppuVar21;
  func_0x00010c12fa40();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar17 = ppppuVar16;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppppuVar16);
  ppppuVar16 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  pppuStack_5a8 = ppppuVar17;
  if (ppppuVar17 == (undefined8 ****)0x0) {
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    lStack_578 = 0;
    ppuStack_580 = (undefined8 ***)0x0;
    uStack_568 = 0;
    puStack_570 = (ulong *)0x0;
    ppppuVar20 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar6 = ppppuVar20;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppuVar20);
    ppppuVar17 = (undefined8 ****)&ppuStack_580;
    ppppuVar7 = ppppuVar6;
    func_0x00010bf52a60();
    ppppuVar18 = (undefined8 ****)PTR____NSArray0__struct_11034ab48;
    ppppuVar16 = unaff_x24;
    if (ppppuVar7 != (undefined8 ****)0x0) {
      ppppuVar16 = (undefined8 ****)0x0;
      unaff_x22 = (undefined **)*puStack_570;
      pppuStack_5b0 = ppppuVar21;
      do {
        unaff_x23 = (undefined8 ****)0x0;
        do {
          if ((undefined8 ****)*puStack_570 != (undefined8 ****)unaff_x22) {
            _objc_enumerationMutation(ppppuVar6);
          }
          ppppuVar20 = *(undefined8 *****)(lStack_578 + (long)unaff_x23 * 8);
          ppppuVar21 = ppppuVar20;
          func_0x00010c08c3a0();
          if ((int)ppppuVar21 == 1) {
            if (ppppuVar16 != (undefined8 ****)0x0) goto LAB_106f2e8ec;
            _objc_retain(ppppuVar20);
            ppppuVar16 = ppppuVar20;
          }
          unaff_x23 = (undefined8 ****)((long)unaff_x23 + 1);
        } while (ppppuVar7 != unaff_x23);
        ppppuVar17 = (undefined8 ****)&ppuStack_580;
        ppppuVar7 = ppppuVar6;
        func_0x00010bf52a60();
      } while (ppppuVar7 != (undefined8 ****)0x0);
      _objc_release(ppppuVar6);
      ppppuVar18 = (undefined8 ****)PTR____NSArray0__struct_11034ab48;
      ppppuVar21 = (undefined8 ****)pppuStack_5b0;
      if (ppppuVar16 == (undefined8 ****)0x0) goto LAB_106f2e904;
      ppppuVar6 = (undefined8 ****)PTR_PTR_1126d3440;
      _objc_opt_new();
      func_0x00010c1c4c00();
      ppppuVar7 = ppppuVar16;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      func_0x00010c1c5440(ppppuVar6);
      _objc_release(ppppuVar7);
      ppppuVar21 = ppppuVar6;
      func_0x00010c0c6c20();
      if ((int)ppppuVar21 == 1) {
        ppppuVar7 = ppppuVar16;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c4bc0();
        func_0x00010c2215c0(ppppuVar6);
        _objc_release(ppppuVar7);
      }
      ppppuVar17 = apppuStack_378;
      ppppuVar18 = (undefined8 ****)PTR__OBJC_CLASS___NSArray_1126ae530;
      apppuStack_378[0] = ppppuVar6;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106f2e8ec;
    }
  }
  else {
    unaff_x22 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    pppuStack_5c0 = ppppuVar23;
    pppuStack_5b0 = ppppuVar21;
    func_0x00010c0664a0(ppppuVar17);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    puStack_3b0 = (ulong *)0x0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    func_0x00010c066480();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar23 = ppppuVar17;
    func_0x00010bf52a60();
    if (ppppuVar23 != (undefined8 ****)0x0) {
      unaff_x23 = (undefined8 ****)*puStack_3b0;
      do {
        ppppuVar21 = (undefined8 ****)0x0;
        do {
          if ((undefined8 ****)*puStack_3b0 != unaff_x23) {
            _objc_enumerationMutation(ppppuVar17);
          }
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c277f00(*(undefined8 *)(lStack_3b8 + (long)ppppuVar21 * 8));
          func_0x00010c0df820(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppppuVar16);
          _objc_release(puVar3);
          ppppuVar21 = (undefined8 ****)((long)ppppuVar21 + 1);
        } while (ppppuVar23 != ppppuVar21);
        ppppuVar23 = ppppuVar17;
        func_0x00010bf52a60();
      } while (ppppuVar23 != (undefined8 ****)0x0);
    }
    _objc_release(ppppuVar17);
    ppppuVar23 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar21 = ppppuVar23;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar6 = ppppuVar21;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppuVar21);
    _objc_release(ppppuVar23);
    ppppuVar23 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    pppuStack_5b8 = param_3;
    pppuStack_5a0 = ppppuVar23;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar23 = param_3;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    lStack_3f8 = 0;
    ppuStack_400 = (undefined8 ***)0x0;
    uStack_3e8 = 0;
    plStack_3f0 = (long *)0x0;
    _objc_retain(ppppuVar16);
    ppppuVar17 = (undefined8 ****)&ppuStack_400;
    ppppuVar21 = ppppuVar16;
    func_0x00010bf52a60();
    if (ppppuVar21 != (undefined8 ****)0x0) {
      lVar15 = *plStack_3f0;
      lStack_600 = lVar15;
      pppuStack_5e8 = ppppuVar2;
      pppuStack_590 = ppppuVar6;
      do {
        ppppuVar17 = (undefined8 ****)0x0;
        pppuStack_5f8 = ppppuVar21;
        do {
          if (*plStack_3f0 != lVar15) {
            _objc_enumerationMutation(ppppuVar16);
          }
          uVar25 = *(undefined8 *)(lStack_3f8 + (long)ppppuVar17 * 8);
          lStack_438 = 0;
          uStack_440 = 0;
          uStack_428 = 0;
          plStack_430 = (long *)0x0;
          uStack_418 = 0;
          uStack_420 = 0;
          uStack_408 = 0;
          uStack_410 = 0;
          pppuStack_5f0 = ppppuVar17;
          func_0x00010c2791c0();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar2 = ppppuVar6;
          func_0x00010bf52a60();
          if (ppppuVar2 == (undefined8 ****)0x0) {
            ppppuVar21 = (undefined8 ****)0x0;
          }
          else {
            ppppuVar21 = (undefined8 ****)0x0;
            lVar15 = *plStack_430;
            do {
              ppppuVar17 = (undefined8 ****)0x0;
              do {
                if (*plStack_430 != lVar15) {
                  _objc_enumerationMutation(ppppuVar6);
                }
                unaff_x22 = *(undefined ***)(lStack_438 + (long)ppppuVar17 * 8);
                unaff_x23 = (undefined8 ****)unaff_x22;
                func_0x00010c277f00();
                uVar4 = uVar25;
                func_0x00010c067ec0();
                if ((int)unaff_x23 == (int)uVar4) {
                  _objc_retain(unaff_x22);
                  _objc_release(ppppuVar21);
                  ppppuVar21 = (undefined8 ****)unaff_x22;
                }
                ppppuVar17 = (undefined8 ****)((long)ppppuVar17 + 1);
              } while (ppppuVar2 != ppppuVar17);
              ppppuVar2 = ppppuVar6;
              func_0x00010bf52a60();
            } while (ppppuVar2 != (undefined8 ****)0x0);
          }
          _objc_release(ppppuVar6);
          uStack_458 = 0;
          uStack_460 = 0;
          uStack_448 = 0;
          uStack_450 = 0;
          lStack_478 = 0;
          uStack_480 = 0;
          uStack_468 = 0;
          plStack_470 = (long *)0x0;
          ppppuVar2 = ppppuVar21;
          func_0x00010c2787a0();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar17 = ppppuVar2;
          func_0x00010bf52a60();
          ppppuVar6 = (undefined8 ****)pppuStack_590;
          pppuStack_5e0 = ppppuVar17;
          if (ppppuVar17 != (undefined8 ****)0x0) {
            lStack_5d8 = *plStack_470;
            pppuStack_5d0 = ppppuVar2;
            do {
              ppppuVar17 = (undefined8 ****)0x0;
              do {
                if (*plStack_470 != lStack_5d8) {
                  _objc_enumerationMutation(ppppuVar2);
                }
                unaff_x23 = *(undefined8 *****)(lStack_478 + (long)ppppuVar17 * 8);
                ppppuVar2 = unaff_x23;
                pppuStack_5c8 = ppppuVar17;
                func_0x00010c0ff660();
                _objc_retainAutoreleasedReturnValue();
                ppppuVar17 = ppppuVar2;
                func_0x00010bf529e0();
                _objc_release(ppppuVar2);
                if (ppppuVar17 != (undefined8 ****)0x0) {
                  unaff_x22 = (undefined **)0x0;
                  pppuStack_598 = unaff_x23;
                  do {
                    ppppuVar2 = unaff_x23;
                    func_0x00010c0ff660();
                    _objc_retainAutoreleasedReturnValue();
                    ppppuVar18 = ppppuVar2;
                    ppppuVar17 = (undefined8 ****)unaff_x22;
                    pppuStack_588 = (undefined8 ***)unaff_x22;
                    func_0x00010c296de0();
                    _objc_release(ppppuVar2);
                    if ((int)ppppuVar18 == 0) {
LAB_106f2e8b4:
                      _objc_release(pppuStack_5d0);
                      _objc_release(ppppuVar21);
                      _objc_release(ppppuVar16);
                      ppppuVar18 = (undefined8 ****)0x0;
                      ppppuVar7 = (undefined8 ****)pppuStack_5a0;
                      ppppuVar2 = (undefined8 ****)pppuStack_5e8;
                      goto LAB_106f2e8d8;
                    }
                    uStack_498 = 0;
                    uStack_4a0 = 0;
                    uStack_488 = 0;
                    uStack_490 = 0;
                    lStack_4b8 = 0;
                    ppuStack_4c0 = (undefined8 ***)0x0;
                    uStack_4a8 = 0;
                    plStack_4b0 = (long *)0x0;
                    _objc_retain(ppppuVar23);
                    ppppuVar17 = (undefined8 ****)&ppuStack_4c0;
                    ppppuVar2 = ppppuVar23;
                    func_0x00010bf52a60();
                    if (ppppuVar2 == (undefined8 ****)0x0) {
                      _objc_release(ppppuVar23);
                      goto LAB_106f2e8b4;
                    }
                    ppppuVar20 = (undefined8 ****)0x0;
                    lVar15 = *plStack_4b0;
                    do {
                      ppppuVar17 = (undefined8 ****)0x0;
                      do {
                        if (*plStack_4b0 != lVar15) {
                          _objc_enumerationMutation(ppppuVar23);
                        }
                        unaff_x22 = *(undefined ***)(lStack_4b8 + (long)ppppuVar17 * 8);
                        ppppuVar6 = (undefined8 ****)unaff_x22;
                        func_0x00010c0ff5c0();
                        if ((int)ppppuVar6 == (int)ppppuVar18) {
                          _objc_retain(unaff_x22);
                          _objc_release(ppppuVar20);
                          ppppuVar20 = (undefined8 ****)unaff_x22;
                        }
                        ppppuVar17 = (undefined8 ****)((long)ppppuVar17 + 1);
                      } while (ppppuVar2 != ppppuVar17);
                      ppppuVar17 = (undefined8 ****)&ppuStack_4c0;
                      ppppuVar2 = ppppuVar23;
                      func_0x00010bf52a60();
                    } while (ppppuVar2 != (undefined8 ****)0x0);
                    _objc_release(ppppuVar23);
                    ppppuVar6 = (undefined8 ****)pppuStack_590;
                    unaff_x23 = (undefined8 ****)pppuStack_598;
                    if (ppppuVar20 == (undefined8 ****)0x0) goto LAB_106f2e8b4;
                    ppppuVar2 = ppppuVar20;
                    func_0x00010c08c3a0();
                    if ((int)ppppuVar2 == 1) {
                      ppppuVar2 = ppppuVar20;
                      func_0x00010c0c3fe0();
                      _objc_retainAutoreleasedReturnValue();
                      ppppuVar17 = ppppuVar2;
                      func_0x00010bf0b760();
                      _objc_release(ppppuVar2);
                      if ((int)ppppuVar17 == 5) {
                        puVar3 = PTR_PTR_1126d3440;
                        _objc_opt_new();
                        func_0x00010c1c4c00();
                        ppppuVar2 = ppppuVar20;
                        func_0x00010c0c3fe0(ppppuVar20);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c27dd80();
                        func_0x00010c1c5440(puVar3);
                        _objc_release(ppppuVar2);
                        puVar5 = puVar3;
                        func_0x00010c0c6c20();
                        if ((int)puVar5 == 1) {
                          ppppuVar2 = ppppuVar20;
                          func_0x00010c0c3fe0(ppppuVar20);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c0c4bc0();
                          func_0x00010c2215c0(puVar3);
                          _objc_release(ppppuVar2);
                        }
                        func_0x00010c067ec0(uVar25);
                        func_0x00010c218fc0(puVar3);
                        ppppuVar2 = unaff_x23;
                        func_0x00010bfdda80();
                        if ((int)ppppuVar2 != 0) {
                          ppppuVar2 = unaff_x23;
                          func_0x00010c2667a0(unaff_x23);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c26f280();
                          _CMTimeMake(&uStack_540);
                          ppppuVar17 = unaff_x23;
                          func_0x00010c27c540(unaff_x23);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bf8b160();
                          _CMTimeMake(auStack_508);
                          _CMTimeRangeMake(&uStack_4f0,&uStack_540,auStack_508);
                          uStack_538 = uStack_4e8;
                          uStack_540 = uStack_4f0;
                          uStack_528 = uStack_4d8;
                          uStack_530 = uStack_4e0;
                          uStack_518 = uStack_4c8;
                          uStack_520 = uStack_4d0;
                          func_0x00010c214ec0(puVar3);
                          _objc_release(ppppuVar17);
                          _objc_release(ppppuVar2);
                        }
                        func_0x00010befa120(pppuStack_5a0);
                        _objc_release(puVar3);
                      }
                    }
                    _objc_release(ppppuVar20);
                    unaff_x22 = (undefined **)((long)pppuStack_588 + 1);
                    ppppuVar2 = unaff_x23;
                    func_0x00010c0ff660();
                    _objc_retainAutoreleasedReturnValue();
                    ppppuVar17 = ppppuVar2;
                    func_0x00010bf529e0();
                    _objc_release(ppppuVar2);
                  } while (unaff_x22 < ppppuVar17);
                }
                ppppuVar2 = (undefined8 ****)pppuStack_5d0;
                ppppuVar17 = (undefined8 ****)((long)pppuStack_5c8 + 1);
              } while (ppppuVar17 != (undefined8 ****)pppuStack_5e0);
              ppppuVar17 = (undefined8 ****)pppuStack_5d0;
              func_0x00010bf52a60();
              pppuStack_5e0 = ppppuVar17;
            } while (ppppuVar17 != (undefined8 ****)0x0);
          }
          _objc_release(ppppuVar2);
          _objc_release(ppppuVar21);
          ppppuVar2 = (undefined8 ****)pppuStack_5e8;
          lVar15 = lStack_600;
          ppppuVar17 = (undefined8 ****)((long)pppuStack_5f0 + 1);
        } while (ppppuVar17 != (undefined8 ****)pppuStack_5f8);
        ppppuVar17 = (undefined8 ****)&ppuStack_400;
        ppppuVar21 = ppppuVar16;
        func_0x00010bf52a60();
      } while (ppppuVar21 != (undefined8 ****)0x0);
    }
    _objc_release(ppppuVar16);
    ppppuVar18 = (undefined8 ****)pppuStack_5a0;
    _objc_retain(pppuStack_5a0);
    ppppuVar7 = ppppuVar18;
LAB_106f2e8d8:
    _objc_release(ppppuVar23);
    _objc_release(ppppuVar7);
    ppppuVar23 = (undefined8 ****)pppuStack_5c0;
    param_3 = (undefined8 ****)pppuStack_5b8;
LAB_106f2e8ec:
    _objc_release(ppppuVar6);
    ppppuVar20 = ppppuVar7;
    ppppuVar21 = (undefined8 ****)pppuStack_5b0;
    ppppuVar6 = ppppuVar16;
  }
  ppppuVar7 = ppppuVar20;
  _objc_release(ppppuVar6);
LAB_106f2e904:
  _objc_release(pppuStack_5a8);
  _objc_release(ppppuVar21);
  _objc_release(ppppuVar2);
  _objc_release(ppppuVar23);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_608 = FUN_106f2e97c;
    lStack_670 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuStack_660 = ppppuVar2;
    pppuStack_658 = param_3;
    pppuStack_650 = ppppuVar6;
    pppuStack_648 = ppppuVar23;
    pppuStack_640 = ppppuVar16;
    pppuStack_638 = unaff_x23;
    pppuStack_630 = (undefined8 ***)unaff_x22;
    pppuStack_628 = ppppuVar21;
    pppuStack_620 = ppppuVar18;
    pppuStack_618 = ppppuVar7;
    puStack_610 = &stack0xfffffffffffffff0;
    _objc_retain(ppppuVar17);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_828 = 0;
    uStack_830 = 0;
    uStack_818 = 0;
    plStack_820 = (long *)0x0;
    uStack_808 = 0;
    uStack_810 = 0;
    uStack_7f8 = 0;
    uStack_800 = 0;
    ppppuVar16 = ppppuVar17;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar2 = ppppuVar16;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppuVar16);
    ppppuVar16 = ppppuVar2;
    func_0x00010bf52a60();
    if (ppppuVar16 != (undefined8 ****)0x0) {
      lVar15 = *plStack_820;
      do {
        ppppuVar23 = (undefined8 ****)0x0;
        do {
          if (*plStack_820 != lVar15) {
            _objc_enumerationMutation(ppppuVar2);
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0ff5c0(*(undefined8 *)(lStack_828 + (long)ppppuVar23 * 8));
          func_0x00010c0df820(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(puVar5);
          ppppuVar23 = (undefined8 ****)((long)ppppuVar23 + 1);
        } while (ppppuVar16 != ppppuVar23);
        ppppuVar16 = ppppuVar2;
        func_0x00010bf52a60();
      } while (ppppuVar16 != (undefined8 ****)0x0);
    }
    _objc_release(ppppuVar2);
    ppppuVar18 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_868 = 0;
    uStack_870 = 0;
    uStack_858 = 0;
    plStack_860 = (long *)0x0;
    uStack_848 = 0;
    uStack_850 = 0;
    uStack_838 = 0;
    uStack_840 = 0;
    ppppuVar16 = ppppuVar17;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar2 = ppppuVar16;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar23 = ppppuVar2;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar21 = ppppuVar23;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppuVar23);
    _objc_release(ppppuVar2);
    _objc_release(ppppuVar16);
    puVar13 = &uStack_870;
    puVar14 = auStack_770;
    pppuStack_8d8 = ppppuVar21;
    func_0x00010bf52a60();
    if ((undefined8 ****)pppuStack_8d8 != (undefined8 ****)0x0) {
      lVar15 = *plStack_860;
      do {
        ppppuVar16 = (undefined8 ****)0x0;
        do {
          if (*plStack_860 != lVar15) {
            _objc_enumerationMutation(ppppuVar21);
          }
          lVar19 = *(long *)(lStack_868 + (long)ppppuVar16 * 8);
          lVar8 = lVar19;
          func_0x00010c2787a0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (lVar9 != 0) {
            lVar22 = 0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar8);
              }
              uVar24 = *(ulong *)(lVar22 * 8);
              uVar26 = uVar24;
              func_0x00010c0ff680();
              if (uVar26 != 0) {
                uVar26 = 0;
                do {
                  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  uVar10 = uVar24;
                  func_0x00010c0ff660();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c296de0();
                  func_0x00010c0df820();
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = puVar3;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar5);
                  _objc_release(uVar10);
                  puVar5 = puVar11;
                  func_0x00010c08c3a0();
                  if ((int)puVar5 == 1) {
                    puVar5 = puVar11;
                    func_0x00010c0c3fe0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar12 = puVar5;
                    func_0x00010bf0b760();
                    _objc_release(puVar5);
                    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    if ((int)puVar12 == 6) {
                      func_0x00010c277f00(lVar19);
                      func_0x00010c0df820();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(ppppuVar18);
                      _objc_release(puVar5);
                    }
                  }
                  _objc_release(puVar11);
                  uVar26 = uVar26 + 1;
                  uVar10 = uVar24;
                  func_0x00010c0ff680();
                } while (uVar26 < uVar10);
              }
              lVar22 = lVar22 + 1;
            } while (lVar22 != lVar9);
            lVar9 = lVar8;
            func_0x00010bf52a60();
          }
          _objc_release(lVar8);
          ppppuVar16 = (undefined8 ****)((long)ppppuVar16 + 1);
        } while (ppppuVar16 != (undefined8 ****)pppuStack_8d8);
        puVar13 = &uStack_870;
        puVar14 = auStack_770;
        pppuStack_8d8 = ppppuVar21;
        func_0x00010bf52a60();
      } while ((undefined8 ****)pppuStack_8d8 != (undefined8 ****)0x0);
    }
    _objc_release(ppppuVar21);
    _objc_release(puVar3);
    _objc_release(ppppuVar17);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_670) {
      ___stack_chk_fail();
      _objc_retain(puVar13);
      _objc_retain(puVar14);
      puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
      func_0x00010bf69700(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f5fe0(0x3ff0000000000000);
      func_0x00010c1d4c20(puVar3);
      func_0x00010c1e0260(puVar3);
      ppppuVar16 = (undefined8 ****)PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
      _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
      func_0x00010c23d0a0(puVar14);
      func_0x00010c046ac0(ppppuVar16);
      _objc_retain(puVar13);
      _objc_retain(puVar14);
      ppppuVar18 = ppppuVar16;
      func_0x00010bfe91c0(ppppuVar16);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar14);
      _objc_release(ppppuVar16);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppuVar18);
  return;
}



/* Entry: 106f2e97c; end: 106f2edaf; +[SCSnapRendererPluginEffectRenderUtils overlayPlaybackLayersForRender:] */

void FUN_106f2e97c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_360;
  undefined8 uStack_358;
  code *pcStack_350;
  undefined *puStack_348;
  undefined1 *puStack_340;
  undefined8 *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined1 *puStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  long lStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  long lStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  puVar2 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bf52a60(puVar3,param_2,&uStack_230,auStack_f0,0x10);
  if (puVar2 != (undefined *)0x0) {
    lVar11 = *plStack_220;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_220 != lVar11) {
          _objc_enumerationMutation(puVar3);
        }
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar10 = *(undefined8 *)(lStack_228 + (long)puVar13 * 8);
        uVar4 = uVar10;
        func_0x00010c0ff5c0(uVar10);
        func_0x00010c0df820(puVar5,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1,param_2,uVar10,puVar5);
        _objc_release(puVar5);
        puVar13 = puVar13 + 1;
      } while (puVar2 != puVar13);
      puVar2 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_230,auStack_f0,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  puStack_2f0 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar13;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar2);
  _objc_release(param_3);
  puVar8 = &uStack_270;
  puVar9 = auStack_170;
  puVar12 = puVar5;
  puStack_2e8 = puVar5;
  func_0x00010bf52a60();
  puStack_2d8 = puVar12;
  if (puVar12 != (undefined *)0x0) {
    lStack_2e0 = *plStack_260;
    do {
      param_3 = (undefined *)0x0;
      do {
        if (*plStack_260 != lStack_2e0) {
          _objc_enumerationMutation(puStack_2e8);
        }
        puVar13 = *(undefined **)(lStack_268 + (long)param_3 * 8);
        lStack_2a8 = 0;
        uStack_2b0 = 0;
        uStack_298 = 0;
        plStack_2a0 = (long *)0x0;
        uStack_288 = 0;
        uStack_290 = 0;
        uStack_278 = 0;
        uStack_280 = 0;
        puVar12 = puVar13;
        puStack_2d0 = param_3;
        func_0x00010c2787a0();
        _objc_retainAutoreleasedReturnValue();
        puStack_2c8 = puVar12;
        func_0x00010bf52a60();
        puStack_2b8 = puVar12;
        if (puVar12 != (undefined *)0x0) {
          lStack_2c0 = *plStack_2a0;
          do {
            puVar12 = (undefined *)0x0;
            do {
              if (*plStack_2a0 != lStack_2c0) {
                _objc_enumerationMutation(puStack_2c8);
              }
              puVar14 = *(undefined **)(lStack_2a8 + (long)puVar12 * 8);
              puVar15 = puVar14;
              func_0x00010c0ff680();
              if (puVar15 != (undefined *)0x0) {
                puVar15 = (undefined *)0x0;
                do {
                  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  puVar5 = puVar14;
                  func_0x00010c0ff660();
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = puVar5;
                  func_0x00010c296de0();
                  func_0x00010c0df820(puVar2,param_2,puVar6);
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = puVar1;
                  func_0x00010c0e00e0(puVar1,param_2,puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar2);
                  _objc_release(puVar5);
                  puVar7 = puVar6;
                  func_0x00010c08c3a0();
                  if ((int)puVar7 == 1) {
                    puVar5 = puVar6;
                    func_0x00010c0c3fe0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar2 = puVar5;
                    func_0x00010bf0b760();
                    _objc_release(puVar5);
                    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    if ((int)puVar2 == 6) {
                      puVar5 = puVar13;
                      func_0x00010c277f00(puVar13);
                      func_0x00010c0df820(puVar7,param_2,puVar5);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(puVar3,param_2,puVar6,puVar7);
                      _objc_release(puVar7);
                      puVar5 = puVar7;
                    }
                  }
                  _objc_release(puVar6);
                  puVar15 = puVar15 + 1;
                  puVar6 = puVar14;
                  func_0x00010c0ff680();
                } while (puVar15 < puVar6);
              }
              puVar12 = puVar12 + 1;
            } while (puVar12 != puStack_2b8);
            puVar12 = puStack_2c8;
            func_0x00010bf52a60(puStack_2c8,param_2,&uStack_2b0,auStack_1f0,0x10);
            puStack_2b8 = puVar12;
          } while (puVar12 != (undefined *)0x0);
        }
        _objc_release(puStack_2c8);
        param_3 = puStack_2d0 + 1;
      } while (param_3 != puStack_2d8);
      puVar8 = &uStack_270;
      puVar9 = auStack_170;
      puVar12 = puStack_2e8;
      func_0x00010bf52a60();
      puStack_2d8 = puVar12;
    } while (puVar12 != (undefined *)0x0);
  }
  _objc_release(puStack_2e8);
  _objc_release(puVar1);
  _objc_release(puStack_2f0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_2f8 = FUN_106f2edb0;
    puStack_330 = puVar13;
    puStack_328 = puVar2;
    puStack_320 = puVar5;
    puStack_318 = puVar3;
    puStack_310 = puVar1;
    puStack_308 = param_3;
    puStack_300 = &stack0xfffffffffffffff0;
    _objc_retain(puVar8);
    _objc_retain(puVar9);
    puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
    func_0x00010bf69700(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5fe0(0x3ff0000000000000);
    func_0x00010c1d4c20(puVar1,param_2,1);
    func_0x00010c1e0260(puVar1,param_2,2);
    puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x00010c23d0a0(puVar9);
    func_0x00010c046ac0(puVar2,param_2,puVar1);
    puStack_360 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_358 = 0xc2000000;
    pcStack_350 = FUN_106f2eee4;
    puStack_348 = &UNK_110983928;
    puStack_340 = puVar9;
    puStack_338 = puVar8;
    _objc_retain(puVar8);
    _objc_retain(puVar9);
    puVar3 = puVar2;
    func_0x00010bfe91c0(puVar2,param_2,&puStack_360);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_338);
    _objc_release(puStack_340);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f2edb0; end: 106f2eee3; +[SCSnapRendererPluginEffectRenderUtils drawOverlay:onBaseImage:] */

void FUN_106f2edb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
  func_0x00010bf69700(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5fe0(0x3ff0000000000000);
  func_0x00010c1d4c20(puVar1,param_2,1);
  func_0x00010c1e0260(puVar1,param_2,2);
  puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010c23d0a0(param_4);
  func_0x00010c046ac0(puVar2,param_2,puVar1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106f2eee4;
  puStack_58 = &UNK_110983928;
  uStack_50 = param_4;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = puVar2;
  func_0x00010bfe91c0(puVar2,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f2eee4; end: 106f2ef4b;  */

/* WARNING: Possible PIC construction at 0x000106f2ef24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106f2ef28) */

void FUN_106f2eee4(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,param_1,param_2,*(undefined8 *)(param_3 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 106f2ef4c; end: 106f2f0d3; +[SCSnapRendererPluginEffectRenderUtils overlayImageForLayer:snapDoc:snapDocManager:overlayFormatter:] */

void FUN_106f2ef4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106f2f0d4;
  puStack_68 = &UNK_110983958;
  puStack_60 = puVar1;
  uStack_58 = param_6;
  _objc_retain(param_6);
  _objc_retain(puVar1);
  func_0x00010c13eb40(param_5,param_2,uVar3,param_4,puVar4,&puStack_80);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_58);
  _objc_release(puStack_60);
  _objc_release(param_6);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f2f0d4; end: 106f2f1bf;  */

void FUN_106f2f0d4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0ef880(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    uVar4 = uVar3;
    func_0x00010c1511c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(0);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106f2f1c0; end: 106f2f3cf; +[SCSnapRendererPluginEffectRenderUtils mediaSizeOfSingleVideoSnapDoc:error:] */

/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
FUN_106f2f1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  double *pdVar15;
  ulong uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b0;
  double dStack_1a8;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  puVar14 = &uStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar17 = auStack_f8;
  pdVar15 = (double *)0x10;
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar19 = *plStack_130;
    do {
      lVar20 = 0;
      do {
        if (*plStack_130 != lVar19) {
          _objc_enumerationMutation(lVar3);
        }
        uVar16 = *(ulong *)(lStack_138 + lVar20 * 8);
        uVar5 = uVar16;
        func_0x00010c08c3a0();
        if ((int)uVar5 == 1) {
          uVar5 = uVar16;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c27dd80();
          _objc_release(uVar5);
          if ((int)uVar6 == 1) {
            uVar5 = uVar16;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010bf7ee20();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010c2a5040();
            dVar21 = (double)(uVar7 & 0xffffffff);
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar16;
            func_0x00010bf7ee20();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010bfe0640();
            dVar22 = (double)(uVar8 & 0xffffffff);
            _objc_release(uVar7);
            _objc_release(uVar16);
            _objc_release(uVar6);
            _objc_release(uVar5);
            _objc_release(lVar3);
            goto LAB_106f2f388;
          }
        }
        lVar20 = lVar20 + 1;
      } while (lVar4 != lVar20);
      puVar17 = auStack_f8;
      pdVar15 = (double *)0x10;
      lVar4 = lVar3;
      puVar14 = &uStack_140;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  puVar14 = (undefined8 *)0x4;
  FUN_106f2c334(param_6,&PTR____CFConstantStringClassReference_110e8e498,4);
  dVar21 = *(double *)PTR__CGSizeZero_110347620;
  dVar22 = *(double *)(PTR__CGSizeZero_110347620 + 8);
LAB_106f2f388:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    auVar23._8_8_ = dVar22;
    auVar23._0_8_ = dVar21;
    return auVar23;
  }
  ___stack_chk_fail();
  dStack_1b0 = dVar22;
  dStack_1a8 = dVar21;
  _objc_retain(puVar14);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dStack_1c8 = pdVar15[4];
  dVar21 = pdVar15[3];
  dStack_1c0 = pdVar15[5];
  dStack_1d0 = dVar21;
  _CMTimeGetSeconds(&dStack_1d0);
  puVar18 = (undefined1 *)(long)(dVar21 * 1000.0);
  dStack_1c8 = pdVar15[1];
  dVar21 = *pdVar15;
  dStack_1c0 = pdVar15[2];
  dStack_1d0 = dVar21;
  _CMTimeGetSeconds(&dStack_1d0);
  puVar1 = puVar18;
  if (puVar17 != (undefined1 *)0x0) {
    puVar1 = puVar17;
  }
  if (0 < (long)puVar18) {
    puVar17 = (undefined1 *)(long)(dVar21 * 1000.0);
    do {
      _CMTimeMake(&dStack_1d0,puVar1,1000);
      puVar2 = puVar18 + -(long)puVar1;
      if (puVar18 < puVar1) {
        _CMTimeMake(&dStack_1e8,puVar18,1000);
        dStack_1c8 = dStack_1e0;
        dStack_1d0 = dStack_1e8;
        dStack_1c0 = dStack_1d8;
      }
      _CMTimeMake(&dStack_1e8,puVar17,1000);
      puVar10 = PTR_PTR_1126bf6a0;
      _objc_alloc(PTR_PTR_1126bf6a0);
      puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      dVar21 = 1.0;
      func_0x00010b7425e0(0x3ff0000000000000,puVar10,puVar14,1,puVar11,puVar12,puVar13,0,0,0);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      func_0x00010befa120(puVar9);
      puVar17 = puVar17 + (long)puVar1;
      _objc_release(puVar10);
      puVar18 = puVar2;
    } while (0 < (long)puVar2);
  }
  _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  auVar24._8_8_ = param_2;
  auVar24._0_8_ = dVar21;
  return auVar24;
}



/* Entry: 106f2f3d0; end: 106f2f5f7; +[SCSnapRendererPluginEffectRenderUtils trackSegmentsForLoopingMedia:mediaDurationMs:outputTimeRange:] */

void FUN_106f2f3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  double *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  double dVar10;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dStack_88 = param_5[4];
  dVar10 = param_5[3];
  dStack_80 = param_5[5];
  dStack_90 = dVar10;
  _CMTimeGetSeconds(&dStack_90);
  uVar9 = (ulong)(dVar10 * 1000.0);
  dStack_88 = param_5[1];
  dVar10 = *param_5;
  dStack_80 = param_5[2];
  dStack_90 = dVar10;
  _CMTimeGetSeconds(&dStack_90);
  uVar1 = uVar9;
  if (param_4 != 0) {
    uVar1 = param_4;
  }
  if (0 < (long)uVar9) {
    lVar8 = (long)(dVar10 * 1000.0);
    do {
      _CMTimeMake(&dStack_90,uVar1,1000);
      uVar2 = uVar9 - uVar1;
      if (uVar9 < uVar1) {
        _CMTimeMake(&dStack_a8,uVar9,1000);
        dStack_88 = dStack_a0;
        dStack_90 = dStack_a8;
        dStack_80 = dStack_98;
      }
      _CMTimeMake(&dStack_a8,lVar8,1000);
      puVar4 = PTR_PTR_1126bf6a0;
      _objc_alloc(PTR_PTR_1126bf6a0);
      puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b7425e0(0x3ff0000000000000,puVar4,param_3,1,puVar5,puVar6,puVar7,0,0,0);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      func_0x00010befa120(puVar3);
      lVar8 = lVar8 + uVar1;
      _objc_release(puVar4);
      uVar9 = uVar2;
    } while (0 < (long)uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f2f5f8; end: 106f2f93b; +[SCSnapRendererPluginEffectRenderUtils urlForVideoContentResult:temporaryFileWriterServices:snapRendererLogger:error:] */

void FUN_106f2f5f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_5;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110db77b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar3 = param_4;
  func_0x00010c26b280(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfacf60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300(puVar6,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar1 = param_3;
  func_0x00010bfc5880();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c08fa60();
  if (lVar7 == 0) {
    lVar7 = param_3;
    func_0x00010b7f5374();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c26b280(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c0899c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bda40(uVar4,param_2,lVar7,puVar8,3,param_6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
    uVar3 = param_4;
    func_0x00010c26b280(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c0899c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfacf60(uVar4,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad300(puVar8,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(puVar9);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c23bf40(param_5,param_2,1);
    _objc_release(param_5);
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf0e880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad040();
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c0f5800(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099740(puVar8,param_2,lVar1,puVar9,param_6);
    _objc_release(puVar9);
    _objc_release(puVar8);
    func_0x00010c23bf40(param_5,param_2,0);
    lVar7 = param_5;
    puVar8 = puVar6;
  }
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106f2f93c; end: 106f2fb3f; +[SCSnapRendererPluginEffectRenderUtils _snapDocHas1080pMedia:] */

long FUN_106f2f93c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010bfda540();
  if ((int)lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar7 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar7;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar2 = lVar1;
    func_0x00010bf52a60(lVar1,param_2,&uStack_130);
    lVar7 = 0;
    if (lVar2 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(lVar1);
          }
          uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          uVar3 = uVar6;
          func_0x00010c08c3a0();
          if ((int)uVar3 == 1) {
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar6;
            func_0x00010c27dd80();
            if ((((int)uVar3 == 1) || (uVar3 = uVar6, func_0x00010c27dd80(), (int)uVar3 == 0)) &&
               (uVar3 = uVar6, func_0x00010bfd6500(), (int)uVar3 != 0)) {
              uVar3 = uVar6;
              func_0x00010bf7ee20();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              func_0x00010c2a5040();
              if ((uint)uVar4 < 0x2d1) {
                uVar4 = uVar6;
                func_0x00010bf7ee20();
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar4;
                func_0x00010bfe0640();
                _objc_release(uVar4);
                _objc_release(uVar3);
                if ((uint)uVar5 < 0x501) goto LAB_106f2faa0;
              }
              else {
                _objc_release(uVar3);
              }
              _objc_release(uVar6);
              lVar7 = 1;
              goto LAB_106f2faf0;
            }
LAB_106f2faa0:
            _objc_release(uVar6);
          }
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        lVar2 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_130);
      } while (lVar2 != 0);
      lVar7 = 0;
    }
LAB_106f2faf0:
    _objc_release(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x00010bebc9e0();
    return param_3;
  }
  return lVar7;
}



/* Entry: 106f2fb40; end: 106f2fbb3; +[SCSnapRendererPluginEffectRenderUtils determineOutputResolutionForVideo:destination:useInputBasedResolution:userInitiatedDestinationWidth:userInitiatedDestinationHeight:] */

undefined1  [16]
FUN_106f2fb40(uint param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5,
             int param_6,int param_7)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  func_0x00010bebc9e0();
  bVar2 = (param_5 & param_1) == 0;
  dVar4 = 1920.0;
  if (bVar2) {
    dVar4 = 1280.0;
  }
  dVar3 = 1080.0;
  if (bVar2) {
    dVar3 = 720.0;
  }
  dVar5 = (double)param_7;
  dVar1 = (double)param_6;
  if (param_4 != 6) {
    dVar5 = dVar4;
    dVar1 = dVar3;
  }
  auVar6._8_8_ = dVar5;
  auVar6._0_8_ = dVar1;
  return auVar6;
}



/* Entry: 106f2fbb4; end: 106f2fc8b; +[SCSnapRendererPluginEffectRenderUtils bgraPixelBufferContainsTransparency:] */

bool FUN_106f2fbb4(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  
  if ((param_3 != 0) &&
     (lVar2 = param_3, _CVPixelBufferGetPixelFormatType(), (int)lVar2 == 0x42475241)) {
    lVar2 = param_3;
    _CVPixelBufferGetWidth();
    lVar3 = param_3;
    _CVPixelBufferGetHeight();
    if (lVar2 == 0) {
      return false;
    }
    if (lVar3 == 0) {
      return false;
    }
    lVar6 = param_3;
    _CVPixelBufferLockBaseAddress(param_3,1);
    if ((int)lVar6 == 0) {
      lVar4 = param_3;
      _CVPixelBufferGetBaseAddress();
      lVar5 = param_3;
      _CVPixelBufferGetBytesPerRow();
      lVar6 = 0;
      pcVar8 = (char *)(lVar4 + 3);
      lVar4 = lVar2;
      pcVar7 = pcVar8;
      do {
        do {
          cVar1 = *pcVar8;
          if (cVar1 != -1) goto LAB_106f2fc7c;
          lVar4 = lVar4 + -1;
          pcVar8 = pcVar8 + 4;
        } while (lVar4 != 0);
        lVar6 = lVar6 + 1;
        pcVar8 = pcVar7 + lVar5;
        lVar4 = lVar2;
        pcVar7 = pcVar8;
      } while (lVar6 != lVar3);
LAB_106f2fc7c:
      _CVPixelBufferUnlockBaseAddress(param_3,1);
      return cVar1 != -1;
    }
  }
  return false;
}



/* Entry: 106f2fc8c; end: 106f2fdd7; -[SCSnapRendererResponseImpl initWithTranscodingRenderer:] */

undefined1 * FUN_106f2fc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7da8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
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
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1a59e0(puVar1);
    func_0x00010c1a5a00(puVar1);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f2fdd8; end: 106f2fe07; -[SCSnapRendererResponseImpl setPerformer:] */

void FUN_106f2fdd8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f2fe08; end: 106f2fe97; -[SCSnapRendererResponseImpl completeWithSnapDocEditor:] */

void FUN_106f2fe08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106f2fe98;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f2fe98; end: 106f2ff13;  */

/* WARNING: Possible PIC construction at 0x000106f2fefc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106f2ff00) */

void FUN_106f2fe98(long param_1)

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
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = 0;
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



/* Entry: 106f2ff14; end: 106f2ffa3; -[SCSnapRendererResponseImpl completeWithError:] */

void FUN_106f2ff14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106f2ffa4;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f2ffa4; end: 106f3001f;  */

/* WARNING: Possible PIC construction at 0x000106f30008: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106f3000c) */

void FUN_106f2ffa4(long param_1)

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
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = 0;
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



/* Entry: 106f30020; end: 106f300af; -[SCSnapRendererResponseImpl setCancelCallbackBlock:] */

void FUN_106f30020(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106f300b0;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f300b0; end: 106f300e3;  */

void FUN_106f300b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106f300e4; end: 106f30153; -[SCSnapRendererResponseImpl updateProgress:] */

void FUN_106f300e4(undefined8 param_1,ulong param_2,undefined8 param_3)

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



/* Entry: 106f30154; end: 106f3019b; -[SCSnapRendererResponseImpl updateTranscodeStatus:] */

void FUN_106f30154(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (uVar1 = param_1, func_0x00010c06e0e0(), (uVar1 & 1) == 0)) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f3019c; end: 106f301a3; -[SCSnapRendererResponseImpl resultFuture] */

void FUN_106f3019c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 106f301a4; end: 106f301cb; -[SCSnapRendererResponseImpl progressObservable] */

void FUN_106f301a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f301cc; end: 106f301f3; -[SCSnapRendererResponseImpl transcodeStatusObservable] */

void FUN_106f301cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f301f4; end: 106f301f7; -[SCSnapRendererResponseImpl isCancelled] */

void FUN_106f301f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd4990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hasBeenCancelled_1125d2c08);
  return;
}



/* Entry: 106f301f8; end: 106f3024f; -[SCSnapRendererResponseImpl cancel] */

void FUN_106f301f8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106f30250;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_38);
  return;
}



/* Entry: 106f30250; end: 106f3032b;  */

void FUN_106f30250(long param_1,undefined8 param_2)

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
      if (*(long *)(lVar4 + 0x28) != 0) {
        (**(code **)(*(long *)(lVar4 + 0x28) + 0x10))();
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
        *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
        _objc_release(uVar2);
        lVar4 = *(long *)(param_1 + 0x20);
      }
      uVar2 = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 *)(lVar4 + 0x20) = 0;
      _objc_release(uVar2);
      func_0x00010bf436e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
      func_0x00010bf436e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
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



/* Entry: 106f3032c; end: 106f30337; -[SCSnapRendererResponseImpl hasBeenCompleted] */

byte FUN_106f3032c(long param_1)

{
  return *(byte *)(param_1 + 0x38) & 1;
}



/* Entry: 106f30338; end: 106f3033f; -[SCSnapRendererResponseImpl setHasBeenCompleted:] */

void FUN_106f30338(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 106f30340; end: 106f3034b; -[SCSnapRendererResponseImpl hasBeenCancelled] */

byte FUN_106f30340(long param_1)

{
  return *(byte *)(param_1 + 0x39) & 1;
}



/* Entry: 106f3034c; end: 106f30353; -[SCSnapRendererResponseImpl setHasBeenCancelled:] */

void FUN_106f3034c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x39) = param_3;
  return;
}



/* Entry: 106f30354; end: 106f303b3; -[SCSnapRendererResponseImpl .cxx_destruct] */

void FUN_106f30354(long param_1)

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



/* Entry: 106f303b4; end: 106f30a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f303b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
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
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  undefined *puVar56;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar56 = (undefined *)0x0;
  }
  else {
    puVar56 = PTR_PTR_1126d3448;
    _objc_alloc();
    lVar2 = lVar1 + _DAT_112761488;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c2402c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1 + _DAT_112761494;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    lVar8 = lVar1 + _DAT_11276148c;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010bf9f4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1 + _DAT_112761498;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010c29ba80();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar1 + _DAT_112761480;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1 + _DAT_11276149c;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010c1104a0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar1 + _DAT_1127614a8;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010bf0f880();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar1 + _DAT_1127614ac;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010c0c57a0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar1 + _DAT_1127614b0;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010c277b00();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar1 + _DAT_1127614b8;
    _objc_loadWeakRetained();
    lVar23 = lVar22;
    func_0x00010c0c57a0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar1 + _DAT_1127614bc;
    _objc_loadWeakRetained();
    lVar25 = lVar24;
    func_0x00010bef1320();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar1 + _DAT_1127614c4;
    _objc_loadWeakRetained();
    lVar27 = lVar26;
    func_0x00010bf69900();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = lVar1 + _DAT_1127614b4;
    _objc_loadWeakRetained();
    lVar29 = lVar1 + _DAT_1127614a4;
    _objc_loadWeakRetained();
    lVar30 = lVar29;
    func_0x00010c26a1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = lVar1 + _DAT_1127614c8;
    _objc_loadWeakRetained();
    lVar32 = lVar31;
    func_0x00010bf2fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = lVar1 + _DAT_1127614cc;
    _objc_loadWeakRetained();
    lVar34 = lVar1 + _DAT_1127614c0;
    _objc_loadWeakRetained();
    lVar35 = lVar34;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar36 = lVar35;
    func_0x00010bf7f840();
    _objc_retainAutoreleasedReturnValue();
    lVar37 = lVar1 + _DAT_1127614d4;
    _objc_loadWeakRetained();
    lVar38 = lVar37;
    func_0x00010c279ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar39 = lVar1 + _DAT_1127614a0;
    _objc_loadWeakRetained();
    lVar40 = lVar1 + _DAT_1127614d8;
    _objc_loadWeakRetained();
    lVar41 = lVar1 + _DAT_1127614dc;
    _objc_loadWeakRetained();
    lVar42 = lVar1 + _DAT_1127614e0;
    _objc_loadWeakRetained();
    lVar43 = lVar42;
    func_0x00010c0da300();
    _objc_retainAutoreleasedReturnValue();
    lVar44 = lVar1 + _DAT_1127614d0;
    _objc_loadWeakRetained();
    lVar45 = lVar1 + _DAT_1127614e4;
    _objc_loadWeakRetained();
    lVar46 = lVar1 + _DAT_112761490;
    _objc_loadWeakRetained();
    lVar47 = lVar46;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar48 = lVar1;
    func_0x00010bf5d880();
    _objc_retainAutoreleasedReturnValue();
    lVar49 = lVar48;
    func_0x00010c084e20();
    _objc_retainAutoreleasedReturnValue();
    lVar50 = lVar1 + _DAT_1127614ec;
    _objc_loadWeakRetained();
    lVar51 = lVar1 + _DAT_112761484;
    _objc_loadWeakRetained();
    lVar52 = lVar51;
    func_0x00010bf07a00();
    _objc_retainAutoreleasedReturnValue();
    lVar53 = lVar1 + _DAT_1127614f0;
    _objc_loadWeakRetained();
    lVar54 = lVar53;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar55 = lVar1 + _DAT_1127614f4;
    _objc_loadWeakRetained();
    func_0x00010c0477c0(puVar56,param_2,lVar4,lVar6,puVar7,lVar9,lVar11,lVar13,lVar15,lVar17,lVar19,
                        lVar21,lVar23,lVar25,lVar27,lVar28,lVar30,lVar32,lVar33,lVar36,lVar38,lVar39
                        ,lVar40,lVar41,lVar43,lVar44,lVar45,lVar47,lVar49,lVar50,lVar52,lVar54,
                        lVar55,*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar55);
    _objc_release(lVar54);
    _objc_release(lVar53);
    _objc_release(lVar52);
    _objc_release(lVar51);
    _objc_release(lVar50);
    _objc_release(lVar49);
    _objc_release(lVar48);
    _objc_release(lVar47);
    _objc_release(lVar46);
    _objc_release(lVar45);
    _objc_release(lVar44);
    _objc_release(lVar43);
    _objc_release(lVar42);
    _objc_release(lVar41);
    _objc_release(lVar40);
    _objc_release(lVar39);
    _objc_release(lVar38);
    _objc_release(lVar37);
    _objc_release(lVar36);
    _objc_release(lVar35);
    _objc_release(lVar34);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
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
    _objc_release(puVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar56);
  return;
}



/* Entry: 106f30a04; end: 106f30a23; -[SCSnapRendererServiceProvider ctpItemViewServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f30a04(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127614e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f30a24; end: 106f30a37; -[SCSnapRendererServiceProvider setCtpItemViewServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f30a24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127614e8,param_3);
  return;
}



/* Entry: 106f30a38; end: 106f30bbf; -[SCSnapRendererServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f30a38(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127614f4);
  _objc_destroyWeak(param_1 + _DAT_1127614f0);
  _objc_destroyWeak(param_1 + _DAT_1127614ec);
  _objc_destroyWeak(param_1 + _DAT_1127614e8);
  _objc_destroyWeak(param_1 + _DAT_1127614e4);
  _objc_destroyWeak(param_1 + _DAT_1127614e0);
  _objc_destroyWeak(param_1 + _DAT_1127614dc);
  _objc_destroyWeak(param_1 + _DAT_1127614d8);
  _objc_destroyWeak(param_1 + _DAT_1127614d4);
  _objc_destroyWeak(param_1 + _DAT_1127614d0);
  _objc_destroyWeak(param_1 + _DAT_1127614cc);
  _objc_destroyWeak(param_1 + _DAT_1127614c8);
  _objc_destroyWeak(param_1 + _DAT_1127614c4);
  _objc_destroyWeak(param_1 + _DAT_1127614c0);
  _objc_destroyWeak(param_1 + _DAT_1127614bc);
  _objc_destroyWeak(param_1 + _DAT_1127614b8);
  _objc_destroyWeak(param_1 + _DAT_1127614b4);
  _objc_destroyWeak(param_1 + _DAT_1127614b0);
  _objc_destroyWeak(param_1 + _DAT_1127614ac);
  _objc_destroyWeak(param_1 + _DAT_1127614a8);
  _objc_destroyWeak(param_1 + _DAT_1127614a4);
  _objc_destroyWeak(param_1 + _DAT_1127614a0);
  _objc_destroyWeak(param_1 + _DAT_11276149c);
  _objc_destroyWeak(param_1 + _DAT_112761498);
  _objc_destroyWeak(param_1 + _DAT_112761494);
  _objc_destroyWeak(param_1 + _DAT_112761490);
  _objc_destroyWeak(param_1 + _DAT_11276148c);
  _objc_destroyWeak(param_1 + _DAT_112761488);
  _objc_destroyWeak(param_1 + _DAT_112761484);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112761480);
  return;
}



/* Entry: 106f30bc0; end: 106f311db; -[SCSnapRendererTranscodingFactory initWithSnapDocManager:circumstanceEngine:timeProvider:snapDocEditorFactory:lazyVideoTranscoder:userSession:previewAssetVideoProviderFactory:audioProcessingSessionFactory:musicMediaLoader:musicTrackAudioDataLoader:voiceoverMediaLoader:activeVideoPaths:imageCommandProvider:previewCameraSourceOverlayService:targetTrajectoryFactory:captionDataProvider:creativeToolsMemoriesResources:directorModeVideoOptimizationConfig:memoriesBackupTranscoder:snapVideoFilterServices:snapDocOverlayImageGenerationServices:overlayFormatServices:ngsmeSnapDocResolver:snapDocConverterServices:watermarkServices:ctpItemViewService:temporaryFileWriterServices:performer:videoUrlCache:] */

undefined8 *
FUN_106f30bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain();
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
  puStack_70 = PTR_PTR_1126f7db0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
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
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[3];
    puVar1[3] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_31;
    _objc_release(uVar2);
    uVar3 = puVar1[0x18];
    func_0x00010bf05fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf1f440();
    *(char *)(puVar1 + 0x21) = (char)uVar2;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126d3458;
    _objc_alloc();
    func_0x00010c047780();
    uVar2 = puVar1[0x20];
    puVar1[0x20] = puVar4;
    _objc_release(uVar2);
  }
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



/* Entry: 106f311dc; end: 106f313cb; -[SCSnapRendererTranscodingFactory rendererForSnapDoc:snapRendererLogger:renderDestination:error:] */

void FUN_106f311dc(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *unaff_x24;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((long)param_5 < 5) {
    if ((long)param_5 < 2) {
      if (1 < param_5) {
        if (param_5 != 0xffffffffffffffff) goto LAB_106f31360;
        if (param_6 == (undefined8 *)0x0) {
LAB_106f313c4:
          unaff_x24 = (undefined *)0x0;
          goto LAB_106f31360;
        }
        ppuVar3 = &PTR____CFConstantStringClassReference_110e8e4f8;
LAB_106f313a4:
        puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                            &PTR____CFConstantStringClassReference_110e8e4b8,ppuVar3,0xc);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_6 = puVar2;
        unaff_x24 = (undefined *)0x0;
        goto LAB_106f31360;
      }
    }
    else if (1 < param_5 - 3) {
      if (param_5 != 2) goto LAB_106f31360;
      if ((param_1[0x108] != '\x01') || (uVar1 = param_3, func_0x00010c0d73c0(), (int)uVar1 == 0)) {
        unaff_x24 = PTR_PTR_1126d3460;
        _objc_alloc(PTR_PTR_1126d3460);
        func_0x00010c048440();
        goto LAB_106f31360;
      }
      param_5 = 2;
    }
  }
  else if ((long)param_5 < 8) {
    if (1 < param_5 - 6) {
      puVar2 = PTR_PTR_1126d3468;
      if (param_5 != 5) goto LAB_106f31360;
LAB_106f3132c:
      _objc_alloc(puVar2);
      func_0x00010c047680();
      unaff_x24 = puVar2;
      goto LAB_106f31360;
    }
  }
  else if (param_5 == 8) {
    if ((param_1[0x108] != '\x01') || (uVar1 = param_3, func_0x00010c0d73c0(), (int)uVar1 == 0)) {
      if (param_6 == (undefined8 *)0x0) goto LAB_106f313c4;
      ppuVar3 = &PTR____CFConstantStringClassReference_110e8e4d8;
      goto LAB_106f313a4;
    }
    param_5 = 8;
  }
  else {
    puVar2 = PTR_PTR_1126d3470;
    if (param_5 == 10) goto LAB_106f3132c;
    if (param_5 != 9) goto LAB_106f31360;
  }
  func_0x00010be8e740(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  unaff_x24 = param_1;
LAB_106f31360:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x24);
  return;
}



/* Entry: 106f313cc; end: 106f3146b; -[SCSnapRendererTranscodingFactory ngsmeRendererWithLogger:imageCache:] */

void FUN_106f313cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3478;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0477a0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f3146c; end: 106f315f3; -[SCSnapRendererTranscodingFactory _rendererForSnapDoc:snapRendererLogger:renderDestination:error:] */

void FUN_106f3146c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bed0960(param_1,param_2,param_3,param_5,param_6);
  puVar3 = (undefined *)0x0;
  if ((long)uVar1 < 3) {
    if (uVar1 < 2) {
      puVar3 = *(undefined **)(param_1 + 0x100);
      func_0x00010c26a9c0(puVar3,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (uVar1 == 2) {
      puVar3 = PTR_PTR_1126d3480;
      _objc_alloc(PTR_PTR_1126d3480);
      func_0x00010c048460();
    }
  }
  else {
    if (uVar1 == 3) {
      puVar3 = PTR_PTR_1126d3488;
      _objc_alloc(PTR_PTR_1126d3488);
      uVar2 = *(undefined8 *)(param_1 + 200);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c048420(puVar3,param_2,param_4,uVar2,*(undefined8 *)(param_1 + 0x10),
                          *(undefined8 *)(param_1 + 0x18));
    }
    else {
      if (uVar1 != 4) goto LAB_106f315d0;
      puVar3 = PTR_PTR_1126d3490;
      _objc_alloc(PTR_PTR_1126d3490);
      uVar2 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c0efa80(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c032980(puVar3,param_2,uVar2,*(undefined8 *)(param_1 + 0x10),param_4,
                          *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0x18));
    }
    _objc_release(uVar2);
  }
LAB_106f315d0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f315f4; end: 106f3181b; -[SCSnapRendererTranscodingFactory _typeForSnapDoc:renderDestination:error:] */

undefined8
FUN_106f315f4(long param_1,undefined8 param_2,undefined *param_3,ulong param_4,undefined8 *param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  _objc_retain(param_3);
  if (((param_4 < 10) && ((1L << (param_4 & 0x3f) & 0x31eU) != 0)) &&
     ((*(char *)(param_1 + 0x108) != '\x01' ||
      (puVar2 = param_3, func_0x00010c0d73c0(), ((ulong)puVar2 & 1) == 0)))) {
    puVar2 = param_3;
    func_0x000107e623f0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      func_0x00010bdc1140(auStack_68,puVar2);
      uStack_78 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_80 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_70 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      puVar6 = auStack_68;
      _CMTimeCompare(puVar6,&uStack_80);
      if ((int)puVar6 == 0) {
        uVar7 = 3;
        goto LAB_106f317f0;
      }
    }
    uVar7 = 2;
    goto LAB_106f317f0;
  }
  puVar3 = PTR_PTR_1126d33e0;
  func_0x00010c23ff40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bf5cc00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010bfd6be0();
  if ((int)puVar3 == 0) {
LAB_106f31750:
    iVar1 = (int)*(undefined8 *)(param_1 + 0xc0);
    func_0x000109127dc0();
    if ((iVar1 == 0) ||
       (puVar3 = PTR_PTR_1126d33e0, func_0x00010c23fee0(), ((ulong)puVar3 & 1) == 0)) {
      puVar3 = PTR_PTR_1126d33e0;
      func_0x00010c23ff00();
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = PTR_PTR_1126d33e0;
        func_0x00010c23ffc0();
        uVar7 = 5;
        if ((param_5 != (undefined8 *)0x0) && (((ulong)puVar3 & 1) == 0)) {
          puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99260();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_5 = puVar3;
          uVar7 = 5;
        }
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = 4;
    }
  }
  else {
    puVar3 = puVar4;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf96ee0();
    _objc_release(puVar3);
    if ((int)puVar5 == 0) goto LAB_106f31750;
    uVar7 = 0;
  }
  _objc_release(puVar4);
LAB_106f317f0:
  _objc_release(puVar2);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 106f3181c; end: 106f319b3; -[SCSnapRendererTranscodingFactory .cxx_destruct] */

void FUN_106f3181c(long param_1)

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



/* Entry: 106f319b4; end: 106f319bb; -[SCSnapRendererIdentityPluginV2 supportsYUVInput] */

undefined8 FUN_106f319b4(void)

{
  return 0;
}



/* Entry: 106f319bc; end: 106f319c3; -[SCSnapRendererIdentityPluginV2 textureType] */

undefined8 FUN_106f319bc(void)

{
  return 2;
}



/* Entry: 106f319c4; end: 106f319d7; -[SCSnapRendererIdentityPluginV2 prepareResourcesWithInputCount:snapInfo:] */

void FUN_106f319c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe9cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae558,PTR_s_immediateFutureWithValue__1125d80f0,
             PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 106f319d8; end: 106f319df; -[SCSnapRendererIdentityPluginV2 cleanUpResourcesAndReturnError:] */

undefined8 FUN_106f319d8(void)

{
  return 1;
}



/* Entry: 106f319e0; end: 106f319e3; -[SCSnapRendererIdentityPluginV2 reset] */

void FUN_106f319e0(void)

{
  return;
}



/* Entry: 106f319e4; end: 106f319eb; -[SCSnapRendererIdentityPluginV2 isWarmingUpWithVideoInputsRequired] */

undefined8 FUN_106f319e4(void)

{
  return 0;
}



/* Entry: 106f319ec; end: 106f319ff; -[SCSnapRendererIdentityPluginV2 warmupWithVideoInputs:] */

void FUN_106f319ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe9cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae558,PTR_s_immediateFutureWithValue__1125d80f0,
             PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 106f31a00; end: 106f31a93; -[SCSnapRendererIdentityPluginV2 processVideoInputs:inputTextures:outputTexture:timestamp:error:] */

void FUN_106f31a00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d3388;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bfb1920(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c1494c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041320(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f31a94; end: 106f31a9b; -[SCSnapRendererIdentityPluginV2 renderStaticOverlayWithSize:error:] */

undefined8 FUN_106f31a94(void)

{
  return 0;
}



/* Entry: 106f31a9c; end: 106f31aa3; -[SCSnapRendererIdentityPluginV2 processingMetadataApplier] */

undefined8 FUN_106f31a9c(void)

{
  return 0;
}



/* Entry: 106f31aa4; end: 106f31dff; -[SCPluginEffectSnapRendererImplV2 initWithSnapDocManager:circumstanceEngine:timeProvider:snapDocEditorFactory:lazyVideoTranscoder:snapDocOverlayImageGenerationServices:overlayFormatServices:musicMediaLoader:musicTrackAudioDataLoader:temporaryFileWriterServices:snapRendererLogger:performer:imageCache:videoUrlCache:] */

undefined8 *
FUN_106f31aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  puStack_70 = PTR_PTR_1126f7db8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[5];
    puVar1[5] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c0efa80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_9;
    func_0x00010c0ef840();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[3];
    puVar1[3] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
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



/* Entry: 106f31e00; end: 106f31e07; -[SCPluginEffectSnapRendererImplV2 requiresRenderPlugins] */

undefined8 FUN_106f31e00(void)

{
  return 1;
}



/* Entry: 106f31e08; end: 106f31e1f; -[SCPluginEffectSnapRendererImplV2 ngsmeUserInitiatedTargetResolutionWidth] */

void FUN_106f31e08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_intValueForConfigKeySync_default_1125f79d0,
             &PTR____CFConstantStringClassReference_110e8e538,0x2d0,0);
  return;
}



/* Entry: 106f31e20; end: 106f31e37; -[SCPluginEffectSnapRendererImplV2 ngsmeUserInitiatedTargetResolutionHeight] */

void FUN_106f31e20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_intValueForConfigKeySync_default_1125f79d0,
             &PTR____CFConstantStringClassReference_110e8e558,0x500,0);
  return;
}



/* Entry: 106f31e38; end: 106f31e4f; -[SCPluginEffectSnapRendererImplV2 useNgsmeInputBasedResolution] */

void FUN_106f31e38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e8e578,0,0);
  return;
}



/* Entry: 106f31e50; end: 106f31e67; -[SCPluginEffectSnapRendererImplV2 useBGRAPixelBuffer] */

void FUN_106f31e50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e8e598,0,0);
  return;
}



/* Entry: 106f31e68; end: 106f31e7f; -[SCPluginEffectSnapRendererImplV2 generateGlobalOverlay] */

void FUN_106f31e68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e8e5b8,1,0);
  return;
}



/* Entry: 106f31e80; end: 106f31fc7; -[SCPluginEffectSnapRendererImplV2 renderSnapDoc:watermarkProfile:toResponse:toDestination:snapSource:withPlugins:] */

void FUN_106f31e80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_8);
  lStack_68 = 0;
  puVar2 = PTR_PTR_1126d33e0;
  func_0x00010bf5cdc0(PTR_PTR_1126d33e0,param_2,param_3,0,&lStack_68);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_68;
  _objc_retain(lStack_68);
  puVar3 = PTR_PTR_1126d33e0;
  func_0x00010c23ff00(PTR_PTR_1126d33e0,param_2,param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  if ((((ulong)puVar3 & 1) == 0) && (lVar1 != 0)) {
    lVar4 = lVar1;
    func_0x00010bf6e340(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1972e0(uVar5,param_2,lVar4);
    _objc_release(lVar4);
    func_0x00010c23c1a0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bf43ca0(param_5,param_2,lVar1);
  }
  else {
    func_0x00010be96940(param_1,param_2,param_3,param_5,param_6,param_7,puVar2,uVar5,param_8);
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106f31fc8; end: 106f323a7; -[SCPluginEffectSnapRendererImplV2 _retrieveMediasForSnapDoc:response:destination:snapSource:renderCTItemInstances:renderLogger:plugins:] */

void FUN_106f31fc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [56];
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [64];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010bf529e0(param_7);
  func_0x00010c1ad5e0(param_8);
  puVar1 = PTR_PTR_1126d33e0;
  func_0x00010bf4cb40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    FUN_106f323a8(param_8,puVar2);
    func_0x00010bf43ca0(param_4);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x10);
    func_0x00010bf8cb40();
    _objc_retainAutoreleasedReturnValue();
    lStack_a8 = 0;
    func_0x00010be6e9c0(auStack_a0,param_1);
    lVar8 = lStack_a8;
    _objc_retain(lStack_a8);
    if (lVar8 == 0) {
      func_0x00010c23c040(param_8);
      lVar3 = param_1;
      func_0x00010be8e7e0();
      lStack_b0 = 0;
      lVar4 = param_1;
      func_0x00010be5eea0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lStack_b0;
      _objc_retain(lStack_b0);
      if (lVar8 == 0) {
        lStack_b8 = 0;
        lVar5 = param_1;
        func_0x00010be06b40();
        lVar8 = lStack_b8;
        _objc_retain(lStack_b8);
        if (lVar8 == 0) {
          puVar6 = PTR_PTR_1126ae4e8;
          func_0x00010c22b6a0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf17b60();
          _objc_release(puVar6);
          _objc_initWeak(auStack_c0,param_1);
          puStack_120 = puVar7;
          _objc_retain(param_8);
          _objc_retain(param_4);
          _objc_copyWeak(auStack_128,auStack_c0);
          _objc_retain(puVar2);
          uStack_118 = param_5;
          uStack_110 = param_6;
          _objc_retain(param_7);
          _objc_retain(param_9);
          FUN_106f32580(auStack_108,auStack_a0);
          lStack_d0 = lVar5;
          lStack_c8 = lVar3;
          func_0x00010c297260(lVar4);
          FUN_106f32618(auStack_108);
          _objc_release(param_9);
          _objc_release(param_7);
          _objc_release(puVar2);
          _objc_destroyWeak(auStack_128);
          _objc_release(param_4);
          _objc_release(param_8);
          _objc_destroyWeak(auStack_c0);
          lVar8 = 0;
        }
        else {
          FUN_106f323a8(param_8,lVar8);
          func_0x00010bf43ca0(param_4);
        }
      }
      else {
        FUN_106f323a8(param_8,lVar8);
        func_0x00010bf43ca0(param_4);
      }
      _objc_release(lVar4);
    }
    else {
      FUN_106f323a8(param_8,lVar8);
      func_0x00010bf43ca0(param_4);
    }
    FUN_106f32618(auStack_a0);
    _objc_release(lVar8);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


