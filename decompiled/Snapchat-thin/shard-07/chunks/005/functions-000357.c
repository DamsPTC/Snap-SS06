/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10567e110; end: 10567e377; -[SCPercMLODINClassificationModel initWithModelKey:modelId:deliverableModel:odinConfiguration:cacheDirectory:] */

undefined1 *
FUN_10567e110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e98e0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar5);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined8 *)((long)puVar1 + 0xa0) = uVar2;
    _objc_release(uVar5);
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined8 *)((long)puVar1 + 0x98) = uVar2;
    _objc_release(uVar5);
    func_0x000105687f6c((undefined1 *)((long)puVar1 + 0x30),0);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c1424c0();
    *(char *)((long)puVar1 + 0x20) = (char)uVar5;
    _objc_release(uVar2);
    *(char *)((long)puVar1 + 0x21) = *(char *)((long)puVar1 + 0x20);
    if (*(char *)((long)puVar1 + 0x20) == '\x01') {
      *(undefined8 *)((long)puVar1 + 0x28) = 3;
    }
    else {
      uVar2 = param_6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c0a98c0();
      *(undefined8 *)((long)puVar1 + 0x28) = uVar5;
      _objc_release(uVar2);
    }
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
    *(undefined4 *)((long)puVar1 + 0x58) = 0;
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10567e378; end: 10567e3ef; -[SCPercMLODINClassificationModel dealloc] */

void FUN_10567e378(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be8a600();
  func_0x00010be8a5a0(param_1);
  puStack_28 = PTR_PTR_1126e98e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10567e3f0; end: 10567e443; -[SCPercMLODINClassificationModel _releaseYuvPixelBufferPool] */

void FUN_10567e3f0(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x58);
  if (*(long *)(param_1 + 0x40) != 0) {
    _CVPixelBufferPoolRelease();
    *(long *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x58);
  return;
}



/* Entry: 10567e444; end: 10567e47f; -[SCPercMLODINClassificationModel _releaseVImageScaleCbCrTempBuffer] */

void FUN_10567e444(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x58);
  if (*(long *)(param_1 + 0x60) != 0) {
    _free();
    *(long *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x58);
  return;
}



/* Entry: 10567e480; end: 10567e61f; -[SCPercMLODINClassificationModel predictMultiClassificationsWithBatchPixelBuffers:imageProcessingConfig:] */

void FUN_10567e480(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_10567e620;
    uStack_50 = 0x10567e630;
    uStack_48 = 0;
    _objc_initWeak(auStack_78,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f8240(uVar1);
    uVar1 = puStack_68[5];
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10567e620; end: 10567e637;  */

void FUN_10567e620(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10567e638; end: 10567ea4f;  */

void FUN_10567e638(long param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  uint *unaff_x21;
  undefined8 unaff_x23;
  long unaff_x24;
  ulong uVar17;
  long lVar18;
  uint *puStack_360;
  uint *puStack_358;
  uint *puStack_350;
  uint *puStack_348;
  uint *puStack_340;
  uint *puStack_338;
  uint *puStack_330;
  uint *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_298;
  uint *puStack_290;
  uint *puStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined4 *puStack_260;
  uint *puStack_258;
  undefined8 *puStack_250;
  ulong uStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  long lStack_228;
  undefined *puStack_220;
  ulong uStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  uint uStack_1a0;
  int iStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  undefined8 auStack_150 [2];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_228 = *(long *)(param_1 + 0x20);
  _os_unfair_lock_lock(lStack_228 + 0x38);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar18 = param_1 + 0x40;
  puStack_220 = puVar5;
  _objc_loadWeakRetained();
  lStack_210 = lVar18;
  if (lVar18 != 0) {
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    unaff_x19 = *(ulong *)(param_1 + 0x28);
    _objc_retain(unaff_x19);
    uVar6 = unaff_x19;
    uStack_218 = unaff_x19;
    func_0x00010bf52a60();
    if (uVar6 != 0) {
      lVar18 = *plStack_130;
      unaff_x19 = (ulong)&uStack_200 | 8;
      unaff_x21 = &uStack_1a0;
      unaff_x20 = &uStack_1b0;
      do {
        uVar17 = 0;
        do {
          if (*plStack_130 != lVar18) {
            _objc_enumerationMutation(uStack_218);
          }
          param_2 = *(uint **)(lStack_138 + uVar17 * 8);
          func_0x00010c0fca00();
          if (param_2 != (uint *)0x0) {
            FUN_10567ea50(&uStack_1a0);
            uStack_200 = CONCAT44(iStack_19c,uStack_1a0);
            uStack_1f8 = uStack_198;
            uStack_1e8 = uStack_188;
            uStack_1f0 = uStack_190;
            uStack_1d8 = uStack_178;
            uStack_1e0 = uStack_180;
            lStack_1c8 = lStack_168;
            uStack_1d0 = uStack_170;
            uStack_1b0 = 0;
            uStack_1a8 = 0;
            if (lStack_168 != 0) {
              piVar1 = (int *)(lStack_168 + 0x14);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            uStack_1c0 = unaff_x19;
            puStack_1b8 = unaff_x20;
            if (iStack_19c < 3) {
              uStack_1b0 = *puStack_158;
              uStack_1a8 = puStack_158[1];
            }
            else {
              uStack_200 = (ulong)uStack_1a0;
              param_2 = &uStack_1a0;
              func_0x000109a84868(&uStack_200);
            }
            func_0x00010bf081c0(*(undefined8 *)(param_1 + 0x30));
            func_0x00010bf297c0(*(undefined8 *)(param_1 + 0x30));
            lStack_208 = 0;
            unaff_x24 = lStack_210;
            func_0x00010be61660();
            _objc_retainAutoreleasedReturnValue();
            lVar15 = lStack_208;
            _objc_retain(lStack_208);
            if (lStack_1c8 != 0) {
              piVar1 = (int *)(lStack_1c8 + 0x14);
              do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 == 0) {
                func_0x000109a848d4(&uStack_200);
              }
            }
            lStack_1c8 = 0;
            uStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_1d8 = 0;
            uStack_1e0 = 0;
            if (0 < uStack_200._4_4_) {
              lVar14 = 0;
              do {
                *(undefined4 *)(uStack_1c0 + lVar14 * 4) = 0;
                lVar14 = lVar14 + 1;
              } while (lVar14 < uStack_200._4_4_);
            }
            if (puStack_1b8 != unaff_x20 && puStack_1b8 != (undefined8 *)0x0) {
              _free(puStack_1b8[-1]);
            }
            if ((lVar15 == 0) && (lVar14 = unaff_x24, func_0x00010bf529e0(), lVar14 != 0)) {
              func_0x00010befa120(puStack_220);
            }
            _objc_release(unaff_x24);
            _objc_release(lVar15);
            if (lStack_168 != 0) {
              piVar1 = (int *)(lStack_168 + 0x14);
              do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 == 0) {
                func_0x000109a848d4(&uStack_1a0);
              }
            }
            lStack_168 = 0;
            uStack_188 = 0;
            uStack_190 = 0;
            uStack_178 = 0;
            uStack_180 = 0;
            if (0 < iStack_19c) {
              lVar15 = 0;
              do {
                *(undefined4 *)(lStack_160 + lVar15 * 4) = 0;
                lVar15 = lVar15 + 1;
              } while (lVar15 < iStack_19c);
            }
            if (puStack_158 != auStack_150 && puStack_158 != (undefined8 *)0x0) {
              _free(puStack_158[-1]);
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar6);
        uVar6 = uStack_218;
        func_0x00010bf52a60();
      } while (uVar6 != 0);
    }
    unaff_x23 = 0;
    _objc_release(uStack_218);
  }
  puVar5 = PTR_PTR_1126ae750;
  func_0x00010c2468a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar16 = *(undefined8 *)(lVar18 + 0x28);
  *(undefined **)(lVar18 + 0x28) = puVar5;
  _objc_release(uVar16);
  _objc_release(lStack_210);
  _objc_release(puStack_220);
  puVar7 = (undefined4 *)(lStack_228 + 0x38);
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(uStack_218);
  _objc_release(lStack_210);
  _objc_release(puStack_220);
  _os_unfair_lock_unlock(lStack_228 + 0x38);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_238 = FUN_10567ea50;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_270 = unaff_x24;
  uStack_268 = unaff_x23;
  puStack_260 = puVar7;
  puStack_258 = unaff_x21;
  puStack_250 = unaff_x20;
  uStack_248 = unaff_x19;
  puStack_240 = &stack0xfffffffffffffff0;
  _CVPixelBufferLockBaseAddress(param_2,0);
  puVar9 = param_2;
  _CVPixelBufferGetWidth();
  puVar10 = param_2;
  _CVPixelBufferGetHeight();
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  *puVar8 = 0x42ff0000;
  *(undefined8 *)(puVar8 + 3) = 0;
  *(undefined8 *)(puVar8 + 1) = 0;
  *(undefined8 *)(puVar8 + 7) = 0;
  *(undefined8 *)(puVar8 + 5) = 0;
  *(undefined8 *)(puVar8 + 0xb) = 0;
  *(undefined8 *)(puVar8 + 9) = 0;
  *(undefined8 *)(puVar8 + 0x14) = 0;
  *(undefined8 *)(puVar8 + 0xe) = 0;
  *(undefined8 *)(puVar8 + 0xc) = 0;
  *(undefined4 **)(puVar8 + 0x10) = puVar8 + 2;
  *(undefined4 **)(puVar8 + 0x12) = puVar8 + 0x14;
  *(undefined8 *)(puVar8 + 0x16) = 0;
  uStack_298 = CONCAT44((int)puVar9,(int)puVar10);
  func_0x000109a83fd0(puVar8,2,&uStack_298,0x18);
  func_0x000109a48880(puVar8,&uStack_320);
  uStack_298 = *(undefined8 *)(puVar8 + 4);
  lStack_280 = (long)puVar9 << 2;
  puVar11 = param_2;
  puStack_290 = puVar10;
  puStack_288 = puVar9;
  _CVPixelBufferGetBaseAddressOfPlane(param_2,0);
  puVar12 = param_2;
  _CVPixelBufferGetBytesPerRowOfPlane(param_2,0);
  puVar13 = param_2;
  puStack_340 = puVar11;
  puStack_338 = puVar10;
  puStack_330 = puVar9;
  puStack_328 = puVar12;
  _CVPixelBufferGetBaseAddressOfPlane(param_2,1);
  puVar11 = param_2;
  _CVPixelBufferGetBytesPerRowOfPlane(param_2,1);
  puStack_360 = puVar13;
  puStack_358 = puVar10;
  puStack_350 = puVar9;
  puStack_348 = puVar11;
  _vImageConvert_YpCbCrToARGB_GenerateConversion
            (*(undefined8 *)PTR__kvImage_YpCbCrToARGBMatrix_ITU_R_601_4_110347850,&UNK_10ddb84c8,
             &uStack_320,4,0,0);
  _vImageConvert_420Yp8_CbCr8ToARGB8888
            (&puStack_340,&puStack_360,&uStack_298,&uStack_320,&UNK_10ddb84e8,0xff,0x10);
  lVar18 = 0;
  _CVPixelBufferUnlockBaseAddress();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return;
  }
  ___stack_chk_fail();
  FUN_10567aa40(puVar8);
  __Unwind_Resume(param_2);
  _objc_retain(*(undefined8 *)(lVar18 + 0x20));
  _objc_retain(*(undefined8 *)(lVar18 + 0x28));
  _objc_retain(*(undefined8 *)(lVar18 + 0x30));
  __Block_object_assign(param_2 + 0xe,*(undefined8 *)(lVar18 + 0x38),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_2 + 0x10,lVar18 + 0x40);
  return;
}



/* Entry: 10567ea50; end: 10567ec0b;  */

void FUN_10567ea50(undefined4 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _CVPixelBufferLockBaseAddress(param_2,0);
  lVar5 = param_2;
  _CVPixelBufferGetWidth();
  lVar1 = param_2;
  _CVPixelBufferGetHeight();
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  uStack_68 = CONCAT44((int)lVar5,(int)lVar1);
  func_0x000109a83fd0(param_1,2,&uStack_68,0x18);
  func_0x000109a48880(param_1,&uStack_f0);
  uStack_68 = *(undefined8 *)(param_1 + 4);
  lStack_50 = lVar5 << 2;
  lVar2 = param_2;
  lStack_60 = lVar1;
  lStack_58 = lVar5;
  _CVPixelBufferGetBaseAddressOfPlane(param_2,0);
  lVar3 = param_2;
  _CVPixelBufferGetBytesPerRowOfPlane(param_2,0);
  lVar4 = param_2;
  lStack_110 = lVar2;
  lStack_108 = lVar1;
  lStack_100 = lVar5;
  lStack_f8 = lVar3;
  _CVPixelBufferGetBaseAddressOfPlane(param_2,1);
  lVar2 = param_2;
  _CVPixelBufferGetBytesPerRowOfPlane(param_2,1);
  lStack_130 = lVar4;
  lStack_128 = lVar1;
  lStack_120 = lVar5;
  lStack_118 = lVar2;
  _vImageConvert_YpCbCrToARGB_GenerateConversion
            (*(undefined8 *)PTR__kvImage_YpCbCrToARGBMatrix_ITU_R_601_4_110347850,&UNK_10ddb84c8,
             &uStack_f0,4,0,0);
  _vImageConvert_420Yp8_CbCr8ToARGB8888
            (&lStack_110,&lStack_130,&uStack_68,&uStack_f0,&UNK_10ddb84e8,0xff,0x10);
  lVar5 = 0;
  _CVPixelBufferUnlockBaseAddress();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_10567aa40(param_1);
  __Unwind_Resume(param_2);
  _objc_retain(*(undefined8 *)(lVar5 + 0x20));
  _objc_retain(*(undefined8 *)(lVar5 + 0x28));
  _objc_retain(*(undefined8 *)(lVar5 + 0x30));
  __Block_object_assign(param_2 + 0x38,*(undefined8 *)(lVar5 + 0x38),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_2 + 0x40,lVar5 + 0x40);
  return;
}



/* Entry: 10567ec0c; end: 10567ec9f;  */

void FUN_10567ec0c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 10567eca0; end: 10567ee3f; -[SCPercMLODINClassificationModel predictClassificationsWithBatchPixelBuffers:imageProcessingConfig:] */

void FUN_10567eca0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_10567e620;
    uStack_50 = 0x10567e630;
    uStack_48 = 0;
    _objc_initWeak(auStack_78,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f8240(uVar1);
    uVar1 = puStack_68[5];
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10567ee40; end: 10567f08f;  */

void FUN_10567ee40(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
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
  lVar9 = *(long *)(param_1 + 0x20);
  _os_unfair_lock_lock(lVar9 + 0x38);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar4 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    unaff_x22 = *(long *)(param_1 + 0x28);
    _objc_retain(unaff_x22);
    param_4 = auStack_f0;
    lVar7 = unaff_x22;
    func_0x00010bf52a60();
    if (lVar7 != 0) {
      lVar10 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(unaff_x22);
          }
          func_0x00010c0fca00(*(undefined8 *)(lStack_128 + lVar11 * 8));
          func_0x00010bf081c0(*(undefined8 *)(param_1 + 0x30));
          func_0x00010bf297c0(*(undefined8 *)(param_1 + 0x30));
          uStack_138 = 0;
          lVar1 = lVar4;
          func_0x00010be9bbe0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = uStack_138;
          _objc_retain(uStack_138);
          lVar2 = lVar1;
          func_0x00010bf529e0();
          if (lVar2 != 0) {
            func_0x00010befa120(puVar8);
          }
          _objc_release(lVar1);
          _objc_release(unaff_x24);
          lVar11 = lVar11 + 1;
        } while (lVar7 != lVar11);
        param_4 = auStack_f0;
        lVar7 = unaff_x22;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
    }
    unaff_x23 = 0;
    _objc_release(unaff_x22);
  }
  puVar3 = PTR_PTR_1126ae750;
  puVar5 = puVar8;
  func_0x00010c2468a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar3;
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(puVar8);
  lVar7 = lVar9 + 0x38;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x22);
  _objc_release(lVar4);
  _objc_release(puVar8);
  _os_unfair_lock_unlock(lVar9 + 0x38);
  lVar9 = lVar7;
  __Unwind_Resume();
  pcStack_148 = FUN_10567f090;
  uStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  lStack_170 = unaff_x22;
  lStack_168 = lVar7;
  lStack_160 = lVar4;
  puStack_158 = puVar8;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(param_4);
  if (puVar5 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puStack_1a8 = &uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a0 = 0x3032000000;
    pcStack_198 = FUN_10567e620;
    uStack_190 = 0x10567e630;
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puStack_188 = puVar8;
    _objc_initWeak(auStack_1b8,lVar9);
    uVar6 = *(undefined8 *)(lVar9 + 0x10);
    _objc_copyWeak(auStack_1c0,auStack_1b8);
    _objc_retain(puVar5);
    _objc_retain(param_4);
    func_0x00010c0f8240(uVar6);
    lVar4 = puStack_1a8[5];
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR_PTR_1126ae750;
      func_0x00010c2468a0(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_4);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_1c0);
    _objc_destroyWeak(auStack_1b8);
    __Block_object_dispose(&uStack_1b0,8);
    _objc_release(puStack_188);
  }
  _objc_release(param_4);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10567f090; end: 10567f26f; -[SCPercMLODINClassificationModel runDeepScanWithBatchImages:imageProcessingConfig:] */

void FUN_10567f090(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_10567e620;
    uStack_50 = 0x10567e630;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puStack_48 = puVar2;
    _objc_initWeak(auStack_78,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f8240(uVar3);
    lVar1 = puStack_68[5];
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR_PTR_1126ae750;
      func_0x00010c2468a0(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(puStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10567f270; end: 10567f43f;  */

void FUN_10567f270(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 unaff_x22;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 unaff_x23;
  long unaff_x24;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x20);
  _os_unfair_lock_lock(lVar6 + 0x38);
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    unaff_x20 = *(long *)(param_1 + 0x28);
    _objc_retain(unaff_x20);
    param_3 = &uStack_130;
    param_4 = auStack_e8;
    lVar1 = unaff_x20;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(unaff_x20);
          }
          uStack_138 = 0;
          unaff_x24 = lVar3;
          func_0x00010bdf8fe0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = uStack_138;
          _objc_retain(uStack_138);
          if (unaff_x24 != 0) {
            func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
          }
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
          lVar8 = lVar8 + 1;
        } while (lVar1 != lVar8);
        param_3 = &uStack_130;
        param_4 = auStack_e8;
        lVar1 = unaff_x20;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    unaff_x22 = 0;
    _objc_release(unaff_x20);
  }
  _objc_release(lVar3);
  lVar1 = lVar6 + 0x38;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x20);
  _objc_release(lVar3);
  _os_unfair_lock_unlock(lVar6 + 0x38);
  lVar6 = lVar1;
  __Unwind_Resume();
  pcStack_148 = FUN_10567f440;
  lStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  uStack_170 = unaff_x22;
  lStack_168 = lVar1;
  lStack_160 = unaff_x20;
  lStack_158 = lVar3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == (undefined8 *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = param_3;
    func_0x00010bf529e0();
    puVar4 = (undefined *)0x0;
    if ((param_4 != (undefined1 *)0x0) && (puVar2 != (undefined8 *)0x0)) {
      puStack_1a8 = &uStack_1b0;
      uStack_1b0 = 0;
      uStack_1a0 = 0x3032000000;
      pcStack_198 = FUN_10567e620;
      uStack_190 = 0x10567e630;
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puStack_188 = puVar4;
      _objc_initWeak(auStack_1b8,lVar6);
      uVar5 = *(undefined8 *)(lVar6 + 0x10);
      _objc_copyWeak(auStack_1c0,auStack_1b8);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c0f8240(uVar5);
      lVar3 = puStack_1a8[5];
      func_0x00010bf529e0();
      if (lVar3 == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        puVar4 = PTR_PTR_1126ae750;
        func_0x00010c2468a0(PTR_PTR_1126ae750);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_1c0);
      _objc_destroyWeak(auStack_1b8);
      __Block_object_dispose(&uStack_1b0,8);
      _objc_release(puStack_188);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10567f440; end: 10567f637; -[SCPercMLODINClassificationModel runEmbeddingAndCaptionSearchForBatchImages:imageProcessingConfig:] */

void FUN_10567f440(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf529e0();
    puVar2 = (undefined *)0x0;
    if ((param_4 != 0) && (lVar1 != 0)) {
      puStack_68 = &uStack_70;
      uStack_70 = 0;
      uStack_60 = 0x3032000000;
      pcStack_58 = FUN_10567e620;
      uStack_50 = 0x10567e630;
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puStack_48 = puVar2;
      _objc_initWeak(auStack_78,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      _objc_copyWeak(auStack_80,auStack_78);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c0f8240(uVar3);
      lVar1 = puStack_68[5];
      func_0x00010bf529e0();
      if (lVar1 == 0) {
        puVar2 = (undefined *)0x0;
      }
      else {
        puVar2 = PTR_PTR_1126ae750;
        func_0x00010c2468a0(PTR_PTR_1126ae750);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
      __Block_object_dispose(&uStack_70,8);
      _objc_release(puStack_48);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10567f638; end: 10567f803;  */

void FUN_10567f638(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 unaff_x22;
  undefined8 uVar3;
  long unaff_x23;
  long unaff_x24;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x20);
  _os_unfair_lock_lock(lVar4 + 0x38);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    unaff_x20 = *(long *)(param_1 + 0x28);
    _objc_retain(unaff_x20);
    param_3 = &uStack_130;
    param_4 = auStack_e8;
    lVar2 = unaff_x20;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar5 = *plStack_120;
      do {
        lVar6 = 0;
        do {
          if (*plStack_120 != lVar5) {
            _objc_enumerationMutation(unaff_x20);
          }
          lStack_138 = 0;
          unaff_x23 = lVar1;
          func_0x00010be076a0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = lStack_138;
          _objc_retain(lStack_138);
          if ((unaff_x24 == 0) && (unaff_x23 != 0)) {
            func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
          }
          _objc_release(unaff_x23);
          _objc_release(unaff_x24);
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
        param_3 = &uStack_130;
        param_4 = auStack_e8;
        lVar2 = unaff_x20;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    unaff_x22 = 0;
    _objc_release(unaff_x20);
  }
  _objc_release(lVar1);
  lVar2 = lVar4 + 0x38;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x20);
  _objc_release(lVar1);
  _os_unfair_lock_unlock(lVar4 + 0x38);
  lVar4 = lVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_10567f804;
  lStack_180 = unaff_x24;
  lStack_178 = unaff_x23;
  uStack_170 = unaff_x22;
  lStack_168 = lVar2;
  lStack_160 = unaff_x20;
  lStack_158 = lVar1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    puStack_1a8 = &uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a0 = 0x3032000000;
    pcStack_198 = FUN_10567e620;
    uStack_190 = 0x10567e630;
    uStack_188 = 0;
    _objc_initWeak(auStack_1b8,lVar4);
    uVar3 = *(undefined8 *)(lVar4 + 0x10);
    _objc_copyWeak(auStack_1c0,auStack_1b8);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f8240(uVar3);
    uVar3 = puStack_1a8[5];
    _objc_retain(uVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_1c0);
    _objc_destroyWeak(auStack_1b8);
    __Block_object_dispose(&uStack_1b0,8);
    _objc_release(uStack_188);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10567f804; end: 10567f9a3; -[SCPercMLODINClassificationModel predictClassificationsWithBatchImages:imageProcessingConfig:] */

void FUN_10567f804(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_10567e620;
    uStack_50 = 0x10567e630;
    uStack_48 = 0;
    _objc_initWeak(auStack_78,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f8240(uVar1);
    uVar1 = puStack_68[5];
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10567f9a4; end: 10567fc23;  */

void FUN_10567f9a4(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  double dVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x21;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_3 + 0x20);
  _os_unfair_lock_lock(lVar10 + 0x38);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar3 = param_3 + 0x40;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    unaff_x21 = *(long *)(param_3 + 0x28);
    _objc_retain(unaff_x21);
    lVar8 = unaff_x21;
    func_0x00010bf52a60(unaff_x21,param_4,&uStack_140,auStack_100,0x10);
    if (lVar8 != 0) {
      lVar11 = *plStack_130;
      do {
        lVar12 = 0;
        do {
          if (*plStack_130 != lVar11) {
            _objc_enumerationMutation(unaff_x21);
          }
          uVar9 = *(undefined8 *)(lStack_138 + lVar12 * 8);
          uVar4 = *(ulong *)(param_3 + 0x30);
          if (uVar4 == 0) {
            func_0x00010c23d0a0(uVar9);
            dVar1 = (double)CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,CONCAT13
                                                  (uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))))
                                                  )));
            func_0x00010c23d0a0(uVar9);
            uVar4 = (ulong)(param_2 < dVar1);
          }
          else {
            func_0x00010bf081c0();
          }
          func_0x00010bf297c0(*(undefined8 *)(param_3 + 0x30));
          uStack_148 = 0;
          lVar5 = lVar3;
          func_0x00010be9bc00(lVar3,param_4,uVar9,uVar4,&uStack_148);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uStack_148;
          _objc_retain(uStack_148);
          lVar6 = lVar5;
          func_0x00010bf529e0();
          if (lVar6 != 0) {
            func_0x00010befa120(puVar2,param_4,lVar5);
          }
          _objc_release(lVar5);
          _objc_release(uVar9);
          lVar12 = lVar12 + 1;
        } while (lVar8 != lVar12);
        lVar8 = unaff_x21;
        func_0x00010bf52a60(unaff_x21,param_4,&uStack_140,auStack_100,0x10);
      } while (lVar8 != 0);
    }
    _objc_release(unaff_x21);
  }
  puVar7 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750,param_4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_3 + 0x38) + 8);
  uVar9 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar7;
  _objc_release(uVar9);
  _objc_release(lVar3);
  _objc_release(puVar2);
  lVar8 = lVar10 + 0x38;
  _os_unfair_lock_unlock(lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x21);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _os_unfair_lock_unlock(lVar10 + 0x38);
  __Unwind_Resume(lVar8);
  func_0x00010c1064a0();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10567fc24; end: 10567fc43; -[SCPercMLODINClassificationModel predictClassificationsWithBatchImages:] */

void FUN_10567fc24(void)

{
  func_0x00010c1064a0();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10567fc44; end: 10568006f; -[SCPercMLODINClassificationModel predictAccumulatedClassificationsWithBatchImages:] */

void FUN_10567fc44(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *unaff_x21;
  undefined *puVar11;
  long lVar12;
  undefined8 uStack_2b0;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    func_0x00010c106460();
    _objc_retainAutoreleasedReturnValue();
    puStack_198 = &uStack_1a0;
    uStack_1a0 = 0;
    uStack_190 = 0x3032000000;
    pcStack_188 = FUN_10567e620;
    uStack_180 = 0x10567e630;
    uStack_178 = 0;
    puStack_1b8 = &uStack_1c0;
    uStack_1c0 = 0;
    uStack_1b0 = 0x2020000000;
    uStack_1a8 = 0;
    func_0x00010c0bf0a0();
    if (puStack_1b8[3] == 0) {
      unaff_x21 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init();
      lVar8 = puStack_198[5];
      _objc_retain(lVar8);
      lVar3 = lVar8;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar8);
          }
          lVar12 = *(long *)(lVar9 * 8);
          _objc_retain(lVar12);
          lVar4 = lVar12;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (lVar4 != 0) {
            lVar10 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar12);
              }
              puVar11 = unaff_x21;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar12;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              if ((puVar11 == (undefined *)0x0) ||
                 (lVar6 = lVar5, func_0x00010bf433a0(), lVar6 == 1)) {
                func_0x00010c1d0640(unaff_x21);
              }
              _objc_release(lVar5);
              _objc_release(puVar11);
              lVar10 = lVar10 + 1;
            } while (lVar4 != lVar10);
            lVar4 = lVar12;
            func_0x00010bf52a60();
          }
          _objc_release(lVar12);
          lVar9 = lVar9 + 1;
        } while (lVar9 != lVar3);
        lVar3 = lVar8;
        func_0x00010bf52a60();
      }
      _objc_release(lVar8);
      puVar11 = PTR_PTR_1126ae750;
      func_0x00010c2468a0(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x21);
    }
    else {
      puVar11 = PTR_PTR_1126ae750;
      func_0x00010bf993e0(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    __Block_object_dispose(&uStack_1c0,8);
    __Block_object_dispose(&uStack_1a0,8);
    _objc_release(uStack_178);
    _objc_release(param_1);
    uStack_2b0 = param_1;
  }
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x21);
  __Block_object_dispose(&uStack_1c0,8);
  uVar7 = 8;
  __Block_object_dispose(&uStack_1a0);
  _objc_release(uStack_178);
  _objc_release(uStack_2b0);
  _objc_release(param_3);
  __Unwind_Resume();
  *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 8) + 0x18) = uVar7;
  return;
}



/* Entry: 105680070; end: 10568007f;  */

void FUN_105680070(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 105680080; end: 1056800b7;  */

void FUN_105680080(long param_1,undefined8 param_2)

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



/* Entry: 1056800b8; end: 1056800bf; -[SCPercMLODINClassificationModel supportPixelBufferFastInference] */

undefined8 FUN_1056800b8(void)

{
  return 1;
}



/* Entry: 1056800c0; end: 10568014f; -[SCPercMLODINClassificationModel cancelInference] */

void FUN_1056800c0(long *param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  
  _os_unfair_lock_lock(param_1 + 7);
  if (param_1[6] != 0) {
    plVar2 = param_1;
    func_0x00010be9ac00();
    lVar3 = *plVar2;
    piVar1 = *(int **)(lVar3 + 0x38);
    for (piVar4 = *(int **)(lVar3 + 0x30); piVar4 != piVar1; piVar4 = piVar4 + 1) {
      (**(code **)(**(long **)(*(long *)(lVar3 + 0x18) + (long)*piVar4 * 8) + 0x20))();
    }
    *(undefined1 *)(lVar3 + 0xc0) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 7);
  return;
}



/* Entry: 105680150; end: 1056801db; -[SCPercMLODINClassificationModel predictClassificationsWithBatchImages:completionQueue:completion:] */

void FUN_105680150(void)

{
  long in_x3;
  long in_x4;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(in_x4);
  if ((in_x3 != 0) && (in_x4 != 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_1056801dc;
    puStack_30 = &UNK_11087bb60;
    _objc_retain(in_x4);
    lStack_28 = in_x4;
    func_0x00010007380c(in_x3,&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(in_x4);
  return;
}



/* Entry: 1056801dc; end: 1056801ef;  */

void FUN_1056801dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056801ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 1056801f0; end: 10568027b; -[SCPercMLODINClassificationModel predictScoresWithBatchImages:completionQueue:completion:] */

void FUN_1056801f0(void)

{
  long in_x3;
  long in_x4;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(in_x4);
  if ((in_x3 != 0) && (in_x4 != 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10568027c;
    puStack_30 = &UNK_11087bb60;
    _objc_retain(in_x4);
    lStack_28 = in_x4;
    func_0x00010007380c(in_x3,&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(in_x4);
  return;
}



/* Entry: 10568027c; end: 10568028f;  */

void FUN_10568027c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010568028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 105680290; end: 10568031b; -[SCPercMLODINClassificationModel predictAccumulatedClassificationsWithBatchImages:completionQueue:completion:] */

void FUN_105680290(void)

{
  long in_x3;
  long in_x4;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(in_x4);
  if ((in_x3 != 0) && (in_x4 != 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10568031c;
    puStack_30 = &UNK_11087bb60;
    _objc_retain(in_x4);
    lStack_28 = in_x4;
    func_0x00010007380c(in_x3,&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(in_x4);
  return;
}



/* Entry: 10568031c; end: 10568032f;  */

void FUN_10568031c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010568032c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 105680330; end: 105680513; -[SCPercMLODINClassificationModel getMetricWithKey:] */

void FUN_105680330(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x38);
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    lVar2 = param_3;
    func_0x00010c08fac0();
    puVar3 = (undefined *)0x0;
    if ((lVar1 != 0) && (lVar2 != 0)) {
      func_0x000100362a1c(&uStack_58,lVar1,lVar2);
      if (-1 < (char)bStack_41) {
        uStack_50 = (ulong)bStack_41;
      }
      if (uStack_50 == 0) {
        puVar3 = (undefined *)0x0;
        if (((uint)(int)(char)bStack_41 >> 7 & 1) == 0) goto LAB_10568046c;
      }
      else {
        func_0x00010002b838(&uStack_70,"");
        if (*(long *)(param_1 + 0x30) != 0) {
          func_0x000109560ec8(&uStack_88,*(long *)(param_1 + 0x30) + 0x108,&uStack_58);
          if (lStack_60 < 0) {
            __ZdlPv(uStack_70);
          }
          uStack_68 = uStack_80;
          uStack_70 = uStack_88;
          lStack_60 = lStack_78;
        }
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010bf68f00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        func_0x00010c25d8e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        if (lStack_60 < 0) {
          __ZdlPv(uStack_70);
        }
        if (-1 < (char)bStack_41) goto LAB_10568046c;
      }
      __ZdlPv(uStack_58);
    }
  }
LAB_10568046c:
  _os_unfair_lock_unlock(param_1 + 0x38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105680514; end: 10568075f; -[SCPercMLODINClassificationModel getRawMetrics] */

void FUN_105680514(long param_1)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 ***pppuStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined **appuStack_170 [2];
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 auStack_150 [8];
  long lStack_148;
  ulong uStack_138;
  long lStack_130;
  ulong uStack_128;
  undefined8 uStack_118;
  char cStack_101;
  ulong uStack_100;
  uint uStack_f8;
  undefined **appuStack_f0 [19];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  
  _os_unfair_lock_lock(param_1 + 0x38);
  if (*(long *)(param_1 + 0x30) == 0) {
    puVar5 = (undefined *)0x0;
    goto LAB_1056806e4;
  }
  func_0x000109560d98(auStack_58,*(long *)(param_1 + 0x30) + 0x108);
  FUN_105680760(appuStack_170);
  func_0x000109561590(auStack_58,&ppuStack_160);
  if ((uStack_f8 >> 4 & 1) == 0) {
    lVar6 = lStack_148;
    if ((uStack_f8 >> 3 & 1) != 0) goto LAB_1056805b0;
    uVar4 = 0;
    uStack_178 = uStack_178 & 0xffffffffffffff;
    ppppuVar3 = &pppuStack_188;
  }
  else {
    uStack_138 = uStack_100;
    lVar6 = lStack_130;
    if (uStack_100 < uStack_128) {
      uStack_100 = uStack_128;
      uStack_138 = uStack_128;
    }
LAB_1056805b0:
    uVar4 = uStack_138 - lVar6;
    if (0x7ffffffffffffff6 < uVar4) {
      func_0x000104bd47d4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x105680710);
      (*pcVar2)();
    }
    if (uVar4 < 0x17) {
      uStack_178 = CONCAT17((char)uVar4,(undefined7)uStack_178);
      ppppuVar3 = &pppuStack_188;
      if (uVar4 == 0) goto LAB_105680614;
    }
    else {
      ppppuVar1 = (undefined8 ****)0x19;
      if ((uVar4 | 7) != 0x17) {
        ppppuVar1 = (undefined8 ****)((uVar4 | 7) + 1);
      }
      ppppuVar3 = ppppuVar1;
      __Znwm();
      uStack_178 = (ulong)ppppuVar1 | 0x8000000000000000;
      pppuStack_188 = ppppuVar3;
      uStack_180 = uVar4;
    }
    _memmove(ppppuVar3,lVar6,uVar4);
  }
LAB_105680614:
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  *(undefined1 *)((long)ppppuVar3 + uVar4) = 0;
  func_0x00010bf68f00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c25d8e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  if ((long)uStack_178 < 0) {
    __ZdlPv(pppuStack_188);
  }
  appuStack_170[0] = &PTR_SUB_1108a5a38;
  ppuStack_160 = &PTR_FUN_1108a5a60;
  appuStack_f0[0] = &PTR_FUN_1108a5a88;
  ppuStack_158 = &PTR_DAT_11088d7b0;
  if (cStack_101 < '\0') {
    __ZdlPv(uStack_118);
  }
  ppuStack_158 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_150);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_170,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_f0);
  FUN_105687e88(uStack_50);
LAB_1056806e4:
  _os_unfair_lock_unlock(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105680760; end: 10568081f;  */

undefined8 * FUN_105680760(undefined8 *param_1)

{
  param_1[0x10] = &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5ba0;
  param_1[0x16] = 0;
  param_1[1] = 0;
  param_1[2] = &PTR_FUN_1108a5a60;
  *param_1 = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5b78;
  __ZNSt3__18ios_base4initEPv(param_1 + 0x10,param_1 + 3);
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *param_1 = &PTR_SUB_1108a5a38;
  param_1[0x10] = &PTR_FUN_1108a5a88;
  param_1[2] = &PTR_FUN_1108a5a60;
  FUN_105491afc(param_1 + 3,0x18);
  return param_1;
}



/* Entry: 105680820; end: 105680967; -[SCPercMLODINClassificationModel getStatMetricMean:] */

void FUN_105680820(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 auStack_a0 [2];
  char cStack_89;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 uStack_68;
  int iStack_38;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x38);
  lVar4 = *(long *)(param_1 + 0x30);
  puVar3 = (undefined *)0x0;
  if (lVar4 != 0) {
    uVar2 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x00010bdc3520();
    func_0x00010002b838(auStack_a0,uVar2);
    func_0x000109560de0(auStack_88,lVar4 + 0x108,auStack_a0);
    if (cStack_89 < '\0') {
      __ZdlPv(auStack_a0[0]);
    }
    if (iStack_38 != 2) {
      FUN_10563ab98();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1056808f4);
      (*pcVar1)();
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(uStack_68,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
  }
  _os_unfair_lock_unlock(param_1 + 0x38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105680968; end: 10568196b; -[SCPercMLODINClassificationModel runCoreMLWithPixelBuffer:coreMLProcessingConfig:error:] */

/* WARNING: Removing unreachable block (ram,0x0001056815e8) */
/* WARNING: Removing unreachable block (ram,0x0001056815f0) */

void FUN_105680968(undefined *param_1,undefined8 param_2,undefined *param_3,ulong param_4,
                  undefined8 *param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar4 = param_4;
  func_0x00010c290ee0();
  if ((int)uVar4 == 0) {
    puVar16 = param_3;
    func_0x00010c0fca00();
    iVar3 = (int)puVar16;
    _objc_retain(param_4);
    _CVPixelBufferGetPixelFormatType();
    uVar4 = param_4;
    func_0x00010c105e20();
    uVar5 = param_4;
    func_0x00010c104c60();
    if (iVar3 == 0x42475241) {
      if ((uVar5 < 5) && ((1L << (uVar5 & 0x3f) & 0x19U) != 0)) {
        _objc_release(param_4);
        if (uVar4 == 0) goto LAB_105680ae4;
        goto LAB_105680bb4;
      }
LAB_105680bac:
      _objc_release(param_4);
      goto LAB_105680bb4;
    }
    if (((iVar3 != 0x34323066) || (4 < uVar5)) || ((1L << (uVar5 & 0x3f) & 0x19U) == 0))
    goto LAB_105680bac;
    _objc_release(param_4);
    if (1 < uVar4 - 1) goto LAB_105680bb4;
LAB_105680ae4:
    uVar4 = param_4;
    func_0x00010c105e20();
    puVar16 = param_3;
    if (uVar4 == 0) {
      func_0x00010c0fca00(param_3);
      puStack_190 = (undefined *)0x0;
LAB_105680c98:
      uVar4 = param_4;
      func_0x00010c065ce0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_4;
      func_0x00010c0eef40(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010be97dc0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      if (puVar6 == (undefined *)0x0) {
        if (param_5 != (undefined8 *)0x0) {
          ppuVar10 = &PTR____CFConstantStringClassReference_110df4a38;
          FUN_10568196c(&PTR____CFConstantStringClassReference_110df4a38,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_5 = ppuVar10;
        }
        puVar17 = (undefined *)0x0;
        bVar2 = false;
        puVar6 = (undefined *)0x0;
      }
      else {
        uVar4 = param_4;
        func_0x00010c104c60();
        if (uVar4 == 0) {
          puVar16 = PTR_PTR_1126bcab8;
          _objc_alloc(PTR_PTR_1126bcab8);
          puVar17 = (undefined *)0x0;
          func_0x00010c036160();
        }
        else {
          puVar16 = param_3;
          func_0x00010c0fca00();
          _objc_retain(param_4);
          _objc_retain(param_1);
          uVar4 = param_4;
          func_0x00010c290ee0();
          if ((int)uVar4 == 0) {
            uVar4 = param_4;
            func_0x00010c104c60();
            if (uVar4 - 3 < 2) {
              _CVPixelBufferLockBaseAddress(puVar6,1);
              puStack_168 = (undefined *)0x0;
              puVar16 = puVar6;
              _CVPixelBufferGetWidth();
              puVar17 = puVar6;
              _CVPixelBufferGetHeight();
              puVar7 = puVar6;
              _CVPixelBufferGetBaseAddress();
              bVar2 = false;
              if (puVar7 != (undefined *)0x0) {
                puVar8 = puVar6;
                _CVPixelBufferGetBytesPerRow();
                uStack_a0 = *(undefined8 *)PTR__kCVPixelBufferCGImageCompatibilityKey_11034a380;
                uStack_98 = *(undefined8 *)
                             PTR__kCVPixelBufferCGBitmapContextCompatibilityKey_11034a378;
                puStack_88 = PTR____kCFBooleanTrue_11034ab68;
                puStack_80 = PTR____kCFBooleanTrue_11034ab68;
                uStack_90 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
                puStack_78 = PTR____NSDictionary0__struct_11034ab58;
                puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                puStack_188 = puVar7;
                puStack_180 = puVar17;
                puStack_178 = puVar16;
                puStack_170 = puVar8;
                func_0x00010bf72080();
                _objc_retainAutoreleasedReturnValue();
                uVar9 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
                _CVPixelBufferCreate(uVar9,puVar16,puVar17,0x34323066,puVar11,&puStack_168);
                bVar2 = false;
                if (((int)uVar9 == 0) && (puStack_168 != (undefined *)0x0)) {
                  _CVPixelBufferLockBaseAddress(puStack_168,0);
                  puVar7 = puStack_168;
                  _CVPixelBufferGetBaseAddressOfPlane(puStack_168,0);
                  puVar8 = puStack_168;
                  _CVPixelBufferGetBaseAddressOfPlane(puStack_168,1);
                  puVar12 = puStack_168;
                  _CVPixelBufferGetBytesPerRowOfPlane(puStack_168,0);
                  puVar13 = puStack_168;
                  _CVPixelBufferGetBytesPerRowOfPlane(puStack_168,1);
                  uStack_d8 = (ulong)puVar17 >> 1;
                  uStack_d0 = (ulong)puVar16 >> 1;
                  puStack_e0 = puVar8;
                  puStack_c8 = puVar13;
                  puStack_c0 = puVar7;
                  puStack_b8 = puVar17;
                  puStack_b0 = puVar16;
                  puStack_a8 = puVar12;
                  _vImageConvert_ARGBToYpCbCr_GenerateConversion
                            (*(undefined8 *)PTR__kvImage_ARGBToYpCbCrMatrix_ITU_R_601_4_110347848,
                             &UNK_10ddb84c8,&puStack_160,0,4,0);
                  puVar16 = &UNK_10ddb84e8;
                  if (uVar4 != 3) {
                    puVar16 = &UNK_10ddb84ec;
                  }
                  ppuVar10 = &puStack_188;
                  _vImageConvert_ARGB8888To420Yp8_CbCr8
                            (ppuVar10,&puStack_c0,&puStack_e0,&puStack_160,puVar16,0);
                  bVar2 = ppuVar10 == (undefined **)0x0;
                  if (ppuVar10 != (undefined **)0x0) {
                    _CVPixelBufferUnlockBaseAddress(puStack_168,0);
                    _CVPixelBufferRelease(puStack_168);
                  }
                }
                _objc_release(puVar11);
              }
              _CVPixelBufferUnlockBaseAddress(puVar6,1);
              if (puStack_168 != (undefined *)0x0) {
                _CVPixelBufferUnlockBaseAddress(puStack_168,0);
              }
              puVar17 = puStack_168;
              if (!bVar2) {
                puVar17 = (undefined *)0x0;
              }
            }
            else {
              puVar17 = (undefined *)0x0;
            }
LAB_1056813a0:
            _objc_release(param_1);
            _objc_release(param_4);
            if (puVar17 != (undefined *)0x0) {
LAB_1056813b4:
              puVar16 = PTR_PTR_1126bcab8;
              _objc_alloc(PTR_PTR_1126bcab8);
              func_0x00010c036160();
              goto LAB_105681418;
            }
          }
          else {
            uVar4 = param_4;
            func_0x00010c0fc9e0();
            if (uVar4 == 0) {
              puVar17 = (undefined *)0x0;
            }
            else {
              _CVPixelBufferGetWidth(puVar6);
              _CVPixelBufferGetHeight(puVar6);
              func_0x00010c0fc9e0(param_4);
              puVar17 = param_1;
              func_0x00010bfc84c0();
            }
            uVar4 = param_4;
            func_0x00010c290e40();
            _objc_retain(param_1);
            puStack_88 = (undefined *)0x0;
            _CVPixelBufferLockBaseAddress(puVar6,1);
            _CVPixelBufferLockBaseAddress(puVar16,1);
            puVar7 = puVar16;
            _CVPixelBufferGetWidthOfPlane(puVar16,1);
            puVar8 = puVar16;
            _CVPixelBufferGetHeightOfPlane(puVar16,1);
            puVar11 = puVar16;
            _CVPixelBufferGetBaseAddressOfPlane(puVar16,1);
            puVar12 = puVar16;
            _CVPixelBufferGetBytesPerRowOfPlane(puVar16,1);
            if (puVar11 == (undefined *)0x0) {
LAB_10568131c:
              bVar2 = true;
            }
            else {
              puVar13 = puVar6;
              _CVPixelBufferGetWidth();
              puVar14 = puVar6;
              _CVPixelBufferGetHeight();
              bVar2 = true;
              if ((((puVar13 != (undefined *)0x0) && (puVar14 != (undefined *)0x0)) &&
                  (puVar7 != (undefined *)0x0)) && (puVar8 != (undefined *)0x0)) {
                if (puVar17 == (undefined *)0x0) {
                  puStack_e0 = *(undefined **)PTR__kCVPixelBufferCGImageCompatibilityKey_11034a380;
                  uStack_d8 = *(ulong *)PTR__kCVPixelBufferCGBitmapContextCompatibilityKey_11034a378
                  ;
                  puStack_c0 = PTR____kCFBooleanTrue_11034ab68;
                  puStack_b8 = PTR____kCFBooleanTrue_11034ab68;
                  uStack_d0 = *(ulong *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
                  puStack_b0 = PTR____NSDictionary0__struct_11034ab58;
                  puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                  _objc_retainAutoreleasedReturnValue();
                  uVar9 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
                  _CVPixelBufferCreate(uVar9,puVar13,puVar14,0x34323066,puVar17,&puStack_88);
                  bVar2 = (int)uVar9 == 0 && puStack_88 != (undefined *)0x0;
                  _objc_release(puVar17);
LAB_10568126c:
                  if (!bVar2) goto LAB_10568131c;
                }
                else {
                  uVar19 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
                  uVar9 = uVar19;
                  _CVPixelBufferPoolCreatePixelBuffer(uVar19,puVar17,&puStack_88);
                  if (((int)uVar9 != 0) || (puStack_88 == (undefined *)0x0)) {
                    puStack_e0 = *(undefined **)PTR__kCVPixelBufferCGImageCompatibilityKey_11034a380
                    ;
                    uStack_d8 = *(ulong *)
                                 PTR__kCVPixelBufferCGBitmapContextCompatibilityKey_11034a378;
                    puStack_c0 = PTR____kCFBooleanTrue_11034ab68;
                    puStack_b8 = PTR____kCFBooleanTrue_11034ab68;
                    uStack_d0 = *(ulong *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
                    puStack_b0 = PTR____NSDictionary0__struct_11034ab58;
                    puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                    _objc_retainAutoreleasedReturnValue();
                    _CVPixelBufferCreate(uVar19,puVar13,puVar14,0x34323066,puVar17,&puStack_88);
                    bVar2 = (int)uVar19 == 0 && puStack_88 != (undefined *)0x0;
                    _objc_release(puVar17);
                    goto LAB_10568126c;
                  }
                }
                _CVPixelBufferLockBaseAddress(puStack_88,0);
                puVar17 = puStack_88;
                _CVPixelBufferGetBaseAddressOfPlane(puStack_88,1);
                puVar15 = puStack_88;
                _CVPixelBufferGetBytesPerRowOfPlane(puStack_88,1);
                if (puVar17 == (undefined *)0x0) {
                  _CVPixelBufferUnlockBaseAddress(puStack_88,0);
                  _CVPixelBufferRelease(puStack_88);
                  goto LAB_10568131c;
                }
                puStack_178 = (undefined *)((ulong)puVar13 >> 1);
                puStack_180 = (undefined *)((ulong)puVar14 >> 1);
                puStack_188 = puVar17;
                puStack_170 = puVar15;
                puStack_160 = puVar11;
                puStack_158 = puVar8;
                puStack_150 = puVar7;
                puStack_148 = puVar12;
                if ((puVar13 < (undefined *)0x2) || (puVar14 < (undefined *)0x2)) {
                  _CVPixelBufferUnlockBaseAddress(puVar6,1);
                  bVar2 = true;
                  _CVPixelBufferUnlockBaseAddress(puVar16,1);
                }
                else {
                  _CVPixelBufferLockBaseAddress(puStack_88,0);
                  if ((int)uVar4 == 0) {
                    puVar17 = (undefined *)0x0;
                  }
                  else {
                    puVar17 = param_1;
                    func_0x00010be212c0(param_1);
                  }
                  ppuVar10 = &puStack_160;
                  _vImageScale_CbCr8(ppuVar10,&puStack_188,puVar17,0);
                  if (ppuVar10 == (undefined **)0x0) {
                    puVar17 = puStack_88;
                    _CVPixelBufferGetBaseAddressOfPlane(puStack_88,0);
                    puVar8 = puStack_88;
                    _CVPixelBufferGetBytesPerRowOfPlane(puStack_88,0);
                    puVar7 = puVar6;
                    _CVPixelBufferGetBaseAddressOfPlane(puVar6,0);
                    puVar11 = puVar6;
                    _CVPixelBufferGetBytesPerRowOfPlane(puVar6,0);
                    if (puVar11 <= puVar13) {
                      puVar13 = puVar11;
                    }
                    do {
                      _memcpy(puVar17,puVar7,puVar13);
                      puVar17 = puVar17 + (long)puVar8;
                      puVar7 = puVar7 + (long)puVar11;
                      puVar14 = puVar14 + -1;
                    } while (puVar14 != (undefined *)0x0);
                    uVar18 = *(undefined8 *)PTR__kCVImageBufferColorPrimariesKey_11034a2b8;
                    puVar17 = puVar16;
                    _CVBufferGetAttachment(puVar16,uVar18,0);
                    uVar9 = *(undefined8 *)PTR__kCVImageBufferTransferFunctionKey_11034a310;
                    puVar7 = puVar16;
                    _CVBufferGetAttachment(puVar16,uVar9,0);
                    uVar19 = *(undefined8 *)PTR__kCVImageBufferYCbCrMatrixKey_11034a350;
                    puVar8 = puVar16;
                    _CVBufferGetAttachment(puVar16,uVar19,0);
                    if ((puVar17 != (undefined *)0x0 && puVar7 != (undefined *)0x0) &&
                        puVar8 != (undefined *)0x0) {
                      _CVBufferSetAttachment(puStack_88,uVar18,puVar17,1);
                      _CVBufferSetAttachment(puStack_88,uVar9,puVar7,1);
                      _CVBufferSetAttachment(puStack_88,uVar19,puVar8,1);
                    }
                    _CVPixelBufferUnlockBaseAddress(puStack_88,0);
                    bVar2 = false;
                  }
                  else {
                    _CVPixelBufferUnlockBaseAddress(puStack_88,0);
                    _CVPixelBufferRelease(puStack_88);
                    bVar2 = true;
                  }
                }
              }
            }
            _CVPixelBufferUnlockBaseAddress(puVar6,1);
            _CVPixelBufferUnlockBaseAddress(puVar16,1);
            puVar17 = puStack_88;
            _objc_release(param_1);
            if (puVar17 == (undefined *)0x0) {
              bVar2 = true;
            }
            if (!bVar2) {
              uVar4 = param_4;
              func_0x00010c104c60();
              if (uVar4 == 7) {
                puVar16 = puVar17;
                FUN_1056874bc(puVar17,1);
                _CVPixelBufferRelease(puVar17);
                puVar17 = puVar16;
                goto LAB_1056813a0;
              }
              if (uVar4 != 6) {
                _CVPixelBufferRelease(puVar17);
                goto LAB_1056813dc;
              }
              _objc_release(param_1);
              _objc_release(param_4);
              goto LAB_1056813b4;
            }
LAB_1056813dc:
            _objc_release(param_1);
            _objc_release(param_4);
          }
          if (param_5 != (undefined8 *)0x0) {
            FUN_10568196c(&PTR____CFConstantStringClassReference_110df4a18,1);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          puVar17 = (undefined *)0x0;
          puVar16 = (undefined *)0x0;
        }
LAB_105681418:
        bVar2 = true;
      }
      _CVPixelBufferRelease(puStack_190);
      _CVPixelBufferRelease(puVar6);
      _CVPixelBufferRelease(puVar17);
      if (bVar2) goto LAB_105680c00;
    }
    else {
      func_0x00010c0fca00();
      _objc_retain(param_4);
      uVar4 = param_4;
      func_0x00010c290ee0();
      if ((int)uVar4 == 0) {
        uVar4 = param_4;
        func_0x00010c105e20(param_4);
        FUN_1056874bc(puVar16,uVar4);
LAB_105680c88:
        _objc_release(param_4);
        puStack_190 = puVar16;
        if (puVar16 != (undefined *)0x0) goto LAB_105680c98;
      }
      else {
        puStack_160 = (undefined *)0x0;
        puVar6 = puVar16;
        _CVPixelBufferGetWidth(puVar16);
        puVar17 = puVar16;
        _CVPixelBufferGetHeight(puVar16);
        _CVPixelBufferLockBaseAddress(puVar16,1);
        puVar7 = puVar16;
        _CVPixelBufferGetBaseAddressOfPlane(puVar16,0);
        puVar8 = puVar16;
        _CVPixelBufferGetBytesPerRowOfPlane(puVar16,0);
        uVar9 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
        _CVPixelBufferCreateWithBytes
                  (uVar9,puVar6,puVar17,0x4c303038,puVar7,puVar8,0,0,0,&puStack_160);
        _CVPixelBufferUnlockBaseAddress(puVar16,1);
        puVar16 = puStack_160;
        if ((int)uVar9 == 0) goto LAB_105680c88;
        _objc_release(param_4);
      }
      if (param_5 != (undefined8 *)0x0) {
        ppuVar10 = &PTR____CFConstantStringClassReference_110df49f8;
        FUN_10568196c(&PTR____CFConstantStringClassReference_110df49f8,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        puVar16 = (undefined *)0x0;
        *param_5 = ppuVar10;
        goto LAB_105680c00;
      }
    }
  }
  else {
    puVar16 = param_3;
    func_0x00010c0fca00();
    iVar3 = (int)puVar16;
    _objc_retain(param_4);
    _CVPixelBufferGetPixelFormatType();
    uVar4 = param_4;
    func_0x00010c105e20();
    uVar5 = param_4;
    func_0x00010c104c60();
    if (iVar3 != 0x34323066) goto LAB_105680bac;
    _objc_release(param_4);
    if ((uVar4 == 5) && ((uVar5 & 0xfffffffffffffffe) == 6)) goto LAB_105680ae4;
LAB_105680bb4:
    if (param_5 != (undefined8 *)0x0) {
      puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar16;
      FUN_10568196c();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_5 = puVar6;
      _objc_release(puVar16);
    }
  }
  puVar16 = (undefined *)0x0;
LAB_105680c00:
  _os_unfair_lock_unlock(param_1 + 0x38);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_exception_rethrow();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1056815f8);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 10568196c; end: 105681a83;  */

undefined *** FUN_10568196c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 **ppuVar7;
  long *plVar8;
  undefined ***pppuVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 extraout_x8;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined ***pppuStack_1b0;
  undefined ***pppuStack_1a8;
  undefined1 ***pppuStack_1a0;
  code *pcStack_198;
  undefined ***pppuStack_188;
  undefined ***pppuStack_180;
  undefined **ppuStack_178;
  undefined ***pppuStack_170;
  undefined ***pppuStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined8 *puStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  long lStack_130;
  undefined8 uStack_128;
  char cStack_119;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long alStack_e8 [3];
  long *plStack_d0;
  undefined8 *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  pppuVar9 = (undefined ***)PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_1 == (undefined8 *)0x0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_40 = param_1;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar10 = puVar13;
  func_0x00010bf99240(pppuVar9);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != (undefined8 *)0x0) {
    _objc_release(puVar13);
  }
  puVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar9);
    return pppuVar9;
  }
  ___stack_chk_fail();
  _objc_release(param_1);
  __Unwind_Resume();
  pcStack_58 = FUN_105681a84;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_retain(puVar10);
  puVar13 = PTR__OBJC_CLASS___MLFeatureValue_1126bcac0;
  func_0x00010bfa3060();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_c8 = param_2;
  puStack_c0 = puVar13;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___MLDictionaryFeatureProvider_1126bcac8;
  _objc_alloc();
  func_0x00010c00c5a0();
  puStack_100 = puVar6;
  FUN_105681da8(&uStack_f8,&puStack_100);
  uStack_110 = 0;
  uStack_108 = 0;
  puStack_118 = &uStack_110;
  func_0x00010002b838(&lStack_130,&UNK_10f2e5653);
  ppuVar7 = &puStack_118;
  FUN_105688630(ppuVar7,&lStack_130,&lStack_130);
  FUN_1056871dc(ppuVar7 + 7,uStack_f8,plStack_f0);
  FUN_105687250(ppuVar7 + 9,alStack_e8);
  if (cStack_119 < '\0') {
    __ZdlPv(lStack_130);
  }
  func_0x00010be9ac00();
  func_0x000109564efc(&lStack_130,*puVar4,&puStack_118);
  plVar8 = (long *)(lStack_130 + 0x38);
  FUN_105681eb4();
  pppuVar15 = (undefined ***)*plVar8;
  pppuVar9 = pppuVar15;
  func_0x00010bfa3000();
  _objc_retainAutoreleasedReturnValue();
  if (pppuVar9 == (undefined ***)0x0) {
    pppuVar14 = (undefined ***)0x0;
  }
  else {
    pppuVar14 = pppuVar9;
    func_0x00010bfe6d40(pppuVar9);
    _CVPixelBufferRetain();
  }
  _objc_release(pppuVar9);
  _objc_release(pppuVar15);
  FUN_105688588(uStack_128);
  FUN_105688588(uStack_110);
  if (plStack_d0 == alStack_e8) {
    lVar11 = 0x20;
LAB_105681c44:
    (**(code **)(*plStack_d0 + lVar11))();
  }
  else if (plStack_d0 != (long *)0x0) {
    lVar11 = 0x28;
    goto LAB_105681c44;
  }
  if (plStack_f0 != (long *)0x0) {
    plVar8 = plStack_f0 + 1;
    do {
      lVar11 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f0);
    }
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar13);
  _objc_release(puVar10);
  puVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return pppuVar14;
  }
  ___stack_chk_fail();
  _objc_release(pppuVar15);
  FUN_105688588(uStack_128);
  FUN_105688588(uStack_110);
  FUN_105681f78(&uStack_f8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar13);
  _objc_release(puVar10);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_138 = FUN_105681da8;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = (undefined **)*puVar4;
  pppuVar9 = (undefined ***)0x38;
  puStack_150 = puVar10;
  puStack_148 = param_2;
  ppuStack_140 = &puStack_60;
  __Znwm();
  pppuVar9[1] = (undefined **)0x0;
  pppuVar9[2] = (undefined **)0x0;
  *pppuVar9 = &PTR_FUN_1108a6378;
  pppuVar9[4] = ppuVar12;
  pppuStack_188 = pppuVar9 + 3;
  *pppuStack_188 = (undefined **)FUN_10568839c;
  ppuStack_178 = &PTR_FUN_1108a60f0;
  pppuStack_180 = pppuVar9;
  pppuStack_170 = pppuStack_188;
  pppuStack_160 = &ppuStack_178;
  func_0x000109567d5c(extraout_x8,&pppuStack_188,&ppuStack_178);
  pppuVar9 = pppuStack_160;
  if (pppuStack_160 == &ppuStack_178) {
    lVar11 = 0x20;
  }
  else {
    if (pppuStack_160 == (undefined ***)0x0) goto LAB_105681e50;
    lVar11 = 0x28;
  }
  (**(code **)((long)*pppuStack_160 + lVar11))();
LAB_105681e50:
  pppuVar15 = pppuStack_180;
  if (pppuStack_180 != (undefined ***)0x0) {
    pppuVar14 = pppuStack_180 + 1;
    do {
      ppuVar12 = *pppuVar14;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
      if (bVar2) {
        *pppuVar14 = (undefined **)((long)ppuVar12 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (ppuVar12 == (undefined **)0x0) {
      (*(code *)(*pppuStack_180)[2])(pppuStack_180);
      pppuVar9 = pppuVar15;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return pppuVar9;
  }
  ___stack_chk_fail();
  pppuStack_1a8 = pppuVar15;
  pcStack_198 = FUN_105681eb4;
  ppuVar12 = *pppuVar9;
  pppuStack_1b0 = &ppuStack_178;
  pppuStack_1a0 = &ppuStack_140;
  if ((ppuVar12 != (undefined **)0x0) && ((code *)*ppuVar12 != (code *)0x0)) {
    pppuVar15 = (undefined ***)0x3;
    (*(code *)*ppuVar12)(3,ppuVar12,0,&PTR_DAT_1108a60d0,&UNK_10ddb8514);
    if (pppuVar15 != (undefined ***)0x0) {
      return pppuVar15;
    }
  }
  func_0x00010002b838(auStack_1e0,&UNK_10f2e5846);
  ppuVar12 = *pppuVar9;
  FUN_1056887e0();
  func_0x00010048a6c8(auStack_1c8,auStack_1e0,(ulong)ppuVar12[1] & 0x7fffffffffffffff);
  FUN_105687ee0(auStack_1c8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x105681f40);
  (*pcVar3)();
}



/* Entry: 105681a84; end: 105681da7; -[SCPercMLODINClassificationModel _runCoreMLWithPixelBufferInternal:modelInputVariable:modelOutputVariable:] */

undefined ***
FUN_105681a84(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 **ppuVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  long lVar11;
  undefined8 extraout_x8;
  undefined **ppuVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined ***pppuStack_160;
  undefined ***pppuStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined ***pppuStack_138;
  undefined ***pppuStack_130;
  undefined **ppuStack_128;
  undefined ***pppuStack_120;
  undefined ***pppuStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  char cStack_c9;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long alStack_98 [3];
  long *plStack_80;
  undefined8 *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar4 = PTR__OBJC_CLASS___MLFeatureValue_1126bcac0;
  func_0x00010bfa3060();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = param_4;
  puStack_70 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___MLDictionaryFeatureProvider_1126bcac8;
  _objc_alloc();
  func_0x00010c00c5a0();
  puStack_b0 = puVar6;
  FUN_105681da8(&uStack_a8,&puStack_b0);
  uStack_c0 = 0;
  uStack_b8 = 0;
  puStack_c8 = &uStack_c0;
  func_0x00010002b838(&lStack_e0,&UNK_10f2e5653);
  ppuVar7 = &puStack_c8;
  FUN_105688630(ppuVar7,&lStack_e0,&lStack_e0);
  FUN_1056871dc(ppuVar7 + 7,uStack_a8,plStack_a0);
  FUN_105687250(ppuVar7 + 9,alStack_98);
  if (cStack_c9 < '\0') {
    __ZdlPv(lStack_e0);
  }
  func_0x00010be9ac00();
  func_0x000109564efc(&lStack_e0,*param_1,&puStack_c8);
  plVar8 = (long *)(lStack_e0 + 0x38);
  FUN_105681eb4();
  pppuVar14 = (undefined ***)*plVar8;
  pppuVar10 = pppuVar14;
  func_0x00010bfa3000();
  _objc_retainAutoreleasedReturnValue();
  if (pppuVar10 == (undefined ***)0x0) {
    pppuVar13 = (undefined ***)0x0;
  }
  else {
    pppuVar13 = pppuVar10;
    func_0x00010bfe6d40(pppuVar10);
    _CVPixelBufferRetain();
  }
  _objc_release(pppuVar10);
  _objc_release(pppuVar14);
  FUN_105688588(uStack_d8);
  FUN_105688588(uStack_c0);
  if (plStack_80 == alStack_98) {
    lVar11 = 0x20;
LAB_105681c44:
    (**(code **)(*plStack_80 + lVar11))();
  }
  else if (plStack_80 != (long *)0x0) {
    lVar11 = 0x28;
    goto LAB_105681c44;
  }
  if (plStack_a0 != (long *)0x0) {
    plVar8 = plStack_a0 + 1;
    do {
      lVar11 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
    }
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_5);
  puVar9 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar13;
  }
  ___stack_chk_fail();
  _objc_release(pppuVar14);
  FUN_105688588(uStack_d8);
  FUN_105688588(uStack_c0);
  FUN_105681f78(&uStack_a8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  __Unwind_Resume();
  pcStack_e8 = FUN_105681da8;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = (undefined **)*puVar9;
  pppuVar10 = (undefined ***)0x38;
  uStack_100 = param_5;
  puStack_f8 = param_4;
  puStack_f0 = &stack0xfffffffffffffff0;
  __Znwm();
  pppuVar10[1] = (undefined **)0x0;
  pppuVar10[2] = (undefined **)0x0;
  *pppuVar10 = &PTR_FUN_1108a6378;
  pppuVar10[4] = ppuVar12;
  pppuStack_138 = pppuVar10 + 3;
  *pppuStack_138 = (undefined **)FUN_10568839c;
  ppuStack_128 = &PTR_FUN_1108a60f0;
  pppuStack_130 = pppuVar10;
  pppuStack_120 = pppuStack_138;
  pppuStack_110 = &ppuStack_128;
  func_0x000109567d5c(extraout_x8,&pppuStack_138,&ppuStack_128);
  pppuVar10 = pppuStack_110;
  if (pppuStack_110 == &ppuStack_128) {
    lVar11 = 0x20;
  }
  else {
    if (pppuStack_110 == (undefined ***)0x0) goto LAB_105681e50;
    lVar11 = 0x28;
  }
  (**(code **)((long)*pppuStack_110 + lVar11))();
LAB_105681e50:
  pppuVar14 = pppuStack_130;
  if (pppuStack_130 != (undefined ***)0x0) {
    pppuVar13 = pppuStack_130 + 1;
    do {
      ppuVar12 = *pppuVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
      if (bVar2) {
        *pppuVar13 = (undefined **)((long)ppuVar12 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (ppuVar12 == (undefined **)0x0) {
      (*(code *)(*pppuStack_130)[2])(pppuStack_130);
      pppuVar10 = pppuVar14;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return pppuVar10;
  }
  ___stack_chk_fail();
  pppuStack_158 = pppuVar14;
  pcStack_148 = FUN_105681eb4;
  ppuVar12 = *pppuVar10;
  pppuStack_160 = &ppuStack_128;
  ppuStack_150 = &puStack_f0;
  if ((ppuVar12 != (undefined **)0x0) && ((code *)*ppuVar12 != (code *)0x0)) {
    pppuVar14 = (undefined ***)0x3;
    (*(code *)*ppuVar12)(3,ppuVar12,0,&PTR_DAT_1108a60d0,&UNK_10ddb8514);
    if (pppuVar14 != (undefined ***)0x0) {
      return pppuVar14;
    }
  }
  func_0x00010002b838(auStack_190,&UNK_10f2e5846);
  ppuVar12 = *pppuVar10;
  FUN_1056887e0();
  func_0x00010048a6c8(auStack_178,auStack_190,(ulong)ppuVar12[1] & 0x7fffffffffffffff);
  FUN_105687ee0(auStack_178);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x105681f40);
  (*pcVar3)();
}



/* Entry: 105681da8; end: 105681eb3;  */

void FUN_105681da8(undefined8 param_1,undefined8 *param_2)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  code *pcVar5;
  undefined ***pppuVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined ***pppuStack_80;
  undefined ***pppuStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined ***pppuStack_58;
  undefined ***pppuStack_50;
  undefined **ppuStack_48;
  undefined ***pppuStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = (undefined **)*param_2;
  pppuVar6 = (undefined ***)0x38;
  __Znwm();
  pppuVar6[1] = (undefined **)0x0;
  pppuVar6[2] = (undefined **)0x0;
  *pppuVar6 = &PTR_FUN_1108a6378;
  pppuVar6[4] = ppuVar8;
  pppuStack_58 = pppuVar6 + 3;
  *pppuStack_58 = (undefined **)FUN_10568839c;
  ppuStack_48 = &PTR_FUN_1108a60f0;
  pppuStack_50 = pppuVar6;
  pppuStack_40 = pppuStack_58;
  pppuStack_30 = &ppuStack_48;
  func_0x000109567d5c(param_1,&pppuStack_58,&ppuStack_48);
  pppuVar6 = pppuStack_30;
  if (pppuStack_30 == &ppuStack_48) {
    lVar7 = 0x20;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_105681e50;
    lVar7 = 0x28;
  }
  (**(code **)((long)*pppuStack_30 + lVar7))();
LAB_105681e50:
  pppuVar4 = pppuStack_50;
  if (pppuStack_50 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_50 + 1;
    do {
      ppuVar8 = *pppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar3) {
        *pppuVar1 = (undefined **)((long)ppuVar8 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar8 == (undefined **)0x0) {
      (*(code *)(*pppuStack_50)[2])(pppuStack_50);
      pppuVar6 = pppuVar4;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pppuStack_78 = pppuVar4;
  pcStack_68 = FUN_105681eb4;
  ppuVar8 = *pppuVar6;
  pppuStack_80 = &ppuStack_48;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((ppuVar8 != (undefined **)0x0) && ((code *)*ppuVar8 != (code *)0x0)) {
    lVar7 = 3;
    (*(code *)*ppuVar8)(3,ppuVar8,0,&PTR_DAT_1108a60d0,&UNK_10ddb8514);
    if (lVar7 != 0) {
      return;
    }
  }
  func_0x00010002b838(auStack_b0,&UNK_10f2e5846);
  ppuVar8 = *pppuVar6;
  FUN_1056887e0();
  func_0x00010048a6c8(auStack_98,auStack_b0,(ulong)ppuVar8[1] & 0x7fffffffffffffff);
  FUN_105687ee0(auStack_98);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x105681f40);
  (*pcVar5)();
}



/* Entry: 105681eb4; end: 105681f77;  */

void FUN_105681eb4(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  puVar3 = (undefined8 *)*param_1;
  if ((puVar3 != (undefined8 *)0x0) && ((code *)*puVar3 != (code *)0x0)) {
    lVar2 = 3;
    (*(code *)*puVar3)(3,puVar3,0,&PTR_DAT_1108a60d0,&UNK_10ddb8514);
    if (lVar2 != 0) {
      return;
    }
  }
  func_0x00010002b838(auStack_50,&UNK_10f2e5846);
  lVar2 = *param_1;
  FUN_1056887e0();
  func_0x00010048a6c8(auStack_38,auStack_50,*(ulong *)(lVar2 + 8) & 0x7fffffffffffffff);
  FUN_105687ee0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105681f40);
  (*pcVar1)();
}



/* Entry: 105681f78; end: 105681fc3;  */

long FUN_105681f78(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)(param_1 + 0x10)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto FUN_105687400;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
FUN_105687400:
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 105681fc4; end: 105682037; -[SCPercMLODINClassificationModel cleanupResources] */

void FUN_105681fc4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  _os_unfair_lock_lock(param_1 + 7);
  if (param_1[6] != 0) {
    puVar1 = param_1;
    func_0x00010be9ac00();
    func_0x000109565b1c(*puVar1);
    func_0x000105687f6c(param_1 + 6,0);
    func_0x00010be8a600(param_1);
    func_0x00010be8a5a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 7);
  return;
}



/* Entry: 105682038; end: 10568218f; -[SCPercMLODINClassificationModel reorientImage:] */

void FUN_105682038(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bfe8380();
  if (puVar1 == (undefined *)0x0) {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
    func_0x00010bf69700(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120(param_3);
    func_0x00010c1f5fe0(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x00010c23d0a0(param_3);
    func_0x00010c046ac0(puVar3,param_2,puVar2);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105682190;
    puStack_40 = &UNK_1108a6070;
    _objc_retain(param_3);
    puVar1 = puVar3;
    puStack_38 = param_3;
    func_0x00010bfe91c0(puVar3,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_38);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105682190; end: 1056821db;  */

void FUN_105682190(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,param_1,param_2,*(undefined8 *)(param_3 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 1056821dc; end: 1056823c7; -[SCPercMLODINClassificationModel safeUIImageToCVMat:] */

void FUN_1056821dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 uStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  ulong uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  func_0x00010c130b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = 0x42ff0000;
  iStack_94 = 0;
  uStack_90 = 0;
  iStack_9c = 0;
  iStack_98 = 0;
  uStack_60 = (ulong)&uStack_a0 | 8;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_74 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  puStack_58 = &uStack_50;
  func_0x000109b7d03c();
  iVar5 = iStack_94;
  iVar2 = iStack_98;
  param_1[1] = CONCAT44(iStack_94,iStack_98);
  *param_1 = CONCAT44(iStack_9c,uStack_a0);
  param_1[3] = CONCAT44(uStack_84,uStack_88);
  param_1[2] = CONCAT44(uStack_8c,uStack_90);
  param_1[5] = CONCAT44(uStack_74,uStack_78);
  param_1[4] = CONCAT44(uStack_7c,uStack_80);
  param_1[7] = lStack_68;
  param_1[6] = CONCAT44(uStack_6c,uStack_70);
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lStack_68 != 0) {
    piVar1 = (int *)(lStack_68 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iStack_9c < 3) {
    puVar7 = (undefined8 *)param_1[9];
    *puVar7 = *puStack_58;
    puVar7[1] = puStack_58[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1,&uStack_a0);
  }
  *(byte *)(param_1 + 0xc) = -(iVar2 < iVar5) & 1;
  if (lStack_68 != 0) {
    piVar1 = (int *)(lStack_68 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_a0);
    }
  }
  lStack_68 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  if (0 < iStack_9c) {
    lVar6 = 0;
    do {
      *(undefined4 *)(uStack_60 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iStack_9c);
  }
  if (puStack_58 != &uStack_50 && puStack_58 != (undefined8 *)0x0) {
    _free(puStack_58[-1]);
  }
  _objc_release(param_2);
  _objc_release(param_4);
  return;
}



/* Entry: 1056823c8; end: 10568246b; -[SCPercMLODINClassificationModel _calcFocalLength:clockwiseRotation:cameraFieldOfView:] */

float FUN_1056823c8(float param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  long lVar1;
  float fVar2;
  double dVar3;
  
  dVar3 = (double)((param_1 * 3.1415927) / 180.0) * 0.5;
  _tan();
  if (1.1920929e-07 <= ABS((float)dVar3)) {
    lVar1 = 0xc;
    if (param_5 == 0) {
      lVar1 = 8;
    }
    fVar2 = ((float)*(int *)(param_4 + lVar1) * 0.5) / (float)dVar3;
  }
  else {
    fVar2 = INFINITY;
  }
  return fVar2;
}



/* Entry: 10568246c; end: 105682cb7; -[SCPercMLODINClassificationModel _scoresForCVMat:clockwiseRotation:cameraFieldOfView:error:] */

/* WARNING: Removing unreachable block (ram,0x000105682634) */

void FUN_10568246c(undefined8 param_1,long *param_2,undefined8 param_3,ulong *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined *puVar13;
  undefined1 auStack_2d8 [24];
  long *plStack_2c0;
  long lStack_2b8;
  uint uStack_2b0;
  char cStack_2a9;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [324];
  undefined4 auStack_ec [5];
  long lStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long *plStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long alStack_98 [3];
  long *plStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdd83a0();
  auStack_ec[0] = 0x5a;
  if (param_5 == 0) {
    auStack_ec[0] = 0;
  }
  uStack_288 = param_4[1];
  uStack_290 = *param_4;
  uStack_278 = param_4[3];
  uStack_280 = param_4[2];
  uStack_250 = (ulong)&uStack_290 | 8;
  iVar2 = *(int *)((long)param_4 + 4);
  uStack_268 = param_4[5];
  uStack_270 = param_4[4];
  uStack_258 = param_4[7];
  uStack_260 = param_4[6];
  uStack_240 = 0;
  uStack_238 = 0;
  if (param_4[7] != 0) {
    piVar1 = (int *)(param_4[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar2 = *(int *)((long)param_4 + 4);
  }
  puStack_248 = &uStack_240;
  if (iVar2 < 3) {
    uStack_240 = *(undefined8 *)param_4[9];
    uStack_238 = ((undefined8 *)param_4[9])[1];
  }
  else {
    uStack_290 = uStack_290 & 0xffffffff;
    func_0x000109a84868(&uStack_290,param_4);
  }
  FUN_105682cb8(param_1,auStack_230,&uStack_290,auStack_ec[0]);
  if (uStack_258 != 0) {
    piVar1 = (int *)(uStack_258 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_290);
    }
  }
  uStack_258 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  if (0 < uStack_290._4_4_) {
    lVar10 = 0;
    do {
      *(undefined4 *)(uStack_250 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < uStack_290._4_4_);
  }
  if (puStack_248 != &uStack_240 && puStack_248 != (undefined8 *)0x0) {
    _free(puStack_248[-1]);
  }
  FUN_105682d44(&uStack_a8,auStack_230);
  uStack_2a0 = 0;
  uStack_298 = 0;
  puStack_2a8 = &uStack_2a0;
  func_0x00010002b838(&lStack_d8,&UNK_10f2e5653);
  ppuVar7 = &puStack_2a8;
  FUN_105688630(ppuVar7,&lStack_d8,&lStack_d8);
  FUN_1056871dc(ppuVar7 + 7,uStack_a8,plStack_a0);
  FUN_105687250(ppuVar7 + 9,alStack_98);
  FUN_105682f00(&lStack_d8,auStack_ec);
  func_0x00010002b838(&plStack_2c0,&UNK_10f2e565f);
  ppuVar7 = &puStack_2a8;
  FUN_105688630(ppuVar7,&plStack_2c0,&plStack_2c0);
  FUN_105687d84(ppuVar7 + 7,&lStack_d8);
  func_0x000105687de8(ppuVar7 + 9,&uStack_c8);
  if (cStack_2a9 < '\0') {
    __ZdlPv(plStack_2c0);
  }
  if (plStack_b0 == &uStack_c8) {
    lVar10 = 0x20;
LAB_1056826b8:
    (**(code **)(*plStack_b0 + lVar10))();
  }
  else if (plStack_b0 != (long *)0x0) {
    lVar10 = 0x28;
    goto LAB_1056826b8;
  }
  plVar12 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    plVar11 = plStack_d0 + 1;
    do {
      lVar10 = *plVar11;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar12 = param_2;
  func_0x00010be9ac00();
  func_0x000109564efc(&lStack_d8,*plVar12,&puStack_2a8);
  if (CONCAT17(uStack_c8._7_1_,(undefined7)uStack_c8) == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    if (0 < param_2[5]) {
      plVar12 = param_2;
      func_0x00010be9ac00();
      func_0x000109560d98(&plStack_2c0,*plVar12 + 0x108);
      plVar12 = plStack_2c0;
      while (plVar12 != &lStack_2b8) {
        plVar11 = plVar12;
        plVar4 = (long *)plVar12[1];
        if ((long *)plVar12[1] == (long *)0x0) {
          do {
            plVar12 = (long *)plVar11[2];
            bVar6 = plVar11 != (long *)*plVar12;
            plVar11 = plVar12;
          } while (bVar6);
        }
        else {
          do {
            plVar12 = plVar4;
            plVar4 = (long *)*plVar12;
          } while ((long *)*plVar12 != (long *)0x0);
        }
      }
      FUN_105687e88(lStack_2b8);
    }
    puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    if ((*(byte *)(param_2 + 4) & 1) == 0) {
      if (CONCAT17(uStack_c8._7_1_,(undefined7)uStack_c8) != 1) goto LAB_105682964;
      lVar10 = lStack_d8 + 0x38;
      FUN_105683010();
      uStack_2b0 = *(uint *)(lVar10 + 0xc);
      lStack_2b8 = lVar10;
      if (uStack_2b0 == *(uint *)(lVar10 + 4)) {
        uStack_2b0 = 0;
        plStack_2c0 = (long *)0x0;
      }
      else {
        plStack_2c0 = *(long **)(*(long *)(lVar10 + 0x10) + (ulong)uStack_2b0 * 8);
        if (((ulong)plStack_2c0 & 1) != 0) {
          plStack_2c0 = *(long **)(**(long **)((long)plStack_2c0 + -1) + 0x20);
        }
      }
      while (puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0, plStack_2c0 != (long *)0x0) {
        if ((-1 < *(char *)((long)(plStack_2c0[4] & 0xfffffffffffffffcU) + 0x17)) ||
           (*(long *)(plStack_2c0[4] & 0xfffffffffffffffcU) != 0)) {
          func_0x00010bf68f00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          func_0x00010c25d8e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar8 != (undefined *)0x0) {
            puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df740(*(undefined4 *)((long)plStack_2c0 + 0x2c),
                                PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar13);
            _objc_release(puVar9);
          }
          _objc_release(puVar8);
        }
        func_0x00010063bf60(&plStack_2c0);
      }
    }
  }
  FUN_105688588(plStack_d0);
  FUN_105688588(uStack_2a0);
  if (plStack_80 == alStack_98) {
    lVar10 = 0x20;
LAB_105682814:
    (**(code **)(*plStack_80 + lVar10))();
  }
  else if (plStack_80 != (long *)0x0) {
    lVar10 = 0x28;
    goto LAB_105682814;
  }
  if (plStack_a0 != (long *)0x0) {
    plVar12 = plStack_a0 + 1;
    do {
      lVar10 = *plVar12;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
    }
  }
  FUN_1056878ec(auStack_230);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return;
  }
  ___stack_chk_fail();
LAB_105682964:
  __ZNSt3__19to_stringEm(auStack_2d8);
  func_0x0001004c3cd0(&plStack_2c0,&UNK_10f2e566e,auStack_2d8);
  FUN_105687ee0(&plStack_2c0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10568298c);
  (*pcVar5)();
}



/* Entry: 105682cb8; end: 105682d43;  */

long FUN_105682cb8(undefined4 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_168 [288];
  undefined4 uStack_48;
  
  FUN_1056877e4(auStack_168);
  uStack_48 = 0;
  FUN_105687868(param_2,auStack_168);
  *(undefined4 *)(param_2 + 0x128) = param_4;
  *(undefined4 *)(param_2 + 300) = param_1;
  *(undefined4 *)(param_2 + 0x130) = param_1;
  *(undefined8 *)(param_2 + 0x134) = 0;
  *(undefined1 *)(param_2 + 0x13c) = 0;
  FUN_1056878ec(auStack_168);
  return param_2;
}



/* Entry: 105682d44; end: 105682eff;  */

void FUN_105682d44(undefined8 param_1,long param_2)

{
  undefined ***pppuVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 extraout_x8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  undefined ***pppuStack_240;
  undefined ***pppuStack_238;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined ***pppuStack_218;
  undefined ***pppuStack_210;
  undefined **ppuStack_208;
  undefined ***pppuStack_200;
  undefined ***pppuStack_1f0;
  long lStack_1e8;
  undefined ***pppuStack_1e0;
  undefined ***pppuStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined ***pppuStack_1b8;
  undefined ***pppuStack_1b0;
  undefined1 auStack_1a8 [296];
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined ***pppuStack_60;
  undefined ***pppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_105687868(auStack_1a8,param_2);
  puStack_78 = *(undefined **)(param_2 + 0x130);
  puStack_80 = *(undefined **)(param_2 + 0x128);
  puStack_70 = *(undefined **)(param_2 + 0x138);
  pppuVar6 = (undefined ***)0x38;
  __Znwm();
  pppuVar6[2] = (undefined **)0x0;
  *pppuVar6 = &PTR_FUN_1108a6378;
  pppuVar6[1] = (undefined **)0x0;
  pppuVar10 = pppuVar6 + 3;
  *pppuVar10 = (undefined **)0x0;
  pppuVar6[4] = (undefined **)0x0;
  ppuVar7 = (undefined **)0x140;
  __Znwm();
  FUN_105687868();
  ppuVar7[0x26] = puStack_78;
  ppuVar7[0x25] = puStack_80;
  ppuVar7[0x27] = puStack_70;
  pppuVar6[3] = (undefined **)FUN_105688820;
  pppuVar6[4] = ppuVar7;
  FUN_1056878ec(auStack_1a8);
  ppuStack_68 = &PTR_FUN_1108a6188;
  pppuStack_1b8 = pppuVar10;
  pppuStack_1b0 = pppuVar6;
  pppuStack_60 = pppuVar10;
  pppuStack_50 = &ppuStack_68;
  func_0x000109567d5c(param_1,&pppuStack_1b8,&ppuStack_68);
  pppuStack_1d8 = pppuStack_50;
  if (pppuStack_50 == &ppuStack_68) {
    lVar8 = 0x20;
LAB_105682e48:
    (**(code **)((long)*pppuStack_50 + lVar8))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar8 = 0x28;
    goto LAB_105682e48;
  }
  pppuVar6 = pppuStack_1b0;
  if (pppuStack_1b0 != (undefined ***)0x0) {
    pppuVar10 = pppuStack_1b0 + 1;
    do {
      ppuVar9 = *pppuVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
      if (bVar4) {
        *pppuVar10 = (undefined **)((long)ppuVar9 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar9 == (undefined **)0x0) {
      (*(code *)(*pppuStack_1b0)[2])(pppuStack_1b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuStack_1d8 = pppuVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  __ZdlPv(ppuVar7);
  __ZNSt3__119__shared_weak_countD2Ev(&ppuStack_68);
  __ZdlPv();
  FUN_1056878ec(auStack_1a8);
  pppuVar6 = pppuStack_1d8;
  __Unwind_Resume();
  pcStack_1c8 = FUN_105682f00;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined4 *)pppuVar6;
  pppuVar6 = (undefined ***)0x38;
  pppuStack_1e0 = &ppuStack_68;
  puStack_1d0 = &stack0xfffffffffffffff0;
  __Znwm();
  pppuVar6[2] = (undefined **)0x0;
  *pppuVar6 = &PTR_FUN_1108a6378;
  pppuVar6[1] = (undefined **)0x0;
  pppuVar6[4] = (undefined **)0x0;
  *(undefined4 *)(pppuVar6 + 4) = uVar2;
  pppuStack_218 = pppuVar6 + 3;
  *pppuStack_218 = (undefined **)FUN_105688ca0;
  ppuStack_208 = &PTR_FUN_1108a61f8;
  pppuStack_210 = pppuVar6;
  pppuStack_200 = pppuStack_218;
  pppuStack_1f0 = &ppuStack_208;
  func_0x000109567d5c(extraout_x8,&pppuStack_218,&ppuStack_208);
  pppuVar6 = pppuStack_1f0;
  if (pppuStack_1f0 == &ppuStack_208) {
    lVar8 = 0x20;
  }
  else {
    if (pppuStack_1f0 == (undefined ***)0x0) goto LAB_105682fac;
    lVar8 = 0x28;
  }
  (**(code **)((long)*pppuStack_1f0 + lVar8))();
LAB_105682fac:
  pppuVar10 = pppuStack_210;
  if (pppuStack_210 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_210 + 1;
    do {
      ppuVar7 = *pppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar4) {
        *pppuVar1 = (undefined **)((long)ppuVar7 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar7 == (undefined **)0x0) {
      (*(code *)(*pppuStack_210)[2])(pppuStack_210);
      pppuVar6 = pppuVar10;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  pppuStack_238 = pppuVar10;
  pcStack_228 = FUN_105683010;
  ppuVar7 = *pppuVar6;
  pppuStack_240 = &ppuStack_208;
  ppuStack_230 = &puStack_1d0;
  if ((ppuVar7 != (undefined **)0x0) && ((code *)*ppuVar7 != (code *)0x0)) {
    lVar8 = 3;
    (*(code *)*ppuVar7)(3,ppuVar7,0,&PTR_DAT_1108a6340,&UNK_10ddb8950);
    if (lVar8 != 0) {
      return;
    }
  }
  func_0x00010002b838(auStack_270,&UNK_10f2e5846);
  ppuVar7 = *pppuVar6;
  FUN_1056887e0();
  func_0x00010048a6c8(auStack_258,auStack_270,(ulong)ppuVar7[1] & 0x7fffffffffffffff);
  FUN_105687ee0(auStack_258);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10568309c);
  (*pcVar5)();
}



/* Entry: 105682f00; end: 10568300f;  */

void FUN_105682f00(undefined8 param_1,undefined4 *param_2)

{
  undefined ***pppuVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  code *pcVar6;
  undefined ***pppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined ***pppuStack_80;
  undefined ***pppuStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined ***pppuStack_58;
  undefined ***pppuStack_50;
  undefined **ppuStack_48;
  undefined ***pppuStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *param_2;
  pppuVar7 = (undefined ***)0x38;
  __Znwm();
  pppuVar7[2] = (undefined **)0x0;
  *pppuVar7 = &PTR_FUN_1108a6378;
  pppuVar7[1] = (undefined **)0x0;
  pppuVar7[4] = (undefined **)0x0;
  *(undefined4 *)(pppuVar7 + 4) = uVar2;
  pppuStack_58 = pppuVar7 + 3;
  *pppuStack_58 = (undefined **)FUN_105688ca0;
  ppuStack_48 = &PTR_FUN_1108a61f8;
  pppuStack_50 = pppuVar7;
  pppuStack_40 = pppuStack_58;
  pppuStack_30 = &ppuStack_48;
  func_0x000109567d5c(param_1,&pppuStack_58,&ppuStack_48);
  pppuVar7 = pppuStack_30;
  if (pppuStack_30 == &ppuStack_48) {
    lVar8 = 0x20;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_105682fac;
    lVar8 = 0x28;
  }
  (**(code **)((long)*pppuStack_30 + lVar8))();
LAB_105682fac:
  pppuVar5 = pppuStack_50;
  if (pppuStack_50 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_50 + 1;
    do {
      ppuVar9 = *pppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar4) {
        *pppuVar1 = (undefined **)((long)ppuVar9 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar9 == (undefined **)0x0) {
      (*(code *)(*pppuStack_50)[2])(pppuStack_50);
      pppuVar7 = pppuVar5;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pppuStack_78 = pppuVar5;
  pcStack_68 = FUN_105683010;
  ppuVar9 = *pppuVar7;
  pppuStack_80 = &ppuStack_48;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((ppuVar9 != (undefined **)0x0) && ((code *)*ppuVar9 != (code *)0x0)) {
    lVar8 = 3;
    (*(code *)*ppuVar9)(3,ppuVar9,0,&PTR_DAT_1108a6340,&UNK_10ddb8950);
    if (lVar8 != 0) {
      return;
    }
  }
  func_0x00010002b838(auStack_b0,&UNK_10f2e5846);
  ppuVar9 = *pppuVar7;
  FUN_1056887e0();
  func_0x00010048a6c8(auStack_98,auStack_b0,(ulong)ppuVar9[1] & 0x7fffffffffffffff);
  FUN_105687ee0(auStack_98);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10568309c);
  (*pcVar6)();
}



/* Entry: 105683010; end: 1056830d3;  */

void FUN_105683010(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  puVar3 = (undefined8 *)*param_1;
  if ((puVar3 != (undefined8 *)0x0) && ((code *)*puVar3 != (code *)0x0)) {
    lVar2 = 3;
    (*(code *)*puVar3)(3,puVar3,0,&PTR_DAT_1108a6340,&UNK_10ddb8950);
    if (lVar2 != 0) {
      return;
    }
  }
  func_0x00010002b838(auStack_50,&UNK_10f2e5846);
  lVar2 = *param_1;
  FUN_1056887e0();
  func_0x00010048a6c8(auStack_38,auStack_50,*(ulong *)(lVar2 + 8) & 0x7fffffffffffffff);
  FUN_105687ee0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10568309c);
  (*pcVar1)();
}



/* Entry: 1056830d4; end: 1056832cb; -[SCPercMLODINClassificationModel _multiClassScoresForCVMat:clockwiseRotation:cameraFieldOfView:error:] */

void FUN_1056830d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                  undefined8 param_5,long *param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  
  uStack_c8 = param_4[1];
  uStack_d0 = *param_4;
  uStack_b8 = param_4[3];
  uStack_c0 = param_4[2];
  iVar2 = *(int *)((long)param_4 + 4);
  uStack_90 = (ulong)&uStack_d0 | 8;
  uStack_a8 = param_4[5];
  uStack_b0 = param_4[4];
  uStack_98 = param_4[7];
  uStack_a0 = param_4[6];
  uStack_80 = 0;
  uStack_78 = 0;
  if (param_4[7] != 0) {
    piVar1 = (int *)(param_4[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar2 = *(int *)((long)param_4 + 4);
  }
  puStack_88 = &uStack_80;
  if (iVar2 < 3) {
    uStack_80 = *(undefined8 *)param_4[9];
    uStack_78 = ((undefined8 *)param_4[9])[1];
  }
  else {
    uStack_d0 = uStack_d0 & 0xffffffff;
    func_0x000109a84868(&uStack_d0,param_4);
  }
  func_0x00010bdec080(auStack_68,param_1,param_2);
  if (uStack_98 != 0) {
    piVar1 = (int *)(uStack_98 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_d0);
    }
  }
  uStack_98 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (0 < uStack_d0._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)(uStack_90 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_d0._4_4_);
  }
  if (puStack_88 != &uStack_80 && puStack_88 != (undefined8 *)0x0) {
    _free(puStack_88[-1]);
  }
  if (*param_6 == 0) {
    func_0x00010be97fa0(auStack_e8,param_2);
    uVar6 = 0;
    if ((*param_6 == 0) && (lStack_d8 != 0)) {
      func_0x00010be703c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_2;
    }
    FUN_105688588(uStack_e0);
  }
  else {
    uVar6 = 0;
  }
  FUN_105688588(uStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1056832cc; end: 105683443; -[SCPercMLODINClassificationModel _parseMultiModelClassificationOutput:error:] */

void FUN_1056832cc(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auStack_70 [32];
  
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  plVar7 = (long *)*param_3;
  while (plVar7 != param_3 + 1) {
    lVar4 = (long)(plVar7 + 7);
    FUN_105683010(lVar4);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf68f00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c25d8e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    FUN_105688e20(auStack_70,0,lVar4);
    uVar6 = param_1;
    func_0x00010be18c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(uVar6);
    FUN_1056893c8(auStack_70);
    _objc_release(puVar5);
    plVar1 = (long *)plVar7[1];
    plVar8 = plVar7;
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar7 = (long *)plVar8[2];
        bVar2 = plVar8 != (long *)*plVar7;
        plVar8 = plVar7;
      } while (bVar2);
    }
    else {
      do {
        plVar7 = plVar1;
        plVar1 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105683444; end: 1056835ab; -[SCPercMLODINClassificationModel _formattedMapFromScoresMap:] */

void FUN_105683444(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong *puVar4;
  undefined4 uVar5;
  ulong uStack_68;
  long lStack_60;
  uint uStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uStack_58 = *(uint *)(param_3 + 0xc);
  lStack_60 = param_3;
  if (uStack_58 == *(uint *)(param_3 + 4)) {
    uStack_58 = 0;
    uStack_68 = 0;
  }
  else {
    uStack_68 = *(ulong *)(*(long *)(param_3 + 0x10) + (ulong)uStack_58 * 8);
    if ((uStack_68 & 1) != 0) {
      uStack_68 = *(ulong *)(**(long **)(uStack_68 - 1) + 0x20);
    }
  }
  while (puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0, uStack_68 != 0) {
    puVar4 = (ulong *)(*(ulong *)(uStack_68 + 0x20) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar4 + 0x17) < '\0') {
      puVar4 = (ulong *)*puVar4;
    }
    uVar5 = *(undefined4 *)(uStack_68 + 0x2c);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf68f00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c25d8e0(puVar3,param_2,puVar4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740(uVar5,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_2,puVar2,puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar3);
    func_0x00010063bf60(&uStack_68);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056835ac; end: 105683ac3; -[SCPercMLODINClassificationModel _createClassificationInputFromRgbaImage:clockwiseRotation:cameraFieldOfView:error:] */

/* WARNING: Removing unreachable block (ram,0x000105684340) */
/* WARNING: Removing unreachable block (ram,0x000105684138) */
/* WARNING: Removing unreachable block (ram,0x000105684568) */

long ******
FUN_1056835ac(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong *param_5,
             long param_6,undefined8 *param_7)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long **pplVar5;
  long ******pppppplVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  long ******pppppplVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  long *plVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined4 uVar17;
  long lVar18;
  long ******extraout_x8;
  long ******pppppplVar19;
  long ******pppppplVar20;
  long *extraout_x8_00;
  long ******pppppplVar21;
  long ****pppplVar22;
  long *****ppppplVar23;
  long *****ppppplVar24;
  int *piVar25;
  long ******pppppplVar26;
  long *plVar27;
  int iVar28;
  long *****ppppplVar29;
  long ****pppplVar30;
  long ****pppplVar31;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  long lStack_5f8;
  ulong uStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined1 auStack_5d0 [4];
  int iStack_5cc;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  long lStack_598;
  long lStack_590;
  undefined1 *puStack_588;
  undefined1 auStack_580 [240];
  uint uStack_490;
  int iStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  long lStack_458;
  ulong uStack_450;
  undefined8 *puStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  char cStack_429;
  long *plStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  undefined7 uStack_400;
  undefined1 uStack_3f9;
  long *plStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d8;
  undefined **ppuStack_3d0;
  uint *puStack_3c8;
  long *plStack_3c0;
  long alStack_3b8 [3];
  long *plStack_3a0;
  long lStack_398;
  long *****ppppplStack_320;
  long *****appppplStack_318 [2];
  long lStack_308;
  long *****ppppplStack_300;
  undefined8 uStack_2f8;
  long *****ppppplStack_2f0;
  undefined8 uStack_2e8;
  long *****ppppplStack_2e0;
  long lStack_2d8;
  long ****apppplStack_270 [2];
  char cStack_259;
  long *plStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long ****apppplStack_1e0 [40];
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined1 auStack_88 [8];
  long *plStack_80;
  long alStack_78 [3];
  long *plStack_60;
  long lStack_58;
  
  ppuVar14 = (undefined **)apppplStack_270;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = param_6;
  func_0x00010bdd83a0();
  uStack_9c = 0x5a;
  if ((int)param_6 == 0) {
    uStack_9c = 0;
  }
  uStack_238 = param_5[1];
  uStack_240 = *param_5;
  uStack_228 = param_5[3];
  uStack_230 = param_5[2];
  iVar28 = *(int *)((long)param_5 + 4);
  uStack_200 = (ulong)&uStack_240 | 8;
  uStack_218 = param_5[5];
  uStack_220 = param_5[4];
  uStack_208 = param_5[7];
  uStack_210 = param_5[6];
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  if (param_5[7] != 0) {
    piVar25 = (int *)(param_5[7] + 0x14);
    do {
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar3) {
        *piVar25 = *piVar25 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    iVar28 = *(int *)((long)param_5 + 4);
  }
  puStack_1f8 = &uStack_1f0;
  if (iVar28 < 3) {
    uStack_1f0 = *(undefined8 *)param_5[9];
    uStack_1e8 = ((undefined8 *)param_5[9])[1];
  }
  else {
    uStack_240 = uStack_240 & 0xffffffff;
    func_0x000109a84868(&uStack_240,param_5);
  }
  FUN_105682cb8(param_2,apppplStack_1e0,&uStack_240,uStack_9c);
  if (uStack_208 != 0) {
    piVar25 = (int *)(uStack_208 + 0x14);
    do {
      iVar28 = *piVar25;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar3) {
        *piVar25 = iVar28 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(&uStack_240);
    }
  }
  uStack_208 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  if (0 < uStack_240._4_4_) {
    lVar18 = 0;
    do {
      *(undefined4 *)(uStack_200 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < uStack_240._4_4_);
  }
  if (puStack_1f8 != &uStack_1f0 && puStack_1f8 != (undefined8 *)0x0) {
    _free(puStack_1f8[-1]);
  }
  lStack_250 = 0;
  lStack_248 = 0;
  plStack_258 = &lStack_250;
  FUN_105682d44(auStack_88,apppplStack_1e0);
  func_0x00010002b838(apppplStack_270,&UNK_10f2e5653);
  pplVar5 = &plStack_258;
  FUN_105688630(pplVar5,apppplStack_270,apppplStack_270);
  FUN_105687d84(pplVar5 + 7,auStack_88);
  func_0x000105687de8(pplVar5 + 9,alStack_78);
  if (cStack_259 < '\0') {
    __ZdlPv(apppplStack_270[0]);
  }
  if (plStack_60 == alStack_78) {
    lVar18 = 0x20;
LAB_105683790:
    (**(code **)(*plStack_60 + lVar18))();
  }
  else if (plStack_60 != (long *)0x0) {
    lVar18 = 0x28;
    goto LAB_105683790;
  }
  plVar27 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    plVar12 = plStack_80 + 1;
    do {
      lVar18 = *plVar12;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar18 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
    }
  }
  FUN_105682f00(auStack_88,&uStack_9c);
  func_0x00010002b838(apppplStack_270,&UNK_10f2e565f);
  pplVar5 = &plStack_258;
  FUN_105688630(pplVar5,apppplStack_270);
  FUN_105687d84(pplVar5 + 7,auStack_88);
  plVar27 = alStack_78;
  func_0x000105687de8(pplVar5 + 9);
  if (cStack_259 < '\0') {
    __ZdlPv(apppplStack_270[0]);
  }
  if (plStack_60 == alStack_78) {
    lVar18 = 0x20;
LAB_105683850:
    (**(code **)(*plStack_60 + lVar18))();
  }
  else if (plStack_60 != (long *)0x0) {
    lVar18 = 0x28;
    goto LAB_105683850;
  }
  if (plStack_80 != (long *)0x0) {
    plVar12 = plStack_80 + 1;
    do {
      lVar18 = *plVar12;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar18 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
    }
  }
  *param_1 = (long)plStack_258;
  plVar12 = param_1 + 1;
  *plVar12 = lStack_250;
  param_1[2] = lStack_248;
  if (lStack_248 == 0) {
    *param_1 = (long)plVar12;
  }
  else {
    *(long **)(lStack_250 + 0x10) = plVar12;
    lStack_250 = 0;
    lStack_248 = 0;
    plStack_258 = &lStack_250;
  }
  while( true ) {
    FUN_105688588(lStack_250);
    pppppplVar6 = (long ******)apppplStack_1e0;
    FUN_1056878ec();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return pppppplVar6;
    }
    ___stack_chk_fail();
    if ((int)plVar27 == 0) break;
    func_0x000104bd46a0();
    plVar12 = plVar27;
    if (cStack_259 < '\0') {
      __ZdlPv(apppplStack_270[0]);
    }
    FUN_105681f78(auStack_88);
    if ((int)plVar27 != 2) {
      FUN_105688588(lStack_250);
      FUN_1056878ec(apppplStack_1e0);
      break;
    }
    ___cxa_begin_catch();
    if (plStack_80 != (long *)0x0) {
      pppppplVar20 = pppppplVar6;
      (*(code *)(*pppppplVar6)[2])();
      ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (pppppplVar20 == (long ******)0x0) {
        ppuVar15 = &PTR____CFConstantStringClassReference_110df4a58;
      }
      else {
        (*(code *)(*pppppplVar6)[2])(pppppplVar6);
        func_0x00010c25da80();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
      uStack_98 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_90 = ppuVar15;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = &PTR____CFConstantStringClassReference_110df49b8;
      lVar16 = 1;
      param_7 = puVar7;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *plStack_80 = (long)puVar11;
      _objc_release(puVar7);
      _objc_release(ppuVar15);
    }
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (long)(param_1 + 1);
    ___cxa_end_catch();
    plVar27 = plVar12;
  }
  __Unwind_Resume();
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar20 = pppppplVar6;
  ppuVar15 = ppuVar14;
  lVar18 = lVar16;
  func_0x00010be9ac00();
  func_0x000109564efc(&ppppplStack_320,*pppppplVar20);
  pppppplVar9 = extraout_x8 + 1;
  *pppppplVar9 = (long *****)0x0;
  extraout_x8[2] = (long *****)0x0;
  *extraout_x8 = (long *****)pppppplVar9;
  pppppplVar20 = (long ******)ppppplStack_320;
  ppuVar8 = (undefined **)appppplStack_318[0];
  while (pppppplVar20 != appppplStack_318) {
    pppppplVar19 = (long ******)extraout_x8[1];
    pppppplVar26 = pppppplVar9;
    appppplStack_318[0] = (long *****)ppuVar8;
    if (pppppplVar9 == (long ******)*extraout_x8) {
joined_r0x000105683ba4:
      ppppplStack_2f0 = (long *****)pppppplVar26;
      pppppplVar26 = pppppplVar9;
      pppppplVar21 = pppppplVar9;
      if (pppppplVar19 != (long ******)0x0) {
        pppppplVar26 = (long ******)(ppppplStack_2f0 + 1);
        goto LAB_105683bb0;
      }
LAB_105683bcc:
      ppppplStack_2f0 = (long *****)pppppplVar21;
      ppuVar15 = (undefined **)pppppplVar26;
      lVar18 = 0x68;
      __Znwm();
      uStack_2f8 = 0;
      lStack_308 = lVar18;
      ppppplStack_300 = (long *****)pppppplVar9;
      if (*(char *)((long)pppppplVar20 + 0x37) < '\0') {
        func_0x000100033dac(lVar18 + 0x20,pppppplVar20[4],pppppplVar20[5]);
      }
      else {
        ppppplVar29 = pppppplVar20[5];
        ppppplVar24 = pppppplVar20[4];
        *(long ******)(lVar18 + 0x30) = pppppplVar20[6];
        *(long ******)(lVar18 + 0x28) = ppppplVar29;
        *(long ******)(lVar18 + 0x20) = ppppplVar24;
      }
      ppppplVar24 = pppppplVar20[8];
      ppppplVar29 = pppppplVar20[7];
      *(long ******)(lVar18 + 0x40) = pppppplVar20[8];
      *(long ******)(lVar18 + 0x38) = ppppplVar29;
      if (ppppplVar24 != (long *****)0x0) {
        ppppplVar24 = ppppplVar24 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppplVar24,0x10);
          if (bVar3) {
            *ppppplVar24 = (long ****)((long)*ppppplVar24 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x000105687458(lVar18 + 0x48,pppppplVar20 + 9);
      ppuVar14 = (undefined **)ppppplStack_2f0;
      func_0x000105688748(extraout_x8);
    }
    else {
      pppppplVar21 = pppppplVar9;
      if (pppppplVar19 == (long ******)0x0) {
        do {
          pppppplVar26 = (long ******)pppppplVar21[2];
          bVar3 = pppppplVar21 == (long ******)*pppppplVar26;
          pppppplVar21 = pppppplVar26;
        } while (bVar3);
      }
      else {
        do {
          pppppplVar26 = pppppplVar19;
          pppppplVar19 = (long ******)pppppplVar26[1];
        } while ((long ******)pppppplVar26[1] != (long ******)0x0);
      }
      uVar4 = (int)pppppplVar26 + 0x20;
      ppuVar14 = (undefined **)(pppppplVar20 + 4);
      func_0x000100125af4();
      if ((uVar4 >> 7 & 1) != 0) {
        pppppplVar19 = (long ******)*pppppplVar9;
        goto joined_r0x000105683ba4;
      }
      ppuVar14 = (undefined **)&ppppplStack_2f0;
      ppuVar15 = (undefined **)(pppppplVar20 + 4);
      pppppplVar26 = extraout_x8;
      func_0x0001056886c4();
LAB_105683bb0:
      pppppplVar21 = (long ******)ppppplStack_2f0;
      if (*pppppplVar26 == (long *****)0x0) goto LAB_105683bcc;
    }
    pppppplVar19 = (long ******)pppppplVar20[1];
    pppppplVar26 = pppppplVar20;
    ppuVar8 = (undefined **)appppplStack_318[0];
    if ((long ******)pppppplVar20[1] == (long ******)0x0) {
      do {
        pppppplVar20 = (long ******)pppppplVar26[2];
        bVar3 = pppppplVar26 != (long ******)*pppppplVar20;
        pppppplVar26 = pppppplVar20;
      } while (bVar3);
    }
    else {
      do {
        pppppplVar20 = pppppplVar19;
        pppppplVar19 = (long ******)*pppppplVar20;
      } while ((long ******)*pppppplVar20 != (long ******)0x0);
    }
  }
  FUN_105688588();
  while( true ) {
    if ((int)lVar16 != 0) {
      pppppplVar20 = pppppplVar6;
      func_0x00010be9ac00();
      ppuVar8 = (undefined **)*pppppplVar20;
      func_0x000109565b1c();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
      return (long ******)ppuVar8;
    }
    ___stack_chk_fail();
    iVar28 = (int)ppuVar14;
    if (iVar28 == 0) break;
    ___cxa_begin_catch();
    if (iVar28 == 2) {
      if (param_7 != (undefined8 *)0x0) {
        pppppplVar9 = (long ******)ppuVar8;
        (*(code *)*(long *****)((long)*ppuVar8 + 0x10))();
        pppppplVar20 = (long ******)PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (pppppplVar9 == (long ******)0x0) {
          ppuVar8 = &PTR____CFConstantStringClassReference_110df4a58;
        }
        else {
          (*(code *)*(long *****)((long)*ppuVar8 + 0x10))(ppuVar8);
          func_0x00010c25da80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = (undefined **)pppppplVar20;
        }
        puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
        uStack_2e8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppppplStack_2e0 = (long *****)ppuVar8;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = &PTR____CFConstantStringClassReference_110df49b8;
        lVar18 = 1;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_7 = puVar11;
        _objc_release(puVar10);
        _objc_release();
      }
      ___cxa_end_catch();
    }
    else {
      if (param_7 != (undefined8 *)0x0) {
        ppuVar15 = &PTR____CFConstantStringClassReference_110df49b8;
        lVar18 = 2;
        ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_7 = ppuVar8;
      }
      ___cxa_end_catch();
    }
    extraout_x8[2] = (long *****)0x0;
    extraout_x8[1] = (long *****)0x0;
    *extraout_x8 = (long *****)(extraout_x8 + 1);
  }
  __Unwind_Resume(ppuVar8);
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar15);
  _objc_retain(lVar18);
  func_0x00010002b838(&lStack_410,&UNK_10f2e5653);
  lStack_420 = 0;
  lStack_418 = 0;
  lVar16 = lVar18;
  plStack_428 = &lStack_420;
  func_0x00010bf081c0();
  cStack_429 = (char)lVar16;
  uStack_490 = 0x42ff0000;
  uStack_450 = (ulong)&uStack_490 | 8;
  uStack_484 = 0;
  uStack_480 = 0;
  iStack_48c = 0;
  uStack_488 = 0;
  uStack_474 = 0;
  uStack_470 = 0;
  uStack_47c = 0;
  uStack_478 = 0;
  uStack_464 = 0;
  uStack_46c = 0;
  uStack_468 = 0;
  lStack_458 = 0;
  uStack_460 = 0;
  uStack_45c = 0;
  uStack_440 = 0;
  uStack_438 = 0;
  puStack_448 = &uStack_440;
  func_0x00010c149320(auStack_5d0,ppuVar8);
  plStack_3c0 = (long *)&cStack_429;
  puStack_3c8 = &uStack_490;
  FUN_105684598(&puStack_3c8,auStack_5d0);
  if (lStack_598 != 0) {
    piVar25 = (int *)(lStack_598 + 0x14);
    do {
      iVar28 = *piVar25;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar3) {
        *piVar25 = iVar28 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(auStack_5d0);
    }
  }
  lStack_598 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  uStack_5a8 = 0;
  uStack_5b0 = 0;
  if (0 < iStack_5cc) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_590 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_5cc);
  }
  if (puStack_588 != auStack_580 && puStack_588 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_588 + -8));
  }
  cVar1 = cStack_429;
  uStack_5f0 = (ulong)&uStack_630 | 8;
  uStack_628 = CONCAT44(uStack_484,uStack_488);
  uStack_630 = CONCAT44(iStack_48c,uStack_490);
  uStack_618 = CONCAT44(uStack_474,uStack_478);
  uStack_620 = CONCAT44(uStack_47c,uStack_480);
  uStack_608 = CONCAT44(uStack_464,uStack_468);
  uStack_610 = CONCAT44(uStack_46c,uStack_470);
  uStack_600 = CONCAT44(uStack_45c,uStack_460);
  lStack_5f8 = lStack_458;
  uStack_5e0 = 0;
  uStack_5d8 = 0;
  if (lStack_458 != 0) {
    piVar25 = (int *)(lStack_458 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar3) {
        *piVar25 = *piVar25 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_5e8 = &uStack_5e0;
  if (iStack_48c < 3) {
    uStack_5e0 = *puStack_448;
    uStack_5d8 = puStack_448[1];
  }
  else {
    uStack_630 = (ulong)uStack_490;
    func_0x000109a84868(&uStack_630,&uStack_490);
  }
  uVar17 = 0x5a;
  if (cVar1 == '\0') {
    uVar17 = 0;
  }
  FUN_105682cb8(0,auStack_5d0,&uStack_630,uVar17);
  FUN_105682d44(&puStack_3c8,auStack_5d0);
  pplVar5 = &plStack_428;
  func_0x0001056886c4(pplVar5,&lStack_3e0,&lStack_410);
  plVar27 = *pplVar5;
  if (plVar27 == (long *)0x0) {
    plVar27 = (long *)0x68;
    __Znwm();
    uStack_3e8 = 0;
    plVar27[5] = lStack_408;
    plVar27[4] = lStack_410;
    plVar27[6] = CONCAT17(uStack_3f9,uStack_400);
    plVar27[0xc] = 0;
    plVar27[0xb] = 0;
    plVar27[10] = 0;
    plVar27[9] = 0;
    plVar27[8] = 0;
    plVar27[7] = 0;
    *plVar27 = 0;
    plVar27[1] = 0;
    plVar27[2] = lStack_3e0;
    plStack_3f8 = plVar27;
    plStack_3f0 = &lStack_420;
    *pplVar5 = plVar27;
    if ((long *)*plStack_428 != (long *)0x0) {
      plStack_428 = (long *)*plStack_428;
    }
    func_0x00010002c5b0(lStack_420,plVar27);
    lStack_418 = lStack_418 + 1;
  }
  FUN_105687d84(plVar27 + 7,&puStack_3c8);
  plVar12 = alStack_3b8;
  func_0x000105687de8(plVar27 + 9);
  if (plStack_3a0 == alStack_3b8) {
    lVar16 = 0x20;
  }
  else {
    if (plStack_3a0 == (long *)0x0) goto LAB_1056841d4;
    lVar16 = 0x28;
  }
  (**(code **)(*plStack_3a0 + lVar16))();
LAB_1056841d4:
  plVar27 = plStack_3c0;
  if (plStack_3c0 != (long *)0x0) {
    plVar13 = plStack_3c0 + 1;
    do {
      lVar16 = *plVar13;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar16 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
    }
  }
  FUN_1056878ec(auStack_5d0);
  if (lStack_5f8 != 0) {
    piVar25 = (int *)(lStack_5f8 + 0x14);
    do {
      iVar28 = *piVar25;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar3) {
        *piVar25 = iVar28 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(&uStack_630);
    }
  }
  lStack_5f8 = 0;
  uStack_618 = 0;
  uStack_620 = 0;
  uStack_608 = 0;
  uStack_610 = 0;
  if (0 < uStack_630._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)(uStack_5f0 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_630._4_4_);
  }
  if (puStack_5e8 != &uStack_5e0 && puStack_5e8 != (undefined8 *)0x0) {
    _free(puStack_5e8[-1]);
  }
  if (lStack_458 != 0) {
    piVar25 = (int *)(lStack_458 + 0x14);
    do {
      iVar28 = *piVar25;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar3) {
        *piVar25 = iVar28 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(&uStack_490);
    }
  }
  lStack_458 = 0;
  uStack_478 = 0;
  uStack_474 = 0;
  uStack_480 = 0;
  uStack_47c = 0;
  uStack_468 = 0;
  uStack_464 = 0;
  uStack_470 = 0;
  uStack_46c = 0;
  if (0 < iStack_48c) {
    lVar16 = 0;
    do {
      *(undefined4 *)(uStack_450 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_48c);
  }
  if (puStack_448 != &uStack_440 && puStack_448 != (undefined8 *)0x0) {
    _free(puStack_448[-1]);
  }
  *extraout_x8_00 = (long)plStack_428;
  plVar13 = extraout_x8_00 + 1;
  *plVar13 = lStack_420;
  extraout_x8_00[2] = lStack_418;
  if (lStack_418 == 0) {
    *extraout_x8_00 = (long)plVar13;
  }
  else {
    *(long **)(lStack_420 + 0x10) = plVar13;
    lStack_420 = 0;
    lStack_418 = 0;
    plStack_428 = &lStack_420;
  }
  while( true ) {
    FUN_105688588(lStack_420);
    _objc_release(lVar18);
    pppppplVar6 = (long ******)ppuVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
      return pppppplVar6;
    }
    ___stack_chk_fail();
    plVar13 = plVar12;
    func_0x000105688798(&plStack_3f8);
    FUN_105681f78(&puStack_3c8);
    FUN_1056878ec(auStack_5d0);
    FUN_10567aa40(&uStack_630);
    FUN_10567aa40(&uStack_490);
    if ((int)plVar12 != 1) break;
    ___cxa_begin_catch();
    if (plVar27 != (long *)0x0) {
      pppppplVar20 = pppppplVar6;
      (*(code *)(*pppppplVar6)[2])();
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (pppppplVar20 == (long ******)0x0) {
        ppuVar14 = &PTR____CFConstantStringClassReference_110df4a58;
      }
      else {
        (*(code *)(*pppppplVar6)[2])(pppppplVar6);
        func_0x00010c25da80();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
      uStack_3d8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_3d0 = ppuVar14;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *plVar27 = (long)puVar11;
      _objc_release(puVar10);
      _objc_release(ppuVar14);
    }
    extraout_x8_00[2] = 0;
    extraout_x8_00[1] = 0;
    *extraout_x8_00 = (long)(extraout_x8_00 + 1);
    ___cxa_end_catch();
    plVar12 = plVar13;
  }
  FUN_105688588(lStack_420);
  _objc_release(lVar18);
  _objc_release(ppuVar15);
  __Unwind_Resume();
  ppppplVar24 = *pppppplVar6;
  if (ppppplVar24[7] != (long ****)0x0) {
    piVar25 = (int *)((long)ppppplVar24[7] + 0x14);
    do {
      iVar28 = *piVar25;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar3) {
        *piVar25 = iVar28 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(ppppplVar24);
    }
  }
  ppppplVar24[7] = (long ****)0x0;
  ppppplVar24[3] = (long ****)0x0;
  ppppplVar24[2] = (long ****)0x0;
  ppppplVar24[5] = (long ****)0x0;
  ppppplVar24[4] = (long ****)0x0;
  if (0 < *(int *)((long)ppppplVar24 + 4)) {
    lVar16 = 0;
    pppplVar22 = ppppplVar24[8];
    do {
      *(undefined4 *)((long)pppplVar22 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)((long)ppppplVar24 + 4));
  }
  piVar25 = (int *)((long)plVar13 + 4);
  iVar28 = *piVar25;
  pppplVar22 = (long ****)*plVar13;
  pppplVar31 = (long ****)plVar13[3];
  pppplVar30 = (long ****)plVar13[2];
  ppppplVar24[1] = (long ****)plVar13[1];
  *ppppplVar24 = pppplVar22;
  ppppplVar24[3] = pppplVar31;
  ppppplVar24[2] = pppplVar30;
  pppplVar22 = (long ****)plVar13[4];
  ppppplVar24[5] = (long ****)plVar13[5];
  ppppplVar24[4] = pppplVar22;
  pppplVar22 = (long ****)plVar13[6];
  ppppplVar24[7] = (long ****)plVar13[7];
  ppppplVar24[6] = pppplVar22;
  ppppplVar23 = (long *****)ppppplVar24[9];
  ppppplVar29 = ppppplVar24 + 10;
  if (ppppplVar23 != ppppplVar29) {
    if (ppppplVar23 != (long *****)0x0) {
      _free(ppppplVar23[-1]);
      iVar28 = *piVar25;
    }
    ppppplVar24[8] = (long ****)(ppppplVar24 + 1);
    ppppplVar24[9] = (long ****)ppppplVar29;
    ppppplVar23 = ppppplVar29;
  }
  pppplVar22 = (long ****)plVar13[9];
  if (iVar28 < 3) {
    *ppppplVar23 = (long ****)*pppplVar22;
    ppppplVar23[1] = (long ****)pppplVar22[1];
  }
  else {
    ppppplVar24[8] = (long ****)plVar13[8];
    ppppplVar24[9] = pppplVar22;
    plVar13[8] = (long)(plVar13 + 1);
    plVar13[9] = (long)(plVar13 + 10);
  }
  *(undefined4 *)plVar13 = 0x42ff0000;
  plVar13[7] = 0;
  plVar13[6] = 0;
  *(undefined8 *)((long)plVar13 + 0x1c) = 0;
  *(undefined8 *)((long)plVar13 + 0x14) = 0;
  *(undefined8 *)((long)plVar13 + 0x2c) = 0;
  *(undefined8 *)((long)plVar13 + 0x24) = 0;
  *(undefined8 *)((long)plVar13 + 0xc) = 0;
  piVar25[0] = 0;
  piVar25[1] = 0;
  *(char *)pppppplVar6[1] = (char)plVar13[0xc];
  return pppppplVar6;
}



/* Entry: 105683ac4; end: 105683eef; -[SCPercMLODINClassificationModel _runODIN:cleanup:error:] */

/* WARNING: Removing unreachable block (ram,0x000105684340) */
/* WARNING: Removing unreachable block (ram,0x000105684138) */
/* WARNING: Removing unreachable block (ram,0x000105684568) */

undefined **
FUN_105683ac4(long ******param_1,undefined8 *param_2,undefined8 param_3,long ******param_4,
             long param_5,undefined8 *param_6)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long ******pppppplVar7;
  undefined *puVar8;
  undefined *puVar9;
  long **pplVar10;
  long *plVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined4 uVar14;
  long ******pppppplVar15;
  long ******pppppplVar16;
  long *extraout_x8;
  long lVar17;
  long lVar18;
  long ******pppppplVar19;
  long ****pppplVar20;
  long *****ppppplVar21;
  long *****ppppplVar22;
  int *piVar23;
  long ******pppppplVar24;
  long *plVar25;
  int iVar26;
  long *****ppppplVar27;
  long ****pppplVar28;
  long ****pppplVar29;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  ulong uStack_380;
  undefined8 *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 auStack_360 [4];
  int iStack_35c;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_328;
  long lStack_320;
  undefined1 *puStack_318;
  undefined1 auStack_310 [240];
  uint uStack_220;
  int iStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  long lStack_1e8;
  ulong uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  char cStack_1b9;
  long *plStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined7 uStack_190;
  undefined1 uStack_189;
  long *plStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  uint *puStack_158;
  long *plStack_150;
  long alStack_148 [3];
  long *plStack_130;
  long lStack_128;
  long *****ppppplStack_b0;
  long *****appppplStack_a8 [2];
  long lStack_98;
  long *****ppppplStack_90;
  undefined8 uStack_88;
  long *****ppppplStack_80;
  undefined8 uStack_78;
  long *****ppppplStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2;
  ppuVar13 = (undefined **)param_4;
  lVar18 = param_5;
  func_0x00010be9ac00();
  func_0x000109564efc(&ppppplStack_b0,*puVar5);
  pppppplVar7 = param_1 + 1;
  *pppppplVar7 = (long *****)0x0;
  param_1[2] = (long *****)0x0;
  *param_1 = (long *****)pppppplVar7;
  pppppplVar16 = (long ******)ppppplStack_b0;
  ppuVar6 = (undefined **)appppplStack_a8[0];
  while (pppppplVar16 != appppplStack_a8) {
    pppppplVar15 = (long ******)param_1[1];
    pppppplVar24 = pppppplVar7;
    appppplStack_a8[0] = (long *****)ppuVar6;
    if (pppppplVar7 == (long ******)*param_1) {
joined_r0x000105683ba4:
      ppppplStack_80 = (long *****)pppppplVar24;
      pppppplVar24 = pppppplVar7;
      pppppplVar19 = pppppplVar7;
      if (pppppplVar15 != (long ******)0x0) {
        pppppplVar24 = (long ******)(ppppplStack_80 + 1);
        goto LAB_105683bb0;
      }
LAB_105683bcc:
      ppppplStack_80 = (long *****)pppppplVar19;
      ppuVar13 = (undefined **)pppppplVar24;
      lVar18 = 0x68;
      __Znwm();
      uStack_88 = 0;
      lStack_98 = lVar18;
      ppppplStack_90 = (long *****)pppppplVar7;
      if (*(char *)((long)pppppplVar16 + 0x37) < '\0') {
        func_0x000100033dac(lVar18 + 0x20,pppppplVar16[4],pppppplVar16[5]);
      }
      else {
        ppppplVar27 = pppppplVar16[5];
        ppppplVar22 = pppppplVar16[4];
        *(long ******)(lVar18 + 0x30) = pppppplVar16[6];
        *(long ******)(lVar18 + 0x28) = ppppplVar27;
        *(long ******)(lVar18 + 0x20) = ppppplVar22;
      }
      ppppplVar22 = pppppplVar16[8];
      ppppplVar27 = pppppplVar16[7];
      *(long ******)(lVar18 + 0x40) = pppppplVar16[8];
      *(long ******)(lVar18 + 0x38) = ppppplVar27;
      if (ppppplVar22 != (long *****)0x0) {
        ppppplVar22 = ppppplVar22 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppplVar22,0x10);
          if (bVar3) {
            *ppppplVar22 = (long ****)((long)*ppppplVar22 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x000105687458(lVar18 + 0x48,pppppplVar16 + 9);
      param_4 = (long ******)ppppplStack_80;
      func_0x000105688748(param_1);
    }
    else {
      pppppplVar19 = pppppplVar7;
      if (pppppplVar15 == (long ******)0x0) {
        do {
          pppppplVar24 = (long ******)pppppplVar19[2];
          bVar3 = pppppplVar19 == (long ******)*pppppplVar24;
          pppppplVar19 = pppppplVar24;
        } while (bVar3);
      }
      else {
        do {
          pppppplVar24 = pppppplVar15;
          pppppplVar15 = (long ******)pppppplVar24[1];
        } while ((long ******)pppppplVar24[1] != (long ******)0x0);
      }
      uVar4 = (int)pppppplVar24 + 0x20;
      param_4 = pppppplVar16 + 4;
      func_0x000100125af4();
      if ((uVar4 >> 7 & 1) != 0) {
        pppppplVar15 = (long ******)*pppppplVar7;
        goto joined_r0x000105683ba4;
      }
      param_4 = &ppppplStack_80;
      ppuVar13 = (undefined **)(pppppplVar16 + 4);
      pppppplVar24 = param_1;
      func_0x0001056886c4();
LAB_105683bb0:
      pppppplVar19 = (long ******)ppppplStack_80;
      if (*pppppplVar24 == (long *****)0x0) goto LAB_105683bcc;
    }
    pppppplVar15 = (long ******)pppppplVar16[1];
    pppppplVar24 = pppppplVar16;
    ppuVar6 = (undefined **)appppplStack_a8[0];
    if ((long ******)pppppplVar16[1] == (long ******)0x0) {
      do {
        pppppplVar16 = (long ******)pppppplVar24[2];
        bVar3 = pppppplVar24 != (long ******)*pppppplVar16;
        pppppplVar24 = pppppplVar16;
      } while (bVar3);
    }
    else {
      do {
        pppppplVar16 = pppppplVar15;
        pppppplVar15 = (long ******)*pppppplVar16;
      } while ((long ******)*pppppplVar16 != (long ******)0x0);
    }
  }
  FUN_105688588();
  while( true ) {
    if ((int)param_5 != 0) {
      puVar5 = param_2;
      func_0x00010be9ac00();
      ppuVar6 = (undefined **)*puVar5;
      func_0x000109565b1c();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return ppuVar6;
    }
    ___stack_chk_fail();
    iVar26 = (int)param_4;
    if (iVar26 == 0) break;
    ___cxa_begin_catch();
    if (iVar26 == 2) {
      if (param_6 != (undefined8 *)0x0) {
        pppppplVar7 = (long ******)ppuVar6;
        (*(code *)*(long *****)((long)*ppuVar6 + 0x10))();
        pppppplVar16 = (long ******)PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (pppppplVar7 == (long ******)0x0) {
          ppuVar6 = &PTR____CFConstantStringClassReference_110df4a58;
        }
        else {
          (*(code *)*(long *****)((long)*ppuVar6 + 0x10))(ppuVar6);
          func_0x00010c25da80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = (undefined **)pppppplVar16;
        }
        puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
        uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppppplStack_70 = (long *****)ppuVar6;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = &PTR____CFConstantStringClassReference_110df49b8;
        lVar18 = 1;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_6 = puVar9;
        _objc_release(puVar8);
        _objc_release();
      }
      ___cxa_end_catch();
    }
    else {
      if (param_6 != (undefined8 *)0x0) {
        ppuVar13 = &PTR____CFConstantStringClassReference_110df49b8;
        lVar18 = 2;
        ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_6 = ppuVar6;
      }
      ___cxa_end_catch();
    }
    param_1[2] = (long *****)0x0;
    param_1[1] = (long *****)0x0;
    *param_1 = (long *****)(param_1 + 1);
  }
  __Unwind_Resume(ppuVar6);
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar13);
  _objc_retain(lVar18);
  func_0x00010002b838(&lStack_1a0,&UNK_10f2e5653);
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  lVar17 = lVar18;
  plStack_1b8 = &lStack_1b0;
  func_0x00010bf081c0();
  cStack_1b9 = (char)lVar17;
  uStack_220 = 0x42ff0000;
  uStack_1e0 = (ulong)&uStack_220 | 8;
  uStack_214 = 0;
  uStack_210 = 0;
  iStack_21c = 0;
  uStack_218 = 0;
  uStack_204 = 0;
  uStack_200 = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  uStack_1f4 = 0;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  puStack_1d8 = &uStack_1d0;
  func_0x00010c149320(auStack_360,ppuVar6);
  plStack_150 = (long *)&cStack_1b9;
  puStack_158 = &uStack_220;
  FUN_105684598(&puStack_158,auStack_360);
  if (lStack_328 != 0) {
    piVar23 = (int *)(lStack_328 + 0x14);
    do {
      iVar26 = *piVar23;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar3) {
        *piVar23 = iVar26 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar26 + -1 == 0) {
      func_0x000109a848d4(auStack_360);
    }
  }
  lStack_328 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  if (0 < iStack_35c) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lStack_320 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < iStack_35c);
  }
  if (puStack_318 != auStack_310 && puStack_318 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_318 + -8));
  }
  cVar1 = cStack_1b9;
  uStack_380 = (ulong)&uStack_3c0 | 8;
  uStack_3b8 = CONCAT44(uStack_214,uStack_218);
  uStack_3c0 = CONCAT44(iStack_21c,uStack_220);
  uStack_3a8 = CONCAT44(uStack_204,uStack_208);
  uStack_3b0 = CONCAT44(uStack_20c,uStack_210);
  uStack_398 = CONCAT44(uStack_1f4,uStack_1f8);
  uStack_3a0 = CONCAT44(uStack_1fc,uStack_200);
  uStack_390 = CONCAT44(uStack_1ec,uStack_1f0);
  lStack_388 = lStack_1e8;
  uStack_370 = 0;
  uStack_368 = 0;
  if (lStack_1e8 != 0) {
    piVar23 = (int *)(lStack_1e8 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar3) {
        *piVar23 = *piVar23 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_378 = &uStack_370;
  if (iStack_21c < 3) {
    uStack_370 = *puStack_1d8;
    uStack_368 = puStack_1d8[1];
  }
  else {
    uStack_3c0 = (ulong)uStack_220;
    func_0x000109a84868(&uStack_3c0,&uStack_220);
  }
  uVar14 = 0x5a;
  if (cVar1 == '\0') {
    uVar14 = 0;
  }
  FUN_105682cb8(0,auStack_360,&uStack_3c0,uVar14);
  FUN_105682d44(&puStack_158,auStack_360);
  pplVar10 = &plStack_1b8;
  func_0x0001056886c4(pplVar10,&lStack_170,&lStack_1a0);
  plVar25 = *pplVar10;
  if (plVar25 == (long *)0x0) {
    plVar25 = (long *)0x68;
    __Znwm();
    uStack_178 = 0;
    plVar25[5] = lStack_198;
    plVar25[4] = lStack_1a0;
    plVar25[6] = CONCAT17(uStack_189,uStack_190);
    plVar25[0xc] = 0;
    plVar25[0xb] = 0;
    plVar25[10] = 0;
    plVar25[9] = 0;
    plVar25[8] = 0;
    plVar25[7] = 0;
    *plVar25 = 0;
    plVar25[1] = 0;
    plVar25[2] = lStack_170;
    plStack_188 = plVar25;
    plStack_180 = &lStack_1b0;
    *pplVar10 = plVar25;
    if ((long *)*plStack_1b8 != (long *)0x0) {
      plStack_1b8 = (long *)*plStack_1b8;
    }
    func_0x00010002c5b0(lStack_1b0,plVar25);
    lStack_1a8 = lStack_1a8 + 1;
  }
  FUN_105687d84(plVar25 + 7,&puStack_158);
  plVar11 = alStack_148;
  func_0x000105687de8(plVar25 + 9);
  if (plStack_130 == alStack_148) {
    lVar17 = 0x20;
  }
  else {
    if (plStack_130 == (long *)0x0) goto LAB_1056841d4;
    lVar17 = 0x28;
  }
  (**(code **)(*plStack_130 + lVar17))();
LAB_1056841d4:
  plVar25 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    plVar12 = plStack_150 + 1;
    do {
      lVar17 = *plVar12;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar17 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  FUN_1056878ec(auStack_360);
  if (lStack_388 != 0) {
    piVar23 = (int *)(lStack_388 + 0x14);
    do {
      iVar26 = *piVar23;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar3) {
        *piVar23 = iVar26 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar26 + -1 == 0) {
      func_0x000109a848d4(&uStack_3c0);
    }
  }
  lStack_388 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  if (0 < uStack_3c0._4_4_) {
    lVar17 = 0;
    do {
      *(undefined4 *)(uStack_380 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_3c0._4_4_);
  }
  if (puStack_378 != &uStack_370 && puStack_378 != (undefined8 *)0x0) {
    _free(puStack_378[-1]);
  }
  if (lStack_1e8 != 0) {
    piVar23 = (int *)(lStack_1e8 + 0x14);
    do {
      iVar26 = *piVar23;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar3) {
        *piVar23 = iVar26 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar26 + -1 == 0) {
      func_0x000109a848d4(&uStack_220);
    }
  }
  lStack_1e8 = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_210 = 0;
  uStack_20c = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uStack_200 = 0;
  uStack_1fc = 0;
  if (0 < iStack_21c) {
    lVar17 = 0;
    do {
      *(undefined4 *)(uStack_1e0 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < iStack_21c);
  }
  if (puStack_1d8 != &uStack_1d0 && puStack_1d8 != (undefined8 *)0x0) {
    _free(puStack_1d8[-1]);
  }
  *extraout_x8 = (long)plStack_1b8;
  plVar12 = extraout_x8 + 1;
  *plVar12 = lStack_1b0;
  extraout_x8[2] = lStack_1a8;
  if (lStack_1a8 == 0) {
    *extraout_x8 = (long)plVar12;
  }
  else {
    *(long **)(lStack_1b0 + 0x10) = plVar12;
    lStack_1b0 = 0;
    lStack_1a8 = 0;
    plStack_1b8 = &lStack_1b0;
  }
  while( true ) {
    FUN_105688588(lStack_1b0);
    _objc_release(lVar18);
    pppppplVar16 = (long ******)ppuVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
      return (undefined **)pppppplVar16;
    }
    ___stack_chk_fail();
    plVar12 = plVar11;
    func_0x000105688798(&plStack_188);
    FUN_105681f78(&puStack_158);
    FUN_1056878ec(auStack_360);
    FUN_10567aa40(&uStack_3c0);
    FUN_10567aa40(&uStack_220);
    if ((int)plVar11 != 1) break;
    ___cxa_begin_catch();
    if (plVar25 != (long *)0x0) {
      pppppplVar7 = pppppplVar16;
      (*(code *)(*pppppplVar16)[2])();
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (pppppplVar7 == (long ******)0x0) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110df4a58;
      }
      else {
        (*(code *)(*pppppplVar16)[2])(pppppplVar16);
        func_0x00010c25da80();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
      uStack_168 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_160 = ppuVar6;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *plVar25 = (long)puVar9;
      _objc_release(puVar8);
      _objc_release(ppuVar6);
    }
    extraout_x8[2] = 0;
    extraout_x8[1] = 0;
    *extraout_x8 = (long)(extraout_x8 + 1);
    ___cxa_end_catch();
    plVar11 = plVar12;
  }
  FUN_105688588(lStack_1b0);
  _objc_release(lVar18);
  _objc_release(ppuVar13);
  __Unwind_Resume();
  ppppplVar22 = *pppppplVar16;
  if (ppppplVar22[7] != (long ****)0x0) {
    piVar23 = (int *)((long)ppppplVar22[7] + 0x14);
    do {
      iVar26 = *piVar23;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar3) {
        *piVar23 = iVar26 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar26 + -1 == 0) {
      func_0x000109a848d4(ppppplVar22);
    }
  }
  ppppplVar22[7] = (long ****)0x0;
  ppppplVar22[3] = (long ****)0x0;
  ppppplVar22[2] = (long ****)0x0;
  ppppplVar22[5] = (long ****)0x0;
  ppppplVar22[4] = (long ****)0x0;
  if (0 < *(int *)((long)ppppplVar22 + 4)) {
    lVar18 = 0;
    pppplVar20 = ppppplVar22[8];
    do {
      *(undefined4 *)((long)pppplVar20 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)((long)ppppplVar22 + 4));
  }
  piVar23 = (int *)((long)plVar12 + 4);
  iVar26 = *piVar23;
  pppplVar20 = (long ****)*plVar12;
  pppplVar29 = (long ****)plVar12[3];
  pppplVar28 = (long ****)plVar12[2];
  ppppplVar22[1] = (long ****)plVar12[1];
  *ppppplVar22 = pppplVar20;
  ppppplVar22[3] = pppplVar29;
  ppppplVar22[2] = pppplVar28;
  pppplVar20 = (long ****)plVar12[4];
  ppppplVar22[5] = (long ****)plVar12[5];
  ppppplVar22[4] = pppplVar20;
  pppplVar20 = (long ****)plVar12[6];
  ppppplVar22[7] = (long ****)plVar12[7];
  ppppplVar22[6] = pppplVar20;
  ppppplVar21 = (long *****)ppppplVar22[9];
  ppppplVar27 = ppppplVar22 + 10;
  if (ppppplVar21 != ppppplVar27) {
    if (ppppplVar21 != (long *****)0x0) {
      _free(ppppplVar21[-1]);
      iVar26 = *piVar23;
    }
    ppppplVar22[8] = (long ****)(ppppplVar22 + 1);
    ppppplVar22[9] = (long ****)ppppplVar27;
    ppppplVar21 = ppppplVar27;
  }
  pppplVar20 = (long ****)plVar12[9];
  if (iVar26 < 3) {
    *ppppplVar21 = (long ****)*pppplVar20;
    ppppplVar21[1] = (long ****)pppplVar20[1];
  }
  else {
    ppppplVar22[8] = (long ****)plVar12[8];
    ppppplVar22[9] = pppplVar20;
    plVar12[8] = (long)(plVar12 + 1);
    plVar12[9] = (long)(plVar12 + 10);
  }
  *(undefined4 *)plVar12 = 0x42ff0000;
  plVar12[7] = 0;
  plVar12[6] = 0;
  *(undefined8 *)((long)plVar12 + 0x1c) = 0;
  *(undefined8 *)((long)plVar12 + 0x14) = 0;
  *(undefined8 *)((long)plVar12 + 0x2c) = 0;
  *(undefined8 *)((long)plVar12 + 0x24) = 0;
  *(undefined8 *)((long)plVar12 + 0xc) = 0;
  piVar23[0] = 0;
  piVar23[1] = 0;
  *(char *)pppppplVar16[1] = (char)plVar12[0xc];
  return (undefined **)pppppplVar16;
}



/* Entry: 105683ef0; end: 105684597; -[SCPercMLODINClassificationModel _createDeepScanInput:imageProcessingConfig:error:] */

/* WARNING: Removing unreachable block (ram,0x000105684340) */
/* WARNING: Removing unreachable block (ram,0x000105684138) */
/* WARNING: Removing unreachable block (ram,0x000105684568) */

long * FUN_105683ef0(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                    undefined8 param_5)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long **pplVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  int *piVar17;
  long *plVar18;
  long lVar19;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  ulong uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [4];
  int iStack_2ac;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_278;
  long lStack_270;
  undefined1 *puStack_268;
  undefined1 auStack_260 [240];
  uint uStack_170;
  int iStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  long lStack_138;
  ulong uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  char cStack_109;
  long *plStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  uint *puStack_a8;
  long *plStack_a0;
  long alStack_98 [3];
  long *plStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010002b838(&lStack_f0,&UNK_10f2e5653);
  lStack_100 = 0;
  lStack_f8 = 0;
  uVar4 = param_5;
  plStack_108 = &lStack_100;
  func_0x00010bf081c0();
  cStack_109 = (char)uVar4;
  uStack_170 = 0x42ff0000;
  uStack_130 = (ulong)&uStack_170 | 8;
  uStack_164 = 0;
  uStack_160 = 0;
  iStack_16c = 0;
  uStack_168 = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_144 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  puStack_128 = &uStack_120;
  func_0x00010c149320(auStack_2b0,param_2);
  plStack_a0 = (long *)&cStack_109;
  puStack_a8 = &uStack_170;
  FUN_105684598(&puStack_a8,auStack_2b0);
  if (lStack_278 != 0) {
    piVar17 = (int *)(lStack_278 + 0x14);
    do {
      iVar12 = *piVar17;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar12 + -1 == 0) {
      func_0x000109a848d4(auStack_2b0);
    }
  }
  lStack_278 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  if (0 < iStack_2ac) {
    lVar13 = 0;
    do {
      *(undefined4 *)(lStack_270 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < iStack_2ac);
  }
  if (puStack_268 != auStack_260 && puStack_268 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_268 + -8));
  }
  cVar1 = cStack_109;
  uStack_2d0 = (ulong)&uStack_310 | 8;
  uStack_308 = CONCAT44(uStack_164,uStack_168);
  uStack_310 = CONCAT44(iStack_16c,uStack_170);
  uStack_2f8 = CONCAT44(uStack_154,uStack_158);
  uStack_300 = CONCAT44(uStack_15c,uStack_160);
  uStack_2e8 = CONCAT44(uStack_144,uStack_148);
  uStack_2f0 = CONCAT44(uStack_14c,uStack_150);
  uStack_2e0 = CONCAT44(uStack_13c,uStack_140);
  lStack_2d8 = lStack_138;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  if (lStack_138 != 0) {
    piVar17 = (int *)(lStack_138 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = *piVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_2c8 = &uStack_2c0;
  if (iStack_16c < 3) {
    uStack_2c0 = *puStack_128;
    uStack_2b8 = puStack_128[1];
  }
  else {
    uStack_310 = (ulong)uStack_170;
    func_0x000109a84868(&uStack_310,&uStack_170);
  }
  uVar11 = 0x5a;
  if (cVar1 == '\0') {
    uVar11 = 0;
  }
  FUN_105682cb8(0,auStack_2b0,&uStack_310,uVar11);
  FUN_105682d44(&puStack_a8,auStack_2b0);
  pplVar5 = &plStack_108;
  func_0x0001056886c4(pplVar5,&lStack_c0,&lStack_f0);
  plVar18 = *pplVar5;
  if (plVar18 == (long *)0x0) {
    plVar18 = (long *)0x68;
    __Znwm();
    uStack_c8 = 0;
    plVar18[5] = lStack_e8;
    plVar18[4] = lStack_f0;
    plVar18[6] = CONCAT17(uStack_d9,uStack_e0);
    plVar18[0xc] = 0;
    plVar18[0xb] = 0;
    plVar18[10] = 0;
    plVar18[9] = 0;
    plVar18[8] = 0;
    plVar18[7] = 0;
    *plVar18 = 0;
    plVar18[1] = 0;
    plVar18[2] = lStack_c0;
    plStack_d8 = plVar18;
    plStack_d0 = &lStack_100;
    *pplVar5 = plVar18;
    if ((long *)*plStack_108 != (long *)0x0) {
      plStack_108 = (long *)*plStack_108;
    }
    func_0x00010002c5b0(lStack_100,plVar18);
    lStack_f8 = lStack_f8 + 1;
  }
  FUN_105687d84(plVar18 + 7,&puStack_a8);
  plVar16 = alStack_98;
  func_0x000105687de8(plVar18 + 9);
  if (plStack_80 == alStack_98) {
    lVar13 = 0x20;
  }
  else {
    if (plStack_80 == (long *)0x0) goto LAB_1056841d4;
    lVar13 = 0x28;
  }
  (**(code **)(*plStack_80 + lVar13))();
LAB_1056841d4:
  plVar18 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar6 = plStack_a0 + 1;
    do {
      lVar13 = *plVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  FUN_1056878ec(auStack_2b0);
  if (lStack_2d8 != 0) {
    piVar17 = (int *)(lStack_2d8 + 0x14);
    do {
      iVar12 = *piVar17;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar12 + -1 == 0) {
      func_0x000109a848d4(&uStack_310);
    }
  }
  lStack_2d8 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  if (0 < uStack_310._4_4_) {
    lVar13 = 0;
    do {
      *(undefined4 *)(uStack_2d0 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < uStack_310._4_4_);
  }
  if (puStack_2c8 != &uStack_2c0 && puStack_2c8 != (undefined8 *)0x0) {
    _free(puStack_2c8[-1]);
  }
  if (lStack_138 != 0) {
    piVar17 = (int *)(lStack_138 + 0x14);
    do {
      iVar12 = *piVar17;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar12 + -1 == 0) {
      func_0x000109a848d4(&uStack_170);
    }
  }
  lStack_138 = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  if (0 < iStack_16c) {
    lVar13 = 0;
    do {
      *(undefined4 *)(uStack_130 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < iStack_16c);
  }
  if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
    _free(puStack_128[-1]);
  }
  *param_1 = (long)plStack_108;
  plVar6 = param_1 + 1;
  *plVar6 = lStack_100;
  param_1[2] = lStack_f8;
  if (lStack_f8 == 0) {
    *param_1 = (long)plVar6;
  }
  else {
    *(long **)(lStack_100 + 0x10) = plVar6;
    lStack_100 = 0;
    lStack_f8 = 0;
    plStack_108 = &lStack_100;
  }
  while( true ) {
    FUN_105688588(lStack_100);
    _objc_release(param_5);
    plVar6 = param_4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return plVar6;
    }
    ___stack_chk_fail();
    plVar10 = plVar16;
    func_0x000105688798(&plStack_d8);
    FUN_105681f78(&puStack_a8);
    FUN_1056878ec(auStack_2b0);
    FUN_10567aa40(&uStack_310);
    FUN_10567aa40(&uStack_170);
    if ((int)plVar16 != 1) break;
    ___cxa_begin_catch();
    if (plVar18 != (long *)0x0) {
      plVar16 = plVar6;
      (**(code **)(*plVar6 + 0x10))();
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (plVar16 == (long *)0x0) {
        ppuVar7 = &PTR____CFConstantStringClassReference_110df4a58;
      }
      else {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x00010c25da80();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
      uStack_b8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_b0 = ppuVar7;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *plVar18 = (long)puVar9;
      _objc_release(puVar8);
      _objc_release(ppuVar7);
    }
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (long)(param_1 + 1);
    ___cxa_end_catch();
    plVar16 = plVar10;
  }
  FUN_105688588(lStack_100);
  _objc_release(param_5);
  _objc_release(param_4);
  __Unwind_Resume();
  plVar18 = (long *)*plVar6;
  if (plVar18[7] != 0) {
    piVar17 = (int *)(plVar18[7] + 0x14);
    do {
      iVar12 = *piVar17;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar12 + -1 == 0) {
      func_0x000109a848d4(plVar18);
    }
  }
  plVar18[7] = 0;
  plVar18[3] = 0;
  plVar18[2] = 0;
  plVar18[5] = 0;
  plVar18[4] = 0;
  if (0 < *(int *)((long)plVar18 + 4)) {
    lVar13 = 0;
    lVar14 = plVar18[8];
    do {
      *(undefined4 *)(lVar14 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)((long)plVar18 + 4));
  }
  piVar17 = (int *)((long)plVar10 + 4);
  iVar12 = *piVar17;
  lVar13 = *plVar10;
  lVar19 = plVar10[3];
  lVar14 = plVar10[2];
  plVar18[1] = plVar10[1];
  *plVar18 = lVar13;
  plVar18[3] = lVar19;
  plVar18[2] = lVar14;
  lVar13 = plVar10[4];
  plVar18[5] = plVar10[5];
  plVar18[4] = lVar13;
  lVar13 = plVar10[6];
  plVar18[7] = plVar10[7];
  plVar18[6] = lVar13;
  plVar15 = (long *)plVar18[9];
  plVar16 = plVar18 + 10;
  if (plVar15 != plVar16) {
    if (plVar15 != (long *)0x0) {
      _free(plVar15[-1]);
      iVar12 = *piVar17;
    }
    plVar18[8] = (long)(plVar18 + 1);
    plVar18[9] = (long)plVar16;
    plVar15 = plVar16;
  }
  plVar16 = (long *)plVar10[9];
  if (iVar12 < 3) {
    *plVar15 = *plVar16;
    plVar15[1] = plVar16[1];
  }
  else {
    plVar18[8] = plVar10[8];
    plVar18[9] = (long)plVar16;
    plVar10[8] = (long)(plVar10 + 1);
    plVar10[9] = (long)(plVar10 + 10);
  }
  *(undefined4 *)plVar10 = 0x42ff0000;
  plVar10[7] = 0;
  plVar10[6] = 0;
  *(undefined8 *)((long)plVar10 + 0x1c) = 0;
  *(undefined8 *)((long)plVar10 + 0x14) = 0;
  *(undefined8 *)((long)plVar10 + 0x2c) = 0;
  *(undefined8 *)((long)plVar10 + 0x24) = 0;
  *(undefined8 *)((long)plVar10 + 0xc) = 0;
  piVar17[0] = 0;
  piVar17[1] = 0;
  *(char *)plVar6[1] = (char)plVar10[0xc];
  return plVar6;
}



/* Entry: 105684598; end: 1056846d3;  */

long * FUN_105684598(long *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar8 = (undefined8 *)*param_1;
  if (puVar8[7] != 0) {
    piVar9 = (int *)(puVar8[7] + 0x14);
    do {
      iVar3 = *piVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(puVar8);
    }
  }
  puVar8[7] = 0;
  puVar8[3] = 0;
  puVar8[2] = 0;
  puVar8[5] = 0;
  puVar8[4] = 0;
  if (0 < *(int *)((long)puVar8 + 4)) {
    lVar4 = 0;
    lVar5 = puVar8[8];
    do {
      *(undefined4 *)(lVar5 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)puVar8 + 4));
  }
  piVar9 = (int *)((long)param_2 + 4);
  iVar3 = *piVar9;
  uVar10 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  puVar8[1] = param_2[1];
  *puVar8 = uVar10;
  puVar8[3] = uVar12;
  puVar8[2] = uVar11;
  uVar10 = param_2[4];
  puVar8[5] = param_2[5];
  puVar8[4] = uVar10;
  uVar10 = param_2[6];
  puVar8[7] = param_2[7];
  puVar8[6] = uVar10;
  puVar6 = (undefined8 *)puVar8[9];
  puVar7 = puVar8 + 10;
  if (puVar6 != puVar7) {
    if (puVar6 != (undefined8 *)0x0) {
      _free(puVar6[-1]);
      iVar3 = *piVar9;
    }
    puVar8[8] = puVar8 + 1;
    puVar8[9] = puVar7;
    puVar6 = puVar7;
  }
  puVar7 = (undefined8 *)param_2[9];
  if (iVar3 < 3) {
    *puVar6 = *puVar7;
    puVar6[1] = puVar7[1];
  }
  else {
    puVar8[8] = param_2[8];
    puVar8[9] = puVar7;
    param_2[8] = param_2 + 1;
    param_2[9] = param_2 + 10;
  }
  *(undefined4 *)param_2 = 0x42ff0000;
  param_2[7] = 0;
  param_2[6] = 0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  *(undefined8 *)((long)param_2 + 0x14) = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  *(undefined8 *)((long)param_2 + 0xc) = 0;
  piVar9[0] = 0;
  piVar9[1] = 0;
  *(undefined1 *)param_1[1] = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}



/* Entry: 1056846d4; end: 10568476f;  */

long FUN_1056846d4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 105684770; end: 105684f4b; -[SCPercMLODINClassificationModel _createFaceEmbeddingInputFromImage:boundingBox:error:] */

/* WARNING: Removing unreachable block (ram,0x000105684bd4) */
/* WARNING: Removing unreachable block (ram,0x000105684a20) */
/* WARNING: Removing unreachable block (ram,0x000105684d9c) */

undefined **
FUN_105684770(long *param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
             undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long **pplVar6;
  long *plVar7;
  undefined4 *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined ***pppuVar12;
  undefined *puVar13;
  undefined ***pppuVar14;
  char *pcVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  undefined8 *puVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
  undefined ***pppuStack_410;
  undefined8 uStack_408;
  undefined1 ***pppuStack_400;
  code *pcStack_3f8;
  undefined1 **ppuStack_3e0;
  code *pcStack_3d8;
  undefined8 auStack_3d0 [2];
  char cStack_3b9;
  undefined1 auStack_3b8 [24];
  undefined ***apppuStack_3a0 [2];
  char cStack_389;
  long lStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  long *plStack_350;
  long *plStack_348;
  undefined8 uStack_340;
  undefined **ppuStack_338;
  undefined1 *puStack_330;
  code *pcStack_328;
  undefined4 uStack_318;
  int iStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  undefined4 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  int iStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  undefined4 *puStack_278;
  undefined8 *puStack_270;
  undefined8 auStack_268 [30];
  undefined4 uStack_178;
  int iStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined4 *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long lStack_110;
  long lStack_108;
  undefined **ppuStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  undefined *apuStack_d0 [3];
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined ***pppuStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lStack_108 = 0;
  lStack_110 = 0;
  plStack_118 = &lStack_110;
  func_0x00010c149320(&uStack_2b8,param_2);
  uStack_318 = uStack_2b8;
  uStack_178 = uStack_2b8;
  iStack_174 = iStack_2b4;
  uStack_170 = uStack_2b0;
  uStack_16c = uStack_2ac;
  uStack_160 = uStack_2a0;
  uStack_168 = uStack_2a8;
  uStack_150 = uStack_290;
  uStack_158 = uStack_298;
  lStack_140 = lStack_280;
  uStack_148 = uStack_288;
  puStack_130 = &uStack_128;
  uStack_128 = 0;
  uStack_120 = 0;
  puStack_138 = &uStack_170;
  if (iStack_2b4 < 3) {
    puVar23 = (undefined8 *)((ulong)&uStack_2b8 | 4);
    uStack_128 = *puStack_270;
    uStack_120 = puStack_270[1];
    uStack_2b8 = 0x42ff0000;
    puVar23[1] = 0;
    *puVar23 = 0;
    puVar23[3] = 0;
    puVar23[2] = 0;
    puVar23[5] = 0;
    puVar23[4] = 0;
    *(undefined8 *)((long)puVar23 + 0x34) = 0;
    *(undefined8 *)((long)puVar23 + 0x2c) = 0;
    if (puStack_270 != auStack_268) {
      _free(puStack_270[-1]);
      uStack_318 = uStack_178;
    }
  }
  else {
    puStack_138 = puStack_278;
    puStack_130 = puStack_270;
  }
  puVar23 = (undefined8 *)((ulong)&uStack_178 | 4);
  puStack_2d8 = &uStack_310;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  if (iStack_174 < 3) {
    uStack_2c8 = *puStack_130;
    uStack_2c0 = puStack_130[1];
    puStack_2d0 = &uStack_2c8;
  }
  else {
    puStack_2d8 = puStack_138;
    puStack_2d0 = puStack_130;
    puStack_138 = &uStack_170;
    puStack_130 = &uStack_128;
  }
  uStack_178 = 0x42ff0000;
  puVar23[1] = 0;
  *puVar23 = 0;
  puVar23[3] = 0;
  puVar23[2] = 0;
  puVar23[5] = 0;
  puVar23[4] = 0;
  *(undefined8 *)((long)puVar23 + 0x34) = 0;
  *(undefined8 *)((long)puVar23 + 0x2c) = 0;
  iStack_314 = iStack_174;
  uStack_310 = uStack_170;
  uStack_30c = uStack_16c;
  uStack_308 = uStack_168;
  uStack_300 = uStack_160;
  uStack_2f8 = uStack_158;
  uStack_2f0 = uStack_150;
  uStack_2e8 = uStack_148;
  lStack_2e0 = lStack_140;
  FUN_105682cb8(0,&uStack_2b8,&uStack_318,0);
  if (lStack_2e0 != 0) {
    piVar22 = (int *)(lStack_2e0 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_318);
    }
  }
  lStack_2e0 = 0;
  uVar25 = 0;
  uStack_300 = 0;
  uStack_308 = 0;
  uStack_2f0 = 0;
  uStack_2f8 = 0;
  if (0 < iStack_314) {
    lVar20 = 0;
    do {
      puStack_2d8[lVar20] = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < iStack_314);
  }
  if (puStack_2d0 != &uStack_2c8 && puStack_2d0 != (undefined8 *)0x0) {
    _free(puStack_2d0[-1]);
  }
  FUN_105682d44(auStack_e0,&uStack_2b8);
  func_0x00010002b838(&ppuStack_b0,&UNK_10f2e5653);
  pplVar6 = &plStack_118;
  FUN_105688630(pplVar6,&ppuStack_b0,&ppuStack_b0);
  FUN_105687d84(pplVar6 + 7,auStack_e0);
  func_0x000105687de8(pplVar6 + 9,apuStack_d0);
  if (ppuStack_b8 == apuStack_d0) {
    lVar20 = 0x20;
LAB_105684a44:
    (**(code **)(*ppuStack_b8 + lVar20))();
  }
  else if (ppuStack_b8 != (undefined **)0x0) {
    lVar20 = 0x28;
    goto LAB_105684a44;
  }
  plVar7 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar1 = plStack_d8 + 1;
    do {
      lVar20 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar20 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  func_0x00010c2be880(param_5);
  uVar26 = uVar25;
  func_0x00010c2beba0(param_5);
  uVar27 = uVar26;
  func_0x00010c2a5040(param_5);
  uVar24 = uVar28;
  func_0x00010bfe0640(param_5);
  plVar7 = (long *)0x38;
  __Znwm();
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_1108a6378;
  plVar7[1] = 0;
  ppuVar17 = (undefined **)(plVar7 + 3);
  *ppuVar17 = (undefined *)0x0;
  plVar7[4] = 0;
  puVar8 = (undefined4 *)0x10;
  __Znwm();
  *puVar8 = (int)uVar25;
  puVar8[1] = (int)uVar26;
  uVar28 = (undefined4)uVar27;
  puVar8[2] = uVar28;
  puVar8[3] = uVar24;
  plVar7[3] = (long)FUN_105689410;
  plVar7[4] = (long)puVar8;
  ppuStack_b0 = &PTR_FUN_1108a6288;
  ppuStack_100 = ppuVar17;
  plStack_f8 = plVar7;
  ppuStack_a8 = ppuVar17;
  pppuStack_98 = &ppuStack_b0;
  func_0x000109567d5c(auStack_e0,&ppuStack_100,&ppuStack_b0);
  if (pppuStack_98 == &ppuStack_b0) {
    lVar20 = 0x20;
LAB_105684b44:
    (**(code **)((long)*pppuStack_98 + lVar20))();
  }
  else if (pppuStack_98 != (undefined ***)0x0) {
    lVar20 = 0x28;
    goto LAB_105684b44;
  }
  plVar7 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    plVar1 = plStack_f8 + 1;
    do {
      lVar20 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar20 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  func_0x00010002b838(&ppuStack_b0,&UNK_10f2e56c2);
  pplVar6 = &plStack_118;
  ppuVar18 = (undefined **)&ppuStack_b0;
  FUN_105688630(pplVar6,&ppuStack_b0);
  FUN_105687d84(pplVar6 + 7,auStack_e0);
  ppuVar10 = apuStack_d0;
  func_0x000105687de8(pplVar6 + 9);
  if (ppuStack_b8 == apuStack_d0) {
    lVar20 = 0x20;
  }
  else {
    if (ppuStack_b8 == (undefined **)0x0) goto LAB_105684c04;
    lVar20 = 0x28;
  }
  (**(code **)(*ppuStack_b8 + lVar20))();
LAB_105684c04:
  if (plStack_d8 != (long *)0x0) {
    plVar7 = plStack_d8 + 1;
    do {
      lVar20 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar20 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
    }
  }
  FUN_1056878ec(&uStack_2b8);
  if (lStack_140 != 0) {
    piVar22 = (int *)(lStack_140 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar4) {
        *piVar22 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_178);
    }
  }
  lStack_140 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  if (0 < iStack_174) {
    lVar20 = 0;
    do {
      puStack_138[lVar20] = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < iStack_174);
  }
  if (puStack_130 != &uStack_128 && puStack_130 != (undefined8 *)0x0) {
    _free(puStack_130[-1]);
  }
  *param_1 = (long)plStack_118;
  plVar7 = param_1 + 1;
  *plVar7 = lStack_110;
  param_1[2] = lStack_108;
  if (lStack_108 == 0) {
    *param_1 = (long)plVar7;
  }
  else {
    *(long **)(lStack_110 + 0x10) = plVar7;
    lStack_110 = 0;
    lStack_108 = 0;
    plStack_118 = &lStack_110;
  }
  while( true ) {
    FUN_105688588(lStack_110);
    _objc_release(param_5);
    ppuVar9 = param_4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
      return ppuVar9;
    }
    ___stack_chk_fail();
    ppuStack_360 = ppuVar17;
    if ((int)ppuVar10 == 0) break;
    func_0x000104bd46a0();
    ppuVar16 = ppuVar10;
    FUN_105681f78(auStack_e0);
    FUN_1056878ec(&uStack_2b8);
    FUN_10567aa40(&uStack_178);
    if ((int)ppuVar10 != 1) {
      FUN_105688588(lStack_110);
      _objc_release(param_5);
      _objc_release(param_4);
      ppuStack_360 = ppuVar10;
      break;
    }
    ___cxa_begin_catch();
    ppuVar17 = ppuVar10;
    if (plStack_d8 != (long *)0x0) {
      ppuVar10 = ppuVar9;
      (**(code **)(*ppuVar9 + 0x10))();
      ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (ppuVar10 == (undefined **)0x0) {
        ppuVar17 = &PTR____CFConstantStringClassReference_110df4a58;
      }
      else {
        (**(code **)(*ppuVar9 + 0x10))(ppuVar9);
        func_0x00010c25da80();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
      uStack_f0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_e8 = ppuVar17;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      ppuVar18 = &PTR____CFConstantStringClassReference_110df49b8;
      uVar19 = 1;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *plStack_d8 = (long)puVar13;
      _objc_release(puVar11);
      _objc_release(ppuVar17);
    }
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (long)(param_1 + 1);
    ___cxa_end_catch();
    ppuVar10 = ppuVar16;
  }
  __Unwind_Resume(ppuVar9);
  plStack_350 = plStack_d8;
  pcStack_328 = FUN_105684f4c;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_370 = uVar26;
  uStack_368 = uVar25;
  ppuStack_358 = ppuVar9;
  plStack_348 = param_1;
  uStack_340 = param_5;
  ppuStack_338 = param_4;
  puStack_330 = &stack0xfffffffffffffff0;
  func_0x00010002b838(auStack_3d0,&UNK_10f2e56cc);
  pppuVar12 = (undefined ***)ppuVar18;
  FUN_1056853a0(ppuVar18,auStack_3d0);
  ppuVar17 = *pppuVar12;
  if ((ppuVar17 != (undefined **)0x0) && ((code *)*ppuVar17 != (code *)0x0)) {
    puVar8 = (undefined4 *)0x3;
    (*(code *)*ppuVar17)(3,ppuVar17,0,PTR___ZTIf_110346a98,&UNK_10ddb8848);
    if (puVar8 != (undefined4 *)0x0) {
      uVar28 = *puVar8;
      if (cStack_3b9 < '\0') {
        __ZdlPv(auStack_3d0[0]);
      }
      func_0x00010002b838(apppuStack_3a0,&UNK_10f2e56dc);
      FUN_1056853a0(ppuVar18,apppuStack_3a0);
      FUN_1056853dc();
      pppuVar12 = (undefined ***)ppuVar18;
      if (cStack_389 < '\0') {
        __ZdlPv();
        pppuVar12 = apppuStack_3a0[0];
      }
      ppuVar17 = (undefined **)*ppuVar18;
      if (ppuVar17 == (undefined **)ppuVar18[1]) {
        ppuVar17 = (undefined **)0x0;
      }
      else {
        puVar8 = (undefined4 *)*ppuVar17;
        uVar21 = 1;
        for (piVar22 = (int *)ppuVar17[1]; piVar22 != (int *)ppuVar17[2]; piVar22 = piVar22 + 1) {
          uVar21 = (ulong)(uint)(*piVar22 * (int)uVar21);
        }
        ppuVar17 = (undefined **)0x0;
        if ((puVar8 != (undefined4 *)0x0) && (0 < (int)uVar21)) {
          pppuVar12 = (undefined ***)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf0a0e0();
          _objc_retainAutoreleasedReturnValue();
          do {
            puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df740(*puVar8,PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(pppuVar12);
            _objc_release(puVar13);
            uVar21 = uVar21 - 1;
            puVar8 = puVar8 + 1;
          } while (uVar21 != 0);
          ppuVar17 = (undefined **)PTR_PTR_1126bcad0;
          _objc_alloc(PTR_PTR_1126bcad0);
          func_0x00010c000d80(uVar28);
          _objc_release();
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_378) {
        ___stack_chk_fail();
        ___cxa_end_catch();
        pppuVar14 = pppuVar12;
        __Unwind_Resume();
        pcStack_3d8 = FUN_1056853a0;
        ppuStack_3e0 = &puStack_330;
        func_0x0001056886c4();
        if (*pppuVar14 != (undefined **)0x0) {
          return *pppuVar14 + 7;
        }
        pcVar15 = "map::at:  key not found";
        func_0x000104c03f28();
        pcStack_3f8 = FUN_1056853dc;
        puVar23 = *(undefined8 **)pcVar15;
        pppuStack_410 = pppuVar12;
        uStack_408 = uVar19;
        pppuStack_400 = &ppuStack_3e0;
        if ((puVar23 != (undefined8 *)0x0) && ((code *)*puVar23 != (code *)0x0)) {
          ppuVar17 = (undefined **)0x3;
          (*(code *)*puVar23)(3,puVar23,0,&PTR_DAT_1108a62f8,&UNK_10ddb8884);
          if (ppuVar17 != (undefined **)0x0) {
            return ppuVar17;
          }
        }
        func_0x00010002b838(auStack_440,&UNK_10f2e5846);
        lVar20 = *(long *)pcVar15;
        FUN_1056887e0();
        func_0x00010048a6c8(auStack_428,auStack_440,*(ulong *)(lVar20 + 8) & 0x7fffffffffffffff);
        FUN_105687ee0(auStack_428);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x105685468);
        (*pcVar5)();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar17);
      return ppuVar17;
    }
  }
  func_0x00010002b838(auStack_3b8,&UNK_10f2e5846);
  ppuVar17 = *pppuVar12;
  FUN_1056887e0();
  func_0x00010048a6c8(apppuStack_3a0,auStack_3b8,(ulong)ppuVar17[1] & 0x7fffffffffffffff);
  FUN_105687ee0(apppuStack_3a0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10568510c);
  (*pcVar5)();
}



/* Entry: 105684f4c; end: 10568539f; -[SCPercMLODINClassificationModel _parseFaceEmbeddingOutput:error:] */

undefined * FUN_105684f4c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  code *pcVar1;
  long *plVar2;
  undefined4 *puVar3;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 auStack_b0 [2];
  char cStack_99;
  undefined1 auStack_98 [24];
  long *aplStack_80 [2];
  char cStack_69;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010002b838(auStack_b0,&UNK_10f2e56cc);
  plVar2 = param_3;
  FUN_1056853a0(param_3,auStack_b0);
  puVar7 = (undefined8 *)*plVar2;
  if ((puVar7 != (undefined8 *)0x0) && ((code *)*puVar7 != (code *)0x0)) {
    puVar3 = (undefined4 *)0x3;
    (*(code *)*puVar7)(3,puVar7,0,PTR___ZTIf_110346a98,&UNK_10ddb8848);
    if (puVar3 != (undefined4 *)0x0) {
      uVar11 = *puVar3;
      if (cStack_99 < '\0') {
        __ZdlPv(auStack_b0[0]);
      }
      func_0x00010002b838(aplStack_80,&UNK_10f2e56dc);
      FUN_1056853a0(param_3,aplStack_80);
      FUN_1056853dc();
      plVar2 = param_3;
      if (cStack_69 < '\0') {
        __ZdlPv();
        plVar2 = aplStack_80[0];
      }
      plVar4 = (long *)*param_3;
      if (plVar4 == (long *)param_3[1]) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar3 = (undefined4 *)*plVar4;
        uVar8 = 1;
        for (piVar9 = (int *)plVar4[1]; piVar9 != (int *)plVar4[2]; piVar9 = piVar9 + 1) {
          uVar8 = (ulong)(uint)(*piVar9 * (int)uVar8);
        }
        puVar10 = (undefined *)0x0;
        if ((puVar3 != (undefined4 *)0x0) && (0 < (int)uVar8)) {
          plVar2 = (long *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf0a0e0();
          _objc_retainAutoreleasedReturnValue();
          do {
            puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df740(*puVar3,PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(plVar2);
            _objc_release(puVar10);
            uVar8 = uVar8 - 1;
            puVar3 = puVar3 + 1;
          } while (uVar8 != 0);
          puVar10 = PTR_PTR_1126bcad0;
          _objc_alloc(PTR_PTR_1126bcad0);
          func_0x00010c000d80(uVar11);
          _objc_release();
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
        return puVar10;
      }
      ___stack_chk_fail();
      ___cxa_end_catch();
      plVar4 = plVar2;
      __Unwind_Resume();
      pcStack_b8 = FUN_1056853a0;
      puStack_c0 = &stack0xfffffffffffffff0;
      func_0x0001056886c4();
      if (*plVar4 != 0) {
        return (undefined *)(*plVar4 + 0x38);
      }
      pcVar5 = "map::at:  key not found";
      func_0x000104c03f28();
      pcStack_d8 = FUN_1056853dc;
      puVar7 = *(undefined8 **)pcVar5;
      plStack_f0 = plVar2;
      uStack_e8 = param_4;
      ppuStack_e0 = &puStack_c0;
      if ((puVar7 != (undefined8 *)0x0) && ((code *)*puVar7 != (code *)0x0)) {
        puVar10 = (undefined *)0x3;
        (*(code *)*puVar7)(3,puVar7,0,&PTR_DAT_1108a62f8,&UNK_10ddb8884);
        if (puVar10 != (undefined *)0x0) {
          return puVar10;
        }
      }
      func_0x00010002b838(auStack_120,&UNK_10f2e5846);
      lVar6 = *(long *)pcVar5;
      FUN_1056887e0();
      func_0x00010048a6c8(auStack_108,auStack_120,*(ulong *)(lVar6 + 8) & 0x7fffffffffffffff);
      FUN_105687ee0(auStack_108);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x105685468);
      (*pcVar1)();
    }
  }
  func_0x00010002b838(auStack_98,&UNK_10f2e5846);
  lVar6 = *plVar2;
  FUN_1056887e0();
  func_0x00010048a6c8(aplStack_80,auStack_98,*(ulong *)(lVar6 + 8) & 0x7fffffffffffffff);
  FUN_105687ee0(aplStack_80);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10568510c);
  (*pcVar1)();
}



/* Entry: 1056853a0; end: 1056853db;  */

long FUN_1056853a0(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_18 [8];
  
  func_0x0001056886c4(param_1,auStack_18,param_2);
  if (*param_1 != 0) {
    return *param_1 + 0x38;
  }
  pcVar2 = "map::at:  key not found";
  func_0x000104c03f28();
  puVar4 = *(undefined8 **)pcVar2;
  if ((puVar4 != (undefined8 *)0x0) && ((code *)*puVar4 != (code *)0x0)) {
    lVar3 = 3;
    (*(code *)*puVar4)(3,puVar4,0,&PTR_DAT_1108a62f8,&UNK_10ddb8884);
    if (lVar3 != 0) {
      return lVar3;
    }
  }
  func_0x00010002b838(auStack_70,&UNK_10f2e5846);
  lVar3 = *(long *)pcVar2;
  FUN_1056887e0();
  func_0x00010048a6c8(auStack_58,auStack_70,*(ulong *)(lVar3 + 8) & 0x7fffffffffffffff);
  FUN_105687ee0(auStack_58);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105685468);
  (*pcVar1)();
}



/* Entry: 1056853dc; end: 10568549f;  */

void FUN_1056853dc(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  puVar3 = (undefined8 *)*param_1;
  if ((puVar3 != (undefined8 *)0x0) && ((code *)*puVar3 != (code *)0x0)) {
    lVar2 = 3;
    (*(code *)*puVar3)(3,puVar3,0,&PTR_DAT_1108a62f8,&UNK_10ddb8884);
    if (lVar2 != 0) {
      return;
    }
  }
  func_0x00010002b838(auStack_50,&UNK_10f2e5846);
  lVar2 = *param_1;
  FUN_1056887e0();
  func_0x00010048a6c8(auStack_38,auStack_50,*(ulong *)(lVar2 + 8) & 0x7fffffffffffffff);
  FUN_105687ee0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105685468);
  (*pcVar1)();
}



/* Entry: 1056854a0; end: 1056856ff; -[SCPercMLODINClassificationModel _extractFaceEmbeddingFromImageOnPerformer:boundingBox:] */

void FUN_1056854a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x38);
  puStack_50 = (undefined *)0x0;
  func_0x00010bded900(auStack_48,param_1,param_2,param_3,param_4,&puStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puStack_50;
  _objc_retain(puStack_50);
  puVar3 = PTR_PTR_1126ae750;
  if (puVar4 == (undefined *)0x0) {
    if (lStack_38 != 0) {
      puStack_70 = (undefined *)0x0;
      func_0x00010be97fa0(auStack_68,param_1,param_2,auStack_48,0,&puStack_70);
      puVar4 = puStack_70;
      _objc_retain(puStack_70);
      puVar3 = PTR_PTR_1126ae750;
      if (puVar4 == (undefined *)0x0) {
        if (lStack_58 == 0) {
          puVar2 = &UNK_10f2e5708;
          goto LAB_105685588;
        }
        puStack_78 = (undefined *)0x0;
        lVar1 = param_1;
        func_0x00010be70160(param_1,param_2,auStack_68,&puStack_78);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puStack_78;
        _objc_retain(puStack_78);
        puVar3 = PTR_PTR_1126ae750;
        if (lVar1 == 0) {
          if (puVar4 == (undefined *)0x0) {
            puVar2 = &UNK_10f2e5723;
          }
          else {
            puVar2 = puVar4;
            FUN_10568c5fc(puVar4);
          }
          func_0x00010bf993e0(puVar3,param_2,puVar2);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,lVar1);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(lVar1);
      }
      else {
        puVar2 = puVar4;
        FUN_10568c5fc(puVar4);
LAB_105685588:
        func_0x00010bf993e0(puVar3,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      FUN_105688588(uStack_60);
      goto LAB_105685660;
    }
    puVar2 = &UNK_10f2e56ec;
  }
  else {
    puVar2 = puVar4;
    FUN_10568c5fc(puVar4);
  }
  func_0x00010bf993e0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
LAB_105685660:
  FUN_105688588(uStack_40);
  _objc_release(puVar4);
  _os_unfair_lock_unlock(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105685700; end: 105685963; -[SCPercMLODINClassificationModel extractFaceEmbeddingsFromImages:boundingBoxes:completionQueue:completion:] */

void FUN_105685700(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf529e0();
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == lVar2) {
    lVar1 = param_3;
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_98,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      _objc_copyWeak(auStack_a0,auStack_98);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(param_5);
      _objc_retain(param_6);
      func_0x00010c0f7fc0(uVar3);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_a0);
      _objc_destroyWeak(auStack_98);
      goto LAB_1056858c8;
    }
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1056859c8;
    puStack_78 = &UNK_11087bb60;
    _objc_retain(param_6);
    uStack_70 = param_6;
    func_0x00010007380c(param_5,&puStack_90);
    uVar3 = uStack_70;
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105685964;
    puStack_50 = &UNK_11087bb60;
    _objc_retain(param_6);
    uStack_48 = param_6;
    func_0x00010007380c(param_5,&puStack_68);
    uVar3 = uStack_48;
  }
  _objc_release(uVar3);
LAB_1056858c8:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105685964; end: 1056859c7;  */

void FUN_105685964(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010bf993e0(PTR_PTR_1126ae750,param_2,&UNK_10f2e573f);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056859c8; end: 105685a2b;  */

void FUN_1056859c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,PTR____NSArray0__struct_11034ab48);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105685a2c; end: 105685c9f;  */

void FUN_105685a2c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar1 == 0) {
    puVar8 = PTR_PTR_1126ae750;
    func_0x00010bf993e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf0a0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0;
    while( true ) {
      uVar3 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf529e0();
      if (uVar3 <= uVar9) break;
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0dfd40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0dfd40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010be0dac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      lVar7 = lVar6;
      func_0x00010c0ec5e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 == 0) {
        puVar8 = PTR_PTR_1126ae750;
        func_0x00010bf993e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        if (puVar8 != (undefined *)0x0) goto LAB_105685b9c;
        break;
      }
      func_0x00010befa120(puVar2);
      _objc_release(lVar7);
      _objc_release(lVar6);
      uVar9 = uVar9 + 1;
    }
    puVar8 = PTR_PTR_1126ae750;
    func_0x00010c2468a0();
    _objc_retainAutoreleasedReturnValue();
LAB_105685b9c:
    _objc_release(puVar2);
  }
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105685ca0;
  puStack_68 = &UNK_1107d0af0;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  puStack_60 = puVar8;
  uStack_58 = uVar5;
  _objc_retain(puVar8);
  func_0x00010007380c(uVar4,&puStack_80);
  _objc_release(puStack_60);
  _objc_release(uStack_58);
  _objc_release(puVar8);
  _objc_release(lVar1);
  return;
}



/* Entry: 105685ca0; end: 105685caf;  */

void FUN_105685ca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105685cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105685cb0; end: 1056860ff; -[SCPercMLODINClassificationModel _parseDeepScanOutput:error:] */

/* WARNING: Removing unreachable block (ram,0x000105685f18) */

void FUN_105685cb0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long **pplVar8;
  long **pplVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long *aplStack_d0 [2];
  char cStack_b9;
  long *aplStack_b8 [2];
  char cStack_a1;
  long *aplStack_a0 [2];
  char cStack_89;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010002b838(aplStack_a0,"uuid");
  func_0x00010002b838(aplStack_b8,&DAT_10f2e57b6);
  func_0x00010002b838(aplStack_d0,&UNK_10f2e57c0);
  plVar2 = param_3;
  FUN_1056853a0(param_3,aplStack_a0);
  pplVar8 = (long **)*plVar2;
  if ((pplVar8 != (long **)0x0) && ((code *)*pplVar8 != (code *)0x0)) {
    plVar3 = (long *)0x3;
    (*(code *)*pplVar8)(3,pplVar8,0,&PTR_DAT_1108a6308,&UNK_10ddb88c8);
    if (plVar3 != (long *)0x0) {
      if (*(char *)((long)plVar3 + 0x17) < '\0') {
        pplVar8 = (long **)*plVar3;
        func_0x000100033dac(&lStack_f0,pplVar8,plVar3[1]);
      }
      else {
        lStack_e8 = plVar3[1];
        lStack_f0 = *plVar3;
        uStack_e0 = plVar3[2];
      }
      plVar2 = (long *)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (uStack_e0 < 0) {
        if (lStack_e8 == 0) {
          __ZdlPv(lStack_f0);
          goto LAB_105685e5c;
        }
      }
      else if (uStack_e0._7_1_ == '\0') goto LAB_105685e5c;
      func_0x00010bf68f00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c25d8e0();
      _objc_retainAutoreleasedReturnValue();
      FUN_1056853a0(param_3,aplStack_b8);
      FUN_105686100();
      pplVar9 = aplStack_d0;
      FUN_1056853a0();
      FUN_105686100();
      if (uStack_e0 < 0) {
        __ZdlPv(lStack_f0);
      }
      puVar4 = PTR_PTR_1126b3230;
      _objc_alloc(PTR_PTR_1126b3230);
      func_0x00010c05fa40();
      puVar11 = (undefined8 *)PTR_PTR_1126b3238;
      _objc_alloc();
      func_0x00010c01ba00();
      _objc_release(puVar4);
      while( true ) {
        _objc_release();
        if (cStack_b9 < '\0') {
          plVar2 = aplStack_d0[0];
          __ZdlPv();
        }
        if (cStack_a1 < '\0') {
          plVar2 = aplStack_b8[0];
          __ZdlPv();
        }
        if (cStack_89 < '\0') {
          plVar2 = aplStack_a0[0];
          __ZdlPv();
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) break;
        ___stack_chk_fail();
        pplVar8 = pplVar9;
        if (cStack_71 < '\0') {
          __ZdlPv(auStack_88[0]);
        }
        if ((int)pplVar9 != 2) {
          _objc_release(0);
          if (cStack_b9 < '\0') {
            __ZdlPv(aplStack_d0[0]);
          }
          if (cStack_a1 < '\0') {
            __ZdlPv(aplStack_b8[0]);
          }
          if (cStack_89 < '\0') {
            __ZdlPv(aplStack_a0[0]);
          }
          __Unwind_Resume();
          uStack_110 = 0;
          pcStack_f8 = FUN_105686100;
          puVar10 = (undefined8 *)*plVar2;
          puStack_108 = puVar11;
          puStack_100 = &stack0xfffffffffffffff0;
          if ((puVar10 != (undefined8 *)0x0) && ((code *)*puVar10 != (code *)0x0)) {
            lVar7 = 3;
            (*(code *)*puVar10)(3,puVar10,0,PTR___ZTIi_110346aa8,&UNK_10ddb8698);
            if (lVar7 != 0) {
              return;
            }
          }
          func_0x00010002b838(auStack_140,&UNK_10f2e5846);
          lVar7 = *plVar2;
          FUN_1056887e0();
          func_0x00010048a6c8(auStack_128,auStack_140,*(ulong *)(lVar7 + 8) & 0x7fffffffffffffff);
          FUN_105687ee0(auStack_128);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10568618c);
          (*pcVar1)();
        }
        ___cxa_begin_catch();
        if (puVar11 != (undefined8 *)0x0) {
          plVar3 = plVar2;
          (**(code **)(*plVar2 + 0x10))();
          ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (plVar3 == (long *)0x0) {
            ppuVar5 = &PTR____CFConstantStringClassReference_110df4a58;
          }
          else {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            func_0x00010c25da80();
            _objc_retainAutoreleasedReturnValue();
          }
          puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
          uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          ppuStack_50 = ppuVar5;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *puVar11 = puVar4;
          _objc_release(puVar6);
          _objc_release(ppuVar5);
        }
        ___cxa_end_catch();
LAB_105685e5c:
        plVar2 = (long *)0x0;
        puVar11 = (undefined8 *)0x0;
        pplVar9 = pplVar8;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
      return;
    }
  }
  func_0x00010002b838(auStack_88,&UNK_10f2e5846);
  lVar7 = *plVar2;
  FUN_1056887e0();
  func_0x00010048a6c8(auStack_70,auStack_88,*(ulong *)(lVar7 + 8) & 0x7fffffffffffffff);
  FUN_105687ee0(auStack_70);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105685f04);
  (*pcVar1)();
}



/* Entry: 105686100; end: 1056861c3;  */

void FUN_105686100(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  puVar3 = (undefined8 *)*param_1;
  if ((puVar3 != (undefined8 *)0x0) && ((code *)*puVar3 != (code *)0x0)) {
    lVar2 = 3;
    (*(code *)*puVar3)(3,puVar3,0,PTR___ZTIi_110346aa8,&UNK_10ddb8698);
    if (lVar2 != 0) {
      return;
    }
  }
  func_0x00010002b838(auStack_50,&UNK_10f2e5846);
  lVar2 = *param_1;
  FUN_1056887e0();
  func_0x00010048a6c8(auStack_38,auStack_50,*(ulong *)(lVar2 + 8) & 0x7fffffffffffffff);
  FUN_105687ee0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10568618c);
  (*pcVar1)();
}



/* Entry: 1056861c4; end: 1056864d7; -[SCPercMLODINClassificationModel _parseCLIPWithkNNOutput:error:] */

void FUN_1056861c4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010002b838(auStack_70,&UNK_10f2e56dc);
  func_0x00010002b838(auStack_88,&UNK_10f2e57cf);
  plVar2 = param_3;
  FUN_1056853a0(param_3,auStack_88);
  FUN_105683010();
  FUN_105688e20(auStack_a8,0,plVar2);
  func_0x00010be18c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1056893c8(auStack_a8);
  FUN_1056853a0(param_3,auStack_70);
  FUN_1056853dc();
  if (param_3[1] != *param_3) {
    FUN_1056864d8();
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bcad8;
    _objc_alloc(PTR_PTR_1126bcad8);
    func_0x00010c042320();
    _objc_release(puVar3);
    _objc_release(param_1);
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
    if (cStack_59 < '\0') {
      __ZdlPv(auStack_70[0]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
      return;
    }
    ___stack_chk_fail();
  }
  FUN_105687e74();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10568632c);
  (*pcVar1)();
}



/* Entry: 1056864d8; end: 10568651b;  */

int FUN_1056864d8(long param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = 1;
  for (piVar3 = *(int **)(param_1 + 8); piVar3 != *(int **)(param_1 + 0x10); piVar3 = piVar3 + 1) {
    iVar1 = *piVar3 * iVar1;
  }
  if (*(uint *)(param_1 + 0x20) < 3) {
    iVar2 = *(int *)(&UNK_10ddb8a4c + (ulong)*(uint *)(param_1 + 0x20) * 4);
  }
  else {
    iVar2 = 1;
  }
  return iVar2 * iVar1;
}



/* Entry: 10568651c; end: 1056865d7; -[SCPercMLODINClassificationModel _deepScanForUIImage:imageProcessingConfig:error:] */

void FUN_10568651c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  
  func_0x00010bdecca0(auStack_38);
  if (*param_5 == 0) {
    func_0x00010be97fa0(auStack_50,param_1,param_2,auStack_38,1,param_5);
    if (*param_5 == 0) {
      func_0x00010be70080(param_1,param_2,auStack_50,param_5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = 0;
    }
    FUN_105688588(uStack_48);
  }
  else {
    param_1 = 0;
  }
  FUN_105688588(uStack_30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056865d8; end: 105686693; -[SCPercMLODINClassificationModel _embedImageAndFindCaptionsForUIImage:imageProcessingConfig:error:] */

void FUN_1056865d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  
  func_0x00010bdecca0(auStack_38);
  if (*param_5 == 0) {
    func_0x00010be97fa0(auStack_50,param_1,param_2,auStack_38,0,param_5);
    if (*param_5 == 0) {
      func_0x00010be6ffa0(param_1,param_2,auStack_50,param_5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = 0;
    }
    FUN_105688588(uStack_48);
  }
  else {
    param_1 = 0;
  }
  FUN_105688588(uStack_30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105686694; end: 1056869ab; -[SCPercMLODINClassificationModel _scoresForUIImage:clockwiseRotation:cameraFieldOfView:error:] */

void FUN_105686694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  ulong uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  uint *puStack_148;
  undefined1 *puStack_140;
  undefined1 auStack_138 [4];
  int iStack_134;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  undefined1 auStack_e8 [24];
  uint uStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long lStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_61;
  
  _objc_retain(param_4);
  uStack_d0 = 0x42ff0000;
  uStack_90 = (ulong)&uStack_d0 | 8;
  uStack_c4 = 0;
  uStack_c0 = 0;
  iStack_cc = 0;
  uStack_c8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_a4 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  lStack_98 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &uStack_80;
  uStack_61 = param_5;
  func_0x00010c149320(auStack_138,param_2);
  puStack_140 = &uStack_61;
  puStack_148 = &uStack_d0;
  FUN_105684598(&puStack_148,auStack_138);
  if (lStack_100 != 0) {
    piVar1 = (int *)(lStack_100 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(auStack_138);
    }
  }
  lStack_100 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  if (0 < iStack_134) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_f8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_134);
  }
  if (puStack_f0 != auStack_e8 && puStack_f0 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_f0 + -8));
  }
  uStack_1a8 = CONCAT44(uStack_c4,uStack_c8);
  uStack_1b0 = CONCAT44(iStack_cc,uStack_d0);
  uStack_198 = CONCAT44(uStack_b4,uStack_b8);
  uStack_1a0 = CONCAT44(uStack_bc,uStack_c0);
  uStack_170 = (ulong)&uStack_1b0 | 8;
  uStack_188 = CONCAT44(uStack_a4,uStack_a8);
  uStack_190 = CONCAT44(uStack_ac,uStack_b0);
  uStack_180 = CONCAT44(uStack_9c,uStack_a0);
  lStack_178 = lStack_98;
  uStack_160 = 0;
  uStack_158 = 0;
  if (lStack_98 != 0) {
    piVar1 = (int *)(lStack_98 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_168 = &uStack_160;
  if (iStack_cc < 3) {
    uStack_160 = *puStack_88;
    uStack_158 = puStack_88[1];
  }
  else {
    uStack_1b0 = (ulong)uStack_d0;
    func_0x000109a84868(&uStack_1b0,&uStack_d0);
  }
  func_0x00010be9bbc0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_178 != 0) {
    piVar1 = (int *)(lStack_178 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_1b0);
    }
  }
  lStack_178 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  if (0 < uStack_1b0._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)(uStack_170 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_1b0._4_4_);
  }
  if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
    _free(puStack_168[-1]);
  }
  if (lStack_98 != 0) {
    piVar1 = (int *)(lStack_98 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_d0);
    }
  }
  lStack_98 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  if (0 < iStack_cc) {
    lVar5 = 0;
    do {
      *(undefined4 *)(uStack_90 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_cc);
  }
  if (puStack_88 != &uStack_80 && puStack_88 != (undefined8 *)0x0) {
    _free(puStack_88[-1]);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1056869ac; end: 105686bcb; -[SCPercMLODINClassificationModel _scoresForPixelBufferRef:clockwiseRotation:cameraFieldOfView:error:] */

void FUN_1056869ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  uint uStack_c0;
  int iStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 auStack_70 [2];
  
  FUN_10567ea50(&uStack_c0,param_4);
  uStack_120 = CONCAT44(iStack_bc,uStack_c0);
  uStack_e0 = (ulong)&uStack_120 | 8;
  uStack_118 = uStack_b8;
  uStack_108 = uStack_a8;
  uStack_110 = uStack_b0;
  uStack_f8 = uStack_98;
  uStack_100 = uStack_a0;
  lStack_e8 = lStack_88;
  uStack_f0 = uStack_90;
  uStack_d0 = 0;
  uStack_c8 = 0;
  if (lStack_88 != 0) {
    piVar1 = (int *)(lStack_88 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_d8 = &uStack_d0;
  if (iStack_bc < 3) {
    uStack_d0 = *puStack_78;
    uStack_c8 = puStack_78[1];
  }
  else {
    uStack_120 = (ulong)uStack_c0;
    func_0x000109a84868(&uStack_120,&uStack_c0);
  }
  func_0x00010be9bbc0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_e8 != 0) {
    piVar1 = (int *)(lStack_e8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_120);
    }
  }
  lStack_e8 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (0 < uStack_120._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)(uStack_e0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_120._4_4_);
  }
  if (puStack_d8 != &uStack_d0 && puStack_d8 != (undefined8 *)0x0) {
    _free(puStack_d8[-1]);
  }
  if (lStack_88 != 0) {
    piVar1 = (int *)(lStack_88 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_c0);
    }
  }
  lStack_88 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (0 < iStack_bc) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_80 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_bc);
  }
  if (puStack_78 != auStack_70 && puStack_78 != (undefined8 *)0x0) {
    _free(puStack_78[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105686bcc; end: 105686d83; -[SCPercMLODINClassificationModel _scan] */

long * FUN_105686bcc(long param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined1 auStack_c8 [8];
  ulong uStack_c0;
  undefined1 auStack_48 [24];
  
  plVar7 = (long *)(param_1 + 0x30);
  if (*plVar7 == 0) {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c0cfdc0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    if ((lVar8 != 0) && (lVar4 = lVar3, func_0x00010c08fa60(), lVar4 != 0)) {
      func_0x00010935fefc(auStack_c8,0);
      lVar4 = lVar3;
      func_0x00010c08fa60();
      uStack_d8 = (ulong)(int)lVar4;
      lStack_e0 = lVar8;
      func_0x000100063660(auStack_c8,&lStack_e0);
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bdc3520(uVar5);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c08fac0(uVar6);
      func_0x000100362a1c(&lStack_e0,uVar5,uVar6);
      uVar1 = uStack_d8;
      if (-1 < (char)bStack_c9) {
        uVar1 = (ulong)bStack_c9;
      }
      if (uVar1 != 0) {
        if ((uStack_c0 & 1) != 0) {
          uStack_c0 = *(ulong *)(uStack_c0 & 0xfffffffffffffffe);
        }
        func_0x0001001a53d4(auStack_48,&lStack_e0,uStack_c0);
      }
      uVar5 = 0x168;
      __Znwm(0x168);
      func_0x000109563b84();
      func_0x000105687f6c(plVar7,uVar5);
      if (*(long *)(param_1 + 0x28) != 0) {
        lVar8 = *(long *)(param_1 + 0x30);
        uVar2 = *(undefined1 *)(param_1 + 0x21);
        __ZNSt3__15mutex4lockEv(lVar8 + 0x108);
        *(undefined1 *)(lVar8 + 0x160) = 1;
        *(undefined1 *)(lVar8 + 0x161) = uVar2;
        __ZNSt3__15mutex6unlockEv(lVar8 + 0x108);
      }
      if ((char)bStack_c9 < '\0') {
        __ZdlPv(lStack_e0);
      }
      func_0x00010935ff4c(auStack_c8);
    }
    _objc_release(lVar3);
  }
  return plVar7;
}



/* Entry: 105686d84; end: 10568702b; -[SCPercMLODINClassificationModel getOrCreateYUV420PixelBufferPoolForWidth:height:poolSize:] */

undefined8 *
FUN_105686d84(long param_1,undefined8 param_2,undefined *param_3,long *param_4,long param_5,
             long param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long *plStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  plVar7 = param_4;
  _os_unfair_lock_lock(param_1 + 0x58);
  plVar9 = (long *)(param_1 + 0x40);
  if (*plVar9 == 0) {
    uStack_68 = *(undefined8 *)PTR__kCVPixelBufferPoolMinimumBufferCountKey_11034a3c8;
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df860();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uStack_c8 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
    ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1090;
    uStack_c0 = *(undefined8 *)PTR__kCVPixelBufferWidthKey_11034a3d0;
    unaff_x24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df860();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = *(undefined8 *)PTR__kCVPixelBufferHeightKey_11034a388;
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_90 = unaff_x24;
    func_0x00010c0df860();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = *(undefined8 *)PTR__kCVPixelBufferCGImageCompatibilityKey_11034a380;
    puStack_80 = PTR____kCFBooleanTrue_11034ab68;
    uStack_a8 = *(undefined8 *)PTR__kCVPixelBufferCGBitmapContextCompatibilityKey_11034a378;
    uStack_a0 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
    puStack_78 = PTR____kCFBooleanTrue_11034ab68;
    puStack_70 = PTR____NSDictionary0__struct_11034ab58;
    param_5 = 6;
    unaff_x25 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_88 = puVar1;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(unaff_x24);
    uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    puVar1 = unaff_x25;
    plVar7 = plVar9;
    _CVPixelBufferPoolCreate(uVar3,puVar2);
    if ((int)uVar3 == 0) {
      *(undefined **)(param_1 + 0x48) = param_3;
      *(long **)(param_1 + 0x50) = param_4;
      _objc_release(unaff_x25);
      _objc_release(puVar2);
      goto LAB_105686dd4;
    }
    _objc_release(unaff_x25);
    _objc_release(puVar2);
LAB_105686f60:
    puVar8 = (undefined8 *)0x0;
  }
  else {
LAB_105686dd4:
    if ((*(undefined **)(param_1 + 0x48) != param_3) || (*(long **)(param_1 + 0x50) != param_4))
    goto LAB_105686f60;
    puVar8 = (undefined8 *)*plVar9;
  }
  lVar4 = param_1 + 0x58;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x25);
  _objc_release(puVar8);
  _os_unfair_lock_unlock(param_1 + 0x58);
  lVar5 = lVar4;
  __Unwind_Resume();
  pcStack_d8 = FUN_10568702c;
  if ((((*(undefined **)(lVar5 + 0x70) == puVar1) && (*(long **)(lVar5 + 0x78) == plVar7)) &&
      (*(long *)(lVar5 + 0x80) == param_5)) &&
     ((*(long *)(lVar5 + 0x88) == param_6 && (*(undefined8 **)(lVar5 + 0x60) != (undefined8 *)0x0)))
     ) {
    return *(undefined8 **)(lVar5 + 0x60);
  }
  uStack_128 = param_7[1];
  uStack_130 = *param_7;
  uStack_118 = param_7[3];
  uStack_120 = param_7[2];
  uStack_148 = param_8[1];
  uStack_150 = *param_8;
  uStack_138 = param_8[3];
  uStack_140 = param_8[2];
  puVar6 = &uStack_130;
  puStack_110 = unaff_x24;
  plStack_108 = plVar9;
  puStack_100 = param_3;
  lStack_f8 = lVar4;
  puStack_f0 = puVar8;
  lStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  _vImageScale_CbCr8(puVar6,&uStack_150,0,0x80);
  if ((long)puVar6 < 0) {
    puVar8 = *(undefined8 **)(lVar5 + 0x60);
    goto LAB_105687108;
  }
  puVar8 = *(undefined8 **)(lVar5 + 0x60);
  if (*(undefined8 **)(lVar5 + 0x68) < puVar6) {
    if (puVar8 != (undefined8 *)0x0) {
      _free();
      *(undefined8 *)(lVar5 + 0x68) = 0;
    }
LAB_1056870e8:
    puVar8 = puVar6;
    _malloc();
    *(undefined8 **)(lVar5 + 0x60) = puVar8;
    if (puVar8 != (undefined8 *)0x0) {
      *(undefined8 **)(lVar5 + 0x68) = puVar6;
      goto LAB_105687108;
    }
  }
  else {
    if (puVar8 != (undefined8 *)0x0) goto LAB_105687108;
    if (puVar6 != (undefined8 *)0x0) goto LAB_1056870e8;
    puVar8 = (undefined8 *)0x0;
  }
  *(undefined8 *)(lVar5 + 0x68) = 0;
LAB_105687108:
  *(undefined **)(lVar5 + 0x70) = puVar1;
  *(long **)(lVar5 + 0x78) = plVar7;
  *(long *)(lVar5 + 0x80) = param_5;
  *(long *)(lVar5 + 0x88) = param_6;
  return puVar8;
}



/* Entry: 10568702c; end: 105687127; -[SCPercMLODINClassificationModel _getOrCreateVImageScaleCbCrTempBufferWithSourceWidth:sourceHeight:destWidth:destHeight:sourceCbCrBuffer:resultCbCrBuffer:] */

void FUN_10568702c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((((*(long *)(param_1 + 0x70) == param_3) && (*(long *)(param_1 + 0x78) == param_4)) &&
      (*(long *)(param_1 + 0x80) == param_5)) &&
     ((*(long *)(param_1 + 0x88) == param_6 && (*(long *)(param_1 + 0x60) != 0)))) {
    return;
  }
  uStack_58 = param_7[1];
  uStack_60 = *param_7;
  uStack_48 = param_7[3];
  uStack_50 = param_7[2];
  uStack_78 = param_8[1];
  uStack_80 = *param_8;
  uStack_68 = param_8[3];
  uStack_70 = param_8[2];
  puVar1 = &uStack_60;
  _vImageScale_CbCr8(puVar1,&uStack_80,0,0x80);
  if ((long)puVar1 < 0) goto LAB_105687108;
  if (*(undefined8 **)(param_1 + 0x68) < puVar1) {
    if (*(long *)(param_1 + 0x60) != 0) {
      _free();
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
LAB_1056870e8:
    puVar2 = puVar1;
    _malloc();
    *(undefined8 **)(param_1 + 0x60) = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 **)(param_1 + 0x68) = puVar1;
      goto LAB_105687108;
    }
  }
  else {
    if (*(long *)(param_1 + 0x60) != 0) goto LAB_105687108;
    if (puVar1 != (undefined8 *)0x0) goto LAB_1056870e8;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
LAB_105687108:
  *(long *)(param_1 + 0x70) = param_3;
  *(long *)(param_1 + 0x78) = param_4;
  *(long *)(param_1 + 0x80) = param_5;
  *(long *)(param_1 + 0x88) = param_6;
  return;
}



/* Entry: 105687128; end: 10568712f; -[SCPercMLODINClassificationModel modelKey] */

undefined8 FUN_105687128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 105687130; end: 105687137; -[SCPercMLODINClassificationModel modelId] */

undefined8 FUN_105687130(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 105687138; end: 10568713f; -[SCPercMLODINClassificationModel labels] */

undefined8 FUN_105687138(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 105687140; end: 105687147; -[SCPercMLODINClassificationModel imageWidth] */

undefined8 FUN_105687140(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 105687148; end: 10568714f; -[SCPercMLODINClassificationModel imageHeight] */

undefined8 FUN_105687148(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 105687150; end: 105687157; -[SCPercMLODINClassificationModel approximateSizeInBytes] */

undefined8 FUN_105687150(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 105687158; end: 10568715f; -[SCPercMLODINClassificationModel loggingDisabled] */

undefined1 FUN_105687158(long param_1)

{
  return *(undefined1 *)(param_1 + 0x90);
}



/* Entry: 105687160; end: 105687167; -[SCPercMLODINClassificationModel setLoggingDisabled:] */

void FUN_105687160(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 105687168; end: 1056871d3; -[SCPercMLODINClassificationModel .cxx_destruct] */

void FUN_105687168(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  func_0x000105687f6c(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056871d4; end: 1056871db; -[SCPercMLODINClassificationModel .cxx_construct] */

void FUN_1056871d4(long param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 1056871dc; end: 10568724f;  */

undefined8 * FUN_1056871dc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 105687250; end: 1056873ff;  */

long * FUN_105687250(long *param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long alStack_60 [3];
  long *plStack_48;
  long alStack_40 [3];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000105687458(alStack_60);
  if (param_1 != alStack_60) {
    plVar4 = (long *)param_1[3];
    if (plStack_48 == alStack_60) {
      if (plVar4 == param_1) {
        (**(code **)(*plStack_48 + 0x18))(plStack_48,alStack_40);
        (**(code **)(*plStack_48 + 0x20))();
        plStack_48 = (long *)0x0;
        (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],alStack_60);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        plVar4 = param_1;
        plStack_48 = alStack_60;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        param_2 = (int)plVar4;
        (**(code **)(alStack_40[0] + 0x20))(alStack_40);
      }
      else {
        plVar4 = param_1;
        (**(code **)(*plStack_48 + 0x18))();
        param_2 = (int)plVar4;
        (**(code **)(*plStack_48 + 0x20))();
        plStack_48 = (long *)param_1[3];
      }
      param_1[3] = (long)param_1;
    }
    else if (plVar4 == param_1) {
      param_2 = (int)alStack_60;
      (**(code **)(*plVar4 + 0x18))(plVar4);
      (**(code **)(*(long *)param_1[3] + 0x20))();
      param_1[3] = (long)plStack_48;
      plStack_48 = alStack_60;
    }
    else {
      param_1[3] = (long)plStack_48;
      plStack_48 = plVar4;
    }
  }
  plVar4 = plStack_48;
  if (plStack_48 == alStack_60) {
    lVar5 = 0x20;
  }
  else {
    if (plStack_48 == (long *)0x0) goto LAB_1056873c4;
    lVar5 = 0x28;
  }
  (**(code **)(*plStack_48 + lVar5))();
LAB_1056873c4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  plVar6 = (long *)plVar4[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return plVar4;
}



/* Entry: 105687400; end: 1056874bb;  */

long FUN_105687400(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1056874bc; end: 1056877e3;  */

void FUN_1056874bc(ulong param_1,long param_2)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  long lStack_188;
  ulong uStack_180;
  ulong uStack_178;
  long lStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long lStack_128;
  undefined1 auStack_120 [136];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 - 1U < 2) {
    _CVPixelBufferLockBaseAddress(param_1,1);
    lStack_128 = 0;
    uVar4 = param_1;
    _CVPixelBufferGetWidth();
    uVar5 = param_1;
    _CVPixelBufferGetHeight();
    uVar6 = param_1;
    _CVPixelBufferGetBaseAddressOfPlane(param_1,0);
    uVar7 = param_1;
    _CVPixelBufferGetBaseAddressOfPlane(param_1,1);
    bVar3 = false;
    if ((uVar6 != 0) && (uVar7 != 0)) {
      uVar8 = param_1;
      _CVPixelBufferGetBytesPerRowOfPlane(param_1,0);
      uVar9 = param_1;
      _CVPixelBufferGetBytesPerRowOfPlane(param_1,1);
      uStack_160 = uVar5 >> 1;
      uStack_158 = uVar4 >> 1;
      uStack_98 = *(undefined8 *)PTR__kCVPixelBufferCGImageCompatibilityKey_11034a380;
      uStack_90 = *(undefined8 *)PTR__kCVPixelBufferCGBitmapContextCompatibilityKey_11034a378;
      puStack_80 = PTR____kCFBooleanTrue_11034ab68;
      puStack_78 = PTR____kCFBooleanTrue_11034ab68;
      uStack_88 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
      puStack_70 = PTR____NSDictionary0__struct_11034ab58;
      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      uStack_168 = uVar7;
      uStack_150 = uVar9;
      uStack_148 = uVar6;
      uStack_140 = uVar5;
      uStack_138 = uVar4;
      uStack_130 = uVar8;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
      _CVPixelBufferCreate(uVar11,uVar4,uVar5,0x42475241,puVar10,&lStack_128);
      bVar3 = false;
      if (((int)uVar11 == 0) && (lStack_128 != 0)) {
        _CVPixelBufferLockBaseAddress(lStack_128,0);
        lVar12 = lStack_128;
        _CVPixelBufferGetBaseAddress();
        lVar13 = lStack_128;
        _CVPixelBufferGetBytesPerRow();
        lStack_188 = lVar12;
        uStack_180 = uVar5;
        uStack_178 = uVar4;
        lStack_170 = lVar13;
        _vImageConvert_YpCbCrToARGB_GenerateConversion
                  (*(undefined8 *)PTR__kvImage_YpCbCrToARGBMatrix_ITU_R_601_4_110347850,
                   &UNK_10ddb84c8,auStack_120,4,0,0);
        puVar1 = &UNK_10ddb84e8;
        if (param_2 != 1) {
          puVar1 = &UNK_10ddb84ec;
        }
        puVar14 = &uStack_148;
        _vImageConvert_420Yp8_CbCr8ToARGB8888
                  (puVar14,&uStack_168,&lStack_188,auStack_120,puVar1,0xff,0);
        bVar3 = puVar14 == (ulong *)0x0;
        if (puVar14 != (ulong *)0x0) {
          _CVPixelBufferUnlockBaseAddress(lStack_128,0);
          _CVPixelBufferRelease(lStack_128);
        }
      }
      _objc_release(puVar10);
    }
    _CVPixelBufferUnlockBaseAddress(param_1,1);
    if (lStack_128 != 0) {
      _CVPixelBufferUnlockBaseAddress(lStack_128,0);
    }
    lVar12 = lStack_128;
    if (!bVar3) {
      lVar12 = 0;
    }
  }
  else {
    lVar12 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail(lVar12);
  _objc_exception_rethrow();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x105687754);
  (*pcVar2)();
}



/* Entry: 1056877e4; end: 105687867;  */

void FUN_1056877e4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  uVar4 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  param_1[0xb] = 0;
  param_1[10] = 0;
  piVar2 = (int *)((long)param_2 + 4);
  iVar1 = *piVar2;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  puVar3 = (undefined8 *)param_2[9];
  if (iVar1 < 3) {
    param_1[10] = *puVar3;
    param_1[0xb] = puVar3[1];
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = puVar3;
    param_2[8] = param_2 + 1;
    param_2[9] = param_2 + 10;
  }
  *(undefined4 *)param_2 = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0xc) = 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  *(undefined8 *)((long)param_2 + 0x14) = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  return;
}



/* Entry: 105687868; end: 1056878eb;  */

undefined1 * FUN_105687868(undefined1 *param_1,long param_2)

{
  uint uVar1;
  undefined1 *puStack_38;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  FUN_1056878ec();
  uVar1 = *(uint *)(param_2 + 0x120);
  if (uVar1 != 0xffffffff) {
    puStack_38 = param_1;
    (*(code *)(&PTR_FUN_1108a60b8)[uVar1])(&puStack_38,param_2);
    *(uint *)(param_1 + 0x120) = uVar1;
  }
  return param_1;
}



/* Entry: 1056878ec; end: 10568793f;  */

void FUN_1056878ec(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x120) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1108a60a0)[*(uint *)(param_1 + 0x120)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  return;
}



/* Entry: 105687940; end: 1056879df;  */

void FUN_105687940(undefined8 param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_2 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_2);
    }
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  if (0 < *(int *)(param_2 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_2 + 4));
  }
  lVar5 = *(long *)(param_2 + 0x48);
  if (lVar5 == param_2 + 0x50 || lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar5 + -8));
  return;
}



/* Entry: 1056879e0; end: 1056879eb;  */

void FUN_1056879e0(void)

{
  return;
}



/* Entry: 1056879ec; end: 105687b7f;  */

long FUN_1056879ec(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0xf8) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xf8) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xc0);
    }
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (0 < *(int *)(param_1 + 0xc4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x100);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xc4));
  }
  lVar5 = *(long *)(param_1 + 0x108);
  if (lVar5 != param_1 + 0x110 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x60);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 100)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xa0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 100));
  }
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != param_1 + 0xb0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 105687b80; end: 105687d83;  */

void FUN_105687b80(long *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = (undefined8 *)*param_1;
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  puVar2[1] = param_2[1];
  *puVar2 = uVar5;
  puVar2[3] = uVar7;
  puVar2[2] = uVar6;
  uVar5 = param_2[4];
  puVar2[5] = param_2[5];
  puVar2[4] = uVar5;
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  piVar3 = (int *)((long)param_2 + 4);
  iVar1 = *piVar3;
  puVar2[7] = uVar6;
  puVar2[6] = uVar5;
  puVar2[8] = puVar2 + 1;
  puVar2[9] = puVar2 + 10;
  puVar4 = (undefined8 *)param_2[9];
  if (iVar1 < 3) {
    puVar2[10] = *puVar4;
    puVar2[0xb] = puVar4[1];
  }
  else {
    puVar2[8] = param_2[8];
    puVar2[9] = puVar4;
    param_2[8] = param_2 + 1;
    param_2[9] = param_2 + 10;
  }
  *(undefined4 *)param_2 = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0xc) = 0;
  piVar3[0] = 0;
  piVar3[1] = 0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  *(undefined8 *)((long)param_2 + 0x14) = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  return;
}



/* Entry: 105687d84; end: 105687e73;  */

undefined8 * FUN_105687d84(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}


