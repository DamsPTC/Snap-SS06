/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10703201c; end: 107032043; -[SCCameraViewfinderMetalRenderer flushTextureCache] */

void FUN_10703201c(long param_1)

{
  func_0x00010bfb30e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbbe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CVMetalTextureCacheFlush_11034a1b0)(*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107032044; end: 10703204b; -[SCCameraViewfinderMetalRenderer layer] */

undefined8 FUN_107032044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10703204c; end: 10703207b; -[SCCameraViewfinderMetalRenderer setLayer:] */

void FUN_10703204c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10703207c; end: 107032123; -[SCCameraViewfinderMetalRenderer .cxx_destruct] */

void FUN_10703207c(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107032124; end: 107032137; +[SCMetal metalDevice] */

void FUN_107032124(void)

{
  _MTLCreateSystemDefaultDevice();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107032138; end: 10703231b; +[SCSnapSegmentLoggingUtils detailedCameraModesFromModesArray:modesInfo:] */

void FUN_107032138(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = param_3;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
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
    puVar3 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    if (puVar3 != (undefined *)0x0) {
      lVar5 = *plStack_120;
      do {
        puVar6 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar5) {
            _objc_enumerationMutation(param_3);
          }
          uVar4 = *(undefined8 *)(lStack_128 + (long)puVar6 * 8);
          puVar2 = param_4;
          func_0x00010c296f60(param_4,param_2,uVar4);
          _objc_retainAutoreleasedReturnValue();
          if (puVar2 == (undefined *)0x0) {
            puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          }
          func_0x00010c1d0640(puVar1,param_2,puVar2,uVar4);
          _objc_release(puVar2);
          puVar6 = puVar6 + 1;
        } while (puVar3 != puVar6);
        puVar3 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(param_3);
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar6 = puVar2;
    func_0x00010c008340();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if (puVar6 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      func_0x00010bf64920(puVar6,param_2,4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar6,0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10703231c; end: 107032387; +[SCSnapSegmentLoggingUtils cameraModesInfoFromDetailedCameraModes:] */

void FUN_10703231c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x00010bf64920(param_3,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107032388; end: 10703252f; +[SCSnapSegmentLoggingUtils segmentCreateEventForSegment:snapSessionId:cameraMode:] */

void FUN_107032388(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c77c8;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c158260(param_3);
  func_0x00010bf655e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161fc0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1faae0(puVar1,param_2,3);
  lVar3 = param_3;
  func_0x00010bf311e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  func_0x00010c1c5440(puVar1,param_2,1);
  lVar3 = param_3;
  func_0x00010c280560(param_3);
  func_0x00010c1faa60(puVar1,param_2,lVar3);
  if (param_3 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bf4d840(&uStack_70,param_3);
  }
  uStack_88 = uStack_50;
  uStack_90 = uStack_58;
  uStack_80 = uStack_48;
  _CMTimeGetSeconds(&uStack_90);
  func_0x00010c205880(puVar1);
  func_0x00010c205660(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1769e0(puVar1,param_2,param_5);
  lVar3 = param_3;
  func_0x00010bef0520(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176a60(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bf6f7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c600(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107032530; end: 10703298b; +[SCSnapSegmentLoggingUtils segmentCreateForImportedMediaContent:importedContentId:sourceAsset:segment:snapSessionId:cameraMode:spotlightMetadata:directorModeSource:] */

void FUN_107032530(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5,undefined *param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  long lStack_188;
  double dStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  double dStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_5;
  puVar14 = param_6;
  lVar15 = param_7;
  uVar16 = param_8;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_5);
  lVar2 = param_4;
  FUN_10703465c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  FUN_107034520();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_4;
  FUN_107034780();
  _objc_retainAutoreleasedReturnValue();
  if ((param_10 == 0) || (lVar5 = param_10, func_0x00010c1584e0(), lVar5 == -1)) {
    puVar13 = param_6;
    func_0x00010bf7f000();
  }
  else {
    func_0x00010c1584e0();
  }
  puVar6 = PTR_PTR_1126c77c8;
  _objc_opt_new();
  func_0x00010c205660();
  _objc_release(param_8);
  func_0x00010c280560(param_7);
  func_0x00010c1faa60(puVar6);
  func_0x00010c1faae0(puVar6);
  func_0x00010c21a480(puVar6);
  puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (lVar4 == 0) {
    if (param_6 != (undefined *)0x0) {
      puVar8 = param_6;
      func_0x00010bf5a700(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161fc0(puVar6);
      _objc_release(puVar8);
      if (lVar2 == 0) {
        func_0x00010c1c5440(puVar6);
      }
      else {
        lVar5 = lVar2;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        _objc_release(lVar5);
        func_0x00010c1c5440(puVar6);
        func_0x00010bf8b160(auStack_90,lVar2);
        _CMTimeGetSeconds(auStack_90);
        func_0x00010c205880((double)(float)param_1,puVar6);
      }
    }
  }
  else {
    lVar5 = lVar4;
    func_0x00010c270d80(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23fb40();
    func_0x00010bf651a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010c161fc0(puVar6);
    lStack_78 = 0;
    lVar5 = lVar4;
    func_0x00010801f580(lVar4,&lStack_78);
    _objc_retainAutoreleasedReturnValue();
    if ((lStack_78 == 0) && (lVar5 != 0)) {
      lVar7 = lVar5;
      func_0x00010c27dd80();
      if ((int)lVar7 == 1) {
        func_0x00010c1c5440(puVar6);
        func_0x0001080207d4(lVar4);
        func_0x00010c205880((double)(float)param_1,puVar6);
      }
      else {
        lVar7 = lVar5;
        func_0x00010c27dd80();
        if ((int)lVar7 == 0) {
          func_0x00010c1c5440(puVar6);
        }
      }
    }
    _objc_release(lVar5);
    _objc_release(puVar8);
  }
  func_0x00010c1769e0(puVar6);
  lVar5 = param_7;
  func_0x00010bef0520(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176a60(puVar6);
  _objc_release(lVar5);
  lVar5 = param_7;
  func_0x00010bf6f7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c600(puVar6);
  _objc_release(lVar5);
  puVar8 = param_5;
  func_0x00010c1ab140(puVar6);
  _objc_release(param_5);
  if ((param_10 != 0) && (lVar5 = param_10, func_0x00010c0c67c0(), lVar5 != -1)) {
    lVar5 = param_10;
    func_0x00010c0c67c0();
    func_0x00010bb1394c();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = (undefined *)0x1;
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = lVar5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010c1c52e0(puVar6);
    _objc_release(puVar9);
    _objc_release(lVar5);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar14);
  _objc_retain(lVar15);
  _objc_retain(uVar16);
  _objc_retain(puVar13);
  _objc_retain(puVar8);
  puVar9 = puVar8;
  FUN_10703465c();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  FUN_107034520(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar8;
  FUN_107034780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  if (lVar15 == 0) {
    dStack_148 = 0.0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
  }
  else {
    func_0x00010c27c900(&uStack_160,lVar15);
  }
  uStack_178 = uStack_140;
  dStack_180 = dStack_148;
  uStack_170 = uStack_138;
  dVar18 = dStack_148;
  _CMTimeGetSeconds(&dStack_180);
  fVar19 = (float)dVar18;
  puVar6 = PTR_PTR_1126c7bd0;
  _objc_opt_new(PTR_PTR_1126c7bd0);
  func_0x00010c205660();
  _objc_release(uVar16);
  func_0x00010c280560(lVar15);
  func_0x00010c1faa60(puVar6);
  func_0x00010c1ab140(puVar6);
  func_0x00010c1ab160(puVar6);
  _objc_release(puVar13);
  if (puVar11 == (undefined *)0x0) {
    if (puVar14 != (undefined *)0x0) {
      puVar13 = puVar14;
      func_0x00010bf5a700(puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1857a0(puVar6);
      _objc_release(puVar13);
      func_0x00010c0fce40(puVar14);
      func_0x00010c2070e0(puVar6);
      func_0x00010c0fcaa0(puVar14);
      func_0x00010c2070c0(puVar6);
    }
    func_0x00010c206c40(puVar6);
    if (puVar9 != (undefined *)0x0) {
      puVar13 = puVar9;
      func_0x00010c279200(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(puVar13);
      func_0x00010c1c5440(puVar6);
      func_0x00010bf8b160(&uStack_160,puVar9);
      _CMTimeGetSeconds(&uStack_160);
      func_0x00010c192e60(puVar6);
      fVar17 = ABS((float)dVar18 - fVar19);
      if ((1.1754944e-38 <= fVar17) && (ABS(fVar19 + (float)dVar18) * 1.1920929e-07 <= fVar17)) {
        func_0x00010c21a580(puVar6);
      }
      puVar8 = puVar9;
      func_0x00010c279200(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar8;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      func_0x00010c0da9e0(puVar13);
      func_0x00010c206e80(puVar6);
      goto LAB_107032dc8;
    }
    func_0x00010c1c5440(puVar6);
    func_0x00010c21a580(puVar6);
  }
  else {
    func_0x00010c206c40(puVar6);
    puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
    puVar8 = puVar11;
    func_0x00010c270d80(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23fb40();
    func_0x00010bf651a0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x00010c1857a0(puVar6);
    lStack_188 = 0;
    puVar8 = puVar11;
    func_0x00010801f580(puVar11,&lStack_188);
    _objc_retainAutoreleasedReturnValue();
    if ((lStack_188 == 0) && (puVar8 != (undefined *)0x0)) {
      puVar12 = puVar8;
      func_0x00010bf7ee20(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a5040();
      func_0x00010c2070e0(puVar6);
      _objc_release(puVar12);
      puVar12 = puVar8;
      func_0x00010bf7ee20(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0640();
      func_0x00010c2070c0(puVar6);
      _objc_release(puVar12);
      puVar12 = puVar8;
      func_0x00010c27dd80();
      if ((int)puVar12 == 1) {
        func_0x00010c1c5440(puVar6);
        puVar12 = puVar8;
        func_0x00010c0c4bc0();
        fVar20 = (float)((ulong)puVar12 & 0xffffffff) / 1000.0;
        func_0x00010c0c4bc0(puVar8);
        func_0x00010c192e60(puVar6);
        fVar17 = ABS(fVar20 - fVar19);
        fVar19 = ABS(fVar20 + fVar19) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar17) && (bVar1 = false, !NAN(fVar17) && !NAN(fVar19))) {
          bVar1 = fVar17 < fVar19;
        }
        if (!bVar1) {
LAB_107032c88:
          func_0x00010c21a580(puVar6);
        }
      }
      else {
        puVar12 = puVar8;
        func_0x00010c27dd80();
        if ((int)puVar12 == 0) {
          func_0x00010c1c5440(puVar6);
          goto LAB_107032c88;
        }
      }
    }
    _objc_release(puVar8);
LAB_107032dc8:
    _objc_release(puVar13);
  }
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar15);
  _objc_release(puVar14);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10703298c; end: 107032e4b; +[SCSnapSegmentLoggingUtils timelineSegmentCreateForImportedMediaContent:importedContentId:sourceAsset:segment:snapSessionId:] */

void FUN_10703298c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  long lStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar2 = param_3;
  FUN_10703465c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  FUN_107034520(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  FUN_107034780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (param_6 == 0) {
    dStack_98 = 0.0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010c27c900(&uStack_b0,param_6);
  }
  uStack_c8 = uStack_90;
  dStack_d0 = dStack_98;
  uStack_c0 = uStack_88;
  dVar11 = dStack_98;
  _CMTimeGetSeconds(&dStack_d0);
  fVar12 = (float)dVar11;
  puVar5 = PTR_PTR_1126c7bd0;
  _objc_opt_new(PTR_PTR_1126c7bd0);
  func_0x00010c205660();
  _objc_release(param_7);
  func_0x00010c280560(param_6);
  func_0x00010c1faa60(puVar5);
  func_0x00010c1ab140(puVar5);
  func_0x00010c1ab160(puVar5);
  _objc_release(param_4);
  if (puVar4 == (undefined *)0x0) {
    if (param_5 != 0) {
      lVar7 = param_5;
      func_0x00010bf5a700(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1857a0(puVar5);
      _objc_release(lVar7);
      func_0x00010c0fce40(param_5);
      func_0x00010c2070e0(puVar5);
      func_0x00010c0fcaa0(param_5);
      func_0x00010c2070c0(puVar5);
    }
    func_0x00010c206c40(puVar5);
    if (puVar2 == (undefined *)0x0) {
      func_0x00010c1c5440(puVar5);
      func_0x00010c21a580(puVar5);
      goto LAB_107032dcc;
    }
    puVar8 = puVar2;
    func_0x00010c279200(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(puVar8);
    func_0x00010c1c5440(puVar5);
    func_0x00010bf8b160(&uStack_b0,puVar2);
    _CMTimeGetSeconds(&uStack_b0);
    func_0x00010c192e60(puVar5);
    fVar10 = ABS((float)dVar11 - fVar12);
    if ((1.1754944e-38 <= fVar10) && (ABS(fVar12 + (float)dVar11) * 1.1920929e-07 <= fVar10)) {
      func_0x00010c21a580(puVar5);
    }
    puVar9 = puVar2;
    func_0x00010c279200(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    func_0x00010c0da9e0(puVar8);
    func_0x00010c206e80(puVar5);
  }
  else {
    func_0x00010c206c40(puVar5);
    puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
    puVar9 = puVar4;
    func_0x00010c270d80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23fb40();
    func_0x00010bf651a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    func_0x00010c1857a0(puVar5);
    lStack_d8 = 0;
    puVar9 = puVar4;
    func_0x00010801f580(puVar4,&lStack_d8);
    _objc_retainAutoreleasedReturnValue();
    if ((lStack_d8 == 0) && (puVar9 != (undefined *)0x0)) {
      puVar6 = puVar9;
      func_0x00010bf7ee20(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a5040();
      func_0x00010c2070e0(puVar5);
      _objc_release(puVar6);
      puVar6 = puVar9;
      func_0x00010bf7ee20(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0640();
      func_0x00010c2070c0(puVar5);
      _objc_release(puVar6);
      puVar6 = puVar9;
      func_0x00010c27dd80();
      if ((int)puVar6 == 1) {
        func_0x00010c1c5440(puVar5);
        puVar6 = puVar9;
        func_0x00010c0c4bc0();
        fVar13 = (float)((ulong)puVar6 & 0xffffffff) / 1000.0;
        func_0x00010c0c4bc0(puVar9);
        func_0x00010c192e60(puVar5);
        fVar10 = ABS(fVar13 - fVar12);
        fVar12 = ABS(fVar13 + fVar12) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar10) && (bVar1 = false, !NAN(fVar10) && !NAN(fVar12))) {
          bVar1 = fVar10 < fVar12;
        }
        if (!bVar1) {
LAB_107032c88:
          func_0x00010c21a580(puVar5);
        }
      }
      else {
        puVar6 = puVar9;
        func_0x00010c27dd80();
        if ((int)puVar6 == 0) {
          func_0x00010c1c5440(puVar5);
          goto LAB_107032c88;
        }
      }
    }
    _objc_release(puVar9);
  }
  _objc_release(puVar8);
LAB_107032dcc:
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107032e4c; end: 107032efb; +[SCSnapSegmentLoggingUtils directSegmentSourceWithImportedMediaContent:sourceAsset:] */

undefined8 FUN_107032e4c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  FUN_10703465c(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  FUN_107034520(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  FUN_107034780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = 1;
  if (param_4 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  if (lVar4 != 0) {
    uVar1 = 2;
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return uVar1;
}



/* Entry: 107032efc; end: 107032f47; -[SCSnapSegmentLoggingSpotlightMetadata initWithSegmentSource:mediaSource:] */

void FUN_107032efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8528;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 107032f48; end: 107032f6b; -[SCSnapSegmentLoggingSpotlightMetadata copyWithZone:] */

undefined8 FUN_107032f48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107032f6c; end: 107032fc7; -[SCSnapSegmentLoggingSpotlightMetadata hash] */

undefined8 * FUN_107032f6c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  func_0x000100505190(&uStack_30,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || (*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x10) == *(long *)(param_3 + 0x10));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 107032fc8; end: 10703305f; -[SCSnapSegmentLoggingSpotlightMetadata isEqual:] */

bool FUN_107032fc8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107033060; end: 107033067; -[SCSnapSegmentLoggingSpotlightMetadata segmentSource] */

undefined8 FUN_107033060(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107033068; end: 10703306f; -[SCSnapSegmentLoggingSpotlightMetadata mediaSource] */

undefined8 FUN_107033068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107033070; end: 10703344f; -[SCMediaImportEditorConfig initWithImportMediaContent:timelineConfiguration:downloadingTitle:trimmingTitle:downloadingCanceler:maxDurationAllowed:minDurationAllowed:contentTimeRange:initialTrimmedTimeRange:segmentsTimelineEndSeconds:useAfterTrimTiming:isDirectorModeUI:] */

undefined8 *
FUN_107033070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
             undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 param_12,
             undefined4 param_13)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_12);
  puStack_80 = PTR_PTR_1126f8530;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 == (undefined8 *)0x0) {
LAB_10703333c:
    _objc_retain(puVar2);
    puVar4 = puVar2;
  }
  else {
    *(undefined1 *)(puVar2 + 1) = 0;
    _objc_retain(puVar2);
    _objc_retain(puVar2);
    _objc_retain(puVar2);
    func_0x00010c0be540(param_3);
    if (*(char *)(puVar2 + 1) == '\x01') {
      if (((*(uint *)((long)param_8 + 0xc) & 1) != 0) &&
         ((*(byte *)((long)param_10 + 0xc) & 1) != 0)) {
LAB_107033350:
        if (((((*(byte *)((long)param_10 + 0x24) & 1) != 0) &&
             ((param_10[5] == 0 && (-1 < (long)param_10[3])))) &&
            ((*(byte *)((long)param_11 + 0xc) & 1) != 0)) &&
           ((((*(byte *)((long)param_11 + 0x24) & 1) != 0 && (param_11[5] == 0)) &&
            (-1 < (long)param_11[3])))) {
LAB_107033250:
          _objc_retain(param_3);
          uVar3 = puVar2[2];
          puVar2[2] = param_3;
          _objc_release(uVar3);
          _objc_retain(param_4);
          uVar3 = puVar2[7];
          puVar2[7] = param_4;
          _objc_release(uVar3);
          _objc_retain(param_5);
          uVar3 = puVar2[3];
          puVar2[3] = param_5;
          _objc_release(uVar3);
          _objc_retain(param_6);
          uVar3 = puVar2[4];
          puVar2[4] = param_6;
          _objc_release(uVar3);
          _objc_storeWeak(puVar2 + 6,param_7);
          uVar5 = param_8[1];
          uVar3 = *param_8;
          puVar2[10] = param_8[2];
          puVar2[9] = uVar5;
          puVar2[8] = uVar3;
          uVar3 = param_9[2];
          uVar5 = *param_9;
          puVar2[0xc] = param_9[1];
          puVar2[0xb] = uVar5;
          puVar2[0xd] = uVar3;
          uVar7 = param_10[3];
          uVar6 = param_10[2];
          uVar5 = param_10[5];
          uVar3 = param_10[4];
          uVar8 = *param_10;
          puVar2[0xf] = param_10[1];
          puVar2[0xe] = uVar8;
          puVar2[0x11] = uVar7;
          puVar2[0x10] = uVar6;
          puVar2[0x13] = uVar5;
          puVar2[0x12] = uVar3;
          uVar6 = param_11[1];
          uVar5 = *param_11;
          uVar3 = param_11[2];
          uVar8 = param_11[5];
          uVar7 = param_11[4];
          puVar2[0x17] = param_11[3];
          puVar2[0x16] = uVar3;
          puVar2[0x19] = uVar8;
          puVar2[0x18] = uVar7;
          puVar2[0x15] = uVar6;
          puVar2[0x14] = uVar5;
          _objc_retain(param_12);
          uVar3 = puVar2[5];
          puVar2[5] = param_12;
          _objc_release(uVar3);
          *(undefined1 *)((long)puVar2 + 9) = (undefined1)param_13;
          *(undefined1 *)((long)puVar2 + 10) = param_13._1_1_;
          _objc_release(puVar2);
          _objc_release(puVar2);
          _objc_release(puVar2);
          goto LAB_10703333c;
        }
      }
    }
    else {
      uVar1 = *(uint *)((long)param_10 + 0xc);
      if ((*(uint *)((long)param_8 + 0xc) & 1) == 0) {
        if ((((((uVar1 & 1) == 0) || ((*(byte *)((long)param_10 + 0x24) & 1) == 0)) ||
             (param_10[5] != 0)) || ((long)param_10[3] < 0)) &&
           (((((*(uint *)((long)param_11 + 0xc) & 1) == 0 ||
              ((*(byte *)((long)param_11 + 0x24) & 1) == 0)) ||
             ((param_11[5] != 0 || ((long)param_11[3] < 0)))) &&
            (((((uVar1 & 1) == 0 || ((*(byte *)((long)param_10 + 0x24) & 1) == 0)) ||
              ((param_10[5] != 0 || ((long)param_10[3] < 0)))) &&
             (((((*(uint *)((long)param_11 + 0xc) & 1) == 0 ||
                ((*(byte *)((long)param_11 + 0x24) & 1) == 0)) || (param_11[5] != 0)) ||
              ((long)param_11[3] < 0)))))))) goto LAB_107033250;
      }
      else if ((uVar1 & 1) != 0) goto LAB_107033350;
    }
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar2);
    puVar4 = (undefined8 *)0x0;
  }
  _objc_release(param_12);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  return puVar4;
}



/* Entry: 107033450; end: 10703348b;  */

void FUN_107033450(long param_1,long param_2)

{
  *(bool *)(*(long *)(param_1 + 0x20) + 8) = param_2 != 0;
  return;
}



/* Entry: 10703348c; end: 107033493; -[SCMediaImportEditorConfig importMediaContent] */

undefined8 FUN_10703348c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107033494; end: 10703349b; -[SCMediaImportEditorConfig downloadingTitle] */

undefined8 FUN_107033494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10703349c; end: 1070334a3; -[SCMediaImportEditorConfig trimmingTitle] */

undefined8 FUN_10703349c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1070334a4; end: 1070334b7; -[SCMediaImportEditorConfig maxDurationAllowed] */

void FUN_1070334a4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  param_1[1] = *(undefined8 *)(param_2 + 0x48);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x50);
  return;
}



/* Entry: 1070334b8; end: 1070334cb; -[SCMediaImportEditorConfig minDurationAllowed] */

void FUN_1070334b8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  param_1[1] = *(undefined8 *)(param_2 + 0x60);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x68);
  return;
}



/* Entry: 1070334cc; end: 1070334df; -[SCMediaImportEditorConfig contentTimeRange] */

void FUN_1070334cc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  param_1[1] = *(undefined8 *)(param_2 + 0x78);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  param_1[5] = *(undefined8 *)(param_2 + 0x98);
  param_1[4] = uVar1;
  return;
}



/* Entry: 1070334e0; end: 1070334f3; -[SCMediaImportEditorConfig initialTrimmedTimeRange] */

void FUN_1070334e0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  param_1[1] = *(undefined8 *)(param_2 + 0xa8);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xc0);
  param_1[5] = *(undefined8 *)(param_2 + 200);
  param_1[4] = uVar1;
  return;
}



/* Entry: 1070334f4; end: 1070334fb; -[SCMediaImportEditorConfig segmentsTimelineEndSeconds] */

undefined8 FUN_1070334f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1070334fc; end: 107033513; -[SCMediaImportEditorConfig downloadingCanceler] */

void FUN_1070334fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107033514; end: 10703351b; -[SCMediaImportEditorConfig timelineConfiguration] */

undefined8 FUN_107033514(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10703351c; end: 107033523; -[SCMediaImportEditorConfig contentExistsLocally] */

undefined1 FUN_10703351c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107033524; end: 10703352b; -[SCMediaImportEditorConfig useAfterTrimTiming] */

undefined1 FUN_107033524(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10703352c; end: 107033533; -[SCMediaImportEditorConfig isDirectorModeUI] */

undefined1 FUN_10703352c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107033534; end: 10703358f; -[SCMediaImportEditorConfig .cxx_destruct] */

void FUN_107033534(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107033590; end: 1070337f3; +[SCMediaImportEditorConfigTimelineModeFactory configWithImportMediaContent:timelineConfiguration:downloadingTitle:trimmingTitle:downloadingCanceler:useAfterTrimTiming:isDirectorModeUI:maxDurationSecondAllowed:] */

void FUN_107033590(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 auStack_90 [32];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_4;
  FUN_107034520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  FUN_10703465c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  FUN_107034780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cbfe0;
  if (lVar1 == 0) {
    if (lVar2 == 0) {
      if (lVar3 == 0) {
        _CMTimeMakeWithSeconds(auStack_90,0x3fe0000000000000,600);
        puVar4 = PTR_PTR_1126c6728;
        _objc_alloc(PTR_PTR_1126c6728);
        func_0x00010c01d360();
      }
      else {
        func_0x00010bde47a0(param_1,PTR_PTR_1126cbfe0,param_3,lVar3,param_5,param_6,param_7,param_8,
                            param_9,param_10);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010bde4780(param_1,PTR_PTR_1126cbfe0,param_3,lVar2,param_5,param_6,param_7,param_8,
                          param_9,param_10);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010bde4760(param_1,PTR_PTR_1126cbfe0,param_3,lVar1,param_5,param_6,param_7,param_8,
                        param_9,param_10);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1070337f4; end: 107033b87; +[SCMediaImportEditorConfigTimelineModeFactory _configWithImportMediaImage:timelineConfiguration:downloadingTitle:trimmingTitle:downloadingCanceler:useAfterTrimTiming:isDirectorModeUI:maxDurationSecondAllowed:] */

void FUN_1070337f4(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  int param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_4 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b00f0;
    func_0x00010bfe94a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__kCMTimeZero_110348670;
    if (puVar1 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      if (param_5 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        uStack_98 = *(undefined8 *)(puVar4 + 8);
        uStack_a0 = *(undefined8 *)puVar4;
        uStack_90 = *(undefined8 *)(puVar4 + 0x10);
      }
      else if (param_9 == 0) {
        puVar3 = param_5;
        func_0x00010bf5dc00();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c0d3c80();
        _objc_release(puVar3);
        func_0x00010c276200(&uStack_a0,param_5);
      }
      else {
        puVar3 = param_5;
        func_0x00010bf5dd60();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c0d3c80();
        _objc_release(puVar3);
        func_0x00010c276460(&uStack_a0,param_5);
      }
      _CMTimeMakeWithEpoch(&uStack_120,(long)(param_1 * 600.0),600,0);
      uStack_148 = uStack_98;
      uStack_150 = uStack_a0;
      uStack_140 = uStack_90;
      _CMTimeSubtract(&uStack_b8,&uStack_120,&uStack_150);
      _CMTimeMakeWithSeconds(&uStack_d0,0x3fe0000000000000,600);
      uStack_118 = 0x100000258;
      uStack_120 = 6000;
      uStack_110 = 0;
      uStack_148 = uStack_b0;
      uStack_150 = uStack_b8;
      uStack_140 = uStack_a8;
      _CMTimeMinimum(&uStack_e8,&uStack_120,&uStack_150);
      uVar7 = *(undefined8 *)(puVar4 + 8);
      uVar6 = *(undefined8 *)puVar4;
      uVar5 = *(undefined8 *)(puVar4 + 0x10);
      uStack_1b8 = uStack_e0;
      uStack_1c0 = uStack_e8;
      uStack_1b0 = uStack_d8;
      uStack_150 = uVar6;
      uStack_148 = uVar7;
      uStack_140 = uVar5;
      _CMTimeRangeMake(&uStack_120,&uStack_150,&uStack_1c0);
      uStack_1e8 = uStack_e0;
      uStack_1f0 = uStack_e8;
      uStack_1e0 = uStack_d8;
      uStack_1c0 = uVar6;
      uStack_1b8 = uVar7;
      uStack_1b0 = uVar5;
      _CMTimeRangeMake(&uStack_150,&uStack_1c0,&uStack_1f0);
      uStack_1e8 = uStack_98;
      uStack_1f0 = uStack_a0;
      uStack_1e0 = uStack_90;
      uStack_168 = uStack_e0;
      uStack_170 = uStack_e8;
      uStack_160 = uStack_d8;
      _CMTimeAdd(&uStack_1c0,&uStack_1f0,&uStack_170);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uStack_90 = uStack_1b0;
      uStack_98 = uStack_1b8;
      uStack_a0 = uStack_1c0;
      _CMTimeGetSeconds(&uStack_1c0);
      func_0x00010c0df720(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126c6728;
      _objc_alloc(PTR_PTR_1126c6728);
      puVar3 = puVar2;
      func_0x00010bf51e00();
      uStack_168 = uStack_b0;
      uStack_170 = uStack_b8;
      uStack_160 = uStack_a8;
      uStack_180 = uStack_c0;
      uStack_1b8 = uStack_118;
      uStack_1c0 = uStack_120;
      uStack_1a8 = uStack_108;
      uStack_1b0 = uStack_110;
      uStack_198 = uStack_f8;
      uStack_1a0 = uStack_100;
      uStack_188 = uStack_c8;
      uStack_190 = uStack_d0;
      uStack_1e8 = uStack_148;
      uStack_1f0 = uStack_150;
      uStack_1d8 = uStack_138;
      uStack_1e0 = uStack_140;
      uStack_1c8 = uStack_128;
      uStack_1d0 = uStack_130;
      func_0x00010c01d360(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107033b88; end: 107033f1f; +[SCMediaImportEditorConfigTimelineModeFactory _configWithImportMediaVideoAVAsset:timelineConfiguration:downloadingTitle:trimmingTitle:downloadingCanceler:useAfterTrimTiming:isDirectorModeUI:maxDurationSecondAllowed:] */

void FUN_107033b88(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  int param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_4 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b00f0;
    func_0x00010c29be40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__kCMTimeZero_110348670;
    if (puVar1 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      if (param_5 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        uStack_98 = *(undefined8 *)(puVar4 + 8);
        uStack_a0 = *(undefined8 *)puVar4;
        uStack_90 = *(undefined8 *)(puVar4 + 0x10);
      }
      else if (param_9 == 0) {
        puVar3 = param_5;
        func_0x00010bf5dc00();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c0d3c80();
        _objc_release(puVar3);
        func_0x00010c276200(&uStack_a0,param_5);
      }
      else {
        puVar3 = param_5;
        func_0x00010bf5dd60();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c0d3c80();
        _objc_release(puVar3);
        func_0x00010c276460(&uStack_a0,param_5);
      }
      uStack_b8 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
      uStack_c0 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
      uStack_b0 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
      _CMTimeMakeWithSeconds(&uStack_d8,0x3fe0000000000000,600);
      uStack_108 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
      uStack_110 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
      uStack_f8 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
      uStack_100 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
      uStack_e8 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
      uStack_f0 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
      _CMTimeMakeWithEpoch(&uStack_190,(long)(param_1 * 600.0),600,0);
      uStack_1b8 = uStack_98;
      uStack_1c0 = uStack_a0;
      uStack_1b0 = uStack_90;
      _CMTimeSubtract(&uStack_128,&uStack_190,&uStack_1c0);
      func_0x00010bf8b160(&uStack_190,param_4);
      uStack_1b8 = uStack_120;
      uStack_1c0 = uStack_128;
      uStack_1b0 = uStack_118;
      _CMTimeMinimum(&uStack_c0,&uStack_1c0,&uStack_190);
      func_0x00010bf8b160(&uStack_190,param_4);
      uStack_1b8 = *(undefined8 *)(puVar4 + 8);
      uStack_1c0 = *(undefined8 *)puVar4;
      uStack_1b0 = *(undefined8 *)(puVar4 + 0x10);
      _CMTimeRangeMake(&uStack_110,&uStack_1c0,&uStack_190);
      uStack_1b8 = uStack_98;
      uStack_1c0 = uStack_a0;
      uStack_1b0 = uStack_90;
      uStack_138 = uStack_b8;
      uStack_140 = uStack_c0;
      uStack_130 = uStack_b0;
      _CMTimeAdd(&uStack_190,&uStack_1c0,&uStack_140);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uStack_90 = uStack_180;
      uStack_98 = uStack_188;
      uStack_a0 = uStack_190;
      _CMTimeGetSeconds(&uStack_190);
      func_0x00010c0df720(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(puVar4);
      puVar3 = puVar2;
      func_0x00010bf51e00();
      puVar4 = PTR_PTR_1126c6728;
      _objc_alloc(PTR_PTR_1126c6728);
      uStack_138 = uStack_b8;
      uStack_140 = uStack_c0;
      uStack_188 = uStack_108;
      uStack_190 = uStack_110;
      uStack_178 = uStack_f8;
      uStack_180 = uStack_100;
      uStack_168 = uStack_e8;
      uStack_170 = uStack_f0;
      uStack_158 = uStack_d0;
      uStack_160 = uStack_d8;
      uStack_1b8 = uStack_108;
      uStack_1c0 = uStack_110;
      uStack_1a8 = uStack_f8;
      uStack_1b0 = uStack_100;
      uStack_130 = uStack_b0;
      uStack_150 = uStack_c8;
      uStack_198 = uStack_e8;
      uStack_1a0 = uStack_f0;
      func_0x00010c01d360();
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107033f20; end: 107034293; +[SCMediaImportEditorConfigTimelineModeFactory _configWithSnapDoc:timelineConfiguration:downloadingTitle:trimmingTitle:downloadingCanceler:useAfterTrimTiming:isDirectorModeUI:maxDurationSecondAllowed:] */

void FUN_107033f20(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  int param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_4 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b00f0;
    func_0x00010c240560();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      if (param_5 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_a0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      }
      else if (param_9 == 0) {
        puVar4 = param_5;
        func_0x00010bf5dc00();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar4;
        func_0x00010c0d3c80();
        _objc_release(puVar4);
        func_0x00010c276200(&uStack_a0,param_5);
      }
      else {
        puVar4 = param_5;
        func_0x00010bf5dd60();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar4;
        func_0x00010c0d3c80();
        _objc_release(puVar4);
        func_0x00010c276460(&uStack_a0,param_5);
      }
      uStack_b8 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
      uStack_c0 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
      uStack_b0 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
      _CMTimeMakeWithSeconds(&uStack_d8,0x3fe0000000000000,600);
      uStack_108 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
      uStack_110 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
      uStack_f8 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
      uStack_100 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
      uStack_e8 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
      uStack_f0 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
      _CMTimeMakeWithEpoch(&uStack_190,(long)(param_1 * 600.0),600,0);
      uStack_1b8 = uStack_98;
      uStack_1c0 = uStack_a0;
      uStack_1b0 = uStack_90;
      _CMTimeSubtract(&uStack_128,&uStack_190,&uStack_1c0);
      FUN_1070348a4(&uStack_110,param_4);
      uStack_188 = uStack_120;
      uStack_190 = uStack_128;
      uStack_180 = uStack_118;
      uStack_1b8 = uStack_f0;
      uStack_1c0 = uStack_f8;
      uStack_1b0 = uStack_e8;
      _CMTimeMinimum(&uStack_c0,&uStack_190,&uStack_1c0);
      uStack_1b8 = uStack_98;
      uStack_1c0 = uStack_a0;
      uStack_1b0 = uStack_90;
      uStack_138 = uStack_b8;
      uStack_140 = uStack_c0;
      uStack_130 = uStack_b0;
      _CMTimeAdd(&uStack_190,&uStack_1c0,&uStack_140);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uStack_90 = uStack_180;
      uStack_98 = uStack_188;
      uStack_a0 = uStack_190;
      _CMTimeGetSeconds(&uStack_190);
      func_0x00010c0df720(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(puVar4);
      puVar3 = puVar2;
      func_0x00010bf51e00();
      puVar4 = PTR_PTR_1126c6728;
      _objc_alloc(PTR_PTR_1126c6728);
      uStack_138 = uStack_b8;
      uStack_140 = uStack_c0;
      uStack_188 = uStack_108;
      uStack_190 = uStack_110;
      uStack_178 = uStack_f8;
      uStack_180 = uStack_100;
      uStack_168 = uStack_e8;
      uStack_170 = uStack_f0;
      uStack_158 = uStack_d0;
      uStack_160 = uStack_d8;
      uStack_1b8 = uStack_108;
      uStack_1c0 = uStack_110;
      uStack_1a8 = uStack_f8;
      uStack_1b0 = uStack_100;
      uStack_130 = uStack_b0;
      uStack_150 = uStack_c8;
      uStack_198 = uStack_e8;
      uStack_1a0 = uStack_f0;
      func_0x00010c01d360();
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107034294; end: 10703451f; +[SCMediaImportEditorConfigTimelineModeFactory configWithImportMediaVideoAVAsset:downloadingTitle:trimmingTitle:downloadingCanceler:minDurationAllowed:isDirectorModeUI:maxDurationSecondAllowed:] */

void FUN_107034294(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined1 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  uint uStack_94;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_5 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b00f0;
    func_0x00010c29be40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      _CMTimeMakeWithEpoch(&uStack_a0,(long)(param_2 * 600.0),600,0);
      dVar5 = 0.5;
      dVar6 = dVar5;
      if ((uStack_94 & 1) != 0) {
        dVar6 = 0.5;
        if (0.5 <= param_1) {
          dVar6 = param_1;
        }
        uStack_e8 = uStack_a0;
        uStack_e0 = uStack_98;
        uStack_dc = uStack_94;
        uStack_d8 = uStack_90;
        _CMTimeGetSeconds(&uStack_e8);
        if (dVar5 <= dVar6) {
          dVar6 = dVar5;
        }
      }
      _CMTimeMakeWithSeconds(&uStack_b8,dVar6,600);
      func_0x00010bf8b160(&uStack_150,param_5);
      uStack_178 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_180 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_170 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      _CMTimeRangeMake(&uStack_e8,&uStack_180,&uStack_150);
      uStack_178 = CONCAT44(uStack_dc,uStack_e0);
      uStack_180 = uStack_e8;
      uStack_168 = uStack_d0;
      uStack_170 = uStack_d8;
      uStack_158 = uStack_c0;
      uStack_160 = uStack_c8;
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = puVar4;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126c6728;
      _objc_alloc(PTR_PTR_1126c6728);
      uStack_100 = uStack_a0;
      uStack_f0 = uStack_90;
      uStack_110 = uStack_a8;
      uStack_148 = CONCAT44(uStack_dc,uStack_e0);
      uStack_150 = uStack_e8;
      uStack_138 = uStack_d0;
      uStack_140 = uStack_d8;
      uStack_128 = uStack_c0;
      uStack_130 = uStack_c8;
      uStack_118 = uStack_b0;
      uStack_120 = uStack_b8;
      uStack_190 = 1;
      puStack_1b0 = &uStack_120;
      puStack_1a8 = &uStack_150;
      puStack_1a0 = &uStack_180;
      puStack_198 = puVar2;
      uStack_18f = param_9;
      func_0x00010c01d360();
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  lVar3 = param_5;
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    pcStack_1b8 = FUN_107034520;
    uStack_1d0 = param_6;
    lStack_1c8 = param_5;
    puStack_1c0 = &stack0xfffffffffffffff0;
    _objc_retain();
    puStack_1f8 = &uStack_200;
    uStack_200 = 0;
    uStack_1f0 = 0x3032000000;
    pcStack_1e8 = FUN_10703460c;
    uStack_1e0 = 0x10703461c;
    uStack_1d8 = 0;
    func_0x00010c0be540(lVar3);
    puVar4 = (undefined *)puStack_1f8[5];
    _objc_retain(puVar4);
    __Block_object_dispose(&uStack_200,8);
    _objc_release(uStack_1d8);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107034520; end: 10703460b;  */

void FUN_107034520(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10703460c;
  uStack_30 = 0x10703461c;
  uStack_28 = 0;
  func_0x00010c0be540(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10703460c; end: 107034623;  */

void FUN_10703460c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107034624; end: 10703465b;  */

void FUN_107034624(long param_1,undefined8 param_2)

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



/* Entry: 10703465c; end: 107034747;  */

void FUN_10703465c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10703460c;
  uStack_30 = 0x10703461c;
  uStack_28 = 0;
  func_0x00010c0be540(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107034748; end: 10703477f;  */

void FUN_107034748(long param_1,undefined8 param_2)

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



/* Entry: 107034780; end: 10703486b;  */

void FUN_107034780(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10703460c;
  uStack_30 = 0x10703461c;
  uStack_28 = 0;
  func_0x00010c0be540(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10703486c; end: 1070348a3;  */

void FUN_10703486c(long param_1,undefined8 param_2)

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



/* Entry: 1070348a4; end: 107034a5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070348a4(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar18 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar17 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar13 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_f0 = uVar17;
  uStack_e8 = uVar18;
  uStack_e0 = uVar13;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_2;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar1 = lVar11;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar14 = *plStack_120;
    do {
      lVar16 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(lVar11);
        }
        uVar12 = *(ulong *)(lStack_128 + lVar16 * 8);
        uVar2 = uVar12;
        func_0x00010c08c3a0();
        if ((int)uVar2 == 1) {
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar12;
          func_0x00010bf0b760();
          if ((int)uVar2 == 5) {
            uVar2 = uVar12;
            func_0x00010c0c4bc0(uVar12);
            _CMTimeMake(&uStack_f0,uVar2 & 0xffffffff,1000);
            _objc_release(uVar12);
            goto LAB_1070349f0;
          }
          _objc_release(uVar12);
        }
        lVar16 = lVar16 + 1;
      } while (lVar1 != lVar16);
      lVar1 = lVar11;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
LAB_1070349f0:
  _objc_release(lVar11);
  uStack_168 = uStack_e8;
  uStack_170 = uStack_f0;
  uStack_160 = uStack_e0;
  puVar3 = &uStack_150;
  uStack_150 = uVar17;
  uStack_148 = uVar18;
  uStack_140 = uVar13;
  _CMTimeRangeMake(param_1,puVar3,&uStack_170);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar4 = PTR_PTR_1126d4258;
    _objc_alloc();
    puVar5 = puVar3;
    FUN_107034c78();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf8ca20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined8 *)0x0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (long)puVar3 + (long)_DAT_112762f98;
      _objc_loadWeakRetained();
    }
    lVar1 = lVar11;
    func_0x00010c0da2a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    FUN_107034c78(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c13cb60();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined8 *)0x0) {
      lVar14 = 0;
    }
    else {
      lVar14 = (long)puVar3 + (long)_DAT_112762f9c;
      _objc_loadWeakRetained(lVar14);
    }
    lVar16 = lVar14;
    func_0x00010c0da300(lVar14);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined8 *)0x0) {
      lVar15 = 0;
    }
    else {
      lVar15 = (long)puVar3 + (long)_DAT_112762fa0;
      _objc_loadWeakRetained();
    }
    lVar9 = lVar15;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x000109127dd4();
    uVar13 = 0x4072c00000000000;
    if (lVar10 != 2) {
      uVar13 = 0x405e000000000000;
    }
    uVar17 = 0x4066800000000000;
    if (lVar10 != 1) {
      uVar17 = uVar13;
    }
    func_0x00010c000f60(uVar17);
    uVar13 = *(undefined8 *)((long)puVar3 + (long)_DAT_112762f90);
    *(undefined **)((long)puVar3 + (long)_DAT_112762f90) = puVar4;
    _objc_release(uVar13);
    _objc_release(lVar9);
    _objc_release(lVar15);
    _objc_release(lVar16);
    _objc_release(lVar14);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(lVar1);
    _objc_release(lVar11);
    _objc_release(puVar6);
    _objc_release(puVar5);
    FUN_107034c78(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 107034a5c; end: 107034c77; -[SCMediaImportEditorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107034a5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar1 = PTR_PTR_1126d4258;
  _objc_alloc();
  lVar2 = param_1;
  FUN_107034c78();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf8ca20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112762f98;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar10;
  func_0x00010c0da2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_107034c78(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c13cb60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_112762f9c;
    _objc_loadWeakRetained(lVar12);
  }
  lVar7 = lVar12;
  func_0x00010c0da300(lVar12);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112762fa0;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x000109127dd4();
  uVar14 = 0x4072c00000000000;
  if (lVar9 != 2) {
    uVar14 = 0x405e000000000000;
  }
  uVar13 = 0x4066800000000000;
  if (lVar9 != 1) {
    uVar13 = uVar14;
  }
  func_0x00010c000f60(uVar13,puVar1,param_2,lVar3,lVar4,lVar6,lVar7);
  uVar14 = *(undefined8 *)(param_1 + _DAT_112762f90);
  *(undefined **)(param_1 + _DAT_112762f90) = puVar1;
  _objc_release(uVar14);
  _objc_release(lVar8);
  _objc_release(lVar11);
  _objc_release(lVar7);
  _objc_release(lVar12);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar2);
  FUN_107034c78(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107034c78; end: 107034c9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107034c78(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112762f94);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107034c9c; end: 107034d23; -[SCMediaImportEditorEntryPoint end] */

void FUN_107034c9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  FUN_107034c78();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126f8538;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107034d24; end: 107034d83; -[SCMediaImportEditorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107034d24(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112762fa0);
  _objc_destroyWeak(param_1 + _DAT_112762f9c);
  _objc_destroyWeak(param_1 + _DAT_112762f98);
  _objc_destroyWeak(param_1 + _DAT_112762f94);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112762f90,0);
  return;
}



/* Entry: 107034d84; end: 107034e53; -[SCMediaImportEditorScope initWithImportMediaEditorConfig:uiContainer:resultHandler:] */

undefined1 *
FUN_107034d84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f8540;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107034e54; end: 107034e5b; -[SCMediaImportEditorScope editorConfig] */

undefined8 FUN_107034e54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107034e5c; end: 107034e63; -[SCMediaImportEditorScope uiContainer] */

undefined8 FUN_107034e5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107034e64; end: 107034e6b; -[SCMediaImportEditorScope resultHandler] */

undefined8 FUN_107034e64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107034e6c; end: 107034ea7; -[SCMediaImportEditorScope .cxx_destruct] */

void FUN_107034e6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107034ea8; end: 1070351cf; -[SCMediaImportEditorViewController initWithConfig:ngsmePlayerFactory:trimmingCompletionHandler:ngsmeSnapDocResolver:maxDurationSecondAllowed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107034ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_80 = PTR_PTR_1126f8548;
  puVar3 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_112762fb0;
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar6);
    *(undefined8 *)((long)puVar3 + lVar6) = param_4;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112762fb4;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_5;
    _objc_release(uVar4);
    uVar4 = param_6;
    _objc_retainBlock();
    uVar5 = *(undefined8 *)((long)puVar3 + (long)_DAT_112762fb8);
    *(undefined8 *)((long)puVar3 + (long)_DAT_112762fb8) = uVar4;
    _objc_release(uVar5);
    lVar7 = (long)_DAT_112762fbc;
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_7;
    _objc_release(uVar4);
    puVar1 = (undefined8 *)((long)puVar3 + (long)_DAT_112762fc0);
    _CMTimeMakeWithSeconds(&uStack_a0,0x3fe0000000000000,600);
    puVar1[2] = uStack_90;
    puVar1[1] = uStack_98;
    *puVar1 = uStack_a0;
    *(undefined8 *)((long)puVar3 + (long)_DAT_112762fc4) = param_1;
    func_0x00010c1c8b80(puVar3);
    _objc_initWeak(&uStack_a0,puVar3);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar6);
    func_0x00010bfea460(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1070351d0;
    puStack_b0 = &UNK_1108ab900;
    _objc_copyWeak(auStack_a8,&uStack_a0);
    puStack_f0 = puVar2;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_107035300;
    puStack_d8 = &UNK_11084d858;
    _objc_retain(puVar3);
    puStack_118 = puVar2;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_10703533c;
    puStack_100 = &UNK_1108ab900;
    puStack_d0 = puVar3;
    _objc_copyWeak(auStack_f8,&uStack_a0);
    puStack_140 = puVar2;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_10703546c;
    puStack_128 = &UNK_1108a7458;
    _objc_retain(puVar3);
    puStack_120 = puVar3;
    _objc_copyWeak(auStack_148,&uStack_a0);
    _objc_retain(puVar3);
    func_0x00010c0be540(uVar4);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_148);
    _objc_release(puStack_120);
    _objc_destroyWeak(auStack_f8);
    _objc_release(puStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(&uStack_a0);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 1070351d0; end: 107035277;  */

void FUN_1070351d0(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c297260(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107035278; end: 1070352ff;  */

void FUN_107035278(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = (undefined *)0x0;
  if ((param_2 != 0) && (param_3 == 0)) {
    puVar1 = PTR_PTR_1126b00f0;
    func_0x00010bfe94a0(PTR_PTR_1126b00f0);
    _objc_retainAutoreleasedReturnValue();
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5980();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107035300; end: 10703533b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107035300(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112762fc8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112762fc8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10703533c; end: 1070353e3;  */

void FUN_10703533c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c297260(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1070353e4; end: 10703546b;  */

void FUN_1070353e4(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = (undefined *)0x0;
  if ((param_2 != 0) && (param_3 == 0)) {
    puVar1 = PTR_PTR_1126b00f0;
    func_0x00010c29be40(PTR_PTR_1126b00f0);
    _objc_retainAutoreleasedReturnValue();
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5980();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10703546c; end: 1070354a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703546c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112762fcc);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112762fcc) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070354a8; end: 10703554f;  */

void FUN_1070354a8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c297260(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107035550; end: 1070355d7;  */

void FUN_107035550(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = (undefined *)0x0;
  if ((param_2 != 0) && (param_3 == 0)) {
    puVar1 = PTR_PTR_1126b00f0;
    func_0x00010c240560(PTR_PTR_1126b00f0);
    _objc_retainAutoreleasedReturnValue();
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5980();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070355d8; end: 107035613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070355d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112762fd0);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112762fd0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107035614; end: 10703565b; -[SCMediaImportEditorViewController viewDidDisappear:] */

void FUN_107035614(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f8548;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010becafa0(param_1);
  return;
}



/* Entry: 10703565c; end: 1070356a3; -[SCMediaImportEditorViewController viewDidLoad] */

void FUN_10703565c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f8548;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bee31c0(param_1);
  return;
}



/* Entry: 1070356a4; end: 1070356ab; -[SCMediaImportEditorViewController shouldPopToRootViewController] */

undefined8 FUN_1070356a4(void)

{
  return 0;
}



/* Entry: 1070356ac; end: 1070356b3; -[SCMediaImportEditorViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_1070356ac(void)

{
  return 0;
}



/* Entry: 1070356b4; end: 1070356e3; -[SCMediaImportEditorViewController config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070356b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762fb0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070356e4; end: 107035723; -[SCMediaImportEditorViewController setConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070356e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762fb0);
  *(undefined8 *)(param_1 + _DAT_112762fb0) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bee31d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateUsingConfig_112596618);
  return;
}



/* Entry: 107035724; end: 107035897; -[SCMediaImportEditorViewController showLoadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107035724(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_112762fd4;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar2 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  }
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar6 = (long)_DAT_112762fd8;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar3);
  _objc_release(lVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fe3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar2);
  lVar4 = (long)_DAT_112762fb0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010bf4c460();
  if (iVar1 == 0) {
    func_0x00010c066fa0(*(undefined8 *)(param_1 + _DAT_112762fdc));
  }
  else {
    func_0x00010befbb60();
  }
  func_0x00010c14c940(*(undefined8 *)(param_1 + lVar6));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c14c920(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar5));
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf4c460(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112762fe0),PTR_s_setHidden__1126479f8,uVar3);
  return;
}



/* Entry: 107035898; end: 10703595b; -[SCMediaImportEditorViewController _didTapCancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107035898(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = (long)_DAT_112762fb0;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bf89360();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + lVar4);
    func_0x00010bf4c460();
    _objc_release(lVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010bf89360(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2dba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  uStack_58 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
  uStack_60 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
  uStack_48 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
  uStack_50 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
  uStack_38 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
  uStack_40 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
  func_0x00010bde3480(param_1,param_2,0,1,&uStack_60,0);
  return;
}



/* Entry: 10703595c; end: 1070359a3; -[SCMediaImportEditorViewController _didTapConfirm] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703595c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112762fe4);
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  uStack_28 = puVar1[3];
  uStack_30 = puVar1[2];
  uStack_18 = puVar1[5];
  uStack_20 = puVar1[4];
  func_0x00010bde3480(param_1,param_2,1,0,&uStack_40,0);
  return;
}



/* Entry: 1070359a4; end: 107035a1f; -[SCMediaImportEditorViewController _aspectRatioForPlayerViewIsCloseToAspectRatioForContentSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1070359a4(double param_1,double param_2,long param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  lVar1 = (long)_DAT_112762fe8;
  dVar2 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar1));
  _CGRectGetHeight();
  dVar3 = dVar2;
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar1));
  _CGRectGetWidth();
  return ABS(1.0 - (param_2 / param_1) / (dVar2 / dVar3)) <= 0.1;
}



/* Entry: 107035a20; end: 107035b37; -[SCMediaImportEditorViewController _completeTrimmingWithSuccess:userCancelled:trimmedTimeRange:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107035a20(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_8);
  func_0x00010becafa0(param_3);
  lVar3 = param_3;
  func_0x00010bde7ce0();
  if ((int)lVar3 != 0) {
    func_0x00010c29b200(PTR_PTR_1126b0010);
    bVar1 = false;
    bVar2 = false;
    if (param_1 < 3840.0) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(param_2)) {
        bVar1 = param_2 < 3840.0;
        bVar2 = false;
      }
    }
    if (bVar1 == bVar2) {
      func_0x00010c0f5b20(*(undefined8 *)(param_3 + _DAT_112762fec));
    }
  }
  func_0x00010c2568a0(*(undefined8 *)(param_3 + _DAT_112762ff0));
  lVar5 = (long)_DAT_112762fb8;
  lVar3 = *(long *)(param_3 + lVar5);
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_3 + lVar5);
  *(undefined8 *)(param_3 + lVar5) = 0;
  _objc_release(uVar4);
  if (lVar3 != 0) {
    uStack_78 = param_7[1];
    uStack_80 = *param_7;
    uStack_68 = param_7[3];
    uStack_70 = param_7[2];
    uStack_58 = param_7[5];
    uStack_60 = param_7[4];
    (**(code **)(lVar3 + 0x10))(lVar3,param_5,param_6,&uStack_80,param_8);
  }
  _objc_release(lVar3);
  _objc_release(param_8);
  return;
}



/* Entry: 107035b38; end: 107035b4f; -[SCMediaImportEditorViewController _contentIsImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107035b38(long param_1)

{
  return *(long *)(param_1 + _DAT_112762fc8) != 0;
}



/* Entry: 107035b50; end: 107035b67; -[SCMediaImportEditorViewController _contentIsVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107035b50(long param_1)

{
  return *(long *)(param_1 + _DAT_112762fcc) != 0;
}



/* Entry: 107035b68; end: 107035b7f; -[SCMediaImportEditorViewController _contentIsMemoriesSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107035b68(long param_1)

{
  return *(long *)(param_1 + _DAT_112762fd0) != 0;
}



/* Entry: 107035b80; end: 107035baf; -[SCMediaImportEditorViewController _contentIsCameraRollVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107035b80(long param_1)

{
  if (*(long *)(param_1 + _DAT_112762fcc) != 0) {
    return *(long *)(param_1 + _DAT_112762fd0) == 0;
  }
  return false;
}



/* Entry: 107035bb0; end: 107035cc3; -[SCMediaImportEditorViewController _createThumbnailFutures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107035bb0(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + _DAT_112762ff4));
  param_3 = (param_1 + -45.0) - param_3;
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bde7d60();
  if ((int)lVar2 != 0) {
    puVar1 = (undefined8 *)(param_4 + _DAT_112762ff8);
    uStack_58 = puVar1[1];
    uStack_60 = *puVar1;
    uStack_48 = puVar1[3];
    uStack_50 = puVar1[2];
    uStack_38 = puVar1[5];
    uStack_40 = puVar1[4];
    puVar3 = PTR_PTR_1126d4260;
    func_0x00010bf59800(param_3,PTR_PTR_1126d4260,param_5,*(undefined8 *)(param_4 + _DAT_112762fcc),
                        &uStack_60);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_4 + _DAT_112762ffc);
    *(undefined **)(param_4 + _DAT_112762ffc) = puVar3;
    _objc_release(uVar4);
  }
  lVar2 = param_4;
  func_0x00010bde7d00();
  if ((int)lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010bdf4b00(param_3,param_4,param_5,*(undefined8 *)(param_4 + _DAT_112762fc8));
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_4 + _DAT_112762ffc);
    *(long *)(param_4 + _DAT_112762ffc) = lVar2;
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 107035cc4; end: 107035d6f; -[SCMediaImportEditorViewController _createThumbnailFuturesForViewWidth:image:] */

void FUN_107035cc4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)(param_1 / 35.0);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (0 < lVar3) {
    do {
      func_0x00010befa120(puVar1,param_3,puVar2);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107035d70; end: 107036303; -[SCMediaImportEditorViewController _setupDownloadingModeControls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107035d70(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = (long)_DAT_112762fe0;
  puVar2 = param_1;
  if (*(long *)(param_1 + lVar19) == 0) {
    lVar16 = (long)_DAT_112762fb0;
    puVar1 = *(undefined **)(param_1 + lVar16);
    func_0x00010bf89380();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    _objc_release();
    if (puVar1 != (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(puVar3);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc_init();
      lVar18 = (long)_DAT_112762fdc;
      uVar15 = *(undefined8 *)(param_1 + lVar18);
      *(undefined **)(param_1 + lVar18) = puVar1;
      _objc_release(uVar15);
      puVar1 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(puVar1);
      uVar15 = *(undefined8 *)(param_1 + lVar18);
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x00010c14c960(uVar15);
      puVar1 = PTR_PTR_1126b6138;
      _objc_alloc();
      dVar20 = 0.0;
      func_0x00010c013de0(0,0,0x4040800000000000,0x4040800000000000);
      uVar15 = *(undefined8 *)(param_1 + lVar19);
      *(undefined **)(param_1 + lVar19) = puVar1;
      _objc_release(uVar15);
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar19));
      uVar15 = *(undefined8 *)(param_1 + lVar19);
      FUN_107036304(uVar15);
      FUN_107039fc8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020(*(undefined8 *)(param_1 + lVar19));
      _objc_release(uVar15);
      func_0x00010befbd40(*(undefined8 *)(param_1 + lVar19));
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
      uVar4 = *(ulong *)(param_1 + lVar18);
      func_0x00010befbb60();
      func_0x0001008522a8();
      if ((uVar4 & 1) == 0) {
        func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
        uVar15 = 0x4024000000000000;
        dVar20 = dVar20 + 10.0;
      }
      else {
        dVar20 = 12.0;
        uVar15 = 0x4030000000000000;
      }
      uVar5 = *(undefined8 *)(param_1 + lVar19);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar18);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bf493c0(dVar20);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + lVar19);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + lVar18);
      func_0x00010c08de00(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar8;
      func_0x00010bf493c0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + lVar19);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar10;
      func_0x00010bf49420(0x4040800000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + lVar19);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar11;
      func_0x00010bf49420(0x4040800000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2);
      _objc_release(puVar3);
      _objc_release(uVar13);
      _objc_release(uVar11);
      _objc_release(uVar15);
      _objc_release(uVar10);
      _objc_release(uVar12);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      puVar3 = PTR_PTR_1126aea58;
      _objc_alloc_init();
      lVar17 = (long)_DAT_112763000;
      uVar15 = *(undefined8 *)(param_1 + lVar17);
      *(undefined **)(param_1 + lVar17) = puVar3;
      _objc_release(uVar15);
      uVar15 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010bf89380(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar17));
      _objc_release(uVar15);
      func_0x00010c213040(*(undefined8 *)(param_1 + lVar17));
      FUN_10703638c(*(undefined8 *)(param_1 + lVar17));
      func_0x00010c1af000(*(undefined8 *)(param_1 + lVar17));
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
      func_0x00010befbb60(*(undefined8 *)(param_1 + lVar18));
      uVar15 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010bf89380(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240(param_1);
      _objc_release(uVar15);
      uVar12 = *(undefined8 *)(param_1 + lVar17);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + lVar18);
      func_0x00010bf34860(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar12;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar17);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar19);
      func_0x00010bf348e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2);
      _objc_release(puVar3);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar15);
      _objc_release(uVar13);
      _objc_release(uVar12);
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      func_0x00010c238140(param_1);
      _objc_release(puVar1);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126b08d8;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (puVar2 != (undefined *)0x0) {
    _objc_retain();
    func_0x00010c23ba80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100b74f58(0x4000000000000000,0x3fd3333333333333,0,0x3ff0000000000000,puVar3,puVar2,
                        puVar1);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107036304; end: 10703638b;  */

void FUN_107036304(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b08d8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (param_1 != 0) {
    _objc_retain();
    func_0x00010c23ba80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100b74f58(0x4000000000000000,0x3fd3333333333333,0,0x3ff0000000000000,puVar1,param_1,
                        puVar2);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10703638c; end: 1070363eb;  */

void FUN_10703638c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain();
  func_0x00010c23ba80(puVar1,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(param_1,param_2,puVar1);
  _objc_release(puVar1);
  FUN_107036304(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070363ec; end: 1070366eb; -[SCMediaImportEditorViewController _setupTrimmingModeControlsOnCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070363ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_112762ff4) == 0) {
    lVar1 = *(long *)(param_1 + _DAT_112762fb0);
    func_0x00010c27c9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010beac2e0(param_1);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112762fe0),param_2,0);
      lVar1 = (long)_DAT_112762fd4;
      func_0x00010c12c960(*(undefined8 *)(param_1 + lVar1));
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      *(undefined8 *)(param_1 + lVar1) = 0;
      _objc_release(uVar2);
      lVar1 = param_1;
      func_0x00010bde7d20();
      if ((int)lVar1 == 0) {
        lVar1 = param_1;
        func_0x00010bde7ce0();
        if ((int)lVar1 != 0) {
          func_0x00010beaf820(param_1);
          uVar3 = *(undefined8 *)(param_1 + _DAT_112763008);
          lVar1 = (long)_DAT_112762fe8;
          _objc_retain(uVar3);
          uVar2 = *(undefined8 *)(param_1 + lVar1);
          *(undefined8 *)(param_1 + lVar1) = uVar3;
          _objc_release(uVar2);
        }
        lVar1 = param_1;
        func_0x00010bde7d00();
        if ((int)lVar1 != 0) {
          puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
          _objc_alloc();
          func_0x00010c01bf60();
          lVar1 = (long)_DAT_112762fe8;
          uVar2 = *(undefined8 *)(param_1 + lVar1);
          *(undefined **)(param_1 + lVar1) = puVar4;
          _objc_release(uVar2);
          uVar2 = *(undefined8 *)(param_1 + lVar1);
          func_0x00010c08c0e0(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c2d20();
          _objc_release(uVar2);
        }
        func_0x00010be68720(param_1);
        (**(code **)(param_3 + 0x10))(param_3);
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + _DAT_112762fbc);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        func_0x00010c0f40c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0xc2000000;
        uStack_50 = 0x1070365fc;
        puStack_48 = &UNK_110988fe0;
        lStack_40 = param_1;
        _objc_retain(param_3);
        lStack_38 = param_3;
        func_0x00010c297260(uVar2,param_2,&puStack_60,0);
        _objc_release(lStack_38);
        _objc_release(uVar2);
      }
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1070366ec; end: 10703698f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070366ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  }
  _objc_retain(uVar5);
  func_0x00010beae320(uVar1,param_2,uVar5);
  _objc_release(uVar5);
  lVar6 = *(long *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(lVar6 + _DAT_112763004);
  lVar7 = (long)_DAT_112762fe8;
  _objc_retain(uVar5);
  uVar1 = *(undefined8 *)(lVar6 + lVar7);
  *(undefined8 *)(lVar6 + lVar7) = uVar5;
  _objc_release(uVar1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lStack_108 = 0;
  uStack_110 = 0;
  if (*(long *)(param_1 + 0x28) == 0) {
    _objc_retain(0);
LAB_10703696c:
    _objc_retain(0);
    lVar7 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(lVar6);
    if (lVar6 == 0) goto LAB_10703696c;
    lVar7 = *(long *)(lVar6 + 8);
    _objc_retain(lVar7);
    if (lVar7 != 0) {
      lVar4 = *(long *)(lVar7 + 8);
      goto LAB_1070367ac;
    }
  }
  lVar4 = 0;
LAB_1070367ac:
  _objc_retain(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar2 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar2 != 0) {
    lVar7 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(lVar4);
        }
        lVar3 = *(long *)(lStack_108 + lVar6 * 8);
        if ((lVar3 != 0) && (*(long *)(lVar3 + 8) == 1)) {
          lVar6 = *(long *)(lVar3 + 0x20);
          _objc_retain(lVar6);
          lVar7 = lVar6;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          if (lVar7 == 0) goto LAB_107036988;
          uVar1 = *(undefined8 *)(lVar7 + 8);
          goto LAB_107036870;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
    lVar6 = 0;
  }
  while( true ) {
    _objc_release(lVar4);
    func_0x00010be68720(*(undefined8 *)(param_1 + 0x20));
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) break;
    ___stack_chk_fail();
LAB_107036988:
    uVar1 = 0;
LAB_107036870:
    _objc_retain(uVar1);
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_107036990;
    puStack_120 = &UNK_1108480f8;
    uStack_168 = *(undefined8 *)(param_1 + 0x20);
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    uStack_150 = 0x1070369dc;
    puStack_148 = &UNK_1108a7458;
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_180 = 0xc2000000;
    uStack_178 = 0x107036a18;
    puStack_170 = &UNK_11084d858;
    uStack_140 = uStack_168;
    uStack_118 = uStack_168;
    func_0x00010c0bc940(uVar1,param_2,&puStack_138,&puStack_160,&puStack_188);
    _objc_release(uVar1);
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  return;
}



/* Entry: 107036990; end: 107036a53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107036990(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112762fcc);
  *(undefined **)(*(long *)(param_1 + 0x20) + (long)_DAT_112762fcc) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107036a54; end: 107036ff3; -[SCMediaImportEditorViewController _onContructedCommonPlayerView] */

/* WARNING: Possible PIC construction at 0x000107036af0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107036af4) */
/* WARNING: Removing unreachable block (ram,0x000107036e34) */
/* WARNING: Removing unreachable block (ram,0x000107036de4) */
/* WARNING: Removing unreachable block (ram,0x000107036df4) */
/* WARNING: Removing unreachable block (ram,0x000107036dfc) */
/* WARNING: Removing unreachable block (ram,0x000107036e6c) */
/* WARNING: Removing unreachable block (ram,0x000107036f20) */
/* WARNING: Removing unreachable block (ram,0x000107036f58) */
/* WARNING: Removing unreachable block (ram,0x000107036f6c) */
/* WARNING: Removing unreachable block (ram,0x000107036f78) */
/* WARNING: Removing unreachable block (ram,0x000107036f98) */
/* WARNING: Removing unreachable block (ram,0x000107036fa4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107036a54(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112762fe8;
  if (*(long *)(param_1 + lVar5) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      return;
    }
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126b6138;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x4044000000000000,0x4044000000000000);
    lVar5 = (long)_DAT_112762ff4;
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bfe90c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160();
    _objc_release(uVar1);
    _objc_release(puVar2);
    func_0x00010c1aa420(0x4026000000000000,0x402a000000000000,*(undefined8 *)(param_1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4034000000000000);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar1);
    func_0x000107039fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar1);
    func_0x00010befbd40(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
    uVar1 = *(undefined8 *)(param_1 + _DAT_112762fdc);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
  }
  else {
    func_0x0001008522a8();
    func_0x00010c070a40();
    uVar1 = *(undefined8 *)(param_1 + _DAT_112762fdc);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_addSubview__11259c880,uVar4);
  return;
}



/* Entry: 107036ff4; end: 1070371c7; -[SCMediaImportEditorViewController _setupConfirmButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107036ff4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b6138;
  _objc_alloc();
  func_0x00010c013de0(0,0,0x4044000000000000,0x4044000000000000);
  lVar4 = (long)_DAT_112762ff4;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfe90c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160();
  _objc_release(uVar3);
  _objc_release(puVar1);
  func_0x00010c1aa420(0x4026000000000000,0x402a000000000000,*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4034000000000000);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar3);
  func_0x000107039fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar4));
  _objc_release(uVar3);
  func_0x00010befbd40(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112762fdc),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 1070371c8; end: 107037297; -[SCMediaImportEditorViewController _setupPlayPauseButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070371c8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d4268;
  _objc_alloc();
  func_0x00010c013de0(0,0,0x4044000000000000,0x4044000000000000);
  lVar3 = (long)_DAT_11276301c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4034000000000000);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112762fdc),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107037298; end: 10703731b; -[SCMediaImportEditorViewController _setupTrimmedDurationLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107037298(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar3 = (long)_DAT_112763020;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1af000(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3));
  FUN_10703638c(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112762fdc),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10703731c; end: 10703750f; -[SCMediaImportEditorViewController _setupTrimmerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703731c(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_PTR_1126b0d88;
  _objc_alloc_init();
  lVar5 = (long)_DAT_112763024;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  func_0x00010c1af000(*(undefined8 *)(param_1 + lVar5));
  puVar3 = (undefined8 *)(param_1 + _DAT_112762ff8);
  uStack_58 = puVar3[1];
  uStack_60 = *puVar3;
  uStack_48 = puVar3[3];
  uStack_50 = puVar3[2];
  uStack_38 = puVar3[5];
  uStack_40 = puVar3[4];
  func_0x00010c182980(*(undefined8 *)(param_1 + lVar5));
  puVar1 = (undefined8 *)(param_1 + _DAT_112763028);
  uStack_58 = puVar1[1];
  uStack_60 = *puVar1;
  uStack_50 = puVar1[2];
  func_0x00010c1c3ca0(*(undefined8 *)(param_1 + lVar5));
  puVar3 = (undefined8 *)(param_1 + _DAT_112762fc0);
  uStack_58 = puVar3[1];
  uStack_60 = *puVar3;
  uStack_50 = puVar3[2];
  func_0x00010c1c83e0(*(undefined8 *)(param_1 + lVar5));
  uStack_58 = puVar1[1];
  uStack_60 = *puVar1;
  uStack_50 = puVar1[2];
  uStack_98 = puVar3[1];
  uStack_a0 = *puVar3;
  uStack_90 = puVar3[2];
  puVar3 = &uStack_60;
  _CMTimeCompare(puVar3,&uStack_a0);
  if ((int)puVar3 == 0) {
    uStack_78 = puVar1[1];
    uStack_80 = *puVar1;
    uStack_70 = puVar1[2];
  }
  else {
    uStack_78 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    uStack_80 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    uStack_70 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  uStack_50 = uStack_70;
  func_0x00010c19d960(*(undefined8 *)(param_1 + lVar5));
  puVar3 = (undefined8 *)(param_1 + _DAT_112762fe4);
  uStack_58 = puVar3[1];
  uStack_60 = *puVar3;
  uStack_48 = puVar3[3];
  uStack_50 = puVar3[2];
  uStack_38 = puVar3[5];
  uStack_40 = puVar3[4];
  func_0x00010c21a5e0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010bed6840(param_1);
  uStack_58 = puVar3[4];
  uStack_60 = puVar3[3];
  uStack_50 = puVar3[5];
  func_0x00010bee6bc0(param_1);
  func_0x00010bdf4ae0(param_1);
  func_0x00010bfe25e0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c214080(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112762fdc));
  uStack_58 = puVar3[1];
  uStack_60 = *puVar3;
  uStack_48 = puVar3[3];
  uStack_50 = puVar3[2];
  uStack_38 = puVar3[5];
  uStack_40 = puVar3[4];
  func_0x00010c242ea0(param_1);
  return;
}



/* Entry: 107037510; end: 10703753b; -[SCMediaImportEditorViewController _setupTMTrimmerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107037510(long param_1)

{
  func_0x00010beb0d20();
                    /* WARNING: Could not recover jumptable at 0x00010bfe25f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112763024),PTR_s_hidePlayhead_1125d6338);
  return;
}



/* Entry: 10703753c; end: 107037587; -[SCMediaImportEditorViewController _setupDMTrimmerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703753c(long param_1)

{
  long lVar1;
  
  func_0x00010beb0d20();
  lVar1 = (long)_DAT_112763024;
  func_0x00010c28b700(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c202160(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c1ddcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x404f000000000000,*(undefined8 *)(param_1 + lVar1),PTR_s_setPlayheadHeight__112655160)
  ;
  return;
}



/* Entry: 107037588; end: 10703761b; -[SCMediaImportEditorViewController _setupProgressBarViewWithHasNotch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107037588(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d4270;
  _objc_alloc();
  func_0x00010c00a0c0(0x3fe0000000000000);
  lVar3 = (long)_DAT_112763010;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c219b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setTranslatesAutoresizingMaskInt_112664100,0);
  return;
}



/* Entry: 10703761c; end: 107037653; -[SCMediaImportEditorViewController _setupTMProgressBarViewWithHasNotch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10703761c(long param_1)

{
  func_0x00010beaf300();
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112762fdc),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + _DAT_112763010));
  return;
}



/* Entry: 107037654; end: 1070376e7; -[SCMediaImportEditorViewController _setupDMProgressBarViewWithHasNotch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107037654(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010beaf300();
  lVar1 = (long)_DAT_112763010;
  func_0x00010c066fe0(*(undefined8 *)(param_1 + _DAT_112762fdc),param_2,
                      *(undefined8 *)(param_1 + lVar1),*(undefined8 *)(param_1 + _DAT_11276300c));
  func_0x00010c1b0720(*(undefined8 *)(param_1 + lVar1),param_2,1);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010bf13d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar1),param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1070376e8; end: 107037dbb; -[SCMediaImportEditorViewController _trimmerConstraintsWithHasNotch:footerHeight:] */

/* WARNING: Possible PIC construction at 0x00010703863c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107038640) */
/* WARNING: Removing unreachable block (ram,0x000107038670) */
/* WARNING: Removing unreachable block (ram,0x00010703865c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070376e8(double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  int iVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  undefined8 uStack_270;
  double dStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  int iStack_124;
  long lStack_120;
  undefined *puStack_118;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  iStack_124 = param_4;
  _objc_opt_new();
  lVar42 = (long)_DAT_112763020;
  uVar2 = *(undefined8 *)(param_2 + lVar42);
  puStack_118 = puVar12;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = (long)_DAT_112763024;
  uVar3 = *(undefined8 *)(param_2 + lVar43);
  uStack_138 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_140 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + lVar43);
  uStack_148 = uVar2;
  uStack_f0 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + lVar42);
  uStack_150 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_158 = uVar3;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + lVar43);
  uStack_160 = uVar4;
  uStack_e8 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = (long)_DAT_112762fdc;
  uVar3 = *(undefined8 *)(param_2 + lVar44);
  uStack_168 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_170 = uVar3;
  func_0x00010bf493c0(0x4035000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + lVar43);
  uStack_178 = uVar2;
  uStack_e0 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_180 = uVar3;
  func_0x00010bf49420(0x404f000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar42 = (long)_DAT_112762ff4;
  uVar2 = *(undefined8 *)(param_2 + lVar42);
  uStack_188 = uVar3;
  uStack_d8 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + lVar43);
  uStack_190 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_198 = uVar3;
  func_0x00010bf493c0(0x4035000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + lVar42);
  uStack_1a0 = uVar2;
  uStack_d0 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + lVar43);
  uStack_1a8 = uVar4;
  lStack_120 = lVar43;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1b0 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + lVar42);
  uStack_1b8 = uVar4;
  uStack_c8 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_1c0 = uVar3;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + lVar42);
  uStack_1c8 = uVar3;
  uStack_c0 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_1d0 = uVar2;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + lVar42);
  uStack_1d8 = uVar2;
  uStack_b8 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + lVar44);
  uStack_1e0 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1e8 = uVar3;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar42 = (long)_DAT_112763010;
  uVar5 = *(undefined8 *)(param_2 + lVar42);
  uStack_1f0 = uVar4;
  uStack_b0 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_1f8 = uVar5;
  func_0x00010bf49420(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + lVar42);
  uStack_a8 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + lVar44);
  func_0x00010c08de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf493c0(0x4051c00000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + lVar42);
  uStack_a0 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + lVar44);
  lStack_130 = lVar44;
  func_0x00010c2793a0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf493c0(0xc051c00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puStack_118);
  _objc_release(puVar12);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uStack_1f8);
  _objc_release(uStack_1f0);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1e0);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1d0);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1a0);
  _objc_release(uStack_198);
  _objc_release(uStack_190);
  _objc_release(uStack_188);
  _objc_release(uStack_180);
  _objc_release(uStack_178);
  _objc_release(uStack_170);
  _objc_release(uStack_168);
  _objc_release(uStack_160);
  _objc_release(uStack_158);
  _objc_release(uStack_150);
  _objc_release(uStack_148);
  _objc_release(uStack_140);
  _objc_release(uStack_138);
  uVar2 = *(undefined8 *)(param_2 + lVar42);
  if (iStack_124 == 0) {
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + lStack_130);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf493c0(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + lStack_120);
    uStack_110 = uVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_2 + lVar42);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010bf493c0(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = uVar5;
  }
  else {
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar42 = lStack_130;
    uVar6 = *(undefined8 *)(param_2 + lStack_130);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf493c0(param_1 * -0.5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + lStack_120);
    uStack_100 = uVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_2 + lVar42);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010bf493c0(-(param_1 + 15.0));
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar5;
  }
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puStack_118;
  puVar9 = puVar13;
  func_0x00010befa160(puStack_118);
  iVar41 = (int)puVar9;
  _objc_release(puVar13);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar2);
  puVar9 = puVar11;
  func_0x00010bf51e00();
  puVar10 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    uStack_270 = 0x4044000000000000;
    puStack_250 = puVar11;
    pcStack_208 = FUN_107037dbc;
    lStack_280 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    dStack_268 = param_1;
    uStack_260 = uVar3;
    puStack_258 = puVar12;
    puStack_248 = puVar13;
    uStack_240 = uVar5;
    uStack_238 = uVar7;
    uStack_230 = uVar4;
    uStack_228 = uVar6;
    uStack_220 = uVar8;
    puStack_218 = puVar9;
    puStack_210 = &stack0xfffffffffffffff0;
    _objc_opt_new();
    lVar42 = (long)_DAT_11276301c;
    puVar12 = *(undefined **)(puVar10 + lVar42);
    if (puVar12 == (undefined *)0x0) {
      lStack_330 = (long)_DAT_112763024;
      puVar12 = *(undefined **)(puVar10 + lStack_330);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = *(undefined **)(puVar10 + _DAT_112762fdc);
      func_0x00010c08de00(puVar17);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bf493c0(0x4035000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_2b0 = puVar13;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar11);
    }
    else {
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar12;
      func_0x00010bf49420(0x4044000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = *(undefined **)(puVar10 + lVar42);
      puStack_2a8 = puVar17;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar13;
      func_0x00010bf49420(0x4044000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(puVar10 + lVar42);
      puStack_2a0 = puVar9;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(puVar10 + _DAT_112762fdc);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010bf493c0(0x402e000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(puVar10 + lVar42);
      uStack_298 = uVar3;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_330 = (long)_DAT_112763024;
      uVar8 = *(undefined8 *)(puVar10 + lStack_330);
      func_0x00010c08de00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar7;
      func_0x00010bf493c0(0xc035000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(puVar10 + lVar42);
      uStack_290 = uVar2;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(puVar10 + lStack_330);
      func_0x00010bf348e0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar14;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_288 = uVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar11);
      _objc_release(puVar16);
      _objc_release(uVar4);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar2);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    _objc_release(puVar9);
    _objc_release(puVar13);
    _objc_release(puVar17);
    _objc_release(puVar12);
    lVar42 = (long)_DAT_112763010;
    uVar18 = *(undefined8 *)(puVar10 + lVar42);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar18;
    func_0x00010bf49420(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(puVar10 + lVar42);
    uStack_310 = uVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar43 = (long)_DAT_11276300c;
    uVar20 = *(undefined8 *)(puVar10 + lVar43);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(puVar10 + lVar42);
    uStack_308 = uVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(puVar10 + lVar43);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001091fffc8();
    uVar4 = uVar21;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(puVar10 + lVar42);
    uStack_300 = uVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(puVar10 + lVar43);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar42 = (long)_DAT_112763020;
    uVar25 = *(undefined8 *)(puVar10 + lVar42);
    uStack_2f8 = uVar5;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)(puVar10 + lStack_330);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar25;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(puVar10 + lStack_330);
    uStack_2f0 = uVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *(undefined8 *)(puVar10 + lVar42);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar27;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar29 = *(undefined8 *)(puVar10 + lStack_330);
    uStack_2e8 = uVar7;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar29;
    func_0x00010bf49420(0x404c000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar42 = (long)_DAT_112762ff4;
    uVar30 = *(undefined8 *)(puVar10 + lVar42);
    uStack_2e0 = uVar8;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = *(undefined8 *)(puVar10 + lStack_330);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar30;
    func_0x00010bf493c0(0x4035000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar32 = *(undefined8 *)(puVar10 + lVar42);
    uStack_2d8 = uVar14;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = *(undefined8 *)(puVar10 + lStack_330);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar32;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = *(undefined8 *)(puVar10 + lVar42);
    uStack_2d0 = uVar15;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = uVar34;
    func_0x00010bf49420(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar36 = *(undefined8 *)(puVar10 + lVar42);
    uStack_2c8 = uVar35;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = uVar36;
    func_0x00010bf49420(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar38 = *(undefined8 *)(puVar10 + lVar42);
    uStack_2c0 = uVar37;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar42 = (long)_DAT_112762fdc;
    uVar39 = *(undefined8 *)(puVar10 + lVar42);
    func_0x00010c2793a0(uVar39);
    _objc_retainAutoreleasedReturnValue();
    uVar40 = uVar38;
    func_0x00010bf493c0(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_2b8 = uVar40;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar11);
    _objc_release(puVar12);
    _objc_release(uVar40);
    _objc_release(uVar39);
    _objc_release(uVar38);
    _objc_release(uVar37);
    _objc_release(uVar36);
    _objc_release(uVar35);
    _objc_release(uVar34);
    _objc_release(uVar15);
    _objc_release(uVar33);
    _objc_release(uVar32);
    _objc_release(uVar14);
    _objc_release(uVar31);
    _objc_release(uVar30);
    _objc_release(uVar8);
    _objc_release(uVar29);
    _objc_release(uVar7);
    _objc_release(uVar28);
    _objc_release(uVar27);
    _objc_release(uVar6);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar5);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar4);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar2);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar3);
    _objc_release(uVar18);
    uVar3 = 0xc024000000000000;
    puVar1 = &uStack_318;
    if (iVar41 == 0) {
      uVar3 = 0xc02e000000000000;
      puVar1 = &uStack_320;
    }
    uVar4 = *(undefined8 *)(puVar10 + lStack_330);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar10 + lVar42);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf493c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    *puVar1 = uVar2;
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar11);
    _objc_release(puVar12);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar9 = puVar11;
    func_0x00010bf51e00();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_280) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf21310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(puVar11 + _DAT_112762fdc),PTR_s_bringSubviewToFront__1125a5e68,
                 *(undefined8 *)(puVar11 + _DAT_112763000));
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107037dbc; end: 10703860f; -[SCMediaImportEditorViewController _trimmerDMConstraintsWithHasNotch:footerHeight:] */

/* WARNING: Possible PIC construction at 0x00010703863c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107038640) */
/* WARNING: Removing unreachable block (ram,0x000107038670) */
/* WARNING: Removing unreachable block (ram,0x00010703865c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107037dbc(long param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  long lVar39;
  long lVar40;
  undefined8 uVar41;
  long lStack_130;
  undefined8 uStack_120;
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
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar39 = (long)_DAT_11276301c;
  puVar3 = *(undefined **)(param_1 + lVar39);
  if (puVar3 == (undefined *)0x0) {
    lStack_130 = (long)_DAT_112763024;
    puVar3 = *(undefined **)(param_1 + lStack_130);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = *(undefined **)(param_1 + _DAT_112762fdc);
    func_0x00010c08de00(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf493c0(0x4035000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b0 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2);
  }
  else {
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar3;
    func_0x00010bf49420(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_1 + lVar39);
    puStack_a8 = puVar13;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar4;
    func_0x00010bf49420(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar39);
    puStack_a0 = puVar14;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112762fdc);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar41 = uVar5;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar39);
    uStack_98 = uVar41;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_130 = (long)_DAT_112763024;
    uVar8 = *(undefined8 *)(param_1 + lStack_130);
    func_0x00010c08de00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493c0(0xc035000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar39);
    uStack_90 = uVar9;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lStack_130);
    func_0x00010bf348e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar38 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar38;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2);
    _objc_release(puVar12);
    _objc_release(uVar38);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar41);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(puVar14);
  _objc_release(puVar4);
  _objc_release(puVar13);
  _objc_release(puVar3);
  lVar39 = (long)_DAT_112763010;
  uVar15 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar15;
  func_0x00010bf49420(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar39);
  uStack_110 = uVar41;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = (long)_DAT_11276300c;
  uVar17 = *(undefined8 *)(param_1 + lVar40);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar39);
  uStack_108 = uVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar40);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001091fffc8();
  uVar38 = uVar18;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar39);
  uStack_100 = uVar38;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar40);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = (long)_DAT_112763020;
  uVar22 = *(undefined8 *)(param_1 + lVar39);
  uStack_f8 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lStack_130);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar22;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lStack_130);
  uStack_f0 = uVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar24;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lStack_130);
  uStack_e8 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar26;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar39 = (long)_DAT_112762ff4;
  uVar27 = *(undefined8 *)(param_1 + lVar39);
  uStack_e0 = uVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lStack_130);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar27;
  func_0x00010bf493c0(0x4035000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar39);
  uStack_d8 = uVar10;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + lStack_130);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar29;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + lVar39);
  uStack_d0 = uVar11;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar31;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + lVar39);
  uStack_c8 = uVar32;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar33;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_1 + lVar39);
  uStack_c0 = uVar34;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = (long)_DAT_112762fdc;
  uVar36 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010c2793a0(uVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar35;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar37;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2);
  _objc_release(puVar3);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar11);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar10);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar8);
  _objc_release(uVar26);
  _objc_release(uVar7);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar6);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar5);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar38);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar9);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar41);
  _objc_release(uVar15);
  uVar41 = 0xc024000000000000;
  puVar1 = &uStack_118;
  if (param_3 == 0) {
    uVar41 = 0xc02e000000000000;
    puVar1 = &uStack_120;
  }
  uVar38 = *(undefined8 *)(param_1 + lStack_130);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar38;
  func_0x00010bf493c0(uVar41);
  _objc_retainAutoreleasedReturnValue();
  *puVar1 = uVar9;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2);
  _objc_release(puVar3);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar38);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf21310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(puVar2 + _DAT_112762fdc),PTR_s_bringSubviewToFront__1125a5e68,
               *(undefined8 *)(puVar2 + _DAT_112763000));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


