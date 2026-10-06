/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0137f8; end: 10b0138e7; -[SCCDreamsPackGeneration initWithGenerationId:packId:identityIds:status:generatedDreams:userIds:allDreamIds:] */

undefined8 *
FUN_10b0137f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_58 = PTR_PTR_112704420;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x00010b013b80(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_9);
  return puVar1;
}



/* Entry: 10b0138e8; end: 10b0138fb; +[SCCDreamsPackGeneration valdiMarshallableObjectDescriptor] */

void FUN_10b0138e8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cac828;
  param_1[1] = &PTR_DAT_110cac8e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0138fc; end: 10b013937; -[SCCDreamsProduct initWithPackId:price:localizedPrice:] */

void FUN_10b0138fc(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b013b20(PTR_PTR_112704428);
  func_0x00010b013b80(auStack_20);
  return;
}



/* Entry: 10b013938; end: 10b013947; +[SCCDreamsProduct valdiMarshallableObjectDescriptor] */

void FUN_10b013938(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cac900;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b013948; end: 10b0139c3; -[SCCDreamsSnap initWithEntryId:snapId:packId:thumbnailUri:createTime:uploadState:isSpectacles:isSpectaclesV3:isVideo:isMultiSnap:isFavorited:durationMs:type:rarity:deleted:] */

void FUN_10b013948(undefined8 param_1)

{
  func_0x00010b013b04(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b0139c4; end: 10b0139d7; +[SCCDreamsSnap valdiMarshallableObjectDescriptor] */

void FUN_10b0139c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cac9a8;
  param_1[1] = &PTR_DAT_110cacbe8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0139d8; end: 10b0139ff; -[SCCDreamsSnapPack initWithPackId:snaps:] */

void FUN_10b0139d8(void)

{
  func_0x00010b013b20(PTR_PTR_112704438);
  func_0x00010b013b04();
  return;
}



/* Entry: 10b013a00; end: 10b013a13; +[SCCDreamsSnapPack valdiMarshallableObjectDescriptor] */

void FUN_10b013a00(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cacc20;
  param_1[1] = &PTR_DAT_110cacc80;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b013a14; end: 10b013a5f; -[SCCGenAISnap initWithEntryId:snapId:type:thumbnailUri:createTime:isVideo:durationMs:] */

void FUN_10b013a14(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b013b20(PTR_PTR_112704440);
  func_0x00010b013b80(auStack_20);
  return;
}



/* Entry: 10b013a60; end: 10b013a73; +[SCCGenAISnap valdiMarshallableObjectDescriptor] */

void FUN_10b013a60(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cacc90;
  param_1[1] = &PTR_DAT_110cacdb0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b013a74; end: 10b013aab; -[SCCGeneratedDream initWithDreamId:] */

void FUN_10b013a74(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704448;
  uStack_20 = param_1;
  func_0x00010b013b80(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b013aac; end: 10b013abb; +[SCCGeneratedDream valdiMarshallableObjectDescriptor] */

void FUN_10b013aac(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_dreamId_110cacdc8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b013abc; end: 10b013ae3; -[SCDreamsPackPurchase initWithGenerationId:appleProductId:googleProductId:] */

void FUN_10b013abc(void)

{
  func_0x00010b013b20(PTR_PTR_112704450);
  func_0x00010b013b04();
  return;
}



/* Entry: 10b013ae4; end: 10b013ba3; +[SCDreamsPackPurchase valdiMarshallableObjectDescriptor] */

void FUN_10b013ae4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cace10;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b013ba4; end: 10b013c6f; -[SCLensProcessingURIDefaultProvider initWithHandler:scheme:route:] */

undefined1 *
FUN_10b013ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112704458;
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



/* Entry: 10b013c70; end: 10b013c77; -[SCLensProcessingURIDefaultProvider handler] */

undefined8 FUN_10b013c70(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b013c78; end: 10b013c7f; -[SCLensProcessingURIDefaultProvider scheme] */

undefined8 FUN_10b013c78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b013c80; end: 10b013c87; -[SCLensProcessingURIDefaultProvider route] */

undefined8 FUN_10b013c80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b013c88; end: 10b013cc3; -[SCLensProcessingURIDefaultProvider .cxx_destruct] */

void FUN_10b013c88(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b013cc4; end: 10b013d8f; -[SCLensProcessingURIPluginScope initWithURIPluginRegistry:effectActionUpdater:appliedEffectsObservable:] */

undefined1 *
FUN_10b013cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112704460;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b013d90; end: 10b013d97; -[SCLensProcessingURIPluginScope uriPlugInRegistry] */

undefined8 FUN_10b013d90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b013d98; end: 10b013d9f; -[SCLensProcessingURIPluginScope appliedEffectsObservable] */

undefined8 FUN_10b013d98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b013da0; end: 10b013da7; -[SCLensProcessingURIPluginScope effectActionUpdater] */

undefined8 FUN_10b013da0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b013da8; end: 10b013daf; -[SCLensProcessingURIPluginScope apiServicePluginProvider] */

undefined8 FUN_10b013da8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b013db0; end: 10b013ddf; -[SCLensProcessingURIPluginScope setApiServicePluginProvider:] */

void FUN_10b013db0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b013de0; end: 10b013e27; -[SCLensProcessingURIPluginScope .cxx_destruct] */

void FUN_10b013de0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b013e28; end: 10b013fef; -[SCLensProcessingURIRequest initWithUri:identifier:lensId:lens:method:contentType:metadata:body:] */

undefined1 *
FUN_10b013e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

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
  puStack_68 = PTR_PTR_112704468;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 10b013ff0; end: 10b014013; -[SCLensProcessingURIRequest copyWithZone:] */

undefined8 FUN_10b013ff0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b014014; end: 10b0140cf; -[SCLensProcessingURIRequest hash] */

undefined8 * FUN_10b014014(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b0141e0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b0141ec;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[6];
                if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[7];
                  if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = (undefined8 *)puVar3[8];
                    if (puVar6 != (undefined8 *)param_3[8]) {
                      func_0x00010c071ae0();
                      goto LAB_10b0141ec;
                    }
                    goto LAB_10b0141e0;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b0141ec:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b0140d0; end: 10b014207; -[SCLensProcessingURIRequest isEqual:] */

long FUN_10b0140d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0141e0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0141ec;
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
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if (lVar3 != *(long *)(param_3 + 0x40)) {
                      func_0x00010c071ae0();
                      goto LAB_10b0141ec;
                    }
                    goto LAB_10b0141e0;
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
LAB_10b0141ec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b014208; end: 10b01420f; -[SCLensProcessingURIRequest uri] */

undefined8 FUN_10b014208(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b014210; end: 10b014217; -[SCLensProcessingURIRequest identifier] */

undefined8 FUN_10b014210(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b014218; end: 10b01421f; -[SCLensProcessingURIRequest lensId] */

undefined8 FUN_10b014218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b014220; end: 10b014227; -[SCLensProcessingURIRequest lens] */

undefined8 FUN_10b014220(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b014228; end: 10b01422f; -[SCLensProcessingURIRequest method] */

undefined8 FUN_10b014228(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b014230; end: 10b014237; -[SCLensProcessingURIRequest contentType] */

undefined8 FUN_10b014230(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b014238; end: 10b01423f; -[SCLensProcessingURIRequest metadata] */

undefined8 FUN_10b014238(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b014240; end: 10b014247; -[SCLensProcessingURIRequest body] */

undefined8 FUN_10b014240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b014248; end: 10b0142bf; -[SCLensProcessingURIRequest .cxx_destruct] */

void FUN_10b014248(long param_1)

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



/* Entry: 10b0142c0; end: 10b0143d3; -[SCLensProcessingURIResponse initWithUri:responseCode:responseDescription:metadata:data:] */

undefined1 *
FUN_10b0142c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112704470;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0143d4; end: 10b0143f7; -[SCLensProcessingURIResponse copyWithZone:] */

undefined8 FUN_10b0143d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0143f8; end: 10b01448f; -[SCLensProcessingURIResponse hash] */

undefined8 * FUN_10b0143f8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b014550:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b01455c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b01455c;
            }
            goto LAB_10b014550;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b01455c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b014490; end: 10b014577; -[SCLensProcessingURIResponse isEqual:] */

long FUN_10b014490(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b014550:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b01455c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b01455c;
            }
            goto LAB_10b014550;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b01455c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b014578; end: 10b01457f; -[SCLensProcessingURIResponse uri] */

undefined8 FUN_10b014578(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b014580; end: 10b014587; -[SCLensProcessingURIResponse responseCode] */

undefined8 FUN_10b014580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b014588; end: 10b01458f; -[SCLensProcessingURIResponse responseDescription] */

undefined8 FUN_10b014588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b014590; end: 10b014597; -[SCLensProcessingURIResponse metadata] */

undefined8 FUN_10b014590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b014598; end: 10b01459f; -[SCLensProcessingURIResponse data] */

undefined8 FUN_10b014598(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0145a0; end: 10b0145e7; -[SCLensProcessingURIResponse .cxx_destruct] */

void FUN_10b0145a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0145e8; end: 10b0145f3; -[SCCameraCaptureLensProvidingServices .cxx_destruct] */

void FUN_10b0145e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0145f4; end: 10b0145ff; -[SCCameraUIScopedCameraCaptureLensProvidingServices .cxx_destruct] */

void FUN_10b0145f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b014600; end: 10b01460b; -[SCSampleBufferRef initWithSampleBuffer:] */

void FUN_10b014600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c041390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithSampleBuffer_isProcessed_1125edee0,param_3,0,0);
  return;
}



/* Entry: 10b01460c; end: 10b014613; -[SCSampleBufferRef isProcessedPhoto] */

undefined1 FUN_10b01460c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b014614; end: 10b01461b; -[SCSampleBufferRef isRecordingVideo] */

undefined1 FUN_10b014614(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b01461c; end: 10b014667; +[SCManagedVideoDataSourceOutputEvent didDeliverSecondarySampleBuffer] */

void FUN_10b01461c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cd5b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b014668; end: 10b0146b3; +[SCManagedVideoDataSourceOutputEvent didOutputSecondarySampleBuffer] */

void FUN_10b014668(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cd5b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0146b4; end: 10b0146d7; -[SCManagedVideoDataSourceOutputEvent copyWithZone:] */

undefined8 FUN_10b0146b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0146d8; end: 10b014763; -[SCManagedVideoDataSourceOutputEvent hash] */

undefined8 * FUN_10b0146d8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_50 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = (ulong)*(uint *)(param_1 + 0x24);
  lStack_48 = (long)*(int *)(param_1 + 0x20);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  lStack_30 = -lVar1;
  if (-1 < lVar1) {
    lStack_30 = lVar1;
  }
  uStack_58 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b014828:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b01482c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30))))) {
      uStack_a8 = *(undefined8 *)((long)puVar3 + 0x20);
      uStack_b0 = *(undefined8 *)((long)puVar3 + 0x18);
      uStack_a0 = *(undefined8 *)((long)puVar3 + 0x28);
      uStack_c8 = *(undefined8 *)(param_3 + 0x20);
      uStack_d0 = *(undefined8 *)(param_3 + 0x18);
      uStack_c0 = *(undefined8 *)(param_3 + 0x28);
      puVar5 = &uStack_b0;
      _CMTimeCompare(puVar5,&uStack_d0);
      if ((int)puVar5 == 0) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b01482c;
        }
        goto LAB_10b014828;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b01482c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b014764; end: 10b01484b; -[SCManagedVideoDataSourceOutputEvent isEqual:] */

long FUN_10b014764(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b014828:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b01482c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      uStack_48 = *(undefined8 *)(param_1 + 0x20);
      uStack_50 = *(undefined8 *)(param_1 + 0x18);
      uStack_40 = *(undefined8 *)(param_1 + 0x28);
      uStack_68 = *(undefined8 *)(param_3 + 0x20);
      uStack_70 = *(undefined8 *)(param_3 + 0x18);
      uStack_60 = *(undefined8 *)(param_3 + 0x28);
      puVar3 = &uStack_50;
      _CMTimeCompare(puVar3,&uStack_70);
      if ((int)puVar3 == 0) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b01482c;
        }
        goto LAB_10b014828;
      }
    }
    lVar4 = 0;
  }
LAB_10b01482c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b01484c; end: 10b0148cb; +[SCManagedVideoDataSourceDropEvent didDropSampleBufferWithSampleTimestamp:reason:devicePosition:] */

void FUN_10b01484c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d4208;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0148cc; end: 10b0148ef; -[SCManagedVideoDataSourceDropEvent copyWithZone:] */

undefined8 FUN_10b0148cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0148f0; end: 10b01498b; -[SCManagedVideoDataSourceDropEvent hash] */

void FUN_10b0148f0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar4 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_40 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  lVar3 = *(long *)(param_1 + 0x20);
  lStack_30 = -lVar3;
  if (-1 < lVar3) {
    lStack_30 = lVar3;
  }
  puVar2 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_112704498;
  puStack_80 = puVar2;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b01498c; end: 10b0149cf; -[SCManagedVideoDataSourceDropEvent internalInit] */

void FUN_10b01498c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704498;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0149d0; end: 10b014ab3; -[SCManagedVideoDataSourceDropEvent isEqual:] */

long FUN_10b0149d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b014a8c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b014a98;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b014a98;
        }
        goto LAB_10b014a8c;
      }
    }
    lVar4 = 0;
  }
LAB_10b014a98:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b014ab4; end: 10b014adb; -[SCManagedVideoDataSourceDropEvent matchDidDropSampleBuffer:] */

void FUN_10b014ab4(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010b014ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))
              (*(undefined8 *)(param_1 + 0x10),param_3,*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 10b014adc; end: 10b014ae7; -[SCManagedVideoDataSourceDropEvent .cxx_destruct] */

void FUN_10b014adc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b014ae8; end: 10b014c63; -[SCManagedAudioDataSourceListenerAnnouncer description] */

void FUN_10b014ae8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_10b014c64(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b014c64; end: 10b014cc3;  */

void FUN_10b014c64(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 10b014cc4; end: 10b014ef3; -[SCManagedAudioDataSourceListenerAnnouncer removeListener:] */

void FUN_10b014cc4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_10b014e78;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10b014d2c;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    func_0x000107c2bcdc(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10b014e78;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_10b014d2c:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110cacea0;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          func_0x000107c2bcd8(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    func_0x000107c2bcdc(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10b014e78;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_10b014e78:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b014ef4; end: 10b014fe7; -[SCManagedAudioDataSourceListenerAnnouncer managedAudioDataSource:didOutputSampleBuffer:] */

void FUN_10b014ef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_10b014c64(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c0b7da0();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b014fe8; end: 10b01500f; -[SCManagedAudioDataSourceListenerAnnouncer .cxx_destruct] */

void FUN_10b014fe8(long param_1)

{
  FUN_10b015024(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10b015010; end: 10b015023;  */

undefined * FUN_10b015010(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
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
  return puVar4;
}



/* Entry: 10b015024; end: 10b01507b;  */

long FUN_10b015024(long param_1)

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



/* Entry: 10b01507c; end: 10b01508b;  */

void FUN_10b01507c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cacea0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b01508c; end: 10b0150ab;  */

void FUN_10b01508c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cacea0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b0150ac; end: 10b015113;  */

void FUN_10b0150ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b015114; end: 10b015117;  */

void FUN_10b015114(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b015118; end: 10b015173; -[SCLensProcessingLocationModel initWithIntervalMilis:distanceFilterMeters:desiredAccuracy:] */

void FUN_10b015118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127044a0;
  uStack_40 = param_4;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
  }
  return;
}



/* Entry: 10b015174; end: 10b015197; -[SCLensProcessingLocationModel copyWithZone:] */

undefined8 FUN_10b015174(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b015198; end: 10b01521b; -[SCLensProcessingLocationModel hash] */

ulong * FUN_10b015198(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  double dVar5;
  ulong uStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_30 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  lStack_28 = (long)*(double *)(param_1 + 0x10);
  lStack_20 = (long)*(double *)(param_1 + 0x18);
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    if (puVar1 == (ulong *)param_3) {
      puVar4 = (undefined1 *)0x1;
    }
    else {
      puVar4 = (undefined1 *)0x0;
      if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
        puVar4 = (undefined1 *)puVar1;
        _objc_opt_class(puVar1);
        puVar2 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar4);
        if ((((ulong)puVar2 & 1) == 0) ||
           ((*(double *)((long)puVar1 + 0x10) != *(double *)(param_3 + 0x10) ||
            (*(double *)((long)puVar1 + 0x18) != *(double *)(param_3 + 0x18))))) {
          puVar4 = (undefined1 *)0x0;
        }
        else {
          dVar5 = ABS(*(double *)((long)puVar1 + 8) + *(double *)(param_3 + 8)) *
                  2.220446049250313e-16;
          if (dVar5 <= 2.2250738585072014e-308) {
            dVar5 = 2.2250738585072014e-308;
          }
          puVar4 = (undefined1 *)
                   (ulong)(ABS(*(double *)((long)puVar1 + 8) - *(double *)(param_3 + 8)) < dVar5);
        }
      }
    }
    _objc_release(param_3);
    return (ulong *)puVar4;
  }
  return puVar1;
}



/* Entry: 10b01521c; end: 10b0152e7; -[SCLensProcessingLocationModel isEqual:] */

bool FUN_10b01521c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) ||
         ((*(double *)(param_1 + 0x10) != *(double *)(param_3 + 0x10) ||
          (*(double *)(param_1 + 0x18) != *(double *)(param_3 + 0x18))))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10b0152e8; end: 10b0152ef; -[SCLensProcessingLocationModel intervalMilis] */

undefined8 FUN_10b0152e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0152f0; end: 10b0152f7; -[SCLensProcessingLocationModel distanceFilterMeters] */

undefined8 FUN_10b0152f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0152f8; end: 10b0152ff; -[SCLensProcessingLocationModel desiredAccuracy] */

undefined8 FUN_10b0152f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b015300; end: 10b0153ab; -[SCLensProcessingGeoData initWithWeatherData:jsonTaxonomy:] */

undefined1 *
FUN_10b015300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127044a8;
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



/* Entry: 10b0153ac; end: 10b0153cf; -[SCLensProcessingGeoData copyWithZone:] */

undefined8 FUN_10b0153ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0153d0; end: 10b015443; -[SCLensProcessingGeoData hash] */

undefined8 * FUN_10b0153d0(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b0154c4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b0154d0;
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
          goto LAB_10b0154d0;
        }
        goto LAB_10b0154c4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b0154d0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b015444; end: 10b0154eb; -[SCLensProcessingGeoData isEqual:] */

long FUN_10b015444(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0154c4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0154d0;
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
          goto LAB_10b0154d0;
        }
        goto LAB_10b0154c4;
      }
    }
    lVar3 = 0;
  }
LAB_10b0154d0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0154ec; end: 10b0154f3; -[SCLensProcessingGeoData weatherData] */

undefined8 FUN_10b0154ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0154f4; end: 10b0154fb; -[SCLensProcessingGeoData jsonTaxonomy] */

undefined8 FUN_10b0154f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0154fc; end: 10b01552b; -[SCLensProcessingGeoData .cxx_destruct] */

void FUN_10b0154fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b01552c; end: 10b015617; -[SCLensProcessingGeoHourlyForecast initWithCelsius:fahrenheit:weatherCondition:localizedWeatherCondition:displayTime:] */

undefined1 *
FUN_10b01552c(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1127044b0;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_1;
    *(undefined4 *)((long)puVar1 + 0xc) = param_2;
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b015618; end: 10b01563b; -[SCLensProcessingGeoHourlyForecast copyWithZone:] */

undefined8 FUN_10b015618(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b01563c; end: 10b01570b; -[SCLensProcessingGeoHourlyForecast hash] */

long * FUN_10b01563c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  float fVar10;
  float fVar11;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar4 = &lStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = (ulong)*(uint *)(param_1 + 8) * 0x200000 - 1;
  uVar7 = (uVar7 ^ uVar7 >> 0x18) * 0x109;
  uVar8 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar8 = (uVar8 ^ uVar8 >> 0x18) * 0x109;
  uVar7 = (uVar7 ^ uVar7 >> 0xe) * 0x15;
  lStack_50 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  uVar7 = (uVar8 ^ uVar8 >> 0xe) * 0x15;
  lStack_48 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&lStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar4 == (long *)param_3) {
LAB_10b015800:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((plVar4 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b01580c;
    puVar9 = (undefined1 *)plVar4;
    _objc_opt_class(plVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if (((ulong)puVar5 & 1) != 0) {
      fVar11 = ABS(*(float *)((long)plVar4 + 8) - *(float *)(param_3 + 8));
      fVar10 = ABS(*(float *)((long)plVar4 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar11) && (bVar1 = false, !NAN(fVar11) && !NAN(fVar10))) {
        bVar1 = fVar11 < fVar10;
      }
      if (bVar1) {
        fVar11 = ABS(*(float *)((long)plVar4 + 0xc) - *(float *)(param_3 + 0xc));
        fVar10 = ABS(*(float *)((long)plVar4 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar11) && (bVar1 = false, !NAN(fVar11) && !NAN(fVar10))) {
          bVar1 = fVar11 < fVar10;
        }
        if (((bVar1) &&
            ((lVar6 = *(long *)((long)plVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
           ((lVar6 = *(long *)((long)plVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
          puVar9 = *(undefined1 **)((long)plVar4 + 0x20);
          if (puVar9 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b01580c;
          }
          goto LAB_10b015800;
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_10b01580c:
  _objc_release(param_3);
  return (long *)puVar9;
}



/* Entry: 10b01570c; end: 10b015827; -[SCLensProcessingGeoHourlyForecast isEqual:] */

long FUN_10b01570c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b015800:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b01580c;
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
        fVar6 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
        fVar5 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
          bVar1 = fVar6 < fVar5;
        }
        if (((bVar1) &&
            ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x20);
          if (lVar4 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b01580c;
          }
          goto LAB_10b015800;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b01580c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b015828; end: 10b01582f; -[SCLensProcessingGeoHourlyForecast celsius] */

undefined4 FUN_10b015828(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b015830; end: 10b015837; -[SCLensProcessingGeoHourlyForecast fahrenheit] */

undefined4 FUN_10b015830(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b015838; end: 10b01583f; -[SCLensProcessingGeoHourlyForecast weatherCondition] */

undefined8 FUN_10b015838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b015840; end: 10b015847; -[SCLensProcessingGeoHourlyForecast localizedWeatherCondition] */

undefined8 FUN_10b015840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b015848; end: 10b01584f; -[SCLensProcessingGeoHourlyForecast displayTime] */

undefined8 FUN_10b015848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


