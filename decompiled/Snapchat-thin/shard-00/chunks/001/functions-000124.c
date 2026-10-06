/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1002e93ec; end: 1002e9403;  */

void FUN_1002e93ec(void)

{
  func_0x000107c610f8();
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1002e9404; end: 1002e955f;  */

void FUN_1002e9404(void)

{
  return;
}



/* Entry: 1002e9560; end: 1002e962b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002e9560(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar3 = _DAT_112dd8710;
  lVar2 = unaff_x20 + _DAT_112dd8710;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c5de0c();
    func_0x000107c615e8(lVar2);
  }
  lVar2 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c43b44();
    func_0x000107c615e8(lVar2);
  }
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c4f9d4();
    func_0x000107c615e8(lVar3);
  }
  puVar4 = PTR_PTR_1126b7050;
  func_0x000107c610f8();
  func_0x000107c462b0();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002e962c);
    (*pcVar1)();
  }
  return;
}



/* Entry: 1002e962c; end: 1002e963f;  */

void FUN_1002e962c(void)

{
  return;
}



/* Entry: 1002e9640; end: 1002e9647; -[SCManagedCaptureSessionImpl videoStabilizationMode] */

undefined8 FUN_1002e9640(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1002e9648; end: 1002e964f; -[SCManagedCaptureSessionImpl frontCameraStabilizationMode] */

undefined8 FUN_1002e9648(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1002e9650; end: 1002e966b; -[SCManagedCaptureSessionImpl rearCameraStabilizationMode] */

undefined8 FUN_1002e9650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1002e966c; end: 1002e96c7; -[SCCameraStabilizationState initWithCurrentStabilizationMode:frontCameraStabilizationMode:rearCameraStabilizationMode:] */

void FUN_1002e966c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270a438;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 1002e96c8; end: 1002e96ff;  */

/* WARNING: Possible PIC construction at 0x0001002e96e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002e96e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002e96c8(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_113075cb0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1002e9700; end: 1002e97eb;  */

void FUN_1002e9700(void)

{
  return;
}



/* Entry: 1002e97ec; end: 1002e983f; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl exposureHandler] */

void FUN_1002e97ec(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x000107c61174();
  puVar1 = &DAT_112da0d08;
  FUN_1002e9854(&DAT_112da0d08,FUN_1002e9924,&DAT_112da0b80,&DAT_112da0b88);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1002e9840; end: 1002e9853;  */

void FUN_1002e9840(void)

{
  return;
}



/* Entry: 1002e9854; end: 1002e9923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1002e9854(long *param_1,code *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  lVar8 = *param_1;
  puVar2 = *(undefined1 **)(unaff_x20 + lVar8);
  puVar6 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112da0d10);
    FUN_1000db838();
    lVar3 = 0;
    (*param_2)();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(undefined8 *)(lVar4 + *param_3) = uVar7;
    *(undefined1 **)(lVar4 + *param_4) = puVar2;
    puVar1 = PTR_s_init_1125d9248;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c615f0(uVar7);
    func_0x000107c61154(&lStack_60,puVar1);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar8);
    *(long **)(unaff_x20 + lVar8) = plVar5;
    func_0x000107c61174();
    func_0x000107c615e8(uVar7);
    puVar2 = (undefined1 *)0x0;
    puVar6 = (undefined1 *)plVar5;
  }
  func_0x000107c615f0(puVar2);
  return puVar6;
}



/* Entry: 1002e9924; end: 1002e9943;  */

void FUN_1002e9924(void)

{
  func_0x000107c61168(&PTR_PTR_1127d86b8);
  return;
}



/* Entry: 1002e9944; end: 1002e99cf;  */

void FUN_1002e9944(void)

{
  return;
}



/* Entry: 1002e99d0; end: 1002e9a57; -[_TtC26SCCaptureDeviceManagerImpl32CaptureDeviceExposureHandlerImpl currentExposureBias] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1002e99d0(float param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  double dVar2;
  
  func_0x000107c61174();
  lVar1 = 0;
  FUN_1002a1e70();
  if (lVar1 == 0) {
    func_0x000107c61170(param_2);
    dVar2 = 0.0;
  }
  else {
    func_0x000107c614f0();
    (**(code **)(param_3 + 0xf0))();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_2);
    dVar2 = (double)param_1;
  }
  return dVar2;
}



/* Entry: 1002e9a58; end: 1002e9c83;  */

void FUN_1002e9a58(void)

{
  return;
}



/* Entry: 1002e9c84; end: 1002e9cbb;  */

/* WARNING: Possible PIC construction at 0x0001002e9ca0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002e9ca4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002e9c84(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_113075ce0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1002e9cbc; end: 1002e9ce3;  */

void FUN_1002e9cbc(void)

{
  return;
}



/* Entry: 1002e9ce4; end: 1002e9d17; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl flashHandler] */

void FUN_1002e9ce4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1002e9d40();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1002e9d18; end: 1002e9d3f;  */

void FUN_1002e9d18(void)

{
  return;
}



/* Entry: 1002e9d40; end: 1002e9e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1002e9d40(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar3 = _DAT_112da0d18;
  plVar8 = &lStack_60;
  puVar4 = *(undefined1 **)(unaff_x20 + _DAT_112da0d18);
  puVar5 = puVar4;
  if (puVar4 == (undefined1 *)0x0) {
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112da0d10);
    FUN_1002e9e54();
    puVar5 = puVar4;
    FUN_1000db838();
    lVar6 = 0;
    FUN_1002e9eec();
    lVar7 = lVar6;
    func_0x000107c610f8();
    lVar2 = _DAT_112da0bd0;
    func_0x000107c61614(lVar7 + _DAT_112da0bd0,0);
    *(undefined8 *)(lVar7 + _DAT_112da0bd8) = 0;
    *(undefined8 *)(lVar7 + _DAT_112da0bb8) = uVar9;
    *(undefined1 **)(lVar7 + _DAT_112da0bc0) = puVar4;
    *(undefined1 **)(lVar7 + _DAT_112da0bc8) = puVar5;
    func_0x000107c61604(lVar7 + lVar2);
    puVar1 = PTR_s_init_1125d9248;
    lStack_60 = lVar7;
    lStack_58 = lVar6;
    func_0x000107c615f0(uVar9);
    func_0x000107c61154(&lStack_60,puVar1);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long **)(unaff_x20 + lVar3) = plVar8;
    func_0x000107c61174();
    func_0x000107c615e8(uVar9);
    puVar4 = (undefined1 *)0x0;
    puVar5 = (undefined1 *)plVar8;
  }
  func_0x000107c615f0(puVar4);
  return puVar5;
}



/* Entry: 1002e9e54; end: 1002e9ec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1002e9e54(void)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112da0d80;
  pcVar2 = *(char **)(unaff_x20 + _DAT_112da0d80);
  pcVar3 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    pcVar3 = "mainQueuePerformer";
    func_0x0001000c10c0();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(char **)(unaff_x20 + lVar1) = pcVar3;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar4);
    pcVar2 = (char *)0x0;
  }
  func_0x000107c615f0(pcVar2);
  return pcVar3;
}



/* Entry: 1002e9ec4; end: 1002e9eeb;  */

void FUN_1002e9ec4(void)

{
  return;
}



/* Entry: 1002e9eec; end: 1002e9f0b;  */

void FUN_1002e9eec(void)

{
  func_0x000107c61168(&PTR_PTR_1127d8780);
  return;
}



/* Entry: 1002e9f0c; end: 1002e9f97;  */

void FUN_1002e9f0c(void)

{
  return;
}



/* Entry: 1002e9f98; end: 1002ea00f; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFlashHandlerImpl isFlashSupported] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1002e9f98(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  func_0x000107c61174();
  lVar1 = 0;
  FUN_1002a1e70();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c614f0();
    uVar3 = (uint)lVar2;
    (**(code **)(param_2 + 0x158))();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
  return uVar3 & 1;
}



/* Entry: 1002ea010; end: 1002ea073;  */

void FUN_1002ea010(void)

{
  return;
}



/* Entry: 1002ea074; end: 1002ea093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002ea074(void)

{
  long unaff_x20;
  
  func_0x000107c448b0(*(undefined8 *)(unaff_x20 + _DAT_112da1120));
  return;
}



/* Entry: 1002ea094; end: 1002ea0e3;  */

void FUN_1002ea094(void)

{
  return;
}



/* Entry: 1002ea0e4; end: 1002ea15b; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFlashHandlerImpl isTorchSupported] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1002ea0e4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  func_0x000107c61174();
  lVar1 = 0;
  FUN_1002a1e70();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c614f0();
    uVar3 = (uint)lVar2;
    (**(code **)(param_2 + 0x168))();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
  return uVar3 & 1;
}



/* Entry: 1002ea15c; end: 1002ea197;  */

void FUN_1002ea15c(void)

{
  return;
}



/* Entry: 1002ea198; end: 1002ea1b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002ea198(void)

{
  long unaff_x20;
  
  func_0x000107c44bc8(*(undefined8 *)(unaff_x20 + _DAT_112da1120));
  return;
}



/* Entry: 1002ea1b8; end: 1002ea207;  */

void FUN_1002ea1b8(void)

{
  return;
}



/* Entry: 1002ea208; end: 1002ea27f; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFlashHandlerImpl isFlashActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1002ea208(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  func_0x000107c61174();
  lVar1 = 0;
  FUN_1002a1e70();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c614f0();
    uVar3 = (uint)lVar2;
    (**(code **)(param_2 + 0x150))();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
  return uVar3 & 1;
}



/* Entry: 1002ea280; end: 1002ea2bb;  */

void FUN_1002ea280(void)

{
  return;
}



/* Entry: 1002ea2bc; end: 1002ea2e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1002ea2bc(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112da1120);
  func_0x000107c43698(lVar1);
  return lVar1 == 1;
}



/* Entry: 1002ea2e4; end: 1002ea347;  */

void FUN_1002ea2e4(void)

{
  return;
}



/* Entry: 1002ea348; end: 1002ea42f; -[SCRingFlashSelectionInfo initWithRingFlashState:lastSelectedColorCode:lastSelectedBorderWidthRatio:expectedExposureDurationFactor:] */

undefined1 *
FUN_1002ea348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_11270a420;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1002ea430; end: 1002ea443;  */

void FUN_1002ea430(void)

{
  return;
}



/* Entry: 1002ea444; end: 1002ea47b;  */

/* WARNING: Possible PIC construction at 0x0001002ea460: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002ea464) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002ea444(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_113075d00) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1002ea47c; end: 1002ea4f3; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFlashHandlerImpl isTorchActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1002ea47c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  func_0x000107c61174();
  lVar1 = 0;
  FUN_1002a1e70();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c614f0();
    uVar3 = (uint)lVar2;
    (**(code **)(param_2 + 0x160))();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
  return uVar3 & 1;
}



/* Entry: 1002ea4f4; end: 1002ea507;  */

void FUN_1002ea4f4(void)

{
  return;
}



/* Entry: 1002ea508; end: 1002ea52f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1002ea508(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112da1120);
  func_0x000107c5cc8c(lVar1);
  return lVar1 == 1;
}



/* Entry: 1002ea530; end: 1002ea5fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002ea530(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_113075d08) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1002ea5fc; end: 1002ea62f; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl zoomHandler] */

void FUN_1002ea5fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1002ea630();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1002ea630; end: 1002ea70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1002ea630(void)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar2 = _DAT_112da0d28;
  plVar6 = &lStack_50;
  puVar3 = *(undefined1 **)(unaff_x20 + _DAT_112da0d28);
  puVar8 = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112da0d10);
    FUN_1000db838();
    lVar4 = 0;
    FUN_1002ea710();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112da0cd0) = 0;
    *(undefined1 *)(lVar5 + _DAT_112da0cd8) = 0;
    *(undefined8 *)(lVar5 + _DAT_112da0cc0) = uVar7;
    *(undefined1 **)(lVar5 + _DAT_112da0cc8) = puVar3;
    puVar1 = PTR_s_init_1125d9248;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c615f0(uVar7);
    func_0x000107c61154(&lStack_50,puVar1);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long **)(unaff_x20 + lVar2) = plVar6;
    func_0x000107c61174();
    func_0x000107c615e8(uVar7);
    puVar3 = (undefined1 *)0x0;
    puVar8 = (undefined1 *)plVar6;
  }
  func_0x000107c615f0(puVar3);
  return puVar8;
}



/* Entry: 1002ea710; end: 1002ea72f;  */

void FUN_1002ea710(void)

{
  func_0x000107c61168(&PTR_PTR_1127d8ab8);
  return;
}



/* Entry: 1002ea730; end: 1002ea7af; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl defaultZoomFactor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1002ea730(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174();
  lVar1 = 0;
  FUN_1002a1e70();
  if (lVar1 == 0) {
    param_1 = 0x3ff0000000000000;
  }
  else {
    func_0x000107c614f0();
    (**(code **)(param_3 + 0x28))();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 1002ea7b0; end: 1002ea81b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1002ea7b0(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112da10b8;
  func_0x000107c61428(unaff_x20 + _DAT_112da10b8,auStack_38,0,0);
  uVar3 = 0x3ff0000000000000;
  if ((*(byte *)(unaff_x20 + lVar1) & 1) == 0) {
    puVar2 = PTR__AVCaptureDeviceTypeBuiltInUltraWideCamera_110347f18;
    FUN_1002ea81c(0x3ff0000000000000,PTR__AVCaptureDeviceTypeBuiltInUltraWideCamera_110347f18,
                  PTR__AVCaptureDeviceTypeBuiltInDualWideCamera_110347ef0);
    uVar3 = 0x4000000000000000;
    if (((ulong)puVar2 & 1) == 0) {
      uVar3 = 0x3ff0000000000000;
    }
  }
  return uVar3;
}



/* Entry: 1002ea81c; end: 1002ea9f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1002ea81c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112da1120);
  uVar1 = uVar5;
  puVar2 = param_2;
  func_0x000107c41970();
  func_0x000107c61180();
  uVar7 = *param_1;
  uVar8 = uVar1;
  func_0x000107c5faec();
  puVar3 = puVar2;
  func_0x000107c5faec();
  if (uVar8 == uVar7 && puVar2 == puVar3) {
    func_0x000107c61170(uVar1);
LAB_1002ea990:
    func_0x000107c6142c(puVar2);
    func_0x000107c6142c(puVar3);
  }
  else {
    puVar4 = puVar2;
    func_0x000107c605b8(uVar8,puVar2,uVar7,puVar3,0);
    func_0x000107c61170(uVar1);
    func_0x000107c6142c(puVar2);
    func_0x000107c6142c(puVar3);
    if ((uVar8 & 1) == 0) {
      uVar1 = uVar5;
      func_0x000107c41970();
      func_0x000107c61180();
      uVar7 = *param_2;
      uVar8 = uVar1;
      puVar2 = puVar4;
      func_0x000107c5faec();
      puVar3 = puVar2;
      func_0x000107c5faec();
      if (uVar8 == uVar7 && puVar2 == puVar3) {
        func_0x000107c61170(uVar1);
        goto LAB_1002ea990;
      }
      puVar4 = puVar2;
      func_0x000107c605b8(uVar8,puVar2,uVar7,puVar3,0);
      func_0x000107c61170(uVar1);
      func_0x000107c6142c(puVar2);
      func_0x000107c6142c(puVar3);
      if ((uVar8 & 1) == 0) {
        func_0x000107c41970();
        func_0x000107c61180();
        uVar8 = *(ulong *)PTR__AVCaptureDeviceTypeBuiltInTripleCamera_110347f08;
        uVar1 = uVar5;
        func_0x000107c5faec();
        puVar2 = puVar4;
        func_0x000107c5faec();
        if ((uVar1 == uVar8) && (puVar4 == puVar2)) {
          uVar6 = 1;
        }
        else {
          func_0x000107c605b8(uVar1,puVar4,uVar8,puVar2,0);
          uVar6 = (uint)uVar1;
        }
        func_0x000107c6142c(puVar4);
        func_0x000107c6142c(puVar2);
        func_0x000107c61170(uVar5);
        goto LAB_1002ea9a0;
      }
    }
  }
  uVar6 = 1;
LAB_1002ea9a0:
  return uVar6 & 1;
}



/* Entry: 1002ea9f8; end: 1002eaa13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002ea9f8(undefined4 param_1)

{
  undefined4 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined4 *)(unaff_x20 + _DAT_113075d50);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1002eaa14; end: 1002eaa8b; -[_TtC26SCCaptureDeviceManagerImpl41CaptureDeviceCapabilitiesInfoProviderImpl isUltraWideCameraActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1002eaa14(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  func_0x000107c61174();
  lVar1 = 0;
  FUN_1002a1e70();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c614f0();
    uVar3 = (uint)lVar2;
    (**(code **)(param_2 + 0x88))();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
  return uVar3 & 1;
}



/* Entry: 1002eaa8c; end: 1002eaab3;  */

uint FUN_1002eaa8c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__AVCaptureDeviceTypeBuiltInUltraWideCamera_110347f18;
  FUN_1002ea81c(PTR__AVCaptureDeviceTypeBuiltInUltraWideCamera_110347f18,
                PTR__AVCaptureDeviceTypeBuiltInDualWideCamera_110347ef0);
  return (uint)puVar1 & 1;
}



/* Entry: 1002eaab4; end: 1002eaac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002eaab4(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_113075d58) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1002eaac8; end: 1002eab3f; -[_TtC26SCCaptureDeviceManagerImpl41CaptureDeviceCapabilitiesInfoProviderImpl isTelephotoCameraActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1002eaac8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  func_0x000107c61174();
  lVar1 = 0;
  FUN_1002a1e70();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c614f0();
    uVar3 = (uint)lVar2;
    (**(code **)(param_2 + 0x90))();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
  return uVar3 & 1;
}



/* Entry: 1002eab40; end: 1002eab67;  */

uint FUN_1002eab40(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__AVCaptureDeviceTypeBuiltInTelephotoCamera_110347f00;
  FUN_1002ea81c(PTR__AVCaptureDeviceTypeBuiltInTelephotoCamera_110347f00,
                PTR__AVCaptureDeviceTypeBuiltInDualCamera_110347ee8);
  return (uint)puVar1 & 1;
}



/* Entry: 1002eab68; end: 1002eab7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002eab68(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_113075d60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1002eab7c; end: 1002eabcb; -[_TtC26SCCaptureDeviceManagerImpl41CaptureDeviceCapabilitiesInfoProviderImpl hasSupportForBackCameraDeviceType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1002eab7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1002eabcc(param_3);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 1002eabcc; end: 1002eadab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1002eabcc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_70;
  
  puVar1 = param_1;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  uStack_88 = 0;
  uStack_80 = 0xe000000000000000;
  func_0x000107c61174(uVar2);
  func_0x000107c602fc(0x41);
  func_0x000107c5fb78(0xd00000000000003f,0x800000010ef82d30);
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puStack_70 = param_1;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  uVar5 = uStack_80;
  uVar3 = uStack_88;
  FUN_1000a9a18(uStack_88,uStack_80);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar5);
  FUN_1002a49d0();
  FUN_10006c804();
  func_0x000107c61574(uVar5);
  if (param_1 == (undefined8 *)0x2) {
    FUN_1000dc2b8();
    uVar2 = uVar5;
    func_0x0001002eb138();
    uVar6 = (uint)uVar2;
  }
  else if (param_1 == (undefined8 *)0x1) {
    FUN_1000dc2b8();
    uVar2 = uVar5;
    FUN_1002eadac();
    uVar6 = (uint)uVar2;
  }
  else {
    if (param_1 != (undefined8 *)0x0) {
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112da0eb8);
      func_0x000107c6157c(uVar5);
      FUN_100070bfc();
      func_0x000107c61574(uVar5);
      uVar6 = 0;
      goto LAB_1002ead5c;
    }
    FUN_1000dc2b8();
    uVar2 = uVar5;
    func_0x00010146d750();
    uVar6 = (uint)uVar2;
  }
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112da0eb8);
  func_0x000107c6157c(uVar5);
  FUN_100070bfc();
  func_0x000107c61574(uVar5);
LAB_1002ead5c:
  func_0x000107c61428(puVar1,&uStack_88,0,0);
  uVar5 = *puVar1;
  func_0x000107c61174(uVar5);
  FUN_1000aa0a8(uVar3);
  func_0x000107c61170(uVar5);
  return uVar6 & 1;
}



/* Entry: 1002eadac; end: 1002eadbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1002eadac(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112da0df0;
  uVar2 = (uint)*(byte *)(unaff_x20 + _DAT_112da0df0);
  if (*(byte *)(unaff_x20 + _DAT_112da0df0) == 2) {
    lVar3 = unaff_x20;
    FUN_1002eadc0();
    uVar2 = (uint)lVar3;
    *(byte *)(unaff_x20 + lVar1) = (byte)lVar3 & 1;
  }
  return uVar2 & 1;
}



/* Entry: 1002eadc0; end: 1002eb0e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1002eadc0(ulong *param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined1 auStack_90 [48];
  
  puVar3 = param_1;
  FUN_1000eb398();
  FUN_1000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174();
  uVar10 = 0x800000010ef82730;
  uVar5 = 0xd000000000000038;
  FUN_1000a9a18();
  func_0x000107c61170();
  if ((*(byte *)((long)param_1 + _DAT_112da0dd8) & 1) != 0) {
    uVar15 = 0;
    goto LAB_1002eb094;
  }
  FUN_1000eb730();
  if (uVar4 >> 0x3e == 0) {
    uVar14 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    if (uVar14 == 0) goto LAB_1002eb088;
LAB_1002eae6c:
    uVar16 = 0;
    uVar12 = *(ulong *)PTR__AVCaptureDeviceTypeBuiltInDualWideCamera_110347ef0;
    uVar13 = *(ulong *)PTR__AVCaptureDeviceTypeBuiltInTripleCamera_110347f08;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002eb070);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(uVar4 + uVar16 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar16;
        uVar10 = uVar4;
        FUN_1002370d8();
      }
      uVar1 = uVar16 + 1;
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002eb06c);
        (*pcVar2)();
      }
      uVar7 = uVar6;
      func_0x000107c4eb70();
      if (uVar7 == 1) {
        uVar7 = uVar6;
        func_0x000107c41970();
        func_0x000107c61180();
        uVar8 = uVar7;
        func_0x000107c5faec();
        uVar9 = uVar12;
        uVar11 = uVar10;
        func_0x000107c5faec();
        if ((uVar8 == uVar9) && (uVar10 == uVar11)) {
          func_0x000107c61170(uVar6);
          func_0x000107c6142c(uVar4);
          func_0x000107c61170(uVar7);
          func_0x000107c6142c(uVar10);
          uVar4 = uVar11;
LAB_1002eb020:
          uVar15 = 1;
        }
        else {
          uVar9 = uVar10;
          func_0x000107c605b8();
          func_0x000107c61170(uVar7);
          func_0x000107c6142c(uVar10);
          func_0x000107c6142c(uVar11);
          if ((uVar8 & 1) == 0) {
            uVar7 = uVar6;
            func_0x000107c41970();
            func_0x000107c61180();
            uVar8 = uVar7;
            func_0x000107c5faec();
            uVar10 = uVar13;
            uVar11 = uVar9;
            func_0x000107c5faec();
            if ((uVar8 != uVar10) || (uVar9 != uVar11)) {
              uVar10 = uVar9;
              func_0x000107c605b8();
              func_0x000107c61170(uVar7);
              func_0x000107c61170(uVar6);
              func_0x000107c6142c(uVar9);
              func_0x000107c6142c(uVar11);
              if ((uVar8 & 1) == 0) goto LAB_1002eaeac;
              goto LAB_1002eb020;
            }
            func_0x000107c61170(uVar7);
            func_0x000107c61170(uVar6);
            func_0x000107c6142c(uVar9);
            func_0x000107c6142c(uVar11);
          }
          else {
            func_0x000107c61170(uVar6);
          }
          uVar15 = 1;
        }
        goto LAB_1002eb08c;
      }
      func_0x000107c61170(uVar6);
LAB_1002eaeac:
      uVar16 = uVar16 + 1;
    } while (uVar1 != uVar14);
    uVar15 = 0;
  }
  else {
    uVar14 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar14 = uVar4;
    }
    func_0x000107c60480();
    if (uVar14 != 0) goto LAB_1002eae6c;
LAB_1002eb088:
    uVar15 = 0;
  }
LAB_1002eb08c:
  func_0x000107c6142c(uVar4);
LAB_1002eb094:
  func_0x000107c61428(puVar3,auStack_90,0,0);
  uVar10 = *puVar3;
  func_0x000107c61174(uVar10);
  FUN_1000aa0a8(uVar5);
  func_0x000107c61170(uVar10);
  return uVar15;
}



/* Entry: 1002eb0e8; end: 1002eb123;  */

uint FUN_1002eb0e8(long *param_1,code *param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *param_1;
  bVar1 = *(byte *)(unaff_x20 + lVar4);
  uVar2 = (uint)bVar1;
  if (bVar1 == 2) {
    lVar3 = unaff_x20;
    (*param_2)();
    uVar2 = (uint)lVar3;
    *(byte *)(unaff_x20 + lVar4) = (byte)lVar3 & 1;
  }
  return uVar2 & 1;
}



/* Entry: 1002eb124; end: 1002eb14b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002eb124(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_113075d68) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1002eb14c; end: 1002eb473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1002eb14c(ulong *param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined1 auStack_90 [48];
  
  puVar3 = param_1;
  FUN_1000eb398();
  FUN_1000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174();
  uVar10 = 0x800000010ef82770;
  uVar5 = 0xd000000000000038;
  FUN_1000a9a18();
  func_0x000107c61170();
  if ((*(byte *)((long)param_1 + _DAT_112da0dd8) & 1) != 0) {
    uVar15 = 0;
    goto LAB_1002eb420;
  }
  FUN_1000eb730();
  if (uVar4 >> 0x3e == 0) {
    uVar14 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    if (uVar14 == 0) goto LAB_1002eb414;
LAB_1002eb1f8:
    uVar16 = 0;
    uVar12 = *(ulong *)PTR__AVCaptureDeviceTypeBuiltInDualCamera_110347ee8;
    uVar13 = *(ulong *)PTR__AVCaptureDeviceTypeBuiltInTripleCamera_110347f08;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002eb3fc);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(uVar4 + uVar16 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar16;
        uVar10 = uVar4;
        FUN_1002370d8();
      }
      uVar1 = uVar16 + 1;
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002eb3f8);
        (*pcVar2)();
      }
      uVar7 = uVar6;
      func_0x000107c4eb70();
      if (uVar7 == 1) {
        uVar7 = uVar6;
        func_0x000107c41970();
        func_0x000107c61180();
        uVar8 = uVar7;
        func_0x000107c5faec();
        uVar9 = uVar12;
        uVar11 = uVar10;
        func_0x000107c5faec();
        if ((uVar8 == uVar9) && (uVar10 == uVar11)) {
          func_0x000107c61170(uVar6);
          func_0x000107c6142c(uVar4);
          func_0x000107c61170(uVar7);
          func_0x000107c6142c(uVar10);
          uVar4 = uVar11;
LAB_1002eb3ac:
          uVar15 = 1;
        }
        else {
          uVar9 = uVar10;
          func_0x000107c605b8();
          func_0x000107c61170(uVar7);
          func_0x000107c6142c(uVar10);
          func_0x000107c6142c(uVar11);
          if ((uVar8 & 1) == 0) {
            uVar7 = uVar6;
            func_0x000107c41970();
            func_0x000107c61180();
            uVar8 = uVar7;
            func_0x000107c5faec();
            uVar10 = uVar13;
            uVar11 = uVar9;
            func_0x000107c5faec();
            if ((uVar8 != uVar10) || (uVar9 != uVar11)) {
              uVar10 = uVar9;
              func_0x000107c605b8();
              func_0x000107c61170(uVar7);
              func_0x000107c61170(uVar6);
              func_0x000107c6142c(uVar9);
              func_0x000107c6142c(uVar11);
              if ((uVar8 & 1) == 0) goto LAB_1002eb238;
              goto LAB_1002eb3ac;
            }
            func_0x000107c61170(uVar7);
            func_0x000107c61170(uVar6);
            func_0x000107c6142c(uVar9);
            func_0x000107c6142c(uVar11);
          }
          else {
            func_0x000107c61170(uVar6);
          }
          uVar15 = 1;
        }
        goto LAB_1002eb418;
      }
      func_0x000107c61170(uVar6);
LAB_1002eb238:
      uVar16 = uVar16 + 1;
    } while (uVar1 != uVar14);
    uVar15 = 0;
  }
  else {
    uVar14 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar14 = uVar4;
    }
    func_0x000107c60480();
    if (uVar14 != 0) goto LAB_1002eb1f8;
LAB_1002eb414:
    uVar15 = 0;
  }
LAB_1002eb418:
  func_0x000107c6142c(uVar4);
LAB_1002eb420:
  func_0x000107c61428(puVar3,auStack_90,0,0);
  uVar10 = *puVar3;
  func_0x000107c61174(uVar10);
  FUN_1000aa0a8(uVar5);
  func_0x000107c61170(uVar10);
  return uVar15;
}



/* Entry: 1002eb474; end: 1002eb4d7;  */

void FUN_1002eb474(void)

{
  return;
}



/* Entry: 1002eb4d8; end: 1002eb517; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl opticalTelephotoZoomFactor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002eb4d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001002eb620();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1002eb518; end: 1002eb68b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1002eb518(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [48];
  
  puVar1 = param_1;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000037;
  FUN_1000a9a18(0xd000000000000037,0x800000010ef82f20);
  func_0x000107c61170(uVar2);
  FUN_1002a49d0();
  FUN_10006c804();
  func_0x000107c61574(uVar2);
  FUN_1000dc2b8();
  uVar4 = uVar2;
  FUN_1002eba74();
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)((long)param_1 + _DAT_112da0eb8);
  func_0x000107c6157c(uVar2);
  FUN_100070bfc();
  func_0x000107c61574(uVar2);
  func_0x000107c61428(puVar1,auStack_70,0,0);
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  FUN_1000aa0a8(uVar3);
  func_0x000107c61170(uVar2);
  return uVar4;
}



/* Entry: 1002eb68c; end: 1002eb69f;  */

void FUN_1002eb68c(void)

{
  return;
}



/* Entry: 1002eb6a0; end: 1002eba73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1002eb6a0(ulong *param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_90 [48];
  
  puVar3 = param_1;
  FUN_1000eb398();
  FUN_1000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174();
  uVar10 = 0x800000010ef82900;
  uVar5 = 0xd000000000000032;
  FUN_1000a9a18();
  func_0x000107c61170();
  if ((*(byte *)((long)param_1 + _DAT_112da0dd8) & 1) == 0) {
    FUN_1000eb730();
    if (uVar4 >> 0x3e == 0) {
      uVar14 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar14 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar14 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar14 != 0) {
      uVar15 = 0;
      uVar12 = *(ulong *)PTR__AVCaptureDeviceTypeBuiltInTripleCamera_110347f08;
      uVar13 = *(ulong *)PTR__AVCaptureDeviceTypeBuiltInDualCamera_110347ee8;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002eb9a8);
            (*pcVar2)();
          }
          uVar6 = *(ulong *)(uVar4 + uVar15 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar6 = uVar15;
          uVar10 = uVar4;
          FUN_1002370d8();
        }
        uVar1 = uVar15 + 1;
        if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002eb9a4);
          (*pcVar2)();
        }
        uVar7 = uVar6;
        func_0x000107c4eb70();
        if (uVar7 == 1) {
          uVar7 = uVar6;
          func_0x000107c41970();
          func_0x000107c61180();
          uVar8 = uVar7;
          func_0x000107c5faec();
          uVar9 = uVar12;
          uVar11 = uVar10;
          func_0x000107c5faec();
          if ((uVar8 == uVar9) && (uVar10 == uVar11)) {
            func_0x000107c61170(uVar6);
            func_0x000107c6142c(uVar4);
            func_0x000107c61170(uVar7);
            func_0x000107c6142c(uVar10);
            uVar4 = uVar11;
          }
          else {
            uVar9 = uVar10;
            func_0x000107c605b8();
            func_0x000107c61170(uVar7);
            func_0x000107c6142c(uVar10);
            func_0x000107c6142c(uVar11);
            if ((uVar8 & 1) == 0) {
              uVar7 = uVar6;
              func_0x000107c41970();
              func_0x000107c61180();
              uVar8 = uVar7;
              func_0x000107c5faec();
              uVar10 = uVar13;
              uVar11 = uVar9;
              func_0x000107c5faec();
              if ((uVar8 == uVar10) && (uVar9 == uVar11)) {
                func_0x000107c61170(uVar7);
                func_0x000107c61170(uVar6);
                func_0x000107c6142c(uVar9);
                func_0x000107c6142c(uVar11);
              }
              else {
                uVar10 = uVar9;
                func_0x000107c605b8();
                func_0x000107c61170(uVar7);
                func_0x000107c61170(uVar6);
                func_0x000107c6142c(uVar9);
                func_0x000107c6142c(uVar11);
                if ((uVar8 & 1) == 0) goto LAB_1002eb794;
              }
            }
            else {
              func_0x000107c61170(uVar6);
            }
          }
          func_0x000107c6142c();
          FUN_1002ebd68();
          if (uVar4 >> 0x3e == 0) {
            uVar10 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar10 = uVar4 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar4) {
              uVar10 = uVar4;
            }
            func_0x000107c60480();
          }
          if (uVar10 == 0) {
            func_0x000107c6142c();
            goto LAB_1002eb724;
          }
          uVar14 = uVar10 - 1;
          if (SBORROW8(uVar10,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002eba58);
            (*pcVar2)();
          }
          if ((uVar4 & 0xc000000000000001) == 0) {
            if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1002eba70);
              (*pcVar2)();
            }
            if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1002eba74);
              (*pcVar2)();
            }
            uVar14 = *(ulong *)(uVar4 + uVar14 * 8 + 0x20);
            func_0x000107c61174(uVar14);
          }
          else {
            func_0x0001002ec9a0(uVar14);
          }
          func_0x000107c6142c(uVar4);
          goto LAB_1002eb9d8;
        }
        func_0x000107c61170(uVar6);
LAB_1002eb794:
        uVar15 = uVar15 + 1;
      } while (uVar1 != uVar14);
    }
    func_0x000107c6142c(uVar4);
    uVar14 = 0;
  }
  else {
LAB_1002eb724:
    uVar14 = 0;
  }
LAB_1002eb9d8:
  func_0x000107c61428(puVar3,auStack_90,0,0);
  uVar10 = *puVar3;
  func_0x000107c61174(uVar10);
  FUN_1000aa0a8(uVar5);
  func_0x000107c61170(uVar10);
  return uVar14;
}



/* Entry: 1002eba74; end: 1002ebadf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1002eba74(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112da0e08;
  lVar3 = *(long *)(unaff_x20 + _DAT_112da0e08);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    lVar2 = unaff_x20;
    FUN_1002eb6a0();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x0001002ebb1c(uVar4);
  }
  func_0x0001002ebb2c(lVar3);
  return lVar2;
}



/* Entry: 1002ebae0; end: 1002ebb3f;  */

void FUN_1002ebae0(void)

{
  return;
}



/* Entry: 1002ebb40; end: 1002ebb77;  */

/* WARNING: Possible PIC construction at 0x0001002ebb5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002ebb60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002ebb40(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_113075d78) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1002ebb78; end: 1002ebb87;  */

void FUN_1002ebb78(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104635e0;
  return;
}



/* Entry: 1002ebb88; end: 1002ebbe7; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl opticalZoomFactorsForMultiBackCameraDevice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002ebb88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1002ebbe8();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  FUN_1002ed07c(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1002ebbe8; end: 1002ebc4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1002ebbe8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112da0ea8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112da0ea8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_1002ebc4c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61434();
    func_0x000107c6142c(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61434(lVar2);
  return lVar3;
}



/* Entry: 1002ebc4c; end: 1002ebd53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1002ebc4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [48];
  
  puVar1 = param_1;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000047;
  FUN_1000a9a18(0xd000000000000047,0x800000010ef82f60);
  func_0x000107c61170(uVar2);
  FUN_1002a49d0();
  FUN_10006c804();
  func_0x000107c61574(uVar2);
  FUN_1000dc2b8();
  uVar4 = uVar2;
  FUN_1002ebd68();
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)((long)param_1 + _DAT_112da0eb8);
  func_0x000107c6157c(uVar2);
  FUN_100070bfc();
  func_0x000107c61574(uVar2);
  func_0x000107c61428(puVar1,auStack_70,0,0);
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  FUN_1000aa0a8(uVar3);
  func_0x000107c61170(uVar2);
  return uVar4;
}



/* Entry: 1002ebd54; end: 1002ebd67;  */

void FUN_1002ebd54(void)

{
  return;
}



/* Entry: 1002ebd68; end: 1002ebdcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1002ebd68(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112da0e00;
  lVar2 = *(long *)(unaff_x20 + _DAT_112da0e00);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_1002ebdcc();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61434();
    func_0x000107c6142c(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61434(lVar2);
  return lVar3;
}



/* Entry: 1002ebdcc; end: 1002ec7cf;  */

/* WARNING: Removing unreachable block (ram,0x0001002ec7c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1002ebdcc(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  ulong uVar24;
  undefined *puVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined *puStack_110;
  undefined *apuStack_f0 [8];
  ulong auStack_b0 [3];
  undefined *puStack_98;
  
  puVar3 = param_1;
  FUN_1000eb398();
  FUN_1000298f0();
  func_0x000107c61428();
  puVar4 = (undefined *)*puVar3;
  func_0x000107c61174();
  uVar5 = 0xd000000000000042;
  FUN_1000a9a18(0xd000000000000042,0x800000010ef82940);
  func_0x000107c61170();
  if ((*(byte *)((long)param_1 + _DAT_112da0dd8) & 1) != 0) {
    FUN_100673624();
    func_0x000107c613fc();
    *(undefined8 *)(puVar4 + 0x18) = 3;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    func_0x0001002374e8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = 1;
    func_0x000107c60110();
    *(undefined8 *)(puVar4 + 0x20) = uVar6;
    goto LAB_1002ec76c;
  }
  puStack_110 = (undefined *)0x112da0e88;
  FUN_1000285a8(0x112da0e88,&UNK_10d943f20);
  puVar4 = (undefined *)0x24;
  func_0x000107c613fc();
  *(undefined8 *)(puStack_110 + 0x18) = 2;
  *(undefined8 *)(puStack_110 + 0x10) = 1;
  *(undefined4 *)(puStack_110 + 0x20) = 0x3f800000;
  uVar7 = *(ulong *)PTR__AVCaptureDeviceTypeBuiltInTripleCamera_110347f08;
  uVar18 = *(ulong *)PTR__AVCaptureDeviceTypeBuiltInDualWideCamera_110347ef0;
  uVar6 = *(undefined8 *)PTR__AVCaptureDeviceTypeBuiltInDualCamera_110347ee8;
  puVar21 = *(undefined **)PTR__AVCaptureDeviceTypeBuiltInWideAngleCamera_110347f20;
  auStack_b0[0] = uVar7;
  auStack_b0[1] = uVar18;
  auStack_b0[2] = uVar6;
  puStack_98 = puVar21;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  FUN_1000eb730();
  puVar22 = (undefined *)((ulong)puVar21 & 0xffffffffffffff8);
  if ((ulong)puVar21 >> 0x3e == 0) {
    puVar25 = *(undefined **)(puVar22 + 0x10);
  }
  else {
    puVar25 = puVar22;
    if ((undefined *)0x7fffffffffffffff < puVar21) {
      puVar25 = puVar21;
    }
    func_0x000107c60480();
  }
  puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar25 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar21 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar22 + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ec05c);
            (*pcVar2)();
          }
          puVar8 = *(undefined **)(puVar21 + (long)puVar10 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar8 = puVar10;
          puVar4 = puVar21;
          FUN_1002370d8();
        }
        puVar1 = puVar10 + 1;
        if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ec058);
          (*pcVar2)();
        }
        puVar9 = puVar8;
        func_0x000107c4eb70();
        if (puVar9 == (undefined *)0x1) break;
        func_0x000107c61170(puVar8);
        puVar10 = puVar10 + 1;
        if (puVar1 == puVar25) goto LAB_1002ec07c;
      }
      puVar10 = puVar19;
      func_0x000107c61558();
      apuStack_f0[0] = puVar19;
      if (((ulong)puVar10 & 1) == 0) {
        puVar4 = (undefined *)(*(long *)(puVar19 + 0x10) + 1);
        FUN_1002373d8(0,puVar4,1);
      }
      uVar20 = *(ulong *)(apuStack_f0[0] + 0x10);
      puVar19 = (undefined *)(uVar20 + 1);
      if (*(ulong *)(apuStack_f0[0] + 0x18) >> 1 <= uVar20) {
        puVar4 = puVar19;
        FUN_1002373d8(1 < *(ulong *)(apuStack_f0[0] + 0x18),puVar19,1);
      }
      *(undefined **)(apuStack_f0[0] + 0x10) = puVar19;
      *(undefined **)(apuStack_f0[0] + uVar20 * 8 + 0x20) = puVar8;
      puVar19 = apuStack_f0[0];
      puVar10 = puVar1;
    } while (puVar1 != puVar25);
  }
LAB_1002ec07c:
  func_0x000107c6142c(puVar21);
  uVar20 = 0;
  uVar17 = (uint)((ulong)puVar19 >> 0x3e) & 1;
  if ((long)puVar19 < 0) {
    uVar17 = 1;
  }
  puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_1002ec0b4:
  uVar16 = uVar20;
  if (uVar20 < 5) {
    uVar16 = 4;
  }
  do {
    if (uVar20 == uVar16) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ec550);
      (*pcVar2)();
    }
    uVar11 = auStack_b0[uVar20];
    if (uVar17 == 0) {
      puVar22 = *(undefined **)(puVar19 + 0x10);
    }
    else {
      puVar22 = puVar19;
      func_0x000107c60480();
    }
    uVar20 = uVar20 + 1;
    func_0x000107c61174();
    if (puVar22 != (undefined *)0x0) {
      uVar24 = 0;
      do {
        if (((ulong)puVar19 & 0xc000000000000001) == 0) {
          if (*(ulong *)(puVar19 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ec54c);
            (*pcVar2)();
          }
          uVar12 = *(ulong *)(puVar19 + uVar24 * 8 + 0x20);
          func_0x000107c61174();
          puVar25 = puVar4;
        }
        else {
          uVar12 = uVar24;
          puVar25 = puVar19;
          FUN_1002370d8();
        }
        puVar10 = (undefined *)(uVar24 + 1);
        if (SCARRY8(uVar24,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ec548);
          (*pcVar2)();
        }
        uVar13 = uVar12;
        func_0x000107c41970();
        func_0x000107c61180();
        uVar14 = uVar13;
        func_0x000107c5faec();
        uVar15 = uVar11;
        puVar8 = puVar25;
        func_0x000107c5faec();
        if ((uVar14 == uVar15) && (puVar25 == puVar8)) {
          puVar4 = puVar8;
          func_0x000107c61170(uVar11);
          func_0x000107c61170(uVar13);
          func_0x000107c6142c(puVar25);
          func_0x000107c6142c(puVar8);
LAB_1002ec224:
          puVar22 = puVar21;
          func_0x000107c61550();
          if ((((int)puVar22 == 0) || ((long)puVar21 < 0)) ||
             (puVar22 = puVar21, ((ulong)puVar21 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar21 >> 0x3e == 0) {
              puVar4 = *(undefined **)(((ulong)puVar21 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar4 = (undefined *)((ulong)puVar21 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar21) {
                puVar4 = puVar21;
              }
              func_0x000107c60480();
            }
            puVar4 = puVar4 + 1;
            puVar22 = (undefined *)0x0;
            FUN_10029e21c(0,puVar4,1,puVar21);
          }
          uVar11 = (ulong)puVar22 & 0xffffffffffffff8;
          uVar16 = *(ulong *)(uVar11 + 0x10);
          puVar25 = (undefined *)(uVar16 + 1);
          puVar21 = puVar22;
          if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar16) {
            puVar21 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
            puVar4 = puVar25;
            FUN_10029e21c(puVar21,puVar25,1,puVar22);
            uVar11 = (ulong)puVar21 & 0xffffffffffffff8;
          }
          *(undefined **)(uVar11 + 0x10) = puVar25;
          *(ulong *)(uVar11 + uVar16 * 8 + 0x20) = uVar12;
          if (uVar20 != 4) goto LAB_1002ec0b4;
          goto LAB_1002ec2cc;
        }
        puVar4 = puVar25;
        func_0x000107c605b8();
        func_0x000107c61170(uVar13);
        func_0x000107c6142c(puVar25);
        func_0x000107c6142c(puVar8);
        if ((uVar14 & 1) != 0) {
          func_0x000107c61170(uVar11);
          goto LAB_1002ec224;
        }
        func_0x000107c61170(uVar12);
        uVar24 = uVar24 + 1;
      } while (puVar10 != puVar22);
    }
    func_0x000107c61170(uVar11);
  } while (uVar20 != 4);
LAB_1002ec2cc:
  func_0x000107c61574(puVar19);
  uVar6 = 0;
  FUN_1000ebdd0(0);
  puVar4 = (undefined *)0x4;
  func_0x000107c61408(auStack_b0,4,uVar6);
  if ((ulong)puVar21 >> 0x3e == 0) {
    puVar22 = *(undefined **)(((ulong)puVar21 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar22 = (undefined *)((ulong)puVar21 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar21) {
      puVar22 = puVar21;
    }
    func_0x000107c60480();
  }
  if (puVar22 == (undefined *)0x0) {
    func_0x000107c6142c(puVar21);
    lVar26 = *(long *)(puStack_110 + 0x10);
    if (lVar26 == 0) {
      func_0x000107c61574();
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      apuStack_f0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_1002ecff4(0,lVar26,0);
      lVar23 = 0x20;
      do {
        puVar4 = apuStack_f0[0];
        uVar29 = *(undefined4 *)(puStack_110 + lVar23);
        puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c46978(uVar29);
        uVar7 = *(ulong *)(puVar4 + 0x10);
        apuStack_f0[0] = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar7) {
          FUN_1002ecff4(1 < *(ulong *)(puVar4 + 0x18),uVar7 + 1,1);
        }
        puVar4 = apuStack_f0[0];
        *(ulong *)(apuStack_f0[0] + 0x10) = uVar7 + 1;
        *(undefined **)(apuStack_f0[0] + uVar7 * 8 + 0x20) = puVar21;
        lVar23 = lVar23 + 4;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      func_0x000107c61574();
    }
    goto LAB_1002ec76c;
  }
  if (((ulong)puVar21 & 0xc000000000000001) == 0) {
    if (*(long *)(((ulong)puVar21 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ec644);
      (*pcVar2)();
    }
    uVar20 = *(ulong *)(puVar21 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar20 = 0;
    puVar4 = puVar21;
    FUN_1002370d8();
  }
  func_0x000107c6142c(puVar21);
  uVar16 = uVar20;
  func_0x000107c41970();
  func_0x000107c61180();
  uVar11 = uVar16;
  func_0x000107c5faec();
  puVar21 = puVar4;
  func_0x000107c5faec();
  puVar22 = puVar4;
  if ((uVar11 == uVar7) && (puVar4 == puVar21)) {
LAB_1002ec368:
    func_0x000107c61170(uVar16);
    func_0x000107c6142c(puVar22);
    func_0x000107c6142c(puVar21);
LAB_1002ec3b8:
    fVar28 = 2.0;
  }
  else {
    func_0x000107c605b8(uVar11,puVar4,uVar7,puVar21,0);
    func_0x000107c61170(uVar16);
    func_0x000107c6142c(puVar4);
    func_0x000107c6142c(puVar21);
    if ((uVar11 & 1) != 0) goto LAB_1002ec3b8;
    uVar16 = uVar20;
    func_0x000107c41970();
    func_0x000107c61180();
    uVar7 = uVar16;
    func_0x000107c5faec();
    puVar21 = puVar22;
    func_0x000107c5faec();
    if ((uVar7 == uVar18) && (puVar22 == puVar21)) goto LAB_1002ec368;
    func_0x000107c605b8(uVar7,puVar22,uVar18,puVar21,0);
    func_0x000107c61170(uVar16);
    func_0x000107c6142c(puVar22);
    func_0x000107c6142c(puVar21);
    fVar28 = 1.0;
    if ((uVar7 & 1) != 0) goto LAB_1002ec3b8;
  }
  if (*(long *)(puStack_110 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ec640);
    (*pcVar2)();
  }
  uVar7 = (ulong)(uint)(*(float *)(puStack_110 + 0x20) / fVar28);
  *(float *)(puStack_110 + 0x20) = *(float *)(puStack_110 + 0x20) / fVar28;
  uVar18 = uVar20;
  func_0x000107c5dfa8();
  func_0x000107c61180();
  uVar6 = 0;
  func_0x0001002374e8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar16 = uVar18;
  func_0x000107c5fc54(uVar18,uVar6);
  func_0x000107c61170(uVar18);
  if (uVar16 >> 0x3e == 0) {
    uVar18 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar18 = uVar16 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar16) {
      uVar18 = uVar16;
    }
    func_0x000107c60480();
  }
  if (uVar18 != 0) {
    if ((long)uVar18 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ec7c4);
      (*pcVar2)();
    }
    uVar11 = 0;
    do {
      fVar27 = (float)uVar7;
      if ((uVar16 & 0xc000000000000001) == 0) {
        uVar24 = *(ulong *)(uVar16 + uVar11 * 8 + 0x20);
        func_0x000107c61174(uVar24);
      }
      else {
        uVar24 = uVar11;
        func_0x0001002ec9a0(uVar11,uVar16);
      }
      func_0x000107c436dc();
      uVar12 = *(ulong *)(puStack_110 + 0x10);
      if (*(ulong *)(puStack_110 + 0x18) >> 1 <= uVar12) {
        puStack_110 = (undefined *)(ulong)(1 < *(ulong *)(puStack_110 + 0x18));
        func_0x0001002ecb70(puStack_110,uVar12 + 1,1);
      }
      uVar11 = uVar11 + 1;
      uVar7 = (ulong)(uint)(fVar27 / fVar28);
      *(ulong *)(puStack_110 + 0x10) = uVar12 + 1;
      *(float *)(puStack_110 + uVar12 * 4 + 0x20) = fVar27 / fVar28;
      func_0x000107c61170(uVar24);
    } while (uVar18 != uVar11);
  }
  func_0x000107c6142c(uVar16);
  apuStack_f0[0] = puStack_110;
  func_0x000107c61434();
  FUN_1002ecc70(apuStack_f0);
  puVar21 = apuStack_f0[0];
  lVar26 = *(long *)(apuStack_f0[0] + 0x10);
  if (lVar26 == 0) {
    func_0x000107c6142c(puStack_110);
    func_0x000107c61574(puVar21);
    func_0x000107c61170(uVar20);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    apuStack_f0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1002ecff4(0,lVar26,0);
    lVar23 = 0x20;
    do {
      puVar4 = apuStack_f0[0];
      uVar29 = *(undefined4 *)(puVar21 + lVar23);
      puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c46978(uVar29);
      uVar7 = *(ulong *)(puVar4 + 0x10);
      apuStack_f0[0] = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar7) {
        FUN_1002ecff4(1 < *(ulong *)(puVar4 + 0x18),uVar7 + 1,1);
      }
      puVar4 = apuStack_f0[0];
      *(ulong *)(apuStack_f0[0] + 0x10) = uVar7 + 1;
      *(undefined **)(apuStack_f0[0] + uVar7 * 8 + 0x20) = puVar22;
      lVar23 = lVar23 + 4;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    func_0x000107c6142c(puStack_110);
    func_0x000107c61574(puVar21);
    func_0x000107c61170(uVar20);
  }
LAB_1002ec76c:
  func_0x000107c61428(puVar3,apuStack_f0,0,0);
  uVar6 = *puVar3;
  func_0x000107c61174(uVar6);
  FUN_1000aa0a8(uVar5);
  func_0x000107c61170(uVar6);
  return puVar4;
}



/* Entry: 1002ec7d0; end: 1002ec9b3;  */

void FUN_1002ec7d0(void)

{
  return;
}



/* Entry: 1002ec9b4; end: 1002ecc6f;  */

ulong FUN_1002ec9b4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002eca98);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002eca9c);
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
  func_0x000100ff4164(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ecb70);
  (*pcVar2)();
}



/* Entry: 1002ecc70; end: 1002ecda3;  */

void FUN_1002ecc70(ulong *param_1)

{
  float *pfVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  float fVar12;
  float fVar13;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  float *pfStack_50;
  ulong uStack_48;
  
  uVar9 = *param_1;
  uVar5 = uVar9;
  func_0x000107c61558();
  if ((uVar5 & 1) == 0) {
    FUN_1002ecda4();
  }
  uVar10 = *(ulong *)(uVar9 + 0x10);
  pfVar1 = (float *)(uVar9 + 0x20);
  uVar5 = uVar10;
  pfStack_50 = pfVar1;
  uStack_48 = uVar10;
  func_0x000107c60574();
  if ((long)uVar5 < (long)uVar10) {
    puVar11 = (undefined *)(uVar10 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar10) {
      puVar3 = puVar11;
      func_0x000107c60380(puVar11,PTR___sSfN_11034ddf8);
      *(undefined **)(puVar3 + 0x10) = puVar11;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar11;
    func_0x00010146dec8(&puStack_68,auStack_58,&pfStack_50,uVar5);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if ((uVar10 != 0) && (uVar10 != 1)) {
    lVar4 = -1;
    uVar5 = 1;
    pfVar6 = pfVar1;
    do {
      fVar12 = pfVar1[uVar5];
      lVar7 = lVar4;
      pfVar8 = pfVar6;
      do {
        fVar13 = *pfVar8;
        if (fVar13 <= fVar12) break;
        *pfVar8 = fVar12;
        pfVar8[1] = fVar13;
        bVar2 = lVar7 != -1;
        lVar7 = lVar7 + 1;
        pfVar8 = pfVar8 + -1;
      } while (bVar2);
      uVar5 = uVar5 + 1;
      pfVar6 = pfVar6 + 1;
      lVar4 = lVar4 + -1;
    } while (uVar5 != uVar10);
  }
  *param_1 = uVar9;
  return;
}



/* Entry: 1002ecda4; end: 1002ecdb7;  */

/* WARNING: Removing unreachable block (ram,0x0001002ecdd4) */
/* WARNING: Removing unreachable block (ram,0x0001002ecde4) */
/* WARNING: Removing unreachable block (ram,0x0001002eceb4) */
/* WARNING: Removing unreachable block (ram,0x0001002ecdf0) */
/* WARNING: Removing unreachable block (ram,0x0001002ecdf8) */
/* WARNING: Removing unreachable block (ram,0x0001002ece70) */
/* WARNING: Removing unreachable block (ram,0x0001002ece78) */
/* WARNING: Removing unreachable block (ram,0x0001002ece7c) */
/* WARNING: Removing unreachable block (ram,0x0001002ece80) */
/* WARNING: Removing unreachable block (ram,0x0001002ece88) */

undefined * FUN_1002ecda4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112da0e88;
    FUN_1000285a8(0x112da0e88,&UNK_10d943f20);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x1d;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar5;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 2) << 1;
  }
  func_0x000107c610b4(puVar3 + 0x20,param_1 + 0x20,lVar5 << 2);
  func_0x000107c61574(param_1);
  return puVar3;
}



/* Entry: 1002ecdb8; end: 1002eceb7;  */

undefined * FUN_1002ecdb8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002eceb8);
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112da0e88;
    FUN_1000285a8(0x112da0e88,&UNK_10d943f20);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x1d;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 2) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 2);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 4 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 2);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1002eceb8; end: 1002ecff3;  */

code * FUN_1002eceb8(ulong param_1,ulong param_2,ulong param_3,code *param_4)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ecff4);
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
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar2 = FUN_1002ed07c;
    FUN_1002ed010(FUN_1002ed07c,0x112d4a820,&UNK_10d910f30);
    func_0x000107c613fc();
    pcVar3 = pcVar2;
    func_0x000107c610a4();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(ulong *)(pcVar2 + 0x10) = uVar6;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar2 + 0x20;
  pcVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    FUN_1002ed07c(0);
    func_0x000107c6140c(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      func_0x000107c610b8(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return pcVar2;
}



/* Entry: 1002ecff4; end: 1002ed00f;  */

void FUN_1002ecff4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1002eceb8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1002ed010; end: 1002ed07b;  */

void FUN_1002ed010(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1002ed07c; end: 1002ed0bf;  */

void FUN_1002ed07c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d38c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d38c88 = puVar1;
  return;
}



/* Entry: 1002ed0c0; end: 1002ed0f7;  */

void FUN_1002ed0c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11049e000;
  return;
}



/* Entry: 1002ed0f8; end: 1002ed12f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002ed0f8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113075d80);
  *(undefined8 *)(unaff_x20 + _DAT_113075d80) = param_1;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1002ed130; end: 1002ed1e3;  */

void FUN_1002ed130(void)

{
  return;
}



/* Entry: 1002ed1e4; end: 1002ed277; -[_TtC26SCCaptureDeviceManagerImpl36CaptureDeviceAvailabilityHandlerImpl isBackDeviceAvailableForType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1002ed1e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + _DAT_112da0a10);
  func_0x000107c61174();
  func_0x000107c49be8();
  if ((uVar2 & 1) == 0) {
    uVar1 = 0xd000000000000064;
    func_0x000107c5fadc(0xd000000000000064,0x800000010ef81cd0);
    func_0x000107c318e8();
    func_0x000107c61170(uVar1);
  }
  FUN_1002ed278(param_3);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 1002ed278; end: 1002ed4f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1002ed278(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 **ppuVar9;
  long unaff_x20;
  undefined8 *apuStack_98 [3];
  undefined8 *puStack_80;
  ulong uStack_78;
  
  puVar1 = param_1;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  puStack_80 = (undefined8 *)0x0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c61174(uVar2);
  func_0x000107c602fc(0x3d);
  func_0x000107c5fb78(0xd00000000000003b,0x800000010ef82cf0);
  puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  apuStack_98[0] = param_1;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar8);
  uVar4 = uStack_78;
  puVar3 = puStack_80;
  FUN_1000a9a18(puStack_80,uStack_78);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c();
  FUN_1002a49d0();
  FUN_10006c804();
  func_0x000107c61574();
  lVar5 = _DAT_112da0ea0;
  if (param_1 == (undefined8 *)0x2) {
    FUN_1000dc2b8();
    uVar6 = uVar4;
    func_0x00010146d390();
    func_0x000107c61170(uVar4);
    if ((uVar6 & 1) != 0) {
      lVar5 = 2;
      goto LAB_1002ed418;
    }
LAB_1002ed454:
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112da0eb8);
    func_0x000107c6157c(uVar2);
    FUN_100070bfc();
    func_0x000107c61574(uVar2);
    uVar2 = 0;
  }
  else {
    if (param_1 == (undefined8 *)0x1) {
      lVar5 = 1;
LAB_1002ed418:
      FUN_1000dbbe8(lVar5,0);
      if (lVar5 == 0) goto LAB_1002ed454;
      func_0x000107c615e8();
    }
    else {
      if (param_1 != (undefined8 *)0x0) goto LAB_1002ed454;
      if (*(long *)(unaff_x20 + _DAT_112da0ec8) == 0) {
        func_0x000107c61428(unaff_x20 + _DAT_112da0ea0,&puStack_80,0,0);
        lVar5 = *(long *)(unaff_x20 + lVar5);
        FUN_1000dbbe8(lVar5,0);
        if (lVar5 == 0) {
          uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112da0eb8);
          func_0x000107c6157c(uVar2);
          FUN_100070bfc();
          func_0x000107c61574(uVar2);
          uVar2 = 0;
          ppuVar9 = apuStack_98;
        }
        else {
          func_0x000107c615e8();
          uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112da0eb8);
          func_0x000107c6157c(uVar2);
          FUN_100070bfc();
          func_0x000107c61574(uVar2);
          uVar2 = 1;
          ppuVar9 = apuStack_98;
        }
        goto LAB_1002ed47c;
      }
    }
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112da0eb8);
    func_0x000107c6157c(uVar2);
    FUN_100070bfc();
    func_0x000107c61574(uVar2);
    uVar2 = 1;
  }
  ppuVar9 = &puStack_80;
LAB_1002ed47c:
  func_0x000107c61428(puVar1,ppuVar9,0,0);
  uVar7 = *puVar1;
  func_0x000107c61174(uVar7);
  FUN_1000aa0a8(puVar3);
  func_0x000107c61170(uVar7);
  return uVar2;
}



/* Entry: 1002ed4f4; end: 1002ed5ab;  */

void FUN_1002ed4f4(void)

{
  return;
}



/* Entry: 1002ed5ac; end: 1002eda0b;  */

/* WARNING: Possible PIC construction at 0x0001002ed5e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002ed5e4) */

void FUN_1002ed5ac(long param_1)

{
  if (param_1 == 0) {
    FUN_1002e8978();
    func_0x000107c610f8();
  }
  else {
    FUN_1002e8978();
    func_0x000107c610f8();
    func_0x000107c61174(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1002eda0c; end: 1002edb0f;  */

void FUN_1002eda0c(void)

{
  return;
}



/* Entry: 1002edb10; end: 1002edb77; -[SCManagedCapturerState .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002edb10(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_113075b90));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_113075bc0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_113075be0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_113075c58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113075c60));
  return;
}



/* Entry: 1002edb78; end: 1002edbc7;  */

void FUN_1002edb78(void)

{
  return;
}



/* Entry: 1002edbc8; end: 1002edc3b; -[SCBlizzardExperimentProvider jsonFramesEventSaveBatchQ12] */

undefined8 FUN_1002edbc8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1002edcc8;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136c4c18 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136c4c18,&puStack_38);
  }
  return uRam000000011316eea8;
}


