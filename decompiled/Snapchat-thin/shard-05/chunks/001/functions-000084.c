/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b01b7c; end: 103b01dbb;  */

undefined8 FUN_103b01b7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112feb238,auStack_48,0,0);
  if (cRam0000000112feb238 != '\0') {
    if (cRam0000000112feb238 != '\x01') {
      uVar1 = 0xd00000000000002b;
      func_0x000107c5fadc(0xd00000000000002b,0x800000010f19e4a0);
      uVar2 = param_1;
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar1);
      if ((int)uVar2 == 0) {
        return 0;
      }
    }
    func_0x000107c61428(0x112feb278,auStack_60,0,0);
    if (cRam0000000112feb278 != '\0') {
      if (cRam0000000112feb278 != '\x01') {
        uVar2 = 0xd000000000000030;
        func_0x000107c5fadc(0xd000000000000030,0x800000010f19e510);
        func_0x000107c3ebd4(param_1);
        func_0x000107c61170(uVar2);
        return param_1;
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 103b01dbc; end: 103b01dbf;  */

void FUN_103b01dbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112feb2f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc53c30;
  func_0x000107c61520(&UNK_10dc53c30,&UNK_1106d1768);
  puRam0000000112feb2f8 = puVar1;
  return;
}



/* Entry: 103b01dc0; end: 103b01dff;  */

void FUN_103b01dc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112feb2f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc53c30;
  func_0x000107c61520(&UNK_10dc53c30,&UNK_1106d1768);
  puRam0000000112feb2f8 = puVar1;
  return;
}



/* Entry: 103b01e00; end: 103b01e2b;  */

void FUN_103b01e00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103b01e2c();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103b01e6c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103b01e2c; end: 103b01eab;  */

void FUN_103b01e2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112feb300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc53cf8;
  func_0x000107c61520(&UNK_10dc53cf8,&UNK_1106d1768);
  puRam0000000112feb300 = puVar1;
  return;
}



/* Entry: 103b01eac; end: 103b01eaf;  */

void FUN_103b01eac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112feb310 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112feb318;
  func_0x00010002969c(0x112feb318,&UNK_10dc53cf0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112feb310 = puVar2;
  return;
}



/* Entry: 103b01eb0; end: 103b01f1f;  */

void FUN_103b01eb0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112feb310 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112feb318;
  func_0x00010002969c(0x112feb318,&UNK_10dc53cf0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112feb310 = puVar2;
  return;
}



/* Entry: 103b01f20; end: 103b020b3;  */

int FUN_103b01f20(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103b01f9c;
        goto LAB_103b01f80;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103b01f80:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103b01f9c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103b020b4; end: 103b0214b; +[SCCameraCaptureComponentRecordingDelayExperiment captureRecordingDelayValueWithCircumstanceEngine:] */

double FUN_103b020b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd000000000000032;
  func_0x000107c5fadc(0xd000000000000032,0x800000010f19e550);
  fVar4 = 0.17;
  func_0x000107c436e4(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_3);
  fVar2 = 1.0;
  if (fVar4 <= 1.0) {
    fVar2 = fVar4;
  }
  fVar3 = 0.17;
  if (0.0 <= fVar4) {
    fVar3 = fVar2;
  }
  return (double)fVar3;
}



/* Entry: 103b0214c; end: 103b0216b;  */

void FUN_103b0214c(void)

{
  func_0x000107c61168(&PTR_PTR_112927a80);
  return;
}



/* Entry: 103b0216c; end: 103b021a7; -[SCCameraCaptureComponentRecordingDelayExperiment init] */

void FUN_103b0216c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103b0214c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b021a8; end: 103b021d7;  */

void FUN_103b021a8(void)

{
  FUN_103b0214c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b021d8; end: 103b021eb;  */

bool FUN_103b021d8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103b021ec; end: 103b023e7;  */

void FUN_103b021ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x64656c62616e45;
  if (cVar4 != '\x01') {
    uVar3 = 0x2074636570736552;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xeb00000000422f41;
  }
  uVar2 = 0x64656c6261736944;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b023e8; end: 103b024b3;  */

void FUN_103b023e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x64656c62616e45;
  if (cVar4 != '\x01') {
    uVar3 = 0x2074636570736552;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xeb00000000422f41;
  }
  uVar2 = 0x64656c6261736944;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 103b024b4; end: 103b024f3;  */

void FUN_103b024b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112feb410;
  func_0x0001000285a8(0x112feb410,&UNK_10dc53e70);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103b024f4; end: 103b025af; +[SCCameraDisableBufferedVideoRecordingExperiment disableBufferedVideoRecordingWhenFlashOnEnabledWithCircumstanceEngine:] */

undefined8 FUN_103b024f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112feb418,auStack_48,0,0);
  if (cRam0000000112feb418 == '\0') {
    uVar1 = 0;
  }
  else if (cRam0000000112feb418 == '\x01') {
    uVar1 = 1;
  }
  else {
    func_0x000107c615f0(param_3);
    uVar2 = 0xd000000000000039;
    func_0x000107c5fadc(0xd000000000000039,0x800000010f19e590);
    uVar1 = param_3;
    func_0x000107c3ebd4(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_3);
  }
  return uVar1;
}



/* Entry: 103b025b0; end: 103b025eb; -[SCCameraDisableBufferedVideoRecordingExperiment init] */

void FUN_103b025b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103b02684();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b025ec; end: 103b0261b;  */

void FUN_103b025ec(void)

{
  FUN_103b02684();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b0261c; end: 103b0261f; -[SCCameraDisableBufferedVideoRecordingExperiment .cxx_destruct] */

void FUN_103b0261c(void)

{
  return;
}



/* Entry: 103b02620; end: 103b02683;  */

ulong FUN_103b02620(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 103b02684; end: 103b026a3;  */

void FUN_103b02684(void)

{
  func_0x000107c61168(&PTR_PTR_112927b30);
  return;
}



/* Entry: 103b026a4; end: 103b026a7;  */

void FUN_103b026a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112feb458 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc53e80;
  func_0x000107c61520(&UNK_10dc53e80,&UNK_1106d1a40);
  puRam0000000112feb458 = puVar1;
  return;
}



/* Entry: 103b026a8; end: 103b026e7;  */

void FUN_103b026a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112feb458 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc53e80;
  func_0x000107c61520(&UNK_10dc53e80,&UNK_1106d1a40);
  puRam0000000112feb458 = puVar1;
  return;
}



/* Entry: 103b026e8; end: 103b02713;  */

void FUN_103b026e8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103b02714();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103b02754();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103b02714; end: 103b02793;  */

void FUN_103b02714(void)

{
  undefined *puVar1;
  
  if (puRam0000000112feb460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc53f48;
  func_0x000107c61520(&UNK_10dc53f48,&UNK_1106d1a40);
  puRam0000000112feb460 = puVar1;
  return;
}



/* Entry: 103b02794; end: 103b02797;  */

void FUN_103b02794(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112feb470 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112feb478;
  func_0x00010002969c(0x112feb478,&UNK_10dc53f40);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112feb470 = puVar2;
  return;
}



/* Entry: 103b02798; end: 103b027e7;  */

void FUN_103b02798(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112feb470 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112feb478;
  func_0x00010002969c(0x112feb478,&UNK_10dc53f40);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112feb470 = puVar2;
  return;
}



/* Entry: 103b027e8; end: 103b0295b;  */

undefined1  [16] FUN_103b027e8(void)

{
  return ZEXT816(0x1106d19b0);
}



/* Entry: 103b0295c; end: 103b029af; +[SCCameraDisableHRSICaptureExperiment isHRSIEnabledWithIsMainCamera:isBackCamera:circumstanceEngine:] */

uint FUN_103b0295c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_5);
  FUN_103b02a1c(param_3,param_4,param_5);
  func_0x000107c615e8(param_5);
  return (uint)param_3 & 1;
}



/* Entry: 103b029b0; end: 103b029eb; -[SCCameraDisableHRSICaptureExperiment init] */

void FUN_103b029b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103b02ad4();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b029ec; end: 103b02a1b;  */

void FUN_103b029ec(void)

{
  FUN_103b02ad4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b02a1c; end: 103b02ad3;  */

uint FUN_103b02a1c(ulong param_1,ulong param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = 0xd000000000000026;
  uVar4 = 0xd000000000000025;
  pcVar1 = "RSI_CAPTURE_REPLY_FRONT";
  pcVar2 = "CAMERA_DISABLE_HRSI_CAPTURE_MAIN_FRONT";
  if ((param_2 & 1) == 0) {
    uVar4 = 0xd000000000000026;
    uVar3 = 0xd000000000000027;
    pcVar1 = "O_RECORDING_WHEN_FLASH_ON";
    pcVar2 = "CAMERA_DISABLE_HRSI_CAPTURE_REPLY_BACK";
  }
  pcVar2 = pcVar2 + 0x10;
  if ((param_1 & 1) == 0) {
    pcVar2 = pcVar1;
    uVar4 = uVar3;
  }
  func_0x000107c5fadc(uVar4,(ulong)pcVar2 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar2 | 0x8000000000000000);
  func_0x000107c3ebd4(param_3);
  func_0x000107c61170(uVar4);
  return (uint)param_3 ^ 1;
}



/* Entry: 103b02ad4; end: 103b02af3;  */

void FUN_103b02ad4(void)

{
  func_0x000107c61168(&PTR_PTR_112927be0);
  return;
}



/* Entry: 103b02af4; end: 103b02b07;  */

bool FUN_103b02af4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103b02b08; end: 103b02d03;  */

void FUN_103b02b08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x64656c62616e45;
  if (cVar4 != '\x01') {
    uVar3 = 0x2074636570736552;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xeb00000000422f41;
  }
  uVar2 = 0x64656c6261736944;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b02d04; end: 103b02dcf;  */

void FUN_103b02d04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x64656c62616e45;
  if (cVar4 != '\x01') {
    uVar3 = 0x2074636570736552;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xeb00000000422f41;
  }
  uVar2 = 0x64656c6261736944;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 103b02dd0; end: 103b02e0f;  */

void FUN_103b02dd0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112feb570;
  func_0x0001000285a8(0x112feb570,&UNK_10dc54070);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103b02e10; end: 103b02e4b; -[SCCameraViewControllerLifecycleExperiment init] */

void FUN_103b02e10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103b02ee4();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b02e4c; end: 103b02e7b;  */

void FUN_103b02e4c(void)

{
  FUN_103b02ee4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b02e7c; end: 103b02e7f; -[SCCameraViewControllerLifecycleExperiment .cxx_destruct] */

void FUN_103b02e7c(void)

{
  return;
}



/* Entry: 103b02e80; end: 103b02ee3;  */

ulong FUN_103b02e80(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 103b02ee4; end: 103b02f03;  */

void FUN_103b02ee4(void)

{
  func_0x000107c61168(&PTR_PTR_112927c90);
  return;
}



/* Entry: 103b02f04; end: 103b02f07;  */

void FUN_103b02f04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112feb5b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc54080;
  func_0x000107c61520(&UNK_10dc54080,&UNK_1106d1c90);
  puRam0000000112feb5b8 = puVar1;
  return;
}



/* Entry: 103b02f08; end: 103b02f47;  */

void FUN_103b02f08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112feb5b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc54080;
  func_0x000107c61520(&UNK_10dc54080,&UNK_1106d1c90);
  puRam0000000112feb5b8 = puVar1;
  return;
}



/* Entry: 103b02f48; end: 103b02f73;  */

void FUN_103b02f48(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103b02f74();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103b02fb4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103b02f74; end: 103b02ff3;  */

void FUN_103b02f74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112feb5c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc54148;
  func_0x000107c61520(&UNK_10dc54148,&UNK_1106d1c90);
  puRam0000000112feb5c0 = puVar1;
  return;
}



/* Entry: 103b02ff4; end: 103b02ff7;  */

void FUN_103b02ff4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112feb5d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112feb5d8;
  func_0x00010002969c(0x112feb5d8,&UNK_10dc54140);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112feb5d0 = puVar2;
  return;
}



/* Entry: 103b02ff8; end: 103b03047;  */

void FUN_103b02ff8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112feb5d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112feb5d8;
  func_0x00010002969c(0x112feb5d8,&UNK_10dc54140);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112feb5d0 = puVar2;
  return;
}



/* Entry: 103b03048; end: 103b031bb;  */

undefined1  [16] FUN_103b03048(void)

{
  return ZEXT816(0x1106d1c00);
}



/* Entry: 103b031bc; end: 103b03207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b031bc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112feb6a8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b03208; end: 103b03267; -[_TtC25SCSpotlightLaunchServices25SCSpotlightLaunchServices init] */

void FUN_103b03208(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightLaunchServices.SCSpotlightLaunchServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b03234);
  (*pcVar1)();
}



/* Entry: 103b03268; end: 103b03277; -[_TtC25SCSpotlightLaunchServices25SCSpotlightLaunchServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b03268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112feb6a8));
  return;
}



/* Entry: 103b03278; end: 103b03287; -[ChatAttachmentHandlerScope attachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b03278(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112feb6d8));
  return;
}



/* Entry: 103b03288; end: 103b032d3; -[ChatAttachmentHandlerScope messageSenderUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b03288(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112feb6e0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112feb6e0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b032d4; end: 103b0332f; -[ChatAttachmentHandlerScope otherParticipantId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b032d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112feb6e8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112feb6e8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b03330; end: 103b0333f; -[ChatAttachmentHandlerScope conversationSubtypeMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b03330(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112feb6f0));
  return;
}



/* Entry: 103b03340; end: 103b0335f; -[ChatAttachmentHandlerScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b03340(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112feb6f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b03360; end: 103b033a7; -[ChatAttachmentHandlerScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b03360(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112feb700;
  func_0x000107c61428(param_1 + _DAT_112feb700,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b033a8; end: 103b033ff; -[ChatAttachmentHandlerScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b033a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112feb700;
  func_0x000107c61428(param_1 + _DAT_112feb700,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b03400; end: 103b0354b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103b03400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112feb700;
  func_0x000107c61614(unaff_x20 + _DAT_112feb700,0);
  *(undefined8 *)(unaff_x20 + _DAT_112feb6d8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feb6e0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feb6e8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112feb6f0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112feb6f8) = param_7;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_8);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  puVar4 = auStack_88;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_8);
  return puVar4;
}



/* Entry: 103b0354c; end: 103b0363f; -[ChatAttachmentHandlerScope initWithAttachment:messageSenderUserId:otherParticipantId:conversationSubtypeMetadata:uiContainer:delegate:] */

undefined8
FUN_103b0354c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec(param_4);
  if (param_5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000107c5faec(param_5);
  }
  func_0x000107c61174(param_3);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_8);
  uVar2 = param_3;
  FUN_103b03720(param_3,param_4,param_2,param_5,uVar3,param_6,param_7,param_8);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_8);
  return uVar2;
}



/* Entry: 103b03640; end: 103b0369f; -[ChatAttachmentHandlerScope init] */

void FUN_103b03640(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatAttachmentHandlerScope.ChatAttachmentHandlerScope",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0366c);
  (*pcVar1)();
}



/* Entry: 103b036a0; end: 103b0371f; -[ChatAttachmentHandlerScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103b036a0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112feb6d8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112feb6e0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112feb6e8 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112feb6f0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112feb6f8));
  param_1 = param_1 + _DAT_112feb700;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b03720; end: 103b03837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b03720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar3 = _DAT_112feb700;
  func_0x000107c61614(unaff_x20 + _DAT_112feb700,0);
  *(undefined8 *)(unaff_x20 + _DAT_112feb6d8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feb6e0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feb6e8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112feb6f0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112feb6f8) = param_7;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_8);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c61154(&stack0xffffffffffffff78,puVar2);
  return;
}



/* Entry: 103b03838; end: 103b0385b;  */

undefined8 FUN_103b03838(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b0385c; end: 103b0387b;  */

void FUN_103b0385c(void)

{
  func_0x000107c61168(&PTR_PTR_112927e00);
  return;
}



/* Entry: 103b0387c; end: 103b0387f;  */

uint FUN_103b0387c(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong *puVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  ulong auStack_70 [2];
  
  lVar3 = 0;
  func_0x000107c5ede0();
  auStack_70[1] = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(auStack_70[1] + 0x40));
  uVar6 = (long)auStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  auStack_70[0] = uVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = uVar6 - extraout_x12;
  lVar4 = 0;
  FUN_103b03e1c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar13 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar14 = (ulong *)(lVar13 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar10 = (ulong *)((long)puVar14 - extraout_x12_01);
  lVar5 = 0x112feb7d8;
  func_0x0001000285a8(0x112feb7d8,&UNK_10dc542b8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar10 - extraout_x8_01;
  puVar1 = (ulong *)(lVar7 + *(int *)(lVar5 + 0x30));
  func_0x000103b0402c(param_1,lVar7);
  func_0x000103b0402c(param_2,puVar1);
  lVar5 = lVar7;
  func_0x000107c614c4(lVar7,lVar4);
  if ((int)lVar5 == 0) {
    func_0x000103b0402c(lVar7,puVar10);
    uVar6 = *puVar10;
    uVar8 = puVar10[1];
    puVar10 = puVar1;
    func_0x000107c614c4(puVar1,lVar4);
    if ((int)puVar10 != 0) {
LAB_103b03a74:
      func_0x000107c6142c(uVar8);
      goto LAB_103b03b18;
    }
LAB_103b03a0c:
    uVar2 = puVar1[1];
    if (uVar6 == *puVar1 && uVar8 == uVar2) {
      func_0x000107c6142c(uVar8);
      func_0x000107c6142c(uVar2);
    }
    else {
      func_0x000107c605b8(uVar6,uVar8,*puVar1,uVar2,0);
      func_0x000107c6142c(uVar8);
      func_0x000107c6142c(uVar2);
      if ((uVar6 & 1) == 0) {
        FUN_103b03de0(lVar7);
        goto LAB_103b03b20;
      }
    }
    FUN_103b03de0(lVar7);
    uVar9 = 1;
  }
  else {
    if ((int)lVar5 == 1) {
      func_0x000103b0402c(lVar7,puVar14);
      uVar6 = *puVar14;
      uVar8 = puVar14[1];
      puVar10 = puVar1;
      func_0x000107c614c4(puVar1,lVar4);
      if ((int)puVar10 != 1) goto LAB_103b03a74;
      goto LAB_103b03a0c;
    }
    func_0x000103b0402c(lVar7,lVar13);
    puVar10 = puVar1;
    func_0x000107c614c4(puVar1,lVar4);
    uVar6 = auStack_70[1];
    if ((int)puVar10 == 2) {
      pcVar11 = *(code **)(auStack_70[1] + 0x20);
      (*pcVar11)(lVar12,lVar13,lVar3);
      uVar8 = auStack_70[0];
      (*pcVar11)(auStack_70[0],puVar1,lVar3);
      lVar5 = lVar12;
      func_0x000107c5edac(lVar12,uVar8);
      uVar9 = (uint)lVar5;
      pcVar11 = *(code **)(uVar6 + 8);
      (*pcVar11)(uVar8,lVar3);
      (*pcVar11)(lVar12,lVar3);
      FUN_103b03de0(lVar7);
      goto LAB_103b03b44;
    }
    (**(code **)(auStack_70[1] + 8))(lVar13,lVar3);
LAB_103b03b18:
    func_0x000103b04070(lVar7);
LAB_103b03b20:
    uVar9 = 0;
  }
LAB_103b03b44:
  return uVar9 & 1;
}



/* Entry: 103b03880; end: 103b03b67;  */

uint FUN_103b03880(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong *puVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  ulong auStack_70 [2];
  
  lVar3 = 0;
  func_0x000107c5ede0();
  auStack_70[1] = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(auStack_70[1] + 0x40));
  uVar6 = (long)auStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  auStack_70[0] = uVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = uVar6 - extraout_x12;
  lVar4 = 0;
  FUN_103b03e1c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar13 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar14 = (ulong *)(lVar13 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar10 = (ulong *)((long)puVar14 - extraout_x12_01);
  lVar5 = 0x112feb7d8;
  func_0x0001000285a8(0x112feb7d8,&UNK_10dc542b8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar10 - extraout_x8_01;
  puVar1 = (ulong *)(lVar7 + *(int *)(lVar5 + 0x30));
  func_0x000103b0402c(param_1,lVar7);
  func_0x000103b0402c(param_2,puVar1);
  lVar5 = lVar7;
  func_0x000107c614c4(lVar7,lVar4);
  if ((int)lVar5 == 0) {
    func_0x000103b0402c(lVar7,puVar10);
    uVar6 = *puVar10;
    uVar8 = puVar10[1];
    puVar10 = puVar1;
    func_0x000107c614c4(puVar1,lVar4);
    if ((int)puVar10 != 0) {
LAB_103b03a74:
      func_0x000107c6142c(uVar8);
      goto LAB_103b03b18;
    }
LAB_103b03a0c:
    uVar2 = puVar1[1];
    if (uVar6 == *puVar1 && uVar8 == uVar2) {
      func_0x000107c6142c(uVar8);
      func_0x000107c6142c(uVar2);
    }
    else {
      func_0x000107c605b8(uVar6,uVar8,*puVar1,uVar2,0);
      func_0x000107c6142c(uVar8);
      func_0x000107c6142c(uVar2);
      if ((uVar6 & 1) == 0) {
        FUN_103b03de0(lVar7);
        goto LAB_103b03b20;
      }
    }
    FUN_103b03de0(lVar7);
    uVar9 = 1;
  }
  else {
    if ((int)lVar5 == 1) {
      func_0x000103b0402c(lVar7,puVar14);
      uVar6 = *puVar14;
      uVar8 = puVar14[1];
      puVar10 = puVar1;
      func_0x000107c614c4(puVar1,lVar4);
      if ((int)puVar10 != 1) goto LAB_103b03a74;
      goto LAB_103b03a0c;
    }
    func_0x000103b0402c(lVar7,lVar13);
    puVar10 = puVar1;
    func_0x000107c614c4(puVar1,lVar4);
    uVar6 = auStack_70[1];
    if ((int)puVar10 == 2) {
      pcVar11 = *(code **)(auStack_70[1] + 0x20);
      (*pcVar11)(lVar12,lVar13,lVar3);
      uVar8 = auStack_70[0];
      (*pcVar11)(auStack_70[0],puVar1,lVar3);
      lVar5 = lVar12;
      func_0x000107c5edac(lVar12,uVar8);
      uVar9 = (uint)lVar5;
      pcVar11 = *(code **)(uVar6 + 8);
      (*pcVar11)(uVar8,lVar3);
      (*pcVar11)(lVar12,lVar3);
      FUN_103b03de0(lVar7);
      goto LAB_103b03b44;
    }
    (**(code **)(auStack_70[1] + 8))(lVar13,lVar3);
LAB_103b03b18:
    func_0x000103b04070(lVar7);
LAB_103b03b20:
    uVar9 = 0;
  }
LAB_103b03b44:
  return uVar9 & 1;
}



/* Entry: 103b03b68; end: 103b03c47;  */

long * FUN_103b03b68(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar2 = param_2;
    func_0x000107c614c4(param_2,param_3);
    if ((int)plVar2 == 2) {
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
      uVar4 = 2;
    }
    else if ((int)plVar2 == 1) {
      lVar3 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar3;
      func_0x000107c61434();
      uVar4 = 1;
    }
    else {
      lVar3 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar3;
      func_0x000107c61434();
      uVar4 = 0;
    }
    func_0x000107c6159c(param_1,param_3,uVar4);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103b03c48; end: 103b03caf;  */

void FUN_103b03c48(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c614c4();
  iVar1 = (int)lVar2;
  if (iVar1 == 2) {
    lVar2 = 0;
    func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000103b03ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
    return;
  }
  if ((iVar1 != 1) && (iVar1 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103b03cb0; end: 103b03ddf;  */

undefined8 * FUN_103b03cb0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)puVar2 == 2) {
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
  }
  else {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    func_0x000107c61434();
  }
  func_0x000107c6159c(param_1,param_3,puVar2);
  return param_1;
}



/* Entry: 103b03de0; end: 103b03e1b;  */

undefined8 FUN_103b03de0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103b03e1c();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103b03e1c; end: 103b03e53;  */

void FUN_103b03e1c(undefined8 param_1)

{
  if (lRam0000000112feb7a0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7ac738);
  return;
}



/* Entry: 103b03e54; end: 103b03f8b;  */

undefined8 FUN_103b03e54(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)uVar1 == 2) {
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
    func_0x000107c6159c(param_1,param_3,2);
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
  return param_1;
}



/* Entry: 103b03f8c; end: 103b03fbb;  */

void FUN_103b03f8c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000103b03f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 103b03fbc; end: 103b04163;  */

void FUN_103b03fbc(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = &UNK_10dc542a0;
  puStack_30 = &UNK_10dc542a0;
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61528(param_1,0x100,3,&puStack_38);
  }
  return;
}



/* Entry: 103b04164; end: 103b0419b;  */

void FUN_103b04164(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103b0419c; end: 103b04213; -[SCChatAttachment description] */

void FUN_103b0419c(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_103b03e1c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  func_0x000107c61174(param_1);
  FUN_103b04214(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_103b03de0(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b04214; end: 103b044fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b04214(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar1 = 0x112feb800;
  func_0x0001000285a8(0x112feb800,&UNK_10dc542c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar3 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar4 = (undefined8 *)(lVar3 - extraout_x12);
  lVar1 = 0;
  FUN_103b03e1c();
  lVar8 = *(long *)(lVar1 + -8);
  pcVar9 = *(code **)(lVar8 + 0x38);
  (*pcVar9)(puVar4,1,1,lVar1);
  if (*(char *)(param_2 + _DAT_112feb7e0) == '\0') {
    lVar6 = ((undefined8 *)(param_2 + _DAT_112feb7e8))[1];
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x103b044f8);
      (*pcVar9)();
    }
    uVar7 = *(undefined8 *)(param_2 + _DAT_112feb7e8);
    func_0x000103b04ee0(puVar4,0x112feb800,&UNK_10dc542c8);
    *puVar4 = uVar7;
    puVar4[1] = lVar6;
    uVar7 = 0;
  }
  else {
    if (*(char *)(param_2 + _DAT_112feb7e0) != '\x01') {
      func_0x000103b04e98(param_2 + _DAT_112feb7f8,puVar5,0x112d36580,&UNK_10d9016d0);
      lVar6 = 0;
      func_0x000107c5ede0();
      lVar10 = *(long *)(lVar6 + -8);
      puVar2 = puVar5;
      (**(code **)(lVar10 + 0x30))(puVar5,1,lVar6);
      if ((int)puVar2 == 1) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x103b044fc);
        (*pcVar9)();
      }
      func_0x000103b04ee0(puVar4,0x112feb800,&UNK_10dc542c8);
      (**(code **)(lVar10 + 0x10))(puVar4,puVar5,lVar6);
      func_0x000107c6159c(puVar4,lVar1,2);
      (*pcVar9)(puVar4,0,1,lVar1);
      (**(code **)(lVar10 + 8))(puVar5,lVar6);
      goto LAB_103b04468;
    }
    lVar6 = ((undefined8 *)(param_2 + _DAT_112feb7f0))[1];
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x103b044f4);
      (*pcVar9)();
    }
    uVar7 = *(undefined8 *)(param_2 + _DAT_112feb7f0);
    func_0x000103b04ee0(puVar4,0x112feb800,&UNK_10dc542c8);
    *puVar4 = uVar7;
    puVar4[1] = lVar6;
    uVar7 = 1;
  }
  func_0x000107c6159c(puVar4,lVar1,uVar7);
  (*pcVar9)(puVar4,0,1,lVar1);
  func_0x000107c61434(lVar6);
LAB_103b04468:
  func_0x000103b04e98(puVar4,lVar3,0x112feb800,&UNK_10dc542c8);
  lVar6 = lVar3;
  (**(code **)(lVar8 + 0x30))(lVar3,1,lVar1);
  if ((int)lVar6 != 1) {
    func_0x000107c61170(param_2);
    func_0x000103b04e54(lVar3,param_1);
    func_0x000103b04ee0(puVar4,0x112feb800,&UNK_10dc542c8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x103b044f0);
  (*pcVar9)();
}



/* Entry: 103b044fc; end: 103b04543; -[SCChatAttachment init] */

void FUN_103b044fc(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "ChatAttachmentHandlerScope/ChatAttachmentWrapper.swift",0x36,2,0x34,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b04544);
  (*pcVar1)();
}



/* Entry: 103b04544; end: 103b04577; -[SCChatAttachment hash] */

undefined8 FUN_103b04544(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103b04578();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103b04578; end: 103b04733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b04578(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [72];
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_80 + -extraout_x8;
  func_0x000107c606ac(auStack_78);
  func_0x000107c60690(*(undefined1 *)(unaff_x20 + _DAT_112feb7e0));
  if (((undefined8 *)(unaff_x20 + _DAT_112feb7e8))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112feb7e8);
    func_0x000107c5fadc(uVar1);
    uVar5 = uVar1;
    func_0x000107c44c3c();
    func_0x000107c61170(uVar1);
  }
  func_0x000107c60690(uVar5);
  if (((undefined8 *)(unaff_x20 + _DAT_112feb7f0))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112feb7f0);
    func_0x000107c5fadc(uVar1);
    uVar5 = uVar1;
    func_0x000107c44c3c();
    func_0x000107c61170(uVar1);
  }
  func_0x000107c60690(uVar5);
  func_0x000103b04e98(unaff_x20 + _DAT_112feb7f8,puVar4,0x112d36580,&UNK_10d9016d0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar2 + -8);
  puVar3 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x000103b04ee0(puVar4,0x112d36580,&UNK_10d9016d0);
    puVar4 = (undefined1 *)0x0;
  }
  else {
    func_0x000107c5ed90();
    (**(code **)(lVar6 + 8))(puVar4,lVar2);
    puVar4 = puVar3;
    func_0x000107c44c3c(puVar3);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c60690(puVar4);
  func_0x000107c606a4();
  return;
}



/* Entry: 103b04734; end: 103b04b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103b04734(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long extraout_x12;
  undefined1 *puVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  code *pcVar16;
  long lVar17;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar10 = unaff_x20;
  func_0x000107c614f0();
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar17 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar12 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined1 *)(lVar12 - extraout_x8_00);
  lVar13 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar13 = (long)puVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12;
  func_0x000103b04e98(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    uVar8 = 0x112d387f8;
    puVar9 = &UNK_10d902650;
    puVar11 = auStack_80;
LAB_103b04904:
    func_0x000103b04ee0(puVar11,uVar8,puVar9);
  }
  else {
    plVar5 = &lStack_88;
    func_0x000107c6147c(plVar5,auStack_80,PTR___sypN_11034f1a8 + 8,lVar10,6);
    lVar10 = _DAT_112feb7f8;
    if (((ulong)plVar5 & 1) != 0) {
      cVar2 = *(char *)(unaff_x20 + _DAT_112feb7e0);
      if (cVar2 == *(char *)(lStack_88 + _DAT_112feb7e0)) {
        if (cVar2 == '\0') {
          plVar5 = (long *)(unaff_x20 + _DAT_112feb7e8);
          lVar7 = plVar5[1];
          plVar1 = (long *)(lStack_88 + _DAT_112feb7e8);
          lVar13 = plVar1[1];
        }
        else {
          if (cVar2 != '\x01') {
            lStack_90 = lStack_88;
            func_0x000103b04e98(lStack_88 + _DAT_112feb7f8,lVar14,0x112d36580,&UNK_10d9016d0);
            iVar3 = *(int *)(lVar7 + 0x30);
            func_0x000103b04e98(unaff_x20 + lVar10,puVar11,0x112d36580,&UNK_10d9016d0);
            func_0x000103b04e98(lVar14,puVar11 + iVar3,0x112d36580,&UNK_10d9016d0);
            pcVar16 = *(code **)(lVar17 + 0x30);
            puVar6 = puVar11;
            (*pcVar16)(puVar11,1,lVar4);
            if ((int)puVar6 == 1) {
              func_0x000107c61170(lStack_90);
              func_0x000103b04ee0(lVar14,0x112d36580,&UNK_10d9016d0);
              puVar6 = puVar11 + iVar3;
              (*pcVar16)(puVar6,1,lVar4);
              if ((int)puVar6 == 1) {
                func_0x000103b04ee0(puVar11,0x112d36580,&UNK_10d9016d0);
                uVar15 = 1;
                goto LAB_103b04934;
              }
            }
            else {
              func_0x000103b04e98(puVar11,lVar13,0x112d36580,&UNK_10d9016d0);
              puVar6 = puVar11 + iVar3;
              (*pcVar16)(puVar6,1,lVar4);
              if ((int)puVar6 != 1) {
                lVar7 = lVar12;
                (**(code **)(lVar17 + 0x20))(lVar12,puVar11 + iVar3,lVar4);
                func_0x000101553b98();
                lVar10 = lVar13;
                func_0x000107c5fab8(lVar13,lVar12,lVar4,lVar7);
                uVar15 = (uint)lVar10;
                func_0x000107c61170(lStack_90);
                pcVar16 = *(code **)(lVar17 + 8);
                (*pcVar16)(lVar12,lVar4);
                func_0x000103b04ee0(lVar14,0x112d36580,&UNK_10d9016d0);
                (*pcVar16)(lVar13,lVar4);
                func_0x000103b04ee0(puVar11,0x112d36580,&UNK_10d9016d0);
                goto LAB_103b04934;
              }
              func_0x000107c61170(lStack_90);
              func_0x000103b04ee0(lVar14,0x112d36580,&UNK_10d9016d0);
              (**(code **)(lVar17 + 8))(lVar13,lVar4);
            }
            uVar8 = 0x112d7e680;
            puVar9 = &UNK_10d95e350;
            goto LAB_103b04904;
          }
          plVar5 = (long *)(unaff_x20 + _DAT_112feb7f0);
          lVar7 = plVar5[1];
          plVar1 = (long *)(lStack_88 + _DAT_112feb7f0);
          lVar13 = plVar1[1];
        }
        if (lVar7 == 0) {
          func_0x000107c61434(lVar13);
          func_0x000107c61170(lStack_88);
          if (lVar13 == 0) {
            uVar15 = 1;
            goto LAB_103b04934;
          }
          func_0x000107c6142c(lVar13);
          goto LAB_103b04930;
        }
        if (lVar13 != 0) {
          lVar10 = *plVar5;
          if ((lVar10 == *plVar1) && (lVar7 == lVar13)) {
            func_0x000107c61170();
            uVar15 = 1;
          }
          else {
            func_0x000107c605b8(lVar10,lVar7,*plVar1,lVar13,0);
            uVar15 = (uint)lVar10;
            func_0x000107c61170(lStack_88);
          }
          goto LAB_103b04934;
        }
      }
      func_0x000107c61170();
    }
  }
LAB_103b04930:
  uVar15 = 0;
LAB_103b04934:
  return uVar15 & 1;
}



/* Entry: 103b04b80; end: 103b04c0f; -[SCChatAttachment isEqual:] */

uint FUN_103b04b80(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103b04734(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x000103b04ee0(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 103b04c10; end: 103b04c13; -[SCChatAttachment copyWithZone:] */

void FUN_103b04c10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b04c14; end: 103b04c1f; +[SCChatAttachment addressWithAddress:] */

void FUN_103b04c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  FUN_103b0501c();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103b04c20; end: 103b04c2b; +[SCChatAttachment phoneNumberWithPhoneNumber:] */

void FUN_103b04c20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  (*(code *)0x103b05158)();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103b04c2c; end: 103b04c67;  */

void FUN_103b04c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  (*param_4)();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103b04c68; end: 103b04cf3; +[SCChatAttachment urlWithUrl:] */

void FUN_103b04c68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar3,param_3);
  puVar2 = puVar3;
  FUN_103b05298(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103b04cf4; end: 103b04e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b04cf4(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffb0 + -extraout_x8;
  if (*(char *)(unaff_x20 + _DAT_112feb7e0) == '\0') {
    if (((undefined8 *)(unaff_x20 + _DAT_112feb7e8))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b04e50);
      (*pcVar1)();
    }
    (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_112feb7e8));
  }
  else if (*(char *)(unaff_x20 + _DAT_112feb7e0) == '\x01') {
    if (((undefined8 *)(unaff_x20 + _DAT_112feb7f0))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b04e4c);
      (*pcVar1)();
    }
    (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_112feb7f0));
  }
  else {
    func_0x000103b04e98(unaff_x20 + _DAT_112feb7f8,puVar4,0x112d36580,&UNK_10d9016d0);
    lVar2 = 0;
    func_0x000107c5ede0();
    lVar5 = *(long *)(lVar2 + -8);
    puVar3 = puVar4;
    (**(code **)(lVar5 + 0x30))(puVar4,1,lVar2);
    if ((int)puVar3 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b04e54);
      (*pcVar1)();
    }
    (*param_5)(puVar4);
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
  }
  return;
}



/* Entry: 103b04e54; end: 103b04f1f;  */

undefined8 FUN_103b04e54(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103b03e1c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103b04f20; end: 103b04f83; -[SCChatAttachment matchAddress:phoneNumber:url:] */

void FUN_103b04f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  FUN_103b04cf4(FUN_103b05644,auStack_40,FUN_103b056bc,auStack_60,0x103b05680,auStack_80);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103b04f84; end: 103b04fb7;  */

void FUN_103b04f84(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b04fb8; end: 103b0501b; -[SCChatAttachment .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b04fb8(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112feb7e8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112feb7f0 + 8));
  func_0x000103b04ee0(param_1 + _DAT_112feb7f8,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 103b0501c; end: 103b05297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103b0501c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long lVar6;
  long lStack_60;
  long lStack_58;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&lStack_60 - extraout_x8;
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar6,1,1,lVar3);
  lVar4 = 0;
  FUN_103b053e0();
  lVar3 = lVar4;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112feb7e0) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112feb7e8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112feb7f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000103b04e98(lVar6,lVar3 + _DAT_112feb7f8,0x112d36580,&UNK_10d9016d0);
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar4;
  func_0x000107c61434(param_2);
  plVar5 = &lStack_60;
  func_0x000107c61154(plVar5,puVar2);
  func_0x000103b04ee0(lVar6,0x112d36580,&UNK_10d9016d0);
  return plVar5;
}



/* Entry: 103b05298; end: 103b053d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103b05298(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&lStack_50 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar2 + -8);
  (**(code **)(lVar5 + 0x10))(lVar4,param_1,lVar2);
  (**(code **)(lVar5 + 0x38))(lVar4,0,1,lVar2);
  lVar5 = 0;
  FUN_103b053e0();
  lVar2 = lVar5;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112feb7e0) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112feb7e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112feb7f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000103b04e98(lVar4,lVar2 + _DAT_112feb7f8,0x112d36580,&UNK_10d9016d0);
  plVar3 = &lStack_50;
  lStack_50 = lVar2;
  lStack_48 = lVar5;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  func_0x000103b04ee0(lVar4,0x112d36580,&UNK_10d9016d0);
  return plVar3;
}



/* Entry: 103b053d8; end: 103b053df;  */

void FUN_103b053d8(void)

{
  if (lRam0000000112feb830 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7ac760);
  return;
}



/* Entry: 103b053e0; end: 103b05417;  */

void FUN_103b053e0(undefined8 param_1)

{
  if (lRam0000000112feb830 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7ac760);
  return;
}



/* Entry: 103b05418; end: 103b0549b;  */

void FUN_103b05418(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_40 = &UNK_10dc542e8;
  puStack_38 = &UNK_10dc54300;
  puStack_30 = &UNK_10dc54300;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,4,&puStack_40,param_1 + 0x50);
  }
  return;
}


