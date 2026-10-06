/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108591314; end: 1085915d3;  */

/* WARNING: Removing unreachable block (ram,0x00010859159c) */

undefined *
FUN_108591314(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
             undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *unaff_x24;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar3 = &UNK_10f4a6fea;
    }
    else {
      puVar3 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,puVar3);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar3 = &UNK_10f4a6fea;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar3 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,puVar3);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar3 = &UNK_10f4a6fea;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar3 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,puVar3);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110a565f8,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar4 = 0;
    do {
      if ((&cStack_59)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar4 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 *)auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  uVar2 = 0;
  if ((long)puVar3 < 8) {
    uVar1 = 3;
    if (puVar3 != (undefined *)0x1) {
      uVar1 = uVar2;
    }
    uVar2 = 1;
    if (puVar3 != (undefined *)0x0) {
      uVar2 = uVar1;
    }
    uVar1 = 5;
    if ((undefined *)0x3 < puVar3 + -2) {
      uVar1 = uVar2;
    }
    return (undefined *)(ulong)uVar1;
  }
  if ((long)puVar3 < 0x51) {
    puVar3 = puVar3 + -8;
    if ((undefined *)0x3e < puVar3) {
      return (undefined *)0x0;
    }
    if ((1L << ((ulong)puVar3 & 0x3f) & 0x22000400800001f0U) == 0) {
      if ((1L << ((ulong)puVar3 & 0x3f) & 0x100000202000001U) != 0) {
        return (undefined *)0xa;
      }
      uVar1 = 0xd;
      if ((1L << ((ulong)puVar3 & 0x3f) & 0x4000000000000008U) == 0) {
        uVar1 = uVar2;
      }
      return (undefined *)(ulong)uVar1;
    }
  }
  else if ((long)puVar3 < 0x5a) {
    if (puVar3 != (undefined *)0x51) {
      if (puVar3 != (undefined *)0x59) {
        return (undefined *)0x0;
      }
      return (undefined *)0xa;
    }
  }
  else if (puVar3 != (undefined *)0x5a) {
    uVar1 = 0x65;
    if (puVar3 != (undefined *)0x67) {
      uVar1 = uVar2;
    }
    return (undefined *)(ulong)uVar1;
  }
  return (undefined *)0xe;
}



/* Entry: 1085915d4; end: 10859179f;  */

undefined4 FUN_1085915d4(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if (param_1 < 8) {
    uVar1 = 3;
    if (param_1 != 1) {
      uVar1 = uVar2;
    }
    uVar2 = 1;
    if (param_1 != 0) {
      uVar2 = uVar1;
    }
    uVar1 = 5;
    if (3 < param_1 - 2U) {
      uVar1 = uVar2;
    }
    return uVar1;
  }
  if (param_1 < 0x51) {
    uVar3 = param_1 - 8;
    if (0x3e < uVar3) {
      return 0;
    }
    if ((1L << (uVar3 & 0x3f) & 0x22000400800001f0U) == 0) {
      if ((1L << (uVar3 & 0x3f) & 0x100000202000001U) != 0) {
        return 10;
      }
      uVar1 = 0xd;
      if ((1L << (uVar3 & 0x3f) & 0x4000000000000008U) == 0) {
        uVar1 = uVar2;
      }
      return uVar1;
    }
  }
  else if (param_1 < 0x5a) {
    if (param_1 != 0x51) {
      if (param_1 != 0x59) {
        return 0;
      }
      return 10;
    }
  }
  else if (param_1 != 0x5a) {
    uVar1 = 0x65;
    if (param_1 != 0x67) {
      uVar1 = uVar2;
    }
    return uVar1;
  }
  return 0xe;
}



/* Entry: 1085917a0; end: 108591957; +[SCTranscodingSkipControlUtils requiresReRenderingReasionsWithOriginalDuration:timeRanges:imageCommandCount:audioEnabled:hasAudioEffect:videoPlaybackRate:targetOrientation:] */

byte FUN_1085917a0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  ulong param_5,long param_6,int param_7,int param_8,long param_9)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  byte bVar5;
  double dVar6;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  uVar2 = param_5;
  func_0x00010bf529e0(param_5);
  bVar5 = 1 < uVar2;
  uVar2 = param_5;
  func_0x00010bf529e0();
  if (uVar2 == 1) {
    uVar2 = param_5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x00010bdc1120(&uStack_90,uVar2);
    }
    _objc_release(uVar2);
    uStack_a8 = uStack_88;
    uStack_b0 = uStack_90;
    uStack_a0 = uStack_80;
    uStack_c8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_d0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_c0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar3 = &uStack_b0;
    _CMTimeCompare(puVar3,&uStack_d0);
    uStack_a8 = uStack_70;
    uStack_b0 = uStack_78;
    uStack_a0 = uStack_68;
    uStack_c8 = param_4[1];
    uStack_d0 = *param_4;
    uStack_c0 = param_4[2];
    puVar4 = PTR_PTR_1126da080;
    func_0x00010be0ad60(0x3f60624dd2f1a9fc);
    bVar5 = ((uint)puVar4 & (uint)((int)puVar3 == 0)) == 0 || (bool)bVar5;
  }
  if (param_7 == 0) {
    bVar5 = bVar5 | 2;
  }
  bVar1 = bVar5 | 4;
  if (param_6 < 1) {
    bVar1 = bVar5;
  }
  bVar5 = bVar1 | 8;
  if (param_8 == 0) {
    bVar5 = bVar1;
  }
  dVar6 = ABS(param_1 + 1.0) * 2.220446049250313e-16;
  if (dVar6 <= 2.2250738585072014e-308) {
    dVar6 = 2.2250738585072014e-308;
  }
  if (dVar6 <= ABS(param_1 + -1.0)) {
    bVar5 = bVar5 | 0x10;
  }
  if (param_9 != 0) {
    bVar5 = bVar5 | 0x20;
  }
  _objc_release(param_5);
  return bVar5;
}



/* Entry: 108591958; end: 108591b67; +[SCTranscodingSkipControlUtils requiresReEncodingReasonsWithConfigProviderInput:outputConfig:inputVideoCodec:inputAudioCodec:inputResolution:inputIsHDR:circumstanceEngine:] */

ulong FUN_108591958(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                   undefined8 param_5,long param_6,int param_7,undefined8 param_8)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  if (param_6 == 3) {
    uVar2 = param_8;
    func_0x00010bf1f440(param_8,param_2,&PTR____CFConstantStringClassReference_110ee3e78,1,0);
    uVar3 = 0x40;
    if ((int)uVar2 == 0) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  uVar7 = uVar3 | 0x200;
  if (param_7 == 0) {
    uVar7 = uVar3;
  }
  if (param_3 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    lVar4 = 0;
LAB_108591b44:
    _objc_release(0);
    _objc_release(lVar4);
    if (param_4 == 0) {
LAB_108591b58:
      uVar2 = 0;
    }
    else {
LAB_108591a68:
      uVar2 = *(undefined8 *)(param_4 + 0x30);
    }
    func_0x00010be45760(param_1,param_2,param_5,uVar2);
    if ((int)param_1 == 0) {
      uVar7 = uVar7 | 0x40;
    }
    fVar8 = 4.0;
    func_0x00010bfb2cc0(param_8,param_2,&PTR____CFConstantStringClassReference_110ee3e98,0);
    fVar9 = 1.0;
    if (1.0 <= fVar8) {
      fVar9 = fVar8;
    }
    if (param_3 == 0) {
      dVar10 = 0.0;
      goto LAB_108591adc;
    }
  }
  else {
    lVar4 = *(long *)(param_3 + 0x60);
    _objc_retain(lVar4);
    if ((lVar4 == 0) || (*(char *)(lVar4 + 10) != '\x01')) {
      lVar6 = *(long *)(param_3 + 0x60);
      _objc_retain(lVar6);
      if (lVar6 == 0) goto LAB_108591b44;
      cVar1 = *(char *)(lVar6 + 0xb);
      _objc_release(lVar6);
      _objc_release(lVar4);
      if (cVar1 == '\x01') goto LAB_108591a40;
LAB_108591a64:
      if (param_4 == 0) goto LAB_108591b58;
      goto LAB_108591a68;
    }
    _objc_release(lVar4);
LAB_108591a40:
    uVar5 = *(ulong *)(param_3 + 0x60);
    _objc_retain(uVar5);
    uVar3 = uVar5;
    func_0x00010c073380();
    _objc_release(uVar5);
    if ((uVar3 & 1) != 0) goto LAB_108591a64;
    fVar8 = 4.0;
    func_0x00010bfb2cc0(param_8,param_2,&PTR____CFConstantStringClassReference_110ee3e98,0);
    fVar9 = 1.0;
    if (1.0 <= fVar8) {
      fVar9 = fVar8;
    }
  }
  dVar10 = *(double *)(param_3 + 0x10);
LAB_108591adc:
  if (param_4 == 0) {
    dVar11 = 0.0;
  }
  else {
    dVar11 = *(double *)(param_4 + 0x10);
  }
  uVar3 = uVar7 | 0x100;
  if (dVar10 <= dVar11 * (double)fVar9) {
    uVar3 = uVar7;
  }
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 108591b68; end: 108591b8b; +[SCTranscodingSkipControlUtils _isVideoCodec:equalToTranscodeCodec:] */

bool FUN_108591b68(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  
  bVar1 = param_4 == 1;
  if (param_3 != 2) {
    bVar1 = param_3 == 1 && param_4 == 0;
  }
  return bVar1;
}



/* Entry: 108591b8c; end: 108591c37; +[SCTranscodingSkipControlUtils _equalTime:toTime:precision:] */

bool FUN_108591b8c(double param_1,undefined8 param_2,undefined8 param_3,double *param_4,
                  double *param_5)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  
  uVar1 = *(uint *)((long)param_4 + 0xc) & 0x1d;
  uVar2 = *(uint *)((long)param_5 + 0xc) & 0x1d;
  if (uVar1 != 1 || uVar2 != 1) {
    return (uVar1 == 1) == (uVar2 == 1);
  }
  dStack_48 = param_4[1];
  dVar3 = *param_4;
  dStack_40 = param_4[2];
  dStack_50 = dVar3;
  _CMTimeGetSeconds(&dStack_50);
  dStack_48 = param_5[1];
  dVar4 = *param_5;
  dStack_40 = param_5[2];
  dStack_50 = dVar4;
  _CMTimeGetSeconds(&dStack_50);
  return ABS(dVar3 - dVar4) < param_1;
}



/* Entry: 108591c38; end: 108591ee7; +[SCUploadMediaQualityControllerUtils enableReUploadWithDestination:preUploadVideoTargetSize:reUploadVideoTargetSize:circumstanceEngine:featureProvidedSignals:] */

uint FUN_108591c38(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                  undefined8 param_6,ulong param_7,ulong param_8,undefined8 param_9)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (((param_3 <= 0.0) || (param_4 <= 0.0)) ||
     ((long)param_1 != (long)param_3 || (long)param_2 != (long)param_4)) {
    uVar1 = param_7;
    func_0x00010c073360();
    if ((((int)uVar1 == 0) || (uVar1 = param_7, func_0x00010c073460(), (int)uVar1 == 0)) ||
       (uVar1 = param_8,
       func_0x00010bf1f440(param_8,param_6,&PTR____CFConstantStringClassReference_110f53558,0,
                           param_9), (uVar1 & 1) == 0)) {
      uVar1 = param_7;
      func_0x00010c073360();
      if ((uVar1 & 1) == 0) goto LAB_108591d4c;
    }
    else {
      uVar1 = param_7;
      func_0x00010c073360();
      if (((int)uVar1 == 0) || (uVar1 = param_7, func_0x00010c073460(), (int)uVar1 != 0)) {
LAB_108591d4c:
        uVar1 = param_8;
        func_0x00010c067f00(param_8,param_6,&PTR____CFConstantStringClassReference_110ee3eb8,0,
                            param_9);
        if ((int)uVar1 < 1) {
          uVar1 = param_8;
          func_0x00010c067f00(param_8,param_6,&PTR____CFConstantStringClassReference_110ee3ed8,0,
                              param_9);
          if (0 < (int)uVar1) {
            if (param_2 <= param_1) {
              param_1 = param_2;
            }
            if ((double)(uVar1 & 0xffffffff) <= param_1) goto LAB_108591d14;
          }
        }
        else {
          if (param_2 <= param_1) {
            param_1 = param_2;
          }
          if (param_4 <= param_3) {
            param_3 = param_4;
          }
          if (((0.0 < param_1) && (0.0 < param_3)) &&
             (param_3 * 100.0 < param_1 * (double)(ulong)(long)(int)uVar1)) goto LAB_108591d14;
        }
        if (param_7 == 0) {
          func_0x00010bf1f440(param_8,param_6,&PTR____CFConstantStringClassReference_110ee3ef8,0,
                              param_9);
        }
        else {
          if (((*(char *)(param_7 + 10) == '\x01') &&
              (((((*(byte *)(param_7 + 0xb) & 1) == 0 && ((*(byte *)(param_7 + 0xe) & 1) == 0)) &&
                (*(char *)(param_7 + 0xf) != '\x01')) ||
               ((((*(char *)(param_7 + 0xb) == '\x01' && ((*(byte *)(param_7 + 0xe) & 1) == 0)) &&
                 (*(char *)(param_7 + 0xf) != '\x01')) ||
                (((((*(byte *)(param_7 + 0xb) & 1) != 0 || ((*(byte *)(param_7 + 0xe) & 1) != 0)) ||
                  (*(char *)(param_7 + 0xf) == '\x01')) &&
                 (uVar1 = param_5, func_0x00010beec1e0(param_5,param_6,param_8,param_9),
                 (uVar1 & 1) != 0)))))))) ||
             ((*(char *)(param_7 + 0xb) == '\x01' &&
              (func_0x00010beec200(param_5,param_6,param_8,param_9), (param_5 & 1) != 0)))) {
            uVar2 = 1;
            goto LAB_108591d18;
          }
          uVar1 = param_8;
          func_0x00010bf1f440(param_8,param_6,&PTR____CFConstantStringClassReference_110ee3ef8,0,
                              param_9);
          if ((((*(byte *)(param_7 + 10) & 1) == 0) && ((*(byte *)(param_7 + 0xb) & 1) == 0)) &&
             (*(char *)(param_7 + 0xe) == '\x01')) {
            uVar2 = (*(byte *)(param_7 + 0xf) ^ 1) & (uint)uVar1;
            goto LAB_108591d18;
          }
        }
      }
    }
  }
LAB_108591d14:
  uVar2 = 0;
LAB_108591d18:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return uVar2 & 1;
}



/* Entry: 108591ee8; end: 108591fb3; +[SCUploadMediaQualityControllerUtils videoTargetSizeForDestination:sourceVideoSize:circumstanceEngine:featureProvidedSignals:] */

undefined1  [16]
FUN_108591ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_PTR_1126d34c8;
  _objc_retain(param_6);
  func_0x00010c11cf00(puVar1,param_4,param_5,param_7,param_6);
  puVar1 = PTR_PTR_1126bf798;
  _objc_opt_new(PTR_PTR_1126bf798);
  puVar2 = puVar1;
  func_0x00010bf467a0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c13a500(puVar2);
  puVar3 = puVar2;
  func_0x00010c13a460(puVar2);
  _objc_release(puVar2);
  auVar4._8_8_ = (double)(int)puVar3;
  auVar4._0_8_ = (double)(int)puVar1;
  return auVar4;
}



/* Entry: 108591fb4; end: 1085920ef; +[SCUploadMediaQualityControllerUtils enableSkipTranscodeWithDestination:mediaSource:isMultiSnap:circumstanceEngine:] */

undefined8
FUN_108591fb4(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,int param_5,
             undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010c073380();
  if ((uVar1 & 1) == 0) {
    if (param_5 == 0) {
      if (param_3 != 0) goto LAB_10859201c;
    }
    else if (param_3 != 0) {
      if ((*(byte *)(param_3 + 0x13) & 1) != 0) {
        uVar2 = 1;
        goto LAB_1085920c8;
      }
LAB_10859201c:
      if ((param_4 == 3) && (*(char *)(param_3 + 10) != '\0')) {
        func_0x00010beec2c0(param_1,param_2,param_6);
        uVar2 = param_1;
      }
      else if ((param_4 == 0) && (*(char *)(param_3 + 10) != '\0')) {
        func_0x00010beec260(param_1,param_2,param_6);
        uVar2 = param_1;
      }
      else if ((param_4 == 3) && (*(char *)(param_3 + 0xb) != '\0')) {
        func_0x00010beec2a0(param_1,param_2,param_6);
        uVar2 = param_1;
      }
      else if ((param_4 == 0) && (*(char *)(param_3 + 0xb) != '\0')) {
        func_0x00010beec240(param_1,param_2,param_6);
        uVar2 = param_1;
      }
      else if ((param_4 == 3) && (*(char *)(param_3 + 0xe) != '\0')) {
        func_0x00010beec280(param_1,param_2,param_6);
        uVar2 = param_1;
      }
      else {
        uVar2 = 0;
        if ((param_4 == 0) && (*(char *)(param_3 + 0xe) != '\0')) {
          func_0x00010beec220(param_1,param_2,param_6);
          uVar2 = param_1;
        }
      }
      goto LAB_1085920c8;
    }
  }
  uVar2 = 0;
LAB_1085920c8:
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1085920f0; end: 10859210b; +[SCUploadMediaQualityControllerUtils abEnabledForSkipTranscodeFromCrOrMemoriesToSpotlight:] */

void FUN_1085920f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f53578,0,0);
  return;
}



/* Entry: 10859210c; end: 108592127; +[SCUploadMediaQualityControllerUtils abEnabledForSkipTranscodeFromCameraToSpotlight:] */

void FUN_10859210c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f53598,0,0);
  return;
}



/* Entry: 108592128; end: 108592143; +[SCUploadMediaQualityControllerUtils abEnabledForSkipTranscodeFromCrOrMemoriesToPublicStory:] */

void FUN_108592128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f535b8,0,0);
  return;
}



/* Entry: 108592144; end: 10859215f; +[SCUploadMediaQualityControllerUtils abEnabledForSkipTranscodeFromCameraToPublicStory:] */

void FUN_108592144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f535d8,0,0);
  return;
}



/* Entry: 108592160; end: 10859217b; +[SCUploadMediaQualityControllerUtils abEnabledForSkipTranscodeFromCrOrMemoriesToFriendStory:] */

void FUN_108592160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f535f8,0,0);
  return;
}



/* Entry: 10859217c; end: 108592197; +[SCUploadMediaQualityControllerUtils abEnabledForSkipTranscodeFromCameraToFriendStory:] */

void FUN_10859217c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f53618,0,0);
  return;
}



/* Entry: 108592198; end: 1085921b3; +[SCUploadMediaQualityControllerUtils abEnabledForReUploadToPublicStory:featureProvidedSignals:] */

void FUN_108592198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f53638,0,param_4);
  return;
}



/* Entry: 1085921b4; end: 1085921cf; +[SCUploadMediaQualityControllerUtils abEnabledForReUploadSpotlighAndStoryPost:featureProvidedSignals:] */

void FUN_1085921b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f53658,0,param_4);
  return;
}



/* Entry: 1085921d0; end: 10859229b; +[SCUploadMediaQualitySelectorUtils qualityLevelForDestination:featureSignals:circumstanceEngine:callbackPerformer:completion:] */

void FUN_1085921d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126d34c8;
  _objc_retain(param_6);
  func_0x00010c11cf00(puVar1,param_2,param_3,param_4,param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10859229c;
  puStack_58 = &UNK_110860cf8;
  uStack_50 = param_7;
  puStack_48 = puVar1;
  _objc_retain(param_7);
  func_0x00010c0f7fc0(param_6,param_2,&puStack_70);
  _objc_release(param_6);
  _objc_release(uStack_50);
  _objc_release(param_7);
  return;
}



/* Entry: 10859229c; end: 1085922ab;  */

void FUN_10859229c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001085922a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1085922ac; end: 1085924a7; +[SCUploadMediaQualitySelectorUtils qualityLevelForDestination:featureSignals:circumstanceEngine:] */

long FUN_1085922ac(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  ulong param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined **ppuVar7;
  byte bVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar5 = param_3;
  func_0x00010c073360();
  if ((((int)uVar5 == 0) || (uVar5 = param_3, func_0x00010c073460(), (int)uVar5 == 0)) ||
     (uVar5 = param_5,
     func_0x00010bf1f440(param_5,param_2,&PTR____CFConstantStringClassReference_110f53558,0,param_4)
     , (uVar5 & 1) == 0)) {
    uVar5 = param_3;
    func_0x00010c073360();
  }
  else {
    uVar5 = param_3;
    func_0x00010c073360();
    if ((int)uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_3;
      func_0x00010c073460();
      uVar5 = (ulong)((uint)uVar5 ^ 1);
    }
  }
  uVar2 = param_4;
  func_0x00010bf2af20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf30e80();
  if ((int)uVar3 == 2) {
    if (param_3 == 0) {
      _objc_release(uVar2);
      goto LAB_108592498;
    }
    if ((*(byte *)(param_3 + 0xb) & 1) == 0) {
      bVar8 = *(byte *)(param_3 + 10);
    }
    else {
      bVar8 = 1;
    }
    _objc_release(uVar2);
LAB_108592398:
    if ((*(byte *)(param_3 + 0x14) & 1) != 0) {
LAB_1085923a0:
      lVar6 = 700;
      goto LAB_108592460;
    }
    if ((*(byte *)(param_3 + 0x13) & 1) != 0) {
      lVar6 = 0;
      goto LAB_108592460;
    }
    if ((*(byte *)(param_3 + 0x11) & 1) != 0) {
      lVar6 = 500;
      goto LAB_108592460;
    }
    if ((uVar5 & 1) == 0) {
      if (((bVar8 & 1) != 0) &&
         (uVar5 = param_5,
         func_0x00010bf1f440(param_5,param_2,&PTR____CFConstantStringClassReference_110de50f8,0,
                             param_4), (uVar5 & 1) != 0)) goto LAB_1085923a0;
      if ((*(byte *)(param_3 + 10) & 1) == 0) {
        uVar4 = 300;
        if ((*(byte *)(param_3 + 0xb) & 1) == 0) {
          bVar1 = *(char *)(param_3 + 0xe) == '\0';
          ppuVar7 = &PTR_PTR_110cb3da0;
          if (bVar1) {
            ppuVar7 = &PTR_PTR_110cb3d90;
          }
          uVar4 = 300;
          if (bVar1) {
            uVar4 = 0;
          }
        }
        else {
          ppuVar7 = &PTR_PTR_110cb3da8;
        }
      }
      else {
        uVar4 = 500;
        ppuVar7 = &PTR_PTR_110cb3d98;
      }
    }
    else {
      uVar4 = 0;
      ppuVar7 = &PTR_PTR_110cb3d90;
    }
  }
  else {
    _objc_release(uVar2);
    bVar8 = 0;
    if (param_3 != 0) goto LAB_108592398;
LAB_108592498:
    uVar4 = 0;
    ppuVar7 = &PTR_PTR_110cb3d90;
  }
  uVar5 = param_5;
  func_0x00010c067f00(param_5,param_2,*ppuVar7,uVar4,param_4);
  lVar6 = (long)(int)uVar5;
LAB_108592460:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar6;
}



/* Entry: 1085924a8; end: 1085924d7;  */

void FUN_1085924a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085924d8; end: 108592667; -[SCSnapVideoFilterAdaptorImpl initWithUserSession:activeVideoPaths:imageCommandProvider:previewCameraSourceOverlayService:targetTrajectoryFactory:stickerInjector:ctpItemViewService:] */

undefined1 *
FUN_1085924d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126fcdb8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108592668; end: 1085926ab; -[SCSnapVideoFilterAdaptorImpl activeVideoPaths] */

void FUN_108592668(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be49fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bef1320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085926ac; end: 1085926fb; -[SCSnapVideoFilterAdaptorImpl addVideoPathToActiveVideoPaths:] */

void FUN_1085926ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be49fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc900();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085926fc; end: 10859274b; -[SCSnapVideoFilterAdaptorImpl removeVideoPathFromActiveVideoPaths:] */

void FUN_1085926fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be49fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f0c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10859274c; end: 10859278b; -[SCSnapVideoFilterAdaptorImpl currentUserId] */

void FUN_10859274c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10859278c; end: 10859296f; -[SCSnapVideoFilterAdaptorImpl generateOverlayAndTrackedImagesForMultiSnapWithOverlaySize:outputSize:inputVideoDurationMS:spectaclesTranscodingConfig:videoPlaybackSpeed:mediaDestination:completion:] */

void FUN_10859278c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  
  _objc_retain(param_11);
  puVar3 = PTR_PTR_1126bf728;
  _objc_retain(param_9);
  _objc_retain(param_8);
  lVar4 = param_6;
  func_0x00010c0d2300();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_6 + 8;
  _objc_loadWeakRetained();
  uVar8 = *(undefined8 *)(param_6 + 0x40);
  lVar7 = param_6;
  func_0x00010c0d2180();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_6 + 0x20);
  uVar2 = *(undefined8 *)(param_6 + 0x28);
  uVar11 = *(undefined8 *)(param_6 + 0x30);
  if (param_10 - 2U < 5) {
    uVar9 = *(undefined8 *)(&UNK_10df35a30 + (param_10 - 2U) * 8);
  }
  else {
    uVar9 = 1;
  }
  uVar10 = *(undefined8 *)(param_6 + 0x38);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_108592970;
  puStack_b0 = &UNK_1108e6580;
  lStack_a8 = param_6;
  uStack_a0 = param_11;
  _objc_retain(param_11);
  func_0x00010c0ef540(param_1,param_2,param_3,param_4,param_5,puVar3,param_7,lVar5,param_8,0,param_9
                      ,lVar6,uVar8,lVar7,uVar1,uVar2,uVar11,0,0,uVar9,uVar10,&puStack_c8);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uStack_a0);
  _objc_release(param_11);
  return;
}



/* Entry: 108592970; end: 108592a13;  */

void FUN_108592970(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0ef500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c0ef500();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108592a14; end: 108592a53; -[SCSnapVideoFilterAdaptorImpl hasMultiSnapOverlayState] */

bool FUN_108592a14(long param_1)

{
  long lVar1;
  
  func_0x00010c0d2300();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 108592a54; end: 108592bf3; -[SCSnapVideoFilterAdaptorImpl hasSameMultiSnapOverlayStateWithAdaptor:] */

undefined1 FUN_108592a54(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126b1350;
  _objc_opt_class(PTR_PTR_1126b1350);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 != 0) {
    uVar4 = param_1;
    func_0x00010c0d2300();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf529e0();
    uVar6 = param_3;
    func_0x00010c0d2300();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf529e0();
    _objc_release(uVar6);
    _objc_release(uVar4);
    if (uVar5 == uVar7) {
      func_0x00010c0d2300(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      func_0x00010bf97e80(param_1);
      _objc_release(param_1);
      _objc_release(uVar1);
    }
  }
  uVar2 = *(undefined1 *)(puStack_68 + 3);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 108592bf4; end: 108592cab;  */

void FUN_108592bf4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0d2300(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c071ae0();
  _objc_release(param_2);
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar2;
  _objc_release(uVar1);
  _objc_release(uVar3);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0) {
    *param_4 = 1;
  }
  return;
}



/* Entry: 108592cac; end: 108592cef; -[SCSnapVideoFilterAdaptorImpl containsTrackedImagesForMultiSnapOverlayState] */

undefined8 FUN_108592cac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0d2300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf04920();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108592cf0; end: 108592cff;  */

void FUN_108592cf0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4bb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bf728,PTR_s_containsTrackedImagesForOverlayS_1125b0888,param_2);
  return;
}



/* Entry: 108592d00; end: 108592d07; -[SCSnapVideoFilterAdaptorImpl clearMultiSnapOverlayState] */

void FUN_108592d00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c98f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setMultiSnapOverlayStates__112650060,0);
  return;
}



/* Entry: 108592d08; end: 108592ed7; -[SCSnapVideoFilterAdaptorImpl generateOverlayAndTrackedImagesForMultiSnapAtIndex:overlaySize:outputSize:spectaclesTranscodingConfig:videoPlaybackSpeed:mediaDestination:completion:] */

void FUN_108592d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  
  _objc_retain(param_11);
  puVar3 = PTR_PTR_1126bf728;
  _objc_retain(param_9);
  lVar4 = param_6;
  func_0x00010c0d2300();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_6 + 8;
  _objc_loadWeakRetained(lVar6);
  uVar8 = *(undefined8 *)(param_6 + 0x40);
  lVar7 = param_6;
  func_0x00010c0d2180();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_6 + 0x20);
  uVar2 = *(undefined8 *)(param_6 + 0x28);
  uVar9 = *(undefined8 *)(param_6 + 0x30);
  if (param_10 - 2U < 5) {
    uVar11 = *(undefined8 *)(&UNK_10df35a30 + (param_10 - 2U) * 8);
  }
  else {
    uVar11 = 1;
  }
  uVar10 = *(undefined8 *)(param_6 + 0x38);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_108592ed8;
  puStack_a8 = &UNK_110a56940;
  uStack_a0 = param_11;
  _objc_retain(param_11);
  func_0x00010c0ef540(param_1,param_2,param_3,param_4,param_5,puVar3,param_7,lVar5,0,0,param_9,lVar6
                      ,uVar8,lVar7,uVar1,uVar2,uVar9,0,0,uVar11,uVar10,&puStack_c0);
  _objc_release(param_9);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uStack_a0);
  _objc_release(param_11);
  return;
}



/* Entry: 108592ed8; end: 108592ee3;  */

void FUN_108592ed8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108592ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 108592ee4; end: 108592f4f; -[SCSnapVideoFilterAdaptorImpl virtualCommandsForRequest:] */

void FUN_108592ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0b6620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29f920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108592f50; end: 108592fbb; -[SCSnapVideoFilterAdaptorImpl commandsForRequest:] */

void FUN_108592f50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0b6620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf41e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108592fbc; end: 108593047; -[SCSnapVideoFilterAdaptorImpl videoCPUCommandForFilterName:config:isSpectacles:] */

void FUN_108592fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0b6620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c299300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108593048; end: 1085930db; -[SCSnapVideoFilterAdaptorImpl imageCommandForFilterName:config:] */

void FUN_108593048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c40c0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010b7448e4();
  _objc_release(param_3);
  func_0x00010bfe7140(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1085930dc; end: 10859315f; -[SCSnapVideoFilterAdaptorImpl imageCommandForCommandConfiguration:filterConfiguration:] */

void FUN_1085930dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0b6620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe7140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108593160; end: 108593167; -[SCSnapVideoFilterAdaptorImpl mainAppImageProcessCommandProvider] */

void FUN_108593160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 108593168; end: 1085931c7; -[SCSnapVideoFilterAdaptorImpl imageCommandForMultiSnapV2ThumbnailFromFilterName:] */

void FUN_108593168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar3);
  func_0x00010c0b6620(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c249640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085931c8; end: 108593233; -[SCSnapVideoFilterAdaptorImpl spectaclesRectificationCommandForConfig:] */

void FUN_1085931c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0b6620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c249640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108593234; end: 10859323b; -[SCSnapVideoFilterAdaptorImpl _legacyCameraActiveVideoPaths] */

void FUN_108593234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 10859323c; end: 108593243; -[SCSnapVideoFilterAdaptorImpl previewCameraSourceOverlayService] */

undefined8 FUN_10859323c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108593244; end: 108593273; -[SCSnapVideoFilterAdaptorImpl setPreviewCameraSourceOverlayService:] */

void FUN_108593244(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108593274; end: 10859327b; -[SCSnapVideoFilterAdaptorImpl overlayAndTrackedImagesHandler] */

undefined8 FUN_108593274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10859327c; end: 108593283; -[SCSnapVideoFilterAdaptorImpl setOverlayAndTrackedImagesHandler:] */

void FUN_10859327c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108593284; end: 10859328b; -[SCSnapVideoFilterAdaptorImpl multiSnapOverlayStates] */

undefined8 FUN_108593284(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10859328c; end: 1085932bb; -[SCSnapVideoFilterAdaptorImpl setMultiSnapOverlayStates:] */

void FUN_10859328c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1085932bc; end: 1085932c3; -[SCSnapVideoFilterAdaptorImpl multiSnapDrawingCache] */

undefined8 FUN_1085932bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1085932c4; end: 1085932f3; -[SCSnapVideoFilterAdaptorImpl setMultiSnapDrawingCache:] */

void FUN_1085932c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085932f4; end: 10859338b; -[SCSnapVideoFilterAdaptorImpl .cxx_destruct] */

void FUN_1085932f4(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10859338c; end: 108593397; -[SCSpectaclesOnDemandResourcesServices .cxx_destruct] */

void FUN_10859338c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108593398; end: 10859345f; -[SCSpectaclesVideoObject initWithVideoUrl:imageUrl:videoShouldLoop:startTime:endTime:] */

undefined1 *
FUN_108593398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fcdc8;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 108593460; end: 108593483; -[SCSpectaclesVideoObject copyWithZone:] */

undefined8 FUN_108593460(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108593484; end: 10859353f; -[SCSpectaclesVideoObject hash] */

undefined8 * FUN_108593484(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar8 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_38 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_48 = uVar4;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_108593638:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108593644;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) && (*(char *)((long)puVar5 + 8) == param_3[8])) {
      dVar11 = ABS(*(double *)((long)puVar5 + 0x20) - *(double *)(param_3 + 0x20));
      dVar10 = ABS(*(double *)((long)puVar5 + 0x20) + *(double *)(param_3 + 0x20)) *
               2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar2 = dVar11 < dVar10;
      }
      if (bVar2) {
        dVar11 = ABS(*(double *)((long)puVar5 + 0x28) - *(double *)(param_3 + 0x28));
        dVar10 = ABS(*(double *)((long)puVar5 + 0x28) + *(double *)(param_3 + 0x28)) *
                 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar2 = dVar11 < dVar10;
        }
        if ((bVar2) &&
           ((lVar7 = *(long *)((long)puVar5 + 0x10), lVar7 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
          puVar9 = *(undefined1 **)((long)puVar5 + 0x18);
          if (puVar9 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108593644;
          }
          goto LAB_108593638;
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_108593644:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 108593540; end: 10859365f; -[SCSpectaclesVideoObject isEqual:] */

long FUN_108593540(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108593638:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108593644;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
        dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if ((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x18);
          if (lVar4 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108593644;
          }
          goto LAB_108593638;
        }
      }
    }
    lVar4 = 0;
  }
LAB_108593644:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108593660; end: 108593667; -[SCSpectaclesVideoObject videoUrl] */

undefined8 FUN_108593660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108593668; end: 10859366f; -[SCSpectaclesVideoObject imageUrl] */

undefined8 FUN_108593668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108593670; end: 108593677; -[SCSpectaclesVideoObject videoShouldLoop] */

undefined1 FUN_108593670(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108593678; end: 10859367f; -[SCSpectaclesVideoObject startTime] */

undefined8 FUN_108593678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108593680; end: 108593687; -[SCSpectaclesVideoObject endTime] */

undefined8 FUN_108593680(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108593688; end: 1085936b7; -[SCSpectaclesVideoObject .cxx_destruct] */

void FUN_108593688(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1085936b8; end: 10859374b;  */

void FUN_1085936b8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ee3f18;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ee3f18,
                      &PTR____CFConstantStringClassReference_110ee3f38,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10859374c; end: 1085938cf;  */

void FUN_10859374c(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  
  dVar22 = *param_2;
  dVar24 = param_2[1];
  dVar1 = param_1[4];
  dVar2 = param_1[5];
  dVar4 = *param_1;
  dVar3 = param_1[1];
  dVar26 = param_2[2];
  dVar29 = param_2[3];
  dVar7 = param_1[8];
  dVar6 = param_1[9];
  dVar14 = param_1[0xc];
  dVar13 = param_1[0xd];
  dVar16 = param_1[6];
  dVar17 = param_1[7];
  dVar19 = param_1[2];
  dVar18 = param_1[3];
  dVar21 = param_1[10];
  dVar20 = param_1[0xb];
  dVar23 = param_1[0xe];
  dVar15 = param_1[0xf];
  dVar25 = param_2[4];
  dVar27 = param_2[5];
  dVar30 = param_2[6];
  dVar8 = param_2[7];
  dVar28 = param_2[8];
  dVar31 = param_2[9];
  dVar9 = param_2[10];
  dVar11 = param_2[0xb];
  dVar32 = param_2[0xc];
  dVar10 = param_2[0xd];
  dVar5 = param_2[0xe];
  dVar12 = param_2[0xf];
  *param_1 = dVar24 * dVar1 + dVar4 * dVar22 + dVar7 * dVar26 + dVar14 * dVar29;
  param_1[1] = dVar24 * dVar2 + dVar3 * dVar22 + dVar6 * dVar26 + dVar13 * dVar29;
  param_1[2] = dVar24 * dVar16 + dVar19 * dVar22 + dVar21 * dVar26 + dVar23 * dVar29;
  param_1[3] = dVar24 * dVar17 + dVar18 * dVar22 + dVar20 * dVar26 + dVar15 * dVar29;
  param_1[4] = dVar1 * dVar27 + dVar4 * dVar25 + dVar7 * dVar30 + dVar14 * dVar8;
  param_1[5] = dVar2 * dVar27 + dVar3 * dVar25 + dVar6 * dVar30 + dVar13 * dVar8;
  param_1[6] = dVar16 * dVar27 + dVar19 * dVar25 + dVar21 * dVar30 + dVar23 * dVar8;
  param_1[7] = dVar17 * dVar27 + dVar18 * dVar25 + dVar20 * dVar30 + dVar15 * dVar8;
  param_1[8] = dVar1 * dVar31 + dVar4 * dVar28 + dVar7 * dVar9 + dVar14 * dVar11;
  param_1[9] = dVar2 * dVar31 + dVar3 * dVar28 + dVar6 * dVar9 + dVar13 * dVar11;
  param_1[10] = dVar16 * dVar31 + dVar19 * dVar28 + dVar21 * dVar9 + dVar23 * dVar11;
  param_1[0xb] = dVar17 * dVar31 + dVar18 * dVar28 + dVar20 * dVar9 + dVar15 * dVar11;
  param_1[0xc] = dVar1 * dVar10 + dVar4 * dVar32 + dVar7 * dVar5 + dVar14 * dVar12;
  param_1[0xd] = dVar2 * dVar10 + dVar3 * dVar32 + dVar6 * dVar5 + dVar13 * dVar12;
  param_1[0xe] = dVar16 * dVar10 + dVar19 * dVar32 + dVar21 * dVar5 + dVar23 * dVar12;
  param_1[0xf] = dVar17 * dVar10 + dVar18 * dVar32 + dVar20 * dVar5 + dVar15 * dVar12;
  return;
}



/* Entry: 1085938d0; end: 108593963;  */

double FUN_1085938d0(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar1 = param_1[4];
  dVar2 = param_1[5];
  dVar3 = param_1[6];
  dVar4 = param_1[7];
  dVar5 = param_1[8];
  dVar6 = param_1[9];
  dVar7 = param_1[10];
  dVar8 = param_1[0xb];
  dVar9 = param_1[0xc];
  dVar10 = param_1[0xd];
  dVar11 = param_1[0xe];
  dVar12 = param_1[0xf];
  dVar13 = -(dVar8 * dVar11) + dVar12 * dVar7;
  dVar14 = -(dVar8 * dVar10) + dVar12 * dVar6;
  dVar15 = -(dVar7 * dVar10) + dVar11 * dVar6;
  dVar8 = -(dVar8 * dVar9) + dVar12 * dVar5;
  dVar7 = -(dVar7 * dVar9) + dVar11 * dVar5;
  dVar5 = -(dVar6 * dVar9) + dVar10 * dVar5;
  return (-((-(dVar8 * dVar3) + dVar13 * dVar1 + dVar7 * dVar4) * param_1[1]) +
          (-(dVar14 * dVar3) + dVar13 * dVar2 + dVar15 * dVar4) * *param_1 +
         (-(dVar8 * dVar2) + dVar14 * dVar1 + dVar5 * dVar4) * param_1[2]) -
         (-(dVar7 * dVar2) + dVar15 * dVar1 + dVar5 * dVar3) * param_1[3];
}



/* Entry: 108593964; end: 1085941e7;  */

double * FUN_108593964(double *param_1,double *param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  double *pdVar4;
  double *pdVar5;
  long lVar6;
  double *pdVar7;
  long lVar8;
  double *pdVar9;
  double *pdVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double unaff_d8;
  double unaff_d9;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dStack_340;
  double dStack_338;
  double dStack_330;
  undefined8 uStack_328;
  double dStack_320;
  double dStack_318;
  double dStack_310;
  undefined8 uStack_308;
  double dStack_300;
  double dStack_2f8;
  double dStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_280;
  double dStack_278;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double dStack_208;
  double adStack_200 [6];
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  undefined8 uStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  undefined8 uStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  undefined8 uStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  undefined8 uStack_108;
  double adStack_100 [6];
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  long lStack_78;
  
  pdVar4 = &dStack_280;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((((*param_1 == 1.0) && (param_1[1] == 0.0)) && (param_1[2] == 0.0)) &&
      ((param_1[3] == 0.0 && (param_1[4] == 0.0)))) &&
     ((((param_1[5] == 1.0 && ((param_1[6] == 0.0 && (param_1[7] == 0.0)))) && (param_1[8] == 0.0))
      && ((((param_1[9] == 0.0 && (param_1[10] == 1.0)) && (param_1[0xb] == 0.0)) &&
          (((param_1[0xc] == 0.0 && (param_1[0xd] == 0.0)) &&
           ((param_1[0xe] == 0.0 && (param_1[0xf] == 1.0)))))))))) {
    param_2[0x12] = 0.0;
    param_2[0x11] = 0.0;
    param_2[0x10] = 0.0;
    param_2[0xf] = 0.0;
    param_2[0xe] = 0.0;
    param_2[0xd] = 0.0;
    param_2[0xc] = 0.0;
    param_2[0xb] = 0.0;
    param_2[10] = 0.0;
    param_2[9] = 0.0;
    param_2[8] = 0.0;
    param_2[7] = 0.0;
    param_2[6] = 0.0;
    param_2[5] = 0.0;
    param_2[4] = 0.0;
    param_2[3] = 0.0;
    param_2[0x13] = 1.0;
    auVar12 = NEON_fmov(0x3ff0000000000000,8);
    param_2[1] = auVar12._8_8_;
    *param_2 = auVar12._0_8_;
    param_2[2] = 1.0;
  }
  dStack_b8 = param_1[9];
  dStack_c0 = param_1[8];
  dStack_a8 = param_1[0xb];
  dStack_b0 = param_1[10];
  dStack_98 = param_1[0xd];
  dStack_a0 = param_1[0xc];
  dStack_88 = param_1[0xf];
  dStack_90 = param_1[0xe];
  adStack_100[1] = param_1[1];
  adStack_100[0] = *param_1;
  adStack_100[3] = param_1[3];
  adStack_100[2] = param_1[2];
  adStack_100[5] = param_1[5];
  adStack_100[4] = param_1[4];
  dStack_c8 = param_1[7];
  dStack_d0 = param_1[6];
  pdVar5 = param_2;
  if (param_1[0xf] == 0.0) {
    pdVar10 = (double *)0x0;
  }
  else {
    lVar6 = 0;
    pdVar10 = adStack_100;
    do {
      lVar8 = 0;
      do {
        *(double *)((long)pdVar10 + lVar8) = *(double *)((long)pdVar10 + lVar8) / dStack_88;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0x20);
      lVar6 = lVar6 + 1;
      pdVar10 = pdVar10 + 4;
    } while (lVar6 != 4);
    dStack_138 = dStack_b8;
    dStack_140 = dStack_c0;
    dStack_130 = dStack_b0;
    dStack_118 = dStack_98;
    dStack_120 = dStack_a0;
    dStack_178 = adStack_100[1];
    dStack_180 = adStack_100[0];
    dStack_170 = adStack_100[2];
    dStack_158 = adStack_100[5];
    dStack_160 = adStack_100[4];
    dStack_150 = dStack_d0;
    uStack_168 = 0;
    uStack_148 = 0;
    uStack_128 = 0;
    dStack_110 = dStack_90;
    uStack_108 = 0x3ff0000000000000;
    param_1 = &dStack_180;
    dVar16 = (double)FUN_1085938d0();
    dVar15 = dStack_88;
    dVar14 = dStack_a8;
    dVar13 = dStack_c8;
    dVar11 = adStack_100[3];
    pdVar10 = (double *)(ulong)(dVar16 != 0.0);
    if (dVar16 != 0.0) {
      if (((adStack_100[3] == 0.0) && (dStack_c8 == 0.0)) && (dStack_a8 == 0.0)) {
        param_2[0x10] = 0.0;
        param_2[0x11] = 0.0;
        param_2[0x12] = 0.0;
        param_2[0x13] = 1.0;
      }
      else {
        dVar20 = dStack_130 + dStack_110 * -0.0;
        dVar23 = dStack_138 + dStack_118 * -0.0;
        dVar17 = -(dStack_130 * dStack_118) + dStack_110 * dStack_138;
        dVar18 = dStack_140 + dStack_120 * -0.0;
        dVar19 = -(dStack_130 * dStack_120) + dStack_110 * dStack_140;
        adStack_200[0] = -(dVar23 * dStack_150) + dVar20 * dStack_158 + dVar17 * 0.0;
        adStack_200[1] = -(dVar17 * 0.0) - (-(dVar23 * dStack_170) + dVar20 * dStack_178);
        dVar25 = -(dStack_138 * dStack_120) + dStack_118 * dStack_140;
        adStack_200[4] = -(dVar19 * 0.0) - (-(dVar18 * dStack_150) + dVar20 * dStack_160);
        adStack_200[5] = -(dVar18 * dStack_170) + dVar20 * dStack_180 + dVar19 * 0.0;
        dStack_1c0 = -(dVar18 * dStack_158) + dVar23 * dStack_160 + dVar25 * 0.0;
        dStack_1b8 = -(dVar25 * 0.0) - (-(dVar18 * dStack_178) + dVar23 * dStack_180);
        dStack_1a0 = -(dStack_150 * dVar25) - (-(dVar19 * dStack_158) + dVar17 * dStack_160);
        dStack_198 = -(dVar19 * dStack_178) + dVar17 * dStack_180 + dVar25 * dStack_170;
        dVar25 = dStack_150 + dStack_110 * -0.0;
        dVar21 = dStack_158 + dStack_118 * -0.0;
        dVar24 = -(dStack_150 * dStack_118) + dStack_110 * dStack_158;
        dVar26 = dStack_160 + dStack_120 * -0.0;
        dVar23 = -(dStack_150 * dStack_120) + dStack_110 * dStack_160;
        dVar20 = -(dStack_158 * dStack_120) + dStack_118 * dStack_160;
        dVar17 = dStack_130 * -0.0 + dStack_150 * 0.0;
        dVar22 = dStack_138 * -0.0 + dStack_158 * 0.0;
        dVar27 = -(dStack_150 * dStack_138) + dStack_130 * dStack_158;
        adStack_200[2] = -(dVar21 * dStack_170) + dVar25 * dStack_178 + dVar24 * 0.0;
        adStack_200[3] = -(dVar27 * 0.0) - (-(dVar22 * dStack_170) + dVar17 * dStack_178);
        dVar19 = dStack_140 * -0.0 + dStack_160 * 0.0;
        dVar18 = -(dStack_150 * dStack_140) + dStack_130 * dStack_160;
        dStack_1d0 = -(dVar23 * 0.0) - (-(dVar26 * dStack_170) + dVar25 * dStack_180);
        dStack_1c8 = -(dVar19 * dStack_170) + dVar17 * dStack_180 + dVar18 * 0.0;
        dVar17 = -(dStack_158 * dStack_140) + dStack_138 * dStack_160;
        dStack_1b0 = -(dVar26 * dStack_178) + dVar21 * dStack_180 + dVar20 * 0.0;
        dStack_1a8 = -(dVar17 * 0.0) - (-(dVar19 * dStack_178) + dVar22 * dStack_180);
        dStack_190 = -(dStack_170 * dVar20) - (-(dVar23 * dStack_178) + dVar24 * dStack_180);
        dStack_188 = -(dVar18 * dStack_178) + dVar27 * dStack_180 + dVar17 * dStack_170;
        if (1e-08 <= ABS(dVar16)) {
          lVar6 = 0;
          pdVar7 = adStack_200;
          do {
            lVar8 = 0;
            do {
              dVar17 = *(double *)((long)pdVar7 + lVar8);
              ((double *)((long)pdVar7 + lVar8))[1] = ((double *)((long)pdVar7 + lVar8))[1] / dVar16
              ;
              *(double *)((long)pdVar7 + lVar8) = dVar17 / dVar16;
              lVar8 = lVar8 + 0x10;
            } while (lVar8 != 0x20);
            lVar6 = lVar6 + 1;
            pdVar7 = pdVar7 + 4;
          } while (lVar6 != 4);
        }
        lVar6 = 0;
        pdVar7 = adStack_200 + 4;
        do {
          lVar8 = 0;
          pdVar9 = pdVar7;
          do {
            dVar16 = pdVar9[-4];
            ((double *)((long)pdVar4 + lVar8))[1] = *pdVar9;
            *(double *)((long)pdVar4 + lVar8) = dVar16;
            pdVar9 = pdVar9 + 8;
            lVar8 = lVar8 + 0x10;
          } while (lVar8 != 0x20);
          lVar6 = lVar6 + 1;
          pdVar7 = pdVar7 + 1;
          pdVar4 = (double *)((long)pdVar4 + 0x20);
        } while (lVar6 != 4);
        param_2[0x11] =
             dStack_258 * dVar13 + dStack_278 * dVar11 + dStack_238 * dVar14 + dStack_218 * dVar15;
        param_2[0x10] =
             dStack_260 * dVar13 + dStack_280 * dVar11 + dStack_240 * dVar14 + dStack_220 * dVar15;
        param_2[0x13] =
             dStack_248 * dVar13 + dStack_268 * dVar11 + dStack_228 * dVar14 + dStack_208 * dVar15;
        param_2[0x12] =
             dStack_250 * dVar13 + dStack_270 * dVar11 + dStack_230 * dVar14 + dStack_210 * dVar15;
      }
      lVar6 = 0;
      param_2[0xe] = dStack_98;
      param_2[0xd] = dStack_a0;
      dStack_a0 = 0.0;
      dStack_98 = 0.0;
      param_2[0xf] = dStack_90;
      dStack_90 = 0.0;
      pdVar4 = adStack_100 + 2;
      do {
        dVar11 = pdVar4[-2];
        *(double *)((long)adStack_200 + lVar6 + 8) = pdVar4[-1];
        *(double *)((long)adStack_200 + lVar6) = dVar11;
        *(double *)((long)adStack_200 + lVar6 + 0x10) = *pdVar4;
        lVar6 = lVar6 + 0x18;
        pdVar4 = pdVar4 + 4;
      } while (lVar6 != 0x48);
      dVar13 = adStack_200[1] * adStack_200[1] + adStack_200[0] * adStack_200[0] +
               adStack_200[2] * adStack_200[2];
      dVar11 = SQRT(dVar13);
      *param_2 = dVar11;
      if (dVar13 != 0.0) {
        dVar13 = 1.0 / dVar11;
        adStack_200[0] = adStack_200[0] * dVar13;
        adStack_200[1] = adStack_200[1] * dVar13;
        adStack_200[2] = adStack_200[2] * dVar13;
      }
      dVar14 = adStack_200[1] * adStack_200[4] + adStack_200[3] * adStack_200[0] +
               adStack_200[5] * adStack_200[2];
      adStack_200[3] = adStack_200[3] - adStack_200[0] * dVar14;
      adStack_200[4] = adStack_200[4] - adStack_200[1] * dVar14;
      adStack_200[5] = adStack_200[5] - adStack_200[2] * dVar14;
      dVar15 = adStack_200[4] * adStack_200[4] + adStack_200[3] * adStack_200[3] +
               adStack_200[5] * adStack_200[5];
      dVar13 = SQRT(dVar15);
      param_2[1] = dVar13;
      if (dVar15 != 0.0) {
        dVar15 = 1.0 / dVar13;
        adStack_200[3] = adStack_200[3] * dVar15;
        adStack_200[4] = adStack_200[4] * dVar15;
        adStack_200[5] = adStack_200[5] * dVar15;
      }
      dVar16 = adStack_200[1] * dStack_1c8 + dStack_1d0 * adStack_200[0] +
               dStack_1c0 * adStack_200[2];
      dStack_1d0 = dStack_1d0 - adStack_200[0] * dVar16;
      dStack_1c8 = dStack_1c8 - adStack_200[1] * dVar16;
      dStack_1c0 = dStack_1c0 - adStack_200[2] * dVar16;
      dVar17 = adStack_200[4] * dStack_1c8 + dStack_1d0 * adStack_200[3] +
               dStack_1c0 * adStack_200[5];
      dStack_1d0 = dStack_1d0 - adStack_200[3] * dVar17;
      dStack_1c8 = dStack_1c8 - adStack_200[4] * dVar17;
      dStack_1c0 = dStack_1c0 - adStack_200[5] * dVar17;
      dVar18 = dStack_1c8 * dStack_1c8 + dStack_1d0 * dStack_1d0 + dStack_1c0 * dStack_1c0;
      dVar15 = SQRT(dVar18);
      param_2[2] = dVar15;
      param_2[3] = dVar14 / dVar13;
      if (dVar18 != 0.0) {
        dVar14 = 1.0 / dVar15;
        dStack_1d0 = dStack_1d0 * dVar14;
        dStack_1c8 = dStack_1c8 * dVar14;
        dStack_1c0 = dStack_1c0 * dVar14;
      }
      param_2[4] = dVar16 / dVar15;
      param_2[5] = dVar17 / dVar15;
      if (adStack_200[1] * (-(dStack_1c0 * adStack_200[3]) + dStack_1d0 * adStack_200[5]) +
          (-(dStack_1c8 * adStack_200[5]) + dStack_1c0 * adStack_200[4]) * adStack_200[0] +
          (-(dStack_1d0 * adStack_200[4]) + dStack_1c8 * adStack_200[3]) * adStack_200[2] < 0.0) {
        lVar6 = 0;
        *param_2 = -dVar11;
        param_2[1] = -dVar13;
        param_2[2] = -dVar15;
        do {
          *(double *)((long)adStack_200 + lVar6 + 8) = -*(double *)((long)adStack_200 + lVar6 + 8);
          *(double *)((long)adStack_200 + lVar6) = -*(double *)((long)adStack_200 + lVar6);
          *(double *)((long)adStack_200 + lVar6 + 0x10) =
               -*(double *)((long)adStack_200 + lVar6 + 0x10);
          lVar6 = lVar6 + 0x18;
        } while (lVar6 != 0x48);
      }
      dVar11 = adStack_200[2];
      unaff_d8 = adStack_200[0];
      dVar13 = (double)_asin(-adStack_200[2]);
      param_2[7] = dVar13;
      dVar14 = (double)_cos();
      unaff_d9 = dStack_1c0;
      dVar13 = adStack_200[4];
      if (dVar14 == 0.0) {
        dVar14 = (double)_atan2(-dStack_1d0,adStack_200[4]);
        dVar15 = 0.0;
        unaff_d9 = dStack_1c0;
      }
      else {
        dVar14 = (double)_atan2(adStack_200[5],dStack_1c0);
        dVar15 = (double)_atan2(adStack_200[1],unaff_d8);
        dVar13 = adStack_200[4];
      }
      param_2[6] = dVar14;
      param_2[8] = dVar15;
      dVar14 = unaff_d9 + unaff_d8 + dVar13 + 1.0;
      if (dVar14 <= 0.0001) {
        bVar1 = false;
        bVar2 = true;
        bVar3 = false;
        if (unaff_d9 < unaff_d8) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(unaff_d8) && !NAN(dVar13)) {
            bVar1 = unaff_d8 < dVar13;
            bVar2 = unaff_d8 == dVar13;
            bVar3 = false;
          }
        }
        if (bVar2 || bVar1 != bVar3) {
          if (dVar13 <= unaff_d9) {
            dVar13 = SQRT(((unaff_d9 + 1.0) - unaff_d8) - dVar13);
            dVar13 = dVar13 + dVar13;
            dVar14 = (dVar11 + dStack_1d0) / dVar13;
            dVar15 = (adStack_200[5] + dStack_1c8) / dVar13;
            dVar16 = dVar13 * 0.25;
            dVar11 = adStack_200[3] - adStack_200[1];
          }
          else {
            dVar13 = SQRT(((dVar13 + 1.0) - unaff_d8) - unaff_d9);
            dVar13 = dVar13 + dVar13;
            dVar14 = (adStack_200[1] + adStack_200[3]) / dVar13;
            dVar15 = dVar13 * 0.25;
            dVar16 = (adStack_200[5] + dStack_1c8) / dVar13;
            dVar11 = dVar11 - dStack_1d0;
          }
        }
        else {
          dVar13 = SQRT(((unaff_d8 + 1.0) - dVar13) - unaff_d9);
          dVar13 = dVar13 + dVar13;
          dVar14 = dVar13 * 0.25;
          dVar15 = (adStack_200[1] + adStack_200[3]) / dVar13;
          dVar16 = (dVar11 + dStack_1d0) / dVar13;
          dVar11 = dStack_1c8 - adStack_200[5];
        }
        dVar13 = dVar11 / dVar13;
      }
      else {
        dVar16 = 0.5 / SQRT(dVar14);
        dVar13 = 0.25 / dVar16;
        dVar14 = dVar16 * (dStack_1c8 - adStack_200[5]);
        dVar15 = dVar16 * (dVar11 - dStack_1d0);
        dVar16 = dVar16 * (adStack_200[3] - adStack_200[1]);
      }
      param_2[9] = dVar14;
      param_2[10] = dVar15;
      param_2[0xb] = dVar16;
      param_2[0xc] = dVar13;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return pdVar10;
  }
  ___stack_chk_fail();
  *param_1 = 1.0;
  param_1[2] = 0.0;
  param_1[1] = 0.0;
  param_1[4] = 0.0;
  param_1[3] = 0.0;
  param_1[5] = 1.0;
  param_1[7] = 0.0;
  param_1[6] = 0.0;
  param_1[9] = 0.0;
  param_1[8] = 0.0;
  param_1[10] = 1.0;
  param_1[0xc] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xf] = 1.0;
  dVar11 = pdVar5[0x10];
  param_1[3] = dVar11;
  dVar13 = pdVar5[0x11];
  param_1[7] = dVar13;
  dVar14 = pdVar5[0x12];
  param_1[0xb] = dVar14;
  dVar15 = pdVar5[0x13];
  param_1[0xf] = dVar15;
  dVar16 = pdVar5[0xd];
  dVar17 = pdVar5[0xe];
  dVar18 = pdVar5[0xf];
  param_1[0xc] = dVar16 + dVar17 * 0.0 + dVar18 * 0.0 + 0.0;
  param_1[0xd] = dVar17 + dVar16 * 0.0 + dVar18 * 0.0 + 0.0;
  dVar13 = dVar13 * dVar17;
  param_1[0xe] = dVar18 + dVar17 * 0.0 + dVar16 * 0.0 + 0.0;
  param_1[0xf] = dVar15 + dVar13 + dVar11 * dVar16 + dVar14 * dVar18;
  dStack_2c0 = unaff_d9;
  dStack_2b8 = unaff_d8;
  if ((param_3 & 1) == 0) {
    dVar11 = pdVar5[9];
    dVar13 = pdVar5[10];
    dVar14 = pdVar5[0xb];
    dVar15 = pdVar5[0xc];
    dStack_340 = (dVar13 * dVar13 + dVar14 * dVar14) * -2.0 + 1.0;
    dStack_338 = dVar11 * dVar13 - dVar14 * dVar15;
    dStack_338 = dStack_338 + dStack_338;
    dStack_330 = dVar11 * dVar14 + dVar13 * dVar15;
    dStack_330 = dStack_330 + dStack_330;
    dStack_320 = dVar11 * dVar13 + dVar14 * dVar15;
    dStack_320 = dStack_320 + dStack_320;
    dStack_318 = (dVar11 * dVar11 + dVar14 * dVar14) * -2.0 + 1.0;
    dStack_310 = dVar13 * dVar14 - dVar11 * dVar15;
    dStack_310 = dStack_310 + dStack_310;
    dStack_300 = dVar11 * dVar14 - dVar13 * dVar15;
    dStack_300 = dStack_300 + dStack_300;
    dStack_2f8 = dVar13 * dVar14 + dVar11 * dVar15;
    dStack_2f8 = dStack_2f8 + dStack_2f8;
    dStack_2f0 = (dVar11 * dVar11 + dVar13 * dVar13) * -2.0 + 1.0;
  }
  else {
    dStack_310 = (double)___sincos_stret((((pdVar5[6] * 180.0) / 3.141592653589793) *
                                         3.141592653589793) / 180.0);
    uStack_308 = 0;
    dStack_300 = 0.0;
    dStack_340 = 1.0;
    dStack_338 = 0.0;
    dStack_2f8 = -dStack_310;
    uStack_328 = 0;
    dStack_320 = 0.0;
    dStack_330 = 0.0;
    uStack_2e0 = 0;
    uStack_2e8 = 0;
    uStack_2d0 = 0;
    uStack_2d8 = 0;
    uStack_2c8 = 0x3ff0000000000000;
    dStack_318 = dVar13;
    dStack_2f0 = dVar13;
    FUN_10859374c(param_1,&dStack_340);
    dStack_300 = (double)___sincos_stret((((pdVar5[7] * 180.0) / 3.141592653589793) *
                                         3.141592653589793) / 180.0);
    dStack_338 = 0.0;
    dStack_320 = 0.0;
    uStack_328 = 0;
    uStack_308 = 0;
    dStack_310 = 0.0;
    dStack_2f8 = 0.0;
    dStack_330 = -dStack_300;
    dStack_318 = 1.0;
    uStack_2e0 = 0;
    uStack_2e8 = 0;
    uStack_2d0 = 0;
    uStack_2d8 = 0;
    uStack_2c8 = 0x3ff0000000000000;
    dStack_340 = dVar13;
    dStack_2f0 = dVar13;
    FUN_10859374c(param_1,&dStack_340);
    dStack_338 = (double)___sincos_stret((((pdVar5[8] * 180.0) / 3.141592653589793) *
                                         3.141592653589793) / 180.0);
    dStack_330 = 0.0;
    dStack_310 = 0.0;
    dStack_320 = -dStack_338;
    dStack_300 = 0.0;
    dStack_2f8 = 0.0;
    dStack_2f0 = 1.0;
    dStack_340 = dVar13;
    dStack_318 = dVar13;
  }
  uStack_2d0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2e8 = 0;
  uStack_308 = 0;
  uStack_328 = 0;
  uStack_2c8 = 0x3ff0000000000000;
  pdVar4 = param_1;
  FUN_10859374c(param_1,&dStack_340);
  dStack_2f8 = pdVar5[5];
  if (dStack_2f8 != 0.0) {
    dStack_340 = 1.0;
    dStack_330 = 0.0;
    dStack_338 = 0.0;
    dStack_320 = 0.0;
    uStack_328 = 0;
    dStack_318 = 1.0;
    dStack_310 = 0.0;
    uStack_308 = 0;
    dStack_300 = 0.0;
    dStack_2f0 = 1.0;
    uStack_2e0 = 0;
    uStack_2e8 = 0;
    uStack_2d0 = 0;
    uStack_2d8 = 0;
    uStack_2c8 = 0x3ff0000000000000;
    pdVar4 = param_1;
    FUN_10859374c(param_1,&dStack_340);
  }
  dStack_300 = pdVar5[4];
  if (dStack_300 != 0.0) {
    dStack_340 = 1.0;
    dStack_330 = 0.0;
    dStack_338 = 0.0;
    dStack_320 = 0.0;
    uStack_328 = 0;
    dStack_318 = 1.0;
    uStack_308 = 0;
    dStack_310 = 0.0;
    dStack_2f8 = 0.0;
    dStack_2f0 = 1.0;
    uStack_2e0 = 0;
    uStack_2e8 = 0;
    uStack_2d0 = 0;
    uStack_2d8 = 0;
    uStack_2c8 = 0x3ff0000000000000;
    pdVar4 = param_1;
    FUN_10859374c(param_1,&dStack_340);
  }
  dStack_320 = pdVar5[3];
  if (dStack_320 != 0.0) {
    dStack_340 = 1.0;
    dStack_338 = 0.0;
    dStack_330 = 0.0;
    uStack_328 = 0;
    dStack_318 = 1.0;
    uStack_308 = 0;
    dStack_310 = 0.0;
    dStack_2f8 = 0.0;
    dStack_300 = 0.0;
    dStack_2f0 = 1.0;
    uStack_2e0 = 0;
    uStack_2e8 = 0;
    uStack_2d0 = 0;
    uStack_2d8 = 0;
    uStack_2c8 = 0x3ff0000000000000;
    pdVar4 = param_1;
    FUN_10859374c(param_1,&dStack_340);
  }
  dVar11 = *pdVar5;
  dVar13 = pdVar5[1];
  dVar14 = pdVar5[2];
  param_1[1] = param_1[1] * dVar11;
  *param_1 = *param_1 * dVar11;
  param_1[3] = param_1[3] * dVar11;
  param_1[2] = param_1[2] * dVar11;
  param_1[5] = param_1[5] * dVar13;
  param_1[4] = param_1[4] * dVar13;
  param_1[7] = param_1[7] * dVar13;
  param_1[6] = param_1[6] * dVar13;
  param_1[9] = param_1[9] * dVar14;
  param_1[8] = param_1[8] * dVar14;
  param_1[0xb] = param_1[0xb] * dVar14;
  param_1[10] = param_1[10] * dVar14;
  return pdVar4;
}



/* Entry: 1085941e8; end: 108594577;  */

void FUN_1085941e8(double *param_1,double *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  undefined8 uStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  *param_1 = 1.0;
  param_1[2] = 0.0;
  param_1[1] = 0.0;
  param_1[4] = 0.0;
  param_1[3] = 0.0;
  param_1[5] = 1.0;
  param_1[7] = 0.0;
  param_1[6] = 0.0;
  param_1[9] = 0.0;
  param_1[8] = 0.0;
  param_1[10] = 1.0;
  param_1[0xc] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xf] = 1.0;
  dVar1 = param_2[0x10];
  param_1[3] = dVar1;
  dVar2 = param_2[0x11];
  param_1[7] = dVar2;
  dVar3 = param_2[0x12];
  param_1[0xb] = dVar3;
  dVar4 = param_2[0x13];
  param_1[0xf] = dVar4;
  dVar5 = param_2[0xd];
  dVar6 = param_2[0xe];
  dVar7 = param_2[0xf];
  param_1[0xc] = dVar5 + dVar6 * 0.0 + dVar7 * 0.0 + 0.0;
  param_1[0xd] = dVar6 + dVar5 * 0.0 + dVar7 * 0.0 + 0.0;
  dVar2 = dVar2 * dVar6;
  param_1[0xe] = dVar7 + dVar6 * 0.0 + dVar5 * 0.0 + 0.0;
  param_1[0xf] = dVar4 + dVar2 + dVar1 * dVar5 + dVar3 * dVar7;
  if ((param_3 & 1) == 0) {
    dVar1 = param_2[9];
    dVar2 = param_2[10];
    dVar3 = param_2[0xb];
    dVar4 = param_2[0xc];
    dStack_c0 = (dVar2 * dVar2 + dVar3 * dVar3) * -2.0 + 1.0;
    dStack_b8 = dVar1 * dVar2 - dVar3 * dVar4;
    dStack_b8 = dStack_b8 + dStack_b8;
    dStack_b0 = dVar1 * dVar3 + dVar2 * dVar4;
    dStack_b0 = dStack_b0 + dStack_b0;
    dStack_a0 = dVar1 * dVar2 + dVar3 * dVar4;
    dStack_a0 = dStack_a0 + dStack_a0;
    dStack_98 = (dVar1 * dVar1 + dVar3 * dVar3) * -2.0 + 1.0;
    dStack_90 = dVar2 * dVar3 - dVar1 * dVar4;
    dStack_90 = dStack_90 + dStack_90;
    dStack_80 = dVar1 * dVar3 - dVar2 * dVar4;
    dStack_80 = dStack_80 + dStack_80;
    dStack_78 = dVar2 * dVar3 + dVar1 * dVar4;
    dStack_78 = dStack_78 + dStack_78;
    dStack_70 = (dVar1 * dVar1 + dVar2 * dVar2) * -2.0 + 1.0;
  }
  else {
    dVar1 = (((param_2[6] * 180.0) / 3.141592653589793) * 3.141592653589793) / 180.0;
    ___sincos_stret();
    uStack_88 = 0;
    dStack_80 = 0.0;
    dStack_c0 = 1.0;
    dStack_b8 = 0.0;
    dStack_78 = -dVar1;
    uStack_a8 = 0;
    dStack_a0 = 0.0;
    dStack_b0 = 0.0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_48 = 0x3ff0000000000000;
    dStack_98 = dVar2;
    dStack_90 = dVar1;
    dStack_70 = dVar2;
    FUN_10859374c(param_1,&dStack_c0);
    dVar1 = (((param_2[7] * 180.0) / 3.141592653589793) * 3.141592653589793) / 180.0;
    ___sincos_stret();
    dStack_b8 = 0.0;
    dStack_a0 = 0.0;
    uStack_a8 = 0;
    uStack_88 = 0;
    dStack_90 = 0.0;
    dStack_78 = 0.0;
    dStack_b0 = -dVar1;
    dStack_98 = 1.0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_48 = 0x3ff0000000000000;
    dStack_c0 = dVar2;
    dStack_80 = dVar1;
    dStack_70 = dVar2;
    FUN_10859374c(param_1,&dStack_c0);
    dVar1 = (((param_2[8] * 180.0) / 3.141592653589793) * 3.141592653589793) / 180.0;
    ___sincos_stret();
    dStack_b0 = 0.0;
    dStack_90 = 0.0;
    dStack_a0 = -dVar1;
    dStack_80 = 0.0;
    dStack_78 = 0.0;
    dStack_70 = 1.0;
    dStack_c0 = dVar2;
    dStack_b8 = dVar1;
    dStack_98 = dVar2;
  }
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_88 = 0;
  uStack_a8 = 0;
  uStack_48 = 0x3ff0000000000000;
  FUN_10859374c(param_1,&dStack_c0);
  dStack_78 = param_2[5];
  if (dStack_78 != 0.0) {
    dStack_c0 = 1.0;
    dStack_b0 = 0.0;
    dStack_b8 = 0.0;
    dStack_a0 = 0.0;
    uStack_a8 = 0;
    dStack_98 = 1.0;
    dStack_90 = 0.0;
    uStack_88 = 0;
    dStack_80 = 0.0;
    dStack_70 = 1.0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_48 = 0x3ff0000000000000;
    FUN_10859374c(param_1,&dStack_c0);
  }
  dStack_80 = param_2[4];
  if (dStack_80 != 0.0) {
    dStack_c0 = 1.0;
    dStack_b0 = 0.0;
    dStack_b8 = 0.0;
    dStack_a0 = 0.0;
    uStack_a8 = 0;
    dStack_98 = 1.0;
    uStack_88 = 0;
    dStack_90 = 0.0;
    dStack_78 = 0.0;
    dStack_70 = 1.0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_48 = 0x3ff0000000000000;
    FUN_10859374c(param_1,&dStack_c0);
  }
  dStack_a0 = param_2[3];
  if (dStack_a0 != 0.0) {
    dStack_c0 = 1.0;
    dStack_b8 = 0.0;
    dStack_b0 = 0.0;
    uStack_a8 = 0;
    dStack_98 = 1.0;
    uStack_88 = 0;
    dStack_90 = 0.0;
    dStack_78 = 0.0;
    dStack_80 = 0.0;
    dStack_70 = 1.0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_48 = 0x3ff0000000000000;
    FUN_10859374c(param_1,&dStack_c0);
  }
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  param_1[1] = param_1[1] * dVar1;
  *param_1 = *param_1 * dVar1;
  param_1[3] = param_1[3] * dVar1;
  param_1[2] = param_1[2] * dVar1;
  param_1[5] = param_1[5] * dVar2;
  param_1[4] = param_1[4] * dVar2;
  param_1[7] = param_1[7] * dVar2;
  param_1[6] = param_1[6] * dVar2;
  param_1[9] = param_1[9] * dVar3;
  param_1[8] = param_1[8] * dVar3;
  param_1[0xb] = param_1[0xb] * dVar3;
  param_1[10] = param_1[10] * dVar3;
  return;
}



/* Entry: 108594578; end: 10859459f;  */

void FUN_108594578(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010bf13d40();
  if (param_3 == (undefined8 *)0x0) {
    param_4[1] = 0;
    *param_4 = 0;
    param_4[3] = 0;
    param_4[2] = 0;
  }
  else {
    puVar1 = param_3;
    _CGColorGetComponents();
    _CGColorGetNumberOfComponents();
    if (param_3 == (undefined8 *)0x2) {
      uVar3 = *puVar1;
      param_4[1] = uVar3;
      param_4[2] = uVar3;
      *param_4 = uVar3;
      uVar3 = puVar1[1];
    }
    else {
      if (param_3 != (undefined8 *)0x4) {
        puVar2 = PTR__OBJC_CLASS___CIColor_1126c9738;
        func_0x00010bf41520(PTR__OBJC_CLASS___CIColor_1126c9738);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1248a0();
        *param_4 = param_1;
        func_0x00010bfce1c0(puVar2);
        param_4[1] = param_1;
        func_0x00010bf1e520(puVar2);
        param_4[2] = param_1;
        func_0x00010bf01b40(puVar2);
        param_4[3] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar2);
        return;
      }
      *param_4 = *puVar1;
      param_4[1] = puVar1[1];
      param_4[2] = puVar1[2];
      uVar3 = puVar1[3];
    }
    param_4[3] = uVar3;
  }
  return;
}



/* Entry: 1085945a0; end: 108594603;  */

void FUN_1085945a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  _CGColorSpaceCreateDeviceRGB();
  uVar2 = uVar1;
  _CGColorCreate();
  _CGColorSpaceRelease(uVar1);
  func_0x00010c16e440(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbab74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGColorRelease_1103470a8)(uVar2);
  return;
}



/* Entry: 108594604; end: 10859462f;  */

void FUN_108594604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  func_0x00010bf20c00(param_6);
  *param_7 = param_1;
  param_7[1] = param_2;
  param_7[2] = param_3;
  param_7[3] = param_4;
  return;
}



/* Entry: 108594630; end: 10859463f;  */

void FUN_108594630(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1739f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*param_3,param_3[1],param_3[2],param_3[3],param_2,PTR_s_setBounds__11263a898);
  return;
}



/* Entry: 108594640; end: 108594667;  */

void FUN_108594640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  func_0x00010bf525a0(param_3);
  *param_4 = param_1;
  return;
}



/* Entry: 108594668; end: 108594673;  */

void FUN_108594668(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1842f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*param_3,param_2,PTR_s_setCornerRadius__11263ead8);
  return;
}



/* Entry: 108594674; end: 10859469b;  */

void FUN_108594674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  func_0x00010bf1fc80(param_3);
  *param_4 = param_1;
  return;
}



/* Entry: 10859469c; end: 1085946a7;  */

void FUN_10859469c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1733b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*param_3,param_2,PTR_s_setBorderWidth__11263a708);
  return;
}



/* Entry: 1085946a8; end: 1085946cf;  */

void FUN_1085946a8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010bf1fb20();
  if (param_3 == (undefined8 *)0x0) {
    param_4[1] = 0;
    *param_4 = 0;
    param_4[3] = 0;
    param_4[2] = 0;
  }
  else {
    puVar1 = param_3;
    _CGColorGetComponents();
    _CGColorGetNumberOfComponents();
    if (param_3 == (undefined8 *)0x2) {
      uVar3 = *puVar1;
      param_4[1] = uVar3;
      param_4[2] = uVar3;
      *param_4 = uVar3;
      uVar3 = puVar1[1];
    }
    else {
      if (param_3 != (undefined8 *)0x4) {
        puVar2 = PTR__OBJC_CLASS___CIColor_1126c9738;
        func_0x00010bf41520(PTR__OBJC_CLASS___CIColor_1126c9738);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1248a0();
        *param_4 = param_1;
        func_0x00010bfce1c0(puVar2);
        param_4[1] = param_1;
        func_0x00010bf1e520(puVar2);
        param_4[2] = param_1;
        func_0x00010bf01b40(puVar2);
        param_4[3] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar2);
        return;
      }
      *param_4 = *puVar1;
      param_4[1] = puVar1[1];
      param_4[2] = puVar1[2];
      uVar3 = puVar1[3];
    }
    param_4[3] = uVar3;
  }
  return;
}



/* Entry: 1085946d0; end: 108594733;  */

void FUN_1085946d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  _CGColorSpaceCreateDeviceRGB();
  uVar2 = uVar1;
  _CGColorCreate();
  _CGColorSpaceRelease(uVar1);
  func_0x00010c173280(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbab74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGColorRelease_1103470a8)(uVar2);
  return;
}



/* Entry: 108594734; end: 10859475b;  */

void FUN_108594734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  func_0x00010c104260(param_4);
  *param_5 = param_1;
  param_5[1] = param_2;
  return;
}



/* Entry: 10859475c; end: 108594767;  */

void FUN_10859475c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dee90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*param_3,param_3[1],param_2,PTR_s_setPosition__1126555c8);
  return;
}



/* Entry: 108594768; end: 108594863;  */

void FUN_108594768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  func_0x00010c104260(param_3);
  *param_4 = param_1;
  return;
}



/* Entry: 108594864; end: 108594873;  */

void FUN_108594864(undefined8 param_1,undefined8 param_2,double *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d4bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)((float)*param_3,param_2,PTR_s_setOpacity__112652d18);
  return;
}



/* Entry: 108594874; end: 10859489b;  */

void FUN_108594874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_10859e498(param_3);
  *param_4 = param_1;
  return;
}



/* Entry: 10859489c; end: 1085948a7;  */

void FUN_10859489c(undefined8 param_1,long param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_1e0 [128];
  double dStack_160;
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
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  dVar1 = *param_3;
  _objc_retain();
  dVar2 = 1e-06;
  if (dVar1 != 0.0) {
    dVar2 = dVar1;
  }
  if (param_2 == 0) {
    dStack_160 = 0.0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&dStack_160,param_2);
  }
  dStack_c0 = dStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&dStack_c0,&dStack_160);
  dStack_160 = dVar2;
  FUN_1085941e8(&dStack_c0,&dStack_160,0);
  func_0x0001085936e8(auStack_1e0,&dStack_c0);
  func_0x00010c219960(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1085948a8; end: 1085948cf;  */

void FUN_1085948a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_10859e650(param_3);
  *param_4 = param_1;
  return;
}



/* Entry: 1085948d0; end: 1085948db;  */

void FUN_1085948d0(undefined8 param_1,long param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_1e0 [128];
  undefined8 uStack_160;
  double dStack_158;
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
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  dVar1 = *param_3;
  _objc_retain();
  dVar2 = 1e-06;
  if (dVar1 != 0.0) {
    dVar2 = dVar1;
  }
  if (param_2 == 0) {
    uStack_160 = 0;
    dStack_158 = 0.0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_2);
  }
  uStack_c0 = uStack_160;
  uStack_b8 = dStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  dStack_158 = dVar2;
  FUN_1085941e8(&uStack_c0,&uStack_160,0);
  func_0x0001085936e8(auStack_1e0,&uStack_c0);
  func_0x00010c219960(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1085948dc; end: 108594903;  */

void FUN_1085948dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  FUN_10859e808(param_4);
  *param_5 = param_1;
  param_5[1] = param_2;
  return;
}



/* Entry: 108594904; end: 10859490f;  */

void FUN_108594904(undefined8 param_1,long param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_1e0 [128];
  double dStack_160;
  double dStack_158;
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
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  dVar2 = *param_3;
  dVar3 = param_3[1];
  _objc_retain();
  dVar4 = 1e-06;
  dVar1 = 1e-06;
  if (dVar2 != 0.0 || dVar3 != 0.0) {
    dVar4 = dVar2;
    dVar1 = dVar3;
  }
  if (param_2 == 0) {
    dStack_160 = 0.0;
    dStack_158 = 0.0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&dStack_160,param_2);
  }
  dStack_c0 = dStack_160;
  uStack_b8 = dStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&dStack_c0,&dStack_160);
  dStack_160 = dVar4;
  dStack_158 = dVar1;
  FUN_1085941e8(&dStack_c0,&dStack_160,0);
  func_0x0001085936e8(auStack_1e0,&dStack_c0);
  func_0x00010c219960(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 108594910; end: 108594937;  */

void FUN_108594910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  FUN_10859f57c(param_4);
  *param_5 = param_1;
  param_5[1] = param_2;
  return;
}



/* Entry: 108594938; end: 108594943;  */

void FUN_108594938(undefined8 param_1,long param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_1e0 [128];
  double dStack_160;
  double dStack_158;
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
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  dVar2 = *param_3;
  dVar3 = param_3[1];
  _objc_retain();
  dVar4 = 1e-06;
  dVar1 = 1e-06;
  if (dVar2 != 0.0 || dVar3 != 0.0) {
    dVar4 = dVar2;
    dVar1 = dVar3;
  }
  if (param_2 == 0) {
    dStack_160 = 0.0;
    dStack_158 = 0.0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c25ec20(&dStack_160,param_2);
  }
  dStack_c0 = dStack_160;
  uStack_b8 = dStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&dStack_c0,&dStack_160);
  dStack_160 = dVar4;
  dStack_158 = dVar1;
  FUN_1085941e8(&dStack_c0,&dStack_160,0);
  func_0x0001085936e8(auStack_1e0,&dStack_c0);
  func_0x00010c20f020(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 108594944; end: 10859496b;  */

void FUN_108594944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_10859e9dc(param_3);
  *param_4 = param_1;
  return;
}



/* Entry: 10859496c; end: 108594977;  */

void FUN_10859496c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_1e0 [128];
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
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *param_3;
  _objc_retain();
  if (param_2 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_2);
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  uStack_f8 = uVar1;
  FUN_1085941e8(&uStack_c0,&uStack_160,0);
  func_0x0001085936e8(auStack_1e0,&uStack_c0);
  func_0x00010c219960(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 108594978; end: 10859499f;  */

void FUN_108594978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_10859eb84(param_3);
  *param_4 = param_1;
  return;
}



/* Entry: 1085949a0; end: 1085949ab;  */

void FUN_1085949a0(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_1e0 [128];
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
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *param_3;
  _objc_retain();
  if (param_2 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_2);
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  uStack_f0 = uVar1;
  FUN_1085941e8(&uStack_c0,&uStack_160,0);
  func_0x0001085936e8(auStack_1e0,&uStack_c0);
  func_0x00010c219960(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1085949ac; end: 1085949d3;  */

void FUN_1085949ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_10859ed2c(param_3);
  *param_4 = param_1;
  return;
}



/* Entry: 1085949d4; end: 1085949df;  */

void FUN_1085949d4(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_1e0 [128];
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
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *param_3;
  _objc_retain();
  if (param_2 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_2);
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  uStack_e8 = uVar1;
  FUN_1085941e8(&uStack_c0,&uStack_160,0);
  func_0x0001085936e8(auStack_1e0,&uStack_c0);
  func_0x00010c219960(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1085949e0; end: 108594a07;  */

void FUN_1085949e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  FUN_10859eed4(param_4);
  *param_5 = param_1;
  param_5[1] = param_2;
  return;
}



/* Entry: 108594a08; end: 108594a13;  */

void FUN_108594a08(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_1e0 [128];
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
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  _objc_retain();
  if (param_2 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_2);
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  uStack_f8 = uVar1;
  uStack_f0 = uVar2;
  FUN_1085941e8(&uStack_c0,&uStack_160,0);
  func_0x0001085936e8(auStack_1e0,&uStack_c0);
  func_0x00010c219960(param_2);
  _objc_release(param_2);
  return;
}


