/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029edd7c; end: 1029edd7f; -[SCCameraStabilityLogger logCameraOpenEventFirstFrameReceiveSuccessfully] */

void FUN_1029edd7c(void)

{
  return;
}



/* Entry: 1029edd80; end: 1029edd83; -[SCCameraStabilityLogger logCameraOpenEventCameraFailedToOpen] */

void FUN_1029edd80(void)

{
  return;
}



/* Entry: 1029edd84; end: 1029edd87; -[SCCameraStabilityLogger logFixSuccess:] */

void FUN_1029edd84(void)

{
  return;
}



/* Entry: 1029edd88; end: 1029edd8b; -[SCCameraStabilityLogger logFixFailure:] */

void FUN_1029edd88(void)

{
  return;
}



/* Entry: 1029edd8c; end: 1029edd8f; -[SCCameraStabilityLogger logCameraOpenFailurePermissionIncomplete] */

void FUN_1029edd8c(void)

{
  return;
}



/* Entry: 1029edd90; end: 1029edd93; -[SCCameraStabilityLogger logCameraOpenFailurePermissionNotGranted] */

void FUN_1029edd90(void)

{
  return;
}



/* Entry: 1029edd94; end: 1029ee3b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029edd94(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR_PTR_1126e2a98;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5487c();
  func_0x000107c5713c(puVar1);
  func_0x000107c5a144(puVar1);
  func_0x000107c530c0(puVar1);
  func_0x000107c53134(puVar1);
  func_0x000107c52fec(puVar1);
  func_0x000107c569f8(puVar1);
  func_0x000107c530e0(puVar1);
  func_0x000107c52ff0(puVar1);
  func_0x000107c553c4(puVar1);
  uVar8 = 0;
  if (in_stack_00000010 != 0) {
    func_0x000107c5fadc(in_stack_00000008,in_stack_00000010);
    uVar8 = in_stack_00000008;
  }
  func_0x000107c59634(puVar1);
  func_0x000107c61170(uVar8);
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed6708);
  if (lVar2 != 0) {
    func_0x000107c43bf4();
    func_0x000107c61180();
    puVar3 = &UNK_110582060;
    func_0x000107c613fc(&UNK_110582060,0x18,7);
    *(undefined **)(puVar3 + 0x10) = puVar1;
    uStack_70 = 0x1029ef058;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100c6a968;
    puStack_78 = &UNK_110582078;
    ppuVar4 = &puStack_90;
    puStack_68 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_68;
    func_0x000107c61174(puVar1);
    func_0x000107c61574(puVar3);
    pcVar5 = "logToBlizzard(event:)";
    func_0x0001000c10c0("logToBlizzard(event:)");
    func_0x000107c61180();
    func_0x000107c5dc64(lVar2);
    func_0x000107c615e8(pcVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ed6710);
  lVar2 = in_stack_00000018;
  func_0x000107c311f8();
  func_0x000107c61180();
  lVar11 = lVar2;
  func_0x0001085a8fb4(uVar8,lVar2,1);
  func_0x000107c61170(lVar2);
  puStack_90 = (undefined *)0xd00000000000001e;
  uStack_88 = 0x800000010f0d7f80;
  func_0x000107c311f8();
  func_0x000107c61180();
  if (in_stack_00000018 == 0) {
    lVar2 = 0;
    lVar11 = -0x2000000000000000;
  }
  else {
    lVar2 = in_stack_00000018;
    func_0x000107c5faec();
    func_0x000107c61170(in_stack_00000018);
  }
  lVar10 = lVar11;
  func_0x000107c5fb78(lVar2);
  func_0x000107c6142c(lVar11);
  func_0x0001008b71f4();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar2 = 0;
    lVar9 = -0x2000000000000000;
    lVar11 = lVar10;
  }
  else {
    lVar2 = param_2;
    func_0x000107c5faec();
    lVar11 = lVar10;
    func_0x000107c61170(param_2);
    lVar9 = lVar10;
  }
  func_0x0001008b7a44();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar10 = 0;
    lVar13 = -0x2000000000000000;
    lVar12 = lVar11;
  }
  else {
    lVar10 = param_1;
    func_0x000107c5faec();
    lVar12 = lVar11;
    func_0x000107c61170(param_1);
    lVar13 = lVar11;
  }
  func_0x0001008b7be4();
  func_0x000107c61180();
  if (param_4 == 0) {
    lVar11 = 0;
    lVar12 = -0x2000000000000000;
  }
  else {
    lVar11 = param_4;
    func_0x000107c5faec();
    func_0x000107c61170(param_4);
  }
  func_0x000107c602fc(0x28);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0x206172656d614320,0xed0000206d6f7266);
  func_0x000107c5fb78(lVar10,lVar13);
  func_0x000107c6142c(lVar13);
  func_0x000107c5fb78(0xd000000000000017,0x800000010f0d7ed0);
  func_0x000107c5fb78(lVar11,lVar12);
  func_0x000107c6142c(lVar12);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  func_0x000107c5fb78(0x206f7420657564,0xe700000000000000);
  func_0x000107c61434(lVar9);
  func_0x000107c5fb78(0x6c6c616974696e69,0xea00000000002079);
  func_0x000107c6142c(lVar9);
  func_0x000107c6142c(0xea00000000002079);
  func_0x000107c5fb78(lVar2,lVar9);
  func_0x000107c6142c(lVar9);
  func_0x000107c602fc(0x2b);
  func_0x000107c6142c(0xe000000000000000);
  puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar3 = PTR___sSiN_11034deb0;
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar6);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f0d7f40);
  puVar6 = puVar7;
  func_0x000107c6057c(puVar3,puVar7);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar6);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  func_0x000107c602fc(0x16);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c6057c(puVar3,puVar7);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar7);
  func_0x000107c61434(0x800000010f0d7f20);
  func_0x000107c5fb78(0xd000000000000014,0x800000010f0d7f60);
  func_0x000107c6142c(0x800000010f0d7f20);
  func_0x000107c6142c(0x800000010f0d7f60);
  func_0x000107c5fb78(0xd000000000000014,0x800000010f0d7f20);
  func_0x000107c6142c(0xe700000000000000);
  func_0x000107c6142c(0x800000010f0d7f20);
  func_0x000107c61170(puVar1);
  func_0x000107c6142c(uStack_88);
  return;
}



/* Entry: 1029ee3b8; end: 1029ee3eb; -[SCCameraStabilityLogger logToSnappableFailureWith:cameraType:cameraDirection:initialCameraState:overallLatencyMs:uiRenderLatency:frameRenderLatency:cameraViewWillStartCameraLatency:cameraViewDidStartCameraLatencyMs:splits:failureReason:] */

void FUN_1029ee3b8(void)

{
  FUN_1029eea40();
  return;
}



/* Entry: 1029ee3ec; end: 1029eea0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ee3ec(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  puVar1 = PTR_PTR_1126e2aa0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c569f8();
  func_0x000107c530e0(puVar1);
  func_0x000107c52ff0(puVar1);
  func_0x000107c553c4(puVar1);
  func_0x000107c554b0(puVar1);
  func_0x000107c5713c(puVar1);
  func_0x000107c5a144(puVar1);
  func_0x000107c530c0(puVar1);
  func_0x000107c53134(puVar1);
  func_0x000107c52fec(puVar1);
  uVar8 = 0;
  if (in_stack_00000010 != 0) {
    func_0x000107c5fadc(in_stack_00000008,in_stack_00000010);
    uVar8 = in_stack_00000008;
  }
  func_0x000107c59634(puVar1);
  func_0x000107c61170(uVar8);
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed6708);
  if (lVar2 != 0) {
    func_0x000107c43bf4();
    func_0x000107c61180();
    puVar3 = &UNK_1105820b0;
    func_0x000107c613fc(&UNK_1105820b0,0x18,7);
    *(undefined **)(puVar3 + 0x10) = puVar1;
    uStack_78 = 0x1029ef05c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100c6a968;
    puStack_80 = &UNK_1105820c8;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_70;
    func_0x000107c61174(puVar1);
    func_0x000107c61574(puVar3);
    pcVar5 = "logToBlizzard(event:)";
    func_0x0001000c10c0("logToBlizzard(event:)");
    func_0x000107c61180();
    func_0x000107c5dc64(lVar2);
    func_0x000107c615e8(pcVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ed6710);
  lVar2 = in_stack_00000018;
  func_0x000107c311fc();
  func_0x000107c61180();
  lVar11 = lVar2;
  func_0x0001085a9128(uVar8,lVar2,1);
  func_0x000107c61170(lVar2);
  puStack_98 = (undefined *)0xd000000000000023;
  uStack_90 = 0x800000010f0d7fa0;
  func_0x000107c311fc();
  func_0x000107c61180();
  if (in_stack_00000018 == 0) {
    lVar2 = 0;
    lVar11 = -0x2000000000000000;
  }
  else {
    lVar2 = in_stack_00000018;
    func_0x000107c5faec();
    func_0x000107c61170(in_stack_00000018);
  }
  lVar10 = lVar11;
  func_0x000107c5fb78(lVar2);
  func_0x000107c6142c(lVar11);
  func_0x0001008b71f4();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar2 = 0;
    lVar9 = -0x2000000000000000;
    lVar11 = lVar10;
  }
  else {
    lVar2 = param_2;
    func_0x000107c5faec();
    lVar11 = lVar10;
    func_0x000107c61170(param_2);
    lVar9 = lVar10;
  }
  func_0x0001008b7a44();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar10 = 0;
    lVar13 = -0x2000000000000000;
    lVar12 = lVar11;
  }
  else {
    lVar10 = param_1;
    func_0x000107c5faec();
    lVar12 = lVar11;
    func_0x000107c61170(param_1);
    lVar13 = lVar11;
  }
  func_0x0001008b7be4();
  func_0x000107c61180();
  if (param_4 == 0) {
    lVar11 = 0;
    lVar12 = -0x2000000000000000;
  }
  else {
    lVar11 = param_4;
    func_0x000107c5faec();
    func_0x000107c61170(param_4);
  }
  func_0x000107c602fc(0x28);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0x206172656d614320,0xed0000206d6f7266);
  func_0x000107c5fb78(lVar10,lVar13);
  func_0x000107c6142c(lVar13);
  func_0x000107c5fb78(0xd000000000000017,0x800000010f0d7ed0);
  func_0x000107c5fb78(lVar11,lVar12);
  func_0x000107c6142c(lVar12);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  func_0x000107c5fb78(0x206f7420657564,0xe700000000000000);
  func_0x000107c61434(lVar9);
  func_0x000107c5fb78(0x6c6c616974696e69,0xea00000000002079);
  func_0x000107c6142c(lVar9);
  func_0x000107c6142c(0xea00000000002079);
  func_0x000107c5fb78(lVar2,lVar9);
  func_0x000107c6142c(lVar9);
  func_0x000107c602fc(0x2b);
  func_0x000107c6142c(0xe000000000000000);
  puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar3 = PTR___sSiN_11034deb0;
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar6);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f0d7f40);
  puVar6 = puVar7;
  func_0x000107c6057c(puVar3,puVar7);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar6);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  func_0x000107c602fc(0x16);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c6057c(puVar3,puVar7);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar7);
  func_0x000107c61434(0x800000010f0d7f20);
  func_0x000107c5fb78(0xd000000000000014,0x800000010f0d7f60);
  func_0x000107c6142c(0x800000010f0d7f20);
  func_0x000107c6142c(0x800000010f0d7f60);
  func_0x000107c5fb78(0xd000000000000014,0x800000010f0d7f20);
  func_0x000107c6142c(0xe700000000000000);
  func_0x000107c6142c(0x800000010f0d7f20);
  func_0x000107c61170(puVar1);
  func_0x000107c6142c(uStack_90);
  return;
}



/* Entry: 1029eea0c; end: 1029eea3f; -[SCCameraStabilityLogger logToSnappableInterruptWith:cameraType:cameraDirection:initialCameraState:overallLatencyMs:uiRenderLatency:frameRenderLatency:cameraViewWillStartCameraLatency:cameraViewDidStartCameraLatencyMs:splits:reason:] */

void FUN_1029eea0c(void)

{
  FUN_1029eea40();
  return;
}



/* Entry: 1029eea40; end: 1029eeb0b;  */

void FUN_1029eea40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                  undefined8 param_13,code *param_14)

{
  if (param_12 == 0) {
    param_12 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c61174(param_1);
  (*param_14)(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
              param_2,param_13);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1029eeb0c; end: 1029eeb2b;  */

void FUN_1029eeb0c(void)

{
  func_0x000107c61168(&PTR_PTR_11287c6f8);
  return;
}



/* Entry: 1029eeb2c; end: 1029eeb43; -[SCCameraStabilityLogger revokePromise] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029eeb2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ed6708);
  *(undefined8 *)(param_1 + _DAT_112ed6708) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1029eeb44; end: 1029ef04b;  */

/* WARNING: Possible PIC construction at 0x0001029eeea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029eef7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029eef8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029eeeac) */
/* WARNING: Removing unreachable block (ram,0x0001029eefb8) */
/* WARNING: Removing unreachable block (ram,0x0001029eeebc) */
/* WARNING: Removing unreachable block (ram,0x0001029eef80) */

void FUN_1029eeb44(double param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar4 = *param_2;
  func_0x000107c4c928(uVar4);
  if (param_1 <= 0.0) {
    return;
  }
  func_0x000107c4c928(uVar4);
  dVar6 = param_1;
  func_0x000107c4c928(param_2[1]);
  dVar8 = (double)param_2[4];
  dVar12 = (double)param_2[2];
  dVar10 = (double)param_2[6];
  dVar7 = (double)param_2[7];
  dVar11 = (double)param_2[0xb];
  dVar9 = (double)param_2[0xc];
  puVar2 = PTR_PTR_1126abca0;
  func_0x000107c610f8(PTR_PTR_1126abca0);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126c7760;
  func_0x000107c610f8(PTR_PTR_1126c7760);
  func_0x000107c453e4();
  dVar5 = (double)param_2[9];
  if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029eeff0);
    (*pcVar1)();
  }
  if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029eeff4);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029eeff8);
    (*pcVar1)();
  }
  dVar5 = (double)param_2[10];
  func_0x000107c5a724();
  if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029eeffc);
    (*pcVar1)();
  }
  if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ef000);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ef004);
    (*pcVar1)();
  }
  dVar6 = dVar6 * 1000000.0;
  func_0x000107c550b8(puVar3);
  func_0x000107c52b18(1.0 / param_1,puVar2);
  if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ef008);
    (*pcVar1)();
  }
  if (dVar6 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ef00c);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ef010);
    (*pcVar1)();
  }
  func_0x000107c52b1c(puVar2);
  if (0x7fefffffffffffff < (ulong)ABS(dVar12)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ef014);
    (*pcVar1)();
  }
  if (dVar12 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ef018);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar12) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ef01c);
    (*pcVar1)();
  }
  dVar7 = dVar7 * 1000000.0;
  func_0x000107c5433c(puVar2);
  if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ef020);
    (*pcVar1)();
  }
  if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ef024);
    (*pcVar1)();
  }
  if (dVar7 < 9.223372036854776e+18) {
    func_0x000107c54a38(puVar2);
    func_0x000107c40808(uVar4);
    func_0x000107c54b84(puVar2);
    dVar6 = (double)param_2[3];
    if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ef02c);
      (*pcVar1)();
    }
    if (dVar6 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ef030);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ef034);
      (*pcVar1)();
    }
    func_0x000107c598c0(puVar2);
    func_0x000107c57e44(puVar2);
    if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ef038);
      (*pcVar1)();
    }
    if (dVar10 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ef03c);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ef040);
      (*pcVar1)();
    }
    dVar8 = dVar8 * 1000000.0;
    func_0x000107c56334(puVar2);
    if (0x7fefffffffffffff < (ulong)ABS(dVar8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ef044);
      (*pcVar1)();
    }
    if (-9.223372036854778e+18 < dVar8) {
      if (dVar8 < 9.223372036854776e+18) {
        func_0x000107c56338(puVar2);
        func_0x000107c5ba24(uVar4);
        func_0x000107c59870(puVar2);
        func_0x000107c58fcc(dVar9 - dVar11,puVar2);
        func_0x000107c55bd4(puVar2);
        uVar4 = param_2[0x11];
        func_0x000107c5fc48(uVar4,PTR___sSSN_11034da80);
        func_0x000107c55d78(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar4);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ef04c);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ef048);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ef028);
  (*pcVar1)();
}



/* Entry: 1029ef04c; end: 1029ef06f;  */

void FUN_1029ef04c(long param_1,long param_2)

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



/* Entry: 1029ef070; end: 1029ef14f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ef070(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed6758);
  puVar1 = &UNK_110582150;
  func_0x000107c613fc(&UNK_110582150,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110582178;
  func_0x000107c613fc(&UNK_110582178,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  pcStack_40 = FUN_1029ef69c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110582190;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e590(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 1029ef150; end: 1029ef433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ef150(ulong param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long unaff_x20;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  uVar4 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar4 != 0) {
    uVar16 = uVar4;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    func_0x000107c615e8(uVar4);
    uVar4 = uVar16;
    func_0x000107c5faec();
    func_0x000107c61170(uVar16);
    lVar2 = _DAT_112ed6750;
    puVar11 = auStack_78;
    func_0x000107c61428(unaff_x20 + _DAT_112ed6750,puVar11,0,0);
    puVar15 = *(undefined1 **)(unaff_x20 + lVar2);
    if ((ulong)puVar15 >> 0x3e == 0) {
      puVar13 = *(undefined1 **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar13 = (undefined1 *)((ulong)puVar15 & 0xffffffffffffff8);
      if ((undefined1 *)0x7fffffffffffffff < puVar15) {
        puVar13 = puVar15;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(puVar15);
    if (puVar13 != (undefined1 *)0x0) {
      uVar16 = 0;
      do {
        if (((ulong)puVar15 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1029ef41c);
            (*pcVar3)();
          }
          uVar5 = *(ulong *)(puVar15 + uVar16 * 8 + 0x20);
          func_0x000107c61174();
          puVar12 = puVar11;
        }
        else {
          uVar5 = uVar16;
          puVar12 = puVar15;
          func_0x0001029efcf0();
        }
        puVar1 = (undefined1 *)(uVar16 + 1);
        if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1029ef418);
          (*pcVar3)();
        }
        uVar6 = uVar5;
        func_0x000107c5c734();
        func_0x000107c61180();
        puVar11 = puVar12;
        if (uVar6 != 0) {
          uVar7 = uVar6;
          func_0x000107c4d3e4();
          func_0x000107c61180();
          func_0x000107c615e8(uVar6);
          uVar6 = uVar7;
          func_0x000107c5faec();
          func_0x000107c61170(uVar7);
          if ((uVar6 == uVar4) && (puVar12 == param_2)) {
            func_0x000107c6142c(param_2);
            param_2 = puVar15;
LAB_1029ef3dc:
            func_0x000107c6142c(param_2);
            func_0x000107c6142c(puVar12);
            func_0x000107c61170(uVar5);
            return;
          }
          puVar11 = puVar12;
          func_0x000107c605b8(uVar6,puVar12,uVar4,param_2,0);
          func_0x000107c6142c(puVar12);
          puVar12 = puVar15;
          if ((uVar6 & 1) != 0) goto LAB_1029ef3dc;
        }
        func_0x000107c61170(uVar5);
        uVar16 = uVar16 + 1;
      } while (puVar1 != puVar13);
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(puVar15);
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112ed6758);
    puVar8 = &UNK_110582150;
    func_0x000107c613fc(&UNK_110582150,0x18,7);
    func_0x000107c61614(puVar8 + 0x10,unaff_x20);
    puVar9 = &UNK_1105821c8;
    func_0x000107c613fc(&UNK_1105821c8,0x20,7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    *(ulong *)(puVar9 + 0x18) = param_1;
    uStack_88 = 0x1029f00e4;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1105821e0;
    ppuVar10 = &puStack_a8;
    puStack_80 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar8 = puStack_80;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar8);
    func_0x000107c4e590(uVar14);
    func_0x000107c60bd0(ppuVar10);
  }
  return;
}



/* Entry: 1029ef434; end: 1029ef5bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ef434(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar5 = *(long *)(unaff_x20 + _DAT_112ed6760);
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed6758);
    puVar1 = &UNK_110582150;
    func_0x000107c613fc(&UNK_110582150,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    puVar2 = &UNK_110582218;
    func_0x000107c613fc(&UNK_110582218,0x20,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(long *)(puVar2 + 0x18) = lVar5;
    pcStack_40 = FUN_1029eff20;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_110582230;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    puVar1 = puStack_38;
    func_0x000107c61174(lVar5);
    func_0x000107c61174();
    func_0x000107c61574(puVar1);
    func_0x000107c4e590(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 1029ef5bc; end: 1029ef69b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ef5bc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112ed6750;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112ed6750,auStack_70,0x21,0);
    func_0x0001029efacc();
    uVar3 = *(ulong *)(param_1 + lVar2);
    uVar4 = uVar3 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_1029f4b1c(uVar3,uVar1 + 1,1);
      uVar4 = uVar3 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    *(undefined8 *)(uVar4 + uVar1 * 8 + 0x20) = param_2;
    *(ulong *)(param_1 + lVar2) = uVar3;
    func_0x000107c614a8(auStack_70);
    func_0x000107c61174(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1029ef69c; end: 1029ef6bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ef69c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112ed6750;
  if (lVar4 != 0) {
    func_0x000107c61428(lVar4 + _DAT_112ed6750,auStack_70,0x21,0);
    func_0x0001029efacc();
    uVar5 = *(ulong *)(lVar4 + lVar3);
    uVar6 = uVar5 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar6 + 0x10);
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_1029f4b1c(uVar5,uVar1 + 1,1);
      uVar6 = uVar5 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
    *(undefined8 *)(uVar6 + uVar1 * 8 + 0x20) = uVar2;
    *(ulong *)(lVar4 + lVar3) = uVar5;
    func_0x000107c614a8(auStack_70);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1029ef6c0; end: 1029ef70f; -[_TtC29SCCameraStabilityServicesImpl26CameraStabilityMonitorBase addFix:] */

/* WARNING: Possible PIC construction at 0x0001029ef6f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ef6fc) */

void FUN_1029ef6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1029ef070(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1029ef710; end: 1029ef75f; -[_TtC29SCCameraStabilityServicesImpl26CameraStabilityMonitorBase addFixTypeIfNoneExist:] */

/* WARNING: Possible PIC construction at 0x0001029ef748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ef74c) */

void FUN_1029ef710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1029ef150(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1029ef760; end: 1029efa27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ef760(long param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ed6750;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112ed6750,auStack_90,0,0);
    uVar9 = *(ulong *)(param_1 + lVar1);
    if (uVar9 >> 0x3e == 0) {
      uVar3 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = uVar9 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar9) {
        uVar3 = uVar9;
      }
      func_0x000107c60480();
    }
    if (uVar3 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      uVar9 = *(ulong *)(param_1 + lVar1);
      uVar3 = uVar9 & 0xffffffffffffff8;
      if (uVar9 >> 0x3e == 0) {
        uVar11 = *(ulong *)(uVar3 + 0x10);
      }
      else {
        uVar11 = uVar3;
        if (0x7fffffffffffffff < uVar9) {
          uVar11 = uVar9;
        }
        func_0x000107c60480();
      }
      func_0x000107c61434(uVar9);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar12 = 0;
      while (uVar11 != uVar12) {
        if ((uVar9 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar3 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ef9a8);
            (*pcVar2)();
          }
          uVar4 = *(ulong *)(uVar9 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar12;
          func_0x0001029efcf0(uVar12,uVar9);
        }
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ef9a4);
          (*pcVar2)();
        }
        uVar10 = uVar12 + 1;
        uVar5 = uVar4;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        uVar12 = uVar12 + 1;
        if (uVar5 != 0) {
          puVar7 = puVar8;
          func_0x000107c61550();
          if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
             (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar8 >> 0x3e == 0) {
              puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar8) {
                puVar6 = puVar8;
              }
              func_0x000107c60480(puVar6);
            }
            puVar7 = (undefined *)0x0;
            func_0x0001029f4c4c(0,puVar6 + 1,1,puVar8);
          }
          uVar4 = (ulong)puVar7 & 0xffffffffffffff8;
          uVar12 = *(ulong *)(uVar4 + 0x10);
          puVar8 = puVar7;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar12) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar4 + 0x18));
            func_0x0001029f4c4c(puVar8,uVar12 + 1,1,puVar7);
            uVar4 = (ulong)puVar8 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar4 + 0x10) = uVar12 + 1;
          *(ulong *)(uVar4 + uVar12 * 8 + 0x20) = uVar5;
          uVar12 = uVar10;
        }
      }
      func_0x000107c6142c(uVar9);
      if ((ulong)puVar8 >> 0x3e == 0) {
        puVar7 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar7 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar8) {
          puVar7 = puVar8;
        }
        func_0x000107c60480();
      }
      if (puVar7 != (undefined *)0x0) {
        uVar9 = 0;
        do {
          if (((ulong)puVar8 & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ef9ac);
              (*pcVar2)();
            }
            uVar3 = *(ulong *)(puVar8 + uVar9 * 8 + 0x20);
            func_0x000107c615f0(uVar3);
          }
          else {
            uVar3 = uVar9;
            FUN_1029eff28(uVar9,puVar8);
          }
          if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ef9a0);
            (*pcVar2)();
          }
          puVar6 = (undefined *)(uVar9 + 1);
          FUN_1029ecb84(uVar3);
          func_0x000107c615e8(uVar3);
          uVar9 = uVar9 + 1;
        } while (puVar6 != puVar7);
      }
      func_0x000107c61170(param_1);
      func_0x000107c6142c(puVar8);
    }
  }
  return;
}



/* Entry: 1029efa28; end: 1029efa83; -[_TtC29SCCameraStabilityServicesImpl26CameraStabilityMonitorBase init] */

void FUN_1029efa28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraStabilityServicesImpl.CameraStabilityMonitorBase",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029efa54);
  (*pcVar1)();
}



/* Entry: 1029efa84; end: 1029efb3b; -[_TtC29SCCameraStabilityServicesImpl26CameraStabilityMonitorBase .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029efa84(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ed6750));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed6758));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed6760));
  return;
}



/* Entry: 1029efb3c; end: 1029efeaf;  */

ulong FUN_1029efb3c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029efc20);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029efc24);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c7878;
    func_0x000107c61168(PTR_PTR_1126c7878);
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
    puVar4 = PTR_PTR_1126c7878;
    func_0x000107c61168(PTR_PTR_1126c7878);
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
  FUN_1029efeb0(0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029efcf0);
  (*pcVar2)();
}



/* Entry: 1029efeb0; end: 1029eff1f;  */

void FUN_1029efeb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed6790 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c7878;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ed6790 = puVar1;
  return;
}



/* Entry: 1029eff20; end: 1029eff27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029eff20(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ed6750;
  if (lVar3 != 0) {
    func_0x000107c61428(lVar3 + _DAT_112ed6750,auStack_90,0,0);
    uVar10 = *(ulong *)(lVar3 + lVar1);
    if (uVar10 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar4 = uVar10;
      }
      func_0x000107c60480();
    }
    if (uVar4 == 0) {
      func_0x000107c61170(lVar3);
    }
    else {
      uVar10 = *(ulong *)(lVar3 + lVar1);
      uVar4 = uVar10 & 0xffffffffffffff8;
      if (uVar10 >> 0x3e == 0) {
        uVar12 = *(ulong *)(uVar4 + 0x10);
      }
      else {
        uVar12 = uVar4;
        if (0x7fffffffffffffff < uVar10) {
          uVar12 = uVar10;
        }
        func_0x000107c60480();
      }
      func_0x000107c61434(uVar10);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar13 = 0;
      while (uVar12 != uVar13) {
        if ((uVar10 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar4 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ef9a8);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar10 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar13;
          func_0x0001029efcf0(uVar13,uVar10);
        }
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ef9a4);
          (*pcVar2)();
        }
        uVar11 = uVar13 + 1;
        uVar6 = uVar5;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        uVar13 = uVar13 + 1;
        if (uVar6 != 0) {
          puVar8 = puVar9;
          func_0x000107c61550();
          if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) ||
             (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar9 >> 0x3e == 0) {
              puVar7 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar7 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar9) {
                puVar7 = puVar9;
              }
              func_0x000107c60480(puVar7);
            }
            puVar8 = (undefined *)0x0;
            func_0x0001029f4c4c(0,puVar7 + 1,1,puVar9);
          }
          uVar5 = (ulong)puVar8 & 0xffffffffffffff8;
          uVar13 = *(ulong *)(uVar5 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar13) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
            func_0x0001029f4c4c(puVar9,uVar13 + 1,1,puVar8);
            uVar5 = (ulong)puVar9 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar5 + 0x10) = uVar13 + 1;
          *(ulong *)(uVar5 + uVar13 * 8 + 0x20) = uVar6;
          uVar13 = uVar11;
        }
      }
      func_0x000107c6142c(uVar10);
      if ((ulong)puVar9 >> 0x3e == 0) {
        puVar8 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar8 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar9) {
          puVar8 = puVar9;
        }
        func_0x000107c60480();
      }
      if (puVar8 != (undefined *)0x0) {
        uVar10 = 0;
        do {
          if (((ulong)puVar9 & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ef9ac);
              (*pcVar2)();
            }
            uVar4 = *(ulong *)(puVar9 + uVar10 * 8 + 0x20);
            func_0x000107c615f0(uVar4);
          }
          else {
            uVar4 = uVar10;
            FUN_1029eff28(uVar10,puVar9);
          }
          if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ef9a0);
            (*pcVar2)();
          }
          puVar7 = (undefined *)(uVar10 + 1);
          FUN_1029ecb84(uVar4);
          func_0x000107c615e8(uVar4);
          uVar10 = uVar10 + 1;
        } while (puVar7 != puVar8);
      }
      func_0x000107c61170(lVar3);
      func_0x000107c6142c(puVar9);
    }
  }
  return;
}



/* Entry: 1029eff28; end: 1029f00d3;  */

ulong FUN_1029eff28(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029f0004);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029f0008);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
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
    uVar4 = param_1;
    func_0x000107c61494();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x6172656d61434353,0xeb00000000786946);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029f00d4);
  (*pcVar2)();
}



/* Entry: 1029f00d4; end: 1029f00e7;  */

void FUN_1029f00d4(long param_1,long param_2)

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



/* Entry: 1029f00e8; end: 1029f0137; -[SCCameraToSnappableStabilityMonitorImpl setNavigationType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f00e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed6798;
  func_0x000107c61428(param_1 + _DAT_112ed6798,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1029f0138; end: 1029f01af; -[SCCameraToSnappableStabilityMonitorImpl launchedFromPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f0138(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ed67a0);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1029f01b0; end: 1029f01bf; -[SCCameraToSnappableStabilityMonitorImpl cameraType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1029f01b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ed67a8);
}



/* Entry: 1029f01c0; end: 1029f01cf; -[SCCameraToSnappableStabilityMonitorImpl toSnappableCompleteObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f01c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ed67b0));
  return;
}



/* Entry: 1029f01d0; end: 1029f0ca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1029f01d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  
  func_0x000107c610f8();
  puVar12 = (undefined8 *)(unaff_x20 + _DAT_112ed67a0);
  *puVar12 = 0;
  puVar12[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ed67b8) = 2;
  lVar2 = _DAT_112ed67c0;
  lVar3 = 0;
  func_0x0001005d3d88();
  uVar15 = 1;
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar3);
  *(undefined8 *)(unaff_x20 + _DAT_112ed67c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed67d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed67d8) = 0;
  puVar12 = (undefined8 *)(unaff_x20 + _DAT_112ed67e0);
  *puVar12 = 0;
  *(undefined1 *)(puVar12 + 1) = 1;
  puVar12 = (undefined8 *)(unaff_x20 + _DAT_112ed67e8);
  *puVar12 = 0;
  *(undefined1 *)(puVar12 + 1) = 1;
  puVar12 = (undefined8 *)(unaff_x20 + _DAT_112ed67f0);
  *puVar12 = 0;
  *(undefined1 *)(puVar12 + 1) = 1;
  lVar2 = _DAT_112ed67f8;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112ed6800) = 0;
  puVar12 = (undefined8 *)(unaff_x20 + _DAT_112ed6808);
  uVar5 = 0x1f;
  func_0x0001000e48c0();
  *puVar12 = uVar5;
  puVar12[1] = uVar15;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6810) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6818) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6798) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ed67a8) = param_4;
  puVar4 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c615f0(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112ed67b0) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6820) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6828) = 0xffffffffffffffff;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6830) = 0xffffffffffffffff;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6838) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6840) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6848) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6850) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6858) = param_12;
  *(undefined **)(unaff_x20 + _DAT_112ed6750) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar2 = _DAT_112ed6758;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_10);
  func_0x000107c615f0(param_11);
  func_0x000107c615f0(param_12);
  pcVar6 = "CameraStabilityMonitorBase";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(unaff_x20 + lVar2) = pcVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6760) = 0;
  uVar5 = 0;
  func_0x0001000e96e0();
  puVar7 = auStack_88;
  uStack_80 = uVar5;
  func_0x000107c61154(puVar7,PTR_s_init_1125d9248);
  uVar5 = 1;
  if (param_5 != 1) {
    uVar5 = 2;
  }
  uVar15 = 0;
  if (param_5 != 0) {
    uVar15 = uVar5;
  }
  *(undefined8 *)(puVar7 + _DAT_112ed6820) = uVar15;
  uVar8 = 0;
  func_0x0001005d4854();
  uVar5 = uVar8;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar9 = puVar7;
  func_0x0001005d48f0();
  uVar10 = 0;
  func_0x0001005d4e8c(0,0x112ed6790,&PTR_PTR_1126c7878);
  uVar15 = uVar10;
  func_0x0001005d511c();
  puVar11 = puVar9;
  func_0x000107c5fe08(puVar9,uVar10,uVar15);
  func_0x000107c6142c(puVar9);
  uVar15 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0d8010);
  puVar12 = &uStack_98;
  uStack_98 = uVar5;
  uStack_90 = uVar8;
  func_0x000107c61154(puVar12,PTR_s_initWithTransitions_initialState_1125f2f40,puVar11,0,uVar15,0x32
                     );
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar7);
  uVar5 = *(undefined8 *)(puVar7 + _DAT_112ed67d0);
  *(undefined8 **)(puVar7 + _DAT_112ed67d0) = puVar12;
  func_0x000107c61170(uVar5);
  uVar8 = 0;
  func_0x0001005d5824();
  uVar15 = uVar8;
  func_0x000107c610f8();
  func_0x000107c61174();
  puVar9 = puVar7;
  func_0x0001005d5844();
  puVar11 = puVar9;
  func_0x000107c5fe08();
  func_0x000107c6142c(puVar9);
  uVar5 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0d8030);
  puVar12 = &uStack_a8;
  uStack_a8 = uVar15;
  uStack_a0 = uVar8;
  func_0x000107c61154(puVar12,PTR_s_initWithTransitions_initialState_1125f2f40,puVar11,0,uVar5,0x32)
  ;
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar7);
  uVar5 = *(undefined8 *)(puVar7 + _DAT_112ed67d8);
  *(undefined8 **)(puVar7 + _DAT_112ed67d8) = puVar12;
  func_0x000107c61170(uVar5);
  puVar4 = &UNK_110582268;
  puVar13 = puVar4;
  func_0x000107c613fc(&UNK_110582268,0x18,7);
  func_0x000107c61614(puVar13 + 0x10,puVar7);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_b8 = FUN_1029f3c7c;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0x42000000;
  puStack_c8 = (undefined *)0x1029f4528;
  puStack_c0 = &UNK_110582280;
  ppuVar14 = &puStack_d8;
  puStack_b0 = puVar13;
  func_0x000107c60bc4(ppuVar14);
  func_0x000107c61574(puStack_b0);
  uVar5 = param_9;
  func_0x000107c5c320(param_9);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar14);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  pcVar6 = 
  "init(with:timeoutDuration:navigationType:cameraType:devicePosition:captureDeviceManager:cameraHardwareConfiguration:hardwareRequestHandlerUpdatesObservable:captureSessionFixEventObservable:pageLoadMetricManager:hardwareResource:featureStartupEventBus:)"
  ;
  func_0x0001000c10c0(
                     "init(with:timeoutDuration:navigationType:cameraType:devicePosition:captureDeviceManager:cameraHardwareConfiguration:hardwareRequestHandlerUpdatesObservable:captureSessionFixEventObservable:pageLoadMetricManager:hardwareResource:featureStartupEventBus:)"
                     );
  func_0x000107c61180();
  uVar5 = param_8;
  func_0x000107c4da88(param_8);
  func_0x000107c61180();
  func_0x000107c615e8(pcVar6);
  func_0x000107c613fc(&UNK_110582268,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,puVar7);
  func_0x000107c61170(puVar7);
  pcStack_b8 = (code *)&UNK_100c80758;
  puStack_d8 = puVar1;
  uStack_d0 = 0x42000000;
  puStack_c8 = &UNK_100c80700;
  puStack_c0 = &UNK_1105822a8;
  ppuVar14 = &puStack_d8;
  puStack_b0 = puVar4;
  func_0x000107c60bc4(ppuVar14);
  func_0x000107c61574(puStack_b0);
  uVar15 = uVar5;
  func_0x000107c5c320(uVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar14);
  func_0x000107c61170(uVar5);
  func_0x000107c3e924(uVar15);
  func_0x000107c61170(puVar7);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c615e8(param_10);
  func_0x000107c615e8(param_11);
  func_0x000107c615e8(param_12);
  func_0x000107c61170(uVar15);
  return puVar7;
}



/* Entry: 1029f0ca4; end: 1029f0d93;  */

void FUN_1029f0ca4(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [32];
  
  pcVar1 = (code *)auStack_40;
  func_0x0001008b81c8();
  lVar2 = 0;
  func_0x0001005d3d88();
  lVar3 = param_2;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_2,1,lVar2);
  if ((int)lVar3 == 0) {
    if (SCARRY8(*(long *)(param_2 + 0x18),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029f0d1c);
      (*pcVar1)();
    }
    *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + 1;
  }
  (*pcVar1)(auStack_40,0);
  return;
}



/* Entry: 1029f0d94; end: 1029f0ea3;  */

void FUN_1029f0d94(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  pcVar1 = (code *)auStack_50;
  func_0x0001008b81c8();
  lVar2 = 0;
  func_0x0001005d3d88();
  lVar3 = param_2;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_2,1,lVar2);
  if ((int)lVar3 == 0) {
    func_0x000107c614cc(param_1,auStack_58,auStack_70);
    func_0x000107c60640();
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x28) = uStack_68;
    *(undefined8 *)(param_2 + 0x30) = uStack_60;
    func_0x000107c6142c(uVar4);
  }
  (*pcVar1)(auStack_50,0);
  return;
}



/* Entry: 1029f0ea4; end: 1029f0f63;  */

void FUN_1029f0ea4(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_70 [32];
  
  pcVar1 = (code *)auStack_70;
  pcVar4 = (code *)auStack_70;
  func_0x0001008b81c8();
  lVar2 = 0;
  func_0x0001005d3d88();
  pcVar6 = *(code **)(*(long *)(lVar2 + -8) + 0x30);
  lVar3 = param_2;
  (*pcVar6)(param_2,1,lVar2);
  if ((int)lVar3 == 0) {
    *(undefined1 *)(param_2 + 0x10) = 1;
  }
  lVar5 = 0;
  (*pcVar1)(auStack_70);
  func_0x0001008b81c8();
  lVar3 = lVar5;
  (*pcVar6)(lVar5,1,lVar2);
  if ((int)lVar3 == 0) {
    *(undefined8 *)(lVar5 + 0x38) = param_1;
  }
  (*pcVar4)(auStack_70,0);
  return;
}



/* Entry: 1029f0f64; end: 1029f0fef;  */

void FUN_1029f0f64(long param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x20))(param_2);
  return;
}



/* Entry: 1029f0ff0; end: 1029f100b; -[SCCameraToSnappableStabilityMonitorImpl initializeMonitor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f0ff0(long param_1)

{
  if (*(long *)(param_1 + _DAT_112ed67d0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd10b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112ed67d0),PTR_s_handleEvent__1125d1dd0,0);
    return;
  }
  return;
}



/* Entry: 1029f100c; end: 1029f106f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f100c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112ed67d0) != 0) {
    func_0x000107c445f0(*(long *)(unaff_x20 + _DAT_112ed67d0),param_2,1);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ed6848);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ed6808);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112ed6808))[1]);
  func_0x000107c5deb8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1029f1070; end: 1029f1113; -[SCCameraToSnappableStabilityMonitorImpl cameraViewDidLoad] */

void FUN_1029f1070(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029f100c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029f1114; end: 1029f113b; -[SCCameraToSnappableStabilityMonitorImpl cameraViewDidDisappear] */

void FUN_1029f1114(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001029f1098();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029f113c; end: 1029f117f;  */

/* WARNING: Possible PIC construction at 0x0001029f1158: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f113c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ed67d0);
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112ed67d8);
    if (lVar1 == 0) {
      return;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfd10b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_handleEvent__1125d1dd0,uVar2);
  return;
}



/* Entry: 1029f1180; end: 1029f11a7; -[SCCameraToSnappableStabilityMonitorImpl appDidBackground] */

void FUN_1029f1180(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029f113c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029f11a8; end: 1029f12e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f11a8(void)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long unaff_x20;
  byte *pbVar5;
  long lVar6;
  byte abStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112ed6868;
  func_0x0001000285a8(0x112ed6868,&UNK_10db00e60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar5 = abStack_60 + -extraout_x8;
  lVar2 = 0;
  func_0x0001005d3d88();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = _DAT_112ed67c0;
  lVar4 = (long)pbVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_112ed67c0,auStack_58,0,0);
  func_0x0001008caa18(unaff_x20 + lVar1,pbVar5);
  pbVar3 = pbVar5;
  (**(code **)(lVar6 + 0x30))(pbVar5,1,lVar2);
  if ((int)pbVar3 == 1) {
    func_0x0001008b7578(pbVar5);
  }
  else {
    func_0x0001008caa68(pbVar5,lVar4);
    if ((((*(char *)(lVar4 + *(int *)(lVar2 + 0x58)) != '\x01') ||
         ((*(byte *)(lVar4 + *(int *)(lVar2 + 0x5c)) & 1) == 0)) &&
        ((*(byte *)(lVar4 + *(int *)(lVar2 + 100)) & 1) == 0)) &&
       ((*(byte *)(lVar4 + *(int *)(lVar2 + 0x60)) & 1) == 0)) {
      FUN_1029f12e8();
    }
    func_0x0001008caaac(lVar4);
  }
  return;
}



/* Entry: 1029f12e8; end: 1029f16ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f12e8(double param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  long alStack_120 [6];
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar3 = 0x112ed6868;
  puVar7 = &UNK_10db00e60;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_f0 + -extraout_x8;
  lVar3 = 0;
  func_0x0001005d3d88();
  lVar17 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_c8 = lVar10;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  pcVar2 = (code *)auStack_90;
  func_0x0001008b81c8();
  pcVar18 = *(code **)(lVar17 + 0x30);
  puVar5 = puVar7;
  (*pcVar18)(puVar7,1,lVar3);
  if ((int)puVar5 == 0) {
    puVar7[*(int *)(lVar3 + 0x60)] = 1;
    func_0x000107c5eea0(lVar10);
    func_0x000107c5ee68(puVar7 + *(int *)(lVar3 + 0x2c));
    (**(code **)(lVar13 + 8))(lVar10,lVar4);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029f16e8);
      (*pcVar2)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029f16ec);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029f16f0);
      (*pcVar2)();
    }
    *(long *)(puVar7 + *(int *)(lVar3 + 0x38)) = (long)param_1;
  }
  (*pcVar2)(auStack_90,0);
  lVar4 = _DAT_112ed67c0;
  func_0x000107c61428(unaff_x20 + _DAT_112ed67c0,auStack_90,0,0);
  func_0x0001008caa18(unaff_x20 + lVar4,puVar9);
  puVar6 = puVar9;
  (*pcVar18)(puVar9,1,lVar3);
  lVar4 = lStack_c8;
  if ((int)puVar6 == 1) {
    func_0x0001008b7578(puVar9);
  }
  else {
    func_0x0001008caa68(puVar9,lStack_c8);
    uVar8 = 3;
    if (*(char *)(lVar4 + *(int *)(lVar3 + 0x58)) != '\0') {
      uVar8 = 1;
    }
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ed67b0);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    func_0x000107c4d664(uVar11);
    func_0x000107c61170(puVar7);
    lVar13 = _DAT_112ed6798;
    uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112ed6810);
    puVar12 = (undefined8 *)(unaff_x20 + _DAT_112ed6798);
    puVar9 = auStack_a8;
    func_0x000107c61428(puVar12,puVar9,0,0);
    uStack_d0 = *(undefined8 *)(unaff_x20 + lVar13);
    uStack_d8 = *(undefined8 *)(unaff_x20 + _DAT_112ed67a8);
    uStack_e0 = *(undefined8 *)(unaff_x20 + _DAT_112ed6820);
    uStack_e8 = *(undefined8 *)(unaff_x20 + _DAT_112ed6828);
    uVar11 = *(undefined8 *)(lVar4 + *(int *)(lVar3 + 0x30));
    uVar14 = *(undefined8 *)(lVar4 + *(int *)(lVar3 + 0x40));
    uVar15 = *(undefined8 *)(lVar4 + *(int *)(lVar3 + 0x44));
    func_0x000100c6b228();
    if (puVar9 == (undefined1 *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar9);
    }
    *(undefined8 **)(lVar10 + -0x18) = puVar12;
    *(undefined8 *)(lVar10 + -0x10) = uVar8;
    *(undefined8 *)(lVar10 + -0x28) = uVar14;
    *(undefined8 *)(lVar10 + -0x20) = uVar15;
    *(undefined8 *)(lVar10 + -0x30) = uVar11;
    func_0x000107c4bf34(uVar16);
    func_0x000107c61170();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed67e0);
    if (*(char *)(puVar1 + 1) != '\x01') {
      uVar11 = *puVar1;
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar8 = *puVar12;
      func_0x000107c61174(uVar8);
      func_0x000100069b5c(uVar11);
      func_0x000107c61170(uVar8);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
    }
    func_0x000100c6c3f8();
    func_0x0001008caaac(lStack_c8);
  }
  return;
}



/* Entry: 1029f16f0; end: 1029f1717; -[SCCameraToSnappableStabilityMonitorImpl appDidTerminate] */

void FUN_1029f16f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029f11a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029f1718; end: 1029f1a33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f1718(double param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [24];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar10 = auStack_a8 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0x112ed6868;
  func_0x0001000285a8(0x112ed6868,&UNK_10db00e60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)puVar10 - extraout_x8_00;
  lVar4 = 0;
  func_0x0001005d3d88();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar3 = _DAT_112ed67c0;
  lVar9 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_112ed67c0,auStack_88,0,0);
  func_0x0001008caa18(unaff_x20 + lVar3,lVar11);
  pcVar14 = *(code **)(lVar12 + 0x30);
  lVar3 = lVar11;
  (*pcVar14)(lVar11,1,lVar4);
  if ((int)lVar3 == 1) {
    func_0x0001008b7578(lVar11);
  }
  else {
    lVar3 = lVar9;
    func_0x0001008caa68(lVar11);
    if ((((*(char *)(lVar9 + *(int *)(lVar4 + 0x58)) != '\x01') ||
         ((*(byte *)(lVar9 + *(int *)(lVar4 + 0x5c)) & 1) == 0)) &&
        ((*(byte *)(lVar9 + *(int *)(lVar4 + 100)) & 1) == 0)) &&
       ((*(byte *)(lVar9 + *(int *)(lVar4 + 0x60)) & 1) == 0)) {
      pcVar5 = (code *)auStack_a8;
      func_0x0001008b81c8();
      lVar11 = lVar3;
      (*pcVar14)(lVar3,1,lVar4);
      if ((int)lVar11 == 0) {
        *(undefined1 *)(lVar3 + *(int *)(lVar4 + 100)) = 1;
        func_0x000107c5eea0(puVar10);
        func_0x000107c5ee68(lVar3 + *(int *)(lVar4 + 0x2c));
        (**(code **)(lVar13 + 8))(puVar10,lVar2);
        param_1 = param_1 * 1000.0;
        if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1029f1a2c);
          (*pcVar14)();
        }
        if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1029f1a30);
          (*pcVar14)();
        }
        if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1029f1a34);
          (*pcVar14)();
        }
        *(long *)(lVar3 + *(int *)(lVar4 + 0x38)) = (long)param_1;
      }
      (*pcVar5)(auStack_a8,0);
      puVar6 = param_2;
      FUN_1029f24dc();
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed67e0);
      if (*(char *)(puVar1 + 1) != '\x01') {
        uVar8 = *puVar1;
        func_0x0001000298f0();
        func_0x000107c61428();
        uVar7 = *puVar6;
        func_0x000107c61174(uVar7);
        func_0x000100069b5c(uVar8);
        func_0x000107c61170(uVar7);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
      }
      if (param_2 == (undefined8 *)0x2) {
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ed6858);
        uVar7 = 0xd000000000000016;
        func_0x000107c5fadc(0xd000000000000016,0x800000010f0d8390);
        func_0x000107c548e8(uVar8);
        func_0x000107c61170(uVar7);
      }
      func_0x000100c6c3f8();
    }
    func_0x0001008caaac(lVar9);
  }
  return;
}



/* Entry: 1029f1a34; end: 1029f1a87; -[SCCameraToSnappableStabilityMonitorImpl permissionsNotGranted] */

/* WARNING: Possible PIC construction at 0x0001029f1a74: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f1a34(long param_1)

{
  long lVar1;
  
  func_0x000107c61174();
  FUN_1029f1718(2);
  lVar1 = *(long *)(param_1 + _DAT_112ed67d8);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c445f0();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029f1a88; end: 1029f1d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f1a88(double param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  byte abStack_b0 [8];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [24];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  pbVar10 = abStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112ed6868;
  func_0x0001000285a8(0x112ed6868,&UNK_10db00e60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)pbVar10 - extraout_x8_00;
  lVar4 = 0;
  func_0x0001005d3d88();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar3 = _DAT_112ed67c0;
  lVar8 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_112ed67c0,auStack_88,0,0);
  func_0x0001008caa18(unaff_x20 + lVar3,lVar11);
  pcVar14 = *(code **)(lVar12 + 0x30);
  lVar3 = lVar11;
  (*pcVar14)(lVar11,1,lVar4);
  if ((int)lVar3 == 1) {
    func_0x0001008b7578(lVar11);
  }
  else {
    lVar3 = lVar8;
    func_0x0001008caa68(lVar11);
    if ((*(byte *)(lVar8 + *(int *)(lVar4 + 0x6c)) & 1) == 0) {
      pcVar5 = (code *)auStack_a8;
      func_0x0001008b81c8();
      lVar11 = lVar3;
      (*pcVar14)(lVar3,1,lVar4);
      if ((int)lVar11 == 0) {
        *(undefined1 *)(lVar3 + *(int *)(lVar4 + 0x6c)) = 1;
        func_0x000107c5eea0(pbVar10);
        func_0x000107c5ee68(lVar3 + *(int *)(lVar4 + 0x2c));
        (**(code **)(lVar13 + 8))(pbVar10,lVar2);
        param_1 = param_1 * 1000.0;
        if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1029f1d1c);
          (*pcVar14)();
        }
        if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1029f1d20);
          (*pcVar14)();
        }
        if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1029f1d24);
          (*pcVar14)();
        }
        *(long *)(lVar3 + *(int *)(lVar4 + 0x44)) = (long)param_1;
      }
      puVar6 = (undefined8 *)auStack_a8;
      (*pcVar5)(puVar6,0);
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed67e8);
      if (*(char *)(puVar1 + 1) != '\x01') {
        uVar9 = *puVar1;
        func_0x0001000298f0();
        func_0x000107c61428();
        uVar7 = *puVar6;
        func_0x000107c61174(uVar7);
        func_0x000100069b5c(uVar9);
        func_0x000107c61170(uVar7);
        func_0x0001008caaac(lVar8);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        return;
      }
    }
    func_0x0001008caaac(lVar8);
  }
  return;
}



/* Entry: 1029f1d24; end: 1029f1d4b; -[SCCameraToSnappableStabilityMonitorImpl cameraViewDidStartCamera] */

void FUN_1029f1d24(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029f1a88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029f1d4c; end: 1029f1e9f;  */

void FUN_1029f1d4c(double param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_80 [32];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  pcVar1 = (code *)auStack_80;
  func_0x0001008b81c8();
  lVar3 = 0;
  func_0x0001005d3d88();
  lVar4 = param_3;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(param_3,1,lVar3);
  if ((int)lVar4 == 0) {
    *(undefined1 *)(param_3 + *(int *)(lVar3 + 0x70)) = 1;
    func_0x000107c5eea0(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee68(param_3 + *(int *)(lVar3 + 0x2c));
    (**(code **)(lVar5 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029f1e98);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029f1e9c);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029f1ea0);
      (*pcVar1)();
    }
    *(long *)(param_3 + *(int *)(lVar3 + 0x48)) = (long)param_1;
  }
  (*pcVar1)(auStack_80,0);
  return;
}



/* Entry: 1029f1ea0; end: 1029f1ec7; -[SCCameraToSnappableStabilityMonitorImpl cameraViewDidSkipStartCamera] */

void FUN_1029f1ea0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029f1d4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029f1ec8; end: 1029f201b;  */

void FUN_1029f1ec8(double param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_80 [32];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  pcVar1 = (code *)auStack_80;
  func_0x0001008b81c8();
  lVar3 = 0;
  func_0x0001005d3d88();
  lVar4 = param_3;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(param_3,1,lVar3);
  if ((int)lVar4 == 0) {
    *(undefined1 *)(param_3 + *(int *)(lVar3 + 0x78)) = 1;
    func_0x000107c5eea0(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee68(param_3 + *(int *)(lVar3 + 0x2c));
    (**(code **)(lVar5 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029f2014);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029f2018);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029f201c);
      (*pcVar1)();
    }
    *(long *)(param_3 + *(int *)(lVar3 + 0x4c)) = (long)param_1;
  }
  (*pcVar1)(auStack_80,0);
  return;
}



/* Entry: 1029f201c; end: 1029f2043; -[SCCameraToSnappableStabilityMonitorImpl cameraViewHasValidToken] */

void FUN_1029f201c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029f1ec8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029f2044; end: 1029f2197;  */

void FUN_1029f2044(double param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_80 [32];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  pcVar1 = (code *)auStack_80;
  func_0x0001008b81c8();
  lVar3 = 0;
  func_0x0001005d3d88();
  lVar4 = param_3;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(param_3,1,lVar3);
  if ((int)lVar4 == 0) {
    *(undefined1 *)(param_3 + *(int *)(lVar3 + 0x80)) = 1;
    func_0x000107c5eea0(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee68(param_3 + *(int *)(lVar3 + 0x2c));
    (**(code **)(lVar5 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029f2190);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029f2194);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029f2198);
      (*pcVar1)();
    }
    *(long *)(param_3 + *(int *)(lVar3 + 0x54)) = (long)param_1;
  }
  (*pcVar1)(auStack_80,0);
  return;
}



/* Entry: 1029f2198; end: 1029f21bf; -[SCCameraToSnappableStabilityMonitorImpl cameraViewWillRequestCameraPermission] */

void FUN_1029f2198(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029f2044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029f21c0; end: 1029f22b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1029f21c0(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  
  func_0x000107c602fc(0x17);
  func_0x000107c6142c(0xe000000000000000);
  lVar2 = *(long *)(param_1 + _DAT_112ed67a8);
  func_0x0001008b71f4();
  func_0x000107c61180();
  if (lVar2 == 0) {
    param_2 = 0x800000010f0d8370;
    lVar3 = -0x2fffffffffffffed;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
  }
  func_0x000107c5fb78(lVar3,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5fb78(0x6c6c617265766f3a,0xe800000000000000);
  auVar1._8_8_ = 0xed00003a656c6261;
  auVar1._0_8_ = 0x7070616e732d6f74;
  return auVar1;
}



/* Entry: 1029f22b4; end: 1029f23db;  */

/* WARNING: Possible PIC construction at 0x0001029f22dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029f22e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f22b4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_112ed6810));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(unaff_x20 + _DAT_112ed67a0 + 8));
  return;
}



/* Entry: 1029f23dc; end: 1029f24db; -[SCCameraToSnappableStabilityMonitorImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029f240c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029f2410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f23dc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed6810));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ed67a0 + 8))
  ;
  return;
}



/* Entry: 1029f24dc; end: 1029f27d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f24dc(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  long alStack_e0 [6];
  undefined8 auStack_b0 [4];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0x112ed6868;
  func_0x0001000285a8(0x112ed6868,&UNK_10db00e60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)auStack_b0 - extraout_x8;
  lVar3 = 0;
  func_0x0001005d3d88();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = _DAT_112ed67c0;
  lVar8 = lVar7 - extraout_x12;
  func_0x000107c61428(unaff_x20 + _DAT_112ed67c0,auStack_78,0,0);
  func_0x0001008caa18(unaff_x20 + lVar2,lVar5);
  pcVar11 = *(code **)(lVar9 + 0x30);
  lVar9 = lVar5;
  (*pcVar11)(lVar5,1,lVar3);
  if ((int)lVar9 == 1) {
    func_0x0001008b7578(lVar5);
  }
  else {
    auStack_b0[3] = param_1;
    func_0x0001008caa68(lVar5,lVar8);
    if (*(long *)(unaff_x20 + _DAT_112ed67c8) != 0) {
      func_0x000107c498f8();
    }
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ed67b0);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    func_0x000107c4d664(uVar6);
    func_0x000107c61170(puVar4);
    lVar9 = _DAT_112ed6798;
    auStack_b0[2] = *(undefined8 *)(unaff_x20 + _DAT_112ed6810);
    func_0x000107c61428(unaff_x20 + _DAT_112ed6798,auStack_90,0,0);
    auStack_b0[1] = *(undefined8 *)(unaff_x20 + lVar9);
    auStack_b0[0] = *(undefined8 *)(unaff_x20 + _DAT_112ed67a8);
    lVar9 = unaff_x20 + lVar2;
    lVar5 = 1;
    (*pcVar11)(lVar9,1,lVar3);
    if ((int)lVar9 == 0) {
      lVar5 = lVar7;
      FUN_1029f42ac(unaff_x20 + lVar2);
      if ((*(char *)(lVar7 + *(int *)(lVar3 + 0x58)) == '\x01') &&
         (*(char *)(lVar7 + *(int *)(lVar3 + 0x5c)) == '\x01')) {
        func_0x0001008caaac();
        lVar9 = lVar7;
      }
      else if (((*(byte *)(lVar7 + *(int *)(lVar3 + 100)) & 1) == 0) &&
              (*(char *)(lVar7 + *(int *)(lVar3 + 0x60)) != '\x01')) {
        func_0x0001008caaac();
        lVar9 = lVar7;
      }
      else {
        func_0x0001008caaac();
        lVar9 = lVar7;
      }
    }
    uVar10 = *(undefined8 *)(lVar8 + *(int *)(lVar3 + 0x30));
    uVar12 = *(undefined8 *)(lVar8 + *(int *)(lVar3 + 0x40));
    uVar6 = *(undefined8 *)(lVar8 + *(int *)(lVar3 + 0x44));
    func_0x000100c6b228();
    if (lVar5 == 0) {
      lVar9 = 0;
    }
    else {
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar5);
    }
    uVar1 = auStack_b0[3];
    *(long *)(lVar8 + -0x18) = lVar9;
    *(undefined8 *)(lVar8 + -0x10) = uVar1;
    *(undefined8 *)(lVar8 + -0x28) = uVar12;
    *(undefined8 *)(lVar8 + -0x20) = uVar6;
    *(undefined8 *)(lVar8 + -0x30) = uVar10;
    func_0x000107c4bf38(auStack_b0[2]);
    func_0x000107c61170(lVar9);
    func_0x0001008caaac(lVar8);
  }
  return;
}



/* Entry: 1029f27d8; end: 1029f27ff; -[SCCameraToSnappableStabilityMonitorImpl failure] */

void FUN_1029f27d8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029f12e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029f2800; end: 1029f2c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f2800(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  double dVar18;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [16];
  undefined1 auStack_a0 [48];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar11 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = (undefined8 *)0x112ed6868;
  func_0x0001000285a8(0x112ed6868,&UNK_10db00e60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(puVar3[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar11 - extraout_x8_00;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  pcVar16 = FUN_1029f42a4;
  func_0x00010029cef4(FUN_1029f42a4,auStack_c0);
  func_0x000107c61170(uVar4);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed67e0);
  *puVar1 = pcVar16;
  *(undefined1 *)(puVar1 + 1) = 0;
  func_0x0001008b7090(&DAT_112ed67f0,0x19,0x646e65722d69753a,0xea00000000007265);
  func_0x0001008b7214(lVar12);
  lVar5 = 0;
  func_0x0001005d3d88();
  lVar13 = *(long *)(lVar5 + -8);
  (**(code **)(lVar13 + 0x38))(lVar12,0,1,lVar5);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed67c0);
  func_0x000107c61428(puVar1,auStack_c0,0x21,0);
  func_0x0001008b7318(lVar12,puVar1);
  func_0x000107c614a8(auStack_c0);
  func_0x0001008b7578(lVar12);
  func_0x000107c61428(puVar1,auStack_c0,0x21,0);
  pcVar16 = *(code **)(lVar13 + 0x30);
  puVar6 = puVar1;
  (*pcVar16)(puVar1,1,lVar5);
  if ((int)puVar6 == 0) {
    puVar6 = (undefined8 *)(unaff_x20 + _DAT_112ed67a0);
    func_0x000107c61428(puVar6,auStack_f0,0,0);
    uVar14 = puVar1[1];
    uVar4 = puVar6[1];
    uVar17 = *puVar6;
    puVar1[1] = puVar6[1];
    *puVar1 = uVar17;
    func_0x000107c61434(uVar4);
    func_0x000107c6142c(uVar14);
  }
  func_0x000107c614a8(auStack_c0);
  if (*(long *)(unaff_x20 + _DAT_112ed67d8) != 0) {
    func_0x000107c445f0();
  }
  *(undefined8 *)(unaff_x20 + _DAT_112ed6828) = *(undefined8 *)(unaff_x20 + _DAT_112ed6830);
  puVar7 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x000107c61168();
  dVar18 = *(double *)(unaff_x20 + _DAT_112ed6818);
  func_0x000107c51930();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed67c8);
  *(undefined **)(unaff_x20 + _DAT_112ed67c8) = puVar7;
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed6810);
  func_0x000107c61428(unaff_x20 + _DAT_112ed6798,auStack_a0,0,0);
  func_0x000107c4bf30(uVar4);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112ed6848);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed6808);
  puVar10 = (undefined1 *)((undefined8 *)(unaff_x20 + _DAT_112ed6808))[1];
  func_0x000107c5fadc(uVar4);
  func_0x000107c5d95c(uVar14);
  func_0x000107c61170(uVar4);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed67f0);
  if (*(char *)(puVar1 + 1) != '\x01') {
    uVar14 = *puVar1;
    puVar10 = auStack_d8;
    func_0x000107c61428(puVar3,puVar10,0,0);
    uVar4 = *puVar3;
    func_0x000107c61174(uVar4);
    func_0x000100069b5c(uVar14);
    func_0x000107c61170(uVar4);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
  }
  pcVar8 = (code *)auStack_c0;
  func_0x0001008b81c8();
  puVar9 = puVar10;
  (*pcVar16)(puVar10,1,lVar5);
  if ((int)puVar9 == 0) {
    puVar10[*(int *)(lVar5 + 0x5c)] = 1;
    func_0x000107c5eea0(puVar11);
    func_0x000107c5ee68(puVar10 + *(int *)(lVar5 + 0x2c));
    (**(code **)(lVar15 + 8))(puVar11,lVar2);
    dVar18 = dVar18 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar18)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x1029f2c48);
      (*pcVar16)();
    }
    if (dVar18 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x1029f2c4c);
      (*pcVar16)();
    }
    if (9.223372036854776e+18 <= dVar18) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x1029f2c50);
      (*pcVar16)();
    }
    *(long *)(puVar10 + *(int *)(lVar5 + 0x34)) = (long)dVar18;
  }
  (*pcVar8)(auStack_c0,0);
  return;
}



/* Entry: 1029f2c50; end: 1029f2c77; -[SCCameraToSnappableStabilityMonitorImpl attemptWithPreRenderedUi] */

void FUN_1029f2c50(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029f2800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029f2c78; end: 1029f2dc7;  */

void FUN_1029f2c78(double param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_80 [32];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  pcVar1 = (code *)auStack_80;
  func_0x0001008b81c8();
  lVar3 = 0;
  func_0x0001005d3d88();
  lVar4 = param_3;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(param_3,1,lVar3);
  if ((int)lVar4 == 0) {
    *(undefined1 *)(param_3 + *(int *)(lVar3 + 0x58)) = 0;
    func_0x000107c5eea0(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee68(param_3 + *(int *)(lVar3 + 0x2c));
    (**(code **)(lVar5 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029f2dc0);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029f2dc4);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029f2dc8);
      (*pcVar1)();
    }
    *(long *)(param_3 + *(int *)(lVar3 + 0x30)) = (long)param_1;
  }
  (*pcVar1)(auStack_80,0);
  return;
}



/* Entry: 1029f2dc8; end: 1029f2def; -[SCCameraToSnappableStabilityMonitorImpl awaitNewFrame] */

void FUN_1029f2dc8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029f2c78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029f2df0; end: 1029f2e1b; -[SCCameraToSnappableStabilityMonitorImpl navigationCancelIfNotComplete] */

void FUN_1029f2df0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029f2e1c(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029f2e1c; end: 1029f2f6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f2e1c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  byte abStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112ed6868;
  func_0x0001000285a8(0x112ed6868,&UNK_10db00e60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar5 = abStack_70 + -extraout_x8;
  lVar2 = 0;
  func_0x0001005d3d88();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = _DAT_112ed67c0;
  lVar4 = (long)pbVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_112ed67c0,auStack_68,0,0);
  func_0x0001008caa18(unaff_x20 + lVar1,pbVar5);
  pbVar3 = pbVar5;
  (**(code **)(lVar6 + 0x30))(pbVar5,1,lVar2);
  if ((int)pbVar3 == 1) {
    func_0x0001008b7578(pbVar5);
  }
  else {
    func_0x0001008caa68(pbVar5,lVar4);
    if ((((*(char *)(lVar4 + *(int *)(lVar2 + 0x58)) != '\x01') ||
         ((*(byte *)(lVar4 + *(int *)(lVar2 + 0x5c)) & 1) == 0)) &&
        ((*(byte *)(lVar4 + *(int *)(lVar2 + 100)) & 1) == 0)) &&
       ((*(byte *)(lVar4 + *(int *)(lVar2 + 0x60)) & 1) == 0)) {
      FUN_1029f1718(param_1);
    }
    func_0x0001008caaac(lVar4);
  }
  return;
}



/* Entry: 1029f2f6c; end: 1029f2f97; -[SCCameraToSnappableStabilityMonitorImpl backgroundCancelIfNotComplete] */

void FUN_1029f2f6c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029f2e1c(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029f2f98; end: 1029f2fff;  */

/* WARNING: Possible PIC construction at 0x0001029f2fc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029f2fcc) */
/* WARNING: Removing unreachable block (ram,0x0001029f2fd0) */

void FUN_1029f2f98(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112de6720;
    plVar5 = (long *)&UNK_10db00fa0;
  }
  else {
    puVar3 = (ulong *)0x112de6120;
    plVar5 = (long *)&UNK_10d9b0cc0;
    unaff_x30 = 0x1029f2fcc;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 1029f3000; end: 1029f3013;  */

void FUN_1029f3000(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed69d8 == (undefined *)0x0 || ((ulong)puRam0000000112ed69d8 & 1) != 0) {
    puVar1 = &UNK_10e9371ee;
    func_0x000107c61518(&UNK_10e9371ee,0x18,0,0);
    puRam0000000112ed69d8 = puVar1;
  }
  return;
}



/* Entry: 1029f3014; end: 1029f3413;  */

undefined * FUN_1029f3014(undefined *param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_2 == 0) {
    func_0x000107c615e8();
    puVar5 = PTR___swiftEmptySetSingleton_11034f1d8;
  }
  else {
    func_0x0001000285a8(0x112ed69c8,&UNK_10db00f80);
    puVar5 = param_1;
    func_0x000107c602e4(param_1,param_2);
    puStack_68 = puVar5;
    func_0x000107c60288();
    puVar7 = param_1;
    func_0x000107c602ac();
    if (puVar7 != (undefined *)0x0) {
      uVar6 = 0;
      func_0x0001005d4e8c(0,0x112ed6790,&PTR_PTR_1126c7878);
      puVar2 = PTR___syXlN_11034f1a0;
      do {
        puStack_78 = puVar7;
        func_0x000107c6147c(&uStack_70,&puStack_78,puVar2 + 8,uVar6,7);
        uVar3 = uStack_70;
        if (*(ulong *)(puVar5 + 0x18) <= *(ulong *)(puVar5 + 0x10)) {
          FUN_1029f3564(*(ulong *)(puVar5 + 0x10) + 1);
          puVar5 = puStack_68;
        }
        puVar7 = *(undefined **)(puVar5 + 0x28);
        func_0x000107c60114();
        uVar11 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        uVar10 = (ulong)puVar7 & (uVar11 ^ 0xffffffffffffffff);
        uVar8 = uVar10 >> 6;
        uVar9 = -1L << (uVar10 & 0x3f) &
                (*(ulong *)(puVar5 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          bVar1 = false;
          uVar9 = 0x3f - uVar11 >> 6;
          do {
            uVar10 = uVar8 + 1;
            if ((uVar10 == uVar9) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1029f3210);
              (*pcVar4)();
            }
            uVar8 = 0;
            if (uVar10 != uVar9) {
              uVar8 = uVar10;
            }
            bVar1 = (bool)(uVar10 == uVar9 | bVar1);
          } while (*(ulong *)(puVar5 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
          uVar9 = ~*(ulong *)(puVar5 + uVar8 * 8 + 0x38);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 << 6;
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar10 & 0x7fffffffffffffc0;
        }
        uVar8 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar5 + uVar8 + 0x38) = 1L << (uVar9 & 0x3f) | *(ulong *)(puVar5 + uVar8 + 0x38)
        ;
        *(undefined8 *)(*(long *)(puVar5 + 0x30) + uVar9 * 8) = uVar3;
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        func_0x000107c602ac();
      } while (puVar7 != (undefined *)0x0);
    }
    func_0x000107c61574(param_1);
  }
  return puVar5;
}



/* Entry: 1029f3414; end: 1029f3563;  */

void FUN_1029f3414(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  
  func_0x0001000285a8(0x112ed69c8,&UNK_10db00f80);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c602dc();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      func_0x000107c610b8(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    if (uVar5 == 0) goto LAB_1029f34f0;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x000107c61174();
        if (uVar5 != 0) break;
LAB_1029f34f0:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1029f3564);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_1029f353c;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_1029f353c:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1029f3564; end: 1029f378f;  */

void FUN_1029f3564(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar11 = 0x112ed69c8;
  func_0x0001000285a8(0x112ed69c8,&UNK_10db00f80);
  lVar4 = lVar12;
  func_0x000107c602e0(lVar12,lVar1,1,uVar11);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_1029f3760:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar15 = uVar15 & *puVar13;
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1029f378c);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          uVar15 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
          if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
            *puVar13 = -1L << (uVar15 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar13,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar12 + 0x10) = 0;
          goto LAB_1029f3760;
        }
        uVar15 = puVar13[lVar14];
        lVar7 = lVar7 + 1;
      } while (uVar15 == 0);
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar7;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + (LZCOUNT(uVar6) | lVar14 << 6) * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60114();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1029f3790);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar11;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Entry: 1029f3790; end: 1029f380f;  */

void FUN_1029f3790(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x28);
  func_0x000107c60114();
  lVar1 = param_2 + 0x38;
  uVar3 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  func_0x000107c60274(uVar2,lVar1,~uVar3);
  uVar3 = uVar2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar3) = 1L << (uVar2 & 0x3f) | *(ulong *)(lVar1 + uVar3);
  *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar2 * 8) = param_1;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  return;
}



/* Entry: 1029f3810; end: 1029f3c7b;  */

void FUN_1029f3810(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *unaff_x20;
  long lVar16;
  long lVar17;
  
  func_0x0001000285a8(0x112ed69c0,&UNK_10db00f70);
  lVar16 = *unaff_x20;
  lVar10 = lVar16;
  func_0x000107c6048c();
  if (*(long *)(lVar16 + 0x10) != 0) {
    lVar1 = lVar16 + 0x40;
    uVar11 = (1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar10 != lVar16 || lVar1 + uVar11 * 8 <= lVar10 + 0x40U) {
      func_0x000107c610b8(lVar10 + 0x40U,lVar1,uVar11 << 3);
    }
    lVar17 = 0;
    *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar16 + 0x10);
    uVar12 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
      uVar11 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar11 = uVar11 & *(ulong *)(lVar16 + 0x40);
    if (uVar11 == 0) goto LAB_1029f38f0;
    do {
      uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      while( true ) {
        uVar13 = LZCOUNT(uVar13) | lVar17 << 6;
        lVar15 = uVar13 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar16 + 0x30) + lVar15);
        uVar6 = puVar2[1];
        lVar14 = uVar13 * 0x18;
        puVar3 = (undefined8 *)(*(long *)(lVar16 + 0x38) + lVar14);
        uVar5 = *puVar3;
        uVar7 = puVar3[1];
        puVar4 = (undefined8 *)(*(long *)(lVar10 + 0x30) + lVar15);
        uVar8 = *(undefined1 *)(puVar3 + 2);
        *puVar4 = *puVar2;
        puVar4[1] = uVar6;
        puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x38) + lVar14);
        *puVar2 = uVar5;
        puVar2[1] = uVar7;
        *(undefined1 *)(puVar2 + 2) = uVar8;
        func_0x000107c61434();
        func_0x000100c6b680(uVar5,uVar7,uVar8);
        if (uVar11 != 0) break;
LAB_1029f38f0:
        do {
          lVar14 = lVar17 + 1;
          if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1029f39a8);
            (*pcVar9)();
          }
          if ((long)(uVar12 + 0x3f >> 6) <= lVar14) goto LAB_1029f397c;
          uVar11 = *(ulong *)(lVar1 + lVar14 * 8);
          lVar17 = lVar17 + 1;
        } while (uVar11 == 0);
        uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
        lVar17 = lVar14;
      }
    } while( true );
  }
LAB_1029f397c:
  func_0x000107c61574(lVar16);
  *unaff_x20 = lVar10;
  return;
}



/* Entry: 1029f3c7c; end: 1029f3c83;  */

void FUN_1029f3c7c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  long unaff_x20;
  code *pcVar15;
  undefined *puVar16;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar14 = 0;
    puVar16 = (undefined *)0x0;
    pcVar15 = (code *)0x0;
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar3 = &UNK_110582510;
    func_0x000107c613fc(&UNK_110582510,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar2;
    puVar16 = &UNK_110582538;
    func_0x000107c613fc(&UNK_110582538,0x20,7);
    *(undefined8 *)(puVar16 + 0x10) = 0x1029f42fc;
    *(undefined **)(puVar16 + 0x18) = puVar3;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = (code *)0x1029f4518;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_10006eb60;
    puStack_a0 = &UNK_110582550;
    ppuVar4 = &puStack_b8;
    puStack_90 = puVar16;
    func_0x000107c60bc4();
    puVar16 = puStack_90;
    func_0x000107c61174();
    func_0x000107c61574(puVar16);
    puVar5 = &UNK_110582588;
    func_0x000107c613fc(&UNK_110582588,0x18,7);
    *(long *)(puVar5 + 0x10) = lVar2;
    puVar16 = &UNK_1105825b0;
    func_0x000107c613fc(&UNK_1105825b0,0x20,7);
    *(undefined8 *)(puVar16 + 0x10) = 0x1029f4304;
    *(undefined **)(puVar16 + 0x18) = puVar5;
    pcStack_98 = (code *)0x1029f451c;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_10006eb60;
    puStack_a0 = &UNK_1105825c8;
    ppuVar6 = &puStack_b8;
    puStack_90 = puVar16;
    func_0x000107c60bc4(ppuVar6);
    puVar16 = puStack_90;
    func_0x000107c61174();
    func_0x000107c61574(puVar16);
    puVar7 = &UNK_110582600;
    func_0x000107c613fc(&UNK_110582600,0x18,7);
    *(long *)(puVar7 + 0x10) = lVar2;
    puVar16 = &UNK_110582628;
    func_0x000107c613fc(&UNK_110582628,0x20,7);
    *(undefined8 *)(puVar16 + 0x10) = 0x1029f430c;
    *(undefined **)(puVar16 + 0x18) = puVar7;
    pcStack_98 = (code *)0x1029f450c;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_101e77518;
    puStack_a0 = &UNK_110582640;
    ppuVar8 = &puStack_b8;
    puStack_90 = puVar16;
    func_0x000107c60bc4(ppuVar8);
    puVar16 = puStack_90;
    func_0x000107c61174();
    func_0x000107c61574(puVar16);
    puVar16 = &UNK_110582678;
    func_0x000107c613fc(&UNK_110582678,0x18,7);
    *(long *)(puVar16 + 0x10) = lVar2;
    puVar9 = &UNK_1105826a0;
    func_0x000107c613fc(&UNK_1105826a0,0x20,7);
    *(undefined8 *)(puVar9 + 0x10) = 0x1029f4314;
    *(undefined **)(puVar9 + 0x18) = puVar16;
    pcStack_98 = (code *)0x1029f4520;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_10006eb60;
    puStack_a0 = &UNK_1105826b8;
    ppuVar10 = &puStack_b8;
    puStack_90 = puVar9;
    func_0x000107c60bc4();
    puVar16 = puStack_90;
    func_0x000107c61174();
    func_0x000107c61574(puVar16);
    puVar16 = &UNK_1105826f0;
    func_0x000107c613fc(&UNK_1105826f0,0x18,7);
    *(long *)(puVar16 + 0x10) = lVar2;
    puVar9 = &UNK_110582718;
    func_0x000107c613fc(&UNK_110582718,0x20,7);
    *(undefined8 *)(puVar9 + 0x10) = 0x1029f431c;
    *(undefined **)(puVar9 + 0x18) = puVar16;
    pcStack_98 = FUN_1029f4324;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_1029f0f64;
    puStack_a0 = &UNK_110582730;
    ppuVar11 = &puStack_b8;
    puStack_90 = puVar9;
    func_0x000107c60bc4(ppuVar11);
    puVar9 = puStack_90;
    func_0x000107c61174();
    func_0x000107c61574(puVar9);
    puVar9 = &UNK_110582768;
    func_0x000107c613fc(&UNK_110582768,0x18,7);
    *(long *)(puVar9 + 0x10) = lVar2;
    puVar12 = &UNK_110582790;
    func_0x000107c613fc(&UNK_110582790,0x20,7);
    pcVar15 = FUN_1029f4344;
    *(code **)(puVar12 + 0x10) = FUN_1029f4344;
    *(undefined **)(puVar12 + 0x18) = puVar9;
    pcStack_98 = (code *)0x1029f4524;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_10006eb60;
    puStack_a0 = &UNK_1105827a8;
    ppuVar13 = &puStack_b8;
    puStack_90 = puVar12;
    func_0x000107c60bc4();
    puVar12 = puStack_90;
    func_0x000107c61174();
    func_0x000107c61574(puVar12);
    func_0x000107c4c5f8(param_1);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c60bd0(ppuVar11);
    uVar14 = 0x1029f431c;
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(lVar2);
  }
  func_0x000100d16abc();
  func_0x000100d16abc(uVar14,puVar16);
  func_0x000100d16abc(pcVar15,puVar9);
  return;
}



/* Entry: 1029f3c84; end: 1029f3e2b;  */

long * FUN_1029f3c84(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar4;
    *(char *)(param_1 + 2) = (char)param_2[2];
    lVar7 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar7;
    lVar7 = param_2[6];
    param_1[5] = param_2[5];
    param_1[6] = lVar7;
    param_1[7] = param_2[7];
    *(char *)(param_1 + 8) = (char)param_2[8];
    iVar2 = *(int *)(param_3 + 0x2c);
    lVar3 = 0;
    func_0x000107c5eea4();
    pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
    func_0x000107c61434(lVar4);
    func_0x000107c61434(lVar7);
    (*pcVar6)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
    iVar2 = *(int *)(param_3 + 0x34);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    *(undefined8 *)((long)param_1 + (long)iVar2) = *(undefined8 *)((long)param_2 + (long)iVar2);
    iVar2 = *(int *)(param_3 + 0x3c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    *(undefined8 *)((long)param_1 + (long)iVar2) = *(undefined8 *)((long)param_2 + (long)iVar2);
    iVar2 = *(int *)(param_3 + 0x44);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
    *(undefined8 *)((long)param_1 + (long)iVar2) = *(undefined8 *)((long)param_2 + (long)iVar2);
    iVar2 = *(int *)(param_3 + 0x4c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x48)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
    *(undefined8 *)((long)param_1 + (long)iVar2) = *(undefined8 *)((long)param_2 + (long)iVar2);
    iVar2 = *(int *)(param_3 + 0x54);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x50)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x50));
    *(undefined8 *)((long)param_1 + (long)iVar2) = *(undefined8 *)((long)param_2 + (long)iVar2);
    iVar2 = *(int *)(param_3 + 0x5c);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x58)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x58));
    *(undefined1 *)((long)param_1 + (long)iVar2) = *(undefined1 *)((long)param_2 + (long)iVar2);
    iVar2 = *(int *)(param_3 + 100);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x60)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x60));
    *(undefined1 *)((long)param_1 + (long)iVar2) = *(undefined1 *)((long)param_2 + (long)iVar2);
    iVar2 = *(int *)(param_3 + 0x6c);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x68)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x68));
    *(undefined1 *)((long)param_1 + (long)iVar2) = *(undefined1 *)((long)param_2 + (long)iVar2);
    iVar2 = *(int *)(param_3 + 0x74);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x70)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x70));
    *(undefined1 *)((long)param_1 + (long)iVar2) = *(undefined1 *)((long)param_2 + (long)iVar2);
    iVar2 = *(int *)(param_3 + 0x7c);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x78)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x78));
    *(undefined1 *)((long)param_1 + (long)iVar2) = *(undefined1 *)((long)param_2 + (long)iVar2);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x80)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x80));
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1029f3e2c; end: 1029f42a3;  */

undefined8 * FUN_1029f3e2c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar3 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  iVar1 = *(int *)(param_3 + 0x2c);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x48)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x50)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x50));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x54)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x54));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x58)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x58));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x5c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x5c));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x60)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x60));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 100)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 100));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x68)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x68));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x6c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x6c));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x70)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x70));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x74)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x74));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x78)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x78));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x7c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x7c));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x80)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x80));
  return param_1;
}



/* Entry: 1029f42a4; end: 1029f42ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1029f42a4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c602fc(0x17);
  func_0x000107c6142c(0xe000000000000000);
  lVar2 = *(long *)(lVar2 + _DAT_112ed67a8);
  func_0x0001008b71f4();
  func_0x000107c61180();
  if (lVar2 == 0) {
    param_2 = 0x800000010f0d8370;
    lVar3 = -0x2fffffffffffffed;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
  }
  func_0x000107c5fb78(lVar3,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5fb78(0x6c6c617265766f3a,0xe800000000000000);
  auVar1._8_8_ = 0xed00003a656c6261;
  auVar1._0_8_ = 0x7070616e732d6f74;
  return auVar1;
}



/* Entry: 1029f42ac; end: 1029f42ef;  */

undefined8 FUN_1029f42ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001005d3d88();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1029f42f0; end: 1029f4323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f42f0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  *(undefined1 *)(lVar1 + _DAT_112ed6800) = 1;
  if (*(long *)(lVar1 + _DAT_112ed6828) != -1) {
    return;
  }
  *(undefined8 *)(lVar1 + _DAT_112ed6828) = 2;
  *(undefined8 *)(lVar1 + _DAT_112ed6830) = 2;
  return;
}



/* Entry: 1029f4324; end: 1029f4343;  */

void FUN_1029f4324(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1029f4344; end: 1029f434b;  */

void FUN_1029f4344(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [32];
  
  pcVar1 = (code *)auStack_40;
  func_0x0001008b81c8();
  lVar2 = 0;
  func_0x0001005d3d88();
  lVar3 = param_2;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_2,1,lVar2);
  if ((int)lVar3 == 0) {
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  (*pcVar1)(auStack_40,0);
  return;
}



/* Entry: 1029f434c; end: 1029f43e7;  */

undefined8 * FUN_1029f434c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000100c6b680(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 1029f43e8; end: 1029f442b;  */

undefined8 * FUN_1029f43e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000100c6b6a4(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1029f442c; end: 1029f453b;  */

int FUN_1029f442c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1029f453c; end: 1029f457b;  */

void FUN_1029f453c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  func_0x0001000e98d8(param_1,param_2);
  return;
}



/* Entry: 1029f457c; end: 1029f45c7; -[SCCameraVideoStreamStabilityMonitorImpl sampleBufferDropped:] */

/* WARNING: Possible PIC construction at 0x0001029f45b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029f45b4) */

void FUN_1029f457c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1029f5044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1029f45c8; end: 1029f464b; -[SCCameraVideoStreamStabilityMonitorImpl lensesDidPresent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f45c8(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61174();
  func_0x00010006c804();
  lVar1 = param_1 + _DAT_112ed69e0;
  func_0x000107c61428(lVar1,auStack_48,1,0);
  if (*(long *)(lVar1 + 0x80) == 0) {
    *(undefined8 *)(lVar1 + 0x80) = 1;
  }
  func_0x000100070bfc();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1029f464c; end: 1029f478f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f464c(ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  if (param_2 != 0) {
    uVar3 = *(ulong *)(unaff_x20 + _DAT_112ed69f0);
    uVar4 = ((ulong *)(unaff_x20 + _DAT_112ed69f0))[1];
    if ((param_1 != uVar3 || param_2 != uVar4) &&
       (uVar5 = param_1, func_0x000107c605b8(param_1,param_2,uVar3,uVar4,0), (uVar5 & 1) == 0)) {
      func_0x000107c61434(param_2);
      func_0x00010006c804();
      lVar1 = unaff_x20 + _DAT_112ed69e0;
      func_0x000107c61428(lVar1,auStack_58,0x21,0);
      *(undefined8 *)(lVar1 + 0x80) = 2;
      uVar5 = *(ulong *)(lVar1 + 0x88);
      uVar3 = uVar5;
      func_0x000107c61558();
      *(ulong *)(lVar1 + 0x88) = uVar5;
      uVar4 = uVar5;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
        func_0x0001000d182c(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
        *(ulong *)(lVar1 + 0x88) = uVar4;
      }
      uVar3 = *(ulong *)(uVar4 + 0x10);
      uVar5 = uVar4;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
        uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        func_0x0001000d182c(uVar5,uVar3 + 1,1,uVar4);
      }
      *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
      lVar2 = uVar5 + uVar3 * 0x10;
      *(ulong *)(lVar2 + 0x20) = param_1;
      *(ulong *)(lVar2 + 0x28) = param_2;
      *(ulong *)(lVar1 + 0x88) = uVar5;
      func_0x000107c614a8(auStack_58);
      func_0x000100070bfc();
    }
  }
  return;
}



/* Entry: 1029f4790; end: 1029f47fb; -[SCCameraVideoStreamStabilityMonitorImpl lensSelected:] */

void FUN_1029f4790(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_1029f464c(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1029f47fc; end: 1029f48cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f47fc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [144];
  
  func_0x000107c6071c();
  func_0x00010006c804();
  func_0x0001000e9b3c(auStack_d0);
  lVar1 = unaff_x20 + _DAT_112ed69e0;
  func_0x000107c61428(lVar1,auStack_e8,0x21,0);
  func_0x00010034e2c8(auStack_d0,lVar1);
  *(undefined8 *)(lVar1 + 0x58) = param_1;
  *(double *)(lVar1 + 0x40) = *(double *)(unaff_x20 + _DAT_112ed6a38) / 1000.0;
  func_0x000107c614a8(auStack_e8);
  *(undefined1 *)(unaff_x20 + _DAT_112ed69e8) = 1;
  func_0x00010076b29c();
  func_0x000100070bfc();
  return;
}



/* Entry: 1029f48cc; end: 1029f49c3; -[SCCameraVideoStreamStabilityMonitorImpl resetFrameData] */

void FUN_1029f48cc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029f47fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029f49c4; end: 1029f49ff; -[SCCameraVideoStreamStabilityMonitorImpl getObservableFor:] */

void FUN_1029f49c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x0001029f48f4(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1029f4a00; end: 1029f4a5f; -[SCCameraVideoStreamStabilityMonitorImpl init] */

void FUN_1029f4a00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraStabilityServicesImpl.CameraVideoStreamStabilityMonitorImpl",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029f4a2c);
  (*pcVar1)();
}



/* Entry: 1029f4a60; end: 1029f4b1b; -[SCCameraVideoStreamStabilityMonitorImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029f4a8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029f4ab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029f4ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029f4af0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029f4ad4) */
/* WARNING: Removing unreachable block (ram,0x0001029f4ab4) */
/* WARNING: Removing unreachable block (ram,0x0001029f4a90) */
/* WARNING: Removing unreachable block (ram,0x0001029f4af4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029f4a60(long param_1)

{
  func_0x0001029f5108(param_1 + _DAT_112ed69e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed6a30));
  return;
}



/* Entry: 1029f4b1c; end: 1029f4d7b;  */

ulong FUN_1029f4b1c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029f4c4c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1029f4d7c(uVar2,uVar4,FUN_1029f2f98);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029f4c48);
      (*pcVar1)();
    }
    FUN_1029f4dfc(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1029f4d7c; end: 1029f4dfb;  */

undefined * FUN_1029f4d7c(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}


