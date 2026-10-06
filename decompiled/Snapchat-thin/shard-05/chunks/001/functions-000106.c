/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b573bc; end: 103b57567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b573bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  func_0x000107c614f0();
  uVar2 = 0;
  func_0x000102be1030(0);
  uVar7 = uVar2;
  func_0x000101107df4();
  lVar3 = param_3;
  func_0x000107c5fe08(param_3,uVar2,uVar7);
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_touchesBegan_withEvent__11267b780,lVar3,param_4
                     );
  func_0x000107c61170(lVar3);
  if (((*(byte *)(unaff_x20 + _DAT_112feee18) & 1) == 0) && (func_0x000102be0e84(), param_3 != 0)) {
    func_0x000107c4b8b8();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feee30);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 2) = 0;
    lVar3 = _DAT_112feee28;
    if (*(long *)(unaff_x20 + _DAT_112feee28) != 0) {
      func_0x000107c498f8();
    }
    puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x000107c61168();
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112feee00);
    puVar5 = &UNK_1106d8638;
    func_0x000107c613fc(&UNK_1106d8638,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    uStack_70 = 0x103b57d10;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100fef460;
    puStack_78 = &UNK_1106d8650;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c51924(uVar7);
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    func_0x000107c60bd0(ppuVar6);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined **)(unaff_x20 + lVar3) = puVar4;
    func_0x000107c61170(uVar7);
  }
  return;
}



/* Entry: 103b57568; end: 103b57617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b57568(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (((*(byte *)(param_2 + _DAT_112feee18) & 1) == 0) &&
       (*(char *)(param_2 + _DAT_112feee30 + 0x10) != '\x01')) {
      *(undefined1 *)(param_2 + _DAT_112feee20) = 1;
      lVar1 = param_2 + _DAT_112feedf8;
      func_0x000107c61618();
      if (lVar1 != 0) {
        FUN_103b565cc(param_2);
        func_0x000107c615e8(lVar1);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103b57618; end: 103b57623; -[_TtC23SCContextSpotlightSwift40ContentSpotlightPlaybackSpeedGestureView touchesBegan:withEvent:] */

void FUN_103b57618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000102be1030(0);
  uVar2 = uVar1;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar1,uVar2);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103b573bc(param_3,param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 103b57624; end: 103b57733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b57624(double param_1,double param_2,long param_3,undefined8 param_4)

{
  double *pdVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  
  func_0x000107c614f0();
  uVar2 = 0;
  func_0x000102be1030(0);
  uVar3 = uVar2;
  func_0x000101107df4();
  lVar4 = param_3;
  func_0x000107c5fe08(param_3,uVar2,uVar3);
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_touchesMoved_withEvent__11252ca58,lVar4,param_4
                     );
  func_0x000107c61170(lVar4);
  if (((*(byte *)(unaff_x20 + _DAT_112feee18) & 1) == 0) && (func_0x000102be0e84(), param_3 != 0)) {
    pdVar1 = (double *)(unaff_x20 + _DAT_112feee30);
    if (*(char *)(pdVar1 + 2) != '\x01') {
      dVar6 = *pdVar1;
      dVar5 = pdVar1[1];
      func_0x000107c4b8b8();
      param_1 = param_1 - dVar6;
      func_0x000107c61038(param_1,param_2 - dVar5);
      if ((10.0 < param_1) && ((*(byte *)(unaff_x20 + _DAT_112feee20) & 1) == 0)) {
        FUN_103b57734(param_3);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103b57734; end: 103b57783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b57734(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = _DAT_112feee28;
  uVar3 = 0;
  if (*(long *)(unaff_x20 + _DAT_112feee28) != 0) {
    func_0x000107c498f8();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c61170(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feee30);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  return;
}



/* Entry: 103b57784; end: 103b5778f; -[_TtC23SCContextSpotlightSwift40ContentSpotlightPlaybackSpeedGestureView touchesMoved:withEvent:] */

void FUN_103b57784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000102be1030(0);
  uVar2 = uVar1;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar1,uVar2);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103b57624(param_3,param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 103b57790; end: 103b57a3b;  */

void FUN_103b57790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000102be1030(0);
  uVar2 = uVar1;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar1,uVar2);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  (*param_5)(param_3,param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 103b57a3c; end: 103b57b2b; -[_TtC23SCContextSpotlightSwift40ContentSpotlightPlaybackSpeedGestureView touchesEnded:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b57a3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = 0;
  func_0x000102be1030(0);
  uVar3 = uVar2;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar2,uVar3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar4 = param_3;
  func_0x000107c5fe08(param_3,uVar2,uVar3);
  lStack_60 = param_1;
  lStack_58 = lVar1;
  func_0x000107c61154(&lStack_60,PTR_s_touchesEnded_withEvent__11267b788,uVar4,param_4);
  func_0x000107c61170(uVar4);
  if ((*(byte *)(param_1 + _DAT_112feee18) & 1) == 0) {
    func_0x000103b57828();
  }
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 103b57b2c; end: 103b57c2f; -[_TtC23SCContextSpotlightSwift40ContentSpotlightPlaybackSpeedGestureView touchesCancelled:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b57b2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = 0;
  func_0x000102be1030(0);
  uVar3 = uVar2;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar2,uVar3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar4 = param_3;
  func_0x000107c5fe08(param_3,uVar2,uVar3);
  lStack_60 = param_1;
  lStack_58 = lVar1;
  func_0x000107c61154(&lStack_60,PTR_s_touchesCancelled_withEvent__112526c90,uVar4,param_4);
  func_0x000107c61170(uVar4);
  if (((*(byte *)(param_1 + _DAT_112feee18) & 1) == 0) &&
     (*(char *)(param_1 + _DAT_112feee20) != '\x01')) {
    FUN_103b57734();
  }
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 103b57c30; end: 103b57c8f; -[_TtC23SCContextSpotlightSwift40ContentSpotlightPlaybackSpeedGestureView initWithFrame:] */

void FUN_103b57c30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextSpotlightSwift.ContentSpotlightPlaybackSpeedGestureView",0x40,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b57c5c);
  (*pcVar1)();
}



/* Entry: 103b57c90; end: 103b57cc7; -[_TtC23SCContextSpotlightSwift40ContentSpotlightPlaybackSpeedGestureView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b57c90(long param_1)

{
  FUN_103b57d18(param_1 + _DAT_112feedf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112feee28));
  return;
}



/* Entry: 103b57cc8; end: 103b57ce7;  */

void FUN_103b57cc8(void)

{
  func_0x000107c61168(&PTR_PTR_112930b10);
  return;
}



/* Entry: 103b57ce8; end: 103b57d17;  */

void FUN_103b57ce8(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(byte *)(unaff_x20 + 0x18) & 1) == 0) {
    uVar1 = 0x3ff0000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 103b57d18; end: 103b57d3b;  */

undefined8 FUN_103b57d18(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b57d3c; end: 103b57d4f;  */

void FUN_103b57d3c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103b57d50; end: 103b5833b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b57d50(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112feee60) = 0x3fd3333333333333;
  *(undefined8 *)(unaff_x20 + _DAT_112feee68) = 0x4034000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112feee70) = 0x4030000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112feee78) = 0x4030000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112feee80) = 0x4020000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112feee88) = 0x4032000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112feee90) = 0x4010000000000000;
  puVar1 = &stack0xffffffffffffff90;
  puVar6 = PTR_s_initWithFrame__1125e2948;
  func_0x000107c61154(0,0,0,0,puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c61174();
  puVar3 = puVar2;
  func_0x000107c5e2ac(puVar2);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3fdd0(0x3fd3333333333333);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(puVar4);
  puVar5 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x4034000000000000);
  func_0x000107c61170(puVar5);
  func_0x000107c526c0(0,puVar1);
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = puVar3;
  func_0x000103b5ed18();
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar6);
  func_0x000107c59c6c(puVar3);
  func_0x000107c61170(puVar4);
  puVar4 = puVar2;
  func_0x000107c5e2ac(puVar2);
  func_0x000107c61180();
  func_0x000107c59c78(puVar3);
  func_0x000107c61170(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
  func_0x000107c4179c(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c54adc(puVar3);
  func_0x000107c61170(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c5afa0(0x4032000000000000);
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    puVar7 = puVar6;
    func_0x000107c45154();
    func_0x000107c61180();
    func_0x000107c55258(puVar4);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
  }
  func_0x000107c5e2ac(puVar2);
  func_0x000107c61180();
  func_0x000107c59e10(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61174();
  func_0x000107c53840();
  lVar8 = 0x112d360b0;
  FUN_103b584e4(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 5;
  *(undefined8 *)(lVar8 + 0x10) = 2;
  *(undefined **)(lVar8 + 0x20) = puVar3;
  *(undefined **)(lVar8 + 0x28) = puVar4;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  uVar9 = 0;
  FUN_103b5855c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c61174();
  lVar10 = lVar8;
  func_0x000107c5fc48(lVar8,uVar9);
  func_0x000107c61574(lVar8);
  func_0x000107c45784();
  func_0x000107c61170(lVar10);
  func_0x000107c52b2c(puVar2);
  func_0x000107c52610(puVar2);
  func_0x000107c59594(0x4010000000000000,puVar2);
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c3d89c(puVar1);
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar8 = 0x112d360b8;
  FUN_103b584e4(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 9;
  *(undefined8 *)(lVar8 + 0x10) = 4;
  puVar7 = puVar2;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar5 = puVar1;
  func_0x000107c4acb0(puVar1);
  func_0x000107c61180();
  puVar11 = puVar7;
  func_0x000107c40284(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  *(undefined **)(lVar8 + 0x20) = puVar11;
  puVar7 = puVar2;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar5 = puVar1;
  func_0x000107c5ce8c(puVar1);
  func_0x000107c61180();
  puVar11 = puVar7;
  func_0x000107c40284(0xc030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  *(undefined **)(lVar8 + 0x28) = puVar11;
  puVar7 = puVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar5 = puVar1;
  func_0x000107c5cbe4(puVar1);
  func_0x000107c61180();
  puVar11 = puVar7;
  func_0x000107c40284(0x4020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  *(undefined **)(lVar8 + 0x30) = puVar11;
  puVar7 = puVar2;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar5 = puVar1;
  func_0x000107c3ec1c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar11 = puVar7;
  func_0x000107c40284(0xc020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  *(undefined **)(lVar8 + 0x38) = puVar11;
  uVar9 = 0;
  FUN_103b5855c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar10 = lVar8;
  func_0x000107c5fc48(lVar8,uVar9);
  func_0x000107c61574(lVar8);
  func_0x000107c3d048(puVar6);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar10);
  return puVar1;
}



/* Entry: 103b5833c; end: 103b5835b; -[_TtC23SCContextSpotlightSwift28SpotlightDoubleSpeedPillView init] */

void FUN_103b5833c(void)

{
  FUN_103b57d50();
  return;
}



/* Entry: 103b5835c; end: 103b5843b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b5835c(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112feee60) = 0x3fd3333333333333;
  *(undefined8 *)(unaff_x20 + _DAT_112feee68) = 0x4034000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112feee70) = 0x4030000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112feee78) = 0x4030000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112feee80) = 0x4020000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112feee88) = 0x4032000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112feee90) = 0x4010000000000000;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_initWithCoder__1125dd730,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar1);
  }
  return puVar1;
}



/* Entry: 103b5843c; end: 103b58463; -[_TtC23SCContextSpotlightSwift28SpotlightDoubleSpeedPillView initWithCoder:] */

void FUN_103b5843c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_103b5835c();
  return;
}



/* Entry: 103b58464; end: 103b584e3; -[_TtC23SCContextSpotlightSwift28SpotlightDoubleSpeedPillView initWithFrame:] */

void FUN_103b58464(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextSpotlightSwift.SpotlightDoubleSpeedPillView",0x34,"init(frame:)",0xc
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b58490);
  (*pcVar1)();
}



/* Entry: 103b584e4; end: 103b5855b;  */

void FUN_103b584e4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103b5855c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103b5855c; end: 103b5861f;  */

void FUN_103b5855c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103b58620; end: 103b58627;  */

void FUN_103b58620(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar3 = &UNK_1106d86d8;
  func_0x000107c613fc(&UNK_1106d86d8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_103b58954;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1106d86f0;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1106d8728;
  func_0x000107c613fc(&UNK_1106d8728,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  pcStack_60 = (code *)0x103b58978;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100ab47f8;
  puStack_68 = &UNK_1106d8740;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c3dcc0(0x3fe6666666666666,0,puVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 103b58628; end: 103b58793;  */

void FUN_103b58628(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar5 = &puStack_90;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar3 = &UNK_1106d8778;
  func_0x000107c613fc(&UNK_1106d8778,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x103b58980;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1106d8790;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c3d724(0x3fe6666666666666,0x3fc999999999999a,puVar2);
  func_0x000107c60bd0(ppuVar4);
  puVar3 = &UNK_1106d87c8;
  func_0x000107c613fc(&UNK_1106d87c8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  uStack_70 = 0x103b58988;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1106d87e0;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c3d724(0x3fe6666666666666,0x3fc999999999999a,puVar2);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 103b58794; end: 103b587ff;  */

void FUN_103b58794(undefined8 param_1,undefined8 param_2)

{
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
  
  func_0x000107c5cf28(&uStack_50);
  func_0x000107c60898(&uStack_80,0x3ff8000000000000,0x3ff8000000000000,&uStack_50);
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  uStack_38 = uStack_68;
  uStack_40 = uStack_70;
  uStack_28 = uStack_58;
  uStack_30 = uStack_60;
  func_0x000107c5a03c(param_1,param_2,&uStack_50);
  return;
}



/* Entry: 103b58800; end: 103b58953;  */

void FUN_103b58800(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar3 = &UNK_1106d86d8;
  func_0x000107c613fc(&UNK_1106d86d8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_103b58954;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1106d86f0;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1106d8728;
  func_0x000107c613fc(&UNK_1106d8728,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  pcStack_60 = (code *)0x103b58978;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100ab47f8;
  puStack_68 = &UNK_1106d8740;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c3dcc0(0x3fe6666666666666,0,puVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 103b58954; end: 103b589ab;  */

void FUN_103b58954(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar4 = &puStack_90;
  ppuVar5 = &puStack_90;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar3 = &UNK_1106d8778;
  func_0x000107c613fc(&UNK_1106d8778,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x103b58980;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1106d8790;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c3d724(0x3fe6666666666666,0x3fc999999999999a,puVar2);
  func_0x000107c60bd0(ppuVar4);
  puVar3 = &UNK_1106d87c8;
  func_0x000107c613fc(&UNK_1106d87c8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  uStack_70 = 0x103b58988;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1106d87e0;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174(uVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c3d724(0x3fe6666666666666,0x3fc999999999999a,puVar2);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 103b589ac; end: 103b589d7; +[SCSpotlightExtendedScrubberTouchEvents registerGesture] */

void FUN_103b589ac(void)

{
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f1a1a00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b589d8; end: 103b58a03; +[SCSpotlightExtendedScrubberTouchEvents unregisterGesture] */

void FUN_103b589d8(void)

{
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f1a1a30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b58a04; end: 103b58a07;  */

void FUN_103b58a04(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b58a08; end: 103b58a0b; -[SCSpotlightExtendedScrubberTouchEvents .cxx_destruct] */

void FUN_103b58a08(void)

{
  return;
}



/* Entry: 103b58a0c; end: 103b58a37; +[SCSpotlightExtendedScrubberTouchEventParams gestureRecognizerKey] */

void FUN_103b58a0c(void)

{
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f1a1a60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b58a38; end: 103b58a63; +[SCSpotlightExtendedScrubberTouchEventParams extendedInsetsKey] */

void FUN_103b58a38(void)

{
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f1a1a90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b58a64; end: 103b58a8f; +[SCSpotlightExtendedScrubberTouchEventParams defersInBoundsTouchesKey] */

void FUN_103b58a64(void)

{
  func_0x000107c5fadc(0xd000000000000031,0x800000010f1a1ab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b58a90; end: 103b58acb;  */

void FUN_103b58a90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b58acc; end: 103b58aff;  */

void FUN_103b58acc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b58b00; end: 103b58b03; -[SCSpotlightExtendedScrubberTouchEventParams .cxx_destruct] */

void FUN_103b58b00(void)

{
  return;
}



/* Entry: 103b58b04; end: 103b58b43;  */

void FUN_103b58b04(void)

{
  func_0x000107c61168(&PTR_PTR_112930cf0);
  return;
}



/* Entry: 103b58b44; end: 103b58b47; -[SCSpotlightExtendedScrubberTouchEventParams init] */

void FUN_103b58b44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b58b48; end: 103b58b4f; -[SCSpotlightExtendedScrubberTouchEvents init] */

void FUN_103b58b48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b58b50; end: 103b58b7b; +[SCSpotlightGestureEvents tapInCenterZone] */

void FUN_103b58b50(void)

{
  func_0x000107c5fadc(0xd000000000000024,0x800000010f1a1670);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b58b7c; end: 103b58ba7; +[SCSpotlightGestureEvents tapOnTooltip] */

void FUN_103b58b7c(void)

{
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1a16a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b58ba8; end: 103b58bd3; +[SCSpotlightGestureEvents longPressBegan] */

void FUN_103b58ba8(void)

{
  func_0x000107c5fadc(0xd000000000000022,0x800000010f1a1870);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b58bd4; end: 103b58bff; +[SCSpotlightGestureEvents longPressEnded] */

void FUN_103b58bd4(void)

{
  func_0x000107c5fadc(0xd000000000000022,0x800000010f1a18a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b58c00; end: 103b58c2b; +[SCSpotlightGestureEvents doubleTapDetected] */

void FUN_103b58c00(void)

{
  func_0x000107c5fadc(0xd000000000000025,0x800000010f1a1af0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b58c2c; end: 103b58c57; +[SCSpotlightGestureEvents tapLocationXKey] */

void FUN_103b58c2c(void)

{
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1a1700);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b58c58; end: 103b58c83; +[SCSpotlightGestureEvents tapLocationYKey] */

void FUN_103b58c58(void)

{
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1a16d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b58c84; end: 103b58cbf; -[SCSpotlightGestureEvents init] */

void FUN_103b58c84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b58cc0; end: 103b58cf3;  */

void FUN_103b58cc0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b58cf4; end: 103b58cf7; -[SCSpotlightGestureEvents .cxx_destruct] */

void FUN_103b58cf4(void)

{
  return;
}



/* Entry: 103b58cf8; end: 103b58d17;  */

void FUN_103b58cf8(void)

{
  func_0x000107c61168(&PTR_PTR_112930e50);
  return;
}



/* Entry: 103b58d18; end: 103b58d9b;  */

void FUN_103b58d18(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b58d9c; end: 103b58ddf; -[SCSpotlightGestureStateManager currentPlaybackState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b58d9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112feef38;
  func_0x000107c61428(param_1 + _DAT_112feef38,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 103b58de0; end: 103b58e2f; -[SCSpotlightGestureStateManager setCurrentPlaybackState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b58de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112feef38;
  func_0x000107c61428(param_1 + _DAT_112feef38,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103b58e30; end: 103b58e9f; -[SCSpotlightGestureStateManager canRecognize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b58e30(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112feef38;
  func_0x000107c61428(param_1 + _DAT_112feef38,auStack_48,0,0);
  if (((param_3 == 0) || (param_3 == 2)) && (*(long *)(param_1 + lVar1) == 2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 103b58ea0; end: 103b58ee7; -[SCSpotlightGestureStateManager init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b58ea0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112feef38) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b58ee8; end: 103b58f1b;  */

void FUN_103b58ee8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b58f1c; end: 103b58f1f;  */

void FUN_103b58f1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112feef40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc58f80;
  func_0x000107c61520(&UNK_10dc58f80,&UNK_1106d8818);
  puRam0000000112feef40 = puVar1;
  return;
}



/* Entry: 103b58f20; end: 103b58f5f;  */

void FUN_103b58f20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112feef40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc58f80;
  func_0x000107c61520(&UNK_10dc58f80,&UNK_1106d8818);
  puRam0000000112feef40 = puVar1;
  return;
}



/* Entry: 103b58f60; end: 103b58f63;  */

void FUN_103b58f60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112feef48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc59020;
  func_0x000107c61520(&UNK_10dc59020,&UNK_1106d8838);
  puRam0000000112feef48 = puVar1;
  return;
}



/* Entry: 103b58f64; end: 103b58fa3;  */

void FUN_103b58f64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112feef48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc59020;
  func_0x000107c61520(&UNK_10dc59020,&UNK_1106d8838);
  puRam0000000112feef48 = puVar1;
  return;
}



/* Entry: 103b58fa4; end: 103b58fc3;  */

undefined1  [16] FUN_103b58fa4(void)

{
  return ZEXT816(0x1106d8818);
}



/* Entry: 103b58fc4; end: 103b58fe3;  */

void FUN_103b58fc4(void)

{
  func_0x000107c61168(&PTR_PTR_112930f00);
  return;
}



/* Entry: 103b58fe4; end: 103b59013;  */

bool FUN_103b58fe4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103b59014; end: 103b5902b;  */

void FUN_103b59014(long param_1)

{
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 103b5902c; end: 103b5903b; -[SCSpotlightPlaybackControlGestureLayer tapToPauseEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b5902c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112feef78);
}



/* Entry: 103b5903c; end: 103b5904b; -[SCSpotlightPlaybackControlGestureLayer doubleTapToFavoriteEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b5903c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112feef80);
}



/* Entry: 103b5904c; end: 103b5905b; -[SCSpotlightPlaybackControlGestureLayer longPressDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b5904c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112feef88);
}



/* Entry: 103b5905c; end: 103b5906b; -[SCSpotlightPlaybackControlGestureLayer tapToPauseRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b5905c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112feef90);
}



/* Entry: 103b5906c; end: 103b5907b; -[SCSpotlightPlaybackControlGestureLayer samePageRetriggerGuardEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b5906c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112feef98);
}



/* Entry: 103b5907c; end: 103b5908b; -[SCSpotlightPlaybackControlGestureLayer playbackSpeedGestureRecognizerOnlyEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b5907c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112feefa0);
}



/* Entry: 103b5908c; end: 103b5909b; -[SCSpotlightPlaybackControlGestureLayer unstoppedPlaybackEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b5908c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112feefa8);
}



/* Entry: 103b5909c; end: 103b590ab; -[SCSpotlightPlaybackControlGestureLayer restoreOnViewerAppearFixEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b5909c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112feefb0);
}



/* Entry: 103b590ac; end: 103b5913b; -[SCSpotlightPlaybackControlGestureLayer createStickerEnabledOnPauseProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b590ac(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_112feefb8);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_103b5913c;
  puStack_48 = &UNK_1106d88c8;
  func_0x000107c60bc4(&puStack_60);
  uVar2 = uStack_38;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103b5913c; end: 103b59173;  */

uint FUN_103b5913c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = uVar2;
  func_0x000107c6157c(uVar2);
  uVar3 = (uint)uVar4;
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  return uVar3 & 1;
}



/* Entry: 103b59174; end: 103b5936b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b59174(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112feef78) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112feef80) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112feef88) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112feef90) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112feef98) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112feefa0) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112feefa8) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112feefb0) = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feefb8);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b5936c; end: 103b5941f; -[SCSpotlightPlaybackControlGestureLayer initWithTapToPauseEnabled:doubleTapToFavoriteEnabled:longPressDuration:tapToPauseRatio:samePageRetriggerGuardEnabled:playbackSpeedGestureRecognizerOnlyEnabled:unstoppedPlaybackEnabled:restoreOnViewerAppearFixEnabled:createStickerEnabledOnPauseProvider:] */

void FUN_103b5936c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1106d88b0;
  func_0x000107c613fc(&UNK_1106d88b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_11;
  func_0x000103b59270(param_1,param_2,param_5,param_6,param_7,param_8,param_9,param_10,0x103b594d4,
                      puVar1);
  return;
}



/* Entry: 103b59420; end: 103b59427; -[SCSpotlightPlaybackControlGestureLayer type] */

undefined8 FUN_103b59420(void)

{
  return 0x19;
}



/* Entry: 103b59428; end: 103b5943f; -[SCSpotlightPlaybackControlGestureLayer layerViewControllerClass] */

void FUN_103b59428(void)

{
  func_0x00010002aad0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 103b59440; end: 103b5949f; -[SCSpotlightPlaybackControlGestureLayer init] */

void FUN_103b59440(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextSpotlightSwift.SpotlightPlaybackControlGestureLayer",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b5946c);
  (*pcVar1)();
}



/* Entry: 103b594a0; end: 103b594b3; -[SCSpotlightPlaybackControlGestureLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b594a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112feefb8 + 8));
  return;
}



/* Entry: 103b594b4; end: 103b594ef;  */

void FUN_103b594b4(void)

{
  func_0x000107c61168(&PTR_PTR_112930fb8);
  return;
}



/* Entry: 103b594f0; end: 103b5950b;  */

void FUN_103b594f0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103b5950c; end: 103b5960f;  */

/* WARNING: Possible PIC construction at 0x000103b59578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b595f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b5957c) */
/* WARNING: Removing unreachable block (ram,0x000103b595f8) */

void FUN_103b5950c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0;
  FUN_103b59610(0);
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(uVar1);
  func_0x000107c3fa94(puVar2);
  func_0x000107c61180();
  func_0x000107c52b50(uVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 103b59610; end: 103b5962f;  */

void FUN_103b59610(void)

{
  func_0x000107c61168(&PTR_PTR_112931100);
  return;
}



/* Entry: 103b59630; end: 103b596ab;  */

uint FUN_103b59630(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_3;
    FUN_103b596ac(param_1,param_2);
    uVar2 = (uint)lVar1;
    func_0x000107c61170(param_3);
  }
  return uVar2 & 1;
}



/* Entry: 103b596ac; end: 103b59a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b596ac(double param_1,undefined8 param_2,ulong param_3)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  pdVar1 = (double *)(unaff_x20 + _DAT_112fef040);
  dVar18 = pdVar1[1];
  dVar19 = pdVar1[2];
  dVar20 = pdVar1[3];
  func_0x000107c609e0(*pdVar1,dVar18,dVar19,dVar20);
  if ((int)param_3 == 0) {
    dVar18 = pdVar1[1];
    dVar19 = pdVar1[2];
    dVar20 = pdVar1[3];
    func_0x000107c609a4(*pdVar1,dVar18,dVar19,dVar20,param_1,param_2);
    if ((param_3 & 1) != 0) {
      return 1;
    }
  }
  lVar7 = 0x112fef170;
  func_0x0001000285a8(0x112fef170,&UNK_10dc591b0);
  func_0x000107c61534();
  dVar16 = 1.48219693752374e-323;
  *(undefined8 *)(lVar7 + 0x18) = 6;
  *(undefined8 *)(lVar7 + 0x10) = 3;
  lVar2 = _DAT_112feeff8;
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112feeff8);
  *(undefined8 *)(lVar7 + 0x20) = uVar13;
  lVar3 = _DAT_112fef000;
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112fef000);
  *(undefined8 *)(lVar7 + 0x28) = uVar14;
  lVar4 = _DAT_112fef008;
  *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(unaff_x20 + _DAT_112fef008);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar14);
  lVar12 = 0x20;
  do {
    uVar15 = *(ulong *)(lVar7 + lVar12);
    dVar17 = dVar16;
    if (uVar15 != 0) {
      uVar8 = uVar15;
      func_0x000107c61174();
      uVar9 = uVar8;
      func_0x000107c49cd8();
      dVar17 = dVar16;
      if ((int)uVar9 != 0) {
        lVar10 = unaff_x20;
        lVar11 = unaff_x20;
        if (uVar15 == *(ulong *)(unaff_x20 + lVar2)) {
          dVar16 = *pdVar1;
          dVar18 = pdVar1[1];
          dVar19 = pdVar1[2];
          dVar20 = pdVar1[3];
          func_0x000107c609e0();
          if ((uVar9 & 1) == 0) {
            dVar16 = *pdVar1;
            dVar18 = pdVar1[1];
            dVar19 = pdVar1[2];
            dVar20 = pdVar1[3];
            func_0x000107c609a4();
            if ((uVar9 & 1) != 0) {
LAB_103b599ec:
              func_0x000107c61574(lVar7);
              func_0x000107c61170(uVar8);
              return 1;
            }
          }
          uVar15 = 0;
          FUN_103b5ad08();
          dVar17 = dVar16;
          if ((uVar15 & 1) != 0) {
            func_0x000107c4aba4();
            func_0x000107c61180();
            dVar17 = dVar16;
            if (lVar10 != 0) {
              func_0x000107c5de64();
              func_0x000107c61180();
              if (lVar11 == 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103b59a0c);
                (*pcVar5)();
              }
LAB_103b59904:
              func_0x000107c3ec60();
              func_0x000107c61170(lVar11);
              func_0x000107c609cc(dVar16,dVar18,dVar19,dVar20);
              dVar18 = *(double *)(lVar10 + _DAT_112feef90);
              func_0x000107c61170(uVar8);
              func_0x000107c61170(lVar10);
              dVar17 = dVar16 * (1.0 - dVar18) * 0.5;
              dVar18 = dVar16 - dVar17;
              bVar6 = false;
              if ((dVar17 < param_1) && (bVar6 = false, !NAN(param_1) && !NAN(dVar18))) {
                bVar6 = param_1 < dVar18;
              }
              if (bVar6) {
LAB_103b5997c:
                func_0x000107c61574(lVar7);
                return 1;
              }
              goto LAB_103b597b4;
            }
          }
        }
        else {
          if (uVar15 == *(ulong *)(unaff_x20 + lVar4)) {
            func_0x000107c5de64();
            func_0x000107c61180();
            if (lVar10 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x103b59a08);
              (*pcVar5)();
            }
            func_0x000107c3ec60();
            func_0x000107c61170(lVar10);
            func_0x000107c609cc(dVar16,dVar18,dVar19,dVar20);
            func_0x000107c61170(uVar8);
            if ((param_1 < dVar16 * 0.2) || (dVar17 = dVar16 - dVar16 * 0.2, dVar17 < param_1))
            goto LAB_103b5997c;
            goto LAB_103b597b4;
          }
          if ((*(ulong *)(unaff_x20 + lVar3) == 0) || (uVar15 != *(ulong *)(unaff_x20 + lVar3)))
          goto LAB_103b599ec;
          func_0x000107c4aba4();
          func_0x000107c61180();
          dVar17 = dVar16;
          if (lVar10 != 0) {
            func_0x000107c5de64();
            func_0x000107c61180();
            if (lVar11 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x103b59a10);
              (*pcVar5)();
            }
            goto LAB_103b59904;
          }
        }
      }
      func_0x000107c61170(uVar8);
    }
LAB_103b597b4:
    lVar12 = lVar12 + 8;
    dVar16 = dVar17;
    if (lVar12 == 0x38) {
      func_0x000107c61588(lVar7);
      uVar13 = 0x112f55d60;
      func_0x0001000285a8(0x112f55d60,&UNK_10dbacfc8);
      func_0x000107c61408((undefined8 *)(lVar7 + 0x20),3,uVar13);
      return 0;
    }
  } while( true );
}



/* Entry: 103b59a10; end: 103b59a37; -[SCSpotlightPlaybackControlGestureLayerViewController loadView] */

void FUN_103b59a10(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103b5950c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b59a38; end: 103b59cbf;  */

/* WARNING: Possible PIC construction at 0x000103b59ab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b59ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b59afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b59b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b59ba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b59bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b59c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b59c40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b59c64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b59c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b59c98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b59c68) */
/* WARNING: Removing unreachable block (ram,0x000103b59c8c) */
/* WARNING: Removing unreachable block (ram,0x000103b59c7c) */
/* WARNING: Removing unreachable block (ram,0x000103b59c44) */
/* WARNING: Removing unreachable block (ram,0x000103b59c04) */
/* WARNING: Removing unreachable block (ram,0x000103b59cbc) */
/* WARNING: Removing unreachable block (ram,0x000103b59c30) */
/* WARNING: Removing unreachable block (ram,0x000103b59bd0) */
/* WARNING: Removing unreachable block (ram,0x000103b59ba8) */
/* WARNING: Removing unreachable block (ram,0x000103b59b84) */
/* WARNING: Removing unreachable block (ram,0x000103b59b00) */
/* WARNING: Removing unreachable block (ram,0x000103b59cb8) */
/* WARNING: Removing unreachable block (ram,0x000103b59b70) */
/* WARNING: Removing unreachable block (ram,0x000103b59adc) */
/* WARNING: Removing unreachable block (ram,0x000103b59ab4) */
/* WARNING: Removing unreachable block (ram,0x000103b59cb4) */
/* WARNING: Removing unreachable block (ram,0x000103b59ac8) */
/* WARNING: Removing unreachable block (ram,0x000103b59c9c) */

void FUN_103b59a38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  puVar1 = PTR_s_handleDoubleTap__1125d1d60;
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c61174();
  func_0x000107c48c2c(puVar2,param_2,unaff_x20,puVar1);
  func_0x000107c56bb8();
  func_0x000107c61174(puVar2);
  func_0x000107c53fcc();
  func_0x000107c5317c(puVar2,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 103b59cc0; end: 103b59e53;  */

void FUN_103b59cc0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long unaff_x20;
  
  func_0x000107c42a98();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    puVar3 = (undefined8 *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar3[3] = 0x1e;
    puVar3[2] = 0xf;
    puVar4 = puVar3;
    FUN_103bb5f70();
    puVar5 = (undefined8 *)puVar4[1];
    puVar3[4] = *puVar4;
    puVar3[5] = puVar5;
    func_0x000107c61434();
    FUN_103bb5fa8();
    puVar4 = (undefined8 *)puVar5[1];
    puVar3[6] = *puVar5;
    puVar3[7] = puVar4;
    func_0x000107c61434();
    FUN_103bb5f00();
    puVar5 = (undefined8 *)puVar4[1];
    puVar3[8] = *puVar4;
    puVar3[9] = puVar5;
    func_0x000107c61434();
    FUN_103bb5f38();
    puVar4 = (undefined8 *)puVar5[1];
    puVar3[10] = *puVar5;
    puVar3[0xb] = puVar4;
    func_0x000107c61434();
    FUN_103bb5dec();
    puVar5 = (undefined8 *)puVar4[1];
    puVar3[0xc] = *puVar4;
    puVar3[0xd] = puVar5;
    func_0x000107c61434();
    FUN_103bb5db4();
    puVar4 = (undefined8 *)puVar5[1];
    puVar3[0xe] = *puVar5;
    puVar3[0xf] = puVar4;
    func_0x000107c61434();
    FUN_103bb5fe0();
    puVar5 = (undefined8 *)puVar4[1];
    puVar3[0x10] = *puVar4;
    puVar3[0x11] = puVar5;
    func_0x000107c61434();
    FUN_103bb6018();
    puVar4 = (undefined8 *)puVar5[1];
    puVar3[0x12] = *puVar5;
    puVar3[0x13] = puVar4;
    func_0x000107c61434();
    FUN_103bb69ec();
    puVar5 = (undefined8 *)puVar4[1];
    puVar3[0x14] = *puVar4;
    puVar3[0x15] = puVar5;
    func_0x000107c61434();
    FUN_103bb6c64();
    puVar4 = (undefined8 *)puVar5[1];
    puVar3[0x16] = *puVar5;
    puVar3[0x17] = puVar4;
    func_0x000107c61434();
    FUN_103bb6b44();
    puVar5 = (undefined8 *)puVar4[1];
    puVar3[0x18] = *puVar4;
    puVar3[0x19] = puVar5;
    func_0x000107c61434();
    FUN_103bba0a4();
    puVar4 = (undefined8 *)puVar5[1];
    puVar3[0x1a] = *puVar5;
    puVar3[0x1b] = puVar4;
    func_0x000107c61434();
    FUN_103bba034();
    puVar5 = (undefined8 *)puVar4[1];
    puVar3[0x1c] = *puVar4;
    puVar3[0x1d] = puVar5;
    func_0x000107c61434();
    FUN_103b81420();
    puVar4 = (undefined8 *)puVar5[1];
    puVar3[0x1e] = *puVar5;
    puVar3[0x1f] = puVar4;
    func_0x000107c61434();
    FUN_103b828b4();
    uVar1 = puVar4[1];
    puVar3[0x20] = *puVar4;
    puVar3[0x21] = uVar1;
    func_0x000107c61434();
    puVar5 = puVar3;
    func_0x000107c5fc48(puVar3,PTR___sSSN_11034da80);
    func_0x000107c61574(puVar3);
    func_0x000107c3d744(unaff_x20);
    func_0x000107c615e8(unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103b59e54);
  (*pcVar2)();
}



/* Entry: 103b59e54; end: 103b59eb3; -[SCSpotlightPlaybackControlGestureLayerViewController viewDidLoad] */

void FUN_103b59e54(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_103b59a38();
  FUN_103b59cc0();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103b59eb4; end: 103b59f63;  */

/* WARNING: Possible PIC construction at 0x000103b59ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b59f1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b59ef4) */
/* WARNING: Removing unreachable block (ram,0x000103b59f50) */
/* WARNING: Removing unreachable block (ram,0x000103b59ef8) */
/* WARNING: Removing unreachable block (ram,0x000103b59f08) */
/* WARNING: Removing unreachable block (ram,0x000103b59f18) */
/* WARNING: Removing unreachable block (ram,0x000103b59f20) */
/* WARNING: Removing unreachable block (ram,0x000103b59f28) */
/* WARNING: Removing unreachable block (ram,0x000103b59f3c) */

void FUN_103b59eb4(void)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c5c42c();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b59f64);
  (*pcVar1)();
}



/* Entry: 103b59f64; end: 103b59f77; -[SCSpotlightPlaybackControlGestureLayerViewController viewWillAppear:] */

void FUN_103b59f64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewWillAppear__1126853f0;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  FUN_103b59eb4();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103b59f78; end: 103b59feb;  */

/* WARNING: Possible PIC construction at 0x000103b59fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b59fc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b59fa4) */
/* WARNING: Removing unreachable block (ram,0x000103b59fb4) */
/* WARNING: Removing unreachable block (ram,0x000103b59fbc) */
/* WARNING: Removing unreachable block (ram,0x000103b59fc4) */
/* WARNING: Removing unreachable block (ram,0x000103b59fd4) */
/* WARNING: Removing unreachable block (ram,0x000103b59fdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b59f78(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112fef018;
  uVar2 = 0;
  if (*(long *)(unaff_x20 + _DAT_112fef018) != 0) {
    func_0x000107c4ff34();
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 103b59fec; end: 103b5a46b;  */

/* WARNING: Possible PIC construction at 0x000103b5a07c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5a120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5a174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5a1c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5a1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5a224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5a270: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b5a228) */
/* WARNING: Removing unreachable block (ram,0x000103b5a1f4) */
/* WARNING: Removing unreachable block (ram,0x000103b5a1cc) */
/* WARNING: Removing unreachable block (ram,0x000103b5a178) */
/* WARNING: Removing unreachable block (ram,0x000103b5a124) */
/* WARNING: Removing unreachable block (ram,0x000103b5a080) */
/* WARNING: Removing unreachable block (ram,0x000103b5a274) */

void FUN_103b59fec(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  FUN_103b5546c(0);
  func_0x000107c610f8();
  uVar1 = 0;
  FUN_103b54a10(0,0,0,0,0,0);
  func_0x000107c61180();
  func_0x000107c5a378();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 103b5a46c; end: 103b5a47f; -[SCSpotlightPlaybackControlGestureLayerViewController viewDidDisappear:] */

void FUN_103b5a46c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidDisappear__112684c48;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  FUN_103b59f78();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103b5a480; end: 103b5a4ef;  */

void FUN_103b5a480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  code *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *param_4;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,uVar2,param_3);
  (*param_5)();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103b5a4f0; end: 103b5a533;  */

void FUN_103b5a4f0(void)

{
  func_0x000107c614f0();
  FUN_103b59f78();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b5a534; end: 103b5a58b; -[SCSpotlightPlaybackControlGestureLayerViewController dealloc] */

void FUN_103b5a534(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  FUN_103b59f78();
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61154(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b5a58c; end: 103b5a623; -[SCSpotlightPlaybackControlGestureLayerViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b5a5a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5a5c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5a5e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5a608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b5a5ec) */
/* WARNING: Removing unreachable block (ram,0x000103b5a5cc) */
/* WARNING: Removing unreachable block (ram,0x000103b5a5ac) */
/* WARNING: Removing unreachable block (ram,0x000103b5a60c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5a58c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112feeff0));
  return;
}


