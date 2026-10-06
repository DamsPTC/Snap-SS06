/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b011d8; end: 102b01227;  */

undefined8 FUN_102b011d8(void)

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



/* Entry: 102b01228; end: 102b01273;  */

undefined1  [16] FUN_102b01228(void)

{
  return ZEXT816(0x11059adc8);
}



/* Entry: 102b01274; end: 102b015e7;  */

long FUN_102b01274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126abf58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar4 = 0x656d61436e69616d;
  func_0x000107c5fadc(0x656d61436e69616d,0xef65706f63536172);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar3);
  uVar4 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efbb870);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar3);
  uVar4 = 0x7672655364416b73;
  func_0x000107c5fadc(0x7672655364416b73,0xec00000073656369);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f0edd50);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_5);
    *(undefined **)(unaff_x20 + 0x40) = puVar2;
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b015e8);
  (*pcVar1)();
}



/* Entry: 102b015e8; end: 102b01653;  */

void FUN_102b015e8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 102b01654; end: 102b016a3;  */

undefined8 FUN_102b01654(void)

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



/* Entry: 102b016a4; end: 102b016ef;  */

undefined1  [16] FUN_102b016a4(void)

{
  return ZEXT816(0x11059ae68);
}



/* Entry: 102b016f0; end: 102b01a5b;  */

long FUN_102b016f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126abf60;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar4 = 0x656d61436e69616d;
  func_0x000107c5fadc(0x656d61436e69616d,0xef65706f63536172);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0ed970);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f07dc00);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f0edd90);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0eddc0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_5);
    *(undefined **)(unaff_x20 + 0x40) = puVar2;
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b01a5c);
  (*pcVar1)();
}



/* Entry: 102b01a5c; end: 102b01ac7;  */

void FUN_102b01a5c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 102b01ac8; end: 102b01b17;  */

undefined8 FUN_102b01ac8(void)

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



/* Entry: 102b01b18; end: 102b01bc7;  */

undefined1  [16] FUN_102b01b18(void)

{
  return ZEXT816(0x11059af08);
}



/* Entry: 102b01bc8; end: 102b01c9f;  */

void FUN_102b01bc8(void)

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



/* Entry: 102b01ca0; end: 102b01cab;  */

void FUN_102b01ca0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 102b01cac; end: 102b01cd7; +[SCCameraAutoEnableFlashExperiment treatmentCOFKey] */

void FUN_102b01cac(void)

{
  func_0x000107c5fadc(0xd000000000000026,0x800000010f0eeaa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b01cd8; end: 102b01ceb;  */

bool FUN_102b01cd8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102b01cec; end: 102b01fd7;  */

void FUN_102b01cec(void)

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
  uVar1 = 0xec0000006873616c;
  uVar4 = 0x46206c616d726f4e;
  if (bVar3 != 3) {
    uVar1 = 0xeb00000000422f41;
    uVar4 = 0x2074636570736552;
  }
  uVar2 = 0xea00000000006873;
  uVar5 = 0x616c4620676e6952;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  if (bVar3 != 0) {
    uVar6 = 0xd000000000000010;
  }
  uVar1 = 0xe700000000000000;
  if (bVar3 != 0) {
    uVar1 = 0x800000010f0eead0;
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



/* Entry: 102b01fd8; end: 102b02143;  */

void FUN_102b01fd8(undefined8 *param_1)

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
  uVar1 = 0xec0000006873616c;
  uVar4 = 0x46206c616d726f4e;
  if (bVar3 != 3) {
    uVar1 = 0xeb00000000422f41;
    uVar4 = 0x2074636570736552;
  }
  uVar2 = 0xea00000000006873;
  uVar5 = 0x616c4620676e6952;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  if (bVar3 != 0) {
    uVar6 = 0xd000000000000010;
  }
  uVar1 = 0xe700000000000000;
  if (bVar3 != 0) {
    uVar1 = 0x800000010f0eead0;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar6;
  }
  *param_1 = uVar5;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102b02144; end: 102b02183;  */

void FUN_102b02144(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112eef838;
  func_0x0001000285a8(0x112eef838,&UNK_10db1f2d0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102b02184; end: 102b0221b; +[SCCameraAutoEnableFlashExperiment treatmentWithCircumstanceEngine:] */

ulong FUN_102b02184(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112eef840,auStack_38,0,0);
  uVar1 = (ulong)bRam0000000112eef840;
  if (bRam0000000112eef840 < 2) {
    if (bRam0000000112eef840 != 0) {
      uVar1 = 1;
    }
  }
  else if (bRam0000000112eef840 == 2) {
    uVar1 = 2;
  }
  else if (bRam0000000112eef840 == 3) {
    uVar1 = 3;
  }
  else {
    uVar1 = param_3;
    func_0x000107c615f0(param_3);
    FUN_102b02388();
    func_0x000107c615e8(param_3);
  }
  return uVar1;
}



/* Entry: 102b0221c; end: 102b022a3; +[SCCameraAutoEnableFlashExperiment exposeWithCircumstanceEngine:] */

/* WARNING: Possible PIC construction at 0x000102b0228c: Changing call to branch */

void FUN_102b0221c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f0eeaa0);
  lVar2 = param_3;
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (lVar2 != 0) {
    func_0x000107c42c04(lVar2);
    param_3 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 102b022a4; end: 102b022df; -[SCCameraAutoEnableFlashExperiment init] */

void FUN_102b022a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_102b02454();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b022e0; end: 102b0230f;  */

void FUN_102b022e0(void)

{
  FUN_102b02454();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b02310; end: 102b02323; -[SCCameraAutoEnableFlashExperiment .cxx_destruct] */

void FUN_102b02310(void)

{
  return;
}



/* Entry: 102b02324; end: 102b02387;  */

ulong FUN_102b02324(undefined8 param_1,undefined8 param_2)

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



/* Entry: 102b02388; end: 102b02453;  */

ulong FUN_102b02388(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f0eeaa0);
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (param_1 != 0) {
    uVar2 = param_1;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
    uVar3 = uVar2;
    func_0x000107c4a924();
    if ((int)uVar3 == 1) {
      uVar3 = uVar2;
      func_0x000107c49804();
      func_0x000107c61170(uVar2);
      if ((int)uVar3 - 1U < 3) {
        return uVar3 & 0xffffffff;
      }
      return 0;
    }
    func_0x000107c61170(uVar2);
  }
  return 0;
}



/* Entry: 102b02454; end: 102b02473;  */

void FUN_102b02454(void)

{
  func_0x000107c61168(&PTR_PTR_112888aa8);
  return;
}



/* Entry: 102b02474; end: 102b02477;  */

void FUN_102b02474(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eef880 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1f2e0;
  func_0x000107c61520(&UNK_10db1f2e0,&UNK_11059b278);
  puRam0000000112eef880 = puVar1;
  return;
}



/* Entry: 102b02478; end: 102b024b7;  */

void FUN_102b02478(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eef880 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1f2e0;
  func_0x000107c61520(&UNK_10db1f2e0,&UNK_11059b278);
  puRam0000000112eef880 = puVar1;
  return;
}



/* Entry: 102b024b8; end: 102b024bb;  */

void FUN_102b024b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eef888 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1f380;
  func_0x000107c61520(&UNK_10db1f380,&UNK_11059b328);
  puRam0000000112eef888 = puVar1;
  return;
}



/* Entry: 102b024bc; end: 102b024fb;  */

void FUN_102b024bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eef888 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1f380;
  func_0x000107c61520(&UNK_10db1f380,&UNK_11059b328);
  puRam0000000112eef888 = puVar1;
  return;
}



/* Entry: 102b024fc; end: 102b02527;  */

void FUN_102b024fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102b02528();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000102b02568();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102b02528; end: 102b025a7;  */

void FUN_102b02528(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eef890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1f448;
  func_0x000107c61520(&UNK_10db1f448,&UNK_11059b328);
  puRam0000000112eef890 = puVar1;
  return;
}



/* Entry: 102b025a8; end: 102b025ab;  */

void FUN_102b025a8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112eef8a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eef8a8;
  func_0x00010002969c(0x112eef8a8,&UNK_10db1f440);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112eef8a0 = puVar2;
  return;
}



/* Entry: 102b025ac; end: 102b025fb;  */

void FUN_102b025ac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112eef8a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eef8a8;
  func_0x00010002969c(0x112eef8a8,&UNK_10db1f440);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112eef8a0 = puVar2;
  return;
}



/* Entry: 102b025fc; end: 102b0277f;  */

undefined1  [16] FUN_102b025fc(void)

{
  return ZEXT816(0x11059b278);
}



/* Entry: 102b02780; end: 102b027cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b02780(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eef9b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b027cc; end: 102b028df; -[_TtC26SCCaptureServiceScopeProxy36SCCaptureServiceScopeBuilderServices buildWithActionObservable:imageStrategyEvents:videoStrategyEvents:recordingFileURLGenerator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b027cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *apuStack_68 [2];
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126abd80;
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174();
  func_0x000107c45514(puVar1,param_2,param_3,param_4,param_5,param_6);
  apuStack_68[0] = puVar1;
  func_0x00010008a7c8(&uStack_58,apuStack_68);
  func_0x000100083b20(apuStack_68);
  func_0x000107c61574(uStack_58);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(apuStack_68[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102b028e0; end: 102b0290f;  */

void FUN_102b028e0(void)

{
  func_0x0001005c5df4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b02910; end: 102b0293f; -[_TtC26SCCaptureServiceScopeProxy36SCCaptureServiceScopeBuilderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b02910(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eef9b0));
  return;
}



/* Entry: 102b02940; end: 102b029b7; +[SCCameraContextShortcutConfigurationExperiment contextShortcutActionEnabledWithCircumstanceEngine:] */

undefined8 FUN_102b02940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f0eeb80);
  uVar2 = param_3;
  func_0x000107c3ebd4(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102b029b8; end: 102b029d7;  */

void FUN_102b029b8(void)

{
  func_0x000107c61168(&PTR_PTR_112888c18);
  return;
}



/* Entry: 102b029d8; end: 102b02a13; -[SCCameraContextShortcutConfigurationExperiment init] */

void FUN_102b029d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_102b029b8();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b02a14; end: 102b02a43;  */

void FUN_102b02a14(void)

{
  FUN_102b029b8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b02a44; end: 102b02a6f; +[SCZoomCaptureControl SCZoomFactorsUsageMetricZoomCaptureControlInteractionsCountKey] */

void FUN_102b02a44(void)

{
  func_0x000107c5fadc(0xd000000000000028,0x800000010f0eebb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b02a70; end: 102b02ab3; -[SCZoomCaptureControl interactionCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b02a70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eefa20;
  func_0x000107c61428(param_1 + _DAT_112eefa20,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 102b02ab4; end: 102b02b03; -[SCZoomCaptureControl setInteractionCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b02ab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eefa20;
  func_0x000107c61428(param_1 + _DAT_112eefa20,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 102b02b04; end: 102b02b13; -[SCZoomCaptureControl captureControl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b02b04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eefa28));
  return;
}



/* Entry: 102b02b14; end: 102b02b83;  */

void FUN_102b02b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c610f8();
  FUN_102b02b84(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 102b02b84; end: 102b034cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102b02b84(undefined4 param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined1 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  long lVar16;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000107c614f0();
  lVar11 = _DAT_112eefa30;
  func_0x000107c61614(unaff_x20 + _DAT_112eefa30,0);
  lVar9 = _DAT_112eefa38;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar9) = puVar3;
  lVar9 = _DAT_112eefa40;
  *(undefined8 *)(unaff_x20 + _DAT_112eefa40) = 0;
  *(long *)(unaff_x20 + _DAT_112eefa48) = param_2;
  func_0x000107c61604(unaff_x20 + lVar11,param_3);
  *(ulong *)(unaff_x20 + _DAT_112eefa50) = param_4;
  *(long *)(unaff_x20 + _DAT_112eefa58) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112eefa60) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112eefa68) = param_7;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  lVar11 = param_5;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar11 == 0) {
    uVar14 = 0;
  }
  else {
    lVar4 = lVar11;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar11);
    uVar14 = *(undefined1 *)(lVar4 + _DAT_113075c48);
    func_0x000107c61170(lVar4);
  }
  lVar11 = _DAT_112eefa70;
  *(undefined1 *)(unaff_x20 + _DAT_112eefa70) = uVar14;
  lVar4 = param_5;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    uVar14 = 0;
  }
  else {
    lVar16 = lVar4;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    uVar14 = *(undefined1 *)(lVar16 + _DAT_113075c50);
    func_0x000107c61170(lVar16);
  }
  *(undefined1 *)(unaff_x20 + _DAT_112eefa78) = uVar14;
  lVar4 = param_5;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    uVar15 = 0;
  }
  else {
    lVar16 = lVar4;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    uVar15 = *(undefined8 *)(lVar16 + _DAT_113075c58);
    func_0x000107c61174(uVar15);
    func_0x000107c61170(lVar16);
  }
  uVar5 = *(undefined8 *)(unaff_x20 + lVar9);
  *(undefined8 *)(unaff_x20 + lVar9) = uVar15;
  func_0x000107c61170(uVar5);
  *(undefined1 *)(unaff_x20 + _DAT_112eefa80) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112eefa88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eefa20) = 0;
  uVar7 = param_4;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar7 != 0) {
    uVar6 = uVar7;
    func_0x000107c5ea1c();
    func_0x000107c61180();
    func_0x000107c615e8(uVar7);
    uVar8 = uVar6;
    func_0x000107c4dfbc();
    func_0x000107c61180();
    func_0x000107c615e8(uVar6);
    uVar7 = 0;
    FUN_102b0480c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar8;
    func_0x000107c5fc54(uVar8,uVar7);
    func_0x000107c61170(uVar8);
    if (uVar6 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar8 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar8 = uVar6;
      }
      func_0x000107c60480();
    }
    if (uVar8 != 0) {
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102b034c8);
          (*pcVar2)();
        }
        lVar9 = *(long *)(uVar6 + 0x20);
        func_0x000107c61174();
      }
      else {
        lVar9 = 0;
        uVar7 = uVar6;
        func_0x0001002ec9a0(0,uVar6);
      }
      func_0x000107c6142c(uVar6);
      goto LAB_102b02ed0;
    }
    func_0x000107c6142c(uVar6);
  }
  uVar7 = 0x112d38c88;
  FUN_102b0480c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  lVar9 = 1;
  func_0x000107c60110();
LAB_102b02ed0:
  lVar4 = lVar9;
  func_0x000107c5fde8();
  uVar1 = 0x42480000;
  if (*(char *)(unaff_x20 + lVar11) == '\0') {
    uVar1 = 0x42c80000;
  }
  *(undefined4 *)(unaff_x20 + _DAT_112eefa90) = param_1;
  *(undefined4 *)(unaff_x20 + _DAT_112eefa98) = uVar1;
  func_0x000102b046f8();
  lVar11 = _DAT_112eefaa0;
  *(long *)(unaff_x20 + _DAT_112eefaa0) = lVar4;
  func_0x0001061a2f2c();
  func_0x000107c61180();
  if (lVar4 == 0) {
    uVar7 = 0xe400000000000000;
    lVar16 = 0x6d6f6f5a;
  }
  else {
    lVar16 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
  }
  FUN_102b0480c(0,0x112eefaa8,&PTR__OBJC_CLASS___AVCaptureSlider_1126abf78);
  uVar15 = *(undefined8 *)(unaff_x20 + lVar11);
  func_0x000107c61434(uVar15);
  func_0x000107c5ff88(lVar16,uVar7,0x65706f6353,0xe500000000000000,uVar15);
  *(long *)(unaff_x20 + _DAT_112eefa28) = lVar16;
  uVar15 = 0x112da0e88;
  func_0x0001000285a8(0x112da0e88,&UNK_10d943f20);
  func_0x000107c61538();
  func_0x000107c61174(lVar16);
  func_0x000107c5ff84(uVar15);
  func_0x000107c61170(lVar16);
  puVar10 = &stack0xffffffffffffff60;
  func_0x000107c61154(puVar10,PTR_s_init_1125d9248);
  uVar15 = *(undefined8 *)(puVar10 + _DAT_112eefa28);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  lVar11 = param_2;
  func_0x000107c4f7c0();
  func_0x000107c61180();
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b034cc);
    (*pcVar2)();
  }
  puVar3 = &UNK_11059b650;
  func_0x000107c613fc(&UNK_11059b650,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,puVar10);
  func_0x000107c61174();
  func_0x000107c6157c(puVar3);
  func_0x000107c5ff80(lVar11,FUN_102b0484c,puVar3);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(lVar11);
  func_0x000107c61578(puVar3,2);
  lVar11 = *(long *)(puVar10 + _DAT_112eefa58);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar11 != 0) {
    lVar4 = lVar11;
    func_0x000107c4c238();
    func_0x000107c61180();
    func_0x000107c615e8(lVar11);
    lVar11 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar11 != 0) {
      lVar16 = lVar11;
      func_0x000107c5bce8();
      func_0x000107c61180();
      func_0x000107c615e8(lVar11);
      if (lVar16 != 0) {
        puVar12 = &UNK_11059b650;
        func_0x000107c613fc(&UNK_11059b650,0x18,7);
        func_0x000107c61614(puVar12 + 0x10,puVar10);
        pcStack_70 = (code *)0x102b04ae8;
        puStack_90 = puVar3;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_100c3d3dc;
        puStack_78 = &UNK_11059b6e0;
        ppuVar13 = &puStack_90;
        puStack_68 = puVar12;
        func_0x000107c60bc4(ppuVar13);
        func_0x000107c61574(puStack_68);
        lVar11 = lVar16;
        func_0x000107c5c320(lVar16);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar13);
        func_0x000107c61170(lVar16);
        func_0x000107c3e924(lVar11);
        func_0x000107c61170(lVar11);
      }
    }
    lVar11 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar11 != 0) {
      lVar16 = lVar11;
      func_0x000107c41948();
      func_0x000107c61180();
      func_0x000107c615e8(lVar11);
      if (lVar16 != 0) {
        lVar11 = lVar16;
        func_0x000107c5d58c();
        func_0x000107c61180();
        func_0x000107c615e8(lVar16);
        if (lVar11 != 0) {
          puVar12 = &UNK_11059b650;
          func_0x000107c613fc(&UNK_11059b650,0x18,7);
          func_0x000107c61614(puVar12 + 0x10,puVar10);
          pcStack_70 = (code *)0x102b04abc;
          puStack_90 = puVar3;
          uStack_88 = 0x42000000;
          puStack_80 = &UNK_100c421ac;
          puStack_78 = &UNK_11059b6b8;
          ppuVar13 = &puStack_90;
          puStack_68 = puVar12;
          func_0x000107c60bc4(ppuVar13);
          func_0x000107c61574(puStack_68);
          lVar16 = lVar11;
          func_0x000107c5c320(lVar11);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar13);
          func_0x000107c61170(lVar11);
          func_0x000107c3e924(lVar16);
          func_0x000107c61170(lVar16);
        }
      }
    }
    lVar11 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar11 != 0) {
      lVar16 = lVar11;
      func_0x000107c52094();
      func_0x000107c61180();
      func_0x000107c615e8(lVar11);
      if (lVar16 != 0) {
        lVar11 = lVar16;
        func_0x000107c5d58c();
        func_0x000107c61180();
        func_0x000107c615e8(lVar16);
        if (lVar11 != 0) {
          puVar12 = &UNK_11059b650;
          func_0x000107c613fc(&UNK_11059b650,0x18,7);
          func_0x000107c61614(puVar12 + 0x10,puVar10);
          pcStack_70 = FUN_102b04a90;
          puStack_90 = puVar3;
          uStack_88 = 0x42000000;
          puStack_80 = &UNK_100c3c32c;
          puStack_78 = &UNK_11059b690;
          ppuVar13 = &puStack_90;
          puStack_68 = puVar12;
          func_0x000107c60bc4(ppuVar13);
          func_0x000107c61574(puStack_68);
          lVar16 = lVar11;
          func_0x000107c5c320(lVar11);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar13);
          func_0x000107c61170(lVar11);
          func_0x000107c3e924(lVar16);
          func_0x000107c61170(lVar16);
        }
      }
    }
    func_0x000107c61170(lVar4);
  }
  puVar12 = &UNK_11059b650;
  func_0x000107c613fc(&UNK_11059b650,0x18,7);
  func_0x000107c61614(puVar12 + 0x10,puVar10);
  func_0x000107c61170(puVar10);
  pcStack_70 = FUN_102b0496c;
  puStack_90 = puVar3;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_11059b668;
  ppuVar13 = &puStack_90;
  puStack_68 = puVar12;
  func_0x000107c60bc4(ppuVar13);
  func_0x000107c61574(puStack_68);
  func_0x000107c4e524(param_2);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(lVar9);
  return puVar10;
}



/* Entry: 102b034cc; end: 102b03577; -[SCZoomCaptureControl initWithPerformer:cameraHardwareServicesAPI:captureDeviceManager:cameraHardwareResource:cameraUserActionLogger:zoomFactorsFeature:] */

void FUN_102b034cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  FUN_102b02b84(param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 102b03578; end: 102b0360b; -[SCZoomCaptureControl sessionControlsDidBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b03578(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_38 [24];
  
  lVar3 = *(long *)(param_1 + _DAT_112eefa60);
  func_0x000107c61174();
  func_0x000107c42e38();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c3f2b0();
    func_0x000107c615e8(lVar3);
  }
  lVar3 = _DAT_112eefa20;
  func_0x000107c61428(param_1 + _DAT_112eefa20,auStack_38,1,0);
  lVar2 = *(long *)(param_1 + lVar3);
  if (!SCARRY8(lVar2,1)) {
    *(long *)(param_1 + lVar3) = lVar2 + 1;
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0360c);
  (*pcVar1)();
}



/* Entry: 102b0360c; end: 102b03667; -[SCZoomCaptureControl sessionControlsDidBecomeInactive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0360c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112eefa60);
  func_0x000107c61174();
  func_0x000107c42e38();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3f2ac();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b03668; end: 102b036a3; +[SCZoomCaptureControl getAllDiscreteZoomValuesWithFirstValue:lastValue:] */

void FUN_102b03668(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000102b046f8();
  uVar1 = param_1;
  func_0x000107c5fc48();
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b036a4; end: 102b036e3; +[SCZoomCaptureControl logSpaceWithMinValue:maxValue:steps:] */

void FUN_102b036a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_102b04410(param_3);
  uVar1 = param_3;
  func_0x000107c5fc48();
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b036e4; end: 102b0382b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b036e4(float param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112eefa50);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5ea1c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c5a834((double)param_1,lVar2);
    func_0x000107c615e8(lVar2);
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112eefa48);
  puVar3 = &UNK_11059b650;
  func_0x000107c613fc(&UNK_11059b650,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_11059b858;
  func_0x000107c613fc(&UNK_11059b858,0x1c,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(float *)(puVar4 + 0x18) = param_1;
  pcStack_50 = FUN_102b052cc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11059b870;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61174(uVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 102b0382c; end: 102b03833;  */

void FUN_102b0382c(void)

{
  return;
}



/* Entry: 102b03834; end: 102b03867;  */

void FUN_102b03834(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b03868; end: 102b0391f; -[SCZoomCaptureControl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b03884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b038a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b038c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b038e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b038c8) */
/* WARNING: Removing unreachable block (ram,0x000102b038a8) */
/* WARNING: Removing unreachable block (ram,0x000102b03888) */
/* WARNING: Removing unreachable block (ram,0x000102b038e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b03868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eefa48));
  return;
}



/* Entry: 102b03920; end: 102b03a0f;  */

void FUN_102b03920(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_54 [4];
  
  lVar6 = 0;
  puVar5 = (ulong *)(param_1 + 0x38);
  uVar7 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if (-uVar7 < 0x40) {
    uVar8 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar8 = uVar8 & *puVar5;
  lVar1 = lVar6;
  while( true ) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar2 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      FUN_102b03a10(*(undefined4 *)
                     (*(long *)(param_1 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 4 +
                     lVar1 * 0x100),auStack_54);
      lVar6 = lVar1;
    }
    bVar4 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar7 >> 6) <= lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff,puVar5,~uVar7,lVar6,0);
      return;
    }
    uVar8 = puVar5[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102b03a10);
  (*pcVar3)();
}



/* Entry: 102b03a10; end: 102b03afb;  */

undefined8 FUN_102b03a10(ulong param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  
  lVar5 = *unaff_x20;
  uVar1 = *(ulong *)(lVar5 + 0x28);
  fVar6 = (float)param_1;
  fVar7 = 0.0;
  if (fVar6 != 0.0) {
    fVar7 = fVar6;
  }
  func_0x000107c60684(uVar1,fVar7,4);
  uVar4 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      fVar7 = *(float *)(*(long *)(lVar5 + 0x30) + uVar1 * 4);
      uVar8 = (ulong)(uint)fVar7;
      if (fVar7 == fVar6) {
        uVar2 = 0;
        goto LAB_102b03ae0;
      }
      uVar1 = uVar1 + 1 & ~uVar4;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  func_0x000107c61558(lVar5);
  lVar3 = *unaff_x20;
  FUN_102b03afc(param_1,uVar1,lVar5);
  *unaff_x20 = lVar3;
  uVar2 = 1;
  uVar8 = param_1;
LAB_102b03ae0:
  *param_2 = (int)uVar8;
  return uVar2;
}



/* Entry: 102b03afc; end: 102b03c13;  */

void FUN_102b03afc(float param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  float fVar5;
  
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_102b03e18();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_102b03c14(uVar3 + 1);
    }
    else {
      FUN_102b03f58();
    }
    lVar4 = *unaff_x20;
    param_2 = *(ulong *)(lVar4 + 0x28);
    fVar5 = 0.0;
    if (param_1 != 0.0) {
      fVar5 = param_1;
    }
    func_0x000107c60684(param_2,fVar5,4);
    uVar3 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if (*(float *)(*(long *)(lVar4 + 0x30) + param_2 * 4) == param_1) {
          func_0x000107c60620(PTR___sSfN_11034ddf8);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102b03c14);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar2 = *unaff_x20;
  lVar4 = lVar2 + (param_2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x38) = *(ulong *)(lVar4 + 0x38) | 1L << (param_2 & 0x3f);
  *(float *)(*(long *)(lVar2 + 0x30) + param_2 * 4) = param_1;
  if (!SCARRY8(*(long *)(lVar2 + 0x10),1)) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b03c04);
  (*pcVar1)();
}



/* Entry: 102b03c14; end: 102b03e17;  */

void FUN_102b03c14(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x112eefb78;
  func_0x0001000285a8(0x112eefb78,&UNK_10db1f6d0);
  lVar5 = lVar12;
  func_0x000107c602e0(lVar12,lVar1,0,uVar4);
  if (*(long *)(lVar12 + 0x10) != 0) {
    uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar14 = 0xffffffffffffffff;
    if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
      uVar14 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar14 = uVar14 & *(ulong *)(lVar12 + 0x38);
    lVar1 = lVar5 + 0x38;
    lVar7 = 0;
    do {
      if (uVar14 == 0) {
        do {
          lVar13 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102b03e14);
            (*pcVar3)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar13) goto LAB_102b03de4;
          uVar14 = ((ulong *)(lVar12 + 0x38))[lVar13];
          lVar7 = lVar7 + 1;
        } while (uVar14 == 0);
        uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar14 = uVar14 - 1 & uVar14;
      }
      else {
        uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar14 = uVar14 - 1 & uVar14;
        lVar13 = lVar7;
      }
      fVar16 = *(float *)(*(long *)(lVar12 + 0x30) + (LZCOUNT(uVar6) | lVar13 << 6) * 4);
      uVar6 = *(ulong *)(lVar5 + 0x28);
      fVar15 = 0.0;
      if (fVar16 != 0.0) {
        fVar15 = fVar16;
      }
      func_0x000107c60684(uVar6,fVar15,4);
      uVar10 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
      uVar6 = uVar6 & (uVar10 ^ 0xffffffffffffffff);
      uVar8 = uVar6 >> 6;
      uVar11 = -1L << (uVar6 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
      if (uVar11 == 0) {
        bVar2 = false;
        uVar6 = 0x3f - uVar10 >> 6;
        do {
          uVar11 = uVar8 + 1;
          if ((uVar11 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102b03e18);
            (*pcVar3)();
          }
          uVar8 = 0;
          if (uVar11 != uVar6) {
            uVar8 = uVar11;
          }
          bVar2 = (bool)(uVar11 == uVar6 | bVar2);
          uVar11 = *(ulong *)(lVar1 + uVar8 * 8);
        } while (uVar11 == 0xffffffffffffffff);
        uVar11 = ~uVar11;
        uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
      }
      else {
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar6 & 0x7fffffffffffffc0;
      }
      uVar11 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(lVar1 + uVar11) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar11);
      *(float *)(*(long *)(lVar5 + 0x30) + uVar6 * 4) = fVar16;
      *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
      lVar7 = lVar13;
    } while( true );
  }
LAB_102b03de4:
  func_0x000107c61574(lVar12);
  *unaff_x20 = lVar5;
  return;
}



/* Entry: 102b03e18; end: 102b03f57;  */

void FUN_102b03e18(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8(0x112eefb78,&UNK_10db1f6d0);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c602dc();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      func_0x000107c610b8(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102b03f58);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_102b03f38;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined4 *)(*(long *)(lVar3 + 0x30) + uVar8 * 4) =
           *(undefined4 *)(*(long *)(lVar9 + 0x30) + uVar8 * 4);
    } while( true );
  }
LAB_102b03f38:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 102b03f58; end: 102b0418f;  */

void FUN_102b03f58(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  long lVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  
  lVar14 = *unaff_x20;
  lVar1 = *(long *)(lVar14 + 0x18);
  if (*(long *)(lVar14 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x112eefb78;
  func_0x0001000285a8(0x112eefb78,&UNK_10db1f6d0);
  lVar5 = lVar14;
  func_0x000107c602e0(lVar14,lVar1,1,uVar4);
  if (*(long *)(lVar14 + 0x10) == 0) {
LAB_102b04158:
    func_0x000107c61574(lVar14);
    *unaff_x20 = lVar5;
    return;
  }
  puVar15 = (ulong *)(lVar14 + 0x38);
  bVar10 = *(byte *)(lVar14 + 0x20) & 0x3f;
  uVar9 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar12 = -1L << (uVar9 & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (bVar10 < 6) {
    uVar17 = ~uVar12;
  }
  uVar17 = uVar17 & *puVar15;
  uVar9 = uVar9 + 0x3f >> 6;
  lVar1 = lVar5 + 0x38;
  lVar7 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102b0418c);
          (*pcVar3)();
        }
        if ((long)uVar9 <= lVar16) {
          if (bVar10 < 6) {
            *puVar15 = uVar12;
          }
          else {
            func_0x000107c60ee4(puVar15,uVar9 << 3);
          }
          *(undefined8 *)(lVar14 + 0x10) = 0;
          goto LAB_102b04158;
        }
        uVar17 = puVar15[lVar16];
        lVar7 = lVar7 + 1;
      } while (uVar17 == 0);
      uVar6 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar6 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar16 = lVar7;
    }
    fVar19 = *(float *)(*(long *)(lVar14 + 0x30) + (LZCOUNT(uVar6) | lVar16 << 6) * 4);
    uVar6 = *(ulong *)(lVar5 + 0x28);
    fVar18 = 0.0;
    if (fVar19 != 0.0) {
      fVar18 = fVar19;
    }
    func_0x000107c60684(uVar6,fVar18,4);
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar6 = uVar6 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar6 >> 6;
    uVar13 = -1L << (uVar6 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar13 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar13 = uVar8 + 1;
        if ((uVar13 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102b04190);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar13 != uVar6) {
          uVar8 = uVar13;
        }
        bVar2 = (bool)(uVar13 == uVar6 | bVar2);
        uVar13 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar13 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar13) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar13);
    *(float *)(*(long *)(lVar5 + 0x30) + uVar6 * 4) = fVar19;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Entry: 102b04190; end: 102b0420f;  */

undefined * FUN_102b04190(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112da0e88;
    func_0x0001000285a8(0x112da0e88,&UNK_10d943f20);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x1d;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 2) << 1;
  }
  return puVar2;
}



/* Entry: 102b04210; end: 102b0431b;  */

undefined *
FUN_102b04210(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102b0431c);
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
    func_0x0001000285a8(0x112da0e88,&UNK_10d943f20);
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
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 102b0431c; end: 102b0440f;  */

long FUN_102b0431c(long *param_1,undefined4 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  puVar4 = (ulong *)(param_4 + 0x38);
  uVar5 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if (-uVar5 < 0x40) {
    uVar6 = ~(-1L << (-uVar5 & 0x3f));
  }
  uVar6 = uVar6 & *puVar4;
  if (param_2 == (undefined4 *)0x0) {
    lVar7 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar7 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b04410);
      (*pcVar2)();
    }
    lVar7 = 0;
    lVar9 = 0;
    uVar10 = 0x3f - uVar5 >> 6;
    lVar8 = lVar7;
    do {
      while (uVar6 == 0) {
        bVar3 = SCARRY8(lVar7,1);
        lVar7 = lVar7 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102b0440c);
          (*pcVar2)();
        }
        if ((long)uVar10 <= lVar7) {
          uVar6 = 0;
          if ((long)uVar10 <= lVar8 + 1) {
            uVar10 = lVar8 + 1;
          }
          lVar7 = uVar10 - 1;
          param_3 = lVar9;
          goto LAB_102b043f0;
        }
        uVar6 = puVar4[lVar7];
      }
      lVar9 = lVar9 + 1;
      uVar1 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 - 1 & uVar6;
      *param_2 = *(undefined4 *)
                  (*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 4 +
                  lVar7 * 0x100);
      lVar8 = lVar7;
      param_2 = param_2 + 1;
    } while (lVar9 != param_3);
  }
LAB_102b043f0:
  *param_1 = param_4;
  param_1[1] = (long)puVar4;
  param_1[2] = ~uVar5;
  param_1[3] = lVar7;
  param_1[4] = uVar6;
  return param_3;
}



/* Entry: 102b04410; end: 102b04557;  */

ulong FUN_102b04410(float param_1,float param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  
  puVar2 = PTR__swift_bridgeObjectRelease_11034f258;
  if ((long)param_3 < 2) {
    uVar4 = 0x112da0e88;
    func_0x0001000285a8(0x112da0e88,&UNK_10d943f20);
    func_0x000107c613fc();
    *(undefined8 *)(uVar4 + 0x18) = 4;
    *(undefined8 *)(uVar4 + 0x10) = 2;
    *(float *)(uVar4 + 0x20) = param_1;
    *(float *)(uVar4 + 0x24) = param_2;
  }
  else {
    uVar3 = 0;
    FUN_102b04210(0,param_3,0,PTR___swiftEmptyArrayStorage_11034f1c8,
                  PTR__swift_bridgeObjectRelease_11034f258);
    uVar5 = 0;
    uVar6 = *(ulong *)(uVar3 + 0x10);
    do {
      fVar7 = param_2 / param_1;
      func_0x000107c611fc(param_2 / param_1,(float)uVar5 / (float)(param_3 - 1));
      uVar1 = uVar6 + 1;
      uVar4 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar6) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_102b04210(uVar4,uVar1,1,uVar3,puVar2);
      }
      uVar5 = uVar5 + 1;
      *(ulong *)(uVar4 + 0x10) = uVar1;
      *(float *)(uVar4 + uVar6 * 4 + 0x20) = (float)(int)(param_1 * fVar7 * 10.0) / 10.0;
      uVar3 = uVar4;
      uVar6 = uVar1;
    } while (param_3 != uVar5);
  }
  return uVar4;
}



/* Entry: 102b04558; end: 102b04687;  */

undefined * FUN_102b04558(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112eefb78,&UNK_10db1f6d0);
    puVar3 = puVar9;
    func_0x000107c602e8();
    puVar11 = (undefined *)0x0;
    uVar10 = *(ulong *)(puVar3 + 0x28);
    uVar12 = ~(-1L << ((ulong)(byte)puVar3[0x20] & 0x3f));
    do {
      fVar14 = *(float *)(param_1 + 0x20 + (long)puVar11 * 4);
      fVar13 = 0.0;
      if (fVar14 != 0.0) {
        fVar13 = fVar14;
      }
      uVar4 = uVar10;
      func_0x000107c60684(uVar10,fVar13,4);
      uVar4 = uVar4 & uVar12;
      uVar6 = uVar4 >> 6;
      uVar7 = *(ulong *)(puVar3 + uVar6 * 8 + 0x38);
      uVar8 = 1L << (uVar4 & 0x3f);
      lVar5 = *(long *)(puVar3 + 0x30);
      uVar1 = uVar8 & uVar7;
      while (uVar1 != 0) {
        if (*(float *)(lVar5 + uVar4 * 4) == fVar14) goto LAB_102b045ec;
        uVar4 = uVar4 + 1 & uVar12;
        uVar6 = uVar4 >> 6;
        uVar7 = *(ulong *)(puVar3 + uVar6 * 8 + 0x38);
        uVar8 = 1L << (uVar4 & 0x3f);
        uVar1 = uVar8 & uVar7;
      }
      *(ulong *)(puVar3 + uVar6 * 8 + 0x38) = uVar8 | uVar7;
      *(float *)(lVar5 + uVar4 * 4) = fVar14;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102b04688);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
LAB_102b045ec:
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar9);
  }
  return puVar3;
}



/* Entry: 102b04688; end: 102b0480b;  */

void FUN_102b04688(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 auStack_3c [4];
  long lStack_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = lVar2;
  func_0x000107c5fe14(lVar2,PTR___sSfN_11034ddf8,PTR___sSfSHsWP_11034de00);
  if (lVar2 != 0) {
    puVar3 = (undefined4 *)(param_1 + 0x20);
    lStack_38 = lVar1;
    do {
      FUN_102b03a10(*puVar3,auStack_3c);
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 102b0480c; end: 102b0484b;  */

void FUN_102b0480c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102b0484c; end: 102b0496b;  */

void FUN_102b0484c(undefined4 param_1)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    pcVar2 = "didSlide(toZoomValue:)";
    func_0x0001000c10c0("didSlide(toZoomValue:)");
    func_0x000107c61180();
    puVar3 = &UNK_11059b650;
    func_0x000107c613fc(&UNK_11059b650,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar1);
    puVar4 = &UNK_11059b7b8;
    func_0x000107c613fc(&UNK_11059b7b8,0x1c,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined4 *)(puVar4 + 0x18) = param_1;
    pcStack_68 = FUN_102b04fc8;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_11059b7d0;
    ppuVar5 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_60);
    func_0x000107c4e524(pcVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(pcVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b0496c; end: 102b04a53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0496c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar4 = _DAT_112eefa28;
  if (lVar1 != 0) {
    func_0x000107c5a494(0x3f800000,*(undefined8 *)(lVar1 + _DAT_112eefa28));
    uVar2 = *(undefined8 *)(lVar1 + lVar4);
    lVar4 = *(long *)(lVar1 + _DAT_112eefa58);
    func_0x000107c61174(uVar2);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c5bcc0();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c54514(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b04a54; end: 102b04a6f;  */

void FUN_102b04a54(long param_1,long param_2)

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



/* Entry: 102b04a70; end: 102b04a8f;  */

void FUN_102b04a70(void)

{
  func_0x000107c61168(&PTR_PTR_112888cc8);
  return;
}



/* Entry: 102b04a90; end: 102b04bab;  */

void FUN_102b04a90(void)

{
  func_0x000100c3c1e8(FUN_102b04e04);
  return;
}



/* Entry: 102b04bac; end: 102b04d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b04bac(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  float fVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (((param_1 != 0) &&
        (fVar6 = *(float *)(param_1 + _DAT_113075c30), *(float *)(lVar1 + _DAT_112eefa90) <= fVar6))
       && (fVar6 <= *(float *)(lVar1 + _DAT_112eefa98))) {
      uVar5 = *(undefined8 *)(lVar1 + _DAT_112eefa48);
      puVar2 = &UNK_11059b650;
      func_0x000107c613fc(&UNK_11059b650,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,lVar1);
      puVar3 = &UNK_11059b718;
      func_0x000107c613fc(&UNK_11059b718,0x1c,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(float *)(puVar3 + 0x18) = fVar6;
      pcStack_78 = FUN_102b04d2c;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_1000f6b44;
      puStack_80 = &UNK_11059b730;
      ppuVar4 = &puStack_98;
      puStack_70 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar2 = puStack_70;
      func_0x000107c61174(param_1);
      func_0x000107c61174(uVar5);
      func_0x000107c61574(puVar2);
      func_0x000107c4e524(uVar5);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102b04d2c; end: 102b04e03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b04d2c(void)

{
  float fVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  long unaff_x20;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_48 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  fVar9 = *(float *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar5 + 0x10,auStack_48,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    fVar7 = 2.0;
    if (*(char *)(lVar5 + _DAT_112eefa80) == '\0') {
      fVar7 = 1.0;
    }
    lVar3 = *(long *)(lVar5 + _DAT_112eefaa0);
    if (*(long *)(lVar3 + 0x10) != 0) {
      fVar6 = *(float *)(lVar3 + 0x20);
      lVar2 = *(long *)(lVar3 + 0x10) + -1;
      if (lVar2 != 0) {
        fVar9 = fVar9 / fVar7;
        pfVar4 = (float *)(lVar3 + 0x24);
        fVar7 = fVar6;
        do {
          fVar8 = *pfVar4;
          fVar1 = fVar8;
          if (ABS(fVar7 - fVar9) <= ABS(fVar8 - fVar9)) {
            fVar8 = fVar7;
            fVar1 = fVar6;
          }
          fVar6 = fVar1;
          fVar7 = fVar8;
          lVar2 = lVar2 + -1;
          pfVar4 = pfVar4 + 1;
        } while (lVar2 != 0);
      }
      func_0x000107c5a494(fVar6,*(undefined8 *)(lVar5 + _DAT_112eefa28));
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102b04e04; end: 102b04fc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b04e04(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      uVar6 = 0xffffffffffffffff;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + _DAT_113075bb0);
    }
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112eefa48);
    puVar2 = &UNK_11059b650;
    func_0x000107c613fc(&UNK_11059b650,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,lVar1);
    puVar3 = &UNK_11059b768;
    func_0x000107c613fc(&UNK_11059b768,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = uVar6;
    uStack_58 = 0x102b04f3c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_11059b780;
    ppuVar4 = &puStack_78;
    puStack_50 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar2 = puStack_50;
    func_0x000107c61174(uVar5);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b04fc8; end: 102b052cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b04fc8(float param_1)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x20;
  float fVar8;
  float fVar9;
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  fVar9 = *(float *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar6 + 0x10,auStack_a8,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 == 0) {
    return;
  }
  lVar2 = *(long *)(lVar6 + _DAT_112eefa40);
  if (lVar2 == 0) {
    puVar7 = (undefined *)0x0;
    bVar1 = *(byte *)(lVar6 + _DAT_112eefa80);
    fVar8 = 2.0;
    if (bVar1 == 0) {
      fVar8 = 1.0;
    }
    fVar9 = fVar9 * fVar8;
    if (fVar9 < 1.0) goto LAB_102b0510c;
  }
  else {
    func_0x000107c61174();
    func_0x000107c436dc();
    fVar8 = 2.0;
    if (*(char *)(lVar6 + _DAT_112eefa80) == '\0') {
      fVar8 = 1.0;
    }
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46978(param_1 * fVar8);
    func_0x000107c61170(lVar2);
    bVar1 = *(byte *)(lVar6 + _DAT_112eefa80);
    fVar8 = 2.0;
    if (bVar1 == 0) {
      fVar8 = 1.0;
    }
    fVar9 = fVar9 * fVar8;
    if (fVar9 < 1.0) {
LAB_102b0510c:
      if (((bVar1 & 1) == 0) && (*(char *)(lVar6 + _DAT_112eefa70) != '\0')) {
        lVar2 = lVar6 + _DAT_112eefa30;
        func_0x000107c61618();
        if (lVar2 != 0) {
          lVar4 = lVar2;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar2);
          if (lVar4 != 0) {
            pcStack_70 = FUN_102b0382c;
            uStack_68 = 0;
            puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_88 = 0x42000000;
            puStack_80 = &UNK_1000f6b44;
            puStack_78 = &UNK_11059b7f8;
            ppuVar5 = &puStack_90;
            func_0x000107c60bc4(ppuVar5);
            func_0x000107c567d8(lVar4);
            func_0x000107c60bd0(ppuVar5);
            func_0x000107c615e8(lVar4);
          }
        }
        goto LAB_102b051d0;
      }
    }
    else if (puVar7 != (undefined *)0x0) {
      puVar3 = puVar7;
      func_0x000107c61174(puVar7);
      func_0x000107c436dc();
      if (fVar8 < fVar9) {
        if ((*(char *)(lVar6 + _DAT_112eefa78) == '\x01') &&
           ((*(byte *)(lVar6 + _DAT_112eefa88) & 1) == 0)) {
          lVar2 = lVar6 + _DAT_112eefa30;
          func_0x000107c61618();
          if (lVar2 != 0) {
            lVar4 = lVar2;
            func_0x000107c5c734();
            func_0x000107c61180();
            func_0x000107c61170(lVar2);
            if (lVar4 != 0) {
              pcStack_70 = FUN_102b0382c;
              uStack_68 = 0;
              puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_88 = 0x42000000;
              puStack_80 = &UNK_1000f6b44;
              puStack_78 = &UNK_11059b820;
              ppuVar5 = &puStack_90;
              func_0x000107c60bc4(ppuVar5);
              func_0x000107c567d8(lVar4);
              func_0x000107c60bd0(ppuVar5);
              func_0x000107c615e8(lVar4);
            }
          }
        }
        else {
          FUN_102b036e4(fVar9);
        }
        func_0x000107c61170(puVar3);
        goto LAB_102b051d0;
      }
      func_0x000107c61170(puVar3);
    }
  }
  FUN_102b036e4(fVar9);
LAB_102b051d0:
  lVar2 = *(long *)(lVar6 + _DAT_112eefa68);
  func_0x000107c42e38();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c41a90();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(lVar6);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 102b052cc; end: 102b0535b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b052cc(void)

{
  long lVar1;
  long unaff_x20;
  float fVar2;
  float fVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  fVar3 = *(float *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    fVar2 = 2.0;
    if (*(char *)(lVar1 + _DAT_112eefa80) == '\0') {
      fVar2 = 1.0;
    }
    func_0x000107c5a494(fVar3 / fVar2,*(undefined8 *)(lVar1 + _DAT_112eefa28));
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b0535c; end: 102b053ab;  */

void FUN_102b0535c(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 102b053ac; end: 102b053f3;  */

uint FUN_102b053ac(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined1)param_1[3];
  uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined1)param_2[3];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x21);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x19) >> 0x38);
  FUN_102b053f4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102b053f4; end: 102b05497;  */

byte FUN_102b053f4(double *param_1,double *param_2)

{
  long lVar1;
  double dVar2;
  char *pcVar3;
  double dVar4;
  char *pcVar5;
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    dVar2 = param_1[4];
    dVar4 = param_2[4];
    lVar1 = *(long *)((long)dVar2 + 0x10);
    if (lVar1 == *(long *)((long)dVar4 + 0x10)) {
      if (lVar1 != 0 && dVar2 != dVar4) {
        pcVar3 = (char *)((long)dVar2 + 0x20);
        pcVar5 = (char *)((long)dVar4 + 0x20);
        do {
          if (*pcVar3 != *pcVar5) {
            return 0;
          }
          lVar1 = lVar1 + -1;
          pcVar3 = pcVar3 + 1;
          pcVar5 = pcVar5 + 1;
        } while (lVar1 != 0);
      }
      return (*(byte *)(param_1 + 5) ^ *(byte *)(param_2 + 5) ^ 1) & 1;
    }
  }
  return 0;
}



/* Entry: 102b05498; end: 102b054c3;  */

long FUN_102b05498(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102b054c4; end: 102b054cb;  */

void FUN_102b054c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 102b054cc; end: 102b05507;  */

undefined8 * FUN_102b054cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 102b05508; end: 102b05573;  */

undefined8 * FUN_102b05508(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Entry: 102b05574; end: 102b055b7;  */

undefined8 * FUN_102b05574(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Entry: 102b055b8; end: 102b0565b;  */

int FUN_102b055b8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102b0565c; end: 102b0596b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b0565c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar8 = &stack0xffffffffffffff50;
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112eefb80;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112eefb90;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112eefb98;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112eefba8;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112eefbb0;
  uVar4 = 0;
  FUN_102b0842c();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
  lVar1 = _DAT_112eefbd0;
  puVar3 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c566f0();
  func_0x000107c56390(puVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112eefbc8);
  uVar4 = *(undefined8 *)((long)param_1 + 0x19);
  *(undefined8 *)((long)puVar2 + 0x21) = *(undefined8 *)((long)param_1 + 0x21);
  *(undefined8 *)((long)puVar2 + 0x19) = uVar4;
  uVar11 = *param_1;
  uVar10 = param_1[3];
  uVar4 = param_1[2];
  puVar2[1] = param_1[1];
  *puVar2 = uVar11;
  puVar2[3] = uVar10;
  puVar2[2] = uVar4;
  if (*(long *)(param_1[4] + 0x10) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined1 *)(param_1[4] + 0x20);
  }
  *(undefined1 *)(unaff_x20 + _DAT_112eefb88) = uVar9;
  uVar4 = 0;
  FUN_102b0bfd0();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + _DAT_112eefba0) = uVar4;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x102b07128;
  uStack_78 = 0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100f9954c;
  puStack_88 = &UNK_11059ba80;
  ppuVar5 = &puStack_a0;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(uStack_78);
  puVar6 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  puVar7 = puVar6;
  func_0x000107c3ee9c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  *(undefined **)(unaff_x20 + _DAT_112eefbb8) = puVar7;
  uStack_80 = 0x102b07124;
  uStack_78 = 0;
  puStack_a0 = puVar3;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100f9954c;
  puStack_88 = &UNK_11059baa8;
  ppuVar5 = &puStack_a0;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(uStack_78);
  func_0x000107c3ee9c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  *(undefined **)(unaff_x20 + _DAT_112eefbc0) = puVar6;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffff50,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_102b0596c();
  func_0x000102b06038();
  lVar1 = _DAT_112eefba0;
  puVar2 = (undefined8 *)(puVar8 + _DAT_112eefbc8);
  *(undefined8 *)(*(long *)(puVar8 + _DAT_112eefba0) + _DAT_112eefcb0) = *puVar2;
  FUN_102b0a308();
  *(undefined8 *)(*(long *)(puVar8 + lVar1) + _DAT_112eefcb8) = puVar2[1];
  FUN_102b0a4a8();
  uVar4 = puVar2[2];
  *(undefined8 *)(*(long *)(puVar8 + lVar1) + _DAT_112eefcc0) = uVar4;
  FUN_102b0a308();
  FUN_102b06864(uVar4);
  func_0x000107c61170(puVar8);
  return puVar8;
}



/* Entry: 102b0596c; end: 102b067d7;  */

/* WARNING: Possible PIC construction at 0x000102b05a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b05ac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b05b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b05c0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b05f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b05f6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b05f04) */
/* WARNING: Removing unreachable block (ram,0x000102b05c10) */
/* WARNING: Removing unreachable block (ram,0x000102b05c40) */
/* WARNING: Removing unreachable block (ram,0x000102b05c7c) */
/* WARNING: Removing unreachable block (ram,0x000102b0602c) */
/* WARNING: Removing unreachable block (ram,0x000102b05c88) */
/* WARNING: Removing unreachable block (ram,0x000102b05d1c) */
/* WARNING: Removing unreachable block (ram,0x000102b06034) */
/* WARNING: Removing unreachable block (ram,0x000102b05ca8) */
/* WARNING: Removing unreachable block (ram,0x000102b05d88) */
/* WARNING: Removing unreachable block (ram,0x000102b05dd4) */
/* WARNING: Removing unreachable block (ram,0x000102b05db4) */
/* WARNING: Removing unreachable block (ram,0x000102b05dd0) */
/* WARNING: Removing unreachable block (ram,0x000102b05df4) */
/* WARNING: Removing unreachable block (ram,0x000102b05df8) */
/* WARNING: Removing unreachable block (ram,0x000102b05e1c) */
/* WARNING: Removing unreachable block (ram,0x000102b05e58) */
/* WARNING: Removing unreachable block (ram,0x000102b05e60) */
/* WARNING: Removing unreachable block (ram,0x000102b05e94) */
/* WARNING: Removing unreachable block (ram,0x000102b05e7c) */
/* WARNING: Removing unreachable block (ram,0x000102b05e90) */
/* WARNING: Removing unreachable block (ram,0x000102b05ec8) */
/* WARNING: Removing unreachable block (ram,0x000102b05ecc) */
/* WARNING: Removing unreachable block (ram,0x000102b05d18) */
/* WARNING: Removing unreachable block (ram,0x000102b06030) */
/* WARNING: Removing unreachable block (ram,0x000102b05b94) */
/* WARNING: Removing unreachable block (ram,0x000102b05ac4) */
/* WARNING: Removing unreachable block (ram,0x000102b05a50) */
/* WARNING: Removing unreachable block (ram,0x000102b05f70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0596c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar2 = puVar1;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50();
  func_0x000107c61170(puVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112eefb90);
  func_0x000107c5a100(uVar3);
  func_0x000107c5af88(puVar1);
  func_0x000107c61180();
  func_0x000107c59c78(uVar3);
  func_0x000107c61170(puVar1);
  FUN_102b0f82c();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(uVar3);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 102b067d8; end: 102b067ff; -[_TtC19SCCameraTimerModeV230CameraTimerModeV2ContainerView initWithCoder:] */

void FUN_102b067d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102b06e68();
  return;
}



/* Entry: 102b06800; end: 102b06863;  */

void FUN_102b06800(undefined8 param_1,long param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102b06864(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102b06864; end: 102b069eb;  */

/* WARNING: Possible PIC construction at 0x000102b068b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b068e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b06904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b068e4) */
/* WARNING: Removing unreachable block (ram,0x000102b068b4) */
/* WARNING: Removing unreachable block (ram,0x000102b06908) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b06864(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  FUN_102b069ec();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eefb98);
  func_0x000107c5fadc();
  func_0x000107c59c6c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b069ec; end: 102b06b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102b069ec(double param_1,undefined8 param_2,undefined *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  puVar6 = *(undefined **)(unaff_x20 + _DAT_112eefbd0);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(param_1);
  func_0x000107c5c1c0();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar6 == (undefined *)0x0) {
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b06b6c);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b06b70);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b06b74);
      (*pcVar1)();
    }
    puVar6 = PTR___sSiN_11034deb0;
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c();
    puVar2 = puVar6;
    param_3 = puVar5;
  }
  else {
    puVar2 = puVar6;
    func_0x000107c5faec();
    puVar5 = param_3;
    func_0x000107c61170(puVar6);
  }
  func_0x000102b0faac();
  lVar3 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
  lVar4 = lVar3;
  func_0x00010075bbf0();
  *(long *)(lVar3 + 0x40) = lVar4;
  *(undefined **)(lVar3 + 0x20) = puVar2;
  *(undefined **)(lVar3 + 0x28) = param_3;
  puVar2 = puVar5;
  func_0x000107c5fb00(puVar6,puVar5,lVar3);
  func_0x000107c6142c(puVar5);
  auVar7._8_8_ = puVar2;
  auVar7._0_8_ = puVar6;
  return auVar7;
}



/* Entry: 102b06b74; end: 102b06bef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b06b74(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(ulong *)(*(long *)(unaff_x20 + _DAT_112eefbb0) + _DAT_112eefc08);
  if ((-1 < (long)uVar1) &&
     (lVar2 = *(long *)(unaff_x20 + _DAT_112eefbc8 + 0x20), uVar1 < *(ulong *)(lVar2 + 0x10))) {
    *(undefined1 *)(unaff_x20 + _DAT_112eefb88) = *(undefined1 *)(lVar2 + uVar1 + 0x20);
    lVar2 = unaff_x20 + _DAT_112eefb80;
    func_0x000107c61618();
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
      return;
    }
  }
  return;
}



/* Entry: 102b06bf0; end: 102b06c17; -[_TtC19SCCameraTimerModeV230CameraTimerModeV2ContainerView countdownSelectionChanged] */

void FUN_102b06bf0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b06b74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b06c18; end: 102b06d03; -[_TtC19SCCameraTimerModeV230CameraTimerModeV2ContainerView setTimerButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b06c18(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112eefb80;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61174(param_1);
    FUN_102b0e264();
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102b06d04; end: 102b06d2b; -[_TtC19SCCameraTimerModeV230CameraTimerModeV2ContainerView cancelButtonTapped] */

void FUN_102b06d04(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102b06c74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b06d2c; end: 102b06d8b; -[_TtC19SCCameraTimerModeV230CameraTimerModeV2ContainerView initWithFrame:] */

void FUN_102b06d2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraTimerModeV2.CameraTimerModeV2ContainerView",0x32,"init(frame:)",0xc,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b06d58);
  (*pcVar1)();
}


