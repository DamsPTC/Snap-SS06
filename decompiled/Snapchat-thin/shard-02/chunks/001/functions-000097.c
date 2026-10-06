/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101951d04; end: 101951d53;  */

undefined8 FUN_101951d04(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101951d54; end: 101951d97;  */

undefined1  [16] FUN_101951d54(void)

{
  return ZEXT816(0x110417d40);
}



/* Entry: 101951d98; end: 101951dbf;  */

void FUN_101951d98(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101951dc0; end: 101951dc7;  */

undefined8 FUN_101951dc0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101951dc8; end: 101951e4f;  */

undefined8
FUN_101951dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x0001005d0ee4(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 101951e50; end: 101951e9b;  */

void FUN_101951e50(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101951e9c; end: 101951eeb;  */

undefined8 FUN_101951e9c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101951eec; end: 101951f2f;  */

undefined1  [16] FUN_101951eec(void)

{
  return ZEXT816(0x110417e08);
}



/* Entry: 101951f30; end: 101951f57;  */

void FUN_101951f30(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101951f58; end: 101951f73;  */

undefined8 FUN_101951f58(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101951f74; end: 10195204b;  */

void FUN_101951f74(void)

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



/* Entry: 10195204c; end: 10195211b;  */

void FUN_10195204c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10195211c; end: 1019523fb;  */

void FUN_10195211c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar6 = 0x6c6f72746e6f43;
  uVar1 = 0x800000010efc1be0;
  uVar4 = 0xd000000000000019;
  if (bVar3 != 3) {
    uVar1 = 0xeb00000000422f41;
    uVar4 = 0x2074636570736552;
  }
  uVar2 = 0x800000010efc1c00;
  uVar5 = 0xd00000000000001c;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  if (bVar3 != 0) {
    uVar6 = 0xd000000000000016;
  }
  uVar1 = 0xe700000000000000;
  if (bVar3 != 0) {
    uVar1 = 0x800000010efc1c20;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar6;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1019523fc; end: 1019524af;  */

void FUN_1019523fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar6 = 0x6c6f72746e6f43;
  uVar1 = 0x800000010efc1be0;
  uVar4 = 0xd000000000000019;
  if (bVar3 != 3) {
    uVar1 = 0xeb00000000422f41;
    uVar4 = 0x2074636570736552;
  }
  uVar2 = 0x800000010efc1c00;
  uVar5 = 0xd00000000000001c;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  if (bVar3 != 0) {
    uVar6 = 0xd000000000000016;
  }
  uVar1 = 0xe700000000000000;
  if (bVar3 != 0) {
    uVar1 = 0x800000010efc1c20;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar6;
  }
  *param_1 = uVar5;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1019524b0; end: 1019524c7;  */

void FUN_1019524b0(void)

{
  undefined1 *unaff_x20;
  
  func_0x000101952058(*unaff_x20);
  return;
}



/* Entry: 1019524c8; end: 101952507;  */

void FUN_1019524c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dd8358;
  func_0x0001000285a8(0x112dd8358,&UNK_10d99b8d0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101952508; end: 101952543; +[SCCameraReplyCameraPerformanceOptimizationsExperiment performanceOptimizationModeWithCircumstanceEngine:] */

undefined8 FUN_101952508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  FUN_101952628(param_3);
  func_0x000107c615e8(param_3);
  return uVar1;
}



/* Entry: 101952544; end: 10195257f; -[SCCameraReplyCameraPerformanceOptimizationsExperiment init] */

void FUN_101952544(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_101952718();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101952580; end: 1019525af;  */

void FUN_101952580(void)

{
  FUN_101952718();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1019525b0; end: 1019525c3; -[SCCameraReplyCameraPerformanceOptimizationsExperiment .cxx_destruct] */

void FUN_1019525b0(void)

{
  return;
}



/* Entry: 1019525c4; end: 101952627;  */

ulong FUN_1019525c4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 101952628; end: 101952717;  */

ulong FUN_101952628(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112dd8360,auStack_48,0,0);
  uVar3 = (ulong)bRam0000000112dd8360;
  if (bRam0000000112dd8360 < 2) {
    if (bRam0000000112dd8360 != 0) {
      uVar3 = 1;
    }
  }
  else if (bRam0000000112dd8360 == 2) {
    uVar3 = 2;
  }
  else if (bRam0000000112dd8360 == 3) {
    uVar3 = 3;
  }
  else if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c615f0(param_1);
    uVar1 = 0xd000000000000031;
    func_0x000107c5fadc(0xd000000000000031,0x800000010efc1c40);
    uVar2 = param_1;
    func_0x000107c4980c();
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(param_1);
    uVar3 = uVar2 & 0xffffffff;
    if (2 < (int)uVar2 - 1U) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* Entry: 101952718; end: 101952737;  */

void FUN_101952718(void)

{
  func_0x000107c61168(&PTR_PTR_1127ed188);
  return;
}



/* Entry: 101952738; end: 10195273b;  */

void FUN_101952738(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd83a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d99b8e0;
  func_0x000107c61520(&UNK_10d99b8e0,&UNK_110417f38);
  puRam0000000112dd83a0 = puVar1;
  return;
}



/* Entry: 10195273c; end: 10195277b;  */

void FUN_10195273c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd83a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d99b8e0;
  func_0x000107c61520(&UNK_10d99b8e0,&UNK_110417f38);
  puRam0000000112dd83a0 = puVar1;
  return;
}



/* Entry: 10195277c; end: 10195277f;  */

void FUN_10195277c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd83a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d99b980;
  func_0x000107c61520(&UNK_10d99b980,&UNK_110417fe8);
  puRam0000000112dd83a8 = puVar1;
  return;
}



/* Entry: 101952780; end: 1019527bf;  */

void FUN_101952780(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd83a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d99b980;
  func_0x000107c61520(&UNK_10d99b980,&UNK_110417fe8);
  puRam0000000112dd83a8 = puVar1;
  return;
}



/* Entry: 1019527c0; end: 1019527eb;  */

void FUN_1019527c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1019527ec();
  *(long *)(param_1 + 8) = lVar1;
  func_0x00010195282c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1019527ec; end: 10195286b;  */

void FUN_1019527ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd83b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d99ba48;
  func_0x000107c61520(&UNK_10d99ba48,&UNK_110417fe8);
  puRam0000000112dd83b0 = puVar1;
  return;
}



/* Entry: 10195286c; end: 10195286f;  */

void FUN_10195286c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dd83c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dd83c8;
  func_0x00010002969c(0x112dd83c8,&UNK_10d99ba40);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dd83c0 = puVar2;
  return;
}



/* Entry: 101952870; end: 1019528bf;  */

void FUN_101952870(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dd83c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dd83c8;
  func_0x00010002969c(0x112dd83c8,&UNK_10d99ba40);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dd83c0 = puVar2;
  return;
}



/* Entry: 1019528c0; end: 101952a43;  */

undefined1  [16] FUN_1019528c0(void)

{
  return ZEXT816(0x110417f38);
}



/* Entry: 101952a44; end: 101952a4b; -[SCCameraCaptureImageOperation type] */

undefined8 FUN_101952a44(void)

{
  return 1;
}



/* Entry: 101952a4c; end: 101952c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101952a4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  long lVar6;
  undefined1 *puVar7;
  byte bVar8;
  long unaff_x20;
  undefined1 auStack_70 [16];
  
  func_0x000107c610f8();
  lVar6 = _DAT_112dd84c8;
  func_0x000107c61614(unaff_x20 + _DAT_112dd84c8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112dd84d0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dd84d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61604(unaff_x20 + lVar6,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112dd84e0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112dd84e8) = param_3;
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_5);
  FUN_101952c50(uVar2,uVar3);
  *(undefined8 *)(unaff_x20 + _DAT_112dd84f0) = param_6;
  func_0x000107c61174(param_6);
  lVar6 = param_1;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  cVar5 = *(char *)(lVar6 + _DAT_113075bd8);
  func_0x000107c61170();
  if (cVar5 == '\x01') {
    lVar6 = param_1;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    iVar4 = *(int *)(lVar6 + _DAT_113075bb0);
    func_0x000107c61170();
    if (iVar4 == 0) {
      lVar6 = param_1;
      func_0x000107c5bcc0();
      func_0x000107c61180();
      bVar8 = *(byte *)(lVar6 + _DAT_113075bc8);
      func_0x000107c61170();
      bVar8 = bVar8 ^ 1;
      goto LAB_101952b90;
    }
  }
  bVar8 = 0;
LAB_101952b90:
  *(byte *)(unaff_x20 + _DAT_112dd84f8) = bVar8 & 1;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8500) = param_8;
  puVar7 = auStack_70;
  func_0x000107c61154(puVar7,PTR_s_initWithDelegate__1125e0280,param_7);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61574(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_7);
  return puVar7;
}



/* Entry: 101952c50; end: 101952c5f;  */

void FUN_101952c50(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 101952c60; end: 101952d77; -[SCCameraCaptureImageOperation initWithCameraHardwareResource:imageCaptureConfiguration:callbackPerformer:completionHandler:systemConfiguration:delegate:captureDeviceManager:] */

undefined8
FUN_101952c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_110418240;
  func_0x000107c613fc(&UNK_110418240,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  uVar2 = param_3;
  FUN_101953ccc(param_3,param_4,param_5,0x101953f34,puVar1,param_7,param_8,param_9);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c615e8(param_8);
  return uVar2;
}



/* Entry: 101952d78; end: 101952de7;  */

void FUN_101952d78(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(param_5 + 0x10))(param_5,param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101952de8; end: 101952ebb; -[SCCameraCaptureImageOperation expectedStates] */

void FUN_101952de8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = 0x112dd8540;
  func_0x0001002a4d8c(0x112dd8540,&PTR_PTR_1126b9d70,0x112dd8570,&UNK_10d99bce8);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 5;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  puVar2 = PTR_PTR_1126b9d70;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c41a00();
  func_0x000107c61180();
  *(undefined **)(lVar1 + 0x20) = puVar3;
  func_0x000107c419fc();
  func_0x000107c61180();
  *(undefined **)(lVar1 + 0x28) = puVar2;
  uVar4 = 0;
  func_0x0001002a4e04(0,0x112dd8540,&PTR_PTR_1126b9d70);
  lVar5 = lVar1;
  func_0x000107c5fc48(lVar1,uVar4);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 101952ebc; end: 101953077;  */

/* WARNING: Possible PIC construction at 0x000101952f44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101952f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101953028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101953038: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010195302c) */
/* WARNING: Removing unreachable block (ram,0x000101952f48) */
/* WARNING: Removing unreachable block (ram,0x000101952f8c) */
/* WARNING: Removing unreachable block (ram,0x00010195305c) */
/* WARNING: Removing unreachable block (ram,0x000101952f94) */
/* WARNING: Removing unreachable block (ram,0x000101952f5c) */
/* WARNING: Removing unreachable block (ram,0x00010195303c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101952ebc(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar2 = unaff_x20 + _DAT_112dd84c8;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    cVar1 = *(char *)(lVar3 + _DAT_113075bf8);
    func_0x000107c61170();
    if (cVar1 == '\x01') {
      func_0x000107c3e0cc();
    }
    else {
      func_0x000107c5bde4();
    }
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dd84d0);
    *(long *)(unaff_x20 + _DAT_112dd84d0) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar4);
    return;
  }
  return;
}



/* Entry: 101953078; end: 1019532bb;  */

/* WARNING: Removing unreachable block (ram,0x00010195329c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101953078(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  
  lVar5 = _DAT_112dd84c8;
  lVar2 = unaff_x20 + _DAT_112dd84c8;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar2;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
  }
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112dd8500);
  uVar3 = uVar9;
  func_0x000107c5ea1c();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4a6a4();
  func_0x000107c615e8(uVar3);
  uVar3 = 0x3ff0000000000000;
  if ((int)uVar4 != 0) {
    uVar3 = uVar9;
    func_0x000107c5ea1c(uVar9);
    func_0x000107c61180();
    func_0x000107c4106c();
    func_0x000107c615e8(uVar3);
    uVar3 = param_1;
  }
  func_0x0001043cd088(0);
  lVar10 = *(long *)(unaff_x20 + _DAT_112dd84e0);
  lVar2 = lVar10;
  func_0x0001043cb090(lVar10);
  func_0x0001043cb0a8(uVar3);
  func_0x000107c61170();
  func_0x0001043cb0c4(lVar8);
  func_0x000107c61170();
  if ((lVar8 != 0) && (*(char *)(lVar8 + _DAT_113075bf8) == '\x01')) {
    lVar5 = unaff_x20 + lVar5;
    func_0x000107c61618();
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c5dd84();
      func_0x000107c61180();
      func_0x000107c615e8(lVar5);
      if (lVar6 != 0) {
        func_0x000107c433cc(lVar6);
        func_0x000107c615e8(lVar6);
        func_0x0001043cb0fc(uVar3);
        func_0x000107c61170();
        goto LAB_101953204;
      }
    }
  }
  func_0x000107c5ea1c(uVar9);
  func_0x000107c61180();
  func_0x000107c40f20();
  func_0x000107c615e8(uVar9);
LAB_101953204:
  uVar1 = (uint)*(byte *)(lVar10 + _DAT_1130753d8);
  func_0x0001043cb094(*(byte *)(lVar10 + _DAT_1130753d8));
  func_0x000107c61170();
  if (*(char *)(lVar10 + _DAT_113075440) == '\x01') {
    FUN_1019538b8();
  }
  else {
    uVar1 = 0;
  }
  uVar7 = (ulong)(uVar1 & 1);
  func_0x0001043cb118(uVar7);
  func_0x000107c61170();
  func_0x0001043cb5d0();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar8);
  return uVar7;
}



/* Entry: 1019532bc; end: 1019535c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019532bc(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puVar2;
  
  lVar7 = unaff_x20 + _DAT_112dd84c8;
  func_0x000107c61618();
  if (lVar7 == 0) {
    lVar6 = 0;
    if (param_1 != 0) goto LAB_10195331c;
LAB_101953394:
    uVar8 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = lVar7;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar7);
    if (param_1 == 0) goto LAB_101953394;
LAB_10195331c:
    lVar7 = _DAT_113075098;
    func_0x000107c61428(param_1 + _DAT_113075098,auStack_a8,0,0);
    lVar3 = _DAT_1130750a0;
    lVar7 = *(long *)(param_1 + lVar7);
    func_0x000107c61428(param_1 + _DAT_1130750a0,auStack_c0,0,0);
    uVar8 = *(undefined8 *)(param_1 + lVar3);
    func_0x000107c61434(uVar8);
    func_0x000107c61174(lVar7);
  }
  puVar2 = PTR_PTR_1126aff08;
  func_0x000107c61168();
  iVar1 = (int)puVar2;
  func_0x000107c49e2c();
  lVar3 = lVar7;
  if (iVar1 == 0) {
LAB_1019533dc:
    if (lVar3 != 0) {
      func_0x0001043b92ec(0);
      func_0x000107c610f8();
      func_0x000107c61434(uVar8);
      lVar7 = lVar3;
      func_0x000107c61174(lVar3);
      func_0x0001043b8e48(lVar3,uVar8);
      goto LAB_10195341c;
    }
  }
  else if (lVar7 != 0) {
    FUN_101953abc();
    func_0x000107c61170(lVar7);
    goto LAB_1019533dc;
  }
  lVar7 = 0;
LAB_10195341c:
  uVar4 = uVar8;
  FUN_101953f3c();
  func_0x000107c6142c(uVar8);
  if (*(char *)(unaff_x20 + _DAT_112dd84f8) == '\x01') {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112dd8500);
    func_0x000107c43694(uVar8);
    func_0x000107c61180();
    func_0x000107c52e50();
    func_0x000107c615e8(uVar8);
  }
  lVar9 = *(long *)(unaff_x20 + _DAT_112dd84d8);
  if (lVar9 != 0) {
    lVar10 = ((long *)(unaff_x20 + _DAT_112dd84d8))[1];
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112dd84e8);
    puVar2 = &UNK_110418268;
    func_0x000107c613fc(&UNK_110418268,0x48,7);
    *(long *)(puVar2 + 0x10) = lVar9;
    *(long *)(puVar2 + 0x18) = lVar10;
    *(long *)(puVar2 + 0x20) = lVar3;
    *(undefined8 *)(puVar2 + 0x28) = param_2;
    *(long *)(puVar2 + 0x30) = lVar6;
    *(undefined8 *)(puVar2 + 0x38) = uVar4;
    *(long *)(puVar2 + 0x40) = unaff_x20;
    pcStack_70 = FUN_101954490;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110418280;
    ppuVar5 = &puStack_90;
    puStack_68 = puVar2;
    func_0x000107c60bc4(ppuVar5);
    puVar2 = puStack_68;
    func_0x000101953ecc(lVar9,lVar10);
    func_0x000101953ecc(lVar9,lVar10);
    func_0x000107c614b0(param_2);
    func_0x000107c61174(lVar3);
    func_0x000107c61174(lVar6);
    func_0x000107c61174(uVar4);
    func_0x000107c61174();
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar8);
    func_0x000107c60bd0(ppuVar5);
    FUN_101952c50(lVar9,lVar10);
  }
  func_0x000107c4358c();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar7);
  return;
}



/* Entry: 1019535c4; end: 10195363b;  */

/* WARNING: Possible PIC construction at 0x000101953620: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101953624) */

void FUN_1019535c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10195363c; end: 101953663; -[SCCameraCaptureImageOperation main] */

void FUN_10195363c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101952ebc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101953664; end: 1019537ef;  */

/* WARNING: Possible PIC construction at 0x0001019536cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010195379c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019536d0) */
/* WARNING: Removing unreachable block (ram,0x0001019537d0) */
/* WARNING: Removing unreachable block (ram,0x0001019536e4) */
/* WARNING: Removing unreachable block (ram,0x0001019537a0) */

void FUN_101953664(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar2 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efc1c80);
  func_0x000107c466bc(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1019537f0; end: 10195388f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019537f0(code *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_4 + _DAT_112dd84c8;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
  }
  (*param_1)(0,param_3,lVar3,0);
  func_0x000107c61170(lVar3);
  plVar1 = (long *)(param_4 + _DAT_112dd84d8);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  *plVar1 = 0;
  plVar1[1] = 0;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar3);
    return;
  }
  return;
}



/* Entry: 101953890; end: 1019538b7; -[SCCameraCaptureImageOperation reportNotAllowedToStartError] */

void FUN_101953890(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101953664();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1019538b8; end: 101953abb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1019538b8(void)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(unaff_x20 + _DAT_112dd84e0);
  bVar1 = *(byte *)(lVar8 + _DAT_113075470);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112dd8500);
  func_0x000107c5ea1c(uVar3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4a6a4();
  func_0x000107c615e8(uVar3);
  uVar9 = (uint)uVar4 | (uint)bVar1;
  uVar7 = *(ulong *)(unaff_x20 + _DAT_112dd84f0);
  uVar5 = uVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar5 != 0) {
    uVar6 = uVar5;
    func_0x000107c505a0();
    func_0x000107c61180();
    func_0x000107c615e8(uVar5);
    uVar5 = uVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    if (uVar5 != 0) {
      uVar6 = uVar5;
      func_0x000107c4fff4();
      func_0x000107c615e8(uVar5);
      if ((int)uVar6 != 0) {
        uVar2 = 0;
        func_0x000100353190(0);
        func_0x0001044e68a8();
        uVar9 = uVar2 | uVar9;
      }
    }
  }
  uVar5 = uVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar5 != 0) {
    uVar6 = uVar5;
    func_0x000107c505a0();
    func_0x000107c61180();
    func_0x000107c615e8(uVar5);
    uVar5 = uVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    if (uVar5 != 0) {
      uVar6 = uVar5;
      func_0x000107c4fff4();
      func_0x000107c615e8(uVar5);
      if ((uVar6 & 1) == 0) {
        uVar2 = 0;
        func_0x000100353190(0);
        func_0x0001044e69b0();
        uVar9 = uVar2 | uVar9;
      }
    }
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar7 != 0) {
    uVar5 = uVar7;
    func_0x000107c505a0();
    func_0x000107c61180();
    func_0x000107c615e8(uVar7);
    uVar7 = uVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (uVar7 != 0) {
      uVar5 = uVar7;
      func_0x000107c41ed8();
      func_0x000107c615e8(uVar7);
      if ((int)uVar5 != 0) {
        uVar9 = *(long *)(lVar8 + _DAT_1130753c8 + 8) == 0 & uVar9;
      }
    }
  }
  return uVar9 & 1;
}



/* Entry: 101953abc; end: 101953b83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101953abc(undefined *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112dd84c8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c49fdc();
    func_0x000107c615e8(lVar1);
    if ((int)lVar2 != 0) {
      func_0x000107c3ab2c();
      func_0x000107c61180();
      if (param_1 != (undefined *)0x0) {
        func_0x000107c450e0();
        puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
        func_0x000107c45afc(0x3ff0000000000000);
        func_0x000107c61170(param_1);
        return puVar3;
      }
      return (undefined *)0x0;
    }
  }
  func_0x000107c61174(param_1);
  return param_1;
}



/* Entry: 101953b84; end: 101953be3; -[SCCameraCaptureImageOperation initWithDelegate:] */

void FUN_101953b84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraRequestHandlerOperations.CameraCaptureImageOperation",0x3c,
                      "init(delegate:)",0xf,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101953bb0);
  (*pcVar1)();
}



/* Entry: 101953be4; end: 101953c6f; -[SCCameraCaptureImageOperation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101953c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101953c44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101953c24) */
/* WARNING: Removing unreachable block (ram,0x000101953c48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101953be4(long param_1)

{
  FUN_101953edc(param_1 + _DAT_112dd84c8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dd84e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dd84d0));
  return;
}



/* Entry: 101953c70; end: 101953ccb;  */

void FUN_101953c70(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 101953ccc; end: 101953e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101953ccc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  long lVar6;
  byte bVar7;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar6 = _DAT_112dd84c8;
  func_0x000107c61614(unaff_x20 + _DAT_112dd84c8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112dd84d0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dd84d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61604(unaff_x20 + lVar6,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112dd84e0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112dd84e8) = param_3;
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_5);
  FUN_101952c50(uVar2,uVar3);
  *(undefined8 *)(unaff_x20 + _DAT_112dd84f0) = param_6;
  func_0x000107c61174(param_6);
  lVar6 = param_1;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  cVar5 = *(char *)(lVar6 + _DAT_113075bd8);
  func_0x000107c61170();
  if (cVar5 == '\x01') {
    lVar6 = param_1;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    iVar4 = *(int *)(lVar6 + _DAT_113075bb0);
    func_0x000107c61170();
    if (iVar4 == 0) {
      func_0x000107c5bcc0();
      func_0x000107c61180();
      bVar7 = *(byte *)(param_1 + _DAT_113075bc8);
      func_0x000107c61170();
      bVar7 = bVar7 ^ 1;
      goto LAB_101953e00;
    }
  }
  bVar7 = 0;
LAB_101953e00:
  *(byte *)(unaff_x20 + _DAT_112dd84f8) = bVar7 & 1;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8500) = param_8;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_initWithDelegate__1125e0280,param_7);
  return;
}



/* Entry: 101953e84; end: 101953ea3;  */

void FUN_101953e84(void)

{
  FUN_1019532bc();
  return;
}



/* Entry: 101953ea4; end: 101953edb;  */

void FUN_101953ea4(long param_1,long param_2)

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



/* Entry: 101953edc; end: 101953eff;  */

undefined8 FUN_101953edc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101953f00; end: 101953f1f;  */

void FUN_101953f00(void)

{
  func_0x000107c61168(&PTR_PTR_1127ed238);
  return;
}



/* Entry: 101953f20; end: 101953f3b;  */

void FUN_101953f20(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110418200;
  if (lRam0000000112dd8530 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112dd8530 = param_1;
  }
  return;
}



/* Entry: 101953f3c; end: 10195448f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101953f3c(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 **ppuVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  long lVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  undefined *puVar10;
  undefined8 ****ppppuVar11;
  long unaff_x20;
  ulong uVar12;
  undefined8 ***pppuVar13;
  undefined8 ***pppuVar14;
  undefined8 ***pppuVar15;
  double dVar16;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar4 = unaff_x20 + _DAT_112dd84c8;
  func_0x000107c61618();
  if (lVar4 == 0) {
    func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001f,0x800000010efc1d40,
                        "SCCameraRequestHandlerOperations/SCCameraCaptureImageOperation.swift",0x44,
                        2,0xea,0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101954490);
    (*pcVar3)();
  }
  lVar7 = lVar4;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  uVar12 = (ulong)*(byte *)(lVar7 + _DAT_113075ba8);
  func_0x000107c61170();
  lVar7 = lVar4;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  uVar1 = *(undefined1 *)(lVar7 + _DAT_113075ba0);
  func_0x000107c61170();
  if (param_1 == 0) {
    uStack_88 = 0;
    ppuStack_90 = (undefined8 ***)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
LAB_101954108:
    func_0x00010006e7f4(&ppuStack_90);
  }
  else {
    uVar5 = *(undefined8 *)PTR__kCGImagePropertyExifDictionary_110349cd0;
    func_0x000107c5faec();
    uStack_d0 = uVar5;
    lStack_c8 = param_2;
    func_0x000107c61434(param_2);
    puVar10 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&pppuStack_c0,&uStack_d0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_101954054:
      uStack_88 = 0;
      ppuStack_90 = (undefined8 ***)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c61434(param_1);
      ppppuVar6 = &pppuStack_c0;
      func_0x000100df95d0(ppppuVar6);
      if (((ulong)puVar10 & 1) == 0) {
        func_0x000107c6142c(param_1);
        goto LAB_101954054;
      }
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)ppppuVar6 * 0x20,&ppuStack_90);
      func_0x000107c6142c(param_2);
      param_2 = param_1;
    }
    func_0x000107c6142c(param_2);
    func_0x0001007bbff0(&pppuStack_c0);
    if (lStack_78 == 0) goto LAB_101954108;
    uVar5 = 0x112d472a8;
    func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
    puVar10 = PTR___sypN_11034f1a8;
    ppppuVar6 = &pppuStack_c0;
    ppppuVar11 = (undefined8 ****)&ppuStack_90;
    func_0x000107c6147c(ppppuVar6,ppppuVar11,PTR___sypN_11034f1a8 + 8,uVar5,6);
    pppuVar9 = pppuStack_c0;
    if (((ulong)ppppuVar6 & 1) != 0) {
      lVar7 = *(long *)PTR__kCGImagePropertyExifShutterSpeedValue_110349ce8;
      func_0x000107c5faec(lVar7);
      ppppuVar6 = ppppuVar11;
      if ((undefined8 ***)pppuVar9[2] == (undefined8 ***)0x0) {
LAB_101954188:
        uStack_b8 = 0;
        pppuStack_c0 = (undefined8 ****)0x0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x000107c61434(pppuVar9);
        func_0x000100029284(lVar7);
        if (((ulong)ppppuVar6 & 1) == 0) {
          func_0x000107c6142c(pppuVar9);
          goto LAB_101954188;
        }
        ppppuVar6 = &pppuStack_c0;
        func_0x0001000bb420(pppuVar9[7] + lVar7 * 4);
        func_0x000107c6142c(ppppuVar11);
        ppppuVar11 = (undefined8 ****)pppuVar9;
      }
      func_0x000107c6142c(ppppuVar11);
      if (lStack_a8 == 0) {
        func_0x00010006e7f4(&pppuStack_c0);
LAB_1019541d0:
        pppuVar13 = (undefined8 ***)0x0;
      }
      else {
        pppuVar8 = &ppuStack_90;
        ppppuVar6 = &pppuStack_c0;
        func_0x000107c6147c(pppuVar8,ppppuVar6,puVar10 + 8,PTR___sSdN_11034dd90,6);
        pppuVar13 = (undefined8 ***)ppuStack_90;
        if ((int)pppuVar8 == 0) goto LAB_1019541d0;
      }
      lVar7 = *(long *)PTR__kCGImagePropertyExifApertureValue_110349cb8;
      func_0x000107c5faec(lVar7);
      ppppuVar11 = ppppuVar6;
      if ((undefined8 ***)pppuVar9[2] == (undefined8 ***)0x0) {
LAB_101954234:
        uStack_b8 = 0;
        pppuStack_c0 = (undefined8 ****)0x0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x000107c61434(pppuVar9);
        func_0x000100029284(lVar7);
        if (((ulong)ppppuVar11 & 1) == 0) {
          func_0x000107c6142c(pppuVar9);
          goto LAB_101954234;
        }
        ppppuVar11 = &pppuStack_c0;
        func_0x0001000bb420(pppuVar9[7] + lVar7 * 4);
        func_0x000107c6142c(ppppuVar6);
        ppppuVar6 = (undefined8 ****)pppuVar9;
      }
      func_0x000107c6142c(ppppuVar6);
      if (lStack_a8 == 0) {
        func_0x00010006e7f4(&pppuStack_c0);
LAB_10195427c:
        pppuVar14 = (undefined8 ***)0x0;
      }
      else {
        pppuVar8 = &ppuStack_90;
        ppppuVar11 = &pppuStack_c0;
        func_0x000107c6147c(pppuVar8,ppppuVar11,puVar10 + 8,PTR___sSdN_11034dd90,6);
        pppuVar14 = (undefined8 ***)ppuStack_90;
        if ((int)pppuVar8 == 0) goto LAB_10195427c;
      }
      lVar7 = *(long *)PTR__kCGImagePropertyExifBrightnessValue_110349cc0;
      func_0x000107c5faec(lVar7);
      ppppuVar6 = ppppuVar11;
      if ((undefined8 ***)pppuVar9[2] == (undefined8 ***)0x0) {
LAB_1019542e0:
        uStack_b8 = 0;
        pppuStack_c0 = (undefined8 ****)0x0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x000107c61434(pppuVar9);
        func_0x000100029284(lVar7);
        if (((ulong)ppppuVar6 & 1) == 0) {
          func_0x000107c6142c(pppuVar9);
          goto LAB_1019542e0;
        }
        ppppuVar6 = &pppuStack_c0;
        func_0x0001000bb420(pppuVar9[7] + lVar7 * 4);
        func_0x000107c6142c(ppppuVar11);
        ppppuVar11 = (undefined8 ****)pppuVar9;
      }
      func_0x000107c6142c(ppppuVar11);
      if (lStack_a8 == 0) {
        func_0x00010006e7f4(&pppuStack_c0);
LAB_101954328:
        pppuVar15 = (undefined8 ***)0x0;
      }
      else {
        pppuVar8 = &ppuStack_90;
        ppppuVar6 = &pppuStack_c0;
        func_0x000107c6147c(pppuVar8,ppppuVar6,puVar10 + 8,PTR___sSdN_11034dd90,6);
        pppuVar15 = (undefined8 ***)ppuStack_90;
        if ((int)pppuVar8 == 0) goto LAB_101954328;
      }
      lVar7 = *(long *)PTR__kCGImagePropertyExifISOSpeedRatings_110349ce0;
      func_0x000107c5faec(lVar7);
      if ((undefined8 ***)pppuVar9[2] == (undefined8 ***)0x0) {
LAB_10195438c:
        uStack_b8 = 0;
        pppuStack_c0 = (undefined8 ****)0x0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x000107c61434(pppuVar9);
        ppppuVar11 = ppppuVar6;
        func_0x000100029284(lVar7);
        if (((ulong)ppppuVar11 & 1) == 0) {
          func_0x000107c6142c(pppuVar9);
          goto LAB_10195438c;
        }
        func_0x0001000bb420(pppuVar9[7] + lVar7 * 4,&pppuStack_c0);
        func_0x000107c6142c(ppppuVar6);
        ppppuVar6 = (undefined8 ****)pppuVar9;
      }
      func_0x000107c6142c(ppppuVar6);
      func_0x000107c6142c(pppuVar9);
      if (lStack_a8 == 0) {
        func_0x00010006e7f4(&pppuStack_c0);
      }
      else {
        uVar5 = 0x112daafe8;
        func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
        pppuVar9 = &ppuStack_90;
        func_0x000107c6147c(pppuVar9,&pppuStack_c0,puVar10 + 8,uVar5,6);
        ppuVar2 = ppuStack_90;
        if (((ulong)pppuVar9 & 1) != 0) {
          if ((undefined8 **)ppuStack_90[2] == (undefined8 **)0x0) {
            func_0x000107c6142c(ppuStack_90);
          }
          else {
            func_0x0001000bb420(ppuStack_90 + 4,&pppuStack_c0);
            func_0x000107c6142c(ppuVar2);
            pppuVar9 = &ppuStack_90;
            func_0x000107c6147c(pppuVar9,&pppuStack_c0,puVar10 + 8,PTR___ss5Int64VN_11034ee50,6);
            if (((ulong)pppuVar9 & 1) != 0) {
              dVar16 = (double)(long)ppuStack_90;
              goto LAB_101954120;
            }
          }
        }
      }
      dVar16 = 0.0;
      goto LAB_101954120;
    }
  }
  dVar16 = 0.0;
  pppuVar15 = (undefined8 ***)0x0;
  pppuVar14 = (undefined8 ***)0x0;
  pppuVar13 = (undefined8 ***)0x0;
LAB_101954120:
  func_0x0001043d1f40(0);
  func_0x000107c610f8();
  func_0x0001043d1ca4(pppuVar13,pppuVar14,pppuVar15,dVar16,uVar12,uVar1);
  func_0x000107c615e8(lVar4);
  return uVar12;
}



/* Entry: 101954490; end: 1019544d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101954490(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x40);
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x38));
  plVar1 = (long *)(lVar3 + _DAT_112dd84d8);
  lVar3 = *plVar1;
  lVar2 = plVar1[1];
  *plVar1 = 0;
  plVar1[1] = 0;
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1019544d4; end: 1019544fb;  */

void FUN_1019544d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1019544fc; end: 101954503; -[SCCameraCaptureVideoOperation type] */

undefined8 FUN_1019544fc(void)

{
  return 2;
}



/* Entry: 101954504; end: 101954573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_101954504(void)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112dd8588;
  pcVar2 = *(char **)(unaff_x20 + _DAT_112dd8588);
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



/* Entry: 101954574; end: 10195491b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101954574(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long unaff_x20;
  double dVar8;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112dd8578;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8578,0);
  lVar3 = _DAT_112dd8580;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8580,0);
  *(undefined8 *)(unaff_x20 + _DAT_112dd8588) = 0;
  *(long *)(unaff_x20 + _DAT_112dd8590) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8598) = param_2;
  lVar4 = _DAT_112dd85a0;
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar5 + -8);
  (**(code **)(lVar7 + 0x10))(unaff_x20 + lVar4,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112dd85a8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112dd85b0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112dd85b8) = param_6;
  func_0x000107c61604(unaff_x20 + lVar2,param_7);
  *(undefined8 *)(unaff_x20 + _DAT_112dd85c0) = param_8;
  func_0x000107c61604(unaff_x20 + lVar3,param_9);
  *(undefined8 *)(unaff_x20 + _DAT_112dd85c8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112dd85d0) = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dd85d8);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112dd85e0) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112dd85e8) = param_16;
  dVar8 = *(double *)(param_1 + _DAT_1130757f8) * *(double *)(param_1 + _DAT_113075808);
  if (*(double *)(param_1 + _DAT_1130757f8) <= 0.0) {
    dVar8 = *(double *)(param_1 + _DAT_113075808);
  }
  *(double *)(unaff_x20 + _DAT_112dd85f0) = dVar8;
  dVar8 = *(double *)(param_1 + _DAT_113075870);
  if (dVar8 <= 0.0) {
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c615f0(param_6);
    func_0x000107c615f0(param_8);
    func_0x000107c615f0(param_10);
    func_0x000107c615f0(param_11);
    func_0x000107c6157c(param_13);
    func_0x000107c615f0(param_15);
    func_0x000107c615f0(param_16);
    func_0x0001008e3740();
    *(double *)(unaff_x20 + _DAT_112dd85f8) = dVar8;
  }
  else {
    *(double *)(unaff_x20 + _DAT_112dd85f8) = dVar8;
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c615f0(param_6);
    func_0x000107c615f0(param_8);
    func_0x000107c615f0(param_10);
    func_0x000107c615f0(param_11);
    func_0x000107c6157c(param_13);
    func_0x000107c615f0(param_15);
    func_0x000107c615f0(param_16);
  }
  puVar6 = auStack_78;
  func_0x000107c61154(puVar6,PTR_s_initWithDelegate__1125e0280,param_14);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_8);
  func_0x000107c615e8(param_9);
  func_0x000107c615e8(param_10);
  func_0x000107c615e8(param_11);
  func_0x000107c61574(param_13);
  func_0x000107c615e8(param_15);
  func_0x000107c615e8(param_16);
  func_0x000107c615e8(param_14);
  (**(code **)(lVar7 + 8))(param_3,lVar5);
  return puVar6;
}



/* Entry: 10195491c; end: 101954b5f; -[SCCameraCaptureVideoOperation initWithConfiguration:audioConfiguration:fileUrl:outputSettings:endRecordingSignal:videoCapturer:cameraHardwareResource:deviceCapacityAnalyzer:captureSession:cameraSnapCaptureLogger:callbackPerformer:errorHandler:delegate:captureDeviceManager:captureDeviceManagerInternal:] */

undefined8
FUN_10195491c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  undefined8 auStack_110 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_78 = param_16;
  uStack_70 = param_17;
  uStack_90 = param_12;
  uStack_a0 = param_11;
  uStack_d0 = param_9;
  uStack_88 = param_13;
  uStack_80 = param_15;
  lVar6 = 0;
  uStack_c8 = param_8;
  uStack_a8 = param_7;
  uStack_98 = param_1;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  func_0x000107c5edb4((long)&uStack_d0 + lVar6,param_5);
  puVar7 = &UNK_1104183d8;
  func_0x000107c613fc(&UNK_1104183d8,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = param_14;
  puStack_b8 = puVar7;
  func_0x000107c61174();
  uStack_b0 = param_3;
  func_0x000107c61174();
  uStack_c0 = param_4;
  func_0x000107c61174(param_6);
  uVar8 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  func_0x000107c615f0(param_10);
  uVar5 = uStack_a0;
  func_0x000107c615f0(uStack_a0);
  uVar1 = uStack_90;
  func_0x000107c615f0(uStack_90);
  uVar2 = uStack_88;
  func_0x000107c615f0(uStack_88);
  uVar3 = uStack_80;
  func_0x000107c615f0(uStack_80);
  uVar4 = uStack_78;
  func_0x000107c615f0(uStack_78);
  uVar9 = uStack_70;
  func_0x000107c615f0();
  *(undefined8 *)((long)auStack_110 + lVar6 + 0x30) = uVar4;
  *(undefined8 *)((long)auStack_110 + lVar6 + 0x38) = uVar9;
  *(undefined **)((long)auStack_110 + lVar6 + 0x20) = puVar7;
  *(undefined8 *)((long)auStack_110 + lVar6 + 0x28) = uVar3;
  *(undefined8 *)((long)auStack_110 + lVar6 + 0x10) = uVar2;
  *(code **)((long)auStack_110 + lVar6 + 0x18) = FUN_1019563a8;
  *(undefined8 *)((long)auStack_110 + lVar6) = uVar5;
  *(undefined8 *)((long)auStack_110 + lVar6 + 8) = uVar1;
  uVar4 = uStack_b0;
  uVar3 = uStack_c0;
  uVar2 = uStack_c8;
  uVar1 = uStack_d0;
  uVar9 = uStack_b0;
  FUN_101955ef8(uStack_b0,uStack_c0,(long)&uStack_d0 + lVar6,param_6,uVar8,uStack_c8,uStack_d0,
                param_10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar8);
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uVar1);
  func_0x000107c615e8(param_10);
  func_0x000107c615e8(uVar5);
  func_0x000107c615e8(uStack_90);
  func_0x000107c615e8(uStack_88);
  func_0x000107c61574(puStack_b8);
  func_0x000107c615e8(uStack_80);
  func_0x000107c615e8(uStack_78);
  func_0x000107c615e8(uStack_70);
  return uVar9;
}



/* Entry: 101954b60; end: 101954bff; -[SCCameraCaptureVideoOperation expectedStates] */

void FUN_101954b60(long param_1)

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
  func_0x000107c41a00();
  func_0x000107c61180();
  *(undefined **)(param_1 + 0x20) = puVar2;
  func_0x000107c419fc();
  func_0x000107c61180();
  *(undefined **)(param_1 + 0x28) = puVar1;
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



/* Entry: 101954c00; end: 1019553d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101954c00(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  
  lVar11 = unaff_x20;
  func_0x000107c614f0();
  func_0x0001091a2620();
  lVar10 = _DAT_112dd8578;
  if (lVar11 == 1) {
    FUN_1019559a8();
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112dd85e0);
    func_0x000107c40274(uVar2);
    func_0x000107c61180();
    func_0x000107c57838();
    func_0x000107c615e8(uVar2);
    func_0x000107c61154(&stack0xffffffffffffff38,PTR_s_finish_1125c9748);
    return;
  }
  lVar11 = unaff_x20 + _DAT_112dd8578;
  func_0x000107c61618();
  if (lVar11 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = lVar11;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar11);
  }
  FUN_101954504();
  puVar3 = &UNK_1104182e8;
  func_0x000107c613fc(&UNK_1104182e8,0x18,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  pcStack_98 = FUN_101956218;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_1000f6b44;
  puStack_a0 = &UNK_110418300;
  ppuVar4 = &puStack_b8;
  puStack_90 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_90;
  lVar5 = unaff_x20;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(lVar11);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(lVar11);
  if ((lVar16 != 0) && (*(char *)(lVar16 + _DAT_113075bd8) == '\x01')) {
    FUN_101955454(lVar16);
  }
  uVar14 = *(undefined8 *)(lVar5 + _DAT_112dd85e0);
  uVar2 = uVar14;
  func_0x000107c5ea1c();
  func_0x000107c61180();
  uVar8 = uVar2;
  func_0x000107c4a6a4();
  func_0x000107c615e8(uVar2);
  if ((int)uVar8 != 0) {
    uVar2 = uVar14;
    func_0x000107c5ea1c(uVar14);
    func_0x000107c61180();
    func_0x000107c5a834(0x3ff0000000000000);
    func_0x000107c615e8(uVar2);
  }
  if ((lVar16 != 0) && ((*(byte *)(lVar16 + _DAT_113075bf8) & 1) == 0)) {
    FUN_101955658(0);
    FUN_101955658(1);
  }
  func_0x000107c40274(uVar14);
  func_0x000107c61180();
  func_0x000107c5783c();
  func_0x000107c615e8(uVar14);
  uVar6 = lVar5 + _DAT_112dd8580;
  func_0x000107c61618();
  if (uVar6 != 0) {
    uVar7 = uVar6;
    func_0x000107c4471c();
    func_0x000107c615e8(uVar6);
    if ((uVar7 & 1) != 0) goto LAB_101954e9c;
  }
  lVar11 = unaff_x20 + lVar10;
  func_0x000107c61618();
  if (lVar11 != 0) {
    lVar12 = lVar11;
    func_0x000107c5dd84();
    func_0x000107c61180();
    func_0x000107c615e8(lVar11);
    if (lVar12 != 0) {
      func_0x000107c5bbc8(lVar12);
      func_0x000107c615e8(lVar12);
    }
  }
LAB_101954e9c:
  lVar11 = unaff_x20 + lVar10;
  func_0x000107c61618();
  if (lVar11 != 0) {
    lVar12 = lVar11;
    func_0x000107c5dd84();
    func_0x000107c61180();
    func_0x000107c615e8(lVar11);
    if (lVar12 != 0) {
      func_0x000107c4ffa0(lVar12);
      func_0x000107c615e8(lVar12);
    }
  }
  lVar12 = *(long *)(lVar5 + _DAT_112dd85b8);
  lVar11 = lVar12;
  func_0x000107c3f074();
  func_0x000107c61180();
  if (lVar11 != 0) {
    lVar15 = lVar11;
    func_0x000107c3d140();
    func_0x000107c61180();
    func_0x000107c615e8(lVar11);
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019553d4);
      (*pcVar1)();
    }
    lVar11 = lVar15;
    func_0x000107c5fc54(lVar15,PTR___sSSN_11034da80);
    func_0x000107c61170(lVar15);
    func_0x000107c6142c(lVar11);
  }
  lVar11 = unaff_x20 + lVar10;
  func_0x000107c61618();
  if (lVar11 != 0) {
    lVar15 = lVar11;
    func_0x000107c5dd84();
    func_0x000107c61180();
    func_0x000107c615e8(lVar11);
    if (lVar15 != 0) {
      func_0x000107c55998(lVar15);
      func_0x000107c615e8(lVar15);
    }
  }
  lVar11 = unaff_x20 + lVar10;
  func_0x000107c61618();
  if (lVar11 != 0) {
    lVar15 = lVar11;
    func_0x000107c5dd84();
    func_0x000107c61180();
    func_0x000107c615e8(lVar11);
    if (lVar15 != 0) {
      func_0x000107c3d7c0(lVar15);
      func_0x000107c615e8(lVar15);
      lVar11 = lVar15;
    }
  }
  uVar14 = *(undefined8 *)(lVar5 + _DAT_112dd85f0);
  lVar13 = *(long *)(lVar5 + _DAT_112dd8590);
  uVar17 = *(undefined8 *)(lVar13 + _DAT_1130757f8);
  uVar18 = *(undefined8 *)(lVar5 + _DAT_112dd85f8);
  func_0x000107c5ed90(_DAT_112dd85a0);
  uVar8 = *(undefined8 *)(lVar5 + _DAT_112dd85e8);
  func_0x000107c418e8(uVar8);
  func_0x000107c61180();
  uVar2 = uVar8;
  func_0x000107c3d120(uVar8);
  func_0x000107c61180();
  func_0x000107c615e8(uVar8);
  lVar15 = unaff_x20 + lVar10;
  func_0x000107c61618();
  if (lVar15 != 0) {
    lVar9 = lVar15;
    func_0x000107c5dd84();
    func_0x000107c61180();
    func_0x000107c615e8(lVar15);
    if (lVar9 != 0) {
      func_0x000107c5ddcc(lVar9);
      func_0x000107c615e8(lVar9);
    }
  }
  lVar15 = unaff_x20 + lVar10;
  func_0x000107c61618();
  if (lVar15 != 0) {
    lVar9 = lVar15;
    func_0x000107c5dd84();
    func_0x000107c61180();
    func_0x000107c615e8(lVar15);
    if (lVar9 != 0) {
      func_0x000107c5df98();
      func_0x000107c615e8(lVar9);
    }
  }
  lVar15 = ((undefined8 *)(lVar13 + _DAT_113075778))[1];
  if (lVar15 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar13 + _DAT_113075778);
    func_0x000107c61434(lVar15);
    func_0x000107c5fadc(uVar8,lVar15);
    func_0x000107c6142c(lVar15);
  }
  func_0x000107c5bb84(uVar14,uVar17,uVar18,*(undefined8 *)(lVar13 + _DAT_113075830),
                      *(undefined8 *)(lVar13 + _DAT_113075898),lVar12);
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  lVar11 = unaff_x20 + lVar10;
  func_0x000107c61618();
  if (lVar11 != 0) {
    lVar15 = lVar11;
    func_0x000107c438f8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar11);
    func_0x000107c41a0c(lVar15);
    func_0x000107c615e8(lVar15);
  }
  uVar2 = *(undefined8 *)(lVar5 + _DAT_112dd85b0);
  puVar3 = &UNK_110418338;
  func_0x000107c613fc(&UNK_110418338,0x18,7);
  *(long *)(puVar3 + 0x10) = lVar5;
  pcStack_98 = FUN_10195623c;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_101286f34;
  puStack_a0 = &UNK_110418350;
  ppuVar4 = &puStack_b8;
  puStack_90 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_90;
  func_0x000107c61174(lVar5);
  func_0x000107c61574(puVar3);
  lVar10 = unaff_x20 + lVar10;
  func_0x000107c61618();
  if (lVar10 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = lVar10;
    func_0x000107c4f7e8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
  }
  func_0x000107c5dc64(uVar2);
  func_0x000107c615e8(lVar11);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar16);
  return;
}



/* Entry: 1019553d4; end: 101955453;  */

/* WARNING: Possible PIC construction at 0x00010195543c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101955440) */

void FUN_1019553d4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x000107c5fadc(0xd00000000000002c,0x800000010efc1e20);
  func_0x000107c4eb8c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101955454; end: 101955657;  */

/* WARNING: Possible PIC construction at 0x0001019554c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010195557c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019555bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019554c4) */
/* WARNING: Removing unreachable block (ram,0x000101955580) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101955454(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_68;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(ulong *)(param_1 + _DAT_113075bb0);
  }
  func_0x0001002a566c();
  lVar5 = unaff_x20 + _DAT_112dd8578;
  func_0x000107c61618();
  if (lVar5 == 0) {
    uVar3 = 0;
    func_0x0001002a566c();
    if (param_1 == 0) {
      return;
    }
    if ((*(byte *)(param_1 + _DAT_113075be8) & 1) == 0) {
      puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar4 = 0;
      func_0x0001002a5a2c(0);
      func_0x0001002a5a4c(&puStack_68,uVar2,*(undefined8 *)(unaff_x20 + _DAT_112dd85e8),uVar4);
      puVar1 = puStack_68;
      if (*(long *)(puStack_68 + 0x10) == 0) {
        if ((uVar2 & uVar3) == 0) {
          func_0x000107c6142c(puStack_68);
          return;
        }
        lVar5 = *(long *)(unaff_x20 + _DAT_112dd85e0);
        func_0x000107c43694(lVar5);
        func_0x000107c61180();
        func_0x000107c52e50();
        func_0x000107c6142c(puVar1);
      }
      else {
        lVar5 = *(long *)(unaff_x20 + _DAT_112dd85e0);
        func_0x000107c43694(lVar5);
        func_0x000107c61180();
        func_0x000107c59f30();
      }
    }
    else {
      if ((uVar2 & uVar3) == 0) {
        return;
      }
      uVar2 = *(ulong *)(param_1 + _DAT_113075be0);
      if (uVar2 == 0) {
        return;
      }
      func_0x000107c508a8();
      if ((uVar2 & 0xfffffffffffffffe) != 2) {
        return;
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_112dd85e0);
      func_0x000107c43694(lVar5);
      func_0x000107c61180();
      func_0x000107c52e50();
    }
  }
  else {
    func_0x000107c51b1c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar5);
  return;
}



/* Entry: 101955658; end: 1019557bb;  */

/* WARNING: Possible PIC construction at 0x00010195569c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019556a0) */
/* WARNING: Removing unreachable block (ram,0x0001019556c8) */
/* WARNING: Removing unreachable block (ram,0x0001019556c0) */
/* WARNING: Removing unreachable block (ram,0x0001019556cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101955658(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112dd85e0);
  func_0x000107c43728(uVar1);
  func_0x000107c61180();
  func_0x000107c4a44c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1019557bc; end: 1019557e3; -[SCCameraCaptureVideoOperation main] */

void FUN_1019557bc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101954c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1019557e4; end: 1019558f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019557e4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c3f4d0(*(undefined8 *)(unaff_x20 + _DAT_112dd85b8));
  lVar3 = _DAT_112dd8578;
  lVar1 = unaff_x20 + _DAT_112dd8578;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5dd84();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      func_0x000107c4ffa0(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c438f8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    func_0x000107c41a20(lVar1);
    func_0x000107c615e8(lVar1);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dd85e0);
  func_0x000107c40274(uVar4);
  func_0x000107c61180();
  func_0x000107c57838();
  func_0x000107c615e8(uVar4);
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 1019558f4; end: 10195591b; -[SCCameraCaptureVideoOperation cancel] */

void FUN_1019558f4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1019557e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10195591c; end: 1019559a7; -[SCCameraCaptureVideoOperation finish] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10195591c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112dd85e0);
  func_0x000107c61174();
  func_0x000107c40274(uVar2);
  func_0x000107c61180();
  func_0x000107c57838();
  func_0x000107c615e8(uVar2);
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_finish_1125c9748);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1019559a8; end: 101955c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019559a8(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8();
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc1da0);
  func_0x000107c466bc();
  func_0x000107c61170(uVar3);
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112dd8590) + _DAT_113075778);
  lVar4 = puVar1[1];
  if (lVar4 == 0) {
    uVar3 = 0;
    lVar4 = -0x2000000000000000;
  }
  else {
    uVar3 = *puVar1;
  }
  uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112dd85a8) + _DAT_113075690);
  uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112dd85a8) + _DAT_113075698);
  func_0x000107c61434();
  func_0x000107c61174();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0();
  puVar6 = PTR_PTR_1126dd138;
  func_0x000107c610f8(PTR_PTR_1126dd138);
  func_0x000107c5fadc(uVar3,lVar4);
  func_0x000107c6142c(lVar4);
  puVar7 = puVar2;
  func_0x000107c5ed2c();
  func_0x000107c61170(puVar2);
  puVar8 = puVar5;
  func_0x000107c5f9dc(puVar5,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(puVar5);
  func_0x000107c45d10(0,0,0,0,uVar10,uVar11,puVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112dd85c8);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc1dc0);
  func_0x000107c4bfb4(0,uVar10);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112dd85d0);
  puVar5 = &UNK_110418388;
  func_0x000107c613fc(&UNK_110418388,0x20,7);
  *(long *)(puVar5 + 0x10) = unaff_x20;
  *(undefined **)(puVar5 + 0x18) = puVar2;
  uStack_70 = 0x10195626c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1104183a0;
  ppuVar9 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar9);
  puVar5 = puStack_68;
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  func_0x000107c61574(puVar5);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 101955c94; end: 101955cbb; -[SCCameraCaptureVideoOperation reportNotAllowedToStartError] */

void FUN_101955c94(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1019559a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101955cbc; end: 101955d77;  */

/* WARNING: Possible PIC construction at 0x000101955d08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101955d20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101955d48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101955d0c) */
/* WARNING: Removing unreachable block (ram,0x000101955d10) */
/* WARNING: Removing unreachable block (ram,0x000101955d4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101955cbc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c5be6c(*(undefined8 *)(unaff_x20 + _DAT_112dd85b8));
  lVar1 = _DAT_112dd8578;
  lVar2 = unaff_x20 + _DAT_112dd8578;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar2 = unaff_x20 + lVar1;
    func_0x000107c61618();
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c438f8();
    func_0x000107c61180();
  }
  else {
    func_0x000107c5dd84();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 101955d78; end: 101955dd7; -[SCCameraCaptureVideoOperation initWithDelegate:] */

void FUN_101955d78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraRequestHandlerOperations.CameraCaptureVideoOperation",0x3c,
                      "init(delegate:)",0xf,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101955da4);
  (*pcVar1)();
}



/* Entry: 101955dd8; end: 101955ef7; -[SCCameraCaptureVideoOperation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101955e14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101955e34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101955e54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101955e38) */
/* WARNING: Removing unreachable block (ram,0x000101955e18) */
/* WARNING: Removing unreachable block (ram,0x000101955e58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101955dd8(long param_1)

{
  func_0x000100cc07c8(param_1 + _DAT_112dd8578);
  func_0x000100cc07c8(param_1 + _DAT_112dd8580);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dd85c0));
  return;
}



/* Entry: 101955ef8; end: 101956217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101955ef8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long unaff_x20;
  double dVar8;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112dd8578;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8578,0);
  lVar3 = _DAT_112dd8580;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8580,0);
  *(undefined8 *)(unaff_x20 + _DAT_112dd8588) = 0;
  *(long *)(unaff_x20 + _DAT_112dd8590) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8598) = param_2;
  lVar4 = _DAT_112dd85a0;
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar5 + -8);
  (**(code **)(lVar7 + 0x10))(unaff_x20 + lVar4,param_3,lVar5);
  *(undefined8 *)(unaff_x20 + _DAT_112dd85a8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112dd85b0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112dd85b8) = param_6;
  func_0x000107c61604(unaff_x20 + lVar2,param_7);
  *(undefined8 *)(unaff_x20 + _DAT_112dd85c0) = param_8;
  func_0x000107c61604(unaff_x20 + lVar3,param_9);
  *(undefined8 *)(unaff_x20 + _DAT_112dd85c8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112dd85d0) = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dd85d8);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112dd85e0) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112dd85e8) = param_16;
  dVar8 = *(double *)(param_1 + _DAT_1130757f8) * *(double *)(param_1 + _DAT_113075808);
  if (*(double *)(param_1 + _DAT_1130757f8) <= 0.0) {
    dVar8 = *(double *)(param_1 + _DAT_113075808);
  }
  *(double *)(unaff_x20 + _DAT_112dd85f0) = dVar8;
  dVar8 = *(double *)(param_1 + _DAT_113075870);
  if (dVar8 <= 0.0) {
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c615f0(param_6);
    func_0x000107c615f0(param_8);
    func_0x000107c615f0(param_10);
    func_0x000107c615f0(param_11);
    func_0x000107c6157c(param_13);
    func_0x000107c615f0(param_15);
    func_0x000107c615f0(param_16);
    func_0x0001008e3740();
    *(double *)(unaff_x20 + _DAT_112dd85f8) = dVar8;
  }
  else {
    *(double *)(unaff_x20 + _DAT_112dd85f8) = dVar8;
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c615f0(param_6);
    func_0x000107c615f0(param_8);
    func_0x000107c615f0(param_10);
    func_0x000107c615f0(param_11);
    func_0x000107c6157c(param_13);
    func_0x000107c615f0(param_15);
    func_0x000107c615f0(param_16);
  }
  puVar6 = &stack0xffffffffffffff88;
  func_0x000107c61154(puVar6,PTR_s_initWithDelegate__1125e0280,param_14);
  (**(code **)(lVar7 + 8))(param_3,lVar5);
  return puVar6;
}



/* Entry: 101956218; end: 10195623b;  */

/* WARNING: Possible PIC construction at 0x00010195543c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101955440) */

void FUN_101956218(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x000107c5fadc(0xd00000000000002c,0x800000010efc1e20);
  func_0x000107c4eb8c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10195623c; end: 10195629b;  */

void FUN_10195623c(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    func_0x000107c49820();
    bVar1 = param_1 == 1;
  }
  func_0x0001019556e0(bVar1);
  return;
}



/* Entry: 10195629c; end: 1019562a3;  */

void FUN_10195629c(void)

{
  if (lRam0000000112dd8628 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e65b4cc);
  return;
}



/* Entry: 1019562a4; end: 1019562db;  */

void FUN_1019562a4(undefined8 param_1)

{
  if (lRam0000000112dd8628 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e65b4cc);
  return;
}



/* Entry: 1019562dc; end: 1019563a7;  */

void FUN_1019562dc(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_b8 = &UNK_10d99bd60;
  puStack_b0 = &UNK_10d99bd60;
  puStack_a8 = &UNK_10d99bd78;
  puStack_a0 = &UNK_10d99bd78;
  puStack_98 = &UNK_10d99bd78;
  puStack_90 = &UNK_10d99bd78;
  puStack_88 = &UNK_10d99bd78;
  puStack_80 = &UNK_10d99bd78;
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puVar2 = PTR___sBOWV_11034d658 + 0x40;
  lVar3 = 0x13f;
  puStack_78 = puVar1;
  puStack_70 = puVar2;
  puStack_68 = puVar2;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_60 = *(long *)(lVar3 + -8) + 0x40;
    puStack_40 = PTR___syycWV_11034f1c0 + 0x40;
    puStack_38 = &UNK_10d99bd90;
    puStack_58 = puVar1;
    puStack_50 = puVar2;
    puStack_48 = puVar2;
    func_0x000107c61630(param_1,0x100,0x11,&puStack_b8,param_1 + 0x50);
  }
  return;
}



/* Entry: 1019563a8; end: 1019563bf;  */

void FUN_1019563a8(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1019563c0; end: 1019563c7; -[SCCameraHardwareActivateDeviceOperation type] */

undefined8 FUN_1019563c0(void)

{
  return 8;
}



/* Entry: 1019563c8; end: 101956607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1019563c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
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
  uVar6 = puVar1[1];
  *puVar1 = param_10;
  puVar1[1] = param_11;
  func_0x000107c615f0(param_7);
  func_0x000107c6142c(uVar6);
  *(undefined1 *)(unaff_x20 + _DAT_112dd86d8) = param_12;
  puVar5 = auStack_70;
  func_0x000107c61154(puVar5,PTR_s_initWithDelegate__1125e0280,param_1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_8);
  return puVar5;
}



/* Entry: 101956608; end: 101956c5b; -[SCCameraHardwareActivateDeviceOperation initWithDelegate:cameraHardwareResource:managedCaptureSession:devicePosition:secondaryDevicePositions:backDeviceType:captureDeviceManager:viewfinderRenderAgent:viewfinderTransition:context:isCameraLensSmudgeDetectionEnabled:] */

undefined8
FUN_101956608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
             undefined1 param_13)

{
  undefined8 uVar1;
  
  if (param_12 == 0) {
    param_12 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_9);
  func_0x000107c61174(param_10);
  uVar1 = param_3;
  FUN_1019585c0(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
                param_2,param_13);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_9);
  func_0x000107c61170(param_10);
  return uVar1;
}



/* Entry: 101956c5c; end: 101956d73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101956c5c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  uint uVar5;
  undefined1 auStack_60 [48];
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000003b;
  func_0x0001000a9a18(0xd00000000000003b,0x800000010efc2250);
  func_0x000107c61170(uVar2);
  uVar1 = (uint)uVar2;
  lVar4 = *(long *)(unaff_x20 + _DAT_112dd8660);
  if (lVar4 == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = (uint)(*(long *)(lVar4 + _DAT_113075bb8) != *(long *)(unaff_x20 + _DAT_112dd86b8) ||
                  (int)*(undefined8 *)(lVar4 + _DAT_113075bb0) !=
                  (int)*(undefined8 *)(unaff_x20 + _DAT_112dd86b0));
  }
  FUN_101957928();
  func_0x000107c61428(param_1,auStack_60,0,0);
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  func_0x0001000aa0a8(uVar3);
  func_0x000107c61170(uVar2);
  return uVar5 | uVar1 & 1;
}



/* Entry: 101956d74; end: 101956edf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101956d74(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  
  if (*(long *)(unaff_x20 + _DAT_112dd86d0) != 0) {
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar1 = *param_1;
    func_0x000107c61174(uVar1);
    uVar2 = 0xd00000000000004b;
    func_0x0001000a9a18(0xd00000000000004b,0x800000010efc21d0);
    func_0x000107c61170(uVar1);
    pcVar3 = "transitionViewfinderRenderIfAllowed()";
    func_0x0001000c10c0("transitionViewfinderRenderIfAllowed()");
    func_0x000107c61180();
    puVar4 = &UNK_110418450;
    func_0x000107c613fc(&UNK_110418450,0x18,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    uStack_68 = 0x101958bc4;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_110418468;
    ppuVar5 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_60;
    func_0x000107c61174();
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(pcVar3);
    func_0x000107c61428(param_1,&puStack_88,0,0);
    uVar1 = *param_1;
    func_0x000107c61174(uVar1);
    func_0x0001000aa0a8(uVar2);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 101956ee0; end: 1019570c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101956ee0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd000000000000035;
  func_0x0001000a9a18(0xd000000000000035,0x800000010efc2090);
  func_0x000107c61170(uVar1);
  lVar7 = _DAT_112dd8640;
  lVar3 = unaff_x20 + _DAT_112dd8640;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5dd84();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar4 != 0) {
      func_0x000107c3e76c(lVar4);
      func_0x000107c615e8(lVar4);
    }
  }
  lVar3 = unaff_x20 + _DAT_112dd8648;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar5 = &UNK_110418400;
    func_0x000107c613fc(&UNK_110418400,0x18,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    pcStack_78 = FUN_101958b88;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_110418418;
    ppuVar6 = &puStack_98;
    puStack_70 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_70;
    func_0x000107c61174();
    func_0x000107c61574(puVar5);
    func_0x000107c4e56c(lVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar3);
  }
  lVar7 = unaff_x20 + lVar7;
  func_0x000107c61618();
  if (lVar7 != 0) {
    lVar3 = lVar7;
    func_0x000107c5dd84();
    func_0x000107c61180();
    func_0x000107c615e8(lVar7);
    if (lVar3 != 0) {
      func_0x000107c3fe5c(lVar3);
      func_0x000107c615e8(lVar3);
    }
  }
  func_0x000107c61428(param_1,&puStack_98,0,0);
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  func_0x0001000aa0a8(uVar2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1019570c4; end: 10195757b;  */

/* WARNING: Removing unreachable block (ram,0x00010195755c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019570c4(undefined8 *param_1)

{
  bool bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auStack_98 [56];
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar3 = *param_1;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000042;
  func_0x0001000a9a18(0xd000000000000042,0x800000010efc1fb0);
  func_0x000107c61170(uVar3);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112dd86c8);
  uVar3 = uVar12;
  func_0x000107c43694();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112dd86b0);
  uVar9 = uVar3;
  func_0x000107c49db8();
  func_0x000107c615e8(uVar3);
  uVar3 = uVar12;
  func_0x000107c43694();
  func_0x000107c61180();
  uVar5 = uVar3;
  func_0x000107c4a60c();
  func_0x000107c615e8();
  lVar13 = _DAT_112dd8660;
  bVar2 = (byte)uVar3;
  if ((*(long *)(unaff_x20 + _DAT_112dd8660) == 0) ||
     (*(int *)(*(long *)(unaff_x20 + _DAT_112dd8660) + _DAT_113075bb0) != (int)uVar14)) {
    bVar2 = 1;
  }
  else {
    FUN_101957928();
  }
  *(byte *)(unaff_x20 + _DAT_112dd8670) = bVar2 & 1;
  lVar10 = *(long *)(unaff_x20 + lVar13);
  if ((lVar10 == 0) || ((uint)uVar9 != (uint)*(byte *)(lVar10 + _DAT_113075bc8))) {
    bVar2 = 1;
  }
  else {
    bVar2 = (byte)uVar5 ^ *(byte *)(lVar10 + _DAT_113075bd0);
  }
  *(byte *)(unaff_x20 + _DAT_112dd8680) = bVar2 & 1;
  lVar10 = unaff_x20 + _DAT_112dd8648;
  func_0x000107c61618();
  if (lVar10 == 0) {
    uVar11 = 1;
    lVar10 = *(long *)(unaff_x20 + lVar13);
    if (lVar10 != 0) goto LAB_101957278;
LAB_10195729c:
    bVar1 = true;
  }
  else {
    lVar6 = lVar10;
    func_0x000107c5de0c();
    func_0x000107c615e8(lVar10);
    uVar11 = (ulong)(lVar6 != 0);
    lVar10 = *(long *)(unaff_x20 + lVar13);
    if (lVar10 == 0) goto LAB_10195729c;
LAB_101957278:
    uVar7 = *(ulong *)(lVar10 + _DAT_113075b90);
    if (uVar7 == 0) goto LAB_10195729c;
    func_0x000107c41004();
    bVar1 = uVar7 != uVar11;
  }
  *(bool *)(unaff_x20 + _DAT_112dd8688) = bVar1;
  lVar6 = _DAT_112dd8640;
  lVar10 = unaff_x20 + _DAT_112dd8640;
  func_0x000107c61618();
  if (lVar10 != 0) {
    lVar8 = unaff_x20 + lVar6;
    func_0x000107c61618();
    if (lVar8 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = lVar8;
      func_0x000107c5bcc0();
      func_0x000107c61180();
      func_0x000107c615e8(lVar8);
    }
    func_0x0001002e8978(0);
    lVar8 = lVar15;
    func_0x0001002ed5a8(lVar15);
    func_0x000107c61170(lVar15);
    func_0x0001002e9764(uVar14);
    func_0x000107c61170(lVar8);
    func_0x0001002ea0d0(uVar9);
    func_0x000107c61170(uVar14);
    func_0x0001002ea1e0(uVar5);
    func_0x000107c61170(uVar9);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112dd86b8);
    func_0x0001002e9780(uVar9);
    func_0x000107c61170(uVar5);
    FUN_101958378();
    uVar3 = uVar5;
    func_0x0001002e96c8();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar5);
    uVar9 = uVar12;
    func_0x000107c3f52c(uVar12);
    func_0x000107c61180();
    uVar5 = uVar9;
    func_0x000107c4a650();
    func_0x000107c615e8(uVar9);
    func_0x0001002eaab4(uVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c3f52c(uVar12);
    func_0x000107c61180();
    uVar3 = uVar12;
    func_0x000107c4a5b8();
    func_0x000107c615e8(uVar12);
    func_0x0001002eab68(uVar3);
    func_0x000107c61170(uVar5);
    func_0x0001000c033c();
    func_0x000107c61170(uVar3);
    func_0x000107c59840(lVar10);
    func_0x000107c615e8(lVar10);
    func_0x000107c61170(uVar5);
  }
  lVar6 = unaff_x20 + lVar6;
  func_0x000107c61618();
  if (lVar6 == 0) {
    lVar13 = *(long *)(unaff_x20 + lVar13);
  }
  else {
    lVar10 = lVar6;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    lVar13 = *(long *)(unaff_x20 + lVar13);
    if (lVar10 != 0) {
      if (lVar13 == 0) {
        func_0x000107c61170(lVar10);
        bVar2 = 0;
      }
      else {
        func_0x0001000c0a74(0);
        func_0x000107c61174(lVar13);
        func_0x000107c61174();
        lVar6 = lVar10;
        func_0x000107c60118();
        bVar2 = (byte)lVar6;
        func_0x000107c61170(lVar13);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar10);
      }
      goto LAB_1019574e8;
    }
  }
  bVar2 = lVar13 == 0;
LAB_1019574e8:
  *(byte *)(unaff_x20 + _DAT_112dd8668) = (bVar2 ^ 0xff) & 1;
  func_0x000107c61428(param_1,auStack_98,0,0);
  uVar3 = *param_1;
  func_0x000107c61174(uVar3);
  func_0x0001000aa0a8(uVar4);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 10195757c; end: 101957667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10195757c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined *apuStack_60 [6];
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000040;
  func_0x0001000a9a18(0xd000000000000040,0x800000010efc1f10);
  func_0x000107c61170(uVar2);
  apuStack_60[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = *(ulong *)(unaff_x20 + _DAT_112dd86b0);
  func_0x0001002a566c(uVar4);
  FUN_101957ddc(apuStack_60,*(ulong *)(unaff_x20 + _DAT_112dd86b8) | uVar4);
  puVar1 = apuStack_60[0];
  func_0x000107c61428(param_1,apuStack_60,0,0);
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  func_0x0001000aa0a8(uVar3);
  func_0x000107c61170(uVar2);
  return puVar1;
}



/* Entry: 101957668; end: 10195769b; -[SCCameraHardwareActivateDeviceOperation execute] */

void FUN_101957668(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101956714();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10195769c; end: 1019576e7; -[SCCameraHardwareActivateDeviceOperation publishState:] */

/* WARNING: Possible PIC construction at 0x0001019576d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019576d4) */

void FUN_10195769c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101958a08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1019576e8; end: 10195779b; -[SCCameraHardwareActivateDeviceOperation expectedStates] */

void FUN_1019576e8(long param_1)

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



/* Entry: 10195779c; end: 101957927; -[SCCameraHardwareActivateDeviceOperation cameraDirectionForMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10195779c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_28;
  
  lStack_28 = *(long *)(param_1 + _DAT_112dd86b0);
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10195785c);
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



/* Entry: 101957928; end: 101957a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101957928(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_70 [48];
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar3 = *param_1;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd00000000000003f;
  func_0x0001000a9a18(0xd00000000000003f,0x800000010efc2000);
  func_0x000107c61170(uVar3);
  iVar1 = *(int *)(unaff_x20 + _DAT_112dd86c0);
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dd86c8);
    func_0x000107c418b4(uVar5);
    func_0x000107c61180();
    uVar3 = uVar5;
    func_0x000107c43fe8();
    func_0x000107c615e8(uVar5);
    bVar2 = (int)uVar3 != iVar1;
  }
  func_0x000107c61428(param_1,auStack_70,0,0);
  uVar3 = *param_1;
  func_0x000107c61174(uVar3);
  func_0x0001000aa0a8(uVar4);
  func_0x000107c61170(uVar3);
  return bVar2;
}



/* Entry: 101957a30; end: 101957ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101957a30(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [48];
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174();
  uVar2 = 0xd000000000000054;
  func_0x0001000a9a18(0xd000000000000054,0x800000010efc20d0);
  func_0x000107c61170();
  FUN_101957928();
  if ((uVar1 & 1) != 0) {
    lVar8 = *(long *)(unaff_x20 + _DAT_112dd86c8);
    lVar9 = lVar8;
    func_0x000107c3f52c();
    func_0x000107c61180();
    lVar3 = lVar9;
    func_0x000107c49c58();
    func_0x000107c615e8(lVar9);
    lVar9 = lVar8;
    func_0x000107c52078();
    func_0x000107c61180();
    lVar4 = lVar9;
    func_0x000107c4411c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar9);
    if (lVar4 != 0) {
      lVar9 = lVar8;
      func_0x000107c418b4(lVar8);
      func_0x000107c61180();
      func_0x000107c52b38();
      func_0x000107c615e8(lVar9);
      lVar9 = lVar8;
      func_0x000107c52078();
      func_0x000107c61180();
      lVar5 = lVar9;
      func_0x000107c4411c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar9);
      if (lVar5 != 0) {
        if ((int)lVar3 != 0) {
          func_0x000101957ecc(lVar4);
          lVar9 = unaff_x20 + _DAT_112dd8648;
          func_0x000107c61618();
          if (lVar9 != 0) {
            lVar3 = lVar9;
            func_0x0001002ee2e4();
            func_0x000107c613fc();
            *(undefined8 *)(lVar3 + 0x18) = 3;
            *(undefined8 *)(lVar3 + 0x10) = 1;
            *(long *)(lVar3 + 0x20) = lVar5;
            func_0x000107c615f0(lVar5);
            uVar7 = 0x112dd8708;
            func_0x0001000285a8(0x112dd8708,&UNK_10d99be00);
            lVar6 = lVar3;
            func_0x000107c5fc48(lVar3,uVar7);
            func_0x000107c61574(lVar3);
            func_0x000107c3d604(lVar9);
            func_0x000107c615e8(lVar9);
            func_0x000107c61170(lVar6);
          }
          *(undefined1 *)(unaff_x20 + _DAT_112dd8690) = 1;
          if (*(char *)(unaff_x20 + _DAT_112dd86d8) == '\x01') {
            func_0x000107c4b404(lVar8);
            func_0x000107c61180();
            func_0x000107c42684();
            func_0x000107c615e8(lVar8);
          }
        }
        func_0x000107c615e8(lVar5);
      }
      func_0x000107c615e8(lVar4);
    }
  }
  lVar9 = *(long *)(unaff_x20 + _DAT_112dd86b0);
  if (lVar9 == 1) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112dd86c8);
    func_0x000107c418b4(uVar7);
    func_0x000107c61180();
    func_0x000107c52b38();
  }
  else {
    if (lVar9 != 0) goto LAB_101957ce0;
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112dd86c8);
    func_0x000107c418b4(uVar7);
    func_0x000107c61180();
    func_0x000107c54cf4();
  }
  func_0x000107c615e8(uVar7);
LAB_101957ce0:
  FUN_101958024(lVar9,*(undefined8 *)(unaff_x20 + _DAT_112dd86b8));
  lVar3 = _DAT_112dd8640;
  lVar9 = unaff_x20 + _DAT_112dd8640;
  func_0x000107c61618();
  if (lVar9 != 0) {
    func_0x000107c58d6c();
    func_0x000107c615e8(lVar9);
  }
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112dd86c8);
  func_0x000107c418b4(uVar7);
  func_0x000107c61180();
  func_0x000107c58d6c();
  func_0x000107c615e8(uVar7);
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar9 = lVar3;
    func_0x000107c5dd84();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar9 != 0) {
      func_0x000107c540a4(lVar9);
      func_0x000107c615e8(lVar9);
    }
  }
  func_0x000107c61428(param_1,auStack_90,0,0);
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  func_0x0001000aa0a8(uVar2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101957ddc; end: 101958023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101957ddc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_70 [48];
  
  puVar1 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000041;
  func_0x0001000a9a18(0xd000000000000041,0x800000010efc1f60);
  func_0x000107c61170(uVar2);
  func_0x0001002a5a2c(0);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112dd86c8);
  func_0x000107c615f0(uVar2);
  func_0x0001002a5a4c(param_1,param_2,uVar2);
  func_0x000107c615e8(uVar2);
  func_0x000107c61428(puVar1,auStack_70,0,0);
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  func_0x0001000aa0a8(uVar3);
  func_0x000107c61170(uVar2);
  return;
}


