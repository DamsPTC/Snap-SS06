/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af3d454; end: 10af3d45b; -[SCStoriesPlaybackLoggingInfo storySessionId] */

undefined8 FUN_10af3d454(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3d45c; end: 10af3d463; -[SCStoriesPlaybackLoggingInfo mapSessionId] */

undefined8 FUN_10af3d45c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af3d464; end: 10af3d46b; -[SCStoriesPlaybackLoggingInfo mapViewportSessionId] */

undefined8 FUN_10af3d464(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af3d46c; end: 10af3d473; -[SCStoriesPlaybackLoggingInfo placeSessionId] */

undefined8 FUN_10af3d46c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af3d474; end: 10af3d47b; -[SCStoriesPlaybackLoggingInfo sourceType] */

undefined8 FUN_10af3d474(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af3d47c; end: 10af3d483; -[SCStoriesPlaybackLoggingInfo mapSourceType] */

undefined8 FUN_10af3d47c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af3d484; end: 10af3d48b; -[SCStoriesPlaybackLoggingInfo mapStoryType] */

undefined8 FUN_10af3d484(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10af3d48c; end: 10af3d493; -[SCStoriesPlaybackLoggingInfo discoverFeedPageSessionId] */

undefined8 FUN_10af3d48c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10af3d494; end: 10af3d49b; -[SCStoriesPlaybackLoggingInfo mapPlaceComponentType] */

undefined8 FUN_10af3d494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10af3d49c; end: 10af3d4cb; -[SCStoriesPlaybackLoggingInfo .cxx_destruct] */

void FUN_10af3d49c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,0);
  return;
}



/* Entry: 10af3d4cc; end: 10af3d5cf; -[SCStorySnapSaveLogParameters initWithStorySnapId:posterGuid:storyType:storyTypeSpecific:mediaType:savedToMemories:publicationId:] */

undefined1 *
FUN_10af3d4cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112702a60;
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
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3d5d0; end: 10af3d5f3; -[SCStorySnapSaveLogParameters copyWithZone:] */

undefined8 FUN_10af3d5d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3d5f4; end: 10af3d68f; -[SCStorySnapSaveLogParameters hash] */

undefined8 * FUN_10af3d5f4(long param_1,undefined8 param_2,undefined1 *param_3)

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
  long lStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  lVar5 = *(long *)(param_1 + 0x30);
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10af3d768:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af3d774;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20) &&
          (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))) &&
         (*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30))))) &&
       (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
          if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
            func_0x00010c071ae0();
            goto LAB_10af3d774;
          }
          goto LAB_10af3d768;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10af3d774:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10af3d690; end: 10af3d78f; -[SCStorySnapSaveLogParameters isEqual:] */

long FUN_10af3d690(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af3d768:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3d774;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
          (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) &&
       (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x38);
          if (lVar3 != *(long *)(param_3 + 0x38)) {
            func_0x00010c071ae0();
            goto LAB_10af3d774;
          }
          goto LAB_10af3d768;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af3d774:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3d790; end: 10af3d797; -[SCStorySnapSaveLogParameters storySnapId] */

undefined8 FUN_10af3d790(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af3d798; end: 10af3d79f; -[SCStorySnapSaveLogParameters posterGuid] */

undefined8 FUN_10af3d798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af3d7a0; end: 10af3d7a7; -[SCStorySnapSaveLogParameters storyType] */

undefined8 FUN_10af3d7a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af3d7a8; end: 10af3d7af; -[SCStorySnapSaveLogParameters storyTypeSpecific] */

undefined8 FUN_10af3d7a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af3d7b0; end: 10af3d7b7; -[SCStorySnapSaveLogParameters mediaType] */

undefined8 FUN_10af3d7b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af3d7b8; end: 10af3d7bf; -[SCStorySnapSaveLogParameters savedToMemories] */

undefined1 FUN_10af3d7b8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af3d7c0; end: 10af3d7c7; -[SCStorySnapSaveLogParameters publicationId] */

undefined8 FUN_10af3d7c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10af3d7c8; end: 10af3d803; -[SCStorySnapSaveLogParameters .cxx_destruct] */

void FUN_10af3d7c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af3d804; end: 10af3d81f; +[SCStorySnapSaveLogParametersBuilder storySnapSaveLogParameters] */

void FUN_10af3d804(void)

{
  _objc_alloc_init(PTR_PTR_1126b1360);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af3d820; end: 10af3d9eb; +[SCStorySnapSaveLogParametersBuilder storySnapSaveLogParametersFromExistingStorySnapSaveLogParameters:] */

void FUN_10af3d820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  puVar1 = PTR_PTR_1126b1360;
  _objc_retain(param_3);
  func_0x00010c25b240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c25b200(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ba680(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c1057a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b5900(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c25b720(param_3);
  puVar7 = puVar5;
  func_0x00010c2ba700(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c25b7c0(param_3);
  puVar8 = puVar7;
  func_0x00010c2ba720(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0c6c20(param_3);
  puVar9 = puVar8;
  func_0x00010c2b3b00(puVar8,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c14be20(param_3);
  puVar10 = puVar9;
  func_0x00010c2b7800(puVar9,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar11 = puVar10;
  func_0x00010c2b6440(puVar10,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10af3d9ec; end: 10af3da37; -[SCStorySnapSaveLogParametersBuilder build] */

void FUN_10af3d9ec(void)

{
  _objc_alloc(PTR_PTR_1126deaa0);
  func_0x00010c04e260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af3da38; end: 10af3da6f; -[SCStorySnapSaveLogParametersBuilder withStorySnapId:] */

long FUN_10af3da38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10af3da70; end: 10af3daa7; -[SCStorySnapSaveLogParametersBuilder withPosterGuid:] */

long FUN_10af3da70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10af3daa8; end: 10af3daaf; -[SCStorySnapSaveLogParametersBuilder withStoryType:] */

void FUN_10af3daa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10af3dab0; end: 10af3dab7; -[SCStorySnapSaveLogParametersBuilder withStoryTypeSpecific:] */

void FUN_10af3dab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10af3dab8; end: 10af3dabf; -[SCStorySnapSaveLogParametersBuilder withMediaType:] */

void FUN_10af3dab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10af3dac0; end: 10af3dac7; -[SCStorySnapSaveLogParametersBuilder withSavedToMemories:] */

void FUN_10af3dac0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10af3dac8; end: 10af3daff; -[SCStorySnapSaveLogParametersBuilder withPublicationId:] */

long FUN_10af3dac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10af3db00; end: 10af3db3b; -[SCStorySnapSaveLogParametersBuilder .cxx_destruct] */

void FUN_10af3db00(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3db3c; end: 10af3dc3b; -[SCStorySnapScreenshotLogParameters initWithStorySnapId:posterGuid:storyType:storyTypeSpecific:mediaType:viewLocationPos:viewSource:snapTimeViewed:snapTime:isSpectacles:] */

undefined1 *
FUN_10af3db3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_112702a68;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    *(undefined8 *)((long)puVar1 + 0x40) = param_11;
    *(undefined8 *)((long)puVar1 + 0x48) = param_1;
    *(undefined8 *)((long)puVar1 + 0x50) = param_2;
    *(undefined1 *)((long)puVar1 + 8) = param_12;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3dc3c; end: 10af3dc5f; -[SCStorySnapScreenshotLogParameters copyWithZone:] */

undefined8 FUN_10af3dc3c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3dc60; end: 10af3dd3f; -[SCStorySnapScreenshotLogParameters hash] */

undefined8 * FUN_10af3dc60(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  double dVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uStack_68 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  lVar5 = *(long *)(param_1 + 0x40);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  uVar6 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_40 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  puVar3 = &uStack_78;
  uStack_70 = uVar2;
  func_0x000107c3191c(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af3de90:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af3de9c;
    puVar7 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((ulong)puVar4 & 1) != 0) &&
        ((((puVar3[4] == param_3[4] && (puVar3[5] == param_3[5])) && (puVar3[6] == param_3[6])) &&
         ((puVar3[7] == param_3[7] && (puVar3[8] == param_3[8])))))) &&
       (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      dVar8 = ABS((double)puVar3[9] - (double)param_3[9]);
      if ((dVar8 < 2.2250738585072014e-308) ||
         (dVar8 < ABS((double)puVar3[9] + (double)param_3[9]) * 2.220446049250313e-16)) {
        dVar8 = ABS((double)puVar3[10] - (double)param_3[10]);
        if (((dVar8 < 2.2250738585072014e-308) ||
            (dVar8 < ABS((double)puVar3[10] + (double)param_3[10]) * 2.220446049250313e-16)) &&
           ((lVar5 = puVar3[2], lVar5 == param_3[2] || (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
          puVar7 = (undefined8 *)puVar3[3];
          if (puVar7 != (undefined8 *)param_3[3]) {
            func_0x00010c071ae0();
            goto LAB_10af3de9c;
          }
          goto LAB_10af3de90;
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_10af3de9c:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10af3dd40; end: 10af3deb7; -[SCStorySnapScreenshotLogParameters isEqual:] */

long FUN_10af3dd40(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af3de90:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3de9c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
           (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
          (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
         ((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
          (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))))) &&
       (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      dVar4 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50));
        if (((dVar4 < 2.2250738585072014e-308) ||
            (dVar4 < ABS(*(double *)(param_1 + 0x50) + *(double *)(param_3 + 0x50)) *
                     2.220446049250313e-16)) &&
           ((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10af3de9c;
          }
          goto LAB_10af3de90;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af3de9c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3deb8; end: 10af3debf; -[SCStorySnapScreenshotLogParameters storySnapId] */

undefined8 FUN_10af3deb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af3dec0; end: 10af3dec7; -[SCStorySnapScreenshotLogParameters posterGuid] */

undefined8 FUN_10af3dec0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af3dec8; end: 10af3decf; -[SCStorySnapScreenshotLogParameters storyType] */

undefined8 FUN_10af3dec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af3ded0; end: 10af3ded7; -[SCStorySnapScreenshotLogParameters storyTypeSpecific] */

undefined8 FUN_10af3ded0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af3ded8; end: 10af3dedf; -[SCStorySnapScreenshotLogParameters mediaType] */

undefined8 FUN_10af3ded8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af3dee0; end: 10af3dee7; -[SCStorySnapScreenshotLogParameters viewLocationPos] */

undefined8 FUN_10af3dee0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10af3dee8; end: 10af3deef; -[SCStorySnapScreenshotLogParameters viewSource] */

undefined8 FUN_10af3dee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10af3def0; end: 10af3def7; -[SCStorySnapScreenshotLogParameters snapTimeViewed] */

undefined8 FUN_10af3def0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10af3def8; end: 10af3deff; -[SCStorySnapScreenshotLogParameters snapTime] */

undefined8 FUN_10af3def8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10af3df00; end: 10af3df07; -[SCStorySnapScreenshotLogParameters isSpectacles] */

undefined1 FUN_10af3df00(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af3df08; end: 10af3df37; -[SCStorySnapScreenshotLogParameters .cxx_destruct] */

void FUN_10af3df08(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af3df38; end: 10af3df53; +[SCStorySnapScreenshotLogParametersBuilder storySnapScreenshotLogParameters] */

void FUN_10af3df38(void)

{
  _objc_alloc_init(PTR_PTR_1126d62b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af3df54; end: 10af3e183; +[SCStorySnapScreenshotLogParametersBuilder storySnapScreenshotLogParametersFromExistingStorySnapScreenshotLogParameters:] */

void FUN_10af3df54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  puVar1 = PTR_PTR_1126d62b8;
  _objc_retain(param_3);
  func_0x00010c25b260();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c25b200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ba680(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c1057a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b5900(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c25b720(param_3);
  puVar7 = puVar5;
  func_0x00010c2ba700(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c25b7c0(param_3);
  puVar8 = puVar7;
  func_0x00010c2ba720(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0c6c20(param_3);
  puVar9 = puVar8;
  func_0x00010c2b3b00(puVar8,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c29d400(param_3);
  puVar10 = puVar9;
  func_0x00010c2bc8e0(puVar9,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c29e220(param_3);
  puVar11 = puVar10;
  func_0x00010c2bc940(puVar10,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c243760(param_3);
  puVar12 = puVar11;
  func_0x00010c2b9820(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2436e0(param_3);
  puVar13 = puVar12;
  func_0x00010c2b97e0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c07f020(param_3);
  _objc_release(param_3);
  puVar14 = puVar13;
  func_0x00010c2b1620(puVar13,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 10af3e184; end: 10af3e1d7; -[SCStorySnapScreenshotLogParametersBuilder build] */

void FUN_10af3e184(long param_1)

{
  _objc_alloc(PTR_PTR_1126deaa8);
  func_0x00010c04e280(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af3e1d8; end: 10af3e20f; -[SCStorySnapScreenshotLogParametersBuilder withStorySnapId:] */

long FUN_10af3e1d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10af3e210; end: 10af3e247; -[SCStorySnapScreenshotLogParametersBuilder withPosterGuid:] */

long FUN_10af3e210(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10af3e248; end: 10af3e24f; -[SCStorySnapScreenshotLogParametersBuilder withStoryType:] */

void FUN_10af3e248(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10af3e250; end: 10af3e257; -[SCStorySnapScreenshotLogParametersBuilder withStoryTypeSpecific:] */

void FUN_10af3e250(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10af3e258; end: 10af3e25f; -[SCStorySnapScreenshotLogParametersBuilder withMediaType:] */

void FUN_10af3e258(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10af3e260; end: 10af3e267; -[SCStorySnapScreenshotLogParametersBuilder withViewLocationPos:] */

void FUN_10af3e260(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10af3e268; end: 10af3e26f; -[SCStorySnapScreenshotLogParametersBuilder withViewSource:] */

void FUN_10af3e268(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10af3e270; end: 10af3e277; -[SCStorySnapScreenshotLogParametersBuilder withSnapTimeViewed:] */

void FUN_10af3e270(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 10af3e278; end: 10af3e27f; -[SCStorySnapScreenshotLogParametersBuilder withSnapTime:] */

void FUN_10af3e278(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 10af3e280; end: 10af3e287; -[SCStorySnapScreenshotLogParametersBuilder withIsSpectacles:] */

void FUN_10af3e280(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10af3e288; end: 10af3e2b7; -[SCStorySnapScreenshotLogParametersBuilder .cxx_destruct] */

void FUN_10af3e288(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3e2b8; end: 10af3ec47; -[SCStorySnapViewLogParameters initWithSnaplogId:posterGuid:storyId:publicationId:storyType:storyTypeSpecific:snapTimeViewed:snapTime:stalledTimeMs:snapTimeIsLoop:fullyViewed:entryIntent:entryReason:exitIntent:exitReason:operaNavigationType:logTapPosition:tapPositionX:tapPositionY:tapPositionXRelative:tapPositionYRelative:viewLocationPos:viewSource:playbackVolume:playbackAudio:contextSnapViewMetrics:playMode:storyAccessType:mediaType:snapSource:isSpectacles:snapIndexCount:snapIndexPos:teamSnapchatStorySnapHash:isPromoted:isExplorationStory:lensId:lensRankingId:launchSourceAdId:musicTrackId:isMusicTrackBlocked:musicStickerType:signatureStr:spotlightEngagementCounts:venueId:isReplay:mediaPlaybackSessionId:lastUpdatedAt:storyViewId:isCameos:snapKitOAuthClientId:isFullScreen:multiSnapCount:multiSnapIndex:streamId:operaSessionId:pageSessionId:pageType:source:triggeringItemId:notificationId:virtualSectionItemPos:carouselRowNum:triggeringSection:feedType:contentSharerUserId:contentSharerMischiefId:contentShareId:seekPointIndex:hasSubtitlesAvailable:watchedWithSubtitles:subtitlesLocale:searchSessionId:searchQueryId:searchActionId:searchResultRankingId:isMediaViewTimeFixEnabled:shouldLogCorrectedViewTime:correctedViewTimeSecs:mediaViewTime:storyTypeVariant:itemId:creatorAttributionHidden:] */

undefined8 *
FUN_10af3e2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined4 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined1 param_24,
             undefined4 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined1 param_34,undefined4 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined4 param_39,undefined4 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined1 param_45,undefined4 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined1 param_51,undefined4 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined1 param_56,
             undefined4 param_57,undefined8 param_58,undefined1 param_59,undefined4 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
             undefined8 param_69,undefined8 param_70,undefined8 param_71,undefined8 param_72,
             undefined8 param_73,undefined8 param_74,undefined8 param_75,undefined8 param_76,
             undefined8 param_77,undefined4 param_78,undefined4 param_79,undefined8 param_80,
             undefined8 param_81,undefined8 param_82,undefined8 param_83,undefined8 param_84,
             undefined4 param_85,undefined4 param_86,undefined8 param_87,undefined8 param_88)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain();
  _objc_retain(param_29);
  _objc_retain(param_38);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_53);
  _objc_retain(param_55);
  _objc_retain(param_58);
  _objc_retain(param_63);
  _objc_retain(param_64);
  _objc_retain(param_65);
  _objc_retain(param_68);
  _objc_retain(param_69);
  _objc_retain(param_70);
  _objc_retain(param_71);
  _objc_retain(param_73);
  _objc_retain(param_74);
  _objc_retain(param_75);
  _objc_retain(param_76);
  _objc_retain(param_77);
  _objc_retain(param_80);
  _objc_retain(param_81);
  _objc_retain(param_83);
  _objc_retain(param_84);
  _objc_retain(param_87);
  _objc_retain(in_stack_000001f8);
  _objc_retain(in_stack_00000200);
  puStack_b0 = PTR_PTR_112702a70;
  puVar1 = &uStack_b8;
  uStack_b8 = param_9;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    puVar1[7] = param_15;
    puVar1[8] = param_16;
    puVar1[9] = param_1;
    puVar1[10] = param_2;
    puVar1[0xb] = param_3;
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_17;
    *(undefined1 *)((long)puVar1 + 9) = param_17._1_1_;
    puVar1[0xc] = param_19;
    puVar1[0xd] = param_20;
    puVar1[0xe] = param_21;
    puVar1[0xf] = param_22;
    puVar1[0x10] = param_23;
    *(undefined1 *)((long)puVar1 + 10) = param_24;
    puVar1[0x11] = param_4;
    puVar1[0x12] = param_5;
    puVar1[0x13] = param_6;
    puVar1[0x14] = param_7;
    puVar1[0x15] = param_26;
    puVar1[0x16] = param_27;
    puVar1[0x17] = param_8;
    puVar1[0x18] = param_28;
    uVar2 = param_29;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x19];
    puVar1[0x19] = uVar2;
    _objc_release(uVar3);
    puVar1[0x1a] = param_30;
    puVar1[0x1b] = param_31;
    puVar1[0x1c] = param_32;
    puVar1[0x1d] = param_33;
    *(undefined1 *)((long)puVar1 + 0xb) = param_34;
    puVar1[0x1e] = param_36;
    puVar1[0x1f] = param_37;
    uVar2 = param_38;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x20];
    puVar1[0x20] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_39;
    *(undefined1 *)((long)puVar1 + 0xd) = param_39._1_1_;
    uVar2 = param_41;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x21];
    puVar1[0x21] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_42;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x22];
    puVar1[0x22] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_43;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x23];
    puVar1[0x23] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_44;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x24];
    puVar1[0x24] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xe) = param_45;
    uVar2 = param_47;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x25];
    puVar1[0x25] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_48;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x26];
    puVar1[0x26] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_49;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x27];
    puVar1[0x27] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_50;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x28];
    puVar1[0x28] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xf) = param_51;
    uVar2 = param_53;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x29];
    puVar1[0x29] = uVar2;
    _objc_release(uVar3);
    puVar1[0x2a] = param_54;
    uVar2 = param_55;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x2b];
    puVar1[0x2b] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 2) = param_56;
    uVar2 = param_58;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x2c];
    puVar1[0x2c] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x11) = param_59;
    puVar1[0x2d] = param_61;
    puVar1[0x2e] = param_62;
    uVar2 = param_63;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x2f];
    puVar1[0x2f] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_64;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x30];
    puVar1[0x30] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_65;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x31];
    puVar1[0x31] = uVar2;
    _objc_release(uVar3);
    puVar1[0x32] = param_66;
    puVar1[0x33] = param_67;
    uVar2 = param_68;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x34];
    puVar1[0x34] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_69;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x35];
    puVar1[0x35] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_70;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x36];
    puVar1[0x36] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_71;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x37];
    puVar1[0x37] = uVar2;
    _objc_release(uVar3);
    puVar1[0x38] = param_72;
    uVar2 = param_73;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x39];
    puVar1[0x39] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_74;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x3a];
    puVar1[0x3a] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_75;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x3b];
    puVar1[0x3b] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_76;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x3c];
    puVar1[0x3c] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_77;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x3d];
    puVar1[0x3d] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x12) = (undefined1)param_78;
    *(undefined1 *)((long)puVar1 + 0x13) = param_78._1_1_;
    uVar2 = param_80;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x3e];
    puVar1[0x3e] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_81;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x3f];
    puVar1[0x3f] = uVar2;
    _objc_release(uVar3);
    puVar1[0x40] = param_82;
    uVar2 = param_83;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x41];
    puVar1[0x41] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_84;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x42];
    puVar1[0x42] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x14) = (undefined1)param_85;
    *(undefined1 *)((long)puVar1 + 0x15) = param_85._1_1_;
    uVar2 = param_87;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x43];
    puVar1[0x43] = uVar2;
    _objc_release(uVar3);
    puVar1[0x44] = param_88;
    puVar1[0x45] = in_stack_000001f0;
    uVar2 = in_stack_000001f8;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x46];
    puVar1[0x46] = uVar2;
    _objc_release(uVar3);
    uVar2 = in_stack_00000200;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x47];
    puVar1[0x47] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(in_stack_00000200);
  _objc_release(in_stack_000001f8);
  _objc_release(param_87);
  _objc_release(param_84);
  _objc_release(param_83);
  _objc_release(param_81);
  _objc_release(param_80);
  _objc_release(param_77);
  _objc_release(param_76);
  _objc_release(param_75);
  _objc_release(param_74);
  _objc_release(param_73);
  _objc_release(param_71);
  _objc_release(param_70);
  _objc_release(param_69);
  _objc_release(param_68);
  _objc_release(param_65);
  _objc_release(param_64);
  _objc_release(param_63);
  _objc_release(param_58);
  _objc_release(param_55);
  _objc_release(param_53);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_38);
  _objc_release(param_29);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  return puVar1;
}



/* Entry: 10af3ec48; end: 10af3ec6b; -[SCStorySnapViewLogParameters copyWithZone:] */

undefined8 FUN_10af3ec48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3ec6c; end: 10af3f0d3; -[SCStorySnapViewLogParameters hash] */

undefined8 * FUN_10af3ec6c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  double dVar10;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
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
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar5 = &uStack_2d0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_2d0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_2c8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_2c0 = uVar2;
  func_0x00010bfde980();
  uStack_2b0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_2a8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  uStack_278 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x60));
  uStack_270 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x68));
  uVar7 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_2a0 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_2a0 = uStack_2a0 ^ uStack_2a0 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_298 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_298 = uStack_298 ^ uStack_298 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_290 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_290 = uStack_290 ^ uStack_290 >> 0x16;
  uStack_288 = (ulong)*(byte *)(param_1 + 8);
  uStack_280 = (ulong)*(byte *)(param_1 + 9);
  lVar8 = *(long *)(param_1 + 0x80);
  lStack_258 = -lVar8;
  if (-1 < lVar8) {
    lStack_258 = lVar8;
  }
  uStack_250 = (ulong)*(byte *)(param_1 + 10);
  uVar7 = ~*(ulong *)(param_1 + 0x88) + *(ulong *)(param_1 + 0x88) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x90) + *(ulong *)(param_1 + 0x90) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_248 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_248 = uStack_248 ^ uStack_248 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_240 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_240 = uStack_240 ^ uStack_240 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x98) + *(ulong *)(param_1 + 0x98) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_238 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_238 = uStack_238 ^ uStack_238 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0xa0) + *(ulong *)(param_1 + 0xa0) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_230 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_230 = uStack_230 ^ uStack_230 >> 0x16;
  lVar8 = *(long *)(param_1 + 0xc0);
  uVar7 = ~*(ulong *)(param_1 + 0xb8) + *(ulong *)(param_1 + 0xb8) * 0x40000;
  uStack_268 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x70));
  uStack_260 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x78));
  uStack_228 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xa8));
  uStack_220 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xb0));
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  lStack_210 = -lVar8;
  if (-1 < lVar8) {
    lStack_210 = lVar8;
  }
  uStack_218 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_218 = uStack_218 ^ uStack_218 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 200);
  uStack_2b8 = uVar3;
  func_0x00010bfde980();
  uStack_200 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xd0));
  uStack_1f8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xd8));
  uStack_1f0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xe0));
  uStack_1e8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xe8));
  uStack_1e0 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_1d8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xf0));
  uStack_1d0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xf8));
  uVar3 = *(undefined8 *)(param_1 + 0x100);
  uStack_208 = uVar2;
  func_0x00010bfde980();
  uStack_1c0 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_1b8 = (ulong)*(byte *)(param_1 + 0xd);
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  uStack_1c8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x110);
  uStack_1b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  uStack_1a8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x120);
  uStack_1a0 = uVar2;
  func_0x00010bfde980();
  uStack_190 = (ulong)*(byte *)(param_1 + 0xe);
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  uStack_198 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x130);
  uStack_188 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x138);
  uStack_180 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x140);
  uStack_178 = uVar2;
  func_0x00010bfde980();
  uStack_168 = (ulong)*(byte *)(param_1 + 0xf);
  uVar4 = *(undefined8 *)(param_1 + 0x148);
  uStack_170 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x158);
  uVar7 = ~*(ulong *)(param_1 + 0x150) + *(ulong *)(param_1 + 0x150) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_158 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_158 = uStack_158 ^ uStack_158 >> 0x16;
  uStack_160 = uVar4;
  func_0x00010bfde980();
  uStack_148 = (ulong)*(byte *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x160);
  uStack_150 = uVar2;
  func_0x00010bfde980();
  uStack_138 = (ulong)*(byte *)(param_1 + 0x11);
  uStack_130 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x168));
  uStack_128 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x170));
  uVar2 = *(undefined8 *)(param_1 + 0x178);
  uStack_140 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x180);
  uStack_120 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x188);
  uStack_118 = uVar3;
  func_0x00010bfde980();
  uStack_108 = MP_INT_ABS(*(undefined8 *)(param_1 + 400));
  uStack_100 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x198));
  uVar3 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_110 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_f8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_f0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x1b8);
  uStack_e8 = uVar3;
  func_0x00010bfde980();
  lVar8 = *(long *)(param_1 + 0x1c0);
  uStack_d0 = *(undefined8 *)(param_1 + 0x1c8);
  lStack_d8 = -lVar8;
  if (-1 < lVar8) {
    lStack_d8 = lVar8;
  }
  uStack_e0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x1d0);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x1d8);
  uStack_c8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_c0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_b8 = uVar2;
  func_0x00010bfde980();
  uStack_a8 = (ulong)*(byte *)(param_1 + 0x12);
  uStack_a0 = (ulong)*(byte *)(param_1 + 0x13);
  uVar2 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_b0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x1f8);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  lVar8 = *(long *)(param_1 + 0x200);
  lStack_88 = -lVar8;
  if (-1 < lVar8) {
    lStack_88 = lVar8;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x208);
  uStack_90 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x210);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uStack_70 = (ulong)*(byte *)(param_1 + 0x14);
  uStack_68 = (ulong)*(byte *)(param_1 + 0x15);
  uVar2 = *(undefined8 *)(param_1 + 0x218);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x220) + *(ulong *)(param_1 + 0x220) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  lVar8 = *(long *)(param_1 + 0x228);
  lStack_50 = -lVar8;
  if (-1 < lVar8) {
    lStack_50 = lVar8;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x230);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x238);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uStack_40 = uVar2;
  func_0x000107c3191c(&uStack_2d0,0x53);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_10af3f904:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af3f910;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((((((((ulong)puVar6 & 1) != 0) &&
             ((((*(long *)((long)puVar5 + 0x38) == *(long *)(param_3 + 0x38) &&
                (*(long *)((long)puVar5 + 0x40) == *(long *)(param_3 + 0x40))) &&
               (*(char *)((long)puVar5 + 8) == param_3[8])) &&
              ((*(char *)((long)puVar5 + 9) == param_3[9] &&
               (*(long *)((long)puVar5 + 0x60) == *(long *)(param_3 + 0x60))))))) &&
            (*(long *)((long)puVar5 + 0x68) == *(long *)(param_3 + 0x68))) &&
           ((((*(long *)((long)puVar5 + 0x70) == *(long *)(param_3 + 0x70) &&
              (*(long *)((long)puVar5 + 0x78) == *(long *)(param_3 + 0x78))) &&
             ((*(long *)((long)puVar5 + 0x80) == *(long *)(param_3 + 0x80) &&
              (((*(char *)((long)puVar5 + 10) == param_3[10] &&
                (*(long *)((long)puVar5 + 0xa8) == *(long *)(param_3 + 0xa8))) &&
               (*(long *)((long)puVar5 + 0xb0) == *(long *)(param_3 + 0xb0))))))) &&
            ((*(long *)((long)puVar5 + 0xc0) == *(long *)(param_3 + 0xc0) &&
             (*(long *)((long)puVar5 + 0xd0) == *(long *)(param_3 + 0xd0))))))) &&
          (*(long *)((long)puVar5 + 0xd8) == *(long *)(param_3 + 0xd8))) &&
         ((((*(long *)((long)puVar5 + 0xe0) == *(long *)(param_3 + 0xe0) &&
            (*(long *)((long)puVar5 + 0xe8) == *(long *)(param_3 + 0xe8))) &&
           ((*(char *)((long)puVar5 + 0xb) == param_3[0xb] &&
            (((*(long *)((long)puVar5 + 0xf0) == *(long *)(param_3 + 0xf0) &&
              (*(long *)((long)puVar5 + 0xf8) == *(long *)(param_3 + 0xf8))) &&
             (*(char *)((long)puVar5 + 0xc) == param_3[0xc])))))) &&
          (((*(char *)((long)puVar5 + 0xd) == param_3[0xd] &&
            (*(char *)((long)puVar5 + 0xe) == param_3[0xe])) &&
           ((*(char *)((long)puVar5 + 0xf) == param_3[0xf] &&
            (((*(char *)((long)puVar5 + 0x10) == param_3[0x10] &&
              (*(char *)((long)puVar5 + 0x11) == param_3[0x11])) &&
             ((*(long *)((long)puVar5 + 0x168) == *(long *)(param_3 + 0x168) &&
              ((((*(long *)((long)puVar5 + 0x170) == *(long *)(param_3 + 0x170) &&
                 (*(long *)((long)puVar5 + 400) == *(long *)(param_3 + 400))) &&
                (*(long *)((long)puVar5 + 0x198) == *(long *)(param_3 + 0x198))) &&
               ((*(long *)((long)puVar5 + 0x1c0) == *(long *)(param_3 + 0x1c0) &&
                (*(char *)((long)puVar5 + 0x12) == param_3[0x12])))))))))))))))) &&
        ((*(char *)((long)puVar5 + 0x13) == param_3[0x13] &&
         ((*(long *)((long)puVar5 + 0x200) == *(long *)(param_3 + 0x200) &&
          (*(char *)((long)puVar5 + 0x14) == param_3[0x14])))))) &&
       ((*(char *)((long)puVar5 + 0x15) == param_3[0x15] &&
        (*(long *)((long)puVar5 + 0x228) == *(long *)(param_3 + 0x228))))) {
      dVar10 = ABS(*(double *)((long)puVar5 + 0x48) - *(double *)(param_3 + 0x48));
      if ((dVar10 < 2.2250738585072014e-308) ||
         (dVar10 < ABS(*(double *)((long)puVar5 + 0x48) + *(double *)(param_3 + 0x48)) *
                   2.220446049250313e-16)) {
        dVar10 = ABS(*(double *)((long)puVar5 + 0x50) - *(double *)(param_3 + 0x50));
        if ((dVar10 < 2.2250738585072014e-308) ||
           (dVar10 < ABS(*(double *)((long)puVar5 + 0x50) + *(double *)(param_3 + 0x50)) *
                     2.220446049250313e-16)) {
          dVar10 = ABS(*(double *)((long)puVar5 + 0x58) - *(double *)(param_3 + 0x58));
          if ((dVar10 < 2.2250738585072014e-308) ||
             (dVar10 < ABS(*(double *)((long)puVar5 + 0x58) + *(double *)(param_3 + 0x58)) *
                       2.220446049250313e-16)) {
            dVar10 = ABS(*(double *)((long)puVar5 + 0x88) - *(double *)(param_3 + 0x88));
            if ((dVar10 < 2.2250738585072014e-308) ||
               (dVar10 < ABS(*(double *)((long)puVar5 + 0x88) + *(double *)(param_3 + 0x88)) *
                         2.220446049250313e-16)) {
              dVar10 = ABS(*(double *)((long)puVar5 + 0x90) - *(double *)(param_3 + 0x90));
              if ((dVar10 < 2.2250738585072014e-308) ||
                 (dVar10 < ABS(*(double *)((long)puVar5 + 0x90) + *(double *)(param_3 + 0x90)) *
                           2.220446049250313e-16)) {
                dVar10 = ABS(*(double *)((long)puVar5 + 0x98) - *(double *)(param_3 + 0x98));
                if ((dVar10 < 2.2250738585072014e-308) ||
                   (dVar10 < ABS(*(double *)((long)puVar5 + 0x98) + *(double *)(param_3 + 0x98)) *
                             2.220446049250313e-16)) {
                  dVar10 = ABS(*(double *)((long)puVar5 + 0xa0) - *(double *)(param_3 + 0xa0));
                  if ((dVar10 < 2.2250738585072014e-308) ||
                     (dVar10 < ABS(*(double *)((long)puVar5 + 0xa0) + *(double *)(param_3 + 0xa0)) *
                               2.220446049250313e-16)) {
                    dVar10 = ABS(*(double *)((long)puVar5 + 0xb8) - *(double *)(param_3 + 0xb8));
                    if ((dVar10 < 2.2250738585072014e-308) ||
                       (dVar10 < ABS(*(double *)((long)puVar5 + 0xb8) + *(double *)(param_3 + 0xb8))
                                 * 2.220446049250313e-16)) {
                      dVar10 = ABS(*(double *)((long)puVar5 + 0x150) - *(double *)(param_3 + 0x150))
                      ;
                      if ((dVar10 < 2.2250738585072014e-308) ||
                         (dVar10 < ABS(*(double *)((long)puVar5 + 0x150) +
                                       *(double *)(param_3 + 0x150)) * 2.220446049250313e-16)) {
                        dVar10 = ABS(*(double *)((long)puVar5 + 0x220) -
                                     *(double *)(param_3 + 0x220));
                        if (((((dVar10 < 2.2250738585072014e-308) ||
                              (dVar10 < ABS(*(double *)((long)puVar5 + 0x220) +
                                            *(double *)(param_3 + 0x220)) * 2.220446049250313e-16))
                             && ((((lVar8 = *(long *)((long)puVar5 + 0x18),
                                   lVar8 == *(long *)(param_3 + 0x18) ||
                                   (func_0x00010c071ae0(), (int)lVar8 != 0)) &&
                                  ((lVar8 = *(long *)((long)puVar5 + 0x20),
                                   lVar8 == *(long *)(param_3 + 0x20) ||
                                   (func_0x00010c071ae0(), (int)lVar8 != 0)))) &&
                                 ((lVar8 = *(long *)((long)puVar5 + 0x28),
                                  lVar8 == *(long *)(param_3 + 0x28) ||
                                  (func_0x00010c071ae0(), (int)lVar8 != 0)))))) &&
                            (((((lVar8 = *(long *)((long)puVar5 + 0x30),
                                lVar8 == *(long *)(param_3 + 0x30) ||
                                (func_0x00010c071ae0(), (int)lVar8 != 0)) &&
                               ((((lVar8 = *(long *)((long)puVar5 + 200),
                                  lVar8 == *(long *)(param_3 + 200) ||
                                  (func_0x00010c071ae0(), (int)lVar8 != 0)) &&
                                 ((lVar8 = *(long *)((long)puVar5 + 0x100),
                                  lVar8 == *(long *)(param_3 + 0x100) ||
                                  (func_0x00010c071ae0(), (int)lVar8 != 0)))) &&
                                (((lVar8 = *(long *)((long)puVar5 + 0x108),
                                  lVar8 == *(long *)(param_3 + 0x108) ||
                                  (func_0x00010c071ae0(), (int)lVar8 != 0)) &&
                                 ((lVar8 = *(long *)((long)puVar5 + 0x110),
                                  lVar8 == *(long *)(param_3 + 0x110) ||
                                  (func_0x00010c071ae0(), (int)lVar8 != 0)))))))) &&
                              (((((lVar8 = *(long *)((long)puVar5 + 0x118),
                                  lVar8 == *(long *)(param_3 + 0x118) ||
                                  (func_0x00010c071ae0(), (int)lVar8 != 0)) &&
                                 ((lVar8 = *(long *)((long)puVar5 + 0x120),
                                  lVar8 == *(long *)(param_3 + 0x120) ||
                                  (func_0x00010c071ae0(), (int)lVar8 != 0)))) &&
                                ((lVar8 = *(long *)((long)puVar5 + 0x128),
                                 lVar8 == *(long *)(param_3 + 0x128) ||
                                 (func_0x00010c071ae0(), (int)lVar8 != 0)))) &&
                               ((lVar8 = *(long *)((long)puVar5 + 0x130),
                                lVar8 == *(long *)(param_3 + 0x130) ||
                                (func_0x00010c071ae0(), (int)lVar8 != 0)))))) &&
                             (((((((((lVar8 = *(long *)((long)puVar5 + 0x138),
                                     lVar8 == *(long *)(param_3 + 0x138) ||
                                     (func_0x00010c071ae0(), (int)lVar8 != 0)) &&
                                    ((lVar8 = *(long *)((long)puVar5 + 0x140),
                                     lVar8 == *(long *)(param_3 + 0x140) ||
                                     (func_0x00010c071ae0(), (int)lVar8 != 0)))) &&
                                   ((lVar8 = *(long *)((long)puVar5 + 0x148),
                                    lVar8 == *(long *)(param_3 + 0x148) ||
                                    (func_0x00010c071ae0(), (int)lVar8 != 0)))) &&
                                  ((lVar8 = *(long *)((long)puVar5 + 0x158),
                                   lVar8 == *(long *)(param_3 + 0x158) ||
                                   (func_0x00010c071ae0(), (int)lVar8 != 0)))) &&
                                 (((lVar8 = *(long *)((long)puVar5 + 0x160),
                                   lVar8 == *(long *)(param_3 + 0x160) ||
                                   (func_0x00010c071ae0(), (int)lVar8 != 0)) &&
                                  ((lVar8 = *(long *)((long)puVar5 + 0x178),
                                   lVar8 == *(long *)(param_3 + 0x178) ||
                                   (func_0x00010c071ae0(), (int)lVar8 != 0)))))) &&
                                ((lVar8 = *(long *)((long)puVar5 + 0x180),
                                 lVar8 == *(long *)(param_3 + 0x180) ||
                                 (func_0x00010c071ae0(), (int)lVar8 != 0)))) &&
                               ((lVar8 = *(long *)((long)puVar5 + 0x188),
                                lVar8 == *(long *)(param_3 + 0x188) ||
                                (func_0x00010c071ae0(), (int)lVar8 != 0)))) &&
                              ((((lVar8 = *(long *)((long)puVar5 + 0x1a0),
                                 lVar8 == *(long *)(param_3 + 0x1a0) ||
                                 (func_0x00010c071ae0(), (int)lVar8 != 0)) &&
                                ((lVar8 = *(long *)((long)puVar5 + 0x1a8),
                                 lVar8 == *(long *)(param_3 + 0x1a8) ||
                                 (func_0x00010c071ae0(), (int)lVar8 != 0)))) &&
                               ((((lVar8 = *(long *)((long)puVar5 + 0x1b0),
                                  lVar8 == *(long *)(param_3 + 0x1b0) ||
                                  (func_0x00010c071ae0(), (int)lVar8 != 0)) &&
                                 ((lVar8 = *(long *)((long)puVar5 + 0x1b8),
                                  lVar8 == *(long *)(param_3 + 0x1b8) ||
                                  (func_0x00010c071ae0(), (int)lVar8 != 0)))) &&
                                ((((lVar8 = *(long *)((long)puVar5 + 0x1c8),
                                   lVar8 == *(long *)(param_3 + 0x1c8) ||
                                   (func_0x00010c071ae0(), (int)lVar8 != 0)) &&
                                  ((lVar8 = *(long *)((long)puVar5 + 0x1d0),
                                   lVar8 == *(long *)(param_3 + 0x1d0) ||
                                   (func_0x00010c071ae0(), (int)lVar8 != 0)))) &&
                                 ((lVar8 = *(long *)((long)puVar5 + 0x1d8),
                                  lVar8 == *(long *)(param_3 + 0x1d8) ||
                                  (func_0x00010c071ae0(), (int)lVar8 != 0)))))))))))))) &&
                           (((lVar8 = *(long *)((long)puVar5 + 0x1e0),
                             lVar8 == *(long *)(param_3 + 0x1e0) ||
                             (func_0x00010c071ae0(), (int)lVar8 != 0)) &&
                            ((((((lVar8 = *(long *)((long)puVar5 + 0x1e8),
                                 lVar8 == *(long *)(param_3 + 0x1e8) ||
                                 (func_0x00010c071ae0(), (int)lVar8 != 0)) &&
                                ((lVar8 = *(long *)((long)puVar5 + 0x1f0),
                                 lVar8 == *(long *)(param_3 + 0x1f0) ||
                                 (func_0x00010c071ae0(), (int)lVar8 != 0)))) &&
                               ((lVar8 = *(long *)((long)puVar5 + 0x1f8),
                                lVar8 == *(long *)(param_3 + 0x1f8) ||
                                (func_0x00010c071ae0(), (int)lVar8 != 0)))) &&
                              ((lVar8 = *(long *)((long)puVar5 + 0x208),
                               lVar8 == *(long *)(param_3 + 0x208) ||
                               (func_0x00010c071ae0(), (int)lVar8 != 0)))) &&
                             ((((lVar8 = *(long *)((long)puVar5 + 0x210),
                                lVar8 == *(long *)(param_3 + 0x210) ||
                                (func_0x00010c071ae0(), (int)lVar8 != 0)) &&
                               ((lVar8 = *(long *)((long)puVar5 + 0x218),
                                lVar8 == *(long *)(param_3 + 0x218) ||
                                (func_0x00010c071ae0(), (int)lVar8 != 0)))) &&
                              ((lVar8 = *(long *)((long)puVar5 + 0x230),
                               lVar8 == *(long *)(param_3 + 0x230) ||
                               (func_0x00010c071ae0(), (int)lVar8 != 0)))))))))) {
                          puVar9 = *(undefined1 **)((long)puVar5 + 0x238);
                          if (puVar9 != *(undefined1 **)(param_3 + 0x238)) {
                            func_0x00010c071ae0();
                            goto LAB_10af3f910;
                          }
                          goto LAB_10af3f904;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_10af3f910:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 10af3f0d4; end: 10af3f92b; -[SCStorySnapViewLogParameters isEqual:] */

long FUN_10af3f0d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af3f904:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3f910;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((((((uVar2 & 1) != 0) &&
             ((((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
                (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
               (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
              ((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
               (*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60))))))) &&
            (*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68))) &&
           ((((*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70) &&
              (*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78))) &&
             ((*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80) &&
              (((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
                (*(long *)(param_1 + 0xa8) == *(long *)(param_3 + 0xa8))) &&
               (*(long *)(param_1 + 0xb0) == *(long *)(param_3 + 0xb0))))))) &&
            ((*(long *)(param_1 + 0xc0) == *(long *)(param_3 + 0xc0) &&
             (*(long *)(param_1 + 0xd0) == *(long *)(param_3 + 0xd0))))))) &&
          (*(long *)(param_1 + 0xd8) == *(long *)(param_3 + 0xd8))) &&
         ((((*(long *)(param_1 + 0xe0) == *(long *)(param_3 + 0xe0) &&
            (*(long *)(param_1 + 0xe8) == *(long *)(param_3 + 0xe8))) &&
           ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
            (((*(long *)(param_1 + 0xf0) == *(long *)(param_3 + 0xf0) &&
              (*(long *)(param_1 + 0xf8) == *(long *)(param_3 + 0xf8))) &&
             (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))))) &&
          (((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
            (*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe))) &&
           ((*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf) &&
            (((*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10) &&
              (*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11))) &&
             ((*(long *)(param_1 + 0x168) == *(long *)(param_3 + 0x168) &&
              ((((*(long *)(param_1 + 0x170) == *(long *)(param_3 + 0x170) &&
                 (*(long *)(param_1 + 400) == *(long *)(param_3 + 400))) &&
                (*(long *)(param_1 + 0x198) == *(long *)(param_3 + 0x198))) &&
               ((*(long *)(param_1 + 0x1c0) == *(long *)(param_3 + 0x1c0) &&
                (*(char *)(param_1 + 0x12) == *(char *)(param_3 + 0x12))))))))))))))))) &&
        ((*(char *)(param_1 + 0x13) == *(char *)(param_3 + 0x13) &&
         ((*(long *)(param_1 + 0x200) == *(long *)(param_3 + 0x200) &&
          (*(char *)(param_1 + 0x14) == *(char *)(param_3 + 0x14))))))) &&
       ((*(char *)(param_1 + 0x15) == *(char *)(param_3 + 0x15) &&
        (*(long *)(param_1 + 0x228) == *(long *)(param_3 + 0x228))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x50) + *(double *)(param_3 + 0x50)) *
                    2.220446049250313e-16)) {
          dVar4 = ABS(*(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x58));
          if ((dVar4 < 2.2250738585072014e-308) ||
             (dVar4 < ABS(*(double *)(param_1 + 0x58) + *(double *)(param_3 + 0x58)) *
                      2.220446049250313e-16)) {
            dVar4 = ABS(*(double *)(param_1 + 0x88) - *(double *)(param_3 + 0x88));
            if ((dVar4 < 2.2250738585072014e-308) ||
               (dVar4 < ABS(*(double *)(param_1 + 0x88) + *(double *)(param_3 + 0x88)) *
                        2.220446049250313e-16)) {
              dVar4 = ABS(*(double *)(param_1 + 0x90) - *(double *)(param_3 + 0x90));
              if ((dVar4 < 2.2250738585072014e-308) ||
                 (dVar4 < ABS(*(double *)(param_1 + 0x90) + *(double *)(param_3 + 0x90)) *
                          2.220446049250313e-16)) {
                dVar4 = ABS(*(double *)(param_1 + 0x98) - *(double *)(param_3 + 0x98));
                if ((dVar4 < 2.2250738585072014e-308) ||
                   (dVar4 < ABS(*(double *)(param_1 + 0x98) + *(double *)(param_3 + 0x98)) *
                            2.220446049250313e-16)) {
                  dVar4 = ABS(*(double *)(param_1 + 0xa0) - *(double *)(param_3 + 0xa0));
                  if ((dVar4 < 2.2250738585072014e-308) ||
                     (dVar4 < ABS(*(double *)(param_1 + 0xa0) + *(double *)(param_3 + 0xa0)) *
                              2.220446049250313e-16)) {
                    dVar4 = ABS(*(double *)(param_1 + 0xb8) - *(double *)(param_3 + 0xb8));
                    if ((dVar4 < 2.2250738585072014e-308) ||
                       (dVar4 < ABS(*(double *)(param_1 + 0xb8) + *(double *)(param_3 + 0xb8)) *
                                2.220446049250313e-16)) {
                      dVar4 = ABS(*(double *)(param_1 + 0x150) - *(double *)(param_3 + 0x150));
                      if ((dVar4 < 2.2250738585072014e-308) ||
                         (dVar4 < ABS(*(double *)(param_1 + 0x150) + *(double *)(param_3 + 0x150)) *
                                  2.220446049250313e-16)) {
                        dVar4 = ABS(*(double *)(param_1 + 0x220) - *(double *)(param_3 + 0x220));
                        if (((((dVar4 < 2.2250738585072014e-308) ||
                              (dVar4 < ABS(*(double *)(param_1 + 0x220) +
                                           *(double *)(param_3 + 0x220)) * 2.220446049250313e-16))
                             && ((((lVar3 = *(long *)(param_1 + 0x18),
                                   lVar3 == *(long *)(param_3 + 0x18) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                  ((lVar3 = *(long *)(param_1 + 0x20),
                                   lVar3 == *(long *)(param_3 + 0x20) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                 ((lVar3 = *(long *)(param_1 + 0x28),
                                  lVar3 == *(long *)(param_3 + 0x28) ||
                                  (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
                            (((((lVar3 = *(long *)(param_1 + 0x30),
                                lVar3 == *(long *)(param_3 + 0x30) ||
                                (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                               ((((lVar3 = *(long *)(param_1 + 200),
                                  lVar3 == *(long *)(param_3 + 200) ||
                                  (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                 ((lVar3 = *(long *)(param_1 + 0x100),
                                  lVar3 == *(long *)(param_3 + 0x100) ||
                                  (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                (((lVar3 = *(long *)(param_1 + 0x108),
                                  lVar3 == *(long *)(param_3 + 0x108) ||
                                  (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                 ((lVar3 = *(long *)(param_1 + 0x110),
                                  lVar3 == *(long *)(param_3 + 0x110) ||
                                  (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) &&
                              (((((lVar3 = *(long *)(param_1 + 0x118),
                                  lVar3 == *(long *)(param_3 + 0x118) ||
                                  (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                 ((lVar3 = *(long *)(param_1 + 0x120),
                                  lVar3 == *(long *)(param_3 + 0x120) ||
                                  (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                ((lVar3 = *(long *)(param_1 + 0x128),
                                 lVar3 == *(long *)(param_3 + 0x128) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                               ((lVar3 = *(long *)(param_1 + 0x130),
                                lVar3 == *(long *)(param_3 + 0x130) ||
                                (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
                             (((((((((lVar3 = *(long *)(param_1 + 0x138),
                                     lVar3 == *(long *)(param_3 + 0x138) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                    ((lVar3 = *(long *)(param_1 + 0x140),
                                     lVar3 == *(long *)(param_3 + 0x140) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                   ((lVar3 = *(long *)(param_1 + 0x148),
                                    lVar3 == *(long *)(param_3 + 0x148) ||
                                    (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                  ((lVar3 = *(long *)(param_1 + 0x158),
                                   lVar3 == *(long *)(param_3 + 0x158) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                 (((lVar3 = *(long *)(param_1 + 0x160),
                                   lVar3 == *(long *)(param_3 + 0x160) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                  ((lVar3 = *(long *)(param_1 + 0x178),
                                   lVar3 == *(long *)(param_3 + 0x178) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
                                ((lVar3 = *(long *)(param_1 + 0x180),
                                 lVar3 == *(long *)(param_3 + 0x180) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                               ((lVar3 = *(long *)(param_1 + 0x188),
                                lVar3 == *(long *)(param_3 + 0x188) ||
                                (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                              ((((lVar3 = *(long *)(param_1 + 0x1a0),
                                 lVar3 == *(long *)(param_3 + 0x1a0) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                ((lVar3 = *(long *)(param_1 + 0x1a8),
                                 lVar3 == *(long *)(param_3 + 0x1a8) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                               ((((lVar3 = *(long *)(param_1 + 0x1b0),
                                  lVar3 == *(long *)(param_3 + 0x1b0) ||
                                  (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                 ((lVar3 = *(long *)(param_1 + 0x1b8),
                                  lVar3 == *(long *)(param_3 + 0x1b8) ||
                                  (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                ((((lVar3 = *(long *)(param_1 + 0x1c8),
                                   lVar3 == *(long *)(param_3 + 0x1c8) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                  ((lVar3 = *(long *)(param_1 + 0x1d0),
                                   lVar3 == *(long *)(param_3 + 0x1d0) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                 ((lVar3 = *(long *)(param_1 + 0x1d8),
                                  lVar3 == *(long *)(param_3 + 0x1d8) ||
                                  (func_0x00010c071ae0(), (int)lVar3 != 0)))))))))))))) &&
                           (((lVar3 = *(long *)(param_1 + 0x1e0),
                             lVar3 == *(long *)(param_3 + 0x1e0) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                            ((((((lVar3 = *(long *)(param_1 + 0x1e8),
                                 lVar3 == *(long *)(param_3 + 0x1e8) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                ((lVar3 = *(long *)(param_1 + 0x1f0),
                                 lVar3 == *(long *)(param_3 + 0x1f0) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                               ((lVar3 = *(long *)(param_1 + 0x1f8),
                                lVar3 == *(long *)(param_3 + 0x1f8) ||
                                (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                              ((lVar3 = *(long *)(param_1 + 0x208),
                               lVar3 == *(long *)(param_3 + 0x208) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                             ((((lVar3 = *(long *)(param_1 + 0x210),
                                lVar3 == *(long *)(param_3 + 0x210) ||
                                (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                               ((lVar3 = *(long *)(param_1 + 0x218),
                                lVar3 == *(long *)(param_3 + 0x218) ||
                                (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                              ((lVar3 = *(long *)(param_1 + 0x230),
                               lVar3 == *(long *)(param_3 + 0x230) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)))))))))) {
                          lVar3 = *(long *)(param_1 + 0x238);
                          if (lVar3 != *(long *)(param_3 + 0x238)) {
                            func_0x00010c071ae0();
                            goto LAB_10af3f910;
                          }
                          goto LAB_10af3f904;
                        }
                      }
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
LAB_10af3f910:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3f92c; end: 10af3f933; -[SCStorySnapViewLogParameters snaplogId] */

undefined8 FUN_10af3f92c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af3f934; end: 10af3f93b; -[SCStorySnapViewLogParameters posterGuid] */

undefined8 FUN_10af3f934(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af3f93c; end: 10af3f943; -[SCStorySnapViewLogParameters storyId] */

undefined8 FUN_10af3f93c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af3f944; end: 10af3f94b; -[SCStorySnapViewLogParameters publicationId] */

undefined8 FUN_10af3f944(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af3f94c; end: 10af3f953; -[SCStorySnapViewLogParameters storyType] */

undefined8 FUN_10af3f94c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10af3f954; end: 10af3f95b; -[SCStorySnapViewLogParameters storyTypeSpecific] */

undefined8 FUN_10af3f954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10af3f95c; end: 10af3f963; -[SCStorySnapViewLogParameters snapTimeViewed] */

undefined8 FUN_10af3f95c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10af3f964; end: 10af3f96b; -[SCStorySnapViewLogParameters snapTime] */

undefined8 FUN_10af3f964(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10af3f96c; end: 10af3f973; -[SCStorySnapViewLogParameters stalledTimeMs] */

undefined8 FUN_10af3f96c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10af3f974; end: 10af3f97b; -[SCStorySnapViewLogParameters snapTimeIsLoop] */

undefined1 FUN_10af3f974(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af3f97c; end: 10af3f983; -[SCStorySnapViewLogParameters fullyViewed] */

undefined1 FUN_10af3f97c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10af3f984; end: 10af3f98b; -[SCStorySnapViewLogParameters entryIntent] */

undefined8 FUN_10af3f984(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10af3f98c; end: 10af3f993; -[SCStorySnapViewLogParameters entryReason] */

undefined8 FUN_10af3f98c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10af3f994; end: 10af3f99b; -[SCStorySnapViewLogParameters exitIntent] */

undefined8 FUN_10af3f994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10af3f99c; end: 10af3f9a3; -[SCStorySnapViewLogParameters exitReason] */

undefined8 FUN_10af3f99c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10af3f9a4; end: 10af3f9ab; -[SCStorySnapViewLogParameters operaNavigationType] */

undefined8 FUN_10af3f9a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10af3f9ac; end: 10af3f9b3; -[SCStorySnapViewLogParameters logTapPosition] */

undefined1 FUN_10af3f9ac(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10af3f9b4; end: 10af3f9bb; -[SCStorySnapViewLogParameters tapPositionX] */

undefined8 FUN_10af3f9b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10af3f9bc; end: 10af3f9c3; -[SCStorySnapViewLogParameters tapPositionY] */

undefined8 FUN_10af3f9bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10af3f9c4; end: 10af3f9cb; -[SCStorySnapViewLogParameters tapPositionXRelative] */

undefined8 FUN_10af3f9c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10af3f9cc; end: 10af3f9d3; -[SCStorySnapViewLogParameters tapPositionYRelative] */

undefined8 FUN_10af3f9cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10af3f9d4; end: 10af3f9db; -[SCStorySnapViewLogParameters viewLocationPos] */

undefined8 FUN_10af3f9d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10af3f9dc; end: 10af3f9e3; -[SCStorySnapViewLogParameters viewSource] */

undefined8 FUN_10af3f9dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10af3f9e4; end: 10af3f9eb; -[SCStorySnapViewLogParameters playbackVolume] */

undefined8 FUN_10af3f9e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10af3f9ec; end: 10af3f9f3; -[SCStorySnapViewLogParameters playbackAudio] */

undefined8 FUN_10af3f9ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10af3f9f4; end: 10af3f9fb; -[SCStorySnapViewLogParameters contextSnapViewMetrics] */

undefined8 FUN_10af3f9f4(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10af3f9fc; end: 10af3fa03; -[SCStorySnapViewLogParameters playMode] */

undefined8 FUN_10af3f9fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10af3fa04; end: 10af3fa0b; -[SCStorySnapViewLogParameters storyAccessType] */

undefined8 FUN_10af3fa04(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 10af3fa0c; end: 10af3fa13; -[SCStorySnapViewLogParameters mediaType] */

undefined8 FUN_10af3fa0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 10af3fa14; end: 10af3fa1b; -[SCStorySnapViewLogParameters snapSource] */

undefined8 FUN_10af3fa14(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 10af3fa1c; end: 10af3fa23; -[SCStorySnapViewLogParameters isSpectacles] */

undefined1 FUN_10af3fa1c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10af3fa24; end: 10af3fa2b; -[SCStorySnapViewLogParameters snapIndexCount] */

undefined8 FUN_10af3fa24(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 10af3fa2c; end: 10af3fa33; -[SCStorySnapViewLogParameters snapIndexPos] */

undefined8 FUN_10af3fa2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 10af3fa34; end: 10af3fa3b; -[SCStorySnapViewLogParameters teamSnapchatStorySnapHash] */

undefined8 FUN_10af3fa34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}


