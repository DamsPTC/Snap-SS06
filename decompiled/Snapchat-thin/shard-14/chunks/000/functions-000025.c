/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af2fac8; end: 10af2fb63; -[SCPercMLModelAPI hash] */

void FUN_10af2fac8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_112702488;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af2fb64; end: 10af2fba7; -[SCPercMLModelAPI internalInit] */

void FUN_10af2fb64(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112702488;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af2fba8; end: 10af2fca7; -[SCPercMLModelAPI isEqual:] */

long FUN_10af2fba8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af2fc80:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af2fc8c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10af2fc8c;
              }
              goto LAB_10af2fc80;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af2fc8c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af2fca8; end: 10af2fdbb; -[SCPercMLModelAPI matchImageClassificationModel:imageEmbeddingModel:barcodeDetectionModel:snapcodeDetectionModel:faceEmbeddingModel:] */

void FUN_10af2fca8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_10af2fd84;
      lVar2 = 0x10;
      lVar1 = param_3;
    }
    else {
      if ((lVar1 != 1) || (param_4 == 0)) goto LAB_10af2fd84;
      lVar2 = 0x18;
      lVar1 = param_4;
    }
  }
  else if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_10af2fd84;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 3) {
    if (param_6 == 0) goto LAB_10af2fd84;
    lVar2 = 0x28;
    lVar1 = param_6;
  }
  else {
    if ((lVar1 != 4) || (param_7 == 0)) goto LAB_10af2fd84;
    lVar2 = 0x30;
    lVar1 = param_7;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10af2fd84:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af2fdbc; end: 10af2fe0f; -[SCPercMLModelAPI .cxx_destruct] */

void FUN_10af2fdbc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af2fe10; end: 10af2febb; -[SCPercMLSnapcodeIdentifier initWithVersion:uuid:] */

undefined1 *
FUN_10af2fe10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702490;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af2febc; end: 10af2fedf; -[SCPercMLSnapcodeIdentifier copyWithZone:] */

undefined8 FUN_10af2febc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af2fee0; end: 10af2ff53; -[SCPercMLSnapcodeIdentifier hash] */

undefined8 * FUN_10af2fee0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af2ffd4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af2ffe0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10af2ffe0;
        }
        goto LAB_10af2ffd4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af2ffe0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af2ff54; end: 10af2fffb; -[SCPercMLSnapcodeIdentifier isEqual:] */

long FUN_10af2ff54(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af2ffd4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af2ffe0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af2ffe0;
        }
        goto LAB_10af2ffd4;
      }
    }
    lVar3 = 0;
  }
LAB_10af2ffe0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af2fffc; end: 10af30003; -[SCPercMLSnapcodeIdentifier version] */

undefined8 FUN_10af2fffc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af30004; end: 10af3000b; -[SCPercMLSnapcodeIdentifier uuid] */

undefined8 FUN_10af30004(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af3000c; end: 10af3003b; -[SCPercMLSnapcodeIdentifier .cxx_destruct] */

void FUN_10af3000c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3003c; end: 10af300e7; -[SCPercMLEmbeddingWithScores initWithScores:embedding:] */

undefined1 *
FUN_10af3003c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702498;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af300e8; end: 10af3010b; -[SCPercMLEmbeddingWithScores copyWithZone:] */

undefined8 FUN_10af300e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3010c; end: 10af3017f; -[SCPercMLEmbeddingWithScores hash] */

undefined8 * FUN_10af3010c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af30200:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af3020c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10af3020c;
        }
        goto LAB_10af30200;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af3020c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af30180; end: 10af30227; -[SCPercMLEmbeddingWithScores isEqual:] */

long FUN_10af30180(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af30200:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3020c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af3020c;
        }
        goto LAB_10af30200;
      }
    }
    lVar3 = 0;
  }
LAB_10af3020c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af30228; end: 10af3022f; -[SCPercMLEmbeddingWithScores scores] */

undefined8 FUN_10af30228(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af30230; end: 10af30237; -[SCPercMLEmbeddingWithScores embedding] */

undefined8 FUN_10af30230(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af30238; end: 10af30267; -[SCPercMLEmbeddingWithScores .cxx_destruct] */

void FUN_10af30238(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af30268; end: 10af30347; -[SCPercMLCoreMLProcessingConfig initWithInputName:outputName:preProcessing:postProcessing:useYChannelInference:pixelBufferPoolSize:useVImageScaleTempBuffer:] */

undefined1 *
FUN_10af30268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1127024a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = param_9;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af30348; end: 10af3036b; -[SCPercMLCoreMLProcessingConfig copyWithZone:] */

undefined8 FUN_10af30348(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3036c; end: 10af303fb; -[SCPercMLCoreMLProcessingConfig hash] */

undefined8 * FUN_10af3036c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_58 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10af304cc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af304d8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20) &&
          (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))) &&
         (*(char *)((long)puVar3 + 8) == param_3[8])))) &&
       ((*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30) &&
        (*(char *)((long)puVar3 + 9) == param_3[9])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10af304d8;
        }
        goto LAB_10af304cc;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10af304d8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10af303fc; end: 10af304f3; -[SCPercMLCoreMLProcessingConfig isEqual:] */

long FUN_10af303fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af304cc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af304d8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
          (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) &&
       ((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10af304d8;
        }
        goto LAB_10af304cc;
      }
    }
    lVar3 = 0;
  }
LAB_10af304d8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af304f4; end: 10af304fb; -[SCPercMLCoreMLProcessingConfig inputName] */

undefined8 FUN_10af304f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af304fc; end: 10af30503; -[SCPercMLCoreMLProcessingConfig outputName] */

undefined8 FUN_10af304fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af30504; end: 10af3050b; -[SCPercMLCoreMLProcessingConfig preProcessing] */

undefined8 FUN_10af30504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af3050c; end: 10af30513; -[SCPercMLCoreMLProcessingConfig postProcessing] */

undefined8 FUN_10af3050c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af30514; end: 10af3051b; -[SCPercMLCoreMLProcessingConfig useYChannelInference] */

undefined1 FUN_10af30514(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af3051c; end: 10af30523; -[SCPercMLCoreMLProcessingConfig pixelBufferPoolSize] */

undefined8 FUN_10af3051c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af30524; end: 10af3052b; -[SCPercMLCoreMLProcessingConfig useVImageScaleTempBuffer] */

undefined1 FUN_10af30524(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10af3052c; end: 10af3055b; -[SCPercMLCoreMLProcessingConfig .cxx_destruct] */

void FUN_10af3052c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af3055c; end: 10af305bb; -[SCPercMLBoundingBox initWithX:y:width:height:] */

void FUN_10af3055c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127024a8;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_1;
    *(undefined4 *)((long)puVar1 + 0xc) = param_2;
    *(undefined4 *)((long)puVar1 + 0x10) = param_3;
    *(undefined4 *)((long)puVar1 + 0x14) = param_4;
  }
  return;
}



/* Entry: 10af305bc; end: 10af305df; -[SCPercMLBoundingBox copyWithZone:] */

undefined8 FUN_10af305bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af305e0; end: 10af306c7; -[SCPercMLBoundingBox hash] */

long * FUN_10af305e0(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = (ulong)*(uint *)(param_1 + 8) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  lStack_38 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  uVar4 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  lStack_30 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  uVar4 = (ulong)*(uint *)(param_1 + 0x10) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  lStack_28 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  uVar4 = (ulong)*(uint *)(param_1 + 0x14) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  lStack_20 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  plVar2 = &lStack_38;
  func_0x000107c3191c(plVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 == param_3) {
    plVar5 = (long *)0x1;
  }
  else {
    plVar5 = (long *)0x0;
    if ((plVar2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      plVar5 = plVar2;
      _objc_opt_class(plVar2);
      plVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,plVar5);
      if (((ulong)plVar3 & 1) != 0) {
        fVar7 = ABS(*(float *)(plVar2 + 1) - *(float *)(param_3 + 1));
        fVar6 = ABS(*(float *)(plVar2 + 1) + *(float *)(param_3 + 1)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar7) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar6))) {
          bVar1 = fVar7 < fVar6;
        }
        if (bVar1) {
          fVar7 = ABS(*(float *)((long)plVar2 + 0xc) - *(float *)((long)param_3 + 0xc));
          fVar6 = ABS(*(float *)((long)plVar2 + 0xc) + *(float *)((long)param_3 + 0xc)) *
                  1.1920929e-07;
          bVar1 = true;
          if ((1.1754944e-38 <= fVar7) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar6))) {
            bVar1 = fVar7 < fVar6;
          }
          if (bVar1) {
            fVar7 = ABS(*(float *)(plVar2 + 2) - *(float *)(param_3 + 2));
            fVar6 = ABS(*(float *)(plVar2 + 2) + *(float *)(param_3 + 2)) * 1.1920929e-07;
            bVar1 = true;
            if ((1.1754944e-38 <= fVar7) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar6))) {
              bVar1 = fVar7 < fVar6;
            }
            if (bVar1) {
              fVar6 = ABS(*(float *)((long)plVar2 + 0x14) + *(float *)((long)param_3 + 0x14)) *
                      1.1920929e-07;
              if (fVar6 <= 1.1754944e-38) {
                fVar6 = 1.1754944e-38;
              }
              plVar5 = (long *)(ulong)(ABS(*(float *)((long)plVar2 + 0x14) -
                                           *(float *)((long)param_3 + 0x14)) < fVar6);
              goto LAB_10af307d8;
            }
          }
        }
      }
      plVar5 = (long *)0x0;
    }
  }
LAB_10af307d8:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10af306c8; end: 10af307f3; -[SCPercMLBoundingBox isEqual:] */

bool FUN_10af306c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
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
      if ((uVar3 & 1) != 0) {
        fVar5 = ABS(*(float *)(param_1 + 8) - *(float *)(param_3 + 8));
        fVar4 = ABS(*(float *)(param_1 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar5) && (bVar1 = false, !NAN(fVar5) && !NAN(fVar4))) {
          bVar1 = fVar5 < fVar4;
        }
        if (bVar1) {
          fVar5 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
          fVar4 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
          bVar1 = true;
          if ((1.1754944e-38 <= fVar5) && (bVar1 = false, !NAN(fVar5) && !NAN(fVar4))) {
            bVar1 = fVar5 < fVar4;
          }
          if (bVar1) {
            fVar5 = ABS(*(float *)(param_1 + 0x10) - *(float *)(param_3 + 0x10));
            fVar4 = ABS(*(float *)(param_1 + 0x10) + *(float *)(param_3 + 0x10)) * 1.1920929e-07;
            bVar1 = true;
            if ((1.1754944e-38 <= fVar5) && (bVar1 = false, !NAN(fVar5) && !NAN(fVar4))) {
              bVar1 = fVar5 < fVar4;
            }
            if (bVar1) {
              fVar4 = ABS(*(float *)(param_1 + 0x14) + *(float *)(param_3 + 0x14)) * 1.1920929e-07;
              if (fVar4 <= 1.1754944e-38) {
                fVar4 = 1.1754944e-38;
              }
              bVar1 = ABS(*(float *)(param_1 + 0x14) - *(float *)(param_3 + 0x14)) < fVar4;
              goto LAB_10af307d8;
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_10af307d8:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10af307f4; end: 10af307fb; -[SCPercMLBoundingBox x] */

undefined4 FUN_10af307f4(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10af307fc; end: 10af30803; -[SCPercMLBoundingBox y] */

undefined4 FUN_10af307fc(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10af30804; end: 10af3080b; -[SCPercMLBoundingBox width] */

undefined4 FUN_10af30804(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10af3080c; end: 10af30813; -[SCPercMLBoundingBox height] */

undefined4 FUN_10af3080c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10af30814; end: 10af3089b; -[SCPercMLFaceEmbeddingResult initWithConfidence:embedding:] */

undefined1 *
FUN_10af30814(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127024b0;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3089c; end: 10af308bf; -[SCPercMLFaceEmbeddingResult copyWithZone:] */

undefined8 FUN_10af3089c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af308c0; end: 10af3094b; -[SCPercMLFaceEmbeddingResult hash] */

long * FUN_10af308c0(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = (ulong)*(uint *)(param_1 + 8) * 0x200000 - 1;
  uVar5 = (uVar5 ^ uVar5 >> 0x18) * 0x109;
  uVar5 = (uVar5 ^ uVar5 >> 0xe) * 0x15;
  lStack_28 = (uVar5 ^ uVar5 >> 0x1c) * 0x80000001;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000107c3191c(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_10af309e4:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10af309f0;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if (((ulong)plVar4 & 1) != 0) {
      fVar8 = ABS(*(float *)(plVar3 + 1) - *(float *)(param_3 + 1));
      fVar7 = ABS(*(float *)(plVar3 + 1) + *(float *)(param_3 + 1)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar8) && (bVar1 = false, !NAN(fVar8) && !NAN(fVar7))) {
        bVar1 = fVar8 < fVar7;
      }
      if (bVar1) {
        plVar6 = (long *)plVar3[2];
        if (plVar6 != (long *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10af309f0;
        }
        goto LAB_10af309e4;
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_10af309f0:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 10af3094c; end: 10af30a0b; -[SCPercMLFaceEmbeddingResult isEqual:] */

long FUN_10af3094c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af309e4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af309f0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      fVar6 = ABS(*(float *)(param_1 + 8) - *(float *)(param_3 + 8));
      fVar5 = ABS(*(float *)(param_1 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
        bVar1 = fVar6 < fVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af309f0;
        }
        goto LAB_10af309e4;
      }
    }
    lVar4 = 0;
  }
LAB_10af309f0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10af30a0c; end: 10af30a13; -[SCPercMLFaceEmbeddingResult confidence] */

undefined4 FUN_10af30a0c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10af30a14; end: 10af30a1b; -[SCPercMLFaceEmbeddingResult embedding] */

undefined8 FUN_10af30a14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af30a1c; end: 10af30a27; -[SCPercMLFaceEmbeddingResult .cxx_destruct] */

void FUN_10af30a1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af30a28; end: 10af30a2f; -[SCPerceptionConfigurationServices endpointConfiguration] */

undefined8 FUN_10af30a28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af30a30; end: 10af30a37; -[SCPerceptionConfigurationServices pfeImageConfiguration] */

undefined8 FUN_10af30a30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af30a38; end: 10af30a3f; -[SCPerceptionConfigurationServices deepScanConfiguration] */

undefined8 FUN_10af30a38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af30a40; end: 10af30a47; -[SCPerceptionConfigurationServices odinConfiguration] */

undefined8 FUN_10af30a40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af30a48; end: 10af30ab3; -[SCPerceptionConfigurationServices .cxx_destruct] */

void FUN_10af30a48(long param_1)

{
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



/* Entry: 10af30ab4; end: 10af30b5f; -[SCScanPFEExperiment initWithName:configValue:] */

undefined1 *
FUN_10af30ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127024c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af30b60; end: 10af30b83; -[SCScanPFEExperiment copyWithZone:] */

undefined8 FUN_10af30b60(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af30b84; end: 10af30bf7; -[SCScanPFEExperiment hash] */

undefined8 * FUN_10af30b84(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af30c78:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af30c84;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10af30c84;
        }
        goto LAB_10af30c78;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af30c84:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af30bf8; end: 10af30c9f; -[SCScanPFEExperiment isEqual:] */

long FUN_10af30bf8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af30c78:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af30c84;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af30c84;
        }
        goto LAB_10af30c78;
      }
    }
    lVar3 = 0;
  }
LAB_10af30c84:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af30ca0; end: 10af30ca7; -[SCScanPFEExperiment name] */

undefined8 FUN_10af30ca0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af30ca8; end: 10af30caf; -[SCScanPFEExperiment configValue] */

undefined8 FUN_10af30ca8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af30cb0; end: 10af30cdf; -[SCScanPFEExperiment .cxx_destruct] */

void FUN_10af30cb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af30ce0; end: 10af30d3b; +[SCScanPFEExperimentConfig boolWithValue:] */

void FUN_10af30ce0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dea40;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  puVar2[0x14] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af30d3c; end: 10af30da7; +[SCScanPFEExperimentConfig dataWithValue:] */

void FUN_10af30d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dea40;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af30da8; end: 10af30dff; +[SCScanPFEExperimentConfig intWithValue:] */

void FUN_10af30da8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dea40;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined4 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af30e00; end: 10af30e6b; +[SCScanPFEExperimentConfig stringWithValue:] */

void FUN_10af30e00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dea40;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af30e6c; end: 10af30e8f; -[SCScanPFEExperimentConfig copyWithZone:] */

undefined8 FUN_10af30e6c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af30e90; end: 10af30f17; -[SCScanPFEExperimentConfig hash] */

void FUN_10af30e90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  long lStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  lStack_48 = (long)*(int *)(param_1 + 0x10);
  uStack_40 = (ulong)*(byte *)(param_1 + 0x14);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1127024c8;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af30f18; end: 10af30f5b; -[SCScanPFEExperimentConfig internalInit] */

void FUN_10af30f18(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127024c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af30f5c; end: 10af31033; -[SCScanPFEExperimentConfig isEqual:] */

long FUN_10af30f5c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af3100c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af31018;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(int *)(param_1 + 0x10) == *(int *)(param_3 + 0x10))) &&
        (*(char *)(param_1 + 0x14) == *(char *)(param_3 + 0x14))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10af31018;
        }
        goto LAB_10af3100c;
      }
    }
    lVar3 = 0;
  }
LAB_10af31018:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af31034; end: 10af31127; -[SCScanPFEExperimentConfig matchInt:_Bool:string:data:] */

void FUN_10af31034(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 2) {
    if (lVar3 == 0) {
      if (param_3 == 0) goto LAB_10af310f8;
      uVar1 = *(uint *)(param_1 + 0x10);
      pcVar4 = *(code **)(param_3 + 0x10);
      lVar3 = param_3;
    }
    else {
      if ((lVar3 != 1) || (param_4 == 0)) goto LAB_10af310f8;
      uVar1 = (uint)*(byte *)(param_1 + 0x14);
      pcVar4 = *(code **)(param_4 + 0x10);
      lVar3 = param_4;
    }
    (*pcVar4)(lVar3,uVar1);
  }
  else {
    if (lVar3 == 2) {
      if (param_5 == 0) goto LAB_10af310f8;
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      pcVar4 = *(code **)(param_5 + 0x10);
      lVar3 = param_5;
    }
    else {
      if ((lVar3 != 3) || (param_6 == 0)) goto LAB_10af310f8;
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      pcVar4 = *(code **)(param_6 + 0x10);
      lVar3 = param_6;
    }
    (*pcVar4)(lVar3,uVar2);
  }
LAB_10af310f8:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af31128; end: 10af31157; -[SCScanPFEExperimentConfig .cxx_destruct] */

void FUN_10af31128(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10af31158; end: 10af31163; -[SCPlusInternalCustomAppThemeServices .cxx_destruct] */

void FUN_10af31158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af31164; end: 10af3116f; -[SCPlusCustomAppThemeServices .cxx_destruct] */

void FUN_10af31164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af31170; end: 10af3161b; -[SCThemeBackgroundView initWithThemeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10af31170(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined **unaff_x26;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_98 = PTR_PTR_1127024e0;
  puVar1 = &uStack_a0;
  puVar2 = PTR_s_initWithFrame__1125e2948;
  uStack_a0 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c219b60(puVar1);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar19 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127867f4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127867f4) = puVar2;
    _objc_release(uVar19);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar20 = (long)_DAT_1127867f8;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined **)((long)puVar1 + lVar20) = puVar2;
    _objc_release(uVar19);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar19;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar7;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar10;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar19);
    _objc_release(puVar4);
    _objc_release(uVar3);
    lVar15 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010bf13c20();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010bf140c0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127867fc);
    *(long *)((long)puVar1 + (long)_DAT_1127867fc) = lVar18;
    _objc_release(uVar19);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar20));
    _objc_initWeak(auStack_a8,puVar1);
    lVar15 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010bf13c20();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010c28d760();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010c0e0e80(lVar17);
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10af3161c;
    puStack_b8 = &UNK_1108d8bc0;
    unaff_x26 = &puStack_d0;
    puVar2 = auStack_a8;
    _objc_copyWeak(auStack_b0,puVar2);
    lVar20 = lVar18;
    func_0x00010c25ff60(lVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar20);
    _objc_release(lVar18);
    _objc_release(puVar14);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 4);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume(param_3);
  _objc_retain(puVar2);
  puVar1 = (undefined8 *)(param_3 + 0x20);
  _objc_loadWeakRetained(puVar1);
  func_0x00010be32120();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 10af3161c; end: 10af31663;  */

void FUN_10af3161c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10af31664; end: 10af316b3; -[SCThemeBackgroundView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10af31664(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_1127867f4));
  puStack_28 = PTR_PTR_1127024e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10af316b4; end: 10af316f7; -[SCThemeBackgroundView installInView:] */

void FUN_10af316b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befbb60(param_3,param_2,param_1);
  func_0x00010be73ea0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af316f8; end: 10af3174b; -[SCThemeBackgroundView installInView:belowSubview:] */

void FUN_10af316f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010c066fe0(param_3,param_2,param_1,param_4);
  func_0x00010be73ea0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af3174c; end: 10af317ab; -[SCThemeBackgroundView installInView:sendToBack:] */

void FUN_10af3174c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  _objc_retain(param_3);
  func_0x00010befbb60(param_3,param_2,param_1);
  if (param_4 != 0) {
    func_0x00010c15cda0(param_3,param_2,param_1);
  }
  func_0x00010be73ea0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af317ac; end: 10af31867; -[SCThemeBackgroundView _handleThemeUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10af317ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  func_0x00010bf140c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_1127867fc;
  _objc_retain();
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_1127867f8));
  lVar4 = (long)_DAT_112786800;
  uVar2 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    func_0x00010c26d000();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af31868; end: 10af31a9f; -[SCThemeBackgroundView _pinEdgesToView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10af31868(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  lStack_88 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c08de00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf493a0(lVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  lStack_80 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c2793a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010bf493a0(lVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  lStack_78 = lVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010bf1ff80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar12 = param_1;
  func_0x00010bf493a0(param_1,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = lVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar2;
  }
  ___stack_chk_fail();
  return *(long *)(lVar2 + _DAT_1127867fc);
}



/* Entry: 10af31aa0; end: 10af31aaf; -[SCThemeBackgroundView currentBackgroundImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10af31aa0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127867fc);
}



/* Entry: 10af31ab0; end: 10af31acf; -[SCThemeBackgroundView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10af31ab0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112786800);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af31ad0; end: 10af31ae3; -[SCThemeBackgroundView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10af31ad0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112786800,param_3);
  return;
}



/* Entry: 10af31ae4; end: 10af31b3f; -[SCThemeBackgroundView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10af31ae4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112786800);
  _objc_storeStrong(param_1 + _DAT_1127867fc,0);
  _objc_storeStrong(param_1 + _DAT_1127867f4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127867f8,0);
  return;
}



/* Entry: 10af31b40; end: 10af31ba7; +[SCPlusCameraCaptureButtonTheme colorWithColor:] */

void FUN_10af31b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1a80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af31ba8; end: 10af31c13; +[SCPlusCameraCaptureButtonTheme imageWithImageData:] */

void FUN_10af31ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1a80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af31c14; end: 10af31c5b; +[SCPlusCameraCaptureButtonTheme none] */

void FUN_10af31c14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1a80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af31c5c; end: 10af31c7f; -[SCPlusCameraCaptureButtonTheme copyWithZone:] */

undefined8 FUN_10af31c5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af31c80; end: 10af31cf7; -[SCPlusCameraCaptureButtonTheme hash] */

void FUN_10af31c80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1127024e8;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af31cf8; end: 10af31d3b; -[SCPlusCameraCaptureButtonTheme internalInit] */

void FUN_10af31cf8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127024e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af31d3c; end: 10af31df3; -[SCPlusCameraCaptureButtonTheme isEqual:] */

long FUN_10af31d3c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af31dcc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af31dd8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10af31dd8;
        }
        goto LAB_10af31dcc;
      }
    }
    lVar3 = 0;
  }
LAB_10af31dd8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af31df4; end: 10af31ea3; -[SCPlusCameraCaptureButtonTheme matchNone:color:image:] */

void FUN_10af31df4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_10af31e80;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if (lVar2 != 1) {
      if ((lVar2 == 0) && (param_3 != 0)) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
      goto LAB_10af31e80;
    }
    if (param_4 == 0) goto LAB_10af31e80;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar2 = param_4;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10af31e80:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af31ea4; end: 10af31ed3; -[SCPlusCameraCaptureButtonTheme .cxx_destruct] */

void FUN_10af31ea4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af31ed4; end: 10af31f3b; +[SCPlusCameraRecordingFrameTheme colorWithColor:] */

void FUN_10af31ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1a98;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af31f3c; end: 10af31fa7; +[SCPlusCameraRecordingFrameTheme gradientWithGradient:] */

void FUN_10af31f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1a98;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af31fa8; end: 10af31fef; +[SCPlusCameraRecordingFrameTheme none] */

void FUN_10af31fa8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1a98;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af31ff0; end: 10af32013; -[SCPlusCameraRecordingFrameTheme copyWithZone:] */

undefined8 FUN_10af31ff0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af32014; end: 10af3208b; -[SCPlusCameraRecordingFrameTheme hash] */

void FUN_10af32014(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1127024f0;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af3208c; end: 10af320cf; -[SCPlusCameraRecordingFrameTheme internalInit] */

void FUN_10af3208c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127024f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af320d0; end: 10af32187; -[SCPlusCameraRecordingFrameTheme isEqual:] */

long FUN_10af320d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af32160:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3216c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10af3216c;
        }
        goto LAB_10af32160;
      }
    }
    lVar3 = 0;
  }
LAB_10af3216c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af32188; end: 10af32237; -[SCPlusCameraRecordingFrameTheme matchNone:color:gradient:] */

void FUN_10af32188(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_10af32214;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if (lVar2 != 1) {
      if ((lVar2 == 0) && (param_3 != 0)) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
      goto LAB_10af32214;
    }
    if (param_4 == 0) goto LAB_10af32214;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar2 = param_4;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10af32214:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af32238; end: 10af32267; -[SCPlusCameraRecordingFrameTheme .cxx_destruct] */

void FUN_10af32238(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


