/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044f2588; end: 1044f25cb; -[SCLensProcessingPerformanceInfoBuilder safeBuildAndReturnError:] */

void FUN_1044f2588(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044f22fc();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044f25cc; end: 1044f26af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f25cc(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081780);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081788);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081790);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081798);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130817a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130817a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_1130817b0) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130817b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130817c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f26b0; end: 1044f26cf; -[SCLensProcessingPerformanceInfoBuilder init] */

void FUN_1044f26b0(void)

{
  FUN_1044f25cc();
  return;
}



/* Entry: 1044f26d0; end: 1044f26d3;  */

void FUN_1044f26d0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044f26d4; end: 1044f26e7; -[SCLensProcessingPerformanceInfoBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f26d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113081780 + 8))
  ;
  return;
}



/* Entry: 1044f26e8; end: 1044f271b;  */

void FUN_1044f26e8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044f271c; end: 1044f27bf; -[SCLensProcessingPerformanceInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f271c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113081738 + 8))
  ;
  return;
}



/* Entry: 1044f27c0; end: 1044f27f3;  */

undefined8 FUN_1044f27c0(undefined8 param_1)

{
  (*(code *)(undefined *)0x1044f01f8)();
  return param_1;
}



/* Entry: 1044f27f4; end: 1044f298f;  */

/* WARNING: Possible PIC construction at 0x0001044f2828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001044f282c) */

void FUN_1044f27f4(long param_1)

{
  if (param_1 == 0) {
    func_0x0001044f29b0();
    _objc_allocWithZone();
  }
  else {
    func_0x0001044f29b0();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1044f2990; end: 1044f29cf;  */

void FUN_1044f2990(void)

{
  _objc_opt_self(&PTR_PTR_1129c5b48);
  return;
}



/* Entry: 1044f29d0; end: 1044f29e7;  */

void FUN_1044f29d0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044f29e8; end: 1044f2abf;  */

void FUN_1044f29e8(void)

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



/* Entry: 1044f2ac0; end: 1044f2ad3;  */

undefined1  [16] FUN_1044f2ac0(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 9) {
    uVar1 = param_1;
  }
  auVar2[8] = 8 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1044f2ad4; end: 1044f2b13;  */

void FUN_1044f2ad4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0f0c0;
  _swift_getWitnessTable(&UNK_10dd0f0c0,&UNK_11077f4b0);
  puRam0000000113081818 = puVar1;
  return;
}



/* Entry: 1044f2b14; end: 1044f2b43;  */

undefined1  [16] FUN_1044f2b14(void)

{
  return ZEXT816(0x11077f4b0);
}



/* Entry: 1044f2b44; end: 1044f2b83;  */

void FUN_1044f2b44(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0f200;
  _swift_getWitnessTable(&UNK_10dd0f200,&UNK_11077f528);
  puRam0000000113081820 = puVar1;
  return;
}



/* Entry: 1044f2b84; end: 1044f2c2f;  */

void FUN_1044f2b84(void)

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



/* Entry: 1044f2c30; end: 1044f2c67;  */

void FUN_1044f2c30(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 1044f2c68; end: 1044f2cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f2c68(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113081828) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f2cb4; end: 1044f2d13; -[_TtC27LensCarouselSessionServices46LensCarouselSessionControllersCreatingServices init] */

void FUN_1044f2cb4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselSessionServices.LensCarouselSessionControllersCreatingServices",0x4a,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f2ce0);
  (*pcVar1)();
}



/* Entry: 1044f2d14; end: 1044f2d23; -[_TtC27LensCarouselSessionServices46LensCarouselSessionControllersCreatingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f2d14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113081828));
  return;
}



/* Entry: 1044f2d24; end: 1044f2d6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f2d24(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113081858) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f2d70; end: 1044f2dcf; -[_TtC27LensCarouselSessionServices27LensCarouselSessionServices init] */

void FUN_1044f2d70(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselSessionServices.LensCarouselSessionServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f2d9c);
  (*pcVar1)();
}



/* Entry: 1044f2dd0; end: 1044f2ddf; -[_TtC27LensCarouselSessionServices27LensCarouselSessionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f2dd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081858));
  return;
}



/* Entry: 1044f2de0; end: 1044f2e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f2de0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113081888) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f2e78; end: 1044f2ed7; -[_TtC27LensCarouselSessionServices45SCCaaSCameraScopedLensCarouselSessionServices init] */

void FUN_1044f2e78(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselSessionServices.SCCaaSCameraScopedLensCarouselSessionServices",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f2ea4);
  (*pcVar1)();
}



/* Entry: 1044f2ed8; end: 1044f2ee7; -[_TtC27LensCarouselSessionServices45SCCaaSCameraScopedLensCarouselSessionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f2ed8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081888));
  return;
}



/* Entry: 1044f2ee8; end: 1044f2f07;  */

void FUN_1044f2ee8(void)

{
  _objc_opt_self(&PTR_PTR_1129c5ec8);
  return;
}



/* Entry: 1044f2f08; end: 1044f2f17; -[_TtC27LensCarouselSessionServices51SCLensTalkCarouselScopedLensCarouselSessionServices lensCarouselSessionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f2f08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130818b8));
  return;
}



/* Entry: 1044f2f18; end: 1044f2faf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f2f18(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130818b8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f2fb0; end: 1044f3007; -[_TtC27LensCarouselSessionServices51SCLensTalkCarouselScopedLensCarouselSessionServices initWithLensCarouselSessionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f2fb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130818b8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1044f3008; end: 1044f3067; -[_TtC27LensCarouselSessionServices51SCLensTalkCarouselScopedLensCarouselSessionServices init] */

void FUN_1044f3008(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselSessionServices.SCLensTalkCarouselScopedLensCarouselSessionServices",0x4f,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f3034);
  (*pcVar1)();
}



/* Entry: 1044f3068; end: 1044f3077; -[_TtC27LensCarouselSessionServices51SCLensTalkCarouselScopedLensCarouselSessionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f3068(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130818b8));
  return;
}



/* Entry: 1044f3078; end: 1044f3097;  */

void FUN_1044f3078(void)

{
  _objc_opt_self(&PTR_PTR_1129c5f88);
  return;
}



/* Entry: 1044f3098; end: 1044f30af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f3098(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130818e8) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f30b0; end: 1044f30db; -[_TtC27LensCarouselSessionServices54SCLensesModularCameraScopedLensCarouselSessionServices init] */

void FUN_1044f30b0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselSessionServices.SCLensesModularCameraScopedLensCarouselSessionServices",
             0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f30dc);
  (*pcVar1)();
}



/* Entry: 1044f30dc; end: 1044f30f7; -[_TtC27LensCarouselSessionServices54SCLensesModularCameraScopedLensCarouselSessionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f30dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130818e8));
  return;
}



/* Entry: 1044f30f8; end: 1044f314b;  */

void FUN_1044f30f8(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + *param_2) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f314c; end: 1044f3157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f314c(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_1130818f0) = param_1;
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f3158; end: 1044f31ab;  */

void FUN_1044f3158(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + *param_2) = param_1;
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f31ac; end: 1044f31d7; -[_TtC27LensCarouselSessionServices45SCChatCameraScopedLensCarouselSessionServices init] */

void FUN_1044f31ac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselSessionServices.SCChatCameraScopedLensCarouselSessionServices",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f31d8);
  (*pcVar1)();
}



/* Entry: 1044f31d8; end: 1044f31db;  */

void FUN_1044f31d8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044f31dc; end: 1044f322f;  */

void FUN_1044f31dc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044f3230; end: 1044f323f; -[_TtC27LensCarouselSessionServices45SCChatCameraScopedLensCarouselSessionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f3230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130818f0));
  return;
}



/* Entry: 1044f3240; end: 1044f325f;  */

void FUN_1044f3240(void)

{
  _objc_opt_self(&PTR_PTR_1129c6108);
  return;
}



/* Entry: 1044f3260; end: 1044f3263;  */

void FUN_1044f3260(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044f3264; end: 1044f32af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f3264(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113081948) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f32b0; end: 1044f330f; -[_TtC27LensCarouselSessionServices45SCMainCameraScopedLensCarouselSessionServices init] */

void FUN_1044f32b0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselSessionServices.SCMainCameraScopedLensCarouselSessionServices",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f32dc);
  (*pcVar1)();
}



/* Entry: 1044f3310; end: 1044f331f; -[_TtC27LensCarouselSessionServices45SCMainCameraScopedLensCarouselSessionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f3310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081948));
  return;
}



/* Entry: 1044f3320; end: 1044f332f; -[_TtC27LensCarouselSessionServices42SCPreviewScopedLensCarouselSessionServices lensCarouselSessionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f3320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081978));
  return;
}



/* Entry: 1044f3330; end: 1044f33c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f3330(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113081978) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f33c8; end: 1044f341f; -[_TtC27LensCarouselSessionServices42SCPreviewScopedLensCarouselSessionServices initWithLensCarouselSessionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f33c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113081978) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1044f3420; end: 1044f347f; -[_TtC27LensCarouselSessionServices42SCPreviewScopedLensCarouselSessionServices init] */

void FUN_1044f3420(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselSessionServices.SCPreviewScopedLensCarouselSessionServices",0x46,"init()",
             6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f344c);
  (*pcVar1)();
}



/* Entry: 1044f3480; end: 1044f348f; -[_TtC27LensCarouselSessionServices42SCPreviewScopedLensCarouselSessionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f3480(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081978));
  return;
}



/* Entry: 1044f3490; end: 1044f34af;  */

void FUN_1044f3490(void)

{
  _objc_opt_self(&PTR_PTR_1129c6288);
  return;
}



/* Entry: 1044f34b0; end: 1044f34bf; -[_TtC27LensCarouselSessionServices45SCSnapEditorScopedLensCarouselSessionServices lensCarouselSessionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f34b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130819a8));
  return;
}



/* Entry: 1044f34c0; end: 1044f3557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f34c0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130819a8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f3558; end: 1044f35af; -[_TtC27LensCarouselSessionServices45SCSnapEditorScopedLensCarouselSessionServices initWithLensCarouselSessionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f3558(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130819a8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1044f35b0; end: 1044f360f; -[_TtC27LensCarouselSessionServices45SCSnapEditorScopedLensCarouselSessionServices init] */

void FUN_1044f35b0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselSessionServices.SCSnapEditorScopedLensCarouselSessionServices",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f35dc);
  (*pcVar1)();
}



/* Entry: 1044f3610; end: 1044f361f; -[_TtC27LensCarouselSessionServices45SCSnapEditorScopedLensCarouselSessionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f3610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130819a8));
  return;
}



/* Entry: 1044f3620; end: 1044f3687;  */

void FUN_1044f3620(void)

{
  _objc_opt_self(&PTR_PTR_1129c6348);
  return;
}



/* Entry: 1044f3688; end: 1044f37fb;  */

byte FUN_1044f3688(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = param_1[1];
  uVar1 = param_2[1];
  if (uVar3 == 0) {
    if (uVar1 == 0) {
LAB_1044f36e8:
      uVar3 = param_1[3];
      uVar1 = param_2[3];
      if (uVar3 == 0) {
        if (uVar1 == 0) {
LAB_1044f3738:
          bVar2 = (byte)param_1[4] ^ (byte)param_2[4] ^ 1;
          goto LAB_1044f3754;
        }
      }
      else if (uVar1 != 0) {
        uVar4 = param_1[2];
        if (((uVar4 == param_2[2]) && (uVar3 == uVar1)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar4,uVar3,param_2[2],uVar1,0), (uVar4 & 1) != 0)) goto LAB_1044f3738;
      }
    }
  }
  else if (uVar1 != 0) {
    uVar4 = *param_1;
    if ((uVar4 == *param_2 && uVar3 == uVar1) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,uVar3,*param_2,uVar1,0), (uVar4 & 1) != 0)) goto LAB_1044f36e8;
  }
  bVar2 = 0;
LAB_1044f3754:
  return bVar2 & 1;
}



/* Entry: 1044f37fc; end: 1044f386f;  */

undefined8 * FUN_1044f37fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 1044f3870; end: 1044f38bb;  */

undefined8 * FUN_1044f3870(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 1044f38bc; end: 1044f397f;  */

int FUN_1044f38bc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1044f3980; end: 1044f39df;  */

undefined8 FUN_1044f3980(undefined8 param_1,undefined8 param_2)

{
  FUN_1044f3cfc(param_2,param_1,&UNK_11077f690);
  return param_2;
}



/* Entry: 1044f39e0; end: 1044f3a27;  */

uint FUN_1044f39e0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_1044f3a28(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1044f3a28; end: 1044f3c93;  */

bool FUN_1044f3a28(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_a0 [64];
  
  uVar9 = *param_1;
  uVar3 = param_1[1];
  uVar10 = param_1[2];
  uVar4 = param_1[3];
  uVar7 = param_1[4];
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar8 = param_2[4];
  if (uVar3 == 1) {
    if (uVar5 != 1) {
LAB_1044f3ac0:
      FUN_1044f3980(param_2,auStack_a0);
      FUN_1044f3980(param_1,auStack_a0);
      FUN_1044f4038(uVar9,uVar3,uVar10,uVar4,(byte)uVar7);
      FUN_1044f4038(uVar1,uVar5,uVar2,uVar6,(byte)uVar8);
      return false;
    }
    FUN_1044f3980(param_2,auStack_a0);
    goto LAB_1044f3a84;
  }
  if (uVar5 == 1) goto LAB_1044f3ac0;
  if (uVar3 == 0) {
    if (uVar5 != 0) goto LAB_1044f3bc0;
LAB_1044f3b60:
    if (uVar4 != 0) {
      if (uVar6 != 0) {
        if ((uVar10 == uVar2) && (uVar4 == uVar6)) goto LAB_1044f3c58;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar10,uVar4,uVar2,uVar6,0);
        FUN_1044f3980(param_2,auStack_a0);
        FUN_1044f3980(param_1,auStack_a0);
        _swift_bridgeObjectRelease(uVar5);
        if ((uVar10 & 1) == 0) goto LAB_1044f3bfc;
        goto LAB_1044f3c78;
      }
      goto LAB_1044f3bc0;
    }
    if (uVar6 == 0) {
LAB_1044f3c58:
      FUN_1044f3980(param_2,auStack_a0);
      FUN_1044f3980(param_1,auStack_a0);
      _swift_bridgeObjectRelease(uVar5);
LAB_1044f3c78:
      _swift_bridgeObjectRelease(uVar6);
      func_0x0001044f39b4(param_1);
      if ((((byte)uVar8 ^ (byte)uVar7) & 1) != 0) {
        return false;
      }
LAB_1044f3a84:
      if (param_1[5] != param_2[5]) {
        return false;
      }
      if (param_1[6] != param_2[6]) {
        return false;
      }
      return (int)param_1[7] == (int)param_2[7];
    }
    FUN_1044f3980(param_2,auStack_a0);
    FUN_1044f3980(param_1,auStack_a0);
  }
  else {
    if (uVar5 == 0) {
      FUN_1044f3980(param_2,auStack_a0);
      FUN_1044f3980(param_1,auStack_a0);
      goto LAB_1044f3bfc;
    }
    if (((uVar9 == uVar1) && (uVar3 == uVar5)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar9,uVar3,uVar1,uVar5,0), (uVar9 & 1) != 0)) goto LAB_1044f3b60;
LAB_1044f3bc0:
    FUN_1044f3980(param_2,auStack_a0);
    FUN_1044f3980(param_1,auStack_a0);
  }
  _swift_bridgeObjectRelease(uVar5);
LAB_1044f3bfc:
  _swift_bridgeObjectRelease(uVar6);
  func_0x0001044f39b4(param_1);
  return false;
}



/* Entry: 1044f3c94; end: 1044f3cfb;  */

long FUN_1044f3c94(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044f3cfc; end: 1044f3e8b;  */

void FUN_1044f3cfc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2[1];
  if (lVar1 == 1) {
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  }
  else {
    *param_1 = *param_2;
    param_1[1] = lVar1;
    uVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar2;
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    _swift_bridgeObjectRetain(lVar1);
    _swift_bridgeObjectRetain(uVar2);
  }
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  param_1[7] = param_2[7];
  return;
}



/* Entry: 1044f3e8c; end: 1044f3f5f;  */

undefined8 FUN_1044f3e8c(undefined8 param_1)

{
  (*(code *)(undefined *)0x1044f3790)();
  return param_1;
}



/* Entry: 1044f3f60; end: 1044f4037;  */

int FUN_1044f3f60(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar4 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  uVar2 = (int)uVar4 - 1;
  uVar1 = uVar2;
  if (0x7fffffff < uVar2) {
    uVar1 = 0xffffffff;
  }
  iVar3 = uVar1 - 1;
  if ((int)uVar2 < 1) {
    iVar3 = -1;
  }
  return iVar3 + 1;
}



/* Entry: 1044f4038; end: 1044f406b;  */

void FUN_1044f4038(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == 1) {
    return;
  }
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1044f406c; end: 1044f40c3;  */

uint FUN_1044f406c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_70 = param_1[4];
  uStack_68 = (undefined1)param_1[5];
  uStack_5f = *(undefined8 *)((long)param_1 + 0x31);
  uStack_67 = (undefined7)*(undefined8 *)((long)param_1 + 0x29);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x29) >> 0x38);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_30 = param_2[4];
  uStack_28 = (undefined1)param_2[5];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x31);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x29);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x29) >> 0x38);
  FUN_1044f40c4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1044f40c4; end: 1044f423f;  */

undefined8 FUN_1044f40c4(ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *param_1;
  lVar3 = *param_2;
  if (uVar2 == 0) {
    if (lVar3 != 0) {
      return 0;
    }
  }
  else {
    if (lVar3 == 0) {
      return 0;
    }
    func_0x000100c70ba8(0);
    _objc_retain(lVar3);
    _objc_retain();
    uVar1 = uVar2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar2);
    _objc_release(lVar3);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  uVar2 = param_1[1];
  lVar3 = param_2[1];
  if (uVar2 == 0) {
    if (lVar3 != 0) {
      return 0;
    }
  }
  else {
    if (lVar3 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar3);
    func_0x000103472b90(uVar2,lVar3);
    _swift_bridgeObjectRelease(lVar3);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  if ((char)param_1[3] == '\x01') {
    if ((char)param_2[3] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[3] == '\x01') {
      return 0;
    }
    if ((double)param_1[2] != (double)param_2[2]) {
      return 0;
    }
  }
  if ((char)param_1[5] == '\x01') {
    if ((char)param_2[5] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[5] == '\x01') {
      return 0;
    }
    if ((double)param_1[4] != (double)param_2[4]) {
      return 0;
    }
  }
  if ((char)param_1[7] == '\x01') {
    if ((char)param_2[7] == '\x01') {
      return 1;
    }
  }
  else if (((char)param_2[7] != '\x01') && ((double)param_1[6] == (double)param_2[6])) {
    return 1;
  }
  return 0;
}



/* Entry: 1044f4240; end: 1044f42f7;  */

long FUN_1044f4240(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044f42f8; end: 1044f4383;  */

undefined8 * FUN_1044f42f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  uVar1 = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar1;
  return param_1;
}



/* Entry: 1044f4384; end: 1044f43ef;  */

undefined8 * FUN_1044f4384(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Entry: 1044f43f0; end: 1044f44bf;  */

int FUN_1044f43f0(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1044f44c0; end: 1044f4657;  */

int FUN_1044f44c0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0x7e < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x81) {
      iVar2 = 4;
    }
    if (param_2 + 0x81 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1044f453c;
        goto LAB_1044f4520;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1044f4520:
      return ((uint)*param_1 | uVar1 << 8) - 0x81;
    }
  }
LAB_1044f453c:
  uVar1 = (*param_1 & 0x7e | (uint)(*param_1 >> 7)) ^ 0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1044f4658; end: 1044f4663;  */

uint FUN_1044f4658(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  uVar1 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar1 >> 0x1d;
  if (uVar1 >> 0x1d < 2) {
    if (uVar4 == 0) {
      if (uVar3 >> 0x3d != 0) {
        return 0;
      }
      func_0x0001007bbbf8(0);
      goto LAB_1044f4718;
    }
    if (uVar3 >> 0x3d != 1) {
      return 0;
    }
  }
  else if (uVar4 == 2) {
    if (uVar3 >> 0x3d != 2) {
      return 0;
    }
  }
  else {
    if (uVar4 != 3) {
      if (uVar3 != 0x8000000000000000) {
        return 0;
      }
      return 1;
    }
    if (uVar3 >> 0x3d != 3) {
      return 0;
    }
  }
  func_0x0001007bbbf8(0);
  uVar2 = uVar2 & 0x1fffffffffffffff;
  uVar3 = uVar3 & 0x1fffffffffffffff;
LAB_1044f4718:
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar2,uVar3);
  return (uint)uVar2 & 1;
}



/* Entry: 1044f4664; end: 1044f4737;  */

uint FUN_1044f4664(ulong param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_1 >> 0x20);
  uVar2 = uVar1 >> 0x1d;
  if (uVar1 >> 0x1d < 2) {
    if (uVar2 == 0) {
      if (param_2 >> 0x3d != 0) {
        return 0;
      }
      func_0x0001007bbbf8(0);
      goto LAB_1044f4718;
    }
    if (param_2 >> 0x3d != 1) {
      return 0;
    }
  }
  else if (uVar2 == 2) {
    if (param_2 >> 0x3d != 2) {
      return 0;
    }
  }
  else {
    if (uVar2 != 3) {
      if (param_2 != 0x8000000000000000) {
        return 0;
      }
      return 1;
    }
    if (param_2 >> 0x3d != 3) {
      return 0;
    }
  }
  func_0x0001007bbbf8(0);
  param_1 = param_1 & 0x1fffffffffffffff;
  param_2 = param_2 & 0x1fffffffffffffff;
LAB_1044f4718:
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(param_1,param_2);
  return (uint)param_1 & 1;
}



/* Entry: 1044f4738; end: 1044f47af;  */

void FUN_1044f4738(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_1 >> 0x20);
  uVar2 = uVar1 >> 0x1d;
  if (uVar1 >> 0x1d < 2) {
    if (uVar2 == 0) goto LAB_1044f4768;
    if (uVar2 != 1) {
      return;
    }
  }
  else if ((uVar2 != 2) && (uVar2 != 3)) {
    return;
  }
  param_1 = param_1 & 0x1fffffffffffffff;
LAB_1044f4768:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 1044f47b0; end: 1044f4817;  */

undefined8 * FUN_1044f47b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  FUN_1044f4738(uVar2);
  uVar1 = *param_1;
  *param_1 = uVar2;
  func_0x0001044f4778(uVar1);
  return param_1;
}



/* Entry: 1044f4818; end: 1044f4933;  */

int FUN_1044f4818(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7b < param_2) && ((char)param_1[2] != '\0')) {
    return *param_1 + 0x7c;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1d | (uVar1 >> 0x19 & 8 | (uint)*(undefined8 *)param_1 & 7) << 3) ^ 0x7f;
  if (0x7a < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1044f4934; end: 1044f4aa3;  */

void FUN_1044f4934(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1044f4aa4; end: 1044f4b37;  */

uint FUN_1044f4aa4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined8 uStack_ce;
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
  undefined8 uStack_40;
  undefined2 uStack_38;
  undefined6 uStack_36;
  undefined2 uStack_30;
  undefined8 uStack_2e;
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_e0 = param_1[0x10];
  uStack_d8 = (undefined2)param_1[0x11];
  uStack_ce = *(undefined8 *)((long)param_1 + 0x92);
  uStack_d6 = (undefined6)*(undefined8 *)((long)param_1 + 0x8a);
  uStack_d0 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x8a) >> 0x30);
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_40 = param_2[0x10];
  uStack_38 = (undefined2)param_2[0x11];
  uStack_2e = *(undefined8 *)((long)param_2 + 0x92);
  uStack_36 = (undefined6)*(undefined8 *)((long)param_2 + 0x8a);
  uStack_30 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x8a) >> 0x30);
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_1044f4b38(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 1044f4b38; end: 1044f4c37;  */

byte FUN_1044f4b38(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  byte bVar3;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)) &&
     ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)))) {
    uStack_68 = param_1[5];
    uStack_70 = param_1[4];
    uStack_58 = param_1[7];
    uStack_60 = param_1[6];
    uStack_48 = param_1[9];
    uStack_50 = param_1[8];
    uStack_38 = param_1[0xb];
    uStack_40 = param_1[10];
    uStack_a8 = param_2[5];
    uStack_b0 = param_2[4];
    uStack_98 = param_2[7];
    uStack_a0 = param_2[6];
    uStack_88 = param_2[9];
    uStack_90 = param_2[8];
    uStack_78 = param_2[0xb];
    uStack_80 = param_2[10];
    puVar2 = &uStack_70;
    FUN_1044f3a28(puVar2,&uStack_b0);
    if (((ulong)puVar2 & 1) != 0) {
      uStack_e8 = param_1[0xd];
      uStack_f0 = param_1[0xc];
      uStack_d8 = param_1[0xf];
      uStack_e0 = param_1[0xe];
      uStack_d0 = param_1[0x10];
      uStack_c8 = (undefined1)param_1[0x11];
      uStack_bf = *(undefined8 *)((long)param_1 + 0x91);
      uStack_c7 = (undefined7)*(undefined8 *)((long)param_1 + 0x89);
      uStack_c0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x89) >> 0x38);
      uStack_128 = param_2[0xd];
      uStack_130 = param_2[0xc];
      uStack_118 = param_2[0xf];
      uStack_120 = param_2[0xe];
      uStack_110 = param_2[0x10];
      uStack_108 = (undefined1)param_2[0x11];
      uStack_ff = *(undefined8 *)((long)param_2 + 0x91);
      uStack_107 = (undefined7)*(undefined8 *)((long)param_2 + 0x89);
      uStack_100 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x89) >> 0x38);
      puVar2 = &uStack_f0;
      FUN_1044f40c4(puVar2,&uStack_130);
      if (((ulong)puVar2 & 1) != 0) {
        bVar3 = *(byte *)((long)param_1 + 0x99) ^ *(byte *)((long)param_2 + 0x99) ^ 1;
        goto LAB_1044f4c20;
      }
    }
  }
  bVar3 = 0;
LAB_1044f4c20:
  return bVar3 & 1;
}



/* Entry: 1044f4c38; end: 1044f4cb3;  */

long FUN_1044f4c38(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044f4cb4; end: 1044f4f4f;  */

undefined8 * FUN_1044f4cb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  lVar2 = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  if (lVar2 == 1) {
    uVar3 = param_2[4];
    uVar4 = param_2[7];
    uVar1 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar3;
    param_1[7] = uVar4;
    param_1[6] = uVar1;
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  }
  else {
    param_1[4] = param_2[4];
    param_1[5] = lVar2;
    uVar3 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar3;
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    _swift_bridgeObjectRetain(lVar2);
    _swift_bridgeObjectRetain(uVar3);
  }
  uVar3 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar3;
  uVar3 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar3;
  uVar3 = param_2[0xd];
  uVar1 = param_2[0xe];
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar1;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  param_1[0x10] = param_2[0x10];
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  uVar1 = param_2[0x12];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  param_1[0x12] = uVar1;
  *(undefined1 *)((long)param_1 + 0x99) = *(undefined1 *)((long)param_2 + 0x99);
  _objc_retain();
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 1044f4f50; end: 1044f4f83;  */

void FUN_1044f4f50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  uVar6 = param_2[0x11];
  uVar5 = param_2[0x10];
  uVar7 = *(undefined8 *)((long)param_2 + 0x8a);
  *(undefined8 *)((long)param_1 + 0x92) = *(undefined8 *)((long)param_2 + 0x92);
  *(undefined8 *)((long)param_1 + 0x8a) = uVar7;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  param_1[0x11] = uVar6;
  param_1[0x10] = uVar5;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  return;
}



/* Entry: 1044f4f84; end: 1044f507f;  */

undefined8 * FUN_1044f4f84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  if (param_1[5] != 1) {
    lVar3 = param_2[5];
    if (lVar3 != 1) {
      param_1[4] = param_2[4];
      param_1[5] = lVar3;
      _swift_bridgeObjectRelease();
      uVar2 = param_2[7];
      uVar1 = param_1[7];
      param_1[6] = param_2[6];
      param_1[7] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
      goto LAB_1044f5010;
    }
    FUN_1044f3e8c(param_1 + 4);
  }
  uVar2 = param_2[4];
  uVar4 = param_2[7];
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[7] = uVar4;
  param_1[6] = uVar1;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
LAB_1044f5010:
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  uVar1 = param_1[0xc];
  uVar2 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar2;
  _objc_release(uVar1);
  uVar2 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRelease(uVar2);
  param_1[0xe] = param_2[0xe];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  param_1[0x10] = param_2[0x10];
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  param_1[0x12] = param_2[0x12];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)((long)param_1 + 0x99) = *(undefined1 *)((long)param_2 + 0x99);
  return param_1;
}



/* Entry: 1044f5080; end: 1044f513f;  */

int FUN_1044f5080(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x9a) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1044f5140; end: 1044f514b; -[SCARBarSessionInfo sessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f5140(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130819d8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130819d8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044f514c; end: 1044f5157; -[SCARBarSessionInfo tabCategoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f514c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130819e0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130819e0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044f5158; end: 1044f51af;  */

void FUN_1044f5158(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044f51b0; end: 1044f51bf; -[SCARBarSessionInfo isMiniCameraActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044f51b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130819e8);
}



/* Entry: 1044f51c0; end: 1044f52d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f51c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130819d8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130819e0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_1130819e8) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f52d8; end: 1044f5393; -[SCARBarSessionInfo initWithSessionId:tabCategoryId:isMiniCameraActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f52d8(long param_1,long param_2,long param_3,long param_4,undefined1 param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130819d8);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_1130819e0);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_1130819e8) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f5394; end: 1044f53ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f5394(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130819d8);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130819e0);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_1130819e8) = *(undefined1 *)(param_1 + 4);
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}


