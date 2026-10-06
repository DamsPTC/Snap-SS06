/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000285d4; end: 100028633; -[_TtC28SnapchatCaptureExtension_lib33CaptureExtensionPreviewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1000285d4(long param_1)

{
  func_0x000100026e68(*(undefined8 *)(param_1 + _DAT_1000604e0),
                      *(undefined1 *)((undefined8 *)(param_1 + _DAT_1000604e0) + 1));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000604e8));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000604f0));
  param_1 = param_1 + _DAT_1000604f8;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 100028634; end: 100028653;  */

void FUN_100028634(void)

{
  _objc_opt_self(&PTR_PTR_10005e0c0);
  return;
}



/* Entry: 100028654; end: 100028697;  */

undefined8 * FUN_100028654(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000100026e64(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Entry: 100028698; end: 1000286a7;  */

void FUN_100028698(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Entry: 1000286a8; end: 1000286f7;  */

undefined8 * FUN_1000286a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000100026e64(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000100026e68(uVar3,uVar2);
  return param_1;
}



/* Entry: 1000286f8; end: 10002870b;  */

void FUN_1000286f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Entry: 10002870c; end: 100028747;  */

undefined8 * FUN_10002870c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000100026e68(uVar3,uVar2);
  return param_1;
}



/* Entry: 100028748; end: 10002882b;  */

int FUN_100028748(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7e < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0x7f;
  }
  uVar1 = (*(byte *)(param_1 + 2) & 0x7e | (uint)(*(byte *)(param_1 + 2) >> 7)) ^ 0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10002882c; end: 10002887b;  */

void FUN_10002882c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 10002887c; end: 10002889f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002887c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 != 0) {
    lVar2 = 0;
    FUN_100029b9c();
    _objc_allocWithZone();
    func_0x00010003c1e0();
    lVar1 = _DAT_1000604f0;
    *(long *)(lVar4 + _DAT_1000604f0) = lVar2;
    _objc_retain();
    lVar3 = lVar2;
    _objc_release_x22();
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + _DAT_100060588) = 2;
      _objc_release_x20();
    }
    if (*(long *)(lVar4 + lVar1) != 0) {
      _objc_retain_x8();
      FUN_100027c94();
      _objc_retain_x8(*(undefined8 *)(lVar3 + _DAT_100060710));
      _objc_release_x20();
      FUN_100029230(uVar5,lVar3);
      _objc_release_x22();
      _objc_release_x23();
    }
    FUN_100027c94();
    lVar4 = *(long *)(lVar4 + lVar1);
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar4 + _DAT_100060568);
      _objc_retain_x21();
    }
    FUN_10002ca48(uVar5);
    _objc_release_x19();
    _objc_release_x20();
    _objc_release_x21();
  }
  return;
}



/* Entry: 1000288a0; end: 1000288c3;  */

undefined8 FUN_1000288a0(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1000288c4; end: 1000288cb;  */

undefined8 * FUN_1000288c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000100026e64(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Entry: 1000288cc; end: 1000289af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1000288cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_100060538;
  puVar4 = *(undefined **)(unaff_x20 + _DAT_100060538);
  puVar3 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    _objc_opt_self(PTR__OBJC_CLASS___UIImage_100050440);
    func_0x00010003d5a0(0x4038000000000000,0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIImageView_100050448;
    _objc_allocWithZone();
    func_0x00010003c360();
    _objc_release_x19();
    func_0x00010003d440(puVar4,param_2,0);
    puVar2 = PTR__OBJC_CLASS___UIColor_100050430;
    _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
    func_0x00010003d8a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010003d3c0(puVar4,param_2,puVar2);
    _objc_release_x19();
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    _objc_retain_x21();
    _objc_release_x23();
    puVar4 = (undefined *)0x0;
  }
  _objc_retain_x8(puVar4);
  return puVar3;
}



/* Entry: 1000289b0; end: 100028e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1000289b0(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_100060528);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100060538) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100060530) = param_1;
  FUN_10002901c();
  uVar8 = 0x404a800000000000;
  dVar9 = 0.0;
  uVar11 = 0;
  uVar12 = 0x4046000000000000;
  _objc_msgSendSuper2(0,0,0x4046000000000000,0x404a800000000000,&stack0xffffffffffffff60,
                      PTR_s_initWithFrame__10005b5a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___UIColor_100050430;
  _objc_opt_self();
  puVar4 = puVar3;
  _objc_retain_x19();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  func_0x00010003bb00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c640(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bde0();
  dVar10 = dVar9;
  _objc_release_x21();
  if (dVar9 < 0.0) {
    dVar9 = 0.0;
  }
  func_0x00010003bb60(puVar4);
  puVar5 = PTR__OBJC_CLASS___UIBezierPath_100050418;
  _objc_opt_self(PTR__OBJC_CLASS___UIBezierPath_100050418);
  func_0x00010003bae0(dVar10,uVar11,uVar12,uVar8,dVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010003c640(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003b6a0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d280(puVar6);
  _objc_release_x22();
  _objc_release_x23();
  func_0x00010003c640(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d2a0(0x4030000000000000);
  _objc_release_x22();
  puVar5 = puVar4;
  func_0x00010003c640(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003b680(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d220(puVar5);
  _objc_release_x22();
  _objc_release_x23();
  func_0x00010003c640(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d260(0x3df5c28f);
  _objc_release_x22();
  func_0x00010003c640(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d240(0x4024000000000000,0);
  _objc_release_x19();
  _objc_release_x21();
  _objc_release_x22();
  func_0x00010003d440(puVar4);
  _objc_allocWithZone(PTR__OBJC_CLASS___UITapGestureRecognizer_1000504a8);
  func_0x00010003c420();
  _objc_release_x20();
  func_0x00010003b7e0(puVar4);
  FUN_1000288cc();
  func_0x00010003b8e0(puVar4);
  _objc_release_x21();
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
  _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
  lVar7 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar7 + 0x18) = 0xd;
  *(undefined8 *)(lVar7 + 0x10) = 6;
  lVar2 = _DAT_100060538;
  uVar8 = *(undefined8 *)(puVar4 + _DAT_100060538);
  func_0x00010003bc00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bc00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar7 + 0x20) = uVar8;
  uVar8 = *(undefined8 *)(puVar4 + lVar2);
  func_0x00010003bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bc20(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar7 + 0x28) = uVar8;
  uVar8 = *(undefined8 *)(puVar4 + lVar2);
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  *(undefined8 *)(lVar7 + 0x30) = uVar8;
  uVar8 = *(undefined8 *)(puVar4 + lVar2);
  func_0x00010003c120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  *(undefined8 *)(lVar7 + 0x38) = uVar8;
  puVar5 = puVar4;
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003bd80(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  *(undefined **)(lVar7 + 0x40) = puVar5;
  puVar5 = puVar4;
  func_0x00010003c120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003bd80(0x404a800000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  *(undefined **)(lVar7 + 0x48) = puVar5;
  uVar8 = 0;
  FUN_100011794(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar7,uVar8);
  _swift_release(lVar7);
  func_0x00010003b700(puVar3);
  _objc_release_x20();
  _objc_release_x19();
  _objc_release_x23();
  return puVar4;
}



/* Entry: 100028e5c; end: 100028ecf; -[_TtC28SnapchatCaptureExtension_lib36CaptureExtensionPreviewToolbarButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100028e5c(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_100060528);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_100060538) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004c2a0,
             "SnapchatCaptureExtension_lib/CaptureExtensionPreviewToolbarButton.swift",0x47,2,0x3b,0
            );
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100028ed0);
  (*pcVar2)();
}



/* Entry: 100028ed0; end: 100028f43; -[_TtC28SnapchatCaptureExtension_lib36CaptureExtensionPreviewToolbarButton initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100028ed0(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_100060528);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_100060538) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004bd50,
             "SnapchatCaptureExtension_lib/CaptureExtensionPreviewToolbarButton.swift",0x47,2,0x40,0
            );
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100028f44);
  (*pcVar2)();
}



/* Entry: 100028f44; end: 100028faf; -[_TtC28SnapchatCaptureExtension_lib36CaptureExtensionPreviewToolbarButton onButtonTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100028f44(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_100060528);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_100060528))[1];
  _objc_retain();
  FUN_100013094(pcVar1,uVar2);
  (*pcVar1)();
  _objc_release_x21();
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010003b584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_100050d48)(uVar2);
    return;
  }
  return;
}



/* Entry: 100028fb0; end: 100028fdf;  */

void FUN_100028fb0(void)

{
  FUN_10002901c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 100028fe0; end: 10002901b; -[_TtC28SnapchatCaptureExtension_lib36CaptureExtensionPreviewToolbarButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100028fe0(long param_1)

{
  func_0x0001000130a4(*(undefined8 *)(param_1 + _DAT_100060528),
                      ((undefined8 *)(param_1 + _DAT_100060528))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_100060538));
  return;
}



/* Entry: 10002901c; end: 10002903b;  */

void FUN_10002901c(void)

{
  _objc_opt_self(&PTR_PTR_10005e210);
  return;
}



/* Entry: 10002903c; end: 10002904f;  */

bool FUN_10002903c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100029050; end: 1000290fb;  */

void FUN_100029050(void)

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



/* Entry: 1000290fc; end: 10002912f;  */

void FUN_1000290fc(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 100029130; end: 100029163;  */

void FUN_100029130(void)

{
  FUN_100029718();
  FUN_100029b9c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 100029164; end: 1000291a7; -[_TtC28SnapchatCaptureExtension_lib34CaptureExtensionPreviewVideoPlayer dealloc] */

void FUN_100029164(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_100029718();
  FUN_100029b9c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 1000291a8; end: 10002922f; -[_TtC28SnapchatCaptureExtension_lib34CaptureExtensionPreviewVideoPlayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000291a8(long param_1)

{
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_100060568));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_100060570));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_100060578));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_100060598));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000605a0));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000605a8));
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_1000605b0));
  return;
}



/* Entry: 100029230; end: 1000295bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100029230(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  *(undefined8 *)(unaff_x20 + _DAT_100060570) = param_2;
  _objc_retain_x1();
  _objc_release_x21();
  puVar2 = PTR__OBJC_CLASS___AVPlayerItem_100050728;
  _objc_allocWithZone();
  func_0x00010003c240();
  lVar1 = _DAT_100060578;
  *(undefined **)(unaff_x20 + _DAT_100060578) = puVar2;
  _objc_retain();
  _objc_release_x21();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_100060568);
  func_0x00010003caa0(uVar5);
  _objc_release_x20();
  puVar2 = (undefined *)0x0;
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    puVar3 = &UNK_100041940;
    _swift_getKeyPath();
    puVar4 = &UNK_100052a40;
    _swift_allocObject(&UNK_100052a40,0x18,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    _objc_retain_x20();
    _objc_retain_x19();
    puVar2 = puVar3;
    __s10Foundation27_KeyValueCodingAndObservingPAAE7observe_7options13changeHandlerAA05NSKeyC11ObservationCs0B4PathCyxqd__G_So0kcF7OptionsVyx_AA0kC14ObservedChangeVyqd__GtctlF
              (puVar3,3,FUN_100029e74,puVar4,
               PTR___sSo8NSObjectC10Foundation27_KeyValueCodingAndObservingACWP_1000502c8);
    _objc_release_x24();
    _swift_release(puVar3);
    _swift_release(puVar4);
  }
  *(undefined **)(unaff_x20 + _DAT_1000605a8) = puVar2;
  _objc_release_x9();
  puVar2 = (undefined *)0x0;
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    puVar3 = &UNK_100041970;
    _swift_getKeyPath();
    _objc_retain_x20();
    puVar2 = puVar3;
    __s10Foundation27_KeyValueCodingAndObservingPAAE7observe_7options13changeHandlerAA05NSKeyC11ObservationCs0B4PathCyxqd__G_So0kcF7OptionsVyx_AA0kC14ObservedChangeVyqd__GtctlF
              (puVar3,0,FUN_100029708,0,
               PTR___sSo8NSObjectC10Foundation27_KeyValueCodingAndObservingACWP_1000502c8);
    _objc_release_x23();
    _swift_release(puVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_1000605b0) = puVar2;
  _objc_release_x9();
  puVar2 = &UNK_100041998;
  _swift_getKeyPath();
  puVar3 = puVar2;
  __s10Foundation27_KeyValueCodingAndObservingPAAE7observe_7options13changeHandlerAA05NSKeyC11ObservationCs0B4PathCyxqd__G_So0kcF7OptionsVyx_AA0kC14ObservedChangeVyqd__GtctlF
            ();
  _swift_release(puVar2);
  *(undefined **)(unaff_x20 + _DAT_100060598) = puVar3;
  _objc_release_x9();
  puVar2 = &UNK_1000419c0;
  _swift_getKeyPath();
  puVar3 = puVar2;
  __s10Foundation27_KeyValueCodingAndObservingPAAE7observe_7options13changeHandlerAA05NSKeyC11ObservationCs0B4PathCyxqd__G_So0kcF7OptionsVyx_AA0kC14ObservedChangeVyqd__GtctlF
            ();
  _swift_release(puVar2);
  *(undefined **)(unaff_x20 + _DAT_1000605a0) = puVar3;
  _objc_release_x9();
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_100050300;
  _objc_opt_self(PTR__OBJC_CLASS___NSNotificationCenter_100050300);
  puVar3 = puVar2;
  func_0x00010003be20();
  _objc_retainAutoreleasedReturnValue();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x800000010004c720);
  func_0x00010003be00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003b880(puVar3);
  _objc_release_x22();
  _objc_release_x24();
  _objc_release_x21();
  puVar3 = puVar2;
  func_0x00010003be20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002d,0x800000010004c750);
  func_0x00010003b880(puVar3);
  _objc_release_x21();
  _objc_release_x23();
  func_0x00010003be20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000027,0x800000010004c780);
  func_0x00010003b880(puVar2);
  _objc_release_x20();
  _objc_release_x22();
  *(undefined1 *)(unaff_x20 + _DAT_100060580) = 1;
  return;
}



/* Entry: 1000295bc; end: 10002969b;  */

void FUN_1000295bc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  lVar1 = *param_1;
  func_0x00010003d6a0();
  if (lVar1 == 1) {
    pcVar2 = "prepare(asset:videoView:)";
    func_0x00010003a450("prepare(asset:videoView:)");
    _objc_retainAutoreleasedReturnValue();
    puVar3 = &UNK_100052a68;
    _swift_allocObject(&UNK_100052a68,0x18,7);
    _swift_unknownObjectWeakInit(puVar3 + 0x10,param_3);
    pcStack_40 = FUN_100029edc;
    puStack_60 = PTR___NSConcreteStackBlock_100050768;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_1000272d0;
    puStack_48 = &UNK_100052a80;
    puStack_38 = puVar3;
    __Block_copy(&puStack_60);
    _swift_release(puStack_38);
    func_0x00010003c820(pcVar2);
    __Block_release(ppuVar4);
    _swift_unknownObjectRelease(pcVar2);
  }
  return;
}



/* Entry: 10002969c; end: 100029707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002969c(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    _objc_retain_x8(*(undefined8 *)(param_1 + _DAT_100060568));
    _objc_release_x20();
    func_0x00010003c8c0(param_1);
    _objc_release_x19();
  }
  return;
}



/* Entry: 100029708; end: 100029717;  */

void FUN_100029708(void)

{
  return;
}



/* Entry: 100029718; end: 100029807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100029718(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_100060580) == '\x01') {
    *(undefined1 *)(unaff_x20 + _DAT_100060580) = 0;
    *(undefined8 *)(unaff_x20 + _DAT_100060578) = 0;
    _objc_release_x9();
    *(undefined1 *)(unaff_x20 + _DAT_100060588) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_100060590) = 0;
    *(undefined8 *)(unaff_x20 + _DAT_100060570) = 0;
    _objc_release_x9();
    _objc_opt_self(PTR__OBJC_CLASS___NSNotificationCenter_100050300);
    func_0x00010003be20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003ca60();
    _objc_release_x19();
    *(undefined8 *)(unaff_x20 + _DAT_1000605a8) = 0;
    _objc_release_x9();
    *(undefined8 *)(unaff_x20 + _DAT_1000605b0) = 0;
    _objc_release_x9();
    *(undefined8 *)(unaff_x20 + _DAT_100060598) = 0;
    _objc_release_x9();
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1000605a0);
    *(undefined8 *)(unaff_x20 + _DAT_1000605a0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000508c0)(uVar1);
    return;
  }
  return;
}



/* Entry: 100029808; end: 100029903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100029808(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (*(char *)(unaff_x20 + _DAT_100060588) != '\0') {
    if (*(char *)(unaff_x20 + _DAT_100060588) == '\x01') {
      if (*(char *)(unaff_x20 + _DAT_100060590) == '\x01') {
        *(undefined1 *)(unaff_x20 + _DAT_100060590) = 0;
        return;
      }
      *(undefined1 *)(unaff_x20 + _DAT_100060590) = 1;
    }
    __s10Foundation12NotificationV6objectypSgvg(&uStack_50);
    if (lStack_38 == 0) {
      FUN_100029d90(&uStack_50);
    }
    else {
      uVar1 = 0;
      FUN_100029dd8(0);
      puVar2 = &uStack_58;
      _swift_dynamicCast(puVar2,&uStack_50,PTR___sypN_100050c40 + 8,uVar1,6);
      if (((ulong)puVar2 & 1) != 0) {
        uStack_50 = *(undefined8 *)PTR__kCMTimeZero_100050748;
        uStack_40 = *(undefined8 *)(PTR__kCMTimeZero_100050748 + 0x10);
        uStack_48 = *(undefined8 *)(PTR__kCMTimeZero_100050748 + 8);
        func_0x00010003cb80(uStack_58);
        func_0x00010003c8c0(*(undefined8 *)(unaff_x20 + _DAT_100060568));
        _objc_release_x19();
      }
    }
  }
  return;
}



/* Entry: 100029904; end: 10002999f; -[_TtC28SnapchatCaptureExtension_lib34CaptureExtensionPreviewVideoPlayer playerItemDidReachEndWithNotification:] */

void FUN_100029904(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (puVar2,param_3);
  _objc_retain_x20();
  FUN_100029808(puVar2);
  _objc_release_x20();
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1000299a0; end: 1000299a3;  */

void FUN_1000299a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar2 + 0x40));
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 1000299a4; end: 100029a1f;  */

void FUN_1000299a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar2 + 0x40));
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 100029a20; end: 100029a2b; -[_TtC28SnapchatCaptureExtension_lib34CaptureExtensionPreviewVideoPlayer handleRouteChangeWithNotification:] */

void FUN_100029a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (puVar2,param_3);
  (*(code *)0x10002a0f0)(puVar2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 100029a2c; end: 100029a37; -[_TtC28SnapchatCaptureExtension_lib34CaptureExtensionPreviewVideoPlayer handleAudioSessionInterruptionWithNotification:] */

void FUN_100029a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (puVar2,param_3);
  FUN_10002a1f8(puVar2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 100029a38; end: 100029ac7;  */

void FUN_100029a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (puVar2,param_3);
  (*param_4)(puVar2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 100029ac8; end: 100029b7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100029ac8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _DAT_100060568;
  FUN_100029fec();
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_100060570) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100060578) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_100060580) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_100060588) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_100060590) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100060598) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000605a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000605a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000605b0) = 0;
  FUN_100029b9c();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_10005b548);
  return;
}



/* Entry: 100029b7c; end: 100029b9b; -[_TtC28SnapchatCaptureExtension_lib34CaptureExtensionPreviewVideoPlayer init] */

void FUN_100029b7c(void)

{
  FUN_100029ac8();
  return;
}



/* Entry: 100029b9c; end: 100029bdb;  */

void FUN_100029b9c(void)

{
  _objc_opt_self(&PTR_PTR_10005e318);
  return;
}



/* Entry: 100029bdc; end: 100029d4f;  */

void FUN_100029bdc(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 100029d50; end: 100029d8f;  */

void FUN_100029d50(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060680 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100041904;
  _swift_getWitnessTable(&UNK_100041904,&UNK_100052a20);
  puRam0000000100060680 = puVar1;
  return;
}



/* Entry: 100029d90; end: 100029dd7;  */

undefined8 FUN_100029d90(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x100060688;
  FUN_100011744(0x100060688,&UNK_100041930);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100029dd8; end: 100029e1b;  */

void FUN_100029dd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060690 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___AVPlayerItem_100050728;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000100060690 = puVar1;
  return;
}



/* Entry: 100029e1c; end: 100029e27;  */

undefined * FUN_100029e1c(void)

{
  return PTR_s_status_10005ba78;
}



/* Entry: 100029e28; end: 100029e4f;  */

void FUN_100029e28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010003d6a0();
  *param_1 = uVar1;
  return;
}



/* Entry: 100029e50; end: 100029e73;  */

void FUN_100029e50(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100029e74; end: 100029e87;  */

void FUN_100029e74(long *param_1)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar4 = &puStack_60;
  lVar1 = *param_1;
  func_0x00010003d6a0();
  if (lVar1 == 1) {
    pcVar2 = "prepare(asset:videoView:)";
    func_0x00010003a450("prepare(asset:videoView:)");
    _objc_retainAutoreleasedReturnValue();
    puVar3 = &UNK_100052a68;
    _swift_allocObject(&UNK_100052a68,0x18,7);
    _swift_unknownObjectWeakInit(puVar3 + 0x10,uVar5);
    pcStack_40 = FUN_100029edc;
    puStack_60 = PTR___NSConcreteStackBlock_100050768;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_1000272d0;
    puStack_48 = &UNK_100052a80;
    puStack_38 = puVar3;
    __Block_copy(&puStack_60);
    _swift_release(puStack_38);
    func_0x00010003c820(pcVar2);
    __Block_release(ppuVar4);
    _swift_unknownObjectRelease(pcVar2);
  }
  return;
}



/* Entry: 100029e88; end: 100029eb7;  */

void FUN_100029e88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010003bf60();
  _objc_retainAutoreleasedReturnValue();
  *param_1 = uVar1;
  return;
}



/* Entry: 100029eb8; end: 100029edb;  */

void FUN_100029eb8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100029edc; end: 100029eff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100029edc(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    _objc_retain_x8(*(undefined8 *)(lVar1 + _DAT_100060568));
    _objc_release_x20();
    func_0x00010003c8c0(lVar1);
    _objc_release_x19();
  }
  return;
}



/* Entry: 100029f00; end: 100029f2f;  */

undefined1  [16] FUN_100029f00(undefined8 param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long unaff_x20;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_78 [40];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  __ss11AnyHashableV13_rawHashValue4seedS2i_tF();
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    do {
      func_0x00010002a458(*(long *)(unaff_x20 + 0x30) + uVar1 * 0x28,auStack_78);
      puVar2 = auStack_78;
      __ss11AnyHashableV2eeoiySbAB_ABtFZ(puVar2,param_1);
      uVar4 = (uint)puVar2;
      func_0x00010002a3e8(auStack_78);
      if (((ulong)puVar2 & 1) != 0) break;
      uVar1 = uVar1 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  auVar5._8_4_ = uVar4 & 1;
  auVar5._0_8_ = uVar1;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 100029f30; end: 100029feb;  */

undefined1  [16] FUN_100029f30(undefined8 param_1,ulong param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long unaff_x20;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_78 [40];
  
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar3 = 0;
  }
  else {
    do {
      func_0x00010002a458(*(long *)(unaff_x20 + 0x30) + param_2 * 0x28,auStack_78);
      puVar1 = auStack_78;
      __ss11AnyHashableV2eeoiySbAB_ABtFZ(puVar1,param_1);
      uVar3 = (uint)puVar1;
      func_0x00010002a3e8(auStack_78);
      if (((ulong)puVar1 & 1) != 0) break;
      param_2 = param_2 + 1 & ~uVar2;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar4._8_4_ = uVar3 & 1;
  auVar4._0_8_ = param_2;
  auVar4._12_4_ = 0;
  return auVar4;
}



/* Entry: 100029fec; end: 10002a1f7;  */

void FUN_100029fec(void)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  pcVar2 = "AVPlayer";
  _objc_getClass();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar2 == (char *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_60);
    _swift_unknownObjectRelease(pcVar2);
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_100029d90(&uStack_40);
  }
  else {
    uVar3 = 0x100060698;
    FUN_100011744(0x100060698,&UNK_1000419e8);
    puVar4 = &uStack_68;
    _swift_dynamicCast(puVar4,&uStack_40,PTR___sypN_100050c40 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      _swift_getObjCClassFromMetadata(uStack_68);
      _objc_allocWithZone();
      func_0x00010003c1e0();
      return;
    }
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000017,0x800000010004c830,
             "SnapchatCaptureExtension_lib/CaptureExtensionPreviewVideoPlayer.swift",0x45,2,0x12,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10002a0f0);
  (*pcVar1)();
}



/* Entry: 10002a1f8; end: 10002a3e7;  */

void FUN_10002a1f8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [40];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  __s10Foundation12NotificationV8userInfoSDys11AnyHashableVypGSgvg();
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  lVar1 = *(long *)PTR__AVAudioSessionInterruptionTypeKey_1000509b0;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lStack_88 = lVar1;
  puStack_80 = param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar4 = PTR___sSSN_100050a38;
  __ss11AnyHashableVyABxcSHRzlufC
            (auStack_78,&lStack_88,PTR___sSSN_100050a38,PTR___sSSSHsWP_100050a40);
  if (param_1[2] == 0) {
LAB_10002a29c:
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    puVar2 = auStack_78;
    FUN_100029f00(puVar2);
    if (((ulong)puVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10002a29c;
    }
    func_0x00010002a41c(param_1[7] + (long)puVar2 * 0x20,&uStack_50);
    _swift_bridgeObjectRelease(param_2);
    param_2 = param_1;
  }
  _swift_bridgeObjectRelease(param_2);
  func_0x00010002a3e8(auStack_78);
  puVar4 = PTR___sypN_100050c40;
  if (lStack_38 == 0) {
    _swift_bridgeObjectRelease(param_1);
    goto LAB_10002a304;
  }
  plVar3 = &lStack_88;
  puVar5 = &uStack_50;
  _swift_dynamicCast(plVar3,puVar5,PTR___sypN_100050c40 + 8,PTR___sSuN_100050ab8,6);
  if ((((ulong)plVar3 & 1) == 0) || (lStack_88 != 0)) {
    _swift_bridgeObjectRelease(param_1);
    return;
  }
  lVar1 = *(long *)PTR__AVAudioSessionInterruptionOptionKey_1000509a8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lStack_88 = lVar1;
  puStack_80 = puVar5;
  _swift_bridgeObjectRetain(puVar5);
  puVar6 = PTR___sSSN_100050a38;
  __ss11AnyHashableVyABxcSHRzlufC
            (auStack_78,&lStack_88,PTR___sSSN_100050a38,PTR___sSSSHsWP_100050a40);
  if (param_1[2] == 0) {
LAB_10002a3a0:
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    puVar2 = auStack_78;
    FUN_100029f00(puVar2);
    if (((ulong)puVar6 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10002a3a0;
    }
    func_0x00010002a41c(param_1[7] + (long)puVar2 * 0x20,&uStack_50);
    _swift_bridgeObjectRelease(puVar5);
    puVar5 = param_1;
  }
  _swift_bridgeObjectRelease(puVar5);
  _swift_bridgeObjectRelease(param_1);
  func_0x00010002a3e8(auStack_78);
  if (lStack_38 != 0) {
    _swift_dynamicCast(&lStack_88,&uStack_50,puVar4 + 8,PTR___sSuN_100050ab8,6);
    return;
  }
LAB_10002a304:
  FUN_100029d90(&uStack_50);
  return;
}



/* Entry: 10002a3e8; end: 10002a493;  */

undefined8 FUN_10002a3e8(undefined8 param_1)

{
  (**(code **)(*(long *)(PTR___ss11AnyHashableVN_100050b20 + -8) + 8))();
  return param_1;
}



/* Entry: 10002a494; end: 10002a497;  */

void FUN_10002a494(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010003bf60();
  _objc_retainAutoreleasedReturnValue();
  *param_1 = uVar1;
  return;
}



/* Entry: 10002a498; end: 10002a49b; -[_TtC28SnapchatCaptureExtension_lib34CaptureExtensionPreviewVideoPlayer playerItemPlaybackStalledWithNotification:] */

void FUN_10002a498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar2 + 0x40));
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 10002a49c; end: 10002a4a3; -[_TtC28SnapchatCaptureExtension_lib34CaptureExtensionPreviewVideoPlayer playerItemFailedToPlayToEndTimeWithNotification:] */

void FUN_10002a49c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar2 + 0x40));
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 10002a4a4; end: 10002a4df;  */

void FUN_10002a4a4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010003b584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100050d48)(uVar2);
  return;
}



/* Entry: 10002a4e0; end: 10002a5cb;  */

void FUN_10002a4e0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_100050430;
  _objc_allocWithZone();
  func_0x00010003c3c0(0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3fbeb851eb851eb8);
  puRam00000001000607b8 = puVar1;
  return;
}



/* Entry: 10002a5cc; end: 10002a697;  */

void FUN_10002a5cc(long param_1,undefined8 param_2)

{
  func_0x000100039910();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_2 = 0xe700000000000000;
    param_1 = 0x6f5420646e6553;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release_x21();
  }
  lRam0000000100060798 = param_1;
  uRam00000001000607a0 = param_2;
  return;
}



/* Entry: 10002a698; end: 10002a747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10002a698(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = _DAT_1000606c0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_1000606c0);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x1) {
    if (*(char *)(unaff_x20 + _DAT_1000606a8) == '\x01') {
      puVar3 = PTR__OBJC_CLASS___AVPlayerLayer_100050730;
      _objc_allocWithZone();
      func_0x00010003c1e0();
      func_0x00010003d4a0();
      func_0x00010003d080(puVar3,param_2,1);
      uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    }
    else {
      puVar3 = (undefined *)0x0;
      uVar4 = 1;
    }
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    _objc_retain_x21();
    func_0x00010002d670(uVar4);
  }
  FUN_10002d6c0(puVar2);
  return puVar3;
}



/* Entry: 10002a748; end: 10002a803;  */

undefined * FUN_10002a748(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1000504b8;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIView_1000504b8);
  func_0x00010003c1e0();
  func_0x00010003d440();
  puVar2 = PTR__OBJC_CLASS___UIColor_100050430;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
  func_0x00010003d580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cc60(puVar1,param_2,puVar2);
  _objc_release_x20();
  func_0x00010003cf40(puVar1,param_2,1);
  func_0x00010003d460(puVar1,param_2,0);
  func_0x00010003cce0(0,0,0x4042000000000000,0x4042000000000000,puVar1);
  func_0x00010003c640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cd60(0x4032000000000000);
  _objc_release_x20();
  return puVar1;
}



/* Entry: 10002a804; end: 10002a817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10002a804(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_1000606d8;
  lVar3 = *(long *)(unaff_x20 + _DAT_1000606d8);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = unaff_x20;
    FUN_10002a818();
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _objc_retain();
    _objc_release_x21();
    lVar3 = 0;
  }
  _objc_retain_x8(lVar3);
  return lVar2;
}



/* Entry: 10002a818; end: 10002aadf;  */

undefined * FUN_10002a818(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = PTR__OBJC_CLASS___UIButton_100050428;
  _objc_opt_self(PTR__OBJC_CLASS___UIButton_100050428);
  func_0x00010003bb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_self(PTR__OBJC_CLASS___UIImage_100050440);
  func_0x00010003d5a0(0x4038000000000000,0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cf80(puVar2);
  _objc_release_x21();
  _objc_retain_x20();
  uVar8 = 0x404c000000000000;
  dVar5 = 0.0;
  uVar7 = 0;
  uVar9 = 0x404c000000000000;
  func_0x00010003cce0(0,0,0x404c000000000000,0x404c000000000000);
  if (lRam00000001000607d8 != -1) {
    _swift_once(0x1000607d8,0x10002a55c);
  }
  uVar1 = uRam00000001000607e0;
  func_0x00010003c640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bde0();
  dVar6 = dVar5;
  _objc_release_x21();
  if (dVar5 < 0.0) {
    dVar5 = 0.0;
  }
  func_0x00010003bb60(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_100050418;
  _objc_opt_self(PTR__OBJC_CLASS___UIBezierPath_100050418);
  func_0x00010003bae0(dVar6,uVar7,uVar8,uVar9,dVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010003c640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003b6a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d280(puVar4);
  _objc_release_x23();
  _objc_release_x24();
  func_0x00010003c640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d2a0(0x4034000000000000);
  _objc_release_x23();
  puVar3 = puVar2;
  func_0x00010003c640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003b680(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d220(puVar3);
  _objc_release_x23();
  _objc_release_x22();
  func_0x00010003c640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d260(0x3e4ccccd);
  _objc_release_x22();
  func_0x00010003c640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d240(0,0);
  _objc_release_x21();
  _objc_release_x22();
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
  func_0x00010003d8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d3c0(puVar2);
  _objc_release_x21();
  func_0x00010003d440(puVar2);
  func_0x00010003b900(puVar2);
  puVar3 = puVar2;
  func_0x00010003c640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003cd60(0x403c000000000000,puVar3);
  _objc_release_x19();
  return puVar2;
}



/* Entry: 10002aae0; end: 10002aaf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10002aae0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_1000606e0;
  lVar3 = *(long *)(unaff_x20 + _DAT_1000606e0);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = unaff_x20;
    FUN_10002aaf4();
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _objc_retain();
    _objc_release_x21();
    lVar3 = 0;
  }
  _objc_retain_x8(lVar3);
  return lVar2;
}



/* Entry: 10002aaf4; end: 10002ac27;  */

undefined * FUN_10002aaf4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_100050428;
  _objc_opt_self(PTR__OBJC_CLASS___UIButton_100050428);
  func_0x00010003bb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00010003d440();
  _objc_opt_self(PTR__OBJC_CLASS___UIImage_100050440);
  func_0x00010003d5a0(0x4038000000000000,0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cf80(puVar1);
  _objc_release_x21();
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
  func_0x00010003d8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d3c0(puVar1);
  _objc_release_x21();
  if (lRam00000001000607b0 != -1) {
    _swift_once(0x1000607b0,FUN_10002a4e0);
  }
  func_0x00010003cc60(puVar1);
  puVar2 = puVar1;
  func_0x00010003c640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003cd60(0x4038000000000000,puVar2);
  _objc_release_x21();
  func_0x00010003b900(puVar1);
  return puVar1;
}



/* Entry: 10002ac28; end: 10002ac3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10002ac28(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_1000606e8;
  lVar3 = *(long *)(unaff_x20 + _DAT_1000606e8);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = unaff_x20;
    FUN_10002ac3c();
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _objc_retain();
    _objc_release_x21();
    lVar3 = 0;
  }
  _objc_retain_x8(lVar3);
  return lVar2;
}



/* Entry: 10002ac3c; end: 10002afdb;  */

undefined * FUN_10002ac3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar3 = 0x100060770;
  uStack_70 = param_1;
  FUN_100011744(0x100060770,&UNK_100041a38);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x100060778;
  lStack_78 = (long)&lStack_80 - extraout_x8;
  FUN_100011744(0x100060778,&UNK_100041a40);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = ((long)&lStack_80 - extraout_x8) - extraout_x8_00;
  lVar3 = 0;
  __s10Foundation18AttributeContainerVMa();
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar11 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation16AttributedStringVMa();
  lVar6 = *(long *)(lVar3 + -8);
  lStack_80 = lVar3;
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar6 + 0x40));
  lVar8 = lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __sSo8UIButtonC5UIKitE13ConfigurationVMa();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = lVar8 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR__OBJC_CLASS___UIButton_100050428;
  _objc_opt_self(PTR__OBJC_CLASS___UIButton_100050428);
  func_0x00010003bb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cd60(0x4038000000000000);
  _objc_release_x20();
  if (lRam00000001000607b0 != -1) {
    _swift_once(0x1000607b0,FUN_10002a4e0);
  }
  func_0x00010003cc60(puVar4);
  _objc_release_x27();
  _objc_opt_self(PTR__OBJC_CLASS___UIImage_100050440);
  func_0x00010003d5a0(0x4038000000000000,0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cf80(puVar4);
  _objc_release_x20();
  __sSo8UIButtonC5UIKitE13ConfigurationV5plainAEyFZ(lVar9);
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
  func_0x00010003d8a0();
  _objc_retainAutoreleasedReturnValue();
  __sSo8UIButtonC5UIKitE13ConfigurationV19baseForegroundColorSo7UIColorCSgvs();
  if (lRam00000001000607c0 != -1) {
    _swift_once(0x1000607c0,0x10002a634);
  }
  uVar2 = uRam00000001000607d0;
  uVar1 = uRam00000001000607c8;
  _swift_bridgeObjectRetain(uRam00000001000607d0);
  __s10Foundation18AttributeContainerVACycfC(lVar11);
  __s10Foundation16AttributedStringV_10attributesACSS_AA18AttributeContainerVtcfC
            (lVar8,uVar1,uVar2,lVar11);
  puVar5 = PTR__OBJC_CLASS___UIFont_100050438;
  _objc_opt_self();
  func_0x00010003be80(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = puVar5;
  FUN_10002d680();
  __s10Foundation16AttributedStringVy5ValueQzSgxmcAA0bC3KeyRzluis
            (&puStack_68,
             PTR___s10Foundation15AttributeScopesO5UIKitE0D10AttributesV04FontB0ON_1000503c0,
             PTR___s10Foundation15AttributeScopesO5UIKitE0D10AttributesV04FontB0ON_1000503c0,puVar5)
  ;
  lVar11 = lStack_80;
  (**(code **)(lVar6 + 0x10))(lVar10,lVar8,lStack_80);
  (**(code **)(lVar6 + 0x38))(lVar10,0,1,lVar11);
  __sSo8UIButtonC5UIKitE13ConfigurationV15attributedTitle10Foundation16AttributedStringVSgvs(lVar10)
  ;
  __sSo8UIButtonC5UIKitE13ConfigurationV14imagePlacementSo21NSDirectionalRectEdgeVvs(2);
  __sSo8UIButtonC5UIKitE13ConfigurationV12imagePadding12CoreGraphics7CGFloatVvs(0x4018000000000000);
  lVar10 = lStack_78;
  (**(code **)(lVar7 + 0x10))(lStack_78,lVar9,lVar3);
  (**(code **)(lVar7 + 0x38))(lVar10,0,1,lVar3);
  __sSo8UIButtonC5UIKitE13configurationAbCE13ConfigurationVSgvs(lVar10);
  func_0x00010003b900(puVar4);
  (**(code **)(lVar6 + 8))(lVar8,lVar11);
  (**(code **)(lVar7 + 8))(lVar9,lVar3);
  return puVar4;
}



/* Entry: 10002afdc; end: 10002afef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10002afdc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_1000606f0;
  lVar3 = *(long *)(unaff_x20 + _DAT_1000606f0);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = unaff_x20;
    FUN_10002aff0();
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _objc_retain();
    _objc_release_x21();
    lVar3 = 0;
  }
  _objc_retain_x8(lVar3);
  return lVar2;
}



/* Entry: 10002aff0; end: 10002b38f;  */

undefined * FUN_10002aff0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar3 = 0x100060770;
  uStack_70 = param_1;
  FUN_100011744(0x100060770,&UNK_100041a38);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x100060778;
  lStack_78 = (long)&lStack_80 - extraout_x8;
  FUN_100011744(0x100060778,&UNK_100041a40);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = ((long)&lStack_80 - extraout_x8) - extraout_x8_00;
  lVar3 = 0;
  __s10Foundation18AttributeContainerVMa();
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar11 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation16AttributedStringVMa();
  lVar6 = *(long *)(lVar3 + -8);
  lStack_80 = lVar3;
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar6 + 0x40));
  lVar8 = lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __sSo8UIButtonC5UIKitE13ConfigurationVMa();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = lVar8 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR__OBJC_CLASS___UIButton_100050428;
  _objc_opt_self(PTR__OBJC_CLASS___UIButton_100050428);
  func_0x00010003bb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cd60(0x4038000000000000);
  _objc_release_x20();
  if (lRam0000000100060780 != -1) {
    _swift_once(0x100060780,0x10002a51c);
  }
  func_0x00010003cc60(puVar4);
  _objc_release_x27();
  _objc_opt_self(PTR__OBJC_CLASS___UIImage_100050440);
  func_0x00010003d5a0(0x4038000000000000,0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cf80(puVar4);
  _objc_release_x20();
  __sSo8UIButtonC5UIKitE13ConfigurationV5plainAEyFZ(lVar9);
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
  func_0x00010003bb00();
  _objc_retainAutoreleasedReturnValue();
  __sSo8UIButtonC5UIKitE13ConfigurationV19baseForegroundColorSo7UIColorCSgvs();
  if (lRam0000000100060790 != -1) {
    _swift_once(0x100060790,FUN_10002a5cc);
  }
  uVar2 = uRam00000001000607a0;
  uVar1 = uRam0000000100060798;
  _swift_bridgeObjectRetain(uRam00000001000607a0);
  __s10Foundation18AttributeContainerVACycfC(lVar11);
  __s10Foundation16AttributedStringV_10attributesACSS_AA18AttributeContainerVtcfC
            (lVar8,uVar1,uVar2,lVar11);
  puVar5 = PTR__OBJC_CLASS___UIFont_100050438;
  _objc_opt_self();
  func_0x00010003be80(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = puVar5;
  FUN_10002d680();
  __s10Foundation16AttributedStringVy5ValueQzSgxmcAA0bC3KeyRzluis
            (&puStack_68,
             PTR___s10Foundation15AttributeScopesO5UIKitE0D10AttributesV04FontB0ON_1000503c0,
             PTR___s10Foundation15AttributeScopesO5UIKitE0D10AttributesV04FontB0ON_1000503c0,puVar5)
  ;
  lVar11 = lStack_80;
  (**(code **)(lVar6 + 0x10))(lVar10,lVar8,lStack_80);
  (**(code **)(lVar6 + 0x38))(lVar10,0,1,lVar11);
  __sSo8UIButtonC5UIKitE13ConfigurationV15attributedTitle10Foundation16AttributedStringVSgvs(lVar10)
  ;
  __sSo8UIButtonC5UIKitE13ConfigurationV14imagePlacementSo21NSDirectionalRectEdgeVvs(8);
  __sSo8UIButtonC5UIKitE13ConfigurationV12imagePadding12CoreGraphics7CGFloatVvs(0x4018000000000000);
  lVar10 = lStack_78;
  (**(code **)(lVar7 + 0x10))(lStack_78,lVar9,lVar3);
  (**(code **)(lVar7 + 0x38))(lVar10,0,1,lVar3);
  __sSo8UIButtonC5UIKitE13configurationAbCE13ConfigurationVSgvs(lVar10);
  func_0x00010003b900(puVar4);
  (**(code **)(lVar6 + 8))(lVar8,lVar11);
  (**(code **)(lVar7 + 8))(lVar9,lVar3);
  return puVar4;
}



/* Entry: 10002b390; end: 10002b3f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10002b390(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = _DAT_1000606f8;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_1000606f8);
  puVar2 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1000504b8;
    _objc_allocWithZone();
    func_0x00010003c1e0();
    *(undefined **)(unaff_x20 + lVar1) = puVar2;
    _objc_retain();
    _objc_release_x21();
    puVar3 = (undefined *)0x0;
  }
  _objc_retain_x8(puVar3);
  return puVar2;
}



/* Entry: 10002b3f8; end: 10002b40b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10002b3f8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_100060700;
  lVar3 = *(long *)(unaff_x20 + _DAT_100060700);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = unaff_x20;
    FUN_10002b40c();
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _objc_retain();
    _objc_release_x21();
    lVar3 = 0;
  }
  _objc_retain_x8(lVar3);
  return lVar2;
}



/* Entry: 10002b40c; end: 10002b50b;  */

undefined * FUN_10002b40c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 7;
  *(undefined8 *)(lVar1 + 0x10) = 3;
  lVar2 = lVar1;
  FUN_10002aae0();
  *(long *)(lVar1 + 0x20) = lVar2;
  FUN_10002ac28();
  *(long *)(lVar1 + 0x28) = lVar2;
  FUN_10002afdc();
  *(long *)(lVar1 + 0x30) = lVar2;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1000504a0;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIStackView_1000504a0);
  uVar4 = 0;
  func_0x00010002d89c(0,0x100060768,&PTR__OBJC_CLASS___UIView_1000504b8);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar1,uVar4);
  _swift_release(lVar1);
  func_0x00010003c220(puVar3);
  _objc_release_x21();
  func_0x00010003d440(puVar3);
  func_0x00010003cc40(puVar3);
  func_0x00010003cbc0(puVar3);
  func_0x00010003cdc0(puVar3);
  func_0x00010003d2c0(0x4020000000000000,puVar3);
  return puVar3;
}



/* Entry: 10002b50c; end: 10002b5b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002b50c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if (*(char *)((double *)(unaff_x20 + _DAT_100060718) + 1) == '\x01') {
    uVar1 = *(undefined1 *)(unaff_x20 + _DAT_100060720);
    *(undefined1 *)(unaff_x20 + _DAT_100060720) = 0;
  }
  else {
    dVar6 = *(double *)(unaff_x20 + _DAT_100060718);
    if (dVar6 <= 0.0) {
      bVar4 = false;
    }
    else {
      dVar8 = dVar6 * 0.55;
      func_0x00010003bb60(*(undefined8 *)(unaff_x20 + _DAT_1000606b8));
      _CGRectGetHeight();
      bVar4 = 100.0 < (dVar8 * dVar6) / (dVar8 + dVar6);
    }
    uVar1 = *(undefined1 *)(unaff_x20 + _DAT_100060720);
    *(bool *)(unaff_x20 + _DAT_100060720) = bVar4;
  }
  FUN_10002b5b4(uVar1);
  FUN_10002ccec();
  if ((*(char *)((double *)(unaff_x20 + _DAT_100060718) + 1) != '\x01') &&
     (dVar6 = *(double *)(unaff_x20 + _DAT_100060718), 0.0 < dVar6)) {
    dVar8 = dVar6 * 0.55;
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1000606b8);
    func_0x00010003bb60(uVar5);
    _CGRectGetHeight();
    dVar7 = dVar8 * dVar6;
    dVar8 = dVar8 + dVar6;
    dVar9 = dVar7 / dVar8;
    func_0x00010003c000(uVar5);
    dVar7 = dVar7 + dVar9;
    func_0x00010003cf00(uVar5);
    dVar6 = 100.0;
    if (dVar9 <= 100.0) {
      dVar6 = dVar9;
    }
    FUN_10002b6ac();
    func_0x00010003c000();
    dVar7 = dVar7 + dVar6 * 0.5;
    func_0x00010003cf00(uVar5);
    _objc_release_x19();
    FUN_10002a804();
    func_0x00010003c000();
    _objc_release_x19();
    _CGRectGetHeight(dVar8,dVar7,param_3,param_4);
    lVar2 = _DAT_1000606d8;
    _objc_retain_x8(*(undefined8 *)(unaff_x20 + _DAT_1000606d8));
    func_0x00010003c000();
    func_0x00010003cf00(uVar5);
    _objc_release_x19();
    lVar3 = _DAT_100060728;
    func_0x00010003cbe0((dVar6 / 100.0) * 0.5,*(undefined8 *)(unaff_x20 + _DAT_100060728));
    if (0.0 <= dVar9 + -100.0) {
      uVar5 = *(undefined8 *)(unaff_x20 + lVar3);
      func_0x00010003cbe0(0x3ff0000000000000);
      _objc_retain_x8(*(undefined8 *)(unaff_x20 + lVar3));
      func_0x00010003c000();
      func_0x00010003cf00();
      _objc_release_x19();
      _objc_retain_x8(*(undefined8 *)(unaff_x20 + lVar2));
      func_0x00010003c000();
      func_0x00010003cf00(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_1000508c0)(uVar5);
      return;
    }
  }
  return;
}



/* Entry: 10002b5b4; end: 10002b6ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002b5b4(ulong param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  
  lVar1 = _DAT_100060720;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1000606d0);
  func_0x00010003cf40(uVar3,param_2,(*(byte *)(unaff_x20 + _DAT_100060720) ^ 0xff) & 1);
  FUN_10002a804();
  puVar4 = PTR__OBJC_CLASS___UIColor_100050430;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
  func_0x00010003d580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d3c0(uVar3,param_2,puVar4);
  _objc_release_x21();
  _objc_release_x22();
  if (((param_1 & 1) == 0) && (*(char *)(unaff_x20 + lVar1) == '\x01')) {
    ppuVar5 = &PTR_PTR_10005ee98;
    _objc_opt_self();
    func_0x00010003d560();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar5 != (undefined **)0x0) {
      func_0x00010003c860();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_1000508c0)(ppuVar5);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10002b6ac);
    (*pcVar2)();
  }
  return;
}



/* Entry: 10002b6ac; end: 10002b72b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10002b6ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = _DAT_100060728;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_100060728);
  puVar2 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1000504b8;
    _objc_allocWithZone();
    func_0x00010003c1e0();
    func_0x00010003cbe0(0);
    puVar2 = puVar3;
    func_0x00010003d440(puVar3,param_2,0);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    _objc_retain_x19();
    _objc_release_x22();
    puVar3 = (undefined *)0x0;
  }
  _objc_retain_x8(puVar3);
  return puVar2;
}



/* Entry: 10002b72c; end: 10002b73f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10002b72c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_100060730;
  lVar3 = *(long *)(unaff_x20 + _DAT_100060730);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = unaff_x20;
    (*(code *)0x10002b79c)();
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _objc_retain();
    _objc_release_x21();
    lVar3 = 0;
  }
  _objc_retain_x8(lVar3);
  return lVar2;
}



/* Entry: 10002b740; end: 10002b8d7;  */

long FUN_10002b740(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *param_1;
  lVar2 = *(long *)(unaff_x20 + lVar3);
  lVar1 = lVar2;
  if (lVar2 == 0) {
    lVar1 = unaff_x20;
    (*param_2)();
    *(long *)(unaff_x20 + lVar3) = lVar1;
    _objc_retain();
    _objc_release_x21();
    lVar2 = 0;
  }
  _objc_retain_x8(lVar2);
  return lVar1;
}



/* Entry: 10002b8d8; end: 10002c93f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10002b8d8(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long unaff_x20;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_b0 [48];
  
  lVar1 = unaff_x20 + _DAT_1000606a0;
  *(undefined8 *)(lVar1 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar1,0);
  lVar1 = _DAT_1000606a8;
  *(undefined1 *)(unaff_x20 + _DAT_1000606a8) = 0;
  lVar3 = _DAT_1000606b0;
  puVar9 = PTR__OBJC_CLASS___UIView_1000504b8;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
  func_0x00010003d580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cc60(puVar9);
  _objc_release_x21();
  *(undefined **)(unaff_x20 + lVar3) = puVar9;
  lVar3 = _DAT_1000606b8;
  puVar9 = PTR__OBJC_CLASS___UIView_1000504b8;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined **)(unaff_x20 + lVar3) = puVar9;
  *(undefined8 *)(unaff_x20 + _DAT_1000606c0) = 1;
  lVar3 = _DAT_1000606d0;
  FUN_10002a748();
  *(undefined **)(unaff_x20 + lVar3) = puVar9;
  *(undefined8 *)(unaff_x20 + _DAT_1000606d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000606e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000606e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000606f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000606f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100060700) = 0;
  lVar3 = _DAT_100060708;
  puVar9 = PTR__OBJC_CLASS___UIView_1000504b8;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined **)(unaff_x20 + lVar3) = puVar9;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_100060718);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_100060720) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100060728) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100060730) = 0;
  *(char *)(unaff_x20 + lVar1) = (char)param_1;
  FUN_10002dfac(0);
  _objc_allocWithZone();
  uVar10 = param_1;
  FUN_10002d9c8();
  *(ulong *)(unaff_x20 + _DAT_1000606c8) = uVar10;
  if ((param_1 & 1) == 0) {
    puVar9 = PTR__OBJC_CLASS___UIImageView_100050448;
    _objc_allocWithZone();
    func_0x00010003c340(0,0,0,0);
    *(undefined **)(unaff_x20 + _DAT_100060710) = puVar9;
    _objc_retain();
    func_0x00010003cd40();
    func_0x00010003d440();
    _objc_release_x20();
  }
  else {
    puVar9 = PTR__OBJC_CLASS___UIView_1000504b8;
    _objc_allocWithZone();
    func_0x00010003c1e0();
    *(undefined **)(unaff_x20 + _DAT_100060710) = puVar9;
  }
  FUN_10002d594();
  puVar11 = &stack0xffffffffffffff80;
  _objc_msgSendSuper2(0,0,0,0,puVar11,PTR_s_initWithFrame__10005b5a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar12 = puVar11;
  FUN_10002b390();
  if (lRam00000001000607e8 != -1) {
    _swift_once(0x1000607e8,0x10002a590);
  }
  func_0x00010003cc60(puVar12);
  _objc_release_x19();
  lVar3 = _DAT_1000606f8;
  func_0x00010003d440(*(undefined8 *)(puVar11 + _DAT_1000606f8));
  lVar1 = _DAT_1000606c8;
  func_0x00010003d440(*(undefined8 *)(puVar11 + _DAT_1000606c8));
  lVar7 = _DAT_100060708;
  func_0x00010003d440(*(undefined8 *)(puVar11 + _DAT_100060708));
  puVar9 = PTR__OBJC_CLASS___UIPanGestureRecognizer_100050478;
  _objc_allocWithZone();
  func_0x00010003c420();
  _objc_release_x21();
  lVar13 = *(long *)(puVar11 + lVar7);
  func_0x00010003b7e0();
  if (((param_1 & 1) != 0) && (FUN_10002a698(), lVar13 != 0)) {
    func_0x00010003c640(*(undefined8 *)(puVar11 + _DAT_100060710));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003b8c0();
    _objc_release_x20();
    _objc_release_x22();
  }
  lVar8 = _DAT_100060710;
  lVar14 = *(long *)(puVar11 + _DAT_100060710);
  func_0x00010003d440();
  _objc_retain_x8(*(undefined8 *)(puVar11 + lVar8));
  lVar13 = lVar14;
  FUN_100023c90(0x4034000000000000);
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  dVar19 = 1.0;
  func_0x00010003d520(0x3ff0000000000000);
  _objc_release_x23();
  func_0x00010003bb60(lVar14);
  _CGRectGetMinX();
  dVar20 = dVar19;
  func_0x00010003bb60(lVar13);
  _CGRectGetMidX();
  dVar19 = dVar19 + dVar20;
  func_0x00010003bb60(lVar14);
  _CGRectGetMinY();
  dVar21 = dVar20;
  func_0x00010003bb60(lVar13);
  _CGRectGetMidY();
  func_0x00010003cd00(dVar19,dVar20 + dVar21,lVar13);
  func_0x00010003cc20(lVar13);
  lVar13 = lVar14;
  func_0x00010003b8e0(lVar14);
  _objc_release_x22();
  FUN_100023c90(0x4034000000000000);
  _CGAffineTransformMakeScale(auStack_b0,0xbff0000000000000,0x3ff0000000000000);
  func_0x00010003d420(lVar13);
  func_0x00010003c640(lVar13);
  _objc_retainAutoreleasedReturnValue();
  dVar19 = 1.0;
  func_0x00010003d520(0x3ff0000000000000);
  _objc_release_x23();
  func_0x00010003bb60(lVar14);
  _CGRectGetMaxX();
  dVar20 = dVar19;
  func_0x00010003bb60(lVar13);
  _CGRectGetMidX();
  dVar19 = dVar19 - dVar20;
  func_0x00010003bb60(lVar14);
  _CGRectGetMinY();
  dVar21 = dVar20;
  func_0x00010003bb60(lVar13);
  _CGRectGetMidY();
  func_0x00010003cd00(dVar19,dVar20 + dVar21,lVar13);
  func_0x00010003cc20(lVar13);
  func_0x00010003b8e0();
  _objc_release_x20();
  _objc_release_x22();
  _objc_retain_x21();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  func_0x00010003b8e0();
  FUN_10002b6ac();
  func_0x00010003b8e0(lVar14);
  _objc_release_x22();
  lVar13 = _DAT_1000606b8;
  func_0x00010003b8e0(lVar14);
  FUN_10002a804();
  func_0x00010003b8e0(lVar14);
  _objc_release_x22();
  lVar5 = _DAT_1000606d8;
  lVar15 = *(long *)(lVar14 + _DAT_1000606d8);
  func_0x00010003c160();
  _objc_retainAutoreleasedReturnValue();
  if (lVar15 != 0) {
    func_0x00010003c4a0(*(undefined8 *)(lVar14 + lVar5));
    _objc_release_x22();
  }
  func_0x00010003b8e0(*(undefined8 *)(lVar14 + lVar13));
  func_0x00010003b8e0(*(undefined8 *)(lVar14 + lVar13));
  func_0x00010003b8e0(*(undefined8 *)(lVar14 + lVar13));
  uVar16 = *(undefined8 *)(puVar11 + lVar7);
  func_0x00010003b8e0(uVar16);
  _objc_retain_x8(*(undefined8 *)(puVar11 + lVar3));
  FUN_10002b3f8();
  func_0x00010003b8e0(uVar16);
  _objc_release_x22();
  _objc_release_x23();
  lVar6 = _DAT_100060700;
  _objc_retain_x8(*(undefined8 *)(lVar14 + _DAT_100060700));
  FUN_10002aae0();
  func_0x00010003b7c0(uVar16);
  _objc_release_x22();
  _objc_release_x23();
  _objc_retain_x8(*(undefined8 *)(lVar14 + lVar6));
  FUN_10002ac28();
  func_0x00010003b7c0(uVar16);
  _objc_release_x22();
  _objc_release_x23();
  _objc_retain_x8(*(undefined8 *)(lVar14 + lVar6));
  FUN_10002afdc();
  func_0x00010003b7c0(uVar16);
  _objc_release_x22();
  _objc_release_x23();
  puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
  _objc_opt_self();
  lVar15 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar15 + 0x18) = 0x43;
  *(undefined8 *)(lVar15 + 0x10) = 0x21;
  uVar16 = *(undefined8 *)(lVar14 + lVar5);
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  *(undefined8 *)(lVar15 + 0x20) = uVar16;
  uVar16 = *(undefined8 *)(lVar14 + lVar5);
  func_0x00010003c120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  *(undefined8 *)(lVar15 + 0x28) = uVar16;
  lVar4 = _DAT_1000606d0;
  uVar16 = *(undefined8 *)(lVar14 + _DAT_1000606d0);
  func_0x00010003bc00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bc00(*(undefined8 *)(lVar14 + lVar5));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x26();
  *(undefined8 *)(lVar15 + 0x30) = uVar16;
  uVar16 = *(undefined8 *)(lVar14 + lVar4);
  func_0x00010003bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bc20(*(undefined8 *)(lVar14 + lVar5));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x26();
  *(undefined8 *)(lVar15 + 0x38) = uVar16;
  uVar16 = *(undefined8 *)(lVar14 + lVar4);
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  *(undefined8 *)(lVar15 + 0x40) = uVar16;
  uVar16 = *(undefined8 *)(lVar14 + lVar4);
  func_0x00010003c120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  *(undefined8 *)(lVar15 + 0x48) = uVar16;
  uVar16 = *(undefined8 *)(puVar11 + lVar7);
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720(*(undefined8 *)(lVar14 + lVar13));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x26();
  *(undefined8 *)(lVar15 + 0x50) = uVar16;
  uVar16 = *(undefined8 *)(puVar11 + lVar7);
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0(*(undefined8 *)(lVar14 + lVar13));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x26();
  *(undefined8 *)(lVar15 + 0x58) = uVar16;
  uVar16 = *(undefined8 *)(puVar11 + lVar7);
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c660(*(undefined8 *)(lVar14 + lVar13));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x26();
  *(undefined8 *)(lVar15 + 0x60) = uVar16;
  uVar16 = *(undefined8 *)(puVar11 + lVar7);
  func_0x00010003c120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d8c0(*(undefined8 *)(lVar14 + lVar13));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd60(0x3ffc71c71c71c71c);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x26();
  *(undefined8 *)(lVar15 + 0x68) = uVar16;
  uVar16 = *(undefined8 *)(puVar11 + lVar8);
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720(*(undefined8 *)(puVar11 + lVar7));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x26();
  *(undefined8 *)(lVar15 + 0x70) = uVar16;
  uVar16 = *(undefined8 *)(puVar11 + lVar8);
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0(*(undefined8 *)(puVar11 + lVar7));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x26();
  *(undefined8 *)(lVar15 + 0x78) = uVar16;
  uVar16 = *(undefined8 *)(puVar11 + lVar8);
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c660(*(undefined8 *)(puVar11 + lVar7));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x26();
  *(undefined8 *)(lVar15 + 0x80) = uVar16;
  uVar16 = *(undefined8 *)(puVar11 + lVar8);
  func_0x00010003c120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c120(*(undefined8 *)(puVar11 + lVar7));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x26();
  *(undefined8 *)(lVar15 + 0x88) = uVar16;
  uVar16 = *(undefined8 *)(puVar11 + lVar1);
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720(*(undefined8 *)(lVar14 + lVar13));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x26();
  *(undefined8 *)(lVar15 + 0x90) = uVar16;
  uVar16 = *(undefined8 *)(puVar11 + lVar1);
  func_0x00010003d760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d760(*(undefined8 *)(lVar14 + lVar13));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x26();
  *(undefined8 *)(lVar15 + 0x98) = uVar16;
  uVar16 = *(undefined8 *)(puVar11 + lVar3);
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bb40(*(undefined8 *)(puVar11 + lVar7));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x26();
  *(undefined8 *)(lVar15 + 0xa0) = uVar16;
  uVar16 = *(undefined8 *)(puVar11 + lVar3);
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0(lVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x26();
  *(undefined8 *)(lVar15 + 0xa8) = uVar16;
  uVar16 = *(undefined8 *)(puVar11 + lVar3);
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x26();
  *(undefined8 *)(lVar15 + 0xb0) = uVar16;
  uVar16 = *(undefined8 *)(puVar11 + lVar3);
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bb40(lVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x26();
  *(undefined8 *)(lVar15 + 0xb8) = uVar16;
  uVar16 = *(undefined8 *)(lVar14 + lVar6);
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0(*(undefined8 *)(puVar11 + lVar3));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x26();
  *(undefined8 *)(lVar15 + 0xc0) = uVar16;
  uVar16 = *(undefined8 *)(lVar14 + lVar6);
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x26();
  *(undefined8 *)(lVar15 + 200) = uVar16;
  uVar16 = *(undefined8 *)(lVar14 + lVar6);
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720(*(undefined8 *)(puVar11 + lVar3));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x21();
  *(undefined8 *)(lVar15 + 0xd0) = uVar16;
  uVar16 = *(undefined8 *)(lVar14 + lVar6);
  func_0x00010003c120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x4048000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  *(undefined8 *)(lVar15 + 0xd8) = uVar16;
  uVar16 = *(undefined8 *)(lVar14 + _DAT_1000606e0);
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x4050000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  *(undefined8 *)(lVar15 + 0xe0) = uVar16;
  uVar16 = *(undefined8 *)(lVar14 + _DAT_1000606e8);
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d8c0(*(undefined8 *)(lVar14 + _DAT_1000606f0));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  _objc_release_x25();
  *(undefined8 *)(lVar15 + 0xe8) = uVar16;
  lVar1 = _DAT_100060728;
  uVar16 = *(undefined8 *)(lVar14 + _DAT_100060728);
  func_0x00010003bc00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bc00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  _objc_release_x25();
  *(undefined8 *)(lVar15 + 0xf0) = uVar16;
  uVar16 = *(undefined8 *)(lVar14 + lVar1);
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d8c0(lVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  _objc_release_x25();
  *(undefined8 *)(lVar15 + 0xf8) = uVar16;
  uVar18 = *(undefined8 *)(lVar14 + lVar1);
  func_0x00010003c120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar18;
  _objc_release_x21();
  *(undefined8 *)(lVar15 + 0x100) = uVar18;
  FUN_10002b72c();
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  lVar3 = _DAT_100060730;
  func_0x00010003bb60(*(undefined8 *)(lVar14 + _DAT_100060730));
  _CGRectGetWidth();
  func_0x00010003bd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  *(undefined8 *)(lVar15 + 0x108) = uVar16;
  uVar16 = *(undefined8 *)(lVar14 + lVar3);
  func_0x00010003c120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bb60(*(undefined8 *)(lVar14 + lVar3));
  _CGRectGetHeight();
  func_0x00010003bd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  *(undefined8 *)(lVar15 + 0x110) = uVar16;
  uVar16 = *(undefined8 *)(lVar14 + lVar3);
  func_0x00010003bc00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bc00(*(undefined8 *)(lVar14 + lVar1));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  _objc_release_x25();
  *(undefined8 *)(lVar15 + 0x118) = uVar16;
  uVar16 = *(undefined8 *)(lVar14 + lVar3);
  func_0x00010003bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bc20(*(undefined8 *)(lVar14 + lVar1));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  _objc_release_x25();
  *(undefined8 *)(lVar15 + 0x120) = uVar16;
  uVar16 = 0;
  func_0x00010002d89c(0,0x100060340,&PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar15,uVar16);
  _swift_release(lVar15);
  func_0x00010003b700(puVar17);
  _objc_release_x20();
  _objc_release_x8(puVar9);
  _objc_release_x21();
  return lVar14;
}



/* Entry: 10002c940; end: 10002c963; -[_TtC28SnapchatCaptureExtension_lib27CaptureExtensionPreviewView initWithCoder:] */

void FUN_10002c940(void)

{
  _objc_retain_x2();
  FUN_10002d6d0();
  return;
}



/* Entry: 10002c964; end: 10002ca13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002c964(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  FUN_10002d594();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_layoutSubviews_10005b010);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1000606b0);
  func_0x00010003bb60();
  func_0x00010003cf00(uVar3);
  puVar1 = PTR__OBJC_CLASS___CATransaction_100050638;
  _objc_opt_self();
  func_0x00010003ba40();
  puVar2 = puVar1;
  func_0x00010003cda0();
  FUN_10002a698();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010003bb60(*(undefined8 *)(unaff_x20 + _DAT_100060710));
    func_0x00010003cf00(puVar2);
    _objc_release_x21();
  }
  func_0x00010003bca0(puVar1);
  FUN_10002cb00();
  return;
}



/* Entry: 10002ca14; end: 10002ca47; -[_TtC28SnapchatCaptureExtension_lib27CaptureExtensionPreviewView layoutSubviews] */

void FUN_10002ca14(undefined8 param_1)

{
  _objc_retain();
  FUN_10002c964();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_1);
  return;
}



/* Entry: 10002ca48; end: 10002caff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002ca48(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR__OBJC_CLASS___CATransaction_100050638;
  _objc_opt_self(PTR__OBJC_CLASS___CATransaction_100050638);
  func_0x00010003ba40();
  puVar3 = puVar2;
  func_0x00010003cda0(puVar2);
  FUN_10002a698();
  func_0x00010003d140();
  _objc_release_x22();
  lVar1 = _DAT_1000606c0;
  lVar4 = *(long *)(unaff_x20 + _DAT_1000606c0);
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_100060710);
    _objc_retain_x21();
    func_0x00010003bb60(uVar5);
    func_0x00010003cf00(puVar3);
    func_0x00010002d670(lVar4);
    if (*(long *)(unaff_x20 + lVar1) != 0) {
      func_0x00010003d060();
      if (*(long *)(unaff_x20 + lVar1) != 0) {
        func_0x00010003bf20();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010003bcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000508a0)(puVar2,PTR_s_commit_10005b3f8);
  return;
}



/* Entry: 10002cb00; end: 10002cceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002cb00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  FUN_10002ccec();
  if ((*(char *)((double *)(unaff_x20 + _DAT_100060718) + 1) != '\x01') &&
     (dVar4 = *(double *)(unaff_x20 + _DAT_100060718), 0.0 < dVar4)) {
    dVar6 = dVar4 * 0.55;
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1000606b8);
    func_0x00010003bb60(uVar3);
    _CGRectGetHeight();
    dVar5 = dVar6 * dVar4;
    dVar6 = dVar6 + dVar4;
    dVar7 = dVar5 / dVar6;
    func_0x00010003c000(uVar3);
    dVar5 = dVar5 + dVar7;
    func_0x00010003cf00(uVar3);
    dVar4 = 100.0;
    if (dVar7 <= 100.0) {
      dVar4 = dVar7;
    }
    FUN_10002b6ac();
    func_0x00010003c000();
    dVar5 = dVar5 + dVar4 * 0.5;
    func_0x00010003cf00(uVar3);
    _objc_release_x19();
    FUN_10002a804();
    func_0x00010003c000();
    _objc_release_x19();
    _CGRectGetHeight(dVar6,dVar5,param_3,param_4);
    lVar1 = _DAT_1000606d8;
    _objc_retain_x8(*(undefined8 *)(unaff_x20 + _DAT_1000606d8));
    func_0x00010003c000();
    func_0x00010003cf00(uVar3);
    _objc_release_x19();
    lVar2 = _DAT_100060728;
    func_0x00010003cbe0((dVar4 / 100.0) * 0.5,*(undefined8 *)(unaff_x20 + _DAT_100060728));
    if (0.0 <= dVar7 + -100.0) {
      uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
      func_0x00010003cbe0(0x3ff0000000000000);
      _objc_retain_x8(*(undefined8 *)(unaff_x20 + lVar2));
      func_0x00010003c000();
      func_0x00010003cf00();
      _objc_release_x19();
      _objc_retain_x8(*(undefined8 *)(unaff_x20 + lVar1));
      func_0x00010003c000();
      func_0x00010003cf00(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_1000508c0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 10002ccec; end: 10002ce23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002ccec(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  double dVar3;
  undefined8 uStack_78;
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_58;
  
  func_0x00010003cb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010002d89c(0,0x100060760,&PTR__OBJC_CLASS___UILayoutGuide_100050460);
  __sSo41UIPopoverPresentationControllerSourceItemP5UIKitE5frame2inSo6CGRectVSgSo6UIViewC_tF
            (&uStack_78);
  _objc_release_x20();
  if (cStack_58 == '\x01') {
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1000606b8);
  uVar1 = uVar2;
  dVar3 = dStack_70;
  func_0x00010003cf00(uStack_78,dStack_70,uStack_68,uStack_60,uVar2);
  FUN_10002b6ac();
  func_0x00010003c000(uVar2);
  func_0x00010003c000(uVar1);
  func_0x00010003cf00(0,dVar3 + -50.0,uVar1);
  _objc_release_x20();
  FUN_10002a804();
  func_0x00010003c000();
  func_0x00010003cf00(uStack_78,dStack_70,uVar1);
  _objc_release_x20();
                    /* WARNING: Could not recover jumptable at 0x00010003cbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000508a0)
            (0,*(undefined8 *)(unaff_x20 + _DAT_100060728),PTR_s_setAlpha__10005b7c8);
  return;
}



/* Entry: 10002ce24; end: 10002ce87; -[_TtC28SnapchatCaptureExtension_lib27CaptureExtensionPreviewView closeButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002ce24(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1000606a0;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    lVar1 = param_1;
    _objc_retain_x19();
    FUN_1000284b4();
    _swift_unknownObjectRelease(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000508c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10002ce88; end: 10002ce93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002ce88(void)

{
  char cVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar3 = (undefined8 *)0xe;
  FUN_10002e6c4();
  puVar2 = PTR__swift_isaMask_100050d38;
  cVar1 = *(char *)(unaff_x20 + _DAT_1000606a8);
  pcVar5 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*puVar3) + 0xf8);
  _objc_retain_x8();
  uVar4 = 1;
  if (cVar1 != '\0') {
    uVar4 = 2;
  }
  puVar3 = (undefined8 *)(ulong)uVar4;
  (*pcVar5)(puVar3,0xe);
  _objc_release_x20();
  FUN_100032230();
  pcVar5 = *(code **)((*(ulong *)puVar2 & *(ulong *)*puVar3) + 200);
  _objc_retain_x8();
  (*pcVar5)(0x19,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(puVar3);
  return;
}



/* Entry: 10002ce94; end: 10002cec7; -[_TtC28SnapchatCaptureExtension_lib27CaptureExtensionPreviewView sendToButtonTapped] */

void FUN_10002ce94(undefined8 param_1)

{
  _objc_retain();
  FUN_10002ce88();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_1);
  return;
}



/* Entry: 10002cec8; end: 10002ced3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002cec8(void)

{
  char cVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar3 = (undefined8 *)0xf;
  FUN_10002e6c4();
  puVar2 = PTR__swift_isaMask_100050d38;
  cVar1 = *(char *)(unaff_x20 + _DAT_1000606a8);
  pcVar5 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*puVar3) + 0xf8);
  _objc_retain_x8();
  uVar4 = 1;
  if (cVar1 != '\0') {
    uVar4 = 2;
  }
  puVar3 = (undefined8 *)(ulong)uVar4;
  (*pcVar5)(puVar3,0xf);
  _objc_release_x20();
  FUN_100032230();
  pcVar5 = *(code **)((*(ulong *)puVar2 & *(ulong *)*puVar3) + 200);
  _objc_retain_x8();
  (*pcVar5)(0x1a,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(puVar3);
  return;
}



/* Entry: 10002ced4; end: 10002cf8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002ced4(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar3 = param_1;
  FUN_10002e6c4();
  puVar2 = PTR__swift_isaMask_100050d38;
  cVar1 = *(char *)(unaff_x20 + _DAT_1000606a8);
  pcVar5 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*puVar3) + 0xf8);
  _objc_retain_x8();
  uVar4 = 1;
  if (cVar1 != '\0') {
    uVar4 = 2;
  }
  puVar3 = (undefined8 *)(ulong)uVar4;
  (*pcVar5)(puVar3,param_1);
  _objc_release_x20();
  FUN_100032230();
  pcVar5 = *(code **)((*(ulong *)puVar2 & *(ulong *)*puVar3) + 200);
  _objc_retain_x8();
  (*pcVar5)(param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(puVar3);
  return;
}



/* Entry: 10002cf8c; end: 10002cfbf; -[_TtC28SnapchatCaptureExtension_lib27CaptureExtensionPreviewView storyPostButtonTapped] */

void FUN_10002cf8c(undefined8 param_1)

{
  _objc_retain();
  FUN_10002cec8();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_1);
  return;
}



/* Entry: 10002cfc0; end: 10002d053; -[_TtC28SnapchatCaptureExtension_lib27CaptureExtensionPreviewView saveToMemoryButtonTapped] */

void FUN_10002cfc0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  FUN_10002e6c4();
  puVar1 = PTR__swift_isaMask_100050d38;
  pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*param_1) + 0xf8);
  _objc_retain_x8();
  puVar2 = (undefined8 *)0x3;
  (*pcVar3)(3,0xd);
  _objc_release_x20();
  FUN_100032230();
  pcVar3 = *(code **)((*(ulong *)puVar1 & *(ulong *)*puVar2) + 200);
  _objc_retain_x8();
  (*pcVar3)(0x1b,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(puVar2);
  return;
}



/* Entry: 10002d054; end: 10002d323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002d054(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  double *pdVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  bool bVar13;
  undefined8 uVar14;
  long unaff_x20;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  ppuVar6 = &puStack_80;
  ppuVar7 = &puStack_80;
  ppuVar10 = &puStack_80;
  ppuVar12 = &puStack_80;
  lVar5 = param_5;
  func_0x00010003d680();
  if (1 < lVar5 - 1U) {
    func_0x00010003d820(param_5);
    if ((param_2 < -500.0) || ((*(byte *)(unaff_x20 + _DAT_100060720) & 1) == 0)) {
      puVar8 = PTR__OBJC_CLASS___UIView_1000504b8;
      _objc_opt_self(PTR__OBJC_CLASS___UIView_1000504b8);
      puVar9 = &UNK_100052b10;
      _swift_allocObject(&UNK_100052b10,0x18,7);
      *(long *)(puVar9 + 0x10) = unaff_x20;
      puVar3 = PTR___NSConcreteStackBlock_100050768;
      puStack_80 = PTR___NSConcreteStackBlock_100050768;
      uStack_78 = 0x42000000;
      __Block_copy();
      puVar11 = (undefined1 *)ppuVar10;
      _objc_retain_x20();
      _swift_release(puVar9);
      puVar9 = &UNK_100052b60;
      _swift_allocObject(&UNK_100052b60,0x18,7);
      *(undefined1 **)(puVar9 + 0x10) = puVar11;
      puStack_80 = puVar3;
      uStack_78 = 0x42000000;
      __Block_copy(&puStack_80);
      _objc_retain_x20();
      _swift_release(puVar9);
      uVar14 = 0x3fb999999999999a;
    }
    else {
      FUN_10002a804();
      func_0x00010003cf40();
      _objc_release_x19();
      FUN_10002b6ac();
      func_0x00010003cf40();
      _objc_release_x19();
      puVar8 = PTR__OBJC_CLASS___UIView_1000504b8;
      _objc_opt_self(PTR__OBJC_CLASS___UIView_1000504b8);
      puVar9 = &UNK_100052bb0;
      _swift_allocObject(&UNK_100052bb0,0x18,7);
      *(long *)(puVar9 + 0x10) = unaff_x20;
      puVar3 = PTR___NSConcreteStackBlock_100050768;
      puStack_80 = PTR___NSConcreteStackBlock_100050768;
      uStack_78 = 0x42000000;
      __Block_copy();
      puVar11 = (undefined1 *)ppuVar6;
      _objc_retain_x20();
      _swift_release(puVar9);
      puVar9 = &UNK_100052c00;
      _swift_allocObject(&UNK_100052c00,0x18,7);
      *(undefined1 **)(puVar9 + 0x10) = puVar11;
      puStack_80 = puVar3;
      uStack_78 = 0x42000000;
      __Block_copy(&puStack_80);
      _objc_retain_x20();
      _swift_release(puVar9);
      uVar14 = 0x3fd3333333333333;
      ppuVar10 = ppuVar6;
      ppuVar12 = ppuVar7;
    }
    func_0x00010003b980(uVar14,0,puVar8);
    __Block_release(ppuVar12);
    __Block_release(ppuVar10);
    return;
  }
  func_0x00010003d7a0();
  pdVar1 = (double *)(unaff_x20 + _DAT_100060718);
  *pdVar1 = param_2;
  *(undefined1 *)(pdVar1 + 1) = 0;
  if (*(char *)((double *)(unaff_x20 + _DAT_100060718) + 1) == '\x01') {
    uVar2 = *(undefined1 *)(unaff_x20 + _DAT_100060720);
    *(undefined1 *)(unaff_x20 + _DAT_100060720) = 0;
  }
  else {
    dVar15 = *(double *)(unaff_x20 + _DAT_100060718);
    if (dVar15 <= 0.0) {
      bVar13 = false;
    }
    else {
      dVar17 = dVar15 * 0.55;
      func_0x00010003bb60(*(undefined8 *)(unaff_x20 + _DAT_1000606b8));
      _CGRectGetHeight();
      bVar13 = 100.0 < (dVar17 * dVar15) / (dVar17 + dVar15);
    }
    uVar2 = *(undefined1 *)(unaff_x20 + _DAT_100060720);
    *(bool *)(unaff_x20 + _DAT_100060720) = bVar13;
  }
  FUN_10002b5b4(uVar2);
  FUN_10002ccec();
  if ((*(char *)((double *)(unaff_x20 + _DAT_100060718) + 1) != '\x01') &&
     (dVar15 = *(double *)(unaff_x20 + _DAT_100060718), 0.0 < dVar15)) {
    dVar17 = dVar15 * 0.55;
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_1000606b8);
    func_0x00010003bb60(uVar14);
    _CGRectGetHeight();
    dVar16 = dVar17 * dVar15;
    dVar17 = dVar17 + dVar15;
    dVar18 = dVar16 / dVar17;
    func_0x00010003c000(uVar14);
    dVar16 = dVar16 + dVar18;
    func_0x00010003cf00(uVar14);
    dVar15 = 100.0;
    if (dVar18 <= 100.0) {
      dVar15 = dVar18;
    }
    FUN_10002b6ac();
    func_0x00010003c000();
    dVar16 = dVar16 + dVar15 * 0.5;
    func_0x00010003cf00(uVar14);
    _objc_release_x19();
    FUN_10002a804();
    func_0x00010003c000();
    _objc_release_x19();
    _CGRectGetHeight(dVar17,dVar16,param_3,param_4);
    lVar5 = _DAT_1000606d8;
    _objc_retain_x8(*(undefined8 *)(unaff_x20 + _DAT_1000606d8));
    func_0x00010003c000();
    func_0x00010003cf00(uVar14);
    _objc_release_x19();
    lVar4 = _DAT_100060728;
    func_0x00010003cbe0((dVar15 / 100.0) * 0.5,*(undefined8 *)(unaff_x20 + _DAT_100060728));
    if (0.0 <= dVar18 + -100.0) {
      uVar14 = *(undefined8 *)(unaff_x20 + lVar4);
      func_0x00010003cbe0(0x3ff0000000000000);
      _objc_retain_x8(*(undefined8 *)(unaff_x20 + lVar4));
      func_0x00010003c000();
      func_0x00010003cf00();
      _objc_release_x19();
      _objc_retain_x8(*(undefined8 *)(unaff_x20 + lVar5));
      uStack_78 = uVar14;
      func_0x00010003c000();
      func_0x00010003cf00(uStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_1000508c0)(uStack_78);
      return;
    }
  }
  return;
}



/* Entry: 10002d324; end: 10002d387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002d324(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010003cbe0(0,*(undefined8 *)(param_1 + _DAT_1000606b0));
  uVar1 = *(undefined8 *)(param_1 + _DAT_1000606b8);
  func_0x00010003bb60(param_1);
  _CGRectGetHeight();
  func_0x00010003c000(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003cf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000508a0)(uVar1,PTR_s_setFrame__10005b890);
  return;
}



/* Entry: 10002d388; end: 10002d3cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002d388(undefined8 param_1,long param_2)

{
  param_2 = param_2 + _DAT_1000606a0;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_1000284b4();
                    /* WARNING: Could not recover jumptable at 0x00010003b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_100050d70)(param_2);
    return;
  }
  return;
}



/* Entry: 10002d3cc; end: 10002d41f; -[_TtC28SnapchatCaptureExtension_lib27CaptureExtensionPreviewView handlePanGesture:] */

void FUN_10002d3cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain_x2();
  uVar1 = param_1;
  _objc_retain_x19();
  FUN_10002d054(param_1,uVar1);
  _objc_release_x21();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(uVar1);
  return;
}



/* Entry: 10002d420; end: 10002d47b; -[_TtC28SnapchatCaptureExtension_lib27CaptureExtensionPreviewView initWithFrame:] */

void FUN_10002d420(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapchatCaptureExtension_lib.CaptureExtensionPreviewView",0x38,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10002d44c);
  (*pcVar1)();
}


