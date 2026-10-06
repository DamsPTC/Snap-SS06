/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043ec314; end: 1043ec337;  */

undefined1  [16] FUN_1043ec314(void)

{
  return ZEXT816(0x110766d60);
}



/* Entry: 1043ec338; end: 1043ec40f;  */

void FUN_1043ec338(void)

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



/* Entry: 1043ec410; end: 1043ec42f;  */

void FUN_1043ec410(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1043ec430; end: 1043ec46f;  */

void FUN_1043ec430(void)

{
  undefined *puVar1;
  
  if (puRam00000001130764b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf7490;
  _swift_getWitnessTable(&UNK_10dcf7490,&UNK_110766f18);
  puRam00000001130764b0 = puVar1;
  return;
}



/* Entry: 1043ec470; end: 1043ec497;  */

undefined1  [16] FUN_1043ec470(void)

{
  return ZEXT816(0x110766f18);
}



/* Entry: 1043ec498; end: 1043ec4d7;  */

void FUN_1043ec498(void)

{
  undefined *puVar1;
  
  if (puRam00000001130764b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf7570;
  _swift_getWitnessTable(&UNK_10dcf7570,&UNK_110767030);
  puRam00000001130764b8 = puVar1;
  return;
}



/* Entry: 1043ec4d8; end: 1043ec583;  */

void FUN_1043ec4d8(void)

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



/* Entry: 1043ec584; end: 1043ec5cf;  */

void FUN_1043ec584(ulong *param_1,ulong *param_2)

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



/* Entry: 1043ec5d0; end: 1043ec6a7;  */

void FUN_1043ec5d0(void)

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



/* Entry: 1043ec6a8; end: 1043ec6c7;  */

void FUN_1043ec6a8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1043ec6c8; end: 1043ec707;  */

void FUN_1043ec6c8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130764c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf7650;
  _swift_getWitnessTable(&UNK_10dcf7650,&UNK_1107670a8);
  puRam00000001130764c0 = puVar1;
  return;
}



/* Entry: 1043ec708; end: 1043ec717;  */

undefined1  [16] FUN_1043ec708(void)

{
  return ZEXT816(0x1107670a8);
}



/* Entry: 1043ec718; end: 1043ec763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ec718(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130764c8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043ec764; end: 1043ec7bb; -[_TtC18SCCameraMLServices18SCCameraMLServices initWithHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ec764(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130764c8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1043ec7bc; end: 1043ec81b; -[_TtC18SCCameraMLServices18SCCameraMLServices init] */

void FUN_1043ec7bc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCameraMLServices.SCCameraMLServices",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043ec7e8);
  (*pcVar1)();
}



/* Entry: 1043ec81c; end: 1043ec82b; -[_TtC18SCCameraMLServices18SCCameraMLServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ec81c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_1130764c8));
  return;
}



/* Entry: 1043ec82c; end: 1043ec83b; -[SCCameraMLSuperResolutionResult pixelBufferRef] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ec82c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130764f8));
  return;
}



/* Entry: 1043ec83c; end: 1043ec8a3; -[SCCameraMLSuperResolutionResult loggingInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ec83c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113076500);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043ec8a4; end: 1043ec96b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ec8a4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130764f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113076500) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043ec96c; end: 1043eca0f; -[SCCameraMLSuperResolutionResult initWithPixelBuffer:loggingInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ec96c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
               PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  *(undefined8 *)(param_1 + _DAT_1130764f8) = param_3;
  *(long *)(param_1 + _DAT_113076500) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1043eca10; end: 1043eca6f; -[SCCameraMLSuperResolutionResult init] */

void FUN_1043eca10(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCameraMLServices.CameraMLSuperResolutionResult",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043eca3c);
  (*pcVar1)();
}



/* Entry: 1043eca70; end: 1043ecaa7; -[SCCameraMLSuperResolutionResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043eca70(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130764f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113076500));
  return;
}



/* Entry: 1043ecaa8; end: 1043ecac7;  */

void FUN_1043ecaa8(void)

{
  _objc_opt_self(&PTR_PTR_1129ad110);
  return;
}



/* Entry: 1043ecac8; end: 1043ecad7; -[_TtC22SCViewfinderUIServices38CallUICameraScopedViewfinderUIServices viewfinderUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ecac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113076530));
  return;
}



/* Entry: 1043ecad8; end: 1043ecb6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ecad8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113076530) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043ecb70; end: 1043ecbc7; -[_TtC22SCViewfinderUIServices38CallUICameraScopedViewfinderUIServices initWithViewfinderUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ecb70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113076530) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1043ecbc8; end: 1043ecc27; -[_TtC22SCViewfinderUIServices38CallUICameraScopedViewfinderUIServices init] */

void FUN_1043ecbc8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCViewfinderUIServices.CallUICameraScopedViewfinderUIServices",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043ecbf4);
  (*pcVar1)();
}



/* Entry: 1043ecc28; end: 1043ecc37; -[_TtC22SCViewfinderUIServices38CallUICameraScopedViewfinderUIServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ecc28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113076530));
  return;
}



/* Entry: 1043ecc38; end: 1043ecc57;  */

void FUN_1043ecc38(void)

{
  _objc_opt_self(&PTR_PTR_1129ad1d8);
  return;
}



/* Entry: 1043ecc58; end: 1043ecc67; -[_TtC22SCViewfinderUIServices36SCCameraUIScopedViewfinderUIServices viewfinderUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ecc58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113076560));
  return;
}



/* Entry: 1043ecc68; end: 1043eccb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ecc68(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113076560) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043eccb4; end: 1043ecd0b; -[_TtC22SCViewfinderUIServices36SCCameraUIScopedViewfinderUIServices initWithViewfinderUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043eccb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113076560) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1043ecd0c; end: 1043ecd6b; -[_TtC22SCViewfinderUIServices36SCCameraUIScopedViewfinderUIServices init] */

void FUN_1043ecd0c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCViewfinderUIServices.SCCameraUIScopedViewfinderUIServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043ecd38);
  (*pcVar1)();
}



/* Entry: 1043ecd6c; end: 1043ecd7b; -[_TtC22SCViewfinderUIServices36SCCameraUIScopedViewfinderUIServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ecd6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113076560));
  return;
}



/* Entry: 1043ecd7c; end: 1043ecdc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ecd7c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113076590) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043ecdc8; end: 1043ece1f; -[_TtC22SCViewfinderUIServices38SCMainCameraScopedViewfinderUIServices initWithViewfinderUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ecdc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113076590) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1043ece20; end: 1043ece7f; -[_TtC22SCViewfinderUIServices38SCMainCameraScopedViewfinderUIServices init] */

void FUN_1043ece20(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCViewfinderUIServices.SCMainCameraScopedViewfinderUIServices",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043ece4c);
  (*pcVar1)();
}



/* Entry: 1043ece80; end: 1043ece9f; -[_TtC22SCViewfinderUIServices38SCMainCameraScopedViewfinderUIServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ece80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113076590));
  return;
}



/* Entry: 1043ecea0; end: 1043ecedf;  */

void FUN_1043ecea0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130765c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf7838;
  _swift_getWitnessTable(&UNK_10dcf7838,&UNK_1107671a0);
  puRam00000001130765c0 = puVar1;
  return;
}



/* Entry: 1043ecee0; end: 1043ecee3;  */

void FUN_1043ecee0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130765c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf7870;
  _swift_getWitnessTable(&UNK_10dcf7870,&UNK_1107671a0);
  puRam00000001130765c8 = puVar1;
  return;
}



/* Entry: 1043ecee4; end: 1043ecf23;  */

void FUN_1043ecee4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130765c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf7870;
  _swift_getWitnessTable(&UNK_10dcf7870,&UNK_1107671a0);
  puRam00000001130765c8 = puVar1;
  return;
}



/* Entry: 1043ecf24; end: 1043ecf4f;  */

void FUN_1043ecf24(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 1043ecf50; end: 1043ecf8f;  */

void FUN_1043ecf50(void)

{
  undefined *puVar1;
  
  if (puRam00000001130765d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf7938;
  _swift_getWitnessTable(&UNK_10dcf7938,&UNK_1107671a0);
  puRam00000001130765d0 = puVar1;
  return;
}



/* Entry: 1043ecf90; end: 1043ecf93;  */

void FUN_1043ecf90(void)

{
  undefined *puVar1;
  
  if (puRam00000001130765d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf7960;
  _swift_getWitnessTable(&UNK_10dcf7960,&UNK_1107671a0);
  puRam00000001130765d8 = puVar1;
  return;
}



/* Entry: 1043ecf94; end: 1043ecfd3;  */

void FUN_1043ecf94(void)

{
  undefined *puVar1;
  
  if (puRam00000001130765d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf7960;
  _swift_getWitnessTable(&UNK_10dcf7960,&UNK_1107671a0);
  puRam00000001130765d8 = puVar1;
  return;
}



/* Entry: 1043ecfd4; end: 1043ed153;  */

void FUN_1043ecfd4(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1043ed154; end: 1043ed1fb;  */

void FUN_1043ed154(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_1043ed1e8;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_1043ed1e8:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 1043ed1fc; end: 1043ed253;  */

undefined1  [16] FUN_1043ed1fc(void)

{
  return ZEXT816(0x1107671a0);
}



/* Entry: 1043ed254; end: 1043ed293;  */

void FUN_1043ed254(void)

{
  undefined *puVar1;
  
  if (puRam00000001130765e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf7a20;
  _swift_getWitnessTable(&UNK_10dcf7a20,&UNK_1107672e0);
  puRam00000001130765e0 = puVar1;
  return;
}



/* Entry: 1043ed294; end: 1043ed297;  */

void FUN_1043ed294(void)

{
  undefined *puVar1;
  
  if (puRam00000001130765e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf7a58;
  _swift_getWitnessTable(&UNK_10dcf7a58,&UNK_1107672e0);
  puRam00000001130765e8 = puVar1;
  return;
}



/* Entry: 1043ed298; end: 1043ed2d7;  */

void FUN_1043ed298(void)

{
  undefined *puVar1;
  
  if (puRam00000001130765e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf7a58;
  _swift_getWitnessTable(&UNK_10dcf7a58,&UNK_1107672e0);
  puRam00000001130765e8 = puVar1;
  return;
}



/* Entry: 1043ed2d8; end: 1043ed303;  */

void FUN_1043ed2d8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 1043ed304; end: 1043ed343;  */

void FUN_1043ed304(void)

{
  undefined *puVar1;
  
  if (puRam00000001130765f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf7b20;
  _swift_getWitnessTable(&UNK_10dcf7b20,&UNK_1107672e0);
  puRam00000001130765f0 = puVar1;
  return;
}



/* Entry: 1043ed344; end: 1043ed347;  */

void FUN_1043ed344(void)

{
  undefined *puVar1;
  
  if (puRam00000001130765f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf7b48;
  _swift_getWitnessTable(&UNK_10dcf7b48,&UNK_1107672e0);
  puRam00000001130765f8 = puVar1;
  return;
}



/* Entry: 1043ed348; end: 1043ed387;  */

void FUN_1043ed348(void)

{
  undefined *puVar1;
  
  if (puRam00000001130765f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf7b48;
  _swift_getWitnessTable(&UNK_10dcf7b48,&UNK_1107672e0);
  puRam00000001130765f8 = puVar1;
  return;
}



/* Entry: 1043ed388; end: 1043ed507;  */

void FUN_1043ed388(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1043ed508; end: 1043ed5af;  */

void FUN_1043ed508(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_1043ed59c;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_1043ed59c:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 1043ed5b0; end: 1043ed5c7;  */

undefined1  [16] FUN_1043ed5b0(void)

{
  return ZEXT816(0x1107672e0);
}



/* Entry: 1043ed5c8; end: 1043ed5d7; -[_TtC22SCViewfinderUIServices22SCViewfinderUIServices renderTarget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ed5c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113076600));
  return;
}



/* Entry: 1043ed5d8; end: 1043ed5e7; -[_TtC22SCViewfinderUIServices22SCViewfinderUIServices uiHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ed5d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113076608));
  return;
}



/* Entry: 1043ed5e8; end: 1043ed65b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ed5e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113076600) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113076608) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113076610) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043ed65c; end: 1043ed6bb; -[_TtC22SCViewfinderUIServices22SCViewfinderUIServices init] */

void FUN_1043ed65c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCViewfinderUIServices.SCViewfinderUIServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043ed688);
  (*pcVar1)();
}



/* Entry: 1043ed6bc; end: 1043ed703; -[_TtC22SCViewfinderUIServices22SCViewfinderUIServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ed6bc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076600));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076608));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113076610));
  return;
}



/* Entry: 1043ed704; end: 1043ed70b; +[SCViewfinderTouchSource none] */

undefined8 FUN_1043ed704(void)

{
  return 0;
}



/* Entry: 1043ed70c; end: 1043ed713; +[SCViewfinderTouchSource lens] */

undefined8 FUN_1043ed70c(void)

{
  return 1;
}



/* Entry: 1043ed714; end: 1043ed71b; +[SCViewfinderTouchSource scan] */

undefined8 FUN_1043ed714(void)

{
  return 2;
}



/* Entry: 1043ed71c; end: 1043ed723; +[SCViewfinderTouchSource all] */

undefined8 FUN_1043ed71c(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 1043ed724; end: 1043ed7bf; -[SCViewfinderTouchSource init] */

void FUN_1043ed724(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCViewfinderUIServices/SCViewfinderTouchSourceWrapper.swift",0x3b,2,0x11,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043ed76c);
  (*pcVar1)();
}



/* Entry: 1043ed7c0; end: 1043ed7c7; +[SCViewfinderTouchType none] */

undefined8 FUN_1043ed7c0(void)

{
  return 0;
}



/* Entry: 1043ed7c8; end: 1043ed7cf; +[SCViewfinderTouchType touch] */

undefined8 FUN_1043ed7c8(void)

{
  return 1;
}



/* Entry: 1043ed7d0; end: 1043ed7d7; +[SCViewfinderTouchType tap] */

undefined8 FUN_1043ed7d0(void)

{
  return 2;
}



/* Entry: 1043ed7d8; end: 1043ed7df; +[SCViewfinderTouchType doubleTap] */

undefined8 FUN_1043ed7d8(void)

{
  return 4;
}



/* Entry: 1043ed7e0; end: 1043ed7e7; +[SCViewfinderTouchType pinch] */

undefined8 FUN_1043ed7e0(void)

{
  return 8;
}



/* Entry: 1043ed7e8; end: 1043ed7ef; +[SCViewfinderTouchType pan] */

undefined8 FUN_1043ed7e8(void)

{
  return 0x10;
}



/* Entry: 1043ed7f0; end: 1043ed7f7; +[SCViewfinderTouchType swipe] */

undefined8 FUN_1043ed7f0(void)

{
  return 0x20;
}



/* Entry: 1043ed7f8; end: 1043ed7ff; +[SCViewfinderTouchType rotate] */

undefined8 FUN_1043ed7f8(void)

{
  return 0x40;
}



/* Entry: 1043ed800; end: 1043ed807; +[SCViewfinderTouchType longPress] */

undefined8 FUN_1043ed800(void)

{
  return 0x80;
}



/* Entry: 1043ed808; end: 1043ed8a3; -[SCViewfinderTouchType init] */

void FUN_1043ed808(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCViewfinderUIServices/SCViewfinderTouchTypeWrapper.swift",0x39,2,0x1b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043ed850);
  (*pcVar1)();
}



/* Entry: 1043ed8a4; end: 1043ed9ff;  */

void FUN_1043ed8a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1043eda00; end: 1043eda0b; -[_TtC17SCMainCameraScope17SCMainCameraScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043eda00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113076690;
  _swift_beginAccess(param_1 + _DAT_113076690,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043eda0c; end: 1043eda17; -[_TtC17SCMainCameraScope17SCMainCameraScope setMainCameraInteractiveModalTransitionController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043eda0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130766a0;
  _swift_beginAccess(param_1 + _DAT_1130766a0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043eda18; end: 1043eda27; -[_TtC17SCMainCameraScope17SCMainCameraScope tabBarItemActionObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043eda18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130766a8));
  return;
}



/* Entry: 1043eda28; end: 1043eda33; -[_TtC17SCMainCameraScope17SCMainCameraScope setSendSnapDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043eda28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130766b0;
  _swift_beginAccess(param_1 + _DAT_1130766b0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043eda34; end: 1043eda3f; -[_TtC17SCMainCameraScope17SCMainCameraScope setSigViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043eda34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130766b8;
  _swift_beginAccess(param_1 + _DAT_1130766b8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043eda40; end: 1043eda4b; -[_TtC17SCMainCameraScope17SCMainCameraScope setSwipeViewDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043eda40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130766c0;
  _swift_beginAccess(param_1 + _DAT_1130766c0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043eda4c; end: 1043eda9f;  */

void FUN_1043eda4c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043edaa0; end: 1043edabf; -[_TtC17SCMainCameraScope17SCMainCameraScope tabBarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043edaa0(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130766c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043edac0; end: 1043edacf; -[_TtC17SCMainCameraScope17SCMainCameraScope navigationBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043edac0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130766d0));
  return;
}



/* Entry: 1043edad0; end: 1043edb17; -[_TtC17SCMainCameraScope17SCMainCameraScope aiModeDeeplinkObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043edad0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130766e0;
  _swift_beginAccess(param_1 + _DAT_1130766e0,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1043edb18; end: 1043edb7b; -[_TtC17SCMainCameraScope17SCMainCameraScope setAiModeDeeplinkObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043edb18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130766e0;
  _swift_beginAccess(param_1 + _DAT_1130766e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1043edb7c; end: 1043ede3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1043edb7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _objc_allocWithZone();
  lVar1 = _DAT_113076690;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113076690,0);
  lVar2 = _DAT_1130766a0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130766a0,0);
  lVar3 = _DAT_1130766b0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130766b0,0);
  lVar4 = _DAT_1130766b8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130766b8,0);
  lVar5 = _DAT_1130766c0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130766c0,0);
  lVar6 = _DAT_1130766e0;
  *(undefined8 *)(unaff_x20 + _DAT_1130766e0) = 0;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_6);
  *(undefined8 *)(unaff_x20 + _DAT_113076698) = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_98,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_10);
  *(undefined8 *)(unaff_x20 + _DAT_1130766a8) = param_9;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_b0,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_8);
  _swift_beginAccess(unaff_x20 + lVar4,auStack_c8,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar4,param_5);
  _swift_beginAccess(unaff_x20 + lVar5,auStack_e0,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar5,param_7);
  *(undefined8 *)(unaff_x20 + _DAT_1130766c8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130766d0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1130766d8) = param_1;
  _swift_beginAccess(unaff_x20 + lVar6,auStack_f8,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + lVar6);
  *(undefined8 *)(unaff_x20 + lVar6) = param_11;
  _objc_retain(param_2);
  _objc_retain(param_9);
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_11);
  _objc_release(uVar8);
  puVar7 = auStack_108;
  _objc_msgSendSuper2(puVar7,PTR_s_init_1125d9248);
  _swift_unknownObjectRelease(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _swift_unknownObjectRelease(param_8);
  _objc_release(param_9);
  _objc_release(param_10);
  _objc_release(param_11);
  return puVar7;
}



/* Entry: 1043ede3c; end: 1043edfab; -[_TtC17SCMainCameraScope17SCMainCameraScope initWithUiContainer:headerItem:tabBarItem:navigationBar:sigViewController:delegate:swipeViewDelegate:sendSnapDelegate:tabBarItemActionObservable:mainCameraInteractiveModalTransitionController:aiModeDeeplinkObservable:] */

undefined8
FUN_1043ede3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_4;
  _objc_retain();
  _swift_unknownObjectRetain(param_5);
  uVar2 = param_6;
  _objc_retain();
  _objc_retain(param_7);
  _swift_unknownObjectRetain(param_8);
  _swift_unknownObjectRetain(param_9);
  _swift_unknownObjectRetain(param_10);
  uVar3 = param_11;
  _objc_retain(param_11);
  uVar4 = param_12;
  _objc_retain();
  uVar5 = param_13;
  _objc_retain();
  uVar6 = param_3;
  FUN_1043ee160(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
                param_13);
  _swift_unknownObjectRelease(param_3);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_5);
  _objc_release(uVar2);
  _objc_release(param_7);
  _swift_unknownObjectRelease(param_8);
  _swift_unknownObjectRelease(param_9);
  _swift_unknownObjectRelease(param_10);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  return uVar6;
}



/* Entry: 1043edfac; end: 1043edfd7; -[_TtC17SCMainCameraScope17SCMainCameraScope init] */

void FUN_1043edfac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMainCameraScope.SCMainCameraScope",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043edfd8);
  (*pcVar1)();
}



/* Entry: 1043edfd8; end: 1043ee0eb; -[_TtC17SCMainCameraScope17SCMainCameraScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043edfd8(long param_1)

{
  func_0x000100db7f88(param_1 + _DAT_113076690);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076698));
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130766a0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130766a8));
  func_0x000100db7f88(param_1 + _DAT_1130766b0);
  func_0x000100db7f88(param_1 + _DAT_1130766b8);
  func_0x000100db7f88(param_1 + _DAT_1130766c0);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130766c8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130766d0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130766d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130766e0));
  return;
}



/* Entry: 1043ee0ec; end: 1043ee117; -[_TtC17SCMainCameraScope25SCMainCameraScopeServices init] */

void FUN_1043ee0ec(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMainCameraScope.SCMainCameraScopeServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043ee118);
  (*pcVar1)();
}



/* Entry: 1043ee118; end: 1043ee11b;  */

void FUN_1043ee118(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043ee11c; end: 1043ee14f;  */

void FUN_1043ee11c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043ee150; end: 1043ee15f; -[_TtC17SCMainCameraScope25SCMainCameraScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ee150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130766f0));
  return;
}



/* Entry: 1043ee160; end: 1043ee393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ee160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _swift_getObjectType();
  lVar1 = _DAT_113076690;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113076690,0);
  lVar2 = _DAT_1130766a0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130766a0,0);
  lVar3 = _DAT_1130766b0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130766b0,0);
  lVar4 = _DAT_1130766b8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130766b8,0);
  lVar5 = _DAT_1130766c0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130766c0,0);
  lVar6 = _DAT_1130766e0;
  *(undefined8 *)(unaff_x20 + _DAT_1130766e0) = 0;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_6);
  *(undefined8 *)(unaff_x20 + _DAT_113076698) = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_98,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_10);
  *(undefined8 *)(unaff_x20 + _DAT_1130766a8) = param_9;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_b0,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_8);
  _swift_beginAccess(unaff_x20 + lVar4,auStack_c8,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar4,param_5);
  _swift_beginAccess(unaff_x20 + lVar5,auStack_e0,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar5,param_7);
  *(undefined8 *)(unaff_x20 + _DAT_1130766c8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130766d0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1130766d8) = param_1;
  _swift_beginAccess(unaff_x20 + lVar6,auStack_f8,1,0);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar6);
  *(undefined8 *)(unaff_x20 + lVar6) = param_11;
  _objc_retain(param_2);
  _objc_retain(param_9);
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_11);
  _objc_release(uVar7);
  _objc_msgSendSuper2(&stack0xfffffffffffffef8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043ee394; end: 1043ee3a7;  */

undefined1  [16] FUN_1043ee394(void)

{
  return ZEXT816(0x110767560);
}


