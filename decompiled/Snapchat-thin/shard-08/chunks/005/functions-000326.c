/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061a1a6c; end: 1061a1a7f; +[SCCCameraDirectorModeUndoButtonContext valdiMarshallableObjectDescriptor] */

void FUN_1061a1a6c(undefined8 *param_1)

{
  *param_1 = &PTR_s_actionHandler_110912ee8;
  param_1[1] = &PTR_DAT_110912f30;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a1a80; end: 1061a1a9f; -[SCCCameraDirectorModeUndoButtonViewModel init] */

void FUN_1061a1a80(void)

{
  FUN_1061a1b70(PTR_PTR_1126f00e0);
  return;
}



/* Entry: 1061a1aa0; end: 1061a1aaf; +[SCCCameraDirectorModeUndoButtonViewModel valdiMarshallableObjectDescriptor] */

void FUN_1061a1aa0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110912f48;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a1ab0; end: 1061a1aeb; -[SCCCameraDirectorModeVerticalToolbarViewModel initWithCameraModeData:] */

void FUN_1061a1ab0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f00e8;
  uStack_20 = param_1;
  func_0x0001061a1c08(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 1061a1aec; end: 1061a1aff; +[SCCCameraDirectorModeVerticalToolbarViewModel valdiMarshallableObjectDescriptor] */

void FUN_1061a1aec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110912f78;
  param_1[1] = &PTR_DAT_110912fd8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a1b00; end: 1061a1b6f;  */

void FUN_1061a1b00(void)

{
  func_0x0001061a1bf0();
  func_0x0001061a1bd0();
  return;
}



/* Entry: 1061a1b70; end: 1061a1c3f;  */

void FUN_1061a1b70(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1061a1c40; end: 1061a1c6b; +[SCCCameraModeWidgetsIDualCameraModeWidgetActionHandler valdiMarshallableObjectDescriptor] */

void FUN_1061a1c40(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110913078;
  param_1[1] = &PTR_DAT_1109130a8;
  param_1[2] = &PTR_DAT_110913048;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1061a1c6c; end: 1061a1c93;  */

undefined8 FUN_1061a1c6c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(undefined4 *)(param_2 + 2));
  return 0;
}



/* Entry: 1061a1c94; end: 1061a1d0f;  */

void FUN_1061a1c94(undefined8 param_1)

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
  pcStack_38 = FUN_1061a23f0;
  puStack_30 = &UNK_1108d0d40;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  func_0x0001061a245c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1061a1d10; end: 1061a1d67;  */

undefined8 FUN_1061a1d10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8790;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  func_0x0001061a2444();
  return param_1;
}



/* Entry: 1061a1d68; end: 1061a1d73; +[SCCCameraModeWidgetsDualCameraModeWidget componentPath] */

undefined ** FUN_1061a1d68(void)

{
  return &PTR____CFConstantStringClassReference_110e44058;
}



/* Entry: 1061a1d74; end: 1061a1d93; -[SCCCameraModeWidgetsDualCameraModeWidget initWithViewModel:componentContext:runtime:] */

void FUN_1061a1d74(void)

{
  FUN_1061a2420(PTR_PTR_1126f00f0);
  return;
}



/* Entry: 1061a1d94; end: 1061a1dc7; -[SCCCameraModeWidgetsDualCameraModeWidget setViewModel:] */

void FUN_1061a1d94(void)

{
  func_0x0001061a2434();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2450();
  func_0x0001061a245c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1061a1dc8; end: 1061a1dff; -[SCCCameraModeWidgetsDualCameraModeWidget viewModel] */

void FUN_1061a1dc8(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a1e00; end: 1061a1e0b; +[SCCFlashButtonWidget componentPath] */

undefined ** FUN_1061a1e00(void)

{
  return &PTR____CFConstantStringClassReference_110e44078;
}



/* Entry: 1061a1e0c; end: 1061a1e2b; -[SCCFlashButtonWidget initWithViewModel:componentContext:runtime:] */

void FUN_1061a1e0c(void)

{
  FUN_1061a2420(PTR_PTR_1126f00f8);
  return;
}



/* Entry: 1061a1e2c; end: 1061a1e5f; -[SCCFlashButtonWidget setViewModel:] */

void FUN_1061a1e2c(void)

{
  func_0x0001061a2434();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2450();
  func_0x0001061a245c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1061a1e60; end: 1061a1e97; -[SCCFlashButtonWidget viewModel] */

void FUN_1061a1e60(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a1e98; end: 1061a1ea3; +[SCCFlashFeatureWidget componentPath] */

undefined ** FUN_1061a1e98(void)

{
  return &PTR____CFConstantStringClassReference_110e44098;
}



/* Entry: 1061a1ea4; end: 1061a1ec3; -[SCCFlashFeatureWidget initWithViewModel:componentContext:runtime:] */

void FUN_1061a1ea4(void)

{
  FUN_1061a2420(PTR_PTR_1126f0100);
  return;
}



/* Entry: 1061a1ec4; end: 1061a1ef7; -[SCCFlashFeatureWidget setViewModel:] */

void FUN_1061a1ec4(void)

{
  func_0x0001061a2434();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2450();
  func_0x0001061a245c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1061a1ef8; end: 1061a1f2f; -[SCCFlashFeatureWidget viewModel] */

void FUN_1061a1ef8(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a1f30; end: 1061a1f3b; +[SCCFlashFeatureWidgetV2 componentPath] */

undefined ** FUN_1061a1f30(void)

{
  return &PTR____CFConstantStringClassReference_110e440b8;
}



/* Entry: 1061a1f3c; end: 1061a1f5b; -[SCCFlashFeatureWidgetV2 initWithViewModel:componentContext:runtime:] */

void FUN_1061a1f3c(void)

{
  FUN_1061a2420(PTR_PTR_1126f0108);
  return;
}



/* Entry: 1061a1f5c; end: 1061a1f8f; -[SCCFlashFeatureWidgetV2 setViewModel:] */

void FUN_1061a1f5c(void)

{
  func_0x0001061a2434();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2450();
  func_0x0001061a245c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1061a1f90; end: 1061a1fc7; -[SCCFlashFeatureWidgetV2 viewModel] */

void FUN_1061a1f90(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a1fc8; end: 1061a1fd3; +[SCCNightModeButtonWidget componentPath] */

undefined ** FUN_1061a1fc8(void)

{
  return &PTR____CFConstantStringClassReference_110e440d8;
}



/* Entry: 1061a1fd4; end: 1061a1ff3; -[SCCNightModeButtonWidget initWithViewModel:componentContext:runtime:] */

void FUN_1061a1fd4(void)

{
  FUN_1061a2420(PTR_PTR_1126f0110);
  return;
}



/* Entry: 1061a1ff4; end: 1061a2027; -[SCCNightModeButtonWidget setViewModel:] */

void FUN_1061a1ff4(void)

{
  func_0x0001061a2434();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2450();
  func_0x0001061a245c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1061a2028; end: 1061a205f; -[SCCNightModeButtonWidget viewModel] */

void FUN_1061a2028(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a2060; end: 1061a206b; +[SCCRingFlashWidget componentPath] */

undefined ** FUN_1061a2060(void)

{
  return &PTR____CFConstantStringClassReference_110e440f8;
}



/* Entry: 1061a206c; end: 1061a208b; -[SCCRingFlashWidget initWithViewModel:componentContext:runtime:] */

void FUN_1061a206c(void)

{
  FUN_1061a2420(PTR_PTR_1126f0118);
  return;
}



/* Entry: 1061a208c; end: 1061a20bf; -[SCCRingFlashWidget setViewModel:] */

void FUN_1061a208c(void)

{
  func_0x0001061a2434();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2450();
  func_0x0001061a245c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1061a20c0; end: 1061a20f7; -[SCCRingFlashWidget viewModel] */

void FUN_1061a20c0(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a20f8; end: 1061a2103; +[SCCRingFlashWidgetTooltip componentPath] */

undefined ** FUN_1061a20f8(void)

{
  return &PTR____CFConstantStringClassReference_110e44118;
}



/* Entry: 1061a2104; end: 1061a2123; -[SCCRingFlashWidgetTooltip initWithViewModel:componentContext:runtime:] */

void FUN_1061a2104(void)

{
  FUN_1061a2420(PTR_PTR_1126f0120);
  return;
}



/* Entry: 1061a2124; end: 1061a2157; -[SCCRingFlashWidgetTooltip setViewModel:] */

void FUN_1061a2124(void)

{
  func_0x0001061a2434();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2450();
  func_0x0001061a245c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1061a2158; end: 1061a218f; -[SCCRingFlashWidgetTooltip viewModel] */

void FUN_1061a2158(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a2190; end: 1061a219b; +[SCCRingFlashWidgetV2 componentPath] */

undefined ** FUN_1061a2190(void)

{
  return &PTR____CFConstantStringClassReference_110e44138;
}



/* Entry: 1061a219c; end: 1061a21bb; -[SCCRingFlashWidgetV2 initWithViewModel:componentContext:runtime:] */

void FUN_1061a219c(void)

{
  FUN_1061a2420(PTR_PTR_1126f0128);
  return;
}



/* Entry: 1061a21bc; end: 1061a21ef; -[SCCRingFlashWidgetV2 setViewModel:] */

void FUN_1061a21bc(void)

{
  func_0x0001061a2434();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2450();
  func_0x0001061a245c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1061a21f0; end: 1061a2227; -[SCCRingFlashWidgetV2 viewModel] */

void FUN_1061a21f0(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a2228; end: 1061a2233; +[SCCSpeedModeWidget componentPath] */

undefined ** FUN_1061a2228(void)

{
  return &PTR____CFConstantStringClassReference_110e44158;
}



/* Entry: 1061a2234; end: 1061a2253; -[SCCSpeedModeWidget initWithViewModel:componentContext:runtime:] */

void FUN_1061a2234(void)

{
  FUN_1061a2420(PTR_PTR_1126f0130);
  return;
}



/* Entry: 1061a2254; end: 1061a2287; -[SCCSpeedModeWidget setViewModel:] */

void FUN_1061a2254(void)

{
  func_0x0001061a2434();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2450();
  func_0x0001061a245c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1061a2288; end: 1061a22bf; -[SCCSpeedModeWidget viewModel] */

void FUN_1061a2288(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a22c0; end: 1061a22cb; +[SCCToneModeWidget componentPath] */

undefined ** FUN_1061a22c0(void)

{
  return &PTR____CFConstantStringClassReference_110e44178;
}



/* Entry: 1061a22cc; end: 1061a22eb; -[SCCToneModeWidget initWithViewModel:componentContext:runtime:] */

void FUN_1061a22cc(void)

{
  FUN_1061a2420(PTR_PTR_1126f0138);
  return;
}



/* Entry: 1061a22ec; end: 1061a231f; -[SCCToneModeWidget setViewModel:] */

void FUN_1061a22ec(void)

{
  func_0x0001061a2434();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2450();
  func_0x0001061a245c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1061a2320; end: 1061a2357; -[SCCToneModeWidget viewModel] */

void FUN_1061a2320(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a2358; end: 1061a2363; +[SCCToneModeWidgetV2 componentPath] */

undefined ** FUN_1061a2358(void)

{
  return &PTR____CFConstantStringClassReference_110e44198;
}



/* Entry: 1061a2364; end: 1061a2383; -[SCCToneModeWidgetV2 initWithViewModel:componentContext:runtime:] */

void FUN_1061a2364(void)

{
  FUN_1061a2420(PTR_PTR_1126f0140);
  return;
}



/* Entry: 1061a2384; end: 1061a23b7; -[SCCToneModeWidgetV2 setViewModel:] */

void FUN_1061a2384(void)

{
  func_0x0001061a2434();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2450();
  func_0x0001061a245c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1061a23b8; end: 1061a23ef; -[SCCToneModeWidgetV2 viewModel] */

void FUN_1061a23b8(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a2444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a23f0; end: 1061a241f;  */

void FUN_1061a23f0(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1061a2420; end: 1061a247b;  */

void FUN_1061a2420(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1061a247c; end: 1061a2483; -[SCCCameraModeWidgetsCameraModeWidgetWidthSizing__Enum init] */

void FUN_1061a247c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 1061a2484; end: 1061a248b; -[SCCCameraModeWidgetsDualCameraMode__Enum init] */

void FUN_1061a2484(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 1061a248c; end: 1061a248f; -[SCCFlashSelection__Enum init] */

void FUN_1061a248c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 1061a2490; end: 1061a2493; -[SCCNightModeSelection__Enum init] */

void FUN_1061a2490(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 1061a2494; end: 1061a2497; -[SCCSpeedMode__Enum init] */

void FUN_1061a2494(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 1061a2498; end: 1061a24b7; -[SCCCameraModeWidgetsDualCameraModeWidgetContext initWithActionHandler:] */

void FUN_1061a2498(void)

{
  func_0x0001061a2c64(PTR_PTR_1126f0148);
  return;
}



/* Entry: 1061a24b8; end: 1061a24cb; +[SCCCameraModeWidgetsDualCameraModeWidgetContext valdiMarshallableObjectDescriptor] */

void FUN_1061a24b8(undefined8 *param_1)

{
  *param_1 = &PTR_s_actionHandler_1109130b8;
  param_1[1] = &PTR_DAT_110913100;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a24cc; end: 1061a24eb; -[SCCCameraModeWidgetsDualCameraModeWidgetViewModel initWithCurrentDualCameraMode:] */

void FUN_1061a24cc(void)

{
  func_0x0001061a2c64(PTR_PTR_1126f0150);
  return;
}



/* Entry: 1061a24ec; end: 1061a24ff; +[SCCCameraModeWidgetsDualCameraModeWidgetViewModel valdiMarshallableObjectDescriptor] */

void FUN_1061a24ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110913118;
  param_1[1] = &PTR_DAT_110913160;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a2500; end: 1061a252f; -[SCCColorOption initWithColor:isSelected:description2:] */

void FUN_1061a2500(void)

{
  undefined1 auStack_20 [16];
  
  func_0x0001061a2d2c(PTR_PTR_1126f0158);
  func_0x0001061a2ccc(auStack_20);
  return;
}



/* Entry: 1061a2530; end: 1061a2543; +[SCCColorOption valdiMarshallableObjectDescriptor] */

void FUN_1061a2530(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110913170;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a2544; end: 1061a2563; -[SCCFlashButtonWidgetContext init] */

void FUN_1061a2544(void)

{
  FUN_1061a2c24(PTR_PTR_1126f0160);
  return;
}



/* Entry: 1061a2564; end: 1061a257b; +[SCCFlashButtonWidgetContext valdiMarshallableObjectDescriptor] */

void FUN_1061a2564(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110913200;
  param_1[1] = 0;
  param_1[2] = &PTR_s_ob_v_1109131d0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a257c; end: 1061a259f;  */

undefined8 FUN_1061a257c(void)

{
  code *extraout_x8;
  
  func_0x0001061a2d20();
  (*extraout_x8)();
  return 0;
}



/* Entry: 1061a25a0; end: 1061a25ef;  */

void FUN_1061a25a0(void)

{
  func_0x0001061a2d00();
  func_0x0001061a2cbc();
  func_0x0001061a2c80(FUN_1061a2b50);
  func_0x0001061a2d08();
  func_0x0001061a2c9c();
  func_0x0001061a2d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a25f0; end: 1061a260f; -[SCCFlashButtonWidgetViewModel initWithIsToggleOn:] */

void FUN_1061a25f0(void)

{
  func_0x0001061a2c64(PTR_PTR_1126f0168);
  return;
}



/* Entry: 1061a2610; end: 1061a2623; +[SCCFlashButtonWidgetViewModel valdiMarshallableObjectDescriptor] */

void FUN_1061a2610(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110913260;
  param_1[1] = &PTR_DAT_1109132a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a2624; end: 1061a2643; -[SCCFlashFeatureWidgetContext init] */

void FUN_1061a2624(void)

{
  FUN_1061a2c24(PTR_PTR_1126f0170);
  return;
}



/* Entry: 1061a2644; end: 1061a2663; +[SCCFlashFeatureWidgetContext valdiMarshallableObjectDescriptor] */

void FUN_1061a2644(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110913330;
  param_1[1] = &PTR_DAT_1109133f0;
  param_1[2] = &PTR_DAT_1109132b8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a2664; end: 1061a2683;  */

undefined8 FUN_1061a2664(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x0001061a2d20();
  (*extraout_x8)(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  return 0;
}



/* Entry: 1061a2684; end: 1061a26d3;  */

void FUN_1061a2684(void)

{
  func_0x0001061a2d00();
  func_0x0001061a2cbc();
  func_0x0001061a2c80(0x1061a2b6c);
  func_0x0001061a2d08();
  func_0x0001061a2c9c();
  func_0x0001061a2d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a26d4; end: 1061a26f3;  */

undefined8 FUN_1061a26d4(void)

{
  code *extraout_x8;
  
  func_0x0001061a2d20();
  (*extraout_x8)();
  return 0;
}



/* Entry: 1061a26f4; end: 1061a2743;  */

void FUN_1061a26f4(void)

{
  func_0x0001061a2d00();
  func_0x0001061a2cbc();
  func_0x0001061a2c80(0x1061a2b94);
  func_0x0001061a2d08();
  func_0x0001061a2c9c();
  func_0x0001061a2d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a2744; end: 1061a276b;  */

undefined8 FUN_1061a2744(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x0001061a2d20();
  (*extraout_x8)(*(undefined8 *)(param_2 + 0x10));
  return 0;
}



/* Entry: 1061a276c; end: 1061a27bb;  */

void FUN_1061a276c(void)

{
  func_0x0001061a2d00();
  func_0x0001061a2cbc();
  func_0x0001061a2c80(0x1061a2bb0);
  func_0x0001061a2d08();
  func_0x0001061a2c9c();
  func_0x0001061a2d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a27bc; end: 1061a27df;  */

undefined8 FUN_1061a27bc(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x0001061a2d20();
  (*extraout_x8)(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  return 0;
}



/* Entry: 1061a27e0; end: 1061a282f;  */

void FUN_1061a27e0(void)

{
  func_0x0001061a2d00();
  func_0x0001061a2cbc();
  func_0x0001061a2c80(0x1061a2bd0);
  func_0x0001061a2d08();
  func_0x0001061a2c9c();
  func_0x0001061a2d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a2830; end: 1061a284f; -[SCCFlashFeatureWidgetContextV2 initWithFlashFeatureContext:] */

void FUN_1061a2830(void)

{
  func_0x0001061a2c48(PTR_PTR_1126f0178);
  return;
}



/* Entry: 1061a2850; end: 1061a2863; +[SCCFlashFeatureWidgetContextV2 valdiMarshallableObjectDescriptor] */

void FUN_1061a2850(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110913400;
  param_1[1] = &PTR_DAT_110913430;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a2864; end: 1061a2893; -[SCCFlashFeatureWidgetViewModel initWithColorOptions:] */

void FUN_1061a2864(void)

{
  undefined1 auStack_20 [16];
  
  func_0x0001061a2d2c(PTR_PTR_1126f0180);
  func_0x0001061a2ccc(auStack_20);
  return;
}



/* Entry: 1061a2894; end: 1061a28a7; +[SCCFlashFeatureWidgetViewModel valdiMarshallableObjectDescriptor] */

void FUN_1061a2894(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110913440;
  param_1[1] = &PTR_DAT_1109134a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a28a8; end: 1061a28c7; -[SCCFlashFeatureWidgetViewModelV2 initWithFlashFeatureViewModel:] */

void FUN_1061a28a8(void)

{
  func_0x0001061a2c48(PTR_PTR_1126f0188);
  return;
}



/* Entry: 1061a28c8; end: 1061a28db; +[SCCFlashFeatureWidgetViewModelV2 valdiMarshallableObjectDescriptor] */

void FUN_1061a28c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109134b8;
  param_1[1] = &PTR_DAT_1109134e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a28dc; end: 1061a28fb; -[SCCNightModeButtonWidgetContext init] */

void FUN_1061a28dc(void)

{
  FUN_1061a2c24(PTR_PTR_1126f0190);
  return;
}



/* Entry: 1061a28fc; end: 1061a2913; +[SCCNightModeButtonWidgetContext valdiMarshallableObjectDescriptor] */

void FUN_1061a28fc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110913528;
  param_1[1] = 0;
  param_1[2] = &PTR_s_ob_v_1109134f8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a2914; end: 1061a2933; -[SCCNightModeButtonWidgetViewModel initWithIsToggleOn:] */

void FUN_1061a2914(void)

{
  func_0x0001061a2c64(PTR_PTR_1126f0198);
  return;
}



/* Entry: 1061a2934; end: 1061a2947; +[SCCNightModeButtonWidgetViewModel valdiMarshallableObjectDescriptor] */

void FUN_1061a2934(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110913588;
  param_1[1] = &PTR_DAT_1109135d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a2948; end: 1061a2967; -[SCCRingFlashWidgetContext init] */

void FUN_1061a2948(void)

{
  FUN_1061a2c24(PTR_PTR_1126f01a0);
  return;
}



/* Entry: 1061a2968; end: 1061a297f; +[SCCRingFlashWidgetContext valdiMarshallableObjectDescriptor] */

void FUN_1061a2968(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110913610;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_1109135e0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a2980; end: 1061a299f; -[SCCRingFlashWidgetTooltipViewModel initWithWidgetTooltiptext:] */

void FUN_1061a2980(void)

{
  func_0x0001061a2c48(PTR_PTR_1126f01a8);
  return;
}



/* Entry: 1061a29a0; end: 1061a29b3; +[SCCRingFlashWidgetTooltipViewModel valdiMarshallableObjectDescriptor] */

void FUN_1061a29a0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110913688;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a29b4; end: 1061a29e3; -[SCCRingFlashWidgetViewModel initWithColorOptions:] */

void FUN_1061a29b4(void)

{
  undefined1 auStack_20 [16];
  
  func_0x0001061a2d2c(PTR_PTR_1126f01b0);
  func_0x0001061a2ccc(auStack_20);
  return;
}



/* Entry: 1061a29e4; end: 1061a29f7; +[SCCRingFlashWidgetViewModel valdiMarshallableObjectDescriptor] */

void FUN_1061a29e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109136b8;
  param_1[1] = &PTR_DAT_110913730;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


