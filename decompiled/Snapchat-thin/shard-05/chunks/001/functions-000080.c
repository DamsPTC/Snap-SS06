/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103af2be4; end: 103af2cb3; -[_TtC28MiniCameraNavigationServices32MiniCameraTrayNavigationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af2be4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fe95f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe9600));
  return;
}



/* Entry: 103af2cb4; end: 103af2d13; -[MiniCameraTrayPassthroughViewPluginScope init] */

void FUN_103af2cb4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MiniCameraNavigationServices.MiniCameraTrayPassthroughViewPluginScope",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103af2ce0);
  (*pcVar1)();
}



/* Entry: 103af2d14; end: 103af2d23; -[MiniCameraTrayPassthroughViewPluginScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af2d14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe9630));
  return;
}



/* Entry: 103af2d24; end: 103af2ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af2d24(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe9660);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103af2ddc; end: 103af2e3b; -[_TtC28MiniCameraNavigationServices46MiniCameraTrayPassthroughViewProviderContainer init] */

void FUN_103af2ddc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MiniCameraNavigationServices.MiniCameraTrayPassthroughViewProviderContainer",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103af2e08);
  (*pcVar1)();
}



/* Entry: 103af2e3c; end: 103af2e4b; -[_TtC28MiniCameraNavigationServices46MiniCameraTrayPassthroughViewProviderContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af2e3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe9660));
  return;
}



/* Entry: 103af2e4c; end: 103af2e6b;  */

void FUN_103af2e4c(void)

{
  func_0x000107c61168(&PTR_PTR_112926700);
  return;
}



/* Entry: 103af2e6c; end: 103af2e7f;  */

bool FUN_103af2e6c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103af2e80; end: 103af2f57;  */

void FUN_103af2e80(void)

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



/* Entry: 103af2f58; end: 103af2f77;  */

void FUN_103af2f58(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103af2f78; end: 103af2fb7;  */

void FUN_103af2f78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe9690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc51820;
  func_0x000107c61520(&UNK_10dc51820,&UNK_1106cf080);
  puRam0000000112fe9690 = puVar1;
  return;
}



/* Entry: 103af2fb8; end: 103af2fdb;  */

undefined1  [16] FUN_103af2fb8(void)

{
  return ZEXT816(0x1106cf080);
}



/* Entry: 103af2fdc; end: 103af3087;  */

void FUN_103af2fdc(void)

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



/* Entry: 103af3088; end: 103af30af;  */

void FUN_103af3088(ulong *param_1,ulong *param_2)

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



/* Entry: 103af30b0; end: 103af30c3; -[SCCameraViewfinderGeometrySnapshot containerBoundsSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103af30b0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112fe9698);
}



/* Entry: 103af30c4; end: 103af30db; -[SCCameraViewfinderGeometrySnapshot systemSafeAreaInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103af30c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fe96a0);
}



/* Entry: 103af30dc; end: 103af30eb; -[SCCameraViewfinderGeometrySnapshot displayScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103af30dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fe96a8);
}



/* Entry: 103af30ec; end: 103af30fb; -[SCCameraViewfinderGeometrySnapshot targetAspectRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103af30ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fe96b0);
}



/* Entry: 103af30fc; end: 103af310b; -[SCCameraViewfinderGeometrySnapshot minimumOpaqueFooterHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103af30fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fe96b8);
}



/* Entry: 103af310c; end: 103af311f; -[SCCameraViewfinderGeometrySnapshot fittedSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103af310c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112fe96c0);
}



/* Entry: 103af3120; end: 103af312f; -[SCCameraViewfinderGeometrySnapshot positionTier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103af3120(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fe96c8);
}



/* Entry: 103af3130; end: 103af3237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af3130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe9698);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe96a0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = param_5;
  puVar1[3] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fe96a8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fe96b0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112fe96b8) = in_stack_00000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe96c0);
  *puVar1 = in_stack_00000008;
  puVar1[1] = in_stack_00000010;
  *(undefined8 *)(unaff_x20 + _DAT_112fe96c8) = param_9;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103af3238; end: 103af3257; -[SCCameraViewfinderGeometryServices snapshotProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af3238(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fe96d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103af3258; end: 103af326f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af3258(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe96d0) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103af3270; end: 103af328b; -[SCCameraViewfinderGeometryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af3270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fe96d0));
  return;
}



/* Entry: 103af328c; end: 103af32df;  */

void FUN_103af328c(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + *param_2) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103af32e0; end: 103af32e3;  */

void FUN_103af32e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103af32e4; end: 103af3317;  */

void FUN_103af32e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103af3318; end: 103af332b; -[SCMainCameraScopedCameraViewfinderGeometryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af3318(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fe96d8));
  return;
}



/* Entry: 103af332c; end: 103af336b;  */

void FUN_103af332c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe96e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc518e0;
  func_0x000107c61520(&UNK_10dc518e0,&UNK_1106cf178);
  puRam0000000112fe96e0 = puVar1;
  return;
}



/* Entry: 103af336c; end: 103af337b;  */

undefined1  [16] FUN_103af336c(void)

{
  return ZEXT816(0x1106cf178);
}



/* Entry: 103af337c; end: 103af339b;  */

void FUN_103af337c(void)

{
  func_0x000107c61168(&PTR_PTR_1129267c0);
  return;
}



/* Entry: 103af339c; end: 103af33a3;  */

void FUN_103af339c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103af33a4; end: 103af3607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af33a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112fe9790);
  func_0x000107c5a378(uVar6,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(uVar6);
  func_0x000107c61170(puVar2);
  uVar3 = uVar6;
  func_0x000107c4aba4(uVar6);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168();
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c5d9bc();
  func_0x000107c61170(puVar2);
  uVar5 = 0x403ccccccccccccc;
  if (puVar4 != (undefined *)0x1) {
    uVar5 = 0x4038000000000000;
  }
  func_0x000107c539d4(uVar5,uVar3);
  func_0x000107c61170(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe9798);
  func_0x000107c54b80(*puVar1,puVar1[1],puVar1[2],puVar1[3],uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 103af3608; end: 103af3803;  */

/* WARNING: Possible PIC construction at 0x000103af365c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103af3698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103af36d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103af3734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103af3760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103af3738) */
/* WARNING: Removing unreachable block (ram,0x000103af36d8) */
/* WARNING: Removing unreachable block (ram,0x000103af369c) */
/* WARNING: Removing unreachable block (ram,0x000103af3660) */
/* WARNING: Removing unreachable block (ram,0x000103af3764) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af3608(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fe9780);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 103af3804; end: 103af382b; -[_TtC28SCCameraSnapBackPresentation31SnapBackInsetCaptureOverlayView initWithCoder:] */

void FUN_103af3804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000103af4a20();
  return;
}



/* Entry: 103af382c; end: 103af397f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af382c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  double *pdVar2;
  long unaff_x20;
  undefined8 uVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_layoutSubviews_112600e60);
  pcVar4 = *(code **)(unaff_x20 + _DAT_112fe9778);
  if (pcVar4 != (code *)0x0) {
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112fe9778))[1];
    func_0x000107c6157c(uVar3);
    (*pcVar4)();
    func_0x000100d664cc(pcVar4,uVar3);
    func_0x000107c609e0(param_1,param_2,param_3,param_4);
    if (((ulong)pcVar4 & 1) == 0) {
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe9798);
      *puVar1 = param_1;
      puVar1[1] = param_2;
      puVar1[2] = param_3;
      puVar1[3] = param_4;
    }
  }
  pdVar2 = (double *)(unaff_x20 + _DAT_112fe9798);
  func_0x000107c54b80(*pdVar2,pdVar2[1],pdVar2[2],pdVar2[3],
                      *(undefined8 *)(unaff_x20 + _DAT_112fe9790));
  func_0x000107c54b80(*pdVar2,pdVar2[1],pdVar2[2],pdVar2[3],
                      *(undefined8 *)(unaff_x20 + _DAT_112fe9788));
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fe9780);
  dVar5 = *pdVar2;
  func_0x000107c609bc(dVar5,pdVar2[1],pdVar2[2],pdVar2[3]);
  dVar6 = *pdVar2;
  func_0x000107c609b8(dVar6,pdVar2[1],pdVar2[2],pdVar2[3]);
  func_0x000107c54b80(dVar5 + -31.0,dVar6 + -62.0 + -14.0,0x404f000000000000,0x404f000000000000,
                      uVar3);
  return;
}



/* Entry: 103af3980; end: 103af39a7; -[_TtC28SCCameraSnapBackPresentation31SnapBackInsetCaptureOverlayView layoutSubviews] */

void FUN_103af3980(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103af382c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103af39a8; end: 103af3a7f; -[_TtC28SCCameraSnapBackPresentation31SnapBackInsetCaptureOverlayView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af39a8(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  ppuVar3 = &puStack_50;
  puVar2 = param_3;
  func_0x000107c614f0();
  puVar1 = PTR_s_hitTest_withEvent__1125d6850;
  puStack_50 = param_3;
  puStack_48 = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c61154(param_1,param_2,&puStack_50,puVar1,param_5);
  func_0x000107c61180();
  if (ppuVar3 == (undefined1 **)0x0) {
    func_0x000107c61170(param_5);
  }
  else {
    puVar2 = (undefined1 *)ppuVar3;
    func_0x000107c49c50();
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    param_3 = (undefined1 *)ppuVar3;
    if (((ulong)puVar2 & 1) != 0) goto LAB_103af3a68;
  }
  func_0x000107c61170(param_3);
  ppuVar3 = (undefined1 **)0x0;
LAB_103af3a68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103af3a80; end: 103af3c8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af3a80(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_b0 [96];
  
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168();
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5d9bc();
  func_0x000107c61170(puVar2);
  uVar6 = 0x3fe6666666666666;
  if (puVar3 != (undefined *)0x1) {
    uVar6 = 0x3feae147ae147ae1;
  }
  uVar4 = 0x112d360b0;
  FUN_103af47c8(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
  func_0x000107c61534();
  *(undefined8 *)(uVar4 + 0x18) = 5;
  *(undefined8 *)(uVar4 + 0x10) = 2;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fe9780);
  *(undefined8 *)(uVar4 + 0x20) = uVar5;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112fe9790);
  *(undefined8 *)(uVar4 + 0x28) = uVar7;
  func_0x000107c61174();
  func_0x000107c61174(uVar7);
  if ((uVar4 & 0xc000000000000001) == 0) {
    func_0x000107c61174(uVar5);
  }
  else {
    uVar5 = 0;
    FUN_103af4864(0,uVar4,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
  }
  func_0x000107c526c0(0);
  func_0x000107c6088c(auStack_b0,uVar6,uVar6);
  func_0x000107c5a03c(uVar5);
  func_0x000107c61170(uVar5);
  if ((uVar4 & 0xc000000000000001) == 0) {
    if (*(ulong *)(uVar4 + 0x10) < 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103af3c90);
      (*pcVar1)();
    }
    uVar5 = *(undefined8 *)(uVar4 + 0x28);
    func_0x000107c61174(uVar5);
  }
  else {
    uVar5 = 1;
    FUN_103af4864(1,uVar4,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
  }
  func_0x000107c526c0(0);
  func_0x000107c6088c(auStack_b0,uVar6,uVar6);
  func_0x000107c5a03c(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61588(uVar4);
  uVar5 = *(undefined8 *)(uVar4 + 0x10);
  uVar6 = 0;
  FUN_103af4b54(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c61408((undefined8 *)(uVar4 + 0x20),uVar5,uVar6);
  return;
}



/* Entry: 103af3c90; end: 103af3e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af3c90(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar2 = 0x112d360b0;
  FUN_103af47c8(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
  func_0x000107c61534();
  *(undefined8 *)(uVar2 + 0x18) = 5;
  *(undefined8 *)(uVar2 + 0x10) = 2;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fe9780);
  *(undefined8 *)(uVar2 + 0x20) = uVar3;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fe9790);
  *(undefined8 *)(uVar2 + 0x28) = uVar4;
  func_0x000107c61174();
  func_0x000107c61174(uVar4);
  if ((uVar2 & 0xc000000000000001) == 0) {
    func_0x000107c61174(uVar3);
  }
  else {
    uVar3 = 0;
    FUN_103af4864(0,uVar2,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
  }
  func_0x000107c526c0(0x3ff0000000000000);
  func_0x000107c5a03c(uVar3);
  func_0x000107c61170(uVar3);
  if ((uVar2 & 0xc000000000000001) == 0) {
    if (*(ulong *)(uVar2 + 0x10) < 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103af3e30);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(uVar2 + 0x28);
    func_0x000107c61174(uVar3);
  }
  else {
    uVar3 = 1;
    FUN_103af4864(1,uVar2,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
  }
  func_0x000107c526c0(0x3ff0000000000000);
  func_0x000107c5a03c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61588(uVar2);
  uVar4 = *(undefined8 *)(uVar2 + 0x10);
  uVar3 = 0;
  FUN_103af4b54(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c61408((undefined8 *)(uVar2 + 0x20),uVar4,uVar3);
  return;
}



/* Entry: 103af3e30; end: 103af3fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af3e30(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  ppuVar6 = &puStack_80;
  uVar7 = *(ulong *)(unaff_x20 + _DAT_112fe9790);
  uVar2 = uVar7;
  func_0x000107c49eac();
  if ((uVar2 & 1) == 0) {
    if ((param_1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_setHidden__1126479f8,1);
      return;
    }
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar4 = &UNK_1106cf368;
    func_0x000107c613fc(&UNK_1106cf368,0x18,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x103af4b24;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1106cf380;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar4 = puStack_58;
    func_0x000107c61174();
    func_0x000107c61574(puVar4);
    puVar4 = &UNK_1106cf3b8;
    func_0x000107c613fc(&UNK_1106cf3b8,0x18,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    uStack_60 = 0x103af4b3c;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100288f10;
    puStack_68 = &UNK_1106cf3d0;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar4 = puStack_58;
    func_0x000107c61174(unaff_x20);
    func_0x000107c61574(puVar4);
    func_0x000107c3dcd0(0x3fb999999999999a,puVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
  }
  return;
}



/* Entry: 103af3fb8; end: 103af4407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af3fb8(double param_1,uint param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112fe9788);
  func_0x000107c550d8(uVar9,param_3,(param_2 ^ 0xffffffff) & 1);
  if ((~param_2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(unaff_x20 + _DAT_112fe9780),PTR_s_removeAllAnimations_1126284c8);
    return;
  }
  if (0.0 < param_1) {
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112fe9780);
    func_0x000107c5bb80(param_1,uVar10);
    func_0x000107c5a03c(uVar10);
  }
  uVar10 = 0x6957726564726f62;
  func_0x000107c5fadc(0x6957726564726f62,0xeb00000000687464);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c3dd18();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c5fdd0(0);
  func_0x000107c54ce4(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c5f06c(0x4018000000000000);
  func_0x000107c59e64(puVar3);
  func_0x000107c61170(uVar10);
  uVar10 = 0x7974696361706f;
  func_0x000107c5fadc(0x7974696361706f,0xe700000000000000);
  func_0x000107c3dd18();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c5fdd0(0);
  func_0x000107c54ce4(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c5fdd0(0x3ff0000000000000);
  func_0x000107c59e64(puVar2);
  func_0x000107c61170(uVar10);
  uVar4 = 0x112fe97c8;
  FUN_103af47c8(0x112fe97c8,&PTR__OBJC_CLASS___CABasicAnimation_1126b5708,0x112fe97d0,&UNK_10dd22180
               );
  func_0x000107c61534();
  *(undefined8 *)(uVar4 + 0x20) = puVar3;
  *(undefined8 *)(uVar4 + 0x18) = 5;
  *(undefined8 *)(uVar4 + 0x10) = 2;
  *(undefined **)(uVar4 + 0x28) = puVar2;
  func_0x000107c61174(puVar3);
  func_0x000107c61174(puVar2);
  if ((uVar4 & 0xc000000000000001) == 0) {
    puVar8 = puVar3;
    func_0x000107c61174(puVar3);
  }
  else {
    puVar8 = (undefined *)0x0;
    FUN_103af4864(0,uVar4,&PTR__OBJC_CLASS___CABasicAnimation_1126b5708,0x112fe97c8);
  }
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x000107c61168(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  func_0x000107c61174(puVar8);
  func_0x000107c54358(0x3fc999999999999a);
  puVar6 = puVar5;
  func_0x000107c43be8(puVar5);
  func_0x000107c61180();
  func_0x000107c59dfc(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar6);
  uVar10 = uVar9;
  func_0x000107c4aba4(uVar9);
  func_0x000107c61180();
  puVar6 = puVar8;
  func_0x000107c4a8e0(puVar8);
  func_0x000107c61180();
  func_0x000107c3d5a4(uVar10);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar6);
  if ((uVar4 & 0xc000000000000001) == 0) {
    if (*(ulong *)(uVar4 + 0x10) < 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103af4408);
      (*pcVar1)();
    }
    uVar10 = *(undefined8 *)(uVar4 + 0x28);
    func_0x000107c61174(uVar10);
  }
  else {
    uVar10 = 1;
    FUN_103af4864(1,uVar4,&PTR__OBJC_CLASS___CABasicAnimation_1126b5708,0x112fe97c8);
  }
  func_0x000107c61174();
  func_0x000107c54358(0x3fc999999999999a);
  func_0x000107c43be8(puVar5);
  func_0x000107c61180();
  func_0x000107c59dfc(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar5);
  func_0x000107c4aba4(uVar9);
  func_0x000107c61180();
  uVar7 = uVar10;
  func_0x000107c4a8e0(uVar10);
  func_0x000107c61180();
  func_0x000107c3d5a4(uVar9);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61588(uVar4);
  uVar10 = *(undefined8 *)(uVar4 + 0x10);
  uVar9 = 0;
  FUN_103af4b54(0,0x112fe97c8,&PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
  func_0x000107c61408((undefined8 *)(uVar4 + 0x20),uVar10,uVar9);
  return;
}



/* Entry: 103af4408; end: 103af4573;  */

void FUN_103af4408(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  if (0.0 < param_1) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar3 = &UNK_1106cf2c8;
    func_0x000107c613fc(&UNK_1106cf2c8,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_60 = FUN_103af4af4;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1106cf2e0;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_1106cf318;
    func_0x000107c613fc(&UNK_1106cf318,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
    pcStack_60 = (code *)0x103af4b1c;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100288f10;
    puStack_68 = &UNK_1106cf330;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c61174(unaff_x20);
    func_0x000107c61574(puVar3);
    func_0x000107c3dcd0(param_1,puVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 103af4574; end: 103af45d3; -[_TtC28SCCameraSnapBackPresentation31SnapBackInsetCaptureOverlayView initWithFrame:] */

void FUN_103af4574(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraSnapBackPresentation.SnapBackInsetCaptureOverlayView",0x3c,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103af45a0);
  (*pcVar1)();
}



/* Entry: 103af45d4; end: 103af466b; -[_TtC28SCCameraSnapBackPresentation31SnapBackInsetCaptureOverlayView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103af4640: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103af4644) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af45d4(long param_1)

{
  func_0x000100d664cc(*(undefined8 *)(param_1 + _DAT_112fe9760),
                      ((undefined8 *)(param_1 + _DAT_112fe9760))[1]);
  func_0x000100d664cc(*(undefined8 *)(param_1 + _DAT_112fe9768),
                      ((undefined8 *)(param_1 + _DAT_112fe9768))[1]);
  func_0x000100d664cc(*(undefined8 *)(param_1 + _DAT_112fe9770),
                      ((undefined8 *)(param_1 + _DAT_112fe9770))[1]);
  func_0x000100d664cc(*(undefined8 *)(param_1 + _DAT_112fe9778),
                      ((undefined8 *)(param_1 + _DAT_112fe9778))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe9780));
  return;
}



/* Entry: 103af466c; end: 103af46db; -[_TtC28SCCameraSnapBackPresentation31SnapBackInsetCaptureOverlayView handleRingTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af466c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112fe9760);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112fe9760))[1];
  func_0x000107c61174();
  func_0x000100b64c10(pcVar1,uVar2);
  (*pcVar1)();
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 103af46dc; end: 103af4757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af46dc(long param_1)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x000107c5bcc0();
  if (param_1 - 3U < 3) {
    pcVar2 = *(code **)(unaff_x20 + _DAT_112fe9770);
    lVar1 = _DAT_112fe9770;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    pcVar2 = *(code **)(unaff_x20 + _DAT_112fe9768);
    lVar1 = _DAT_112fe9768;
  }
  if (pcVar2 == (code *)0x0) {
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1 + 8);
  func_0x000107c6157c(uVar3);
  (*pcVar2)();
  if (pcVar2 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar3);
  return;
}



/* Entry: 103af4758; end: 103af47a7; -[_TtC28SCCameraSnapBackPresentation31SnapBackInsetCaptureOverlayView handleRingHold:] */

/* WARNING: Possible PIC construction at 0x000103af4790: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103af4794) */

void FUN_103af4758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103af46dc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103af47a8; end: 103af47c7;  */

void FUN_103af47a8(void)

{
  func_0x000107c61168(&PTR_PTR_112926a30);
  return;
}



/* Entry: 103af47c8; end: 103af483f;  */

void FUN_103af47c8(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103af4b54(0,param_1,param_2);
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



/* Entry: 103af4840; end: 103af4863;  */

void FUN_103af4840(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112fe97d8;
  plVar5 = (long *)&UNK_10dc51ab0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103af4b54(0,0x112fe97e0,&PTR__OBJC_CLASS___UIAccessibilityCustomAction_1126d0d38);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103af4864; end: 103af4af3;  */

ulong FUN_103af4864(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103af4948);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103af494c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_103af4b54(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103af4a20);
  (*pcVar2)();
}



/* Entry: 103af4af4; end: 103af4b53;  */

void FUN_103af4af4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 103af4b54; end: 103af4b93;  */

void FUN_103af4b54(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103af4b94; end: 103af4bab;  */

void FUN_103af4b94(long param_1,long param_2)

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



/* Entry: 103af4bac; end: 103af4ce7;  */

double FUN_103af4bac(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = param_1;
  func_0x000107c609cc();
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5d9bc();
  func_0x000107c61170(puVar2);
  dVar4 = 0.6;
  if (puVar3 != (undefined *)0x1) {
    dVar4 = 0.5;
  }
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  func_0x000107c40efc();
  func_0x000107c61180();
  func_0x000107c5d9bc();
  func_0x000107c61170(puVar1);
  dVar6 = param_1;
  func_0x000107c609bc(param_1,param_2,param_3,param_4);
  func_0x000107c609c0(param_1,param_2,param_3,param_4);
  return dVar6 - dVar5 * dVar4 * 0.5;
}



/* Entry: 103af4ce8; end: 103af4d6f;  */

void FUN_103af4ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107c610f8();
  FUN_103af4d70(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 103af4d70; end: 103af4f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103af4d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  puVar6 = &stack0xffffffffffffff70;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe97e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe97f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe97f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe9800);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe9808);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112fe9810;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112fe9818;
  puVar3 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  func_0x000107c42448();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  func_0x000107c610f8();
  func_0x000107c46734();
  func_0x000107c61170(puVar3);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112fe9820;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112fe9828;
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  func_0x000107c61614(unaff_x20 + _DAT_112fe9830,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe9838);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112fe9840;
  uVar5 = 0;
  FUN_103af4f78();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe9848);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1[2] = param_7;
  puVar1[3] = param_8;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff70,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_103af4f98();
  FUN_103af5150();
  FUN_103af533c();
  func_0x000107c61170(puVar6);
  return puVar6;
}



/* Entry: 103af4f78; end: 103af4f97;  */

void FUN_103af4f78(void)

{
  func_0x000107c61168(&PTR_PTR_112926c48);
  return;
}



/* Entry: 103af4f98; end: 103af514f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af4f98(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x20;
  undefined8 uVar5;
  
  func_0x000107c52ab8();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fe9810);
  func_0x000107c534b0(uVar4);
  func_0x000107c52ab8(uVar4);
  uVar1 = unaff_x20;
  func_0x000107c3d89c();
  func_0x0001008479c8();
  func_0x000107c61534();
  *(undefined8 *)(uVar1 + 0x18) = 5;
  *(undefined8 *)(uVar1 + 0x10) = 2;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fe9820);
  *(undefined8 *)(uVar1 + 0x20) = uVar2;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fe9818);
  *(undefined8 *)(uVar1 + 0x28) = uVar5;
  func_0x000107c61174();
  func_0x000107c61174(uVar5);
  if ((uVar1 & 0xc000000000000001) == 0) {
    uVar5 = uVar2;
    func_0x000107c61174(uVar2);
  }
  else {
    uVar5 = 0;
    func_0x000100f040d0(0,uVar1);
  }
  func_0x000107c52ab8();
  func_0x000107c3d89c(uVar4);
  func_0x000107c61170(uVar5);
  if ((uVar1 & 0xc000000000000001) == 0) {
    uVar5 = *(undefined8 *)(uVar1 + 0x28);
    func_0x000107c61174(uVar5);
  }
  else {
    uVar5 = 1;
    func_0x000100f040d0(1,uVar1);
  }
  func_0x000107c52ab8();
  func_0x000107c3d89c(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61588(uVar1);
  uVar5 = *(undefined8 *)(uVar1 + 0x10);
  uVar4 = 0;
  FUN_103af6680(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c61408((undefined8 *)(uVar1 + 0x20),uVar5,uVar4);
  func_0x000107c53840(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50();
  func_0x000107c61170(puVar3);
  FUN_103af596c();
  return;
}



/* Entry: 103af5150; end: 103af533b;  */

/* WARNING: Possible PIC construction at 0x000103af51b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103af51ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103af52c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103af51f0) */
/* WARNING: Removing unreachable block (ram,0x000103af51bc) */
/* WARNING: Removing unreachable block (ram,0x000103af52cc) */

void FUN_103af5150(void)

{
  undefined8 uVar1;
  
  func_0x000107c614f0();
  func_0x000107c55528();
  uVar1 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f19dc20);
  func_0x000107c520fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103af533c; end: 103af5687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af533c(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar2 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3fdd0(0x3fd999999999999a);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c59030(puVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c5902c(0x4020000000000000,puVar2);
  func_0x000107c59038(0,0x3ff0000000000000,puVar2);
  puVar6 = (undefined *)0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f05a090);
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x000107c43794(0x402a000000000000);
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c3eb9c(0x402a000000000000);
    func_0x000107c61180();
    puVar6 = puVar4;
    puVar5 = puVar4;
  }
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112fe9828);
  func_0x00010703cf20();
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    lVar7 = 0x112d48380;
    func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
    func_0x000107c61534();
    *(undefined8 *)(lVar7 + 0x18) = 6;
    *(undefined8 *)(lVar7 + 0x10) = 3;
    uVar11 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    *(undefined8 *)(lVar7 + 0x20) = uVar11;
    uVar8 = 0;
    FUN_103af6680(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
    *(undefined **)(lVar7 + 0x28) = puVar5;
    uVar12 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    *(undefined8 *)(lVar7 + 0x40) = uVar8;
    *(undefined8 *)(lVar7 + 0x48) = uVar12;
    func_0x000107c61174(uVar11);
    func_0x000107c61174(puVar5);
    func_0x000107c61174(uVar12);
    func_0x000107c5af88();
    func_0x000107c61180();
    uVar8 = 0;
    FUN_103af6680(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
    *(undefined **)(lVar7 + 0x50) = puVar3;
    uVar11 = *(undefined8 *)PTR__NSShadowAttributeName_110345828;
    *(undefined8 *)(lVar7 + 0x68) = uVar8;
    *(undefined8 *)(lVar7 + 0x70) = uVar11;
    uVar8 = 0;
    FUN_103af6680(0,0x112d7a748,&PTR__OBJC_CLASS___NSShadow_1126b6158);
    *(undefined8 *)(lVar7 + 0x90) = uVar8;
    *(undefined **)(lVar7 + 0x78) = puVar2;
    func_0x000107c61174(uVar11);
    func_0x000107c61174(puVar2);
    lVar9 = lVar7;
    func_0x000100ecbca8(lVar7);
    func_0x000107c61588(lVar7);
    uVar8 = 0x112d48398;
    func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
    func_0x000107c61408((undefined8 *)(lVar7 + 0x20),3,uVar8);
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    uVar11 = 0;
    func_0x000100eca28c(0);
    uVar8 = uVar11;
    func_0x000100ecbdec();
    lVar7 = lVar9;
    func_0x000107c5f9dc(lVar9,uVar11,PTR___sypN_11034f1a8 + 8,uVar8);
    func_0x000107c6142c(lVar9);
    func_0x000107c48af8(puVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar7);
    func_0x000107c529c4(uVar10);
    func_0x000107c61170(puVar3);
    func_0x000107c59c74(uVar10);
    func_0x000107c5b09c(uVar10);
    func_0x000107c5a378(uVar10);
    func_0x000107c3d89c();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103af5688);
  (*pcVar1)();
}



/* Entry: 103af5688; end: 103af56af; -[_TtC28SCCameraSnapBackPresentation29SnapBackInsetPresentationView initWithCoder:] */

void FUN_103af5688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_103af6454();
  return;
}



/* Entry: 103af56b0; end: 103af5767; -[_TtC28SCCameraSnapBackPresentation29SnapBackInsetPresentationView didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af56b0(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_s_didMoveToWindow_112527020;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar2);
  lVar3 = param_1;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170();
    puVar1 = (undefined8 *)(param_1 + _DAT_112fe9800);
    func_0x000107c61428(puVar1,auStack_58,0,0);
    pcVar5 = (code *)*puVar1;
    if (pcVar5 != (code *)0x0) {
      uVar4 = puVar1[1];
      func_0x000107c6157c(uVar4);
      (*pcVar5)();
      func_0x000100d6651c(pcVar5,uVar4);
    }
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103af5768; end: 103af596b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af5768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  double *pdVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_layoutSubviews_112600e60);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe9808);
  func_0x000107c61428(puVar1,auStack_78,0,0);
  pcVar5 = (code *)*puVar1;
  uVar3 = param_1;
  if (pcVar5 != (code *)0x0) {
    uVar3 = puVar1[1];
    func_0x000107c6157c(uVar3);
    (*pcVar5)();
    func_0x000100d6651c(pcVar5,uVar3);
    uVar3 = param_1;
    func_0x000107c609e0(param_1,param_2,param_3,param_4);
    if (((ulong)pcVar5 & 1) == 0) {
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe9848);
      *puVar1 = param_1;
      puVar1[1] = param_2;
      puVar1[2] = param_3;
      puVar1[3] = param_4;
    }
  }
  FUN_103af596c();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fe9828);
  func_0x000107c3ec60();
  func_0x000107c609bc();
  pdVar2 = (double *)(unaff_x20 + _DAT_112fe9848);
  dVar6 = *pdVar2;
  dVar7 = pdVar2[2];
  dVar8 = pdVar2[3];
  FUN_103af4bac(dVar6,pdVar2[1]);
  func_0x000107c609b8();
  dVar10 = dVar6 + 12.0;
  func_0x000107c3ec60(uVar4);
  func_0x000107c609b0();
  dVar6 = dVar6 * 0.5;
  dVar10 = dVar10 + dVar6;
  func_0x000107c3ec60();
  func_0x000107c609b8();
  dVar9 = dVar6;
  func_0x000107c515a0();
  dVar6 = dVar6 - dVar7;
  func_0x000107c3ec60(uVar4);
  func_0x000107c609b0();
  dVar6 = dVar6 - dVar9;
  if (dVar10 <= dVar6) {
    dVar6 = dVar10;
  }
  func_0x000107c532b4(uVar3,dVar6,uVar4);
  pdVar2 = (double *)(unaff_x20 + _DAT_112fe9838);
  dVar6 = *pdVar2;
  dVar9 = pdVar2[1];
  func_0x000107c3ec60();
  if ((dVar7 != *pdVar2) || (dVar8 != pdVar2[1])) {
    func_0x000107c3ec60();
    *pdVar2 = dVar7;
    pdVar2[1] = dVar8;
    if ((dVar6 != 0.0) || (dVar9 != 0.0)) {
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe97f8);
      func_0x000107c61428(puVar1,auStack_90,0,0);
      pcVar5 = (code *)*puVar1;
      if (pcVar5 != (code *)0x0) {
        uVar3 = puVar1[1];
        func_0x000107c6157c(uVar3);
        (*pcVar5)();
        func_0x000100d6651c(pcVar5,uVar3);
      }
    }
  }
  return;
}



/* Entry: 103af596c; end: 103af5b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af596c(void)

{
  double *pdVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  
  uVar4 = *(ulong *)(unaff_x20 + _DAT_112fe9810);
  pdVar1 = (double *)(unaff_x20 + _DAT_112fe9848);
  dVar6 = *pdVar1;
  func_0x000107c54b80(dVar6,pdVar1[1],pdVar1[2],pdVar1[3],uVar4);
  uVar3 = uVar4;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c515a0();
  uVar7 = 0x4030000000000000;
  if (dVar6 <= 0.0) {
    uVar7 = 0;
  }
  func_0x000107c539d4(uVar7,uVar3);
  func_0x000107c61170();
  func_0x0001008479c8();
  func_0x000107c61534();
  *(undefined8 *)(uVar3 + 0x18) = 5;
  *(undefined8 *)(uVar3 + 0x10) = 2;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112fe9820);
  *(undefined8 *)(uVar3 + 0x20) = uVar7;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fe9818);
  *(undefined8 *)(uVar3 + 0x28) = uVar5;
  func_0x000107c61174();
  func_0x000107c61174(uVar5);
  if ((uVar3 & 0xc000000000000001) == 0) {
    func_0x000107c61174(uVar7);
  }
  else {
    uVar7 = 0;
    func_0x000100f040d0(0,uVar3);
  }
  func_0x000107c3ec60();
  func_0x000107c40734(uVar4);
  func_0x000107c54b80(uVar7);
  func_0x000107c61170(uVar7);
  if ((uVar3 & 0xc000000000000001) == 0) {
    if (*(ulong *)(uVar3 + 0x10) < 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103af5b28);
      (*pcVar2)();
    }
    uVar7 = *(undefined8 *)(uVar3 + 0x28);
    func_0x000107c61174(uVar7);
  }
  else {
    uVar7 = 1;
    func_0x000100f040d0(1,uVar3);
  }
  func_0x000107c3ec60();
  func_0x000107c40734(uVar4);
  func_0x000107c54b80(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61588(uVar3);
  uVar5 = *(undefined8 *)(uVar3 + 0x10);
  uVar7 = 0;
  FUN_103af6680(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c61408((undefined8 *)(uVar3 + 0x20),uVar5,uVar7);
  return;
}



/* Entry: 103af5b28; end: 103af5b4f; -[_TtC28SCCameraSnapBackPresentation29SnapBackInsetPresentationView layoutSubviews] */

void FUN_103af5b28(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103af5768();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103af5b50; end: 103af5b7b; -[_TtC28SCCameraSnapBackPresentation29SnapBackInsetPresentationView initWithFrame:] */

void FUN_103af5b50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraSnapBackPresentation.SnapBackInsetPresentationView",0x3a,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103af5b7c);
  (*pcVar1)();
}



/* Entry: 103af5b7c; end: 103af5b7f;  */

void FUN_103af5b7c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103af5b80; end: 103af5c5b; -[_TtC28SCCameraSnapBackPresentation29SnapBackInsetPresentationView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103af5c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103af5c20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103af5c04) */
/* WARNING: Removing unreachable block (ram,0x000103af5c24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af5b80(long param_1)

{
  func_0x000100d6651c(*(undefined8 *)(param_1 + _DAT_112fe97e8),
                      ((undefined8 *)(param_1 + _DAT_112fe97e8))[1]);
  func_0x000100d6651c(*(undefined8 *)(param_1 + _DAT_112fe97f0),
                      ((undefined8 *)(param_1 + _DAT_112fe97f0))[1]);
  func_0x000100d6651c(*(undefined8 *)(param_1 + _DAT_112fe97f8),
                      ((undefined8 *)(param_1 + _DAT_112fe97f8))[1]);
  func_0x000100d6651c(*(undefined8 *)(param_1 + _DAT_112fe9800),
                      ((undefined8 *)(param_1 + _DAT_112fe9800))[1]);
  func_0x000100d6651c(*(undefined8 *)(param_1 + _DAT_112fe9808),
                      ((undefined8 *)(param_1 + _DAT_112fe9808))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe9810));
  return;
}



/* Entry: 103af5c5c; end: 103af5ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af5c5c(double param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  lVar3 = _DAT_112fe9830;
  ppuVar7 = &puStack_60;
  lVar1 = unaff_x20 + _DAT_112fe9830;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c49cd8();
    func_0x000107c61170(lVar1);
    if ((int)lVar2 == 0) {
      return;
    }
  }
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c54514();
    func_0x000107c61170(lVar3);
  }
  func_0x000107c52100();
  func_0x000107c520ec();
  uVar4 = 0x616320796c706552;
  func_0x000107c5fadc(0x616320796c706552,0xec0000006172656d);
  func_0x000107c520fc();
  func_0x000107c61170(uVar4);
  func_0x000107c3dc40(*(undefined8 *)(unaff_x20 + _DAT_112fe9828));
  if (0.0 < param_1) {
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar6 = &UNK_1106cf408;
    func_0x000107c613fc(&UNK_1106cf408,0x18,7);
    *(long *)(puVar6 + 0x10) = unaff_x20;
    pcStack_40 = FUN_103af65e4;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1106cf420;
    puStack_38 = puVar6;
    func_0x000107c60bc4(&puStack_60);
    puVar6 = puStack_38;
    func_0x000107c61174();
    func_0x000107c61574(puVar6);
    func_0x000107c3dccc(0x3fb999999999999a,puVar5);
    func_0x000107c60bd0(ppuVar7);
  }
  return;
}



/* Entry: 103af5ddc; end: 103af5ef7;  */

undefined8 FUN_103af5ddc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  lVar1 = *(long *)(param_3 + 0x18);
  if (lVar1 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(param_3,lVar1);
    lVar4 = *(long *)(lVar1 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lVar1);
    (**(code **)(lVar4 + 8))(puVar3,lVar1);
    func_0x000100183ab8(param_3);
  }
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c47904();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar2);
  return unaff_x20;
}



/* Entry: 103af5ef8; end: 103af6153;  */

/* WARNING: Possible PIC construction at 0x000103af60c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103af610c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103af6120: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103af6110) */
/* WARNING: Removing unreachable block (ram,0x000103af60cc) */
/* WARNING: Removing unreachable block (ram,0x000103af6150) */
/* WARNING: Removing unreachable block (ram,0x000103af60fc) */
/* WARNING: Removing unreachable block (ram,0x000103af6124) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af5ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  lVar5 = *(long *)(unaff_x20 + _DAT_112fe9820);
  func_0x000107c45034();
  func_0x000107c61180();
  if (lVar5 == 0) {
    lVar5 = param_5;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61174();
      lVar5 = param_5;
    }
    func_0x000107c3ec60();
    FUN_103af6680(0,0x112daaf08,&PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
    func_0x000107c614e8();
    func_0x000107c4eca8();
    func_0x000107c61180();
    func_0x000107c58bfc(0x3fe0000000000000);
    func_0x000107c6071c();
    puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x000107c45a60(param_1,param_2,param_3,param_4);
    puVar2 = &UNK_1106cf458;
    func_0x000107c613fc(&UNK_1106cf458,0x38,7);
    *(long *)(puVar2 + 0x10) = lVar5;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = param_2;
    *(undefined8 *)(puVar2 + 0x28) = param_3;
    *(undefined8 *)(puVar2 + 0x30) = param_4;
    puVar3 = &UNK_1106cf480;
    func_0x000107c613fc(&UNK_1106cf480,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x103af6618;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    pcStack_80 = FUN_103af662c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100f9148c;
    puStack_88 = &UNK_1106cf498;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    puVar2 = puStack_78;
    func_0x000107c61174(lVar5);
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c45138(puVar1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 103af6154; end: 103af62bf;  */

void FUN_103af6154(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  if (0.0 < param_1) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar3 = &UNK_1106cf4d0;
    func_0x000107c613fc(&UNK_1106cf4d0,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_60 = FUN_103af664c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1106cf4e8;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_1106cf520;
    func_0x000107c613fc(&UNK_1106cf520,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
    pcStack_60 = (code *)0x103af6658;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100288f10;
    puStack_68 = &UNK_1106cf538;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c61174(unaff_x20);
    func_0x000107c61574(puVar3);
    func_0x000107c3dcd0(param_1,puVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 103af62c0; end: 103af634b; -[_TtC28SCCameraSnapBackPresentation29SnapBackInsetPresentationView handleDismissTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af62c0(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112fe97e8);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
    uVar3 = puVar1[1];
    func_0x000107c61174(param_1);
    func_0x000100d6650c(pcVar2,uVar3);
    (*pcVar2)();
    func_0x000107c61170(param_1);
    func_0x000100d6651c(pcVar2,uVar3);
  }
  return;
}



/* Entry: 103af634c; end: 103af63db; -[_TtC28SCCameraSnapBackPresentation29SnapBackInsetPresentationView handleExpandAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103af634c(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112fe97f0);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
    uVar3 = puVar1[1];
    func_0x000107c61174(param_1);
    func_0x000100d6650c(pcVar2,uVar3);
    (*pcVar2)();
    func_0x000107c61170(param_1);
    func_0x000100d6651c(pcVar2,uVar3);
  }
  return 1;
}



/* Entry: 103af63dc; end: 103af63e3; -[_TtC28SCCameraSnapBackPresentationP33_D964D100D54A58FDDC3169387D68502B27SimultaneousGestureDelegate gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_103af63dc(void)

{
  return 1;
}



/* Entry: 103af63e4; end: 103af641f; -[_TtC28SCCameraSnapBackPresentationP33_D964D100D54A58FDDC3169387D68502B27SimultaneousGestureDelegate init] */

void FUN_103af63e4(undefined8 param_1)

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



/* Entry: 103af6420; end: 103af6453;  */

void FUN_103af6420(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103af6454; end: 103af65e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af6454(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe97e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe97f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe97f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe9800);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe9808);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112fe9810;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112fe9818;
  puVar4 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  func_0x000107c42448();
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  func_0x000107c610f8();
  func_0x000107c46734();
  func_0x000107c61170(puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112fe9820;
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112fe9828;
  puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  func_0x000107c61614(unaff_x20 + _DAT_112fe9830,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe9838);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112fe9840;
  uVar6 = 0;
  FUN_103af4f78();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar6;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010ef19c10,
                      "SCCameraSnapBackPresentation/SnapBackInsetPresentationView.swift",0x40,2,0x3b
                      ,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103af65e4);
  (*pcVar3)();
}



/* Entry: 103af65e4; end: 103af662b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af65e4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fe9828),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 103af662c; end: 103af664b;  */

void FUN_103af662c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103af664c; end: 103af665f;  */

void FUN_103af664c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 103af6660; end: 103af667f;  */

void FUN_103af6660(void)

{
  func_0x000107c61168(&PTR_PTR_112926b28);
  return;
}



/* Entry: 103af6680; end: 103af66bf;  */

void FUN_103af6680(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103af66c0; end: 103af66db;  */

void FUN_103af66c0(long param_1,long param_2)

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



/* Entry: 103af66dc; end: 103af6703; -[SCSnapBackPresenter isInsetPresentationActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_103af66dc(long param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(long *)(param_1 + _DAT_112fe98a0) != 0) {
    bVar1 = *(byte *)(param_1 + _DAT_112fe98a8) ^ 1;
  }
  return bVar1 & 1;
}



/* Entry: 103af6704; end: 103af67c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af6704(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe9900);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar2 = 0;
    FUN_103afa098(0);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fe9928);
    FUN_103af995c(uVar3,uVar2);
    *puVar1 = uVar3;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  return;
}



/* Entry: 103af67c4; end: 103af6827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103af67c4(void)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112fe9910;
  uVar2 = (uint)*(byte *)(unaff_x20 + _DAT_112fe9910);
  if (*(byte *)(unaff_x20 + _DAT_112fe9910) == 2) {
    uVar3 = 0;
    FUN_103afa098(0);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fe9928);
    FUN_103af9590(uVar4,uVar3);
    uVar2 = (uint)uVar4;
    *(byte *)(unaff_x20 + lVar1) = (byte)uVar4 & 1;
  }
  return uVar2 & 1;
}



/* Entry: 103af6828; end: 103af6a67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103af6828(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar4 = _DAT_112fe98b0;
  func_0x000107c61614(unaff_x20 + _DAT_112fe98b0,0);
  lVar6 = _DAT_112fe98b8;
  func_0x000107c61614(unaff_x20 + _DAT_112fe98b8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fe98a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fe98c0) = 0;
  lVar2 = _DAT_112fe98c8;
  uVar3 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112fe98a8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fe98d0) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112fe98d8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fe98e0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fe98e8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fe98f0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe98f8);
  uVar3 = *(undefined8 *)PTR__CGRectNull_1103475e8;
  uVar8 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
  uVar7 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
  puVar1[1] = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
  *puVar1 = uVar3;
  puVar1[3] = uVar8;
  puVar1[2] = uVar7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe9900);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe9908);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112fe9910) = 2;
  func_0x000107c61604(unaff_x20 + lVar4,param_1);
  func_0x000107c61604(unaff_x20 + lVar6,param_2);
  *(long *)(unaff_x20 + _DAT_112fe9918) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fe9920) = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  lVar4 = param_3;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar4;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
  }
  *(long *)(unaff_x20 + _DAT_112fe9928) = lVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112fe9930) = param_5;
  puVar5 = auStack_70;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return puVar5;
}



/* Entry: 103af6a68; end: 103af6b27; -[SCSnapBackPresenter initWithHost:coveredContentView:cameraCircumstanceEngine:legacyCameraTooltipsService:cameraConfig:] */

undefined8
FUN_103af6a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar2 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  uVar3 = param_3;
  FUN_103af8f14(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  return uVar3;
}



/* Entry: 103af6b28; end: 103af6bdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af6b28(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lStack_38;
  
  lVar2 = unaff_x20 + _DAT_112fe98b0;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = lVar2;
  func_0x000107c55848();
  FUN_103af6704();
  if (lVar3 != -1) {
    if (lVar3 == 1) {
      FUN_103af763c();
    }
    else {
      if (lVar3 != 2) {
        lStack_38 = lVar3;
        func_0x000107c60614(&UNK_1106cf800,&lStack_38,&UNK_1106cf800,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103af6bdc);
        (*pcVar1)();
      }
      FUN_103af6bdc(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 103af6bdc; end: 103af763b;  */

/* WARNING: Possible PIC construction at 0x000103af6c78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103af7158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103af73dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103af740c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103af75b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103af75fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103af7514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103af75b8) */
/* WARNING: Removing unreachable block (ram,0x000103af75d0) */
/* WARNING: Removing unreachable block (ram,0x000103af75d4) */
/* WARNING: Removing unreachable block (ram,0x000103af75d8) */
/* WARNING: Removing unreachable block (ram,0x000103af75dc) */
/* WARNING: Removing unreachable block (ram,0x000103af7410) */
/* WARNING: Removing unreachable block (ram,0x000103af73e0) */
/* WARNING: Removing unreachable block (ram,0x000103af715c) */
/* WARNING: Removing unreachable block (ram,0x000103af7518) */
/* WARNING: Removing unreachable block (ram,0x000103af7530) */
/* WARNING: Removing unreachable block (ram,0x000103af7534) */
/* WARNING: Removing unreachable block (ram,0x000103af7538) */
/* WARNING: Removing unreachable block (ram,0x000103af753c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af6bdc(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  long lStack_130;
  long lStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  
  lVar9 = _DAT_112fe98b0;
  lVar6 = unaff_x20 + _DAT_112fe98b0;
  func_0x000107c61618();
  if (lVar6 == 0) {
    return;
  }
  lVar10 = *(long *)(unaff_x20 + _DAT_112fe9928);
  if (lVar10 == 0) {
    lVar9 = unaff_x20 + lVar9;
    func_0x000107c61618();
    if (lVar9 != 0) {
      func_0x000103af6764();
      if ((0.0 < param_1) && (lVar10 = *(long *)(unaff_x20 + _DAT_112fe9920), lVar10 != 0)) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar10 != 0) {
          func_0x000107c402e8();
          lVar6 = lVar10;
          goto code_r0x000107c615e8;
        }
      }
      FUN_103af67c4();
      func_0x000107c4017c(param_1,lVar9);
      func_0x000107c615e8(lVar9);
    }
  }
  else {
    lVar9 = unaff_x20 + lVar9;
    if (param_5 == 0) {
      func_0x000107c61618();
      if (lVar9 != 0) {
        func_0x000107c615f0(lVar10);
        func_0x000103af6764();
        if ((0.0 < param_1) && (lVar6 = *(long *)(unaff_x20 + _DAT_112fe9920), lVar6 != 0)) {
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar6 != 0) {
            func_0x000107c402e8();
            goto code_r0x000107c615e8;
          }
        }
        FUN_103af67c4();
        func_0x000107c4017c(param_1,lVar9);
        lVar6 = lVar9;
      }
    }
    else {
      func_0x000107c61618();
      func_0x000107c615f0(lVar10);
      func_0x000107c61174();
      if (lVar9 == 0) {
        func_0x000107c4ede8(lVar6);
        lVar9 = lVar6;
        func_0x000107c4979c();
        func_0x000107c61180();
        func_0x000107c497a4();
        func_0x000107c61180();
        FUN_103af7af8();
        pdVar1 = (double *)(unaff_x20 + _DAT_112fe98f8);
        *pdVar1 = param_1;
        pdVar1[1] = param_2;
        pdVar1[2] = param_3;
        pdVar1[3] = param_4;
        puVar7 = &UNK_1106cf5c0;
        puVar4 = puVar7;
        dVar13 = param_2;
        dVar14 = param_3;
        dVar15 = param_4;
        func_0x000107c613fc(&UNK_1106cf5c0,0x18,7);
        func_0x000107c61614(puVar4 + 0x10);
        uStack_b8 = 0x103af91a0;
        puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
        uVar12 = 0x42000000;
        uStack_d0 = 0x42000000;
        puStack_c8 = &UNK_1000f6b44;
        puStack_c0 = &UNK_1106cf628;
        ppuVar5 = &puStack_d8;
        puStack_b0 = puVar4;
        func_0x000107c60bc4(ppuVar5);
        func_0x000107c61574(puStack_b0);
        func_0x000107c59330(lVar6);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c3ec60(lVar9);
        lVar6 = 0;
        FUN_103af6660();
        func_0x000107c610f8();
        FUN_103af4d70(uVar12,dVar13,dVar14,dVar15,param_1,param_2,param_3,param_4);
        puVar4 = puVar7;
        func_0x000107c613fc(&UNK_1106cf5c0,0x18,7);
        func_0x000107c61614(puVar4 + 0x10);
        puVar2 = (undefined8 *)(lVar6 + _DAT_112fe9808);
        func_0x000107c61428(puVar2,&puStack_d8,1,0);
        uVar11 = *puVar2;
        uVar3 = puVar2[1];
        *puVar2 = 0x103af91a8;
        puVar2[1] = puVar4;
        func_0x000107c6157c(puVar4);
        func_0x000100d665e8(uVar11,uVar3);
        func_0x000107c61574(puVar4);
        puVar4 = puVar7;
        func_0x000107c613fc(&UNK_1106cf5c0,0x18,7);
        func_0x000107c61614(puVar4 + 0x10);
        puVar2 = (undefined8 *)(lVar6 + _DAT_112fe97e8);
        func_0x000107c61428(puVar2,auStack_f0,1,0);
        uVar11 = *puVar2;
        uVar3 = puVar2[1];
        *puVar2 = 0x103af91b0;
        puVar2[1] = puVar4;
        func_0x000107c6157c(puVar4);
        func_0x000100d665e8(uVar11,uVar3);
        func_0x000107c61574(puVar4);
        puVar4 = puVar7;
        func_0x000107c613fc(&UNK_1106cf5c0,0x18,7);
        func_0x000107c61614(puVar4 + 0x10);
        puVar2 = (undefined8 *)(lVar6 + _DAT_112fe97f0);
        func_0x000107c61428(puVar2,auStack_108,1,0);
        uVar11 = *puVar2;
        uVar3 = puVar2[1];
        *puVar2 = 0x103af91b8;
        puVar2[1] = puVar4;
        func_0x000107c6157c(puVar4);
        func_0x000100d665e8(uVar11,uVar3);
        func_0x000107c61574(puVar4);
        func_0x000107c613fc(&UNK_1106cf5c0,0x18,7);
        func_0x000107c61614(puVar7 + 0x10);
        puVar2 = (undefined8 *)(lVar6 + _DAT_112fe97f8);
        func_0x000107c61428(puVar2,auStack_120,1,0);
        uVar11 = *puVar2;
        uVar3 = puVar2[1];
        *puVar2 = 0x103af91c0;
        puVar2[1] = puVar7;
        func_0x000107c6157c(puVar7);
        func_0x000100d665e8(uVar11,uVar3);
        func_0x000107c61574(puVar7);
        func_0x000107c49778(lVar9);
        uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112fe98a0);
        *(long *)(unaff_x20 + _DAT_112fe98a0) = lVar6;
        func_0x000107c61174();
        func_0x000107c61170(uVar11);
        lVar6 = unaff_x20 + _DAT_112fe98b8;
        func_0x000107c61618();
        if (lVar6 != 0) {
          FUN_103af5ef8();
          func_0x000107c61170(lVar6);
        }
        func_0x000107c3ec60(lVar9);
        FUN_103af4bac();
        lVar8 = 0;
        FUN_103af47a8();
        lVar9 = lVar8;
        func_0x000107c610f8();
        puVar2 = (undefined8 *)(lVar9 + _DAT_112fe9760);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(lVar9 + _DAT_112fe9768);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(lVar9 + _DAT_112fe9770);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(lVar9 + _DAT_112fe9778);
        *puVar2 = 0;
        puVar2[1] = 0;
        lVar6 = _DAT_112fe9788;
        puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c610f8();
        func_0x000107c615f0(lVar10);
        func_0x000107c453e4();
        *(undefined **)(lVar9 + lVar6) = puVar7;
        lVar6 = _DAT_112fe9790;
        puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c610f8();
        func_0x000107c453e4();
        *(undefined **)(lVar9 + lVar6) = puVar7;
        pdVar1 = (double *)(lVar9 + _DAT_112fe9798);
        *pdVar1 = param_1;
        pdVar1[1] = param_2;
        pdVar1[2] = param_3;
        pdVar1[3] = param_4;
        puVar7 = PTR_PTR_1126d4148;
        func_0x000107c610f8();
        func_0x000107c469cc(0,0,0x404f000000000000,0x404f000000000000);
        *(undefined **)(lVar9 + _DAT_112fe9780) = puVar7;
        lStack_130 = lVar9;
        lStack_128 = lVar8;
        func_0x000107c61154(uVar12,dVar13,dVar14,dVar15,&lStack_130,PTR_s_initWithFrame__1125e2948);
        func_0x000107c52ab8();
        FUN_103af33a4();
        func_0x000103af34a4();
        FUN_103af3608();
        lVar6 = lVar10;
      }
      else {
        func_0x000107c4017c(0xbff0000000000000,lVar9);
        lVar6 = lVar9;
      }
    }
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar6);
  return;
}



/* Entry: 103af763c; end: 103af7713;  */

/* WARNING: Possible PIC construction at 0x000103af76a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103af76ac) */
/* WARNING: Removing unreachable block (ram,0x000103af76c4) */
/* WARNING: Removing unreachable block (ram,0x000103af76c8) */
/* WARNING: Removing unreachable block (ram,0x000103af76cc) */
/* WARNING: Removing unreachable block (ram,0x000103af76d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af763c(double param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = unaff_x20 + _DAT_112fe98b0;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = lVar2;
  func_0x000103af6764();
  uVar1 = (uint)lVar3;
  if (0.0 < param_1) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112fe9920);
    uVar1 = 0;
    if (lVar3 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      uVar1 = 0;
      if (lVar3 != 0) {
        func_0x000107c402e8();
        lVar2 = lVar3;
        goto code_r0x000107c615e8;
      }
    }
  }
  FUN_103af67c4();
  func_0x000107c4017c(param_1,lVar2,param_3,uVar1 & 1);
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 103af7714; end: 103af7767; -[SCSnapBackPresenter configureWithToSnappableCompleteObservable:] */

/* WARNING: Possible PIC construction at 0x000103af7750: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103af7754) */

void FUN_103af7714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103af6b28(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103af7768; end: 103af7a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af7768(ulong param_1,byte param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar11 = _DAT_112fe98a8;
  lVar12 = _DAT_112fe98a0;
  lVar10 = *(long *)(unaff_x20 + _DAT_112fe98a0);
  if ((lVar10 != 0) && ((*(byte *)(unaff_x20 + _DAT_112fe98a8) & 1) == 0)) {
    lVar2 = unaff_x20 + _DAT_112fe98b0;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c61174(lVar10);
      FUN_103af5c5c();
      func_0x000107c61170(lVar10);
      *(undefined1 *)(unaff_x20 + lVar11) = 1;
      func_0x000100c82230();
      func_0x000107c59330(lVar2);
      lVar11 = *(long *)(unaff_x20 + lVar12);
      *(undefined8 *)(unaff_x20 + lVar12) = 0;
      lVar12 = *(long *)(unaff_x20 + _DAT_112fe98d8);
      *(undefined8 *)(unaff_x20 + _DAT_112fe98d8) = 0;
      uVar13 = 0;
      if (lVar11 != 0) {
        uVar13 = 0x3fb999999999999a;
      }
      if ((param_1 & 1) == 0) {
        uVar13 = 0;
      }
      lVar3 = lVar2;
      func_0x000107c497a4();
      func_0x000107c61180();
      lVar10 = _DAT_112fe98c0;
      if (*(long *)(unaff_x20 + _DAT_112fe98c0) == 0) {
        uVar4 = 0;
      }
      else {
        func_0x000107c4ff3c(lVar3);
        uVar4 = *(undefined8 *)(unaff_x20 + lVar10);
      }
      *(undefined8 *)(unaff_x20 + lVar10) = 0;
      func_0x000107c61170(uVar4);
      func_0x000107c5a378(lVar3);
      if ((param_2 & 1) == 0) {
        func_0x000107c5cf48(lVar2);
      }
      if (lVar11 != 0) {
        lVar10 = lVar11;
        func_0x000107c61174(lVar11);
        FUN_103af6154(uVar13);
        func_0x000107c61170(lVar10);
      }
      if (lVar12 != 0) {
        lVar10 = lVar12;
        func_0x000107c61174(lVar12);
        FUN_103af4408(uVar13);
        func_0x000107c61170(lVar10);
      }
      func_0x000107c526c0(0x3ff0000000000000,lVar3);
      puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168();
      puVar6 = &UNK_1106cf570;
      func_0x000107c613fc(&UNK_1106cf570,0x28,7);
      *(long *)(puVar6 + 0x10) = lVar11;
      *(long *)(puVar6 + 0x18) = lVar3;
      *(long *)(puVar6 + 0x20) = lVar12;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_80 = FUN_103af9168;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_1106cf588;
      ppuVar7 = &puStack_a0;
      puStack_78 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar6 = puStack_78;
      lVar10 = lVar11;
      func_0x000107c61174(lVar11);
      func_0x000107c61174(lVar12);
      func_0x000107c61174();
      func_0x000107c61574(puVar6);
      puVar6 = &UNK_1106cf5c0;
      func_0x000107c613fc(&UNK_1106cf5c0,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar8 = &UNK_1106cf5e8;
      func_0x000107c613fc(&UNK_1106cf5e8,0x30,7);
      *(long *)(puVar8 + 0x10) = lVar11;
      *(long *)(puVar8 + 0x18) = lVar3;
      puVar8[0x20] = param_2 & 1;
      *(undefined **)(puVar8 + 0x28) = puVar6;
      pcStack_80 = (code *)0x103af9190;
      puStack_a0 = puVar1;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_100288f10;
      puStack_88 = &UNK_1106cf600;
      ppuVar9 = &puStack_a0;
      puStack_78 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar6 = puStack_78;
      func_0x000107c61174(lVar10);
      func_0x000107c61174(lVar3);
      func_0x000107c61574(puVar6);
      func_0x000107c3dcd4(uVar13,0,puVar5);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar12);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 103af7a9c; end: 103af7af7; -[SCSnapBackPresenter transitionCoordinatorSelectedWithSwipeSupport:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af7a9c(long param_1,undefined8 param_2,int param_3)

{
  if (((*(long *)(param_1 + _DAT_112fe98a0) != 0) &&
      ((*(byte *)(param_1 + _DAT_112fe98a8) & 1) == 0)) && (param_3 == 0)) {
    func_0x000107c61174();
    FUN_103af7768(0,0);
    FUN_103af763c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 103af7af8; end: 103af7cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_103af7af8(double param_1,undefined8 param_2,double param_3,double param_4,
                    undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  double dVar7;
  double dVar8;
  
  uVar2 = unaff_x20 + _DAT_112fe98b0;
  func_0x000107c61618();
  if (uVar2 == 0) {
    return 0.0;
  }
  uVar3 = uVar2;
  func_0x000107c4979c();
  func_0x000107c61180();
  uVar4 = uVar2;
  func_0x000107c497a0();
  func_0x000107c61180();
  dVar8 = param_1;
  if (uVar4 != 0) {
    uVar5 = uVar4;
    func_0x000107c4e1ec();
    func_0x000107c61180();
    if (uVar5 == 0) {
      func_0x000107c61170(uVar4);
      dVar8 = param_1;
    }
    else {
      func_0x000107c4abec(uVar4);
      uVar6 = uVar3;
      func_0x000107c40734(uVar3,param_6,uVar5);
      dVar8 = param_1;
      func_0x000107c609e0();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      if ((uVar6 & 1) == 0) {
        func_0x000107c615e8(uVar2);
        uVar4 = uVar3;
        dVar8 = param_1;
        goto LAB_103af7cc4;
      }
    }
  }
  uVar4 = uVar2;
  func_0x000107c497a4();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5c42c();
  func_0x000107c61180();
  if (uVar5 == 0) {
    func_0x000107c3ec60(uVar3);
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(uVar3);
  }
  else {
    func_0x000107c3ec60(uVar4);
    func_0x000107c3f74c(uVar4);
    dVar7 = param_3 * 0.5;
    dVar8 = dVar8 - dVar7;
    func_0x000107c3f74c(uVar4);
    uVar6 = uVar3;
    func_0x000107c40734(dVar8,dVar7 - param_4 * 0.5,param_3,param_4,uVar3,param_6,uVar5);
    iVar1 = (int)uVar6;
    dVar7 = dVar8;
    func_0x000107c609e0();
    if (iVar1 != 0) {
      func_0x000107c3ec60(uVar3);
      dVar8 = dVar7;
    }
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    uVar4 = uVar3;
  }
LAB_103af7cc4:
  func_0x000107c61170(uVar4);
  return dVar8;
}



/* Entry: 103af7cf4; end: 103af7dd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af7cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_68,0,0);
  uVar3 = param_5 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112fe98a0;
  if (uVar3 != 0) {
    if ((*(long *)(uVar3 + _DAT_112fe98a0) != 0) && ((*(byte *)(uVar3 + _DAT_112fe98a8) & 1) == 0))
    {
      uVar4 = uVar3;
      FUN_103af7af8();
      puVar1 = (undefined8 *)(uVar3 + _DAT_112fe98f8);
      func_0x000107c609ac();
      if ((uVar4 & 1) == 0) {
        *puVar1 = param_1;
        puVar1[1] = param_2;
        puVar1[2] = param_3;
        puVar1[3] = param_4;
        if (*(long *)(uVar3 + lVar2) != 0) {
          func_0x000107c56a14();
        }
        if (*(long *)(uVar3 + _DAT_112fe98d8) != 0) {
          func_0x000107c56a14();
        }
      }
    }
    func_0x000107c61170(uVar3);
  }
  return;
}


