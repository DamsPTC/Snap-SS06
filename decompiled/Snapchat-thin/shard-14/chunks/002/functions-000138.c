/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0278b8; end: 10b0278bf; -[SCSnapKitStickerStyle type] */

undefined8 FUN_10b0278b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0278c0; end: 10b0278c7; -[SCSnapKitStickerStyle appId] */

undefined8 FUN_10b0278c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0278c8; end: 10b02790f; -[SCSnapKitStickerStyle .cxx_destruct] */

void FUN_10b0278c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b027910; end: 10b02792b; +[SCSnapKitStickerStyleBuilder snapKitStickerStyle] */

void FUN_10b027910(void)

{
  _objc_alloc_init(PTR_PTR_1126df378);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b02792c; end: 10b027a87; +[SCSnapKitStickerStyleBuilder snapKitStickerStyleFromExistingSnapKitStickerStyle:] */

void FUN_10b02792c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126df378;
  _objc_retain(param_3);
  func_0x00010c241c60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf05ba0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2a8560(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf0d6a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2a8a40(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2bbd20(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf05300(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar9 = puVar7;
  func_0x00010c2a84c0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10b027a88; end: 10b027abb; -[SCSnapKitStickerStyleBuilder build] */

void FUN_10b027a88(void)

{
  _objc_alloc(PTR_PTR_1126b5858);
  func_0x00010bff3500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b027abc; end: 10b027af3; -[SCSnapKitStickerStyleBuilder withAppName:] */

long FUN_10b027abc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b027af4; end: 10b027b2b; -[SCSnapKitStickerStyleBuilder withAttachmentUrl:] */

long FUN_10b027af4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b027b2c; end: 10b027b63; -[SCSnapKitStickerStyleBuilder withType:] */

long FUN_10b027b2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b027b64; end: 10b027b9b; -[SCSnapKitStickerStyleBuilder withAppId:] */

long FUN_10b027b64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b027b9c; end: 10b027be3; -[SCSnapKitStickerStyleBuilder .cxx_destruct] */

void FUN_10b027b9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b027be4; end: 10b027def; -[SCCameraDeepLinkMetadata initWithAttachmentUrl:caption:stickers:appDisplayName:loggingMetadata:cameraPosition:publisherId:lensState:restrictions:topics:isPostToSpotlightAllowed:] */

undefined8 *
FUN_10b027be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1127048d0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    puVar1[7] = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_13;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b027df0; end: 10b027e13; -[SCCameraDeepLinkMetadata copyWithZone:] */

undefined8 FUN_10b027df0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b027e14; end: 10b027eeb; -[SCCameraDeepLinkMetadata hash] */

undefined8 * FUN_10b027e14(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x38);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b028034:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b028040;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38) &&
        (*(char *)((long)puVar3 + 8) == param_3[8])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x40);
                if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x48);
                  if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x50);
                    if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      puVar6 = *(undefined1 **)((long)puVar3 + 0x58);
                      if (puVar6 != *(undefined1 **)(param_3 + 0x58)) {
                        func_0x00010c071ae0();
                        goto LAB_10b028040;
                      }
                      goto LAB_10b028034;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b028040:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b027eec; end: 10b02805b; -[SCCameraDeepLinkMetadata isEqual:] */

long FUN_10b027eec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b028034:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b028040;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x50);
                    if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x58);
                      if (lVar3 != *(long *)(param_3 + 0x58)) {
                        func_0x00010c071ae0();
                        goto LAB_10b028040;
                      }
                      goto LAB_10b028034;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b028040:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b02805c; end: 10b028063; -[SCCameraDeepLinkMetadata attachmentUrl] */

undefined8 FUN_10b02805c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b028064; end: 10b02806b; -[SCCameraDeepLinkMetadata caption] */

undefined8 FUN_10b028064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b02806c; end: 10b028073; -[SCCameraDeepLinkMetadata stickers] */

undefined8 FUN_10b02806c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b028074; end: 10b02807b; -[SCCameraDeepLinkMetadata appDisplayName] */

undefined8 FUN_10b028074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b02807c; end: 10b028083; -[SCCameraDeepLinkMetadata loggingMetadata] */

undefined8 FUN_10b02807c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b028084; end: 10b02808b; -[SCCameraDeepLinkMetadata cameraPosition] */

undefined8 FUN_10b028084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b02808c; end: 10b028093; -[SCCameraDeepLinkMetadata publisherId] */

undefined8 FUN_10b02808c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b028094; end: 10b02809b; -[SCCameraDeepLinkMetadata lensState] */

undefined8 FUN_10b028094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b02809c; end: 10b0280a3; -[SCCameraDeepLinkMetadata restrictions] */

undefined8 FUN_10b02809c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b0280a4; end: 10b0280ab; -[SCCameraDeepLinkMetadata topics] */

undefined8 FUN_10b0280a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b0280ac; end: 10b0280b3; -[SCCameraDeepLinkMetadata isPostToSpotlightAllowed] */

undefined1 FUN_10b0280ac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b0280b4; end: 10b028137; -[SCCameraDeepLinkMetadata .cxx_destruct] */

void FUN_10b0280b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b028138; end: 10b028153; +[SCCameraDeepLinkMetadataBuilder cameraDeepLinkMetadata] */

void FUN_10b028138(void)

{
  _objc_alloc_init(PTR_PTR_1126c3dc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b028154; end: 10b028453; +[SCCameraDeepLinkMetadataBuilder cameraDeepLinkMetadataFromExistingCameraDeepLinkMetadata:] */

void FUN_10b028154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  
  puVar1 = PTR_PTR_1126c3dc8;
  _objc_retain(param_3);
  func_0x00010bf29400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf0d6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2a8a40(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2a9fa0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2ba2a0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf05000();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2a84a0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0b3ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2b31a0(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010bf2a2c0(param_3);
  puVar13 = puVar11;
  func_0x00010c2a9e20(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c11b1e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c2b6500(puVar13,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c096de0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010c2b2ce0(puVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010c13c9a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010c2b73c0(puVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010c2759e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010c2bb6a0(puVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c07a840(param_3);
  _objc_release(param_3);
  puVar22 = puVar20;
  func_0x00010c2b11a0(puVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar20);
  _objc_release(uVar19);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(uVar12);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 10b028454; end: 10b0284ab; -[SCCameraDeepLinkMetadataBuilder build] */

void FUN_10b028454(void)

{
  _objc_alloc(PTR_PTR_1126b5868);
  func_0x00010bff4d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0284ac; end: 10b0284e3; -[SCCameraDeepLinkMetadataBuilder withAttachmentUrl:] */

long FUN_10b0284ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0284e4; end: 10b02851b; -[SCCameraDeepLinkMetadataBuilder withCaption:] */

long FUN_10b0284e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b02851c; end: 10b028553; -[SCCameraDeepLinkMetadataBuilder withStickers:] */

long FUN_10b02851c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b028554; end: 10b02858b; -[SCCameraDeepLinkMetadataBuilder withAppDisplayName:] */

long FUN_10b028554(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b02858c; end: 10b0285c3; -[SCCameraDeepLinkMetadataBuilder withLoggingMetadata:] */

long FUN_10b02858c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0285c4; end: 10b0285cb; -[SCCameraDeepLinkMetadataBuilder withCameraPosition:] */

void FUN_10b0285c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10b0285cc; end: 10b028603; -[SCCameraDeepLinkMetadataBuilder withPublisherId:] */

long FUN_10b0285cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b028604; end: 10b02863b; -[SCCameraDeepLinkMetadataBuilder withLensState:] */

long FUN_10b028604(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b02863c; end: 10b028673; -[SCCameraDeepLinkMetadataBuilder withRestrictions:] */

long FUN_10b02863c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b028674; end: 10b0286ab; -[SCCameraDeepLinkMetadataBuilder withTopics:] */

long FUN_10b028674(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0286ac; end: 10b0286b3; -[SCCameraDeepLinkMetadataBuilder withIsPostToSpotlightAllowed:] */

void FUN_10b0286ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10b0286b4; end: 10b028737; -[SCCameraDeepLinkMetadataBuilder .cxx_destruct] */

void FUN_10b0286b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b028738; end: 10b02880f; -[SCCreativeKitLensState initWithLensUUID:lensID:launchData:] */

undefined1 *
FUN_10b028738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1127048d8;
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



/* Entry: 10b028810; end: 10b028833; -[SCCreativeKitLensState copyWithZone:] */

undefined8 FUN_10b028810(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b028834; end: 10b0288b3; -[SCCreativeKitLensState hash] */

undefined8 * FUN_10b028834(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b02894c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b028958;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b028958;
          }
          goto LAB_10b02894c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b028958:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b0288b4; end: 10b028973; -[SCCreativeKitLensState isEqual:] */

long FUN_10b0288b4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b02894c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b028958;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b028958;
          }
          goto LAB_10b02894c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b028958:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b028974; end: 10b02897b; -[SCCreativeKitLensState lensUUID] */

undefined8 FUN_10b028974(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b02897c; end: 10b028983; -[SCCreativeKitLensState lensID] */

undefined8 FUN_10b02897c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b028984; end: 10b02898b; -[SCCreativeKitLensState launchData] */

undefined8 FUN_10b028984(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b02898c; end: 10b0289c7; -[SCCreativeKitLensState .cxx_destruct] */

void FUN_10b02898c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0289c8; end: 10b0289e3; +[SCCreativeKitLensStateBuilder creativeKitLensState] */

void FUN_10b0289c8(void)

{
  _objc_alloc_init(PTR_PTR_1126c80a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0289e4; end: 10b028afb; +[SCCreativeKitLensStateBuilder creativeKitLensStateFromExistingCreativeKitLensState:] */

void FUN_10b0289e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126c80a0;
  _objc_retain(param_3);
  func_0x00010bf5acc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c097980(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b2d80(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c094320(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b2860(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c08b6a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar7 = puVar5;
  func_0x00010c2b2520(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10b028afc; end: 10b028b2f; -[SCCreativeKitLensStateBuilder build] */

void FUN_10b028afc(void)

{
  _objc_alloc(PTR_PTR_1126cbe70);
  func_0x00010c025a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b028b30; end: 10b028b67; -[SCCreativeKitLensStateBuilder withLensUUID:] */

long FUN_10b028b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b028b68; end: 10b028b9f; -[SCCreativeKitLensStateBuilder withLensID:] */

long FUN_10b028b68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b028ba0; end: 10b028bd7; -[SCCreativeKitLensStateBuilder withLaunchData:] */

long FUN_10b028ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b028bd8; end: 10b028c13; -[SCCreativeKitLensStateBuilder .cxx_destruct] */

void FUN_10b028bd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b028c14; end: 10b028cbf; -[SCCreativeKitSendToContentMetadata initWithUnlockablesSnapInfo:contextClientInfoData:] */

undefined1 *
FUN_10b028c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127048e0;
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



/* Entry: 10b028cc0; end: 10b028ce3; -[SCCreativeKitSendToContentMetadata copyWithZone:] */

undefined8 FUN_10b028cc0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b028ce4; end: 10b028d57; -[SCCreativeKitSendToContentMetadata hash] */

undefined8 * FUN_10b028ce4(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b028dd8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b028de4;
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
          goto LAB_10b028de4;
        }
        goto LAB_10b028dd8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b028de4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b028d58; end: 10b028dff; -[SCCreativeKitSendToContentMetadata isEqual:] */

long FUN_10b028d58(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b028dd8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b028de4;
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
          goto LAB_10b028de4;
        }
        goto LAB_10b028dd8;
      }
    }
    lVar3 = 0;
  }
LAB_10b028de4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b028e00; end: 10b028e07; -[SCCreativeKitSendToContentMetadata unlockablesSnapInfo] */

undefined8 FUN_10b028e00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b028e08; end: 10b028e0f; -[SCCreativeKitSendToContentMetadata contextClientInfoData] */

undefined8 FUN_10b028e08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b028e10; end: 10b028e3f; -[SCCreativeKitSendToContentMetadata .cxx_destruct] */

void FUN_10b028e10(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b028e40; end: 10b028ebf; -[SCSnapKitProtoCreativeToolsRestrictionsModel initWithHideMusicTool:hideDrawingTool:disallowAddingCaptionText:hideStickersTool:hideScissorsTool:hideAttachmentTool:] */

void FUN_10b028e40(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1127048e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
    *(undefined1 *)((long)puVar1 + 0xc) = param_7;
    *(undefined1 *)((long)puVar1 + 0xd) = param_8;
  }
  return;
}



/* Entry: 10b028ec0; end: 10b028ee3; -[SCSnapKitProtoCreativeToolsRestrictionsModel copyWithZone:] */

undefined8 FUN_10b028ec0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b028ee4; end: 10b028f6b; -[SCSnapKitProtoCreativeToolsRestrictionsModel hash] */

ulong * FUN_10b028ee4(long param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ushort uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  ulong uVar8;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined4 *)(param_1 + 8);
  uVar7 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar6 >> 0x18),
                                          (uint6)(byte)((uint)uVar6 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar6) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar6 >> 8),(short)uVar7);
  uVar8 = CONCAT44((int)(uVar7 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar7 >> 0x30);
  uStack_48 = (ulong)uVar1 & 0xff;
  uStack_40 = uVar7 >> 0x10 & 0xff;
  uStack_38 = (ulong)CONCAT24(uVar5,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_30 = (ulong)uVar5;
  uStack_28 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_20 = (ulong)*(byte *)(param_1 + 0xd);
  puVar2 = &uStack_48;
  func_0x000107c3191c(puVar2,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    puVar4 = (ulong *)0x1;
  }
  else {
    puVar4 = (ulong *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar4 = puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if (((((ulong)puVar3 & 1) == 0) ||
          ((((char)puVar2[1] != (char)param_3[1] ||
            (*(char *)((long)puVar2 + 9) != *(char *)((long)param_3 + 9))) ||
           (*(char *)((long)puVar2 + 10) != *(char *)((long)param_3 + 10))))) ||
         ((*(char *)((long)puVar2 + 0xb) != *(char *)((long)param_3 + 0xb) ||
          (*(char *)((long)puVar2 + 0xc) != *(char *)((long)param_3 + 0xc))))) {
        puVar4 = (ulong *)0x0;
      }
      else {
        puVar4 = (ulong *)(ulong)(*(char *)((long)puVar2 + 0xd) == *(char *)((long)param_3 + 0xd));
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b028f6c; end: 10b029043; -[SCSnapKitProtoCreativeToolsRestrictionsModel isEqual:] */

bool FUN_10b028f6c(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((((uVar3 & 1) == 0) ||
          (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
            (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
           (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) ||
         ((*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb) ||
          (*(char *)(param_1 + 0xc) != *(char *)(param_3 + 0xc))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b029044; end: 10b02904b; -[SCSnapKitProtoCreativeToolsRestrictionsModel hideMusicTool] */

undefined1 FUN_10b029044(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b02904c; end: 10b029053; -[SCSnapKitProtoCreativeToolsRestrictionsModel hideDrawingTool] */

undefined1 FUN_10b02904c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b029054; end: 10b02905b; -[SCSnapKitProtoCreativeToolsRestrictionsModel disallowAddingCaptionText] */

undefined1 FUN_10b029054(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b02905c; end: 10b029063; -[SCSnapKitProtoCreativeToolsRestrictionsModel hideStickersTool] */

undefined1 FUN_10b02905c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b029064; end: 10b02906b; -[SCSnapKitProtoCreativeToolsRestrictionsModel hideScissorsTool] */

undefined1 FUN_10b029064(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10b02906c; end: 10b029073; -[SCSnapKitProtoCreativeToolsRestrictionsModel hideAttachmentTool] */

undefined1 FUN_10b02906c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10b029074; end: 10b02914b; -[SCSnapKitSticker initWithAppStickerStyle:imageData:metadata:] */

undefined1 *
FUN_10b029074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1127048f0;
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



/* Entry: 10b02914c; end: 10b02916f; -[SCSnapKitSticker copyWithZone:] */

undefined8 FUN_10b02914c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b029170; end: 10b0291ef; -[SCSnapKitSticker hash] */

undefined8 * FUN_10b029170(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b029288:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b029294;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b029294;
          }
          goto LAB_10b029288;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b029294:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b0291f0; end: 10b0292af; -[SCSnapKitSticker isEqual:] */

long FUN_10b0291f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b029288:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b029294;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b029294;
          }
          goto LAB_10b029288;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b029294:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0292b0; end: 10b0292b7; -[SCSnapKitSticker appStickerStyle] */

undefined8 FUN_10b0292b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0292b8; end: 10b0292bf; -[SCSnapKitSticker imageData] */

undefined8 FUN_10b0292b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0292c0; end: 10b0292c7; -[SCSnapKitSticker metadata] */

undefined8 FUN_10b0292c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0292c8; end: 10b029303; -[SCSnapKitSticker .cxx_destruct] */

void FUN_10b0292c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b029304; end: 10b0294d3; -[SCSnapKitCreativeKitWebShareMetadata initWithPageTitle:iconURL:publisherId:snapcodeURL:stickerURL:attributionName:appId:thumbnailURL:suppressSticker:] */

undefined1 *
FUN_10b029304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  puStack_68 = PTR_PTR_1127048f8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_11;
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



/* Entry: 10b0294d4; end: 10b0294f7; -[SCSnapKitCreativeKitWebShareMetadata copyWithZone:] */

undefined8 FUN_10b0294d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0294f8; end: 10b0295b7; -[SCSnapKitCreativeKitWebShareMetadata hash] */

undefined8 * FUN_10b0294f8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b0296d8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0296e4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x38);
                if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x40);
                  if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
                    if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                      func_0x00010c071ae0();
                      goto LAB_10b0296e4;
                    }
                    goto LAB_10b0296d8;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b0296e4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b0295b8; end: 10b0296ff; -[SCSnapKitCreativeKitWebShareMetadata isEqual:] */

long FUN_10b0295b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0296d8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0296e4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if (lVar3 != *(long *)(param_3 + 0x48)) {
                      func_0x00010c071ae0();
                      goto LAB_10b0296e4;
                    }
                    goto LAB_10b0296d8;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0296e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b029700; end: 10b029707; -[SCSnapKitCreativeKitWebShareMetadata pageTitle] */

undefined8 FUN_10b029700(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b029708; end: 10b02970f; -[SCSnapKitCreativeKitWebShareMetadata iconURL] */

undefined8 FUN_10b029708(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b029710; end: 10b029717; -[SCSnapKitCreativeKitWebShareMetadata publisherId] */

undefined8 FUN_10b029710(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b029718; end: 10b02971f; -[SCSnapKitCreativeKitWebShareMetadata snapcodeURL] */

undefined8 FUN_10b029718(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b029720; end: 10b029727; -[SCSnapKitCreativeKitWebShareMetadata stickerURL] */

undefined8 FUN_10b029720(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b029728; end: 10b02972f; -[SCSnapKitCreativeKitWebShareMetadata attributionName] */

undefined8 FUN_10b029728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b029730; end: 10b029737; -[SCSnapKitCreativeKitWebShareMetadata appId] */

undefined8 FUN_10b029730(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b029738; end: 10b02973f; -[SCSnapKitCreativeKitWebShareMetadata thumbnailURL] */

undefined8 FUN_10b029738(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b029740; end: 10b029747; -[SCSnapKitCreativeKitWebShareMetadata suppressSticker] */

undefined1 FUN_10b029740(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b029748; end: 10b0297bf; -[SCSnapKitCreativeKitWebShareMetadata .cxx_destruct] */

void FUN_10b029748(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0297c0; end: 10b02981f; -[SCCaptionStateTaggedTextBounds initWithSize:center:] */

void FUN_10b0297c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112704900;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
  }
  return;
}



/* Entry: 10b029820; end: 10b029843; -[SCCaptionStateTaggedTextBounds copyWithZone:] */

undefined8 FUN_10b029820(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b029844; end: 10b029917; -[SCCaptionStateTaggedTextBounds hash] */

ulong * FUN_10b029844(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_28 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_20 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar3 = &uStack_38;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
    puVar7 = (ulong *)0x1;
  }
  else {
    puVar7 = (ulong *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar7 = puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar7);
      if (((ulong)puVar4 & 1) != 0) {
        bVar2 = false;
        if (((double)puVar3[1] == (double)param_3[1]) &&
           (bVar2 = false, !NAN((double)puVar3[2]) && !NAN((double)param_3[2]))) {
          bVar2 = (double)puVar3[2] == (double)param_3[2];
        }
        if (bVar2) {
          uVar5 = 0;
          if ((double)puVar3[4] == (double)param_3[4]) {
            uVar5 = (uint)((double)puVar3[3] == (double)param_3[3]);
          }
          puVar7 = (ulong *)(ulong)uVar5;
          goto LAB_10b029984;
        }
      }
      puVar7 = (ulong *)0x0;
    }
  }
LAB_10b029984:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10b029918; end: 10b0299bb; -[SCCaptionStateTaggedTextBounds isEqual:] */

bool FUN_10b029918(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) != 0) {
        bVar1 = false;
        if ((*(double *)(param_1 + 8) == *(double *)(param_3 + 8)) &&
           (bVar1 = false, !NAN(*(double *)(param_1 + 0x10)) && !NAN(*(double *)(param_3 + 0x10))))
        {
          bVar1 = *(double *)(param_1 + 0x10) == *(double *)(param_3 + 0x10);
        }
        if (bVar1) {
          bVar1 = false;
          if (*(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20)) {
            bVar1 = *(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18);
          }
          goto LAB_10b029984;
        }
      }
      bVar1 = false;
    }
  }
LAB_10b029984:
  _objc_release(param_3);
  return bVar1;
}


