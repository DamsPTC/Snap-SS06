/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105496000; end: 1054960db; -[SCBitmoji3DBatchedSceneClientRenderer clearResources] */

void FUN_105496000(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(ulong *)(param_1 + 0x60);
  func_0x00010bfe6300();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf2dc80(*(undefined8 *)(param_1 + 0x60));
    _objc_initWeak(auStack_28,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0f98a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1054960dc; end: 105496107;  */

void FUN_1054960dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde0d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105496108; end: 1054961cb; -[SCBitmoji3DBatchedSceneClientRenderer _colorizeImage:] */

void FUN_105496108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010c23d0a0(param_3);
  func_0x00010c0469e0(puVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1054961cc;
  puStack_40 = &UNK_11086bc40;
  uStack_38 = param_3;
  _objc_retain(param_3);
  puVar2 = puVar1;
  func_0x00010bfe91c0(puVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054961cc; end: 105496273;  */

void FUN_1054961cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_4);
  func_0x00010c23ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar1);
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
  func_0x00010bfad600(0,0,param_1,param_2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bf897d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGPointZero_110347540,
             *(undefined8 *)(PTR__CGPointZero_110347540 + 8),*(undefined8 *)(param_3 + 0x20),
             PTR_s_drawAtPoint__1125bff98);
  return;
}



/* Entry: 105496274; end: 10549664f; -[SCBitmoji3DBatchedSceneClientRenderer _trimImage:] */

void FUN_105496274(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  byte *pbVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  char *pcVar12;
  undefined *puVar13;
  undefined *puVar14;
  byte *pbVar15;
  undefined *puVar16;
  char *pcVar17;
  undefined *puVar18;
  long lVar19;
  byte *pbVar20;
  long lVar21;
  float fVar22;
  
  _objc_retain(param_3);
  puVar3 = param_3;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  puVar4 = puVar3;
  _CGImageGetWidth();
  _CGImageGetHeight();
  puVar5 = puVar3;
  _CGColorSpaceCreateDeviceRGB();
  lVar21 = (long)puVar4 * 4;
  lVar6 = 0;
  _CGBitmapContextCreate(0,puVar4,puVar3,8,lVar21,puVar5,1);
  if (lVar6 != 0) {
    _CGContextDrawImage(0,0,(double)puVar4,(double)puVar3);
    lVar7 = lVar6;
    _CGBitmapContextGetData();
    puVar9 = puVar4;
    if (puVar3 <= puVar4) {
      puVar9 = puVar3;
    }
    if (puVar3 == (undefined *)0x0) {
      puVar9 = (undefined *)0xffffffffffffffff;
      puVar8 = (undefined *)0xffffffffffffffff;
LAB_105496424:
      pcVar17 = (char *)(lVar7 + (long)puVar4 * (long)puVar8 * 4 + 3);
      puVar11 = puVar4;
      pcVar12 = pcVar17;
joined_r0x00010549643c:
      do {
        if (puVar11 != (undefined *)0x0) {
          if (*pcVar17 == '\0') {
            puVar11 = puVar11 + -1;
            pcVar17 = pcVar17 + 4;
            goto joined_r0x00010549643c;
          }
          if (puVar8 != (undefined *)0x0) goto LAB_10549646c;
        }
        puVar8 = puVar8 + -1;
        pcVar17 = pcVar12 + (long)puVar4 * -4;
        puVar11 = puVar4;
        pcVar12 = pcVar17;
      } while (puVar9 <= puVar8);
    }
    else {
      puVar8 = (undefined *)0x0;
      uVar10 = (ulong)puVar9 >> 1;
      pbVar1 = (byte *)(lVar7 + 3);
      pbVar15 = pbVar1;
      do {
        if (puVar4 != (undefined *)0x0) {
          lVar19 = -uVar10;
          pbVar20 = pbVar15;
          puVar9 = puVar4;
          do {
            fVar2 = SQRT((float)(((long)puVar8 - uVar10) * ((long)puVar8 - uVar10) + lVar19 * lVar19
                                ));
            if ((float)uVar10 <= fVar2) {
              if (fVar2 <= (float)(uVar10 + 2)) {
                fVar22 = (float)NEON_ucvtf((uint)*pbVar20);
                *pbVar20 = (byte)(int)(((float)(uVar10 + 2) - fVar2) * 0.5 * fVar22);
              }
              else {
                *pbVar20 = 0;
              }
            }
            pbVar20 = pbVar20 + 4;
            lVar19 = lVar19 + 1;
            puVar9 = puVar9 + -1;
          } while (puVar9 != (undefined *)0x0);
        }
        puVar8 = puVar8 + 1;
        pbVar15 = pbVar15 + lVar21;
      } while (puVar8 != puVar3);
      puVar11 = (undefined *)0x0;
      puVar8 = puVar3 + -1;
      puVar14 = puVar4;
      pbVar15 = pbVar1;
      puVar16 = puVar8;
      do {
        while ((puVar9 = puVar16, puVar14 != (undefined *)0x0 && (puVar9 = puVar11, *pbVar1 == 0)))
        {
          puVar14 = puVar14 + -1;
          pbVar1 = pbVar1 + 4;
        }
        if (puVar9 < puVar8) break;
        puVar11 = puVar11 + 1;
        pbVar1 = pbVar15 + lVar21;
        puVar14 = puVar4;
        pbVar15 = pbVar1;
        puVar16 = puVar9;
      } while (puVar11 != puVar3);
      if (puVar9 <= puVar8) goto LAB_105496424;
    }
    puVar8 = (undefined *)0x0;
LAB_10549646c:
    puVar11 = puVar4 + -1;
    puVar14 = puVar11;
    if (puVar4 == (undefined *)0x0) {
LAB_1054964d8:
      pcVar17 = (char *)(lVar7 + (long)(puVar11 + (long)puVar4 * (long)puVar9) * 4 + 3);
      puVar16 = puVar9;
      puVar18 = puVar11;
      pcVar12 = pcVar17;
joined_r0x0001054964f4:
      do {
        if (puVar16 <= puVar8) {
          if (*pcVar17 == '\0') {
            pcVar17 = pcVar17 + lVar21;
            puVar16 = puVar16 + 1;
            goto joined_r0x0001054964f4;
          }
          if (puVar18 != (undefined *)0x0) {
            puVar11 = puVar4 + ~(ulong)puVar18;
            break;
          }
        }
        puVar18 = puVar18 + -1;
        pcVar17 = pcVar12 + -4;
        puVar16 = puVar9;
        pcVar12 = pcVar17;
      } while (puVar14 <= puVar18);
    }
    else {
      puVar16 = (undefined *)0x0;
      pcVar17 = (char *)(lVar7 + (long)puVar4 * (long)puVar9 * 4 + 3);
      puVar18 = puVar9;
      pcVar12 = pcVar17;
      puVar13 = puVar11;
      do {
        for (; (puVar14 = puVar13, puVar18 <= puVar8 && (puVar14 = puVar16, *pcVar17 == '\0'));
            pcVar17 = pcVar17 + lVar21) {
          puVar18 = puVar18 + 1;
        }
        if (puVar14 < puVar11) break;
        puVar16 = puVar16 + 1;
        pcVar17 = pcVar12 + 4;
        puVar18 = puVar9;
        pcVar12 = pcVar17;
        puVar13 = puVar14;
      } while (puVar16 != puVar4);
      if (puVar14 <= puVar11) goto LAB_1054964d8;
    }
    if (puVar11 <= puVar14) {
      puVar14 = puVar11;
    }
    puVar16 = puVar4 + (long)puVar14 * -2;
    puVar8 = puVar3 + -(long)puVar9;
    puVar11 = (undefined *)(long)(((float)puVar8 / (float)puVar3) * (float)puVar4);
    puVar18 = (undefined *)(long)(((float)puVar16 / (float)puVar4) * (float)puVar3);
    puVar4 = (undefined *)((ulong)((long)puVar4 - (long)puVar11) >> 1);
    if (puVar8 < puVar16) {
      puVar9 = puVar3 + -(long)puVar18;
      puVar4 = puVar14;
      puVar8 = puVar18;
      puVar11 = puVar16;
    }
    _CGBitmapContextCreate();
    if (lVar7 != 0) {
      lVar21 = lVar7;
      _CGBitmapContextCreateImage();
      _CGImageCreateWithImageInRect((double)puVar4,(double)puVar9,(double)puVar11,(double)puVar8);
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      _CGImageRelease(lVar21);
      _CGColorSpaceRelease(puVar5);
      _CGContextRelease(lVar6);
      _CGContextRelease(lVar7);
      goto LAB_105496628;
    }
    _CGColorSpaceRelease(puVar5);
    _CGContextRelease(lVar6);
  }
  _objc_retain(param_3);
  puVar3 = param_3;
LAB_105496628:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105496650; end: 10549682f; -[SCBitmoji3DBatchedSceneClientRenderer _getClientRenderSceneResultObservableWithRenderSurface:sceneId:avatarId:friendAvatarId:clientRenderGating:attribution:text:isStaging:engineType:scale:] */

void FUN_105496650(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar3 = PTR_PTR_1126ae6b8;
  if (param_3 == 5) {
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_105496830;
    puStack_b0 = &UNK_11088dd58;
    _objc_retain(param_4);
    uStack_a8 = param_4;
    _objc_retain(param_9);
    uStack_a0 = param_9;
    lStack_98 = param_1;
    _objc_retain(param_5);
    uStack_90 = param_5;
    _objc_retain(param_6);
    uStack_64 = param_10;
    uStack_68 = param_11;
    uStack_78 = param_12;
    uStack_88 = param_6;
    _objc_retain(param_8);
    uStack_70 = 5;
    uStack_80 = param_8;
    func_0x00010bf54280(puVar3,param_2,&puStack_c8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_a0);
    uVar2 = uStack_a8;
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = param_8;
    func_0x000109006080(param_8);
    func_0x00010c0ec120(uVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa9f00(puVar3,param_2,param_4,param_5,param_6,2,param_3,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105496830; end: 105496a2b;  */

void FUN_105496830(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c1d0640();
  func_0x00010c1d0640(puVar1);
  func_0x00010c1d0640(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bde69e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c25cde0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c1d0640(puVar1);
  puVar5 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126b9650;
  _objc_alloc(PTR_PTR_1126b9650);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010900661c(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041b00(puVar3);
  _objc_release(uVar6);
  func_0x00010c2619e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar4);
  func_0x00010c0d9840(param_2);
  func_0x00010bf436e0(param_2);
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105496a2c; end: 105496b43; -[SCBitmoji3DBatchedSceneClientRenderer _constructCustomojiAvatarAssetUrlFromSceneId:avatarId:friendAvatarId:isStaging:engineType:scale:] */

void FUN_105496a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126af5d8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff6020(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b9600;
  func_0x00010bf49820(PTR_PTR_1126b9600,param_2,puVar1,0,param_6,1,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105496b44; end: 105496baf; -[SCBitmoji3DBatchedSceneClientRenderer _logGenericErrorWithRenderSurface:error:] */

void FUN_105496b44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_4);
  func_0x00010900661c(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105499cbc(uVar1,param_4,0,param_3,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105496bb0; end: 105496c17; -[SCBitmoji3DBatchedSceneClientRenderer _logCancelWithRenderSurface:step:] */

void FUN_105496bb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_4);
  func_0x00010900661c(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105499a8c(uVar1,param_4,param_3,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105496c18; end: 105496cbb; -[SCBitmoji3DBatchedSceneClientRenderer _logRenderFinishWithRenderSurface:durationMS:isStartup:] */

void FUN_105496c18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = param_3;
  func_0x00010900661c(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105499638(uVar2,param_5,1,uVar1,param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010900661c(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105499414(uVar1,param_5,1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105496cbc; end: 105496e13; -[SCBitmoji3DBatchedSceneClientRenderer _compressImageAndLogMetricsWithProcessedImage:renderSurface:previousRequestStartTime:isFirstRender:imageType:] */

void FUN_105496cbc(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  double dVar5;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  param_1 = param_1 * 1000.0;
  func_0x00010be57aa0(param_2);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x28);
  func_0x00010c067f00();
  _CACurrentMediaTime();
  dVar5 = 1.0;
  if (iVar1 != 0) {
    dVar5 = (double)iVar1 / 100.0;
  }
  if (param_8 == 0) {
    puVar2 = PTR_PTR_1126b9658;
    func_0x00010bf92f60(dVar5,PTR_PTR_1126b9658);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110de1538;
  }
  else {
    puVar2 = param_4;
    _UIImagePNGRepresentation(param_4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc1398;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010900661c(param_5);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  FUN_10549985c(uVar3,ppuVar4,param_5,(long)(dVar5 * 1000.0 - (double)(long)(param_1 * 1000.0)));
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105496e14; end: 105497173; -[SCBitmoji3DBatchedSceneClientRenderer _processLensRenderingWithMemento:processor:configurator:renderSurface:previousRequestStartTime:isFirstRender:trimImage:error:imageType:scale:] */

void FUN_105496e14(undefined8 *****param_1,undefined8 param_2,undefined8 *****param_3,
                  undefined8 *****param_4,undefined8 param_5,undefined8 *****param_6,
                  undefined8 *****param_7,undefined8 param_8,char param_9,undefined4 param_10,
                  undefined8 *param_11,undefined8 *****param_12,long param_13)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 *****pppppuVar12;
  undefined **ppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****pppppuVar15;
  undefined1 *puVar16;
  undefined8 *****pppppuVar17;
  undefined8 *****pppppuVar18;
  undefined1 uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined8 *****pppppuVar22;
  undefined8 *****pppppuVar23;
  undefined8 ****ppppuVar24;
  undefined8 ****ppppuVar25;
  undefined1 auStack_2a0 [8];
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_250 [16];
  undefined8 *puStack_240;
  undefined8 ****ppppuStack_238;
  undefined8 ****ppppuStack_230;
  undefined8 ****ppppuStack_228;
  undefined8 ****ppppuStack_220;
  undefined8 ****ppppuStack_218;
  undefined8 ****ppppuStack_210;
  undefined8 ****ppppuStack_208;
  undefined8 ****ppppuStack_200;
  undefined8 ****ppppuStack_1f8;
  undefined1 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_198 [128];
  long lStack_118;
  undefined8 ****ppppuStack_110;
  undefined8 ****ppppuStack_108;
  undefined8 ****ppppuStack_100;
  undefined8 ****ppppuStack_f8;
  undefined8 ****ppppuStack_f0;
  long lStack_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 ****ppppuStack_c0;
  uint uStack_b4;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 ****ppppuStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  
  uVar21 = (undefined4)((ulong)param_8 >> 0x20);
  uVar20 = (uint)param_8;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_c0 = param_7;
  uStack_b4 = uVar20;
  _objc_retain(param_4);
  ppppuVar24 = param_1[1];
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f98a0(ppppuVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ae40();
  _objc_release(ppppuVar24);
  func_0x00010c180a80(param_5);
  pppppuVar8 = param_3;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  pppppuVar9 = pppppuVar8;
  func_0x00010c0f6420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c180ac0(param_5);
  _objc_release(param_5);
  _objc_release(pppppuVar9);
  _objc_release(pppppuVar8);
  if (param_13 == 0) {
    if (param_6 == (undefined8 *****)0x1) {
      ppppuVar24 = (undefined8 ****)0x4080680000000000;
      ppppuVar25 = (undefined8 ****)0x4085e00000000000;
    }
    else if (param_6 == (undefined8 *****)0x2) {
      ppppuVar24 = (undefined8 ****)0x406f400000000000;
      ppppuVar25 = ppppuVar24;
    }
    else {
      ppppuVar24 = (undefined8 ****)0x4069000000000000;
      ppppuVar25 = ppppuVar24;
    }
  }
  else {
    lVar1 = 8;
    if (param_13 != 2) {
      lVar1 = 0;
    }
    ppppuVar24 = (undefined8 ****)0x4068e00000000000;
    ppppuVar25 = (undefined8 ****)0x4068e00000000000;
    if (param_13 != 3) {
      ppppuVar24 = *(undefined8 *****)(&UNK_10ddb00f0 + lVar1);
      ppppuVar25 = *(undefined8 *****)(&UNK_10ddb00f0 + lVar1);
    }
  }
  pppppuVar23 = param_1 + 9;
  ppuVar13 = (undefined **)*pppppuVar23;
  if ((undefined8 *****)ppuVar13 == (undefined8 *****)0x0) {
LAB_105496f68:
    uVar10 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    ppuVar13 = (undefined **)(long)(double)ppppuVar25;
    pppppuVar15 = (undefined8 *****)0x34323066;
    pppppuVar17 = (undefined8 *****)0x0;
    pppppuVar18 = pppppuVar23;
    _CVPixelBufferCreate(uVar10,(long)(double)ppppuVar24);
    puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((int)uVar10 == 0) {
      param_1[10] = ppppuVar24;
      param_1[0xb] = ppppuVar25;
      ppuVar13 = (undefined **)param_1[9];
      goto LAB_105497030;
    }
    if (param_11 == (undefined8 *)0x0) {
      pppppuVar22 = (undefined8 *****)0x0;
      goto LAB_105497128;
    }
    uStack_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110de1558;
    pppppuVar23 = (undefined8 *****)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = &PTR____CFConstantStringClassReference_110de1518;
    pppppuVar15 = (undefined8 *****)0x0;
    pppppuVar17 = pppppuVar23;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    pppppuVar22 = (undefined8 *****)0x0;
    *param_11 = puVar11;
  }
  else {
    if (((double)param_1[10] != (double)ppppuVar24) || ((double)param_1[0xb] != (double)ppppuVar25))
    {
      _CVPixelBufferRelease(ppuVar13);
      goto LAB_105496f68;
    }
LAB_105497030:
    ppppuStack_90 = (undefined8 *****)0x0;
    uStack_a8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    pppuStack_b0 = *(undefined8 ****)PTR__kCMTimeZero_110348670;
    uStack_a0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    pppppuVar18 = (undefined8 *****)&pppuStack_b0;
    param_7 = &ppppuStack_90;
    pppppuVar15 = (undefined8 *****)0x0;
    pppppuVar17 = (undefined8 *****)0x9;
    pppppuVar22 = param_4;
    func_0x00010c115120();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar9 = (undefined8 *****)ppppuStack_90;
    _objc_retain(ppppuStack_90);
    pppppuVar23 = pppppuVar22;
    if (pppppuVar9 == (undefined8 *****)0x0) {
      if (param_9 != '\0') {
        pppppuVar23 = param_1;
        func_0x00010bed0060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pppppuVar22);
        pppppuVar8 = pppppuVar23;
      }
      pppppuVar18 = (undefined8 *****)(ulong)uStack_b4;
      pppppuVar22 = param_1;
      ppuVar13 = (undefined **)pppppuVar23;
      pppppuVar15 = param_6;
      pppppuVar17 = (undefined8 *****)ppppuStack_c0;
      param_7 = param_12;
      func_0x00010bde4200();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_11 == (undefined8 *)0x0) {
      pppppuVar22 = (undefined8 *****)0x0;
    }
    else {
      _objc_retainAutorelease(pppppuVar9);
      pppppuVar22 = (undefined8 *****)0x0;
      *param_11 = pppppuVar9;
    }
    _objc_release(pppppuVar9);
  }
  _objc_release(pppppuVar23);
LAB_105497128:
  pppppuVar12 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppppuVar22);
    return;
  }
  ___stack_chk_fail();
  ppppuStack_f8 = param_12;
  lStack_e8 = param_13;
  pcStack_c8 = FUN_105497174;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_110 = pppppuVar9;
  ppppuStack_108 = pppppuVar23;
  ppppuStack_100 = param_1;
  ppppuStack_f0 = param_6;
  ppppuStack_e0 = pppppuVar22;
  ppppuStack_d8 = param_4;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar13);
  _objc_retain(pppppuVar15);
  _objc_retain(pppppuVar17);
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  puStack_1d0 = (undefined8 *)0x0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  puVar16 = auStack_198;
  uVar10 = 0x10;
  pppppuVar22 = pppppuVar15;
  func_0x00010bf52a60();
  uVar19 = SUB81(param_7,0);
  if (pppppuVar22 != (undefined8 *****)0x0) {
    param_1 = (undefined8 *****)*puStack_1d0;
    do {
      pppppuVar23 = (undefined8 *****)0x0;
      do {
        if ((undefined8 *****)*puStack_1d0 != param_1) {
          _objc_enumerationMutation(pppppuVar15);
        }
        func_0x00010bf762c0(pppppuVar17);
        pppppuVar23 = (undefined8 *****)((long)pppppuVar23 + 1);
      } while (pppppuVar22 != pppppuVar23);
      puVar16 = auStack_198;
      uVar10 = 0x10;
      pppppuVar22 = pppppuVar15;
      func_0x00010bf52a60();
      uVar19 = SUB81(param_7,0);
      param_12 = (undefined8 *****)0x0;
    } while (pppppuVar22 != (undefined8 *****)0x0);
  }
  pppppuVar14 = pppppuVar17;
  func_0x00010be096a0(pppppuVar12);
  _objc_release(pppppuVar17);
  _objc_release(pppppuVar15);
  pppppuVar22 = (undefined8 *****)ppuVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = uStack_1c0;
  uVar6 = uStack_1c8;
  puVar5 = puStack_1d0;
  uVar4 = uStack_1d8;
  uVar3 = uStack_1e0;
  puStack_240 = param_11;
  pcStack_1e8 = FUN_1054972ac;
  uVar2 = CONCAT44(uVar21,uVar20);
  ppppuStack_238 = pppppuVar8;
  ppppuStack_230 = pppppuVar9;
  ppppuStack_228 = pppppuVar23;
  ppppuStack_220 = param_1;
  ppppuStack_218 = param_12;
  ppppuStack_210 = pppppuVar12;
  ppppuStack_208 = pppppuVar17;
  ppppuStack_200 = pppppuVar15;
  ppppuStack_1f8 = (undefined8 ****)ppuVar13;
  ppuStack_1f0 = &puStack_d0;
  _objc_retain(pppppuVar14);
  _objc_retain(puVar16);
  _objc_retain(uVar10);
  _objc_retain(pppppuVar18);
  _objc_retain(uVar2);
  _objc_retain(uVar7);
  ppppuVar24 = pppppuVar22[1];
  func_0x00010c0f98a0(ppppuVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ae40();
  _objc_release(ppppuVar24);
  pppppuVar9 = pppppuVar18;
  func_0x00010c0d3c80();
  _objc_initWeak(auStack_250,pppppuVar22);
  puStack_268 = &uStack_270;
  uStack_270 = 0;
  uStack_260 = 0x2020000000;
  uStack_258 = 0;
  _objc_copyWeak(auStack_2a0,auStack_250);
  _objc_retain(pppppuVar9);
  uStack_298 = uVar3;
  _objc_retain(pppppuVar18);
  _objc_retain(uVar2);
  _objc_retain(uVar7);
  uStack_290 = uVar4;
  _objc_retain(pppppuVar14);
  _objc_retain(uVar10);
  puStack_288 = puVar5;
  uStack_280 = uVar6;
  uStack_278 = uVar19;
  func_0x00010bf97ac0(puVar16);
  _objc_release(uVar10);
  _objc_release(pppppuVar14);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(pppppuVar18);
  _objc_release(pppppuVar9);
  _objc_destroyWeak(auStack_2a0);
  __Block_object_dispose(&uStack_270,8);
  _objc_destroyWeak(auStack_250);
  _objc_release(pppppuVar9);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(pppppuVar18);
  _objc_release(uVar10);
  _objc_release(puVar16);
  _objc_release(pppppuVar14);
  return;
}



/* Entry: 105497174; end: 1054972ab; -[SCBitmoji3DBatchedSceneClientRenderer _renderingFailedWithError:sceneIds:callback:] */

void FUN_105497174(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long lVar8;
  undefined1 auStack_1e0 [8];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [16];
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar5 = auStack_d8;
  uVar6 = 0x10;
  lVar2 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar7 = (undefined1)param_7;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      func_0x00010bf762c0(param_5);
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    puVar5 = auStack_d8;
    uVar6 = 0x10;
    lVar2 = param_4;
    func_0x00010bf52a60();
    uVar7 = (undefined1)param_7;
  }
  uVar4 = param_5;
  func_0x00010be096a0(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  _objc_retain(puVar5);
  _objc_retain(uVar6);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(0);
  uVar3 = *(undefined8 *)(param_3 + 8);
  func_0x00010c0f98a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ae40();
  _objc_release(uVar3);
  uVar3 = param_6;
  func_0x00010c0d3c80();
  _objc_initWeak(auStack_190,param_3);
  puStack_1a8 = &uStack_1b0;
  uStack_1b0 = 0;
  uStack_1a0 = 0x2020000000;
  uStack_198 = 0;
  _objc_copyWeak(auStack_1e0,auStack_190);
  _objc_retain(uVar3);
  uStack_1d8 = 0;
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(0);
  uStack_1d0 = 0;
  _objc_retain(uVar4);
  _objc_retain(uVar6);
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = uVar7;
  func_0x00010bf97ac0(puVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(0);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_1e0);
  __Block_object_dispose(&uStack_1b0,8);
  _objc_destroyWeak(auStack_190);
  _objc_release(uVar3);
  _objc_release(0);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 1054972ac; end: 1054974fb; -[SCBitmoji3DBatchedSceneClientRenderer _processLensActiviationWithProcessor:assetsWarmEnumerator:configurator:sceneIds:trimImage:callback:renderSurface:initialRequestTime:imageType:scale:clientRenderGating:] */

void FUN_1054972ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_13);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f98a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ae40();
  _objc_release(uVar1);
  uVar1 = param_6;
  func_0x00010c0d3c80();
  _objc_initWeak(auStack_70,param_1);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  _objc_copyWeak(auStack_c0,auStack_70);
  _objc_retain(uVar1);
  uStack_b8 = param_9;
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_13);
  uStack_b0 = param_10;
  _objc_retain(param_3);
  _objc_retain(param_5);
  uStack_a8 = param_11;
  uStack_a0 = param_12;
  uStack_98 = param_7;
  func_0x00010bf97ac0(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_13);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_c0);
  __Block_object_dispose(&uStack_90,8);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar1);
  _objc_release(param_13);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054974fc; end: 10549789b;  */

void FUN_1054974fc(double param_1,long param_2,undefined8 param_3,long param_4,undefined1 *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_2 + 0x58;
  _objc_loadWeakRetained();
  if (lVar2 == 0) goto LAB_1054975dc;
  lVar3 = *(long *)(param_2 + 0x20);
  func_0x00010bf529e0();
  if ((param_5 == (undefined1 *)0x0) || (lVar3 != 0)) {
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = param_3;
    func_0x00010bf4ab60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf4ae40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar9);
    _objc_release(uVar5);
    _objc_release(uVar4);
    lVar3 = *(long *)(param_2 + 0x20);
    func_0x00010bf529e0();
    if (param_4 == 0) {
      iVar1 = (int)*(undefined8 *)(param_2 + 0x30);
      func_0x00010bf2f680();
      if (iVar1 != 0) {
        func_0x00010be51560(lVar2);
        if (param_5 != (undefined1 *)0x0) {
          *param_5 = 1;
        }
        func_0x00010be096a0(lVar2);
        goto LAB_1054975dc;
      }
      lVar6 = lVar2;
      func_0x00010beb2ba0();
      lVar7 = lVar2;
      if ((int)lVar6 == 0) {
        puStack_68 = (undefined *)0x0;
        func_0x00010be81640(lVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(0);
        lVar6 = lVar2;
        func_0x00010beb2bc0();
        if ((int)lVar6 == 0) {
          lVar6 = lVar2;
          func_0x00010be3e200();
          if ((int)lVar6 != 0) {
            puStack_68 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(0);
          }
          if (puStack_68 == (undefined *)0x0) {
            uVar9 = *(undefined8 *)(param_2 + 0x30);
            uVar4 = param_3;
            func_0x00010bf4ab60(param_3);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010bf4ae40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf79c20(uVar9);
            _objc_release(uVar5);
            _objc_release(uVar4);
            _CACurrentMediaTime();
            *(long *)(*(long *)(*(long *)(param_2 + 0x50) + 8) + 0x18) = (long)(param_1 * 1000.0);
            if (lVar3 == 0) {
              func_0x00010be096a0(lVar2);
            }
            goto LAB_10549780c;
          }
          func_0x00010be53f80(lVar2);
          if (param_5 != (undefined1 *)0x0) {
            *param_5 = 1;
          }
          func_0x00010be8e780(lVar2);
        }
        else {
          func_0x00010be51560(lVar2);
          if (param_5 != (undefined1 *)0x0) {
            *param_5 = 1;
          }
          puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be8e780(lVar2);
          _objc_release(puVar8);
        }
        _objc_release(puStack_68);
      }
      else {
        func_0x00010be51560(lVar2);
        if (param_5 != (undefined1 *)0x0) {
          *param_5 = 1;
        }
        func_0x00010bddb0c0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be8e780(lVar2);
      }
LAB_10549780c:
      _objc_release(lVar7);
      goto LAB_1054975dc;
    }
    func_0x00010be53f80(lVar2);
    func_0x00010be8e780(lVar2);
    if (param_5 == (undefined1 *)0x0) goto LAB_1054975dc;
  }
  *param_5 = 1;
LAB_1054975dc:
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10549789c; end: 105497a73; -[SCBitmoji3DBatchedSceneClientRenderer _enqueueRenderingWithMemento:assetsWarmEnumerator:callback:sceneIds:trimImage:renderSurface:initialRequestTime:imageType:scale:clientRenderGating:] */

void FUN_10549789c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_12);
  _objc_initWeak(auStack_70,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f98a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a0,auStack_70);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_90 = param_9;
  uStack_88 = param_10;
  uStack_80 = param_11;
  uStack_98 = param_8;
  uStack_78 = param_7;
  _objc_retain(param_12);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_12);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_12);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105497a74; end: 105497acf;  */

void FUN_105497a74(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be78fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105497ad0; end: 105497d6b; -[SCBitmoji3DBatchedSceneClientRenderer _prepareRenderingWithMemento:assetsWarmEnumerator:callback:sceneIds:trimImage:renderSurface:initialRequestTime:imageType:scale:clientRenderGating:] */

void FUN_105497ad0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_12);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f98a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ae40();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  if (param_11 == 0) {
    if (param_8 == 1) {
      uStack_78 = 0x4080680000000000;
      uStack_70 = 0x4085e00000000000;
    }
    else if (param_8 == 2) {
      uStack_78 = 0x406f400000000000;
      uStack_70 = 0x406f400000000000;
    }
    else {
      uStack_78 = 0x4069000000000000;
      uStack_70 = 0x4069000000000000;
    }
  }
  else {
    lVar1 = 8;
    if (param_11 != 2) {
      lVar1 = 0;
    }
    uStack_78 = 0x4068e00000000000;
    uStack_70 = 0x4068e00000000000;
    if (param_11 != 3) {
      uStack_78 = *(undefined8 *)(&UNK_10ddb00f0 + lVar1);
      uStack_70 = *(undefined8 *)(&UNK_10ddb00f0 + lVar1);
    }
  }
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar3);
  _objc_initWeak(auStack_80,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c109de0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_80);
  lStack_a8 = param_8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_12);
  _objc_retain(param_4);
  uStack_a0 = param_9;
  uStack_98 = param_10;
  lStack_90 = param_11;
  uStack_88 = param_7;
  func_0x00010c297260(uVar2);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_12);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_12);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105497d6c; end: 105497f5b;  */

void FUN_105497d6c(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010bf2f680();
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained();
    if (iVar1 == 0) {
      lVar3 = lVar2;
      func_0x00010beb2ba0();
      _objc_release(lVar2);
      lVar2 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar2);
      if ((int)lVar3 == 0) {
        lVar3 = param_2;
        func_0x00010c115b00(param_2);
        _objc_retainAutoreleasedReturnValue();
        param_1 = param_2;
        func_0x00010bf46a80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be81620(lVar2);
      }
      else {
        func_0x00010be51560(lVar2);
        _objc_release(lVar2);
        param_1 = param_1 + 0x40;
        _objc_loadWeakRetained(param_1);
        _objc_retain();
        lVar3 = param_1;
        func_0x00010bddb0c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be8e780(param_1);
        lVar2 = param_1;
      }
      _objc_release(param_1);
      _objc_release(lVar3);
    }
    else {
      func_0x00010be51560(lVar2);
      _objc_release(lVar2);
      lVar2 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar2);
      func_0x00010be096a0();
    }
  }
  else {
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be53f80();
    _objc_release(lVar2);
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be8e780();
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105497f5c; end: 105497f73; -[SCBitmoji3DBatchedSceneClientRenderer _shouldColorizeClientRenders] */

void FUN_105497f5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de12f8,0,0);
  return;
}



/* Entry: 105497f74; end: 10549803b; -[SCBitmoji3DBatchedSceneClientRenderer _end:] */

void FUN_105497f74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf940c0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10549803c; end: 105498067;  */

void FUN_10549803c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde0d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105498068; end: 10549806f; -[SCBitmoji3DBatchedSceneClientRenderer _isAppBackgrounded] */

void FUN_105498068(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_appBackgrounded_11259ed20);
  return;
}



/* Entry: 105498070; end: 1054980a7; -[SCBitmoji3DBatchedSceneClientRenderer _shouldCancelForAppBackground] */

void FUN_105498070(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x60);
  func_0x00010bfe6300();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be3e210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isAppBackgrounded_11256d220);
    return;
  }
  return;
}



/* Entry: 1054980a8; end: 10549810f; -[SCBitmoji3DBatchedSceneClientRenderer _shouldCancelCallback:clientRenderGating:] */

undefined8 FUN_1054980a8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010beb2bc0();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x60);
    func_0x00010bfe6300();
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = param_4;
      func_0x00010c081e00(param_4);
    }
  }
  else {
    uVar3 = 1;
  }
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 105498110; end: 105498157; -[SCBitmoji3DBatchedSceneClientRenderer _cancellationErrorForGating:] */

void FUN_105498110(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x00010c081e00();
  uVar1 = 2;
  if (param_3 != 0) {
    uVar1 = 3;
  }
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110de1518,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105498158; end: 10549818f; -[SCBitmoji3DBatchedSceneClientRenderer _clearResources] */

void FUN_105498158(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    _CVPixelBufferRelease();
    *(long *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 105498190; end: 105498213; -[SCBitmoji3DBatchedSceneClientRenderer .cxx_destruct] */

void FUN_105498190(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 105498214; end: 105498277; -[SCBitmoji3DBatchedSceneClientURIMetricsHandler init] */

undefined1 * FUN_105498214(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e86f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b9640;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105498278; end: 105498b5b; -[SCBitmoji3DBatchedSceneClientURIMetricsHandler handleWithRequest:completion:] */

void FUN_105498278(long param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  ulong uVar17;
  undefined **ppuStack_218;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  ppuVar2 = param_3;
  func_0x00010bf1e9c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1900();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(ppuVar2);
  ppuVar2 = (undefined **)PTR_PTR_1126b1ce0;
  _objc_alloc();
  ppuVar4 = param_3;
  func_0x00010c28f280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059e80();
  _objc_release(ppuVar4);
  ppuVar4 = param_3;
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010bfdcf80();
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  ppuStack_218 = ppuVar3;
  ppuVar4 = ppuVar3;
  if ((int)ppuVar6 == 0) {
    ppuVar5 = param_3;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar6;
    func_0x00010bfdcf80();
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    if ((int)ppuVar11 == 0) {
      ppuVar4 = (undefined **)PTR_PTR_1126b1ce0;
      _objc_alloc(PTR_PTR_1126b1ce0);
      ppuVar5 = param_3;
      func_0x00010c28f280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c059e80(ppuVar4);
      ppuStack_218 = ppuVar2;
      goto LAB_105498ad0;
    }
    ppuVar6 = ppuVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    ppuVar11 = ppuVar6;
    _objc_opt_isKindOfClass(ppuVar6,puVar12);
    ppuVar5 = ppuVar6;
    if (((ulong)ppuVar11 & 1) == 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110db8b78;
    }
    _objc_retain(ppuVar5);
    _objc_release(ppuVar6);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar6 = ppuStack_218;
    _objc_opt_isKindOfClass(ppuStack_218,puVar12);
    if (((ulong)ppuVar6 & 1) != 0) {
      uVar15 = *(undefined8 *)(param_1 + 8);
      ppuVar6 = ppuStack_218;
      func_0x00010c0b4ca0(ppuStack_218);
      FUN_10549ad34(uVar15,1,ppuVar5,ppuVar6);
    }
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar6 = ppuVar4;
    _objc_opt_isKindOfClass(ppuVar4,puVar12);
    if (((ulong)ppuVar6 & 1) != 0) {
      uVar15 = *(undefined8 *)(param_1 + 8);
      ppuVar6 = ppuVar4;
      func_0x00010c0b4ca0(ppuVar4);
      FUN_10549af20(uVar15,1,ppuVar5,ppuVar6);
    }
    ppuVar6 = ppuVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar11 = ppuVar6;
    _objc_opt_isKindOfClass(ppuVar6,puVar12);
    if (((ulong)ppuVar11 & 1) != 0) {
      uVar15 = *(undefined8 *)(param_1 + 8);
      ppuVar11 = ppuVar6;
      func_0x00010c0b4ca0(ppuVar6);
      FUN_10549b10c(uVar15,1,ppuVar5,ppuVar11);
    }
    ppuVar11 = ppuVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar14 = ppuVar11;
    _objc_opt_isKindOfClass(ppuVar11,puVar12);
    if (((ulong)ppuVar14 & 1) != 0) {
      uVar15 = *(undefined8 *)(param_1 + 8);
      ppuVar14 = ppuVar11;
      func_0x00010c0b4ca0(ppuVar11);
      FUN_10549b2f8(uVar15,1,ppuVar5,ppuVar14);
    }
    ppuVar14 = ppuVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar16 = ppuVar14;
    _objc_opt_isKindOfClass(ppuVar14,puVar12);
    if (((ulong)ppuVar16 & 1) != 0) {
      uVar15 = *(undefined8 *)(param_1 + 8);
      ppuVar16 = ppuVar14;
      func_0x00010c0b4ca0(ppuVar14);
      FUN_10549ab48(uVar15,1,ppuVar5,ppuVar16);
    }
    _objc_release(ppuVar14);
    _objc_release(ppuVar11);
    _objc_release(ppuVar6);
  }
  else {
    ppuVar6 = ppuVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    ppuVar11 = ppuVar6;
    _objc_opt_isKindOfClass(ppuVar6,puVar12);
    ppuVar5 = ppuVar6;
    if (((ulong)ppuVar11 & 1) == 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110db8b78;
    }
    _objc_retain(ppuVar5);
    _objc_release(ppuVar6);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar6 = ppuStack_218;
    _objc_opt_isKindOfClass(ppuStack_218,puVar12);
    if (((ulong)ppuVar6 & 1) != 0) {
      uVar15 = *(undefined8 *)(param_1 + 8);
      ppuVar6 = ppuStack_218;
      func_0x00010c0b4ca0(ppuStack_218);
      FUN_105499f34(uVar15,1,ppuVar5,ppuVar6);
    }
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar6 = ppuVar4;
    _objc_opt_isKindOfClass(ppuVar4,puVar12);
    if (((ulong)ppuVar6 & 1) != 0) {
      uVar15 = *(undefined8 *)(param_1 + 8);
      ppuVar6 = ppuVar4;
      func_0x00010c0b4ca0(ppuVar4);
      FUN_10549a120(uVar15,1,ppuVar5,ppuVar6);
    }
    ppuVar6 = ppuVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    ppuVar11 = ppuVar6;
    _objc_opt_isKindOfClass(ppuVar6,puVar12);
    if (((ulong)ppuVar11 & 1) != 0) {
      _objc_retain(ppuVar6);
      ppuVar11 = ppuVar6;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (ppuVar11 != (undefined **)0x0) {
        ppuVar14 = (undefined **)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(ppuVar6);
          }
          uVar17 = *(ulong *)((long)ppuVar14 * 8);
          puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
          uVar7 = uVar17;
          _objc_opt_isKindOfClass(uVar17,puVar12);
          if ((uVar7 & 1) != 0) {
            uVar15 = *(undefined8 *)(param_1 + 8);
            func_0x00010c0b4ca0(uVar17);
            FUN_10549a30c(uVar15,1,ppuVar5,uVar17);
          }
          ppuVar14 = (undefined **)((long)ppuVar14 + 1);
        } while (ppuVar11 != ppuVar14);
        ppuVar11 = ppuVar6;
        func_0x00010bf52a60();
      }
      _objc_release(ppuVar6);
    }
    ppuVar11 = ppuVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    ppuVar14 = ppuVar11;
    _objc_opt_isKindOfClass(ppuVar11,puVar12);
    if (((ulong)ppuVar14 & 1) != 0) {
      _objc_retain(ppuVar11);
      ppuVar14 = ppuVar11;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (ppuVar14 != (undefined **)0x0) {
        ppuVar16 = (undefined **)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(ppuVar11);
          }
          uVar17 = *(ulong *)((long)ppuVar16 * 8);
          puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
          uVar7 = uVar17;
          _objc_opt_isKindOfClass(uVar17,puVar12);
          if ((uVar7 & 1) != 0) {
            uVar15 = *(undefined8 *)(param_1 + 8);
            func_0x00010c0b4ca0(uVar17);
            FUN_10549a4f8(uVar15,1,ppuVar5,uVar17);
          }
          ppuVar16 = (undefined **)((long)ppuVar16 + 1);
        } while (ppuVar14 != ppuVar16);
        ppuVar14 = ppuVar11;
        func_0x00010bf52a60();
      }
      _objc_release(ppuVar11);
    }
    ppuVar14 = ppuVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar16 = ppuVar14;
    _objc_opt_isKindOfClass(ppuVar14,puVar12);
    if (((ulong)ppuVar16 & 1) != 0) {
      uVar15 = *(undefined8 *)(param_1 + 8);
      ppuVar16 = ppuVar14;
      func_0x00010c0b4ca0(ppuVar14);
      FUN_10549a6e4(uVar15,1,ppuVar5,ppuVar16);
    }
    ppuVar16 = ppuVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar9 = ppuVar16;
    _objc_opt_isKindOfClass(ppuVar16,puVar12);
    if (((ulong)ppuVar9 & 1) != 0) {
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      ppuVar9 = ppuVar8;
      _objc_opt_isKindOfClass(ppuVar8,puVar12);
      if (((ulong)ppuVar9 & 1) != 0) {
        uVar15 = *(undefined8 *)(param_1 + 8);
        ppuVar9 = ppuVar8;
        func_0x00010c25d700(ppuVar8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar16;
        func_0x00010c0b4ca0(ppuVar16);
        FUN_10549a8d0(uVar15,ppuVar9,1,ppuVar5,ppuVar10);
        _objc_release(ppuVar9);
      }
    }
    _objc_release(ppuVar8);
    _objc_release(ppuVar16);
    _objc_release(ppuVar14);
    _objc_release(ppuVar11);
    _objc_release(ppuVar6);
  }
  _objc_release(ppuVar4);
  ppuVar4 = ppuVar2;
LAB_105498ad0:
  _objc_release(ppuStack_218);
  _objc_release(ppuVar5);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,ppuVar4);
  }
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(0);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 105498b5c; end: 105498b5f; -[SCBitmoji3DBatchedSceneClientURIMetricsHandler reset] */

void FUN_105498b5c(void)

{
  return;
}



/* Entry: 105498b60; end: 105498b6b; -[SCBitmoji3DBatchedSceneClientURIMetricsHandler .cxx_destruct] */

void FUN_105498b60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105498b6c; end: 105498dcb; -[SCBitmojiRenderRequestLifecycleManager initWithConfigProvider:cleanupTargetQueue:applicationLifecycleEvents:] */

undefined8 *
FUN_105498b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = PTR_PTR_1126e8700;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    *(undefined4 *)(puVar1 + 2) = 0;
    uVar4 = param_3;
    func_0x00010c067f00();
    *(int *)((long)puVar1 + 0x14) = (int)uVar4;
    _objc_retain(param_4);
    uVar4 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar4);
    _objc_initWeak(auStack_88,puVar1);
    uVar4 = param_5;
    func_0x00010bf75dc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105498dcc;
    puStack_98 = &UNK_110846510;
    _objc_copyWeak(auStack_90,auStack_88);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar4 = param_5;
    func_0x00010c2a6420(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_88);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105498dcc; end: 105498e27;  */

void FUN_105498dcc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcd7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105498e28; end: 105498e37; -[SCBitmojiRenderRequestLifecycleManager idleCleanupEnabled] */

bool FUN_105498e28(long param_1)

{
  return 0 < *(int *)(param_1 + 0x14);
}



/* Entry: 105498e38; end: 105498ec3; -[SCBitmojiRenderRequestLifecycleManager start:] */

void FUN_105498e38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,param_3);
  lVar1 = param_1;
  func_0x00010bfe6300();
  if ((int)lVar1 != 0) {
    uVar2 = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      _dispatch_block_cancel();
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar2);
  }
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105498ec4; end: 105498fa7; -[SCBitmojiRenderRequestLifecycleManager end:cleanupBlock:] */

void FUN_105498ec4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = param_1;
  func_0x00010bfe6300();
  uVar2 = *(undefined8 *)(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    func_0x00010c12d360(uVar2,param_2,param_3);
  }
  else {
    func_0x00010bf4b900(uVar2,param_2,param_3);
    if ((int)uVar2 != 0) {
      func_0x00010c12d360(*(undefined8 *)(param_1 + 8),param_2,param_3);
      lVar3 = *(long *)(param_1 + 8);
      func_0x00010bf529e0();
      if (lVar3 == 0) {
        uVar1 = param_1;
        func_0x00010bf04de0();
        dVar4 = 0.0;
        if ((uVar1 & 1) == 0) {
          dVar4 = (double)*(int *)(param_1 + 0x14) / 1000.0;
        }
        func_0x00010be9ae80(dVar4,param_1,param_2,param_4);
      }
    }
  }
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105498fa8; end: 1054990d3; -[SCBitmojiRenderRequestLifecycleManager cancelAll] */

void FUN_105498fa8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  _os_unfair_lock_lock(param_1 + 0x10);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar2 = *(long *)(param_1 + 8);
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c178260(*(undefined8 *)(lStack_108 + lVar4 * 8),param_2,1);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  param_1 = param_1 + 0x10;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010c168820();
  lVar1 = param_1;
  func_0x00010bfe6300();
  if ((int)lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x10);
    if (*(long *)(param_1 + 0x28) != 0) {
      func_0x00010be9ae80(0,param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
    return;
  }
  return;
}



/* Entry: 1054990d4; end: 105499143; -[SCBitmojiRenderRequestLifecycleManager _applicationDidEnterBackground] */

void FUN_1054990d4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c168820(param_1,param_2,1);
  lVar1 = param_1;
  func_0x00010bfe6300();
  if ((int)lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x10);
    if (*(long *)(param_1 + 0x28) != 0) {
      func_0x00010be9ae80(0,param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
    return;
  }
  return;
}



/* Entry: 105499144; end: 105499287; -[SCBitmojiRenderRequestLifecycleManager _scheduleCleanup:afterDelay:] */

void FUN_105499144(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _os_unfair_lock_assert_owner(param_2 + 0x10);
  _objc_initWeak(auStack_48,param_2);
  if (*(long *)(param_2 + 0x20) != 0) {
    _dispatch_block_cancel();
  }
  uVar1 = param_4;
  func_0x00010bf51e00();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105499288;
  puStack_60 = &UNK_110848708;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar1);
  uVar2 = 0;
  uStack_58 = uVar1;
  func_0x0001008553e8(0,&puStack_78);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  _objc_release(uVar3);
  uVar2 = uVar1;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = uVar2;
  _objc_release(uVar3);
  func_0x00010c0f7fe0(param_1,*(undefined8 *)(param_2 + 0x18));
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 105499288; end: 1054992bb;  */

void FUN_105499288(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be980c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054992bc; end: 105499337; -[SCBitmojiRenderRequestLifecycleManager _runScheduledCleanup:] */

void FUN_1054992bc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  if (*(long *)(param_1 + 0x28) == param_3) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar1);
    _os_unfair_lock_unlock(param_1 + 0x10);
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105499338; end: 105499343; -[SCBitmojiRenderRequestLifecycleManager appBackgrounded] */

byte FUN_105499338(long param_1)

{
  return *(byte *)(param_1 + 0x38) & 1;
}



/* Entry: 105499344; end: 10549934b; -[SCBitmojiRenderRequestLifecycleManager setAppBackgrounded:] */

void FUN_105499344(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10549934c; end: 10549939f; -[SCBitmojiRenderRequestLifecycleManager .cxx_destruct] */

void FUN_10549934c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054993a0; end: 105499413; -[SCGrapheneBitmojiClientRenderMetric2 init] */

undefined1 * FUN_1054993a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8708;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105499414; end: 105499637;  */

/* WARNING: Removing unreachable block (ram,0x000105499f04) */
/* WARNING: Removing unreachable block (ram,0x000105499610) */
/* WARNING: Removing unreachable block (ram,0x000105499834) */
/* WARNING: Removing unreachable block (ram,0x00010549ab18) */
/* WARNING: Removing unreachable block (ram,0x00010549b8e0) */

void FUN_105499414(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  int iVar21;
  undefined8 *puVar22;
  long lVar23;
  long *plVar24;
  undefined *puVar25;
  undefined8 *unaff_x24;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 *puStack_a60;
  undefined8 auStack_a58 [2];
  char cStack_a41;
  undefined8 auStack_a40 [2];
  char cStack_a29;
  long lStack_a28;
  undefined8 *puStack_a20;
  undefined8 *puStack_a18;
  undefined8 *puStack_a10;
  undefined8 *puStack_a08;
  undefined8 *puStack_a00;
  undefined8 *puStack_9f8;
  undefined8 ***pppuStack_9f0;
  code *pcStack_9e8;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 *puStack_9c0;
  undefined8 auStack_9b8 [2];
  char cStack_9a1;
  undefined8 auStack_9a0 [2];
  char cStack_989;
  long lStack_988;
  undefined8 *puStack_980;
  undefined8 *puStack_978;
  undefined8 *puStack_970;
  undefined8 *puStack_968;
  undefined8 *puStack_960;
  undefined8 *puStack_958;
  undefined8 ***pppuStack_950;
  code *pcStack_948;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 *puStack_920;
  undefined8 auStack_918 [2];
  char cStack_901;
  undefined8 auStack_900 [2];
  char cStack_8e9;
  long lStack_8e8;
  undefined8 *puStack_8e0;
  undefined8 *puStack_8d8;
  undefined8 *puStack_8d0;
  undefined8 *puStack_8c8;
  undefined8 *puStack_8c0;
  undefined8 *puStack_8b8;
  undefined8 ***pppuStack_8b0;
  code *pcStack_8a8;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 *puStack_880;
  undefined8 auStack_878 [2];
  char cStack_861;
  undefined8 auStack_860 [2];
  char cStack_849;
  long lStack_848;
  undefined8 *puStack_840;
  undefined8 *puStack_838;
  undefined8 *puStack_830;
  undefined8 *puStack_828;
  undefined8 *puStack_820;
  undefined8 *puStack_818;
  undefined8 ***pppuStack_810;
  code *pcStack_808;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 *puStack_7e0;
  undefined8 auStack_7d8 [2];
  char cStack_7c1;
  undefined8 auStack_7c0 [2];
  char cStack_7a9;
  long lStack_7a8;
  undefined8 *puStack_7a0;
  undefined8 *puStack_798;
  undefined8 *puStack_790;
  undefined8 *puStack_788;
  undefined8 *puStack_780;
  undefined8 *puStack_778;
  undefined8 ***pppuStack_770;
  code *pcStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined1 *puStack_748;
  undefined8 auStack_740 [3];
  undefined1 auStack_728 [24];
  undefined8 auStack_710 [2];
  char cStack_6f9;
  long lStack_6f8;
  undefined8 ***pppuStack_6b0;
  code *pcStack_6a8;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 *puStack_680;
  undefined8 auStack_678 [2];
  char cStack_661;
  undefined8 auStack_660 [2];
  char cStack_649;
  long lStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 *puStack_630;
  undefined8 *puStack_628;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined8 ***pppuStack_610;
  code *pcStack_608;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 auStack_5d8 [2];
  char cStack_5c1;
  undefined8 auStack_5c0 [2];
  char cStack_5a9;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 ***pppuStack_570;
  code *pcStack_568;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 *puStack_540;
  undefined8 auStack_538 [2];
  char cStack_521;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 auStack_498 [2];
  char cStack_481;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 *puStack_400;
  undefined8 auStack_3f8 [2];
  char cStack_3e1;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [3];
  undefined1 auStack_348 [24];
  undefined8 auStack_330 [2];
  char cStack_319;
  long lStack_318;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar2 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  puVar6 = param_4;
  puVar4 = param_5;
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar24 = *(long **)(param_1 + 8);
    unaff_x24 = (undefined8 *)&UNK_10f2c426f;
    puVar1 = (undefined8 *)&UNK_10f2c426a;
    if ((int)param_2 == 0) {
      puVar1 = unaff_x24;
    }
    func_0x00010002b838(auStack_a0,puVar1);
    puVar1 = (undefined8 *)&UNK_10f2c426a;
    if ((int)param_3 == 0) {
      puVar1 = unaff_x24;
    }
    func_0x00010002b838(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = (undefined8 *)&UNK_11088de18;
    (**(code **)(*plVar24 + 0x18))(plVar24);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar23 = 0;
    puVar3 = puVar2;
    puVar6 = param_5;
    do {
      if ((&cStack_59)[lVar23] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar23));
      }
      lVar23 = lVar23 + -0x18;
      param_2 = &uStack_c0;
    } while (lVar23 != -0x48);
  }
  puVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    param_2 = param_2 + -3;
  } while (param_2 != auStack_a0);
  _objc_release(param_4);
  __Unwind_Resume();
  puVar11 = &uStack_180;
  pcStack_c8 = FUN_105499638;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar1;
  puVar15 = puVar3;
  puVar7 = puVar6;
  puVar10 = puVar4;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  if (puVar2 != (undefined8 *)0x0) {
    plVar24 = (long *)puVar2[1];
    unaff_x24 = (undefined8 *)&UNK_10f2c426f;
    puVar2 = (undefined8 *)&UNK_10f2c426a;
    if ((int)puVar1 == 0) {
      puVar2 = unaff_x24;
    }
    func_0x00010002b838(auStack_160,puVar2);
    puVar1 = (undefined8 *)&UNK_10f2c426a;
    if ((int)puVar3 == 0) {
      puVar1 = unaff_x24;
    }
    func_0x00010002b838(auStack_148,puVar1);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar3 = puVar6;
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_130,puVar3);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    puVar12 = (undefined8 *)&UNK_11088de68;
    (**(code **)(*plVar24 + 0x18))(plVar24);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar23 = 0;
    puVar15 = puVar11;
    puVar7 = puVar4;
    do {
      if ((&cStack_119)[lVar23] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar23));
      }
      lVar23 = lVar23 + -0x18;
      puVar1 = &uStack_180;
    } while (lVar23 != -0x48);
  }
  puVar4 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  puStack_1a8 = auStack_160;
  do {
    puVar1 = puVar1 + -3;
  } while (puVar1 != puStack_1a8);
  _objc_release(puVar6);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_188 = FUN_10549985c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar12;
  puVar11 = puVar15;
  puVar9 = puVar7;
  puStack_1c0 = unaff_x24;
  puStack_1b8 = puVar3;
  puStack_1b0 = puVar1;
  puStack_1a0 = puVar4;
  puStack_198 = puVar6;
  ppuStack_190 = &puStack_d0;
  _objc_retain(puVar12);
  _objc_retain(puVar15);
  puVar1 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar24 = (long *)puVar5[1];
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar1 = puVar12;
      _objc_retainAutorelease(puVar12);
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    unaff_x24 = auStack_1f8;
    func_0x00010002b838(auStack_1f8,puVar1);
    _objc_retain(puVar15);
    if (puVar15 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar15);
      puVar1 = puVar15;
      func_0x00010bdc3520(puVar15);
    }
    _objc_release(puVar15);
    func_0x00010002b838(auStack_1e0,puVar1);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x00010007e1e8(&uStack_218,auStack_1f8,&lStack_1c8,2);
    puVar2 = (undefined8 *)&UNK_11088deb8;
    puVar3 = &uStack_218;
    puVar11 = &uStack_218;
    (**(code **)(*plVar24 + 0x18))(plVar24);
    puStack_200 = puVar3;
    func_0x00010007e5dc(&puStack_200);
    lVar23 = 0;
    puVar1 = auStack_1f8;
    puVar9 = puVar7;
    do {
      if ((&cStack_1c9)[lVar23] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar23));
      }
      lVar23 = lVar23 + -0x18;
    } while (lVar23 != -0x30);
  }
  _objc_release(puVar15);
  puVar6 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar15);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(puVar15);
  _objc_release(puVar12);
  puVar5 = puVar6;
  __Unwind_Resume();
  pcStack_228 = FUN_105499a8c;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar7 = puVar11;
  puVar8 = puVar9;
  puStack_260 = unaff_x24;
  puStack_258 = puVar3;
  puStack_250 = puVar1;
  puStack_248 = puVar6;
  puStack_240 = puVar15;
  puStack_238 = puVar12;
  pppuStack_230 = &ppuStack_190;
  _objc_retain(puVar2);
  _objc_retain(puVar11);
  if (puVar5 != (undefined8 *)0x0) {
    plVar24 = (long *)puVar5[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_298,puVar1);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar1 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_280,puVar1);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x00010007e1e8(&uStack_2b8,auStack_298,&lStack_268,2);
    puVar4 = (undefined8 *)&UNK_11088df08;
    puVar3 = &uStack_2b8;
    puVar7 = &uStack_2b8;
    (**(code **)(*plVar24 + 0x18))(plVar24);
    puStack_2a0 = puVar3;
    func_0x00010007e5dc(&puStack_2a0);
    lVar23 = 0;
    puVar8 = puVar9;
    do {
      if ((&cStack_269)[lVar23] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar23));
      }
      lVar23 = lVar23 + -0x18;
    } while (lVar23 != -0x30);
  }
  _objc_release(puVar11);
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(puVar11);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar11 = &uStack_380;
  pcStack_2c8 = FUN_105499cbc;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar4;
  puVar2 = puVar7;
  puVar12 = puVar8;
  puVar15 = puVar10;
  pppuStack_2d0 = &pppuStack_230;
  _objc_retain(puVar4);
  _objc_retain(puVar8);
  if (puVar1 != (undefined8 *)0x0) {
    plVar24 = (long *)puVar1[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_360,puVar1);
    puVar13 = &UNK_10f2c426a;
    if ((int)puVar7 == 0) {
      puVar13 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_348,puVar13);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar7 = puVar8;
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_330,puVar7);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_318,3);
    puVar6 = (undefined8 *)&UNK_11088df58;
    (**(code **)(*plVar24 + 0x18))(plVar24);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x00010007e5dc(&puStack_368);
    lVar23 = 0;
    puVar2 = puVar11;
    puVar12 = puVar10;
    do {
      if ((&cStack_319)[lVar23] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_330 + lVar23));
      }
      lVar23 = lVar23 + -0x18;
      puVar3 = &uStack_380;
    } while (lVar23 != -0x48);
  }
  _objc_release(puVar8);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  puStack_3b0 = auStack_360;
  do {
    puVar3 = puVar3 + -3;
  } while (puVar3 != puStack_3b0);
  _objc_release(puVar8);
  _objc_release(puVar4);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_388 = FUN_105499f34;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar6;
  puVar11 = puVar2;
  puVar9 = puVar12;
  puStack_3c0 = puVar7;
  puStack_3b8 = puVar3;
  puStack_3a8 = puVar1;
  puStack_3a0 = puVar8;
  puStack_398 = puVar4;
  pppuStack_390 = &pppuStack_2d0;
  _objc_retain(puVar2);
  puVar1 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar24 = (long *)puVar5[1];
    puVar13 = &UNK_10f2c426a;
    if ((int)puVar6 == 0) {
      puVar13 = &UNK_10f2c426f;
    }
    puVar3 = auStack_3f8;
    func_0x00010002b838(auStack_3f8,puVar13);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar1 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_3e0,puVar1);
    uStack_418 = 0;
    uStack_410 = 0;
    uStack_408 = 0;
    func_0x00010007e1e8(&uStack_418,auStack_3f8,&lStack_3c8,2);
    puVar10 = (undefined8 *)&UNK_11088dfa8;
    puVar6 = &uStack_418;
    puVar11 = &uStack_418;
    (**(code **)(*plVar24 + 0x18))(plVar24);
    puStack_400 = puVar6;
    func_0x00010007e5dc(&puStack_400);
    lVar23 = 0;
    puVar1 = auStack_3f8;
    puVar9 = puVar12;
    do {
      if ((&cStack_3c9)[lVar23] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3e0 + lVar23));
      }
      lVar23 = lVar23 + -0x18;
    } while (lVar23 != -0x30);
  }
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_3e1 < '\0') {
    __ZdlPv(auStack_3f8[0]);
  }
  _objc_release(puVar2);
  puVar8 = puVar4;
  __Unwind_Resume();
  pcStack_428 = FUN_10549a120;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar10;
  puVar5 = puVar11;
  puVar22 = puVar9;
  puStack_460 = puVar7;
  puStack_458 = puVar3;
  puStack_450 = puVar6;
  puStack_448 = puVar1;
  puStack_440 = puVar4;
  puStack_438 = puVar2;
  pppuStack_430 = &pppuStack_390;
  _objc_retain(puVar11);
  puVar1 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar24 = (long *)puVar8[1];
    puVar13 = &UNK_10f2c426a;
    if ((int)puVar10 == 0) {
      puVar13 = &UNK_10f2c426f;
    }
    puVar3 = auStack_498;
    func_0x00010002b838(auStack_498,puVar13);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar1 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_480,puVar1);
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    func_0x00010007e1e8(&uStack_4b8,auStack_498,&lStack_468,2);
    puVar12 = (undefined8 *)&UNK_11088dff8;
    puVar10 = &uStack_4b8;
    puVar5 = &uStack_4b8;
    (**(code **)(*plVar24 + 0x18))(plVar24);
    puStack_4a0 = puVar10;
    func_0x00010007e5dc(&puStack_4a0);
    lVar23 = 0;
    puVar1 = auStack_498;
    puVar22 = puVar9;
    do {
      if ((&cStack_469)[lVar23] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_480 + lVar23));
      }
      lVar23 = lVar23 + -0x18;
    } while (lVar23 != -0x30);
  }
  puVar6 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  if (cStack_481 < '\0') {
    __ZdlPv(auStack_498[0]);
  }
  _objc_release(puVar11);
  puVar9 = puVar6;
  __Unwind_Resume();
  pcStack_4c8 = FUN_10549a30c;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar12;
  puVar2 = puVar5;
  puVar8 = puVar22;
  puStack_500 = puVar7;
  puStack_4f8 = puVar3;
  puStack_4f0 = puVar10;
  puStack_4e8 = puVar1;
  puStack_4e0 = puVar6;
  puStack_4d8 = puVar11;
  pppuStack_4d0 = &pppuStack_430;
  _objc_retain(puVar5);
  puVar1 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar24 = (long *)puVar9[1];
    puVar13 = &UNK_10f2c426a;
    if ((int)puVar12 == 0) {
      puVar13 = &UNK_10f2c426f;
    }
    puVar3 = auStack_538;
    func_0x00010002b838(auStack_538,puVar13);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar1 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_520,puVar1);
    uStack_558 = 0;
    uStack_550 = 0;
    uStack_548 = 0;
    func_0x00010007e1e8(&uStack_558,auStack_538,&lStack_508,2);
    puVar4 = (undefined8 *)&UNK_11088e048;
    puVar12 = &uStack_558;
    puVar2 = &uStack_558;
    (**(code **)(*plVar24 + 0x18))(plVar24);
    puStack_540 = puVar12;
    func_0x00010007e5dc(&puStack_540);
    lVar23 = 0;
    puVar1 = auStack_538;
    puVar8 = puVar22;
    do {
      if ((&cStack_509)[lVar23] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_520 + lVar23));
      }
      lVar23 = lVar23 + -0x18;
    } while (lVar23 != -0x30);
  }
  puVar6 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_521 < '\0') {
    __ZdlPv(auStack_538[0]);
  }
  _objc_release(puVar5);
  puVar9 = puVar6;
  __Unwind_Resume();
  pcStack_568 = FUN_10549a4f8;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar4;
  puVar11 = puVar2;
  puVar22 = puVar8;
  puStack_5a0 = puVar7;
  puStack_598 = puVar3;
  puStack_590 = puVar12;
  puStack_588 = puVar1;
  puStack_580 = puVar6;
  puStack_578 = puVar5;
  pppuStack_570 = &pppuStack_4d0;
  _objc_retain(puVar2);
  puVar1 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar24 = (long *)puVar9[1];
    puVar13 = &UNK_10f2c426a;
    if ((int)puVar4 == 0) {
      puVar13 = &UNK_10f2c426f;
    }
    puVar3 = auStack_5d8;
    func_0x00010002b838(auStack_5d8,puVar13);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar1 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_5c0,puVar1);
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    uStack_5e8 = 0;
    func_0x00010007e1e8(&uStack_5f8,auStack_5d8,&lStack_5a8,2);
    puVar10 = (undefined8 *)&UNK_11088e098;
    puVar4 = &uStack_5f8;
    puVar11 = &uStack_5f8;
    (**(code **)(*plVar24 + 0x18))(plVar24);
    puStack_5e0 = puVar4;
    func_0x00010007e5dc(&puStack_5e0);
    lVar23 = 0;
    puVar1 = auStack_5d8;
    puVar22 = puVar8;
    do {
      if ((&cStack_5a9)[lVar23] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5c0 + lVar23));
      }
      lVar23 = lVar23 + -0x18;
    } while (lVar23 != -0x30);
  }
  puVar6 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_5c1 < '\0') {
    __ZdlPv(auStack_5d8[0]);
  }
  _objc_release(puVar2);
  puVar9 = puVar6;
  __Unwind_Resume();
  pcStack_608 = FUN_10549a6e4;
  lStack_648 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar10;
  puVar5 = puVar11;
  puVar8 = puVar22;
  puStack_640 = puVar7;
  puStack_638 = puVar3;
  puStack_630 = puVar4;
  puStack_628 = puVar1;
  puStack_620 = puVar6;
  puStack_618 = puVar2;
  pppuStack_610 = &pppuStack_570;
  _objc_retain(puVar11);
  if (puVar9 != (undefined8 *)0x0) {
    plVar24 = (long *)puVar9[1];
    puVar13 = &UNK_10f2c426a;
    if ((int)puVar10 == 0) {
      puVar13 = &UNK_10f2c426f;
    }
    puVar3 = auStack_678;
    func_0x00010002b838(auStack_678,puVar13);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar1 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_660,puVar1);
    uStack_698 = 0;
    uStack_690 = 0;
    uStack_688 = 0;
    func_0x00010007e1e8(&uStack_698,auStack_678,&lStack_648,2);
    puVar12 = (undefined8 *)&UNK_11088e0e8;
    puVar5 = &uStack_698;
    (**(code **)(*plVar24 + 0x18))(plVar24);
    puStack_680 = &uStack_698;
    func_0x00010007e5dc(&puStack_680);
    lVar23 = 0;
    puVar8 = puVar22;
    do {
      if ((&cStack_649)[lVar23] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_660 + lVar23));
      }
      lVar23 = lVar23 + -0x18;
    } while (lVar23 != -0x30);
  }
  puVar1 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_648) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  if (cStack_661 < '\0') {
    __ZdlPv(auStack_678[0]);
  }
  _objc_release(puVar11);
  __Unwind_Resume();
  puVar7 = &uStack_760;
  pcStack_6a8 = FUN_10549a8d0;
  lStack_6f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar12;
  puVar4 = puVar5;
  puVar2 = puVar8;
  pppuStack_6b0 = &pppuStack_610;
  _objc_retain(puVar12);
  _objc_retain(puVar8);
  if (puVar1 != (undefined8 *)0x0) {
    plVar24 = (long *)puVar1[1];
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar1 = puVar12;
      _objc_retainAutorelease(puVar12);
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_740,puVar1);
    puVar13 = &UNK_10f2c426a;
    if ((int)puVar5 == 0) {
      puVar13 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_728,puVar13);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar5 = puVar8;
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_710,puVar5);
    uStack_760 = 0;
    uStack_758 = 0;
    uStack_750 = 0;
    func_0x00010007e1e8(&uStack_760,auStack_740,&lStack_6f8,3);
    puVar6 = (undefined8 *)&UNK_11088e138;
    (**(code **)(*plVar24 + 0x18))(plVar24,&UNK_11088e138,&uStack_760,puVar15);
    puStack_748 = (undefined1 *)&uStack_760;
    func_0x00010007e5dc(&puStack_748);
    lVar23 = 0;
    puVar4 = puVar7;
    puVar2 = puVar15;
    do {
      if ((&cStack_6f9)[lVar23] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_710 + lVar23));
      }
      lVar23 = lVar23 + -0x18;
      puVar3 = &uStack_760;
    } while (lVar23 != -0x48);
  }
  _objc_release(puVar8);
  puVar1 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  puStack_790 = auStack_740;
  do {
    puVar3 = puVar3 + -3;
  } while (puVar3 != puStack_790);
  _objc_release(puVar8);
  _objc_release(puVar12);
  puVar10 = puVar1;
  __Unwind_Resume();
  pcStack_768 = FUN_10549ab48;
  lStack_7a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar6;
  puVar7 = puVar4;
  puVar11 = puVar2;
  puStack_7a0 = puVar5;
  puStack_798 = puVar3;
  puStack_788 = puVar1;
  puStack_780 = puVar8;
  puStack_778 = puVar12;
  pppuStack_770 = &pppuStack_6b0;
  _objc_retain(puVar4);
  puVar1 = (undefined8 *)0x0;
  if (puVar10 != (undefined8 *)0x0) {
    plVar24 = (long *)puVar10[1];
    puVar13 = &UNK_10f2c426a;
    if ((int)puVar6 == 0) {
      puVar13 = &UNK_10f2c426f;
    }
    puVar3 = auStack_7d8;
    func_0x00010002b838(auStack_7d8,puVar13);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar1 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_7c0,puVar1);
    uStack_7f8 = 0;
    uStack_7f0 = 0;
    uStack_7e8 = 0;
    func_0x00010007e1e8(&uStack_7f8,auStack_7d8,&lStack_7a8,2);
    puVar15 = (undefined8 *)&UNK_11088e188;
    puVar6 = &uStack_7f8;
    puVar7 = &uStack_7f8;
    (**(code **)(*plVar24 + 0x18))(plVar24,&UNK_11088e188,puVar7,puVar2);
    puStack_7e0 = puVar6;
    func_0x00010007e5dc(&puStack_7e0);
    lVar23 = 0;
    puVar1 = auStack_7d8;
    puVar11 = puVar2;
    do {
      if ((&cStack_7a9)[lVar23] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_7c0 + lVar23));
      }
      lVar23 = lVar23 + -0x18;
    } while (lVar23 != -0x30);
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_7a8) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    if (cStack_7c1 < '\0') {
      __ZdlPv(auStack_7d8[0]);
    }
    _objc_release(puVar4);
    puVar9 = puVar2;
    __Unwind_Resume();
    pcStack_808 = FUN_10549ad34;
    lStack_848 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar12 = puVar15;
    puVar10 = puVar7;
    puVar8 = puVar11;
    puStack_840 = puVar5;
    puStack_838 = puVar3;
    puStack_830 = puVar6;
    puStack_828 = puVar1;
    puStack_820 = puVar2;
    puStack_818 = puVar4;
    pppuStack_810 = &pppuStack_770;
    _objc_retain(puVar7);
    puVar1 = (undefined8 *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      plVar24 = (long *)puVar9[1];
      puVar13 = &UNK_10f2c426a;
      if ((int)puVar15 == 0) {
        puVar13 = &UNK_10f2c426f;
      }
      puVar3 = auStack_878;
      func_0x00010002b838(auStack_878,puVar13);
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar1 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_860,puVar1);
      uStack_898 = 0;
      uStack_890 = 0;
      uStack_888 = 0;
      func_0x00010007e1e8(&uStack_898,auStack_878,&lStack_848,2);
      puVar12 = (undefined8 *)&UNK_11088e1d8;
      puVar15 = &uStack_898;
      puVar10 = &uStack_898;
      (**(code **)(*plVar24 + 0x18))(plVar24,&UNK_11088e1d8,puVar10,puVar11);
      puStack_880 = puVar15;
      func_0x00010007e5dc(&puStack_880);
      lVar23 = 0;
      puVar1 = auStack_878;
      puVar8 = puVar11;
      do {
        if ((&cStack_849)[lVar23] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_860 + lVar23));
        }
        lVar23 = lVar23 + -0x18;
      } while (lVar23 != -0x30);
    }
    puVar6 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_848) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar7);
    if (cStack_861 < '\0') {
      __ZdlPv(auStack_878[0]);
    }
    _objc_release(puVar7);
    puVar11 = puVar6;
    __Unwind_Resume();
    pcStack_8a8 = FUN_10549af20;
    lStack_8e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar12;
    puVar2 = puVar10;
    puVar9 = puVar8;
    puStack_8e0 = puVar5;
    puStack_8d8 = puVar3;
    puStack_8d0 = puVar15;
    puStack_8c8 = puVar1;
    puStack_8c0 = puVar6;
    puStack_8b8 = puVar7;
    pppuStack_8b0 = &pppuStack_810;
    _objc_retain(puVar10);
    puVar1 = (undefined8 *)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      plVar24 = (long *)puVar11[1];
      puVar13 = &UNK_10f2c426a;
      if ((int)puVar12 == 0) {
        puVar13 = &UNK_10f2c426f;
      }
      puVar3 = auStack_918;
      func_0x00010002b838(auStack_918,puVar13);
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar1 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x00010002b838(auStack_900,puVar1);
      uStack_938 = 0;
      uStack_930 = 0;
      uStack_928 = 0;
      func_0x00010007e1e8(&uStack_938,auStack_918,&lStack_8e8,2);
      puVar4 = (undefined8 *)&UNK_11088e228;
      puVar12 = &uStack_938;
      puVar2 = &uStack_938;
      (**(code **)(*plVar24 + 0x18))(plVar24,&UNK_11088e228,puVar2,puVar8);
      puStack_920 = puVar12;
      func_0x00010007e5dc(&puStack_920);
      lVar23 = 0;
      puVar1 = auStack_918;
      puVar9 = puVar8;
      do {
        if ((&cStack_8e9)[lVar23] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_900 + lVar23));
        }
        lVar23 = lVar23 + -0x18;
      } while (lVar23 != -0x30);
    }
    puVar6 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_8e8) {
      ___stack_chk_fail();
      _objc_release(puVar10);
      if (cStack_901 < '\0') {
        __ZdlPv(auStack_918[0]);
      }
      _objc_release(puVar10);
      puVar7 = puVar6;
      __Unwind_Resume();
      pcStack_948 = FUN_10549b10c;
      lStack_988 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar11 = puVar4;
      puVar15 = puVar2;
      puVar8 = puVar9;
      puStack_980 = puVar5;
      puStack_978 = puVar3;
      puStack_970 = puVar12;
      puStack_968 = puVar1;
      puStack_960 = puVar6;
      puStack_958 = puVar10;
      pppuStack_950 = &pppuStack_8b0;
      _objc_retain(puVar2);
      iVar21 = (int)puVar11;
      puVar1 = (undefined8 *)0x0;
      if (puVar7 != (undefined8 *)0x0) {
        plVar24 = (long *)puVar7[1];
        puVar13 = &UNK_10f2c426a;
        if ((int)puVar4 == 0) {
          puVar13 = &UNK_10f2c426f;
        }
        puVar3 = auStack_9b8;
        func_0x00010002b838(auStack_9b8,puVar13);
        _objc_retain(puVar2);
        if (puVar2 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f2c4275;
        }
        else {
          _objc_retainAutorelease(puVar2);
          puVar1 = puVar2;
          func_0x00010bdc3520(puVar2);
        }
        _objc_release(puVar2);
        func_0x00010002b838(auStack_9a0,puVar1);
        uStack_9d8 = 0;
        uStack_9d0 = 0;
        uStack_9c8 = 0;
        func_0x00010007e1e8(&uStack_9d8,auStack_9b8,&lStack_988,2);
        puVar13 = &UNK_11088e278;
        puVar4 = &uStack_9d8;
        puVar15 = &uStack_9d8;
        (**(code **)(*plVar24 + 0x18))(plVar24,&UNK_11088e278,puVar15,puVar9);
        puStack_9c0 = puVar4;
        func_0x00010007e5dc(&puStack_9c0);
        lVar23 = 0;
        puVar1 = auStack_9b8;
        puVar8 = puVar9;
        do {
          if ((&cStack_989)[lVar23] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_9a0 + lVar23));
          }
          iVar21 = (int)puVar13;
          lVar23 = lVar23 + -0x18;
        } while (lVar23 != -0x30);
      }
      puVar6 = puVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_988) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(puVar2);
      if (cStack_9a1 < '\0') {
        __ZdlPv(auStack_9b8[0]);
      }
      _objc_release(puVar2);
      puVar12 = puVar6;
      __Unwind_Resume();
      pcStack_9e8 = FUN_10549b2f8;
      lStack_a28 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_a20 = puVar5;
      puStack_a18 = puVar3;
      puStack_a10 = puVar4;
      puStack_a08 = puVar1;
      puStack_a00 = puVar6;
      puStack_9f8 = puVar2;
      pppuStack_9f0 = &pppuStack_950;
      _objc_retain(puVar15);
      if (puVar12 != (undefined8 *)0x0) {
        plVar24 = (long *)puVar12[1];
        puVar13 = &UNK_10f2c426a;
        if (iVar21 == 0) {
          puVar13 = &UNK_10f2c426f;
        }
        func_0x00010002b838(auStack_a58,puVar13);
        _objc_retain(puVar15);
        if (puVar15 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f2c4275;
        }
        else {
          _objc_retainAutorelease(puVar15);
          puVar1 = puVar15;
          func_0x00010bdc3520(puVar15);
        }
        _objc_release(puVar15);
        func_0x00010002b838(auStack_a40,puVar1);
        uStack_a78 = 0;
        uStack_a70 = 0;
        uStack_a68 = 0;
        func_0x00010007e1e8(&uStack_a78,auStack_a58,&lStack_a28,2);
        (**(code **)(*plVar24 + 0x18))(plVar24,&UNK_11088e2c8,&uStack_a78,puVar8);
        puStack_a60 = &uStack_a78;
        func_0x00010007e5dc(&puStack_a60);
        lVar23 = 0;
        do {
          if ((&cStack_a29)[lVar23] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_a40 + lVar23));
          }
          lVar23 = lVar23 + -0x18;
        } while (lVar23 != -0x30);
      }
      puVar1 = puVar15;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a28) {
        ___stack_chk_fail();
        _objc_release(puVar15);
        if (cStack_a41 < '\0') {
          __ZdlPv(auStack_a58[0]);
        }
        _objc_release(puVar15);
        __Unwind_Resume();
        lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar3 != (undefined8 *)0x0) {
          puVar3 = puVar1;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          func_0x00010bf93420();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar1;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar4;
          func_0x00010bfdea00();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar1;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar12;
          func_0x00010bf0b760();
          FUN_10549be84();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar13);
          _objc_release(puVar15);
          _objc_release(puVar12);
          _objc_release(puVar14);
          _objc_release(puVar2);
          _objc_release(puVar4);
          _objc_release(puVar6);
          _objc_release(puVar3);
        }
        puVar3 = puVar1;
        func_0x00010bf13240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar3 != (undefined8 *)0x0) {
          puVar3 = puVar1;
          func_0x00010bf13240(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar13);
          _objc_release(puVar3);
        }
        puVar3 = puVar1;
        func_0x00010c118b20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar3 != (undefined8 *)0x0) {
          puVar3 = puVar1;
          func_0x00010c118b20(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar13);
          _objc_release(puVar3);
        }
        puVar3 = puVar1;
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bf93420();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar4;
        func_0x00010bfdea00();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar1;
        func_0x00010bf0b760();
        FUN_10549be84();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar1);
        _objc_release(puVar14);
        _objc_release(puVar2);
        _objc_release(puVar4);
        _objc_release(puVar6);
        _objc_release(puVar3);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar23) {
          ___stack_chk_fail();
          _objc_retain();
          _objc_retain(puVar3);
          func_0x00010c08fa60(puVar3);
          func_0x00010c08fa60(puVar3);
          puVar1 = puVar3;
          func_0x00010c25cf00(puVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf649e0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR_PTR_1126af5d0;
          if (puVar14 == (undefined *)0x0) {
            puVar25 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa01c0(puVar13);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar16 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            func_0x00010bdc1900();
            _objc_retainAutoreleasedReturnValue();
            puVar25 = (undefined *)0x0;
            _objc_retain(0);
            puVar17 = puVar16;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar16;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar19 = puVar16;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if ((((puVar18 == (undefined *)0x0) || (puVar17 == (undefined *)0x0)) ||
                (puVar19 == (undefined *)0x0)) ||
               (((puVar13 = puVar19, func_0x00010c0720c0(), ((ulong)puVar13 & 1) == 0 &&
                 (puVar13 = puVar19, func_0x00010c0720c0(), ((ulong)puVar13 & 1) == 0)) &&
                (puVar13 = puVar19, func_0x00010c0720c0(), ((ulong)puVar13 & 1) == 0)))) {
              puVar13 = PTR_PTR_1126af5d0;
              puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfa01c0(puVar13);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar13 = PTR_PTR_1126af5d0;
              puVar20 = PTR_PTR_1126b9668;
              _objc_alloc(PTR_PTR_1126b9668);
              puVar6 = puVar3;
              func_0x00010bdc1b20(puVar3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bff45e0(puVar20);
              func_0x00010c2619e0(puVar13);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar20);
            }
            _objc_release(puVar6);
            _objc_release(puVar19);
            _objc_release(puVar18);
            _objc_release(puVar17);
            _objc_release(puVar16);
          }
          _objc_release(puVar25);
          _objc_release(puVar1);
          _objc_release(puVar14);
          _objc_release(puVar3);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105499638; end: 10549985b;  */

/* WARNING: Removing unreachable block (ram,0x000105499f04) */
/* WARNING: Removing unreachable block (ram,0x000105499834) */
/* WARNING: Removing unreachable block (ram,0x00010549ab18) */
/* WARNING: Removing unreachable block (ram,0x00010549b8e0) */

void FUN_105499638(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  int iVar20;
  undefined8 *puVar21;
  long lVar22;
  long *plVar23;
  undefined *puVar24;
  undefined8 *unaff_x24;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 *puStack_9a0;
  undefined8 auStack_998 [2];
  char cStack_981;
  undefined8 auStack_980 [2];
  char cStack_969;
  long lStack_968;
  undefined8 *puStack_960;
  undefined8 *puStack_958;
  undefined8 *puStack_950;
  undefined8 *puStack_948;
  undefined8 *puStack_940;
  undefined8 *puStack_938;
  undefined8 ***pppuStack_930;
  code *pcStack_928;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 *puStack_900;
  undefined8 auStack_8f8 [2];
  char cStack_8e1;
  undefined8 auStack_8e0 [2];
  char cStack_8c9;
  long lStack_8c8;
  undefined8 *puStack_8c0;
  undefined8 *puStack_8b8;
  undefined8 *puStack_8b0;
  undefined8 *puStack_8a8;
  undefined8 *puStack_8a0;
  undefined8 *puStack_898;
  undefined8 ***pppuStack_890;
  code *pcStack_888;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 *puStack_860;
  undefined8 auStack_858 [2];
  char cStack_841;
  undefined8 auStack_840 [2];
  char cStack_829;
  long lStack_828;
  undefined8 *puStack_820;
  undefined8 *puStack_818;
  undefined8 *puStack_810;
  undefined8 *puStack_808;
  undefined8 *puStack_800;
  undefined8 *puStack_7f8;
  undefined8 ***pppuStack_7f0;
  code *pcStack_7e8;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 *puStack_7c0;
  undefined8 auStack_7b8 [2];
  char cStack_7a1;
  undefined8 auStack_7a0 [2];
  char cStack_789;
  long lStack_788;
  undefined8 *puStack_780;
  undefined8 *puStack_778;
  undefined8 *puStack_770;
  undefined8 *puStack_768;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined8 ***pppuStack_750;
  code *pcStack_748;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 *puStack_720;
  undefined8 auStack_718 [2];
  char cStack_701;
  undefined8 auStack_700 [2];
  char cStack_6e9;
  long lStack_6e8;
  undefined8 *puStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 *puStack_6d0;
  undefined8 *puStack_6c8;
  undefined8 *puStack_6c0;
  undefined8 *puStack_6b8;
  undefined8 ***pppuStack_6b0;
  code *pcStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined1 *puStack_688;
  undefined8 auStack_680 [3];
  undefined1 auStack_668 [24];
  undefined8 auStack_650 [2];
  char cStack_639;
  long lStack_638;
  undefined8 ***pppuStack_5f0;
  code *pcStack_5e8;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 auStack_5b8 [2];
  char cStack_5a1;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 *puStack_520;
  undefined8 auStack_518 [2];
  char cStack_501;
  undefined8 auStack_500 [2];
  char cStack_4e9;
  long lStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 *puStack_480;
  undefined8 auStack_478 [2];
  char cStack_461;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [3];
  undefined1 auStack_288 [24];
  undefined8 auStack_270 [2];
  char cStack_259;
  long lStack_258;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar1 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2;
  puVar9 = param_3;
  puVar3 = param_4;
  puVar11 = param_5;
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar23 = *(long **)(param_1 + 8);
    unaff_x24 = (undefined8 *)&UNK_10f2c426f;
    puVar5 = (undefined8 *)&UNK_10f2c426a;
    if ((int)param_2 == 0) {
      puVar5 = unaff_x24;
    }
    func_0x00010002b838(auStack_a0,puVar5);
    puVar5 = (undefined8 *)&UNK_10f2c426a;
    if ((int)param_3 == 0) {
      puVar5 = unaff_x24;
    }
    func_0x00010002b838(auStack_88,puVar5);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(param_4);
      param_3 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,param_3);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar5 = (undefined8 *)&UNK_11088de68;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar22 = 0;
    puVar9 = puVar1;
    puVar3 = param_5;
    do {
      if ((&cStack_59)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
      param_2 = &uStack_c0;
    } while (lVar22 != -0x48);
  }
  puVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_e8 = auStack_a0;
  do {
    param_2 = param_2 + -3;
  } while (param_2 != puStack_e8);
  _objc_release(param_4);
  puVar2 = puVar1;
  __Unwind_Resume();
  pcStack_c8 = FUN_10549985c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar5;
  puVar10 = puVar9;
  puVar7 = puVar3;
  puStack_100 = unaff_x24;
  puStack_f8 = param_3;
  puStack_f0 = param_2;
  puStack_e0 = puVar1;
  puStack_d8 = param_4;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(puVar9);
  puVar1 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar2[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_138;
    func_0x00010002b838(auStack_138,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar1 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_120,puVar1);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    puVar12 = (undefined8 *)&UNK_11088deb8;
    param_3 = &uStack_158;
    puVar10 = &uStack_158;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_140 = param_3;
    func_0x00010007e5dc(&puStack_140);
    lVar22 = 0;
    puVar1 = auStack_138;
    puVar7 = puVar3;
    do {
      if ((&cStack_109)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  _objc_release(puVar9);
  puVar3 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar5);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_168 = FUN_105499a8c;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar12;
  puVar6 = puVar10;
  puVar8 = puVar7;
  puStack_1a0 = unaff_x24;
  puStack_198 = param_3;
  puStack_190 = puVar1;
  puStack_188 = puVar3;
  puStack_180 = puVar9;
  puStack_178 = puVar5;
  ppuStack_170 = &puStack_d0;
  _objc_retain(puVar12);
  _objc_retain(puVar10);
  if (puVar4 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar4[1];
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar5 = puVar12;
      _objc_retainAutorelease(puVar12);
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_1d8,puVar5);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar5 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_1c0,puVar5);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    func_0x00010007e1e8(&uStack_1f8,auStack_1d8,&lStack_1a8,2);
    puVar2 = (undefined8 *)&UNK_11088df08;
    param_3 = &uStack_1f8;
    puVar6 = &uStack_1f8;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_1e0 = param_3;
    func_0x00010007e5dc(&puStack_1e0);
    lVar22 = 0;
    puVar8 = puVar7;
    do {
      if ((&cStack_1a9)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  _objc_release(puVar10);
  puVar5 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar12);
  __Unwind_Resume();
  puVar10 = &uStack_2c0;
  pcStack_208 = FUN_105499cbc;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar2;
  puVar3 = puVar6;
  puVar1 = puVar8;
  puVar12 = puVar11;
  pppuStack_210 = &ppuStack_170;
  _objc_retain(puVar2);
  _objc_retain(puVar8);
  if (puVar5 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar5[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar5 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_2a0,puVar5);
    puVar13 = &UNK_10f2c426a;
    if ((int)puVar6 == 0) {
      puVar13 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_288,puVar13);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar6 = puVar8;
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_270,puVar6);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_258,3);
    puVar9 = (undefined8 *)&UNK_11088df58;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    lVar22 = 0;
    puVar3 = puVar10;
    puVar1 = puVar11;
    do {
      if ((&cStack_259)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_270 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
      param_3 = &uStack_2c0;
    } while (lVar22 != -0x48);
  }
  _objc_release(puVar8);
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  puStack_2f0 = auStack_2a0;
  do {
    param_3 = param_3 + -3;
  } while (param_3 != puStack_2f0);
  _objc_release(puVar8);
  _objc_release(puVar2);
  puVar7 = puVar5;
  __Unwind_Resume();
  pcStack_2c8 = FUN_105499f34;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar9;
  puVar10 = puVar3;
  puVar4 = puVar1;
  puStack_300 = puVar6;
  puStack_2f8 = param_3;
  puStack_2e8 = puVar5;
  puStack_2e0 = puVar8;
  puStack_2d8 = puVar2;
  pppuStack_2d0 = &pppuStack_210;
  _objc_retain(puVar3);
  puVar5 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar7[1];
    puVar13 = &UNK_10f2c426a;
    if ((int)puVar9 == 0) {
      puVar13 = &UNK_10f2c426f;
    }
    param_3 = auStack_338;
    func_0x00010002b838(auStack_338,puVar13);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_320,puVar5);
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    func_0x00010007e1e8(&uStack_358,auStack_338,&lStack_308,2);
    puVar11 = (undefined8 *)&UNK_11088dfa8;
    puVar9 = &uStack_358;
    puVar10 = &uStack_358;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_340 = puVar9;
    func_0x00010007e5dc(&puStack_340);
    lVar22 = 0;
    puVar5 = auStack_338;
    puVar4 = puVar1;
    do {
      if ((&cStack_309)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_321 < '\0') {
    __ZdlPv(auStack_338[0]);
  }
  _objc_release(puVar3);
  puVar8 = puVar1;
  __Unwind_Resume();
  pcStack_368 = FUN_10549a120;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar11;
  puVar7 = puVar10;
  puVar21 = puVar4;
  puStack_3a0 = puVar6;
  puStack_398 = param_3;
  puStack_390 = puVar9;
  puStack_388 = puVar5;
  puStack_380 = puVar1;
  puStack_378 = puVar3;
  pppuStack_370 = &pppuStack_2d0;
  _objc_retain(puVar10);
  puVar5 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar8[1];
    puVar13 = &UNK_10f2c426a;
    if ((int)puVar11 == 0) {
      puVar13 = &UNK_10f2c426f;
    }
    param_3 = auStack_3d8;
    func_0x00010002b838(auStack_3d8,puVar13);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar5 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_3c0,puVar5);
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    func_0x00010007e1e8(&uStack_3f8,auStack_3d8,&lStack_3a8,2);
    puVar2 = (undefined8 *)&UNK_11088dff8;
    puVar11 = &uStack_3f8;
    puVar7 = &uStack_3f8;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_3e0 = puVar11;
    func_0x00010007e5dc(&puStack_3e0);
    lVar22 = 0;
    puVar5 = auStack_3d8;
    puVar21 = puVar4;
    do {
      if ((&cStack_3a9)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  puVar9 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_3c1 < '\0') {
    __ZdlPv(auStack_3d8[0]);
  }
  _objc_release(puVar10);
  puVar4 = puVar9;
  __Unwind_Resume();
  pcStack_408 = FUN_10549a30c;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar2;
  puVar1 = puVar7;
  puVar8 = puVar21;
  puStack_440 = puVar6;
  puStack_438 = param_3;
  puStack_430 = puVar11;
  puStack_428 = puVar5;
  puStack_420 = puVar9;
  puStack_418 = puVar10;
  pppuStack_410 = &pppuStack_370;
  _objc_retain(puVar7);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar4[1];
    puVar13 = &UNK_10f2c426a;
    if ((int)puVar2 == 0) {
      puVar13 = &UNK_10f2c426f;
    }
    param_3 = auStack_478;
    func_0x00010002b838(auStack_478,puVar13);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar5 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_460,puVar5);
    uStack_498 = 0;
    uStack_490 = 0;
    uStack_488 = 0;
    func_0x00010007e1e8(&uStack_498,auStack_478,&lStack_448,2);
    puVar3 = (undefined8 *)&UNK_11088e048;
    puVar2 = &uStack_498;
    puVar1 = &uStack_498;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_480 = puVar2;
    func_0x00010007e5dc(&puStack_480);
    lVar22 = 0;
    puVar5 = auStack_478;
    puVar8 = puVar21;
    do {
      if ((&cStack_449)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_460 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  puVar9 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_461 < '\0') {
    __ZdlPv(auStack_478[0]);
  }
  _objc_release(puVar7);
  puVar4 = puVar9;
  __Unwind_Resume();
  pcStack_4a8 = FUN_10549a4f8;
  lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar3;
  puVar10 = puVar1;
  puVar21 = puVar8;
  puStack_4e0 = puVar6;
  puStack_4d8 = param_3;
  puStack_4d0 = puVar2;
  puStack_4c8 = puVar5;
  puStack_4c0 = puVar9;
  puStack_4b8 = puVar7;
  pppuStack_4b0 = &pppuStack_410;
  _objc_retain(puVar1);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar4[1];
    puVar13 = &UNK_10f2c426a;
    if ((int)puVar3 == 0) {
      puVar13 = &UNK_10f2c426f;
    }
    param_3 = auStack_518;
    func_0x00010002b838(auStack_518,puVar13);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar5 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_500,puVar5);
    uStack_538 = 0;
    uStack_530 = 0;
    uStack_528 = 0;
    func_0x00010007e1e8(&uStack_538,auStack_518,&lStack_4e8,2);
    puVar11 = (undefined8 *)&UNK_11088e098;
    puVar3 = &uStack_538;
    puVar10 = &uStack_538;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_520 = puVar3;
    func_0x00010007e5dc(&puStack_520);
    lVar22 = 0;
    puVar5 = auStack_518;
    puVar21 = puVar8;
    do {
      if ((&cStack_4e9)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_500 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  puVar9 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_501 < '\0') {
    __ZdlPv(auStack_518[0]);
  }
  _objc_release(puVar1);
  puVar4 = puVar9;
  __Unwind_Resume();
  pcStack_548 = FUN_10549a6e4;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar11;
  puVar7 = puVar10;
  puVar8 = puVar21;
  puStack_580 = puVar6;
  puStack_578 = param_3;
  puStack_570 = puVar3;
  puStack_568 = puVar5;
  puStack_560 = puVar9;
  puStack_558 = puVar1;
  pppuStack_550 = &pppuStack_4b0;
  _objc_retain(puVar10);
  if (puVar4 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar4[1];
    puVar13 = &UNK_10f2c426a;
    if ((int)puVar11 == 0) {
      puVar13 = &UNK_10f2c426f;
    }
    param_3 = auStack_5b8;
    func_0x00010002b838(auStack_5b8,puVar13);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar5 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_5a0,puVar5);
    uStack_5d8 = 0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    func_0x00010007e1e8(&uStack_5d8,auStack_5b8,&lStack_588,2);
    puVar2 = (undefined8 *)&UNK_11088e0e8;
    puVar7 = &uStack_5d8;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_5c0 = &uStack_5d8;
    func_0x00010007e5dc(&puStack_5c0);
    lVar22 = 0;
    puVar8 = puVar21;
    do {
      if ((&cStack_589)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5a0 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  puVar5 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_5a1 < '\0') {
    __ZdlPv(auStack_5b8[0]);
  }
  _objc_release(puVar10);
  __Unwind_Resume();
  puVar1 = &uStack_6a0;
  pcStack_5e8 = FUN_10549a8d0;
  lStack_638 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar2;
  puVar3 = puVar7;
  puVar11 = puVar8;
  pppuStack_5f0 = &pppuStack_550;
  _objc_retain(puVar2);
  _objc_retain(puVar8);
  if (puVar5 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar5[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar5 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_680,puVar5);
    puVar13 = &UNK_10f2c426a;
    if ((int)puVar7 == 0) {
      puVar13 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_668,puVar13);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar7 = puVar8;
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_650,puVar7);
    uStack_6a0 = 0;
    uStack_698 = 0;
    uStack_690 = 0;
    func_0x00010007e1e8(&uStack_6a0,auStack_680,&lStack_638,3);
    puVar9 = (undefined8 *)&UNK_11088e138;
    (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11088e138,&uStack_6a0,puVar12);
    puStack_688 = (undefined1 *)&uStack_6a0;
    func_0x00010007e5dc(&puStack_688);
    lVar22 = 0;
    puVar3 = puVar1;
    puVar11 = puVar12;
    do {
      if ((&cStack_639)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_650 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
      param_3 = &uStack_6a0;
    } while (lVar22 != -0x48);
  }
  _objc_release(puVar8);
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_638) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  puStack_6d0 = auStack_680;
  do {
    param_3 = param_3 + -3;
  } while (param_3 != puStack_6d0);
  _objc_release(puVar8);
  _objc_release(puVar2);
  puVar10 = puVar5;
  __Unwind_Resume();
  pcStack_6a8 = FUN_10549ab48;
  lStack_6e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar9;
  puVar12 = puVar3;
  puVar6 = puVar11;
  puStack_6e0 = puVar7;
  puStack_6d8 = param_3;
  puStack_6c8 = puVar5;
  puStack_6c0 = puVar8;
  puStack_6b8 = puVar2;
  pppuStack_6b0 = &pppuStack_5f0;
  _objc_retain(puVar3);
  puVar5 = (undefined8 *)0x0;
  if (puVar10 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar10[1];
    puVar13 = &UNK_10f2c426a;
    if ((int)puVar9 == 0) {
      puVar13 = &UNK_10f2c426f;
    }
    param_3 = auStack_718;
    func_0x00010002b838(auStack_718,puVar13);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_700,puVar5);
    uStack_738 = 0;
    uStack_730 = 0;
    uStack_728 = 0;
    func_0x00010007e1e8(&uStack_738,auStack_718,&lStack_6e8,2);
    puVar1 = (undefined8 *)&UNK_11088e188;
    puVar9 = &uStack_738;
    puVar12 = &uStack_738;
    (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11088e188,puVar12,puVar11);
    puStack_720 = puVar9;
    func_0x00010007e5dc(&puStack_720);
    lVar22 = 0;
    puVar5 = auStack_718;
    puVar6 = puVar11;
    do {
      if ((&cStack_6e9)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_700 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  puVar11 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_701 < '\0') {
    __ZdlPv(auStack_718[0]);
  }
  _objc_release(puVar3);
  puVar4 = puVar11;
  __Unwind_Resume();
  pcStack_748 = FUN_10549ad34;
  lStack_788 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar1;
  puVar2 = puVar12;
  puVar8 = puVar6;
  puStack_780 = puVar7;
  puStack_778 = param_3;
  puStack_770 = puVar9;
  puStack_768 = puVar5;
  puStack_760 = puVar11;
  puStack_758 = puVar3;
  pppuStack_750 = &pppuStack_6b0;
  _objc_retain(puVar12);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar4[1];
    puVar13 = &UNK_10f2c426a;
    if ((int)puVar1 == 0) {
      puVar13 = &UNK_10f2c426f;
    }
    param_3 = auStack_7b8;
    func_0x00010002b838(auStack_7b8,puVar13);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar5 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_7a0,puVar5);
    uStack_7d8 = 0;
    uStack_7d0 = 0;
    uStack_7c8 = 0;
    func_0x00010007e1e8(&uStack_7d8,auStack_7b8,&lStack_788,2);
    puVar10 = (undefined8 *)&UNK_11088e1d8;
    puVar1 = &uStack_7d8;
    puVar2 = &uStack_7d8;
    (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11088e1d8,puVar2,puVar6);
    puStack_7c0 = puVar1;
    func_0x00010007e5dc(&puStack_7c0);
    lVar22 = 0;
    puVar5 = auStack_7b8;
    puVar8 = puVar6;
    do {
      if ((&cStack_789)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_7a0 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  puVar9 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_788) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  if (cStack_7a1 < '\0') {
    __ZdlPv(auStack_7b8[0]);
  }
  _objc_release(puVar12);
  puVar6 = puVar9;
  __Unwind_Resume();
  pcStack_7e8 = FUN_10549af20;
  lStack_828 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar10;
  puVar11 = puVar2;
  puVar4 = puVar8;
  puStack_820 = puVar7;
  puStack_818 = param_3;
  puStack_810 = puVar1;
  puStack_808 = puVar5;
  puStack_800 = puVar9;
  puStack_7f8 = puVar12;
  pppuStack_7f0 = &pppuStack_750;
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar6[1];
    puVar13 = &UNK_10f2c426a;
    if ((int)puVar10 == 0) {
      puVar13 = &UNK_10f2c426f;
    }
    param_3 = auStack_858;
    func_0x00010002b838(auStack_858,puVar13);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_840,puVar5);
    uStack_878 = 0;
    uStack_870 = 0;
    uStack_868 = 0;
    func_0x00010007e1e8(&uStack_878,auStack_858,&lStack_828,2);
    puVar3 = (undefined8 *)&UNK_11088e228;
    puVar10 = &uStack_878;
    puVar11 = &uStack_878;
    (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11088e228,puVar11,puVar8);
    puStack_860 = puVar10;
    func_0x00010007e5dc(&puStack_860);
    lVar22 = 0;
    puVar5 = auStack_858;
    puVar4 = puVar8;
    do {
      if ((&cStack_829)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_840 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  puVar9 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_828) {
    ___stack_chk_fail();
    _objc_release(puVar2);
    if (cStack_841 < '\0') {
      __ZdlPv(auStack_858[0]);
    }
    _objc_release(puVar2);
    puVar12 = puVar9;
    __Unwind_Resume();
    pcStack_888 = FUN_10549b10c;
    lStack_8c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = puVar3;
    puVar1 = puVar11;
    puVar8 = puVar4;
    puStack_8c0 = puVar7;
    puStack_8b8 = param_3;
    puStack_8b0 = puVar10;
    puStack_8a8 = puVar5;
    puStack_8a0 = puVar9;
    puStack_898 = puVar2;
    pppuStack_890 = &pppuStack_7f0;
    _objc_retain(puVar11);
    iVar20 = (int)puVar6;
    puVar5 = (undefined8 *)0x0;
    if (puVar12 != (undefined8 *)0x0) {
      plVar23 = (long *)puVar12[1];
      puVar13 = &UNK_10f2c426a;
      if ((int)puVar3 == 0) {
        puVar13 = &UNK_10f2c426f;
      }
      param_3 = auStack_8f8;
      func_0x00010002b838(auStack_8f8,puVar13);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar5 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_8e0,puVar5);
      uStack_918 = 0;
      uStack_910 = 0;
      uStack_908 = 0;
      func_0x00010007e1e8(&uStack_918,auStack_8f8,&lStack_8c8,2);
      puVar13 = &UNK_11088e278;
      puVar3 = &uStack_918;
      puVar1 = &uStack_918;
      (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11088e278,puVar1,puVar4);
      puStack_900 = puVar3;
      func_0x00010007e5dc(&puStack_900);
      lVar22 = 0;
      puVar5 = auStack_8f8;
      puVar8 = puVar4;
      do {
        if ((&cStack_8c9)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_8e0 + lVar22));
        }
        iVar20 = (int)puVar13;
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x30);
    }
    puVar9 = puVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_8c8) {
      ___stack_chk_fail();
      _objc_release(puVar11);
      if (cStack_8e1 < '\0') {
        __ZdlPv(auStack_8f8[0]);
      }
      _objc_release(puVar11);
      puVar12 = puVar9;
      __Unwind_Resume();
      pcStack_928 = FUN_10549b2f8;
      lStack_968 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_960 = puVar7;
      puStack_958 = param_3;
      puStack_950 = puVar3;
      puStack_948 = puVar5;
      puStack_940 = puVar9;
      puStack_938 = puVar11;
      pppuStack_930 = &pppuStack_890;
      _objc_retain(puVar1);
      if (puVar12 != (undefined8 *)0x0) {
        plVar23 = (long *)puVar12[1];
        puVar13 = &UNK_10f2c426a;
        if (iVar20 == 0) {
          puVar13 = &UNK_10f2c426f;
        }
        func_0x00010002b838(auStack_998,puVar13);
        _objc_retain(puVar1);
        if (puVar1 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)&UNK_10f2c4275;
        }
        else {
          _objc_retainAutorelease(puVar1);
          puVar5 = puVar1;
          func_0x00010bdc3520(puVar1);
        }
        _objc_release(puVar1);
        func_0x00010002b838(auStack_980,puVar5);
        uStack_9b8 = 0;
        uStack_9b0 = 0;
        uStack_9a8 = 0;
        func_0x00010007e1e8(&uStack_9b8,auStack_998,&lStack_968,2);
        (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11088e2c8,&uStack_9b8,puVar8);
        puStack_9a0 = &uStack_9b8;
        func_0x00010007e5dc(&puStack_9a0);
        lVar22 = 0;
        do {
          if ((&cStack_969)[lVar22] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_980 + lVar22));
          }
          lVar22 = lVar22 + -0x18;
        } while (lVar22 != -0x30);
      }
      puVar5 = puVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_968) {
        ___stack_chk_fail();
        _objc_release(puVar1);
        if (cStack_981 < '\0') {
          __ZdlPv(auStack_998[0]);
        }
        _objc_release(puVar1);
        __Unwind_Resume();
        lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar5;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar9 != (undefined8 *)0x0) {
          puVar9 = puVar5;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar9;
          func_0x00010bf93420();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar5;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar11;
          func_0x00010bfdea00();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar5;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar12;
          func_0x00010bf0b760();
          FUN_10549be84();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar13);
          _objc_release(puVar10);
          _objc_release(puVar12);
          _objc_release(puVar14);
          _objc_release(puVar1);
          _objc_release(puVar11);
          _objc_release(puVar3);
          _objc_release(puVar9);
        }
        puVar9 = puVar5;
        func_0x00010bf13240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar9 != (undefined8 *)0x0) {
          puVar9 = puVar5;
          func_0x00010bf13240(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar13);
          _objc_release(puVar9);
        }
        puVar9 = puVar5;
        func_0x00010c118b20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar9 != (undefined8 *)0x0) {
          puVar9 = puVar5;
          func_0x00010c118b20(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar13);
          _objc_release(puVar9);
        }
        puVar9 = puVar5;
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar9;
        func_0x00010bf93420();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar5;
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar11;
        func_0x00010bfdea00();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar5;
        func_0x00010bf0b760();
        FUN_10549be84();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar5);
        _objc_release(puVar14);
        _objc_release(puVar1);
        _objc_release(puVar11);
        _objc_release(puVar3);
        _objc_release(puVar9);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar22) {
          ___stack_chk_fail();
          _objc_retain();
          _objc_retain(puVar9);
          func_0x00010c08fa60(puVar9);
          func_0x00010c08fa60(puVar9);
          puVar5 = puVar9;
          func_0x00010c25cf00(puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf649e0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR_PTR_1126af5d0;
          if (puVar14 == (undefined *)0x0) {
            puVar24 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa01c0(puVar13);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar15 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            func_0x00010bdc1900();
            _objc_retainAutoreleasedReturnValue();
            puVar24 = (undefined *)0x0;
            _objc_retain(0);
            puVar16 = puVar15;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar15;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar15;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if ((((puVar17 == (undefined *)0x0) || (puVar16 == (undefined *)0x0)) ||
                (puVar18 == (undefined *)0x0)) ||
               (((puVar13 = puVar18, func_0x00010c0720c0(), ((ulong)puVar13 & 1) == 0 &&
                 (puVar13 = puVar18, func_0x00010c0720c0(), ((ulong)puVar13 & 1) == 0)) &&
                (puVar13 = puVar18, func_0x00010c0720c0(), ((ulong)puVar13 & 1) == 0)))) {
              puVar13 = PTR_PTR_1126af5d0;
              puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfa01c0(puVar13);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar13 = PTR_PTR_1126af5d0;
              puVar19 = PTR_PTR_1126b9668;
              _objc_alloc(PTR_PTR_1126b9668);
              puVar3 = puVar9;
              func_0x00010bdc1b20(puVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bff45e0(puVar19);
              func_0x00010c2619e0(puVar13);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar19);
            }
            _objc_release(puVar3);
            _objc_release(puVar18);
            _objc_release(puVar17);
            _objc_release(puVar16);
            _objc_release(puVar15);
          }
          _objc_release(puVar24);
          _objc_release(puVar5);
          _objc_release(puVar14);
          _objc_release(puVar9);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10549985c; end: 105499a8b;  */

/* WARNING: Removing unreachable block (ram,0x000105499f04) */
/* WARNING: Removing unreachable block (ram,0x00010549ab18) */
/* WARNING: Removing unreachable block (ram,0x00010549b8e0) */

void FUN_10549985c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  long *plVar23;
  undefined *puVar24;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 *puStack_8e0;
  undefined8 auStack_8d8 [2];
  char cStack_8c1;
  undefined8 auStack_8c0 [2];
  char cStack_8a9;
  long lStack_8a8;
  undefined8 *puStack_8a0;
  undefined8 *puStack_898;
  undefined8 *puStack_890;
  undefined8 *puStack_888;
  undefined8 *puStack_880;
  undefined8 *puStack_878;
  undefined8 ***pppuStack_870;
  code *pcStack_868;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 *puStack_840;
  undefined8 auStack_838 [2];
  char cStack_821;
  undefined8 auStack_820 [2];
  char cStack_809;
  long lStack_808;
  undefined8 *puStack_800;
  undefined8 *puStack_7f8;
  undefined8 *puStack_7f0;
  undefined8 *puStack_7e8;
  undefined8 *puStack_7e0;
  undefined8 *puStack_7d8;
  undefined8 ***pppuStack_7d0;
  code *pcStack_7c8;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 *puStack_7a0;
  undefined8 auStack_798 [2];
  char cStack_781;
  undefined8 auStack_780 [2];
  char cStack_769;
  long lStack_768;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined8 *puStack_750;
  undefined8 *puStack_748;
  undefined8 *puStack_740;
  undefined8 *puStack_738;
  undefined8 ***pppuStack_730;
  code *pcStack_728;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 *puStack_700;
  undefined8 auStack_6f8 [2];
  char cStack_6e1;
  undefined8 auStack_6e0 [2];
  char cStack_6c9;
  long lStack_6c8;
  undefined8 *puStack_6c0;
  undefined8 *puStack_6b8;
  undefined8 *puStack_6b0;
  undefined8 *puStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined8 ***pppuStack_690;
  code *pcStack_688;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 *puStack_660;
  undefined8 auStack_658 [2];
  char cStack_641;
  undefined8 auStack_640 [2];
  char cStack_629;
  long lStack_628;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined8 *puStack_610;
  undefined8 *puStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 ***pppuStack_5f0;
  code *pcStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined1 *puStack_5c8;
  undefined8 auStack_5c0 [3];
  undefined1 auStack_5a8 [24];
  undefined8 auStack_590 [2];
  char cStack_579;
  long lStack_578;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 *puStack_500;
  undefined8 auStack_4f8 [2];
  char cStack_4e1;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [3];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar8 = param_3;
  puVar7 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar23 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = (undefined8 *)&UNK_11088deb8;
    unaff_x23 = &uStack_98;
    puVar8 = &uStack_98;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar22 = 0;
    puVar4 = auStack_78;
    puVar7 = param_4;
    do {
      if ((&cStack_49)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_105499a8c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar1;
  puVar5 = puVar8;
  puVar9 = puVar7;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar4;
  puStack_c8 = puVar2;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar8);
  if (puVar3 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar3[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar4 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_118,puVar4);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar4 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_100,puVar4);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar11 = (undefined8 *)&UNK_11088df08;
    unaff_x23 = &uStack_138;
    puVar5 = &uStack_138;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar22 = 0;
    puVar9 = puVar7;
    do {
      if ((&cStack_e9)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  _objc_release(puVar8);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar3 = &uStack_200;
  pcStack_148 = FUN_105499cbc;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar11;
  puVar8 = puVar5;
  puVar7 = puVar9;
  puVar2 = param_5;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar11);
  _objc_retain(puVar9);
  if (puVar4 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar4[1];
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar1 = puVar11;
      _objc_retainAutorelease(puVar11);
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_1e0,puVar1);
    puVar12 = &UNK_10f2c426a;
    if ((int)puVar5 == 0) {
      puVar12 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_1c8,puVar12);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar5 = puVar9;
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_1b0,puVar5);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_198,3);
    puVar1 = (undefined8 *)&UNK_11088df58;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    lVar22 = 0;
    puVar8 = puVar3;
    puVar7 = param_5;
    do {
      if ((&cStack_199)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
      unaff_x23 = &uStack_200;
    } while (lVar22 != -0x48);
  }
  _objc_release(puVar9);
  puVar4 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  puStack_230 = auStack_1e0;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_230);
  _objc_release(puVar9);
  _objc_release(puVar11);
  puVar6 = puVar4;
  __Unwind_Resume();
  pcStack_208 = FUN_105499f34;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar10 = puVar8;
  puVar20 = puVar7;
  puStack_240 = puVar5;
  puStack_238 = unaff_x23;
  puStack_228 = puVar4;
  puStack_220 = puVar9;
  puStack_218 = puVar11;
  pppuStack_210 = &ppuStack_150;
  _objc_retain(puVar8);
  puVar4 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar6[1];
    puVar12 = &UNK_10f2c426a;
    if ((int)puVar1 == 0) {
      puVar12 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_278;
    func_0x00010002b838(auStack_278,puVar12);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_260,puVar1);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    func_0x00010007e1e8(&uStack_298,auStack_278,&lStack_248,2);
    puVar3 = (undefined8 *)&UNK_11088dfa8;
    puVar1 = &uStack_298;
    puVar10 = &uStack_298;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_280 = puVar1;
    func_0x00010007e5dc(&puStack_280);
    lVar22 = 0;
    puVar4 = auStack_278;
    puVar20 = puVar7;
    do {
      if ((&cStack_249)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  puVar7 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(puVar8);
  puVar6 = puVar7;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10549a120;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar3;
  puVar9 = puVar10;
  puVar21 = puVar20;
  puStack_2e0 = puVar5;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar1;
  puStack_2c8 = puVar4;
  puStack_2c0 = puVar7;
  puStack_2b8 = puVar8;
  pppuStack_2b0 = &pppuStack_210;
  _objc_retain(puVar10);
  puVar1 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar6[1];
    puVar12 = &UNK_10f2c426a;
    if ((int)puVar3 == 0) {
      puVar12 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_318;
    func_0x00010002b838(auStack_318,puVar12);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar1 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_300,puVar1);
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    func_0x00010007e1e8(&uStack_338,auStack_318,&lStack_2e8,2);
    puVar11 = (undefined8 *)&UNK_11088dff8;
    puVar3 = &uStack_338;
    puVar9 = &uStack_338;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_320 = puVar3;
    func_0x00010007e5dc(&puStack_320);
    lVar22 = 0;
    puVar1 = auStack_318;
    puVar21 = puVar20;
    do {
      if ((&cStack_2e9)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  puVar8 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
    ___stack_chk_fail();
    _objc_release(puVar10);
    if (cStack_301 < '\0') {
      __ZdlPv(auStack_318[0]);
    }
    _objc_release(puVar10);
    puVar6 = puVar8;
    __Unwind_Resume();
    pcStack_348 = FUN_10549a30c;
    lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar11;
    puVar7 = puVar9;
    puVar20 = puVar21;
    puStack_380 = puVar5;
    puStack_378 = unaff_x23;
    puStack_370 = puVar3;
    puStack_368 = puVar1;
    puStack_360 = puVar8;
    puStack_358 = puVar10;
    pppuStack_350 = &pppuStack_2b0;
    _objc_retain(puVar9);
    puVar1 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      plVar23 = (long *)puVar6[1];
      puVar12 = &UNK_10f2c426a;
      if ((int)puVar11 == 0) {
        puVar12 = &UNK_10f2c426f;
      }
      unaff_x23 = auStack_3b8;
      func_0x00010002b838(auStack_3b8,puVar12);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar1 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_3a0,puVar1);
      uStack_3d8 = 0;
      uStack_3d0 = 0;
      uStack_3c8 = 0;
      func_0x00010007e1e8(&uStack_3d8,auStack_3b8,&lStack_388,2);
      puVar4 = (undefined8 *)&UNK_11088e048;
      puVar11 = &uStack_3d8;
      puVar7 = &uStack_3d8;
      (**(code **)(*plVar23 + 0x18))(plVar23);
      puStack_3c0 = puVar11;
      func_0x00010007e5dc(&puStack_3c0);
      lVar22 = 0;
      puVar1 = auStack_3b8;
      puVar20 = puVar21;
      do {
        if ((&cStack_389)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x30);
    }
    puVar8 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar9);
    if (cStack_3a1 < '\0') {
      __ZdlPv(auStack_3b8[0]);
    }
    _objc_release(puVar9);
    puVar6 = puVar8;
    __Unwind_Resume();
    pcStack_3e8 = FUN_10549a4f8;
    lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar4;
    puVar10 = puVar7;
    puVar21 = puVar20;
    puStack_420 = puVar5;
    puStack_418 = unaff_x23;
    puStack_410 = puVar11;
    puStack_408 = puVar1;
    puStack_400 = puVar8;
    puStack_3f8 = puVar9;
    pppuStack_3f0 = &pppuStack_350;
    _objc_retain(puVar7);
    puVar1 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      plVar23 = (long *)puVar6[1];
      puVar12 = &UNK_10f2c426a;
      if ((int)puVar4 == 0) {
        puVar12 = &UNK_10f2c426f;
      }
      unaff_x23 = auStack_458;
      func_0x00010002b838(auStack_458,puVar12);
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar1 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_440,puVar1);
      uStack_478 = 0;
      uStack_470 = 0;
      uStack_468 = 0;
      func_0x00010007e1e8(&uStack_478,auStack_458,&lStack_428,2);
      puVar3 = (undefined8 *)&UNK_11088e098;
      puVar4 = &uStack_478;
      puVar10 = &uStack_478;
      (**(code **)(*plVar23 + 0x18))(plVar23);
      puStack_460 = puVar4;
      func_0x00010007e5dc(&puStack_460);
      lVar22 = 0;
      puVar1 = auStack_458;
      puVar21 = puVar20;
      do {
        if ((&cStack_429)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x30);
    }
    puVar8 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar7);
    if (cStack_441 < '\0') {
      __ZdlPv(auStack_458[0]);
    }
    _objc_release(puVar7);
    puVar6 = puVar8;
    __Unwind_Resume();
    pcStack_488 = FUN_10549a6e4;
    lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar11 = puVar3;
    puVar9 = puVar10;
    puVar20 = puVar21;
    puStack_4c0 = puVar5;
    puStack_4b8 = unaff_x23;
    puStack_4b0 = puVar4;
    puStack_4a8 = puVar1;
    puStack_4a0 = puVar8;
    puStack_498 = puVar7;
    pppuStack_490 = &pppuStack_3f0;
    _objc_retain(puVar10);
    if (puVar6 != (undefined8 *)0x0) {
      plVar23 = (long *)puVar6[1];
      puVar12 = &UNK_10f2c426a;
      if ((int)puVar3 == 0) {
        puVar12 = &UNK_10f2c426f;
      }
      unaff_x23 = auStack_4f8;
      func_0x00010002b838(auStack_4f8,puVar12);
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar1 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x00010002b838(auStack_4e0,puVar1);
      uStack_518 = 0;
      uStack_510 = 0;
      uStack_508 = 0;
      func_0x00010007e1e8(&uStack_518,auStack_4f8,&lStack_4c8,2);
      puVar11 = (undefined8 *)&UNK_11088e0e8;
      puVar9 = &uStack_518;
      (**(code **)(*plVar23 + 0x18))(plVar23);
      puStack_500 = &uStack_518;
      func_0x00010007e5dc(&puStack_500);
      lVar22 = 0;
      puVar20 = puVar21;
      do {
        if ((&cStack_4c9)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4e0 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x30);
    }
    puVar1 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar10);
    if (cStack_4e1 < '\0') {
      __ZdlPv(auStack_4f8[0]);
    }
    _objc_release(puVar10);
    __Unwind_Resume();
    puVar5 = &uStack_5e0;
    pcStack_528 = FUN_10549a8d0;
    lStack_578 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar11;
    puVar4 = puVar9;
    puVar7 = puVar20;
    pppuStack_530 = &pppuStack_490;
    _objc_retain(puVar11);
    _objc_retain(puVar20);
    if (puVar1 != (undefined8 *)0x0) {
      plVar23 = (long *)puVar1[1];
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        puVar1 = puVar11;
        _objc_retainAutorelease(puVar11);
        func_0x00010bdc3520();
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_5c0,puVar1);
      puVar12 = &UNK_10f2c426a;
      if ((int)puVar9 == 0) {
        puVar12 = &UNK_10f2c426f;
      }
      func_0x00010002b838(auStack_5a8,puVar12);
      _objc_retain(puVar20);
      if (puVar20 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar20);
        puVar9 = puVar20;
        func_0x00010bdc3520();
      }
      _objc_release(puVar20);
      func_0x00010002b838(auStack_590,puVar9);
      uStack_5e0 = 0;
      uStack_5d8 = 0;
      uStack_5d0 = 0;
      func_0x00010007e1e8(&uStack_5e0,auStack_5c0,&lStack_578,3);
      puVar8 = (undefined8 *)&UNK_11088e138;
      (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11088e138,&uStack_5e0,puVar2);
      puStack_5c8 = (undefined1 *)&uStack_5e0;
      func_0x00010007e5dc(&puStack_5c8);
      lVar22 = 0;
      puVar4 = puVar5;
      puVar7 = puVar2;
      do {
        if ((&cStack_579)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_590 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
        unaff_x23 = &uStack_5e0;
      } while (lVar22 != -0x48);
    }
    _objc_release(puVar20);
    puVar1 = puVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_578) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar20);
    puStack_610 = auStack_5c0;
    do {
      unaff_x23 = unaff_x23 + -3;
    } while (unaff_x23 != puStack_610);
    _objc_release(puVar20);
    _objc_release(puVar11);
    puVar3 = puVar1;
    __Unwind_Resume();
    pcStack_5e8 = FUN_10549ab48;
    lStack_628 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = puVar8;
    puVar5 = puVar4;
    puVar10 = puVar7;
    puStack_620 = puVar9;
    puStack_618 = unaff_x23;
    puStack_608 = puVar1;
    puStack_600 = puVar20;
    puStack_5f8 = puVar11;
    pppuStack_5f0 = &pppuStack_530;
    _objc_retain(puVar4);
    puVar1 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      plVar23 = (long *)puVar3[1];
      puVar12 = &UNK_10f2c426a;
      if ((int)puVar8 == 0) {
        puVar12 = &UNK_10f2c426f;
      }
      unaff_x23 = auStack_658;
      func_0x00010002b838(auStack_658,puVar12);
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar1 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_640,puVar1);
      uStack_678 = 0;
      uStack_670 = 0;
      uStack_668 = 0;
      func_0x00010007e1e8(&uStack_678,auStack_658,&lStack_628,2);
      puVar2 = (undefined8 *)&UNK_11088e188;
      puVar8 = &uStack_678;
      puVar5 = &uStack_678;
      (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11088e188,puVar5,puVar7);
      puStack_660 = puVar8;
      func_0x00010007e5dc(&puStack_660);
      lVar22 = 0;
      puVar1 = auStack_658;
      puVar10 = puVar7;
      do {
        if ((&cStack_629)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_640 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x30);
    }
    puVar7 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_628) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar4);
    if (cStack_641 < '\0') {
      __ZdlPv(auStack_658[0]);
    }
    _objc_release(puVar4);
    puVar6 = puVar7;
    __Unwind_Resume();
    pcStack_688 = FUN_10549ad34;
    lStack_6c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar11 = puVar2;
    puVar3 = puVar5;
    puVar20 = puVar10;
    puStack_6c0 = puVar9;
    puStack_6b8 = unaff_x23;
    puStack_6b0 = puVar8;
    puStack_6a8 = puVar1;
    puStack_6a0 = puVar7;
    puStack_698 = puVar4;
    pppuStack_690 = &pppuStack_5f0;
    _objc_retain(puVar5);
    puVar1 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      plVar23 = (long *)puVar6[1];
      puVar12 = &UNK_10f2c426a;
      if ((int)puVar2 == 0) {
        puVar12 = &UNK_10f2c426f;
      }
      unaff_x23 = auStack_6f8;
      func_0x00010002b838(auStack_6f8,puVar12);
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar1 = puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x00010002b838(auStack_6e0,puVar1);
      uStack_718 = 0;
      uStack_710 = 0;
      uStack_708 = 0;
      func_0x00010007e1e8(&uStack_718,auStack_6f8,&lStack_6c8,2);
      puVar11 = (undefined8 *)&UNK_11088e1d8;
      puVar2 = &uStack_718;
      puVar3 = &uStack_718;
      (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11088e1d8,puVar3,puVar10);
      puStack_700 = puVar2;
      func_0x00010007e5dc(&puStack_700);
      lVar22 = 0;
      puVar1 = auStack_6f8;
      puVar20 = puVar10;
      do {
        if ((&cStack_6c9)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_6e0 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x30);
    }
    puVar8 = puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar5);
    if (cStack_6e1 < '\0') {
      __ZdlPv(auStack_6f8[0]);
    }
    _objc_release(puVar5);
    puVar10 = puVar8;
    __Unwind_Resume();
    pcStack_728 = FUN_10549af20;
    lStack_768 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar11;
    puVar7 = puVar3;
    puVar6 = puVar20;
    puStack_760 = puVar9;
    puStack_758 = unaff_x23;
    puStack_750 = puVar2;
    puStack_748 = puVar1;
    puStack_740 = puVar8;
    puStack_738 = puVar5;
    pppuStack_730 = &pppuStack_690;
    _objc_retain(puVar3);
    puVar1 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      plVar23 = (long *)puVar10[1];
      puVar12 = &UNK_10f2c426a;
      if ((int)puVar11 == 0) {
        puVar12 = &UNK_10f2c426f;
      }
      unaff_x23 = auStack_798;
      func_0x00010002b838(auStack_798,puVar12);
      _objc_retain(puVar3);
      if (puVar3 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar3);
        puVar1 = puVar3;
        func_0x00010bdc3520(puVar3);
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_780,puVar1);
      uStack_7b8 = 0;
      uStack_7b0 = 0;
      uStack_7a8 = 0;
      func_0x00010007e1e8(&uStack_7b8,auStack_798,&lStack_768,2);
      puVar4 = (undefined8 *)&UNK_11088e228;
      puVar11 = &uStack_7b8;
      puVar7 = &uStack_7b8;
      (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11088e228,puVar7,puVar20);
      puStack_7a0 = puVar11;
      func_0x00010007e5dc(&puStack_7a0);
      lVar22 = 0;
      puVar1 = auStack_798;
      puVar6 = puVar20;
      do {
        if ((&cStack_769)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_780 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x30);
    }
    puVar8 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_768) {
      ___stack_chk_fail();
      _objc_release(puVar3);
      if (cStack_781 < '\0') {
        __ZdlPv(auStack_798[0]);
      }
      _objc_release(puVar3);
      puVar5 = puVar8;
      __Unwind_Resume();
      pcStack_7c8 = FUN_10549b10c;
      lStack_808 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar10 = puVar4;
      puVar2 = puVar7;
      puVar20 = puVar6;
      puStack_800 = puVar9;
      puStack_7f8 = unaff_x23;
      puStack_7f0 = puVar11;
      puStack_7e8 = puVar1;
      puStack_7e0 = puVar8;
      puStack_7d8 = puVar3;
      pppuStack_7d0 = &pppuStack_730;
      _objc_retain(puVar7);
      iVar19 = (int)puVar10;
      puVar1 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        plVar23 = (long *)puVar5[1];
        puVar12 = &UNK_10f2c426a;
        if ((int)puVar4 == 0) {
          puVar12 = &UNK_10f2c426f;
        }
        unaff_x23 = auStack_838;
        func_0x00010002b838(auStack_838,puVar12);
        _objc_retain(puVar7);
        if (puVar7 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f2c4275;
        }
        else {
          _objc_retainAutorelease(puVar7);
          puVar1 = puVar7;
          func_0x00010bdc3520(puVar7);
        }
        _objc_release(puVar7);
        func_0x00010002b838(auStack_820,puVar1);
        uStack_858 = 0;
        uStack_850 = 0;
        uStack_848 = 0;
        func_0x00010007e1e8(&uStack_858,auStack_838,&lStack_808,2);
        puVar12 = &UNK_11088e278;
        puVar4 = &uStack_858;
        puVar2 = &uStack_858;
        (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11088e278,puVar2,puVar6);
        puStack_840 = puVar4;
        func_0x00010007e5dc(&puStack_840);
        lVar22 = 0;
        puVar1 = auStack_838;
        puVar20 = puVar6;
        do {
          if ((&cStack_809)[lVar22] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_820 + lVar22));
          }
          iVar19 = (int)puVar12;
          lVar22 = lVar22 + -0x18;
        } while (lVar22 != -0x30);
      }
      puVar8 = puVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_808) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(puVar7);
      if (cStack_821 < '\0') {
        __ZdlPv(auStack_838[0]);
      }
      _objc_release(puVar7);
      puVar11 = puVar8;
      __Unwind_Resume();
      pcStack_868 = FUN_10549b2f8;
      lStack_8a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_8a0 = puVar9;
      puStack_898 = unaff_x23;
      puStack_890 = puVar4;
      puStack_888 = puVar1;
      puStack_880 = puVar8;
      puStack_878 = puVar7;
      pppuStack_870 = &pppuStack_7d0;
      _objc_retain(puVar2);
      if (puVar11 != (undefined8 *)0x0) {
        plVar23 = (long *)puVar11[1];
        puVar12 = &UNK_10f2c426a;
        if (iVar19 == 0) {
          puVar12 = &UNK_10f2c426f;
        }
        func_0x00010002b838(auStack_8d8,puVar12);
        _objc_retain(puVar2);
        if (puVar2 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f2c4275;
        }
        else {
          _objc_retainAutorelease(puVar2);
          puVar1 = puVar2;
          func_0x00010bdc3520(puVar2);
        }
        _objc_release(puVar2);
        func_0x00010002b838(auStack_8c0,puVar1);
        uStack_8f8 = 0;
        uStack_8f0 = 0;
        uStack_8e8 = 0;
        func_0x00010007e1e8(&uStack_8f8,auStack_8d8,&lStack_8a8,2);
        (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11088e2c8,&uStack_8f8,puVar20);
        puStack_8e0 = &uStack_8f8;
        func_0x00010007e5dc(&puStack_8e0);
        lVar22 = 0;
        do {
          if ((&cStack_8a9)[lVar22] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_8c0 + lVar22));
          }
          lVar22 = lVar22 + -0x18;
        } while (lVar22 != -0x30);
      }
      puVar1 = puVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_8a8) {
        ___stack_chk_fail();
        _objc_release(puVar2);
        if (cStack_8c1 < '\0') {
          __ZdlPv(auStack_8d8[0]);
        }
        _objc_release(puVar2);
        __Unwind_Resume();
        lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar1;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar8 != (undefined8 *)0x0) {
          puVar8 = puVar1;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar8;
          func_0x00010bf93420();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar1;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar7;
          func_0x00010bfdea00();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar1;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar11;
          func_0x00010bf0b760();
          FUN_10549be84();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar12);
          _objc_release(puVar5);
          _objc_release(puVar11);
          _objc_release(puVar13);
          _objc_release(puVar2);
          _objc_release(puVar7);
          _objc_release(puVar4);
          _objc_release(puVar8);
        }
        puVar8 = puVar1;
        func_0x00010bf13240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar8 != (undefined8 *)0x0) {
          puVar8 = puVar1;
          func_0x00010bf13240(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar12);
          _objc_release(puVar8);
        }
        puVar8 = puVar1;
        func_0x00010c118b20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar8 != (undefined8 *)0x0) {
          puVar8 = puVar1;
          func_0x00010c118b20(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar12);
          _objc_release(puVar8);
        }
        puVar8 = puVar1;
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar8;
        func_0x00010bf93420();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar1;
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar7;
        func_0x00010bfdea00();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar1;
        func_0x00010bf0b760();
        FUN_10549be84();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar1);
        _objc_release(puVar13);
        _objc_release(puVar2);
        _objc_release(puVar7);
        _objc_release(puVar4);
        _objc_release(puVar8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar22) {
          ___stack_chk_fail();
          _objc_retain();
          _objc_retain(puVar8);
          func_0x00010c08fa60(puVar8);
          func_0x00010c08fa60(puVar8);
          puVar1 = puVar8;
          func_0x00010c25cf00(puVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf649e0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR_PTR_1126af5d0;
          if (puVar13 == (undefined *)0x0) {
            puVar24 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa01c0(puVar12);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar14 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            func_0x00010bdc1900();
            _objc_retainAutoreleasedReturnValue();
            puVar24 = (undefined *)0x0;
            _objc_retain(0);
            puVar15 = puVar14;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar14;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar14;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if ((((puVar16 == (undefined *)0x0) || (puVar15 == (undefined *)0x0)) ||
                (puVar17 == (undefined *)0x0)) ||
               (((puVar12 = puVar17, func_0x00010c0720c0(), ((ulong)puVar12 & 1) == 0 &&
                 (puVar12 = puVar17, func_0x00010c0720c0(), ((ulong)puVar12 & 1) == 0)) &&
                (puVar12 = puVar17, func_0x00010c0720c0(), ((ulong)puVar12 & 1) == 0)))) {
              puVar12 = PTR_PTR_1126af5d0;
              puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfa01c0(puVar12);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar12 = PTR_PTR_1126af5d0;
              puVar18 = PTR_PTR_1126b9668;
              _objc_alloc(PTR_PTR_1126b9668);
              puVar4 = puVar8;
              func_0x00010bdc1b20(puVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bff45e0(puVar18);
              func_0x00010c2619e0(puVar12);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar18);
            }
            _objc_release(puVar4);
            _objc_release(puVar17);
            _objc_release(puVar16);
            _objc_release(puVar15);
            _objc_release(puVar14);
          }
          _objc_release(puVar24);
          _objc_release(puVar1);
          _objc_release(puVar13);
          _objc_release(puVar8);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105499a8c; end: 105499cbb;  */

/* WARNING: Removing unreachable block (ram,0x000105499f04) */
/* WARNING: Removing unreachable block (ram,0x00010549ab18) */
/* WARNING: Removing unreachable block (ram,0x00010549b8e0) */

void FUN_105499a8c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  long *plVar23;
  undefined *puVar24;
  undefined8 *unaff_x23;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 *puStack_840;
  undefined8 auStack_838 [2];
  char cStack_821;
  undefined8 auStack_820 [2];
  char cStack_809;
  long lStack_808;
  undefined8 *puStack_800;
  undefined8 *puStack_7f8;
  undefined8 *puStack_7f0;
  undefined8 *puStack_7e8;
  undefined8 *puStack_7e0;
  undefined8 *puStack_7d8;
  undefined8 ***pppuStack_7d0;
  code *pcStack_7c8;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 *puStack_7a0;
  undefined8 auStack_798 [2];
  char cStack_781;
  undefined8 auStack_780 [2];
  char cStack_769;
  long lStack_768;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined8 *puStack_750;
  undefined8 *puStack_748;
  undefined8 *puStack_740;
  undefined8 *puStack_738;
  undefined8 ***pppuStack_730;
  code *pcStack_728;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 *puStack_700;
  undefined8 auStack_6f8 [2];
  char cStack_6e1;
  undefined8 auStack_6e0 [2];
  char cStack_6c9;
  long lStack_6c8;
  undefined8 *puStack_6c0;
  undefined8 *puStack_6b8;
  undefined8 *puStack_6b0;
  undefined8 *puStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined8 ***pppuStack_690;
  code *pcStack_688;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 *puStack_660;
  undefined8 auStack_658 [2];
  char cStack_641;
  undefined8 auStack_640 [2];
  char cStack_629;
  long lStack_628;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined8 *puStack_610;
  undefined8 *puStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 ***pppuStack_5f0;
  code *pcStack_5e8;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 auStack_5b8 [2];
  char cStack_5a1;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  undefined8 auStack_520 [3];
  undefined1 auStack_508 [24];
  undefined8 auStack_4f0 [2];
  char cStack_4d9;
  long lStack_4d8;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  puVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar23 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = (undefined8 *)&UNK_11088df08;
    unaff_x23 = &uStack_98;
    puVar3 = &uStack_98;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar22 = 0;
    puVar5 = param_4;
    do {
      if ((&cStack_49)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar7 = &uStack_160;
  pcStack_a8 = FUN_105499cbc;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar1;
  puVar13 = puVar3;
  puVar6 = puVar5;
  puVar9 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  if (puVar2 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar2[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_140,puVar2);
    puVar11 = &UNK_10f2c426a;
    if ((int)puVar3 == 0) {
      puVar11 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_128,puVar11);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_110,puVar3);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
    puVar10 = (undefined8 *)&UNK_11088df58;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_148 = (undefined1 *)&uStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar22 = 0;
    puVar13 = puVar7;
    puVar6 = param_5;
    do {
      if ((&cStack_f9)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
      unaff_x23 = &uStack_160;
    } while (lVar22 != -0x48);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  puStack_190 = auStack_140;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_190);
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_168 = FUN_105499f34;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar10;
  puVar8 = puVar13;
  puVar20 = puVar6;
  puStack_1a0 = puVar3;
  puStack_198 = unaff_x23;
  puStack_188 = puVar2;
  puStack_180 = puVar5;
  puStack_178 = puVar1;
  ppuStack_170 = &puStack_b0;
  _objc_retain(puVar13);
  puVar1 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar4[1];
    puVar11 = &UNK_10f2c426a;
    if ((int)puVar10 == 0) {
      puVar11 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_1d8;
    func_0x00010002b838(auStack_1d8,puVar11);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar1 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_1c0,puVar1);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    func_0x00010007e1e8(&uStack_1f8,auStack_1d8,&lStack_1a8,2);
    puVar7 = (undefined8 *)&UNK_11088dfa8;
    puVar10 = &uStack_1f8;
    puVar8 = &uStack_1f8;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_1e0 = puVar10;
    func_0x00010007e5dc(&puStack_1e0);
    lVar22 = 0;
    puVar1 = auStack_1d8;
    puVar20 = puVar6;
    do {
      if ((&cStack_1a9)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  puVar5 = puVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  _objc_release(puVar13);
  puVar4 = puVar5;
  __Unwind_Resume();
  pcStack_208 = FUN_10549a120;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar6 = puVar8;
  puVar21 = puVar20;
  puStack_240 = puVar3;
  puStack_238 = unaff_x23;
  puStack_230 = puVar10;
  puStack_228 = puVar1;
  puStack_220 = puVar5;
  puStack_218 = puVar13;
  pppuStack_210 = &ppuStack_170;
  _objc_retain(puVar8);
  puVar1 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar4[1];
    puVar11 = &UNK_10f2c426a;
    if ((int)puVar7 == 0) {
      puVar11 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_278;
    func_0x00010002b838(auStack_278,puVar11);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_260,puVar1);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    func_0x00010007e1e8(&uStack_298,auStack_278,&lStack_248,2);
    puVar2 = (undefined8 *)&UNK_11088dff8;
    puVar7 = &uStack_298;
    puVar6 = &uStack_298;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_280 = puVar7;
    func_0x00010007e5dc(&puStack_280);
    lVar22 = 0;
    puVar1 = auStack_278;
    puVar21 = puVar20;
    do {
      if ((&cStack_249)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  puVar5 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(puVar8);
  puVar4 = puVar5;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10549a30c;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar2;
  puVar13 = puVar6;
  puVar20 = puVar21;
  puStack_2e0 = puVar3;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar7;
  puStack_2c8 = puVar1;
  puStack_2c0 = puVar5;
  puStack_2b8 = puVar8;
  pppuStack_2b0 = &pppuStack_210;
  _objc_retain(puVar6);
  puVar1 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar4[1];
    puVar11 = &UNK_10f2c426a;
    if ((int)puVar2 == 0) {
      puVar11 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_318;
    func_0x00010002b838(auStack_318,puVar11);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar1 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_300,puVar1);
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    func_0x00010007e1e8(&uStack_338,auStack_318,&lStack_2e8,2);
    puVar10 = (undefined8 *)&UNK_11088e048;
    puVar2 = &uStack_338;
    puVar13 = &uStack_338;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_320 = puVar2;
    func_0x00010007e5dc(&puStack_320);
    lVar22 = 0;
    puVar1 = auStack_318;
    puVar20 = puVar21;
    do {
      if ((&cStack_2e9)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  puVar5 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_301 < '\0') {
    __ZdlPv(auStack_318[0]);
  }
  _objc_release(puVar6);
  puVar4 = puVar5;
  __Unwind_Resume();
  pcStack_348 = FUN_10549a4f8;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar10;
  puVar8 = puVar13;
  puVar21 = puVar20;
  puStack_380 = puVar3;
  puStack_378 = unaff_x23;
  puStack_370 = puVar2;
  puStack_368 = puVar1;
  puStack_360 = puVar5;
  puStack_358 = puVar6;
  pppuStack_350 = &pppuStack_2b0;
  _objc_retain(puVar13);
  puVar1 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar23 = (long *)puVar4[1];
    puVar11 = &UNK_10f2c426a;
    if ((int)puVar10 == 0) {
      puVar11 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_3b8;
    func_0x00010002b838(auStack_3b8,puVar11);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar1 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_3a0,puVar1);
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    func_0x00010007e1e8(&uStack_3d8,auStack_3b8,&lStack_388,2);
    puVar7 = (undefined8 *)&UNK_11088e098;
    puVar10 = &uStack_3d8;
    puVar8 = &uStack_3d8;
    (**(code **)(*plVar23 + 0x18))(plVar23);
    puStack_3c0 = puVar10;
    func_0x00010007e5dc(&puStack_3c0);
    lVar22 = 0;
    puVar1 = auStack_3b8;
    puVar21 = puVar20;
    do {
      if ((&cStack_389)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  puVar5 = puVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_388) {
    ___stack_chk_fail();
    _objc_release(puVar13);
    if (cStack_3a1 < '\0') {
      __ZdlPv(auStack_3b8[0]);
    }
    _objc_release(puVar13);
    puVar4 = puVar5;
    __Unwind_Resume();
    pcStack_3e8 = FUN_10549a6e4;
    lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = puVar7;
    puVar6 = puVar8;
    puVar20 = puVar21;
    puStack_420 = puVar3;
    puStack_418 = unaff_x23;
    puStack_410 = puVar10;
    puStack_408 = puVar1;
    puStack_400 = puVar5;
    puStack_3f8 = puVar13;
    pppuStack_3f0 = &pppuStack_350;
    _objc_retain(puVar8);
    if (puVar4 != (undefined8 *)0x0) {
      plVar23 = (long *)puVar4[1];
      puVar11 = &UNK_10f2c426a;
      if ((int)puVar7 == 0) {
        puVar11 = &UNK_10f2c426f;
      }
      unaff_x23 = auStack_458;
      func_0x00010002b838(auStack_458,puVar11);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar1 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_440,puVar1);
      uStack_478 = 0;
      uStack_470 = 0;
      uStack_468 = 0;
      func_0x00010007e1e8(&uStack_478,auStack_458,&lStack_428,2);
      puVar2 = (undefined8 *)&UNK_11088e0e8;
      puVar6 = &uStack_478;
      (**(code **)(*plVar23 + 0x18))(plVar23);
      puStack_460 = &uStack_478;
      func_0x00010007e5dc(&puStack_460);
      lVar22 = 0;
      puVar20 = puVar21;
      do {
        if ((&cStack_429)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x30);
    }
    puVar1 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar8);
    if (cStack_441 < '\0') {
      __ZdlPv(auStack_458[0]);
    }
    _objc_release(puVar8);
    __Unwind_Resume();
    puVar13 = &uStack_540;
    pcStack_488 = FUN_10549a8d0;
    lStack_4d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar2;
    puVar5 = puVar6;
    puVar10 = puVar20;
    pppuStack_490 = &pppuStack_3f0;
    _objc_retain(puVar2);
    _objc_retain(puVar20);
    if (puVar1 != (undefined8 *)0x0) {
      plVar23 = (long *)puVar1[1];
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        puVar1 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_520,puVar1);
      puVar11 = &UNK_10f2c426a;
      if ((int)puVar6 == 0) {
        puVar11 = &UNK_10f2c426f;
      }
      func_0x00010002b838(auStack_508,puVar11);
      _objc_retain(puVar20);
      if (puVar20 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar20);
        puVar6 = puVar20;
        func_0x00010bdc3520();
      }
      _objc_release(puVar20);
      func_0x00010002b838(auStack_4f0,puVar6);
      uStack_540 = 0;
      uStack_538 = 0;
      uStack_530 = 0;
      func_0x00010007e1e8(&uStack_540,auStack_520,&lStack_4d8,3);
      puVar3 = (undefined8 *)&UNK_11088e138;
      (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11088e138,&uStack_540,puVar9);
      puStack_528 = (undefined1 *)&uStack_540;
      func_0x00010007e5dc(&puStack_528);
      lVar22 = 0;
      puVar5 = puVar13;
      puVar10 = puVar9;
      do {
        if ((&cStack_4d9)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4f0 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
        unaff_x23 = &uStack_540;
      } while (lVar22 != -0x48);
    }
    _objc_release(puVar20);
    puVar1 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4d8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar20);
    puStack_570 = auStack_520;
    do {
      unaff_x23 = unaff_x23 + -3;
    } while (unaff_x23 != puStack_570);
    _objc_release(puVar20);
    _objc_release(puVar2);
    puVar7 = puVar1;
    __Unwind_Resume();
    pcStack_548 = FUN_10549ab48;
    lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar13 = puVar3;
    puVar9 = puVar5;
    puVar8 = puVar10;
    puStack_580 = puVar6;
    puStack_578 = unaff_x23;
    puStack_568 = puVar1;
    puStack_560 = puVar20;
    puStack_558 = puVar2;
    pppuStack_550 = &pppuStack_490;
    _objc_retain(puVar5);
    puVar1 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      plVar23 = (long *)puVar7[1];
      puVar11 = &UNK_10f2c426a;
      if ((int)puVar3 == 0) {
        puVar11 = &UNK_10f2c426f;
      }
      unaff_x23 = auStack_5b8;
      func_0x00010002b838(auStack_5b8,puVar11);
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar1 = puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x00010002b838(auStack_5a0,puVar1);
      uStack_5d8 = 0;
      uStack_5d0 = 0;
      uStack_5c8 = 0;
      func_0x00010007e1e8(&uStack_5d8,auStack_5b8,&lStack_588,2);
      puVar13 = (undefined8 *)&UNK_11088e188;
      puVar3 = &uStack_5d8;
      puVar9 = &uStack_5d8;
      (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11088e188,puVar9,puVar10);
      puStack_5c0 = puVar3;
      func_0x00010007e5dc(&puStack_5c0);
      lVar22 = 0;
      puVar1 = auStack_5b8;
      puVar8 = puVar10;
      do {
        if ((&cStack_589)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_5a0 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x30);
    }
    puVar2 = puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_588) {
      ___stack_chk_fail();
      _objc_release(puVar5);
      if (cStack_5a1 < '\0') {
        __ZdlPv(auStack_5b8[0]);
      }
      _objc_release(puVar5);
      puVar4 = puVar2;
      __Unwind_Resume();
      pcStack_5e8 = FUN_10549ad34;
      lStack_628 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar10 = puVar13;
      puVar7 = puVar9;
      puVar20 = puVar8;
      puStack_620 = puVar6;
      puStack_618 = unaff_x23;
      puStack_610 = puVar3;
      puStack_608 = puVar1;
      puStack_600 = puVar2;
      puStack_5f8 = puVar5;
      pppuStack_5f0 = &pppuStack_550;
      _objc_retain(puVar9);
      puVar1 = (undefined8 *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        plVar23 = (long *)puVar4[1];
        puVar11 = &UNK_10f2c426a;
        if ((int)puVar13 == 0) {
          puVar11 = &UNK_10f2c426f;
        }
        unaff_x23 = auStack_658;
        func_0x00010002b838(auStack_658,puVar11);
        _objc_retain(puVar9);
        if (puVar9 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f2c4275;
        }
        else {
          _objc_retainAutorelease(puVar9);
          puVar1 = puVar9;
          func_0x00010bdc3520(puVar9);
        }
        _objc_release(puVar9);
        func_0x00010002b838(auStack_640,puVar1);
        uStack_678 = 0;
        uStack_670 = 0;
        uStack_668 = 0;
        func_0x00010007e1e8(&uStack_678,auStack_658,&lStack_628,2);
        puVar10 = (undefined8 *)&UNK_11088e1d8;
        puVar13 = &uStack_678;
        puVar7 = &uStack_678;
        (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11088e1d8,puVar7,puVar8);
        puStack_660 = puVar13;
        func_0x00010007e5dc(&puStack_660);
        lVar22 = 0;
        puVar1 = auStack_658;
        puVar20 = puVar8;
        do {
          if ((&cStack_629)[lVar22] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_640 + lVar22));
          }
          lVar22 = lVar22 + -0x18;
        } while (lVar22 != -0x30);
      }
      puVar3 = puVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_628) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(puVar9);
      if (cStack_641 < '\0') {
        __ZdlPv(auStack_658[0]);
      }
      _objc_release(puVar9);
      puVar8 = puVar3;
      __Unwind_Resume();
      pcStack_688 = FUN_10549af20;
      lStack_6c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar5 = puVar10;
      puVar2 = puVar7;
      puVar4 = puVar20;
      puStack_6c0 = puVar6;
      puStack_6b8 = unaff_x23;
      puStack_6b0 = puVar13;
      puStack_6a8 = puVar1;
      puStack_6a0 = puVar3;
      puStack_698 = puVar9;
      pppuStack_690 = &pppuStack_5f0;
      _objc_retain(puVar7);
      puVar1 = (undefined8 *)0x0;
      if (puVar8 != (undefined8 *)0x0) {
        plVar23 = (long *)puVar8[1];
        puVar11 = &UNK_10f2c426a;
        if ((int)puVar10 == 0) {
          puVar11 = &UNK_10f2c426f;
        }
        unaff_x23 = auStack_6f8;
        func_0x00010002b838(auStack_6f8,puVar11);
        _objc_retain(puVar7);
        if (puVar7 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f2c4275;
        }
        else {
          _objc_retainAutorelease(puVar7);
          puVar1 = puVar7;
          func_0x00010bdc3520(puVar7);
        }
        _objc_release(puVar7);
        func_0x00010002b838(auStack_6e0,puVar1);
        uStack_718 = 0;
        uStack_710 = 0;
        uStack_708 = 0;
        func_0x00010007e1e8(&uStack_718,auStack_6f8,&lStack_6c8,2);
        puVar5 = (undefined8 *)&UNK_11088e228;
        puVar10 = &uStack_718;
        puVar2 = &uStack_718;
        (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11088e228,puVar2,puVar20);
        puStack_700 = puVar10;
        func_0x00010007e5dc(&puStack_700);
        lVar22 = 0;
        puVar1 = auStack_6f8;
        puVar4 = puVar20;
        do {
          if ((&cStack_6c9)[lVar22] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_6e0 + lVar22));
          }
          lVar22 = lVar22 + -0x18;
        } while (lVar22 != -0x30);
      }
      puVar3 = puVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6c8) {
        ___stack_chk_fail();
        _objc_release(puVar7);
        if (cStack_6e1 < '\0') {
          __ZdlPv(auStack_6f8[0]);
        }
        _objc_release(puVar7);
        puVar9 = puVar3;
        __Unwind_Resume();
        pcStack_728 = FUN_10549b10c;
        lStack_768 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar8 = puVar5;
        puVar13 = puVar2;
        puVar20 = puVar4;
        puStack_760 = puVar6;
        puStack_758 = unaff_x23;
        puStack_750 = puVar10;
        puStack_748 = puVar1;
        puStack_740 = puVar3;
        puStack_738 = puVar7;
        pppuStack_730 = &pppuStack_690;
        _objc_retain(puVar2);
        iVar19 = (int)puVar8;
        puVar1 = (undefined8 *)0x0;
        if (puVar9 != (undefined8 *)0x0) {
          plVar23 = (long *)puVar9[1];
          puVar11 = &UNK_10f2c426a;
          if ((int)puVar5 == 0) {
            puVar11 = &UNK_10f2c426f;
          }
          unaff_x23 = auStack_798;
          func_0x00010002b838(auStack_798,puVar11);
          _objc_retain(puVar2);
          if (puVar2 == (undefined8 *)0x0) {
            puVar1 = (undefined8 *)&UNK_10f2c4275;
          }
          else {
            _objc_retainAutorelease(puVar2);
            puVar1 = puVar2;
            func_0x00010bdc3520(puVar2);
          }
          _objc_release(puVar2);
          func_0x00010002b838(auStack_780,puVar1);
          uStack_7b8 = 0;
          uStack_7b0 = 0;
          uStack_7a8 = 0;
          func_0x00010007e1e8(&uStack_7b8,auStack_798,&lStack_768,2);
          puVar11 = &UNK_11088e278;
          puVar5 = &uStack_7b8;
          puVar13 = &uStack_7b8;
          (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11088e278,puVar13,puVar4);
          puStack_7a0 = puVar5;
          func_0x00010007e5dc(&puStack_7a0);
          lVar22 = 0;
          puVar1 = auStack_798;
          puVar20 = puVar4;
          do {
            if ((&cStack_769)[lVar22] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_780 + lVar22));
            }
            iVar19 = (int)puVar11;
            lVar22 = lVar22 + -0x18;
          } while (lVar22 != -0x30);
        }
        puVar3 = puVar2;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_768) {
          ___stack_chk_fail();
          _objc_release(puVar2);
          if (cStack_781 < '\0') {
            __ZdlPv(auStack_798[0]);
          }
          _objc_release(puVar2);
          puVar10 = puVar3;
          __Unwind_Resume();
          pcStack_7c8 = FUN_10549b2f8;
          lStack_808 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puStack_800 = puVar6;
          puStack_7f8 = unaff_x23;
          puStack_7f0 = puVar5;
          puStack_7e8 = puVar1;
          puStack_7e0 = puVar3;
          puStack_7d8 = puVar2;
          pppuStack_7d0 = &pppuStack_730;
          _objc_retain(puVar13);
          if (puVar10 != (undefined8 *)0x0) {
            plVar23 = (long *)puVar10[1];
            puVar11 = &UNK_10f2c426a;
            if (iVar19 == 0) {
              puVar11 = &UNK_10f2c426f;
            }
            func_0x00010002b838(auStack_838,puVar11);
            _objc_retain(puVar13);
            if (puVar13 == (undefined8 *)0x0) {
              puVar1 = (undefined8 *)&UNK_10f2c4275;
            }
            else {
              _objc_retainAutorelease(puVar13);
              puVar1 = puVar13;
              func_0x00010bdc3520(puVar13);
            }
            _objc_release(puVar13);
            func_0x00010002b838(auStack_820,puVar1);
            uStack_858 = 0;
            uStack_850 = 0;
            uStack_848 = 0;
            func_0x00010007e1e8(&uStack_858,auStack_838,&lStack_808,2);
            (**(code **)(*plVar23 + 0x18))(plVar23,&UNK_11088e2c8,&uStack_858,puVar20);
            puStack_840 = &uStack_858;
            func_0x00010007e5dc(&puStack_840);
            lVar22 = 0;
            do {
              if ((&cStack_809)[lVar22] < '\0') {
                __ZdlPv(*(undefined8 *)((long)auStack_820 + lVar22));
              }
              lVar22 = lVar22 + -0x18;
            } while (lVar22 != -0x30);
          }
          puVar1 = puVar13;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_808) {
            ___stack_chk_fail();
            _objc_release(puVar13);
            if (cStack_821 < '\0') {
              __ZdlPv(auStack_838[0]);
            }
            _objc_release(puVar13);
            __Unwind_Resume();
            lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            func_0x00010bf71e20();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar1;
            func_0x00010bf039c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar3 != (undefined8 *)0x0) {
              puVar3 = puVar1;
              func_0x00010bf039c0();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar3;
              func_0x00010bf93420();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar1;
              func_0x00010bf039c0();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar2;
              func_0x00010bfdea00();
              _objc_retainAutoreleasedReturnValue();
              puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar1;
              func_0x00010bf039c0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar13;
              func_0x00010bf0b760();
              FUN_10549be84();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar11);
              _objc_release(puVar6);
              _objc_release(puVar13);
              _objc_release(puVar12);
              _objc_release(puVar10);
              _objc_release(puVar2);
              _objc_release(puVar5);
              _objc_release(puVar3);
            }
            puVar3 = puVar1;
            func_0x00010bf13240();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar3 != (undefined8 *)0x0) {
              puVar3 = puVar1;
              func_0x00010bf13240(puVar1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar11);
              _objc_release(puVar3);
            }
            puVar3 = puVar1;
            func_0x00010c118b20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar3 != (undefined8 *)0x0) {
              puVar3 = puVar1;
              func_0x00010c118b20(puVar1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar11);
              _objc_release(puVar3);
            }
            puVar3 = puVar1;
            func_0x00010bf15e20();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010bf93420();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar1;
            func_0x00010bf15e20();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar2;
            func_0x00010bfdea00();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf15e20();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar1;
            func_0x00010bf0b760();
            FUN_10549be84();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar11);
            _objc_release(puVar13);
            _objc_release(puVar1);
            _objc_release(puVar12);
            _objc_release(puVar10);
            _objc_release(puVar2);
            _objc_release(puVar5);
            _objc_release(puVar3);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar22) {
              ___stack_chk_fail();
              _objc_retain();
              _objc_retain(puVar3);
              func_0x00010c08fa60(puVar3);
              func_0x00010c08fa60(puVar3);
              puVar1 = puVar3;
              func_0x00010c25cf00(puVar3);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar3);
              puVar12 = PTR__OBJC_CLASS___NSData_1126ae778;
              func_0x00010bf649e0();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = PTR_PTR_1126af5d0;
              if (puVar12 == (undefined *)0x0) {
                puVar24 = PTR__OBJC_CLASS___NSError_1126ae858;
                func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfa01c0(puVar11);
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                puVar14 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
                func_0x00010bdc1900();
                _objc_retainAutoreleasedReturnValue();
                puVar24 = (undefined *)0x0;
                _objc_retain(0);
                puVar15 = puVar14;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                puVar16 = puVar14;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                puVar17 = puVar14;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                if ((((puVar16 == (undefined *)0x0) || (puVar15 == (undefined *)0x0)) ||
                    (puVar17 == (undefined *)0x0)) ||
                   (((puVar11 = puVar17, func_0x00010c0720c0(), ((ulong)puVar11 & 1) == 0 &&
                     (puVar11 = puVar17, func_0x00010c0720c0(), ((ulong)puVar11 & 1) == 0)) &&
                    (puVar11 = puVar17, func_0x00010c0720c0(), ((ulong)puVar11 & 1) == 0)))) {
                  puVar11 = PTR_PTR_1126af5d0;
                  puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
                  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bfa01c0(puVar11);
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  puVar11 = PTR_PTR_1126af5d0;
                  puVar18 = PTR_PTR_1126b9668;
                  _objc_alloc(PTR_PTR_1126b9668);
                  puVar5 = puVar3;
                  func_0x00010bdc1b20(puVar3);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bff45e0(puVar18);
                  func_0x00010c2619e0(puVar11);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar18);
                }
                _objc_release(puVar5);
                _objc_release(puVar17);
                _objc_release(puVar16);
                _objc_release(puVar15);
                _objc_release(puVar14);
              }
              _objc_release(puVar24);
              _objc_release(puVar1);
              _objc_release(puVar12);
              _objc_release(puVar3);
            }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
            return;
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105499cbc; end: 105499f33;  */

/* WARNING: Removing unreachable block (ram,0x000105499f04) */
/* WARNING: Removing unreachable block (ram,0x00010549ab18) */
/* WARNING: Removing unreachable block (ram,0x00010549b8e0) */

void FUN_105499cbc(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  int iVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  undefined *puVar23;
  undefined8 *unaff_x23;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 *puStack_7a0;
  undefined8 auStack_798 [2];
  char cStack_781;
  undefined8 auStack_780 [2];
  char cStack_769;
  long lStack_768;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined8 *puStack_750;
  undefined8 *puStack_748;
  undefined8 *puStack_740;
  undefined8 *puStack_738;
  undefined8 ***pppuStack_730;
  code *pcStack_728;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 *puStack_700;
  undefined8 auStack_6f8 [2];
  char cStack_6e1;
  undefined8 auStack_6e0 [2];
  char cStack_6c9;
  long lStack_6c8;
  undefined8 *puStack_6c0;
  undefined8 *puStack_6b8;
  undefined8 *puStack_6b0;
  undefined8 *puStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined8 ***pppuStack_690;
  code *pcStack_688;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 *puStack_660;
  undefined8 auStack_658 [2];
  char cStack_641;
  undefined8 auStack_640 [2];
  char cStack_629;
  long lStack_628;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined8 *puStack_610;
  undefined8 *puStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 ***pppuStack_5f0;
  code *pcStack_5e8;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 auStack_5b8 [2];
  char cStack_5a1;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 *puStack_520;
  undefined8 auStack_518 [2];
  char cStack_501;
  undefined8 auStack_500 [2];
  char cStack_4e9;
  long lStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 *puStack_488;
  undefined8 auStack_480 [3];
  undefined1 auStack_468 [24];
  undefined8 auStack_450 [2];
  char cStack_439;
  long lStack_438;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar2 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar6 = param_3;
  puVar4 = param_4;
  puVar12 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar22 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    puVar11 = &UNK_10f2c426a;
    if ((int)param_3 == 0) {
      puVar11 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_88,puVar11);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(param_4);
      param_3 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,param_3);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = (undefined8 *)&UNK_11088df58;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar21 = 0;
    puVar6 = puVar2;
    puVar4 = param_5;
    do {
      if ((&cStack_59)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
      unaff_x23 = &uStack_c0;
    } while (lVar21 != -0x48);
  }
  _objc_release(param_4);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f0 = auStack_a0;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_f0);
  _objc_release(param_4);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_105499f34;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar1;
  puVar9 = puVar6;
  puVar7 = puVar4;
  puStack_100 = param_3;
  puStack_f8 = unaff_x23;
  puStack_e8 = puVar2;
  puStack_e0 = param_4;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puVar2 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar3[1];
    puVar11 = &UNK_10f2c426a;
    if ((int)puVar1 == 0) {
      puVar11 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_138;
    func_0x00010002b838(auStack_138,puVar11);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar1 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_120,puVar1);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    puVar10 = (undefined8 *)&UNK_11088dfa8;
    puVar1 = &uStack_158;
    puVar9 = &uStack_158;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_140 = puVar1;
    func_0x00010007e5dc(&puStack_140);
    lVar21 = 0;
    puVar2 = auStack_138;
    puVar7 = puVar4;
    do {
      if ((&cStack_109)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar4 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(puVar6);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_168 = FUN_10549a120;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar10;
  puVar8 = puVar9;
  puVar20 = puVar7;
  puStack_1a0 = param_3;
  puStack_198 = unaff_x23;
  puStack_190 = puVar1;
  puStack_188 = puVar2;
  puStack_180 = puVar4;
  puStack_178 = puVar6;
  ppuStack_170 = &puStack_d0;
  _objc_retain(puVar9);
  puVar1 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar5[1];
    puVar11 = &UNK_10f2c426a;
    if ((int)puVar10 == 0) {
      puVar11 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_1d8;
    func_0x00010002b838(auStack_1d8,puVar11);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar1 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_1c0,puVar1);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    func_0x00010007e1e8(&uStack_1f8,auStack_1d8,&lStack_1a8,2);
    puVar3 = (undefined8 *)&UNK_11088dff8;
    puVar10 = &uStack_1f8;
    puVar8 = &uStack_1f8;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_1e0 = puVar10;
    func_0x00010007e5dc(&puStack_1e0);
    lVar21 = 0;
    puVar1 = auStack_1d8;
    puVar20 = puVar7;
    do {
      if ((&cStack_1a9)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar6 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  _objc_release(puVar9);
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_208 = FUN_10549a30c;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar3;
  puVar2 = puVar8;
  puVar5 = puVar20;
  puStack_240 = param_3;
  puStack_238 = unaff_x23;
  puStack_230 = puVar10;
  puStack_228 = puVar1;
  puStack_220 = puVar6;
  puStack_218 = puVar9;
  pppuStack_210 = &ppuStack_170;
  _objc_retain(puVar8);
  puVar1 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar7[1];
    puVar11 = &UNK_10f2c426a;
    if ((int)puVar3 == 0) {
      puVar11 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_278;
    func_0x00010002b838(auStack_278,puVar11);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_260,puVar1);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    func_0x00010007e1e8(&uStack_298,auStack_278,&lStack_248,2);
    puVar4 = (undefined8 *)&UNK_11088e048;
    puVar3 = &uStack_298;
    puVar2 = &uStack_298;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_280 = puVar3;
    func_0x00010007e5dc(&puStack_280);
    lVar21 = 0;
    puVar1 = auStack_278;
    puVar5 = puVar20;
    do {
      if ((&cStack_249)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar6 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(puVar8);
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10549a4f8;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar4;
  puVar9 = puVar2;
  puVar20 = puVar5;
  puStack_2e0 = param_3;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar3;
  puStack_2c8 = puVar1;
  puStack_2c0 = puVar6;
  puStack_2b8 = puVar8;
  pppuStack_2b0 = &pppuStack_210;
  _objc_retain(puVar2);
  puVar1 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar7[1];
    puVar11 = &UNK_10f2c426a;
    if ((int)puVar4 == 0) {
      puVar11 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_318;
    func_0x00010002b838(auStack_318,puVar11);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar1 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_300,puVar1);
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    func_0x00010007e1e8(&uStack_338,auStack_318,&lStack_2e8,2);
    puVar10 = (undefined8 *)&UNK_11088e098;
    puVar4 = &uStack_338;
    puVar9 = &uStack_338;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_320 = puVar4;
    func_0x00010007e5dc(&puStack_320);
    lVar21 = 0;
    puVar1 = auStack_318;
    puVar20 = puVar5;
    do {
      if ((&cStack_2e9)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar6 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_301 < '\0') {
    __ZdlPv(auStack_318[0]);
  }
  _objc_release(puVar2);
  puVar8 = puVar6;
  __Unwind_Resume();
  pcStack_348 = FUN_10549a6e4;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar10;
  puVar7 = puVar9;
  puVar5 = puVar20;
  puStack_380 = param_3;
  puStack_378 = unaff_x23;
  puStack_370 = puVar4;
  puStack_368 = puVar1;
  puStack_360 = puVar6;
  puStack_358 = puVar2;
  pppuStack_350 = &pppuStack_2b0;
  _objc_retain(puVar9);
  if (puVar8 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar8[1];
    puVar11 = &UNK_10f2c426a;
    if ((int)puVar10 == 0) {
      puVar11 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_3b8;
    func_0x00010002b838(auStack_3b8,puVar11);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar1 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_3a0,puVar1);
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    func_0x00010007e1e8(&uStack_3d8,auStack_3b8,&lStack_388,2);
    puVar3 = (undefined8 *)&UNK_11088e0e8;
    puVar7 = &uStack_3d8;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_3c0 = &uStack_3d8;
    func_0x00010007e5dc(&puStack_3c0);
    lVar21 = 0;
    puVar5 = puVar20;
    do {
      if ((&cStack_389)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar1 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_3a1 < '\0') {
    __ZdlPv(auStack_3b8[0]);
  }
  _objc_release(puVar9);
  __Unwind_Resume();
  puVar10 = &uStack_4a0;
  pcStack_3e8 = FUN_10549a8d0;
  lStack_438 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar3;
  puVar4 = puVar7;
  puVar2 = puVar5;
  pppuStack_3f0 = &pppuStack_350;
  _objc_retain(puVar3);
  _objc_retain(puVar5);
  if (puVar1 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar1[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_480,puVar1);
    puVar11 = &UNK_10f2c426a;
    if ((int)puVar7 == 0) {
      puVar11 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_468,puVar11);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar7 = puVar5;
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_450,puVar7);
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_490 = 0;
    func_0x00010007e1e8(&uStack_4a0,auStack_480,&lStack_438,3);
    puVar6 = (undefined8 *)&UNK_11088e138;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e138,&uStack_4a0,puVar12);
    puStack_488 = (undefined1 *)&uStack_4a0;
    func_0x00010007e5dc(&puStack_488);
    lVar21 = 0;
    puVar4 = puVar10;
    puVar2 = puVar12;
    do {
      if ((&cStack_439)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_450 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
      unaff_x23 = &uStack_4a0;
    } while (lVar21 != -0x48);
  }
  _objc_release(puVar5);
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_438) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  puStack_4d0 = auStack_480;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_4d0);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar9 = puVar1;
  __Unwind_Resume();
  pcStack_4a8 = FUN_10549ab48;
  lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar6;
  puVar10 = puVar4;
  puVar8 = puVar2;
  puStack_4e0 = puVar7;
  puStack_4d8 = unaff_x23;
  puStack_4c8 = puVar1;
  puStack_4c0 = puVar5;
  puStack_4b8 = puVar3;
  pppuStack_4b0 = &pppuStack_3f0;
  _objc_retain(puVar4);
  puVar1 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar9[1];
    puVar11 = &UNK_10f2c426a;
    if ((int)puVar6 == 0) {
      puVar11 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_518;
    func_0x00010002b838(auStack_518,puVar11);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar1 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_500,puVar1);
    uStack_538 = 0;
    uStack_530 = 0;
    uStack_528 = 0;
    func_0x00010007e1e8(&uStack_538,auStack_518,&lStack_4e8,2);
    puVar12 = (undefined8 *)&UNK_11088e188;
    puVar6 = &uStack_538;
    puVar10 = &uStack_538;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e188,puVar10,puVar2);
    puStack_520 = puVar6;
    func_0x00010007e5dc(&puStack_520);
    lVar21 = 0;
    puVar1 = auStack_518;
    puVar8 = puVar2;
    do {
      if ((&cStack_4e9)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_500 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_501 < '\0') {
    __ZdlPv(auStack_518[0]);
  }
  _objc_release(puVar4);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_548 = FUN_10549ad34;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar12;
  puVar3 = puVar10;
  puVar20 = puVar8;
  puStack_580 = puVar7;
  puStack_578 = unaff_x23;
  puStack_570 = puVar6;
  puStack_568 = puVar1;
  puStack_560 = puVar2;
  puStack_558 = puVar4;
  pppuStack_550 = &pppuStack_4b0;
  _objc_retain(puVar10);
  puVar1 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar5[1];
    puVar11 = &UNK_10f2c426a;
    if ((int)puVar12 == 0) {
      puVar11 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_5b8;
    func_0x00010002b838(auStack_5b8,puVar11);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar1 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_5a0,puVar1);
    uStack_5d8 = 0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    func_0x00010007e1e8(&uStack_5d8,auStack_5b8,&lStack_588,2);
    puVar9 = (undefined8 *)&UNK_11088e1d8;
    puVar12 = &uStack_5d8;
    puVar3 = &uStack_5d8;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e1d8,puVar3,puVar8);
    puStack_5c0 = puVar12;
    func_0x00010007e5dc(&puStack_5c0);
    lVar21 = 0;
    puVar1 = auStack_5b8;
    puVar20 = puVar8;
    do {
      if ((&cStack_589)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5a0 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar6 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_588) {
    ___stack_chk_fail();
    _objc_release(puVar10);
    if (cStack_5a1 < '\0') {
      __ZdlPv(auStack_5b8[0]);
    }
    _objc_release(puVar10);
    puVar8 = puVar6;
    __Unwind_Resume();
    pcStack_5e8 = FUN_10549af20;
    lStack_628 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar9;
    puVar2 = puVar3;
    puVar5 = puVar20;
    puStack_620 = puVar7;
    puStack_618 = unaff_x23;
    puStack_610 = puVar12;
    puStack_608 = puVar1;
    puStack_600 = puVar6;
    puStack_5f8 = puVar10;
    pppuStack_5f0 = &pppuStack_550;
    _objc_retain(puVar3);
    puVar1 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      plVar22 = (long *)puVar8[1];
      puVar11 = &UNK_10f2c426a;
      if ((int)puVar9 == 0) {
        puVar11 = &UNK_10f2c426f;
      }
      unaff_x23 = auStack_658;
      func_0x00010002b838(auStack_658,puVar11);
      _objc_retain(puVar3);
      if (puVar3 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar3);
        puVar1 = puVar3;
        func_0x00010bdc3520(puVar3);
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_640,puVar1);
      uStack_678 = 0;
      uStack_670 = 0;
      uStack_668 = 0;
      func_0x00010007e1e8(&uStack_678,auStack_658,&lStack_628,2);
      puVar4 = (undefined8 *)&UNK_11088e228;
      puVar9 = &uStack_678;
      puVar2 = &uStack_678;
      (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e228,puVar2,puVar20);
      puStack_660 = puVar9;
      func_0x00010007e5dc(&puStack_660);
      lVar21 = 0;
      puVar1 = auStack_658;
      puVar5 = puVar20;
      do {
        if ((&cStack_629)[lVar21] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_640 + lVar21));
        }
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != -0x30);
    }
    puVar6 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_628) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar3);
    if (cStack_641 < '\0') {
      __ZdlPv(auStack_658[0]);
    }
    _objc_release(puVar3);
    puVar10 = puVar6;
    __Unwind_Resume();
    pcStack_688 = FUN_10549b10c;
    lStack_6c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar4;
    puVar12 = puVar2;
    puVar20 = puVar5;
    puStack_6c0 = puVar7;
    puStack_6b8 = unaff_x23;
    puStack_6b0 = puVar9;
    puStack_6a8 = puVar1;
    puStack_6a0 = puVar6;
    puStack_698 = puVar3;
    pppuStack_690 = &pppuStack_5f0;
    _objc_retain(puVar2);
    iVar19 = (int)puVar8;
    puVar1 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      plVar22 = (long *)puVar10[1];
      puVar11 = &UNK_10f2c426a;
      if ((int)puVar4 == 0) {
        puVar11 = &UNK_10f2c426f;
      }
      unaff_x23 = auStack_6f8;
      func_0x00010002b838(auStack_6f8,puVar11);
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar2);
        puVar1 = puVar2;
        func_0x00010bdc3520(puVar2);
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_6e0,puVar1);
      uStack_718 = 0;
      uStack_710 = 0;
      uStack_708 = 0;
      func_0x00010007e1e8(&uStack_718,auStack_6f8,&lStack_6c8,2);
      puVar11 = &UNK_11088e278;
      puVar4 = &uStack_718;
      puVar12 = &uStack_718;
      (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e278,puVar12,puVar5);
      puStack_700 = puVar4;
      func_0x00010007e5dc(&puStack_700);
      lVar21 = 0;
      puVar1 = auStack_6f8;
      puVar20 = puVar5;
      do {
        if ((&cStack_6c9)[lVar21] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_6e0 + lVar21));
        }
        iVar19 = (int)puVar11;
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != -0x30);
    }
    puVar6 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6c8) {
      ___stack_chk_fail();
      _objc_release(puVar2);
      if (cStack_6e1 < '\0') {
        __ZdlPv(auStack_6f8[0]);
      }
      _objc_release(puVar2);
      puVar10 = puVar6;
      __Unwind_Resume();
      pcStack_728 = FUN_10549b2f8;
      lStack_768 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_760 = puVar7;
      puStack_758 = unaff_x23;
      puStack_750 = puVar4;
      puStack_748 = puVar1;
      puStack_740 = puVar6;
      puStack_738 = puVar2;
      pppuStack_730 = &pppuStack_690;
      _objc_retain(puVar12);
      if (puVar10 != (undefined8 *)0x0) {
        plVar22 = (long *)puVar10[1];
        puVar11 = &UNK_10f2c426a;
        if (iVar19 == 0) {
          puVar11 = &UNK_10f2c426f;
        }
        func_0x00010002b838(auStack_798,puVar11);
        _objc_retain(puVar12);
        if (puVar12 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f2c4275;
        }
        else {
          _objc_retainAutorelease(puVar12);
          puVar1 = puVar12;
          func_0x00010bdc3520(puVar12);
        }
        _objc_release(puVar12);
        func_0x00010002b838(auStack_780,puVar1);
        uStack_7b8 = 0;
        uStack_7b0 = 0;
        uStack_7a8 = 0;
        func_0x00010007e1e8(&uStack_7b8,auStack_798,&lStack_768,2);
        (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e2c8,&uStack_7b8,puVar20);
        puStack_7a0 = &uStack_7b8;
        func_0x00010007e5dc(&puStack_7a0);
        lVar21 = 0;
        do {
          if ((&cStack_769)[lVar21] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_780 + lVar21));
          }
          lVar21 = lVar21 + -0x18;
        } while (lVar21 != -0x30);
      }
      puVar1 = puVar12;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_768) {
        ___stack_chk_fail();
        _objc_release(puVar12);
        if (cStack_781 < '\0') {
          __ZdlPv(auStack_798[0]);
        }
        _objc_release(puVar12);
        __Unwind_Resume();
        lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar6 != (undefined8 *)0x0) {
          puVar6 = puVar1;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar6;
          func_0x00010bf93420();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar1;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar12;
          func_0x00010bfdea00();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar1;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar10;
          func_0x00010bf0b760();
          FUN_10549be84();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar11);
          _objc_release(puVar9);
          _objc_release(puVar10);
          _objc_release(puVar13);
          _objc_release(puVar2);
          _objc_release(puVar12);
          _objc_release(puVar4);
          _objc_release(puVar6);
        }
        puVar6 = puVar1;
        func_0x00010bf13240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar6 != (undefined8 *)0x0) {
          puVar6 = puVar1;
          func_0x00010bf13240(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar11);
          _objc_release(puVar6);
        }
        puVar6 = puVar1;
        func_0x00010c118b20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar6 != (undefined8 *)0x0) {
          puVar6 = puVar1;
          func_0x00010c118b20(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar11);
          _objc_release(puVar6);
        }
        puVar6 = puVar1;
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar6;
        func_0x00010bf93420();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar1;
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar12;
        func_0x00010bfdea00();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar1;
        func_0x00010bf0b760();
        FUN_10549be84();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar1);
        _objc_release(puVar13);
        _objc_release(puVar2);
        _objc_release(puVar12);
        _objc_release(puVar4);
        _objc_release(puVar6);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar21) {
          ___stack_chk_fail();
          _objc_retain();
          _objc_retain(puVar6);
          func_0x00010c08fa60(puVar6);
          func_0x00010c08fa60(puVar6);
          puVar1 = puVar6;
          func_0x00010c25cf00(puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf649e0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR_PTR_1126af5d0;
          if (puVar13 == (undefined *)0x0) {
            puVar23 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa01c0(puVar11);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar14 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            func_0x00010bdc1900();
            _objc_retainAutoreleasedReturnValue();
            puVar23 = (undefined *)0x0;
            _objc_retain(0);
            puVar15 = puVar14;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar14;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar14;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if ((((puVar16 == (undefined *)0x0) || (puVar15 == (undefined *)0x0)) ||
                (puVar17 == (undefined *)0x0)) ||
               (((puVar11 = puVar17, func_0x00010c0720c0(), ((ulong)puVar11 & 1) == 0 &&
                 (puVar11 = puVar17, func_0x00010c0720c0(), ((ulong)puVar11 & 1) == 0)) &&
                (puVar11 = puVar17, func_0x00010c0720c0(), ((ulong)puVar11 & 1) == 0)))) {
              puVar11 = PTR_PTR_1126af5d0;
              puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfa01c0(puVar11);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar11 = PTR_PTR_1126af5d0;
              puVar18 = PTR_PTR_1126b9668;
              _objc_alloc(PTR_PTR_1126b9668);
              puVar4 = puVar6;
              func_0x00010bdc1b20(puVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bff45e0(puVar18);
              func_0x00010c2619e0(puVar11);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar18);
            }
            _objc_release(puVar4);
            _objc_release(puVar17);
            _objc_release(puVar16);
            _objc_release(puVar15);
            _objc_release(puVar14);
          }
          _objc_release(puVar23);
          _objc_release(puVar1);
          _objc_release(puVar13);
          _objc_release(puVar6);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105499f34; end: 10549a11f;  */

/* WARNING: Removing unreachable block (ram,0x00010549ab18) */
/* WARNING: Removing unreachable block (ram,0x00010549b8e0) */

void FUN_105499f34(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  undefined *puVar23;
  undefined8 *unaff_x23;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 *puStack_6e0;
  undefined8 auStack_6d8 [2];
  char cStack_6c1;
  undefined8 auStack_6c0 [2];
  char cStack_6a9;
  long lStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined8 *puStack_690;
  undefined8 *puStack_688;
  undefined8 *puStack_680;
  undefined8 *puStack_678;
  undefined8 ***pppuStack_670;
  code *pcStack_668;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 *puStack_640;
  undefined8 auStack_638 [2];
  char cStack_621;
  undefined8 auStack_620 [2];
  char cStack_609;
  long lStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 *puStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 auStack_598 [2];
  char cStack_581;
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  undefined8 *puStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 *puStack_500;
  undefined8 auStack_4f8 [2];
  char cStack_4e1;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  undefined8 auStack_3c0 [3];
  undefined1 auStack_3a8 [24];
  undefined8 auStack_390 [2];
  char cStack_379;
  long lStack_378;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  puVar3 = param_4;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar22 = *(long **)(param_1 + 8);
    puVar7 = &UNK_10f2c426a;
    if ((int)param_2 == 0) {
      puVar7 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_78;
    func_0x00010002b838(auStack_78,puVar7);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = (undefined8 *)&UNK_11088dfa8;
    puVar5 = &uStack_98;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar21 = 0;
    puVar3 = param_4;
    do {
      if ((&cStack_49)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_a8 = FUN_10549a120;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar10 = puVar5;
  puVar11 = puVar3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  if (puVar2 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar2[1];
    puVar7 = &UNK_10f2c426a;
    if ((int)puVar1 == 0) {
      puVar7 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_118;
    func_0x00010002b838(auStack_118,puVar7);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar1 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_100,puVar1);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar8 = (undefined8 *)&UNK_11088dff8;
    puVar10 = &uStack_138;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar21 = 0;
    puVar11 = puVar3;
    do {
      if ((&cStack_e9)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar5);
  __Unwind_Resume();
  pcStack_148 = FUN_10549a30c;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar8;
  puVar3 = puVar10;
  puVar2 = puVar11;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar10);
  if (puVar1 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar1[1];
    puVar7 = &UNK_10f2c426a;
    if ((int)puVar8 == 0) {
      puVar7 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar7);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar1 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar5 = (undefined8 *)&UNK_11088e048;
    puVar3 = &uStack_1d8;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar21 = 0;
    puVar2 = puVar11;
    do {
      if ((&cStack_189)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar1 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar10);
  __Unwind_Resume();
  pcStack_1e8 = FUN_10549a4f8;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar5;
  puVar10 = puVar3;
  puVar11 = puVar2;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar3);
  if (puVar1 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar1[1];
    puVar7 = &UNK_10f2c426a;
    if ((int)puVar5 == 0) {
      puVar7 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_258;
    func_0x00010002b838(auStack_258,puVar7);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar1 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_240,puVar1);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    puVar8 = (undefined8 *)&UNK_11088e098;
    puVar10 = &uStack_278;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_260 = &uStack_278;
    func_0x00010007e5dc(&puStack_260);
    lVar21 = 0;
    puVar11 = puVar2;
    do {
      if ((&cStack_229)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(puVar3);
  __Unwind_Resume();
  pcStack_288 = FUN_10549a6e4;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar8;
  puVar3 = puVar10;
  puVar2 = puVar11;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(puVar10);
  if (puVar1 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar1[1];
    puVar7 = &UNK_10f2c426a;
    if ((int)puVar8 == 0) {
      puVar7 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_2f8;
    func_0x00010002b838(auStack_2f8,puVar7);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar1 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_2e0,puVar1);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    func_0x00010007e1e8(&uStack_318,auStack_2f8,&lStack_2c8,2);
    puVar5 = (undefined8 *)&UNK_11088e0e8;
    puVar3 = &uStack_318;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_300 = &uStack_318;
    func_0x00010007e5dc(&puStack_300);
    lVar21 = 0;
    puVar2 = puVar11;
    do {
      if ((&cStack_2c9)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar1 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(puVar10);
  __Unwind_Resume();
  puVar18 = &uStack_3e0;
  pcStack_328 = FUN_10549a8d0;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar5;
  puVar10 = puVar3;
  puVar11 = puVar2;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(puVar5);
  _objc_retain(puVar2);
  if (puVar1 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar1[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_3c0,puVar1);
    puVar7 = &UNK_10f2c426a;
    if ((int)puVar3 == 0) {
      puVar7 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_3a8,puVar7);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar3 = puVar2;
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_390,puVar3);
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    func_0x00010007e1e8(&uStack_3e0,auStack_3c0,&lStack_378,3);
    puVar8 = (undefined8 *)&UNK_11088e138;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e138,&uStack_3e0,param_5);
    puStack_3c8 = (undefined1 *)&uStack_3e0;
    func_0x00010007e5dc(&puStack_3c8);
    lVar21 = 0;
    puVar10 = puVar18;
    puVar11 = param_5;
    do {
      if ((&cStack_379)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_390 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
      unaff_x23 = &uStack_3e0;
    } while (lVar21 != -0x48);
  }
  _objc_release(puVar2);
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  puStack_410 = auStack_3c0;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_410);
  _objc_release(puVar2);
  _objc_release(puVar5);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_3e8 = FUN_10549ab48;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = puVar8;
  puVar6 = puVar10;
  puVar19 = puVar11;
  puStack_420 = puVar3;
  puStack_418 = unaff_x23;
  puStack_408 = puVar1;
  puStack_400 = puVar2;
  puStack_3f8 = puVar5;
  pppuStack_3f0 = &pppuStack_330;
  _objc_retain(puVar10);
  puVar1 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar4[1];
    puVar7 = &UNK_10f2c426a;
    if ((int)puVar8 == 0) {
      puVar7 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_458;
    func_0x00010002b838(auStack_458,puVar7);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar1 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_440,puVar1);
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_468 = 0;
    func_0x00010007e1e8(&uStack_478,auStack_458,&lStack_428,2);
    puVar18 = (undefined8 *)&UNK_11088e188;
    puVar8 = &uStack_478;
    puVar6 = &uStack_478;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e188,puVar6,puVar11);
    puStack_460 = puVar8;
    func_0x00010007e5dc(&puStack_460);
    lVar21 = 0;
    puVar1 = auStack_458;
    puVar19 = puVar11;
    do {
      if ((&cStack_429)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar5 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_428) {
    ___stack_chk_fail();
    _objc_release(puVar10);
    if (cStack_441 < '\0') {
      __ZdlPv(auStack_458[0]);
    }
    _objc_release(puVar10);
    puVar4 = puVar5;
    __Unwind_Resume();
    pcStack_488 = FUN_10549ad34;
    lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = puVar18;
    puVar11 = puVar6;
    puVar20 = puVar19;
    puStack_4c0 = puVar3;
    puStack_4b8 = unaff_x23;
    puStack_4b0 = puVar8;
    puStack_4a8 = puVar1;
    puStack_4a0 = puVar5;
    puStack_498 = puVar10;
    pppuStack_490 = &pppuStack_3f0;
    _objc_retain(puVar6);
    puVar1 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      plVar22 = (long *)puVar4[1];
      puVar7 = &UNK_10f2c426a;
      if ((int)puVar18 == 0) {
        puVar7 = &UNK_10f2c426f;
      }
      unaff_x23 = auStack_4f8;
      func_0x00010002b838(auStack_4f8,puVar7);
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar1 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_4e0,puVar1);
      uStack_518 = 0;
      uStack_510 = 0;
      uStack_508 = 0;
      func_0x00010007e1e8(&uStack_518,auStack_4f8,&lStack_4c8,2);
      puVar2 = (undefined8 *)&UNK_11088e1d8;
      puVar18 = &uStack_518;
      puVar11 = &uStack_518;
      (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e1d8,puVar11,puVar19);
      puStack_500 = puVar18;
      func_0x00010007e5dc(&puStack_500);
      lVar21 = 0;
      puVar1 = auStack_4f8;
      puVar20 = puVar19;
      do {
        if ((&cStack_4c9)[lVar21] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4e0 + lVar21));
        }
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != -0x30);
    }
    puVar5 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    if (cStack_4e1 < '\0') {
      __ZdlPv(auStack_4f8[0]);
    }
    _objc_release(puVar6);
    puVar4 = puVar5;
    __Unwind_Resume();
    pcStack_528 = FUN_10549af20;
    lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar2;
    puVar10 = puVar11;
    puVar19 = puVar20;
    puStack_560 = puVar3;
    puStack_558 = unaff_x23;
    puStack_550 = puVar18;
    puStack_548 = puVar1;
    puStack_540 = puVar5;
    puStack_538 = puVar6;
    pppuStack_530 = &pppuStack_490;
    _objc_retain(puVar11);
    puVar1 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      plVar22 = (long *)puVar4[1];
      puVar7 = &UNK_10f2c426a;
      if ((int)puVar2 == 0) {
        puVar7 = &UNK_10f2c426f;
      }
      unaff_x23 = auStack_598;
      func_0x00010002b838(auStack_598,puVar7);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar1 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_580,puVar1);
      uStack_5b8 = 0;
      uStack_5b0 = 0;
      uStack_5a8 = 0;
      func_0x00010007e1e8(&uStack_5b8,auStack_598,&lStack_568,2);
      puVar8 = (undefined8 *)&UNK_11088e228;
      puVar2 = &uStack_5b8;
      puVar10 = &uStack_5b8;
      (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e228,puVar10,puVar20);
      puStack_5a0 = puVar2;
      func_0x00010007e5dc(&puStack_5a0);
      lVar21 = 0;
      puVar1 = auStack_598;
      puVar19 = puVar20;
      do {
        if ((&cStack_569)[lVar21] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_580 + lVar21));
        }
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != -0x30);
    }
    puVar5 = puVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_568) {
      ___stack_chk_fail();
      _objc_release(puVar11);
      if (cStack_581 < '\0') {
        __ZdlPv(auStack_598[0]);
      }
      _objc_release(puVar11);
      puVar6 = puVar5;
      __Unwind_Resume();
      pcStack_5c8 = FUN_10549b10c;
      lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar4 = puVar8;
      puVar18 = puVar10;
      puVar20 = puVar19;
      puStack_600 = puVar3;
      puStack_5f8 = unaff_x23;
      puStack_5f0 = puVar2;
      puStack_5e8 = puVar1;
      puStack_5e0 = puVar5;
      puStack_5d8 = puVar11;
      pppuStack_5d0 = &pppuStack_530;
      _objc_retain(puVar10);
      iVar17 = (int)puVar4;
      puVar1 = (undefined8 *)0x0;
      if (puVar6 != (undefined8 *)0x0) {
        plVar22 = (long *)puVar6[1];
        puVar7 = &UNK_10f2c426a;
        if ((int)puVar8 == 0) {
          puVar7 = &UNK_10f2c426f;
        }
        unaff_x23 = auStack_638;
        func_0x00010002b838(auStack_638,puVar7);
        _objc_retain(puVar10);
        if (puVar10 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f2c4275;
        }
        else {
          _objc_retainAutorelease(puVar10);
          puVar1 = puVar10;
          func_0x00010bdc3520(puVar10);
        }
        _objc_release(puVar10);
        func_0x00010002b838(auStack_620,puVar1);
        uStack_658 = 0;
        uStack_650 = 0;
        uStack_648 = 0;
        func_0x00010007e1e8(&uStack_658,auStack_638,&lStack_608,2);
        puVar7 = &UNK_11088e278;
        puVar8 = &uStack_658;
        puVar18 = &uStack_658;
        (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e278,puVar18,puVar19);
        puStack_640 = puVar8;
        func_0x00010007e5dc(&puStack_640);
        lVar21 = 0;
        puVar1 = auStack_638;
        puVar20 = puVar19;
        do {
          if ((&cStack_609)[lVar21] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_620 + lVar21));
          }
          iVar17 = (int)puVar7;
          lVar21 = lVar21 + -0x18;
        } while (lVar21 != -0x30);
      }
      puVar5 = puVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_608) {
        ___stack_chk_fail();
        _objc_release(puVar10);
        if (cStack_621 < '\0') {
          __ZdlPv(auStack_638[0]);
        }
        _objc_release(puVar10);
        puVar2 = puVar5;
        __Unwind_Resume();
        pcStack_668 = FUN_10549b2f8;
        lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_6a0 = puVar3;
        puStack_698 = unaff_x23;
        puStack_690 = puVar8;
        puStack_688 = puVar1;
        puStack_680 = puVar5;
        puStack_678 = puVar10;
        pppuStack_670 = &pppuStack_5d0;
        _objc_retain(puVar18);
        if (puVar2 != (undefined8 *)0x0) {
          plVar22 = (long *)puVar2[1];
          puVar7 = &UNK_10f2c426a;
          if (iVar17 == 0) {
            puVar7 = &UNK_10f2c426f;
          }
          func_0x00010002b838(auStack_6d8,puVar7);
          _objc_retain(puVar18);
          if (puVar18 == (undefined8 *)0x0) {
            puVar1 = (undefined8 *)&UNK_10f2c4275;
          }
          else {
            _objc_retainAutorelease(puVar18);
            puVar1 = puVar18;
            func_0x00010bdc3520(puVar18);
          }
          _objc_release(puVar18);
          func_0x00010002b838(auStack_6c0,puVar1);
          uStack_6f8 = 0;
          uStack_6f0 = 0;
          uStack_6e8 = 0;
          func_0x00010007e1e8(&uStack_6f8,auStack_6d8,&lStack_6a8,2);
          (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e2c8,&uStack_6f8,puVar20);
          puStack_6e0 = &uStack_6f8;
          func_0x00010007e5dc(&puStack_6e0);
          lVar21 = 0;
          do {
            if ((&cStack_6a9)[lVar21] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_6c0 + lVar21));
            }
            lVar21 = lVar21 + -0x18;
          } while (lVar21 != -0x30);
        }
        puVar1 = puVar18;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6a8) {
          ___stack_chk_fail();
          _objc_release(puVar18);
          if (cStack_6c1 < '\0') {
            __ZdlPv(auStack_6d8[0]);
          }
          _objc_release(puVar18);
          __Unwind_Resume();
          lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x00010bf71e20();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar1;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar5 != (undefined8 *)0x0) {
            puVar5 = puVar1;
            func_0x00010bf039c0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar5;
            func_0x00010bf93420();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar1;
            func_0x00010bf039c0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar2;
            func_0x00010bfdea00();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar1;
            func_0x00010bf039c0();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar10;
            func_0x00010bf0b760();
            FUN_10549be84();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar7);
            _objc_release(puVar11);
            _objc_release(puVar10);
            _objc_release(puVar9);
            _objc_release(puVar8);
            _objc_release(puVar2);
            _objc_release(puVar3);
            _objc_release(puVar5);
          }
          puVar5 = puVar1;
          func_0x00010bf13240();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar5 != (undefined8 *)0x0) {
            puVar5 = puVar1;
            func_0x00010bf13240(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar7);
            _objc_release(puVar5);
          }
          puVar5 = puVar1;
          func_0x00010c118b20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar5 != (undefined8 *)0x0) {
            puVar5 = puVar1;
            func_0x00010c118b20(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar7);
            _objc_release(puVar5);
          }
          puVar5 = puVar1;
          func_0x00010bf15e20();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar5;
          func_0x00010bf93420();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010bf15e20();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar2;
          func_0x00010bfdea00();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf15e20();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar1;
          func_0x00010bf0b760();
          FUN_10549be84();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar10);
          _objc_release(puVar1);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar2);
          _objc_release(puVar3);
          _objc_release(puVar5);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar21) {
            ___stack_chk_fail();
            _objc_retain();
            _objc_retain(puVar5);
            func_0x00010c08fa60(puVar5);
            func_0x00010c08fa60(puVar5);
            puVar1 = puVar5;
            func_0x00010c25cf00(puVar5);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
            func_0x00010bf649e0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR_PTR_1126af5d0;
            if (puVar9 == (undefined *)0x0) {
              puVar23 = PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfa01c0(puVar7);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
              func_0x00010bdc1900();
              _objc_retainAutoreleasedReturnValue();
              puVar23 = (undefined *)0x0;
              _objc_retain(0);
              puVar13 = puVar12;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar12;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar15 = puVar12;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              if ((((puVar14 == (undefined *)0x0) || (puVar13 == (undefined *)0x0)) ||
                  (puVar15 == (undefined *)0x0)) ||
                 (((puVar7 = puVar15, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0 &&
                   (puVar7 = puVar15, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0)) &&
                  (puVar7 = puVar15, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0)))) {
                puVar7 = PTR_PTR_1126af5d0;
                puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
                func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfa01c0(puVar7);
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                puVar7 = PTR_PTR_1126af5d0;
                puVar16 = PTR_PTR_1126b9668;
                _objc_alloc(PTR_PTR_1126b9668);
                puVar3 = puVar5;
                func_0x00010bdc1b20(puVar5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bff45e0(puVar16);
                func_0x00010c2619e0(puVar7);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar16);
              }
              _objc_release(puVar3);
              _objc_release(puVar15);
              _objc_release(puVar14);
              _objc_release(puVar13);
              _objc_release(puVar12);
            }
            _objc_release(puVar23);
            _objc_release(puVar1);
            _objc_release(puVar9);
            _objc_release(puVar5);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10549a120; end: 10549a30b;  */

/* WARNING: Removing unreachable block (ram,0x00010549ab18) */
/* WARNING: Removing unreachable block (ram,0x00010549b8e0) */

void FUN_10549a120(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  undefined *puVar23;
  undefined8 *unaff_x23;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 *puStack_640;
  undefined8 auStack_638 [2];
  char cStack_621;
  undefined8 auStack_620 [2];
  char cStack_609;
  long lStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 *puStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 auStack_598 [2];
  char cStack_581;
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  undefined8 *puStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 *puStack_500;
  undefined8 auStack_4f8 [2];
  char cStack_4e1;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [3];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  puVar9 = param_4;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar22 = *(long **)(param_1 + 8);
    puVar8 = &UNK_10f2c426a;
    if ((int)param_2 == 0) {
      puVar8 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_78;
    func_0x00010002b838(auStack_78,puVar8);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = (undefined8 *)&UNK_11088dff8;
    puVar5 = &uStack_98;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar21 = 0;
    puVar9 = param_4;
    do {
      if ((&cStack_49)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_a8 = FUN_10549a30c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar3 = puVar5;
  puVar11 = puVar9;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  if (puVar2 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar2[1];
    puVar8 = &UNK_10f2c426a;
    if ((int)puVar1 == 0) {
      puVar8 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_118;
    func_0x00010002b838(auStack_118,puVar8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar1 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_100,puVar1);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = (undefined8 *)&UNK_11088e048;
    puVar3 = &uStack_138;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar21 = 0;
    puVar11 = puVar9;
    do {
      if ((&cStack_e9)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar5);
  __Unwind_Resume();
  pcStack_148 = FUN_10549a4f8;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar7;
  puVar9 = puVar3;
  puVar2 = puVar11;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar3);
  if (puVar1 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar1[1];
    puVar8 = &UNK_10f2c426a;
    if ((int)puVar7 == 0) {
      puVar8 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar1 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar5 = (undefined8 *)&UNK_11088e098;
    puVar9 = &uStack_1d8;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar21 = 0;
    puVar2 = puVar11;
    do {
      if ((&cStack_189)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar3);
  __Unwind_Resume();
  pcStack_1e8 = FUN_10549a6e4;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar5;
  puVar3 = puVar9;
  puVar11 = puVar2;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar9);
  if (puVar1 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar1[1];
    puVar8 = &UNK_10f2c426a;
    if ((int)puVar5 == 0) {
      puVar8 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_258;
    func_0x00010002b838(auStack_258,puVar8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar1 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_240,puVar1);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    puVar7 = (undefined8 *)&UNK_11088e0e8;
    puVar3 = &uStack_278;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_260 = &uStack_278;
    func_0x00010007e5dc(&puStack_260);
    lVar21 = 0;
    puVar11 = puVar2;
    do {
      if ((&cStack_229)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar1 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(puVar9);
  __Unwind_Resume();
  puVar18 = &uStack_340;
  pcStack_288 = FUN_10549a8d0;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar7;
  puVar9 = puVar3;
  puVar2 = puVar11;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(puVar7);
  _objc_retain(puVar11);
  if (puVar1 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar1[1];
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_320,puVar1);
    puVar8 = &UNK_10f2c426a;
    if ((int)puVar3 == 0) {
      puVar8 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_308,puVar8);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar3 = puVar11;
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_2f0,puVar3);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&uStack_340,auStack_320,&lStack_2d8,3);
    puVar5 = (undefined8 *)&UNK_11088e138;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e138,&uStack_340,param_5);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x00010007e5dc(&puStack_328);
    lVar21 = 0;
    puVar9 = puVar18;
    puVar2 = param_5;
    do {
      if ((&cStack_2d9)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
      unaff_x23 = &uStack_340;
    } while (lVar21 != -0x48);
  }
  _objc_release(puVar11);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  puStack_370 = auStack_320;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_370);
  _objc_release(puVar11);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_348 = FUN_10549ab48;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = puVar5;
  puVar6 = puVar9;
  puVar19 = puVar2;
  puStack_380 = puVar3;
  puStack_378 = unaff_x23;
  puStack_368 = puVar1;
  puStack_360 = puVar11;
  puStack_358 = puVar7;
  pppuStack_350 = &pppuStack_290;
  _objc_retain(puVar9);
  puVar1 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar4[1];
    puVar8 = &UNK_10f2c426a;
    if ((int)puVar5 == 0) {
      puVar8 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_3b8;
    func_0x00010002b838(auStack_3b8,puVar8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar1 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_3a0,puVar1);
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    func_0x00010007e1e8(&uStack_3d8,auStack_3b8,&lStack_388,2);
    puVar18 = (undefined8 *)&UNK_11088e188;
    puVar5 = &uStack_3d8;
    puVar6 = &uStack_3d8;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e188,puVar6,puVar2);
    puStack_3c0 = puVar5;
    func_0x00010007e5dc(&puStack_3c0);
    lVar21 = 0;
    puVar1 = auStack_3b8;
    puVar19 = puVar2;
    do {
      if ((&cStack_389)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_3a1 < '\0') {
    __ZdlPv(auStack_3b8[0]);
  }
  _objc_release(puVar9);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_3e8 = FUN_10549ad34;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar18;
  puVar11 = puVar6;
  puVar20 = puVar19;
  puStack_420 = puVar3;
  puStack_418 = unaff_x23;
  puStack_410 = puVar5;
  puStack_408 = puVar1;
  puStack_400 = puVar2;
  puStack_3f8 = puVar9;
  pppuStack_3f0 = &pppuStack_350;
  _objc_retain(puVar6);
  puVar1 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar4[1];
    puVar8 = &UNK_10f2c426a;
    if ((int)puVar18 == 0) {
      puVar8 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_458;
    func_0x00010002b838(auStack_458,puVar8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar1 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_440,puVar1);
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_468 = 0;
    func_0x00010007e1e8(&uStack_478,auStack_458,&lStack_428,2);
    puVar7 = (undefined8 *)&UNK_11088e1d8;
    puVar18 = &uStack_478;
    puVar11 = &uStack_478;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e1d8,puVar11,puVar19);
    puStack_460 = puVar18;
    func_0x00010007e5dc(&puStack_460);
    lVar21 = 0;
    puVar1 = auStack_458;
    puVar20 = puVar19;
    do {
      if ((&cStack_429)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar5 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_441 < '\0') {
    __ZdlPv(auStack_458[0]);
  }
  _objc_release(puVar6);
  puVar4 = puVar5;
  __Unwind_Resume();
  pcStack_488 = FUN_10549af20;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar7;
  puVar2 = puVar11;
  puVar19 = puVar20;
  puStack_4c0 = puVar3;
  puStack_4b8 = unaff_x23;
  puStack_4b0 = puVar18;
  puStack_4a8 = puVar1;
  puStack_4a0 = puVar5;
  puStack_498 = puVar6;
  pppuStack_490 = &pppuStack_3f0;
  _objc_retain(puVar11);
  puVar1 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar4[1];
    puVar8 = &UNK_10f2c426a;
    if ((int)puVar7 == 0) {
      puVar8 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_4f8;
    func_0x00010002b838(auStack_4f8,puVar8);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar1 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_4e0,puVar1);
    uStack_518 = 0;
    uStack_510 = 0;
    uStack_508 = 0;
    func_0x00010007e1e8(&uStack_518,auStack_4f8,&lStack_4c8,2);
    puVar9 = (undefined8 *)&UNK_11088e228;
    puVar7 = &uStack_518;
    puVar2 = &uStack_518;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e228,puVar2,puVar20);
    puStack_500 = puVar7;
    func_0x00010007e5dc(&puStack_500);
    lVar21 = 0;
    puVar1 = auStack_4f8;
    puVar19 = puVar20;
    do {
      if ((&cStack_4c9)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4e0 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar5 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4c8) {
    ___stack_chk_fail();
    _objc_release(puVar11);
    if (cStack_4e1 < '\0') {
      __ZdlPv(auStack_4f8[0]);
    }
    _objc_release(puVar11);
    puVar6 = puVar5;
    __Unwind_Resume();
    pcStack_528 = FUN_10549b10c;
    lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar9;
    puVar18 = puVar2;
    puVar20 = puVar19;
    puStack_560 = puVar3;
    puStack_558 = unaff_x23;
    puStack_550 = puVar7;
    puStack_548 = puVar1;
    puStack_540 = puVar5;
    puStack_538 = puVar11;
    pppuStack_530 = &pppuStack_490;
    _objc_retain(puVar2);
    iVar17 = (int)puVar4;
    puVar1 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      plVar22 = (long *)puVar6[1];
      puVar8 = &UNK_10f2c426a;
      if ((int)puVar9 == 0) {
        puVar8 = &UNK_10f2c426f;
      }
      unaff_x23 = auStack_598;
      func_0x00010002b838(auStack_598,puVar8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar2);
        puVar1 = puVar2;
        func_0x00010bdc3520(puVar2);
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_580,puVar1);
      uStack_5b8 = 0;
      uStack_5b0 = 0;
      uStack_5a8 = 0;
      func_0x00010007e1e8(&uStack_5b8,auStack_598,&lStack_568,2);
      puVar8 = &UNK_11088e278;
      puVar9 = &uStack_5b8;
      puVar18 = &uStack_5b8;
      (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e278,puVar18,puVar19);
      puStack_5a0 = puVar9;
      func_0x00010007e5dc(&puStack_5a0);
      lVar21 = 0;
      puVar1 = auStack_598;
      puVar20 = puVar19;
      do {
        if ((&cStack_569)[lVar21] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_580 + lVar21));
        }
        iVar17 = (int)puVar8;
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != -0x30);
    }
    puVar5 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_568) {
      ___stack_chk_fail();
      _objc_release(puVar2);
      if (cStack_581 < '\0') {
        __ZdlPv(auStack_598[0]);
      }
      _objc_release(puVar2);
      puVar7 = puVar5;
      __Unwind_Resume();
      pcStack_5c8 = FUN_10549b2f8;
      lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_600 = puVar3;
      puStack_5f8 = unaff_x23;
      puStack_5f0 = puVar9;
      puStack_5e8 = puVar1;
      puStack_5e0 = puVar5;
      puStack_5d8 = puVar2;
      pppuStack_5d0 = &pppuStack_530;
      _objc_retain(puVar18);
      if (puVar7 != (undefined8 *)0x0) {
        plVar22 = (long *)puVar7[1];
        puVar8 = &UNK_10f2c426a;
        if (iVar17 == 0) {
          puVar8 = &UNK_10f2c426f;
        }
        func_0x00010002b838(auStack_638,puVar8);
        _objc_retain(puVar18);
        if (puVar18 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f2c4275;
        }
        else {
          _objc_retainAutorelease(puVar18);
          puVar1 = puVar18;
          func_0x00010bdc3520(puVar18);
        }
        _objc_release(puVar18);
        func_0x00010002b838(auStack_620,puVar1);
        uStack_658 = 0;
        uStack_650 = 0;
        uStack_648 = 0;
        func_0x00010007e1e8(&uStack_658,auStack_638,&lStack_608,2);
        (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e2c8,&uStack_658,puVar20);
        puStack_640 = &uStack_658;
        func_0x00010007e5dc(&puStack_640);
        lVar21 = 0;
        do {
          if ((&cStack_609)[lVar21] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_620 + lVar21));
          }
          lVar21 = lVar21 + -0x18;
        } while (lVar21 != -0x30);
      }
      puVar1 = puVar18;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_608) {
        ___stack_chk_fail();
        _objc_release(puVar18);
        if (cStack_621 < '\0') {
          __ZdlPv(auStack_638[0]);
        }
        _objc_release(puVar18);
        __Unwind_Resume();
        lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar5 != (undefined8 *)0x0) {
          puVar5 = puVar1;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          func_0x00010bf93420();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar2;
          func_0x00010bfdea00();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar3;
          func_0x00010bf0b760();
          FUN_10549be84();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar8);
          _objc_release(puVar11);
          _objc_release(puVar3);
          _objc_release(puVar10);
          _objc_release(puVar7);
          _objc_release(puVar2);
          _objc_release(puVar9);
          _objc_release(puVar5);
        }
        puVar5 = puVar1;
        func_0x00010bf13240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar5 != (undefined8 *)0x0) {
          puVar5 = puVar1;
          func_0x00010bf13240(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar8);
          _objc_release(puVar5);
        }
        puVar5 = puVar1;
        func_0x00010c118b20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar5 != (undefined8 *)0x0) {
          puVar5 = puVar1;
          func_0x00010c118b20(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar8);
          _objc_release(puVar5);
        }
        puVar5 = puVar1;
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar5;
        func_0x00010bf93420();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010bfdea00();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010bf0b760();
        FUN_10549be84();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar8);
        _objc_release(puVar3);
        _objc_release(puVar1);
        _objc_release(puVar10);
        _objc_release(puVar7);
        _objc_release(puVar2);
        _objc_release(puVar9);
        _objc_release(puVar5);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar21) {
          ___stack_chk_fail();
          _objc_retain();
          _objc_retain(puVar5);
          func_0x00010c08fa60(puVar5);
          func_0x00010c08fa60(puVar5);
          puVar1 = puVar5;
          func_0x00010c25cf00(puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf649e0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126af5d0;
          if (puVar10 == (undefined *)0x0) {
            puVar23 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa01c0(puVar8);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            func_0x00010bdc1900();
            _objc_retainAutoreleasedReturnValue();
            puVar23 = (undefined *)0x0;
            _objc_retain(0);
            puVar13 = puVar12;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar12;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar12;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if ((((puVar14 == (undefined *)0x0) || (puVar13 == (undefined *)0x0)) ||
                (puVar15 == (undefined *)0x0)) ||
               (((puVar8 = puVar15, func_0x00010c0720c0(), ((ulong)puVar8 & 1) == 0 &&
                 (puVar8 = puVar15, func_0x00010c0720c0(), ((ulong)puVar8 & 1) == 0)) &&
                (puVar8 = puVar15, func_0x00010c0720c0(), ((ulong)puVar8 & 1) == 0)))) {
              puVar8 = PTR_PTR_1126af5d0;
              puVar9 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfa01c0(puVar8);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar8 = PTR_PTR_1126af5d0;
              puVar16 = PTR_PTR_1126b9668;
              _objc_alloc(PTR_PTR_1126b9668);
              puVar9 = puVar5;
              func_0x00010bdc1b20(puVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bff45e0(puVar16);
              func_0x00010c2619e0(puVar8);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar16);
            }
            _objc_release(puVar9);
            _objc_release(puVar15);
            _objc_release(puVar14);
            _objc_release(puVar13);
            _objc_release(puVar12);
          }
          _objc_release(puVar23);
          _objc_release(puVar1);
          _objc_release(puVar10);
          _objc_release(puVar5);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10549a30c; end: 10549a4f7;  */

/* WARNING: Removing unreachable block (ram,0x00010549ab18) */
/* WARNING: Removing unreachable block (ram,0x00010549b8e0) */

void FUN_10549a30c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  undefined *puVar23;
  undefined8 *unaff_x23;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 auStack_598 [2];
  char cStack_581;
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  undefined8 *puStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 *puStack_500;
  undefined8 auStack_4f8 [2];
  char cStack_4e1;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [3];
  undefined1 auStack_268 [24];
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  puVar3 = param_4;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar22 = *(long **)(param_1 + 8);
    puVar7 = &UNK_10f2c426a;
    if ((int)param_2 == 0) {
      puVar7 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_78;
    func_0x00010002b838(auStack_78,puVar7);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = (undefined8 *)&UNK_11088e048;
    puVar5 = &uStack_98;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar21 = 0;
    puVar3 = param_4;
    do {
      if ((&cStack_49)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_a8 = FUN_10549a4f8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar10 = puVar5;
  puVar11 = puVar3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  if (puVar2 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar2[1];
    puVar7 = &UNK_10f2c426a;
    if ((int)puVar1 == 0) {
      puVar7 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_118;
    func_0x00010002b838(auStack_118,puVar7);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar1 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_100,puVar1);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar8 = (undefined8 *)&UNK_11088e098;
    puVar10 = &uStack_138;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar21 = 0;
    puVar11 = puVar3;
    do {
      if ((&cStack_e9)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar5);
  __Unwind_Resume();
  pcStack_148 = FUN_10549a6e4;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar8;
  puVar3 = puVar10;
  puVar2 = puVar11;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar10);
  if (puVar1 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar1[1];
    puVar7 = &UNK_10f2c426a;
    if ((int)puVar8 == 0) {
      puVar7 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar7);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar1 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar5 = (undefined8 *)&UNK_11088e0e8;
    puVar3 = &uStack_1d8;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar21 = 0;
    puVar2 = puVar11;
    do {
      if ((&cStack_189)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar1 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar10);
  __Unwind_Resume();
  puVar18 = &uStack_2a0;
  pcStack_1e8 = FUN_10549a8d0;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar5;
  puVar10 = puVar3;
  puVar11 = puVar2;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar5);
  _objc_retain(puVar2);
  if (puVar1 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar1[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_280,puVar1);
    puVar7 = &UNK_10f2c426a;
    if ((int)puVar3 == 0) {
      puVar7 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_268,puVar7);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar3 = puVar2;
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_250,puVar3);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x00010007e1e8(&uStack_2a0,auStack_280,&lStack_238,3);
    puVar8 = (undefined8 *)&UNK_11088e138;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e138,&uStack_2a0,param_5);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    lVar21 = 0;
    puVar10 = puVar18;
    puVar11 = param_5;
    do {
      if ((&cStack_239)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_250 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
      unaff_x23 = &uStack_2a0;
    } while (lVar21 != -0x48);
  }
  _objc_release(puVar2);
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  puStack_2d0 = auStack_280;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_2d0);
  _objc_release(puVar2);
  _objc_release(puVar5);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10549ab48;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = puVar8;
  puVar6 = puVar10;
  puVar19 = puVar11;
  puStack_2e0 = puVar3;
  puStack_2d8 = unaff_x23;
  puStack_2c8 = puVar1;
  puStack_2c0 = puVar2;
  puStack_2b8 = puVar5;
  pppuStack_2b0 = &pppuStack_1f0;
  _objc_retain(puVar10);
  puVar1 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar4[1];
    puVar7 = &UNK_10f2c426a;
    if ((int)puVar8 == 0) {
      puVar7 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_318;
    func_0x00010002b838(auStack_318,puVar7);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar1 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_300,puVar1);
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    func_0x00010007e1e8(&uStack_338,auStack_318,&lStack_2e8,2);
    puVar18 = (undefined8 *)&UNK_11088e188;
    puVar8 = &uStack_338;
    puVar6 = &uStack_338;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e188,puVar6,puVar11);
    puStack_320 = puVar8;
    func_0x00010007e5dc(&puStack_320);
    lVar21 = 0;
    puVar1 = auStack_318;
    puVar19 = puVar11;
    do {
      if ((&cStack_2e9)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar5 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_301 < '\0') {
    __ZdlPv(auStack_318[0]);
  }
  _objc_release(puVar10);
  puVar4 = puVar5;
  __Unwind_Resume();
  pcStack_348 = FUN_10549ad34;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar18;
  puVar11 = puVar6;
  puVar20 = puVar19;
  puStack_380 = puVar3;
  puStack_378 = unaff_x23;
  puStack_370 = puVar8;
  puStack_368 = puVar1;
  puStack_360 = puVar5;
  puStack_358 = puVar10;
  pppuStack_350 = &pppuStack_2b0;
  _objc_retain(puVar6);
  puVar1 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar4[1];
    puVar7 = &UNK_10f2c426a;
    if ((int)puVar18 == 0) {
      puVar7 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_3b8;
    func_0x00010002b838(auStack_3b8,puVar7);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar1 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_3a0,puVar1);
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    func_0x00010007e1e8(&uStack_3d8,auStack_3b8,&lStack_388,2);
    puVar2 = (undefined8 *)&UNK_11088e1d8;
    puVar18 = &uStack_3d8;
    puVar11 = &uStack_3d8;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e1d8,puVar11,puVar19);
    puStack_3c0 = puVar18;
    func_0x00010007e5dc(&puStack_3c0);
    lVar21 = 0;
    puVar1 = auStack_3b8;
    puVar20 = puVar19;
    do {
      if ((&cStack_389)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar5 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_388) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    if (cStack_3a1 < '\0') {
      __ZdlPv(auStack_3b8[0]);
    }
    _objc_release(puVar6);
    puVar4 = puVar5;
    __Unwind_Resume();
    pcStack_3e8 = FUN_10549af20;
    lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar2;
    puVar10 = puVar11;
    puVar19 = puVar20;
    puStack_420 = puVar3;
    puStack_418 = unaff_x23;
    puStack_410 = puVar18;
    puStack_408 = puVar1;
    puStack_400 = puVar5;
    puStack_3f8 = puVar6;
    pppuStack_3f0 = &pppuStack_350;
    _objc_retain(puVar11);
    puVar1 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      plVar22 = (long *)puVar4[1];
      puVar7 = &UNK_10f2c426a;
      if ((int)puVar2 == 0) {
        puVar7 = &UNK_10f2c426f;
      }
      unaff_x23 = auStack_458;
      func_0x00010002b838(auStack_458,puVar7);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar1 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_440,puVar1);
      uStack_478 = 0;
      uStack_470 = 0;
      uStack_468 = 0;
      func_0x00010007e1e8(&uStack_478,auStack_458,&lStack_428,2);
      puVar8 = (undefined8 *)&UNK_11088e228;
      puVar2 = &uStack_478;
      puVar10 = &uStack_478;
      (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e228,puVar10,puVar20);
      puStack_460 = puVar2;
      func_0x00010007e5dc(&puStack_460);
      lVar21 = 0;
      puVar1 = auStack_458;
      puVar19 = puVar20;
      do {
        if ((&cStack_429)[lVar21] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar21));
        }
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != -0x30);
    }
    puVar5 = puVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar11);
    if (cStack_441 < '\0') {
      __ZdlPv(auStack_458[0]);
    }
    _objc_release(puVar11);
    puVar6 = puVar5;
    __Unwind_Resume();
    pcStack_488 = FUN_10549b10c;
    lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar8;
    puVar18 = puVar10;
    puVar20 = puVar19;
    puStack_4c0 = puVar3;
    puStack_4b8 = unaff_x23;
    puStack_4b0 = puVar2;
    puStack_4a8 = puVar1;
    puStack_4a0 = puVar5;
    puStack_498 = puVar11;
    pppuStack_490 = &pppuStack_3f0;
    _objc_retain(puVar10);
    iVar17 = (int)puVar4;
    puVar1 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      plVar22 = (long *)puVar6[1];
      puVar7 = &UNK_10f2c426a;
      if ((int)puVar8 == 0) {
        puVar7 = &UNK_10f2c426f;
      }
      unaff_x23 = auStack_4f8;
      func_0x00010002b838(auStack_4f8,puVar7);
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar1 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x00010002b838(auStack_4e0,puVar1);
      uStack_518 = 0;
      uStack_510 = 0;
      uStack_508 = 0;
      func_0x00010007e1e8(&uStack_518,auStack_4f8,&lStack_4c8,2);
      puVar7 = &UNK_11088e278;
      puVar8 = &uStack_518;
      puVar18 = &uStack_518;
      (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e278,puVar18,puVar19);
      puStack_500 = puVar8;
      func_0x00010007e5dc(&puStack_500);
      lVar21 = 0;
      puVar1 = auStack_4f8;
      puVar20 = puVar19;
      do {
        if ((&cStack_4c9)[lVar21] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4e0 + lVar21));
        }
        iVar17 = (int)puVar7;
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != -0x30);
    }
    puVar5 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar10);
    if (cStack_4e1 < '\0') {
      __ZdlPv(auStack_4f8[0]);
    }
    _objc_release(puVar10);
    puVar2 = puVar5;
    __Unwind_Resume();
    pcStack_528 = FUN_10549b2f8;
    lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_560 = puVar3;
    puStack_558 = unaff_x23;
    puStack_550 = puVar8;
    puStack_548 = puVar1;
    puStack_540 = puVar5;
    puStack_538 = puVar10;
    pppuStack_530 = &pppuStack_490;
    _objc_retain(puVar18);
    if (puVar2 != (undefined8 *)0x0) {
      plVar22 = (long *)puVar2[1];
      puVar7 = &UNK_10f2c426a;
      if (iVar17 == 0) {
        puVar7 = &UNK_10f2c426f;
      }
      func_0x00010002b838(auStack_598,puVar7);
      _objc_retain(puVar18);
      if (puVar18 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar18);
        puVar1 = puVar18;
        func_0x00010bdc3520(puVar18);
      }
      _objc_release(puVar18);
      func_0x00010002b838(auStack_580,puVar1);
      uStack_5b8 = 0;
      uStack_5b0 = 0;
      uStack_5a8 = 0;
      func_0x00010007e1e8(&uStack_5b8,auStack_598,&lStack_568,2);
      (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e2c8,&uStack_5b8,puVar20);
      puStack_5a0 = &uStack_5b8;
      func_0x00010007e5dc(&puStack_5a0);
      lVar21 = 0;
      do {
        if ((&cStack_569)[lVar21] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_580 + lVar21));
        }
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != -0x30);
    }
    puVar1 = puVar18;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_568) {
      ___stack_chk_fail();
      _objc_release(puVar18);
      if (cStack_581 < '\0') {
        __ZdlPv(auStack_598[0]);
      }
      _objc_release(puVar18);
      __Unwind_Resume();
      lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010bf039c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 != (undefined8 *)0x0) {
        puVar5 = puVar1;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar5;
        func_0x00010bf93420();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
        func_0x00010bfdea00();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar1;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf0b760();
        FUN_10549be84();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar2);
        _objc_release(puVar3);
        _objc_release(puVar5);
      }
      puVar5 = puVar1;
      func_0x00010bf13240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 != (undefined8 *)0x0) {
        puVar5 = puVar1;
        func_0x00010bf13240(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar5);
      }
      puVar5 = puVar1;
      func_0x00010c118b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 != (undefined8 *)0x0) {
        puVar5 = puVar1;
        func_0x00010c118b20(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar5);
      }
      puVar5 = puVar1;
      func_0x00010bf15e20();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010bf93420();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf15e20();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010bfdea00();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf15e20();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar1;
      func_0x00010bf0b760();
      FUN_10549be84();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar7);
      _objc_release(puVar10);
      _objc_release(puVar1);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar5);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar21) {
        ___stack_chk_fail();
        _objc_retain();
        _objc_retain(puVar5);
        func_0x00010c08fa60(puVar5);
        func_0x00010c08fa60(puVar5);
        puVar1 = puVar5;
        func_0x00010c25cf00(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126af5d0;
        if (puVar9 == (undefined *)0x0) {
          puVar23 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa01c0(puVar7);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
          func_0x00010bdc1900();
          _objc_retainAutoreleasedReturnValue();
          puVar23 = (undefined *)0x0;
          _objc_retain(0);
          puVar13 = puVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if ((((puVar14 == (undefined *)0x0) || (puVar13 == (undefined *)0x0)) ||
              (puVar15 == (undefined *)0x0)) ||
             (((puVar7 = puVar15, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0 &&
               (puVar7 = puVar15, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0)) &&
              (puVar7 = puVar15, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0)))) {
            puVar7 = PTR_PTR_1126af5d0;
            puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa01c0(puVar7);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar7 = PTR_PTR_1126af5d0;
            puVar16 = PTR_PTR_1126b9668;
            _objc_alloc(PTR_PTR_1126b9668);
            puVar3 = puVar5;
            func_0x00010bdc1b20(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bff45e0(puVar16);
            func_0x00010c2619e0(puVar7);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar16);
          }
          _objc_release(puVar3);
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
        }
        _objc_release(puVar23);
        _objc_release(puVar1);
        _objc_release(puVar9);
        _objc_release(puVar5);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10549a4f8; end: 10549a6e3;  */

/* WARNING: Removing unreachable block (ram,0x00010549ab18) */
/* WARNING: Removing unreachable block (ram,0x00010549b8e0) */

void FUN_10549a4f8(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  undefined *puVar23;
  undefined8 *unaff_x23;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 *puStack_500;
  undefined8 auStack_4f8 [2];
  char cStack_4e1;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [3];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  puVar9 = param_4;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar22 = *(long **)(param_1 + 8);
    puVar8 = &UNK_10f2c426a;
    if ((int)param_2 == 0) {
      puVar8 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_78;
    func_0x00010002b838(auStack_78,puVar8);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = (undefined8 *)&UNK_11088e098;
    puVar5 = &uStack_98;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar21 = 0;
    puVar9 = param_4;
    do {
      if ((&cStack_49)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_a8 = FUN_10549a6e4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar3 = puVar5;
  puVar11 = puVar9;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  if (puVar2 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar2[1];
    puVar8 = &UNK_10f2c426a;
    if ((int)puVar1 == 0) {
      puVar8 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_118;
    func_0x00010002b838(auStack_118,puVar8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar1 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_100,puVar1);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = (undefined8 *)&UNK_11088e0e8;
    puVar3 = &uStack_138;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar21 = 0;
    puVar11 = puVar9;
    do {
      if ((&cStack_e9)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar5);
  __Unwind_Resume();
  puVar18 = &uStack_200;
  pcStack_148 = FUN_10549a8d0;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar7;
  puVar9 = puVar3;
  puVar2 = puVar11;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar11);
  if (puVar1 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar1[1];
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_1e0,puVar1);
    puVar8 = &UNK_10f2c426a;
    if ((int)puVar3 == 0) {
      puVar8 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_1c8,puVar8);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar3 = puVar11;
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_1b0,puVar3);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_198,3);
    puVar5 = (undefined8 *)&UNK_11088e138;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e138,&uStack_200,param_5);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    lVar21 = 0;
    puVar9 = puVar18;
    puVar2 = param_5;
    do {
      if ((&cStack_199)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
      unaff_x23 = &uStack_200;
    } while (lVar21 != -0x48);
  }
  _objc_release(puVar11);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  puStack_230 = auStack_1e0;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_230);
  _objc_release(puVar11);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_208 = FUN_10549ab48;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = puVar5;
  puVar6 = puVar9;
  puVar19 = puVar2;
  puStack_240 = puVar3;
  puStack_238 = unaff_x23;
  puStack_228 = puVar1;
  puStack_220 = puVar11;
  puStack_218 = puVar7;
  pppuStack_210 = &ppuStack_150;
  _objc_retain(puVar9);
  puVar1 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar4[1];
    puVar8 = &UNK_10f2c426a;
    if ((int)puVar5 == 0) {
      puVar8 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_278;
    func_0x00010002b838(auStack_278,puVar8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar1 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_260,puVar1);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    func_0x00010007e1e8(&uStack_298,auStack_278,&lStack_248,2);
    puVar18 = (undefined8 *)&UNK_11088e188;
    puVar5 = &uStack_298;
    puVar6 = &uStack_298;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e188,puVar6,puVar2);
    puStack_280 = puVar5;
    func_0x00010007e5dc(&puStack_280);
    lVar21 = 0;
    puVar1 = auStack_278;
    puVar19 = puVar2;
    do {
      if ((&cStack_249)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(puVar9);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10549ad34;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar18;
  puVar11 = puVar6;
  puVar20 = puVar19;
  puStack_2e0 = puVar3;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar5;
  puStack_2c8 = puVar1;
  puStack_2c0 = puVar2;
  puStack_2b8 = puVar9;
  pppuStack_2b0 = &pppuStack_210;
  _objc_retain(puVar6);
  puVar1 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar4[1];
    puVar8 = &UNK_10f2c426a;
    if ((int)puVar18 == 0) {
      puVar8 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_318;
    func_0x00010002b838(auStack_318,puVar8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar1 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_300,puVar1);
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    func_0x00010007e1e8(&uStack_338,auStack_318,&lStack_2e8,2);
    puVar7 = (undefined8 *)&UNK_11088e1d8;
    puVar18 = &uStack_338;
    puVar11 = &uStack_338;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e1d8,puVar11,puVar19);
    puStack_320 = puVar18;
    func_0x00010007e5dc(&puStack_320);
    lVar21 = 0;
    puVar1 = auStack_318;
    puVar20 = puVar19;
    do {
      if ((&cStack_2e9)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar5 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_301 < '\0') {
    __ZdlPv(auStack_318[0]);
  }
  _objc_release(puVar6);
  puVar4 = puVar5;
  __Unwind_Resume();
  pcStack_348 = FUN_10549af20;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar7;
  puVar2 = puVar11;
  puVar19 = puVar20;
  puStack_380 = puVar3;
  puStack_378 = unaff_x23;
  puStack_370 = puVar18;
  puStack_368 = puVar1;
  puStack_360 = puVar5;
  puStack_358 = puVar6;
  pppuStack_350 = &pppuStack_2b0;
  _objc_retain(puVar11);
  puVar1 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar4[1];
    puVar8 = &UNK_10f2c426a;
    if ((int)puVar7 == 0) {
      puVar8 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_3b8;
    func_0x00010002b838(auStack_3b8,puVar8);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar1 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_3a0,puVar1);
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    func_0x00010007e1e8(&uStack_3d8,auStack_3b8,&lStack_388,2);
    puVar9 = (undefined8 *)&UNK_11088e228;
    puVar7 = &uStack_3d8;
    puVar2 = &uStack_3d8;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e228,puVar2,puVar20);
    puStack_3c0 = puVar7;
    func_0x00010007e5dc(&puStack_3c0);
    lVar21 = 0;
    puVar1 = auStack_3b8;
    puVar19 = puVar20;
    do {
      if ((&cStack_389)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar5 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  if (cStack_3a1 < '\0') {
    __ZdlPv(auStack_3b8[0]);
  }
  _objc_release(puVar11);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_3e8 = FUN_10549b10c;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar9;
  puVar18 = puVar2;
  puVar20 = puVar19;
  puStack_420 = puVar3;
  puStack_418 = unaff_x23;
  puStack_410 = puVar7;
  puStack_408 = puVar1;
  puStack_400 = puVar5;
  puStack_3f8 = puVar11;
  pppuStack_3f0 = &pppuStack_350;
  _objc_retain(puVar2);
  iVar17 = (int)puVar4;
  puVar1 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar6[1];
    puVar8 = &UNK_10f2c426a;
    if ((int)puVar9 == 0) {
      puVar8 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_458;
    func_0x00010002b838(auStack_458,puVar8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar1 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_440,puVar1);
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_468 = 0;
    func_0x00010007e1e8(&uStack_478,auStack_458,&lStack_428,2);
    puVar8 = &UNK_11088e278;
    puVar9 = &uStack_478;
    puVar18 = &uStack_478;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e278,puVar18,puVar19);
    puStack_460 = puVar9;
    func_0x00010007e5dc(&puStack_460);
    lVar21 = 0;
    puVar1 = auStack_458;
    puVar20 = puVar19;
    do {
      if ((&cStack_429)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar21));
      }
      iVar17 = (int)puVar8;
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_428) {
    ___stack_chk_fail();
    _objc_release(puVar2);
    if (cStack_441 < '\0') {
      __ZdlPv(auStack_458[0]);
    }
    _objc_release(puVar2);
    puVar7 = puVar5;
    __Unwind_Resume();
    pcStack_488 = FUN_10549b2f8;
    lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_4c0 = puVar3;
    puStack_4b8 = unaff_x23;
    puStack_4b0 = puVar9;
    puStack_4a8 = puVar1;
    puStack_4a0 = puVar5;
    puStack_498 = puVar2;
    pppuStack_490 = &pppuStack_3f0;
    _objc_retain(puVar18);
    if (puVar7 != (undefined8 *)0x0) {
      plVar22 = (long *)puVar7[1];
      puVar8 = &UNK_10f2c426a;
      if (iVar17 == 0) {
        puVar8 = &UNK_10f2c426f;
      }
      func_0x00010002b838(auStack_4f8,puVar8);
      _objc_retain(puVar18);
      if (puVar18 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar18);
        puVar1 = puVar18;
        func_0x00010bdc3520(puVar18);
      }
      _objc_release(puVar18);
      func_0x00010002b838(auStack_4e0,puVar1);
      uStack_518 = 0;
      uStack_510 = 0;
      uStack_508 = 0;
      func_0x00010007e1e8(&uStack_518,auStack_4f8,&lStack_4c8,2);
      (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e2c8,&uStack_518,puVar20);
      puStack_500 = &uStack_518;
      func_0x00010007e5dc(&puStack_500);
      lVar21 = 0;
      do {
        if ((&cStack_4c9)[lVar21] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4e0 + lVar21));
        }
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != -0x30);
    }
    puVar1 = puVar18;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4c8) {
      ___stack_chk_fail();
      _objc_release(puVar18);
      if (cStack_4e1 < '\0') {
        __ZdlPv(auStack_4f8[0]);
      }
      _objc_release(puVar18);
      __Unwind_Resume();
      lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010bf039c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 != (undefined8 *)0x0) {
        puVar5 = puVar1;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar5;
        func_0x00010bf93420();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010bfdea00();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar3;
        func_0x00010bf0b760();
        FUN_10549be84();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar8);
        _objc_release(puVar11);
        _objc_release(puVar3);
        _objc_release(puVar10);
        _objc_release(puVar7);
        _objc_release(puVar2);
        _objc_release(puVar9);
        _objc_release(puVar5);
      }
      puVar5 = puVar1;
      func_0x00010bf13240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 != (undefined8 *)0x0) {
        puVar5 = puVar1;
        func_0x00010bf13240(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar8);
        _objc_release(puVar5);
      }
      puVar5 = puVar1;
      func_0x00010c118b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 != (undefined8 *)0x0) {
        puVar5 = puVar1;
        func_0x00010c118b20(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar8);
        _objc_release(puVar5);
      }
      puVar5 = puVar1;
      func_0x00010bf15e20();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar5;
      func_0x00010bf93420();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf15e20();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010bfdea00();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf15e20();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bf0b760();
      FUN_10549be84();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar8);
      _objc_release(puVar3);
      _objc_release(puVar1);
      _objc_release(puVar10);
      _objc_release(puVar7);
      _objc_release(puVar2);
      _objc_release(puVar9);
      _objc_release(puVar5);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar21) {
        ___stack_chk_fail();
        _objc_retain();
        _objc_retain(puVar5);
        func_0x00010c08fa60(puVar5);
        func_0x00010c08fa60(puVar5);
        puVar1 = puVar5;
        func_0x00010c25cf00(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126af5d0;
        if (puVar10 == (undefined *)0x0) {
          puVar23 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa01c0(puVar8);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
          func_0x00010bdc1900();
          _objc_retainAutoreleasedReturnValue();
          puVar23 = (undefined *)0x0;
          _objc_retain(0);
          puVar13 = puVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if ((((puVar14 == (undefined *)0x0) || (puVar13 == (undefined *)0x0)) ||
              (puVar15 == (undefined *)0x0)) ||
             (((puVar8 = puVar15, func_0x00010c0720c0(), ((ulong)puVar8 & 1) == 0 &&
               (puVar8 = puVar15, func_0x00010c0720c0(), ((ulong)puVar8 & 1) == 0)) &&
              (puVar8 = puVar15, func_0x00010c0720c0(), ((ulong)puVar8 & 1) == 0)))) {
            puVar8 = PTR_PTR_1126af5d0;
            puVar9 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa01c0(puVar8);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar8 = PTR_PTR_1126af5d0;
            puVar16 = PTR_PTR_1126b9668;
            _objc_alloc(PTR_PTR_1126b9668);
            puVar9 = puVar5;
            func_0x00010bdc1b20(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bff45e0(puVar16);
            func_0x00010c2619e0(puVar8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar16);
          }
          _objc_release(puVar9);
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
        }
        _objc_release(puVar23);
        _objc_release(puVar1);
        _objc_release(puVar10);
        _objc_release(puVar5);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10549a6e4; end: 10549a8cf;  */

/* WARNING: Removing unreachable block (ram,0x00010549ab18) */
/* WARNING: Removing unreachable block (ram,0x00010549b8e0) */

void FUN_10549a6e4(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  undefined *puVar23;
  undefined8 *unaff_x23;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar22 = *(long **)(param_1 + 8);
    puVar7 = &UNK_10f2c426a;
    if ((int)param_2 == 0) {
      puVar7 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_78;
    func_0x00010002b838(auStack_78,puVar7);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = (undefined8 *)&UNK_11088e0e8;
    puVar3 = &uStack_98;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar21 = 0;
    puVar5 = param_4;
    do {
      if ((&cStack_49)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  puVar18 = &uStack_160;
  pcStack_a8 = FUN_10549a8d0;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar10 = puVar3;
  puVar11 = puVar5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  if (puVar2 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar2[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_140,puVar2);
    puVar7 = &UNK_10f2c426a;
    if ((int)puVar3 == 0) {
      puVar7 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_128,puVar7);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_110,puVar3);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
    puVar8 = (undefined8 *)&UNK_11088e138;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e138,&uStack_160,param_5);
    puStack_148 = (undefined1 *)&uStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar21 = 0;
    puVar10 = puVar18;
    puVar11 = param_5;
    do {
      if ((&cStack_f9)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
      unaff_x23 = &uStack_160;
    } while (lVar21 != -0x48);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  puStack_190 = auStack_140;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_190);
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_168 = FUN_10549ab48;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = puVar8;
  puVar6 = puVar10;
  puVar19 = puVar11;
  puStack_1a0 = puVar3;
  puStack_198 = unaff_x23;
  puStack_188 = puVar2;
  puStack_180 = puVar5;
  puStack_178 = puVar1;
  ppuStack_170 = &puStack_b0;
  _objc_retain(puVar10);
  puVar1 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar4[1];
    puVar7 = &UNK_10f2c426a;
    if ((int)puVar8 == 0) {
      puVar7 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_1d8;
    func_0x00010002b838(auStack_1d8,puVar7);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar1 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_1c0,puVar1);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    func_0x00010007e1e8(&uStack_1f8,auStack_1d8,&lStack_1a8,2);
    puVar18 = (undefined8 *)&UNK_11088e188;
    puVar8 = &uStack_1f8;
    puVar6 = &uStack_1f8;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e188,puVar6,puVar11);
    puStack_1e0 = puVar8;
    func_0x00010007e5dc(&puStack_1e0);
    lVar21 = 0;
    puVar1 = auStack_1d8;
    puVar19 = puVar11;
    do {
      if ((&cStack_1a9)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar5 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  _objc_release(puVar10);
  puVar4 = puVar5;
  __Unwind_Resume();
  pcStack_208 = FUN_10549ad34;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar18;
  puVar11 = puVar6;
  puVar20 = puVar19;
  puStack_240 = puVar3;
  puStack_238 = unaff_x23;
  puStack_230 = puVar8;
  puStack_228 = puVar1;
  puStack_220 = puVar5;
  puStack_218 = puVar10;
  pppuStack_210 = &ppuStack_170;
  _objc_retain(puVar6);
  puVar1 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar4[1];
    puVar7 = &UNK_10f2c426a;
    if ((int)puVar18 == 0) {
      puVar7 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_278;
    func_0x00010002b838(auStack_278,puVar7);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar1 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_260,puVar1);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    func_0x00010007e1e8(&uStack_298,auStack_278,&lStack_248,2);
    puVar2 = (undefined8 *)&UNK_11088e1d8;
    puVar18 = &uStack_298;
    puVar11 = &uStack_298;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e1d8,puVar11,puVar19);
    puStack_280 = puVar18;
    func_0x00010007e5dc(&puStack_280);
    lVar21 = 0;
    puVar1 = auStack_278;
    puVar20 = puVar19;
    do {
      if ((&cStack_249)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  puVar5 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    if (cStack_261 < '\0') {
      __ZdlPv(auStack_278[0]);
    }
    _objc_release(puVar6);
    puVar4 = puVar5;
    __Unwind_Resume();
    pcStack_2a8 = FUN_10549af20;
    lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar2;
    puVar10 = puVar11;
    puVar19 = puVar20;
    puStack_2e0 = puVar3;
    puStack_2d8 = unaff_x23;
    puStack_2d0 = puVar18;
    puStack_2c8 = puVar1;
    puStack_2c0 = puVar5;
    puStack_2b8 = puVar6;
    pppuStack_2b0 = &pppuStack_210;
    _objc_retain(puVar11);
    puVar1 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      plVar22 = (long *)puVar4[1];
      puVar7 = &UNK_10f2c426a;
      if ((int)puVar2 == 0) {
        puVar7 = &UNK_10f2c426f;
      }
      unaff_x23 = auStack_318;
      func_0x00010002b838(auStack_318,puVar7);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar1 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_300,puVar1);
      uStack_338 = 0;
      uStack_330 = 0;
      uStack_328 = 0;
      func_0x00010007e1e8(&uStack_338,auStack_318,&lStack_2e8,2);
      puVar8 = (undefined8 *)&UNK_11088e228;
      puVar2 = &uStack_338;
      puVar10 = &uStack_338;
      (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e228,puVar10,puVar20);
      puStack_320 = puVar2;
      func_0x00010007e5dc(&puStack_320);
      lVar21 = 0;
      puVar1 = auStack_318;
      puVar19 = puVar20;
      do {
        if ((&cStack_2e9)[lVar21] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar21));
        }
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != -0x30);
    }
    puVar5 = puVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar11);
    if (cStack_301 < '\0') {
      __ZdlPv(auStack_318[0]);
    }
    _objc_release(puVar11);
    puVar6 = puVar5;
    __Unwind_Resume();
    pcStack_348 = FUN_10549b10c;
    lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar8;
    puVar18 = puVar10;
    puVar20 = puVar19;
    puStack_380 = puVar3;
    puStack_378 = unaff_x23;
    puStack_370 = puVar2;
    puStack_368 = puVar1;
    puStack_360 = puVar5;
    puStack_358 = puVar11;
    pppuStack_350 = &pppuStack_2b0;
    _objc_retain(puVar10);
    iVar17 = (int)puVar4;
    puVar1 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      plVar22 = (long *)puVar6[1];
      puVar7 = &UNK_10f2c426a;
      if ((int)puVar8 == 0) {
        puVar7 = &UNK_10f2c426f;
      }
      unaff_x23 = auStack_3b8;
      func_0x00010002b838(auStack_3b8,puVar7);
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar1 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x00010002b838(auStack_3a0,puVar1);
      uStack_3d8 = 0;
      uStack_3d0 = 0;
      uStack_3c8 = 0;
      func_0x00010007e1e8(&uStack_3d8,auStack_3b8,&lStack_388,2);
      puVar7 = &UNK_11088e278;
      puVar8 = &uStack_3d8;
      puVar18 = &uStack_3d8;
      (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e278,puVar18,puVar19);
      puStack_3c0 = puVar8;
      func_0x00010007e5dc(&puStack_3c0);
      lVar21 = 0;
      puVar1 = auStack_3b8;
      puVar20 = puVar19;
      do {
        if ((&cStack_389)[lVar21] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar21));
        }
        iVar17 = (int)puVar7;
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != -0x30);
    }
    puVar5 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_388) {
      ___stack_chk_fail();
      _objc_release(puVar10);
      if (cStack_3a1 < '\0') {
        __ZdlPv(auStack_3b8[0]);
      }
      _objc_release(puVar10);
      puVar2 = puVar5;
      __Unwind_Resume();
      pcStack_3e8 = FUN_10549b2f8;
      lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_420 = puVar3;
      puStack_418 = unaff_x23;
      puStack_410 = puVar8;
      puStack_408 = puVar1;
      puStack_400 = puVar5;
      puStack_3f8 = puVar10;
      pppuStack_3f0 = &pppuStack_350;
      _objc_retain(puVar18);
      if (puVar2 != (undefined8 *)0x0) {
        plVar22 = (long *)puVar2[1];
        puVar7 = &UNK_10f2c426a;
        if (iVar17 == 0) {
          puVar7 = &UNK_10f2c426f;
        }
        func_0x00010002b838(auStack_458,puVar7);
        _objc_retain(puVar18);
        if (puVar18 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f2c4275;
        }
        else {
          _objc_retainAutorelease(puVar18);
          puVar1 = puVar18;
          func_0x00010bdc3520(puVar18);
        }
        _objc_release(puVar18);
        func_0x00010002b838(auStack_440,puVar1);
        uStack_478 = 0;
        uStack_470 = 0;
        uStack_468 = 0;
        func_0x00010007e1e8(&uStack_478,auStack_458,&lStack_428,2);
        (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11088e2c8,&uStack_478,puVar20);
        puStack_460 = &uStack_478;
        func_0x00010007e5dc(&puStack_460);
        lVar21 = 0;
        do {
          if ((&cStack_429)[lVar21] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar21));
          }
          lVar21 = lVar21 + -0x18;
        } while (lVar21 != -0x30);
      }
      puVar1 = puVar18;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_428) {
        ___stack_chk_fail();
        _objc_release(puVar18);
        if (cStack_441 < '\0') {
          __ZdlPv(auStack_458[0]);
        }
        _objc_release(puVar18);
        __Unwind_Resume();
        lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar3 != (undefined8 *)0x0) {
          puVar3 = puVar1;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010bf93420();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar2;
          func_0x00010bfdea00();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar1;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010bf0b760();
          FUN_10549be84();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar2);
          _objc_release(puVar5);
          _objc_release(puVar3);
        }
        puVar3 = puVar1;
        func_0x00010bf13240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar3 != (undefined8 *)0x0) {
          puVar3 = puVar1;
          func_0x00010bf13240(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar3);
        }
        puVar3 = puVar1;
        func_0x00010c118b20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar3 != (undefined8 *)0x0) {
          puVar3 = puVar1;
          func_0x00010c118b20(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar3);
        }
        puVar3 = puVar1;
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bf93420();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
        func_0x00010bfdea00();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar1;
        func_0x00010bf0b760();
        FUN_10549be84();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar10);
        _objc_release(puVar1);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar2);
        _objc_release(puVar5);
        _objc_release(puVar3);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar21) {
          ___stack_chk_fail();
          _objc_retain();
          _objc_retain(puVar3);
          func_0x00010c08fa60(puVar3);
          func_0x00010c08fa60(puVar3);
          puVar1 = puVar3;
          func_0x00010c25cf00(puVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf649e0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126af5d0;
          if (puVar9 == (undefined *)0x0) {
            puVar23 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa01c0(puVar7);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            func_0x00010bdc1900();
            _objc_retainAutoreleasedReturnValue();
            puVar23 = (undefined *)0x0;
            _objc_retain(0);
            puVar13 = puVar12;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar12;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar12;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if ((((puVar14 == (undefined *)0x0) || (puVar13 == (undefined *)0x0)) ||
                (puVar15 == (undefined *)0x0)) ||
               (((puVar7 = puVar15, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0 &&
                 (puVar7 = puVar15, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0)) &&
                (puVar7 = puVar15, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0)))) {
              puVar7 = PTR_PTR_1126af5d0;
              puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfa01c0(puVar7);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar7 = PTR_PTR_1126af5d0;
              puVar16 = PTR_PTR_1126b9668;
              _objc_alloc(PTR_PTR_1126b9668);
              puVar5 = puVar3;
              func_0x00010bdc1b20(puVar3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bff45e0(puVar16);
              func_0x00010c2619e0(puVar7);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar16);
            }
            _objc_release(puVar5);
            _objc_release(puVar15);
            _objc_release(puVar14);
            _objc_release(puVar13);
            _objc_release(puVar12);
          }
          _objc_release(puVar23);
          _objc_release(puVar1);
          _objc_release(puVar9);
          _objc_release(puVar3);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10549a8d0; end: 10549ab47;  */

/* WARNING: Removing unreachable block (ram,0x00010549ab18) */
/* WARNING: Removing unreachable block (ram,0x00010549b8e0) */

void FUN_10549a8d0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  undefined *puVar22;
  undefined8 *unaff_x23;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar2 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar6 = param_3;
  puVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar21 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    puVar9 = &UNK_10f2c426a;
    if ((int)param_3 == 0) {
      puVar9 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_88,puVar9);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(param_4);
      param_3 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,param_3);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = (undefined8 *)&UNK_11088e138;
    (**(code **)(*plVar21 + 0x18))(plVar21,&UNK_11088e138,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar20 = 0;
    puVar6 = puVar2;
    puVar4 = param_5;
    do {
      if ((&cStack_59)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
      unaff_x23 = &uStack_c0;
    } while (lVar20 != -0x48);
  }
  _objc_release(param_4);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f0 = auStack_a0;
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != puStack_f0);
  _objc_release(param_4);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_10549ab48;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar1;
  puVar8 = puVar6;
  puVar7 = puVar4;
  puStack_100 = param_3;
  puStack_f8 = unaff_x23;
  puStack_e8 = puVar2;
  puStack_e0 = param_4;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puVar2 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar21 = (long *)puVar3[1];
    puVar9 = &UNK_10f2c426a;
    if ((int)puVar1 == 0) {
      puVar9 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_138;
    func_0x00010002b838(auStack_138,puVar9);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar1 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_120,puVar1);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    puVar10 = (undefined8 *)&UNK_11088e188;
    puVar1 = &uStack_158;
    puVar8 = &uStack_158;
    (**(code **)(*plVar21 + 0x18))(plVar21,&UNK_11088e188,puVar8,puVar4);
    puStack_140 = puVar1;
    func_0x00010007e5dc(&puStack_140);
    lVar20 = 0;
    puVar2 = auStack_138;
    puVar7 = puVar4;
    do {
      if ((&cStack_109)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  puVar4 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(puVar6);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_168 = FUN_10549ad34;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar10;
  puVar18 = puVar8;
  puVar19 = puVar7;
  puStack_1a0 = param_3;
  puStack_198 = unaff_x23;
  puStack_190 = puVar1;
  puStack_188 = puVar2;
  puStack_180 = puVar4;
  puStack_178 = puVar6;
  ppuStack_170 = &puStack_d0;
  _objc_retain(puVar8);
  puVar1 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar21 = (long *)puVar5[1];
    puVar9 = &UNK_10f2c426a;
    if ((int)puVar10 == 0) {
      puVar9 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_1d8;
    func_0x00010002b838(auStack_1d8,puVar9);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1c0,puVar1);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    func_0x00010007e1e8(&uStack_1f8,auStack_1d8,&lStack_1a8,2);
    puVar3 = (undefined8 *)&UNK_11088e1d8;
    puVar10 = &uStack_1f8;
    puVar18 = &uStack_1f8;
    (**(code **)(*plVar21 + 0x18))(plVar21,&UNK_11088e1d8,puVar18,puVar7);
    puStack_1e0 = puVar10;
    func_0x00010007e5dc(&puStack_1e0);
    lVar20 = 0;
    puVar1 = auStack_1d8;
    puVar19 = puVar7;
    do {
      if ((&cStack_1a9)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  puVar6 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  _objc_release(puVar8);
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_208 = FUN_10549af20;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar3;
  puVar2 = puVar18;
  puVar5 = puVar19;
  puStack_240 = param_3;
  puStack_238 = unaff_x23;
  puStack_230 = puVar10;
  puStack_228 = puVar1;
  puStack_220 = puVar6;
  puStack_218 = puVar8;
  pppuStack_210 = &ppuStack_170;
  _objc_retain(puVar18);
  puVar1 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar21 = (long *)puVar7[1];
    puVar9 = &UNK_10f2c426a;
    if ((int)puVar3 == 0) {
      puVar9 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_278;
    func_0x00010002b838(auStack_278,puVar9);
    _objc_retain(puVar18);
    if (puVar18 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar18);
      puVar1 = puVar18;
      func_0x00010bdc3520(puVar18);
    }
    _objc_release(puVar18);
    func_0x00010002b838(auStack_260,puVar1);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    func_0x00010007e1e8(&uStack_298,auStack_278,&lStack_248,2);
    puVar4 = (undefined8 *)&UNK_11088e228;
    puVar3 = &uStack_298;
    puVar2 = &uStack_298;
    (**(code **)(*plVar21 + 0x18))(plVar21,&UNK_11088e228,puVar2,puVar19);
    puStack_280 = puVar3;
    func_0x00010007e5dc(&puStack_280);
    lVar20 = 0;
    puVar1 = auStack_278;
    puVar5 = puVar19;
    do {
      if ((&cStack_249)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  puVar6 = puVar18;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar18);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(puVar18);
  puVar8 = puVar6;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10549b10c;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar4;
  puVar10 = puVar2;
  puVar19 = puVar5;
  puStack_2e0 = param_3;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar3;
  puStack_2c8 = puVar1;
  puStack_2c0 = puVar6;
  puStack_2b8 = puVar18;
  pppuStack_2b0 = &pppuStack_210;
  _objc_retain(puVar2);
  iVar17 = (int)puVar7;
  puVar1 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar21 = (long *)puVar8[1];
    puVar9 = &UNK_10f2c426a;
    if ((int)puVar4 == 0) {
      puVar9 = &UNK_10f2c426f;
    }
    unaff_x23 = auStack_318;
    func_0x00010002b838(auStack_318,puVar9);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar1 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_300,puVar1);
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    func_0x00010007e1e8(&uStack_338,auStack_318,&lStack_2e8,2);
    puVar9 = &UNK_11088e278;
    puVar4 = &uStack_338;
    puVar10 = &uStack_338;
    (**(code **)(*plVar21 + 0x18))(plVar21,&UNK_11088e278,puVar10,puVar5);
    puStack_320 = puVar4;
    func_0x00010007e5dc(&puStack_320);
    lVar20 = 0;
    puVar1 = auStack_318;
    puVar19 = puVar5;
    do {
      if ((&cStack_2e9)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar20));
      }
      iVar17 = (int)puVar9;
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  puVar6 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
    ___stack_chk_fail();
    _objc_release(puVar2);
    if (cStack_301 < '\0') {
      __ZdlPv(auStack_318[0]);
    }
    _objc_release(puVar2);
    puVar8 = puVar6;
    __Unwind_Resume();
    pcStack_348 = FUN_10549b2f8;
    lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_380 = param_3;
    puStack_378 = unaff_x23;
    puStack_370 = puVar4;
    puStack_368 = puVar1;
    puStack_360 = puVar6;
    puStack_358 = puVar2;
    pppuStack_350 = &pppuStack_2b0;
    _objc_retain(puVar10);
    if (puVar8 != (undefined8 *)0x0) {
      plVar21 = (long *)puVar8[1];
      puVar9 = &UNK_10f2c426a;
      if (iVar17 == 0) {
        puVar9 = &UNK_10f2c426f;
      }
      func_0x00010002b838(auStack_3b8,puVar9);
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar1 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x00010002b838(auStack_3a0,puVar1);
      uStack_3d8 = 0;
      uStack_3d0 = 0;
      uStack_3c8 = 0;
      func_0x00010007e1e8(&uStack_3d8,auStack_3b8,&lStack_388,2);
      (**(code **)(*plVar21 + 0x18))(plVar21,&UNK_11088e2c8,&uStack_3d8,puVar19);
      puStack_3c0 = &uStack_3d8;
      func_0x00010007e5dc(&puStack_3c0);
      lVar20 = 0;
      do {
        if ((&cStack_389)[lVar20] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar20));
        }
        lVar20 = lVar20 + -0x18;
      } while (lVar20 != -0x30);
    }
    puVar1 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_388) {
      ___stack_chk_fail();
      _objc_release(puVar10);
      if (cStack_3a1 < '\0') {
        __ZdlPv(auStack_3b8[0]);
      }
      _objc_release(puVar10);
      __Unwind_Resume();
      lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x00010bf039c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar6 != (undefined8 *)0x0) {
        puVar6 = puVar1;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar6;
        func_0x00010bf93420();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar2;
        func_0x00010bfdea00();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar1;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar8;
        func_0x00010bf0b760();
        FUN_10549be84();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar9);
        _objc_release(puVar3);
        _objc_release(puVar8);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar2);
        _objc_release(puVar4);
        _objc_release(puVar6);
      }
      puVar6 = puVar1;
      func_0x00010bf13240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar6 != (undefined8 *)0x0) {
        puVar6 = puVar1;
        func_0x00010bf13240(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar9);
        _objc_release(puVar6);
      }
      puVar6 = puVar1;
      func_0x00010c118b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar6 != (undefined8 *)0x0) {
        puVar6 = puVar1;
        func_0x00010c118b20(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar9);
        _objc_release(puVar6);
      }
      puVar6 = puVar1;
      func_0x00010bf15e20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010bf93420();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf15e20();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2;
      func_0x00010bfdea00();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf15e20();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar1;
      func_0x00010bf0b760();
      FUN_10549be84();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar1);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar6);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
        ___stack_chk_fail();
        _objc_retain();
        _objc_retain(puVar6);
        func_0x00010c08fa60(puVar6);
        func_0x00010c08fa60(puVar6);
        puVar1 = puVar6;
        func_0x00010c25cf00(puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649e0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126af5d0;
        if (puVar11 == (undefined *)0x0) {
          puVar22 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa01c0(puVar9);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
          func_0x00010bdc1900();
          _objc_retainAutoreleasedReturnValue();
          puVar22 = (undefined *)0x0;
          _objc_retain(0);
          puVar13 = puVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if ((((puVar14 == (undefined *)0x0) || (puVar13 == (undefined *)0x0)) ||
              (puVar15 == (undefined *)0x0)) ||
             (((puVar9 = puVar15, func_0x00010c0720c0(), ((ulong)puVar9 & 1) == 0 &&
               (puVar9 = puVar15, func_0x00010c0720c0(), ((ulong)puVar9 & 1) == 0)) &&
              (puVar9 = puVar15, func_0x00010c0720c0(), ((ulong)puVar9 & 1) == 0)))) {
            puVar9 = PTR_PTR_1126af5d0;
            puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa01c0(puVar9);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar9 = PTR_PTR_1126af5d0;
            puVar16 = PTR_PTR_1126b9668;
            _objc_alloc(PTR_PTR_1126b9668);
            puVar4 = puVar6;
            func_0x00010bdc1b20(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bff45e0(puVar16);
            func_0x00010c2619e0(puVar9);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar16);
          }
          _objc_release(puVar4);
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
        }
        _objc_release(puVar22);
        _objc_release(puVar1);
        _objc_release(puVar11);
        _objc_release(puVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10549ab48; end: 10549ad33;  */

/* WARNING: Removing unreachable block (ram,0x00010549b8e0) */

void FUN_10549ab48(long param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  undefined *puVar21;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  uVar17 = param_4;
  iVar15 = param_2;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar20 = *(long **)(param_1 + 8);
    puVar3 = &UNK_10f2c426a;
    if (param_2 == 0) {
      puVar3 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_78,puVar3);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar3 = &UNK_11088e188;
    puVar1 = &uStack_98;
    (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11088e188,puVar1,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar19 = 0;
    uVar17 = param_4;
    do {
      if ((&cStack_49)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar19));
      }
      iVar15 = (int)puVar3;
      lVar19 = lVar19 + -0x18;
    } while (lVar19 != -0x30);
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  uVar18 = uVar17;
  iVar16 = iVar15;
  _objc_retain(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar2[1];
    puVar3 = &UNK_10f2c426a;
    if (iVar15 == 0) {
      puVar3 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar2 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_100,puVar2);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar3 = &UNK_11088e1d8;
    puVar4 = &uStack_138;
    (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11088e1d8,puVar4,uVar17);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar19 = 0;
    uVar18 = uVar17;
    do {
      if ((&cStack_e9)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar19));
      }
      iVar16 = (int)puVar3;
      lVar19 = lVar19 + -0x18;
    } while (lVar19 != -0x30);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  uVar17 = uVar18;
  iVar15 = iVar16;
  _objc_retain(puVar4);
  if (puVar2 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar2[1];
    puVar3 = &UNK_10f2c426a;
    if (iVar16 == 0) {
      puVar3 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_1b8,puVar3);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar1 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar3 = &UNK_11088e228;
    puVar1 = &uStack_1d8;
    (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11088e228,puVar1,uVar18);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar19 = 0;
    uVar17 = uVar18;
    do {
      if ((&cStack_189)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar19));
      }
      iVar15 = (int)puVar3;
      lVar19 = lVar19 + -0x18;
    } while (lVar19 != -0x30);
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    if (cStack_1a1 < '\0') {
      __ZdlPv(auStack_1b8[0]);
    }
    _objc_release(puVar4);
    __Unwind_Resume();
    lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar1;
    uVar18 = uVar17;
    iVar16 = iVar15;
    _objc_retain(puVar1);
    if (puVar2 != (undefined8 *)0x0) {
      plVar20 = (long *)puVar2[1];
      puVar3 = &UNK_10f2c426a;
      if (iVar15 == 0) {
        puVar3 = &UNK_10f2c426f;
      }
      func_0x00010002b838(auStack_258,puVar3);
      _objc_retain(puVar1);
      if (puVar1 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar1);
        puVar2 = puVar1;
        func_0x00010bdc3520(puVar1);
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_240,puVar2);
      uStack_278 = 0;
      uStack_270 = 0;
      uStack_268 = 0;
      func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
      puVar3 = &UNK_11088e278;
      puVar4 = &uStack_278;
      (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11088e278,puVar4,uVar17);
      puStack_260 = &uStack_278;
      func_0x00010007e5dc(&puStack_260);
      lVar19 = 0;
      uVar18 = uVar17;
      do {
        if ((&cStack_229)[lVar19] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar19));
        }
        iVar16 = (int)puVar3;
        lVar19 = lVar19 + -0x18;
      } while (lVar19 != -0x30);
    }
    puVar2 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
      ___stack_chk_fail();
      _objc_release(puVar1);
      if (cStack_241 < '\0') {
        __ZdlPv(auStack_258[0]);
      }
      _objc_release(puVar1);
      __Unwind_Resume();
      lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar4);
      if (puVar2 != (undefined8 *)0x0) {
        plVar20 = (long *)puVar2[1];
        puVar3 = &UNK_10f2c426a;
        if (iVar16 == 0) {
          puVar3 = &UNK_10f2c426f;
        }
        func_0x00010002b838(auStack_2f8,puVar3);
        _objc_retain(puVar4);
        if (puVar4 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f2c4275;
        }
        else {
          _objc_retainAutorelease(puVar4);
          puVar1 = puVar4;
          func_0x00010bdc3520(puVar4);
        }
        _objc_release(puVar4);
        func_0x00010002b838(auStack_2e0,puVar1);
        uStack_318 = 0;
        uStack_310 = 0;
        uStack_308 = 0;
        func_0x00010007e1e8(&uStack_318,auStack_2f8,&lStack_2c8,2);
        (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11088e2c8,&uStack_318,uVar18);
        puStack_300 = &uStack_318;
        func_0x00010007e5dc(&puStack_300);
        lVar19 = 0;
        do {
          if ((&cStack_2c9)[lVar19] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar19));
          }
          lVar19 = lVar19 + -0x18;
        } while (lVar19 != -0x30);
      }
      puVar1 = puVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
        ___stack_chk_fail();
        _objc_release(puVar4);
        if (cStack_2e1 < '\0') {
          __ZdlPv(auStack_2f8[0]);
        }
        _objc_release(puVar4);
        __Unwind_Resume();
        lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar2 != (undefined8 *)0x0) {
          puVar2 = puVar1;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar2;
          func_0x00010bf93420();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar1;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bfdea00();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar1;
          func_0x00010bf039c0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010bf0b760();
          FUN_10549be84();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar2);
        }
        puVar2 = puVar1;
        func_0x00010bf13240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar2 != (undefined8 *)0x0) {
          puVar2 = puVar1;
          func_0x00010bf13240(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(puVar2);
        }
        puVar2 = puVar1;
        func_0x00010c118b20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar2 != (undefined8 *)0x0) {
          puVar2 = puVar1;
          func_0x00010c118b20(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(puVar2);
        }
        puVar2 = puVar1;
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010bf93420();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bfdea00();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf15e20();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar1;
        func_0x00010bf0b760();
        FUN_10549be84();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar8);
        _objc_release(puVar1);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
          ___stack_chk_fail();
          _objc_retain();
          _objc_retain(puVar2);
          func_0x00010c08fa60(puVar2);
          func_0x00010c08fa60(puVar2);
          puVar1 = puVar2;
          func_0x00010c25cf00(puVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf649e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126af5d0;
          if (puVar7 == (undefined *)0x0) {
            puVar21 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa01c0(puVar3);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar10 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            func_0x00010bdc1900();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = (undefined *)0x0;
            _objc_retain(0);
            puVar11 = puVar10;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar10;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar10;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if ((((puVar12 == (undefined *)0x0) || (puVar11 == (undefined *)0x0)) ||
                (puVar13 == (undefined *)0x0)) ||
               (((puVar3 = puVar13, func_0x00010c0720c0(), ((ulong)puVar3 & 1) == 0 &&
                 (puVar3 = puVar13, func_0x00010c0720c0(), ((ulong)puVar3 & 1) == 0)) &&
                (puVar3 = puVar13, func_0x00010c0720c0(), ((ulong)puVar3 & 1) == 0)))) {
              puVar3 = PTR_PTR_1126af5d0;
              puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfa01c0(puVar3);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar3 = PTR_PTR_1126af5d0;
              puVar14 = PTR_PTR_1126b9668;
              _objc_alloc(PTR_PTR_1126b9668);
              puVar4 = puVar2;
              func_0x00010bdc1b20(puVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bff45e0(puVar14);
              func_0x00010c2619e0(puVar3);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar14);
            }
            _objc_release(puVar4);
            _objc_release(puVar13);
            _objc_release(puVar12);
            _objc_release(puVar11);
            _objc_release(puVar10);
          }
          _objc_release(puVar21);
          _objc_release(puVar1);
          _objc_release(puVar7);
          _objc_release(puVar2);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10549ad34; end: 10549af1f;  */

/* WARNING: Removing unreachable block (ram,0x00010549b8e0) */

void FUN_10549ad34(long param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  undefined *puVar21;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  uVar17 = param_4;
  iVar16 = param_2;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar20 = *(long **)(param_1 + 8);
    puVar3 = &UNK_10f2c426a;
    if (param_2 == 0) {
      puVar3 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_78,puVar3);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar3 = &UNK_11088e1d8;
    puVar1 = &uStack_98;
    (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11088e1d8,puVar1,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar19 = 0;
    uVar17 = param_4;
    do {
      if ((&cStack_49)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar19));
      }
      iVar16 = (int)puVar3;
      lVar19 = lVar19 + -0x18;
    } while (lVar19 != -0x30);
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  uVar18 = uVar17;
  iVar15 = iVar16;
  _objc_retain(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar2[1];
    puVar3 = &UNK_10f2c426a;
    if (iVar16 == 0) {
      puVar3 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar2 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_100,puVar2);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar3 = &UNK_11088e228;
    puVar4 = &uStack_138;
    (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11088e228,puVar4,uVar17);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar19 = 0;
    uVar18 = uVar17;
    do {
      if ((&cStack_e9)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar19));
      }
      iVar15 = (int)puVar3;
      lVar19 = lVar19 + -0x18;
    } while (lVar19 != -0x30);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  uVar17 = uVar18;
  iVar16 = iVar15;
  _objc_retain(puVar4);
  if (puVar2 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar2[1];
    puVar3 = &UNK_10f2c426a;
    if (iVar15 == 0) {
      puVar3 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_1b8,puVar3);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar1 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar3 = &UNK_11088e278;
    puVar1 = &uStack_1d8;
    (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11088e278,puVar1,uVar18);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar19 = 0;
    uVar17 = uVar18;
    do {
      if ((&cStack_189)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar19));
      }
      iVar16 = (int)puVar3;
      lVar19 = lVar19 + -0x18;
    } while (lVar19 != -0x30);
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    if (cStack_1a1 < '\0') {
      __ZdlPv(auStack_1b8[0]);
    }
    _objc_release(puVar4);
    __Unwind_Resume();
    lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar1);
    if (puVar2 != (undefined8 *)0x0) {
      plVar20 = (long *)puVar2[1];
      puVar3 = &UNK_10f2c426a;
      if (iVar16 == 0) {
        puVar3 = &UNK_10f2c426f;
      }
      func_0x00010002b838(auStack_258,puVar3);
      _objc_retain(puVar1);
      if (puVar1 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar1);
        puVar2 = puVar1;
        func_0x00010bdc3520(puVar1);
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_240,puVar2);
      uStack_278 = 0;
      uStack_270 = 0;
      uStack_268 = 0;
      func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
      (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11088e2c8,&uStack_278,uVar17);
      puStack_260 = &uStack_278;
      func_0x00010007e5dc(&puStack_260);
      lVar19 = 0;
      do {
        if ((&cStack_229)[lVar19] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar19));
        }
        lVar19 = lVar19 + -0x18;
      } while (lVar19 != -0x30);
    }
    puVar2 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
      ___stack_chk_fail();
      _objc_release(puVar1);
      if (cStack_241 < '\0') {
        __ZdlPv(auStack_258[0]);
      }
      _objc_release(puVar1);
      __Unwind_Resume();
      lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010bf039c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined8 *)0x0) {
        puVar1 = puVar2;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010bf93420();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bfdea00();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bf0b760();
        FUN_10549be84();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar1);
      }
      puVar1 = puVar2;
      func_0x00010bf13240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined8 *)0x0) {
        puVar1 = puVar2;
        func_0x00010bf13240(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar1);
      }
      puVar1 = puVar2;
      func_0x00010c118b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined8 *)0x0) {
        puVar1 = puVar2;
        func_0x00010c118b20(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar1);
      }
      puVar1 = puVar2;
      func_0x00010bf15e20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010bf93420();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010bf15e20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfdea00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf15e20();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010bf0b760();
      FUN_10549be84();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar8);
      _objc_release(puVar2);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
        ___stack_chk_fail();
        _objc_retain();
        _objc_retain(puVar1);
        func_0x00010c08fa60(puVar1);
        func_0x00010c08fa60(puVar1);
        puVar2 = puVar1;
        func_0x00010c25cf00(puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126af5d0;
        if (puVar7 == (undefined *)0x0) {
          puVar21 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa01c0(puVar3);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar10 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
          func_0x00010bdc1900();
          _objc_retainAutoreleasedReturnValue();
          puVar21 = (undefined *)0x0;
          _objc_retain(0);
          puVar11 = puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if ((((puVar12 == (undefined *)0x0) || (puVar11 == (undefined *)0x0)) ||
              (puVar13 == (undefined *)0x0)) ||
             (((puVar3 = puVar13, func_0x00010c0720c0(), ((ulong)puVar3 & 1) == 0 &&
               (puVar3 = puVar13, func_0x00010c0720c0(), ((ulong)puVar3 & 1) == 0)) &&
              (puVar3 = puVar13, func_0x00010c0720c0(), ((ulong)puVar3 & 1) == 0)))) {
            puVar3 = PTR_PTR_1126af5d0;
            puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa01c0(puVar3);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar3 = PTR_PTR_1126af5d0;
            puVar14 = PTR_PTR_1126b9668;
            _objc_alloc(PTR_PTR_1126b9668);
            puVar4 = puVar1;
            func_0x00010bdc1b20(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bff45e0(puVar14);
            func_0x00010c2619e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar14);
          }
          _objc_release(puVar4);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
        }
        _objc_release(puVar21);
        _objc_release(puVar2);
        _objc_release(puVar7);
        _objc_release(puVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10549af20; end: 10549b10b;  */

/* WARNING: Removing unreachable block (ram,0x00010549b8e0) */

void FUN_10549af20(long param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  undefined *puVar21;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  uVar17 = param_4;
  iVar15 = param_2;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar20 = *(long **)(param_1 + 8);
    puVar3 = &UNK_10f2c426a;
    if (param_2 == 0) {
      puVar3 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_78,puVar3);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar3 = &UNK_11088e228;
    puVar1 = &uStack_98;
    (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11088e228,puVar1,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar19 = 0;
    uVar17 = param_4;
    do {
      if ((&cStack_49)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar19));
      }
      iVar15 = (int)puVar3;
      lVar19 = lVar19 + -0x18;
    } while (lVar19 != -0x30);
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  uVar18 = uVar17;
  iVar16 = iVar15;
  _objc_retain(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar2[1];
    puVar3 = &UNK_10f2c426a;
    if (iVar15 == 0) {
      puVar3 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar2 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_100,puVar2);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar3 = &UNK_11088e278;
    puVar4 = &uStack_138;
    (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11088e278,puVar4,uVar17);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar19 = 0;
    uVar18 = uVar17;
    do {
      if ((&cStack_e9)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar19));
      }
      iVar16 = (int)puVar3;
      lVar19 = lVar19 + -0x18;
    } while (lVar19 != -0x30);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  if (puVar2 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar2[1];
    puVar3 = &UNK_10f2c426a;
    if (iVar16 == 0) {
      puVar3 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_1b8,puVar3);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar1 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11088e2c8,&uStack_1d8,uVar18);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar19 = 0;
    do {
      if ((&cStack_189)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
    } while (lVar19 != -0x30);
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    if (cStack_1a1 < '\0') {
      __ZdlPv(auStack_1b8[0]);
    }
    _objc_release(puVar4);
    __Unwind_Resume();
    lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf039c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined8 *)0x0) {
      puVar2 = puVar1;
      func_0x00010bf039c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bf93420();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010bf039c0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfdea00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar1;
      func_0x00010bf039c0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf0b760();
      FUN_10549be84();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    puVar2 = puVar1;
    func_0x00010bf13240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined8 *)0x0) {
      puVar2 = puVar1;
      func_0x00010bf13240(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar2);
    }
    puVar2 = puVar1;
    func_0x00010c118b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined8 *)0x0) {
      puVar2 = puVar1;
      func_0x00010c118b20(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar2);
    }
    puVar2 = puVar1;
    func_0x00010bf15e20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf93420();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf15e20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfdea00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf15e20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf0b760();
    FUN_10549be84();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
      ___stack_chk_fail();
      _objc_retain();
      _objc_retain(puVar2);
      func_0x00010c08fa60(puVar2);
      func_0x00010c08fa60(puVar2);
      puVar1 = puVar2;
      func_0x00010c25cf00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126af5d0;
      if (puVar7 == (undefined *)0x0) {
        puVar21 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar10 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        func_0x00010bdc1900();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = (undefined *)0x0;
        _objc_retain(0);
        puVar11 = puVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if ((((puVar12 == (undefined *)0x0) || (puVar11 == (undefined *)0x0)) ||
            (puVar13 == (undefined *)0x0)) ||
           (((puVar3 = puVar13, func_0x00010c0720c0(), ((ulong)puVar3 & 1) == 0 &&
             (puVar3 = puVar13, func_0x00010c0720c0(), ((ulong)puVar3 & 1) == 0)) &&
            (puVar3 = puVar13, func_0x00010c0720c0(), ((ulong)puVar3 & 1) == 0)))) {
          puVar3 = PTR_PTR_1126af5d0;
          puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa01c0(puVar3);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar3 = PTR_PTR_1126af5d0;
          puVar14 = PTR_PTR_1126b9668;
          _objc_alloc(PTR_PTR_1126b9668);
          puVar4 = puVar2;
          func_0x00010bdc1b20(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bff45e0(puVar14);
          func_0x00010c2619e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar14);
        }
        _objc_release(puVar4);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
      }
      _objc_release(puVar21);
      _objc_release(puVar1);
      _objc_release(puVar7);
      _objc_release(puVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10549b10c; end: 10549b2f7;  */

/* WARNING: Removing unreachable block (ram,0x00010549b8e0) */

void FUN_10549b10c(long param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  undefined *puVar19;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  uVar16 = param_4;
  iVar15 = param_2;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar18 = *(long **)(param_1 + 8);
    puVar3 = &UNK_10f2c426a;
    if (param_2 == 0) {
      puVar3 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_78,puVar3);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar3 = &UNK_11088e278;
    puVar1 = &uStack_98;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11088e278,puVar1,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar17 = 0;
    uVar16 = param_4;
    do {
      if ((&cStack_49)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar17));
      }
      iVar15 = (int)puVar3;
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_3);
    __Unwind_Resume();
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar1);
    if (puVar2 != (undefined8 *)0x0) {
      plVar18 = (long *)puVar2[1];
      puVar3 = &UNK_10f2c426a;
      if (iVar15 == 0) {
        puVar3 = &UNK_10f2c426f;
      }
      func_0x00010002b838(auStack_118,puVar3);
      _objc_retain(puVar1);
      if (puVar1 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f2c4275;
      }
      else {
        _objc_retainAutorelease(puVar1);
        puVar2 = puVar1;
        func_0x00010bdc3520(puVar1);
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_100,puVar2);
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
      (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_11088e2c8,&uStack_138,uVar16);
      puStack_120 = &uStack_138;
      func_0x00010007e5dc(&puStack_120);
      lVar17 = 0;
      do {
        if ((&cStack_e9)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != -0x30);
    }
    puVar2 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
      ___stack_chk_fail();
      _objc_release(puVar1);
      if (cStack_101 < '\0') {
        __ZdlPv(auStack_118[0]);
      }
      _objc_release(puVar1);
      __Unwind_Resume();
      lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010bf039c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined8 *)0x0) {
        puVar1 = puVar2;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010bf93420();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bfdea00();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
        func_0x00010bf039c0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bf0b760();
        FUN_10549be84();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar1);
      }
      puVar1 = puVar2;
      func_0x00010bf13240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined8 *)0x0) {
        puVar1 = puVar2;
        func_0x00010bf13240(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar1);
      }
      puVar1 = puVar2;
      func_0x00010c118b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined8 *)0x0) {
        puVar1 = puVar2;
        func_0x00010c118b20(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar1);
      }
      puVar1 = puVar2;
      func_0x00010bf15e20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010bf93420();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010bf15e20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfdea00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf15e20();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010bf0b760();
      FUN_10549be84();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar8);
      _objc_release(puVar2);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
        ___stack_chk_fail();
        _objc_retain();
        _objc_retain(puVar1);
        func_0x00010c08fa60(puVar1);
        func_0x00010c08fa60(puVar1);
        puVar2 = puVar1;
        func_0x00010c25cf00(puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126af5d0;
        if (puVar7 == (undefined *)0x0) {
          puVar19 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa01c0(puVar3);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar10 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
          func_0x00010bdc1900();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = (undefined *)0x0;
          _objc_retain(0);
          puVar11 = puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if ((((puVar12 == (undefined *)0x0) || (puVar11 == (undefined *)0x0)) ||
              (puVar13 == (undefined *)0x0)) ||
             (((puVar3 = puVar13, func_0x00010c0720c0(), ((ulong)puVar3 & 1) == 0 &&
               (puVar3 = puVar13, func_0x00010c0720c0(), ((ulong)puVar3 & 1) == 0)) &&
              (puVar3 = puVar13, func_0x00010c0720c0(), ((ulong)puVar3 & 1) == 0)))) {
            puVar3 = PTR_PTR_1126af5d0;
            puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa01c0(puVar3);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar3 = PTR_PTR_1126af5d0;
            puVar14 = PTR_PTR_1126b9668;
            _objc_alloc(PTR_PTR_1126b9668);
            puVar4 = puVar1;
            func_0x00010bdc1b20(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bff45e0(puVar14);
            func_0x00010c2619e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar14);
          }
          _objc_release(puVar4);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
        }
        _objc_release(puVar19);
        _objc_release(puVar2);
        _objc_release(puVar7);
        _objc_release(puVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10549b2f8; end: 10549b4e3;  */

/* WARNING: Removing unreachable block (ram,0x00010549b8e0) */

void FUN_10549b2f8(long param_1,int param_2,undefined *param_3,undefined8 param_4)

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
  long lVar11;
  long *plVar12;
  undefined *puVar13;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f2c426a;
    if (param_2 == 0) {
      puVar1 = &UNK_10f2c426f;
    }
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c4275;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11088e2c8,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar11 = 0;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_3);
    __Unwind_Resume();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf039c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = puVar1;
      func_0x00010bf039c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf93420();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar1;
      func_0x00010bf039c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar13;
      func_0x00010bfdea00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010bf039c0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf0b760();
      FUN_10549be84();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar13);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    puVar3 = puVar1;
    func_0x00010bf13240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = puVar1;
      func_0x00010bf13240(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar3);
    }
    puVar3 = puVar1;
    func_0x00010c118b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = puVar1;
      func_0x00010c118b20(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar3);
    }
    puVar3 = puVar1;
    func_0x00010bf15e20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf93420();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010bf15e20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar13;
    func_0x00010bfdea00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf15e20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf0b760();
    FUN_10549be84();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar13);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
      ___stack_chk_fail();
      _objc_retain();
      _objc_retain(puVar3);
      func_0x00010c08fa60(puVar3);
      func_0x00010c08fa60(puVar3);
      puVar1 = puVar3;
      func_0x00010c25cf00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126af5d0;
      if (puVar4 == (undefined *)0x0) {
        puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        func_0x00010bdc1900();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = (undefined *)0x0;
        _objc_retain(0);
        puVar6 = puVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if ((((puVar7 == (undefined *)0x0) || (puVar6 == (undefined *)0x0)) ||
            (puVar8 == (undefined *)0x0)) ||
           (((puVar2 = puVar8, func_0x00010c0720c0(), ((ulong)puVar2 & 1) == 0 &&
             (puVar2 = puVar8, func_0x00010c0720c0(), ((ulong)puVar2 & 1) == 0)) &&
            (puVar2 = puVar8, func_0x00010c0720c0(), ((ulong)puVar2 & 1) == 0)))) {
          puVar2 = PTR_PTR_1126af5d0;
          puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa01c0(puVar2);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar2 = PTR_PTR_1126af5d0;
          puVar10 = PTR_PTR_1126b9668;
          _objc_alloc(PTR_PTR_1126b9668);
          puVar9 = puVar3;
          func_0x00010bdc1b20(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bff45e0(puVar10);
          func_0x00010c2619e0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
        }
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      _objc_release(puVar13);
      _objc_release(puVar1);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10549b4e4; end: 10549be83; -[SCBitmojiGLBAssetPair toJson] */

void FUN_10549b4e4(undefined *param_1,undefined8 param_2)

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
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *unaff_x27;
  undefined8 uStack_128;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf039c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    ppuStack_88 = &PTR____CFConstantStringClassReference_110de17b8;
    puVar2 = param_1;
    func_0x00010bf039c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf93420();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_80 = &PTR____CFConstantStringClassReference_110de17d8;
    puVar4 = param_1;
    puStack_78 = puVar3;
    func_0x00010bf039c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfdea00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_78,&ppuStack_88,2)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_1;
    func_0x00010bf039c0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = puVar7;
    func_0x00010bf0b760();
    FUN_10549be84();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar6,unaff_x27);
    _objc_release(unaff_x27);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  puVar2 = param_1;
  func_0x00010bf13240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010bf13240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110de17f8);
    _objc_release(puVar2);
  }
  puVar2 = param_1;
  func_0x00010c118b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010c118b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110de1818);
    _objc_release(puVar2);
  }
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110de17b8;
  puVar2 = param_1;
  func_0x00010bf15e20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf93420();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110de17d8;
  puVar4 = param_1;
  puStack_98 = puVar3;
  func_0x00010bf15e20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfdea00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_90 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_98,&ppuStack_a8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf15e20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1;
  func_0x00010bf0b760();
  FUN_10549be84();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar6,puVar7);
  _objc_release(puVar7);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar8 = puVar2;
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  ppuStack_110 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  uStack_b8 = 0x10549b810;
  puStack_108 = unaff_x27;
  puStack_100 = puVar7;
  puStack_f8 = puVar6;
  puStack_f0 = puVar5;
  puStack_e8 = puVar4;
  puStack_e0 = puVar3;
  puStack_d8 = puVar2;
  puStack_d0 = param_1;
  puStack_c8 = puVar1;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(puVar8);
  puVar1 = puVar8;
  func_0x00010c08fa60(puVar8);
  puVar2 = puVar8;
  func_0x00010c08fa60(puVar8);
  puVar3 = puVar8;
  func_0x00010c25cf00(puVar8,param_2,puVar1 + ((ulong)(uint)-(int)puVar2 & 3),
                      &PTR____CFConstantStringClassReference_110db9ab8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649e0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126af5d0;
  if (puVar2 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110de19d8,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar1,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_118 = (undefined *)0x0;
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar2,1,
                        &puStack_118);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puStack_118;
    _objc_retain(puStack_118);
    if (puVar4 == (undefined *)0x0) {
      puVar6 = puVar5;
      func_0x00010c0e00e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110de1858);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c0e00e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110de1838);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar5;
      func_0x00010c0e00e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110de1878);
      _objc_retainAutoreleasedReturnValue();
      if (((puVar7 == (undefined *)0x0) || (puVar6 == (undefined *)0x0)) ||
         (puVar9 == (undefined *)0x0)) {
        ppuVar12 = &PTR____CFConstantStringClassReference_110de19f8;
LAB_10549b9ec:
        puVar1 = PTR_PTR_1126af5d0;
        puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,ppuVar12,0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar1,param_2,puVar10);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar1 = puVar9;
        func_0x00010c0720c0(puVar9,param_2,&PTR____CFConstantStringClassReference_110de1898);
        if (((ulong)puVar1 & 1) == 0) {
          puVar1 = puVar9;
          func_0x00010c0720c0(puVar9,param_2,&PTR____CFConstantStringClassReference_110de18b8);
          if (((ulong)puVar1 & 1) == 0) {
            puVar1 = puVar9;
            func_0x00010c0720c0(puVar9,param_2,&PTR____CFConstantStringClassReference_110de18d8);
            if (((ulong)puVar1 & 1) == 0) {
              ppuVar12 = &PTR____CFConstantStringClassReference_110de1a18;
              goto LAB_10549b9ec;
            }
            uStack_128 = 2;
          }
          else {
            uStack_128 = 1;
          }
        }
        else {
          uStack_128 = 0;
        }
        puVar1 = PTR_PTR_1126af5d0;
        puVar11 = PTR_PTR_1126b9668;
        _objc_alloc(PTR_PTR_1126b9668);
        puVar10 = puVar8;
        func_0x00010bdc1b20(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff45e0(puVar11,param_2,uStack_128,puVar7,puVar6,puVar8,puVar10);
        func_0x00010c2619e0(puVar1,param_2,puVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
      }
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    else {
      puVar1 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar8);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10549be84; end: 10549beaf;  */

undefined ** FUN_10549be84(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de18b8;
  if (param_1 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de1898;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110de18d8;
  if (param_1 != 2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10549beb0; end: 10549beeb;  */

void FUN_10549beb0(int param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de1958;
  if (param_1 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de18f8;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10549beec; end: 10549bfcb;  */

void FUN_10549beec(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 10549bfcc; end: 10549c1f7;  */

void FUN_10549bfcc(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lStack_60;
  long lStack_58;
  
  if (param_1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    func_0x00010c282760();
    func_0x0001054a2024();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_1;
    func_0x00010bf979e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010bfda7c0();
    ppuVar3 = ppuVar1;
    if ((int)ppuVar2 != 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110de1c18;
      func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110de1c18);
      func_0x00010c260c00(ppuVar1,param_2,ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
    }
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      lStack_58 = 0;
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
      func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                          &PTR____CFConstantStringClassReference_110de1c38,0,&lStack_58);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lStack_58;
      _objc_retain(lStack_58);
      if ((lVar7 == 0) && (ppuVar2 != (undefined **)0x0)) {
        ppuVar1 = ppuVar3;
        func_0x00010c08fa60(ppuVar3);
        ppuVar4 = ppuVar2;
        func_0x00010c25cfa0(ppuVar2,param_2,ppuVar3,0,0,ppuVar1,
                            &PTR____CFConstantStringClassReference_110de1c58);
        _objc_retainAutoreleasedReturnValue();
        lStack_60 = 0;
        ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
        func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                            &PTR____CFConstantStringClassReference_110de1c78,0,&lStack_60);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lStack_60;
        _objc_retain(lStack_60);
        if ((lVar7 == 0) && (ppuVar5 != (undefined **)0x0)) {
          ppuVar1 = ppuVar4;
          func_0x00010c08fa60(ppuVar4);
          ppuVar6 = ppuVar5;
          func_0x00010c25cfa0(ppuVar5,param_2,ppuVar4,0,0,ppuVar1,
                              &PTR____CFConstantStringClassReference_110de1c98);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar4);
          ppuVar1 = ppuVar6;
          func_0x00010c0b5ac0(ppuVar6);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar6;
        }
        else {
          _objc_retain(ppuVar4);
          ppuVar1 = ppuVar4;
        }
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
      }
      else {
        _objc_retain(ppuVar3);
        ppuVar1 = ppuVar3;
      }
      _objc_release(ppuVar2);
      _objc_release(lVar7);
    }
    _objc_release(ppuVar3);
    _objc_release(ppuVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10549c1f8; end: 10549dd2b;  */

void FUN_10549c1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,long param_6,int param_7,undefined8 param_8,
                  undefined ***param_9,undefined8 param_10,undefined4 param_11)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined ***pppuVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  undefined **ppuVar28;
  undefined ***pppuVar29;
  long lVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  undefined8 uVar33;
  undefined **ppuVar34;
  long lVar35;
  undefined **ppuVar36;
  undefined *puVar37;
  ulong uVar38;
  undefined **ppuVar39;
  undefined *puVar40;
  undefined **ppuStack_5d8;
  undefined **ppuStack_5d0;
  undefined *puStack_5c8;
  undefined *puStack_598;
  undefined *puStack_580;
  undefined *puStack_570;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined *puStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined *puStack_238;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar37 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  ppuStack_3e0 = (undefined **)0x0;
  pppuVar29 = &ppuStack_3e0;
  ppuVar1 = (undefined **)PTR_PTR_1126b9670;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar28 = ppuStack_3e0;
  _objc_retain(ppuStack_3e0);
  if (ppuVar28 == (undefined **)0x0) {
    ppuVar2 = ppuVar1;
    func_0x00010bf133e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00010c118e60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar1;
    func_0x00010bf2bde0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar1;
    func_0x00010c099020();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_80 = &PTR____CFConstantStringClassReference_110db10d8;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_78 = param_3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar4;
    func_0x00010bf529e0();
    ppuVar32 = (undefined **)PTR_PTR_1126af5d0;
    puVar37 = puVar6;
    if (ppuVar7 == (undefined **)0x0) {
      pppuVar29 = (undefined ***)0x0;
      ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar13;
      func_0x00010bfa01c0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar13 = ppuVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar13;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      ppuVar32 = (undefined **)PTR_PTR_1126af5d0;
      if (ppuVar7 == (undefined **)0x0) {
        pppuVar29 = (undefined ***)0x0;
        ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar14;
        func_0x00010bfa01c0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar7 = ppuVar5;
        func_0x00010bf529e0();
        ppuVar32 = (undefined **)PTR_PTR_1126af5d0;
        if (ppuVar7 == (undefined **)0x0) {
          pppuVar29 = (undefined ***)0x0;
          ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar14;
          func_0x00010bfa01c0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          ppuVar14 = ppuVar5;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar32 = ppuVar14;
          func_0x00010bfe5ea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if ((ppuVar32 == (undefined **)0x0) ||
             (ppuVar32 = ppuVar2, func_0x00010bf529e0(), ppuVar32 == (undefined **)0x0)) {
            ppuVar32 = (undefined **)PTR_PTR_1126af5d0;
            pppuVar29 = (undefined ***)0x0;
            ppuVar31 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = ppuVar31;
            func_0x00010bfa01c0();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            ppuVar7 = ppuVar2;
            func_0x00010bf529e0();
            ppuVar32 = (undefined **)PTR_PTR_1126af5d0;
            if ((ppuVar7 < (undefined **)0x2) || ((param_6 != 0 && (param_5 != (undefined *)0x0))))
            {
              _objc_retain(ppuVar2);
              ppuVar7 = ppuVar2;
              func_0x00010bf52a60();
              ppuVar32 = ppuRam0000000000000000;
              ppuVar39 = ppuVar2;
              if (ppuVar7 != (undefined **)0x0) {
                ppuVar39 = &PTR____CFConstantStringClassReference_110dd2ed8;
                do {
                  ppuVar31 = (undefined **)0x0;
                  do {
                    if (ppuRam0000000000000000 != ppuVar32) {
                      _objc_enumerationMutation(ppuVar2);
                    }
                    uVar38 = *(ulong *)((long)ppuVar31 * 8);
                    uVar8 = uVar38;
                    func_0x00010bfd9e20();
                    if ((uVar8 & 1) != 0) {
LAB_10549cfe8:
                      ppuVar32 = (undefined **)PTR_PTR_1126af5d0;
                      pppuVar29 = (undefined ***)0x0;
                      ppuVar31 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
                      func_0x00010bf99240();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar7 = ppuVar31;
                      func_0x00010bfa01c0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(ppuVar31);
                      ppuVar31 = ppuVar2;
                      goto LAB_10549dc4c;
                    }
                    uVar8 = uVar38;
                    func_0x00010c150520();
                    _objc_retainAutoreleasedReturnValue();
                    if (uVar8 != 0) {
                      uVar9 = uVar38;
                      func_0x00010c150520();
                      _objc_retainAutoreleasedReturnValue();
                      uVar10 = uVar9;
                      func_0x00010c0720c0();
                      if ((int)uVar10 == 0) {
                        func_0x00010c150520();
                        _objc_retainAutoreleasedReturnValue();
                        uVar10 = uVar38;
                        func_0x00010c0720c0();
                        _objc_release(uVar38);
                        _objc_release(uVar9);
                        _objc_release(uVar8);
                        if ((int)uVar10 == 0) goto LAB_10549cfe8;
                      }
                      else {
                        _objc_release(uVar9);
                        _objc_release(uVar8);
                      }
                    }
                    ppuVar31 = (undefined **)((long)ppuVar31 + 1);
                  } while (ppuVar7 != ppuVar31);
                  ppuVar7 = ppuVar2;
                  func_0x00010bf52a60();
                } while (ppuVar7 != (undefined **)0x0);
              }
              _objc_release(ppuVar2);
              ppuVar31 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              _objc_alloc_init();
              ppuVar11 = ppuVar1;
              func_0x00010c08c760();
              _objc_retainAutoreleasedReturnValue();
              ppuVar32 = ppuVar11;
              func_0x00010bf52a60();
              ppuVar7 = ppuRam0000000000000000;
              while (ppuVar32 != (undefined **)0x0) {
                ppuVar39 = (undefined **)0x0;
                do {
                  if (ppuRam0000000000000000 != ppuVar7) {
                    _objc_enumerationMutation(ppuVar11);
                  }
                  uVar33 = *(undefined8 *)((long)ppuVar39 * 8);
                  uVar12 = uVar33;
                  func_0x00010c27dd80();
                  if ((int)uVar12 == 2) {
                    func_0x00010bfec9e0(uVar33);
                    puVar37 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(ppuVar31);
                    _objc_release(puVar37);
                  }
                  ppuVar39 = (undefined **)((long)ppuVar39 + 1);
                } while (ppuVar32 != ppuVar39);
                ppuVar32 = ppuVar11;
                func_0x00010bf52a60();
                ppuVar39 = ppuVar7;
              }
              ppuVar32 = ppuVar31;
              func_0x00010bf529e0();
              if ((ppuVar32 == (undefined **)0x0) &&
                 (ppuVar32 = ppuVar2, func_0x00010bf529e0(), ppuVar32 != (undefined **)0x0)) {
                ppuVar32 = (undefined **)0x0;
                ppuVar39 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
                do {
                  puVar37 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(ppuVar31);
                  _objc_release(puVar37);
                  ppuVar32 = (undefined **)((long)ppuVar32 + 1);
                  ppuVar7 = ppuVar2;
                  func_0x00010bf529e0();
                } while (ppuVar32 < ppuVar7);
              }
              puStack_598 = PTR__OBJC_CLASS___NSArray_1126ae530;
              if (param_5 == (undefined *)0x0) {
                uStack_198 = param_2;
                func_0x00010bf0a140();
                _objc_retainAutoreleasedReturnValue();
                uStack_1b0 = param_4;
              }
              else {
                uStack_190 = param_2;
                puStack_188 = param_5;
                func_0x00010bf0a140();
                _objc_retainAutoreleasedReturnValue();
                uStack_1a8 = param_4;
                lStack_1a0 = param_6;
              }
              puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
              func_0x00010bf0a140();
              _objc_retainAutoreleasedReturnValue();
              puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              _objc_alloc_init();
              puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              _objc_alloc_init();
              ppuVar32 = ppuVar31;
              func_0x00010bf529e0();
              if (ppuVar32 != (undefined **)0x0) {
                ppuVar36 = (undefined **)0x0;
                do {
                  puStack_570 = puStack_598;
                  func_0x00010c0dfd40();
                  _objc_retainAutoreleasedReturnValue();
                  puStack_580 = puVar15;
                  func_0x00010c0dfd40();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar32 = ppuVar31;
                  func_0x00010c0dfd40();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar7 = ppuVar32;
                  func_0x00010c2827c0();
                  _objc_release(ppuVar32);
                  ppuVar18 = ppuVar2;
                  func_0x00010bf529e0();
                  ppuVar32 = (undefined **)PTR_PTR_1126af5d0;
                  if (ppuVar18 <= ppuVar7) {
                    pppuVar29 = (undefined ***)0x0;
                    ppuStack_5d0 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
                    puVar37 = puVar6;
                    func_0x00010bf99240();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar7 = ppuStack_5d0;
                    func_0x00010bfa01c0();
                    _objc_retainAutoreleasedReturnValue();
                    goto LAB_10549dc0c;
                  }
                  ppuVar18 = ppuVar2;
                  func_0x00010c0dfd40();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar19 = ppuVar18;
                  func_0x00010bf03d00();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar32 = (undefined **)PTR_PTR_1126af5d0;
                  if (ppuVar19 == (undefined **)0x0) {
                    pppuVar29 = (undefined ***)0x0;
                    ppuVar34 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
                    puVar37 = puVar6;
                    func_0x00010bf99240();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar7 = ppuVar34;
                    func_0x00010bfa01c0();
                    _objc_retainAutoreleasedReturnValue();
                  }
                  else {
                    ppuVar34 = (undefined **)PTR_PTR_1126b9668;
                    func_0x00010bf54b20(PTR_PTR_1126b9668);
                    _objc_retainAutoreleasedReturnValue();
                    puVar40 = (undefined *)(ulong)(byte)param_11;
                    FUN_10549beec();
                    _objc_retainAutoreleasedReturnValue();
                    puVar20 = puVar40;
                    func_0x00010549bb70();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar32 = (undefined **)PTR_PTR_1126b9678;
                    _objc_alloc();
                    pppuVar21 = (undefined ***)PTR_PTR_1126b9668;
                    func_0x00010bf548a0();
                    _objc_retainAutoreleasedReturnValue();
                    pppuVar29 = pppuVar21;
                    puVar37 = puVar20;
                    func_0x00010bff6b80();
                    _objc_release(pppuVar21);
                    func_0x00010befa120(puVar16);
                    ppuVar22 = ppuVar32;
                    func_0x00010c271e60();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar7 = ppuVar22;
                    func_0x00010befa120(puVar17);
                    _objc_release(ppuVar22);
                    _objc_release(ppuVar32);
                    _objc_release(puVar20);
                    _objc_release(puVar40);
                    ppuVar32 = ppuVar39;
                  }
                  _objc_release(ppuVar34);
                  _objc_release(ppuVar19);
                  _objc_release(ppuVar18);
                  _objc_release(puStack_580);
                  _objc_release(puStack_570);
                  if (ppuVar19 == (undefined **)0x0) goto LAB_10549dc24;
                  ppuVar36 = (undefined **)((long)ppuVar36 + 1);
                  ppuVar7 = ppuVar31;
                  func_0x00010bf529e0();
                  ppuVar39 = ppuVar32;
                } while (ppuVar36 < ppuVar7);
              }
              puStack_570 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              _objc_alloc_init();
              puStack_580 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              _objc_alloc_init();
              if (ppuVar3 != (undefined **)0x0) {
                _objc_retain(ppuVar3);
                ppuVar7 = ppuVar3;
                func_0x00010bf52a60();
                ppuVar39 = ppuRam0000000000000000;
                while (ppuVar7 != (undefined **)0x0) {
                  ppuVar36 = (undefined **)0x0;
                  do {
                    if (ppuRam0000000000000000 != ppuVar39) {
                      _objc_enumerationMutation(ppuVar3);
                    }
                    ppuStack_5d8 = *(undefined ***)((long)ppuVar36 * 8);
                    ppuVar18 = ppuStack_5d8;
                    func_0x00010bfe5ea0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf03d00();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar32 = (undefined **)PTR_PTR_1126af5d0;
                    if (ppuVar18 == (undefined **)0x0) {
                      pppuVar29 = (undefined ***)0x0;
                      ppuVar39 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
                      puVar37 = puVar6;
                      func_0x00010bf99240();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar7 = ppuVar39;
                      func_0x00010bfa01c0();
                      _objc_retainAutoreleasedReturnValue();
                      ppuStack_5d0 = ppuVar3;
                      goto LAB_10549dbf8;
                    }
                    puVar37 = (undefined *)0x0;
                    if (param_7 == 0) {
                      if (param_11._1_1_ == '\0') goto LAB_10549ccfc;
LAB_10549ccc0:
                      puVar40 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
                      _objc_retainAutoreleasedReturnValue();
                    }
                    else {
                      if (ppuStack_5d8 != (undefined **)0x0) {
                        puVar37 = PTR_PTR_1126b9668;
                        func_0x00010bf54880(PTR_PTR_1126b9668);
                        _objc_retainAutoreleasedReturnValue();
                      }
                      if (param_11._1_1_ != '\0') goto LAB_10549ccc0;
LAB_10549ccfc:
                      puVar40 = (undefined *)0x0;
                    }
                    puVar20 = PTR_PTR_1126b9678;
                    _objc_alloc(PTR_PTR_1126b9678);
                    puVar23 = PTR_PTR_1126b9668;
                    func_0x00010bf58120(PTR_PTR_1126b9668);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bff6b80(puVar20);
                    _objc_release(puVar23);
                    func_0x00010befa120(puStack_570);
                    puVar23 = puVar20;
                    func_0x00010c271e60(puVar20);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(puStack_580);
                    _objc_release(puVar23);
                    _objc_release(puVar40);
                    _objc_release(puVar37);
                    _objc_release(puVar20);
                    _objc_release(ppuStack_5d8);
                    _objc_release(ppuVar18);
                    ppuVar36 = (undefined **)((long)ppuVar36 + 1);
                  } while (ppuVar7 != ppuVar36);
                  ppuVar7 = ppuVar3;
                  func_0x00010bf52a60();
                }
                _objc_release(ppuVar3);
              }
              ppuStack_5d0 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
              _objc_alloc_init();
              func_0x00010c1d0640();
              func_0x00010c1d0640(ppuStack_5d0);
              func_0x00010c1d0640(ppuStack_5d0);
              func_0x00010c1d0640(ppuStack_5d0);
              ppuStack_248 = &PTR____CFConstantStringClassReference_110dbf6f8;
              ppuVar32 = ppuVar14;
              func_0x00010bfe5ea0();
              _objc_retainAutoreleasedReturnValue();
              puVar37 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              ppuStack_240 = ppuVar32;
              func_0x00010bf72080();
              _objc_retainAutoreleasedReturnValue();
              puVar40 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_238 = puVar37;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(ppuStack_5d0);
              _objc_release(puVar40);
              _objc_release(puVar37);
              _objc_release(ppuVar32);
              ppuStack_5d8 = ppuVar13;
              func_0x00010bfe5ea0();
              _objc_retainAutoreleasedReturnValue();
              puVar37 = PTR__OBJC_CLASS___NSUUID_1126b0270;
              _objc_alloc();
              func_0x00010c057ea0();
              _objc_release();
              if (puVar37 == (undefined *)0x0) {
                ppuStack_288 = &PTR____CFConstantStringClassReference_110dbf6f8;
                ppuVar32 = ppuVar13;
                func_0x00010bfe5ea0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
                ppuStack_280 = ppuVar32;
                func_0x00010bf72080();
                _objc_retainAutoreleasedReturnValue();
                puVar37 = PTR__OBJC_CLASS___NSArray_1126ae530;
                ppuStack_278 = ppuVar7;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(ppuStack_5d0);
              }
              else {
                ppuVar32 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x00010c14de00();
                _objc_retainAutoreleasedReturnValue();
                ppuStack_270 = &PTR____CFConstantStringClassReference_110dbf6f8;
                ppuVar7 = ppuVar13;
                func_0x00010bfe5ea0();
                _objc_retainAutoreleasedReturnValue();
                ppuStack_268 = &PTR____CFConstantStringClassReference_110de13b8;
                puVar37 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                ppuStack_260 = ppuVar7;
                ppuStack_258 = ppuVar32;
                func_0x00010bf72080();
                _objc_retainAutoreleasedReturnValue();
                puVar40 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_250 = puVar37;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(ppuStack_5d0);
                _objc_release(puVar40);
              }
              _objc_release(puVar37);
              _objc_release(ppuVar7);
              _objc_release(ppuVar32);
              ppuVar39 = ppuVar1;
              func_0x00010bf9efa0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar7 = ppuVar39;
              func_0x00010bfd9480();
              ppuVar32 = (undefined **)PTR_PTR_1126af5d0;
              if ((int)ppuVar7 == 0) {
                ppuVar36 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                _objc_alloc_init();
                ppuVar18 = ppuVar39;
                func_0x00010bf40e20();
                _objc_retainAutoreleasedReturnValue();
                ppuVar32 = ppuVar18;
                func_0x00010c08fa60();
                if (ppuVar32 != (undefined **)0x0) {
                  func_0x00010c1d0640(ppuVar36);
                }
                puVar37 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c27c540(ppuVar39);
                func_0x00010c0df760(puVar37);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(ppuVar36);
                _objc_release(puVar37);
                puVar37 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010bf80800(ppuVar39);
                func_0x00010c0df6e0(puVar37);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(ppuVar36);
                _objc_release(puVar37);
                ppuVar32 = ppuVar39;
                func_0x00010c0da9c0();
                if (ppuVar32 != (undefined **)0x0) {
                  ppuVar32 = ppuVar39;
                  func_0x00010c0da9a0(ppuVar39);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar7 = ppuVar32;
                  func_0x00010bf51e00();
                  func_0x00010c1d0640(ppuVar36);
                  _objc_release(ppuVar7);
                  _objc_release(ppuVar32);
                }
                func_0x00010c1d0640(ppuStack_5d0);
                ppuVar32 = ppuVar11;
                func_0x00010bf529e0();
                if (ppuVar32 != (undefined **)0x0) {
                  ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                  _objc_alloc_init();
                  _objc_retain(ppuVar11);
                  ppuVar32 = ppuVar11;
                  func_0x00010bf52a60();
                  ppuVar7 = ppuRam0000000000000000;
                  while (ppuVar32 != (undefined **)0x0) {
                    ppuVar34 = (undefined **)0x0;
                    do {
                      if (ppuRam0000000000000000 != ppuVar7) {
                        _objc_enumerationMutation(ppuVar11);
                      }
                      lVar35 = *(long *)((long)ppuVar34 * 8);
                      puVar40 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                      _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
                      puVar37 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      func_0x00010c27dd80(lVar35);
                      func_0x00010c0df760(puVar37);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(puVar40);
                      _objc_release(puVar37);
                      puVar37 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      func_0x00010bfec9e0(lVar35);
                      func_0x00010c0df760(puVar37);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(puVar40);
                      _objc_release(puVar37);
                      lVar30 = lVar35;
                      func_0x00010bf5c5e0();
                      _objc_retainAutoreleasedReturnValue();
                      puVar37 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      if (lVar30 != 0) {
                        ppuStack_348 = &PTR____CFConstantStringClassReference_110de1e78;
                        func_0x00010c0cde60(lVar30);
                        func_0x00010c0df740();
                        _objc_retainAutoreleasedReturnValue();
                        puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                        ppuStack_340 = &PTR____CFConstantStringClassReference_110de1e98;
                        puStack_328 = puVar37;
                        func_0x00010c0cde80(lVar30);
                        func_0x00010c0df740();
                        _objc_retainAutoreleasedReturnValue();
                        puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                        ppuStack_338 = &PTR____CFConstantStringClassReference_110de1eb8;
                        puStack_320 = puVar20;
                        func_0x00010c0c3260(lVar30);
                        func_0x00010c0df740();
                        _objc_retainAutoreleasedReturnValue();
                        puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                        ppuStack_330 = &PTR____CFConstantStringClassReference_110de1ed8;
                        puStack_318 = puVar23;
                        func_0x00010c0c32a0(lVar30);
                        func_0x00010c0df740();
                        _objc_retainAutoreleasedReturnValue();
                        puVar25 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                        puStack_310 = puVar24;
                        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c1d0640(puVar40);
                        _objc_release(puVar25);
                        _objc_release(puVar24);
                        _objc_release(puVar23);
                        _objc_release(puVar20);
                        _objc_release(puVar37);
                      }
                      lVar26 = lVar35;
                      func_0x00010c08c680();
                      lVar27 = lVar35;
                      if ((int)lVar26 == 4) {
                        func_0x00010c29bf00();
                        _objc_retainAutoreleasedReturnValue();
                        puVar37 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                        if (lVar27 != 0) {
                          ppuStack_388 = &PTR____CFConstantStringClassReference_110de1e78;
                          func_0x00010c0cde60(lVar27);
                          func_0x00010c0df740();
                          _objc_retainAutoreleasedReturnValue();
                          puStack_5c8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                          ppuStack_380 = &PTR____CFConstantStringClassReference_110de1e98;
                          puStack_368 = puVar37;
                          func_0x00010c0cde80(lVar27);
                          func_0x00010c0df740();
                          _objc_retainAutoreleasedReturnValue();
                          puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                          ppuStack_378 = &PTR____CFConstantStringClassReference_110de1eb8;
                          puStack_360 = puStack_5c8;
                          func_0x00010c0c3260(lVar27);
                          func_0x00010c0df740();
                          _objc_retainAutoreleasedReturnValue();
                          puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                          ppuStack_370 = &PTR____CFConstantStringClassReference_110de1ed8;
                          puStack_358 = puVar20;
                          func_0x00010c0c32a0(lVar27);
                          func_0x00010c0df740();
                          _objc_retainAutoreleasedReturnValue();
                          puVar24 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                          puStack_350 = puVar23;
                          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c1d0640(puVar40);
LAB_10549d848:
                          _objc_release(puVar24);
                          _objc_release(puVar23);
                          _objc_release(puVar20);
                          _objc_release(puStack_5c8);
                          _objc_release(puVar37);
                        }
LAB_10549d874:
                        _objc_release(lVar27);
                      }
                      else {
                        lVar26 = lVar35;
                        func_0x00010c08c680();
                        if ((int)lVar26 == 9) {
                          func_0x00010c27a460();
                          _objc_retainAutoreleasedReturnValue();
                          puVar37 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                          if (lVar27 != 0) {
                            ppuStack_3d8 = &PTR____CFConstantStringClassReference_110de1f18;
                            func_0x00010c0e1dc0(lVar27);
                            func_0x00010c0df740();
                            _objc_retainAutoreleasedReturnValue();
                            puStack_5c8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                            ppuStack_3d0 = &PTR____CFConstantStringClassReference_110de1f38;
                            puStack_3b0 = puVar37;
                            func_0x00010c0e1e00(lVar27);
                            func_0x00010c0df740();
                            _objc_retainAutoreleasedReturnValue();
                            puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                            ppuStack_3c8 = &PTR____CFConstantStringClassReference_110de1f58;
                            puStack_3a8 = puStack_5c8;
                            func_0x00010c141a80(lVar27);
                            func_0x00010c0df740();
                            _objc_retainAutoreleasedReturnValue();
                            puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                            ppuStack_3c0 = &PTR____CFConstantStringClassReference_110de1f78;
                            puStack_3a0 = puVar20;
                            func_0x00010c14e540(lVar27);
                            func_0x00010c0df740();
                            _objc_retainAutoreleasedReturnValue();
                            puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                            ppuStack_3b8 = &PTR____CFConstantStringClassReference_110de1f98;
                            puStack_398 = puVar23;
                            func_0x00010c14e560(lVar27);
                            func_0x00010c0df740();
                            _objc_retainAutoreleasedReturnValue();
                            puVar25 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                            puStack_390 = puVar24;
                            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c1d0640(puVar40);
                            _objc_release(puVar25);
                            goto LAB_10549d848;
                          }
                          goto LAB_10549d874;
                        }
                      }
                      lVar26 = lVar35;
                      func_0x00010c0cc5c0();
                      puVar37 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      if ((int)lVar26 == 6) {
                        func_0x00010c0bc240(lVar35);
                        func_0x00010c0df760();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c1d0640(puVar40);
                        puVar20 = puVar37;
                        FUN_10549bfcc();
                        _objc_retainAutoreleasedReturnValue();
                        puVar23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
                        _objc_retainAutoreleasedReturnValue();
                        puVar24 = puVar23;
                        if (param_11._1_1_ != '\0') {
                          func_0x00010c25ce40(puVar23);
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar23);
                        }
                        func_0x00010c1d0640(puVar40);
                        _objc_release(puVar24);
                        _objc_release(puVar20);
                        _objc_release(puVar37);
                      }
                      lVar26 = lVar35;
                      func_0x00010c27dd80();
                      if ((int)lVar26 == 1) {
                        lVar26 = lVar35;
                        func_0x00010bf419c0();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release();
                        if (lVar26 != 0) {
                          lVar26 = lVar35;
                          func_0x00010bf419c0();
                          _objc_retainAutoreleasedReturnValue();
                          lVar27 = lVar26;
                          func_0x00010c08fa60();
                          _objc_release(lVar26);
                          if (lVar27 == 0x10) {
                            puVar37 = PTR__OBJC_CLASS___NSUUID_1126b0270;
                            _objc_alloc();
                            func_0x00010bf419c0(lVar35);
                            _objc_retainAutoreleasedReturnValue();
                            _objc_retainAutorelease();
                            func_0x00010bf25f00();
                            func_0x00010c057e80();
                            puVar20 = puVar37;
                            func_0x00010bdc3580();
                            _objc_retainAutoreleasedReturnValue();
                            puVar23 = puVar20;
                            func_0x00010c0b5ac0();
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release(puVar20);
                            _objc_release(puVar37);
                            _objc_release(lVar35);
                            puVar37 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                            func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c1d0640(puVar40);
                            _objc_release(puVar37);
                            _objc_release(puVar23);
                            goto LAB_10549da90;
                          }
                        }
                        ppuVar32 = (undefined **)PTR_PTR_1126af5d0;
                        pppuVar29 = (undefined ***)0x0;
                        ppuVar34 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
                        puVar37 = puVar6;
                        func_0x00010bf99240();
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar7 = ppuVar34;
                        func_0x00010bfa01c0();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release(ppuVar34);
                        _objc_release(lVar30);
                        _objc_release(puVar40);
                        _objc_release(ppuVar11);
                        goto LAB_10549dbd4;
                      }
LAB_10549da90:
                      func_0x00010befa120(ppuVar19);
                      _objc_release(lVar30);
                      _objc_release(puVar40);
                      ppuVar34 = (undefined **)((long)ppuVar34 + 1);
                    } while (ppuVar32 != ppuVar34);
                    ppuVar32 = ppuVar11;
                    func_0x00010bf52a60();
                  }
                  _objc_release(ppuVar11);
                  func_0x00010c1d0640(ppuStack_5d0);
                  _objc_release(ppuVar19);
                }
                ppuVar32 = (undefined **)PTR_PTR_1126af5d0;
                ppuVar19 = (undefined **)PTR_PTR_1126b9650;
                _objc_alloc();
                pppuVar29 = param_9;
                puVar37 = puVar16;
                func_0x00010c041b00();
                ppuVar7 = ppuVar19;
                func_0x00010c2619e0();
                _objc_retainAutoreleasedReturnValue();
LAB_10549dbd4:
                _objc_release(ppuVar19);
                _objc_release(ppuVar18);
              }
              else {
                pppuVar29 = (undefined ***)0x0;
                ppuVar36 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
                puVar37 = puVar6;
                func_0x00010bf99240();
                _objc_retainAutoreleasedReturnValue();
                ppuVar7 = ppuVar36;
                func_0x00010bfa01c0();
                _objc_retainAutoreleasedReturnValue();
              }
              _objc_release(ppuVar36);
LAB_10549dbf8:
              _objc_release(ppuVar39);
              _objc_release(ppuStack_5d8);
LAB_10549dc0c:
              _objc_release(ppuStack_5d0);
              _objc_release(puStack_580);
              _objc_release(puStack_570);
LAB_10549dc24:
              _objc_release(puVar17);
              _objc_release(puVar16);
              _objc_release(puVar15);
              _objc_release(puStack_598);
              _objc_release(ppuVar11);
            }
            else {
              pppuVar29 = (undefined ***)0x0;
              ppuVar31 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99240();
              _objc_retainAutoreleasedReturnValue();
              ppuVar7 = ppuVar31;
              func_0x00010bfa01c0();
              _objc_retainAutoreleasedReturnValue();
            }
          }
LAB_10549dc4c:
          _objc_release(ppuVar31);
        }
      }
      _objc_release(ppuVar14);
    }
    _objc_release(ppuVar13);
    _objc_release(puVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
  else {
    ppuVar32 = (undefined **)PTR_PTR_1126af5d0;
    ppuVar7 = ppuVar28;
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar28);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar30 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar37);
    _objc_retain(ppuVar7);
    FUN_10549be84();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar29);
    puVar15 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    func_0x00010c008340();
    ppuVar3 = ppuVar2;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf15dc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar28 = &PTR____CFConstantStringClassReference_110db9ab8;
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    ppuVar32 = ppuVar4;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_release(puVar15);
    _objc_release(puVar37);
    _objc_release(ppuVar7);
    _objc_release(puVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar30) {
      ___stack_chk_fail();
      puVar37 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_retain(ppuVar28);
      _objc_alloc(puVar37);
      if (lRam00000001136bbff8 != -1) {
        func_0x00010002a2fc(0x1136bbff8,&PTR___NSConcreteGlobalBlock_11088e558);
      }
      func_0x00010c00c560(puVar37);
      if (ppuVar1 != (undefined **)0x0) {
        puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar37);
        _objc_release(puVar15);
      }
      func_0x00010be1ece0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      ppuVar32 = (undefined **)PTR_PTR_1126b9668;
      _objc_alloc(PTR_PTR_1126b9668);
      puVar15 = puVar6;
      func_0x00010bdc1b20(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff45e0(ppuVar32);
      _objc_release(ppuVar28);
      _objc_release(puVar15);
      _objc_release(puVar6);
      _objc_release(puVar37);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar32);
  return;
}



/* Entry: 10549dd2c; end: 10549ded7; +[SCBitmojiGLBAsset _getEncodedConfigWithAssetId:assetType:parameters:] */

void FUN_10549dd2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_3);
  FUN_10549be84();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  func_0x00010c008340();
  puVar4 = puVar3;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf15dc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110db9ab8;
  ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
  puVar6 = puVar5;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_retain(ppuVar7);
    _objc_alloc(puVar2);
    if (lRam00000001136bbff8 != -1) {
      func_0x00010002a2fc(0x1136bbff8,&PTR___NSConcreteGlobalBlock_11088e558);
    }
    func_0x00010c00c560(puVar2);
    if (ppuVar8 != (undefined **)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar3);
    }
    func_0x00010be1ece0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b9668;
    _objc_alloc(PTR_PTR_1126b9668);
    puVar3 = puVar1;
    func_0x00010bdc1b20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff45e0(puVar6);
    _objc_release(ppuVar7);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10549ded8; end: 10549e037; +[SCBitmojiGLBAsset createAvatarAssetWithAssetId:avatarType:] */

void FUN_10549ded8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  if (lRam00000001136bbff8 != -1) {
    func_0x00010002a2fc(0x1136bbff8,&PTR___NSConcreteGlobalBlock_11088e558);
  }
  func_0x00010c00c560(puVar1);
  if (param_4 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar2);
  }
  func_0x00010be1ece0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9668;
  _objc_alloc(PTR_PTR_1126b9668);
  uVar3 = param_1;
  func_0x00010bdc1b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff45e0(puVar2);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10549e038; end: 10549e2db; +[SCBitmojiGLBAsset createAvatarAssetWithAssetId:avatarType:optimizationParams:] */

void FUN_10549e038(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  if (lRam00000001136bbff8 != -1) {
    func_0x00010002a2fc(0x1136bbff8,&PTR___NSConcreteGlobalBlock_11088e558);
  }
  func_0x00010c00c560(puVar1);
  if (param_5 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar2);
  }
  uVar3 = param_6;
  func_0x00010bf90ca0();
  if ((int)uVar3 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  func_0x00010c0cb120(param_6);
  if ((0.0 < param_1) &&
     (func_0x00010c0cb120(param_6), puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0, param_1 < 1.0)) {
    func_0x00010c0cb120(param_6);
    param_1 = SUB84((double)param_1,0);
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar2);
  }
  func_0x00010c26cee0(param_6);
  if ((0.0 < param_1) &&
     (func_0x00010c26cee0(param_6), puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0, param_1 < 1.0)) {
    func_0x00010c26cee0(param_6);
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar2);
  }
  uVar3 = param_6;
  func_0x00010bf909e0();
  if ((int)uVar3 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  func_0x00010be1ece0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9668;
  _objc_alloc(PTR_PTR_1126b9668);
  uVar3 = param_2;
  func_0x00010bdc1b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff45e0(puVar2);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10549e2dc; end: 10549e45b; +[SCBitmojiGLBAsset createAnimationAssetWithAssetId:bodyType:] */

void FUN_10549e2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (lRam00000001136bc008 != -1) {
    func_0x00010002a2fc(0x1136bc008,&PTR___NSConcreteGlobalBlock_11088e578);
  }
  uVar1 = uRam00000001136bc000;
  func_0x00010bf4b900();
  if ((int)uVar1 == 0) {
    if (lRam00000001136bc028 == -1) {
      puVar5 = (undefined8 *)0x1136bc020;
      goto LAB_10549e364;
    }
    puVar5 = (undefined8 *)0x1136bc020;
    ppuVar3 = &PTR___NSConcreteGlobalBlock_11088e5b8;
  }
  else {
    if (lRam00000001136bc018 == -1) {
      puVar5 = (undefined8 *)0x1136bc010;
      goto LAB_10549e364;
    }
    puVar5 = (undefined8 *)0x1136bc010;
    ppuVar3 = &PTR___NSConcreteGlobalBlock_11088e598;
  }
  func_0x00010002a2fc(puVar5 + 1,ppuVar3);
LAB_10549e364:
  uVar4 = *puVar5;
  _objc_retain(uVar4);
  func_0x00010be1ece0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9668;
  _objc_alloc(PTR_PTR_1126b9668);
  uVar1 = param_1;
  func_0x00010bdc1b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff45e0(puVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10549e45c; end: 10549e593; +[SCBitmojiGLBAsset createAnimationAssetWithAssetId:] */

void FUN_10549e45c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (lRam00000001136bc028 != -1) {
    func_0x00010002a2fc(0x1136bc028,&PTR___NSConcreteGlobalBlock_11088e5b8);
  }
  uVar1 = uRam00000001136bc020;
  _objc_retain(uRam00000001136bc020);
  func_0x00010be1ece0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b9668;
  _objc_alloc(PTR_PTR_1126b9668);
  if (lRam00000001136bc028 != -1) {
    func_0x00010002a2fc(0x1136bc028,&PTR___NSConcreteGlobalBlock_11088e5b8);
  }
  uVar2 = uRam00000001136bc020;
  _objc_retain(uRam00000001136bc020);
  uVar4 = param_1;
  func_0x00010bdc1b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff45e0(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10549e594; end: 10549e6cb; +[SCBitmojiGLBAsset createPropAssetWithAssetId:] */

void FUN_10549e594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (lRam00000001136bc028 != -1) {
    func_0x00010002a2fc(0x1136bc028,&PTR___NSConcreteGlobalBlock_11088e5b8);
  }
  uVar1 = uRam00000001136bc020;
  _objc_retain(uRam00000001136bc020);
  func_0x00010be1ece0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b9668;
  _objc_alloc(PTR_PTR_1126b9668);
  if (lRam00000001136bc028 != -1) {
    func_0x00010002a2fc(0x1136bc028,&PTR___NSConcreteGlobalBlock_11088e5b8);
  }
  uVar2 = uRam00000001136bc020;
  _objc_retain(uRam00000001136bc020);
  uVar4 = param_1;
  func_0x00010bdc1b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff45e0(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10549e6cc; end: 10549e72b;  */

void FUN_10549e6cc(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001136bbff0;
  ppuRam00000001136bbff0 = &PTR__OBJC_CLASS___NSConstantDictionary_111174540;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10549e72c; end: 10549e7f7; -[SCBitmojiGLBFetcher initWithContentDelivery:snapTokenProvider:configProvider:] */

undefined1 *
FUN_10549e72c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e8710;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10549e7f8; end: 10549e88b; -[SCBitmojiGLBFetcher isGLBFetchedForAvatar:avatarType:feature:] */

undefined *
FUN_10549e7f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b9680;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074240(puVar1,param_2,param_3,param_4,param_5,uVar2,uVar3);
  _objc_release(param_3);
  _objc_release(uVar3);
  return puVar1;
}



/* Entry: 10549e88c; end: 10549e9a3; -[SCBitmojiGLBFetcher fetchGLBForAvatar:feature:avatarType:] */

void FUN_10549e88c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0ec120(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9668;
  func_0x00010bf54b20(PTR_PTR_1126b9668);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  uVar4 = param_3;
  func_0x00010b0e7438(param_3,param_5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0295e0(puVar3);
  _objc_release(uVar4);
  func_0x00010be117a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10549e9a4; end: 10549ecab; -[SCBitmojiGLBFetcher _fetchGLBForAvatar:avatarId:feature:avatarType:contentKey:] */

void FUN_10549e9a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_180 [16];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  uVar1 = param_1;
  func_0x00010bee6880();
  FUN_10549beec();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010549bb70();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010900605c();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010be91d60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1060;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = param_5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032f60();
  _objc_release(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x4133c68000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b9620;
  _objc_opt_new();
  func_0x00010c181bc0();
  puVar6 = PTR_PTR_1126b1378;
  func_0x00010c1081a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_1);
  puVar3 = PTR_PTR_1126ae6b8;
  _objc_retain(param_7);
  _objc_retain(puVar6);
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  puVar9 = auStack_80;
  _objc_copyWeak(auStack_88);
  _objc_retain(puVar2);
  func_0x00010bf54280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_release(param_5);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    __Unwind_Resume();
    _objc_retain(puVar9);
    uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_3 + 0x48);
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_180,param_3 + 0x58);
    uVar11 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(uVar11);
    uVar10 = *(undefined8 *)(param_3 + 0x50);
    _objc_retain(uVar10);
    _objc_retain(puVar9);
    uVar1 = uVar7;
    func_0x00010bf88ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126b0418;
    _objc_retain(uVar1);
    func_0x00010bf54280(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar1);
    _objc_release(puVar9);
    _objc_release(uVar10);
    _objc_release(uVar11);
    _objc_destroyWeak(auStack_180);
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10549ecac; end: 10549ee8f;  */

void FUN_10549ecac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,param_1 + 0x58);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar5);
  _objc_retain(param_2);
  uVar3 = uVar1;
  func_0x00010bf88ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b0418;
  _objc_retain(uVar3);
  func_0x00010bf54280(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10549ee90; end: 10549eec7;  */

void FUN_10549ee90(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be961e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10549eec8; end: 10549eecf;  */

void FUN_10549eec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 10549eed0; end: 10549f163; -[SCBitmojiGLBFetcher bitmojiGlbAssetRequestForEncodedConfig:feature:performer:] */

void FUN_10549eed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010549b810(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10549f164;
  uStack_80 = 0x10549f174;
  puVar2 = PTR_PTR_1126b9620;
  _objc_opt_new();
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_10549f164;
  uStack_b0 = 0x10549f174;
  uStack_a8 = 0;
  uVar3 = param_1;
  puStack_c8 = &uStack_d0;
  puStack_78 = puVar2;
  func_0x00010bdd46c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_10549f17c;
  puStack_e0 = &UNK_110842b58;
  puStack_d8 = &uStack_d0;
  func_0x00010c0c0800();
  _objc_release(uVar3);
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x2020000000;
  uStack_100 = 0;
  func_0x00010c0c0800(uVar1);
  func_0x00010be240c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9688;
  _objc_alloc(PTR_PTR_1126b9688);
  uVar3 = puStack_98[5];
  func_0x00010bf63640(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e3e0(puVar2);
  _objc_release(uVar3);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_118,8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(puStack_78);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10549f164; end: 10549f17b;  */

void FUN_10549f164(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10549f17c; end: 10549f213;  */

void FUN_10549f17c(long param_1,undefined8 param_2)

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



/* Entry: 10549f214; end: 10549f227;  */

void FUN_10549f214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c181bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_setContentAttribution__11263e110,0x16);
  return;
}



/* Entry: 10549f228; end: 10549f23f; -[SCBitmojiGLBFetcher _useStagingDomain] */

void FUN_10549f228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110db0f18,0,0);
  return;
}



/* Entry: 10549f240; end: 10549f2a3; -[SCBitmojiGLBFetcher _fetchSnapToken] */

void FUN_10549f240(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10549f2a4;
  puStack_20 = &UNK_11088e668;
  uStack_18 = param_1;
  func_0x00010bf54280(PTR_PTR_1126ae6b8,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10549f2a4; end: 10549f447;  */

void FUN_10549f2a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uVar1 = 0x21;
  _dispatch_get_global_queue(0x21,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010bfa48e0(uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10549f448; end: 10549f4ff;  */

void FUN_10549f448(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10549f500; end: 10549f513;  */

void FUN_10549f500(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10549f514; end: 10549f63b; -[SCBitmojiGLBFetcher _requestWithURLString:snapToken:feature:] */

void FUN_10549f514(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_5);
  if (param_4 != 0) {
    func_0x00010c1d0640(puVar1,param_2,param_4,&PTR____CFConstantStringClassReference_110dad998);
  }
  puVar2 = PTR_PTR_1126b1058;
  _objc_alloc();
  func_0x00010c01b360();
  puVar3 = PTR_PTR_1126b1050;
  _objc_alloc(PTR_PTR_1126b1050);
  func_0x00010c05a200();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10549f63c; end: 10549f7cf; -[SCBitmojiGLBFetcher _retrieveAssetWithContentKey:pageInfo:observer:] */

void FUN_10549f63c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10549f71c;
  puStack_40 = &UNK_11088e698;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010c13e480(uVar1,param_2,param_3,param_4,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10549f7d0; end: 10549fa2b; -[SCBitmojiGLBFetcher _glbRequestForUrlString:feature:performer:isAuthenticated:] */

void FUN_10549f7d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar5 = puVar1;
  if ((param_6 & 1) == 0) {
    func_0x00010900605c(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be91d60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(puVar1);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(param_4);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c11de00(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c11de00(param_5);
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = (undefined4)param_4;
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_3);
    _objc_retain(puVar1);
    _objc_retain(puVar1);
    func_0x00010bfa4900(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10549fa2c; end: 10549facb;  */

void FUN_10549fa2c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x38);
  _objc_retain(param_2);
  func_0x00010900605c(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010be91d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar1);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10549facc; end: 10549fad7;  */

void FUN_10549facc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0,param_2);
  return;
}



/* Entry: 10549fad8; end: 10549fb37; -[SCBitmojiGLBFetcher _bitmojiDynamicAssetUrl:] */

void FUN_10549fad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10549fb38;
  puStack_20 = &UNK_11088e728;
  uStack_18 = param_1;
  func_0x00010c0b8600(param_3,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10549fb38; end: 10549fbff;  */

void FUN_10549fb38(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf0b760();
  if (lVar1 == 2) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bee6880(uVar2);
    func_0x00010549bf8c();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar1 == 1) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bee6880(uVar2);
    func_0x00010549bf3c();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bee6880(uVar2);
    FUN_10549beec();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = 0;
  }
  uVar3 = uVar2;
  func_0x00010549bb70(uVar2,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10549fc00; end: 10549fcc3; -[SCBitmojiGLBFetcher downloadURLForAvatar:avatarType:feature:] */

void FUN_10549fc00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0ec120(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9668;
  func_0x00010bf54b20(PTR_PTR_1126b9668);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bee6880(param_1);
  FUN_10549beec();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010549bb70();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}


