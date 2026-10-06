/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e13370; end: 102e133a7;  */

uint FUN_102e13370(undefined8 param_1,undefined8 param_2,code *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  (*param_3)();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 102e133a8; end: 102e1341f;  */

uint FUN_102e133a8(void)

{
  undefined8 uVar1;
  uint uVar2;
  long unaff_x20;
  
  uVar2 = (uint)*(byte *)(unaff_x20 + 0x55);
  if (*(byte *)(unaff_x20 + 0x55) == 2) {
    uVar2 = (uint)*(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010f10fc90);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    *(char *)(unaff_x20 + 0x55) = (char)uVar2;
  }
  return uVar2 & 1;
}



/* Entry: 102e13420; end: 102e13427; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider setPreservesLensOnCapture:] */

void FUN_102e13420(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x55) = param_3;
  return;
}



/* Entry: 102e13428; end: 102e13433; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider reactionCameraCapturePreset] */

undefined8 FUN_102e13428(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_102e13434();
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 102e13434; end: 102e134d3;  */

undefined8 FUN_102e13434(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(unaff_x20 + 0x60) == '\x01') {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_40 = 0;
    FUN_102e134d4();
    func_0x000107c615f0(uVar1);
    func_0x0001040ad4f8(&uStack_38,0xd00000000000002d,0x800000010f10fcc0,uVar1,&uStack_40,0,
                        &UNK_11075c080,param_1);
    func_0x000107c615e8(uVar1);
    *(undefined8 *)(unaff_x20 + 0x58) = uStack_38;
    *(undefined1 *)(unaff_x20 + 0x60) = 0;
  }
  else {
    uStack_38 = *(undefined8 *)(unaff_x20 + 0x58);
  }
  return uStack_38;
}



/* Entry: 102e134d4; end: 102e13513;  */

void FUN_102e134d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1ccb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcecf58;
  func_0x000107c61520(&UNK_10dcecf58,&UNK_11075c080);
  puRam0000000112f1ccb8 = puVar1;
  return;
}



/* Entry: 102e13514; end: 102e1351f; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider setReactionCameraCapturePreset:] */

void FUN_102e13514(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  *(undefined1 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 102e13520; end: 102e1352b; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider reactionCameraCaptureFrameRate] */

undefined8 FUN_102e13520(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_102e13564();
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 102e1352c; end: 102e13563;  */

undefined8 FUN_102e1352c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  (*param_3)();
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 102e13564; end: 102e135ef;  */

long FUN_102e13564(void)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x70) == '\x01') {
    uVar3 = (uint)*(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010f10fcf0);
    func_0x000107c4980c();
    func_0x000107c61170(uVar1);
    if (0xf0 < uVar3) {
      uVar3 = 0;
    }
    lVar2 = (long)(int)uVar3;
    *(long *)(unaff_x20 + 0x68) = lVar2;
    *(undefined1 *)(unaff_x20 + 0x70) = 0;
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x68);
  }
  return lVar2;
}



/* Entry: 102e135f0; end: 102e135fb; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider setReactionCameraCaptureFrameRate:] */

void FUN_102e135f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}



/* Entry: 102e135fc; end: 102e13607; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider lensLoadTimeoutSeconds] */

undefined8 FUN_102e135fc(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c6157c();
  FUN_102e13648();
  func_0x000107c61574(param_2);
  return param_1;
}



/* Entry: 102e13608; end: 102e13647;  */

undefined8 FUN_102e13608(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c6157c();
  (*param_4)();
  func_0x000107c61574(param_2);
  return param_1;
}



/* Entry: 102e13648; end: 102e136df;  */

double FUN_102e13648(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  float fVar3;
  double dVar4;
  
  if (*(char *)(unaff_x20 + 0x80) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010f10fd20);
    fVar3 = 5.0;
    func_0x000107c436e4(uVar2);
    func_0x000107c61170(uVar1);
    dVar4 = (double)fVar3;
    if (fVar3 <= 0.0) {
      dVar4 = 5.0;
    }
    *(double *)(unaff_x20 + 0x78) = dVar4;
    *(undefined1 *)(unaff_x20 + 0x80) = 0;
  }
  else {
    dVar4 = *(double *)(unaff_x20 + 0x78);
  }
  return dVar4;
}



/* Entry: 102e136e0; end: 102e136eb; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider setLensLoadTimeoutSeconds:] */

void FUN_102e136e0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x78) = param_1;
  *(undefined1 *)(param_2 + 0x80) = 0;
  return;
}



/* Entry: 102e136ec; end: 102e137e3;  */

long FUN_102e136ec(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x88);
  lVar5 = lVar2;
  if (lVar2 == 0) {
    lVar5 = *(long *)(unaff_x20 + 0x10);
    uVar3 = 0xd000000000000025;
    func_0x000107c5fadc(0xd000000000000025,0x800000010f10fdd0);
    puVar1 = PTR___sSSN_11034da80;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    func_0x000107c5c15c();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar4);
    lVar2 = lVar5;
    func_0x000107c5fc54(lVar5,puVar1);
    func_0x000107c61170(lVar5);
    lVar5 = lVar2;
    func_0x000100403a6c();
    func_0x000107c6142c(lVar2);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x88);
    *(long *)(unaff_x20 + 0x88) = lVar5;
    func_0x000107c61434(lVar5);
    func_0x000107c6142c(uVar3);
    lVar2 = 0;
  }
  func_0x000107c61434(lVar2);
  return lVar5;
}



/* Entry: 102e137e4; end: 102e1387b; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider enabledForLensId:] */

uint FUN_102e137e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  func_0x000107c5faec(param_3);
  if (cRam0000000112f1ccc0 == '\x01') {
    func_0x000107c6142c(param_2);
    uVar2 = 1;
  }
  else {
    uVar1 = param_1;
    func_0x000107c6157c(param_1);
    FUN_102e136ec();
    func_0x0001000f66f0(param_3,param_2,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c61574(param_1);
    func_0x000107c6142c(param_2);
    uVar2 = (uint)param_3 ^ 1;
  }
  return uVar2 & 1;
}



/* Entry: 102e1387c; end: 102e13983;  */

uint FUN_102e1387c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lStack_48;
  
  uVar1 = param_1;
  func_0x000107c4a63c();
  if ((uVar1 & 1) == 0) {
    func_0x000107c4f220();
    func_0x000107c61180();
    if (param_1 != 0) {
      uVar2 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      uVar1 = uVar2 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar1 = param_2 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        func_0x0001000d224c(&lStack_48);
        uVar5 = 0;
        if (lStack_48 != 0) {
          lVar3 = lStack_48;
          func_0x000107c43bac(lStack_48);
          func_0x000107c61180();
          func_0x000107c615e8(lStack_48);
          lVar4 = lVar3;
          func_0x000107c5fc54(lVar3,PTR___sSSN_11034da80);
          func_0x000107c61170(lVar3);
          func_0x000100077018(uVar2,param_2,lVar4);
          uVar5 = (uint)uVar2;
          func_0x000107c6142c(lVar4);
        }
        func_0x000107c6142c(param_2);
        goto LAB_102e13968;
      }
      func_0x000107c6142c(param_2);
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
LAB_102e13968:
  return uVar5 & 1;
}



/* Entry: 102e13984; end: 102e139db; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider isGameActivationLens:] */

uint FUN_102e13984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_102e1387c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102e139dc; end: 102e13ab3;  */

void FUN_102e139dc(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e13ab4; end: 102e13abb;  */

undefined1  [16] FUN_102e13ab4(void)

{
  code *pcVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    auVar3._8_8_ = 0x800000010f10fd90;
    auVar3._0_8_ = 0xd000000000000016;
    return auVar3;
  }
  if (lStack_18 == 2) {
    auVar2._8_8_ = 0x800000010f10fd50;
    auVar2._0_8_ = 0xd000000000000011;
    return auVar2;
  }
  if (lStack_18 == 1) {
    auVar4._8_8_ = 0x800000010f10fd70;
    auVar4._0_8_ = 0xd000000000000014;
    return auVar4;
  }
  func_0x000107c60614(&UNK_11075c060,&lStack_18,&UNK_11075c060,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e13ab4);
  (*pcVar1)();
}



/* Entry: 102e13abc; end: 102e13afb;  */

void FUN_102e13abc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f1cd00;
  func_0x0001000285a8(0x112f1cd00,&UNK_10db55190);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102e13afc; end: 102e13b0f;  */

void FUN_102e13afc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102e13b10();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102e12f60();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102e13b10; end: 102e13bfb;  */

void FUN_102e13b10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1cd10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db551d0;
  func_0x000107c61520(&UNK_10db551d0,&UNK_11075c060);
  puRam0000000112f1cd10 = puVar1;
  return;
}



/* Entry: 102e13bfc; end: 102e13c0f;  */

void FUN_102e13bfc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102e13c10();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102e134d4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102e13c10; end: 102e13c7b;  */

void FUN_102e13c10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1cd28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db55238;
  func_0x000107c61520(&UNK_10db55238,&UNK_11075c080);
  puRam0000000112f1cd28 = puVar1;
  return;
}



/* Entry: 102e13c7c; end: 102e13cbb;  */

void FUN_102e13c7c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f1cd08;
  func_0x0001000285a8(0x112f1cd08,&UNK_10db55198);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102e13cbc; end: 102e13cdb;  */

void FUN_102e13cbc(void)

{
  func_0x000107c61168(&PTR_PTR_112f1cd80);
  return;
}



/* Entry: 102e13cdc; end: 102e13e3f;  */

int FUN_102e13cdc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102e13d58;
        goto LAB_102e13d3c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102e13d3c:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_102e13d58:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102e13e40; end: 102e13e6b;  */

void FUN_102e13e40(void)

{
  FUN_102e13e6c(0x112f1ce68,0x112f1ce70,&UNK_10db55350);
  return;
}



/* Entry: 102e13e6c; end: 102e13eaf;  */

void FUN_102e13e6c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102e13eb0; end: 102e13ec3;  */

void FUN_102e13eb0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102e13ef4();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102e12d64();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102e13ec4; end: 102e13ef3;  */

void FUN_102e13ec4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102e13ef4; end: 102e13f33;  */

void FUN_102e13ef4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1ce78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db55358;
  func_0x000107c61520(&UNK_10db55358,&UNK_1105d7778);
  puRam0000000112f1ce78 = puVar1;
  return;
}



/* Entry: 102e13f34; end: 102e13f37;  */

void FUN_102e13f34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1ce80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db553ec;
  func_0x000107c61520(&UNK_10db553ec,&UNK_1105d7778);
  puRam0000000112f1ce80 = puVar1;
  return;
}



/* Entry: 102e13f38; end: 102e13f77;  */

void FUN_102e13f38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1ce80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db553ec;
  func_0x000107c61520(&UNK_10db553ec,&UNK_1105d7778);
  puRam0000000112f1ce80 = puVar1;
  return;
}



/* Entry: 102e13f78; end: 102e13fc7;  */

undefined8 FUN_102e13f78(long param_1)

{
  if (param_1 < 0x5a) {
    if (param_1 == 0x1e) {
      return 0;
    }
    if (param_1 == 0x3c) {
      return 1;
    }
  }
  else {
    if (param_1 == 0x78) {
      return 3;
    }
    if (param_1 == 0x5a) {
      return 2;
    }
  }
  return 4;
}



/* Entry: 102e13fc8; end: 102e1502b;  */

void FUN_102e13fc8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  func_0x000107c614f0();
  lVar1 = 0;
  FUN_102e16434();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 1;
  uVar4 = 0xd00000000000001b;
  func_0x0001007d6c6c(1,0xd00000000000001b,0x800000010f10fe40,unaff_x20,&PTR_DAT_1105d82a8);
  func_0x000107c5eec4(lVar6);
  func_0x000107c5eeac();
  (**(code **)(lVar7 + 8))(lVar6,lVar2);
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar5,param_1,lVar2);
  func_0x000107c6159c(puVar5,lVar1,1);
  func_0x000102e14148(uVar3,uVar4,puVar5,0);
  func_0x000107c6142c(uVar4);
  FUN_102e1646c(puVar5);
  func_0x000102e14c98(uVar3);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 102e1502c; end: 102e150c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1502c(void)

{
  undefined8 unaff_x20;
  long lStack_38;
  
  func_0x000107c614f0();
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    func_0x0001007d6c6c(3,0x100000000000004d,0x800000010f10ff90,unaff_x20,&PTR_DAT_1105d82a8);
  }
  else {
    func_0x000107c4edf8(lStack_38);
    func_0x000107c615e8(lStack_38);
  }
  return;
}



/* Entry: 102e150c8; end: 102e150df;  */

void FUN_102e150c8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e150e0,0,0);
  return;
}



/* Entry: 102e150e0; end: 102e151d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e150e0(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x88) = lVar3;
  if (lVar3 != 0) {
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102e151d4;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    puVar2 = &UNK_1105d79b0;
    func_0x000107c613fc(&UNK_1105d79b0,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    *(code **)(unaff_x22 + 0x70) = FUN_102e16524;
    *(undefined **)(unaff_x22 + 0x78) = puVar2;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1105d79c8;
    lVar1 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar1);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c4d888(lVar3);
    func_0x000107c60bd0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102e151d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e151d4; end: 102e15243;  */

void FUN_102e151d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102e15214,0,0);
  return;
}



/* Entry: 102e15244; end: 102e154d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e15244(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar2 = unaff_x20 + _DAT_112f1cf38;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar9 = lVar2 + _DAT_11306faf8;
    func_0x000107c61428(lVar9,auStack_68,0,0);
    lVar3 = lVar9;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c61170(lVar2);
    }
    else {
      lVar9 = *(long *)(lVar9 + 8);
      func_0x000107c61170(lVar2);
      lVar2 = lVar3;
      func_0x000107c614f0();
      (**(code **)(lVar9 + 8))();
      func_0x000107c615e8(lVar3);
      if (lVar2 != 0) {
        func_0x000102e20ab0();
        lVar8 = lVar9;
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar9);
        pcStack_78 = FUN_102e154d4;
        lStack_70 = 0;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_100de205c;
        puStack_80 = &UNK_1105d7860;
        ppuVar4 = &puStack_98;
        func_0x000107c60bc4(ppuVar4);
        puVar5 = PTR_PTR_1126aed70;
        func_0x000107c61168();
        func_0x000107c3dac8();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61170(lVar3);
        lVar1 = lStack_70;
        func_0x000107c61574();
        func_0x000102e209e4();
        lVar9 = lVar1;
        func_0x000100de9c28();
        func_0x000107c613fc();
        *(undefined8 *)(lVar9 + 0x18) = 3;
        *(undefined8 *)(lVar9 + 0x10) = 1;
        *(undefined **)(lVar9 + 0x20) = puVar5;
        puVar6 = PTR_PTR_1126aed78;
        func_0x000107c610f8(PTR_PTR_1126aed78);
        func_0x000107c61174(puVar5);
        func_0x000107c5fadc(lVar1,lVar8);
        func_0x000107c6142c(lVar8);
        uVar7 = 0;
        FUN_102e16700(0,0x112d360a8,&PTR_PTR_1126aed70);
        lVar3 = lVar9;
        func_0x000107c5fc48(lVar9,uVar7);
        func_0x000107c61574(lVar9);
        func_0x000107c48d50(puVar6);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar3);
        func_0x000107c4f018(lVar2);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar6);
        return;
      }
    }
  }
  func_0x0001007d6c6c(2,0x1000000000000039,0x800000010f10fe00,lVar1,&PTR_DAT_1105d82a8);
  return;
}



/* Entry: 102e154d4; end: 102e154df;  */

void FUN_102e154d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 102e154e0; end: 102e155b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102e154e0(double param_1,undefined8 param_2,double param_3,double param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar1 = puVar3;
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c51820();
  func_0x000107c61170(puVar1);
  lVar2 = unaff_x20 + _DAT_112f1cf38;
  func_0x000107c61618();
  if (lVar2 == 0) {
    func_0x000107c4c194(puVar3);
    func_0x000107c61180();
    func_0x000107c3ec60();
  }
  else {
    puVar3 = *(undefined **)(lVar2 + _DAT_11306faa8);
    func_0x000107c61174(puVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c438d4(puVar3);
  }
  func_0x000107c61170(puVar3);
  auVar4._0_8_ = param_1 * param_3;
  auVar4._8_8_ = param_1 * param_4;
  return auVar4;
}



/* Entry: 102e155b8; end: 102e1578b;  */

undefined * FUN_102e155b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_b0;
  func_0x000107c614f0();
  puVar4 = &UNK_1105d7898;
  puVar2 = puVar4;
  func_0x000107c613fc(&UNK_1105d7898,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_1105d78c0;
  func_0x000107c613fc(&UNK_1105d78c0,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
  func_0x000107c613fc(&UNK_1105d7898,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,param_1);
  puVar5 = &UNK_1105d78e8;
  func_0x000107c613fc(&UNK_1105d78e8,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = unaff_x20;
  puVar6 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_102e164a8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100e1779c;
  puStack_68 = &UNK_1105d7900;
  ppuVar7 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar7);
  uStack_90 = 0x102e164b0;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100e17304;
  puStack_98 = &UNK_1105d7928;
  puStack_88 = puVar5;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar4);
  func_0x000107c47be0(puVar6);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puStack_88);
  puVar3 = puStack_58;
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar3);
  puVar4 = PTR_PTR_1126c4f00;
  func_0x000107c610f8(PTR_PTR_1126c4f00);
  func_0x000107c48f0c();
  func_0x000107c5770c();
  func_0x000107c61170(puVar6);
  return puVar4;
}



/* Entry: 102e1578c; end: 102e15933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e1578c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 auStack_70 [4];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)auStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_102e16434();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar8 = (undefined8 *)(lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x000102e164e0(param_1,puVar8);
  puVar3 = puVar8;
  func_0x000107c614c4(puVar8,lVar2);
  if ((int)puVar3 == 1) {
    (**(code **)(lVar9 + 0x20))(lVar7,puVar8,lVar1);
    puVar5 = PTR_PTR_1126affc0;
    func_0x000107c61168(PTR_PTR_1126affc0);
    puVar4 = puVar5;
    func_0x000107c5ed90();
    func_0x000107c5dda4(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    (**(code **)(lVar9 + 8))(lVar7,lVar1);
  }
  else {
    uVar6 = *puVar8;
    puVar5 = PTR_PTR_1126affc0;
    func_0x000107c61168(PTR_PTR_1126affc0);
    auStack_70[1] = *(undefined8 *)PTR__kCMTimeZero_110348670;
    auStack_70[3] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    auStack_70[2] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    func_0x000107c5d19c();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f1cf58);
  func_0x000107c42424(uVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  return uVar6;
}



/* Entry: 102e15934; end: 102e15bb3;  */

void FUN_102e15934(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [24];
  
  puVar2 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar2,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    func_0x000104366fc4(0xd000000000000013,0x800000010f10f920,param_3,&PTR_DAT_1105d82a8);
  }
  else {
    func_0x000107c602fc(0x17);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c417f0(param_1);
    func_0x000107c61180();
    uVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c5fb78(uVar1,puVar2);
    func_0x000107c6142c(puVar2);
    func_0x0001007d6c6c(1,0xd000000000000015,0x800000010f10fee0,param_3,&PTR_DAT_1105d82a8);
    func_0x000107c6142c(0x800000010f10fee0);
    func_0x000107c4f018(param_2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102e15bb4; end: 102e15c83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e15bb4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  lVar1 = _DAT_112f1cf80;
  if (*(long *)(unaff_x20 + _DAT_112f1cf80) == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112f1cf48);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 == 0) {
      return;
    }
    func_0x000107c61170();
  }
  func_0x0001007d6c6c(1,0x6573207465736572,0xee00776f6c66646e,lVar2,&PTR_DAT_1105d82a8);
  uVar4 = 0;
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    func_0x000107c4fd64();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61170(uVar4);
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + _DAT_112f1cf48));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 102e15c84; end: 102e15e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e15c84(void)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
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
  undefined1 uStack_48;
  
  lVar5 = unaff_x20;
  func_0x000107c614f0();
  func_0x0001007d6c6c(1,0x44737365636f7270,0xee00646e65536469,lVar5,&PTR_DAT_1105d82a8);
  lVar3 = _DAT_112f1cf38;
  lVar5 = unaff_x20 + _DAT_112f1cf38;
  func_0x000107c61618();
  if (lVar5 == 0) {
    uStack_110 = 4;
  }
  else {
    cVar1 = *(char *)(lVar5 + _DAT_11306fb38);
    func_0x000107c61170();
    uStack_110 = 4;
    if (cVar1 == '\0') {
      uStack_110 = 5;
    }
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f1cf40);
  lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112f1cf40))[1];
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_48 = 5;
  uStack_b0 = 5;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_108 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_a8 = uStack_110;
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar5 + 0x28))(&uStack_110,uVar2,lVar5);
  FUN_102e1652c(&uStack_a8);
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar5 = lVar3 + _DAT_11306fb00;
    func_0x000107c61428(lVar5,auStack_128,0,0);
    lVar4 = lVar5;
    func_0x000107c61618();
    if (lVar4 == 0) {
      func_0x000107c61170(lVar3);
    }
    else {
      lVar5 = *(long *)(lVar5 + 8);
      func_0x000107c61170(lVar3);
      func_0x000107c614f0(lVar4);
      (**(code **)(lVar5 + 8))();
      func_0x000107c615e8(lVar4);
    }
  }
  FUN_102e15bb4();
  return;
}



/* Entry: 102e15e40; end: 102e15e9f; -[_TtC21PlayGamesServicesImpl24PlayGamesSendFlowHandler init] */

void FUN_102e15e40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesServicesImpl.PlayGamesSendFlowHandler",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e15e6c);
  (*pcVar1)();
}



/* Entry: 102e15ea0; end: 102e15f57; -[_TtC21PlayGamesServicesImpl24PlayGamesSendFlowHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102e15edc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e15ee0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e15ea0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f1cf38);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f1cf40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f1cf48));
  return;
}



/* Entry: 102e15f58; end: 102e15f77;  */

void FUN_102e15f58(void)

{
  func_0x000107c61168(&PTR_PTR_1128a7880);
  return;
}



/* Entry: 102e15f78; end: 102e15f7f;  */

void FUN_102e15f78(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  func_0x000107c614f0();
  lVar1 = 0;
  FUN_102e16434();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = (undefined8 *)(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 1;
  uVar4 = 0xd000000000000018;
  func_0x0001007d6c6c(1,0xd000000000000018,0x800000010f10ffe0,unaff_x20,&PTR_DAT_1105d82a8);
  func_0x000107c5eec4(lVar6);
  func_0x000107c5eeac();
  (**(code **)(lVar7 + 8))(lVar6,lVar2);
  *puVar5 = param_1;
  func_0x000107c6159c(puVar5,lVar1,0);
  func_0x000107c61174(param_1);
  func_0x000102e14148(uVar3,uVar4,puVar5,param_2);
  func_0x000107c6142c(uVar4);
  FUN_102e1646c(puVar5);
  func_0x000102e14c98(uVar3);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 102e15f80; end: 102e15fff;  */

void FUN_102e15f80(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102e15fc4;
  plVar1[0x10] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e150e0,0,0);
  return;
}



/* Entry: 102e16000; end: 102e16003;  */

void FUN_102e16000(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  func_0x000107c614f0();
  lVar1 = 0;
  FUN_102e16434();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 1;
  uVar4 = 0xd00000000000001b;
  func_0x0001007d6c6c(1,0xd00000000000001b,0x800000010f10fe40,unaff_x20,&PTR_DAT_1105d82a8);
  func_0x000107c5eec4(lVar6);
  func_0x000107c5eeac();
  (**(code **)(lVar7 + 8))(lVar6,lVar2);
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar5,param_1,lVar2);
  func_0x000107c6159c(puVar5,lVar1,1);
  func_0x000102e14148(uVar3,uVar4,puVar5,0);
  func_0x000107c6142c(uVar4);
  FUN_102e1646c(puVar5);
  func_0x000102e14c98(uVar3);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 102e16004; end: 102e1604b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102e16004(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f1cf48);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
  }
  return lVar1 != 0;
}



/* Entry: 102e1604c; end: 102e1604f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1604c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar2 = unaff_x20 + _DAT_112f1cf38;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar9 = lVar2 + _DAT_11306faf8;
    func_0x000107c61428(lVar9,auStack_68,0,0);
    lVar3 = lVar9;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c61170(lVar2);
    }
    else {
      lVar9 = *(long *)(lVar9 + 8);
      func_0x000107c61170(lVar2);
      lVar2 = lVar3;
      func_0x000107c614f0();
      (**(code **)(lVar9 + 8))();
      func_0x000107c615e8(lVar3);
      if (lVar2 != 0) {
        func_0x000102e20ab0();
        lVar8 = lVar9;
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar9);
        pcStack_78 = FUN_102e154d4;
        lStack_70 = 0;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_100de205c;
        puStack_80 = &UNK_1105d7860;
        ppuVar4 = &puStack_98;
        func_0x000107c60bc4(ppuVar4);
        puVar5 = PTR_PTR_1126aed70;
        func_0x000107c61168();
        func_0x000107c3dac8();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61170(lVar3);
        lVar1 = lStack_70;
        func_0x000107c61574();
        func_0x000102e209e4();
        lVar9 = lVar1;
        func_0x000100de9c28();
        func_0x000107c613fc();
        *(undefined8 *)(lVar9 + 0x18) = 3;
        *(undefined8 *)(lVar9 + 0x10) = 1;
        *(undefined **)(lVar9 + 0x20) = puVar5;
        puVar6 = PTR_PTR_1126aed78;
        func_0x000107c610f8(PTR_PTR_1126aed78);
        func_0x000107c61174(puVar5);
        func_0x000107c5fadc(lVar1,lVar8);
        func_0x000107c6142c(lVar8);
        uVar7 = 0;
        FUN_102e16700(0,0x112d360a8,&PTR_PTR_1126aed70);
        lVar3 = lVar9;
        func_0x000107c5fc48(lVar9,uVar7);
        func_0x000107c61574(lVar9);
        func_0x000107c48d50(puVar6);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar3);
        func_0x000107c4f018(lVar2);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar6);
        return;
      }
    }
  }
  func_0x0001007d6c6c(2,0x1000000000000039,0x800000010f10fe00,lVar1,&PTR_DAT_1105d82a8);
  return;
}



/* Entry: 102e16050; end: 102e160b3; -[_TtC21PlayGamesServicesImpl24PlayGamesSendFlowHandler didSendWithEvent:] */

void FUN_102e16050(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174(param_1);
  func_0x0001007d6c6c(1,0x646e6553646964,0xe700000000000000,uVar1,&PTR_DAT_1105d82a8);
  FUN_102e15c84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e160b4; end: 102e16123; -[_TtC21PlayGamesServicesImpl24PlayGamesSendFlowHandler didDismissSendFlow] */

void FUN_102e160b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174(param_1);
  func_0x0001007d6c6c(1,0xd000000000000012,0x800000010f1100b0,uVar1,&PTR_DAT_1105d82a8);
  FUN_102e15bb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e16124; end: 102e16153; -[_TtC21PlayGamesServicesImpl24PlayGamesSendFlowHandler willSendWithRecipientsCount:groupCount:] */

void FUN_102e16124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102e16560(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e16154; end: 102e16223;  */

/* WARNING: Possible PIC construction at 0x000102e16190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e161e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e16194) */
/* WARNING: Removing unreachable block (ram,0x000102e161c8) */
/* WARNING: Removing unreachable block (ram,0x000102e161d4) */
/* WARNING: Removing unreachable block (ram,0x000102e161ec) */

void FUN_102e16154(void)

{
  func_0x000107c614f0();
  func_0x000107c602fc(0x1a);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
  return;
}



/* Entry: 102e16224; end: 102e16253; -[_TtC21PlayGamesServicesImpl24PlayGamesSendFlowHandler didSendComplete:] */

void FUN_102e16224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102e16154(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e16254; end: 102e1631b; -[_TtC21PlayGamesServicesImpl24PlayGamesSendFlowHandler didCancelFromPreview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e16254(long param_1)

{
  long lVar1;
  undefined8 uVar2;
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
  undefined1 uStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  func_0x0001007d6c6c(1,0x1000000000000020,0x800000010f110040,lVar1,&PTR_DAT_1105d82a8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f1cf40);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f1cf40))[1];
  func_0x000107c614f0(uVar2);
  uStack_98 = 6;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 5;
  (**(code **)(lVar1 + 0x28))(&uStack_98,uVar2,lVar1);
  FUN_102e15bb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e1631c; end: 102e163a7; -[_TtC21PlayGamesServicesImpl24PlayGamesSendFlowHandler didSendSnapsAndPostToStory:storyTypes:] */

void FUN_102e1631c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    uVar1 = 0;
    FUN_102e16700(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar2 = uVar1;
    func_0x000100120cb0();
    func_0x000107c5fe10(param_4,uVar1,uVar2);
  }
  func_0x000107c61174(param_1);
  func_0x000102e16628(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 102e163a8; end: 102e16417; -[_TtC21PlayGamesServicesImpl24PlayGamesSendFlowHandler didSendChatMessage] */

void FUN_102e163a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174(param_1);
  func_0x0001007d6c6c(1,0xd000000000000019,0x800000010f110000,uVar1,&PTR_DAT_1105d82a8);
  FUN_102e15c84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e16418; end: 102e16433;  */

void FUN_102e16418(long param_1,long param_2)

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



/* Entry: 102e16434; end: 102e1646b;  */

void FUN_102e16434(undefined8 param_1)

{
  if (lRam0000000112f1d020 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e732dfc);
  return;
}



/* Entry: 102e1646c; end: 102e164a7;  */

undefined8 FUN_102e1646c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_102e16434();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102e164a8; end: 102e164b7;  */

void FUN_102e164a8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = auStack_58;
  func_0x000107c61428(lVar2 + 0x10,puVar4,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    func_0x000104366fc4(0xd000000000000013,0x800000010f10f920,uVar1,&PTR_DAT_1105d82a8);
  }
  else {
    func_0x000107c602fc(0x17);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c417f0(param_1);
    func_0x000107c61180();
    uVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c5fb78(uVar3,puVar4);
    func_0x000107c6142c(puVar4);
    func_0x0001007d6c6c(1,0xd000000000000015,0x800000010f10fee0,uVar1,&PTR_DAT_1105d82a8);
    func_0x000107c6142c(0x800000010f10fee0);
    func_0x000107c4f018(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102e164b8; end: 102e16523;  */

void FUN_102e164b8(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 102e16524; end: 102e1652b;  */

void FUN_102e16524(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102e1652c; end: 102e1655f;  */

undefined8 FUN_102e1652c(undefined8 param_1)

{
  (*(code *)&DAT_10433e764)();
  return param_1;
}



/* Entry: 102e16560; end: 102e166ff;  */

void FUN_102e16560(void)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c602fc(0x1a);
  func_0x000107c6142c(0xe000000000000000);
  puVar1 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar1);
  func_0x0001007d6c6c(1,0xd000000000000018,0x800000010f110090,unaff_x20,&PTR_DAT_1105d82a8);
  func_0x000107c6142c(0x800000010f110090);
  return;
}



/* Entry: 102e16700; end: 102e1673f;  */

void FUN_102e16700(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102e16740; end: 102e167fb;  */

long * FUN_102e16740(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    func_0x000107c614c4(param_2,param_3);
    bVar2 = (int)plVar3 != 1;
    if (bVar2) {
      *param_1 = *param_2;
      func_0x000107c61174();
    }
    else {
      lVar4 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
    }
    func_0x000107c6159c(param_1,param_3,!bVar2);
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



/* Entry: 102e167fc; end: 102e1684b;  */

void FUN_102e167fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  func_0x000107c614c4();
  if ((int)puVar1 == 1) {
    lVar2 = 0;
    func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000102e16838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 102e1684c; end: 102e16aa3;  */

undefined8 * FUN_102e1684c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  bVar1 = (int)puVar2 != 1;
  if (bVar1) {
    *param_1 = *param_2;
    func_0x000107c61174();
  }
  else {
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
  }
  func_0x000107c6159c(param_1,param_3,!bVar1);
  return param_1;
}



/* Entry: 102e16aa4; end: 102e16ad3;  */

void FUN_102e16aa4(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000102e16aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 102e16ad4; end: 102e16b47;  */

void FUN_102e16ad4(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBOWV_11034d658 + 0x40;
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61528(param_1,0x100,2,&puStack_30);
  }
  return;
}



/* Entry: 102e16b48; end: 102e16b67;  */

void FUN_102e16b48(long param_1,long param_2)

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



/* Entry: 102e16b68; end: 102e16c27;  */

/* WARNING: Removing unreachable block (ram,0x000102e16b94) */

bool FUN_102e16b68(void)

{
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
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
  
  func_0x000104886d18(&uStack_98);
  uStack_c8 = uStack_50;
  uStack_d0 = uStack_58;
  uStack_b8 = uStack_40;
  uStack_c0 = uStack_48;
  uStack_108 = uStack_90;
  uStack_110 = uStack_98;
  uStack_f8 = uStack_80;
  uStack_100 = uStack_88;
  uStack_b0 = uStack_38;
  uStack_e8 = uStack_70;
  uStack_f0 = uStack_78;
  uStack_d8 = uStack_60;
  uStack_e0 = uStack_68;
  FUN_102e11cf0(&uStack_110);
  return uStack_88 >> 0x3d == 1;
}



/* Entry: 102e16c28; end: 102e170f3;  */

/* WARNING: Removing unreachable block (ram,0x000102e16d20) */
/* WARNING: Removing unreachable block (ram,0x000102e16e24) */

void FUN_102e16c28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uVar2 = *unaff_x20;
  uStack_e0 = 0;
  uStack_d8 = 0xe000000000000000;
  func_0x000107c602fc(0x20);
  uStack_230 = uStack_e0;
  uStack_228 = uStack_d8;
  func_0x000107c5fb78(0xd000000000000011,0x800000010f110100);
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_80 = CONCAT71(uStack_80._1_7_,*(undefined1 *)(param_1 + 0xc));
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  func_0x000107c603d0(&uStack_e0,&uStack_230,&UNK_11075c228,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x74617473206e6920,0xeb00000000203a65);
  func_0x000104886d18(&uStack_150);
  uStack_98 = uStack_108;
  uStack_a0 = uStack_110;
  uStack_88 = uStack_f8;
  uStack_90 = uStack_100;
  uStack_80 = uStack_f0;
  uStack_d8 = uStack_148;
  uStack_e0 = uStack_150;
  uStack_c8 = uStack_138;
  uStack_d0 = uStack_140;
  uStack_b8 = uStack_128;
  uStack_c0 = uStack_130;
  uStack_a8 = uStack_118;
  uStack_b0 = uStack_120;
  func_0x000107c603d0(&uStack_150,&uStack_230,&UNK_11075c318,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  FUN_102e11cf0(&uStack_e0);
  uVar1 = uStack_228;
  func_0x0001007d6c6c(1,uStack_230,uStack_228,uVar2,&PTR_DAT_1105d8248);
  func_0x000107c6142c(uVar1);
  func_0x000104886d18(&uStack_150);
  uStack_258 = uStack_108;
  uStack_260 = uStack_110;
  uStack_248 = uStack_f8;
  uStack_250 = uStack_100;
  uStack_240 = uStack_f0;
  uStack_298 = uStack_148;
  uStack_2a0 = uStack_150;
  uStack_288 = uStack_138;
  uStack_290 = uStack_140;
  uStack_278 = uStack_128;
  uStack_280 = uStack_130;
  uStack_268 = uStack_118;
  uStack_270 = uStack_120;
  FUN_102e17274(&uStack_220,&uStack_150,param_1);
  if ((uStack_210 >> 0x3b & 3) == 0) {
    uStack_1a8 = uStack_210 & 0xe7ffffffffffffff;
    uStack_1b8 = uStack_220;
    uStack_1b0 = uStack_218;
    uStack_198 = uStack_200;
    uStack_1a0 = uStack_208;
    uStack_188 = uStack_1f0;
    uStack_190 = uStack_1f8;
    uStack_178 = uStack_1e0;
    uStack_180 = uStack_1e8;
    uStack_168 = uStack_1d0;
    uStack_170 = uStack_1d8;
    uStack_158 = uStack_1c0;
    uStack_160 = uStack_1c8;
    uStack_320 = 0;
    uStack_318 = 0xe000000000000000;
    func_0x000107c602fc(0x29);
    uStack_2b0 = uStack_320;
    uStack_2a8 = uStack_318;
    func_0x000107c5fb78(0xd000000000000027,0x800000010f110170);
    uStack_2d8 = uStack_170;
    uStack_2e0 = uStack_178;
    uStack_2c8 = uStack_160;
    uStack_2d0 = uStack_168;
    uStack_2c0 = uStack_158;
    uStack_318 = uStack_1b0;
    uStack_320 = uStack_1b8;
    uStack_308 = uStack_1a0;
    uStack_310 = uStack_1a8;
    uStack_2f8 = uStack_190;
    uStack_300 = uStack_198;
    uStack_2e8 = uStack_180;
    uStack_2f0 = uStack_188;
    func_0x000107c603d0(&uStack_320,&uStack_2b0,&UNK_11075c318,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar1 = uStack_2a8;
    func_0x0001007d6c6c(1,uStack_2b0,uStack_2a8,uVar2,&PTR_DAT_1105d8248);
    func_0x000107c6142c(uVar1);
    uStack_2d8 = uStack_170;
    uStack_2e0 = uStack_178;
    uStack_2c8 = uStack_160;
    uStack_2d0 = uStack_168;
    uStack_2c0 = uStack_158;
    uStack_318 = uStack_1b0;
    uStack_320 = uStack_1b8;
    uStack_308 = uStack_1a0;
    uStack_310 = uStack_1a8;
    uStack_2f8 = uStack_190;
    uStack_300 = uStack_198;
    uStack_2e8 = uStack_180;
    uStack_2f0 = uStack_188;
    func_0x0001007d6d78(&uStack_320);
    FUN_102e170f4(param_1,&uStack_1b8);
    FUN_102e11cf0(&uStack_2a0);
    FUN_102e17afc(&uStack_220);
  }
  else if (((uint)(uStack_210 >> 0x3b) & 3) == 1) {
    uStack_1b8 = 0;
    uStack_1b0 = 0xe000000000000000;
    func_0x000107c602fc(0x1f);
    func_0x000107c6142c(uStack_1b0);
    uStack_1b8 = 0xd00000000000001d;
    uStack_1b0 = 0x800000010f110150;
    func_0x000107c5fb78(uStack_220,uStack_218);
    FUN_102e17afc(&uStack_220);
    uVar1 = uStack_1b0;
    func_0x0001007d6c6c(1,uStack_1b8,uStack_1b0,uVar2,&PTR_DAT_1105d8248);
    FUN_102e11cf0(&uStack_2a0);
    func_0x000107c6142c(uVar1);
  }
  else {
    func_0x0001007d6c6c(3,0xd000000000000012,0x800000010f1101a0,uVar2,&PTR_DAT_1105d8248);
    FUN_102e11cf0(&uStack_2a0);
  }
  return;
}



/* Entry: 102e170f4; end: 102e171cf;  */

/* WARNING: Removing unreachable block (ram,0x000102e17198) */

void FUN_102e170f4(long *param_1,long param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  char acStack_41 [16];
  char cStack_31;
  
  if ((char)param_1[0xc] != '\x03') {
    if ((char)param_1[0xc] == '\x05') {
      lVar3 = param_1[9];
      lVar2 = param_1[8];
      lVar23 = param_1[5];
      lVar22 = param_1[4];
      lVar25 = param_1[7];
      lVar24 = param_1[6];
      bVar5 = (byte)lVar22 | (byte)lVar2 | (byte)lVar24 | *(byte *)(param_1 + 10);
      bVar6 = (byte)((ulong)lVar22 >> 8) | (byte)((ulong)lVar2 >> 8) |
              (byte)((ulong)lVar24 >> 8) | *(byte *)((long)param_1 + 0x51);
      bVar7 = (byte)((ulong)lVar22 >> 0x10) | (byte)((ulong)lVar2 >> 0x10) |
              (byte)((ulong)lVar24 >> 0x10) | *(byte *)((long)param_1 + 0x52);
      bVar8 = (byte)((ulong)lVar22 >> 0x18) | (byte)((ulong)lVar2 >> 0x18) |
              (byte)((ulong)lVar24 >> 0x18) | *(byte *)((long)param_1 + 0x53);
      bVar9 = (byte)((ulong)lVar22 >> 0x20) | (byte)((ulong)lVar2 >> 0x20) |
              (byte)((ulong)lVar24 >> 0x20) | *(byte *)((long)param_1 + 0x54);
      bVar10 = (byte)((ulong)lVar22 >> 0x28) | (byte)((ulong)lVar2 >> 0x28) |
               (byte)((ulong)lVar24 >> 0x28) | *(byte *)((long)param_1 + 0x55);
      bVar11 = (byte)((ulong)lVar22 >> 0x30) | (byte)((ulong)lVar2 >> 0x30) |
               (byte)((ulong)lVar24 >> 0x30) | *(byte *)((long)param_1 + 0x56);
      bVar12 = (byte)((ulong)lVar22 >> 0x38) | (byte)((ulong)lVar2 >> 0x38) |
               (byte)((ulong)lVar24 >> 0x38) | *(byte *)((long)param_1 + 0x57);
      bVar13 = (byte)lVar23 | (byte)lVar3 | (byte)lVar25 | *(byte *)(param_1 + 0xb);
      bVar14 = (byte)((ulong)lVar23 >> 8) | (byte)((ulong)lVar3 >> 8) |
               (byte)((ulong)lVar25 >> 8) | *(byte *)((long)param_1 + 0x59);
      bVar15 = (byte)((ulong)lVar23 >> 0x10) | (byte)((ulong)lVar3 >> 0x10) |
               (byte)((ulong)lVar25 >> 0x10) | *(byte *)((long)param_1 + 0x5a);
      bVar16 = (byte)((ulong)lVar23 >> 0x18) | (byte)((ulong)lVar3 >> 0x18) |
               (byte)((ulong)lVar25 >> 0x18) | *(byte *)((long)param_1 + 0x5b);
      bVar17 = (byte)((ulong)lVar23 >> 0x20) | (byte)((ulong)lVar3 >> 0x20) |
               (byte)((ulong)lVar25 >> 0x20) | *(byte *)((long)param_1 + 0x5c);
      bVar18 = (byte)((ulong)lVar23 >> 0x28) | (byte)((ulong)lVar3 >> 0x28) |
               (byte)((ulong)lVar25 >> 0x28) | *(byte *)((long)param_1 + 0x5d);
      bVar19 = (byte)((ulong)lVar23 >> 0x30) | (byte)((ulong)lVar3 >> 0x30) |
               (byte)((ulong)lVar25 >> 0x30) | *(byte *)((long)param_1 + 0x5e);
      bVar20 = (byte)((ulong)lVar23 >> 0x38) | (byte)((ulong)lVar3 >> 0x38) |
               (byte)((ulong)lVar25 >> 0x38) | *(byte *)((long)param_1 + 0x5f);
      auVar21[1] = bVar6;
      auVar21[0] = bVar5;
      auVar21[2] = bVar7;
      auVar21[3] = bVar8;
      auVar21[4] = bVar9;
      auVar21[5] = bVar10;
      auVar21[6] = bVar11;
      auVar21[7] = bVar12;
      auVar21[8] = bVar13;
      auVar21[9] = bVar14;
      auVar21[10] = bVar15;
      auVar21[0xb] = bVar16;
      auVar21[0xc] = bVar17;
      auVar21[0xd] = bVar18;
      auVar21[0xe] = bVar19;
      auVar21[0xf] = bVar20;
      auVar1[1] = bVar6;
      auVar1[0] = bVar5;
      auVar1[2] = bVar7;
      auVar1[3] = bVar8;
      auVar1[4] = bVar9;
      auVar1[5] = bVar10;
      auVar1[6] = bVar11;
      auVar1[7] = bVar12;
      auVar1[8] = bVar13;
      auVar1[9] = bVar14;
      auVar1[10] = bVar15;
      auVar1[0xb] = bVar16;
      auVar1[0xc] = bVar17;
      auVar1[0xd] = bVar18;
      auVar1[0xe] = bVar19;
      auVar1[0xf] = bVar20;
      auVar21 = NEON_ext(auVar21,auVar1,8,1);
      lVar2 = CONCAT17(bVar12 | auVar21[7],
                       CONCAT16(bVar11 | auVar21[6],
                                CONCAT15(bVar10 | auVar21[5],
                                         CONCAT14(bVar9 | auVar21[4],
                                                  CONCAT13(bVar8 | auVar21[3],
                                                           CONCAT12(bVar7 | auVar21[2],
                                                                    CONCAT11(bVar6 | auVar21[1],
                                                                             bVar5 | auVar21[0])))))
                               ));
      if (*param_1 == 1 && ((lVar2 == 0 && param_1[3] == 0) && (param_1[2] == 0 && param_1[1] == 0))
         ) {
        cVar4 = '\x01';
        goto LAB_102e17184;
      }
      if (*param_1 == 3 && ((lVar2 == 0 && param_1[3] == 0) && (param_1[2] == 0 && param_1[1] == 0))
         ) goto LAB_102e17178;
    }
    if (*(ulong *)(param_2 + 0x10) >> 0x3d == 2) {
      return;
    }
  }
LAB_102e17178:
  cVar4 = '\0';
LAB_102e17184:
  func_0x000104886d18(&cStack_31);
  if (cVar4 != cStack_31) {
    acStack_41[0] = cVar4;
    func_0x0001007d6d78(acStack_41);
  }
  return;
}



/* Entry: 102e171d0; end: 102e17223;  */

void FUN_102e171d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e17224; end: 102e17243;  */

void FUN_102e17224(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102e17244; end: 102e17273;  */

void FUN_102e17244(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_1;
  uStack_28 = param_2;
  func_0x0001002a64a8(&uStack_30);
  return;
}



/* Entry: 102e17274; end: 102e17afb;  */

void FUN_102e17274(long *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  char *pcVar23;
  long *in_x11;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *extraout_x11_02;
  long in_x13;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long extraout_x13_02;
  long extraout_x13_03;
  long extraout_x13_04;
  long extraout_x13_05;
  long extraout_x13_06;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined1 *unaff_x22;
  long *plVar24;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar41 [16];
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined1 uStack_120;
  undefined4 uStack_11f;
  undefined2 uStack_11b;
  undefined1 uStack_119;
  long *plStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long alStack_b8 [11];
  
  plVar24 = (long *)*param_3;
  plVar18 = (long *)*param_2;
  plVar17 = (long *)param_2[1];
  bVar25 = *(byte *)(param_3 + 0xc);
  lStack_110 = in_x13;
  plStack_d0 = unaff_x19;
  if (bVar25 < 3) {
    if (bVar25 == 0) {
      if ((ulong)param_2[2] >> 0x3e == 0) {
        func_0x000107c61174(plVar24);
        in_x11 = extraout_x11;
        lStack_110 = extraout_x13;
        plVar18 = plVar24;
        goto LAB_102e1769c;
      }
    }
    else if (bVar25 == 1) {
      if ((ulong)param_2[2] >> 0x3d == 0) {
        lVar21 = -0x6000000000000000;
        plVar24 = (long *)((ulong)plVar24 & 0xff);
        goto LAB_102e17a54;
      }
    }
    else {
      lVar22 = param_2[2];
      uVar20 = (uint)((ulong)lVar22 >> 0x20);
      if (uVar20 >> 0x1d == 2) {
        if (((ulong)plVar24 & 1) == 0) {
          func_0x000107c4b1dc();
          func_0x000107c61180();
          plVar24 = plVar18;
          func_0x000107c5faec();
          func_0x000107c61170(plVar18);
          lVar21 = 2;
          in_x11 = param_3;
          lStack_110 = 0;
          plStack_d0 = (long *)0x0;
          unaff_x20 = (long *)0x0;
          unaff_x21 = (long *)0x0;
          unaff_x22 = (undefined1 *)0x0;
          unaff_x24 = 0;
          unaff_x25 = 0;
          unaff_x26 = 0;
          unaff_x27 = 0;
          unaff_x28 = 0;
          goto LAB_102e17a54;
        }
        goto LAB_102e17570;
      }
LAB_102e174ac:
      if ((uVar20 >> 0x1d == 6) && (lVar22 == -0x4000000000000000)) {
        uVar7 = param_2[10];
        uVar6 = param_2[9];
        uVar43 = param_2[0xc];
        uVar42 = param_2[0xb];
        uVar45 = param_2[8];
        uVar44 = param_2[7];
        bVar25 = *(byte *)(param_2 + 5) | (byte)uVar6 | (byte)uVar44 | (byte)uVar42;
        bVar26 = *(byte *)((long)param_2 + 0x29) | (byte)((ulong)uVar6 >> 8) |
                 (byte)((ulong)uVar44 >> 8) | (byte)((ulong)uVar42 >> 8);
        bVar27 = *(byte *)((long)param_2 + 0x2a) | (byte)((ulong)uVar6 >> 0x10) |
                 (byte)((ulong)uVar44 >> 0x10) | (byte)((ulong)uVar42 >> 0x10);
        bVar28 = *(byte *)((long)param_2 + 0x2b) | (byte)((ulong)uVar6 >> 0x18) |
                 (byte)((ulong)uVar44 >> 0x18) | (byte)((ulong)uVar42 >> 0x18);
        bVar29 = *(byte *)((long)param_2 + 0x2c) | (byte)((ulong)uVar6 >> 0x20) |
                 (byte)((ulong)uVar44 >> 0x20) | (byte)((ulong)uVar42 >> 0x20);
        bVar30 = *(byte *)((long)param_2 + 0x2d) | (byte)((ulong)uVar6 >> 0x28) |
                 (byte)((ulong)uVar44 >> 0x28) | (byte)((ulong)uVar42 >> 0x28);
        bVar31 = *(byte *)((long)param_2 + 0x2e) | (byte)((ulong)uVar6 >> 0x30) |
                 (byte)((ulong)uVar44 >> 0x30) | (byte)((ulong)uVar42 >> 0x30);
        bVar32 = *(byte *)((long)param_2 + 0x2f) | (byte)((ulong)uVar6 >> 0x38) |
                 (byte)((ulong)uVar44 >> 0x38) | (byte)((ulong)uVar42 >> 0x38);
        bVar33 = *(byte *)(param_2 + 6) | (byte)uVar7 | (byte)uVar45 | (byte)uVar43;
        bVar34 = *(byte *)((long)param_2 + 0x31) | (byte)((ulong)uVar7 >> 8) |
                 (byte)((ulong)uVar45 >> 8) | (byte)((ulong)uVar43 >> 8);
        bVar35 = *(byte *)((long)param_2 + 0x32) | (byte)((ulong)uVar7 >> 0x10) |
                 (byte)((ulong)uVar45 >> 0x10) | (byte)((ulong)uVar43 >> 0x10);
        bVar36 = *(byte *)((long)param_2 + 0x33) | (byte)((ulong)uVar7 >> 0x18) |
                 (byte)((ulong)uVar45 >> 0x18) | (byte)((ulong)uVar43 >> 0x18);
        bVar37 = *(byte *)((long)param_2 + 0x34) | (byte)((ulong)uVar7 >> 0x20) |
                 (byte)((ulong)uVar45 >> 0x20) | (byte)((ulong)uVar43 >> 0x20);
        bVar38 = *(byte *)((long)param_2 + 0x35) | (byte)((ulong)uVar7 >> 0x28) |
                 (byte)((ulong)uVar45 >> 0x28) | (byte)((ulong)uVar43 >> 0x28);
        bVar39 = *(byte *)((long)param_2 + 0x36) | (byte)((ulong)uVar7 >> 0x30) |
                 (byte)((ulong)uVar45 >> 0x30) | (byte)((ulong)uVar43 >> 0x30);
        bVar40 = *(byte *)((long)param_2 + 0x37) | (byte)((ulong)uVar7 >> 0x38) |
                 (byte)((ulong)uVar45 >> 0x38) | (byte)((ulong)uVar43 >> 0x38);
        auVar3[1] = bVar26;
        auVar3[0] = bVar25;
        auVar3[2] = bVar27;
        auVar3[3] = bVar28;
        auVar3[4] = bVar29;
        auVar3[5] = bVar30;
        auVar3[6] = bVar31;
        auVar3[7] = bVar32;
        auVar3[8] = bVar33;
        auVar3[9] = bVar34;
        auVar3[10] = bVar35;
        auVar3[0xb] = bVar36;
        auVar3[0xc] = bVar37;
        auVar3[0xd] = bVar38;
        auVar3[0xe] = bVar39;
        auVar3[0xf] = bVar40;
        auVar4[1] = bVar26;
        auVar4[0] = bVar25;
        auVar4[2] = bVar27;
        auVar4[3] = bVar28;
        auVar4[4] = bVar29;
        auVar4[5] = bVar30;
        auVar4[6] = bVar31;
        auVar4[7] = bVar32;
        auVar4[8] = bVar33;
        auVar4[9] = bVar34;
        auVar4[10] = bVar35;
        auVar4[0xb] = bVar36;
        auVar4[0xc] = bVar37;
        auVar4[0xd] = bVar38;
        auVar4[0xe] = bVar39;
        auVar4[0xf] = bVar40;
        auVar41 = NEON_ext(auVar3,auVar4,8,1);
        if ((CONCAT17(bVar32 | auVar41[7],
                      CONCAT16(bVar31 | auVar41[6],
                               CONCAT15(bVar30 | auVar41[5],
                                        CONCAT14(bVar29 | auVar41[4],
                                                 CONCAT13(bVar28 | auVar41[3],
                                                          CONCAT12(bVar27 | auVar41[2],
                                                                   CONCAT11(bVar26 | auVar41[1],
                                                                            bVar25 | auVar41[0])))))
                              )) == 0 && param_2[4] == 0) &&
            ((param_2[3] == 0 && plVar18 == (long *)0x0) && plVar17 == (long *)0x0)) {
          in_x11 = (long *)0x800000010f1102a0;
          plVar24 = (long *)0xd00000000000001c;
          plStack_d0 = unaff_x19;
          goto LAB_102e17700;
        }
      }
    }
  }
  else {
    if (bVar25 == 3) {
      lVar22 = param_2[2];
      uVar20 = (uint)((ulong)lVar22 >> 0x20);
      uVar19 = uVar20 >> 0x1d;
      if (uVar20 >> 0x1d < 3) {
        if (uVar19 == 1) {
          in_x11 = (long *)0x800000010f1102c0;
          plVar24 = (long *)0xd00000000000001e;
          goto LAB_102e17700;
        }
        if (uVar19 != 2) goto LAB_102e17a20;
      }
      else if (uVar19 != 3) goto LAB_102e174ac;
      if (((ulong)plVar24 & 1) != 0) {
LAB_102e17570:
        func_0x000107c4b1dc();
        func_0x000107c61180();
        plVar24 = plVar18;
        func_0x000107c5faec();
        func_0x000107c61170(plVar18);
        lVar21 = -0x8000000000000000;
        in_x11 = param_3;
        lStack_110 = extraout_x13_01;
        plStack_d0 = param_1;
        unaff_x20 = param_3;
        unaff_x21 = plVar18;
        goto LAB_102e17a54;
      }
LAB_102e1768c:
      func_0x000102e17b78(param_2,&uStack_120);
      in_x11 = extraout_x11_02;
      lStack_110 = extraout_x13_04;
LAB_102e1769c:
      lVar21 = 0x2000000000000000;
      plStack_d0 = param_1;
      plVar24 = plVar18;
      goto LAB_102e17a54;
    }
    plVar1 = (long *)param_3[1];
    lVar22 = param_3[2];
    unaff_x25 = param_3[3];
    unaff_x26 = param_3[4];
    unaff_x27 = param_3[5];
    unaff_x28 = param_3[6];
    unaff_x20 = (long *)param_3[7];
    unaff_x22 = (undefined1 *)param_3[8];
    unaff_x21 = (long *)param_3[9];
    plVar2 = (long *)param_3[10];
    unaff_x24 = param_3[0xb];
    plStack_d0 = plVar2;
    if (bVar25 == 4) {
      uStack_120 = SUB81(plVar24,0);
      uStack_119 = (undefined1)((ulong)plVar24 >> 0x38);
      uStack_11b = (undefined2)((ulong)plVar24 >> 0x28);
      uStack_11f = (undefined4)((ulong)plVar24 >> 8);
      uVar20 = (uint)((ulong)param_2[2] >> 0x20);
      uVar19 = uVar20 >> 0x1d;
      in_x11 = plVar1;
      lStack_110 = lVar22;
      plStack_118 = plVar1;
      lStack_108 = unaff_x25;
      lStack_100 = unaff_x26;
      lStack_f8 = unaff_x27;
      lStack_f0 = unaff_x28;
      plStack_e8 = unaff_x20;
      puStack_e0 = unaff_x22;
      plStack_d8 = unaff_x21;
      lStack_c8 = unaff_x24;
      if (uVar20 >> 0x1d < 4) {
        if (1 < uVar19 - 2) {
          if (uVar19 != 0) {
            func_0x000107c61434(plVar1);
            unaff_x21 = alStack_b8;
            func_0x000102e17b28(&lStack_110);
            func_0x000107c4b1dc();
            func_0x000107c61180();
            plVar17 = plVar18;
            func_0x000107c5faec();
            func_0x000107c61170(plVar18);
            if ((plVar24 == plVar17) && (unaff_x21 == plVar1)) {
              func_0x000107c6142c(unaff_x21);
              unaff_x20 = plVar17;
            }
            else {
              unaff_x20 = plVar24;
              func_0x000107c605b8(plVar24,plVar1,plVar17,unaff_x21,0);
              func_0x000107c6142c(unaff_x21);
              if (((ulong)unaff_x20 & 1) == 0) {
                lVar21 = 0;
                unaff_x20 = plStack_e8;
                unaff_x21 = plStack_d8;
                unaff_x22 = puStack_e0;
                unaff_x24 = lStack_c8;
                unaff_x25 = lStack_108;
                unaff_x26 = lStack_100;
                unaff_x27 = lStack_f8;
                unaff_x28 = lStack_f0;
                goto LAB_102e17a54;
              }
            }
            func_0x000102e04190(&lStack_110);
            func_0x000107c6142c(plVar1);
            lVar21 = 0x800000000000000;
            in_x11 = (long *)0x800000010f110250;
            lStack_110 = extraout_x13_06;
            plStack_d0 = plVar24;
            unaff_x22 = &uStack_120;
            plVar24 = (long *)0xd000000000000021;
            goto LAB_102e17a54;
          }
          if (((plVar18 == plVar24) && (plVar17 == plVar1)) ||
             (func_0x000107c605b8(plVar18,plVar17,plVar24,plVar1,0), in_x13 = extraout_x13_03,
             ((ulong)plVar18 & 1) != 0)) {
            in_x11 = (long *)0x800000010f1101f0;
            plVar24 = (long *)0xd000000000000025;
            lStack_110 = in_x13;
            plStack_d0 = plVar2;
            goto LAB_102e17700;
          }
          func_0x000107c61434(plVar1);
          func_0x000102e17b28(&lStack_110,alStack_b8);
LAB_102e17948:
          lVar21 = 0;
          lStack_110 = lVar22;
          plStack_d0 = plVar2;
          goto LAB_102e17a54;
        }
        pcVar23 = "switchLens rejected during capture";
        lStack_110 = in_x13;
      }
      else {
        if (uVar19 != 4) {
          if (uVar19 == 5) {
            func_0x000107c61434(plVar1);
            func_0x000102e17b28(&lStack_110,alStack_b8);
            lVar21 = 0;
            lStack_110 = lVar22;
            plStack_d0 = plVar2;
            goto LAB_102e17a54;
          }
          goto LAB_102e17a20;
        }
        if (((plVar24 != plVar18) || (plVar17 != plVar1)) &&
           (plVar16 = plVar24, func_0x000107c605b8(plVar24,plVar1,plVar18,plVar17,0),
           in_x13 = extraout_x13_05, ((ulong)plVar16 & 1) == 0)) {
          func_0x000107c61434(plVar1);
          func_0x000102e17b28(&lStack_110,alStack_b8);
          goto LAB_102e17948;
        }
        pcVar23 = "switchLens to same id from preview";
        lStack_110 = in_x13;
      }
      plVar24 = (long *)0xd000000000000022;
      in_x11 = (long *)((ulong)(pcVar23 + -0x20) | 0x8000000000000000);
      plStack_d0 = plVar2;
LAB_102e17700:
      lVar21 = 0x800000000000000;
      goto LAB_102e17a54;
    }
    if ((((((plVar1 == (long *)0x0 && plVar24 == (long *)0x0) && (lVar22 == 0 && unaff_x25 == 0)) &&
          ((unaff_x26 == 0 && unaff_x27 == 0) && unaff_x28 == 0)) &&
         (((unaff_x20 == (long *)0x0 && unaff_x22 == (undefined1 *)0x0) && unaff_x21 == (long *)0x0)
         && plVar2 == (long *)0x0)) && unaff_x24 == 0) ||
       ((plVar24 == (long *)0x1 &&
        ((((lVar22 == 0 && plVar1 == (long *)0x0) && (unaff_x25 == 0 && unaff_x26 == 0)) &&
         ((unaff_x27 == 0 && unaff_x28 == 0) && unaff_x20 == (long *)0x0)) &&
         (((unaff_x22 == (undefined1 *)0x0 && unaff_x21 == (long *)0x0) && plVar2 == (long *)0x0) &&
         unaff_x24 == 0))))) {
      if ((ulong)param_2[2] >> 0x3d == 1) {
        func_0x000107c61174(plVar18);
        lVar21 = 0x4000000000000000;
        in_x11 = extraout_x11_00;
        lStack_110 = extraout_x13_00;
        plStack_d0 = param_1;
        plVar24 = plVar18;
        goto LAB_102e17a54;
      }
    }
    else if ((plVar24 == (long *)0x2) &&
            ((((lVar22 == 0 && plVar1 == (long *)0x0) && (unaff_x25 == 0 && unaff_x26 == 0)) &&
             ((unaff_x27 == 0 && unaff_x28 == 0) && unaff_x20 == (long *)0x0)) &&
             (((unaff_x22 == (undefined1 *)0x0 && unaff_x21 == (long *)0x0) && plVar2 == (long *)0x0
              ) && unaff_x24 == 0))) {
      if ((ulong)param_2[2] >> 0x3d == 2) {
        func_0x000107c61174(plVar18);
        lVar21 = 0x6000000000000000;
        in_x11 = extraout_x11_01;
        lStack_110 = extraout_x13_02;
        plStack_d0 = param_1;
        plVar24 = plVar18;
        goto LAB_102e17a54;
      }
    }
    else if ((plVar24 == (long *)0x3) &&
            ((((lVar22 == 0 && plVar1 == (long *)0x0) && (unaff_x25 == 0 && unaff_x26 == 0)) &&
             ((unaff_x27 == 0 && unaff_x28 == 0) && unaff_x20 == (long *)0x0)) &&
             (((unaff_x22 == (undefined1 *)0x0 && unaff_x21 == (long *)0x0) && plVar2 == (long *)0x0
              ) && unaff_x24 == 0))) {
      uVar20 = (uint)((ulong)param_2[2] >> 0x3d);
      if (uVar20 - 2 < 2) goto LAB_102e1768c;
      if ((uVar20 == 6) && (param_2[2] == -0x4000000000000000)) {
        uVar7 = param_2[10];
        uVar6 = param_2[9];
        uVar43 = param_2[0xc];
        uVar42 = param_2[0xb];
        uVar45 = param_2[8];
        uVar44 = param_2[7];
        bVar25 = *(byte *)(param_2 + 5) | (byte)uVar6 | (byte)uVar44 | (byte)uVar42;
        bVar26 = *(byte *)((long)param_2 + 0x29) | (byte)((ulong)uVar6 >> 8) |
                 (byte)((ulong)uVar44 >> 8) | (byte)((ulong)uVar42 >> 8);
        bVar27 = *(byte *)((long)param_2 + 0x2a) | (byte)((ulong)uVar6 >> 0x10) |
                 (byte)((ulong)uVar44 >> 0x10) | (byte)((ulong)uVar42 >> 0x10);
        bVar28 = *(byte *)((long)param_2 + 0x2b) | (byte)((ulong)uVar6 >> 0x18) |
                 (byte)((ulong)uVar44 >> 0x18) | (byte)((ulong)uVar42 >> 0x18);
        bVar29 = *(byte *)((long)param_2 + 0x2c) | (byte)((ulong)uVar6 >> 0x20) |
                 (byte)((ulong)uVar44 >> 0x20) | (byte)((ulong)uVar42 >> 0x20);
        bVar30 = *(byte *)((long)param_2 + 0x2d) | (byte)((ulong)uVar6 >> 0x28) |
                 (byte)((ulong)uVar44 >> 0x28) | (byte)((ulong)uVar42 >> 0x28);
        bVar31 = *(byte *)((long)param_2 + 0x2e) | (byte)((ulong)uVar6 >> 0x30) |
                 (byte)((ulong)uVar44 >> 0x30) | (byte)((ulong)uVar42 >> 0x30);
        bVar32 = *(byte *)((long)param_2 + 0x2f) | (byte)((ulong)uVar6 >> 0x38) |
                 (byte)((ulong)uVar44 >> 0x38) | (byte)((ulong)uVar42 >> 0x38);
        bVar33 = *(byte *)(param_2 + 6) | (byte)uVar7 | (byte)uVar45 | (byte)uVar43;
        bVar34 = *(byte *)((long)param_2 + 0x31) | (byte)((ulong)uVar7 >> 8) |
                 (byte)((ulong)uVar45 >> 8) | (byte)((ulong)uVar43 >> 8);
        bVar35 = *(byte *)((long)param_2 + 0x32) | (byte)((ulong)uVar7 >> 0x10) |
                 (byte)((ulong)uVar45 >> 0x10) | (byte)((ulong)uVar43 >> 0x10);
        bVar36 = *(byte *)((long)param_2 + 0x33) | (byte)((ulong)uVar7 >> 0x18) |
                 (byte)((ulong)uVar45 >> 0x18) | (byte)((ulong)uVar43 >> 0x18);
        bVar37 = *(byte *)((long)param_2 + 0x34) | (byte)((ulong)uVar7 >> 0x20) |
                 (byte)((ulong)uVar45 >> 0x20) | (byte)((ulong)uVar43 >> 0x20);
        bVar38 = *(byte *)((long)param_2 + 0x35) | (byte)((ulong)uVar7 >> 0x28) |
                 (byte)((ulong)uVar45 >> 0x28) | (byte)((ulong)uVar43 >> 0x28);
        bVar39 = *(byte *)((long)param_2 + 0x36) | (byte)((ulong)uVar7 >> 0x30) |
                 (byte)((ulong)uVar45 >> 0x30) | (byte)((ulong)uVar43 >> 0x30);
        bVar40 = *(byte *)((long)param_2 + 0x37) | (byte)((ulong)uVar7 >> 0x38) |
                 (byte)((ulong)uVar45 >> 0x38) | (byte)((ulong)uVar43 >> 0x38);
        auVar41[1] = bVar26;
        auVar41[0] = bVar25;
        auVar41[2] = bVar27;
        auVar41[3] = bVar28;
        auVar41[4] = bVar29;
        auVar41[5] = bVar30;
        auVar41[6] = bVar31;
        auVar41[7] = bVar32;
        auVar41[8] = bVar33;
        auVar41[9] = bVar34;
        auVar41[10] = bVar35;
        auVar41[0xb] = bVar36;
        auVar41[0xc] = bVar37;
        auVar41[0xd] = bVar38;
        auVar41[0xe] = bVar39;
        auVar41[0xf] = bVar40;
        auVar5[1] = bVar26;
        auVar5[0] = bVar25;
        auVar5[2] = bVar27;
        auVar5[3] = bVar28;
        auVar5[4] = bVar29;
        auVar5[5] = bVar30;
        auVar5[6] = bVar31;
        auVar5[7] = bVar32;
        auVar5[8] = bVar33;
        auVar5[9] = bVar34;
        auVar5[10] = bVar35;
        auVar5[0xb] = bVar36;
        auVar5[0xc] = bVar37;
        auVar5[0xd] = bVar38;
        auVar5[0xe] = bVar39;
        auVar5[0xf] = bVar40;
        auVar41 = NEON_ext(auVar41,auVar5,8,1);
        if ((CONCAT17(bVar32 | auVar41[7],
                      CONCAT16(bVar31 | auVar41[6],
                               CONCAT15(bVar30 | auVar41[5],
                                        CONCAT14(bVar29 | auVar41[4],
                                                 CONCAT13(bVar28 | auVar41[3],
                                                          CONCAT12(bVar27 | auVar41[2],
                                                                   CONCAT11(bVar26 | auVar41[1],
                                                                            bVar25 | auVar41[0])))))
                              )) == 0 && param_2[4] == 0) &&
            ((param_2[3] == 0 && plVar18 == (long *)0x0) && plVar17 == (long *)0x0)) {
          in_x11 = (long *)0x800000010f110280;
          plVar24 = (long *)0xd000000000000014;
          goto LAB_102e17700;
        }
      }
    }
    else if ((plVar24 == (long *)0x4) &&
            ((((lVar22 == 0 && plVar1 == (long *)0x0) && (unaff_x25 == 0 && unaff_x26 == 0)) &&
             ((unaff_x27 == 0 && unaff_x28 == 0) && unaff_x20 == (long *)0x0)) &&
             (((unaff_x22 == (undefined1 *)0x0 && unaff_x21 == (long *)0x0) && plVar2 == (long *)0x0
              ) && unaff_x24 == 0))) {
      if ((long)param_2[2] < -0x6000000000000000) {
        lStack_110 = 0;
        plStack_d0 = (long *)0x0;
        lVar21 = -0x4000000000000000;
        in_x11 = (long *)0x0;
        unaff_x20 = (long *)0x0;
        unaff_x21 = (long *)0x0;
        unaff_x22 = (undefined1 *)0x0;
        plVar24 = (long *)0x0;
        unaff_x24 = 0;
        unaff_x25 = 0;
        unaff_x26 = 0;
        unaff_x27 = 0;
        unaff_x28 = 0;
        goto LAB_102e17a54;
      }
    }
    else if ((plVar24 == (long *)0x5) &&
            ((((lVar22 == 0 && plVar1 == (long *)0x0) && (unaff_x25 == 0 && unaff_x26 == 0)) &&
             ((unaff_x27 == 0 && unaff_x28 == 0) && unaff_x20 == (long *)0x0)) &&
             (((unaff_x22 == (undefined1 *)0x0 && unaff_x21 == (long *)0x0) && plVar2 == (long *)0x0
              ) && unaff_x24 == 0))) {
      if ((long)param_2[2] < -0x6000000000000000) {
        func_0x000107c61434(plVar17);
        lStack_110 = 0;
        unaff_x25 = 0;
        unaff_x26 = 0;
        unaff_x27 = 0;
        unaff_x28 = 0;
        unaff_x20 = (long *)0x0;
        unaff_x22 = (undefined1 *)0x0;
        plStack_d0 = (long *)0x0;
        unaff_x24 = 0;
        lVar21 = 3;
        in_x11 = plVar17;
        unaff_x21 = (long *)0x0;
        plVar24 = plVar18;
        goto LAB_102e17a54;
      }
    }
    else {
      lVar21 = -0x4000000000000000;
      lStack_110 = 0;
      plStack_d0 = (long *)0x0;
      in_x11 = (long *)0x0;
      if (plVar24 != (long *)0x6) {
        unaff_x20 = (long *)0x0;
        unaff_x21 = (long *)0x0;
        unaff_x22 = (undefined1 *)0x0;
        plVar24 = (long *)0x0;
        unaff_x24 = 0;
        unaff_x25 = 0;
        unaff_x26 = 0;
        unaff_x27 = 0;
        unaff_x28 = 0;
        goto LAB_102e17a54;
      }
      bVar10 = unaff_x25 != 0;
      bVar11 = unaff_x26 != 0;
      bVar12 = unaff_x27 != 0;
      bVar13 = unaff_x28 != 0;
      bVar9 = unaff_x20 != (long *)0x0;
      bVar14 = unaff_x22 != (undefined1 *)0x0;
      bVar15 = unaff_x21 != (long *)0x0;
      bVar8 = unaff_x24 != 0;
      unaff_x20 = (long *)0x0;
      unaff_x21 = (long *)0x0;
      unaff_x22 = (undefined1 *)0x0;
      plVar24 = (long *)0x0;
      unaff_x24 = 0;
      unaff_x25 = 0;
      unaff_x26 = 0;
      unaff_x27 = 0;
      unaff_x28 = 0;
      if ((((lVar22 != 0 || plVar1 != (long *)0x0) || (bVar10 || bVar11)) ||
          ((bVar12 || bVar13) || bVar9)) || (((bVar14 || bVar15) || plVar2 != (long *)0x0) || bVar8)
         ) goto LAB_102e17a54;
      uVar20 = (uint)((ulong)param_2[2] >> 0x3d);
      if (uVar20 == 2) {
        func_0x000107c4b1dc();
        func_0x000107c61180();
        plVar24 = plVar18;
        func_0x000107c5faec();
        func_0x000107c61170(plVar18);
        lStack_110 = 0;
        plStack_d0 = (long *)0x0;
        lVar21 = 1;
        in_x11 = param_3;
        unaff_x20 = (long *)0x0;
        unaff_x21 = (long *)0x0;
        unaff_x22 = (undefined1 *)0x0;
        unaff_x24 = 0;
        unaff_x25 = 0;
        unaff_x26 = 0;
        unaff_x27 = 0;
        unaff_x28 = 0;
        goto LAB_102e17a54;
      }
      if (uVar20 == 4) {
        func_0x000107c61434(plVar17);
        lStack_110 = 0;
        unaff_x25 = 0;
        unaff_x26 = 0;
        unaff_x27 = 0;
        unaff_x28 = 0;
        unaff_x20 = (long *)0x0;
        unaff_x22 = (undefined1 *)0x0;
        plStack_d0 = (long *)0x0;
        unaff_x24 = 0;
        lVar21 = 1;
        in_x11 = plVar17;
        unaff_x21 = (long *)0x0;
        plVar24 = plVar18;
        goto LAB_102e17a54;
      }
    }
  }
LAB_102e17a20:
  lVar21 = 0x1000000000000000;
  in_x11 = (long *)0x0;
  lStack_110 = 0;
  plStack_d0 = (long *)0x0;
  unaff_x20 = (long *)0x0;
  unaff_x21 = (long *)0x0;
  unaff_x22 = (undefined1 *)0x0;
  plVar24 = (long *)0x0;
  unaff_x24 = 0;
  unaff_x25 = 0;
  unaff_x26 = 0;
  unaff_x27 = 0;
  unaff_x28 = 0;
LAB_102e17a54:
  *param_1 = (long)plVar24;
  param_1[1] = (long)in_x11;
  param_1[2] = lVar21;
  param_1[3] = lStack_110;
  param_1[4] = unaff_x25;
  param_1[5] = unaff_x26;
  param_1[6] = unaff_x27;
  param_1[7] = unaff_x28;
  param_1[8] = (long)unaff_x20;
  param_1[9] = (long)unaff_x22;
  param_1[10] = (long)unaff_x21;
  param_1[0xb] = (long)plStack_d0;
  param_1[0xc] = unaff_x24;
  return;
}



/* Entry: 102e17afc; end: 102e17bdf;  */

undefined8 FUN_102e17afc(undefined8 param_1)

{
  FUN_102e17c18(param_1,&UNK_1105d7ab0);
  return param_1;
}



/* Entry: 102e17be0; end: 102e17c17;  */

/* WARNING: Possible PIC construction at 0x000102e126c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e126cc) */
/* WARNING: Removing unreachable block (ram,0x000102e12710) */
/* WARNING: Removing unreachable block (ram,0x000102e12770) */
/* WARNING: Removing unreachable block (ram,0x000102e12714) */

void FUN_102e17be0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((ulong)param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1b & 3;
  if (uVar2 != 1) {
    if (uVar2 != 0) {
      return;
    }
    uVar2 = uVar1 >> 0x1d;
    if (uVar1 >> 0x1d < 2) {
      if (uVar2 != 0) {
        if (uVar2 != 1) {
          return;
        }
        goto _objc_retain;
      }
    }
    else {
      if ((uVar2 == 2) || (uVar2 == 3)) {
_objc_retain:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_retain_11034d2d8)();
        return;
      }
      if (uVar2 != 4) {
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 102e17c18; end: 102e17c57;  */

void FUN_102e17c18(undefined8 *param_1)

{
  FUN_102e17c58(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc]);
  return;
}



/* Entry: 102e17c58; end: 102e17c8f;  */

/* WARNING: Possible PIC construction at 0x000102e17d0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e17d10) */
/* WARNING: Removing unreachable block (ram,0x000102e17d54) */
/* WARNING: Removing unreachable block (ram,0x000102e17db4) */
/* WARNING: Removing unreachable block (ram,0x000102e17d58) */

void FUN_102e17c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((ulong)param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1b & 3;
  if (uVar2 != 1) {
    if (uVar2 != 0) {
      return;
    }
    uVar2 = uVar1 >> 0x1d;
    if (uVar1 >> 0x1d < 2) {
      if (uVar2 != 0) {
        if (uVar2 != 1) {
          return;
        }
        goto _objc_release;
      }
    }
    else {
      if ((uVar2 == 2) || (uVar2 == 3)) {
_objc_release:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)();
        return;
      }
      if (uVar2 != 4) {
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102e17c90; end: 102e17d53;  */

/* WARNING: Possible PIC construction at 0x000102e17d0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e17d10) */
/* WARNING: Removing unreachable block (ram,0x000102e17d54) */
/* WARNING: Removing unreachable block (ram,0x000102e17db4) */
/* WARNING: Removing unreachable block (ram,0x000102e17d58) */

void FUN_102e17c90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((ulong)param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1d;
  if (uVar1 >> 0x1d < 2) {
    if (uVar2 != 0) {
      if (uVar2 != 1) {
        return;
      }
      goto _objc_release;
    }
  }
  else {
    if ((uVar2 == 2) || (uVar2 == 3)) {
_objc_release:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
    if (uVar2 != 4) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102e17d54; end: 102e17db7;  */

/* WARNING: Possible PIC construction at 0x000102e17d84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e17d88) */

void FUN_102e17d54(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 102e17db8; end: 102e17deb;  */

/* WARNING: Possible PIC construction at 0x000102e17dd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e17ddc) */

void FUN_102e17db8(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102e17dec; end: 102e17f8f;  */

undefined8 * FUN_102e17dec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar1 = *param_2;
  uVar7 = param_2[1];
  uVar2 = param_2[2];
  uVar8 = param_2[3];
  uVar3 = param_2[4];
  uVar9 = param_2[5];
  uVar4 = param_2[6];
  uVar10 = param_2[7];
  uVar5 = param_2[8];
  uVar11 = param_2[9];
  uVar6 = param_2[10];
  uVar12 = param_2[0xb];
  uVar13 = param_2[0xc];
  FUN_102e17be0(uVar1,uVar7,uVar2,uVar8,uVar3,uVar9,uVar4,uVar10,uVar5,uVar11,uVar6,uVar12,uVar13);
  *param_1 = uVar1;
  param_1[1] = uVar7;
  param_1[2] = uVar2;
  param_1[3] = uVar8;
  param_1[4] = uVar3;
  param_1[5] = uVar9;
  param_1[6] = uVar4;
  param_1[7] = uVar10;
  param_1[8] = uVar5;
  param_1[9] = uVar11;
  param_1[10] = uVar6;
  param_1[0xb] = uVar12;
  param_1[0xc] = uVar13;
  return param_1;
}



/* Entry: 102e17f90; end: 102e18003;  */

undefined8 * FUN_102e17f90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar9 = param_2[0xc];
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar8 = param_1[7];
  uVar12 = param_1[9];
  uVar11 = param_1[8];
  uVar14 = param_1[0xb];
  uVar13 = param_1[10];
  uVar10 = param_1[0xc];
  uVar15 = *param_2;
  uVar17 = param_2[3];
  uVar16 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar15;
  param_1[3] = uVar17;
  param_1[2] = uVar16;
  uVar15 = param_2[4];
  uVar17 = param_2[7];
  uVar16 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar15;
  param_1[7] = uVar17;
  param_1[6] = uVar16;
  uVar15 = param_2[8];
  uVar17 = param_2[0xb];
  uVar16 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar15;
  param_1[0xb] = uVar17;
  param_1[10] = uVar16;
  param_1[0xc] = uVar9;
  FUN_102e17c58(uVar7,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8,uVar11,uVar12,uVar13,uVar14,uVar10);
  return param_1;
}



/* Entry: 102e18004; end: 102e18153;  */

int FUN_102e18004(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 4) >> 2);
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 102e18154; end: 102e1818b;  */

void FUN_102e18154(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined1 *)(unaff_x20 + 0x20) = 1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 102e1818c; end: 102e1820f;  */

long FUN_102e1818c(void)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    iVar3 = (int)*(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010f1102e0);
    func_0x000107c4980c();
    func_0x000107c61170(uVar1);
    lVar2 = (long)iVar3;
    *(long *)(unaff_x20 + 0x18) = lVar2;
    *(undefined1 *)(unaff_x20 + 0x20) = 0;
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x18);
  }
  return lVar2;
}


