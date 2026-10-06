/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048f2adc; end: 1048f2b43;  */

void FUN_1048f2adc(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  _objc_retain(param_1);
  (*param_4)(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048f2b44; end: 1048f2c67;  */

undefined * FUN_1048f2b44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_allocWithZone(PTR__OBJC_CLASS___UILabel_1126aec30);
  _objc_msgSend(0,0,0,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retain(puVar1);
  _objc_msgSend(puVar2,PTR_s_clearColor_1125ac538);
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(puVar1,PTR_s_setBackgroundColor__112639330,puVar2);
  _objc_release(puVar2);
  _objc_msgSend(puVar1,PTR_s_setAutoresizingMask__112638f48,4);
  _objc_release(puVar1);
  _objc_msgSend(puVar1,PTR_s_setNumberOfLines__112651960,0);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_msgSend(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(puVar1,PTR_s_setFont__112645340,puVar2);
  _objc_release(puVar2);
  _objc_msgSend(puVar1,PTR_s_setTextAlignment__112662638,0);
  return puVar1;
}



/* Entry: 1048f2c68; end: 1048f2c87;  */

void FUN_1048f2c68(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e4648);
  return;
}



/* Entry: 1048f2c88; end: 1048f2c97; -[FBSDKTooltipView textLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f2c88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11309c8b0));
  return;
}



/* Entry: 1048f2c98; end: 1048f2ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f2c98(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + _DAT_11309c8b0));
  return;
}



/* Entry: 1048f2ca8; end: 1048f2cc7;  */

void FUN_1048f2ca8(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1048f2cc8; end: 1048f2ce3;  */

void FUN_1048f2cc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1048f2ce4; end: 1048f2cfb; -[FBSDKTooltipView init] */

void FUN_1048f2ce4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)
            (param_1,PTR_s_initWithTagline_message_colorSty_112525198,0,0,0);
  return;
}



/* Entry: 1048f2cfc; end: 1048f2d5b;  */

void FUN_1048f2cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_allocWithZone();
  FUN_1048f0840(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 1048f2d5c; end: 1048f2ddf; -[FBSDKTooltipView initWithTagline:message:colorStyle:] */

void FUN_1048f2d5c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    uVar1 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  FUN_1048f0840(param_3,uVar1,param_4,param_2,param_5);
  return;
}



/* Entry: 1048f2de0; end: 1048f2e23;  */

undefined8 FUN_1048f2de0(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  _objc_msgSend();
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 1048f2e24; end: 1048f2e27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f2e24(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_11309c880) = 0x4018000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c888);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c890);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c898);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_11309c8a0;
  _CFAbsoluteTimeGetCurrent();
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8a8) = 0x4018000000000000;
  lVar2 = _DAT_11309c8b0;
  FUN_1048f2b44();
  *(undefined8 *)(unaff_x20 + lVar2) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8d0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11309c8d8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11309c8e0) = 0;
  lVar2 = _DAT_11309c8e8;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _swift_getInitializedObjCClass();
  puVar5 = puVar4;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8f0) = 0x401c000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8f8) = 0x4024000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11309c900) = 0x4067200000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11309c908) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309c910) = 0xc004000000000000;
  *(undefined **)(unaff_x20 + _DAT_11309c918) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar2 = _DAT_11309c920;
  _swift_retain();
  _objc_msgSend(puVar4,PTR_s_clearColor_1125ac538);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
             "FBSDKLoginKit/FBTooltipView.swift",0x21,2,0xbf,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1048f3e38);
  (*pcVar3)();
}



/* Entry: 1048f2e28; end: 1048f2e4f; -[FBSDKTooltipView initWithCoder:] */

void FUN_1048f2e28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1048f3c6c();
  return;
}



/* Entry: 1048f2e50; end: 1048f2ea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f2e50(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_11309c8b8) != 0) {
    _objc_msgSend(*(long *)(unaff_x20 + _DAT_11309c8b8),PTR_s_removeTarget_action__112629468);
  }
  FUN_1048f2c68();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048f2ea4; end: 1048f2f1b; -[FBSDKTooltipView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f2ea4(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = *(long *)(param_1 + _DAT_11309c8b8);
  if (lVar2 == 0) {
    lVar2 = param_1;
    _objc_retain();
  }
  else {
    lVar1 = param_1;
    _objc_retain(param_1);
    _objc_msgSend(lVar2,PTR_s_removeTarget_action__112629468,lVar1,0);
  }
  FUN_1048f2c68();
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048f2f1c; end: 1048f2fab; -[FBSDKTooltipView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f2f1c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309c888 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309c890 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11309c8b0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11309c8b8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11309c8e8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309c918));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11309c920));
  return;
}



/* Entry: 1048f2fac; end: 1048f2ffb; -[FBSDKTooltipView presentFromView:] */

void FUN_1048f2fac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1048f1568(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048f2ffc; end: 1048f306b; -[FBSDKTooltipView presentInView:withArrowPosition:direction:] */

void FUN_1048f2ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  FUN_1048f0d90(param_1,param_2,param_5,param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1048f306c; end: 1048f3127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f306c(long param_1)

{
  long lVar1;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  lVar1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    _objc_msgSend();
    _objc_release(lVar1);
  }
  _swift_beginAccess(param_1 + 0x10,auStack_50,0,0);
  lVar1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    FUN_1048f25e4();
    _objc_release(lVar1);
  }
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_11309c8e0) = 0;
    _objc_release();
  }
  return;
}



/* Entry: 1048f3128; end: 1048f312f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f3128(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    _objc_msgSend();
    _objc_release(lVar1);
  }
  _swift_beginAccess(unaff_x20 + 0x10,auStack_50,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    FUN_1048f25e4();
    _objc_release(lVar1);
  }
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_11309c8e0) = 0;
    _objc_release();
  }
  return;
}



/* Entry: 1048f3130; end: 1048f31cb; -[FBSDKTooltipView dismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f3130(long param_1)

{
  undefined *puVar1;
  
  if ((*(byte *)(param_1 + _DAT_11309c8e0) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_11309c8e0) = 1;
  puVar1 = &UNK_1107b6cc8;
  _swift_allocObject(&UNK_1107b6cc8,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  _objc_retain(param_1);
  _swift_retain(puVar1);
  FUN_1048f1b14(0x1048f54bc,puVar1);
  _swift_release_n(puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048f31cc; end: 1048f331f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f31cc(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  double dVar1;
  undefined1 auStack_240 [128];
  undefined1 auStack_1c0 [128];
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
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  
  _objc_msgSend(0x3ff0000000000000,param_5,PTR_s_setAlpha__112637810);
  param_1 = param_1 - *(double *)(param_5 + _DAT_11309c8d0);
  _objc_msgSend(param_1,param_5,PTR_s_bounds_1125a5ca8);
  dVar1 = -(param_4 * -0.5 * 0.10000000000000009);
  if (*(char *)(param_5 + _DAT_11309c8d8) == '\0') {
    dVar1 = param_4 * -0.5 * 0.10000000000000009;
  }
  _objc_msgSend(&uStack_c0,0x3ff199999999999a,0x3ff199999999999a,0x3ff199999999999a,param_6,
                PTR_s_CATransform3DMakeScale_sy_sz__112525180);
  _objc_msgSend(auStack_1c0,param_1 * 0.10000000000000009,dVar1,0,param_6,
                PTR_s_CATransform3DMakeTranslation_ty__112525188);
  _objc_msgSend(param_5,PTR_s_layer_112600a48);
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uStack_78;
  uStack_100 = uStack_80;
  uStack_e8 = uStack_68;
  uStack_f0 = uStack_70;
  uStack_d8 = uStack_58;
  uStack_e0 = uStack_60;
  uStack_c8 = uStack_48;
  uStack_d0 = uStack_50;
  uStack_138 = uStack_b8;
  uStack_140 = uStack_c0;
  uStack_128 = uStack_a8;
  uStack_130 = uStack_b0;
  uStack_118 = uStack_98;
  uStack_120 = uStack_a0;
  uStack_108 = uStack_88;
  uStack_110 = uStack_90;
  _objc_msgSend(auStack_240,param_6,PTR_s_CATransform3DConcat_b__112525190,&uStack_140,auStack_1c0);
  _objc_msgSend(param_5,PTR_s_setTransform__112664080,auStack_240);
  _objc_release(param_5);
  return;
}



/* Entry: 1048f3320; end: 1048f332f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f3320(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  double dVar3;
  double in_d3;
  double dVar4;
  undefined1 auStack_240 [128];
  undefined1 auStack_1c0 [128];
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
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  dVar3 = *(double *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  _objc_msgSend(0x3ff0000000000000,lVar1,PTR_s_setAlpha__112637810);
  dVar3 = dVar3 - *(double *)(lVar1 + _DAT_11309c8d0);
  _objc_msgSend(dVar3,lVar1,PTR_s_bounds_1125a5ca8);
  dVar4 = -(in_d3 * -0.5 * 0.10000000000000009);
  if (*(char *)(lVar1 + _DAT_11309c8d8) == '\0') {
    dVar4 = in_d3 * -0.5 * 0.10000000000000009;
  }
  _objc_msgSend(&uStack_c0,0x3ff199999999999a,0x3ff199999999999a,0x3ff199999999999a,uVar2,
                PTR_s_CATransform3DMakeScale_sy_sz__112525180);
  _objc_msgSend(auStack_1c0,dVar3 * 0.10000000000000009,dVar4,0,uVar2,
                PTR_s_CATransform3DMakeTranslation_ty__112525188);
  _objc_msgSend(lVar1,PTR_s_layer_112600a48);
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uStack_78;
  uStack_100 = uStack_80;
  uStack_e8 = uStack_68;
  uStack_f0 = uStack_70;
  uStack_d8 = uStack_58;
  uStack_e0 = uStack_60;
  uStack_c8 = uStack_48;
  uStack_d0 = uStack_50;
  uStack_138 = uStack_b8;
  uStack_140 = uStack_c0;
  uStack_128 = uStack_a8;
  uStack_130 = uStack_b0;
  uStack_118 = uStack_98;
  uStack_120 = uStack_a0;
  uStack_108 = uStack_88;
  uStack_110 = uStack_90;
  _objc_msgSend(auStack_240,uVar2,PTR_s_CATransform3DConcat_b__112525190,&uStack_140,auStack_1c0);
  _objc_msgSend(lVar1,PTR_s_setTransform__112664080,auStack_240);
  _objc_release(lVar1);
  return;
}



/* Entry: 1048f3330; end: 1048f347f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f3330(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_240 [128];
  undefined1 auStack_1c0 [128];
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
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  
  _objc_msgSend(param_5,PTR_s_bounds_1125a5ca8);
  dVar1 = param_3 * 0.5 - *(double *)(param_5 + _DAT_11309c8d0);
  _objc_msgSend(dVar1,param_5,PTR_s_bounds_1125a5ca8);
  dVar2 = -(param_4 * -0.5 * -0.020000000000000018);
  if (*(char *)(param_5 + _DAT_11309c8d8) == '\0') {
    dVar2 = param_4 * -0.5 * -0.020000000000000018;
  }
  _objc_msgSend(&uStack_c0,0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,param_6,
                PTR_s_CATransform3DMakeScale_sy_sz__112525180);
  _objc_msgSend(auStack_1c0,dVar1 * -0.020000000000000018,dVar2,0,param_6,
                PTR_s_CATransform3DMakeTranslation_ty__112525188);
  _objc_msgSend(param_5,PTR_s_layer_112600a48);
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uStack_78;
  uStack_100 = uStack_80;
  uStack_e8 = uStack_68;
  uStack_f0 = uStack_70;
  uStack_d8 = uStack_58;
  uStack_e0 = uStack_60;
  uStack_c8 = uStack_48;
  uStack_d0 = uStack_50;
  uStack_138 = uStack_b8;
  uStack_140 = uStack_c0;
  uStack_128 = uStack_a8;
  uStack_130 = uStack_b0;
  uStack_118 = uStack_98;
  uStack_120 = uStack_a0;
  uStack_108 = uStack_88;
  uStack_110 = uStack_90;
  _objc_msgSend(auStack_240,param_6,PTR_s_CATransform3DConcat_b__112525190,&uStack_140,auStack_1c0);
  _objc_msgSend(param_5,PTR_s_setTransform__112664080,auStack_240);
  _objc_release(param_5);
  return;
}



/* Entry: 1048f3480; end: 1048f3487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f3480(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  undefined1 auStack_240 [128];
  undefined1 auStack_1c0 [128];
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
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  _objc_msgSend(lVar2,PTR_s_bounds_1125a5ca8);
  dVar3 = param_3 * 0.5 - *(double *)(lVar2 + _DAT_11309c8d0);
  _objc_msgSend(dVar3,lVar2,PTR_s_bounds_1125a5ca8);
  dVar4 = -(param_4 * -0.5 * -0.020000000000000018);
  if (*(char *)(lVar2 + _DAT_11309c8d8) == '\0') {
    dVar4 = param_4 * -0.5 * -0.020000000000000018;
  }
  _objc_msgSend(&uStack_c0,0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,uVar1,
                PTR_s_CATransform3DMakeScale_sy_sz__112525180);
  _objc_msgSend(auStack_1c0,dVar3 * -0.020000000000000018,dVar4,0,uVar1,
                PTR_s_CATransform3DMakeTranslation_ty__112525188);
  _objc_msgSend(lVar2,PTR_s_layer_112600a48);
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uStack_78;
  uStack_100 = uStack_80;
  uStack_e8 = uStack_68;
  uStack_f0 = uStack_70;
  uStack_d8 = uStack_58;
  uStack_e0 = uStack_60;
  uStack_c8 = uStack_48;
  uStack_d0 = uStack_50;
  uStack_138 = uStack_b8;
  uStack_140 = uStack_c0;
  uStack_128 = uStack_a8;
  uStack_130 = uStack_b0;
  uStack_118 = uStack_98;
  uStack_120 = uStack_a0;
  uStack_108 = uStack_88;
  uStack_110 = uStack_90;
  _objc_msgSend(auStack_240,uVar1,PTR_s_CATransform3DConcat_b__112525190,&uStack_140,auStack_1c0);
  _objc_msgSend(lVar2,PTR_s_setTransform__112664080,auStack_240);
  _objc_release(lVar2);
  return;
}



/* Entry: 1048f3488; end: 1048f34ff;  */

void FUN_1048f3488(undefined8 param_1)

{
  _objc_msgSend(param_1,PTR_s_layer_112600a48);
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
  _objc_release(param_1);
  return;
}



/* Entry: 1048f3500; end: 1048f3507;  */

void FUN_1048f3500(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _objc_msgSend(uVar1,PTR_s_layer_112600a48);
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
  _objc_release(uVar1);
  return;
}



/* Entry: 1048f3508; end: 1048f351f;  */

void FUN_1048f3508(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1048f3520; end: 1048f365f;  */

void FUN_1048f3520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1107b6e58;
  pcStack_70 = (code *)param_2;
  puStack_68 = (undefined *)param_3;
  __Block_copy(&puStack_90);
  puVar4 = puStack_68;
  _swift_retain(param_3);
  _swift_release(puVar4);
  puVar4 = &UNK_1107b6e90;
  _swift_allocObject(&UNK_1107b6e90,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_4;
  *(undefined8 *)(puVar4 + 0x18) = param_5;
  pcStack_70 = FUN_1048f5460;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100288f10;
  puStack_78 = &UNK_1107b6ea8;
  puStack_68 = puVar4;
  __Block_copy(&puStack_90);
  puVar4 = puStack_68;
  _swift_retain(param_5);
  _swift_release(puVar4);
  _objc_msgSend(0x3fc1745d1745d174,puVar2,PTR_s_animateWithDuration_animations_c_11259e6b0,ppuVar3,
                ppuVar5);
  __Block_release(ppuVar5);
  __Block_release(ppuVar3);
  return;
}



/* Entry: 1048f3660; end: 1048f366b;  */

void FUN_1048f3660(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar7 = &puStack_90;
  ppuVar9 = &puStack_90;
  puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1107b6e58;
  pcStack_70 = (code *)uVar1;
  puStack_68 = (undefined *)uVar3;
  __Block_copy(&puStack_90);
  puVar8 = puStack_68;
  _swift_retain(uVar3);
  _swift_release(puVar8);
  puVar8 = &UNK_1107b6e90;
  _swift_allocObject(&UNK_1107b6e90,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar2;
  *(undefined8 *)(puVar8 + 0x18) = uVar4;
  pcStack_70 = FUN_1048f5460;
  puStack_90 = puVar5;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100288f10;
  puStack_78 = &UNK_1107b6ea8;
  puStack_68 = puVar8;
  __Block_copy(&puStack_90);
  puVar8 = puStack_68;
  _swift_retain(uVar4);
  _swift_release(puVar8);
  _objc_msgSend(0x3fc1745d1745d174,puVar6,PTR_s_animateWithDuration_animations_c_11259e6b0,ppuVar7,
                ppuVar9);
  __Block_release(ppuVar9);
  __Block_release(ppuVar7);
  return;
}



/* Entry: 1048f366c; end: 1048f371f;  */

void FUN_1048f366c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIView_1126aec20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1107b6ed0;
  uStack_40 = param_2;
  uStack_38 = param_3;
  __Block_copy(&puStack_60);
  uVar1 = uStack_38;
  _swift_retain(param_3);
  _swift_release(uVar1);
  _objc_msgSend(0x3faeb851eb851eb8,puVar2,PTR_s_animateWithDuration_animations__11259e6a8,ppuVar3);
  __Block_release(ppuVar3);
  return;
}



/* Entry: 1048f3720; end: 1048f3747; -[FBSDKTooltipView animateFadeIn] */

void FUN_1048f3720(undefined8 param_1)

{
  _objc_retain();
  FUN_1048f17b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048f3748; end: 1048f37bb; -[FBSDKTooltipView onTapInTooltip:] */

void FUN_1048f3748(ulong *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain();
  lVar1 = param_3;
  _objc_msgSend(param_3,PTR_s_state_112672338);
  if (lVar1 == 3) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x280))();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048f37bc; end: 1048f37e3; -[FBSDKTooltipView drawRect:] */

void FUN_1048f37bc(undefined8 param_1)

{
  _objc_retain();
  FUN_1048f3e38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048f37e4; end: 1048f383f; -[FBSDKTooltipView layoutSubviews] */

void FUN_1048f37e4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  FUN_1048f2c68();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&uStack_30,puVar1);
  FUN_1048f1eb4();
  _objc_release(param_1);
  return;
}



/* Entry: 1048f3840; end: 1048f38c3; -[FBSDKTooltipView scheduleFadeoutRespectingMinimumDisplayDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f3840(double param_1,ulong *param_2)

{
  _objc_retain();
  _CFAbsoluteTimeGetCurrent();
  if ((*(double *)((long)param_2 + _DAT_11309c8a0) - param_1) + 6.0 <= 0.0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_2) + 0x280))();
  }
  else {
    _objc_msgSend(param_2,PTR_s_performSelector_withObject_after_11261bdf0,PTR_s_dismiss_1125be578,0
                 );
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1048f38c4; end: 1048f3913;  */

void FUN_1048f38c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 1048f3914; end: 1048f393f;  */

void FUN_1048f3914(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FBSDKLoginKit.FBTooltipView",0x1b,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048f3940);
  (*pcVar1)();
}



/* Entry: 1048f3940; end: 1048f396b; -[FBSDKTooltipView initWithFrame:] */

void FUN_1048f3940(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FBSDKLoginKit.FBTooltipView",0x1b,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048f396c);
  (*pcVar1)();
}



/* Entry: 1048f396c; end: 1048f39bf;  */

void FUN_1048f396c(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  plVar4 = (long *)0x11309c970;
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1048e6920();
    if (lVar3 != 0) {
      plVar4 = (long *)0x11309c968;
    }
  }
  lVar3 = *plVar4;
  if (lVar3 < 0) {
    lVar2 = (long)plVar4 + (long)(int)lVar3;
    _swift_getTypeByMangledNameInContext(lVar2,-(lVar3 >> 0x20),0,0);
    *plVar4 = lVar2;
    return;
  }
  return;
}



/* Entry: 1048f39c0; end: 1048f3c6b;  */

undefined8
FUN_1048f39c0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  dVar5 = param_1;
  _CGRectGetHeight();
  dVar5 = dVar5 * 0.2;
  _CGPathCreateMutable();
  dVar3 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar4 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  uStack_90 = 0x3ff0000000000000;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0x3ff0000000000000;
  uStack_70 = 0;
  uStack_68 = 0;
  __sSo16CGMutablePathRefa12CoreGraphicsE4move2to9transformySo7CGPointV_So17CGAffineTransformVtF
            (dVar3,dVar5 + dVar4,&uStack_90);
  dVar3 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar4 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
            (dVar5 + dVar3,dVar4,&uStack_90);
  dVar3 = param_1;
  _CGRectGetMaxX(param_1,param_2,param_3,param_4);
  dVar4 = param_1;
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
            (dVar3,dVar4 - dVar5,&uStack_90);
  dVar3 = param_1;
  _CGRectGetMaxX(param_1,param_2,param_3,param_4);
  dVar4 = param_1;
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
            (dVar3 - dVar5,dVar4,&uStack_90);
  uVar1 = param_5;
  _CGPathCloseSubpath(param_5);
  _CGPathCreateMutable();
  dVar3 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar4 = param_1;
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  __sSo16CGMutablePathRefa12CoreGraphicsE4move2to9transformySo7CGPointV_So17CGAffineTransformVtF
            (dVar3,dVar4 - dVar5,&uStack_90);
  dVar3 = param_1;
  _CGRectGetMaxX(param_1,param_2,param_3,param_4);
  dVar4 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
            (dVar3 - dVar5,dVar4,&uStack_90);
  dVar3 = param_1;
  _CGRectGetMaxX(param_1,param_2,param_3,param_4);
  dVar4 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
            (dVar3,dVar5 + dVar4,&uStack_90);
  dVar3 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
            (dVar5 + dVar3,param_1,&uStack_90);
  uVar2 = uVar1;
  _CGPathCloseSubpath(uVar1);
  _CGPathCreateMutable();
  __sSo16CGMutablePathRefa12CoreGraphicsE03addB0_9transformySo06CGPathC0a_So17CGAffineTransformVtF
            (param_5,&uStack_90);
  __sSo16CGMutablePathRefa12CoreGraphicsE03addB0_9transformySo06CGPathC0a_So17CGAffineTransformVtF
            (uVar1,&uStack_90);
  _objc_release(param_5);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1048f3c6c; end: 1048f3e37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f3c6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_11309c880) = 0x4018000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c888);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c890);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c898);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_11309c8a0;
  _CFAbsoluteTimeGetCurrent();
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8a8) = 0x4018000000000000;
  lVar2 = _DAT_11309c8b0;
  FUN_1048f2b44();
  *(undefined8 *)(unaff_x20 + lVar2) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8d0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11309c8d8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11309c8e0) = 0;
  lVar2 = _DAT_11309c8e8;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _swift_getInitializedObjCClass();
  puVar5 = puVar4;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8f0) = 0x401c000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8f8) = 0x4024000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11309c900) = 0x4067200000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11309c908) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309c910) = 0xc004000000000000;
  *(undefined **)(unaff_x20 + _DAT_11309c918) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar2 = _DAT_11309c920;
  _swift_retain();
  _objc_msgSend(puVar4,PTR_s_clearColor_1125ac538);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
             "FBSDKLoginKit/FBTooltipView.swift",0x21,2,0xbf,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1048f3e38);
  (*pcVar3)();
}



/* Entry: 1048f3e38; end: 1048f51e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f3e38(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double unaff_x20;
  double dVar11;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
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
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  lVar5 = 0;
  __s12CoreGraphics14CGPathFillRuleOMa();
  lVar4 = _DAT_11309c8d8;
  lVar13 = *(long *)(lVar5 + -8);
  dVar11 = (double)((long)&dStack_120 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0));
  dVar25 = 4.75;
  if (*(char *)((long)unaff_x20 + _DAT_11309c8d8) == '\0') {
    dVar25 = 6.25;
  }
  _objc_msgSend();
  dVar26 = param_3 + -12.0 + -0.5;
  dVar6 = unaff_x20;
  _objc_msgSend();
  dVar23 = param_4 + -6.0 + -4.5 + -0.5;
  dVar16 = 6.25;
  _CGRectInset();
  dVar17 = dVar16;
  dVar27 = dVar25;
  dVar21 = dVar26;
  dStack_118 = dVar23;
  _CGRectInset();
  dVar24 = dVar23;
  dStack_110 = dVar17;
  dStack_108 = dVar27;
  dStack_100 = dVar21;
  _CGRectInset();
  dVar9 = dVar17;
  _CGRectGetMinY();
  dVar7 = dVar17;
  dStack_120 = dVar9;
  _CGRectGetMidY(dVar17,dVar27,dVar21,dVar24);
  dVar9 = dVar17;
  _CGRectGetMaxX(dVar17,dVar27,dVar21,dVar24);
  _UIGraphicsGetCurrentContext();
  _objc_retainAutoreleasedReturnValue();
  if (dVar6 != 0.0) {
    dVar22 = dStack_120 + 10.0 + -2.5;
    dVar8 = dVar7 + -5.5;
    if (dVar22 <= dVar7 + -5.5) {
      dVar8 = dVar22;
    }
    dVar7 = dVar6;
    FUN_1048f39c0(dVar9 + -20.0,dVar8,0x4026000000000000,0x4026000000000000);
    lVar3 = _DAT_11309c8d0;
    cVar2 = *(char *)((long)unaff_x20 + lVar4);
    dVar22 = *(double *)((long)unaff_x20 + _DAT_11309c8d0);
    dStack_120 = dVar7;
    _CGPathCreateMutable();
    dVar9 = dStack_118;
    dVar8 = dVar7;
    if (cVar2 == '\x01') {
      dVar18 = dVar16;
      _CGRectGetMinY(dVar16,dVar25,dVar26,dStack_118);
      uStack_d8 = 0x3ff0000000000000;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0x3ff0000000000000;
      uStack_b8 = 0;
      uStack_b0 = 0;
      __sSo16CGMutablePathRefa12CoreGraphicsE4move2to9transformySo7CGPointV_So17CGAffineTransformVtF
                (dVar22 + -7.0,dVar18,&uStack_d8);
      dVar18 = dVar16;
      _CGRectGetMinY(dVar16,dVar25,dVar26,dVar9);
      __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
                (dVar22,dVar18 + -7.0,&uStack_d8);
      dVar18 = dVar16;
      _CGRectGetMinY(dVar16,dVar25,dVar26,dVar9);
      __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
                (dVar22 + 7.0,dVar18,&uStack_d8);
      dVar22 = dVar16;
      _CGRectGetMaxX(dVar16,dVar25,dVar26,dVar9);
      dVar18 = dVar16;
      _CGRectGetMinY(dVar16,dVar25,dVar26,dVar9);
      dVar19 = dVar16;
      _CGRectGetMaxX(dVar16,dVar25,dVar26,dVar9);
      dVar20 = dVar16;
      _CGRectGetMaxY(dVar16,dVar25,dVar26,dVar9);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar22,dVar18,dVar19,dVar20,0x4012000000000000,&uStack_d8);
      dVar22 = dVar16;
      _CGRectGetMaxX(dVar16,dVar25,dVar26,dVar9);
      dVar18 = dVar16;
      _CGRectGetMaxY(dVar16,dVar25,dVar26,dVar9);
      dVar19 = dVar16;
      _CGRectGetMinX(dVar16,dVar25,dVar26,dVar9);
      dVar20 = dVar16;
      _CGRectGetMaxY(dVar16,dVar25,dVar26,dVar9);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar22,dVar18,dVar19,dVar20,0x4012000000000000,&uStack_d8);
      dVar22 = dVar16;
      _CGRectGetMinX(dVar16,dVar25,dVar26,dVar9);
      dVar18 = dVar16;
      _CGRectGetMaxY(dVar16,dVar25,dVar26,dVar9);
      dVar19 = dVar16;
      _CGRectGetMinX(dVar16,dVar25,dVar26,dVar9);
      dVar20 = dVar16;
      _CGRectGetMinY(dVar16,dVar25,dVar26,dVar9);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar22,dVar18,dVar19,dVar20,0x4012000000000000,&uStack_d8);
      dVar22 = dVar16;
      _CGRectGetMinX(dVar16,dVar25,dVar26,dVar9);
      dVar18 = dVar16;
      _CGRectGetMinY(dVar16,dVar25,dVar26,dVar9);
      dVar19 = dVar16;
      _CGRectGetMaxX(dVar16,dVar25,dVar26,dVar9);
      _CGRectGetMinY(dVar16,dVar25,dVar26,dVar9);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar22,dVar18,dVar19,dVar16,0x4012000000000000,&uStack_d8);
      _CGPathCloseSubpath(dVar7);
      dVar22 = *(double *)((long)unaff_x20 + lVar3);
      _objc_retain();
      _CGPathCreateMutable();
      dVar16 = dStack_100;
      dVar9 = dStack_108;
      dVar25 = dStack_110;
      dVar26 = dStack_110;
      _CGRectGetMinY(dStack_110,dStack_108,dStack_100,dVar23);
      __sSo16CGMutablePathRefa12CoreGraphicsE4move2to9transformySo7CGPointV_So17CGAffineTransformVtF
                (dVar22 + -7.0,dVar26,&uStack_d8);
      dVar26 = dVar25;
      _CGRectGetMinY(dVar25,dVar9,dVar16,dVar23);
      __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
                (dVar22,dVar26 + -7.0,&uStack_d8);
      dVar26 = dVar25;
      _CGRectGetMinY(dVar25,dVar9,dVar16,dVar23);
      __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
                (dVar22 + 7.0,dVar26,&uStack_d8);
      dVar26 = dVar25;
      _CGRectGetMaxX(dVar25,dVar9,dVar16,dVar23);
      dVar22 = dVar25;
      _CGRectGetMinY(dVar25,dVar9,dVar16,dVar23);
      dVar18 = dVar25;
      _CGRectGetMaxX(dVar25,dVar9,dVar16,dVar23);
      dVar19 = dVar25;
      _CGRectGetMaxY(dVar25,dVar9,dVar16,dVar23);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar26,dVar22,dVar18,dVar19,0x4010000000000000,&uStack_d8);
      dVar26 = dVar25;
      _CGRectGetMaxX(dVar25,dVar9,dVar16,dVar23);
      dVar22 = dVar25;
      _CGRectGetMaxY(dVar25,dVar9,dVar16,dVar23);
      dVar18 = dVar25;
      _CGRectGetMinX(dVar25,dVar9,dVar16,dVar23);
      dVar19 = dVar25;
      _CGRectGetMaxY(dVar25,dVar9,dVar16,dVar23);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar26,dVar22,dVar18,dVar19,0x4010000000000000,&uStack_d8);
      dVar26 = dVar25;
      _CGRectGetMinX(dVar25,dVar9,dVar16,dVar23);
      dVar22 = dVar25;
      _CGRectGetMaxY(dVar25,dVar9,dVar16,dVar23);
      dVar18 = dVar25;
      _CGRectGetMinX(dVar25,dVar9,dVar16,dVar23);
      dVar19 = dVar25;
      _CGRectGetMinY(dVar25,dVar9,dVar16,dVar23);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar26,dVar22,dVar18,dVar19,0x4010000000000000,&uStack_d8);
      dVar26 = dVar25;
      _CGRectGetMinX(dVar25,dVar9,dVar16,dVar23);
      dVar22 = dVar25;
      _CGRectGetMinY(dVar25,dVar9,dVar16,dVar23);
      dVar18 = dVar25;
      _CGRectGetMaxX(dVar25,dVar9,dVar16,dVar23);
      _CGRectGetMinY(dVar25,dVar9,dVar16,dVar23);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar26,dVar22,dVar18,dVar25,0x4010000000000000,&uStack_d8);
      _CGPathCloseSubpath(dVar8);
      dVar16 = *(double *)((long)unaff_x20 + lVar3);
      _objc_retain();
      dVar25 = dVar8;
      _CGPathCreateMutable();
      dVar9 = dVar17;
      _CGRectGetMinY(dVar17,dVar27,dVar21,dVar24);
      __sSo16CGMutablePathRefa12CoreGraphicsE4move2to9transformySo7CGPointV_So17CGAffineTransformVtF
                (dVar16 + -7.0,dVar9,&uStack_d8);
      dVar9 = dVar17;
      _CGRectGetMinY(dVar17,dVar27,dVar21,dVar24);
      __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
                (dVar16,dVar9 + -7.0,&uStack_d8);
      dVar9 = dVar17;
      _CGRectGetMinY(dVar17,dVar27,dVar21,dVar24);
      __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
                (dVar16 + 7.0,dVar9,&uStack_d8);
      dVar9 = dVar17;
      _CGRectGetMaxX(dVar17,dVar27,dVar21,dVar24);
      dVar16 = dVar17;
      _CGRectGetMinY(dVar17,dVar27,dVar21,dVar24);
      dVar26 = dVar17;
      _CGRectGetMaxX(dVar17,dVar27,dVar21,dVar24);
      dVar23 = dVar17;
      _CGRectGetMaxY(dVar17,dVar27,dVar21,dVar24);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar9,dVar16,dVar26,dVar23,0x400c000000000000,&uStack_d8);
      dVar23 = dVar17;
      _CGRectGetMaxX(dVar17,dVar27,dVar21,dVar24);
      dVar26 = dVar17;
      _CGRectGetMaxY(dVar17,dVar27,dVar21,dVar24);
      dVar16 = dVar17;
      _CGRectGetMinX(dVar17,dVar27,dVar21,dVar24);
      dVar9 = dVar17;
      _CGRectGetMaxY(dVar17,dVar27,dVar21,dVar24);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar23,dVar26,dVar16,dVar9,0x400c000000000000,&uStack_d8);
      dVar23 = dVar17;
      _CGRectGetMinX(dVar17,dVar27,dVar21,dVar24);
      dVar26 = dVar17;
      _CGRectGetMaxY(dVar17,dVar27,dVar21,dVar24);
      dVar16 = dVar17;
      _CGRectGetMinX(dVar17,dVar27,dVar21,dVar24);
      dVar9 = dVar17;
      _CGRectGetMinY(dVar17,dVar27,dVar21,dVar24);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar23,dVar26,dVar16,dVar9,0x400c000000000000,&uStack_d8);
      dVar23 = dVar17;
      _CGRectGetMinX(dVar17,dVar27,dVar21,dVar24);
      dVar26 = dVar17;
      _CGRectGetMinY(dVar17,dVar27,dVar21,dVar24);
      dVar16 = dVar17;
      _CGRectGetMaxX(dVar17,dVar27,dVar21,dVar24);
      dVar9 = dVar17;
      _CGRectGetMinY(dVar17,dVar27,dVar21,dVar24);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar23,dVar26,dVar16,dVar9,0x400c000000000000,&uStack_d8);
      _CGPathCloseSubpath(dVar25);
      dVar27 = dVar27 + -7.0;
    }
    else {
      dVar18 = dVar16;
      _CGRectGetMaxY(dVar16,dVar25,dVar26,dStack_118);
      uStack_d8 = 0x3ff0000000000000;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0x3ff0000000000000;
      uStack_b8 = 0;
      uStack_b0 = 0;
      __sSo16CGMutablePathRefa12CoreGraphicsE4move2to9transformySo7CGPointV_So17CGAffineTransformVtF
                (dVar22 + 7.0,dVar18,&uStack_d8);
      dVar18 = dVar16;
      _CGRectGetMaxY(dVar16,dVar25,dVar26,dVar9);
      __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
                (dVar22,dVar18 + 7.0,&uStack_d8);
      dVar18 = dVar16;
      _CGRectGetMaxY(dVar16,dVar25,dVar26,dVar9);
      __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
                (dVar22 + -7.0,dVar18,&uStack_d8);
      dVar22 = dVar16;
      _CGRectGetMinX(dVar16,dVar25,dVar26,dVar9);
      dVar18 = dVar16;
      _CGRectGetMaxY(dVar16,dVar25,dVar26,dVar9);
      dVar19 = dVar16;
      _CGRectGetMinX(dVar16,dVar25,dVar26,dVar9);
      dVar20 = dVar16;
      _CGRectGetMinY(dVar16,dVar25,dVar26,dVar9);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar22,dVar18,dVar19,dVar20,0x4012000000000000,&uStack_d8);
      dVar22 = dVar16;
      _CGRectGetMinX(dVar16,dVar25,dVar26,dVar9);
      dVar18 = dVar16;
      _CGRectGetMinY(dVar16,dVar25,dVar26,dVar9);
      dVar19 = dVar16;
      _CGRectGetMaxX(dVar16,dVar25,dVar26,dVar9);
      dVar20 = dVar16;
      _CGRectGetMinY(dVar16,dVar25,dVar26,dVar9);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar22,dVar18,dVar19,dVar20,0x4012000000000000,&uStack_d8);
      dVar22 = dVar16;
      _CGRectGetMaxX(dVar16,dVar25,dVar26,dVar9);
      dVar18 = dVar16;
      _CGRectGetMinY(dVar16,dVar25,dVar26,dVar9);
      dVar19 = dVar16;
      _CGRectGetMaxX(dVar16,dVar25,dVar26,dVar9);
      dVar20 = dVar16;
      _CGRectGetMaxY(dVar16,dVar25,dVar26,dVar9);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar22,dVar18,dVar19,dVar20,0x4012000000000000,&uStack_d8);
      dVar22 = dVar16;
      _CGRectGetMaxX(dVar16,dVar25,dVar26,dVar9);
      dVar18 = dVar16;
      _CGRectGetMaxY(dVar16,dVar25,dVar26,dVar9);
      dVar19 = dVar16;
      _CGRectGetMinX(dVar16,dVar25,dVar26,dVar9);
      _CGRectGetMaxY(dVar16,dVar25,dVar26,dVar9);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar22,dVar18,dVar19,dVar16,0x4012000000000000,&uStack_d8);
      _CGPathCloseSubpath(dVar7);
      dVar22 = *(double *)((long)unaff_x20 + lVar3);
      _objc_retain();
      _CGPathCreateMutable();
      dVar16 = dStack_100;
      dVar9 = dStack_108;
      dVar25 = dStack_110;
      dVar26 = dStack_110;
      _CGRectGetMaxY(dStack_110,dStack_108,dStack_100,dVar23);
      __sSo16CGMutablePathRefa12CoreGraphicsE4move2to9transformySo7CGPointV_So17CGAffineTransformVtF
                (dVar22 + 7.0,dVar26,&uStack_d8);
      dVar26 = dVar25;
      _CGRectGetMaxY(dVar25,dVar9,dVar16,dVar23);
      __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
                (dVar22,dVar26 + 7.0,&uStack_d8);
      dVar26 = dVar25;
      _CGRectGetMaxY(dVar25,dVar9,dVar16,dVar23);
      __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
                (dVar22 + -7.0,dVar26,&uStack_d8);
      dVar26 = dVar25;
      _CGRectGetMinX(dVar25,dVar9,dVar16,dVar23);
      dVar22 = dVar25;
      _CGRectGetMaxY(dVar25,dVar9,dVar16,dVar23);
      dVar18 = dVar25;
      _CGRectGetMinX(dVar25,dVar9,dVar16,dVar23);
      dVar19 = dVar25;
      _CGRectGetMinY(dVar25,dVar9,dVar16,dVar23);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar26,dVar22,dVar18,dVar19,0x4010000000000000,&uStack_d8);
      dVar26 = dVar25;
      _CGRectGetMinX(dVar25,dVar9,dVar16,dVar23);
      dVar22 = dVar25;
      _CGRectGetMinY(dVar25,dVar9,dVar16,dVar23);
      dVar18 = dVar25;
      _CGRectGetMaxX(dVar25,dVar9,dVar16,dVar23);
      dVar19 = dVar25;
      _CGRectGetMinY(dVar25,dVar9,dVar16,dVar23);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar26,dVar22,dVar18,dVar19,0x4010000000000000,&uStack_d8);
      dVar26 = dVar25;
      _CGRectGetMaxX(dVar25,dVar9,dVar16,dVar23);
      dVar22 = dVar25;
      _CGRectGetMinY(dVar25,dVar9,dVar16,dVar23);
      dVar18 = dVar25;
      _CGRectGetMaxX(dVar25,dVar9,dVar16,dVar23);
      dVar19 = dVar25;
      _CGRectGetMaxY(dVar25,dVar9,dVar16,dVar23);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar26,dVar22,dVar18,dVar19,0x4010000000000000,&uStack_d8);
      dVar22 = dVar25;
      _CGRectGetMaxX(dVar25,dVar9,dVar16,dVar23);
      dVar18 = dVar25;
      _CGRectGetMaxY(dVar25,dVar9,dVar16,dVar23);
      dVar26 = dVar25;
      _CGRectGetMinX(dVar25,dVar9,dVar16,dVar23);
      _CGRectGetMaxY(dVar25,dVar9,dVar16,dVar23);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar22,dVar18,dVar26,dVar25,0x4010000000000000,&uStack_d8);
      _CGPathCloseSubpath(dVar8);
      dVar16 = *(double *)((long)unaff_x20 + lVar3);
      _objc_retain();
      dVar25 = dVar8;
      _CGPathCreateMutable();
      dVar9 = dVar17;
      _CGRectGetMaxY(dVar17,dVar27,dVar21,dVar24);
      __sSo16CGMutablePathRefa12CoreGraphicsE4move2to9transformySo7CGPointV_So17CGAffineTransformVtF
                (dVar16 + 7.0,dVar9,&uStack_d8);
      dVar9 = dVar17;
      _CGRectGetMaxY(dVar17,dVar27,dVar21,dVar24);
      __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
                (dVar16,dVar9 + 7.0,&uStack_d8);
      dVar9 = dVar17;
      _CGRectGetMaxY(dVar17,dVar27,dVar21,dVar24);
      __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
                (dVar16 + -7.0,dVar9,&uStack_d8);
      dVar9 = dVar17;
      _CGRectGetMinX(dVar17,dVar27,dVar21,dVar24);
      dVar16 = dVar17;
      _CGRectGetMaxY(dVar17,dVar27,dVar21,dVar24);
      dVar26 = dVar17;
      _CGRectGetMinX(dVar17,dVar27,dVar21,dVar24);
      dVar23 = dVar17;
      _CGRectGetMinY(dVar17,dVar27,dVar21,dVar24);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar9,dVar16,dVar26,dVar23,0x400c000000000000,&uStack_d8);
      dVar9 = dVar17;
      _CGRectGetMinX(dVar17,dVar27,dVar21,dVar24);
      dVar16 = dVar17;
      _CGRectGetMinY(dVar17,dVar27,dVar21,dVar24);
      dVar26 = dVar17;
      _CGRectGetMaxX(dVar17,dVar27,dVar21,dVar24);
      dVar23 = dVar17;
      _CGRectGetMinY(dVar17,dVar27,dVar21,dVar24);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar9,dVar16,dVar26,dVar23,0x400c000000000000,&uStack_d8);
      dVar9 = dVar17;
      _CGRectGetMaxX(dVar17,dVar27,dVar21,dVar24);
      dVar16 = dVar17;
      _CGRectGetMinY(dVar17,dVar27,dVar21,dVar24);
      dVar26 = dVar17;
      _CGRectGetMaxX(dVar17,dVar27,dVar21,dVar24);
      dVar23 = dVar17;
      _CGRectGetMaxY(dVar17,dVar27,dVar21,dVar24);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar9,dVar16,dVar26,dVar23,0x400c000000000000,&uStack_d8);
      dVar9 = dVar17;
      _CGRectGetMaxX(dVar17,dVar27,dVar21,dVar24);
      dVar16 = dVar17;
      _CGRectGetMaxY(dVar17,dVar27,dVar21,dVar24);
      dVar26 = dVar17;
      _CGRectGetMinX(dVar17,dVar27,dVar21,dVar24);
      dVar23 = dVar17;
      _CGRectGetMaxY(dVar17,dVar27,dVar21,dVar24);
      __sSo16CGMutablePathRefa12CoreGraphicsE6addArc11tangent1End08tangent2I06radius9transformySo7CGPointV_AjC7CGFloatVSo17CGAffineTransformVtF
                (dVar9,dVar16,dVar26,dVar23,0x400c000000000000,&uStack_d8);
      _CGPathCloseSubpath(dVar25);
    }
    _objc_retain();
    dVar9 = unaff_x20;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_msgSend();
    _objc_release(dVar9);
    _objc_release(dVar7);
    dVar26 = *(double *)((long)unaff_x20 + _DAT_11309c8e8);
    _objc_msgSend(dVar26,PTR_s_CGColor_11254dd98);
    _objc_retainAutoreleasedReturnValue();
    _CGContextSaveGState(dVar6);
    _CGContextSetStrokeColorWithColor(dVar6,dVar26);
    _CGContextSetLineWidth(0x3fe0000000000000,dVar6);
    _CGContextAddPath(dVar6,dVar8);
    _objc_release(dVar8);
    _CGContextStrokePath(dVar6);
    _CGContextAddPath(dVar6,dVar25);
    _objc_release(dVar25);
    uVar1 = *(undefined4 *)PTR___s12CoreGraphics14CGPathFillRuleO7windingyA2CmFWC_110351390;
    pcVar12 = *(code **)(lVar13 + 0x68);
    (*pcVar12)(dVar11,uVar1,lVar5);
    __sSo12CGContextRefa12CoreGraphicsE4clip5usingyAC14CGPathFillRuleO_tF(dVar11);
    pcVar14 = *(code **)(lVar13 + 8);
    dVar9 = dVar11;
    (*pcVar14)(dVar11,lVar5);
    _CGColorSpaceCreateDeviceRGB();
    uVar15 = *(undefined8 *)((long)unaff_x20 + _DAT_11309c918);
    func_0x000100ef8bfc(0);
    dStack_100 = (double)lVar5;
    _objc_retain();
    uVar10 = uVar15;
    _swift_bridgeObjectRetain(uVar15);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(uVar15);
    dVar16 = dVar9;
    _CGGradientCreateWithColors(dVar9,uVar10,0);
    _objc_release(dVar9);
    _objc_release(uVar10);
    if (dVar16 != 0.0) {
      dVar23 = dVar17;
      _CGRectGetMaxY(dVar17,dVar27,dVar21,dVar24 + 7.0);
      _CGContextDrawLinearGradient(dVar17,dVar27,dVar17,dVar23,dVar6,dVar16,0);
      _CGContextAddPath(dVar6,dStack_120);
      uVar10 = *(undefined8 *)((long)unaff_x20 + _DAT_11309c920);
      _objc_msgSend(uVar10,PTR_s_CGColor_11254dd98);
      _objc_retainAutoreleasedReturnValue();
      _CGContextSetFillColorWithColor(dVar6,uVar10);
      _objc_release(uVar10);
      dVar17 = dStack_100;
      (*pcVar12)(dVar11,uVar1,dStack_100);
      __sSo12CGContextRefa12CoreGraphicsE8fillPath5usingyAC14CGPathFillRuleO_tF(dVar11);
      (*pcVar14)(dVar11,dVar17);
      _CGContextRestoreGState(dVar6);
      _objc_release(dStack_120);
      dStack_120 = dVar6;
      dVar6 = dVar26;
      dVar26 = dVar16;
    }
    _objc_release(dStack_120);
    _objc_release(dVar6);
    _objc_release(dVar26);
    _objc_release(dVar9);
    _objc_release(dVar7);
    _objc_release(dVar8);
    _objc_release(dVar25);
  }
  return;
}



/* Entry: 1048f51e4; end: 1048f5277;  */

void FUN_1048f51e4(void)

{
  undefined *puVar1;
  
  if (puRam000000011309c930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd476a8;
  _swift_getWitnessTable(&UNK_10dd476a8,&UNK_1107b6e28);
  puRam000000011309c930 = puVar1;
  return;
}



/* Entry: 1048f5278; end: 1048f543f;  */

void FUN_1048f5278(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001048f5290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x100))();
  return;
}



/* Entry: 1048f5440; end: 1048f545f;  */

undefined1  [16] FUN_1048f5440(void)

{
  return ZEXT816(0x1107b6e28);
}



/* Entry: 1048f5460; end: 1048f547b;  */

void FUN_1048f5460(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_60;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIView_1126aec20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1107b6ed0;
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  __Block_copy(&puStack_60);
  uVar1 = uStack_38;
  _swift_retain(uVar2);
  _swift_release(uVar1);
  _objc_msgSend(0x3faeb851eb851eb8,puVar3,PTR_s_animateWithDuration_animations__11259e6a8,ppuVar4);
  __Block_release(ppuVar4);
  return;
}



/* Entry: 1048f547c; end: 1048f549b;  */

void FUN_1048f547c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1048f549c; end: 1048f54b3;  */

void FUN_1048f549c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1048f54b4; end: 1048f54c7;  */

void FUN_1048f54b4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048f54c8; end: 1048f54cb;  */

undefined1  [16] FUN_1048f54c8(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 2) {
    uVar1 = param_1;
  }
  auVar2[8] = 1 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1048f54cc; end: 1048f54db;  */

bool FUN_1048f54cc(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1048f54dc; end: 1048f54f3;  */

void FUN_1048f54dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1048f54f4; end: 1048f5503;  */

void FUN_1048f54f4(ulong *param_1,ulong *param_2)

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



/* Entry: 1048f5504; end: 1048f5547;  */

void FUN_1048f5504(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  __s10Foundation4UUIDVACycfC();
  lVar2 = 0;
  FUN_1048f5548();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x14));
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}



/* Entry: 1048f5548; end: 1048f557f;  */

void FUN_1048f5548(undefined8 param_1)

{
  if (lRam000000011309c9d0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e8256cc);
  return;
}



/* Entry: 1048f5580; end: 1048f55c7;  */

void FUN_1048f5580(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1048f5548();
  (**(code **)(unaff_x20 + *(int *)(lVar1 + 0x14)))(param_1,param_2);
  return;
}



/* Entry: 1048f55c8; end: 1048f55cf;  */

void FUN_1048f55c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb524c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation4UUIDV2eeoiySbAC_ACtFZ_110350c10)();
  return;
}



/* Entry: 1048f55d0; end: 1048f58d3;  */

long * FUN_1048f55d0(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar5 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
  }
  _swift_retain();
  return param_1;
}



/* Entry: 1048f58d4; end: 1048f5977;  */

void FUN_1048f58d4(void)

{
  undefined8 *unaff_x20;
  
  _objc_msgSend(*unaff_x20,PTR_s_topMostViewController_11267ac08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1048f5978; end: 1048f59d3;  */

undefined8 FUN_1048f5978(void)

{
  if (lRam000000011309c1d0 != -1) {
    _swift_once(0x11309c1d0,0x1048f5944);
  }
  return 0x113815550;
}



/* Entry: 1048f59d4; end: 1048f5a07;  */

void FUN_1048f59d4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f21b0c0);
  uRam0000000113815558 = uVar1;
  return;
}



/* Entry: 1048f5a08; end: 1048f5a63;  */

undefined8 FUN_1048f5a08(void)

{
  if (lRam000000011309c1d8 != -1) {
    _swift_once(0x11309c1d8,FUN_1048f59d4);
  }
  return 0x113815558;
}



/* Entry: 1048f5a64; end: 1048f5a97;  */

void FUN_1048f5a64(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f21b0a0);
  uRam0000000113815560 = uVar1;
  return;
}



/* Entry: 1048f5a98; end: 1048f5af3;  */

undefined8 FUN_1048f5a98(void)

{
  if (lRam000000011309c1e0 != -1) {
    _swift_once(0x11309c1e0,FUN_1048f5a64);
  }
  return 0x113815560;
}



/* Entry: 1048f5af4; end: 1048f5b27;  */

void FUN_1048f5af4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f21b080);
  uRam0000000113815568 = uVar1;
  return;
}



/* Entry: 1048f5b28; end: 1048f5b83;  */

undefined8 FUN_1048f5b28(void)

{
  if (lRam000000011309c1e8 != -1) {
    _swift_once(0x11309c1e8,FUN_1048f5af4);
  }
  return 0x113815568;
}



/* Entry: 1048f5b84; end: 1048f5bb7;  */

void FUN_1048f5b84(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f21b060);
  uRam0000000113815570 = uVar1;
  return;
}



/* Entry: 1048f5bb8; end: 1048f5c13;  */

undefined8 FUN_1048f5bb8(void)

{
  if (lRam000000011309c1f0 != -1) {
    _swift_once(0x11309c1f0,FUN_1048f5b84);
  }
  return 0x113815570;
}



/* Entry: 1048f5c14; end: 1048f5c47;  */

void FUN_1048f5c14(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f21b040);
  uRam0000000113815578 = uVar1;
  return;
}



/* Entry: 1048f5c48; end: 1048f5ca3;  */

undefined8 FUN_1048f5c48(void)

{
  if (lRam000000011309c1f8 != -1) {
    _swift_once(0x11309c1f8,FUN_1048f5c14);
  }
  return 0x113815578;
}



/* Entry: 1048f5ca4; end: 1048f5cd7;  */

void FUN_1048f5ca4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f21b020);
  uRam0000000113815580 = uVar1;
  return;
}



/* Entry: 1048f5cd8; end: 1048f5d73;  */

undefined8 FUN_1048f5cd8(void)

{
  if (lRam000000011309c200 != -1) {
    _swift_once(0x11309c200,FUN_1048f5ca4);
  }
  return 0x113815580;
}



/* Entry: 1048f5d74; end: 1048f5dd7;  */

void FUN_1048f5d74(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(param_4);
  func_0x00010490fd94(param_2,param_3,param_4);
  param_1[3] = &UNK_1107b7a90;
  param_1[4] = &PTR_DAT_1107b7a68;
  *param_1 = param_2;
  return;
}



/* Entry: 1048f5dd8; end: 1048f5ddb;  */

void FUN_1048f5dd8(void)

{
  return;
}



/* Entry: 1048f5ddc; end: 1048f5e3f;  */

void FUN_1048f5ddc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(param_4);
  func_0x00010490fd94(param_2,param_3,param_4);
  param_1[3] = &UNK_1107b7a90;
  param_1[4] = &PTR_DAT_1107b7a68;
  *param_1 = param_2;
  return;
}



/* Entry: 1048f5e40; end: 1048f5e4f;  */

undefined1  [16] FUN_1048f5e40(void)

{
  return ZEXT816(0x1107b7058);
}



/* Entry: 1048f5e50; end: 1048f5e67;  */

void FUN_1048f5e50(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001048f5e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 8))();
  return;
}



/* Entry: 1048f5e68; end: 1048f62fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f5e68(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,ulong param_7,ulong param_8)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  undefined1 auStack_120 [16];
  undefined8 auStack_110 [2];
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined1 auStack_90 [16];
  ulong uStack_80;
  ulong uStack_78;
  
  lVar5 = 0;
  uStack_e8 = param_2;
  uStack_e0 = param_5;
  uStack_d8 = param_8;
  __s10Foundation12CharacterSetVMa();
  lVar12 = *(long *)(lVar5 + -8);
  lVar3 = -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&uStack_100 + lVar3;
  lVar6 = param_1;
  FUN_1048eab34();
  _swift_bridgeObjectRelease(param_1);
  lVar7 = unaff_x20;
  _objc_allocWithZone();
  uVar11 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar11 = param_4 >> 0x38 & 0xf;
  }
  if (uVar11 == 0) {
LAB_1048f60e4:
    _swift_bridgeObjectRelease(lVar6);
    _swift_bridgeObjectRelease(param_6);
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x3f);
    __sSS6appendyySSF(0x2064696c61766e49,0xee003a65636e6f6e);
    __sSS6appendyySSF(param_3,param_4);
    _swift_bridgeObjectRelease(param_4);
    __sSS6appendyySSF(0xd00000000000002f,0x800000010f21a5b0);
    uVar4 = uStack_78;
    uVar11 = uStack_80;
    puVar10 = PTR_PTR_1126add38;
    _swift_getInitializedObjCClass(PTR_PTR_1126add38);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar11,uVar4);
    _swift_bridgeObjectRelease(uVar4);
    _objc_msgSend(puVar10,PTR_s_singleShotLogEntry_logEntry__11266cd78,
                  &PTR____CFConstantStringClassReference_110da4eb8,uVar11);
  }
  else {
    lVar8 = lVar7;
    uStack_80 = param_3;
    uStack_78 = param_4;
    __s10Foundation12CharacterSetV11whitespacesACvgZ(lVar13);
    func_0x000100e8b654();
    uVar11 = 0;
    __sSy10FoundationE16rangeOfCharacter4from7options0B0SnySS5IndexVGSgAA0D3SetV_So22NSStringCompareOptionsVAItF
              (lVar13,0,0,0,1,PTR___sSSN_11034da80,lVar8);
    (**(code **)(lVar12 + 8))(lVar13,lVar5);
    if ((uVar11 & 1) == 0) goto LAB_1048f60e4;
    lVar5 = lVar6;
    func_0x000100403a6c();
    _swift_bridgeObjectRelease(lVar6);
    lVar6 = lVar5;
    FUN_1048f0530();
    _swift_bridgeObjectRelease(lVar5);
    if (lVar6 != 0) {
      if (param_7 == 0) {
LAB_1048f6070:
        *(long *)(lVar7 + _DAT_11309ca08) = lVar6;
        *(undefined8 *)(lVar7 + _DAT_11309ca10) = uStack_e8;
        puVar1 = (ulong *)(lVar7 + _DAT_11309ca18);
        *puVar1 = param_3;
        puVar1[1] = param_4;
        puVar2 = (undefined8 *)(lVar7 + _DAT_11309ca20);
        *puVar2 = uStack_e0;
        puVar2[1] = param_6;
        *(ulong *)(lVar7 + _DAT_11309ca28) = param_7;
        *(ulong *)(lVar7 + _DAT_11309ca30) = uStack_d8;
        _objc_msgSendSuper2(auStack_90,PTR_s_init_1125d9248);
        return;
      }
      lVar5 = 0x11309c7a0;
      func_0x0001048db364();
      _swift_initStackObject();
      *(undefined8 *)(lVar5 + 0x20) = &PTR____CFConstantStringClassReference_110da0538;
      *(undefined8 *)(lVar5 + 0x18) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      *(undefined ***)(lVar5 + 0x28) = &PTR____CFConstantStringClassReference_110da0558;
      lStack_f8 = lVar13;
      lStack_f0 = lVar6;
      uStack_80 = param_7;
      *(ulong **)((long)auStack_110 + lVar3) = &uStack_80;
      uVar11 = param_7;
      _objc_retain();
      lVar6 = lStack_f0;
      uStack_100 = uVar11;
      _objc_retain(&PTR____CFConstantStringClassReference_110da0538);
      _objc_retain(&PTR____CFConstantStringClassReference_110da0558);
      uVar11 = 0;
      FUN_1048ee220(FUN_1048f80ac,auStack_120 + lVar3,lVar5);
      uVar4 = uStack_100;
      _swift_setDeallocating(lVar5);
      uVar9 = 0;
      FUN_1048db43c(0);
      _swift_arrayDestroy((undefined8 *)(lVar5 + 0x20),2,uVar9);
      _objc_release(uVar4);
      if ((uVar11 & 1) != 0) goto LAB_1048f6070;
      _swift_bridgeObjectRelease(param_4);
      _swift_bridgeObjectRelease(lVar6);
      _swift_bridgeObjectRelease(param_6);
      puVar10 = PTR_PTR_1126add38;
      _swift_getInitializedObjCClass(PTR_PTR_1126add38);
      uVar9 = 0xd000000000000032;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000032,0x800000010f21a630);
      _objc_msgSend(puVar10,PTR_s_singleShotLogEntry_logEntry__11266cd78,
                    &PTR____CFConstantStringClassReference_110da4eb8,uVar9);
      _objc_release(uVar4);
      _objc_release(uVar9);
      param_7 = uStack_d8;
      goto LAB_1048f61c8;
    }
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_6);
    puVar10 = PTR_PTR_1126add38;
    _swift_getInitializedObjCClass(PTR_PTR_1126add38);
    uVar11 = 0xd000000000000043;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000043,0x800000010f21a5e0);
    _objc_msgSend(puVar10,PTR_s_singleShotLogEntry_logEntry__11266cd78,
                  &PTR____CFConstantStringClassReference_110da4eb8,uVar11);
  }
  _objc_release(uVar11);
  _objc_release(uStack_d8);
LAB_1048f61c8:
  _objc_release(param_7);
  _swift_deallocPartialClassInstance(lVar7,unaff_x20,0x48,7);
  return;
}



/* Entry: 1048f62fc; end: 1048f6347; -[FBSDKLoginConfiguration nonce] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f62fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11309ca18);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11309ca18))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1048f6348; end: 1048f637f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048f6348(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_11309ca18);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_11309ca18) + 8))
  ;
  return auVar1;
}



/* Entry: 1048f6380; end: 1048f638f; -[FBSDKLoginConfiguration tracking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048f6380(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11309ca10);
}



/* Entry: 1048f6390; end: 1048f639f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048f6390(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _DAT_11309ca10);
}



/* Entry: 1048f63a0; end: 1048f6403; -[FBSDKLoginConfiguration requestedPermissions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f63a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11309ca08);
  FUN_1048f07b4(0);
  FUN_1048f07e8();
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1048f6404; end: 1048f6413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f6404(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(unaff_x20 + _DAT_11309ca08));
  return;
}



/* Entry: 1048f6414; end: 1048f646f; -[FBSDKLoginConfiguration messengerPageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f6414(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11309ca20))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11309ca20);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1048f6470; end: 1048f64a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048f6470(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_11309ca20);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_11309ca20) + 8))
  ;
  return auVar1;
}



/* Entry: 1048f64a8; end: 1048f64b7; -[FBSDKLoginConfiguration authType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f64a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11309ca28));
  return;
}



/* Entry: 1048f64b8; end: 1048f64e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048f64b8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11309ca28);
  _objc_retain(uVar1);
  return uVar1;
}



/* Entry: 1048f64e8; end: 1048f64f7; -[FBSDKLoginConfiguration codeVerifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f64e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11309ca30));
  return;
}



/* Entry: 1048f64f8; end: 1048f6507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f64f8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + _DAT_11309ca30));
  return;
}



/* Entry: 1048f6508; end: 1048f66e7;  */

undefined8
FUN_1048f6508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,PTR___sSSN_11034da80);
  _swift_bridgeObjectRelease(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  _swift_bridgeObjectRelease(param_4);
  if (param_6 == 0) {
    param_5 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
    _swift_bridgeObjectRelease(param_6);
  }
  _objc_msgSend(unaff_x20,PTR_s_initWithPermissions_tracking_non_1125251b0,uVar1,param_2,param_3,
                param_5,&PTR____CFConstantStringClassReference_110da0538);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_5);
  return unaff_x20;
}



/* Entry: 1048f66e8; end: 1048f6777; -[FBSDKLoginConfiguration initWithPermissions:tracking:nonce:messengerPageId:] */

void FUN_1048f66e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___sSSN_11034da80;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  if (param_6 == 0) {
    param_6 = 0;
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  }
  func_0x0001048f6600(param_3,param_4,param_5,puVar1,param_6,puVar2);
  return;
}



/* Entry: 1048f6778; end: 1048f69c3;  */

undefined8
FUN_1048f6778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,PTR___sSSN_11034da80);
  _swift_bridgeObjectRelease(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  _swift_bridgeObjectRelease(param_4);
  if (param_6 == 0) {
    param_5 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
    _swift_bridgeObjectRelease(param_6);
  }
  uVar2 = 0;
  FUN_1048deedc(0);
  _objc_allocWithZone();
  _objc_msgSend();
  _objc_msgSend(unaff_x20,PTR_s_initWithPermissions_tracking_non_1125251b8,uVar1,param_2,param_3,
                param_5,param_7,uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(param_7);
  return unaff_x20;
}



/* Entry: 1048f69c4; end: 1048f6a6f; -[FBSDKLoginConfiguration initWithPermissions:tracking:nonce:messengerPageId:authType:] */

void FUN_1048f69c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___sSSN_11034da80;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  if (param_6 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  }
  _objc_retain(param_7);
  func_0x0001048f68a8(param_3,param_4,param_5,puVar1,param_6,puVar2,param_7);
  return;
}



/* Entry: 1048f6a70; end: 1048f6bbf;  */

undefined8
FUN_1048f6a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,PTR___sSSN_11034da80);
  _swift_bridgeObjectRelease(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  _swift_bridgeObjectRelease(param_4);
  _objc_msgSend(unaff_x20,PTR_s_initWithPermissions_tracking_non_1125251c0,uVar1,param_2,param_3,0);
  _objc_release(uVar1);
  _objc_release(param_3);
  return unaff_x20;
}



/* Entry: 1048f6bc0; end: 1048f6c3b; -[FBSDKLoginConfiguration initWithPermissions:tracking:nonce:] */

undefined8
FUN_1048f6bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_msgSend(param_1,PTR_s_initWithPermissions_tracking_non_1125251c0,param_3,param_4,param_5,0);
  _objc_release(param_3);
  _objc_release(param_5);
  return param_1;
}



/* Entry: 1048f6c3c; end: 1048f6c93;  */

void FUN_1048f6c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_allocWithZone();
  FUN_1048f6c94(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 1048f6c94; end: 1048f6dcb;  */

undefined8 FUN_1048f6c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 unaff_x20;
  long lVar5;
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar1 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  uVar2 = param_1;
  puVar3 = PTR___sSSN_11034da80;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,PTR___sSSN_11034da80);
  _swift_bridgeObjectRelease(param_1);
  __s10Foundation4UUIDVACycfC(&stack0xffffffffffffffa0 + -(lVar4 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(lVar5 + 8))(&stack0xffffffffffffffa0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),lVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,puVar3);
  _swift_bridgeObjectRelease(puVar3);
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    _swift_bridgeObjectRelease(param_4);
  }
  _objc_msgSend();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(param_3);
  return unaff_x20;
}



/* Entry: 1048f6dcc; end: 1048f6e37; -[FBSDKLoginConfiguration initWithPermissions:tracking:messengerPageId:] */

void FUN_1048f6dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  if (param_5 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  FUN_1048f6c94();
  return;
}


