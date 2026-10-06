/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10905bd8c; end: 10905bd93; -[SCNGSMECompositorLogger reportingDurationMs] */

undefined8 FUN_10905bd8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10905bd94; end: 10905bd9f; -[SCNGSMECompositorLogger .cxx_destruct] */

void FUN_10905bd94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10905bda0; end: 10905be1f; -[SCNGSMEVideoProcessor init] */

undefined1 * FUN_10905bda0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127000f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10905be20; end: 10905be73; -[SCNGSMEVideoProcessor dealloc] */

void FUN_10905be20(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    _CVPixelBufferRelease();
  }
  func_0x00010bf2ebc0(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_1127000f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10905be74; end: 10905be7b; -[SCNGSMEVideoProcessor setRenderSize:] */

void FUN_10905be74(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x28) = param_1;
  *(undefined8 *)(param_3 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010c228bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_setupImageProcessor_112667d18);
  return;
}



/* Entry: 10905be7c; end: 10905beb3; -[SCNGSMEVideoProcessor setRenderEffects:] */

void FUN_10905be7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c228bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setupImageProcessor_112667d18);
  return;
}



/* Entry: 10905beb4; end: 10905bee3; -[SCNGSMEVideoProcessor setIppRenderer:] */

void FUN_10905beb4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10905bee4; end: 10905bef7; -[SCNGSMEVideoProcessor setTotalDuration:] */

void FUN_10905bee4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x48) = param_3[2];
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}



/* Entry: 10905bef8; end: 10905bf83; -[SCNGSMEVideoProcessor setupImageProcessor] */

void FUN_10905bef8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x00010bf2ebc0(*(undefined8 *)(param_1 + 0x10));
  puVar1 = PTR_PTR_1126da130;
  _objc_alloc();
  puVar2 = PTR_PTR_1126bf4d0;
  func_0x00010c22bec0(PTR_PTR_1126bf4d0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  lVar3 = param_1;
  func_0x00010c160500(param_1);
  func_0x00010c01cd20(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),puVar1,param_2
                      ,puVar2,uVar4,lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10905bf84; end: 10905c027; -[SCNGSMEVideoProcessor blankPixelBuffer] */

undefined * FUN_10905bf84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = *(undefined **)(param_1 + 0x20);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe97a0(0x4030000000000000,0x4030000000000000,0x3ff0000000000000,puVar1,param_2,
                        puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c14e760(*(undefined8 *)(param_1 + 0x30),puVar1,param_2,0x10);
    puVar2 = puVar1;
    func_0x00010bf54260();
    *(undefined **)(param_1 + 0x20) = puVar2;
    _objc_release(puVar1);
  }
  return puVar2;
}



/* Entry: 10905c028; end: 10905c38f; -[SCNGSMEVideoProcessor addSegmentInfoForTrackID:ngsmeInputID:timeRanges:images:] */

void FUN_10905c028(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_190 [48];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_5;
    func_0x00010bf529e0();
    lVar8 = param_6;
    func_0x00010bf529e0();
    if (lVar1 == lVar8) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      _objc_retain(param_6);
      lVar1 = param_6;
      func_0x00010bf52a60();
      if (lVar1 != 0) {
        lVar8 = *plStack_120;
        do {
          lVar6 = 0;
          lVar3 = lVar1;
          do {
            if (*plStack_120 != lVar8) {
              lVar3 = param_6;
              _objc_enumerationMutation(param_6);
            }
            puVar9 = *(undefined **)(lStack_128 + lVar6 * 8);
            _objc_autoreleasePoolPush();
            lVar4 = param_1;
            func_0x00010c12fca0();
            puVar5 = puVar9;
            func_0x00010bfe8380();
            if (puVar5 == (undefined *)0x0) {
              func_0x00010c14e760(*(undefined8 *)(param_1 + 0x30),puVar9);
              if ((int)lVar4 == 0) {
                func_0x00010bf54260();
                puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
              }
              else {
                func_0x00010bf54220();
                puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
              }
            }
            else {
              func_0x00010c14e300();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar9;
              if ((int)lVar4 == 0) {
                func_0x00010bf54240();
              }
              else {
                func_0x00010c23d0a0();
                func_0x00010bf54220();
              }
              _objc_release(puVar9);
              puVar9 = puVar5;
              puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
            }
            PTR__OBJC_CLASS___NSNull_1126aef28 = puVar5;
            if (puVar9 == (undefined *)0x0) {
              func_0x00010c0ddbe0(puVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar5;
            }
            func_0x00010befa120(puVar2);
            _objc_release(puVar9);
            _objc_autoreleasePoolPop(lVar3);
            lVar6 = lVar6 + 1;
          } while (lVar1 != lVar6);
          lVar1 = param_6;
          func_0x00010bf52a60();
        } while (lVar1 != 0);
      }
      _objc_release(param_6);
      lVar1 = param_5;
      func_0x00010bf529e0();
      if (lVar1 == 1) {
        lVar1 = param_5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 == 0) {
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_160,lVar1);
        }
        _objc_release(lVar1);
        uStack_1d8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_1e0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_1d0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        uStack_1a8 = *(undefined8 *)(param_1 + 0x40);
        uStack_1b0 = *(undefined8 *)(param_1 + 0x38);
        uStack_1a0 = *(undefined8 *)(param_1 + 0x48);
        _CMTimeRangeMake(auStack_190,&uStack_1e0,&uStack_1b0);
        uStack_1d8 = uStack_158;
        uStack_1e0 = uStack_160;
        uStack_1c8 = uStack_148;
        uStack_1d0 = uStack_150;
        uStack_1b8 = uStack_138;
        uStack_1c0 = uStack_140;
        _CMTimeRangeEqual(&uStack_1e0,auStack_190);
      }
      puVar9 = PTR_PTR_1126dd1a0;
      _objc_alloc();
      FUN_109067bdc();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 8));
      _objc_release(puVar9);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uVar7 = *(undefined8 *)(param_3 + 8);
    _objc_retain(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return;
  }
  return;
}



/* Entry: 10905c390; end: 10905c3b7; -[SCNGSMEVideoProcessor trackSegmentInfo] */

void FUN_10905c390(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10905c3b8; end: 10905c417; -[SCNGSMEVideoProcessor renderInputs:trackIds:orientations:transforms:outputPixelBuffer:outputTimestamp:frameTimestamp:completionHandler:] */

void FUN_10905c3b8(void)

{
  func_0x00010be81560();
  return;
}



/* Entry: 10905c418; end: 10905c49f; -[SCNGSMEVideoProcessor renderInputsForPlayback:trackIds:orientations:transforms:outputTimestamp:frameTimestamp:completionHandler:] */

void FUN_10905c418(long param_1)

{
  long in_stack_00000000;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010be81560();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010905c49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_stack_00000000 + 0x10))(in_stack_00000000,3,0);
  return;
}



/* Entry: 10905c4a0; end: 10905ca3b; -[SCNGSMEVideoProcessor _processInputs:trackIds:orientations:transforms:outputPixelBuffer:outputTimestamp:frameTimestamp:imageProcessor:outputRenderer:trackUnchangedFrames:completionHandler:] */

void FUN_10905c4a0(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 param_10,undefined8 param_11,char param_12,
                  undefined4 param_13,long param_14)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  if (param_3 != (undefined *)0x0) {
    _CFRetain(param_3);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar16 = param_4;
  func_0x00010bf529e0();
  if (0 < lVar16) {
    lVar16 = 0;
    puVar11 = *(undefined **)PTR__kCFNull_11034abd8;
    do {
      lVar4 = param_4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(param_1 + 8);
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        lVar14 = *(long *)(lVar5 + 0x20);
        _objc_retain(lVar14);
        puVar13 = *(undefined **)(lVar5 + 0x18);
        _objc_retain(puVar13);
        lVar15 = lVar14;
        func_0x00010bf529e0();
        if (0 < lVar15) {
          lVar15 = 0;
          do {
            lVar6 = lVar14;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            if (lVar6 == 0) {
              uStack_88 = 0;
              uStack_90 = 0;
              uStack_78 = 0;
              uStack_80 = 0;
              uStack_98 = 0;
              uStack_a0 = 0;
            }
            else {
              func_0x00010bdc1120(&uStack_a0,lVar6);
            }
            _objc_release(lVar6);
            uStack_c8 = uStack_98;
            uStack_d0 = uStack_a0;
            uStack_b8 = uStack_88;
            uStack_c0 = uStack_90;
            uStack_a8 = uStack_78;
            uStack_b0 = uStack_80;
            uStack_e8 = param_9[1];
            uStack_f0 = *param_9;
            uStack_e0 = param_9[2];
            puVar7 = &uStack_d0;
            _CMTimeRangeContainsTime(puVar7,&uStack_f0);
            uStack_c8 = uStack_98;
            uStack_d0 = uStack_a0;
            uStack_b8 = uStack_88;
            uStack_c0 = uStack_90;
            uStack_a8 = uStack_78;
            uStack_b0 = uStack_80;
            _CMTimeRangeGetEnd(&uStack_f0,&uStack_d0);
            uStack_c8 = *(undefined8 *)(param_1 + 0x40);
            uStack_d0 = *(undefined8 *)(param_1 + 0x38);
            uStack_c0 = *(undefined8 *)(param_1 + 0x48);
            puVar8 = &uStack_f0;
            _CMTimeCompare(puVar8,&uStack_d0);
            if ((int)puVar8 == 0) {
              uStack_c8 = param_9[1];
              uStack_d0 = *param_9;
              uStack_c0 = param_9[2];
              uStack_e8 = *(undefined8 *)(param_1 + 0x40);
              uStack_f0 = *(undefined8 *)(param_1 + 0x38);
              uStack_e0 = *(undefined8 *)(param_1 + 0x48);
              puVar8 = &uStack_d0;
              _CMTimeCompare(puVar8,&uStack_f0);
              if (((int)puVar7 != 0) || (-1 < (int)puVar8)) goto LAB_10905c6e0;
            }
            else if ((int)puVar7 != 0) {
LAB_10905c6e0:
              puVar9 = puVar13;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
              func_0x00010c0ddbe0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(puVar9);
              if (puVar9 != puVar10) {
                puVar9 = puVar13;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                bVar1 = *(byte *)(lVar5 + 8);
                if (puVar9 != (undefined *)0x0) goto LAB_10905c780;
                goto LAB_10905c754;
              }
              break;
            }
            lVar15 = lVar15 + 1;
            lVar6 = lVar14;
            func_0x00010bf529e0();
          } while (lVar15 < lVar6);
        }
        bVar1 = 0;
LAB_10905c754:
        puVar9 = param_3;
        _CFArrayGetValueAtIndex(param_3,lVar16);
        if ((puVar9 == (undefined *)0x0) || (puVar9 == puVar11)) {
          puVar9 = param_1;
          func_0x00010bf1ca00(param_1);
        }
LAB_10905c780:
        uVar12 = param_5;
        func_0x00010c0dfd40(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0();
        _objc_release(uVar12);
        _CVPixelBufferGetWidth(puVar9);
        _CVPixelBufferGetHeight(puVar9);
        puVar9 = PTR_PTR_1126dd1a8;
        _objc_alloc(PTR_PTR_1126dd1a8);
        uVar12 = *(undefined8 *)(lVar5 + 0x10);
        _objc_retain(uVar12);
        func_0x00010c036180(puVar9);
        _objc_release(uVar12);
        if ((param_12 != '\0') && ((bVar1 & 1) != 0)) {
          iVar2 = (int)*(undefined8 *)(param_1 + 0x58);
          func_0x00010bf4b900();
          if (iVar2 == 0) {
            func_0x00010befa120(*(undefined8 *)(param_1 + 0x58));
          }
          else {
            func_0x00010c182060(puVar9);
          }
        }
        if (param_6 != 0) {
          lVar15 = param_6;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          if (lVar15 == 0) {
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
          }
          else {
            func_0x00010bdc0fc0(&uStack_120,lVar15);
          }
          uStack_98 = uStack_118;
          uStack_a0 = uStack_120;
          uStack_88 = uStack_108;
          uStack_90 = uStack_110;
          uStack_78 = uStack_f8;
          uStack_80 = uStack_100;
          func_0x00010c219960(puVar9);
          _objc_release(lVar15);
        }
        func_0x00010befa120(puVar3);
        _objc_release(puVar9);
        _objc_release(puVar13);
        _objc_release(lVar14);
      }
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar16 = lVar16 + 1;
      lVar4 = param_4;
      func_0x00010bf529e0();
    } while (lVar16 < lVar4);
  }
  puVar11 = puVar3;
  func_0x00010bf529e0();
  if (puVar11 == (undefined *)0x0) {
    puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_14 + 0x10))(param_14,3,puVar11);
    _objc_release(puVar11);
    if (param_3 != (undefined *)0x0) {
      _CFRelease();
    }
  }
  else {
    _objc_retain(param_14);
    uStack_98 = param_8[1];
    uStack_a0 = *param_8;
    uStack_90 = param_8[2];
    func_0x00010c114c40(param_10);
    if (param_3 != (undefined *)0x0) {
      _CFRelease();
    }
    _objc_release(param_14);
  }
  _objc_release(puVar3);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10905ca3c; end: 10905ca47;  */

void FUN_10905ca3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010905ca44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10905ca48; end: 10905cecf; -[SCNGSMEVideoProcessor _createExportRenderEffects] */

void FUN_10905ca48(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lStack_280;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
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
  long lStack_70;
  
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar15 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar15);
  puVar13 = &uStack_1b0;
  lStack_280 = lVar15;
  func_0x00010bf52a60();
  if (lStack_280 != 0) {
    lVar14 = *plStack_1a0;
    do {
      lVar16 = 0;
      do {
        if (*plStack_1a0 != lVar14) {
          _objc_enumerationMutation(lVar15);
        }
        lVar18 = *(long *)(lStack_1a8 + lVar16 * 8);
        if (lVar18 == 0) {
          _objc_retain(0);
LAB_10905ce2c:
          func_0x00010befa120(puVar4);
          lVar21 = 0;
        }
        else {
          lVar21 = *(long *)(lVar18 + 0x28);
          _objc_retain(lVar21);
          puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          if (lVar21 == 0) goto LAB_10905ce2c;
          func_0x00010bf529e0(lVar21);
          func_0x00010bf0a0e0();
          _objc_retainAutoreleasedReturnValue();
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          _objc_retain(lVar21);
          lVar5 = lVar21;
          func_0x00010bf52a60();
          if (lVar5 != 0) {
            lVar22 = *plStack_1e0;
            do {
              lVar23 = 0;
              do {
                if (*plStack_1e0 != lVar22) {
                  _objc_enumerationMutation(lVar21);
                }
                puVar6 = PTR_PTR_1126bf4b0;
                uVar19 = *(ulong *)(lStack_1e8 + lVar23 * 8);
                _objc_retain(uVar19);
                _objc_opt_class(puVar6);
                uVar7 = uVar19;
                _objc_opt_isKindOfClass(uVar19,puVar6);
                uVar1 = uVar19;
                if ((uVar7 & 1) == 0) {
                  uVar1 = 0;
                }
                _objc_retain(uVar1);
                _objc_release(uVar19);
                if (uVar1 == 0) {
                  func_0x00010befa120(puVar20);
                }
                else {
                  uVar7 = uVar19;
                  func_0x00010bfccd00(uVar19);
                  _objc_retainAutoreleasedReturnValue();
                  lVar8 = param_1;
                  func_0x00010be0c760();
                  _objc_retainAutoreleasedReturnValue();
                  if (lVar8 == 0) {
                    func_0x00010befa120(puVar20);
                  }
                  else {
                    puVar6 = PTR_PTR_1126bf4b0;
                    _objc_alloc(PTR_PTR_1126bf4b0);
                    uVar9 = uVar19;
                    func_0x00010bf53ac0(uVar19);
                    _objc_retainAutoreleasedReturnValue();
                    uVar10 = uVar19;
                    func_0x00010c0657c0(uVar19);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0eebc0(uVar19);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c016a80(puVar6);
                    _objc_release(uVar19);
                    _objc_release(uVar10);
                    _objc_release(uVar9);
                    func_0x00010befa120(puVar20);
                    _objc_release(puVar6);
                  }
                  _objc_release(lVar8);
                  _objc_release(uVar7);
                }
                _objc_release(uVar1);
                lVar23 = lVar23 + 1;
              } while (lVar5 != lVar23);
              lVar5 = lVar21;
              func_0x00010bf52a60();
            } while (lVar5 != 0);
          }
          _objc_release(lVar21);
          puVar6 = PTR_PTR_1126bf6b8;
          _objc_alloc(PTR_PTR_1126bf6b8);
          uVar17 = *(undefined8 *)(lVar18 + 8);
          _objc_retain(uVar17);
          uStack_218 = *(undefined8 *)(lVar18 + 0x40);
          uStack_220 = *(undefined8 *)(lVar18 + 0x38);
          uStack_208 = *(undefined8 *)(lVar18 + 0x50);
          uStack_210 = *(undefined8 *)(lVar18 + 0x48);
          uStack_1f8 = *(undefined8 *)(lVar18 + 0x60);
          uStack_200 = *(undefined8 *)(lVar18 + 0x58);
          uStack_238 = *(undefined8 *)(lVar18 + 0x80);
          uStack_240 = *(undefined8 *)(lVar18 + 0x78);
          uStack_228 = *(undefined8 *)(lVar18 + 0x90);
          uStack_230 = *(undefined8 *)(lVar18 + 0x88);
          uStack_248 = *(undefined8 *)(lVar18 + 0x70);
          uStack_250 = *(undefined8 *)(lVar18 + 0x68);
          uVar2 = *(undefined8 *)(lVar18 + 0x10);
          uVar3 = *(undefined8 *)(lVar18 + 0x18);
          _objc_retain(uVar3);
          uVar24 = *(undefined8 *)(lVar18 + 0x20);
          _objc_retain(uVar24);
          uVar25 = *(undefined8 *)(lVar18 + 0x30);
          _objc_retain(uVar25);
          func_0x00010b7432f8(puVar6,uVar17,&uStack_220,&uStack_250,uVar2,uVar3,uVar24,puVar20);
          _objc_release(uVar25);
          _objc_release(uVar24);
          _objc_release(uVar3);
          _objc_release(uVar17);
          func_0x00010befa120(puVar4);
          _objc_release(puVar6);
          _objc_release(puVar20);
        }
        _objc_release(lVar21);
        lVar16 = lVar16 + 1;
      } while (lVar16 != lStack_280);
      puVar13 = &uStack_1b0;
      lStack_280 = lVar15;
      func_0x00010bf52a60();
    } while (lStack_280 != 0);
  }
  _objc_release(lVar15);
  puVar20 = puVar4;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar13);
    puVar20 = puVar4 + 0x68;
    _objc_loadWeakRetained();
    _objc_release();
    if (puVar20 == (undefined *)0x0) {
      puVar20 = (undefined *)0x0;
    }
    else {
      puVar11 = puVar13;
      func_0x00010c094660();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf529e0();
      if (puVar12 == (undefined8 *)0x0) {
        puVar20 = (undefined *)0x0;
      }
      else {
        puVar4 = puVar4 + 0x68;
        _objc_loadWeakRetained(puVar4);
        puVar12 = puVar11;
        func_0x00010bf04a20(puVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar4;
        func_0x00010bf41c20(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        _objc_release(puVar4);
      }
      _objc_release(puVar11);
    }
    _objc_release(puVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 10905ced0; end: 10905cfab; -[SCNGSMEVideoProcessor _exportImageCommandForCommand:] */

void FUN_10905ced0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = param_1 + 0x68;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c094660();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      param_1 = param_1 + 0x68;
      _objc_loadWeakRetained(param_1);
      lVar2 = lVar1;
      func_0x00010bf04a20(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf41c20(param_1,param_2,lVar2,0,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(param_1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10905cfac; end: 10905d03f; -[SCNGSMEVideoProcessor setupExportImageProcessor] */

void FUN_10905cfac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010bded840();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126da130;
  _objc_alloc(PTR_PTR_1126da130);
  puVar3 = PTR_PTR_1126bf4d0;
  func_0x00010c22bec0(PTR_PTR_1126bf4d0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c160500(param_1);
  func_0x00010c01cd20(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),puVar2,param_2
                      ,puVar3,lVar1,lVar4);
  _objc_release(puVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10905d040; end: 10905d14f; -[SCNGSMEVideoProcessor exportInputs:trackIds:orientations:transforms:outputPixelBuffer:outputTimestamp:frameTimestamp:completionHandler:] */

void FUN_10905d040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_10);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c2289a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = param_8[1];
  uStack_80 = *param_8;
  uStack_70 = param_8[2];
  uStack_98 = param_9[1];
  uStack_a0 = *param_9;
  uStack_90 = param_9[2];
  func_0x00010be81560(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&uStack_80,&uStack_a0,
                      uVar1,0,0);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 10905d150; end: 10905d167; -[SCNGSMEVideoProcessor commandProvider] */

void FUN_10905d150(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10905d168; end: 10905d173; -[SCNGSMEVideoProcessor setCommandProvider:] */

void FUN_10905d168(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 10905d174; end: 10905d17b; -[SCNGSMEVideoProcessor renderInputImagesAsBGRA] */

undefined1 FUN_10905d174(long param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}



/* Entry: 10905d17c; end: 10905d183; -[SCNGSMEVideoProcessor setRenderInputImagesAsBGRA:] */

void FUN_10905d17c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 10905d184; end: 10905d18b; -[SCNGSMEVideoProcessor sessionTextureCacheEnabled] */

undefined1 FUN_10905d184(long param_1)

{
  return *(undefined1 *)(param_1 + 0x61);
}



/* Entry: 10905d18c; end: 10905d193; -[SCNGSMEVideoProcessor setSessionTextureCacheEnabled:] */

void FUN_10905d18c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x61) = param_3;
  return;
}



/* Entry: 10905d194; end: 10905d1ef; -[SCNGSMEVideoProcessor .cxx_destruct] */

void FUN_10905d194(long param_1)

{
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10905d1f0; end: 10905d38f; -[SCVideoExportImageProcessor initWithImageProcessQueue:viewportTransform:cpuBufferTransform:readColorSpaceFromInputPixelBuffers:colorSpace:GPUCommands:CPUCommands:backgroundCommand:outputSize:] */

undefined1 *
FUN_10905d1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_5);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_112700100;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    uVar4 = param_6[1];
    uVar2 = *param_6;
    uVar5 = param_6[2];
    uVar7 = param_6[5];
    uVar6 = param_6[4];
    *(undefined8 *)((long)puVar1 + 0x28) = param_6[3];
    *(undefined8 *)((long)puVar1 + 0x20) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x38) = uVar7;
    *(undefined8 *)((long)puVar1 + 0x30) = uVar6;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar4 = param_7[1];
    uVar2 = *param_7;
    uVar5 = param_7[2];
    uVar7 = param_7[5];
    uVar6 = param_7[4];
    *(undefined8 *)((long)puVar1 + 0x58) = param_7[3];
    *(undefined8 *)((long)puVar1 + 0x50) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x68) = uVar7;
    *(undefined8 *)((long)puVar1 + 0x60) = uVar6;
    *(undefined8 *)((long)puVar1 + 0x48) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    *(undefined1 *)((long)puVar1 + 200) = param_8;
    *(undefined8 *)((long)puVar1 + 0x70) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = param_12;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x90) = param_1;
    *(undefined8 *)((long)puVar1 + 0x98) = param_2;
    puVar3 = PTR_PTR_1126d1398;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined **)((long)puVar1 + 0xa0) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb8);
    *(undefined **)((long)puVar1 + 0xb8) = puVar3;
    _objc_release(uVar2);
    func_0x00010c2104a0(*(undefined8 *)((long)puVar1 + 0xb8));
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10905d390; end: 10905d3db; -[SCVideoExportImageProcessor warmUpProcessing] */

void FUN_10905d390(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13c0;
  _objc_alloc(PTR_PTR_1126d13c0);
  func_0x00010bfffe20(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98));
  func_0x00010befafa0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10905d3dc; end: 10905d707; -[SCVideoExportImageProcessor processImageWithInputPixelBuffer:outputPixelBuffer:orientation:presentationTime:presentationTimeOffset:transcodingTaskId:completionHandler:] */

void FUN_10905d3dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_9;
  _objc_retain();
  if (*(char *)(param_1 + 200) == '\x01') {
    FUN_10907e01c();
    uVar1 = param_3;
  }
  _objc_autoreleasePoolPush();
  uVar6 = *(undefined8 *)(param_1 + 0xa0);
  lVar2 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = *(undefined8 *)(param_1 + 0x18);
  uStack_a0 = *(undefined8 *)(param_1 + 0x10);
  uStack_88 = *(undefined8 *)(param_1 + 0x28);
  uStack_90 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = *(undefined8 *)(param_1 + 0x30);
  uStack_c8 = *(undefined8 *)(param_1 + 0x48);
  uStack_d0 = *(undefined8 *)(param_1 + 0x40);
  uStack_b8 = *(undefined8 *)(param_1 + 0x58);
  uStack_c0 = *(undefined8 *)(param_1 + 0x50);
  uStack_a8 = *(undefined8 *)(param_1 + 0x68);
  uStack_b0 = *(undefined8 *)(param_1 + 0x60);
  uStack_e8 = param_6[1];
  uStack_f0 = *param_6;
  uStack_e0 = param_6[2];
  func_0x00010c299fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf41d00();
  if ((int)lVar2 == 0) {
    func_0x00010befafa0(*(undefined8 *)(param_1 + 8));
  }
  else {
    if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0xa0);
      lVar2 = param_1;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_98 = *(undefined8 *)(param_1 + 0x18);
      uStack_a0 = *(undefined8 *)(param_1 + 0x10);
      uStack_88 = *(undefined8 *)(param_1 + 0x28);
      uStack_90 = *(undefined8 *)(param_1 + 0x20);
      uStack_78 = *(undefined8 *)(param_1 + 0x38);
      uStack_80 = *(undefined8 *)(param_1 + 0x30);
      uStack_c8 = *(undefined8 *)(param_1 + 0x48);
      uStack_d0 = *(undefined8 *)(param_1 + 0x40);
      uStack_b8 = *(undefined8 *)(param_1 + 0x58);
      uStack_c0 = *(undefined8 *)(param_1 + 0x50);
      uStack_a8 = *(undefined8 *)(param_1 + 0x68);
      uStack_b0 = *(undefined8 *)(param_1 + 0x60);
      uStack_e8 = param_6[1];
      uStack_f0 = *param_6;
      uStack_e0 = param_6[2];
      func_0x00010c299fc0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010be89a80(param_1);
      func_0x00010befafa0(*(undefined8 *)(param_1 + 8));
      *(undefined1 *)(param_1 + 0xb0) = 1;
      _objc_release(uVar5);
    }
    _objc_initWeak(&uStack_a0,param_1);
    puVar3 = PTR_PTR_1126b7040;
    func_0x00010c22be80(PTR_PTR_1126b7040);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_f8,&uStack_a0);
    _objc_retain(uVar6);
    puVar4 = puVar3;
    func_0x00010bf1d460(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010befa340(*(undefined8 *)(param_1 + 0xb8));
    _objc_release(puVar4);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(&uStack_a0);
  }
  _objc_release(uVar6);
  _objc_autoreleasePoolPop(uVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 10905d708; end: 10905d70b;  */

void FUN_10905d708(void)

{
  return;
}



/* Entry: 10905d70c; end: 10905d747;  */

void FUN_10905d70c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010befafa0(*(undefined8 *)(lVar1 + 8),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10905d748; end: 10905d7cf; -[SCVideoExportImageProcessor processImageWithGraphInputs:outputPixelBuffer:outputRenderer:presentationTime:transcodingTaskId:enableCPUFallback:completionHandler:] */

void FUN_10905d748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bc890;
  func_0x00010c150380(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar1 + 0xc0);
  *(undefined **)(puVar1 + 0xc0) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10905d7d0; end: 10905d85b; -[SCVideoExportImageProcessor _registerNotificationHandlers] */

void FUN_10905d7d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bc890;
  func_0x00010c150380(0x4014000000000000,PTR_PTR_1126bc890,param_2,param_1,
                      PTR_s__imageLensCommandWarmupTimeout_11253f590,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined **)(param_1 + 0xc0) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10905d85c; end: 10905d85f; -[SCVideoExportImageProcessor cancelProcessing] */

void FUN_10905d85c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanupCommands_112555720);
  return;
}



/* Entry: 10905d860; end: 10905d8db; -[SCVideoExportImageProcessor imageProcessCommandsInfo] */

void FUN_10905d860(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xa8);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110ad65d0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + 0xa8);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10905d8dc; end: 10905d957;  */

void FUN_10905d8dc(undefined8 param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_2);
  ppuVar1 = param_2;
  func_0x00010bf41ce0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc1338;
  }
  else {
    ppuVar2 = param_2;
    func_0x00010bf41ce0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10905d958; end: 10905d99b; -[SCVideoExportImageProcessor dealloc] */

void FUN_10905d958(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bddf600();
  puStack_28 = PTR_PTR_112700100;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10905d99c; end: 10905da17; -[SCVideoExportImageProcessor _cleanupCommands] */

void FUN_10905d99c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bddf900();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13a0;
  _objc_alloc(PTR_PTR_1126d13a0);
  func_0x00010bfffdc0();
  func_0x00010befafa0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13a8;
  _objc_opt_new(PTR_PTR_1126d13a8);
  func_0x00010befafa0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10905da18; end: 10905da1f; -[SCVideoExportImageProcessor commandNeedAsyncWarmup] */

undefined8 FUN_10905da18(void)

{
  return 0;
}



/* Entry: 10905da20; end: 10905da23; -[SCVideoExportImageProcessor _imageLensCommandWarmupTimeout] */

void FUN_10905da20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec0e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startOperationQueue_11258dd28);
  return;
}



/* Entry: 10905da24; end: 10905da27; -[SCVideoExportImageProcessor _imageLensCommandWarmupComplete] */

void FUN_10905da24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec0e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startOperationQueue_11258dd28);
  return;
}



/* Entry: 10905da28; end: 10905da87; -[SCVideoExportImageProcessor _startOperationQueue] */

void FUN_10905da28(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar1);
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0xc0));
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c2104b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xb8),PTR_s_setSuspended__112661b50,0);
  return;
}



/* Entry: 10905da88; end: 10905daaf; -[SCVideoExportImageProcessor _cleanupPendingOperationQueue] */

void FUN_10905da88(long param_1)

{
  func_0x00010bf2dd20(*(undefined8 *)(param_1 + 0xb8));
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}



/* Entry: 10905dab0; end: 10905db27; -[SCVideoExportImageProcessor .cxx_destruct] */

void FUN_10905dab0(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10905db28; end: 10905db2b; -[SCVideoMockImageProcessor warmUpProcessing] */

void FUN_10905db28(void)

{
  return;
}



/* Entry: 10905db2c; end: 10905db3f; -[SCVideoMockImageProcessor processImageWithInputPixelBuffer:outputPixelBuffer:orientation:presentationTime:presentationTimeOffset:transcodingTaskId:completionHandler:] */

void FUN_10905db2c(void)

{
  long in_stack_00000000;
  
                    /* WARNING: Could not recover jumptable at 0x00010905db3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_stack_00000000 + 0x10))(in_stack_00000000,3,0);
  return;
}



/* Entry: 10905db40; end: 10905db87; -[SCVideoMockImageProcessor processImageWithGraphInputs:outputPixelBuffer:outputRenderer:presentationTime:transcodingTaskId:enableCPUFallback:completionHandler:] */

void FUN_10905db40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_6[1];
  uStack_30 = *param_6;
  uStack_20 = param_6[2];
  func_0x00010c114c60(param_1,param_2,0,param_4,0,&uStack_30,0,param_7,param_9);
  return;
}



/* Entry: 10905db88; end: 10905db8b; -[SCVideoMockImageProcessor cancelProcessing] */

void FUN_10905db88(void)

{
  return;
}



/* Entry: 10905db8c; end: 10905db97; -[SCVideoMockImageProcessor imageProcessCommandsInfo] */

undefined ** FUN_10905db8c(void)

{
  return &PTR____CFConstantStringClassReference_110f1ded8;
}



/* Entry: 10905db98; end: 10905dcab; -[SCVideoTimedImageProcessor initWithImageProcessQueue:renderEffectDAGs:outputSize:createTextureCacheHolder:] */

undefined1 *
FUN_10905db98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112700108;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    puVar3 = PTR_PTR_1126d1398;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__kCMTimeZero_110348670;
    uVar2 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    *(undefined8 *)((long)puVar1 + 0x48) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x50) = *(undefined8 *)(puVar3 + 0x10);
    if (param_7 != 0) {
      puVar3 = PTR_PTR_1126dd1b0;
      _objc_opt_new();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
      *(undefined **)((long)puVar1 + 0x70) = puVar3;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10905dcac; end: 10905dd6f; -[SCVideoTimedImageProcessor warmUpProcessing] */

void FUN_10905dcac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR_PTR_1126d13c0;
    _objc_alloc(PTR_PTR_1126d13c0);
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c0dfd40(lVar1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar1 + 0x18);
    }
    _objc_retain(uVar4);
    func_0x00010bfffe20(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),puVar2,
                        param_2,uVar4);
    func_0x00010befafa0(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10905dd70; end: 10905de5b; -[SCVideoTimedImageProcessor _renderEffectDagIndexContainingPresentationTime:] */

long FUN_10905dd70(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (0 < lVar1) {
    lVar1 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        _objc_retain();
LAB_10905dde4:
        lVar4 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        lVar4 = *(long *)(lVar2 + 8);
        _objc_retain(lVar4);
        if (lVar4 == 0) goto LAB_10905dde4;
        func_0x00010bdc1120(&uStack_70,lVar4);
      }
      uStack_88 = param_3[1];
      uStack_90 = *param_3;
      uStack_80 = param_3[2];
      puVar3 = &uStack_70;
      _CMTimeRangeContainsTime(puVar3,&uStack_90);
      _objc_release(lVar4);
      _objc_release(lVar2);
      if ((int)puVar3 != 0) {
        return lVar1;
      }
      lVar1 = lVar1 + 1;
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x00010bf529e0();
    } while (lVar1 < lVar2);
  }
  return -1;
}



/* Entry: 10905de5c; end: 10905e17b; -[SCVideoTimedImageProcessor _renderEffectDagWithPresentationTime:error:] */

void FUN_10905de5c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf529e0();
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (uVar5 <= uVar2) {
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = puVar7;
    _objc_release(param_1);
    uVar12 = 0;
    goto LAB_10905e130;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    _objc_retain();
LAB_10905df28:
    lVar13 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    lVar13 = *(long *)(lVar6 + 8);
    _objc_retain(lVar13);
    if (lVar13 == 0) goto LAB_10905df28;
    func_0x00010bdc1120(&uStack_80,lVar13);
  }
  _objc_release(lVar13);
  lVar13 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  uStack_98 = param_3[1];
  uStack_a0 = *param_3;
  uStack_90 = param_3[2];
  uStack_b8 = *(undefined8 *)(param_1 + 0x48);
  uStack_c0 = *(undefined8 *)(param_1 + 0x40);
  uStack_b0 = *(undefined8 *)(param_1 + 0x50);
  puVar8 = &uStack_a0;
  _CMTimeCompare(puVar8,&uStack_c0);
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_b0 = uStack_70;
  uStack_d8 = uStack_60;
  uStack_e0 = uStack_68;
  uStack_d0 = uStack_58;
  _CMTimeAdd(&uStack_a0,&uStack_c0,&uStack_e0);
  uStack_b8 = param_3[1];
  uStack_c0 = *param_3;
  uStack_b0 = param_3[2];
  puVar9 = &uStack_c0;
  _CMTimeCompare(puVar9,&uStack_a0);
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_b0 = uStack_70;
  uStack_d8 = uStack_60;
  uStack_e0 = uStack_68;
  uStack_d0 = uStack_58;
  _CMTimeAdd(&uStack_a0,&uStack_c0,&uStack_e0);
  uStack_b8 = param_3[1];
  uStack_c0 = *param_3;
  uStack_b0 = param_3[2];
  puVar10 = &uStack_c0;
  _CMTimeCompare(puVar10,&uStack_a0);
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  bVar4 = lVar3 + 1 != lVar13;
  uVar14 = 0;
  if (bVar4) {
    uVar14 = (uint)((int)puVar9 == 0);
  }
  uVar11 = 0;
  if (bVar4) {
    uVar11 = (uint)(0 < (int)puVar10);
  }
  if ((uVar14 - ((int)puVar8 >> 0x1f)) + uVar11 < 2) {
    uVar1 = 0;
    if (-1 < (int)puVar8) {
      uVar1 = uVar11 ^ 1;
    }
    if (uVar1 == 0) {
      func_0x00010c280ac0(param_1);
      uStack_98 = param_3[1];
      uStack_a0 = *param_3;
      uStack_90 = param_3[2];
      lVar13 = param_1;
      func_0x00010be8e160();
      puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (lVar13 < 0) {
        _objc_opt_class(param_1);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10905e06c;
      }
LAB_10905e0f8:
      *(long *)(param_1 + 0x18) = lVar13;
    }
    else if (uVar14 != 0) {
      func_0x00010c280ac0(param_1);
      lVar13 = *(long *)(param_1 + 0x18) + 1;
      goto LAB_10905e0f8;
    }
    uVar15 = param_3[1];
    uVar12 = *param_3;
    *(undefined8 *)(param_1 + 0x50) = param_3[2];
    *(undefined8 *)(param_1 + 0x48) = uVar15;
    *(undefined8 *)(param_1 + 0x40) = uVar12;
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0dfd40(uVar12);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
LAB_10905e06c:
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = puVar7;
    _objc_release(param_1);
    uVar12 = 0;
  }
  _objc_release(lVar6);
LAB_10905e130:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
  return;
}



/* Entry: 10905e17c; end: 10905e393; -[SCVideoTimedImageProcessor processImageWithInputPixelBuffer:outputPixelBuffer:orientation:presentationTime:presentationTimeOffset:transcodingTaskId:completionHandler:] */

void FUN_10905e17c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_stack_00000000;
  
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  lVar2 = param_1;
  func_0x00010be8e180();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
  _objc_retain();
  if (lVar2 == 0) {
    (**(code **)(in_stack_00000000 + 0x10))(in_stack_00000000,3,0);
  }
  else {
    _objc_autoreleasePoolPush();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(lVar2 + 0x18);
    _objc_retain();
    uVar7 = *(undefined8 *)(lVar2 + 0x20);
    _objc_retain(uVar7);
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    _objc_retain(uVar6);
    lVar3 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c299fc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar1);
    func_0x00010befafa0(*(undefined8 *)(param_1 + 8));
    _objc_release(uVar4);
    _objc_autoreleasePoolPop(uVar5);
  }
  _objc_release(lVar2);
  _objc_release(0);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x6);
  return;
}



/* Entry: 10905e394; end: 10905e62f; -[SCVideoTimedImageProcessor processImageWithGraphInputs:outputPixelBuffer:outputRenderer:presentationTime:transcodingTaskId:enableCPUFallback:completionHandler:] */

void FUN_10905e394(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  lVar1 = param_1;
  func_0x00010be8e180();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  if (lVar1 == 0) {
    (**(code **)(param_9 + 0x10))(param_9,3,0);
    goto LAB_10905e5c8;
  }
  uVar5 = *(undefined8 *)(lVar1 + 0x28);
  _objc_retain(uVar5);
  lVar2 = param_1;
  func_0x00010bdf1580();
  _objc_autoreleasePoolPush();
  lVar3 = param_1;
  if (param_4 == 0) {
    if (param_5 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c137080(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),uVar4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10905e590;
    }
    (**(code **)(param_9 + 0x10))(param_9,3,0);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137060(uVar4);
    _objc_retainAutoreleasedReturnValue();
LAB_10905e590:
    _objc_release(lVar3);
    func_0x00010befafa0(*(undefined8 *)(param_1 + 8));
    _objc_release(uVar4);
  }
  _objc_autoreleasePoolPop(lVar2);
  _objc_release(uVar5);
LAB_10905e5c8:
  _objc_release(lVar1);
  _objc_release(0);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10905e630; end: 10905e6bf; -[SCVideoTimedImageProcessor cancelProcessing] */

void FUN_10905e630(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    uVar1 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf529e0();
    if (uVar1 < uVar3) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0dfd40(uVar5,param_2,*(undefined8 *)(param_1 + 0x18));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c280ac0(param_1,param_2,uVar5);
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + 8);
      puVar4 = PTR_PTR_1126d13a8;
      _objc_opt_new(PTR_PTR_1126d13a8);
      func_0x00010befafa0(uVar5,param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
  return;
}



/* Entry: 10905e6c0; end: 10905e80b; -[SCVideoTimedImageProcessor unloadGPUCommandsOrRenderPassesForRenderEffectDAG:] */

void FUN_10905e6c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_3 + 0x18);
  }
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR_PTR_1126d13a0;
    _objc_alloc(PTR_PTR_1126d13a0);
    if (param_3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x18);
    }
    _objc_retain(uVar5);
    func_0x00010bfffdc0(puVar2,param_2,uVar5);
    func_0x00010befafa0(uVar4,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar5);
  }
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_3 + 0x28);
  }
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR_PTR_1126dd1b8;
    _objc_alloc(PTR_PTR_1126dd1b8);
    if (param_3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x28);
    }
    _objc_retain(uVar5);
    func_0x00010c03e100(puVar2,param_2,uVar5);
    func_0x00010befafa0(uVar4,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10905e80c; end: 10905e9c3; -[SCVideoTimedImageProcessor imageProcessCommandsInfo] */

void FUN_10905e80c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    *(undefined ***)(param_1 + 0x38) = &PTR____CFConstantStringClassReference_110daafd8;
    _objc_release(0);
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar8 = 0;
      do {
        lVar1 = *(long *)(param_1 + 0x10);
        func_0x00010c0dfd40(lVar1,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(lVar1 + 8);
        }
        _objc_retain(uVar7);
        _objc_release(lVar1);
        lVar1 = *(long *)(param_1 + 0x10);
        func_0x00010c0dfd40(lVar1,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(lVar1 + 0x18);
        }
        _objc_retain(uVar9);
        _objc_release(lVar1);
        uVar4 = uVar9;
        func_0x00010c0b8600(uVar9,param_2,&PTR___NSConcreteGlobalBlock_110ad65f0);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar4;
        func_0x00010bf446e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110f1df58);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c25ce40(uVar4,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0x38) = uVar4;
        _objc_release(uVar6);
        _objc_release(puVar3);
        _objc_release(uVar2);
        _objc_release(uVar9);
        _objc_release(uVar7);
        uVar8 = uVar8 + 1;
        uVar5 = *(ulong *)(param_1 + 0x10);
        func_0x00010bf529e0();
      } while (uVar8 < uVar5);
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 10905e9c4; end: 10905ea3f;  */

void FUN_10905e9c4(undefined8 param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_2);
  ppuVar1 = param_2;
  func_0x00010bf41ce0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc1338;
  }
  else {
    ppuVar2 = param_2;
    func_0x00010bf41ce0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10905ea40; end: 10905eab3; -[SCVideoTimedImageProcessor dealloc] */

void FUN_10905ea40(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010be8a4e0();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13a8;
  _objc_opt_new(PTR_PTR_1126d13a8);
  func_0x00010befafa0(uVar2);
  _objc_release(puVar1);
  puStack_38 = PTR_PTR_112700108;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10905eab4; end: 10905eb1f; -[SCVideoTimedImageProcessor _createPixelBufferPoolIfNeededWithSize:] */

void FUN_10905eab4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (param_3 != *(long *)(param_1 + 0x60) || param_4 != *(long *)(param_1 + 0x68)) {
    func_0x00010be8a4e0(param_1);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    return;
  }
  *(long *)(param_1 + 0x60) = param_3;
  *(long *)(param_1 + 0x68) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdf15d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__createPixelBufferPoolWithSize__112559f10,param_3,param_4);
  return;
}



/* Entry: 10905eb20; end: 10905eca7; -[SCVideoTimedImageProcessor _createPixelBufferPoolWithSize:] */

ulong FUN_10905eb20(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  _CVPixelBufferPoolCreate(uVar4,0,puVar3,param_1 + 0x58);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return (ulong)((int)uVar4 == 0);
  }
  ___stack_chk_fail();
  uVar5 = 0;
  if (*(long *)(puVar3 + 0x58) != 0) {
    _CVPixelBufferPoolFlush(*(long *)(puVar3 + 0x58),1);
    uVar5 = *(ulong *)(puVar3 + 0x58);
    _CVPixelBufferPoolRelease(uVar5);
    *(undefined8 *)(puVar3 + 0x58) = 0;
  }
  return uVar5;
}



/* Entry: 10905eca8; end: 10905ecdf; -[SCVideoTimedImageProcessor _releasePixelBufferPool] */

void FUN_10905eca8(long param_1)

{
  if (*(long *)(param_1 + 0x58) != 0) {
    _CVPixelBufferPoolFlush(*(long *)(param_1 + 0x58),1);
    _CVPixelBufferPoolRelease(*(undefined8 *)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}



/* Entry: 10905ece0; end: 10905ed33; -[SCVideoTimedImageProcessor .cxx_destruct] */

void FUN_10905ece0(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10905ed34; end: 10905eee3; -[SCVideoTimedImageProcessorAdaptor initWithInputTrackId:videoSegments:imageProcessQueue:renderEffectDAGs:outputSize:videoSourceSize:circumstanceEngine:] */

undefined1 *
FUN_10905ed34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_112700110;
  uStack_80 = param_5;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126da130;
    _objc_alloc();
    func_0x00010c01cd20(param_1,param_2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be48aa0(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar5;
    _objc_release(uVar2);
    puVar5 = puVar4;
    func_0x00010c154b60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined1 **)((long)puVar1 + 0x20) = puVar5;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_11;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10905eee4; end: 10905f30f; -[SCVideoTimedImageProcessorAdaptor _layerInstructionFromSegments:outputSize:videoSourceSize:] */

void FUN_10905eee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
  _objc_opt_new(PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18);
  puVar2 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
  _objc_opt_new(PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18);
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  _objc_retain(param_7);
  lStack_2b8 = param_7;
  func_0x00010bf52a60();
  if (lStack_2b8 != 0) {
    lVar5 = *plStack_1d0;
    do {
      lVar6 = 0;
      do {
        if (*plStack_1d0 != lVar5) {
          _objc_enumerationMutation(param_7);
        }
        lVar8 = *(long *)(lStack_1d8 + lVar6 * 8);
        if (lVar8 == 0) {
          _objc_retain(0);
LAB_10905efec:
          lVar9 = 0;
          uStack_1f8 = 0;
          uStack_1f0 = 0;
          uStack_1e8 = 0;
        }
        else {
          lVar9 = *(long *)(lVar8 + 0x28);
          _objc_retain(lVar9);
          if (lVar9 == 0) goto LAB_10905efec;
          func_0x00010bdc1140(&uStack_1f8,lVar9);
        }
        _objc_release(lVar9);
        FUN_109120dc4(param_1,param_2,param_3,param_4,lVar8,0);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bf529e0();
        if (lVar9 == 0) {
          uVar14 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
          uVar12 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
          uVar17 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
          uVar16 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
          uVar15 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
          uVar13 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
          uStack_248 = uStack_1f0;
          uStack_250 = uStack_1f8;
          uStack_240 = uStack_1e8;
          uStack_230 = uVar12;
          uStack_228 = uVar14;
          uStack_220 = uVar16;
          uStack_218 = uVar17;
          uStack_210 = uVar13;
          uStack_208 = uVar15;
          func_0x00010c219980(puVar1);
          uStack_248 = uStack_1f0;
          uStack_250 = uStack_1f8;
          uStack_240 = uStack_1e8;
          uStack_230 = uVar12;
          uStack_228 = uVar14;
          uStack_220 = uVar16;
          uStack_218 = uVar17;
          uStack_210 = uVar13;
          uStack_208 = uVar15;
          func_0x00010c219980(puVar2);
        }
        else {
          uStack_268 = 0;
          uStack_270 = 0;
          uStack_258 = 0;
          uStack_260 = 0;
          lStack_288 = 0;
          uStack_290 = 0;
          uStack_278 = 0;
          plStack_280 = (long *)0x0;
          _objc_retain(lVar8);
          lVar9 = lVar8;
          func_0x00010bf52a60();
          if (lVar9 != 0) {
            lVar11 = *plStack_280;
            do {
              lVar7 = 0;
              do {
                if (*plStack_280 != lVar11) {
                  _objc_enumerationMutation(lVar8);
                }
                lVar10 = *(long *)(lStack_288 + lVar7 * 8);
                lVar3 = lVar10;
                func_0x00010bfb0d80();
                _objc_retainAutoreleasedReturnValue();
                if (lVar3 == 0) {
                  uStack_230 = 0;
                  uStack_228 = 0;
                  uStack_220 = 0;
                }
                else {
                  func_0x00010bdc1140(&uStack_230,lVar3);
                }
                uStack_2a8 = uStack_1f0;
                uStack_2b0 = uStack_1f8;
                uStack_2a0 = uStack_1e8;
                _CMTimeAdd(&uStack_250,&uStack_2b0,&uStack_230);
                _objc_release(lVar3);
                func_0x00010c154b60();
                _objc_retainAutoreleasedReturnValue();
                if (lVar10 == 0) {
                  uStack_218 = 0;
                  uStack_220 = 0;
                  uStack_208 = 0;
                  uStack_210 = 0;
                  uStack_228 = 0;
                  uStack_230 = 0;
                  uStack_2a8 = uStack_248;
                  uStack_2b0 = uStack_250;
                  uStack_2a0 = uStack_240;
                  func_0x00010c219980(puVar1);
                  uStack_218 = 0;
                  uStack_220 = 0;
                  uStack_208 = 0;
                  uStack_210 = 0;
                  uStack_228 = 0;
                  uStack_230 = 0;
                }
                else {
                  uStack_228 = *(undefined8 *)(lVar10 + 0x10);
                  uStack_230 = *(undefined8 *)(lVar10 + 8);
                  uStack_218 = *(undefined8 *)(lVar10 + 0x20);
                  uStack_220 = *(undefined8 *)(lVar10 + 0x18);
                  uStack_208 = *(undefined8 *)(lVar10 + 0x30);
                  uStack_210 = *(undefined8 *)(lVar10 + 0x28);
                  uStack_2a8 = uStack_248;
                  uStack_2b0 = uStack_250;
                  uStack_2a0 = uStack_240;
                  func_0x00010c219980(puVar1);
                  uStack_228 = *(undefined8 *)(lVar10 + 0x40);
                  uStack_230 = *(undefined8 *)(lVar10 + 0x38);
                  uStack_218 = *(undefined8 *)(lVar10 + 0x50);
                  uStack_220 = *(undefined8 *)(lVar10 + 0x48);
                  uStack_208 = *(undefined8 *)(lVar10 + 0x60);
                  uStack_210 = *(undefined8 *)(lVar10 + 0x58);
                }
                uStack_2a8 = uStack_248;
                uStack_2b0 = uStack_250;
                uStack_2a0 = uStack_240;
                func_0x00010c219980(puVar2);
                _objc_release(lVar10);
                lVar7 = lVar7 + 1;
              } while (lVar9 != lVar7);
              lVar9 = lVar8;
              func_0x00010bf52a60();
            } while (lVar9 != 0);
          }
          _objc_release(lVar8);
        }
        _objc_release(lVar8);
        lVar6 = lVar6 + 1;
      } while (lVar6 != lStack_2b8);
      lStack_2b8 = param_7;
      func_0x00010bf52a60();
    } while (lStack_2b8 != 0);
  }
  _objc_release(param_7);
  puVar4 = PTR_PTR_1126b60f8;
  func_0x00010c0f2b40(PTR_PTR_1126b60f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2a1cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_7 + 0x10),PTR_s_warmUpProcessing_112686150);
  return;
}



/* Entry: 10905f310; end: 10905f317; -[SCVideoTimedImageProcessorAdaptor warmUpProcessing] */

void FUN_10905f310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a1cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_warmUpProcessing_112686150);
  return;
}



/* Entry: 10905f318; end: 10905f52f; -[SCVideoTimedImageProcessorAdaptor processImageWithInputPixelBuffer:outputPixelBuffer:orientation:presentationTime:presentationTimeOffset:transcodingTaskId:completionHandler:] */

void FUN_10905f318(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126dd1a8;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_alloc();
  func_0x00010c036180();
  uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_d0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_f8 = param_6[1];
  uStack_100 = *param_6;
  uStack_f0 = param_6[2];
  uStack_a0 = uStack_d0;
  uStack_98 = uStack_c8;
  uStack_90 = uStack_c0;
  uStack_88 = uStack_b8;
  uStack_80 = uStack_b0;
  uStack_78 = uStack_a8;
  func_0x00010bfcb740(*(undefined8 *)(param_1 + 0x18),param_2,&uStack_100,&uStack_a0,0,0);
  uStack_f8 = param_6[1];
  uStack_100 = *param_6;
  uStack_f0 = param_6[2];
  func_0x00010bfcb740(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_100,&uStack_d0,0,0);
  uStack_f8 = uStack_98;
  uStack_100 = uStack_a0;
  uStack_e8 = uStack_88;
  uStack_f0 = uStack_90;
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  func_0x00010c219960(puVar1,param_2,&uStack_100);
  uStack_f8 = uStack_c8;
  uStack_100 = uStack_d0;
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  uStack_d8 = uStack_a8;
  uStack_e0 = uStack_b0;
  func_0x00010c184da0(puVar1,param_2,&uStack_100);
  func_0x00010c1e1300(puVar1,param_2,param_7);
  _objc_release(param_7);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110f1df78,1,0);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = param_6[1];
  uStack_100 = *param_6;
  uStack_f0 = param_6[2];
  func_0x00010c114c40(param_1,param_2,puVar3,param_4,0,&uStack_100,param_8,uVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c114c40(*(undefined8 *)(puVar1 + 0x10));
  return;
}



/* Entry: 10905f530; end: 10905f56b; -[SCVideoTimedImageProcessorAdaptor processImageWithGraphInputs:outputPixelBuffer:outputRenderer:presentationTime:transcodingTaskId:enableCPUFallback:completionHandler:] */

void FUN_10905f530(long param_1)

{
  func_0x00010c114c40(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10905f56c; end: 10905f573; -[SCVideoTimedImageProcessorAdaptor cancelProcessing] */

void FUN_10905f56c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_cancelProcessing_1125a9498);
  return;
}



/* Entry: 10905f574; end: 10905f57b; -[SCVideoTimedImageProcessorAdaptor imageProcessCommandsInfo] */

void FUN_10905f574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_imageProcessCommandsInfo_1125d7b28);
  return;
}



/* Entry: 10905f57c; end: 10905f5cf; -[SCVideoTimedImageProcessorAdaptor .cxx_destruct] */

void FUN_10905f57c(long param_1)

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



/* Entry: 10905f5d0; end: 10905f8d7; -[SCVideoTranscodingInputMediaProvider initWithInputVideoAsset:rawVideoDataURL:videoTransform:assetAudioMix:videoPlaybackRate:videoCreateTimeUtc:staticFrameConfig:timeRange:inputImage:frameRate:duration:inputImageAudioAsset:assetReaderCompositionOutputBuilder:presentationTimeOffset:fileEmbeddedMetadata:] */

undefined8 *
FUN_10905f5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

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
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_112700118;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    puVar1[10] = param_12;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
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



/* Entry: 10905f8d8; end: 10905f8df; -[SCVideoTranscodingInputMediaProvider inputVideoAsset] */

undefined8 FUN_10905f8d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10905f8e0; end: 10905f8e7; -[SCVideoTranscodingInputMediaProvider rawVideoDataURL] */

undefined8 FUN_10905f8e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10905f8e8; end: 10905f8ef; -[SCVideoTranscodingInputMediaProvider videoTransform] */

undefined8 FUN_10905f8e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10905f8f0; end: 10905f8f7; -[SCVideoTranscodingInputMediaProvider assetAudioMix] */

undefined8 FUN_10905f8f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10905f8f8; end: 10905f8ff; -[SCVideoTranscodingInputMediaProvider videoPlaybackRate] */

undefined8 FUN_10905f8f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10905f900; end: 10905f907; -[SCVideoTranscodingInputMediaProvider videoCreateTimeUtc] */

undefined8 FUN_10905f900(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10905f908; end: 10905f90f; -[SCVideoTranscodingInputMediaProvider staticFrameConfig] */

undefined8 FUN_10905f908(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10905f910; end: 10905f917; -[SCVideoTranscodingInputMediaProvider timeRange] */

undefined8 FUN_10905f910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10905f918; end: 10905f91f; -[SCVideoTranscodingInputMediaProvider inputImage] */

undefined8 FUN_10905f918(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10905f920; end: 10905f927; -[SCVideoTranscodingInputMediaProvider frameRate] */

undefined8 FUN_10905f920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10905f928; end: 10905f92f; -[SCVideoTranscodingInputMediaProvider duration] */

undefined8 FUN_10905f928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10905f930; end: 10905f937; -[SCVideoTranscodingInputMediaProvider presentationTimeOffset] */

undefined8 FUN_10905f930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10905f938; end: 10905f93f; -[SCVideoTranscodingInputMediaProvider inputImageAudioAsset] */

undefined8 FUN_10905f938(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10905f940; end: 10905f947; -[SCVideoTranscodingInputMediaProvider fileEmbeddedMetadata] */

undefined8 FUN_10905f940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10905f948; end: 10905f94f; -[SCVideoTranscodingInputMediaProvider assetReaderCompositionOutputBuilder] */

undefined8 FUN_10905f948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10905f950; end: 10905fa0f; -[SCVideoTranscodingInputMediaProvider .cxx_destruct] */

void FUN_10905f950(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 10905fa10; end: 10905fa7f; +[SCVideoTranscodingRetryPolicy decisionForError:] */

undefined8 FUN_10905fa10(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010be41d40(param_1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      func_0x00010be41fa0(param_1,param_2,param_3);
      uVar2 = 2;
      if ((int)param_1 == 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10905fa80; end: 10905fabf; +[SCVideoTranscodingRetryPolicy retryDelayForAttemptIndex:baseDelayMs:] */

double FUN_10905fa80(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  param_4 = param_4 & ((long)param_4 >> 0x3f ^ 0xffffffffffffffffU);
  if (9999 < (long)param_4) {
    param_4 = 10000;
  }
  if (2 < param_3) {
    param_3 = 3;
  }
  return ((double)param_4 / 1000.0) * (double)(uint)(1 << (ulong)((uint)param_3 & 0x1f));
}



/* Entry: 10905fac0; end: 10905fbab; +[SCVideoTranscodingRetryPolicy _isMediaServicesReset:] */

bool FUN_10905fac0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0720c0();
  if ((int)lVar3 == 0) {
    _objc_release(lVar2);
  }
  else {
    lVar3 = param_3;
    func_0x00010bf3ec40();
    _objc_release(lVar2);
    if (lVar3 == -0x2e2b) {
      bVar1 = true;
      goto LAB_10905fb90;
    }
  }
  lVar2 = param_3;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3d120(param_1,param_2,lVar3);
  bVar1 = param_1 == -0x2e2b;
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_10905fb90:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10905fbac; end: 10905fcaf; +[SCVideoTranscodingRetryPolicy _isMissingVideoTrack:] */

ulong FUN_10905fbac(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf3ec40();
  if (uVar3 == 0x7d2) {
    uVar3 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((uVar1 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar3 = uVar1;
      _objc_opt_isKindOfClass(uVar1,puVar2);
      if ((uVar3 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar1;
        func_0x00010c0720c0(uVar1);
      }
      _objc_release(uVar1);
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10905fcb0; end: 10905fd2b; +[SCVideoTranscodingRetryPolicy _integerFromUserInfoValue:] */

ulong FUN_10905fcb0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      goto LAB_10905fd14;
    }
  }
  uVar2 = param_3;
  func_0x00010c067fc0(param_3);
LAB_10905fd14:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10905fd2c; end: 10905fde7; -[SCVideoTranscodingSession initWithInputMediaProvider:outputVideoURL:videoTranscodingConfiguration:imageProcessor:audioProcessingWrapper:audioProcessingSessionFactory:transcodingTaskId:circumstanceEngine:transcodingLogger:] */

long FUN_10905fd2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010c01e0c0(param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                      param_11);
  if (param_1 != 0) {
    uVar1 = param_4;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 10905fde8; end: 10905fea3; -[SCVideoTranscodingSession initWithInputMediaProvider:segmentDataOutputBlock:videoTranscodingConfiguration:imageProcessor:audioProcessingWrapper:audioProcessingSessionFactory:transcodingTaskId:circumstanceEngine:transcodingLogger:] */

long FUN_10905fde8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010c01e0c0(param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                      param_11);
  if (param_1 != 0) {
    uVar1 = param_4;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x188);
    *(undefined8 *)(param_1 + 0x188) = uVar1;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 10905fea4; end: 1090604ff; -[SCVideoTranscodingSession initWithInputMediaProvider:videoTranscodingConfiguration:imageProcessor:audioProcessingWrapper:audioProcessingSessionFactory:transcodingTaskId:circumstanceEngine:transcodingLogger:] */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000109060440 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 *
FUN_10905fea4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10)

{
  float fVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  long lVar12;
  undefined1 in_b0;
  undefined1 uVar13;
  undefined1 in_register_00005001;
  undefined1 uVar14;
  undefined1 in_register_00005002;
  undefined1 uVar15;
  undefined1 in_register_00005003;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
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
  puStack_68 = PTR_PTR_112700120;
  puVar7 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar7,PTR_s_init_1125d9248);
  if (puVar7 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar8 = puVar7[10];
    puVar7[10] = param_3;
    _objc_release(uVar8);
    lVar12 = param_3;
    func_0x00010c0661a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar12 == 0) {
      lVar12 = param_3;
      func_0x00010c065b20();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = puVar7[4];
      puVar7[4] = lVar12;
      _objc_release(uVar8);
      puVar9 = PTR__CGAffineTransformIdentity_110347008;
      uVar8 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      puVar7[0x13] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      puVar7[0x12] = uVar8;
      puVar7[0x15] = uVar6;
      puVar7[0x14] = uVar5;
      uVar8 = *(undefined8 *)(puVar9 + 0x20);
      uVar13 = (undefined1)uVar8;
      uVar14 = (undefined1)((ulong)uVar8 >> 8);
      uVar15 = (undefined1)((ulong)uVar8 >> 0x10);
      uVar16 = (undefined1)((ulong)uVar8 >> 0x18);
      puVar7[0x17] = *(undefined8 *)(puVar9 + 0x28);
      puVar7[0x16] = uVar8;
      lVar12 = param_3;
      func_0x00010bfb6f20();
      puVar7[0x11] = lVar12;
      lVar12 = param_3;
      func_0x00010bf8b160(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      puVar7[0x1b] = (double)(float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13)));
      _objc_release(lVar12);
      lVar12 = param_3;
      func_0x00010c065b40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = puVar7[5];
      puVar7[5] = lVar12;
      _objc_release(uVar8);
    }
    else {
      lVar12 = param_3;
      func_0x00010c0661a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = puVar7[1];
      puVar7[1] = lVar12;
      _objc_release(uVar8);
      lVar12 = param_3;
      func_0x00010c1204a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = puVar7[2];
      puVar7[2] = lVar12;
      _objc_release(uVar8);
      lVar12 = param_3;
      func_0x00010c29aae0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      puVar7[3] = (double)(float)CONCAT13(in_register_00005003,
                                          CONCAT12(in_register_00005002,
                                                   CONCAT11(in_register_00005001,in_b0)));
      _objc_release(lVar12);
      lVar12 = param_3;
      func_0x00010c29bb20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar12 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        func_0x00010bdc0fc0(&uStack_a0,lVar12);
      }
      uVar6 = uStack_88;
      uVar5 = uStack_90;
      uVar8 = uStack_a0;
      puVar7[0x13] = uStack_98;
      puVar7[0x12] = uVar8;
      puVar7[0x15] = uVar6;
      puVar7[0x14] = uVar5;
      uVar8 = uStack_80;
      uVar13 = (undefined1)uStack_80;
      uVar14 = (undefined1)((ulong)uStack_80 >> 8);
      uVar15 = (undefined1)((ulong)uStack_80 >> 0x10);
      uVar16 = (undefined1)((ulong)uStack_80 >> 0x18);
      uVar17 = (undefined1)((ulong)uStack_80 >> 0x20);
      uVar18 = (undefined1)((ulong)uStack_80 >> 0x28);
      uVar19 = (undefined1)((ulong)uStack_80 >> 0x30);
      uVar20 = (undefined1)((ulong)uStack_80 >> 0x38);
      puVar7[0x17] = uStack_78;
      puVar7[0x16] = uVar8;
      _objc_release(lVar12);
      lVar12 = param_3;
      func_0x00010bf0b5a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = puVar7[0x18];
      puVar7[0x18] = lVar12;
      _objc_release(uVar8);
      lVar12 = param_3;
      func_0x00010bf0af40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = puVar7[0x19];
      puVar7[0x19] = lVar12;
      _objc_release(uVar8);
      if (puVar7[1] == 0) {
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
      }
      else {
        func_0x00010bf8b160(&uStack_a0);
      }
      _CMTimeGetSeconds(&uStack_a0);
      puVar7[0x1b] = CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,CONCAT13(uVar16
                                                  ,CONCAT12(uVar15,CONCAT11(uVar14,uVar13)))))));
    }
    lVar12 = param_3;
    func_0x00010c252b60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar7[0x2d];
    puVar7[0x2d] = lVar12;
    _objc_release(uVar8);
    lVar12 = param_3;
    func_0x00010c299c00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar7[0x1a];
    puVar7[0x1a] = lVar12;
    _objc_release(uVar8);
    lVar12 = param_3;
    func_0x00010bfacb60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar7[0x2f];
    puVar7[0x2f] = lVar12;
    _objc_release(uVar8);
    _objc_retain(param_4);
    uVar8 = puVar7[0xb];
    puVar7[0xb] = param_4;
    _objc_release(uVar8);
    _objc_retain(param_5);
    uVar8 = puVar7[0xc];
    puVar7[0xc] = param_5;
    _objc_release(uVar8);
    _objc_retain(param_6);
    uVar8 = puVar7[0xd];
    puVar7[0xd] = param_6;
    _objc_release(uVar8);
    _objc_retain(param_7);
    uVar8 = puVar7[0xe];
    puVar7[0xe] = param_7;
    _objc_release(uVar8);
    lVar12 = puVar7[0xb];
    if (lVar12 == 0) {
      *(undefined1 *)(puVar7 + 7) = 0;
      bVar11 = 0;
    }
    else {
      *(undefined1 *)(puVar7 + 7) = *(undefined1 *)(lVar12 + 8);
      bVar11 = *(byte *)(lVar12 + 9);
    }
    *(byte *)((long)puVar7 + 0x39) = bVar11 & 1;
    if (param_4 == 0) {
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
    }
    else {
      auVar21 = NEON_fmov(0x3fe0000000000000,8);
      dVar2 = *(double *)(param_4 + 0x50) * auVar21._0_8_;
      dVar4 = *(double *)(param_4 + 0x58) * auVar21._8_8_;
      auVar21[8] = SUB81(dVar4,0);
      auVar21._0_8_ = dVar2;
      auVar21[9] = (char)((ulong)dVar4 >> 8);
      auVar21[10] = (char)((ulong)dVar4 >> 0x10);
      auVar21[0xb] = (char)((ulong)dVar4 >> 0x18);
      auVar21[0xc] = (char)((ulong)dVar4 >> 0x20);
      auVar21[0xd] = (char)((ulong)dVar4 >> 0x28);
      auVar21[0xe] = (char)((ulong)dVar4 >> 0x30);
      auVar21[0xf] = (char)((ulong)dVar4 >> 0x38);
      fVar1 = (float)dVar2;
      uVar13 = SUB41(fVar1,0);
      uVar14 = (undefined1)((uint)fVar1 >> 8);
      uVar15 = (undefined1)((uint)fVar1 >> 0x10);
      uVar16 = (undefined1)((uint)fVar1 >> 0x18);
      fVar1 = (float)auVar21._8_8_;
      uVar17 = SUB41(fVar1,0);
      uVar18 = (undefined1)((uint)fVar1 >> 8);
      uVar19 = (undefined1)((uint)fVar1 >> 0x10);
      uVar20 = (undefined1)((uint)fVar1 >> 0x18);
    }
    fVar1 = (float)(int)(float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13)));
    fVar3 = (float)(int)(float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)));
    fVar1 = fVar1 + fVar1;
    fVar3 = fVar3 + fVar3;
    uVar17 = (undefined1)((uint)fVar3 >> 8);
    uVar18 = (undefined1)((uint)fVar3 >> 0x10);
    uVar19 = (undefined1)((uint)fVar3 >> 0x18);
    puVar7[9] = (double)(float)(CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(SUB41(fVar3
                                                  ,0),fVar1)))) >> 0x20);
    puVar7[8] = (double)fVar1;
    puVar7[0x27] = 4;
    _objc_retain(param_8);
    uVar8 = puVar7[0x2e];
    puVar7[0x2e] = param_8;
    _objc_release(uVar8);
    puVar9 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar8 = puVar7[0xf];
    puVar7[0xf] = puVar9;
    _objc_release(uVar8);
    _objc_release(puVar10);
    puVar9 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar8 = puVar7[0x10];
    puVar7[0x10] = puVar9;
    _objc_release(uVar8);
    _objc_release(puVar10);
    puVar7[0x3b] = 0;
    puVar9 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar8 = puVar7[0x2b];
    puVar7[0x2b] = puVar9;
    _objc_release(uVar8);
    puVar9 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar8 = puVar7[0x2c];
    puVar7[0x2c] = puVar9;
    _objc_release(uVar8);
    _objc_retain(param_9);
    uVar8 = puVar7[0x30];
    puVar7[0x30] = param_9;
    _objc_release(uVar8);
    puVar9 = PTR_PTR_1126dd1c0;
    _objc_opt_new();
    uVar8 = puVar7[0x32];
    puVar7[0x32] = puVar9;
    _objc_release(uVar8);
    puVar9 = PTR_PTR_1126dd1c8;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar7[0x33];
    puVar7[0x33] = puVar9;
    _objc_release(uVar8);
    _objc_retain(param_10);
    uVar8 = puVar7[0x34];
    puVar7[0x34] = param_10;
    _objc_release(uVar8);
    puVar7[0x3c] = 0;
    uVar8 = param_9;
    func_0x00010c067f00();
    *(bool *)((long)puVar7 + 0x152) = 0 < (int)uVar8;
    uVar8 = param_9;
    func_0x00010bf1f440();
    if ((int)uVar8 != 0) {
      _objc_initWeak(&uStack_a0,puVar7);
      puVar9 = PTR_PTR_1126dd1d0;
      _objc_alloc();
      _objc_copyWeak(auStack_a8,&uStack_a0);
      func_0x00010c04b7e0(CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(SUB41(fVar3,0),
                                                                                   CONCAT13(uVar16,
                                                  CONCAT12(uVar15,CONCAT11(uVar14,uVar13))))))),
                          0x4024000000000000);
      uVar8 = puVar7[0x35];
      puVar7[0x35] = puVar9;
      _objc_release(uVar8);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(&uStack_a0);
    }
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 109060500; end: 10906059f;  */

void FUN_109060500(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  _objc_retain(param_5);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    func_0x00010bebf400(param_1,param_2);
  }
  _objc_release(param_2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1090605a0; end: 10906069f; -[SCVideoTranscodingSession _stallDetectorDidReportEvent:stage:detail:markCount:secondsSinceLastMark:didEnterBackgroundInGap:] */

void FUN_1090605a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_7 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  uVar5 = *(undefined8 *)(param_1 + 400);
  _objc_retain(param_4);
  ppuVar2 = &PTR____CFConstantStringClassReference_110f1e078;
  if (param_3 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110eeb618;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110f1e098;
  if (param_3 != 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f1e0b8;
  }
  FUN_109068798(uVar5,ppuVar1,ppuVar2,param_4,1);
  uVar5 = *(undefined8 *)(param_1 + 0x1a0);
  func_0x00010c25ce40(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _CACurrentMediaTime();
  func_0x00010c0df720(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb4e0(uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
  return;
}


