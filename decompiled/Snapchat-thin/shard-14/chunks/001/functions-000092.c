/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afc38d0; end: 10afc391b; +[SCContactPermissionResumeFlow openOSSettings] */

void FUN_10afc38d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae5f8;
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



/* Entry: 10afc391c; end: 10afc3967; +[SCContactPermissionResumeFlow systemAlert] */

void FUN_10afc391c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae5f8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc3968; end: 10afc398b; -[SCContactPermissionResumeFlow copyWithZone:] */

undefined8 FUN_10afc3968(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc398c; end: 10afc3993; -[SCContactPermissionResumeFlow hash] */

undefined8 FUN_10afc398c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afc3994; end: 10afc39d7; -[SCContactPermissionResumeFlow internalInit] */

void FUN_10afc3994(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703868;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afc39d8; end: 10afc3a5f; -[SCContactPermissionResumeFlow isEqual:] */

bool FUN_10afc39d8(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10afc3a60; end: 10afc3b33; -[SCContactPermissionResumeFlow matchGuide:iOS18Guide:openOSSettings:systemAlert:] */

void FUN_10afc3a60(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    lVar1 = param_3;
    if ((lVar2 != 0) && (lVar1 = param_4, lVar2 != 1)) goto LAB_10afc3aec;
  }
  else {
    lVar1 = param_5;
    if ((lVar2 != 2) && (lVar1 = param_6, lVar2 != 3)) goto LAB_10afc3aec;
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
  }
LAB_10afc3aec:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afc3b34; end: 10afc3ba7; -[SCCallUICameraScopedLensProcessingServices initWithLensProcessingServices:] */

undefined1 * FUN_10afc3b34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703870;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afc3ba8; end: 10afc3baf; -[SCCallUICameraScopedLensProcessingServices lensProcessingServices] */

undefined8 FUN_10afc3ba8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afc3bb0; end: 10afc3bbb; -[SCCallUICameraScopedLensProcessingServices .cxx_destruct] */

void FUN_10afc3bb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afc3bbc; end: 10afc3bc7; -[SCCameraUIScopedLensProcessingServices .cxx_destruct] */

void FUN_10afc3bbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afc3bc8; end: 10afc3ca3; -[SCLensProcessingBitmojiScope initWithLens:bitmojiComponent:redirectToBitmojiApp:linkBitmojiCTAObservable:] */

undefined1 *
FUN_10afc3bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112703880;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afc3ca4; end: 10afc3cab; -[SCLensProcessingBitmojiScope lens] */

undefined8 FUN_10afc3ca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afc3cac; end: 10afc3cb3; -[SCLensProcessingBitmojiScope bitmojiComponent] */

undefined8 FUN_10afc3cac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afc3cb4; end: 10afc3cbb; -[SCLensProcessingBitmojiScope shouldRedirectToBitmojiApp] */

undefined1 FUN_10afc3cb4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afc3cbc; end: 10afc3cc3; -[SCLensProcessingBitmojiScope linkBitmojiCTAObservable] */

undefined8 FUN_10afc3cbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afc3cc4; end: 10afc3cff; -[SCLensProcessingBitmojiScope .cxx_destruct] */

void FUN_10afc3cc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afc3d00; end: 10afc3d73; -[SCLensProcessingExternalImagePluginScope initWithPluginRegistry:] */

undefined1 * FUN_10afc3d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703888;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afc3d74; end: 10afc3d7b; -[SCLensProcessingExternalImagePluginScope plugInRegistry] */

undefined8 FUN_10afc3d74(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afc3d7c; end: 10afc3d87; -[SCLensProcessingExternalImagePluginScope .cxx_destruct] */

void FUN_10afc3d7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afc3d88; end: 10afc3d8b; -[SCLensProcessingFactory prepareSharedProcessorIfNeeded] */

void FUN_10afc3d88(void)

{
  return;
}



/* Entry: 10afc3d8c; end: 10afc3d93; -[SCLensProcessingFactory createLensProcessingCoreWithSettings:performer:usecase:] */

undefined8 FUN_10afc3d8c(void)

{
  return 0;
}



/* Entry: 10afc3d94; end: 10afc3d9b; -[SCLensProcessingFactory createPlainLensProcessingCoreWithSettings:performer:usecase:] */

undefined8 FUN_10afc3d94(void)

{
  return 0;
}



/* Entry: 10afc3d9c; end: 10afc3da3; -[SCLensProcessingFactory createTranscodingProcessingCoreWithSettings:performer:usecase:] */

undefined8 FUN_10afc3d9c(void)

{
  return 0;
}



/* Entry: 10afc3da4; end: 10afc3da7; -[SCLensProcessingPluginRegistry register:] */

void FUN_10afc3da4(void)

{
  return;
}



/* Entry: 10afc3da8; end: 10afc3dab; -[SCLensProcessingPluginRegistry assertPlugin] */

void FUN_10afc3da8(void)

{
  return;
}



/* Entry: 10afc3dac; end: 10afc3ecf; -[SCLensProcessingPluginsScope initWithLocationDataPluginRegistry:compassDataPluginRegistry:geoDataPluginRegistry:lensApplicator:performer:] */

undefined1 *
FUN_10afc3dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112703890;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afc3ed0; end: 10afc3ed7; -[SCLensProcessingPluginsScope locationDataPluginRegistry] */

undefined8 FUN_10afc3ed0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afc3ed8; end: 10afc3edf; -[SCLensProcessingPluginsScope compassDataPluginRegistry] */

undefined8 FUN_10afc3ed8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afc3ee0; end: 10afc3ee7; -[SCLensProcessingPluginsScope geoDataPluginRegistry] */

undefined8 FUN_10afc3ee0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afc3ee8; end: 10afc3eef; -[SCLensProcessingPluginsScope lensApplicator] */

undefined8 FUN_10afc3ee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afc3ef0; end: 10afc3ef7; -[SCLensProcessingPluginsScope performer] */

undefined8 FUN_10afc3ef0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afc3ef8; end: 10afc3f4b; -[SCLensProcessingPluginsScope .cxx_destruct] */

void FUN_10afc3ef8(long param_1)

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



/* Entry: 10afc3f4c; end: 10afc3fef; -[SCLensProcessingReverseCameraPluginScope initWithLensId:pluginRegistry:] */

undefined1 *
FUN_10afc3f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112703898;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afc3ff0; end: 10afc3ff7; -[SCLensProcessingReverseCameraPluginScope lensId] */

undefined8 FUN_10afc3ff0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afc3ff8; end: 10afc3fff; -[SCLensProcessingReverseCameraPluginScope plugInRegistry] */

undefined8 FUN_10afc3ff8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afc4000; end: 10afc402f; -[SCLensProcessingReverseCameraPluginScope .cxx_destruct] */

void FUN_10afc4000(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afc4030; end: 10afc4037; -[SCLensProcessingServices processingTracker] */

undefined8 FUN_10afc4030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afc4038; end: 10afc4097; -[SCLensProcessingServices .cxx_destruct] */

void FUN_10afc4038(long param_1)

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



/* Entry: 10afc4098; end: 10afc415b; -[SCLensProcessingTouchesScope initWithEffectIdsObservable:touchProcessingComponent:touchProcessingActive:shouldBlockTouch:requiresPostCaptureTouchSupport:] */

undefined1 *
FUN_10afc4098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1127038a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afc415c; end: 10afc4163; -[SCLensProcessingTouchesScope effectIdsObservable] */

undefined8 FUN_10afc415c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afc4164; end: 10afc416b; -[SCLensProcessingTouchesScope touchProcessingComponent] */

undefined8 FUN_10afc4164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afc416c; end: 10afc4173; -[SCLensProcessingTouchesScope touchProcessingActive] */

undefined1 FUN_10afc416c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afc4174; end: 10afc417b; -[SCLensProcessingTouchesScope shouldBlockTouch] */

undefined1 FUN_10afc4174(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afc417c; end: 10afc4183; -[SCLensProcessingTouchesScope requiresPostCaptureTouchSupport] */

undefined1 FUN_10afc417c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10afc4184; end: 10afc41b3; -[SCLensProcessingTouchesScope .cxx_destruct] */

void FUN_10afc4184(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afc41b4; end: 10afc41df; +[SCCGamesChatController valdiMarshallableObjectDescriptor] */

void FUN_10afc41b4(undefined8 *param_1)

{
  *param_1 = &PTR_s_onTap_110ca8d60;
  param_1[1] = &PTR_DAT_110ca8d90;
  param_1[2] = &PTR_DAT_110ca8d30;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afc41e0; end: 10afc4207;  */

undefined8 FUN_10afc41e0(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(undefined4 *)(param_2 + 2));
  return 0;
}



/* Entry: 10afc4208; end: 10afc4283;  */

void FUN_10afc4208(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10afc4458;
  puStack_30 = &UNK_1108d0d40;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  func_0x00010afc44ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10afc4284; end: 10afc428f; +[SCCGameMessageView componentPath] */

undefined ** FUN_10afc4284(void)

{
  return &PTR____CFConstantStringClassReference_110f48298;
}



/* Entry: 10afc4290; end: 10afc42af; -[SCCGameMessageView initWithViewModel:componentContext:runtime:] */

void FUN_10afc4290(void)

{
  FUN_10afc4488(PTR_PTR_1127038b0);
  return;
}



/* Entry: 10afc42b0; end: 10afc42e3; -[SCCGameMessageView setViewModel:] */

void FUN_10afc42b0(void)

{
  func_0x00010afc449c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc44b4();
  func_0x00010afc44ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afc42e4; end: 10afc431f; -[SCCGameMessageView viewModel] */

void FUN_10afc42e4(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc44ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10afc4320; end: 10afc432b; +[SCCGamesChatInputBarView componentPath] */

undefined ** FUN_10afc4320(void)

{
  return &PTR____CFConstantStringClassReference_110f482b8;
}



/* Entry: 10afc432c; end: 10afc434b; -[SCCGamesChatInputBarView initWithViewModel:componentContext:runtime:] */

void FUN_10afc432c(void)

{
  FUN_10afc4488(PTR_PTR_1127038b8);
  return;
}



/* Entry: 10afc434c; end: 10afc437f; -[SCCGamesChatInputBarView setViewModel:] */

void FUN_10afc434c(void)

{
  func_0x00010afc449c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc44b4();
  func_0x00010afc44ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afc4380; end: 10afc43bb; -[SCCGamesChatInputBarView viewModel] */

void FUN_10afc4380(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc44ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10afc43bc; end: 10afc43c7; +[SCCGamesChatMessageView componentPath] */

undefined ** FUN_10afc43bc(void)

{
  return &PTR____CFConstantStringClassReference_110f482d8;
}



/* Entry: 10afc43c8; end: 10afc43e7; -[SCCGamesChatMessageView initWithViewModel:componentContext:runtime:] */

void FUN_10afc43c8(void)

{
  FUN_10afc4488(PTR_PTR_1127038c0);
  return;
}



/* Entry: 10afc43e8; end: 10afc441b; -[SCCGamesChatMessageView setViewModel:] */

void FUN_10afc43e8(void)

{
  func_0x00010afc449c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc44b4();
  func_0x00010afc44ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afc441c; end: 10afc4457; -[SCCGamesChatMessageView viewModel] */

void FUN_10afc441c(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc44ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10afc4458; end: 10afc4487;  */

void FUN_10afc4458(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10afc4488; end: 10afc44d7;  */

void FUN_10afc4488(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 10afc44d8; end: 10afc44db; +[SCCPresenceCreatePresenceService modulePath] */

undefined ** FUN_10afc44d8(void)

{
  return &PTR____CFConstantStringClassReference_110f482f8;
}



/* Entry: 10afc44dc; end: 10afc44df; +[SCCPresenceCreatePresenceService asyncStrictMode] */

undefined8 FUN_10afc44dc(void)

{
  return 0;
}



/* Entry: 10afc44e0; end: 10afc4523; -[SCCPresenceCreatePresenceService createPresenceService] */

void FUN_10afc44e0(long param_1)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc4a08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10afc4524; end: 10afc458b; +[SCCPresenceCreatePresenceService invokeWithJSRuntimeProvider:completionHandler:] */

void FUN_10afc4524(void)

{
  long unaff_x20;
  undefined8 uStack_30;
  
  func_0x00010afc4a88();
  (**(code **)(unaff_x20 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc4b0c();
  func_0x00010afc4a10(FUN_10afc458c);
  func_0x00010afc4a30();
  func_0x00010afc4ac8();
  func_0x00010afc4a60();
  _objc_release(uStack_30);
  func_0x00010afc4a08();
  func_0x00010afc4aa8();
  return;
}



/* Entry: 10afc458c; end: 10afc45f7;  */

void FUN_10afc458c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da570;
  func_0x00010bfbc0e0(PTR_PTR_1126da570,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc4a38();
  _objc_release();
  func_0x00010afc4a28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10afc45f8; end: 10afc460b; +[SCCPresenceCreatePresenceService valdiMarshallableObjectDescriptor] */

void FUN_10afc45f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca8da0;
  param_1[1] = &PTR_DAT_110ca8dd0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10afc460c; end: 10afc460f; +[SCCPresenceGetPlatformActiveConversationsInfoObservable modulePath] */

undefined ** FUN_10afc460c(void)

{
  return &PTR____CFConstantStringClassReference_110f482f8;
}



/* Entry: 10afc4610; end: 10afc4613; +[SCCPresenceGetPlatformActiveConversationsInfoObservable asyncStrictMode] */

undefined8 FUN_10afc4610(void)

{
  return 0;
}



/* Entry: 10afc4614; end: 10afc4657; -[SCCPresenceGetPlatformActiveConversationsInfoObservable getPlatformActiveConversationsInfoObservable] */

void FUN_10afc4614(long param_1)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc4a08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10afc4658; end: 10afc46bf; +[SCCPresenceGetPlatformActiveConversationsInfoObservable invokeWithJSRuntimeProvider:completionHandler:] */

void FUN_10afc4658(void)

{
  long unaff_x20;
  undefined8 uStack_30;
  
  func_0x00010afc4a88();
  (**(code **)(unaff_x20 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc4b0c();
  func_0x00010afc4a10(FUN_10afc46c0);
  func_0x00010afc4a30();
  func_0x00010afc4ac8();
  func_0x00010afc4a60();
  _objc_release(uStack_30);
  func_0x00010afc4a08();
  func_0x00010afc4aa8();
  return;
}



/* Entry: 10afc46c0; end: 10afc472b;  */

void FUN_10afc46c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da568;
  func_0x00010bfbc0e0(PTR_PTR_1126da568,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc4a38();
  _objc_release();
  func_0x00010afc4a28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10afc472c; end: 10afc473f; +[SCCPresenceGetPlatformActiveConversationsInfoObservable valdiMarshallableObjectDescriptor] */

void FUN_10afc472c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca8de0;
  param_1[1] = &PTR_s_SCBridgeObservable_110ca8e10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10afc4740; end: 10afc4743; +[SCCPresenceOnGameJoined modulePath] */

undefined ** FUN_10afc4740(void)

{
  return &PTR____CFConstantStringClassReference_110f482f8;
}



/* Entry: 10afc4744; end: 10afc4747; +[SCCPresenceOnGameJoined asyncStrictMode] */

undefined8 FUN_10afc4744(void)

{
  return 0;
}



/* Entry: 10afc4748; end: 10afc477f; -[SCCPresenceOnGameJoined onGameJoinedWithGameEvent:] */

void FUN_10afc4748(void)

{
  func_0x00010afc4a78();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc4ab8();
  func_0x00010afc4a08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afc4780; end: 10afc4857; +[SCCPresenceOnGameJoined invokeWithJSRuntimeProvider:gameEvent:completionHandler:] */

void FUN_10afc4780(void)

{
  long unaff_x21;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010afc4a4c();
  func_0x00010afc4a30();
  (**(code **)(unaff_x21 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc4af8();
  func_0x00010afc49e8(0x10afc4804,0xc2000000);
  _objc_retain();
  _objc_retain();
  func_0x00010afc4ae0();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  func_0x00010afc4a60();
  func_0x00010afc4aa8();
  func_0x00010afc4a08();
  func_0x00010afc4a28();
  return;
}



/* Entry: 10afc4858; end: 10afc486b; +[SCCPresenceOnGameJoined valdiMarshallableObjectDescriptor] */

void FUN_10afc4858(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca8e28;
  param_1[1] = &PTR_DAT_110ca8e58;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10afc486c; end: 10afc486f; +[SCCPresenceOnGameLeft modulePath] */

undefined ** FUN_10afc486c(void)

{
  return &PTR____CFConstantStringClassReference_110f482f8;
}



/* Entry: 10afc4870; end: 10afc4873; +[SCCPresenceOnGameLeft asyncStrictMode] */

undefined8 FUN_10afc4870(void)

{
  return 0;
}



/* Entry: 10afc4874; end: 10afc48ab; -[SCCPresenceOnGameLeft onGameLeftWithGameEvent:] */

void FUN_10afc4874(void)

{
  func_0x00010afc4a78();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc4ab8();
  func_0x00010afc4a08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afc48ac; end: 10afc4983; +[SCCPresenceOnGameLeft invokeWithJSRuntimeProvider:gameEvent:completionHandler:] */

void FUN_10afc48ac(void)

{
  long unaff_x21;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010afc4a4c();
  func_0x00010afc4a30();
  (**(code **)(unaff_x21 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc4af8();
  func_0x00010afc49e8(0x10afc4930,0xc2000000);
  _objc_retain();
  _objc_retain();
  func_0x00010afc4ae0();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  func_0x00010afc4a60();
  func_0x00010afc4aa8();
  func_0x00010afc4a08();
  func_0x00010afc4a28();
  return;
}



/* Entry: 10afc4984; end: 10afc4997; +[SCCPresenceOnGameLeft valdiMarshallableObjectDescriptor] */

void FUN_10afc4984(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca8e68;
  param_1[1] = &PTR_DAT_110ca8e98;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10afc4998; end: 10afc4b1f; +[SCCPresencePlatformPresenceService valdiMarshallableObjectDescriptor] */

void FUN_10afc4998(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca8ea8;
  param_1[1] = &PTR_s_SCBridgeObservable_110ca8ef0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afc4b20; end: 10afc4b3b; +[SCCAssertPlatformAssertFail valdiMarshallableObjectDescriptor] */

void FUN_10afc4b20(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ca8f10;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afc4b3c; end: 10afc4b9b;  */

undefined8 FUN_10afc4b3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df2c8;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10afc4b9c; end: 10afc4ba3; -[SCCGamesChatTapEvent__Enum init] */

void FUN_10afc4b9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10afc4ba4; end: 10afc4bab; -[SCCGamesChatViewMode__Enum init] */

void FUN_10afc4ba4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10afc4bac; end: 10afc4be7; -[SCCGameLensInfo initWithLensName:lensIconUrl:conversationId:gameSessionId:lensId:analyticsMessageId:isGroup:] */

void FUN_10afc4bac(undefined8 param_1)

{
  func_0x00010afc5028(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10afc4be8; end: 10afc4bf7; +[SCCGameLensInfo valdiMarshallableObjectDescriptor] */

void FUN_10afc4be8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ca8f40;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afc4bf8; end: 10afc4c2b; -[SCCGameMessageContext init] */

void FUN_10afc4bf8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127038d0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10afc4c2c; end: 10afc4c3f; +[SCCGameMessageContext valdiMarshallableObjectDescriptor] */

void FUN_10afc4c2c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca9000;
  param_1[1] = &PTR_s_SCBridgeObservable_110ca9060;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afc4c40; end: 10afc4c63; -[SCCGameMessageInfo initWithMessageId:timestamp:senderUserId:] */

void FUN_10afc4c40(void)

{
  func_0x00010afc5048(PTR_PTR_1127038d8);
  func_0x00010afc5028();
  return;
}



/* Entry: 10afc4c64; end: 10afc4c73; +[SCCGameMessageInfo valdiMarshallableObjectDescriptor] */

void FUN_10afc4c64(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_messageId_110ca9078;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afc4c74; end: 10afc4ca3; -[SCCGameMessageViewModel initWithGameLensInfo:messages:] */

void FUN_10afc4c74(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010afc5048(PTR_PTR_1127038e0);
  func_0x00010afc5058(auStack_20);
  return;
}



/* Entry: 10afc4ca4; end: 10afc4ccb; +[SCCGameMessageViewModel valdiMarshallableObjectDescriptor] */

void FUN_10afc4ca4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca9108;
  param_1[1] = &PTR_DAT_110ca9180;
  param_1[2] = &PTR_s_ob_v_110ca90d8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afc4ccc; end: 10afc4cf3;  */

undefined8 FUN_10afc4ccc(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 10afc4cf4; end: 10afc4d73;  */

void FUN_10afc4cf4(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10afc4fe8;
  puStack_30 = &UNK_110842508;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}


