/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10450c0e8; end: 10450c193;  */

void FUN_10450c0e8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10450c194; end: 10450c1df;  */

void FUN_10450c194(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10450c1e0; end: 10450c2b7;  */

void FUN_10450c1e0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10450c2b8; end: 10450c2d7;  */

void FUN_10450c2b8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10450c2d8; end: 10450c317;  */

void FUN_10450c2d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd11bd0;
  _swift_getWitnessTable(&UNK_10dd11bd0,&UNK_110781ab0);
  puRam0000000113082758 = puVar1;
  return;
}



/* Entry: 10450c318; end: 10450c327;  */

undefined1  [16] FUN_10450c318(void)

{
  return ZEXT816(0x110781ab0);
}



/* Entry: 10450c328; end: 10450c38b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450c328(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113082760) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113082768) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10450c38c; end: 10450c3eb; -[SCLensCarouselSettingsServices init] */

void FUN_10450c38c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselSettingsServices.SCLensCarouselSettingsServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10450c3b8);
  (*pcVar1)();
}



/* Entry: 10450c3ec; end: 10450c46f; -[SCLensCarouselSettingsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450c3ec(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113082760));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113082768));
  return;
}



/* Entry: 10450c470; end: 10450c4cf; -[_TtC28LensCarouselSettingsServices44MainCameraScopedLensCarouselSettingsServices init] */

void FUN_10450c470(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselSettingsServices.MainCameraScopedLensCarouselSettingsServices",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10450c49c);
  (*pcVar1)();
}



/* Entry: 10450c4d0; end: 10450c4df; -[_TtC28LensCarouselSettingsServices44MainCameraScopedLensCarouselSettingsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450c4d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113082798));
  return;
}



/* Entry: 10450c4e0; end: 10450c52b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450c4e0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130827c8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10450c52c; end: 10450c583; -[_TtC28LensCarouselSettingsServices44SCCameraUIScopedLensCarouselSettingsServices initWithLensCarouselSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450c52c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130827c8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10450c584; end: 10450c5e3; -[_TtC28LensCarouselSettingsServices44SCCameraUIScopedLensCarouselSettingsServices init] */

void FUN_10450c584(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselSettingsServices.SCCameraUIScopedLensCarouselSettingsServices",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10450c5b0);
  (*pcVar1)();
}



/* Entry: 10450c5e4; end: 10450c5f3; -[_TtC28LensCarouselSettingsServices44SCCameraUIScopedLensCarouselSettingsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450c5e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130827c8));
  return;
}



/* Entry: 10450c5f4; end: 10450c603; -[_TtC28LensCarouselSettingsServices48SCLensCarouselScopedLensCarouselSettingsServices lensCarouselSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450c5f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130827f8));
  return;
}



/* Entry: 10450c604; end: 10450c64f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450c604(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130827f8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10450c650; end: 10450c6a7; -[_TtC28LensCarouselSettingsServices48SCLensCarouselScopedLensCarouselSettingsServices initWithLensCarouselSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450c650(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130827f8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10450c6a8; end: 10450c707; -[_TtC28LensCarouselSettingsServices48SCLensCarouselScopedLensCarouselSettingsServices init] */

void FUN_10450c6a8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselSettingsServices.SCLensCarouselScopedLensCarouselSettingsServices",0x4d,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10450c6d4);
  (*pcVar1)();
}



/* Entry: 10450c708; end: 10450c717; -[_TtC28LensCarouselSettingsServices48SCLensCarouselScopedLensCarouselSettingsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450c708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130827f8));
  return;
}



/* Entry: 10450c718; end: 10450c737;  */

void FUN_10450c718(void)

{
  _objc_opt_self(&PTR_PTR_1129c8b90);
  return;
}



/* Entry: 10450c738; end: 10450c747; -[_TtC28LensCarouselSettingsServices52SCLensTalkCarouselScopedLensCarouselSettingsServices lensCarouselSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450c738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113082828));
  return;
}



/* Entry: 10450c748; end: 10450c7df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450c748(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113082828) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10450c7e0; end: 10450c837; -[_TtC28LensCarouselSettingsServices52SCLensTalkCarouselScopedLensCarouselSettingsServices initWithLensCarouselSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450c7e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113082828) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10450c838; end: 10450c897; -[_TtC28LensCarouselSettingsServices52SCLensTalkCarouselScopedLensCarouselSettingsServices init] */

void FUN_10450c838(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselSettingsServices.SCLensTalkCarouselScopedLensCarouselSettingsServices",
             0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10450c864);
  (*pcVar1)();
}



/* Entry: 10450c898; end: 10450c8a7; -[_TtC28LensCarouselSettingsServices52SCLensTalkCarouselScopedLensCarouselSettingsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450c898(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113082828));
  return;
}



/* Entry: 10450c8a8; end: 10450c8c7;  */

void FUN_10450c8a8(void)

{
  _objc_opt_self(&PTR_PTR_1129c8c50);
  return;
}



/* Entry: 10450c8c8; end: 10450c8d7; -[_TtC28LensCarouselSettingsServices43SCPreviewScopedLensCarouselSettingsServices lensCarouselSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450c8c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113082858));
  return;
}



/* Entry: 10450c8d8; end: 10450c96f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450c8d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113082858) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10450c970; end: 10450c9c7; -[_TtC28LensCarouselSettingsServices43SCPreviewScopedLensCarouselSettingsServices initWithLensCarouselSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450c970(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113082858) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10450c9c8; end: 10450ca27; -[_TtC28LensCarouselSettingsServices43SCPreviewScopedLensCarouselSettingsServices init] */

void FUN_10450c9c8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselSettingsServices.SCPreviewScopedLensCarouselSettingsServices",0x48,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10450c9f4);
  (*pcVar1)();
}



/* Entry: 10450ca28; end: 10450ca37; -[_TtC28LensCarouselSettingsServices43SCPreviewScopedLensCarouselSettingsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450ca28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113082858));
  return;
}



/* Entry: 10450ca38; end: 10450ca57;  */

void FUN_10450ca38(void)

{
  _objc_opt_self(&PTR_PTR_1129c8d10);
  return;
}



/* Entry: 10450ca58; end: 10450ca67; -[_TtC28LensCarouselSettingsServices46SCSnapEditorScopedLensCarouselSettingsServices lensCarouselSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450ca58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113082888));
  return;
}



/* Entry: 10450ca68; end: 10450caff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450ca68(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113082888) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10450cb00; end: 10450cb57; -[_TtC28LensCarouselSettingsServices46SCSnapEditorScopedLensCarouselSettingsServices initWithLensCarouselSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450cb00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113082888) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10450cb58; end: 10450cbb7; -[_TtC28LensCarouselSettingsServices46SCSnapEditorScopedLensCarouselSettingsServices init] */

void FUN_10450cb58(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselSettingsServices.SCSnapEditorScopedLensCarouselSettingsServices",0x4b,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10450cb84);
  (*pcVar1)();
}



/* Entry: 10450cbb8; end: 10450cbc7; -[_TtC28LensCarouselSettingsServices46SCSnapEditorScopedLensCarouselSettingsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450cbb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113082888));
  return;
}



/* Entry: 10450cbc8; end: 10450cbe7;  */

void FUN_10450cbc8(void)

{
  _objc_opt_self(&PTR_PTR_1129c8dd0);
  return;
}



/* Entry: 10450cbe8; end: 10450cc33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450cbe8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130828b8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10450cc34; end: 10450cc8b; -[_TtC30LensFeaturesVisibilityServices54CameraUIScopedLensFeaturesVisibilityControllerServices initWithLensFeaturesVisibilityControllerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450cc34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130828b8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10450cc8c; end: 10450cceb; -[_TtC30LensFeaturesVisibilityServices54CameraUIScopedLensFeaturesVisibilityControllerServices init] */

void FUN_10450cc8c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensFeaturesVisibilityServices.CameraUIScopedLensFeaturesVisibilityControllerServices"
             ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10450ccb8);
  (*pcVar1)();
}



/* Entry: 10450ccec; end: 10450ccfb; -[_TtC30LensFeaturesVisibilityServices54CameraUIScopedLensFeaturesVisibilityControllerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450ccec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130828b8));
  return;
}



/* Entry: 10450ccfc; end: 10450cd47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450ccfc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130828e8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10450cd48; end: 10450cd9f; -[_TtC30LensFeaturesVisibilityServices40LensFeaturesVisibilityControllerServices initWithLensFeaturesVisibilityController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450cd48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130828e8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10450cda0; end: 10450cdff; -[_TtC30LensFeaturesVisibilityServices40LensFeaturesVisibilityControllerServices init] */

void FUN_10450cda0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensFeaturesVisibilityServices.LensFeaturesVisibilityControllerServices",0x47,"init()"
             ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10450cdcc);
  (*pcVar1)();
}



/* Entry: 10450ce00; end: 10450ce23; -[_TtC30LensFeaturesVisibilityServices40LensFeaturesVisibilityControllerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450ce00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130828e8));
  return;
}



/* Entry: 10450ce24; end: 10450cecf;  */

void FUN_10450ce24(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10450ced0; end: 10450ced3;  */

void FUN_10450ced0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd11e80;
  _swift_getWitnessTable(&UNK_10dd11e80,&UNK_110781c18);
  puRam0000000113082918 = puVar1;
  return;
}



/* Entry: 10450ced4; end: 10450cf13;  */

void FUN_10450ced4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd11e80;
  _swift_getWitnessTable(&UNK_10dd11e80,&UNK_110781c18);
  puRam0000000113082918 = puVar1;
  return;
}



/* Entry: 10450cf14; end: 10450d077;  */

int FUN_10450cf14(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10450cf90;
        goto LAB_10450cf74;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10450cf74:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10450cf90:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10450d078; end: 10450d087; -[_TtC30LensFeaturesVisibilityServices60SCLensCarouselScopedLensFeaturesVisibilityControllerServices lensFeaturesVisibilityControllerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113082920));
  return;
}



/* Entry: 10450d088; end: 10450d0d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d088(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113082920) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10450d0d4; end: 10450d12b; -[_TtC30LensFeaturesVisibilityServices60SCLensCarouselScopedLensFeaturesVisibilityControllerServices initWithLensFeaturesVisibilityControllerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d0d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113082920) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10450d12c; end: 10450d18b; -[_TtC30LensFeaturesVisibilityServices60SCLensCarouselScopedLensFeaturesVisibilityControllerServices init] */

void FUN_10450d12c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensFeaturesVisibilityServices.SCLensCarouselScopedLensFeaturesVisibilityControllerServices"
             ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10450d158);
  (*pcVar1)();
}



/* Entry: 10450d18c; end: 10450d19b; -[_TtC30LensFeaturesVisibilityServices60SCLensCarouselScopedLensFeaturesVisibilityControllerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d18c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113082920));
  return;
}



/* Entry: 10450d19c; end: 10450d1bb;  */

void FUN_10450d19c(void)

{
  _objc_opt_self(&PTR_PTR_1129c9010);
  return;
}



/* Entry: 10450d1bc; end: 10450d1cb; -[_TtC30LensFeaturesVisibilityServices64SCLensTalkCarouselScopedLensFeaturesVisibilityControllerServices lensFeaturesVisibilityControllerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d1bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113082950));
  return;
}



/* Entry: 10450d1cc; end: 10450d263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d1cc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113082950) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10450d264; end: 10450d2bb; -[_TtC30LensFeaturesVisibilityServices64SCLensTalkCarouselScopedLensFeaturesVisibilityControllerServices initWithLensFeaturesVisibilityControllerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d264(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113082950) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10450d2bc; end: 10450d31b; -[_TtC30LensFeaturesVisibilityServices64SCLensTalkCarouselScopedLensFeaturesVisibilityControllerServices init] */

void FUN_10450d2bc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensFeaturesVisibilityServices.SCLensTalkCarouselScopedLensFeaturesVisibilityControllerServices"
             ,0x5f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10450d2e8);
  (*pcVar1)();
}



/* Entry: 10450d31c; end: 10450d32b; -[_TtC30LensFeaturesVisibilityServices64SCLensTalkCarouselScopedLensFeaturesVisibilityControllerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d31c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113082950));
  return;
}



/* Entry: 10450d32c; end: 10450d34b;  */

void FUN_10450d32c(void)

{
  _objc_opt_self(&PTR_PTR_1129c90d0);
  return;
}



/* Entry: 10450d34c; end: 10450d35b; -[_TtC30LensFeaturesVisibilityServices55SCPreviewScopedLensFeaturesVisibilityControllerServices lensFeaturesVisibilityControllerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d34c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113082980));
  return;
}



/* Entry: 10450d35c; end: 10450d3f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d35c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113082980) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10450d3f4; end: 10450d44b; -[_TtC30LensFeaturesVisibilityServices55SCPreviewScopedLensFeaturesVisibilityControllerServices initWithLensFeaturesVisibilityControllerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d3f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113082980) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10450d44c; end: 10450d4ab; -[_TtC30LensFeaturesVisibilityServices55SCPreviewScopedLensFeaturesVisibilityControllerServices init] */

void FUN_10450d44c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensFeaturesVisibilityServices.SCPreviewScopedLensFeaturesVisibilityControllerServices"
             ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10450d478);
  (*pcVar1)();
}



/* Entry: 10450d4ac; end: 10450d4bb; -[_TtC30LensFeaturesVisibilityServices55SCPreviewScopedLensFeaturesVisibilityControllerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d4ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113082980));
  return;
}



/* Entry: 10450d4bc; end: 10450d4db;  */

void FUN_10450d4bc(void)

{
  _objc_opt_self(&PTR_PTR_1129c9190);
  return;
}



/* Entry: 10450d4dc; end: 10450d4eb; -[_TtC30LensFeaturesVisibilityServices58SCSnapEditorScopedLensFeaturesVisibilityControllerServices lensFeaturesVisibilityControllerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d4dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130829b0));
  return;
}



/* Entry: 10450d4ec; end: 10450d583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d4ec(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130829b0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10450d584; end: 10450d5db; -[_TtC30LensFeaturesVisibilityServices58SCSnapEditorScopedLensFeaturesVisibilityControllerServices initWithLensFeaturesVisibilityControllerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d584(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130829b0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10450d5dc; end: 10450d63b; -[_TtC30LensFeaturesVisibilityServices58SCSnapEditorScopedLensFeaturesVisibilityControllerServices init] */

void FUN_10450d5dc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensFeaturesVisibilityServices.SCSnapEditorScopedLensFeaturesVisibilityControllerServices"
             ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10450d608);
  (*pcVar1)();
}



/* Entry: 10450d63c; end: 10450d64b; -[_TtC30LensFeaturesVisibilityServices58SCSnapEditorScopedLensFeaturesVisibilityControllerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d63c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130829b0));
  return;
}



/* Entry: 10450d64c; end: 10450d66b;  */

void FUN_10450d64c(void)

{
  _objc_opt_self(&PTR_PTR_1129c9250);
  return;
}



/* Entry: 10450d66c; end: 10450d717;  */

void FUN_10450d66c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10450d718; end: 10450d757;  */

void FUN_10450d718(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10450d758; end: 10450d773; -[SCLensSnapButtonEvent description] */

void FUN_10450d758(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10450d774; end: 10450d7bb; -[SCLensSnapButtonEvent init] */

void FUN_10450d774(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensFeaturesVisibilityServices/LensSnapButtonEventWrapper.swift",0x3f,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10450d7bc);
  (*pcVar1)();
}



/* Entry: 10450d7bc; end: 10450d7c7; -[SCLensSnapButtonEvent copyWithZone:] */

void FUN_10450d7bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10450d7c8; end: 10450d7d7; +[SCLensSnapButtonEvent lensDidHideSnapButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d7c8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130829e0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10450d7d8; end: 10450d823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d7d8(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_1130829e0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10450d824; end: 10450d82b; +[SCLensSnapButtonEvent lensDidShowSnapButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d824(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130829e0) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10450d82c; end: 10450d8bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d82c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130829e0) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10450d8bc; end: 10450d8d7; -[SCLensSnapButtonEvent matchLensDidHideSnapButton:lensDidShowSnapButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450d8bc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_1130829e0) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010450d8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 10450d8d8; end: 10450d92b;  */

void FUN_10450d8d8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10450d92c; end: 10450da93;  */

int FUN_10450d92c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10450d9a8;
        goto LAB_10450d98c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10450d98c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10450d9a8:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10450da94; end: 10450dad3;  */

void FUN_10450da94(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082a10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1205c;
  _swift_getWitnessTable(&UNK_10dd1205c,&UNK_110781ce0);
  puRam0000000113082a10 = puVar1;
  return;
}



/* Entry: 10450dad4; end: 10450db1f; -[SCImagineLensActiveStateParams lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450dad4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113082a18);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113082a18))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10450db20; end: 10450db37; -[SCImagineLensActiveStateParams renderTargetFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10450db20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113082a20);
}



/* Entry: 10450db38; end: 10450db47; -[SCImagineLensActiveStateParams shouldDisplayButtonsOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10450db38(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113082a28);
}



/* Entry: 10450db48; end: 10450db57; -[SCImagineLensActiveStateParams usesFloatingInputBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10450db48(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113082a30);
}



/* Entry: 10450db58; end: 10450db67; -[SCImagineLensActiveStateParams visualTrayUnderPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10450db58(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113082a38);
}



/* Entry: 10450db68; end: 10450ddb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10450db68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_80 [16];
  
  puVar3 = auStack_80;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100773b04();
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar2 + _DAT_113082a18);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113082a20);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  *(undefined1 *)(lVar2 + _DAT_113082a28) = 1;
  *(undefined1 *)(lVar2 + _DAT_113082a30) = 0;
  *(undefined1 *)(lVar2 + _DAT_113082a38) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113082a40);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113082a48);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  lVar2 = unaff_x20;
  _swift_getObjectType(unaff_x20);
  _swift_deallocPartialClassInstance(unaff_x20,lVar2,0x60,7);
  return puVar3;
}



/* Entry: 10450ddb4; end: 10450de9b; -[SCImagineLensActiveStateParams initWithLensId:renderTargetFrame:layoutGuideProvider:viewfinderProvider:] */

void FUN_10450ddb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  
  __Block_copy();
  __Block_copy();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
  puVar1 = &UNK_110781dd8;
  _swift_allocObject(&UNK_110781dd8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  puVar2 = &UNK_110781e00;
  _swift_allocObject(&UNK_110781e00,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_9;
  func_0x00010450dc94(param_1,param_2,param_3,param_4,param_7,param_6,FUN_10450e1a8,puVar1,
                      FUN_10450e1c8,puVar2);
  return;
}



/* Entry: 10450de9c; end: 10450dfa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450de9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_90 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113082a18);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113082a20);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113082a28) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_113082a30) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_113082a38) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113082a40);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113082a48);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  _objc_msgSendSuper2(auStack_90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10450dfa4; end: 10450e03f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450dfa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113082a18);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113082a20);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113082a28) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_113082a30) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_113082a38) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113082a40);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113082a48);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  func_0x000100773b04();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10450e040; end: 10450e06b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450e040(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + _DAT_113082a40))();
  return;
}



/* Entry: 10450e06c; end: 10450e077; -[SCImagineLensActiveStateParams previewLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450e06c(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_113082a40);
  _objc_retain();
  lVar2 = param_1;
  (*pcVar1)();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10450e078; end: 10450e0a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450e078(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + _DAT_113082a48))();
  return;
}


