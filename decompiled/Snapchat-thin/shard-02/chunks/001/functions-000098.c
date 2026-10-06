/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101958024; end: 101958377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101958024(undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *apuStack_98 [3];
  undefined *apuStack_80 [4];
  
  puVar3 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000053;
  func_0x0001000a9a18(0xd000000000000053,0x800000010efc2170);
  func_0x000107c61170(uVar4);
  func_0x0001002a566c(param_1);
  if (*(long *)(unaff_x20 + _DAT_112dd8660) == 0) {
    uVar11 = 0xffffffffffffffff;
  }
  else {
    uVar11 = *(ulong *)(*(long *)(unaff_x20 + _DAT_112dd8660) + _DAT_113075bb0);
  }
  func_0x0001002a566c(uVar11);
  uVar13 = unaff_x20 + _DAT_112dd8640;
  func_0x000107c61618();
  if (uVar13 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = uVar13;
    func_0x000107c51b1c();
    func_0x000107c615e8(uVar13);
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar13 = (uVar12 | uVar11) ^ ((ulong)param_1 | param_2);
  apuStack_98[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101957ddc(apuStack_98,uVar13 & ((ulong)param_1 | param_2));
  apuStack_80[0] = puVar1;
  FUN_101957ddc(apuStack_80,uVar13 & (uVar12 | uVar11));
  puVar1 = apuStack_80[0];
  lVar14 = *(long *)(apuStack_80[0] + 0x10);
  if (lVar14 != 0) {
    lVar15 = *(long *)(unaff_x20 + _DAT_112dd86c8);
    do {
      lVar6 = lVar15;
      func_0x000107c52078();
      func_0x000107c61180();
      lVar16 = lVar6;
      func_0x000107c4411c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar6);
      if (lVar16 != 0) {
        func_0x000101957ecc(lVar16);
        func_0x000107c615e8(lVar16);
      }
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  puVar2 = apuStack_98[0];
  lVar6 = _DAT_112dd86d8;
  lVar15 = _DAT_112dd8648;
  lVar14 = *(long *)(apuStack_98[0] + 0x10);
  if (lVar14 != 0) {
    lVar16 = *(long *)(unaff_x20 + _DAT_112dd86c8);
    do {
      lVar7 = lVar16;
      func_0x000107c52078();
      func_0x000107c61180();
      lVar8 = lVar7;
      func_0x000107c4411c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar7);
      if (lVar8 != 0) {
        lVar7 = unaff_x20 + lVar15;
        func_0x000107c61618();
        if (lVar7 != 0) {
          lVar9 = lVar7;
          func_0x0001002ee2e4();
          func_0x000107c613fc();
          *(undefined8 *)(lVar9 + 0x18) = 3;
          *(undefined8 *)(lVar9 + 0x10) = 1;
          *(long *)(lVar9 + 0x20) = lVar8;
          func_0x000107c615f0(lVar8);
          uVar4 = 0x112dd8708;
          func_0x0001000285a8(0x112dd8708,&UNK_10d99be00);
          lVar10 = lVar9;
          func_0x000107c5fc48(lVar9,uVar4);
          func_0x000107c61574(lVar9);
          func_0x000107c3d604(lVar7);
          func_0x000107c615e8(lVar7);
          func_0x000107c61170(lVar10);
        }
        if (*(char *)(unaff_x20 + lVar6) == '\x01') {
          lVar7 = lVar16;
          func_0x000107c4b404(lVar16);
          func_0x000107c61180();
          func_0x000107c42684();
          func_0x000107c615e8(lVar7);
        }
        func_0x000107c615e8(lVar8);
      }
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  func_0x000107c6142c(puVar2);
  func_0x000107c6142c(puVar1);
  func_0x000107c61428(puVar3,apuStack_98,0,0);
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  func_0x0001000aa0a8(uVar5);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 101958378; end: 1019584e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101958378(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_80 [48];
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000041;
  func_0x0001000a9a18(0xd000000000000041,0x800000010efc2040);
  func_0x000107c61170(uVar2);
  lVar5 = _DAT_112dd8648;
  lVar4 = unaff_x20 + _DAT_112dd8648;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x000107c5de0c();
    func_0x000107c615e8(lVar4);
  }
  lVar4 = unaff_x20 + lVar5;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x000107c43b44();
    func_0x000107c615e8(lVar4);
  }
  lVar5 = unaff_x20 + lVar5;
  func_0x000107c61618();
  if (lVar5 != 0) {
    func_0x000107c4f9d4();
    func_0x000107c615e8(lVar5);
  }
  puVar6 = PTR_PTR_1126b7050;
  func_0x000107c610f8();
  func_0x000107c462b0();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1019584e4);
    (*pcVar1)();
  }
  func_0x000107c61428(param_1,auStack_80,0,0);
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  func_0x0001000aa0a8(uVar3);
  func_0x000107c61170(uVar2);
  return puVar6;
}



/* Entry: 1019584e4; end: 101958543; -[SCCameraHardwareActivateDeviceOperation initWithDelegate:] */

void FUN_1019584e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraRequestHandlerOperations.CameraHardwareActivateDeviceOperation",0x46,
                      "init(delegate:)",0xf,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101958510);
  (*pcVar1)();
}



/* Entry: 101958544; end: 1019585bf; -[SCCameraHardwareActivateDeviceOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101958544(long param_1)

{
  func_0x000100cc0814(param_1 + _DAT_112dd8640);
  func_0x000100cc0814(param_1 + _DAT_112dd8648);
  func_0x000107c61610(param_1 + _DAT_112dd8650);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dd86c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dd8660));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112dd86a8 + 8))
  ;
  return;
}



/* Entry: 1019585c0; end: 101958a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019585c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112dd8640;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8640,0);
  lVar3 = _DAT_112dd8648;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8648,0);
  lVar4 = _DAT_112dd8650;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8650,0);
  *(undefined8 *)(unaff_x20 + _DAT_112dd8658) = 0x3fd999999999999a;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8660) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112dd8668) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112dd8670) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112dd8678) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112dd8680) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112dd8688) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112dd8690) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112dd8698) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112dd86a0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dd86a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112dd86b0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112dd86b8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112dd86c0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112dd86c8) = param_7;
  func_0x000107c61604(unaff_x20 + lVar4,param_8);
  *(undefined8 *)(unaff_x20 + _DAT_112dd86d0) = param_9;
  uVar5 = puVar1[1];
  *puVar1 = param_10;
  puVar1[1] = param_11;
  func_0x000107c615f0(param_7);
  func_0x000107c6142c(uVar5);
  *(undefined1 *)(unaff_x20 + _DAT_112dd86d8) = param_12;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_initWithDelegate__1125e0280,param_1);
  return;
}



/* Entry: 101958a08; end: 101958b67;  */

/* WARNING: Possible PIC construction at 0x000101958a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101958b40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101958a48) */
/* WARNING: Removing unreachable block (ram,0x000101958a68) */
/* WARNING: Removing unreachable block (ram,0x000101958a94) */
/* WARNING: Removing unreachable block (ram,0x000101958a84) */
/* WARNING: Removing unreachable block (ram,0x000101958aa0) */
/* WARNING: Removing unreachable block (ram,0x000101958ad4) */
/* WARNING: Removing unreachable block (ram,0x000101958ab0) */
/* WARNING: Removing unreachable block (ram,0x000101958adc) */
/* WARNING: Removing unreachable block (ram,0x000101958b14) */
/* WARNING: Removing unreachable block (ram,0x000101958b28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101958a08(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112dd8640;
  func_0x000107c61618();
  if (lVar1 == 0) {
    if (*(char *)(unaff_x20 + _DAT_112dd86a0) == '\x01') {
      return;
    }
    lVar1 = 0;
  }
  else {
    func_0x000107c4c238();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 101958b68; end: 101958b87;  */

void FUN_101958b68(void)

{
  func_0x000107c61168(&PTR_PTR_1127ed478);
  return;
}



/* Entry: 101958b88; end: 101958ba7;  */

void FUN_101958b88(void)

{
  FUN_101957a30();
  return;
}



/* Entry: 101958ba8; end: 101958bd3;  */

void FUN_101958ba8(long param_1,long param_2)

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



/* Entry: 101958bd4; end: 101958dc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101958bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112dd8710;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8710,0);
  lVar3 = _DAT_112dd8718;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8718,0);
  lVar4 = _DAT_112dd8720;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8720,0);
  *(undefined1 *)(unaff_x20 + _DAT_112dd8728) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112dd8730) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8738) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112dd8740) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112dd8748) = puVar1;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8750) = 0xffffffffffffffff;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8758) = 0;
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  func_0x000107c61604(unaff_x20 + lVar4,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112dd8760) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8768) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8770) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112dd8778) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8780) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8788) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8790) = param_11;
  puVar5 = auStack_70;
  func_0x000107c61154(puVar5,PTR_s_initWithDelegate__1125e0280,param_1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  return puVar5;
}



/* Entry: 101958dc8; end: 101958e47; -[SCCameraHardwareInitOperation initWithDelegate:] */

void FUN_101958dc8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraRequestHandlerOperations.CameraHardwareInitOperation",0x3c,
                      "init(delegate:)",0xf,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101958df4);
  (*pcVar1)();
}



/* Entry: 101958e48; end: 101958f37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101958e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar1 = _DAT_112dd87c0;
  func_0x000107c61614(unaff_x20 + _DAT_112dd87c0,0);
  lVar2 = _DAT_112dd87c8;
  func_0x000107c61614(unaff_x20 + _DAT_112dd87c8,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_2);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112dd87d0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112dd87d8) = param_5;
  func_0x000107c61154(auStack_70,PTR_s_initWithDelegate__1125e0280,param_1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 101958f38; end: 101958fdf; -[SCCameraHardwareSetDeviceParametersOperation initWithDelegate:managedCaptureSession:cameraHardwareResource:deviceSettings:captureDeviceManager:] */

undefined8
FUN_101958f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  uVar1 = param_3;
  FUN_101959448(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  return uVar1;
}



/* Entry: 101958fe0; end: 101959253;  */

/* WARNING: Removing unreachable block (ram,0x000101959234) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101958fe0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uStack_a0;
  undefined1 auStack_98 [56];
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000034;
  func_0x0001000a9a18(0xd000000000000034,0x800000010efc2430);
  func_0x000107c61170(uVar2);
  lVar4 = unaff_x20 + _DAT_112dd87c8;
  func_0x000107c61618();
  if (lVar4 == 0) {
    uStack_a0 = 0;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    lVar10 = lVar5;
    func_0x000107c40794();
    func_0x000107c61170(lVar5);
    func_0x000107c60234(auStack_98,lVar10);
    func_0x000107c615e8(lVar10);
    uVar6 = 0;
    func_0x0001000c0a74(0);
    puVar1 = PTR___sypN_11034f1a8;
    puVar7 = &uStack_a0;
    func_0x000107c6147c(puVar7,auStack_98,PTR___sypN_11034f1a8 + 8,uVar6,6);
    uVar2 = uStack_a0;
    if ((int)puVar7 == 0) {
      uVar2 = 0;
    }
    func_0x0001002e8978(0);
    uVar8 = uVar2;
    func_0x0001002ed5a8(uVar2);
    lVar5 = _DAT_113081378;
    lVar10 = *(long *)(unaff_x20 + _DAT_112dd87d0);
    uVar9 = uVar8;
    if (0.0 < *(double *)(lVar10 + _DAT_113081378)) {
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112dd87d8);
      func_0x000107c5ea1c(uVar9);
      func_0x000107c61180();
      func_0x000107c5a834(*(undefined8 *)(lVar10 + lVar5));
      func_0x000107c615e8(uVar9);
    }
    func_0x0001000c033c();
    func_0x000107c59840(lVar4);
    func_0x000107c61170(uVar9);
    lVar5 = lVar4;
    func_0x000107c5bcc0(lVar4);
    func_0x000107c61180();
    lVar10 = lVar5;
    func_0x000107c40794();
    func_0x000107c61170(lVar5);
    func_0x000107c60234(auStack_98,lVar10);
    func_0x000107c615e8(lVar10);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar2);
    puVar7 = &uStack_a0;
    func_0x000107c6147c(puVar7,auStack_98,puVar1 + 8,uVar6,6);
    if ((int)puVar7 == 0) {
      uStack_a0 = 0;
    }
  }
  func_0x000107c61428(param_1,auStack_98,0,0);
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  func_0x0001000aa0a8(uVar3);
  func_0x000107c61170(uVar2);
  return uStack_a0;
}



/* Entry: 101959254; end: 101959287; -[SCCameraHardwareSetDeviceParametersOperation execute] */

void FUN_101959254(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101958fe0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101959288; end: 1019592d3; -[SCCameraHardwareSetDeviceParametersOperation publishState:] */

/* WARNING: Possible PIC construction at 0x0001019592bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019592c0) */

void FUN_101959288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101959518();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1019592d4; end: 1019592db; -[SCCameraHardwareSetDeviceParametersOperation type] */

undefined8 FUN_1019592d4(void)

{
  return 0x20;
}



/* Entry: 1019592dc; end: 10195938f; -[SCCameraHardwareSetDeviceParametersOperation expectedStates] */

void FUN_1019592dc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x0001002a4cb0();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 7;
  *(undefined8 *)(param_1 + 0x10) = 3;
  puVar1 = PTR_PTR_1126b9d70;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c41dc4();
  func_0x000107c61180();
  *(undefined **)(param_1 + 0x20) = puVar2;
  puVar2 = puVar1;
  func_0x000107c41a00();
  func_0x000107c61180();
  *(undefined **)(param_1 + 0x28) = puVar2;
  func_0x000107c419fc();
  func_0x000107c61180();
  *(undefined **)(param_1 + 0x30) = puVar1;
  uVar3 = 0;
  func_0x00010038ed38(0);
  lVar4 = param_1;
  func_0x000107c5fc48(param_1,uVar3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 101959390; end: 1019593ef; -[SCCameraHardwareSetDeviceParametersOperation initWithDelegate:] */

void FUN_101959390(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraRequestHandlerOperations.CameraHardwareSetDeviceParametersOperation",
                      0x4b,"init(delegate:)",0xf,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019593bc);
  (*pcVar1)();
}



/* Entry: 1019593f0; end: 101959447; -[SCCameraHardwareSetDeviceParametersOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019593f0(long param_1)

{
  func_0x000100cc0860(param_1 + _DAT_112dd87c0);
  func_0x000100cc0860(param_1 + _DAT_112dd87c8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dd87d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dd87d8));
  return;
}



/* Entry: 101959448; end: 101959517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101959448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112dd87c0;
  func_0x000107c61614(unaff_x20 + _DAT_112dd87c0,0);
  lVar2 = _DAT_112dd87c8;
  func_0x000107c61614(unaff_x20 + _DAT_112dd87c8,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_2);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112dd87d0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112dd87d8) = param_5;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_initWithDelegate__1125e0280,param_1);
  return;
}



/* Entry: 101959518; end: 101959597;  */

/* WARNING: Possible PIC construction at 0x000101959550: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101959554) */
/* WARNING: Removing unreachable block (ram,0x000101959574) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101959518(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112dd87c8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4c238();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 101959598; end: 1019595b7;  */

void FUN_101959598(void)

{
  func_0x000107c61168(&PTR_PTR_1127ed710);
  return;
}



/* Entry: 1019595b8; end: 1019595bf; -[SCCameraHardwareSetStabilizationOperation type] */

undefined8 FUN_1019595b8(void)

{
  return 0x40;
}



/* Entry: 1019595c0; end: 1019596bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1019595c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar1 = _DAT_112dd8808;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8808,0);
  lVar2 = _DAT_112dd8810;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8810,0);
  *(undefined1 *)(unaff_x20 + _DAT_112dd8818) = 0;
  func_0x000107c61604(unaff_x20 + lVar1,param_2);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112dd8820) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8828) = param_5;
  func_0x000107c61154(auStack_70,PTR_s_initWithDelegate__1125e0280,param_1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 1019596c0; end: 101959753; -[SCCameraHardwareSetStabilizationOperation initWithDelegate:managedCaptureSession:cameraHardwareResource:devicePosition:stabilizationMode:] */

undefined8
FUN_1019596c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  uVar1 = param_3;
  FUN_101959fbc(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  return uVar1;
}



/* Entry: 101959754; end: 101959b8f;  */

/* WARNING: Removing unreachable block (ram,0x000101959b70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101959754(undefined8 *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_a0;
  undefined1 auStack_98 [56];
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000033;
  func_0x0001000a9a18(0xd000000000000033,0x800000010efc24d0);
  func_0x000107c61170(uVar2);
  lVar8 = _DAT_112dd8810;
  lVar4 = unaff_x20 + _DAT_112dd8810;
  func_0x000107c61618();
  if (lVar4 == 0) {
    if (*(long *)(unaff_x20 + _DAT_112dd8828) == 0) {
      lVar9 = 0;
      lVar4 = 0;
      goto LAB_101959894;
    }
  }
  else {
    lVar9 = lVar4;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    lVar4 = lVar9;
    func_0x000107c40794(lVar9);
    func_0x000107c61170(lVar9);
    func_0x000107c60234(auStack_98,lVar4);
    func_0x000107c615e8(lVar4);
    uVar2 = 0;
    func_0x0001000c0a74(0);
    plVar5 = &lStack_a0;
    func_0x000107c6147c(plVar5,auStack_98,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar11 = lStack_a0;
    if ((int)plVar5 == 0) {
      lVar11 = 0;
    }
    lVar9 = *(long *)(unaff_x20 + _DAT_112dd8828);
    lVar4 = lVar11;
    if (lVar9 == 0) {
LAB_101959894:
      lVar11 = lVar4;
      if (*(int *)(unaff_x20 + _DAT_112dd8820) == 1) {
        if ((lVar4 == 0) || (lVar6 = *(long *)(lVar4 + _DAT_113075b90), lVar6 == 0)) {
          bVar1 = true;
        }
        else {
          func_0x000107c4f9d4();
          bVar1 = lVar6 != lVar9;
        }
        *(bool *)(unaff_x20 + _DAT_112dd8818) = bVar1;
        lVar9 = unaff_x20 + _DAT_112dd8808;
        func_0x000107c61618();
        if (lVar9 != 0) {
          func_0x000107c57b80();
LAB_10195995c:
          func_0x000107c615e8(lVar9);
        }
      }
      else {
        if (*(int *)(unaff_x20 + _DAT_112dd8820) != 0) goto LAB_101959b10;
        if ((lVar4 == 0) || (lVar6 = *(long *)(lVar4 + _DAT_113075b90), lVar6 == 0)) {
          bVar1 = true;
        }
        else {
          func_0x000107c43b44();
          bVar1 = lVar6 != lVar9;
        }
        *(bool *)(unaff_x20 + _DAT_112dd8818) = bVar1;
        lVar9 = unaff_x20 + _DAT_112dd8808;
        func_0x000107c61618();
        if (lVar9 != 0) {
          func_0x000107c54cf0();
          goto LAB_10195995c;
        }
      }
      lVar9 = unaff_x20 + _DAT_112dd8808;
      func_0x000107c61618();
      lVar6 = lVar9;
      if (lVar9 == 0) {
        lVar10 = 0;
        if (lVar4 != 0) goto LAB_10195999c;
LAB_1019599c4:
        if (lVar9 != 0) {
LAB_1019599c8:
          *(undefined1 *)(unaff_x20 + _DAT_112dd8818) = 1;
        }
      }
      else {
        lVar10 = lVar9;
        func_0x000107c5de0c();
        func_0x000107c615e8(lVar9);
        if (lVar4 == 0) goto LAB_1019599c4;
LAB_10195999c:
        lVar6 = *(long *)(lVar4 + _DAT_113075b90);
        if (lVar6 == 0) goto LAB_1019599c4;
        func_0x000107c41004();
        if ((lVar9 == 0) || (lVar10 != lVar6)) goto LAB_1019599c8;
      }
      FUN_101959b90();
      func_0x0001002e8978(0);
      lVar10 = lVar4;
      func_0x0001002ed5a8(lVar4);
      lVar7 = lVar6;
      func_0x000107c61174(lVar6);
      func_0x0001002e96c8(lVar6);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar6);
      lVar9 = unaff_x20 + lVar8;
      func_0x000107c61618();
      if (lVar9 != 0) {
        lVar6 = lVar9;
        func_0x0001000c033c();
        func_0x000107c59840(lVar9);
        func_0x000107c615e8(lVar9);
        func_0x000107c61170(lVar6);
      }
      lVar8 = unaff_x20 + lVar8;
      func_0x000107c61618();
      if (lVar8 != 0) {
        lVar9 = lVar8;
        func_0x000107c5bcc0();
        func_0x000107c61180();
        func_0x000107c615e8(lVar8);
        lVar8 = lVar9;
        func_0x000107c40794(lVar9);
        func_0x000107c61170(lVar9);
        func_0x000107c60234(auStack_98,lVar8);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(lVar4);
        uVar2 = 0;
        func_0x0001000c0a74(0);
        plVar5 = &lStack_a0;
        func_0x000107c6147c(plVar5,auStack_98,PTR___sypN_11034f1a8 + 8,uVar2,6);
        lVar4 = lStack_a0;
        if ((int)plVar5 == 0) {
          lVar4 = 0;
        }
        goto LAB_101959b1c;
      }
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar7);
    }
    else {
      if (lVar11 == 0) goto LAB_101959b18;
      lVar4 = lStack_a0;
      if (*(long *)(lVar11 + _DAT_113075bb8) == 0) goto LAB_101959894;
    }
LAB_101959b10:
    func_0x000107c61170(lVar11);
  }
LAB_101959b18:
  lVar4 = 0;
LAB_101959b1c:
  func_0x000107c61428(param_1,auStack_98,0,0);
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  func_0x0001000aa0a8(uVar3);
  func_0x000107c61170(uVar2);
  return lVar4;
}



/* Entry: 101959b90; end: 101959c5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101959b90(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar3 = _DAT_112dd8808;
  lVar2 = unaff_x20 + _DAT_112dd8808;
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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101959c5c);
    (*pcVar1)();
  }
  return;
}



/* Entry: 101959c5c; end: 101959c8f; -[SCCameraHardwareSetStabilizationOperation execute] */

void FUN_101959c5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101959754();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101959c90; end: 101959d5f;  */

/* WARNING: Possible PIC construction at 0x000101959ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101959d38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101959ce8) */
/* WARNING: Removing unreachable block (ram,0x000101959d08) */
/* WARNING: Removing unreachable block (ram,0x000101959d3c) */
/* WARNING: Removing unreachable block (ram,0x000101959d1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101959c90(void)

{
  long lVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112dd8818) == '\x01') {
    lVar1 = unaff_x20 + _DAT_112dd8810;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c4c238();
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 101959d60; end: 101959daf; -[SCCameraHardwareSetStabilizationOperation publishState:] */

/* WARNING: Possible PIC construction at 0x000101959d98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101959d9c) */

void FUN_101959d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101959c90(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101959db0; end: 101959e6f; -[SCCameraHardwareSetStabilizationOperation cameraDirectionForMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101959db0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_28;
  
  lStack_28 = *(long *)(param_1 + _DAT_112dd8820);
  if (lStack_28 == -1) {
    uVar3 = 0xeb00000000646569;
    uVar2 = 0x6669636570736e75;
  }
  else if (lStack_28 == 1) {
    uVar3 = 0xe400000000000000;
    uVar2 = 0x6b636162;
  }
  else {
    if (lStack_28 != 0) {
      func_0x000107c61174();
      func_0x000107c60614(&UNK_11077dd00,&lStack_28,&UNK_11077dd00,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101959e70);
      (*pcVar1)();
    }
    uVar3 = 0xe500000000000000;
    uVar2 = 0x746e6f7266;
  }
  func_0x000107c5fadc(uVar2,uVar3);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101959e70; end: 101959f23; -[SCCameraHardwareSetStabilizationOperation expectedStates] */

void FUN_101959e70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x0001002a4cb0();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 7;
  *(undefined8 *)(param_1 + 0x10) = 3;
  puVar1 = PTR_PTR_1126b9d70;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c41dc4();
  func_0x000107c61180();
  *(undefined **)(param_1 + 0x20) = puVar2;
  puVar2 = puVar1;
  func_0x000107c41a00();
  func_0x000107c61180();
  *(undefined **)(param_1 + 0x28) = puVar2;
  func_0x000107c419fc();
  func_0x000107c61180();
  *(undefined **)(param_1 + 0x30) = puVar1;
  uVar3 = 0;
  func_0x00010038ed38(0);
  lVar4 = param_1;
  func_0x000107c5fc48(param_1,uVar3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 101959f24; end: 101959f83; -[SCCameraHardwareSetStabilizationOperation initWithDelegate:] */

void FUN_101959f24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraRequestHandlerOperations.CameraHardwareSetStabilizationOperation",
                      0x48,"init(delegate:)",0xf,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101959f50);
  (*pcVar1)();
}



/* Entry: 101959f84; end: 101959fbb; -[SCCameraHardwareSetStabilizationOperation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101959fa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101959fa4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101959f84(long param_1)

{
  param_1 = param_1 + _DAT_112dd8808;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101959fbc; end: 10195a097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101959fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112dd8808;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8808,0);
  lVar2 = _DAT_112dd8810;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8810,0);
  *(undefined1 *)(unaff_x20 + _DAT_112dd8818) = 0;
  func_0x000107c61604(unaff_x20 + lVar1,param_2);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112dd8820) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8828) = param_5;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_initWithDelegate__1125e0280,param_1);
  return;
}



/* Entry: 10195a098; end: 10195a0b7;  */

void FUN_10195a098(void)

{
  func_0x000107c61168(&PTR_PTR_1127ed7e8);
  return;
}



/* Entry: 10195a0b8; end: 10195a26f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10195a0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112dd8858;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8858,0);
  lVar3 = _DAT_112dd8860;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8860,0);
  lVar4 = _DAT_112dd8868;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8868,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112dd8870) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8878) = param_5;
  func_0x000107c61604(unaff_x20 + lVar4,param_7);
  *(undefined8 *)(unaff_x20 + _DAT_112dd8880) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8888) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8890) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8898) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112dd88a0) = param_11;
  puVar1 = PTR_s_initWithDelegate__1125e0280;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_6);
  puVar5 = auStack_70;
  func_0x000107c61154(puVar5,puVar1,param_1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_7);
  return puVar5;
}



/* Entry: 10195a270; end: 10195a2eb; -[SCCameraHardwareStartOperation sessionRuntimeErrorReceived:] */

void FUN_10195a270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5ebac();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5eba0(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 10195a2ec; end: 10195a36b; -[SCCameraHardwareStartOperation initWithDelegate:] */

void FUN_10195a2ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraRequestHandlerOperations.CameraHardwareStartOperation",0x3d,
                      "init(delegate:)",0xf,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10195a318);
  (*pcVar1)();
}



/* Entry: 10195a36c; end: 10195a4e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10195a36c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112dd88d0;
  func_0x000107c61614(unaff_x20 + _DAT_112dd88d0,0);
  lVar3 = _DAT_112dd88d8;
  func_0x000107c61614(unaff_x20 + _DAT_112dd88d8,0);
  *(undefined1 *)(unaff_x20 + _DAT_112dd88e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dd88e8) = param_2;
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  func_0x000107c61604(unaff_x20 + lVar3,param_4);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dd88f0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112dd88f8) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112dd8900) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8908) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8910) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8918) = param_11;
  puVar4 = auStack_70;
  func_0x000107c61154(puVar4,PTR_s_initWithDelegate__1125e0280,param_1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  return puVar4;
}



/* Entry: 10195a4e4; end: 10195a543; -[SCCameraHardwareUpdateDeviceFormatOperation initWithDelegate:] */

void FUN_10195a4e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraRequestHandlerOperations.CameraHardwareUpdateDeviceFormatOperation",
                      0x4a,"init(delegate:)",0xf,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10195a510);
  (*pcVar1)();
}



/* Entry: 10195a544; end: 10195a69f;  */

void FUN_10195a544(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112dd8638,&UNK_10d99bec0);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_10195a620;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61174();
        if (uVar6 != 0) break;
LAB_10195a620:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10195a6a0);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_10195a678;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_10195a678:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 10195a6a0; end: 10195a80b;  */

void FUN_10195a6a0(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar1 = param_2 + 0x40;
  uVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar8 = param_1 + 1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
    uVar6 = ~uVar6;
    uVar9 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar6);
    uVar9 = uVar9 + 1 & uVar6;
    do {
      uVar7 = *(ulong *)(param_2 + 0x28);
      lVar4 = *(long *)(param_2 + 0x30);
      puVar2 = (undefined8 *)(lVar4 + uVar8 * 8);
      func_0x000107c60688(uVar7,*puVar2);
      uVar7 = uVar7 & uVar6;
      if ((long)param_1 < (long)uVar9) {
        if (uVar9 <= uVar7 || (long)uVar7 <= (long)param_1) {
LAB_10195a768:
          puVar3 = (undefined8 *)(lVar4 + param_1 * 8);
          if (((long)param_1 < (long)uVar8) || (puVar2 + 1 <= puVar3 || param_1 != uVar8)) {
            *puVar3 = *puVar2;
          }
          puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
          puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar8 * 8);
          if (((long)param_1 < (long)uVar8) || (puVar3 + 1 <= puVar2 || param_1 != uVar8)) {
            *puVar2 = *puVar3;
            param_1 = uVar8;
          }
        }
      }
      else if (uVar9 <= uVar7 && (long)uVar7 <= (long)param_1) goto LAB_10195a768;
      uVar8 = uVar8 + 1 & uVar6;
    } while ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
  }
  uVar6 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10195a80c);
  (*pcVar5)();
}



/* Entry: 10195a80c; end: 10195a82b;  */

void FUN_10195a80c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ed9d0);
  return;
}



/* Entry: 10195a82c; end: 10195a833;  */

void FUN_10195a82c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5ed2c();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10195a834; end: 10195a86b;  */

void FUN_10195a834(undefined8 param_1,long param_2)

{
  func_0x000107c5ed2c();
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10195a86c; end: 10195a873; -[SCCameraHardwareUpdateFrameRateOnlyOperation type] */

undefined8 FUN_10195a86c(void)

{
  return 0x1000;
}



/* Entry: 10195a874; end: 10195a96b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10195a874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = _DAT_112dd8950;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8950,0);
  *(undefined1 *)(unaff_x20 + _DAT_112dd8958) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8960) = param_2;
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dd8968);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8970) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8978) = param_7;
  func_0x000107c61154(auStack_70,PTR_s_initWithDelegate__1125e0280,param_1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 10195a96c; end: 10195aab3; -[SCCameraHardwareUpdateFrameRateOnlyOperation initWithDelegate:deviceSettingsMap:cameraHardwareResource:errorHandler:requestingFeatureNames:captureDeviceManager:] */

undefined8
FUN_10195a96c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x000107c60bc4();
  uVar1 = 0;
  func_0x000100357f20(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = 0;
  func_0x000100357f20(0,0x112da0578,&PTR_PTR_1126b7120);
  uVar3 = uVar2;
  func_0x000100120cb0();
  func_0x000107c5f9e8(param_4,uVar1,uVar2,uVar3);
  puVar4 = &UNK_110418518;
  func_0x000107c613fc(&UNK_110418518,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_6;
  func_0x000107c5f9e8(param_7,PTR___sSiN_11034deb0,PTR___sSSN_11034da80,PTR___sSiSHsWP_11034dec0);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_8);
  uVar3 = param_3;
  FUN_10195b654(param_3,param_4,param_5,FUN_10195b754,puVar4,param_7,param_8);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
  return uVar3;
}



/* Entry: 10195aab4; end: 10195b237;  */

/* WARNING: Removing unreachable block (ram,0x00010195b218) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10195aab4(double param_1)

{
  undefined **ppuVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  long lVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  long unaff_x20;
  undefined *puVar24;
  undefined **ppuVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  double dVar31;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined **appuStack_a8 [5];
  
  lVar5 = unaff_x20 + _DAT_112dd8950;
  func_0x000107c61618();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x0001002e8978(0);
    lVar7 = lVar6;
    func_0x000107c61174();
    func_0x0001002ed5a8();
    func_0x000107c61170(lVar7);
    ppuVar23 = *(undefined ***)(unaff_x20 + _DAT_112dd8978);
    ppuVar8 = ppuVar23;
    func_0x000107c418b4();
    func_0x000107c61180();
    ppuVar9 = ppuVar8;
    func_0x000107c41078();
    func_0x000107c61180();
    if (ppuVar9 != (undefined **)0x0) {
      appuStack_a8[0] = (undefined **)0x0;
      ppuVar19 = (undefined **)0x0;
      func_0x000107c5fc50();
      func_0x000107c61170(ppuVar9);
      ppuVar9 = appuStack_a8[0];
      if (appuStack_a8[0] != (undefined **)0x0) {
        puStack_b0 = PTR___swiftEmptySetSingleton_11034f1d8;
        puVar27 = appuStack_a8[0][2];
        ppuVar22 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar27 != (undefined *)0x0) {
          ppuVar30 = appuStack_a8[0] + 4;
          do {
            ppuVar25 = (undefined **)*ppuVar30;
            uVar10 = 0;
            ppuVar19 = ppuVar25;
            func_0x000100f73104();
            if ((uVar10 & 1) != 0) {
              ppuVar11 = ppuVar22;
              func_0x000107c61558();
              appuStack_a8[0] = ppuVar22;
              if (((ulong)ppuVar11 & 1) == 0) {
                ppuVar19 = (undefined **)(ppuVar22[2] + 1);
                FUN_10195b538(0,ppuVar19,1);
              }
              puVar28 = appuStack_a8[0][2];
              ppuVar22 = (undefined **)(puVar28 + 1);
              if ((undefined *)((ulong)appuStack_a8[0][3] >> 1) <= puVar28) {
                ppuVar19 = ppuVar22;
                FUN_10195b538((undefined *)0x1 < appuStack_a8[0][3],ppuVar22,1);
              }
              appuStack_a8[0][2] = (undefined *)ppuVar22;
              appuStack_a8[0][(long)(puVar28 + 4)] = (undefined *)ppuVar25;
              ppuVar22 = appuStack_a8[0];
            }
            puVar27 = puVar27 + -1;
            ppuVar30 = ppuVar30 + 1;
          } while (puVar27 != (undefined *)0x0);
        }
        func_0x000107c6142c(ppuVar9);
        func_0x000107c418e8();
        func_0x000107c61180();
        lVar13 = _DAT_113075b88;
        lVar12 = _DAT_112dd8958;
        puVar27 = ppuVar22[2];
        if (puVar27 != (undefined *)0x0) {
          puVar28 = (undefined *)0x0;
          ppuVar30 = *(undefined ***)(unaff_x20 + _DAT_112dd8960);
          ppuVar9 = (undefined **)0x0;
          if ((undefined **)0x7fffffffffffffff < ppuVar30) {
            ppuVar9 = ppuVar30;
          }
          do {
            if (ppuVar22[2] <= puVar28) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10195b210);
              (*pcVar3)();
            }
            puVar24 = ppuVar22[(long)(puVar28 + 4)];
            puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8();
            func_0x000107c46ed0();
            if (((ulong)ppuVar30 & 0xc000000000000001) == 0) {
              if (ppuVar30[2] == (undefined *)0x0) {
LAB_10195ae5c:
                appuStack_a8[0] = (undefined **)0x0;
                goto LAB_10195ae60;
              }
              func_0x000107c61434(ppuVar30);
              puVar20 = puVar26;
              func_0x000100121450();
              if (((ulong)ppuVar19 & 1) == 0) {
                func_0x000107c6142c(ppuVar30);
                goto LAB_10195ae5c;
              }
              appuStack_a8[0] = *(undefined ***)(ppuVar30[7] + (long)puVar20 * 8);
              func_0x000107c61174();
              func_0x000107c61170(puVar26);
              func_0x000107c6142c(ppuVar30);
              ppuVar25 = appuStack_a8[0];
            }
            else {
              puVar20 = puVar26;
              ppuVar19 = ppuVar9;
              func_0x000107c6043c();
              if (puVar20 == (undefined *)0x0) goto LAB_10195ae5c;
              uVar14 = 0;
              puStack_b8 = puVar20;
              func_0x000100357f20(0,0x112da0578,&PTR_PTR_1126b7120);
              ppuVar19 = &puStack_b8;
              func_0x000107c6147c(appuStack_a8,ppuVar19,PTR___syXlN_11034f1a0 + 8,uVar14,7);
LAB_10195ae60:
              func_0x000107c61170(puVar26);
              ppuVar25 = appuStack_a8[0];
            }
            appuStack_a8[0] = ppuVar25;
            if (ppuVar25 != (undefined **)0x0) {
              ppuVar11 = ppuVar25;
              func_0x000107c4390c();
              func_0x000107c61180();
              if (ppuVar11 != (undefined **)0x0) {
                ppuVar15 = ppuVar23;
                func_0x000107c3d120();
                func_0x000107c61180();
                if (ppuVar15 != (undefined **)0x0) {
                  ppuVar16 = ppuVar11;
                  func_0x000107c4cecc();
                  ppuVar17 = ppuVar11;
                  func_0x000107c4c804();
                  ppuVar29 = ppuVar23;
                  func_0x000107c3d160();
                  ppuVar18 = ppuVar23;
                  func_0x000107c3d158();
                  if ((ppuVar16 == ppuVar29) && (ppuVar17 == ppuVar18)) {
                    func_0x000107c61170(ppuVar25);
                    func_0x000107c61170(ppuVar11);
                    func_0x000107c61170(ppuVar15);
                  }
                  else {
                    ppuVar29 = ppuVar15;
                    func_0x000107c5de1c();
                    func_0x000107c61180();
                    ppuVar19 = (undefined **)0x0;
                    func_0x000100357f20(0,0x112dd8948,&PTR__OBJC_CLASS___AVFrameRateRange_1126a7ef0)
                    ;
                    ppuVar18 = ppuVar29;
                    func_0x000107c5fc54();
                    func_0x000107c61170(ppuVar29);
                    if ((ulong)ppuVar18 >> 0x3e == 0) {
                      ppuVar29 = *(undefined ***)(((ulong)ppuVar18 & 0xffffffffffffff8) + 0x10);
                      dVar31 = param_1;
                    }
                    else {
                      ppuVar29 = (undefined **)((ulong)ppuVar18 & 0xffffffffffffff8);
                      if ((undefined **)0x7fffffffffffffff < ppuVar18) {
                        ppuVar29 = ppuVar18;
                      }
                      func_0x000107c60480();
                      dVar31 = param_1;
                    }
                    param_1 = dVar31;
                    if (ppuVar29 != (undefined **)0x0) {
                      puVar26 = (undefined *)0x0;
                      do {
                        if (((ulong)ppuVar18 & 0xc000000000000001) == 0) {
                          if (*(undefined **)(((ulong)ppuVar18 & 0xffffffffffffff8) + 0x10) <=
                              puVar26) {
                    /* WARNING: Does not return */
                            pcVar3 = (code *)SoftwareBreakpoint(1,0x10195b214);
                            (*pcVar3)();
                          }
                          puVar20 = ppuVar18[(long)(puVar26 + 4)];
                          func_0x000107c61174(puVar20);
                        }
                        else {
                          puVar20 = puVar26;
                          ppuVar19 = ppuVar18;
                          func_0x0001003584ec(puVar26,ppuVar18,
                                              &PTR__OBJC_CLASS___AVFrameRateRange_1126a7ef0,
                                              0x112dd8948);
                        }
                        ppuVar1 = (undefined **)(puVar26 + 1);
                        if (SCARRY8((long)puVar26,1)) {
                    /* WARNING: Does not return */
                          pcVar3 = (code *)SoftwareBreakpoint(1,0x10195b20c);
                          (*pcVar3)();
                        }
                        func_0x000107c4cee8(puVar20);
                        if ((double)ppuVar16 < dVar31) {
                          func_0x000107c61170(puVar20);
                        }
                        else {
                          func_0x000107c4c844(puVar20);
                          param_1 = dVar31;
                          func_0x000107c61170(puVar20);
                          bVar4 = (double)ppuVar17 <= dVar31;
                          dVar31 = param_1;
                          if (bVar4) {
                            func_0x000107c6142c(ppuVar18);
                            func_0x000107c5d460(ppuVar23);
                            lVar21 = lVar5;
                            func_0x000107c5bcc0();
                            func_0x000107c61180();
                            iVar2 = *(int *)(lVar21 + _DAT_113075bb0);
                            func_0x000107c61170(ppuVar11);
                            func_0x000107c61170(ppuVar15);
                            func_0x000107c61170(ppuVar25);
                            func_0x000107c61170(lVar21);
                            if ((int)puVar24 != iVar2) goto LAB_10195ad80;
                            if ((long)ppuVar17 < 0) {
                    /* WARNING: Does not return */
                              pcVar3 = (code *)SoftwareBreakpoint(1,0x10195b218);
                              (*pcVar3)();
                            }
                            *(bool *)(unaff_x20 + lVar12) =
                                 ppuVar17 != *(undefined ***)(lVar7 + lVar13);
                            func_0x0001002e9544(ppuVar17);
                            goto LAB_10195af24;
                          }
                        }
                        puVar26 = puVar26 + 1;
                        param_1 = dVar31;
                      } while (ppuVar1 != ppuVar29);
                    }
                    func_0x000107c6142c(ppuVar18);
                    func_0x000107c61170(ppuVar11);
                    func_0x000107c61170(ppuVar15);
                    func_0x000107c61170(ppuVar25);
                  }
                  goto LAB_10195ad80;
                }
                func_0x000107c61170(ppuVar11);
              }
LAB_10195af24:
              func_0x000107c61170();
            }
LAB_10195ad80:
            puVar28 = puVar28 + 1;
          } while (puVar28 != puVar27);
        }
        func_0x000107c61574(ppuVar22);
        func_0x0001000c033c();
        func_0x000107c59840(lVar5);
        func_0x000107c61170(ppuVar22);
        lVar12 = lVar5;
        func_0x000107c5bcc0(lVar5);
        func_0x000107c61180();
        lVar13 = lVar12;
        func_0x000107c40794();
        func_0x000107c61170(lVar12);
        func_0x000107c60234(appuStack_a8,lVar13);
        func_0x000107c61170(lVar7);
        func_0x000107c615e8(lVar5);
        func_0x000107c615e8(ppuVar8);
        func_0x000107c615e8(ppuVar23);
        func_0x000107c615e8(lVar13);
        func_0x000107c61170(lVar6);
        func_0x000107c6142c(puStack_b0);
        uVar14 = 0;
        func_0x0001000c0a74(0);
        func_0x000107c6147c(&puStack_b8,appuStack_a8,PTR___sypN_11034f1a8 + 8,uVar14,6);
        return;
      }
    }
    lVar12 = lVar5;
    func_0x000107c5bcc0(lVar5);
    func_0x000107c61180();
    lVar13 = lVar12;
    func_0x000107c40794();
    func_0x000107c61170(lVar12);
    func_0x000107c60234(appuStack_a8,lVar13);
    func_0x000107c615e8(lVar13);
    func_0x000107c615e8(lVar5);
    func_0x000107c615e8(ppuVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
    uVar14 = 0;
    func_0x0001000c0a74(0);
    func_0x000107c6147c(&puStack_b0,appuStack_a8,PTR___sypN_11034f1a8 + 8,uVar14,6);
  }
  return;
}



/* Entry: 10195b238; end: 10195b26b; -[SCCameraHardwareUpdateFrameRateOnlyOperation execute] */

void FUN_10195b238(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10195aab4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10195b26c; end: 10195b33b;  */

/* WARNING: Possible PIC construction at 0x00010195b2c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010195b314: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010195b2c4) */
/* WARNING: Removing unreachable block (ram,0x00010195b2e4) */
/* WARNING: Removing unreachable block (ram,0x00010195b318) */
/* WARNING: Removing unreachable block (ram,0x00010195b2f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10195b26c(void)

{
  long lVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112dd8958) == '\x01') {
    lVar1 = unaff_x20 + _DAT_112dd8950;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c4c238();
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10195b33c; end: 10195b38b; -[SCCameraHardwareUpdateFrameRateOnlyOperation publishState:] */

/* WARNING: Possible PIC construction at 0x00010195b374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010195b378) */

void FUN_10195b33c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10195b26c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10195b38c; end: 10195b443; -[SCCameraHardwareUpdateFrameRateOnlyOperation expectedStates] */

void FUN_10195b38c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x0001002a4cb0();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 5;
  *(undefined8 *)(param_1 + 0x10) = 2;
  puVar1 = PTR_PTR_1126b9d70;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c41dc4();
  func_0x000107c61180();
  *(undefined **)(param_1 + 0x20) = puVar2;
  func_0x000107c41a00();
  func_0x000107c61180();
  *(undefined **)(param_1 + 0x28) = puVar1;
  uVar3 = 0;
  func_0x000100357f20(0,0x112dd8540,&PTR_PTR_1126b9d70);
  lVar4 = param_1;
  func_0x000107c5fc48(param_1,uVar3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10195b444; end: 10195b4a3; -[SCCameraHardwareUpdateFrameRateOnlyOperation initWithDelegate:] */

void FUN_10195b444(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraRequestHandlerOperations.CameraHardwareUpdateFrameRateOnlyOperation",
                      0x4b,"init(delegate:)",0xf,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10195b470);
  (*pcVar1)();
}



/* Entry: 10195b4a4; end: 10195b50f; -[SCCameraHardwareUpdateFrameRateOnlyOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10195b4a4(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112dd8960));
  FUN_101953edc(param_1 + _DAT_112dd8950);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd8968 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112dd8970));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dd8978));
  return;
}



/* Entry: 10195b510; end: 10195b537;  */

ulong FUN_10195b510(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003585d0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003585d4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___AVCaptureInputPort_1126a70f0;
    func_0x000107c61168(PTR__OBJC_CLASS___AVCaptureInputPort_1126a70f0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___AVCaptureInputPort_1126a70f0;
    func_0x000107c61168(PTR__OBJC_CLASS___AVCaptureInputPort_1126a70f0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000100357f20(0,0x112da0cb8,&PTR__OBJC_CLASS___AVCaptureInputPort_1126a70f0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003586a8);
  (*pcVar2)();
}



/* Entry: 10195b538; end: 10195b553;  */

void FUN_10195b538(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10195b554();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10195b554; end: 10195b653;  */

undefined * FUN_10195b554(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10195b654);
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
    puVar3 = (undefined *)0x112da0c08;
    func_0x0001000285a8(0x112da0c08,&UNK_10d943d90);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10195b654; end: 10195b733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10195b654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112dd8950;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8950,0);
  *(undefined1 *)(unaff_x20 + _DAT_112dd8958) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8960) = param_2;
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dd8968);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8970) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8978) = param_7;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_initWithDelegate__1125e0280,param_1);
  return;
}



/* Entry: 10195b734; end: 10195b753;  */

void FUN_10195b734(void)

{
  func_0x000107c61168(&PTR_PTR_1127edad8);
  return;
}



/* Entry: 10195b754; end: 10195b78b;  */

void FUN_10195b754(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5ed2c();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10195b78c; end: 10195b793; -[SCCameraHardwareUpdateSessionPhotoOutputUsageOperation type] */

undefined8 FUN_10195b78c(void)

{
  return 0x800;
}



/* Entry: 10195b794; end: 10195b8cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10195b794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112dd89a8;
  func_0x000107c61614(unaff_x20 + _DAT_112dd89a8,0);
  lVar2 = _DAT_112dd89b0;
  func_0x000107c61614(unaff_x20 + _DAT_112dd89b0,0);
  lVar3 = _DAT_112dd89b8;
  func_0x000107c61614(unaff_x20 + _DAT_112dd89b8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112dd89c0) = 0x3fe3333333333333;
  func_0x000107c61604(unaff_x20 + lVar1,param_2);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  func_0x000107c61604(unaff_x20 + lVar3,param_4);
  *(undefined1 *)(unaff_x20 + _DAT_112dd89c8) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112dd89d0) = param_6;
  puVar4 = auStack_70;
  func_0x000107c61154(puVar4,PTR_s_initWithDelegate__1125e0280,param_1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  return puVar4;
}



/* Entry: 10195b8cc; end: 10195b983; -[SCCameraHardwareUpdateSessionPhotoOutputUsageOperation initWithDelegate:managedCaptureSession:cameraHardwareResource:viewfinderRenderAgent:enabled:shouldPauseViewfinderRender:] */

undefined8
FUN_10195b8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  uVar1 = param_3;
  FUN_10195c598(param_3,param_4,param_5,param_6,param_7,param_8);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  return uVar1;
}



/* Entry: 10195b984; end: 10195c017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10195b984(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 auStack_80 [4];
  
  ppuVar9 = &puStack_b0;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd000000000000040;
  func_0x0001000a9a18(0xd000000000000040,0x800000010efc2c30);
  func_0x000107c61170(uVar1);
  lVar3 = unaff_x20 + _DAT_112dd89a8;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = unaff_x20 + _DAT_112dd89b0;
    func_0x000107c61618();
    if (lVar4 != 0) {
      uVar5 = unaff_x20 + _DAT_112dd89b8;
      func_0x000107c61618();
      if (uVar5 != 0) {
        if (((*(byte *)(unaff_x20 + _DAT_112dd89c8) & 1) != 0) &&
           (uVar6 = uVar5, func_0x00010195bc18(), (uVar6 & 1) == 0)) {
          if (*(char *)(unaff_x20 + _DAT_112dd89d0) == '\x01') {
            pcVar7 = "execute()";
            func_0x0001000c10c0("execute()");
            func_0x000107c61180();
            puVar8 = &UNK_110418540;
            func_0x000107c613fc(&UNK_110418540,0x20,7);
            *(ulong *)(puVar8 + 0x10) = uVar5;
            *(long *)(puVar8 + 0x18) = unaff_x20;
            pcStack_90 = FUN_10195c6a0;
            puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a8 = 0x42000000;
            puStack_a0 = &UNK_1000f6b44;
            puStack_98 = &UNK_110418558;
            puStack_88 = puVar8;
            func_0x000107c60bc4(&puStack_b0);
            puVar8 = puStack_88;
            func_0x000107c61174(uVar5);
            func_0x000107c61174();
            func_0x000107c61574(puVar8);
            func_0x000107c4e524(pcVar7);
            func_0x000107c60bd0(ppuVar9);
            func_0x000107c615e8(pcVar7);
          }
          func_0x000107c3d7f0(lVar3);
        }
        lVar10 = lVar4;
        func_0x000107c5bcc0(lVar4);
        func_0x000107c61180();
        lVar11 = lVar10;
        func_0x000107c40794();
        func_0x000107c61170(lVar10);
        func_0x000107c60234(&puStack_b0,lVar11);
        func_0x000107c615e8(lVar11);
        func_0x000107c615e8(lVar3);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(uVar5);
        uVar1 = 0;
        func_0x0001000c0a74(0);
        puVar12 = auStack_80;
        func_0x000107c6147c(puVar12,&puStack_b0,PTR___sypN_11034f1a8 + 8,uVar1,6);
        uVar1 = auStack_80[0];
        if ((int)puVar12 == 0) {
          uVar1 = 0;
        }
        goto LAB_10195bbc4;
      }
      func_0x000107c615e8(lVar3);
      lVar3 = lVar4;
    }
    func_0x000107c615e8(lVar3);
  }
  uVar1 = 0;
LAB_10195bbc4:
  func_0x000107c61428(param_1,&puStack_b0,0,0);
  uVar13 = *param_1;
  func_0x000107c61174(uVar13);
  func_0x0001000aa0a8(uVar2);
  func_0x000107c61170(uVar13);
  return uVar1;
}



/* Entry: 10195c018; end: 10195c063;  */

void FUN_10195c018(long param_1)

{
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c4e458(0x3fe3333333333333);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10195c064; end: 10195c097; -[SCCameraHardwareUpdateSessionPhotoOutputUsageOperation execute] */

void FUN_10195c064(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10195b984();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10195c098; end: 10195c0e3; -[SCCameraHardwareUpdateSessionPhotoOutputUsageOperation publishState:] */

/* WARNING: Possible PIC construction at 0x00010195c0cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010195c0d0) */

void FUN_10195c098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10195c6c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10195c0e4; end: 10195c1af; -[SCCameraHardwareUpdateSessionPhotoOutputUsageOperation expectedStates] */

void FUN_10195c0e4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x0001002a4cb0();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 7;
  *(undefined8 *)(param_1 + 0x10) = 3;
  puVar1 = PTR_PTR_1126b9d70;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c41dc4();
  func_0x000107c61180();
  *(undefined **)(param_1 + 0x20) = puVar2;
  puVar2 = puVar1;
  func_0x000107c41a00();
  func_0x000107c61180();
  *(undefined **)(param_1 + 0x28) = puVar2;
  func_0x000107c419fc();
  func_0x000107c61180();
  *(undefined **)(param_1 + 0x30) = puVar1;
  uVar3 = 0;
  func_0x000100359a1c(0,0x112dd8540,&PTR_PTR_1126b9d70);
  lVar4 = param_1;
  func_0x000107c5fc48(param_1,uVar3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10195c1b0; end: 10195c20f; -[SCCameraHardwareUpdateSessionPhotoOutputUsageOperation initWithDelegate:] */

void FUN_10195c1b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraRequestHandlerOperations.CameraHardwareUpdateSessionPhotoOutputUsageOperation"
                      ,0x55,"init(delegate:)",0xf,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10195c1dc);
  (*pcVar1)();
}



/* Entry: 10195c210; end: 10195c257; -[SCCameraHardwareUpdateSessionPhotoOutputUsageOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10195c210(long param_1)

{
  func_0x000100cc08f8(param_1 + _DAT_112dd89a8);
  func_0x000100cc08f8(param_1 + _DAT_112dd89b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112dd89b8);
  return;
}



/* Entry: 10195c258; end: 10195c423;  */

void FUN_10195c258(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  func_0x0001003597b8();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 10195c424; end: 10195c597;  */

ulong FUN_10195c424(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,code *param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10195c598);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10195c58c);
        (*pcVar1)();
      }
      uVar2 = 0;
      func_0x000100359a1c(0,param_4,param_5);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10195c590);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10195c594);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          (*param_6)(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 10195c598; end: 10195c69f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10195c598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112dd89a8;
  func_0x000107c61614(unaff_x20 + _DAT_112dd89a8,0);
  lVar2 = _DAT_112dd89b0;
  func_0x000107c61614(unaff_x20 + _DAT_112dd89b0,0);
  lVar3 = _DAT_112dd89b8;
  func_0x000107c61614(unaff_x20 + _DAT_112dd89b8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112dd89c0) = 0x3fe3333333333333;
  func_0x000107c61604(unaff_x20 + lVar1,param_2);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  func_0x000107c61604(unaff_x20 + lVar3,param_4);
  *(undefined1 *)(unaff_x20 + _DAT_112dd89c8) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112dd89d0) = param_6;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_initWithDelegate__1125e0280,param_1);
  return;
}



/* Entry: 10195c6a0; end: 10195c6c3;  */

void FUN_10195c6a0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734(lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4e458(0x3fe3333333333333);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 10195c6c4; end: 10195c743;  */

/* WARNING: Possible PIC construction at 0x00010195c6fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010195c700) */
/* WARNING: Removing unreachable block (ram,0x00010195c720) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10195c6c4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112dd89b0;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4c238();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 10195c744; end: 10195c763;  */

void FUN_10195c744(void)

{
  func_0x000107c61168(&PTR_PTR_1127edbc0);
  return;
}



/* Entry: 10195c764; end: 10195c7a7;  */

void FUN_10195c764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 10195c7a8; end: 10195c7cb;  */

/* WARNING: Possible PIC construction at 0x00010195c7b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010195c7b8) */

void FUN_10195c7a8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10195c7cc; end: 10195c81f;  */

void FUN_10195c7cc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10195c820; end: 10195c8cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10195c820(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [40];
  
  func_0x0001006bf3cc(*(long *)(unaff_x20 + 0x20) + _DAT_112ff7af0,auStack_58);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x0001006bf65c(0);
    func_0x000107c610f8();
    puVar3 = auStack_58;
    func_0x0001006bf67c(puVar3,lVar2);
    func_0x000107c615e8(lVar2);
    uVar4 = 0;
    func_0x000100217b90(0);
    func_0x000107c610f8();
    func_0x0001006bfabc(puVar3,uVar4);
    *param_1 = (long)puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10195c8cc);
  (*pcVar1)();
}



/* Entry: 10195c8cc; end: 10195c91f;  */

void FUN_10195c8cc(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10195c920; end: 10195d18f;  */

/* WARNING: Removing unreachable block (ram,0x00010195ca38) */
/* WARNING: Removing unreachable block (ram,0x00010195ce70) */
/* WARNING: Removing unreachable block (ram,0x00010195ca58) */
/* WARNING: Removing unreachable block (ram,0x00010195ce74) */
/* WARNING: Removing unreachable block (ram,0x00010195d020) */
/* WARNING: Removing unreachable block (ram,0x00010195d024) */
/* WARNING: Removing unreachable block (ram,0x00010195d0c4) */
/* WARNING: Removing unreachable block (ram,0x00010195d028) */
/* WARNING: Removing unreachable block (ram,0x00010195d178) */
/* WARNING: Removing unreachable block (ram,0x00010195d048) */
/* WARNING: Removing unreachable block (ram,0x00010195d04c) */
/* WARNING: Removing unreachable block (ram,0x00010195d050) */
/* WARNING: Removing unreachable block (ram,0x00010195d17c) */
/* WARNING: Removing unreachable block (ram,0x00010195d054) */
/* WARNING: Removing unreachable block (ram,0x00010195d05c) */
/* WARNING: Removing unreachable block (ram,0x00010195d060) */
/* WARNING: Removing unreachable block (ram,0x00010195d180) */
/* WARNING: Removing unreachable block (ram,0x00010195d064) */
/* WARNING: Removing unreachable block (ram,0x00010195d0cc) */

undefined * FUN_10195c920(undefined *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  double dVar10;
  double dVar11;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  func_0x00010006c804();
  puVar7 = param_1;
  func_0x000107c60ac8();
  puVar6 = param_1;
  func_0x000107c60ab8();
  dVar11 = ABS((double)(long)puVar7 - *(double *)(unaff_x20 + 0x48));
  dVar10 = ABS(*(double *)(unaff_x20 + 0x48) + (double)(long)puVar7) * 2.220446049250313e-16;
  bVar5 = true;
  if ((2.2250738585072014e-308 <= dVar11) && (bVar5 = false, !NAN(dVar11) && !NAN(dVar10))) {
    bVar5 = dVar11 < dVar10;
  }
  if (bVar5) {
    dVar11 = ABS((double)(long)puVar6 - *(double *)(unaff_x20 + 0x50));
    dVar10 = ABS(*(double *)(unaff_x20 + 0x50) + (double)(long)puVar6) * 2.220446049250313e-16;
    bVar5 = true;
    if ((2.2250738585072014e-308 <= dVar11) && (bVar5 = false, !NAN(dVar11) && !NAN(dVar10))) {
      bVar5 = dVar11 < dVar10;
    }
    if (bVar5) {
      func_0x000107c6071c();
      uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
      lVar2 = *(long *)(unaff_x20 + 0x30);
      dVar11 = dVar10;
      func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
      (**(code **)(lVar2 + 8))(param_1,uVar1,lVar2);
      puVar7 = param_1;
      FUN_10195d358();
      if (puVar7 != (undefined *)0x0) {
        func_0x000107c61170(param_1);
        param_1 = puVar7;
      }
      func_0x000107c6071c();
      puVar7 = *(undefined **)(unaff_x20 + 0x38);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
      func_0x00010195d344(param_1,0);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100214a84();
      puStack_a8 = PTR___sSSN_11034da80;
      puStack_c0 = puVar7;
      uStack_b8 = uVar1;
      func_0x000100102924(&puStack_c0,&uStack_a0);
      func_0x000107c61434(uVar1);
      puVar7 = puVar6;
      func_0x000107c61558(puVar6);
      puStack_c0 = puVar6;
      func_0x0001001029e8(&uStack_a0,0x616e5f6c65646f6d,0xea0000000000656d,puVar7);
      puVar7 = puStack_c0;
      puStack_c0 = (undefined *)0x1;
      puStack_a8 = PTR___sSiN_11034deb0;
      func_0x000100102924(&puStack_c0,&uStack_a0);
      puVar6 = puVar7;
      func_0x000107c61558(puVar7);
      puStack_c0 = puVar7;
      func_0x0001001029e8(&uStack_a0,0xd000000000000017,0x800000010efc2d40,puVar6);
      puVar7 = puStack_c0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      func_0x00010195d760(&uStack_a0,0x112d387f8,&UNK_10d902650);
      func_0x000100216878(&uStack_a0,0x656d5f726f727265,0xed00006567617373);
      func_0x00010195d760(&uStack_a0,0x112d387f8,&UNK_10d902650);
      if (0.0 < dVar11 - dVar10) {
        dVar10 = (dVar11 - dVar10) * 1000.0;
        if (0x7fe < (ulong)dVar10 >> 0x34) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10195d188);
          (*pcVar4)();
        }
        if (dVar10 <= -1.0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10195d18c);
          (*pcVar4)();
        }
        if (1.8446744073709552e+19 <= dVar10) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10195d190);
          (*pcVar4)();
        }
        puStack_c0 = (undefined *)(long)dVar10;
        puStack_a8 = PTR___sSuN_11034e220;
        func_0x000100102924(&puStack_c0,&uStack_a0);
        puVar6 = puVar7;
        func_0x000107c61558(puVar7);
        puStack_c0 = puVar7;
        func_0x0001001029e8(&uStack_a0,0xd000000000000015,0x800000010efc2d80,puVar6);
        puVar7 = puStack_c0;
      }
      func_0x000107c61174(param_1);
      puVar6 = puVar7;
      func_0x00010018cc3c(puVar7);
      func_0x000107c6142c(puVar7);
      func_0x0001043ecaa8(0);
      func_0x000107c610f8();
      puVar7 = param_1;
      func_0x0001043ec908(param_1,puVar6);
      FUN_10195d330(param_1,0);
      FUN_10195d330(param_1,0);
      goto LAB_10195cc58;
    }
  }
  uStack_a0 = 0;
  uStack_98 = 0xe000000000000000;
  func_0x000107c602fc(0x1d);
  func_0x000107c6142c(uStack_98);
  puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar3 = PTR___sSiN_11034deb0;
  uStack_a0 = 0xd000000000000017;
  uStack_98 = 0x800000010efc2d20;
  puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puStack_c0 = puVar7;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar8);
  func_0x000107c5fb78(0x202c,0xe200000000000000);
  puStack_c0 = puVar6;
  func_0x000107c6057c(puVar3,puVar9);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar9);
  func_0x000107c6142c(uStack_98);
  puVar7 = *(undefined **)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84();
  puStack_a8 = PTR___sSSN_11034da80;
  puStack_c0 = puVar7;
  uStack_b8 = uVar1;
  func_0x000100102924(&puStack_c0,&uStack_a0);
  func_0x000107c61434(uVar1);
  puVar7 = puVar6;
  func_0x000107c61558(puVar6);
  puStack_c0 = puVar6;
  func_0x0001001029e8(&uStack_a0,0x616e5f6c65646f6d,0xea0000000000656d,puVar7);
  puVar7 = puStack_c0;
  puStack_c0 = (undefined *)0x6;
  puStack_a8 = puVar3;
  func_0x000100102924(&puStack_c0,&uStack_a0);
  puVar6 = puVar7;
  func_0x000107c61558(puVar7);
  func_0x0001001029e8(&uStack_a0,0xd000000000000017,0x800000010efc2d40,puVar6);
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  puStack_c0 = puVar7;
  func_0x00010195d760(&uStack_a0,0x112d387f8,&UNK_10d902650);
  func_0x000100216878(&uStack_a0,0x656d5f726f727265,0xed00006567617373);
  func_0x00010195d760(&uStack_a0,0x112d387f8,&UNK_10d902650);
  puVar7 = puStack_c0;
  puVar6 = puStack_c0;
  func_0x00010018cc3c(puStack_c0);
  func_0x000107c6142c(puVar7);
  func_0x0001043ecaa8(0);
  func_0x000107c610f8();
  puVar7 = (undefined *)0x0;
  func_0x0001043ec908(0,puVar6);
LAB_10195cc58:
  func_0x000100070bfc();
  return puVar7;
}



/* Entry: 10195d190; end: 10195d1e7; -[_TtC30SCCameraMLSnapMLImplementation19CameraMLSnapMLModel runCoreMLWithPixelBuffer:] */

void FUN_10195d190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_10195c920(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10195d1e8; end: 10195d32f;  */

undefined8 FUN_10195d1e8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x12;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar4 = &uStack_80;
  func_0x000107c6147c(puVar4,auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,
                      &UNK_1106e9230,6);
  lVar2 = lStack_60;
  lVar1 = lStack_68;
  uVar5 = uStack_78;
  if (((ulong)puVar4 & 1) == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    lStack_60 = 1;
    uVar5 = 0x112dd8bf0;
    puVar6 = &UNK_10d99bff0;
  }
  else {
    uStack_48 = uStack_78;
    uStack_50 = uStack_80;
    uVar3 = uStack_50;
    uStack_38 = lStack_68;
    uStack_40 = uStack_70;
    uStack_28 = uStack_58;
    lStack_30 = lStack_60;
    uStack_50._0_1_ = (char)uStack_80;
    uStack_50 = uVar3;
    if ((char)uStack_50 != '\x03') {
      func_0x00010195d72c(&uStack_50);
      return 0;
    }
    uStack_78 = uStack_70;
    uStack_80 = uVar5;
    lStack_68 = lStack_60;
    uStack_70 = lVar1;
    lStack_60 = uStack_58;
    if (lVar2 != 0) {
      uVar5 = 0x112dd8c00;
      func_0x0001000285a8(0x112dd8c00,&UNK_10d99c000);
      puVar4 = &uStack_88;
      func_0x000107c6147c(puVar4,&uStack_80,uVar5,&UNK_1106e92e8,6);
      if (((ulong)puVar4 & 1) == 0) {
        return 0;
      }
      return uStack_88;
    }
    uVar5 = 0x112dd8bf8;
    puVar6 = &UNK_10dc659e0;
  }
  func_0x00010195d760(&uStack_80,uVar5,puVar6);
  return 0;
}



/* Entry: 10195d330; end: 10195d357;  */

void FUN_10195d330(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10195d358; end: 10195d6e7;  */

void FUN_10195d358(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [24];
  long lStack_158;
  ulong uStack_150;
  ulong uStack_148;
  long lStack_140;
  long alStack_138 [20];
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1;
  func_0x000107c60ac0();
  if ((int)uVar2 == 0x34323066) {
    func_0x000107c60ad0(param_1,1);
    uVar2 = param_1;
    func_0x000107c60ac8();
    uVar3 = param_1;
    func_0x000107c60ab8();
    uVar4 = param_1;
    func_0x000107c60aac(param_1,0);
    if ((uVar4 == 0) || (uVar5 = param_1, func_0x000107c60aac(param_1,1), uVar5 == 0)) {
LAB_10195d698:
      func_0x000107c60ae0(param_1,1);
      goto LAB_10195d6a4;
    }
    uVar6 = param_1;
    func_0x000107c60ab4(param_1,0);
    uVar7 = param_1;
    func_0x000107c60ab4(param_1,1);
    if ((long)(uVar3 | uVar2) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10195d6e0);
      (*pcVar1)();
    }
    uStack_88 = uVar2 >> 1;
    uStack_90 = uVar3 >> 1;
    lVar13 = 0x112da90a0;
    uStack_98 = uVar5;
    uStack_80 = uVar7;
    uStack_78 = uVar4;
    uStack_70 = uVar3;
    uStack_68 = uVar2;
    uStack_60 = uVar6;
    func_0x0001000285a8(0x112da90a0,&UNK_10d950500);
    func_0x000107c61534();
    *(undefined8 *)(lVar13 + 0x18) = 6;
    *(undefined8 *)(lVar13 + 0x10) = 3;
    *(undefined8 *)(lVar13 + 0x20) =
         *(undefined8 *)PTR__kCVPixelBufferCGImageCompatibilityKey_11034a380;
    puVar8 = PTR___sSbN_11034dd40;
    *(undefined1 *)(lVar13 + 0x28) = 1;
    uVar16 = *(undefined8 *)PTR__kCVPixelBufferCGBitmapContextCompatibilityKey_11034a378;
    *(undefined **)(lVar13 + 0x40) = puVar8;
    *(undefined8 *)(lVar13 + 0x48) = uVar16;
    *(undefined1 *)(lVar13 + 0x50) = 1;
    uVar17 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
    *(undefined **)(lVar13 + 0x68) = puVar8;
    *(undefined8 *)(lVar13 + 0x70) = uVar17;
    func_0x000107c61174();
    func_0x000107c61174(uVar16);
    func_0x000107c61174(uVar17);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
    uVar16 = 0x112da99a0;
    func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
    *(undefined8 *)(lVar13 + 0x90) = uVar16;
    *(undefined **)(lVar13 + 0x78) = puVar8;
    lVar9 = lVar13;
    func_0x0001014c14a8(lVar13);
    func_0x000107c61588(lVar13);
    uVar16 = 0x112da90b0;
    func_0x0001000285a8(0x112da90b0,&UNK_10d950510);
    func_0x000107c61408((undefined8 *)(lVar13 + 0x20),3,uVar16);
    alStack_138[0] = 0;
    uVar15 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    uVar17 = 0;
    func_0x0001014bede8(0);
    uVar16 = uVar17;
    FUN_10195d6e8();
    lVar13 = lVar9;
    func_0x000107c5f9dc(lVar9,uVar17,PTR___sypN_11034f1a8 + 8,uVar16);
    func_0x000107c6142c(lVar9);
    func_0x000107c60aa0(uVar15,uVar2,uVar3,0x52474241,lVar13,alStack_138);
    func_0x000107c61170(lVar13);
    lVar13 = alStack_138[0];
    if ((int)uVar15 != 0) {
LAB_10195d694:
      func_0x000107c61170(alStack_138[0]);
      goto LAB_10195d698;
    }
    if (alStack_138[0] == 0) goto LAB_10195d698;
    lVar9 = alStack_138[0];
    func_0x000107c61174();
    func_0x000107c60ad0();
    lVar10 = lVar9;
    func_0x000107c60aa8();
    if (lVar10 == 0) {
      func_0x000107c60ae0(lVar9,0);
LAB_10195d688:
      func_0x000107c61170(lVar9);
      goto LAB_10195d694;
    }
    lVar11 = lVar9;
    func_0x000107c60ab0();
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    lVar14 = *(long *)PTR__kvImage_YpCbCrToARGBMatrix_ITU_R_601_4_110347850;
    lStack_158 = lVar10;
    uStack_150 = uVar3;
    uStack_148 = uVar2;
    lStack_140 = lVar11;
    if (lVar14 == 0) goto LAB_10195d6e4;
    func_0x000107c61428(0x112dd8ba0,auStack_170,0x20,0);
    func_0x000107c616b8(lVar14,0x112dd8ba0,&uStack_1f0,4,0,0);
    func_0x000107c614a8(auStack_170);
    puVar12 = &uStack_78;
    func_0x000107c616b4(puVar12,&uStack_98,&lStack_158,&uStack_1f0,0x112dd8be8,0xff,0x10);
    func_0x000107c60ae0(lVar9,0);
    if (puVar12 != (ulong *)0x0) goto LAB_10195d688;
    func_0x000107c61170(alStack_138[0]);
    func_0x000107c60ae0(param_1,1);
  }
  else {
LAB_10195d6a4:
    lVar13 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78(lVar13);
LAB_10195d6e4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10195d6e8);
  (*pcVar1)();
}



/* Entry: 10195d6e8; end: 10195d72b;  */

void FUN_10195d6e8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112da8f90 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x0001014bede8(0xff);
  puVar2 = &UNK_10dcb8d78;
  func_0x000107c61520(&UNK_10dcb8d78,uVar1);
  puRam0000000112da8f90 = puVar2;
  return;
}



/* Entry: 10195d72c; end: 10195d79f;  */

undefined8 FUN_10195d72c(undefined8 param_1)

{
  (*(code *)&DAT_103c10930)();
  return param_1;
}



/* Entry: 10195d7a0; end: 10195d7af;  */

void FUN_10195d7a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10195d7b0; end: 10195dbd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10195d7b0(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar8 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar8 = param_2 >> 0x38 & 0xf;
  }
  if (uVar8 == 0) {
    return;
  }
  func_0x00010006c804();
  lVar6 = _DAT_112dd8c40;
  func_0x000107c61428(unaff_x20 + _DAT_112dd8c40,&uStack_78,0x20,0);
  lVar6 = *(long *)(unaff_x20 + lVar6);
  if (*(long *)(lVar6 + 0x10) == 0) {
LAB_10195d8f8:
    func_0x000107c614a8(&uStack_78);
    func_0x000100070bfc();
  }
  else {
    func_0x000107c61434(lVar6);
    uVar8 = param_1;
    uVar5 = param_2;
    func_0x000100029284();
    if ((uVar5 & 1) == 0) {
      func_0x000107c6142c(lVar6);
      goto LAB_10195d8f8;
    }
    uVar8 = *(ulong *)(*(long *)(lVar6 + 0x38) + uVar8 * 8);
    func_0x000107c6142c(lVar6);
    func_0x000107c614a8(&uStack_78);
    func_0x000100070bfc();
    if (2 < uVar8) {
      uStack_78 = 0;
      uStack_70 = 0xe000000000000000;
      func_0x000107c602fc(0x37);
      func_0x000107c5fb78(0x6f6974617265704f,0xeb00000000203a6e);
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0xd00000000000002a,0x800000010efc2de0);
      uVar7 = uStack_70;
      goto LAB_10195d9c8;
    }
  }
  func_0x00010006c804();
  lVar6 = _DAT_112dd8c30;
  func_0x000107c61428(unaff_x20 + _DAT_112dd8c30,&uStack_78,0,0);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar6);
  func_0x000107c61434(uVar7);
  uVar8 = param_1;
  func_0x0001000f66f0(param_1,param_2,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000100070bfc();
  if ((uVar8 & 1) == 0) {
    uStack_a0 = 0;
    uStack_98 = 0xe000000000000000;
    func_0x000107c602fc(0x31);
    func_0x000107c6142c(uStack_98);
    uStack_a0 = 0xd00000000000001d;
    uStack_98 = 0x800000010efc2e10;
    func_0x000107c5fb78(param_1,param_2);
    func_0x000107c5fb78(0xd000000000000010,0x800000010efc2e30);
    func_0x000107c5fb78(param_3,param_4);
    func_0x000107c6142c(uStack_98);
    func_0x00010006c804();
    func_0x000107c61428(unaff_x20 + lVar6,&uStack_a0,0x21,0);
    func_0x000107c61434(param_2);
    func_0x000100403b00(auStack_88,param_1,param_2);
    func_0x000107c614a8(&uStack_a0);
    func_0x000107c6142c(uStack_80);
    func_0x000100070bfc();
    puVar3 = &UNK_110418640;
    puVar1 = puVar3;
    func_0x000107c613fc(&UNK_110418640,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    puVar2 = &UNK_110418708;
    func_0x000107c613fc(&UNK_110418708,0x38,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(ulong *)(puVar2 + 0x18) = param_1;
    *(ulong *)(puVar2 + 0x20) = param_2;
    *(undefined8 *)(puVar2 + 0x28) = param_3;
    *(undefined8 *)(puVar2 + 0x30) = param_4;
    func_0x000107c613fc(&UNK_110418640,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_110418730;
    func_0x000107c613fc(&UNK_110418730,0x48,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(code **)(puVar4 + 0x18) = FUN_10195ff04;
    *(undefined **)(puVar4 + 0x20) = puVar2;
    *(ulong *)(puVar4 + 0x28) = param_1;
    *(ulong *)(puVar4 + 0x30) = param_2;
    *(undefined8 *)(puVar4 + 0x38) = param_3;
    *(undefined8 *)(puVar4 + 0x40) = param_4;
    func_0x000107c61438(param_2,2);
    func_0x000107c61438(param_4,2);
    func_0x000107c6157c(puVar1);
    func_0x000107c6157c(puVar2);
    uVar7 = 0xc2;
    func_0x0001001ca524(0xc2,0,0x14,3,0,0,&UNK_10d99c050,puVar4,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(uVar7);
    return;
  }
  uStack_a0 = 0;
  uStack_98 = 0xe000000000000000;
  func_0x000107c602fc(0x31);
  func_0x000107c6142c(uStack_98);
  uStack_a0 = 0x6469206c65646f4d;
  uStack_98 = 0xe900000000000020;
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0xd000000000000026,0x800000010efc2e50);
  uVar7 = uStack_98;
LAB_10195d9c8:
  func_0x000107c6142c(uVar7);
  return;
}



/* Entry: 10195dbd8; end: 10195ded3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10195dbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 auStack_b8 [5];
  char cStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_88,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    func_0x00010006c804();
    func_0x000107c61428(param_4 + _DAT_112dd8c30,auStack_b8,0x21,0);
    uVar3 = param_6;
    func_0x0001010af1e4(param_5,param_6);
    func_0x000107c614a8(auStack_b8);
    func_0x000107c6142c(uVar3);
    func_0x000100070bfc();
    FUN_10195ffe4(param_3,auStack_b8);
    if (cStack_90 == '\x01') {
      uStack_e0 = 0;
      uStack_d8 = 0xe000000000000000;
      func_0x000107c602fc(0x32);
      func_0x000107c5fb78(0xd000000000000030,0x800000010efc2ec0);
      uStack_f8 = auStack_b8[0];
      func_0x000107c603d0(&uStack_f8,&uStack_e0,&UNK_1104187c8,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c6142c(uStack_d8);
      FUN_10195ded4(param_5,param_6);
      func_0x000107c61170(param_4);
      func_0x000107c614ac(auStack_b8[0]);
    }
    else {
      FUN_101960034(auStack_b8,&uStack_e0);
      uStack_f8 = 0;
      uStack_f0 = 0xe000000000000000;
      func_0x000107c602fc(0x36);
      func_0x000107c5fb78(0xd000000000000034,0x800000010efc2e80);
      func_0x000107c5fb78(param_5,param_6);
      func_0x000107c6142c(uStack_f0);
      FUN_10195dffc(param_5,param_6,param_7,param_8);
      lVar2 = 0;
      func_0x00010195c900();
      func_0x000107c613fc();
      uVar3 = 0;
      func_0x00010006a340();
      func_0x000107c613fc();
      func_0x00010006a360();
      *(undefined8 *)(lVar2 + 0x58) = uVar3;
      func_0x0001006bfa58(&uStack_e0,lVar2 + 0x10);
      *(undefined8 *)(lVar2 + 0x38) = param_5;
      *(undefined8 *)(lVar2 + 0x40) = param_6;
      *(undefined8 *)(lVar2 + 0x48) = param_1;
      *(undefined8 *)(lVar2 + 0x50) = param_2;
      func_0x000107c61434(param_6);
      func_0x00010006c804();
      lVar1 = _DAT_112dd8c38;
      func_0x000107c61428(param_4 + _DAT_112dd8c38,&uStack_f8,0x21,0);
      func_0x000107c61434(param_6);
      func_0x000107c6157c(lVar2);
      uVar3 = *(undefined8 *)(param_4 + lVar1);
      func_0x000107c61558(uVar3);
      uVar4 = *(undefined8 *)(param_4 + lVar1);
      *(undefined8 *)(param_4 + lVar1) = 0x8000000000000000;
      func_0x00010195f3b8(lVar2,param_5,param_6,uVar3);
      func_0x000107c6142c(param_6);
      *(undefined8 *)(param_4 + lVar1) = uVar4;
      func_0x000107c614a8(&uStack_f8);
      func_0x000100070bfc();
      func_0x000107c61574(lVar2);
      func_0x0001006bfa9c(&uStack_e0);
      func_0x000107c61170(param_4);
    }
  }
  return;
}



/* Entry: 10195ded4; end: 10195dffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10195ded4(long param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  func_0x00010006c804();
  lVar1 = _DAT_112dd8c40;
  func_0x000107c61428(unaff_x20 + _DAT_112dd8c40,auStack_68,0x20,0);
  lVar6 = *(long *)(unaff_x20 + lVar1);
  if (*(long *)(lVar6 + 0x10) == 0) {
    lVar7 = 0;
  }
  else {
    func_0x000107c61434(lVar6);
    lVar7 = param_1;
    uVar4 = param_2;
    func_0x000100029284();
    if ((uVar4 & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + lVar7 * 8);
    }
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c614a8(auStack_68);
  if (lVar7 != -1) {
    func_0x000107c61428(unaff_x20 + lVar1,auStack_68,0x21,0);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61558(uVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
    FUN_10195f270(lVar7 + 1,param_1,param_2,uVar3);
    *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
    func_0x000107c614a8(auStack_68);
    func_0x000100070bfc();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10195dffc);
  (*pcVar2)();
}



/* Entry: 10195dffc; end: 10195e68b;  */

/* WARNING: Removing unreachable block (ram,0x00010195e120) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10195dffc(ulong param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x20;
  ulong uVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  ulong uStack_d8;
  ulong uStack_d0;
  char cStack_c1;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong *puStack_90;
  long lStack_88;
  
  lVar15 = *(long *)(unaff_x20 + _DAT_112dd8c20);
  func_0x000107c5fadc(param_3);
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (lVar15 != 0) {
    lVar5 = lVar15;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar5);
      uVar1 = (uint)(param_4 >> 0x20);
      uVar13 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar13 == 0) {
          if ((param_4 & 0xff000000000000) != 0) {
LAB_10195e0e0:
            func_0x000107c610f8(PTR_PTR_1126bca38);
            func_0x00010006c00c(lVar6,param_4);
            lVar5 = lVar6;
            FUN_10196004c(lVar6,param_4);
            func_0x00010006c090(lVar6,param_4);
            if (lVar5 != 0) {
              lVar7 = lVar5;
              func_0x000107c4d084();
              func_0x000107c61180();
              if (lVar7 == 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10195e68c);
                (*pcVar4)();
              }
              uStack_c0 = param_1;
              uStack_b8 = param_2;
              func_0x000107c61434(param_2);
              puVar12 = &uStack_c0;
              func_0x000107c6061c(puVar12,PTR___sSSN_11034da80);
              lVar8 = lVar7;
              func_0x000107c3ac74();
              func_0x000107c61180();
              func_0x000107c61170(lVar7);
              func_0x000107c615e8(puVar12);
              if (lVar8 == 0) {
                uStack_b8 = 0;
                uStack_c0 = 0;
                lStack_a8 = 0;
                uStack_b0 = 0;
              }
              else {
                func_0x000107c60234(&uStack_c0,lVar8);
                func_0x000107c615e8(lVar8);
              }
              uStack_98 = uStack_b8;
              uStack_a0 = uStack_c0;
              lStack_88 = lStack_a8;
              puStack_90 = (ulong *)uStack_b0;
              if (lStack_a8 == 0) {
                func_0x000107c61170(lVar5);
                func_0x00010006c090(lVar6,param_4);
                func_0x000107c61170(lVar15);
                FUN_10196010c(&uStack_a0,0x112d387f8,&UNK_10d902650);
                goto LAB_10195e13c;
              }
              uVar9 = 0;
              FUN_10196014c(0);
              puVar2 = PTR___sypN_11034f1a8;
              puVar12 = &uStack_d8;
              func_0x000107c6147c(puVar12,&uStack_a0,PTR___sypN_11034f1a8 + 8,uVar9,6);
              uVar3 = uStack_d8;
              if (((ulong)puVar12 & 1) == 0) {
                func_0x000107c61170(lVar5);
                goto LAB_10195e128;
              }
              uVar10 = uStack_d8;
              func_0x000107c5d918();
              func_0x000107c61180();
              if (uVar10 == 0) {
                func_0x000107c61170(lVar15);
                func_0x00010006c090(lVar6,param_4);
                func_0x000107c61170(uVar3);
                lVar15 = lVar5;
                goto LAB_10195e138;
              }
              uStack_a0 = 0x69775f6567616d69;
              uStack_98 = 0xeb00000000687464;
              puVar12 = &uStack_a0;
              func_0x000107c6061c(puVar12,PTR___sSSN_11034da80);
              uVar17 = uVar10;
              func_0x000107c3ac74();
              func_0x000107c61180();
              func_0x000107c615e8(puVar12);
              if (uVar17 == 0) {
                uStack_b8 = 0;
                uStack_c0 = 0;
                lStack_a8 = 0;
                uStack_b0 = 0;
              }
              else {
                func_0x000107c60234(&uStack_c0,uVar17);
                func_0x000107c615e8(uVar17);
              }
              uStack_98 = uStack_b8;
              uStack_a0 = uStack_c0;
              lStack_88 = lStack_a8;
              puStack_90 = (ulong *)uStack_b0;
              if (lStack_a8 == 0) {
                FUN_10196010c(&uStack_a0,0x112d387f8,&UNK_10d902650);
LAB_10195e38c:
                uVar17 = 0;
                uVar14 = 0xe000000000000000;
              }
              else {
                puVar12 = &uStack_d8;
                func_0x000107c6147c(puVar12,&uStack_a0,puVar2 + 8,PTR___sSSN_11034da80,6);
                uVar17 = uStack_d8;
                uVar14 = uStack_d0;
                if (((ulong)puVar12 & 1) == 0) goto LAB_10195e38c;
              }
              uStack_a0 = 0x65685f6567616d69;
              uStack_98 = 0xec00000074686769;
              puVar12 = &uStack_a0;
              func_0x000107c6061c(puVar12,PTR___sSSN_11034da80);
              uVar11 = uVar10;
              func_0x000107c3ac74();
              func_0x000107c61180();
              func_0x000107c615e8(puVar12);
              if (uVar11 == 0) {
                uStack_b8 = 0;
                uStack_c0 = 0;
                lStack_a8 = 0;
                uStack_b0 = 0;
              }
              else {
                func_0x000107c60234(&uStack_c0,uVar11);
                func_0x000107c615e8(uVar11);
              }
              uStack_98 = uStack_b8;
              uStack_a0 = uStack_c0;
              lStack_88 = lStack_a8;
              puStack_90 = (ulong *)uStack_b0;
              if (lStack_a8 == 0) {
                FUN_10196010c(&uStack_a0,0x112d387f8,&UNK_10d902650);
LAB_10195e45c:
                uVar11 = 0xe000000000000000;
                uVar16 = 0;
              }
              else {
                puVar12 = &uStack_d8;
                func_0x000107c6147c(puVar12,&uStack_a0,puVar2 + 8,PTR___sSSN_11034da80,6);
                uVar11 = uStack_d0;
                uVar16 = uStack_d8;
                if (((ulong)puVar12 & 1) == 0) goto LAB_10195e45c;
              }
              uStack_d8 = 0;
              puStack_90 = &uStack_d8;
              if ((uVar14 >> 0x3c & 1) == 0) {
                if ((uVar14 >> 0x3d & 1) == 0) {
                  if ((uVar17 >> 0x3c & 1) == 0) goto LAB_10195e620;
                  puVar12 = (ulong *)(uVar14 + 0x20);
                  if ((0x20 < *(byte *)puVar12) ||
                     ((1L << ((ulong)*(byte *)puVar12 & 0x3f) & 0x100003e01U) == 0))
                  goto LAB_10195e5e4;
LAB_10195e4d8:
                  cStack_c1 = false;
                }
                else {
                  uStack_b8 = uVar14 & 0xffffffffffffff;
                  uStack_c0 = uVar17;
                  if ((((uint)uVar17 & 0xff) < 0x21) &&
                     ((1L << (uVar17 & 0x3f) & 0x100003e01U) != 0)) goto LAB_10195e4d8;
                  puVar12 = &uStack_c0;
LAB_10195e5e4:
                  func_0x000107c60eb4(puVar12,&uStack_d8);
                  if (puVar12 == (ulong *)0x0) goto LAB_10195e4d8;
                  cStack_c1 = (byte)*puVar12 == 0;
                }
                func_0x000107c6142c(uVar14);
              }
              else {
LAB_10195e620:
                func_0x000107c602f0(&cStack_c1,0x101960190,&uStack_a0,uVar17,uVar14,
                                    PTR___sSbN_11034dd40);
                func_0x000107c6142c(uVar14);
              }
              uVar17 = uStack_d8;
              if (cStack_c1 == '\0') {
                uVar17 = 0x4094000000000000;
              }
              uStack_d8 = 0;
              puStack_90 = &uStack_d8;
              if ((uVar11 >> 0x3c & 1) == 0) {
                if ((uVar11 >> 0x3d & 1) == 0) {
                  if ((uVar16 >> 0x3c & 1) == 0) goto LAB_10195e654;
                  puVar12 = (ulong *)(uVar11 + 0x20);
                  if ((0x20 < *(byte *)puVar12) ||
                     ((1L << ((ulong)*(byte *)puVar12 & 0x3f) & 0x100003e01U) == 0))
                  goto LAB_10195e604;
LAB_10195e578:
                  cStack_c1 = false;
                }
                else {
                  uStack_b8 = uVar11 & 0xffffffffffffff;
                  uStack_c0 = uVar16;
                  if ((((uint)uVar16 & 0xff) < 0x21) &&
                     ((1L << (uVar16 & 0x3f) & 0x100003e01U) != 0)) goto LAB_10195e578;
                  puVar12 = &uStack_c0;
LAB_10195e604:
                  func_0x000107c60eb4(puVar12,&uStack_d8);
                  if (puVar12 == (ulong *)0x0) goto LAB_10195e578;
                  cStack_c1 = (byte)*puVar12 == 0;
                }
                func_0x000107c6142c(uVar11);
              }
              else {
LAB_10195e654:
                func_0x000107c602f0(&cStack_c1,FUN_101960384,&uStack_a0,uVar16,uVar11,
                                    PTR___sSbN_11034dd40);
                func_0x000107c6142c(uVar11);
              }
              uVar14 = uStack_d8;
              if (cStack_c1 == '\0') {
                uVar14 = 0x4086800000000000;
              }
              func_0x000107c61170(lVar5);
              func_0x000107c61170(uVar3);
              func_0x000107c61170(uVar10);
              func_0x00010006c090(lVar6,param_4);
              func_0x000107c61170(lVar15);
              goto LAB_10195e150;
            }
          }
        }
        else if ((long)(int)lVar6 != lVar6 >> 0x20) goto LAB_10195e0e0;
      }
      else if ((uVar13 == 2) && (*(long *)(lVar6 + 0x10) != *(long *)(lVar6 + 0x18)))
      goto LAB_10195e0e0;
LAB_10195e128:
      func_0x00010006c090(lVar6,param_4);
    }
LAB_10195e138:
    func_0x000107c61170(lVar15);
  }
LAB_10195e13c:
  uVar14 = 0x4086800000000000;
  uVar17 = 0x4094000000000000;
LAB_10195e150:
  auVar18._8_8_ = uVar14;
  auVar18._0_8_ = uVar17;
  return auVar18;
}



/* Entry: 10195e68c; end: 10195e6af;  */

void FUN_10195e68c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x108) = param_7;
  *(undefined8 *)(unaff_x22 + 0x110) = param_8;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x100) = param_6;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10195e6b0,0,0);
  return;
}



/* Entry: 10195e6b0; end: 10195e7bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10195e6b0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0xe0);
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 200,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x118) = lVar7;
  if (lVar7 != 0) {
    lVar7 = lVar7 + _DAT_112dd8c18;
    uVar2 = *(undefined8 *)(lVar7 + 0x18);
    lVar3 = *(long *)(lVar7 + 0x20);
    func_0x0001000a8868(lVar7,uVar2);
    piVar5 = *(int **)(lVar3 + 8);
    iVar1 = *piVar5;
    plVar4 = (long *)(ulong)(uint)piVar5[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x120) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_10195e7c0;
                    /* WARNING: Could not recover jumptable at 0x00010195e770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar5))
              (unaff_x22 + 0xa0,*(undefined8 *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0x100)
               ,*(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x110),1,0,1,uVar2,
               lVar3);
    return;
  }
  puVar6 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar6 = 0;
  *(undefined1 *)(unaff_x22 + 0x38) = 1;
  (**(code **)(unaff_x22 + 0xe8))(puVar6);
  FUN_10196010c(puVar6,0x112dd8c80,&UNK_10d99c058);
                    /* WARNING: Could not recover jumptable at 0x00010195e7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10195e7c0; end: 10195e81b;  */

void FUN_10195e7c0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x128) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x120));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10195e81c;
  }
  else {
    pcVar1 = FUN_10195e894;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10195e81c; end: 10195e893;  */

void FUN_10195e81c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  pcVar1 = *(code **)(unaff_x22 + 0xe8);
  func_0x0001006bfa58(unaff_x22 + 0xa0,unaff_x22 + 0x70);
  *(undefined1 *)(unaff_x22 + 0x98) = 0;
  (*pcVar1)(unaff_x22 + 0x70);
  func_0x000107c61170(uVar2);
  FUN_10196010c(unaff_x22 + 0x70,0x112dd8c80,&UNK_10d99c058);
  func_0x0001006bfa9c(unaff_x22 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010195e890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


