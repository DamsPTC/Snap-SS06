/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100013994; end: 100013a27; -[_TtC28SnapchatCaptureExtension_lib34LockedCameraToolbarFeatureMultiCam onButtonTap] */

void FUN_100013994(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  FUN_10002e6c4();
  puVar1 = PTR__swift_isaMask_100050d38;
  pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*param_1) + 0xf8);
  _objc_retain_x8();
  puVar2 = (undefined8 *)0x3;
  (*pcVar3)(3,2);
  _objc_release_x20();
  FUN_100032230();
  pcVar3 = *(code **)((*(ulong *)puVar1 & *(ulong *)*puVar2) + 200);
  _objc_retain_x8();
  (*pcVar3)(0x15,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(puVar2);
  return;
}



/* Entry: 100013a28; end: 100013a6b;  */

void FUN_100013a28(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_100050c90)();
  return;
}



/* Entry: 100013a6c; end: 100013a73;  */

void FUN_100013a6c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010003b380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_100050930)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100013a74; end: 100013a97;  */

void FUN_100013a74(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100013a98; end: 100013a9f;  */

void FUN_100013a98(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long unaff_x20;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  puVar2 = (undefined8 *)(unaff_x20 + 0x10);
  _swift_weakLoadStrong();
  if (puVar2 != (undefined8 *)0x0) {
    _swift_release();
    FUN_10002e6c4();
    puVar1 = PTR__swift_isaMask_100050d38;
    pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*puVar2) + 0xf8);
    _objc_retain_x8();
    puVar2 = (undefined8 *)0x3;
    (*pcVar3)(3,2);
    _objc_release_x20();
    FUN_100032230();
    pcVar3 = *(code **)((*(ulong *)puVar1 & *(ulong *)*puVar2) + 200);
    _objc_retain_x8();
    (*pcVar3)(0x15);
    _objc_release_x20();
  }
  return;
}



/* Entry: 100013aa0; end: 100013b5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013aa0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  
  FUN_100013074(0);
  _objc_allocWithZone();
  lVar4 = 0x1a6;
  FUN_100012688(0x1a6,0);
  *(long *)(unaff_x20 + 0x10) = lVar4;
  puVar5 = &UNK_1000514f0;
  _swift_allocObject(&UNK_1000514f0,0x18,7);
  _swift_weakInit(puVar5 + 0x10);
  puVar1 = (undefined8 *)(lVar4 + _DAT_10005f5d0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_100013d18;
  puVar1[1] = puVar5;
  _objc_retain_x20();
  _swift_retain(puVar5);
  func_0x0001000130a4(uVar2,uVar3);
  _swift_release(puVar5);
  _objc_release_x20();
  return;
}



/* Entry: 100013b60; end: 100013c13;  */

void FUN_100013b60(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  puVar2 = (undefined8 *)(param_1 + 0x10);
  _swift_weakLoadStrong();
  if (puVar2 != (undefined8 *)0x0) {
    _swift_release();
    FUN_10002e6c4();
    puVar1 = PTR__swift_isaMask_100050d38;
    pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*puVar2) + 0xf8);
    _objc_retain_x8();
    puVar2 = (undefined8 *)0x3;
    (*pcVar3)(3,1);
    _objc_release_x20();
    FUN_100032230();
    pcVar3 = *(code **)((*(ulong *)puVar1 & *(ulong *)*puVar2) + 200);
    _objc_retain_x8();
    (*pcVar3)(0x14);
    _objc_release_x20();
  }
  return;
}



/* Entry: 100013c14; end: 100013ca7; -[_TtC28SnapchatCaptureExtension_lib31LockedCameraToolbarFeatureMusic onButtonTap] */

void FUN_100013c14(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  FUN_10002e6c4();
  puVar1 = PTR__swift_isaMask_100050d38;
  pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*param_1) + 0xf8);
  _objc_retain_x8();
  puVar2 = (undefined8 *)0x3;
  (*pcVar3)(3,1);
  _objc_release_x20();
  FUN_100032230();
  pcVar3 = *(code **)((*(ulong *)puVar1 & *(ulong *)*puVar2) + 200);
  _objc_retain_x8();
  (*pcVar3)(0x14,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(puVar2);
  return;
}



/* Entry: 100013ca8; end: 100013ceb;  */

void FUN_100013ca8(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_100050c90)();
  return;
}



/* Entry: 100013cec; end: 100013cf3;  */

void FUN_100013cec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010003b380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_100050930)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100013cf4; end: 100013d17;  */

void FUN_100013cf4(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100013d18; end: 100013d1f;  */

void FUN_100013d18(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long unaff_x20;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  puVar2 = (undefined8 *)(unaff_x20 + 0x10);
  _swift_weakLoadStrong();
  if (puVar2 != (undefined8 *)0x0) {
    _swift_release();
    FUN_10002e6c4();
    puVar1 = PTR__swift_isaMask_100050d38;
    pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*puVar2) + 0xf8);
    _objc_retain_x8();
    puVar2 = (undefined8 *)0x3;
    (*pcVar3)(3,1);
    _objc_release_x20();
    FUN_100032230();
    pcVar3 = *(code **)((*(ulong *)puVar1 & *(ulong *)*puVar2) + 200);
    _objc_retain_x8();
    (*pcVar3)(0x14);
    _objc_release_x20();
  }
  return;
}



/* Entry: 100013d20; end: 100013dbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100013d20(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_10005fa70;
  lVar2 = *(long *)(unaff_x20 + _DAT_10005fa70);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = 0x10005fba0;
    FUN_100011744(0x10005fba0,&UNK_100040c80);
    _swift_allocObject();
    *(undefined8 *)(lVar3 + 0x18) = 5;
    *(undefined8 *)(lVar3 + 0x10) = 2;
    lVar2 = lVar3;
    FUN_100013dbc();
    *(long *)(lVar3 + 0x20) = lVar2;
    func_0x000100013dd0();
    *(long *)(lVar3 + 0x28) = lVar2;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    _swift_retain(lVar3);
    _swift_bridgeObjectRelease(uVar4);
    lVar2 = 0;
  }
  _swift_bridgeObjectRetain(lVar2);
  return lVar3;
}



/* Entry: 100013dbc; end: 100013de3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100013dbc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = _DAT_10005fa78;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_10005fa78);
  puVar2 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___AVCapturePhotoOutput_100050708;
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



/* Entry: 100013de4; end: 100013fcf;  */

long FUN_100013de4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *param_1;
  lVar2 = *(long *)(unaff_x20 + lVar3);
  lVar1 = lVar2;
  if (lVar2 == 0) {
    lVar1 = *param_2;
    _objc_allocWithZone();
    func_0x00010003c1e0();
    *(long *)(unaff_x20 + lVar3) = lVar1;
    _objc_retain();
    _objc_release_x21();
    lVar2 = 0;
  }
  _objc_retain_x8(lVar2);
  return lVar1;
}



/* Entry: 100013fd0; end: 10001415b;  */

void FUN_100013fd0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x10005fb98;
  FUN_100011744(0x10005fb98,&UNK_100040f90);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  puVar2 = (undefined8 *)(param_1 + 0x10);
  _swift_unknownObjectWeakLoadStrong();
  if (puVar2 != (undefined8 *)0x0) {
    FUN_100033a54();
    pcVar8 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*puVar2) + 0xb8);
    _objc_retain_x8();
    (*pcVar8)(puVar6);
    _objc_release_x20();
    puVar3 = puVar6;
    (**(code **)(lVar7 + 0x30))(puVar6,1,lVar1);
    if ((int)puVar3 == 1) {
      _objc_release_x23();
      FUN_100014500(puVar6);
    }
    else {
      lVar4 = lVar5;
      (**(code **)(lVar7 + 0x20))(lVar5,puVar6,lVar1);
      func_0x000100013dd0();
      __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
      func_0x00010003d640(lVar4);
      _objc_release_x23();
      _objc_release_x22();
      _objc_release_x20();
      (**(code **)(lVar7 + 8))(lVar5,lVar1);
    }
  }
  return;
}



/* Entry: 10001415c; end: 100014257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001415c(void)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_10005fa90);
  func_0x00010003c6c0(uVar5);
  lVar2 = _DAT_10005fa98;
  cVar1 = *(char *)(unaff_x20 + _DAT_10005fa98);
  func_0x00010003d7c0(uVar5);
  if (cVar1 == '\x01') {
    func_0x00010003c6c0(uVar5);
    *(undefined1 *)(unaff_x20 + lVar2) = 0;
    func_0x00010003d7c0(uVar5);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_10005fa88);
    puVar3 = &UNK_100051598;
    _swift_allocObject(&UNK_100051598,0x18,7);
    _swift_unknownObjectWeakInit(puVar3 + 0x10);
    uStack_40 = 0x100014a94;
    puStack_60 = PTR___NSConcreteStackBlock_100050768;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_1000272d0;
    puStack_48 = &UNK_1000515b0;
    puStack_38 = puVar3;
    __Block_copy(&puStack_60);
    _swift_release(puStack_38);
    func_0x00010003c820(uVar5);
    __Block_release(ppuVar4);
  }
  return;
}



/* Entry: 100014258; end: 1000142b3;  */

void FUN_100014258(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x000100013dd0();
    func_0x00010003d6c0();
    _objc_release_x20();
    _objc_release_x19();
  }
  return;
}



/* Entry: 1000142b4; end: 10001430f; -[_TtC28SnapchatCaptureExtension_lib26LockedCameraCaptureHandler init] */

void FUN_1000142b4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapchatCaptureExtension_lib.LockedCameraCaptureHandler",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000142e0);
  (*pcVar1)();
}



/* Entry: 100014310; end: 1000143a7; -[_TtC28SnapchatCaptureExtension_lib26LockedCameraCaptureHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014310(long param_1)

{
  FUN_100014a9c(param_1 + _DAT_10005fa60);
  FUN_100014a9c(param_1 + _DAT_10005fa68);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_10005fa70));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005fa78));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005fa80));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005fa88));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005fa90));
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_10005faa0));
  return;
}



/* Entry: 1000143a8; end: 1000143c7;  */

void FUN_1000143a8(void)

{
  _objc_opt_self(&PTR_PTR_10005bf28);
  return;
}



/* Entry: 1000143c8; end: 10001443b; -[_TtC28SnapchatCaptureExtension_lib26LockedCameraCaptureHandler captureOutput:didFinishProcessingPhoto:error:] */

void FUN_1000143c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain_x2();
  _objc_retain_x20();
  uVar1 = param_1;
  _objc_retain_x21();
  _objc_retain_x19();
  FUN_100014548(param_1);
  _objc_release_x22();
  _objc_release_x23();
  _objc_release_x20();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(uVar1);
  return;
}



/* Entry: 10001443c; end: 1000144ff; -[_TtC28SnapchatCaptureExtension_lib26LockedCameraCaptureHandler captureOutput:didFinishRecordingToOutputFileAtURL:fromConnections:error:] */

void FUN_10001443c(void)

{
  long lVar1;
  undefined8 in_x3;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar2,in_x3);
  _objc_retain_x21();
  _objc_retain_x22();
  _objc_retain_x19();
  FUN_1000148a0(puVar2);
  _objc_release_x21();
  _objc_release_x20();
  _objc_release_x19();
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 100014500; end: 100014547;  */

undefined8 FUN_100014500(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x10005fb98;
  FUN_100011744(0x10005fb98,&UNK_100040f90);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100014548; end: 10001489f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014548(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  char *pcStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar3 = 0x10005fb98;
  puVar11 = &UNK_100040f90;
  FUN_100011744(0x10005fb98,&UNK_100040f90);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&pcStack_a0 - extraout_x8;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar13 + 0x40));
  func_0x00010003bf80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != (undefined8 *)0x0) {
    lStack_98 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    puVar4 = param_1;
    _objc_release_x20();
    FUN_100033a54();
    puVar9 = PTR__swift_isaMask_100050d38;
    pcVar14 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*puVar4) + 0xb0);
    _objc_retain_x8();
    (*pcVar14)(lVar12);
    _objc_release_x20();
    lVar5 = lVar12;
    (**(code **)(lVar13 + 0x30))(lVar12,1,lVar3);
    lVar15 = lStack_98;
    if ((int)lVar5 == 1) {
      FUN_1000149a0(param_1,puVar11);
      FUN_100014500(lVar12);
    }
    else {
      (**(code **)(lVar13 + 0x20))(lStack_98,lVar12,lVar3);
      pcVar14 = *(code **)((*(ulong *)puVar9 & *(ulong *)*puVar4) + 0xc0);
      _objc_retain_x8();
      (*pcVar14)(param_1,puVar11);
      _objc_release_x20();
      pcVar1 = (char *)(unaff_x20 + _DAT_10005fa60);
      pcVar6 = pcVar1;
      _swift_unknownObjectWeakLoadStrong();
      if (pcVar6 != (char *)0x0) {
        puVar7 = PTR__OBJC_CLASS___UIImage_100050440;
        pcStack_a0 = pcVar6;
        _objc_allocWithZone();
        func_0x0001000149e0(param_1,puVar11);
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_1,puVar11);
        func_0x00010003c2c0();
        _objc_release_x25();
        puVar4 = param_1;
        FUN_1000149a0(param_1,puVar11);
        pcVar6 = pcStack_a0;
        if (puVar7 != (undefined *)0x0) {
          _objc_retain_x20();
          puVar8 = puVar4;
          FUN_10002e6c4();
          pcVar14 = *(code **)((*(ulong *)puVar9 & *(ulong *)*puVar8) + 0xf8);
          _objc_retain_x8();
          (*pcVar14)(1,0);
          _objc_release_x20();
          pcVar6 = "didCapturePhoto(_:savedToURL:error:)";
          func_0x00010003a450("didCapturePhoto(_:savedToURL:error:)");
          _objc_retainAutoreleasedReturnValue();
          puVar9 = &UNK_100051520;
          _swift_allocObject(&UNK_100051520,0x18,7);
          pcVar2 = pcStack_a0;
          _swift_unknownObjectWeakInit(puVar9 + 0x10,pcStack_a0);
          puVar7 = &UNK_100051548;
          _swift_allocObject(&UNK_100051548,0x20,7);
          *(undefined **)(puVar7 + 0x10) = puVar9;
          *(undefined8 **)(puVar7 + 0x18) = puVar4;
          pcStack_70 = FUN_100014a70;
          puStack_90 = PTR___NSConcreteStackBlock_100050768;
          uStack_88 = 0x42000000;
          pcStack_80 = FUN_1000272d0;
          puStack_78 = &UNK_100051560;
          ppuVar10 = &puStack_90;
          puStack_68 = puVar7;
          __Block_copy(ppuVar10);
          puVar9 = puStack_68;
          _objc_retain_x25();
          lVar15 = lStack_98;
          _swift_release(puVar9);
          func_0x00010003c820(pcVar6);
          __Block_release(ppuVar10);
          _swift_unknownObjectRelease(pcVar2);
          _objc_release_x25();
          _objc_release_x25();
        }
        _swift_unknownObjectRelease(pcVar6);
      }
      FUN_1000149a0(param_1,puVar11);
      (**(code **)(lVar13 + 8))(lVar15,lVar3);
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      _swift_unknownObjectWeakAssign(pcVar1,0);
    }
  }
  return;
}



/* Entry: 1000148a0; end: 10001499f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000148a0(void)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  code *pcVar6;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_10005fa68);
  puVar3 = puVar1;
  _swift_unknownObjectWeakLoadStrong();
  if (puVar3 == (undefined8 *)0x0) {
    FUN_100033a54();
    pcVar6 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*puVar3) + 0xd0);
    _objc_retain_x8();
    (*pcVar6)();
  }
  else {
    puVar4 = PTR__OBJC_CLASS___AVURLAsset_100050738;
    _objc_allocWithZone(PTR__OBJC_CLASS___AVURLAsset_100050738);
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    func_0x00010003c440(puVar4);
    _objc_release_x20();
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_10005faa0);
    func_0x00010003c6c0(uVar5);
    uVar2 = *(undefined1 *)(unaff_x20 + _DAT_10005faa8);
    func_0x00010003d7c0(uVar5);
    FUN_10002690c(puVar4,uVar2);
    _swift_unknownObjectRelease(puVar3);
  }
  _objc_release_x23();
  puVar1[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010003b608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_100050d80)(puVar1,0);
  return;
}



/* Entry: 1000149a0; end: 100014a1f;  */

void FUN_1000149a0(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release();
  }
                    /* WARNING: Could not recover jumptable at 0x00010003b584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100050d48)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 100014a20; end: 100014a6f;  */

void FUN_100014a20(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100014a70; end: 100014a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014a70(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    lVar9 = *(long *)(lVar3 + _DAT_1000603c8);
    func_0x00010001a5a8();
    lVar2 = _DAT_10005ff48;
    uVar8 = *(undefined8 *)(lVar9 + _DAT_10005ff48);
    _swift_retain(uVar8);
    __s11SwiftSCLock4LockC4lockyyF();
    _swift_release(uVar8);
    uVar10 = *(undefined8 *)(lVar9 + _DAT_10005ff50);
    uVar8 = *(undefined8 *)(lVar9 + lVar2);
    _objc_retain_x24();
    _swift_retain(uVar8);
    __s11SwiftSCLock4LockC6unlockyyF();
    _swift_release(uVar8);
    pcVar4 = "reset(_:)";
    func_0x00010003a450("reset(_:)");
    _objc_retainAutoreleasedReturnValue();
    puVar5 = &UNK_100052530;
    _swift_allocObject(&UNK_100052530,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10,lVar3);
    puVar6 = &UNK_1000525a8;
    _swift_allocObject(&UNK_1000525a8,0x20,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = uVar10;
    uStack_78 = 0x100026f08;
    puStack_98 = PTR___NSConcreteStackBlock_100050768;
    uStack_90 = 0x42000000;
    pcStack_88 = FUN_1000272d0;
    puStack_80 = &UNK_1000525c0;
    ppuVar7 = &puStack_98;
    puStack_70 = puVar6;
    __Block_copy(ppuVar7);
    puVar5 = puStack_70;
    _objc_retain_x22();
    _swift_release(puVar5);
    func_0x00010003c820(pcVar4);
    __Block_release(ppuVar7);
    _objc_release_x21();
    _objc_release_x22();
    _swift_unknownObjectRelease(pcVar4);
    uVar10 = 0;
    FUN_100028634(0);
    _objc_allocWithZone();
    uVar8 = uVar10;
    _objc_retain_x25();
    _objc_retain_x19();
    FUN_100026820(uVar1,0,uVar8,uVar10);
    func_0x00010003c940(uVar8);
    _objc_release_x21();
    _objc_release_x19();
  }
  return;
}



/* Entry: 100014a9c; end: 100014abf;  */

undefined8 FUN_100014a9c(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 100014ac0; end: 100014acb;  */

void FUN_100014ac0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010003b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_100050d50)(uVar1);
  return;
}



/* Entry: 100014acc; end: 100014b9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100014acc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_10005fc20;
  puVar4 = *(undefined **)(unaff_x20 + _DAT_10005fc20);
  puVar3 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIView_1000504b8;
    _objc_allocWithZone();
    func_0x00010003c340(0,0,0,0);
    func_0x00010003d440();
    puVar2 = PTR__OBJC_CLASS___UIColor_100050430;
    _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
    func_0x00010003d8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bc80(0x3feccccccccccccd);
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x21();
    puVar3 = puVar4;
    func_0x00010003cc60(puVar4,param_2,puVar2);
    _objc_release_x22();
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    _objc_retain_x19();
    _objc_release_x21();
    puVar4 = (undefined *)0x0;
  }
  _objc_retain_x8(puVar4);
  return puVar3;
}



/* Entry: 100014ba0; end: 100014cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014ba0(long param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  if (param_1 != 0) {
    lVar4 = *(long *)(param_1 + _DAT_10005fe08);
    _objc_retain();
    if (lVar4 == 1) {
      func_0x000100018a6c(1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_1000508c0)(param_1);
      return;
    }
    pcVar1 = "didStartRecording(withDevice:)";
    func_0x00010003a450("didStartRecording(withDevice:)");
    _objc_retainAutoreleasedReturnValue();
    puVar2 = &UNK_1000515e8;
    _swift_allocObject(&UNK_1000515e8,0x18,7);
    _swift_unknownObjectWeakInit(puVar2 + 0x10,param_2);
    pcStack_40 = FUN_100015428;
    puStack_60 = PTR___NSConcreteStackBlock_100050768;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_1000272d0;
    puStack_48 = &UNK_100051600;
    ppuVar3 = &puStack_60;
    puStack_38 = puVar2;
    __Block_copy(ppuVar3);
    _swift_release(puStack_38);
    func_0x00010003c820(pcVar1);
    _objc_release(param_1);
    __Block_release(ppuVar3);
    _swift_unknownObjectRelease(pcVar1);
  }
  return;
}



/* Entry: 100014cc4; end: 100015213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014cc4(long param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  
  _swift_beginAccess(param_1 + 0x10,auStack_a0,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    puVar7 = PTR__OBJC_CLASS___UIApplication_100050410;
    _objc_opt_self();
    func_0x00010003d540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x20();
    uVar4 = 0;
    FUN_1000154a8(0,0x10005fc50,&PTR__OBJC_CLASS___UIScene_100050488);
    uVar6 = uVar4;
    FUN_10001544c();
    __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(puVar7,uVar4,uVar6);
    _objc_release_x21();
    if (((ulong)puVar7 & 0xc000000000000001) == 0) {
      uVar8 = -1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
      puVar12 = (ulong *)(puVar7 + 0x38);
      uVar10 = ~uVar8;
      uVar8 = -uVar8;
      uVar9 = 0xffffffffffffffff;
      if (uVar8 < 0x40) {
        uVar9 = ~(-1L << (uVar8 & 0x3f));
      }
      uVar9 = uVar9 & *puVar12;
      puVar5 = puVar7;
      _swift_bridgeObjectRetain();
      lVar14 = 0;
      puVar13 = puVar7;
    }
    else {
      puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar7) {
        puVar5 = puVar7;
      }
      _swift_bridgeObjectRetain(puVar7);
      __ss10__CocoaSetV12makeIteratorAB0D0CyF();
      __sSh8IteratorV6_cocoaAByx_Gs10__CocoaSetVAACn_tcfC(&puStack_88);
      uVar10 = uStack_78;
      puVar12 = puStack_80;
      uVar9 = uStack_68;
      puVar13 = puStack_88;
      lVar14 = lStack_70;
    }
    lVar2 = lVar14;
    uVar8 = uVar9;
    if ((long)puVar13 < 0) goto LAB_100014e64;
    while( true ) {
      while (uVar9 != 0) {
        uVar1 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 - 1 & uVar9;
        puVar11 = *(undefined **)
                   (*(long *)(puVar13 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                   lVar2 * 0x200);
        puStack_a8 = puVar11;
        _objc_retain_x21();
        lVar15 = lVar14;
        while( true ) {
          lVar14 = lVar2;
          if (puVar11 == (undefined *)0x0) goto LAB_100014ecc;
          puVar5 = puVar11;
          func_0x00010003b720();
          if (puVar5 == (undefined *)0x0) {
            FUN_1000154a0(puVar13,puVar12,uVar10,lVar15,uVar8);
            _swift_bridgeObjectRelease(puVar7);
            puVar7 = PTR__OBJC_CLASS___UIWindowScene_1000504d8;
            _objc_opt_self(PTR__OBJC_CLASS___UIWindowScene_1000504d8);
            _swift_dynamicCastObjCClass(puVar11,puVar7);
            if (puVar11 != (undefined *)0x0) {
              func_0x00010003d920();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = 0;
              FUN_1000154a8(0,0x10005fc60,&PTR__OBJC_CLASS___UIWindow_1000504d0);
              __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
                        (puVar11,uVar6);
              _objc_release_x22();
              if ((ulong)puVar11 >> 0x3e == 0) {
                puVar7 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar7 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar11) {
                  puVar7 = puVar11;
                }
                __ss18_CocoaArrayWrapperV8endIndexSivg();
              }
              if (puVar7 != (undefined *)0x0) {
                if (((ulong)puVar11 & 0xc000000000000001) == 0) {
                  if (*(long *)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x100015214);
                    (*pcVar3)();
                  }
                  _objc_retain_x8(*(undefined8 *)(puVar11 + 0x20));
                }
                else {
                  __ss12_ArrayBufferV19_getElementSlowPathyyXlSiFyXl_Ts5(0,puVar11);
                }
                _swift_bridgeObjectRelease(puVar11);
                _objc_retain_x22();
                _objc_retain();
                _objc_retain();
                _objc_retain();
                FUN_100014acc();
                func_0x00010003b8e0(puVar11);
                _objc_release_x19();
                puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
                _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
                lVar14 = 0x10005fba0;
                FUN_100011744(0x10005fba0,&UNK_100040c80);
                _swift_allocObject();
                *(undefined8 *)(lVar14 + 0x18) = 9;
                *(undefined8 *)(lVar14 + 0x10) = 4;
                lVar2 = _DAT_10005fc20;
                uVar6 = *(undefined8 *)(param_1 + _DAT_10005fc20);
                func_0x00010003d720();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010003d720(puVar11);
                _objc_retainAutoreleasedReturnValue();
                _objc_release_x22();
                func_0x00010003bd20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release_x25();
                _objc_release_x26();
                *(undefined8 *)(lVar14 + 0x20) = uVar6;
                uVar6 = *(undefined8 *)(param_1 + lVar2);
                func_0x00010003cae0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010003cae0(puVar11);
                _objc_retainAutoreleasedReturnValue();
                _objc_release_x22();
                func_0x00010003bd20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release_x25();
                _objc_release_x26();
                *(undefined8 *)(lVar14 + 0x28) = uVar6;
                uVar6 = *(undefined8 *)(param_1 + lVar2);
                func_0x00010003c660();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010003c660(puVar11);
                _objc_retainAutoreleasedReturnValue();
                _objc_release_x22();
                func_0x00010003bd20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release_x25();
                _objc_release_x26();
                *(undefined8 *)(lVar14 + 0x30) = uVar6;
                uVar6 = *(undefined8 *)(param_1 + lVar2);
                func_0x00010003bb40();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010003bb40(puVar11);
                _objc_retainAutoreleasedReturnValue();
                _objc_release_x22();
                func_0x00010003bd20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release_x25();
                _objc_release_x26();
                *(undefined8 *)(lVar14 + 0x38) = uVar6;
                uVar6 = 0;
                FUN_1000154a8(0,0x100060340,&PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
                __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar14,uVar6);
                _swift_release(lVar14);
                func_0x00010003b700(puVar7);
                _objc_release_x21();
                _objc_release_x22();
                _objc_release_x23();
                _objc_release_x20();
                return;
              }
              _swift_bridgeObjectRelease(puVar11);
            }
            _objc_release_x8(param_1);
            _objc_release_x21();
            return;
          }
          _objc_release_x21();
          lVar2 = lVar14;
          uVar8 = uVar9;
          if (-1 < (long)puVar13) break;
LAB_100014e64:
          __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
          if (puVar5 == (undefined *)0x0) goto LAB_100014ec8;
          puStack_b0 = puVar5;
          _swift_dynamicCast(&puStack_a8,&puStack_b0,PTR___syXlN_100050c38 + 8,uVar4,7);
          puVar11 = puStack_a8;
          lVar2 = lVar14;
          lVar15 = lVar14;
          uVar8 = uVar9;
        }
      }
      lVar15 = lVar2 + 1;
      if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000151d4);
        (*pcVar3)();
      }
      if ((long)(uVar10 + 0x40 >> 6) <= lVar15) break;
      uVar9 = puVar12[lVar15];
      lVar2 = lVar15;
    }
    uVar9 = 0;
LAB_100014ec8:
    puStack_a8 = (undefined *)0x0;
    uVar8 = uVar9;
    lVar15 = lVar14;
LAB_100014ecc:
    _objc_release_x8(param_1);
    FUN_1000154a0(puVar13,puVar12,uVar10,lVar15,uVar8);
    _swift_bridgeObjectRelease(puVar7);
  }
  return;
}



/* Entry: 100015214; end: 1000152f3;  */

void FUN_100015214(long param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  if (param_1 != 0) {
    func_0x000100018a6c(0);
  }
  pcVar1 = "didStopRecording(withDevice:)";
  func_0x00010003a450("didStopRecording(withDevice:)");
  _objc_retainAutoreleasedReturnValue();
  puVar2 = &UNK_1000515e8;
  _swift_allocObject(&UNK_1000515e8,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10,param_2);
  pcStack_40 = FUN_1000154e8;
  puStack_60 = PTR___NSConcreteStackBlock_100050768;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1000272d0;
  puStack_48 = &UNK_100051628;
  puStack_38 = puVar2;
  __Block_copy(&puStack_60);
  _swift_release(puStack_38);
  func_0x00010003c820(pcVar1);
  __Block_release(ppuVar3);
  _swift_unknownObjectRelease(pcVar1);
  return;
}



/* Entry: 1000152f4; end: 10001534f;  */

void FUN_1000152f4(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_100014acc();
    func_0x00010003ca00();
    _objc_release_x20();
    _objc_release_x19();
  }
  return;
}



/* Entry: 100015350; end: 1000153ab; -[_TtC28SnapchatCaptureExtension_lib24LockedCameraFlashHandler init] */

void FUN_100015350(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapchatCaptureExtension_lib.LockedCameraFlashHandler",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001537c);
  (*pcVar1)();
}



/* Entry: 1000153ac; end: 1000153e3; -[_TtC28SnapchatCaptureExtension_lib24LockedCameraFlashHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000153ac(long param_1)

{
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005fc18));
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_10005fc20));
  return;
}



/* Entry: 1000153e4; end: 100015427;  */

void FUN_1000153e4(void)

{
  _objc_opt_self(&PTR_PTR_10005c128);
  return;
}



/* Entry: 100015428; end: 10001544b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100015428(void)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  undefined *puVar12;
  ulong *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_a0,0,0);
  lVar4 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 != 0) {
    puVar8 = PTR__OBJC_CLASS___UIApplication_100050410;
    _objc_opt_self();
    func_0x00010003d540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x20();
    uVar5 = 0;
    FUN_1000154a8(0,0x10005fc50,&PTR__OBJC_CLASS___UIScene_100050488);
    uVar7 = uVar5;
    FUN_10001544c();
    __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(puVar8,uVar5,uVar7);
    _objc_release_x21();
    if (((ulong)puVar8 & 0xc000000000000001) == 0) {
      uVar9 = -1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
      puVar13 = (ulong *)(puVar8 + 0x38);
      uVar11 = ~uVar9;
      uVar9 = -uVar9;
      uVar10 = 0xffffffffffffffff;
      if (uVar9 < 0x40) {
        uVar10 = ~(-1L << (uVar9 & 0x3f));
      }
      uVar10 = uVar10 & *puVar13;
      puVar6 = puVar8;
      _swift_bridgeObjectRetain();
      lVar15 = 0;
      puVar14 = puVar8;
    }
    else {
      puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar8) {
        puVar6 = puVar8;
      }
      _swift_bridgeObjectRetain(puVar8);
      __ss10__CocoaSetV12makeIteratorAB0D0CyF();
      __sSh8IteratorV6_cocoaAByx_Gs10__CocoaSetVAACn_tcfC(&puStack_88);
      uVar11 = uStack_78;
      puVar13 = puStack_80;
      uVar10 = uStack_68;
      puVar14 = puStack_88;
      lVar15 = lStack_70;
    }
    lVar2 = lVar15;
    uVar9 = uVar10;
    if ((long)puVar14 < 0) goto LAB_100014e64;
    while( true ) {
      while (uVar10 != 0) {
        uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 - 1 & uVar10;
        puVar12 = *(undefined **)
                   (*(long *)(puVar14 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                   lVar2 * 0x200);
        puStack_a8 = puVar12;
        _objc_retain_x21();
        lVar16 = lVar15;
        while( true ) {
          lVar15 = lVar2;
          if (puVar12 == (undefined *)0x0) goto LAB_100014ecc;
          puVar6 = puVar12;
          func_0x00010003b720();
          if (puVar6 == (undefined *)0x0) {
            FUN_1000154a0(puVar14,puVar13,uVar11,lVar16,uVar9);
            _swift_bridgeObjectRelease(puVar8);
            puVar8 = PTR__OBJC_CLASS___UIWindowScene_1000504d8;
            _objc_opt_self(PTR__OBJC_CLASS___UIWindowScene_1000504d8);
            _swift_dynamicCastObjCClass(puVar12,puVar8);
            if (puVar12 != (undefined *)0x0) {
              func_0x00010003d920();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = 0;
              FUN_1000154a8(0,0x10005fc60,&PTR__OBJC_CLASS___UIWindow_1000504d0);
              __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
                        (puVar12,uVar7);
              _objc_release_x22();
              if ((ulong)puVar12 >> 0x3e == 0) {
                puVar8 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar8 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar12) {
                  puVar8 = puVar12;
                }
                __ss18_CocoaArrayWrapperV8endIndexSivg();
              }
              if (puVar8 != (undefined *)0x0) {
                if (((ulong)puVar12 & 0xc000000000000001) == 0) {
                  if (*(long *)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x100015214);
                    (*pcVar3)();
                  }
                  _objc_retain_x8(*(undefined8 *)(puVar12 + 0x20));
                }
                else {
                  __ss12_ArrayBufferV19_getElementSlowPathyyXlSiFyXl_Ts5(0,puVar12);
                }
                _swift_bridgeObjectRelease(puVar12);
                _objc_retain_x22();
                _objc_retain();
                _objc_retain();
                _objc_retain();
                FUN_100014acc();
                func_0x00010003b8e0(puVar12);
                _objc_release_x19();
                puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
                _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
                lVar15 = 0x10005fba0;
                FUN_100011744(0x10005fba0,&UNK_100040c80);
                _swift_allocObject();
                *(undefined8 *)(lVar15 + 0x18) = 9;
                *(undefined8 *)(lVar15 + 0x10) = 4;
                lVar2 = _DAT_10005fc20;
                uVar7 = *(undefined8 *)(lVar4 + _DAT_10005fc20);
                func_0x00010003d720();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010003d720(puVar12);
                _objc_retainAutoreleasedReturnValue();
                _objc_release_x22();
                func_0x00010003bd20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release_x25();
                _objc_release_x26();
                *(undefined8 *)(lVar15 + 0x20) = uVar7;
                uVar7 = *(undefined8 *)(lVar4 + lVar2);
                func_0x00010003cae0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010003cae0(puVar12);
                _objc_retainAutoreleasedReturnValue();
                _objc_release_x22();
                func_0x00010003bd20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release_x25();
                _objc_release_x26();
                *(undefined8 *)(lVar15 + 0x28) = uVar7;
                uVar7 = *(undefined8 *)(lVar4 + lVar2);
                func_0x00010003c660();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010003c660(puVar12);
                _objc_retainAutoreleasedReturnValue();
                _objc_release_x22();
                func_0x00010003bd20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release_x25();
                _objc_release_x26();
                *(undefined8 *)(lVar15 + 0x30) = uVar7;
                uVar7 = *(undefined8 *)(lVar4 + lVar2);
                func_0x00010003bb40();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010003bb40(puVar12);
                _objc_retainAutoreleasedReturnValue();
                _objc_release_x22();
                func_0x00010003bd20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release_x25();
                _objc_release_x26();
                *(undefined8 *)(lVar15 + 0x38) = uVar7;
                uVar7 = 0;
                FUN_1000154a8(0,0x100060340,&PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
                __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar15,uVar7);
                _swift_release(lVar15);
                func_0x00010003b700(puVar8);
                _objc_release_x21();
                _objc_release_x22();
                _objc_release_x23();
                _objc_release_x20();
                return;
              }
              _swift_bridgeObjectRelease(puVar12);
            }
            _objc_release_x8(lVar4);
            _objc_release_x21();
            return;
          }
          _objc_release_x21();
          lVar2 = lVar15;
          uVar9 = uVar10;
          if (-1 < (long)puVar14) break;
LAB_100014e64:
          __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
          if (puVar6 == (undefined *)0x0) goto LAB_100014ec8;
          puStack_b0 = puVar6;
          _swift_dynamicCast(&puStack_a8,&puStack_b0,PTR___syXlN_100050c38 + 8,uVar5,7);
          puVar12 = puStack_a8;
          lVar2 = lVar15;
          lVar16 = lVar15;
          uVar9 = uVar10;
        }
      }
      lVar16 = lVar2 + 1;
      if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000151d4);
        (*pcVar3)();
      }
      if ((long)(uVar11 + 0x40 >> 6) <= lVar16) break;
      uVar10 = puVar13[lVar16];
      lVar2 = lVar16;
    }
    uVar10 = 0;
LAB_100014ec8:
    puStack_a8 = (undefined *)0x0;
    uVar9 = uVar10;
    lVar16 = lVar15;
LAB_100014ecc:
    _objc_release_x8(lVar4);
    FUN_1000154a0(puVar14,puVar13,uVar11,lVar16,uVar9);
    _swift_bridgeObjectRelease(puVar8);
  }
  return;
}



/* Entry: 10001544c; end: 10001549f;  */

void FUN_10001544c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000010005fc58 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1000154a8(0xff,0x10005fc50,&PTR__OBJC_CLASS___UIScene_100050488);
  puVar2 = PTR___sSo8NSObjectCSH10ObjectiveCMc_100050e08;
  _swift_getWitnessTable(PTR___sSo8NSObjectCSH10ObjectiveCMc_100050e08,uVar1);
  puRam000000010005fc58 = puVar2;
  return;
}



/* Entry: 1000154a0; end: 1000154a7;  */

void FUN_1000154a0(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003b584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100050d48)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 1000154a8; end: 1000154e7;  */

void FUN_1000154a8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 1000154e8; end: 1000154f7;  */

void FUN_1000154e8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    FUN_100014acc();
    func_0x00010003ca00();
    _objc_release_x20();
    _objc_release_x19();
  }
  return;
}



/* Entry: 1000154f8; end: 10001572f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000154f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  func_0x00010003d880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c680(param_5);
  uVar5 = param_1;
  uVar7 = param_2;
  _objc_release_x23();
  func_0x00010003c680(param_5);
  lVar1 = param_6;
  func_0x00010003d8e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010003d900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x23();
    if (lVar1 != 0) {
      func_0x00010003cb60(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release_x22();
      func_0x00010003bfc0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release_x23();
      func_0x00010003bb60(lVar1);
      _swift_unknownObjectRelease(lVar1);
      goto LAB_1000155f4;
    }
  }
  func_0x00010003bb60(param_6);
LAB_1000155f4:
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_10005fc68);
  puVar2 = &UNK_100051660;
  _swift_allocObject(&UNK_100051660,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10);
  puVar3 = &UNK_100051688;
  _swift_allocObject(&UNK_100051688,0x40,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_7;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  *(undefined8 *)(puVar3 + 0x28) = uVar7;
  *(undefined8 *)(puVar3 + 0x30) = param_3;
  *(undefined8 *)(puVar3 + 0x38) = param_4;
  pcStack_80 = FUN_1000158c8;
  puStack_a0 = PTR___NSConcreteStackBlock_100050768;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1000272d0;
  puStack_88 = &UNK_1000516a0;
  puStack_78 = puVar3;
  __Block_copy(&puStack_a0);
  puVar2 = puStack_78;
  _objc_retain_x20();
  _swift_release(puVar2);
  func_0x00010003c820(uVar6);
  __Block_release(ppuVar4);
  uVar5 = 0;
  FUN_100016e08(0);
  _objc_allocWithZone();
  func_0x00010003c340(0,0,0x404b800000000000,0x404b800000000000);
  func_0x00010003b8e0(param_6);
  func_0x00010003cd00(param_1,param_2,uVar5);
  FUN_100015d74(0,FUN_1000157e8,0);
  _objc_release_x20();
  return;
}



/* Entry: 100015730; end: 1000157e7;  */

void FUN_100015730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_5 + 0x10,auStack_68,0,0);
  param_5 = param_5 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_5 != 0) {
    if (param_6 != 0) {
      uVar1 = *(undefined8 *)PTR__AVLayerVideoGravityResizeAspectFill_1000506b8;
      _objc_retain_x20();
      FUN_100018b50(param_1,param_2,param_3,param_4,uVar1);
      FUN_1000158f4(param_5);
      _objc_release_x19();
    }
    _objc_release_x19();
  }
  return;
}



/* Entry: 1000157e8; end: 1000157eb;  */

void FUN_1000157e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ca10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000508a0)(param_1,PTR_s_removeFromSuperview_10005b750);
  return;
}



/* Entry: 1000157ec; end: 100015847; -[_TtC28SnapchatCaptureExtension_lib24LockedCameraFocusHandler init] */

void FUN_1000157ec(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapchatCaptureExtension_lib.LockedCameraFocusHandler",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100015818);
  (*pcVar1)();
}



/* Entry: 100015848; end: 100015857; -[_TtC28SnapchatCaptureExtension_lib24LockedCameraFocusHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100015848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_10005fc68));
  return;
}



/* Entry: 100015858; end: 1000158c7;  */

void FUN_100015858(void)

{
  _objc_opt_self(&PTR_PTR_10005c238);
  return;
}



/* Entry: 1000158c8; end: 1000158f3;  */

void FUN_1000158c8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  _swift_beginAccess(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)PTR__AVLayerVideoGravityResizeAspectFill_1000506b8;
      _objc_retain_x20();
      FUN_100018b50(uVar4,uVar5,uVar6,uVar7,uVar3);
      FUN_1000158f4(lVar2);
      _objc_release_x19();
    }
    _objc_release_x19();
  }
  return;
}



/* Entry: 1000158f4; end: 100015987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000158f4(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar2 = *(undefined8 *)(param_3 + _DAT_10005fdf8);
  uVar1 = uVar2;
  func_0x00010003c4e0();
  if ((int)uVar1 != 0) {
    dVar3 = 1.0 - param_2;
    if (*(long *)(param_3 + _DAT_10005fe08) != 2) {
      dVar3 = param_2;
    }
    uVar1 = uVar2;
    func_0x00010003c560(uVar2,param_4,1);
    if (((int)uVar1 != 0) && (func_0x00010003c580(), (int)uVar2 != 0)) {
      func_0x0001000188dc(param_1,dVar3);
      FUN_1000189ac(1);
    }
  }
  return;
}



/* Entry: 100015988; end: 1000159f7; -[_TtC28SnapchatCaptureExtension_lib33LockedCameraFocusTapAnimationView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100015988(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_10005fc98) = 0;
  *(undefined8 *)(param_1 + _DAT_10005fca0) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004bd50,
             "SnapchatCaptureExtension_lib/LockedCameraFocusTapAnimationView.swift",0x44,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000159f8);
  (*pcVar1)();
}



/* Entry: 1000159f8; end: 100015d53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1000159f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffff80;
  *(undefined8 *)(unaff_x20 + _DAT_10005fc98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_10005fca0) = 0;
  FUN_100016e08();
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__10005b5a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00010003d460();
  puVar4 = PTR__OBJC_CLASS___CALayer_100050620;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  lVar1 = _DAT_10005fc98;
  *(undefined **)(puVar3 + _DAT_10005fc98) = puVar4;
  _objc_retain();
  _objc_release_x20();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100015d20);
    (*pcVar2)();
  }
  puVar5 = PTR__OBJC_CLASS___UIColor_100050430;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
  func_0x00010003d8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003b680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  func_0x00010003cca0(puVar4);
  _objc_release_x21();
  _objc_release_x23();
  lVar6 = *(long *)(puVar3 + lVar1);
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100015d24);
    (*pcVar2)();
  }
  func_0x00010003ccc0(0x3ff0000000000000);
  if (*(long *)(puVar3 + lVar1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100015d28);
    (*pcVar2)();
  }
  _objc_retain_x8();
  func_0x00010003bb00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003b680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  func_0x00010003d220(lVar6);
  _objc_release_x21();
  _objc_release_x23();
  if (*(long *)(puVar3 + lVar1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100015d2c);
    (*pcVar2)();
  }
  func_0x00010003d260(0x3ecccccd);
  if (*(long *)(puVar3 + lVar1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100015d30);
    (*pcVar2)();
  }
  func_0x00010003d240(0x3fe0000000000000,0x3fe0000000000000);
  lVar6 = *(long *)(puVar3 + lVar1);
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100015d34);
    (*pcVar2)();
  }
  func_0x00010003d0e0(0);
  if (*(long *)(puVar3 + lVar1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100015d38);
    (*pcVar2)();
  }
  _objc_retain_x8();
  func_0x00010003bb60(puVar3);
  func_0x00010003cf00(lVar6);
  _objc_release_x21();
  if (*(long *)(puVar3 + lVar1) != 0) {
    _objc_retain_x8();
    func_0x00010003bb60();
    _CGRectGetMidX();
    func_0x00010003cd60(lVar6);
    _objc_release_x21();
    func_0x00010003c640(puVar3);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(puVar3 + lVar1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100015d40);
      (*pcVar2)();
    }
    func_0x00010003b8c0();
    _objc_release_x21();
    puVar4 = PTR__OBJC_CLASS___CALayer_100050620;
    _objc_allocWithZone();
    func_0x00010003c1e0();
    lVar1 = _DAT_10005fca0;
    *(undefined **)(puVar3 + _DAT_10005fca0) = puVar4;
    _objc_retain();
    _objc_release_x22();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100015d44);
      (*pcVar2)();
    }
    func_0x00010003d8a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003b680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x20();
    func_0x00010003cc60(puVar4);
    _objc_release_x21();
    _objc_release_x22();
    lVar6 = *(long *)(puVar3 + lVar1);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100015d48);
      (*pcVar2)();
    }
    func_0x00010003d0e0(0);
    if (*(long *)(puVar3 + lVar1) != 0) {
      _objc_retain_x8();
      func_0x00010003bb60(puVar3);
      _CGRectInset();
      func_0x00010003cf00(lVar6);
      _objc_release_x20();
      if (*(long *)(puVar3 + lVar1) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100015d50);
        (*pcVar2)();
      }
      _objc_retain_x8();
      func_0x00010003bb60();
      _CGRectGetMidX();
      func_0x00010003cd60(lVar6);
      _objc_release_x20();
      puVar7 = puVar3;
      func_0x00010003c640(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release_x19();
      if (*(long *)(puVar3 + lVar1) != 0) {
        func_0x00010003b8c0(puVar7);
        _objc_release_x19();
        _objc_release_x20();
        return puVar3;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100015d54);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100015d4c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100015d3c);
  (*pcVar2)();
}



/* Entry: 100015d54; end: 100015d73; -[_TtC28SnapchatCaptureExtension_lib33LockedCameraFocusTapAnimationView initWithFrame:] */

void FUN_100015d54(void)

{
  FUN_1000159f8();
  return;
}



/* Entry: 100015d74; end: 100015e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100015d74(uint param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  if (*(long *)(unaff_x20 + _DAT_10005fc98) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100015e9c);
    (*pcVar1)();
  }
  func_0x00010003c9a0();
  if (*(long *)(unaff_x20 + _DAT_10005fca0) != 0) {
    func_0x00010003c9a0();
    puVar2 = PTR__OBJC_CLASS___CATransaction_100050638;
    _objc_opt_self(PTR__OBJC_CLASS___CATransaction_100050638);
    func_0x00010003ba40();
    puVar3 = &UNK_100051758;
    _swift_allocObject(&UNK_100051758,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    *(long *)(puVar3 + 0x20) = unaff_x20;
    pcStack_50 = FUN_1000170ac;
    puStack_70 = PTR___NSConcreteStackBlock_100050768;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_1000272d0;
    puStack_58 = &UNK_100051770;
    puStack_48 = puVar3;
    __Block_copy(&puStack_70);
    puVar3 = puStack_48;
    _swift_retain(param_3);
    _objc_retain_x20();
    _swift_release(puVar3);
    func_0x00010003cd20(puVar2);
    __Block_release(ppuVar4);
    FUN_100015ea0(param_1 & 1);
    func_0x0001000164b4();
    func_0x00010001686c();
    FUN_100016b98();
    func_0x00010003bca0(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100015ea0);
  (*pcVar1)();
}



/* Entry: 100015ea0; end: 1000162bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100015ea0(ulong param_1)

{
  undefined **ppuVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  ppuVar1 = &PTR___ss20__StaticArrayStorageCN_100051708;
  if ((param_1 & 1) == 0) {
    ppuVar1 = &PTR___ss20__StaticArrayStorageCN_1000516c8;
  }
  lVar3 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  lVar4 = lVar3;
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x18) = 7;
  *(undefined8 *)(lVar4 + 0x10) = 3;
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_100050628;
  _objc_allocWithZone();
  func_0x00010003c280(0,0,0,0x3f800000);
  *(undefined **)(lVar4 + 0x20) = puVar5;
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_100050628;
  _objc_opt_self();
  puVar6 = puVar5;
  func_0x00010003c020();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(lVar4 + 0x28) = puVar6;
  func_0x00010003c020();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(lVar4 + 0x30) = puVar5;
  uVar9 = 0x10005fcd0;
  FUN_100016f24(0,0x10005fcd0,&PTR__OBJC_CLASS___NSExpression_1000502e0);
  puVar5 = &UNK_1000410a0;
  _swift_getKeyPath();
  __sSo12NSExpressionC10FoundationE10forKeyPathABs0dE0Cyxq_G_tcr0_lufC();
  func_0x00010003c620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  if (puVar5 == (undefined *)0x0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(uVar9);
  }
  ppuVar7 = ppuVar1;
  func_0x0001000161cc(ppuVar1);
  _swift_bridgeObjectRelease(ppuVar1);
  _swift_allocObject(lVar3,0x40,7);
  *(undefined8 *)(lVar3 + 0x18) = 9;
  *(undefined8 *)(lVar3 + 0x10) = 4;
  uVar8 = 0;
  FUN_100016f24(0,0x10005fce0,&PTR__OBJC_CLASS___NSNumber_100050308);
  uVar9 = uVar8;
  __sSo8NSNumberC10FoundationE12floatLiteralABSd_tcfC(0);
  *(undefined8 *)(lVar3 + 0x20) = uVar9;
  __sSo8NSNumberC10FoundationE12floatLiteralABSd_tcfC(0x3fc999999999999a);
  *(undefined8 *)(lVar3 + 0x28) = uVar9;
  __sSo8NSNumberC10FoundationE12floatLiteralABSd_tcfC(0x3fe999999999999a);
  *(undefined8 *)(lVar3 + 0x30) = uVar9;
  __sSo8NSNumberC10FoundationE12floatLiteralABSd_tcfC(0x3ff0000000000000);
  *(undefined8 *)(lVar3 + 0x38) = uVar9;
  puVar5 = PTR__OBJC_CLASS___CAKeyframeAnimation_100050618;
  _objc_opt_self(PTR__OBJC_CLASS___CAKeyframeAnimation_100050618);
  func_0x00010003b9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_retain_x24();
  func_0x00010003cde0(0x3feab851eb851eb9);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(ppuVar7,PTR___sypN_100050c40 + 8);
  func_0x00010003d480(puVar5);
  _objc_release_x25();
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar8);
  func_0x00010003cfa0(puVar5);
  _objc_release_x20();
  uVar9 = 0;
  FUN_100016f24(0,0x10005fce8,&PTR__OBJC_CLASS___CAMediaTimingFunction_100050628);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar9);
  func_0x00010003d3a0(puVar5);
  _objc_release_x20();
  func_0x00010003ce40(puVar5);
  func_0x00010003d1a0(puVar5);
  _swift_release(lVar4);
  _swift_bridgeObjectRelease(ppuVar7);
  _swift_release(lVar3);
  _objc_release_x24();
  if (*(long *)(unaff_x20 + _DAT_10005fc98) != 0) {
    _objc_retain_x8();
    uVar9 = 0x7974696361706f;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7974696361706f,0xe700000000000000);
    func_0x00010003b760(lVar3);
    _objc_release_x24();
    _objc_release_x19();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000508c0)(uVar9);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000161cc);
  (*pcVar2)();
}



/* Entry: 1000162c0; end: 100016b97;  */

undefined * FUN_1000162c0(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_100050c50;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_100050c50;
    FUN_100016f08(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_100050c40;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000164b4);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_100016f24(0,0x10005fcf0,&PTR__OBJC_CLASS___NSValue_100050330);
      puVar1 = PTR___sypN_100050c40;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar8;
        _objc_retain_x8();
        _swift_dynamicCast(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          FUN_100016f08(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        FUN_100016f64(auStack_88,puStack_68 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        __ss12_ArrayBufferV19_getElementSlowPathyyXlSiFyXl_Ts5(uVar7,param_1);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_100016f24(0,0x10005fcf0,&PTR__OBJC_CLASS___NSValue_100050330);
        _swift_dynamicCast(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          FUN_100016f08(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        FUN_100016f64(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 100016b98; end: 100016d9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100016b98(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
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
  
  uVar3 = 0x10005fcd0;
  FUN_100016f24(0,0x10005fcd0,&PTR__OBJC_CLASS___NSExpression_1000502e0);
  puVar2 = &UNK_100041070;
  _swift_getKeyPath();
  __sSo12NSExpressionC10FoundationE10forKeyPathABs0dE0Cyxq_G_tcr0_lufC();
  func_0x00010003c620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  if (puVar2 == (undefined *)0x0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(uVar3);
  }
  _CATransform3DMakeScale(&uStack_c0,0,0,0x3ff0000000000000);
  puVar2 = PTR__OBJC_CLASS___NSValue_100050330;
  _objc_opt_self(PTR__OBJC_CLASS___NSValue_100050330);
  func_0x00010003d800();
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = *(undefined8 *)(PTR__CATransform3DIdentity_1000505f0 + 0x48);
  uStack_80 = *(undefined8 *)(PTR__CATransform3DIdentity_1000505f0 + 0x40);
  uStack_68 = *(undefined8 *)(PTR__CATransform3DIdentity_1000505f0 + 0x58);
  uStack_70 = *(undefined8 *)(PTR__CATransform3DIdentity_1000505f0 + 0x50);
  uStack_58 = *(undefined8 *)(PTR__CATransform3DIdentity_1000505f0 + 0x68);
  uStack_60 = *(undefined8 *)(PTR__CATransform3DIdentity_1000505f0 + 0x60);
  uStack_48 = *(undefined8 *)(PTR__CATransform3DIdentity_1000505f0 + 0x78);
  uStack_50 = *(undefined8 *)(PTR__CATransform3DIdentity_1000505f0 + 0x70);
  uStack_b8 = *(undefined8 *)(PTR__CATransform3DIdentity_1000505f0 + 8);
  uStack_c0 = *(undefined8 *)PTR__CATransform3DIdentity_1000505f0;
  uStack_a8 = *(undefined8 *)(PTR__CATransform3DIdentity_1000505f0 + 0x18);
  uStack_b0 = *(undefined8 *)(PTR__CATransform3DIdentity_1000505f0 + 0x10);
  uStack_98 = *(undefined8 *)(PTR__CATransform3DIdentity_1000505f0 + 0x28);
  uStack_a0 = *(undefined8 *)(PTR__CATransform3DIdentity_1000505f0 + 0x20);
  uStack_88 = *(undefined8 *)(PTR__CATransform3DIdentity_1000505f0 + 0x38);
  uStack_90 = *(undefined8 *)(PTR__CATransform3DIdentity_1000505f0 + 0x30);
  func_0x00010003d800(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_allocWithZone(PTR__OBJC_CLASS___CAMediaTimingFunction_100050628);
  func_0x00010003c280(0,0,0,0x3f800000);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_100050610;
  _objc_opt_self(PTR__OBJC_CLASS___CABasicAnimation_100050610);
  func_0x00010003b9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  _objc_retain_x24();
  func_0x00010003cde0(0x3fd5604189374bc7);
  func_0x00010003cf20(puVar2);
  func_0x00010003d3e0(puVar2);
  func_0x00010003d380(puVar2);
  func_0x00010003ce40(puVar2);
  func_0x00010003d1a0(puVar2);
  _objc_release_x20();
  _objc_release_x22();
  _objc_release_x23();
  _objc_release_x21();
  if (*(long *)(unaff_x20 + _DAT_10005fca0) != 0) {
    _objc_retain_x8();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656c616373,0xe500000000000000);
    func_0x00010003b760(puVar2);
    _objc_release_x21();
    _objc_release_x19();
    _objc_release_x20();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100016da0);
  (*pcVar1)();
}



/* Entry: 100016da0; end: 100016dcf;  */

void FUN_100016da0(void)

{
  FUN_100016e08();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 100016dd0; end: 100016e07; -[_TtC28SnapchatCaptureExtension_lib33LockedCameraFocusTapAnimationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100016dd0(long param_1)

{
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005fc98));
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_10005fca0));
  return;
}



/* Entry: 100016e08; end: 100016e27;  */

void FUN_100016e08(void)

{
  _objc_opt_self(&PTR_PTR_10005c310);
  return;
}



/* Entry: 100016e28; end: 100016e33;  */

undefined * FUN_100016e28(void)

{
  return PTR_s_transform_10005bab0;
}



/* Entry: 100016e34; end: 100016e83;  */

void FUN_100016e34(undefined8 *param_1,undefined8 *param_2)

{
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010003d780(&uStack_a0,*param_2);
  param_1[9] = uStack_58;
  param_1[8] = uStack_60;
  param_1[0xb] = uStack_48;
  param_1[10] = uStack_50;
  param_1[0xd] = uStack_38;
  param_1[0xc] = uStack_40;
  param_1[0xf] = uStack_28;
  param_1[0xe] = uStack_30;
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  return;
}



/* Entry: 100016e84; end: 100016ec7;  */

void FUN_100016e84(undefined8 *param_1,undefined8 *param_2)

{
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
  
  uStack_48 = param_1[9];
  uStack_50 = param_1[8];
  uStack_38 = param_1[0xb];
  uStack_40 = param_1[10];
  uStack_28 = param_1[0xd];
  uStack_30 = param_1[0xc];
  uStack_18 = param_1[0xf];
  uStack_20 = param_1[0xe];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  func_0x00010003d420(*param_2,param_2,&uStack_90);
  return;
}



/* Entry: 100016ec8; end: 100016ed3;  */

undefined * FUN_100016ec8(void)

{
  return PTR_s_opacity_10005b6b8;
}



/* Entry: 100016ed4; end: 100016efb;  */

void FUN_100016ed4(undefined4 *param_1,undefined4 param_2,undefined8 *param_3)

{
  func_0x00010003c7a0(*param_3);
  *param_1 = param_2;
  return;
}



/* Entry: 100016efc; end: 100016f07;  */

void FUN_100016efc(undefined4 *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010003d0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000508a0)(*param_1,*param_2,PTR_s_setOpacity__10005b908);
  return;
}



/* Entry: 100016f08; end: 100016f23;  */

void FUN_100016f08(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100016f74();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100016f24; end: 100016f63;  */

void FUN_100016f24(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 100016f64; end: 100016f73;  */

undefined8 * FUN_100016f64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  return param_2;
}



/* Entry: 100016f74; end: 10001707f;  */

undefined * FUN_100016f74(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100017080);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100050c50;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x10005fcd8;
    FUN_100011744(0x10005fcd8,&UNK_100041370);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___sypN_100050c40 + 8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 100017080; end: 1000170ab;  */

void FUN_100017080(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 1000170ac; end: 1000170d3;  */

void FUN_1000170ac(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1000170d4; end: 1000170ef;  */

void FUN_1000170d4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010003b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_100050d50)(uVar1);
  return;
}



/* Entry: 1000170f0; end: 100017277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000170f0(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_10005fd00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_10005fd08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_10005fd10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_10005fd18);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_10005fd20;
  lVar3 = 0;
  func_0x000100018144();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined8 *)(lVar4 + _DAT_10005fd58) = 0x4059000000000000;
  *(undefined8 *)(lVar4 + _DAT_10005fd60) = 0x3ff0000000000000;
  *(undefined8 *)(lVar4 + _DAT_10005fd68) = 0x3ff0000000000000;
  *(undefined8 *)(lVar4 + _DAT_10005fd70) = 0x3ff0000000000000;
  *(undefined8 *)(lVar4 + _DAT_10005fd78) = 0x3ff0000000000000;
  *(undefined8 *)(lVar4 + _DAT_10005fd80) = 0;
  plVar5 = &lStack_70;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_10005b548);
  *(long **)(unaff_x20 + lVar2) = plVar5;
  lVar2 = _DAT_10005fd28;
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined8 *)(lVar4 + _DAT_10005fd58) = 0x4059000000000000;
  *(undefined8 *)(lVar4 + _DAT_10005fd60) = 0x3ff0000000000000;
  *(undefined8 *)(lVar4 + _DAT_10005fd68) = 0x3ff0000000000000;
  *(undefined8 *)(lVar4 + _DAT_10005fd70) = 0x3ff0000000000000;
  *(undefined8 *)(lVar4 + _DAT_10005fd78) = 0x3ff0000000000000;
  *(undefined8 *)(lVar4 + _DAT_10005fd80) = 0;
  plVar5 = &lStack_80;
  lStack_80 = lVar4;
  lStack_78 = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_10005b548);
  *(long **)(unaff_x20 + lVar2) = plVar5;
  *(undefined8 *)(unaff_x20 + _DAT_10005fcf8) = param_1;
  FUN_100017e2c();
  _objc_msgSendSuper2(&stack0xffffffffffffff70,PTR_s_init_10005b548);
  return;
}



/* Entry: 100017278; end: 1000173c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100017278(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  if (param_2 != 0) {
    ppuVar4 = &puStack_80;
    uVar5 = *(undefined8 *)(param_2 + _DAT_10005fdf8);
    _objc_retain();
    func_0x00010003d860(uVar5);
    uVar5 = *(undefined8 *)(param_2 + _DAT_10005fe08);
    pcVar1 = "forwardPinchGesture(_:device:)";
    func_0x00010003a450("forwardPinchGesture(_:device:)");
    _objc_retainAutoreleasedReturnValue();
    puVar2 = &UNK_1000517a8;
    _swift_allocObject(&UNK_1000517a8,0x18,7);
    _swift_unknownObjectWeakInit(puVar2 + 0x10,param_3);
    puVar3 = &UNK_100051870;
    _swift_allocObject(&UNK_100051870,0x38,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = uVar5;
    *(undefined8 *)(puVar3 + 0x20) = param_4;
    *(undefined8 *)(puVar3 + 0x28) = param_1;
    *(long *)(puVar3 + 0x30) = param_2;
    pcStack_60 = FUN_100017f40;
    puStack_80 = PTR___NSConcreteStackBlock_100050768;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1000272d0;
    puStack_68 = &UNK_100051888;
    puStack_58 = puVar3;
    __Block_copy(&puStack_80);
    puVar2 = puStack_58;
    _objc_retain_x21();
    _objc_retain_x19();
    _swift_release(puVar2);
    func_0x00010003c820(pcVar1);
    __Block_release(ppuVar4);
    _objc_release_x21();
    _swift_unknownObjectRelease(pcVar1);
  }
  return;
}



/* Entry: 1000173c8; end: 10001764f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000173c8(double param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  dVar8 = param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 == 0) {
    return;
  }
  plVar1 = (long *)&DAT_10005fd20;
  if (param_3 != 2) {
    plVar1 = (long *)&DAT_10005fd28;
  }
  lVar3 = param_2;
  _objc_retain_x8(*(undefined8 *)(param_2 + *plVar1));
  lVar4 = param_4;
  func_0x00010003d680();
  if (lVar4 == 1) {
    dVar8 = *(double *)(lVar3 + _DAT_10005fd70) * *(double *)(lVar3 + _DAT_10005fd78);
    if (dVar8 <= 100.0) {
      dVar9 = 1.0;
      if (dVar8 < 1.0) goto LAB_10001749c;
    }
    else {
      dVar9 = 100.0;
LAB_10001749c:
      dVar9 = dVar9 / dVar8;
    }
    *(double *)(lVar3 + _DAT_10005fd70) = dVar9;
    dVar8 = param_1;
    FUN_100017fb8();
  }
  lVar4 = param_4;
  func_0x00010003d680();
  if (lVar4 == 2) {
    func_0x00010003cb20(param_4);
    lVar2 = _DAT_10005fd78;
    lVar4 = _DAT_10005fd70;
    dVar9 = *(double *)(lVar3 + _DAT_10005fd70) * *(double *)(lVar3 + _DAT_10005fd78);
    if (dVar9 <= 100.0) {
      if (dVar9 < 1.0) goto LAB_100017500;
    }
    else {
      dVar8 = dVar8 * 100.0;
LAB_100017500:
      dVar8 = dVar8 / dVar9;
    }
    *(double *)(lVar3 + _DAT_10005fd70) = dVar8;
    func_0x00010003d1e0(param_4);
    dVar8 = *(double *)(lVar3 + lVar4);
    dVar9 = *(double *)(lVar3 + lVar2);
    uVar7 = *(undefined8 *)(param_2 + _DAT_10005fcf8);
    puVar5 = &UNK_1000518c0;
    _swift_allocObject(&UNK_1000518c0,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = param_5;
    *(double *)(puVar5 + 0x18) = dVar8 * dVar9;
    uStack_98 = 0x100017fac;
    puStack_b8 = PTR___NSConcreteStackBlock_100050768;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_1000272d0;
    puStack_a0 = &UNK_1000518d8;
    ppuVar6 = &puStack_b8;
    puStack_90 = puVar5;
    __Block_copy(ppuVar6);
    puVar5 = puStack_90;
    _objc_retain_x22();
    _swift_release(puVar5);
    func_0x00010003c820(uVar7);
    __Block_release(ppuVar6);
  }
  lVar4 = param_4;
  func_0x00010003d680();
  if ((lVar4 != 3) && (func_0x00010003d680(), param_4 != 4)) goto LAB_100017624;
  dVar8 = *(double *)(lVar3 + _DAT_10005fd70) * *(double *)(lVar3 + _DAT_10005fd78);
  if (dVar8 <= 100.0) {
    dVar9 = 1.0;
    if (dVar8 < 1.0) goto LAB_100017604;
  }
  else {
    dVar9 = 100.0;
LAB_100017604:
    dVar9 = dVar9 / dVar8;
  }
  *(double *)(lVar3 + _DAT_10005fd70) = dVar9;
  FUN_100017fb8(param_1);
  param_2 = lVar3;
LAB_100017624:
  _objc_release_x8(param_2);
  _objc_release_x19();
  return;
}



/* Entry: 100017650; end: 1000177d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100017650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  if (param_5 != 0) {
    ppuVar4 = &puStack_b0;
    uVar5 = *(undefined8 *)(param_5 + _DAT_10005fdf8);
    uVar6 = param_1;
    _objc_retain();
    func_0x00010003d860(uVar5);
    uVar5 = *(undefined8 *)(param_5 + _DAT_10005fe08);
    pcVar1 = "forwardPanGesture(_:device:containerView:cameraTimerFrameInContainerView:)";
    func_0x00010003a450("forwardPanGesture(_:device:containerView:cameraTimerFrameInContainerView:)"
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar2 = &UNK_1000517a8;
    _swift_allocObject(&UNK_1000517a8,0x18,7);
    _swift_unknownObjectWeakInit(puVar2 + 0x10,param_6);
    puVar3 = &UNK_1000517d0;
    _swift_allocObject(&UNK_1000517d0,0x60,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = uVar5;
    *(undefined8 *)(puVar3 + 0x20) = param_7;
    *(undefined8 *)(puVar3 + 0x28) = param_8;
    *(undefined8 *)(puVar3 + 0x30) = uVar6;
    *(undefined8 *)(puVar3 + 0x38) = param_1;
    *(undefined8 *)(puVar3 + 0x40) = param_2;
    *(undefined8 *)(puVar3 + 0x48) = param_3;
    *(undefined8 *)(puVar3 + 0x50) = param_4;
    *(long *)(puVar3 + 0x58) = param_5;
    pcStack_90 = FUN_100017eac;
    puStack_b0 = PTR___NSConcreteStackBlock_100050768;
    uStack_a8 = 0x42000000;
    pcStack_a0 = FUN_1000272d0;
    puStack_98 = &UNK_1000517e8;
    puStack_88 = puVar3;
    __Block_copy(&puStack_b0);
    puVar2 = puStack_88;
    _objc_retain_x22();
    _objc_retain_x20();
    _objc_retain_x19();
    _swift_release(puVar2);
    func_0x00010003c820(pcVar1);
    __Block_release(ppuVar4);
    _objc_release_x22();
    _swift_unknownObjectRelease(pcVar1);
  }
  return;
}



/* Entry: 1000177d8; end: 100017ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000177d8(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  long param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  double *pdVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  
  dVar9 = param_1;
  _swift_beginAccess(param_5 + 0x10,auStack_98,0,0);
  param_5 = param_5 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_5 == 0) {
    return;
  }
  plVar2 = (long *)&DAT_10005fd20;
  if (param_6 != 2) {
    plVar2 = (long *)&DAT_10005fd28;
  }
  lVar4 = param_5;
  _objc_retain_x8(*(undefined8 *)(param_5 + *plVar2));
  lVar5 = param_7;
  func_0x00010003d680();
  if (lVar5 == 1) {
    lVar5 = param_7;
    func_0x00010003c780();
    if (0 < lVar5) {
      func_0x00010003c6a0(param_7);
      pdVar1 = (double *)(param_5 + _DAT_10005fd00);
      *pdVar1 = dVar9;
      pdVar1[1] = param_2;
      pdVar1 = (double *)(param_5 + _DAT_10005fd08);
      *pdVar1 = dVar9;
      pdVar1[1] = param_2;
    }
    dVar9 = param_1 / *(double *)(lVar4 + _DAT_10005fd70);
    FUN_100017fb8();
  }
  lVar5 = param_7;
  func_0x00010003d680();
  if (lVar5 == 2) {
    func_0x00010003c680(param_7);
    dVar12 = param_4 * 0.5 + 10.0;
    dVar13 = *(double *)(param_5 + _DAT_10005fd00 + 8);
    dVar10 = -(param_2 - dVar13) - dVar12;
    dVar11 = 0.0;
    if (dVar10 < 0.0) {
      dVar10 = 0.0;
    }
    pdVar1 = (double *)(param_5 + _DAT_10005fd08);
    dVar12 = -(pdVar1[1] - dVar13) - dVar12;
    if (0.0 <= dVar12) {
      dVar11 = dVar12;
      if (dVar10 != dVar12) goto LAB_10001795c;
    }
    else if (dVar10 != 0.0) {
LAB_10001795c:
      dVar11 = (((dVar10 - dVar11) + *(double *)(lVar4 + _DAT_10005fd80)) * 80.0 * 5e-05 + 1.0 +
               -1.5) * 3.35;
      _exp(dVar11);
      FUN_100017fb8(dVar11 + 0.812691820518043);
      dVar11 = *(double *)(lVar4 + _DAT_10005fd70);
      dVar10 = *(double *)(lVar4 + _DAT_10005fd78);
      uVar8 = *(undefined8 *)(param_5 + _DAT_10005fcf8);
      puVar6 = &UNK_100051820;
      _swift_allocObject(&UNK_100051820,0x20,7);
      *(undefined8 *)(puVar6 + 0x10) = param_9;
      *(double *)(puVar6 + 0x18) = dVar11 * dVar10;
      pcStack_a8 = FUN_100017ee4;
      puStack_c8 = PTR___NSConcreteStackBlock_100050768;
      uStack_c0 = 0x42000000;
      pcStack_b8 = FUN_1000272d0;
      puStack_b0 = &UNK_100051838;
      ppuVar7 = &puStack_c8;
      puStack_a0 = puVar6;
      __Block_copy(ppuVar7);
      puVar6 = puStack_a0;
      _objc_retain_x22();
      _swift_release(puVar6);
      func_0x00010003c820(uVar8);
      __Block_release(ppuVar7);
    }
    *pdVar1 = dVar9;
    pdVar1[1] = param_2;
  }
  lVar4 = param_7;
  func_0x00010003d680();
  if (lVar4 == 3) {
    _objc_release_x20();
  }
  else {
    func_0x00010003d680();
    _objc_release_x20();
    if (param_7 != 4) goto LAB_100017aa8;
  }
  uVar8 = *(undefined8 *)(param_5 + _DAT_10005fd00);
  puVar3 = (undefined8 *)(param_5 + _DAT_10005fd08);
  puVar3[1] = ((undefined8 *)(param_5 + _DAT_10005fd00))[1];
  *puVar3 = uVar8;
LAB_100017aa8:
  _objc_release_x19();
  return;
}



/* Entry: 100017ad4; end: 100017c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100017ad4(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_100018070();
    FUN_100018070();
    puVar1 = (undefined8 *)(param_1 + _DAT_10005fd00);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + _DAT_10005fd08);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + _DAT_10005fd10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + _DAT_10005fd18);
    *puVar1 = 0;
    puVar1[1] = 0;
    if (param_2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + _DAT_10005fcf8);
      puVar2 = &UNK_100051960;
      _swift_allocObject(&UNK_100051960,0x20,7);
      *(long *)(puVar2 + 0x10) = param_2;
      *(undefined8 *)(puVar2 + 0x18) = 0x3ff0000000000000;
      uStack_68 = 0x100017fb4;
      puStack_88 = PTR___NSConcreteStackBlock_100050768;
      uStack_80 = 0x42000000;
      pcStack_78 = FUN_1000272d0;
      puStack_70 = &UNK_100051978;
      ppuVar3 = &puStack_88;
      puStack_60 = puVar2;
      __Block_copy(ppuVar3);
      puVar2 = puStack_60;
      _objc_retain_x21();
      _objc_retain();
      _swift_release(puVar2);
      func_0x00010003c820(uVar4);
      __Block_release(ppuVar3);
      _objc_release_x21();
    }
    _objc_release_x19();
  }
  return;
}



/* Entry: 100017c34; end: 100017d87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100017c34(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    plVar1 = (long *)&DAT_10005fd20;
    if (*(long *)(param_2 + _DAT_10005fe08) != 2) {
      plVar1 = (long *)&DAT_10005fd28;
    }
    dVar5 = *(double *)(*(long *)(param_1 + *plVar1) + _DAT_10005fd70);
    dVar6 = *(double *)(*(long *)(param_1 + *plVar1) + _DAT_10005fd78);
    uVar4 = *(undefined8 *)(param_1 + _DAT_10005fcf8);
    puVar2 = &UNK_100051910;
    _swift_allocObject(&UNK_100051910,0x20,7);
    *(long *)(puVar2 + 0x10) = param_2;
    *(double *)(puVar2 + 0x18) = dVar5 * dVar6;
    uStack_78 = 0x100017fb0;
    puStack_98 = PTR___NSConcreteStackBlock_100050768;
    uStack_90 = 0x42000000;
    pcStack_88 = FUN_1000272d0;
    puStack_80 = &UNK_100051928;
    ppuVar3 = &puStack_98;
    puStack_70 = puVar2;
    __Block_copy(ppuVar3);
    puVar2 = puStack_70;
    _objc_retain_x23();
    _objc_retain_x19();
    _swift_release(puVar2);
    func_0x00010003c820(uVar4);
    __Block_release(ppuVar3);
    _objc_release_x24();
    _objc_release_x23();
  }
  return;
}



/* Entry: 100017d88; end: 100017de3; -[_TtC28SnapchatCaptureExtension_lib23LockedCameraZoomHandler init] */

void FUN_100017d88(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapchatCaptureExtension_lib.LockedCameraZoomHandler",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100017db4);
  (*pcVar1)();
}



/* Entry: 100017de4; end: 100017e2b; -[_TtC28SnapchatCaptureExtension_lib23LockedCameraZoomHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100017de4(long param_1)

{
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005fcf8));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005fd20));
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_10005fd28));
  return;
}



/* Entry: 100017e2c; end: 100017eab;  */

void FUN_100017e2c(void)

{
  _objc_opt_self(&PTR_PTR_10005c448);
  return;
}



/* Entry: 100017eac; end: 100017ee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100017eac(void)

{
  double *pdVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  dVar13 = *(double *)(unaff_x20 + 0x30);
  dVar14 = *(double *)(unaff_x20 + 0x38);
  dVar17 = *(double *)(unaff_x20 + 0x48);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x58);
  dVar12 = dVar13;
  _swift_beginAccess(dVar13,dVar14,*(undefined8 *)(unaff_x20 + 0x40),dVar17,
                     *(undefined8 *)(unaff_x20 + 0x50),lVar4 + 0x10,auStack_98,0,0);
  lVar4 = lVar4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 == 0) {
    return;
  }
  plVar2 = (long *)&DAT_10005fd20;
  if (lVar5 != 2) {
    plVar2 = (long *)&DAT_10005fd28;
  }
  lVar5 = lVar4;
  _objc_retain_x8(*(undefined8 *)(lVar4 + *plVar2));
  lVar6 = lVar9;
  func_0x00010003d680();
  if (lVar6 == 1) {
    lVar6 = lVar9;
    func_0x00010003c780();
    if (0 < lVar6) {
      func_0x00010003c6a0(lVar9);
      pdVar1 = (double *)(lVar4 + _DAT_10005fd00);
      *pdVar1 = dVar12;
      pdVar1[1] = dVar14;
      pdVar1 = (double *)(lVar4 + _DAT_10005fd08);
      *pdVar1 = dVar12;
      pdVar1[1] = dVar14;
    }
    dVar12 = dVar13 / *(double *)(lVar5 + _DAT_10005fd70);
    FUN_100017fb8();
  }
  lVar6 = lVar9;
  func_0x00010003d680();
  if (lVar6 == 2) {
    func_0x00010003c680(lVar9);
    dVar15 = dVar17 * 0.5 + 10.0;
    dVar16 = *(double *)(lVar4 + _DAT_10005fd00 + 8);
    dVar17 = -(dVar14 - dVar16) - dVar15;
    dVar13 = 0.0;
    if (dVar17 < 0.0) {
      dVar17 = 0.0;
    }
    pdVar1 = (double *)(lVar4 + _DAT_10005fd08);
    dVar15 = -(pdVar1[1] - dVar16) - dVar15;
    if (0.0 <= dVar15) {
      dVar13 = dVar15;
      if (dVar17 != dVar15) goto LAB_10001795c;
    }
    else if (dVar17 != 0.0) {
LAB_10001795c:
      dVar13 = (((dVar17 - dVar13) + *(double *)(lVar5 + _DAT_10005fd80)) * 80.0 * 5e-05 + 1.0 +
               -1.5) * 3.35;
      _exp(dVar13);
      FUN_100017fb8(dVar13 + 0.812691820518043);
      dVar13 = *(double *)(lVar5 + _DAT_10005fd70);
      dVar17 = *(double *)(lVar5 + _DAT_10005fd78);
      uVar11 = *(undefined8 *)(lVar4 + _DAT_10005fcf8);
      puVar7 = &UNK_100051820;
      _swift_allocObject(&UNK_100051820,0x20,7);
      *(undefined8 *)(puVar7 + 0x10) = uVar10;
      *(double *)(puVar7 + 0x18) = dVar13 * dVar17;
      pcStack_a8 = FUN_100017ee4;
      puStack_c8 = PTR___NSConcreteStackBlock_100050768;
      uStack_c0 = 0x42000000;
      pcStack_b8 = FUN_1000272d0;
      puStack_b0 = &UNK_100051838;
      ppuVar8 = &puStack_c8;
      puStack_a0 = puVar7;
      __Block_copy(ppuVar8);
      puVar7 = puStack_a0;
      _objc_retain_x22();
      _swift_release(puVar7);
      func_0x00010003c820(uVar11);
      __Block_release(ppuVar8);
    }
    *pdVar1 = dVar12;
    pdVar1[1] = dVar14;
  }
  lVar5 = lVar9;
  func_0x00010003d680();
  if (lVar5 == 3) {
    _objc_release_x20();
  }
  else {
    func_0x00010003d680();
    _objc_release_x20();
    if (lVar9 != 4) goto LAB_100017aa8;
  }
  uVar10 = *(undefined8 *)(lVar4 + _DAT_10005fd00);
  puVar3 = (undefined8 *)(lVar4 + _DAT_10005fd08);
  puVar3[1] = ((undefined8 *)(lVar4 + _DAT_10005fd00))[1];
  *puVar3 = uVar10;
LAB_100017aa8:
  _objc_release_x19();
  return;
}



/* Entry: 100017ee4; end: 100017f0b;  */

void FUN_100017ee4(void)

{
  long unaff_x20;
  
  FUN_1000187dc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100017f0c; end: 100017f3f;  */

void FUN_100017f0c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x20));
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100017f40; end: 100017f53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100017f40(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  dVar12 = *(double *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  dVar11 = dVar12;
  _swift_beginAccess(lVar3 + 0x10,auStack_88,0,0);
  lVar3 = lVar3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 == 0) {
    return;
  }
  plVar1 = (long *)&DAT_10005fd20;
  if (lVar4 != 2) {
    plVar1 = (long *)&DAT_10005fd28;
  }
  lVar4 = lVar3;
  _objc_retain_x8(*(undefined8 *)(lVar3 + *plVar1));
  lVar5 = lVar8;
  func_0x00010003d680();
  if (lVar5 == 1) {
    dVar11 = *(double *)(lVar4 + _DAT_10005fd70) * *(double *)(lVar4 + _DAT_10005fd78);
    if (dVar11 <= 100.0) {
      dVar13 = 1.0;
      if (dVar11 < 1.0) goto LAB_10001749c;
    }
    else {
      dVar13 = 100.0;
LAB_10001749c:
      dVar13 = dVar13 / dVar11;
    }
    *(double *)(lVar4 + _DAT_10005fd70) = dVar13;
    dVar11 = dVar12;
    FUN_100017fb8();
  }
  lVar5 = lVar8;
  func_0x00010003d680();
  if (lVar5 == 2) {
    func_0x00010003cb20(lVar8);
    lVar2 = _DAT_10005fd78;
    lVar5 = _DAT_10005fd70;
    dVar13 = *(double *)(lVar4 + _DAT_10005fd70) * *(double *)(lVar4 + _DAT_10005fd78);
    if (dVar13 <= 100.0) {
      if (dVar13 < 1.0) goto LAB_100017500;
    }
    else {
      dVar11 = dVar11 * 100.0;
LAB_100017500:
      dVar11 = dVar11 / dVar13;
    }
    *(double *)(lVar4 + _DAT_10005fd70) = dVar11;
    func_0x00010003d1e0(lVar8);
    dVar11 = *(double *)(lVar4 + lVar5);
    dVar13 = *(double *)(lVar4 + lVar2);
    uVar10 = *(undefined8 *)(lVar3 + _DAT_10005fcf8);
    puVar6 = &UNK_1000518c0;
    _swift_allocObject(&UNK_1000518c0,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar9;
    *(double *)(puVar6 + 0x18) = dVar11 * dVar13;
    uStack_98 = 0x100017fac;
    puStack_b8 = PTR___NSConcreteStackBlock_100050768;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_1000272d0;
    puStack_a0 = &UNK_1000518d8;
    ppuVar7 = &puStack_b8;
    puStack_90 = puVar6;
    __Block_copy(ppuVar7);
    puVar6 = puStack_90;
    _objc_retain_x22();
    _swift_release(puVar6);
    func_0x00010003c820(uVar10);
    __Block_release(ppuVar7);
  }
  lVar5 = lVar8;
  func_0x00010003d680();
  if ((lVar5 != 3) && (func_0x00010003d680(), lVar8 != 4)) goto LAB_100017624;
  dVar11 = *(double *)(lVar4 + _DAT_10005fd70) * *(double *)(lVar4 + _DAT_10005fd78);
  if (dVar11 <= 100.0) {
    dVar13 = 1.0;
    if (dVar11 < 1.0) goto LAB_100017604;
  }
  else {
    dVar13 = 100.0;
LAB_100017604:
    dVar13 = dVar13 / dVar11;
  }
  *(double *)(lVar4 + _DAT_10005fd70) = dVar13;
  FUN_100017fb8(dVar12);
  lVar3 = lVar4;
LAB_100017624:
  _objc_release_x8(lVar3);
  _objc_release_x19();
  return;
}



/* Entry: 100017f54; end: 100017f77;  */

void FUN_100017f54(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100017f78; end: 100017fb7;  */

void FUN_100017f78(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100017fb8; end: 10001806f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100017fb8(double param_1)

{
  long unaff_x20;
  double dVar1;
  
  dVar1 = *(double *)(unaff_x20 + _DAT_10005fd70) * *(double *)(unaff_x20 + _DAT_10005fd78);
  if (dVar1 <= 100.0) {
    if (1.0 <= dVar1) goto LAB_10001800c;
  }
  else {
    param_1 = param_1 * 100.0;
  }
  param_1 = param_1 / dVar1;
LAB_10001800c:
  *(double *)(unaff_x20 + _DAT_10005fd78) = param_1;
  dVar1 = param_1 + 0.18730817948195702 + -1.0;
  _log();
  *(double *)(unaff_x20 + _DAT_10005fd80) = ((dVar1 / 3.35 + 1.5 + -1.0) / 5e-05) / 80.0;
  return;
}



/* Entry: 100018070; end: 1000180e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100018070(void)

{
  long unaff_x20;
  double dVar1;
  double dVar2;
  
  *(undefined8 *)(unaff_x20 + _DAT_10005fd68) = *(undefined8 *)(unaff_x20 + _DAT_10005fd60);
  dVar1 = *(double *)(unaff_x20 + _DAT_10005fd70) * *(double *)(unaff_x20 + _DAT_10005fd78);
  if (dVar1 <= 100.0) {
    dVar2 = 1.0;
    if (dVar1 < 1.0) goto LAB_1000180d0;
  }
  else {
    dVar2 = 100.0;
LAB_1000180d0:
    dVar2 = dVar2 / dVar1;
  }
  *(double *)(unaff_x20 + _DAT_10005fd70) = dVar2;
  FUN_100017fb8();
  dVar1 = 1.0;
  dVar2 = *(double *)(unaff_x20 + _DAT_10005fd70) * *(double *)(unaff_x20 + _DAT_10005fd78);
  if (dVar2 <= 100.0) {
    if (1.0 <= dVar2) goto LAB_10001800c;
  }
  else {
    dVar1 = 100.0;
  }
  dVar1 = dVar1 / dVar2;
LAB_10001800c:
  *(double *)(unaff_x20 + _DAT_10005fd78) = dVar1;
  dVar1 = dVar1 + 0.18730817948195702 + -1.0;
  _log();
  *(double *)(unaff_x20 + _DAT_10005fd80) = ((dVar1 / 3.35 + 1.5 + -1.0) / 5e-05) / 80.0;
  return;
}



/* Entry: 1000180e8; end: 100018163; -[_TtC28SnapchatCaptureExtension_lib24LockedCameraZoomingState init] */

void FUN_1000180e8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapchatCaptureExtension_lib.LockedCameraZoomingState",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100018114);
  (*pcVar1)();
}



/* Entry: 100018164; end: 100018307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100018164(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar1 = 0x10005fdf0;
  FUN_100011744(0x10005fdf0,&UNK_100041158);
  lVar2 = lVar1;
  _swift_allocObject();
  puVar5 = PTR__AVCaptureDeviceTypeBuiltInWideAngleCamera_100050670;
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)puVar5;
  uVar3 = 0;
  func_0x000100010440(0);
  _objc_retain_x23();
  _objc_retain_x24();
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar3);
  _swift_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___AVCaptureDeviceDiscoverySession_1000506d8;
  _objc_opt_self();
  puVar5 = puVar4;
  func_0x00010003bee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined **)(unaff_x20 + _DAT_10005fdb0) = puVar5;
  _swift_allocObject(lVar1,0x28,7);
  puVar5 = PTR__AVCaptureDeviceTypeMicrophone_100050678;
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)puVar5;
  _objc_retain_x8();
  _objc_retain_x23();
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar1,uVar3);
  _swift_release(lVar1);
  func_0x00010003bee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x21();
  *(undefined **)(unaff_x20 + _DAT_10005fdb8) = puVar4;
  FUN_100018778();
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_10005b548);
  return;
}



/* Entry: 100018308; end: 10001841f; -[_TtC28SnapchatCaptureExtension_lib33LockedCameraCaptureDeviceProvider init] */

void FUN_100018308(void)

{
  FUN_100018164();
  return;
}



/* Entry: 100018420; end: 10001853f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100018420(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = *(ulong *)(unaff_x20 + _DAT_10005fdb0);
  func_0x00010003bec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  func_0x000100018798(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar3,uVar4);
  uVar5 = uVar3;
  _objc_release_x20();
  if (uVar3 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar7 = uVar3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    uVar5 = uVar7;
  }
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100018500);
          (*pcVar2)();
        }
        _objc_retain_x8(*(undefined8 *)(uVar3 + uVar8 * 8 + 0x20));
        uVar6 = uVar5;
      }
      else {
        uVar6 = uVar8;
        __ss12_ArrayBufferV19_getElementSlowPathyyXlSiFyXl_Ts5(uVar8,uVar3);
      }
      uVar1 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000184fc);
        (*pcVar2)();
      }
      uVar5 = uVar6;
      func_0x00010003c900();
      if (uVar5 == 2) {
        _swift_bridgeObjectRelease(uVar3);
        return uVar6;
      }
      _objc_release_x22();
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar7);
  }
  _swift_bridgeObjectRelease(uVar3);
  return 0;
}



/* Entry: 100018540; end: 10001870f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100018540(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  uVar3 = *(ulong *)(unaff_x20 + _DAT_10005fdb0);
  func_0x00010003bec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  func_0x000100018798();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  uVar5 = uVar3;
  _objc_release_x20();
  if (uVar3 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar9 = uVar3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    uVar5 = uVar9;
  }
  if (uVar9 != 0) {
    uVar8 = *(ulong *)PTR__AVCaptureDeviceTypeBuiltInWideAngleCamera_100050670;
    lVar11 = 4;
    do {
      uVar10 = lVar11 - 4;
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000186c8);
          (*pcVar2)();
        }
        _objc_retain_x8(*(undefined8 *)(uVar3 + lVar11 * 8));
        uVar6 = uVar5;
        uVar7 = uVar4;
      }
      else {
        uVar6 = uVar10;
        uVar7 = uVar3;
        __ss12_ArrayBufferV19_getElementSlowPathyyXlSiFyXl_Ts5();
      }
      uVar1 = lVar11 - 3;
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000186c4);
        (*pcVar2)();
      }
      uVar5 = uVar6;
      func_0x00010003c900();
      uVar4 = uVar7;
      if (uVar5 == 1) {
        uVar10 = uVar6;
        func_0x00010003bea0();
        _objc_retainAutoreleasedReturnValue();
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        uVar4 = uVar8;
        uVar5 = uVar7;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        if ((uVar10 == uVar4) && (uVar7 == uVar5)) {
          _swift_bridgeObjectRelease(uVar3);
          _objc_release_x25();
          _swift_bridgeObjectRelease(uVar7);
          uVar3 = uVar5;
LAB_1000186b4:
          _swift_bridgeObjectRelease(uVar3);
          return uVar6;
        }
        uVar4 = uVar7;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        _objc_release_x25();
        _swift_bridgeObjectRelease(uVar7);
        _swift_bridgeObjectRelease();
        if ((uVar10 & 1) != 0) goto LAB_1000186b4;
      }
      _objc_release_x22();
      lVar11 = lVar11 + 1;
    } while (uVar1 != uVar9);
  }
  _swift_bridgeObjectRelease(uVar3);
  return 0;
}



/* Entry: 100018710; end: 10001873f;  */

void FUN_100018710(void)

{
  FUN_100018778();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 100018740; end: 100018777; -[_TtC28SnapchatCaptureExtension_lib33LockedCameraCaptureDeviceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100018740(long param_1)

{
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005fdb0));
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_10005fdb8));
  return;
}


