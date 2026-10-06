/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10146a4bc; end: 10146a66f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146a4bc(byte param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puStack_78 = (undefined *)0x0;
  uStack_70 = 0xe000000000000000;
  func_0x000107c602fc(0x4b);
  func_0x000107c5fb78(0xd00000000000002f,0x800000010ef82360);
  bVar2 = (param_1 & 1) == 0;
  uVar6 = 0x65757274;
  if (bVar2) {
    uVar6 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar6,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0xd000000000000018,0x800000010ef82390);
  uStack_48 = param_2;
  func_0x000107c603d0(&uStack_48,&puStack_78,&UNK_11077dd00,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_70);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112da0c10);
  puVar3 = &UNK_1103c1ba0;
  func_0x000107c613fc(&UNK_1103c1ba0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1103c1c68;
  func_0x000107c613fc(&UNK_1103c1c68,0x21,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  puVar4[0x20] = param_1;
  uStack_58 = 0x10146ae1c;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_1103c1c80;
  ppuVar5 = &puStack_78;
  puStack_50 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_50);
  func_0x000107c4e524(uVar6);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 10146a670; end: 10146a6a3; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFocusHandlerImpl setSmoothFocus:] */

void FUN_10146a670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10146a4bc(param_3,0xffffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10146a6a4; end: 10146a76f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146a6a4(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  puVar3 = auStack_48;
  func_0x000107c61428(param_1 + 0x10,puVar3,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112da0c18);
    func_0x000107c61174(uVar5);
    func_0x000107c61170(param_1);
    uVar4 = 2;
    if (param_2 != 1) {
      uVar4 = (uint)(param_2 == 0);
    }
    uVar1 = (ulong)uVar4;
    func_0x0001002a1e70();
    func_0x000107c61170(uVar5);
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c614f0(uVar1);
      (**(code **)(puVar3 + 0x130))(param_3 & 1,uVar2,puVar3);
      func_0x000107c615e8(uVar1);
    }
  }
  return;
}



/* Entry: 10146a770; end: 10146a7b3; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFocusHandlerImpl setSmoothFocus:forDeviceAtPosition:] */

void FUN_10146a770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_10146a4bc(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10146a7b4; end: 10146a967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146a7b4(byte param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puStack_78 = (undefined *)0x0;
  uStack_70 = 0xe000000000000000;
  func_0x000107c602fc(0x4a);
  func_0x000107c5fb78(0xd00000000000002d,0x800000010ef82310);
  bVar2 = (param_1 & 1) == 0;
  uVar6 = 0x65757274;
  if (bVar2) {
    uVar6 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar6,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0xd000000000000019,0x800000010ef82340);
  uStack_48 = param_2;
  func_0x000107c603d0(&uStack_48,&puStack_78,&UNK_11077dd00,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_70);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112da0c10);
  puVar3 = &UNK_1103c1ba0;
  func_0x000107c613fc(&UNK_1103c1ba0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1103c1c18;
  func_0x000107c613fc(&UNK_1103c1c18,0x21,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  puVar4[0x20] = param_1;
  uStack_58 = 0x10146ae10;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_1103c1c30;
  ppuVar5 = &puStack_78;
  puStack_50 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_50);
  func_0x000107c4e524(uVar6);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 10146a968; end: 10146a99b; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFocusHandlerImpl setFocusLock:] */

void FUN_10146a968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10146a7b4(param_3,0xffffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10146a99c; end: 10146aa67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146a99c(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  puVar3 = auStack_48;
  func_0x000107c61428(param_1 + 0x10,puVar3,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112da0c18);
    func_0x000107c61174(uVar5);
    func_0x000107c61170(param_1);
    uVar4 = 2;
    if (param_2 != 1) {
      uVar4 = (uint)(param_2 == 0);
    }
    uVar1 = (ulong)uVar4;
    func_0x0001002a1e70();
    func_0x000107c61170(uVar5);
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c614f0(uVar1);
      (**(code **)(puVar3 + 0x138))(param_3 & 1,uVar2,puVar3);
      func_0x000107c615e8(uVar1);
    }
  }
  return;
}



/* Entry: 10146aa68; end: 10146ab57; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFocusHandlerImpl setFocusLock:forDeviceAtPosition:] */

void FUN_10146aa68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_10146a7b4(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10146ab58; end: 10146ab8f; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFocusHandlerImpl disableContinuousAutofocusAndSetAutofocus] */

void FUN_10146ab58(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10146ab90(0x10146ae08,&UNK_1103c1be0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10146ab90; end: 10146ac47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146ab90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112da0c10);
  puVar1 = &UNK_1103c1ba0;
  func_0x000107c613fc(&UNK_1103c1ba0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  uStack_58 = param_2;
  uStack_50 = param_1;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10146ac48; end: 10146acf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146ac48(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar2 = auStack_48;
  func_0x000107c61428(param_1 + 0x10,puVar2,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112da0c18);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(param_1);
    lVar1 = 0;
    func_0x0001002a1e70();
    func_0x000107c61170(uVar3);
    if (lVar1 != 0) {
      func_0x000107c614f0(lVar1);
      (**(code **)(puVar2 + 0x148))();
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 10146acf4; end: 10146ad2b; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFocusHandlerImpl enableContinuousAutofocusAndSetContinuousAutofocus] */

void FUN_10146acf4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10146ab90(FUN_10146ade4,&UNK_1103c1bb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10146ad2c; end: 10146ad8b; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFocusHandlerImpl init] */

void FUN_10146ad2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCaptureDeviceManagerImpl.CaptureDeviceFocusHandlerImpl",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10146ad58);
  (*pcVar1)();
}



/* Entry: 10146ad8c; end: 10146adc3; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFocusHandlerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146ad8c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da0c10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da0c18));
  return;
}



/* Entry: 10146adc4; end: 10146ade3;  */

void FUN_10146adc4(void)

{
  func_0x000107c61168(&PTR_PTR_1127d8860);
  return;
}



/* Entry: 10146ade4; end: 10146ae63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146ade4(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar2 = auStack_48;
  func_0x000107c61428(unaff_x20 + 0x10,puVar2,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112da0c18);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(lVar1);
    lVar1 = 0;
    func_0x0001002a1e70();
    func_0x000107c61170(uVar3);
    if (lVar1 != 0) {
      func_0x000107c614f0(lVar1);
      (**(code **)(puVar2 + 0x148))();
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 10146ae64; end: 10146af27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146ae64(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  iVar1 = 2;
  lVar5 = 0x1a;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar1 != 0) {
    uVar6 = 2;
    if (param_1 != 1) {
      uVar6 = (uint)(param_1 == 0);
    }
    uVar2 = (ulong)uVar6;
    func_0x0001002a1e70();
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c614f0();
      uVar4 = uVar2;
      func_0x000107c446d8();
      if (((int)uVar4 == 0) || ((**(code **)(lVar5 + 0x188))(uVar3,lVar5), uVar3 == 0)) {
        func_0x000107c615e8(uVar2);
      }
      else {
        func_0x000107c49b0c();
        func_0x000107c615e8(uVar2);
        func_0x000107c61170(uVar3);
      }
    }
  }
  return;
}



/* Entry: 10146af28; end: 10146af63; -[_TtC26SCCaptureDeviceManagerImpl34CaptureDeviceLensSmudgeHandlerImpl isSmudgeDetectionSupportedForDeviceAtPosition:] */

uint FUN_10146af28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10146ae64(param_3);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 10146af64; end: 10146aff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10146af64(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  
  iVar1 = 2;
  lVar4 = 0x1a;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar1 != 0) {
    uVar5 = 2;
    if (param_1 != 1) {
      uVar5 = (uint)(param_1 == 0);
    }
    uVar2 = (ulong)uVar5;
    func_0x0001002a1e70();
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c614f0();
      uVar5 = (uint)uVar3;
      (**(code **)(lVar4 + 0x1e8))();
      func_0x000107c615e8(uVar2);
      return uVar5 & 1;
    }
  }
  return 0;
}



/* Entry: 10146aff8; end: 10146b033; -[_TtC26SCCaptureDeviceManagerImpl34CaptureDeviceLensSmudgeHandlerImpl isSmudgeDetectionEnabledForDeviceAtPosition:] */

uint FUN_10146aff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10146af64(param_3);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 10146b034; end: 10146b093; -[_TtC26SCCaptureDeviceManagerImpl34CaptureDeviceLensSmudgeHandlerImpl init] */

void FUN_10146b034(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCaptureDeviceManagerImpl.CaptureDeviceLensSmudgeHandlerImpl",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10146b060);
  (*pcVar1)();
}



/* Entry: 10146b094; end: 10146b0cb; -[_TtC26SCCaptureDeviceManagerImpl34CaptureDeviceLensSmudgeHandlerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146b094(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da0c48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da0c50));
  return;
}



/* Entry: 10146b0cc; end: 10146b1f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146b0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112da0c80);
  puVar1 = &UNK_1103c1dd0;
  func_0x000107c613fc(&UNK_1103c1dd0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1103c1df8;
  func_0x000107c613fc(&UNK_1103c1df8,0x50,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  *(undefined8 *)(puVar2 + 0x28) = param_7;
  *(undefined8 *)(puVar2 + 0x30) = param_1;
  *(undefined8 *)(puVar2 + 0x38) = param_2;
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  *(undefined8 *)(puVar2 + 0x48) = param_4;
  uStack_70 = 0x10146b908;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1103c1e10;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c61174(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10146b1f4; end: 10146b783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146b1f4(double param_1,double param_2,double param_3,double param_4,long param_5,
                  ulong param_6,code *param_7)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_c0 [32];
  
  puVar13 = auStack_c0;
  dVar24 = param_4;
  func_0x000107c61428(param_5 + 0x10,puVar13,0,0);
  uVar4 = param_5 + 0x10;
  func_0x000107c61618();
  if (uVar4 == 0) {
    return;
  }
  uVar21 = *(ulong *)PTR__AVLayerVideoGravityResize_110348040;
  uVar6 = param_6;
  func_0x000107c5faec();
  puVar14 = puVar13;
  func_0x000107c5faec();
  if (uVar6 == uVar21 && puVar13 == puVar14) {
    func_0x000107c6142c(puVar13);
    func_0x000107c6142c(puVar14);
LAB_10146b6cc:
    param_2 = param_2 / param_4;
    dVar24 = 1.0 - param_1 / param_3;
  }
  else {
    puVar15 = puVar13;
    func_0x000107c605b8(uVar6,puVar13,uVar21,puVar14,0);
    func_0x000107c6142c(puVar13);
    func_0x000107c6142c(puVar14);
    if ((uVar6 & 1) != 0) goto LAB_10146b6cc;
    uVar5 = *(undefined8 *)(uVar4 + _DAT_112da0c88);
    func_0x000107c61174(uVar5);
    uVar6 = 0;
    func_0x0001002a1e70();
    func_0x000107c61170(uVar5);
    if (uVar6 != 0) {
      uVar21 = uVar6;
      func_0x000107c614f0();
      (**(code **)(puVar15 + 0x1b0))();
      if (uVar21 != 0) {
        uVar22 = uVar21;
        func_0x000107c4eb64();
        func_0x000107c61180();
        uVar7 = 0;
        FUN_10146baf4(0,0x112da0cb8,&PTR__OBJC_CLASS___AVCaptureInputPort_1126a70f0);
        uVar8 = uVar22;
        func_0x000107c5fc54();
        func_0x000107c61170(uVar22);
        if (uVar8 >> 0x3e == 0) {
          uVar22 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
          if (uVar22 == 0) goto LAB_10146b748;
LAB_10146b378:
          if ((long)uVar22 < 1) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10146b784);
            (*pcVar1)();
          }
          uVar23 = 0;
          uVar18 = *(ulong *)PTR__AVLayerVideoGravityResizeAspectFill_110348050;
          uVar19 = *(ulong *)PTR__AVLayerVideoGravityResizeAspect_110348048;
          uVar20 = *(ulong *)PTR__AVMediaTypeVideo_110348090;
          dVar25 = 1.0;
          dVar30 = 0.5;
          dVar29 = 0.5;
          do {
            if ((uVar8 & 0xc000000000000001) == 0) {
              uVar9 = *(ulong *)(uVar8 + uVar23 * 8 + 0x20);
              func_0x000107c61174();
              uVar12 = uVar7;
            }
            else {
              uVar9 = uVar23;
              uVar12 = uVar8;
              FUN_10146b938(uVar23,uVar8,&PTR__OBJC_CLASS___AVCaptureInputPort_1126a70f0,0x112da0cb8
                           );
            }
            uVar10 = uVar9;
            func_0x000107c4ca5c();
            func_0x000107c61180();
            uVar11 = uVar10;
            func_0x000107c5faec();
            uVar7 = uVar20;
            uVar16 = uVar12;
            func_0x000107c5faec();
            if (uVar11 == uVar7 && uVar12 == uVar16) {
              uVar7 = uVar16;
              func_0x000107c61170(uVar10);
              func_0x000107c6142c(uVar12);
              func_0x000107c6142c(uVar16);
LAB_10146b4c8:
              uVar12 = uVar9;
              func_0x000107c43878();
              func_0x000107c61180();
              if (uVar12 != 0) {
                uVar16 = 1;
                func_0x000107c60a64();
                dVar28 = dVar24 / dVar25;
                uVar10 = param_6;
                dVar26 = dVar25;
                dVar27 = dVar24;
                func_0x000107c5faec();
                uVar7 = uVar19;
                uVar11 = uVar16;
                func_0x000107c5faec();
                if ((uVar10 == uVar7) && (uVar16 == uVar11)) {
                  uVar7 = uVar11;
                  func_0x000107c6142c(uVar16);
                  func_0x000107c6142c(uVar11);
LAB_10146b56c:
                  if (param_3 / param_4 <= dVar28) {
                    dVar28 = param_3 / dVar28;
                    dVar24 = (param_4 - dVar28) * 0.5;
                    dVar26 = dVar28 + dVar24;
                    bVar2 = false;
                    bVar3 = true;
                    if (dVar24 <= param_2) {
                      bVar2 = false;
                      bVar3 = true;
                      if (!NAN(param_2) && !NAN(dVar26)) {
                        bVar2 = param_2 == dVar26;
                        bVar3 = dVar26 <= param_2;
                      }
                    }
                    dVar30 = 0.5;
                    dVar29 = 0.5;
                    if (!bVar3 || bVar2) {
                      dVar30 = (param_2 - dVar24) / dVar28;
                      dVar29 = 1.0 - param_1 / param_3;
                    }
                  }
                  else {
                    dVar28 = param_4 * dVar28;
                    dVar24 = (param_3 - dVar28) * 0.5;
                    dVar26 = dVar28 + dVar24;
                    bVar2 = false;
                    bVar3 = true;
                    if (dVar24 <= param_1) {
                      bVar2 = false;
                      bVar3 = true;
                      if (!NAN(param_1) && !NAN(dVar26)) {
                        bVar2 = param_1 == dVar26;
                        bVar3 = dVar26 <= param_1;
                      }
                    }
                    dVar29 = 0.5;
                    dVar30 = 0.5;
                    if (!bVar3 || bVar2) {
                      dVar24 = param_1 - dVar24;
LAB_10146b6a0:
                      dVar29 = 1.0 - dVar24 / dVar28;
                      dVar30 = param_2 / param_4;
                    }
                  }
                }
                else {
                  uVar17 = uVar16;
                  func_0x000107c605b8(uVar10,uVar16,uVar7,uVar11,0);
                  func_0x000107c6142c(uVar16);
                  func_0x000107c6142c(uVar11);
                  uVar7 = uVar17;
                  if ((uVar10 & 1) != 0) goto LAB_10146b56c;
                  uVar10 = param_6;
                  func_0x000107c5faec();
                  uVar7 = uVar18;
                  uVar11 = uVar17;
                  func_0x000107c5faec();
                  if ((uVar10 == uVar7) && (uVar17 == uVar11)) {
                    uVar7 = uVar11;
                    func_0x000107c6142c(uVar17);
                    func_0x000107c6142c(uVar11);
LAB_10146b650:
                    if (dVar28 < param_3 / param_4) {
                      dVar25 = dVar25 * (param_3 / dVar24);
                      dVar26 = 0.5;
                      dVar30 = (param_2 + (dVar25 - param_4) * 0.5) / dVar25;
                      dVar29 = (param_3 - param_1) / param_3;
                      goto LAB_10146b6b0;
                    }
                    dVar28 = dVar24 * (param_4 / dVar25);
                    dVar26 = 0.5;
                    dVar24 = param_1 + (dVar28 - param_3) * 0.5;
                    goto LAB_10146b6a0;
                  }
                  uVar7 = uVar17;
                  func_0x000107c605b8();
                  func_0x000107c6142c(uVar17);
                  func_0x000107c6142c(uVar11);
                  dVar29 = 0.5;
                  dVar30 = 0.5;
                  if ((uVar10 & 1) != 0) goto LAB_10146b650;
                }
LAB_10146b6b0:
                func_0x000107c61170(uVar9);
                uVar9 = uVar12;
                dVar25 = dVar26;
                dVar24 = dVar27;
              }
            }
            else {
              uVar7 = uVar12;
              func_0x000107c605b8();
              func_0x000107c61170(uVar10);
              func_0x000107c6142c(uVar12);
              func_0x000107c6142c(uVar16);
              if ((uVar11 & 1) != 0) goto LAB_10146b4c8;
            }
            uVar23 = uVar23 + 1;
            func_0x000107c61170(uVar9);
          } while (uVar22 != uVar23);
        }
        else {
          uVar22 = uVar8 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar8) {
            uVar22 = uVar8;
          }
          func_0x000107c60480();
          if (uVar22 != 0) goto LAB_10146b378;
LAB_10146b748:
          dVar30 = 0.5;
          dVar29 = 0.5;
        }
        func_0x000107c6142c(uVar8);
        (*param_7)(dVar30,dVar29);
        func_0x000107c61170(uVar4);
        func_0x000107c615e8(uVar6);
        uVar4 = uVar21;
        goto LAB_10146b6e4;
      }
      func_0x000107c615e8(uVar6);
    }
    param_2 = 0.5;
    dVar24 = 0.5;
  }
  (*param_7)(param_2,dVar24);
LAB_10146b6e4:
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 10146b784; end: 10146b843; -[_TtC26SCCaptureDeviceManagerImpl34CaptureDeviceUtilitiesProviderImpl convertWithViewCoordinates:viewSize:videoGravity:completion:] */

void FUN_10146b784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1103c1da8;
  func_0x000107c613fc(&UNK_1103c1da8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_5);
  FUN_10146b0cc(param_1,param_2,param_3,param_4,param_7,FUN_10146b8fc,puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10146b844; end: 10146b8a3; -[_TtC26SCCaptureDeviceManagerImpl34CaptureDeviceUtilitiesProviderImpl init] */

void FUN_10146b844(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCaptureDeviceManagerImpl.CaptureDeviceUtilitiesProviderImpl",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10146b870);
  (*pcVar1)();
}



/* Entry: 10146b8a4; end: 10146b8db; -[_TtC26SCCaptureDeviceManagerImpl34CaptureDeviceUtilitiesProviderImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146b8a4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da0c80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da0c88));
  return;
}



/* Entry: 10146b8dc; end: 10146b8fb;  */

void FUN_10146b8dc(void)

{
  func_0x000107c61168(&PTR_PTR_1127d89f0);
  return;
}



/* Entry: 10146b8fc; end: 10146b937;  */

void FUN_10146b8fc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010146b904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10146b938; end: 10146baf3;  */

ulong FUN_10146b938(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10146ba1c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10146ba20);
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
  FUN_10146baf4(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10146baf4);
  (*pcVar2)();
}



/* Entry: 10146baf4; end: 10146bb33;  */

void FUN_10146baf4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10146bb34; end: 10146bbab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10146bb34(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112da0cd0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112da0cd0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x00010006a340();
    func_0x000107c613fc();
    func_0x00010006a360();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
    lVar3 = 0;
  }
  func_0x000107c6157c(lVar3);
  return lVar2;
}



/* Entry: 10146bbac; end: 10146bc2b; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl minAvailableZoomFactor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10146bbac(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174();
  lVar1 = 0;
  func_0x0001002a1e70();
  if (lVar1 == 0) {
    param_1 = 0x3ff0000000000000;
  }
  else {
    func_0x000107c614f0();
    (**(code **)(param_3 + 0x20))();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10146bc2c; end: 10146bca3; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl isUsingSoftwareZoom] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10146bc2c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  func_0x000107c61174();
  lVar1 = 0;
  func_0x0001002a1e70();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c614f0();
    uVar3 = (uint)lVar2;
    (**(code **)(param_2 + 8))();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
  return uVar3 & 1;
}



/* Entry: 10146bca4; end: 10146bd23; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl currentZoomFactor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10146bca4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174();
  lVar1 = 0;
  func_0x0001002a1e70();
  if (lVar1 == 0) {
    param_1 = 0x3ff0000000000000;
  }
  else {
    func_0x000107c614f0();
    (**(code **)(param_3 + 0x30))();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10146bd24; end: 10146bda3; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl normalizedZoomFactor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10146bd24(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174();
  lVar1 = 0;
  func_0x0001002a1e70();
  if (lVar1 == 0) {
    param_1 = 0x3ff0000000000000;
  }
  else {
    func_0x000107c614f0();
    (**(code **)(param_3 + 0x38))();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10146bda4; end: 10146be23; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl currentFieldOfView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10146bda4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174();
  lVar1 = 0;
  func_0x0001002a1e70();
  if (lVar1 == 0) {
    param_1 = 0x3ff0000000000000;
  }
  else {
    func_0x000107c614f0();
    (**(code **)(param_3 + 0x40))();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10146be24; end: 10146be9b; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl fieldOfViewObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146be24(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar1 = 0;
  func_0x0001002a1e70();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c614f0();
    (**(code **)(param_2 + 0x48))();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10146be9c; end: 10146c0eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146be9c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xe000000000000000;
  func_0x000107c602fc(0x4c);
  uVar7 = 0x800000010ef82640;
  func_0x000107c5fb78(0xd00000000000002e,0x800000010ef82640);
  func_0x000107c5fdd8(param_1);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar7);
  func_0x000107c5fb78(0x697469736f70202c,0xec000000203a6e6f);
  uStack_58 = param_2;
  func_0x000107c603d0(&uStack_58,&puStack_88,&UNK_11077dd00,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x74616d696e61202c,0xec000000203a6465);
  bVar3 = (param_3 & 1) == 0;
  uVar7 = 0x65757274;
  if (bVar3) {
    uVar7 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar7,uVar1);
  func_0x000107c6142c(uVar1);
  uVar7 = uStack_80;
  func_0x000107c6142c(uStack_80);
  FUN_10146bb34();
  func_0x00010006c804();
  func_0x000107c61574(uVar7);
  bVar2 = *(byte *)(unaff_x20 + _DAT_112da0cd8);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112da0cd0);
  func_0x000107c6157c(uVar7);
  func_0x000100070bfc();
  func_0x000107c61574(uVar7);
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112da0cc0);
    puVar4 = &UNK_1103c1e48;
    func_0x000107c613fc(&UNK_1103c1e48,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = &UNK_1103c1ec0;
    func_0x000107c613fc(&UNK_1103c1ec0,0x29,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = param_2;
    *(undefined8 *)(puVar5 + 0x20) = param_1;
    puVar5[0x28] = param_3 & 1;
    uStack_68 = 0x10146cd3c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1103c1ed8;
    ppuVar6 = &puStack_88;
    puStack_60 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_60);
    func_0x000107c4e524(uVar7);
    func_0x000107c60bd0(ppuVar6);
  }
  return;
}



/* Entry: 10146c0ec; end: 10146c12f; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl setZoomFactor:animated:] */

void FUN_10146c0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_10146be9c(param_1,0xffffffffffffffff,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10146c130; end: 10146c213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146c130(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auStack_68 [24];
  
  puVar3 = auStack_68;
  func_0x000107c61428(param_2 + 0x10,puVar3,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112da0cc8);
    uVar4 = 2;
    if (param_3 != 1) {
      uVar4 = (uint)(param_3 == 0);
    }
    uVar5 = (ulong)uVar4;
    func_0x000107c61174(uVar1);
    func_0x0001002a1e70();
    func_0x000107c61170(uVar1);
    if (uVar5 != 0) {
      uVar2 = uVar5;
      func_0x000107c614f0(uVar5);
      (**(code **)(puVar3 + 0x58))(param_1,param_4 & 1,uVar2,puVar3);
      func_0x000107c615e8(uVar5);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10146c214; end: 10146c267; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl setZoomFactor:forDeviceAtPosition:animated:] */

void FUN_10146c214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174();
  FUN_10146be9c(param_1,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10146c268; end: 10146c42b;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146c268(float param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  long alStack_68 [3];
  
  alStack_68[1] = 0;
  alStack_68[2] = -0x2000000000000000;
  func_0x000107c602fc(0x4e);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef82600);
  alStack_68[0] = param_2;
  func_0x000107c603d0(alStack_68,alStack_68 + 1,&UNK_110765070,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x74616d696e61202c,0xec000000203a6465);
  bVar2 = (param_3 & 1) == 0;
  uVar1 = 0x65757274;
  if (bVar2) {
    uVar1 = 0x65736c6166;
  }
  lVar3 = -0x1c00000000000000;
  if (bVar2) {
    lVar3 = -0x1b00000000000000;
  }
  lVar6 = lVar3;
  func_0x000107c5fb78(uVar1);
  func_0x000107c6142c(lVar3);
  lVar3 = alStack_68[2];
  func_0x000107c6142c();
  if (param_2 != 2) {
    if (param_2 != 1) {
      if (param_2 != 0) {
        return;
      }
      FUN_10146c42c(1,param_3 & 1);
      return;
    }
    dVar7 = 1.0;
    goto LAB_10146c400;
  }
  func_0x0001002eb620();
  if (lVar3 == 0) {
    dVar7 = 1.0;
  }
  else {
    func_0x000107c436dc();
    func_0x000107c61170(lVar3);
    dVar7 = (double)param_1;
  }
  uVar4 = 2;
  func_0x0001002a1e70();
  if (uVar4 == 0) {
LAB_10146c3f8:
    dVar8 = 1.0;
  }
  else {
    uVar5 = uVar4;
    func_0x000107c614f0();
    (**(code **)(lVar6 + 0x88))();
    func_0x000107c615e8(uVar4);
    dVar8 = 2.0;
    if ((uVar5 & 1) == 0) goto LAB_10146c3f8;
  }
  dVar7 = dVar7 * dVar8;
LAB_10146c400:
  FUN_10146be9c(dVar7,1,param_3 & 1);
  return;
}



/* Entry: 10146c42c; end: 10146c62b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146c42c(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puStack_78 = (undefined *)0x0;
  uStack_70 = 0xe000000000000000;
  func_0x000107c602fc(0x4a);
  func_0x000107c5fb78(0xd00000000000003a,0x800000010ef825c0);
  uStack_48 = param_1;
  func_0x000107c603d0(&uStack_48,&puStack_78,&UNK_11077dd00,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x74616d696e61202c,0xec000000203a6465);
  bVar3 = (param_2 & 1) == 0;
  uVar7 = 0x65757274;
  if (bVar3) {
    uVar7 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar7,uVar1);
  func_0x000107c6142c(uVar1);
  uVar7 = uStack_70;
  func_0x000107c6142c(uStack_70);
  FUN_10146bb34();
  func_0x00010006c804();
  func_0x000107c61574(uVar7);
  bVar2 = *(byte *)(unaff_x20 + _DAT_112da0cd8);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112da0cd0);
  func_0x000107c6157c(uVar7);
  func_0x000100070bfc();
  func_0x000107c61574(uVar7);
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112da0cc0);
    puVar4 = &UNK_1103c1e48;
    func_0x000107c613fc(&UNK_1103c1e48,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = &UNK_1103c1e70;
    func_0x000107c613fc(&UNK_1103c1e70,0x21,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = param_1;
    puVar5[0x20] = param_2 & 1;
    pcStack_58 = FUN_10146cd14;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1103c1e88;
    ppuVar6 = &puStack_78;
    puStack_50 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e524(uVar7);
    func_0x000107c60bd0(ppuVar6);
  }
  return;
}



/* Entry: 10146c62c; end: 10146c66f; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl setBackCameraPresetZoomFactor:animated:] */

void FUN_10146c62c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_10146c268(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10146c670; end: 10146c6a3; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl resetZoomFactorWithAnimated:] */

void FUN_10146c670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10146c42c(0xffffffffffffffff,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10146c6a4; end: 10146c777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146c6a4(long param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  puVar3 = auStack_58;
  func_0x000107c61428(param_1 + 0x10,puVar3,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112da0cc8);
    uVar4 = 2;
    if (param_2 != 1) {
      uVar4 = (uint)(param_2 == 0);
    }
    uVar5 = (ulong)uVar4;
    func_0x000107c61174(uVar1);
    func_0x0001002a1e70();
    func_0x000107c61170(uVar1);
    if (uVar5 != 0) {
      uVar2 = uVar5;
      func_0x000107c614f0(uVar5);
      (**(code **)(puVar3 + 0x50))(param_3 & 1,uVar2,puVar3);
      func_0x000107c615e8(uVar5);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10146c778; end: 10146c8a7; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl resetZoomFactorForDeviceAtPosition:animated:] */

void FUN_10146c778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_10146c42c(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10146c8a8; end: 10146c8d7; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl setZoomLocked:] */

void FUN_10146c8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x00010146c7bc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10146c8d8; end: 10146c94f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10146c8d8(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (param_2 != 1) {
    uVar2 = (uint)(param_2 == 0);
  }
  uVar1 = (ulong)uVar2;
  func_0x0001002a1e70();
  if (uVar1 == 0) {
    param_1 = 0x3ff0000000000000;
  }
  else {
    func_0x000107c614f0();
    (**(code **)(param_3 + 0x30))();
    func_0x000107c615e8(uVar1);
  }
  return param_1;
}



/* Entry: 10146c950; end: 10146ca0b; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl currentZoomFactorForDeviceAtPosition:] */

undefined8
FUN_10146c950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_10146c8d8(param_4);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10146ca0c; end: 10146cac7; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl minAvailableZoomFactorForDeviceAtPosition:] */

undefined8
FUN_10146ca0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  func_0x00010146c994(param_4);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10146cac8; end: 10146cb83; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl defaultZoomFactorForDeviceAtPosition:] */

undefined8
FUN_10146cac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  func_0x00010146ca50(param_4);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10146cb84; end: 10146cbc7; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl normalizedZoomFactorForDeviceAtPosition:] */

undefined8
FUN_10146cb84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  func_0x00010146cb0c(param_4);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10146cbc8; end: 10146cc2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146cbc8(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (param_1 != 1) {
    uVar2 = (uint)(param_1 == 0);
  }
  uVar1 = (ulong)uVar2;
  func_0x0001002a1e70();
  if (uVar1 != 0) {
    func_0x000107c614f0();
    (**(code **)(param_2 + 8))();
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 10146cc30; end: 10146cc6b; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl isUsingSoftwareZoomForDeviceAtPosition:] */

uint FUN_10146cc30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10146cbc8(param_3);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 10146cc6c; end: 10146cccb; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl init] */

void FUN_10146cc6c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCaptureDeviceManagerImpl.CaptureDeviceZoomHandlerImpl",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10146cc98);
  (*pcVar1)();
}



/* Entry: 10146cccc; end: 10146cd13; -[_TtC26SCCaptureDeviceManagerImpl28CaptureDeviceZoomHandlerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146cccc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da0cc0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112da0cc8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112da0cd0));
  return;
}



/* Entry: 10146cd14; end: 10146cd53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146cd14(void)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  bVar2 = *(byte *)(unaff_x20 + 0x20);
  puVar6 = auStack_58;
  func_0x000107c61428(lVar3 + 0x10,puVar6,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0cc8);
    uVar7 = 2;
    if (lVar1 != 1) {
      uVar7 = (uint)(lVar1 == 0);
    }
    uVar8 = (ulong)uVar7;
    func_0x000107c61174(uVar4);
    func_0x0001002a1e70();
    func_0x000107c61170(uVar4);
    if (uVar8 != 0) {
      uVar5 = uVar8;
      func_0x000107c614f0(uVar8);
      (**(code **)(puVar6 + 0x50))(bVar2 & 1,uVar5,puVar6);
      func_0x000107c615e8(uVar8);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 10146cd54; end: 10146cd5f; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl setExposureHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146cd54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0d08);
  *(undefined8 *)(param_1 + _DAT_112da0d08) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10146cd60; end: 10146cd6b; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl setFlashHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146cd60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0d18);
  *(undefined8 *)(param_1 + _DAT_112da0d18) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10146cd6c; end: 10146cdbf; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl focusHandler] */

void FUN_10146cd6c(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x000107c61174();
  puVar1 = &DAT_112da0d20;
  func_0x0001002e9854(&DAT_112da0d20,FUN_10146adc4,&DAT_112da0c10,&DAT_112da0c18);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10146cdc0; end: 10146cdcb; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl setFocusHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146cdc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0d20);
  *(undefined8 *)(param_1 + _DAT_112da0d20) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10146cdcc; end: 10146cdd7; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl setZoomHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146cdcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0d28);
  *(undefined8 *)(param_1 + _DAT_112da0d28) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10146cdd8; end: 10146ce2b; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl constituentDeviceBehaviorHandler] */

void FUN_10146cdd8(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x000107c61174();
  puVar1 = &DAT_112da0d30;
  func_0x0001002e9854(&DAT_112da0d30,FUN_101467af4,&DAT_112da0b48,&DAT_112da0b50);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10146ce2c; end: 10146ce37; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl setConstituentDeviceBehaviorHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146ce2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0d30);
  *(undefined8 *)(param_1 + _DAT_112da0d30) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10146ce38; end: 10146ce43; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl setCapabilitiesInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146ce38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0d38);
  *(undefined8 *)(param_1 + _DAT_112da0d38) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10146ce44; end: 10146ce97; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl utilitiesProvider] */

void FUN_10146ce44(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x000107c61174();
  puVar1 = &DAT_112da0d40;
  func_0x0001002e9854(&DAT_112da0d40,FUN_10146b8dc,&DAT_112da0c80,&DAT_112da0c88);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10146ce98; end: 10146cea3; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl setUtilitiesProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146ce98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0d40);
  *(undefined8 *)(param_1 + _DAT_112da0d40) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10146cea4; end: 10146ceaf; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl setLensSmudgeHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146cea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0d48);
  *(undefined8 *)(param_1 + _DAT_112da0d48) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10146ceb0; end: 10146cebb; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl setDeviceFormatHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146ceb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0d50);
  *(undefined8 *)(param_1 + _DAT_112da0d50) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10146cebc; end: 10146cec7; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl setDeviceAvailabilityHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146cebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0d60);
  *(undefined8 *)(param_1 + _DAT_112da0d60) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10146cec8; end: 10146ced3; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl setSessionInfoProvidingHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146cec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0d68);
  *(undefined8 *)(param_1 + _DAT_112da0d68) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10146ced4; end: 10146cedf; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl setLoggingHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146ced4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0d70);
  *(undefined8 *)(param_1 + _DAT_112da0d70) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10146cee0; end: 10146cf0f;  */

void FUN_10146cee0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + *param_4);
  *(undefined8 *)(param_1 + *param_4) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10146cf10; end: 10146d07b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146cf10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112da0d78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d68) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d70) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d10) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d58) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d88) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d90) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d98) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112da0da0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112da0da8) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10146d07c; end: 10146d0db; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl init] */

void FUN_10146d07c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCaptureDeviceManagerImpl.CaptureDeviceManagerImpl",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10146d0a8);
  (*pcVar1)();
}



/* Entry: 10146d0dc; end: 10146d34b; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010146d0f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010146d178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010146d198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010146d1b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010146d1d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010146d1f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010146d218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010146d1fc) */
/* WARNING: Removing unreachable block (ram,0x00010146d1dc) */
/* WARNING: Removing unreachable block (ram,0x00010146d1bc) */
/* WARNING: Removing unreachable block (ram,0x00010146d19c) */
/* WARNING: Removing unreachable block (ram,0x00010146d17c) */
/* WARNING: Removing unreachable block (ram,0x00010146d0fc) */
/* WARNING: Removing unreachable block (ram,0x00010146d21c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146d0dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112da0d10));
  return;
}



/* Entry: 10146d34c; end: 10146d3a3;  */

bool FUN_10146d34c(undefined8 *param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    if (*(char *)(param_2 + 1) == '\x01') {
      return true;
    }
  }
  else if (*(char *)(param_2 + 1) != '\x01') {
    return (int)*param_1 == (int)*param_2;
  }
  return false;
}



/* Entry: 10146d3a4; end: 10146d74f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10146d3a4(ulong *param_1)

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
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined1 auStack_90 [48];
  
  puVar3 = param_1;
  func_0x0001000eb398();
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174();
  uVar10 = 0x800000010ef827b0;
  uVar5 = 0xd00000000000003a;
  func_0x0001000a9a18();
  func_0x000107c61170();
  if ((*(byte *)((long)param_1 + _DAT_112da0dd8) & 1) == 0) {
    func_0x0001000eb730();
    if (uVar4 >> 0x3e == 0) {
      uVar16 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar16 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar16 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar16 != 0) {
      uVar18 = 0;
      uVar13 = *(ulong *)PTR__AVCaptureDeviceTypeBuiltInTripleCamera_110347f08;
      uVar14 = *(ulong *)PTR__AVCaptureDeviceTypeBuiltInDualWideCamera_110347ef0;
      uVar15 = *(ulong *)PTR__AVCaptureDeviceTypeBuiltInDualCamera_110347ee8;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10146d6d4);
            (*pcVar2)();
          }
          uVar6 = *(ulong *)(uVar4 + uVar18 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar6 = uVar18;
          uVar10 = uVar4;
          func_0x0001002370d8();
        }
        uVar1 = uVar18 + 1;
        if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10146d6d0);
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
          uVar9 = uVar13;
          uVar11 = uVar10;
          func_0x000107c5faec();
          uVar12 = uVar10;
          if ((uVar8 == uVar9) && (uVar10 == uVar11)) {
LAB_10146d660:
            func_0x000107c6142c(uVar4);
            func_0x000107c61170(uVar6);
            func_0x000107c61170(uVar7);
            func_0x000107c6142c(uVar12);
            uVar4 = uVar11;
LAB_10146d6c0:
            func_0x000107c6142c(uVar4);
          }
          else {
            func_0x000107c605b8(uVar8,uVar10,uVar9,uVar11,0);
            func_0x000107c61170(uVar7);
            func_0x000107c6142c(uVar10);
            func_0x000107c6142c(uVar11);
            if ((uVar8 & 1) == 0) {
              uVar7 = uVar6;
              func_0x000107c41970();
              func_0x000107c61180();
              uVar10 = uVar7;
              func_0x000107c5faec();
              uVar8 = uVar14;
              uVar11 = uVar12;
              func_0x000107c5faec();
              if ((uVar10 == uVar8) && (uVar12 == uVar11)) goto LAB_10146d660;
              uVar8 = uVar12;
              func_0x000107c605b8();
              func_0x000107c61170(uVar7);
              func_0x000107c6142c(uVar12);
              func_0x000107c6142c(uVar11);
              if ((uVar10 & 1) != 0) goto LAB_10146d688;
              uVar7 = uVar6;
              func_0x000107c41970();
              func_0x000107c61180();
              uVar9 = uVar7;
              func_0x000107c5faec();
              uVar10 = uVar15;
              uVar11 = uVar8;
              func_0x000107c5faec();
              if ((uVar9 == uVar10) && (uVar8 == uVar11)) {
                func_0x000107c61170(uVar7);
                func_0x000107c61170(uVar6);
                func_0x000107c6142c(uVar8);
                func_0x000107c6142c(uVar11);
              }
              else {
                uVar10 = uVar8;
                func_0x000107c605b8();
                func_0x000107c61170(uVar7);
                func_0x000107c61170(uVar6);
                func_0x000107c6142c(uVar8);
                func_0x000107c6142c(uVar11);
                if ((uVar9 & 1) == 0) goto LAB_10146d4a0;
              }
              goto LAB_10146d6c0;
            }
LAB_10146d688:
            func_0x000107c6142c(uVar4);
            func_0x000107c61170(uVar6);
          }
          uVar17 = 1;
          goto LAB_10146d700;
        }
        func_0x000107c61170(uVar6);
LAB_10146d4a0:
        uVar18 = uVar18 + 1;
      } while (uVar1 != uVar16);
    }
    func_0x000107c6142c(uVar4);
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
  }
LAB_10146d700:
  func_0x000107c61428(puVar3,auStack_90,0,0);
  uVar10 = *puVar3;
  func_0x000107c61174(uVar10);
  func_0x0001000aa0a8(uVar5);
  func_0x000107c61170(uVar10);
  return uVar17;
}



/* Entry: 10146d750; end: 10146d763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10146d750(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112da0de8;
  uVar2 = (uint)*(byte *)(unaff_x20 + _DAT_112da0de8);
  if (*(byte *)(unaff_x20 + _DAT_112da0de8) == 2) {
    lVar3 = unaff_x20;
    FUN_10146d764();
    uVar2 = (uint)lVar3;
    *(byte *)(unaff_x20 + lVar1) = (byte)lVar3 & 1;
  }
  return uVar2 & 1;
}



/* Entry: 10146d764; end: 10146db5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10146d764(ulong *param_1)

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
  undefined8 uVar14;
  ulong uVar15;
  undefined1 auStack_90 [48];
  
  puVar3 = param_1;
  func_0x0001000eb398();
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174();
  uVar10 = 0x800000010ef826f0;
  uVar5 = 0xd000000000000039;
  func_0x0001000a9a18();
  func_0x000107c61170();
  if ((*(byte *)((long)param_1 + _DAT_112da0dd8) & 1) != 0) {
    uVar14 = 0;
    goto LAB_10146d994;
  }
  func_0x0001000eb730();
  if (uVar4 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    if (uVar13 == 0) goto LAB_10146d988;
LAB_10146d810:
    uVar15 = 0;
    uVar12 = *(ulong *)PTR__AVCaptureDeviceTypeBuiltInWideAngleCamera_110347f20;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10146d970);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(uVar4 + uVar15 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar15;
        uVar10 = uVar4;
        func_0x0001002370d8();
      }
      uVar1 = uVar15 + 1;
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10146d96c);
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
          func_0x000107c61170(uVar7);
          func_0x000107c61170(uVar6);
          func_0x000107c6142c(uVar10);
          func_0x000107c6142c(uVar11);
          uVar14 = 1;
          goto LAB_10146d98c;
        }
        uVar9 = uVar10;
        func_0x000107c605b8();
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar6);
        func_0x000107c6142c(uVar10);
        func_0x000107c6142c(uVar11);
        uVar10 = uVar9;
        if ((uVar8 & 1) != 0) {
          uVar14 = 1;
          goto LAB_10146d98c;
        }
      }
      else {
        func_0x000107c61170(uVar6);
      }
      uVar15 = uVar15 + 1;
    } while (uVar1 != uVar13);
    uVar14 = 0;
  }
  else {
    uVar13 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar13 = uVar4;
    }
    func_0x000107c60480();
    if (uVar13 != 0) goto LAB_10146d810;
LAB_10146d988:
    uVar14 = 0;
  }
LAB_10146d98c:
  func_0x000107c6142c(uVar4);
LAB_10146d994:
  func_0x000107c61428(puVar3,auStack_90,0,0);
  uVar10 = *puVar3;
  func_0x000107c61174(uVar10);
  func_0x0001000aa0a8(uVar5);
  func_0x000107c61170(uVar10);
  return uVar14;
}



/* Entry: 10146db5c; end: 10146dd57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146db5c(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  uVar4 = (uint)param_2;
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar6 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if ((uVar4 & 0xff) == 1) {
    if ((*(byte *)(unaff_x20 + _DAT_112da0e20) & 1) != 0) {
      return;
    }
    *(undefined1 *)(unaff_x20 + _DAT_112da0e20) = 1;
    func_0x000107c5eec4(puVar5);
    func_0x000107c5eeac();
    (**(code **)(lVar6 + 8))(puVar5,lVar2);
    plVar1 = (long *)(unaff_x20 + _DAT_112da0e28);
    lVar2 = plVar1[1];
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c6142c(lVar2);
    if (param_3 == 0) {
      return;
    }
    func_0x000100083b20(&uStack_58);
    lVar3 = plVar1[1];
    if (lVar3 == 0) {
      lVar2 = 0;
      lVar3 = -0x2000000000000000;
    }
    else {
      lVar2 = *plVar1;
    }
    func_0x000107c61434();
    func_0x000107c5fadc(lVar2,lVar3);
    func_0x000107c6142c(lVar3);
  }
  else {
    if ((*(byte *)(unaff_x20 + _DAT_112da0e30) & 1) != 0) {
      return;
    }
    *(undefined1 *)(unaff_x20 + _DAT_112da0e30) = 1;
    func_0x000107c5eec4(puVar5);
    func_0x000107c5eeac();
    (**(code **)(lVar6 + 8))(puVar5,lVar2);
    plVar1 = (long *)(unaff_x20 + _DAT_112da0e38);
    lVar2 = plVar1[1];
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c6142c(lVar2);
    if (param_3 == 0) {
      return;
    }
    func_0x000100083b20(&uStack_58);
    lVar3 = plVar1[1];
    if (lVar3 == 0) {
      lVar2 = 0;
      lVar3 = -0x2000000000000000;
    }
    else {
      lVar2 = *plVar1;
    }
    func_0x000107c61434();
    func_0x000107c5fadc(lVar2,lVar3);
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c4bb08(uStack_58);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 10146dd58; end: 10146ddb7; -[_TtC28SCCurrentCaptureDeviceHelper21CaptureDeviceProvider init] */

void FUN_10146dd58(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCurrentCaptureDeviceHelper.CaptureDeviceProvider",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10146dd84);
  (*pcVar1)();
}



/* Entry: 10146ddb8; end: 10146de57; -[_TtC28SCCurrentCaptureDeviceHelper21CaptureDeviceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146ddb8(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112da0e00));
  func_0x0001002ebb1c(*(undefined8 *)(param_1 + _DAT_112da0e08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112da0e10));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112da0e18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112da0e28 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112da0e38 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da0e40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112da0e48));
  return;
}



/* Entry: 10146de58; end: 10146dec7;  */

int FUN_10146de58(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10146dec8; end: 10146e243;  */

void FUN_10146dec8(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  ulong *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  float *pfVar17;
  long unaff_x21;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar8 = param_3[1];
  if (0 < lVar8) {
    lVar10 = 0;
    do {
      puVar7 = puStack_58;
      lVar20 = lVar10 + 1;
      if (lVar20 < lVar8) {
        lVar11 = *param_3;
        fVar21 = *(float *)(lVar11 + lVar20 * 4);
        fVar24 = *(float *)(lVar11 + lVar10 * 4);
        lVar15 = lVar10 + 2;
        fVar23 = fVar21;
        do {
          lVar16 = lVar15;
          lVar20 = lVar8;
          if (lVar8 == lVar16) break;
          fVar25 = *(float *)(lVar11 + lVar16 * 4);
          bVar4 = fVar23 <= fVar25;
          lVar15 = lVar16 + 1;
          fVar23 = fVar25;
          lVar20 = lVar16;
        } while (fVar21 < fVar24 != bVar4);
        if (fVar21 < fVar24) {
          if (lVar20 < lVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10146e218);
            (*pcVar3)();
          }
          if (lVar10 < lVar20) {
            puVar9 = (undefined4 *)(lVar11 + lVar20 * 4);
            puVar13 = (undefined4 *)(lVar11 + lVar10 * 4);
            lVar15 = lVar20;
            lVar8 = lVar10;
            do {
              puVar9 = puVar9 + -1;
              lVar15 = lVar15 + -1;
              if (lVar8 != lVar15) {
                if (lVar11 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10146e238);
                  (*pcVar3)();
                }
                uVar22 = *puVar13;
                *puVar13 = *puVar9;
                *puVar9 = uVar22;
              }
              lVar8 = lVar8 + 1;
              puVar13 = puVar13 + 1;
            } while (lVar8 < lVar15);
            lVar8 = param_3[1];
          }
        }
      }
      lVar15 = lVar20;
      if (lVar20 < lVar8) {
        if (SBORROW8(lVar20,lVar10)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10146e214);
          (*pcVar3)();
        }
        if (lVar20 - lVar10 < param_4) {
          if (SCARRY8(lVar10,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10146e21c);
            (*pcVar3)();
          }
          lVar11 = lVar10 + param_4;
          if (lVar8 <= lVar10 + param_4) {
            lVar11 = lVar8;
          }
          if (lVar11 < lVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10146e220);
            (*pcVar3)();
          }
          if (lVar20 != lVar11) {
            lVar8 = *param_3;
            pfVar14 = (float *)(lVar8 + lVar20 * 4 + -4);
            lVar16 = lVar10 - lVar20;
            do {
              fVar23 = *(float *)(lVar8 + lVar20 * 4);
              lVar15 = lVar16;
              pfVar17 = pfVar14;
              do {
                fVar21 = *pfVar17;
                if (fVar21 <= fVar23) break;
                if (lVar8 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10146e224);
                  (*pcVar3)();
                }
                *pfVar17 = fVar23;
                pfVar17[1] = fVar21;
                bVar4 = lVar15 != -1;
                lVar15 = lVar15 + 1;
                pfVar17 = pfVar17 + -1;
              } while (bVar4);
              lVar20 = lVar20 + 1;
              pfVar14 = pfVar14 + 1;
              lVar16 = lVar16 + -1;
              lVar15 = lVar11;
            } while (lVar20 != lVar11);
          }
        }
      }
      if (lVar15 < lVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10146e204);
        (*pcVar3)();
      }
      puVar5 = puStack_58;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar19 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar19) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x0001000a91e0(puVar7,uVar19 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar19 + 1;
      *(long *)(puVar7 + uVar19 * 0x10 + 0x20) = lVar10;
      *(long *)(puVar7 + uVar19 * 0x10 + 0x28) = lVar15;
      puStack_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10146e23c);
        (*pcVar3)();
      }
      FUN_10146e244(&puStack_58,*param_1,param_3);
      puVar7 = puStack_58;
      if (unaff_x21 != 0) goto LAB_10146e1d4;
      lVar8 = param_3[1];
      lVar10 = lVar15;
    } while (lVar15 < lVar8);
  }
  puVar7 = puStack_58;
  lVar8 = *param_1;
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10146e244);
    (*pcVar3)();
  }
  puVar5 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar5 & 1) == 0) {
    FUN_100e06d54();
  }
  puVar18 = (ulong *)(puVar7 + 0x10);
  uVar19 = *puVar18;
  while (1 < uVar19) {
    lVar10 = *param_3;
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10146e240);
      (*pcVar3)();
    }
    plVar1 = (long *)(puVar7 + uVar19 * 0x10);
    lVar20 = *plVar1;
    puVar2 = puVar18 + uVar19 * 2;
    uVar12 = puVar2[1];
    FUN_10146e4b4(lVar10 + lVar20 * 4,lVar10 + *puVar2 * 4,lVar10 + uVar12 * 4,lVar8);
    if (unaff_x21 != 0) break;
    if ((long)uVar12 < lVar20) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10146e208);
      (*pcVar3)();
    }
    if (*puVar18 <= uVar19 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10146e20c);
      (*pcVar3)();
    }
    *plVar1 = lVar20;
    plVar1[1] = uVar12;
    uVar12 = *puVar18;
    lVar10 = uVar12 - uVar19;
    if (uVar12 < uVar19) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10146e210);
      (*pcVar3)();
    }
    uVar19 = uVar12 - 1;
    func_0x000107c610b8(puVar2,puVar2 + 2,lVar10 * 0x10);
    *puVar18 = uVar19;
  }
LAB_10146e1d4:
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 10146e244; end: 10146e4b3;  */

undefined8 FUN_10146e244(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *param_1;
  if (1 < *(ulong *)(uVar10 + 0x10)) {
    uVar14 = uVar10;
    func_0x000107c61558();
    if ((uVar14 & 1) == 0) {
      FUN_100e06d54();
    }
    *param_1 = uVar10;
    lVar1 = uVar10 + 0x20;
    uVar14 = *(ulong *)(uVar10 + 0x10);
    do {
      uVar12 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar10 + 0x28),*(long *)(uVar10 + 0x20));
          lVar8 = *(long *)(uVar10 + 0x28) - *(long *)(uVar10 + 0x20);
          goto LAB_10146e31c;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10146e494);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_10146e37c:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10146e484);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar12 * 0x10);
        lVar8 = *plVar2;
        lVar11 = plVar2[1];
        if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10146e48c);
          (*pcVar6)();
        }
        uVar13 = uVar12;
        if (lVar11 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10146e46c);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10146e470);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar11 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar11;
        if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10146e478);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10146e480);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_10146e31c:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10146e474);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar10 + uVar14 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10146e47c);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10146e488);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10146e490);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_10146e37c;
          uVar13 = uVar14 - 2;
          if (lVar5 <= lVar8) {
            uVar13 = uVar12;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar11 = plVar2[1];
          if (SBORROW8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10146e498);
            (*pcVar6)();
          }
          uVar13 = uVar14 - 2;
          if (lVar11 - lVar9 <= lVar8) {
            uVar13 = uVar12;
          }
        }
      }
      uVar12 = uVar13 - 1;
      if (uVar14 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10146e45c);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar10;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10146e4b4);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar12 * 0x10);
      lVar11 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar13 * 0x10);
      lVar9 = plVar3[1];
      FUN_10146e4b4(lVar8 + lVar11 * 4,lVar8 + *plVar3 * 4,lVar8 + lVar9 * 4,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10146e460);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10146e464);
        (*pcVar6)();
      }
      *plVar2 = lVar11;
      plVar2[1] = lVar9;
      uVar12 = *(ulong *)(uVar10 + 0x10);
      if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10146e468);
        (*pcVar6)();
      }
      uVar14 = uVar12 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar14 - uVar13) * 0x10);
      *(ulong *)(uVar10 + 0x10) = uVar14;
    } while (2 < uVar12);
    *param_1 = uVar10;
  }
  return 1;
}



/* Entry: 10146e4b4; end: 10146e6bb;  */

undefined8 FUN_10146e4b4(float *param_1,float *param_2,float *param_3,float *param_4)

{
  ulong uVar1;
  long lVar2;
  float *pfVar3;
  ulong uVar4;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float *pfVar5;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar2 = lVar10 + 3;
  if (-1 < lVar10) {
    lVar2 = lVar10;
  }
  lVar2 = lVar2 >> 2;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 3;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 2;
  if (lVar2 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar2 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar2 << 2);
    }
    pfVar5 = param_4 + lVar2;
    pfVar8 = param_1;
    if (3 < lVar10) {
      do {
        if (param_3 <= param_2) break;
        fVar12 = *param_2;
        if (*param_4 <= fVar12) {
          fVar12 = *param_4;
          pfVar9 = param_4 + 1;
          pfVar7 = param_2;
          pfVar3 = param_4;
        }
        else {
          pfVar9 = param_4;
          pfVar7 = param_2 + 1;
          pfVar3 = param_2;
        }
        param_2 = pfVar7;
        param_4 = pfVar9;
        if (pfVar8 != pfVar3) {
          *pfVar8 = fVar12;
        }
        pfVar8 = pfVar8 + 1;
      } while (param_4 < pfVar5);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 2);
    }
    pfVar3 = param_4 + lVar6;
    pfVar5 = pfVar3;
    pfVar8 = param_2;
    if ((param_1 < param_2) && (3 < lVar11)) {
      do {
        pfVar7 = param_2 + -1;
        pfVar9 = param_3;
        while( true ) {
          param_3 = pfVar9 + -1;
          pfVar5 = pfVar3 + -1;
          if (*pfVar5 < *pfVar7) break;
          if (pfVar9 != pfVar3) {
            *param_3 = *pfVar5;
          }
          pfVar3 = pfVar5;
          pfVar8 = param_2;
          pfVar9 = param_3;
          if (pfVar5 <= param_4) goto LAB_10146e660;
        }
        if (pfVar9 != param_2) {
          *param_3 = *pfVar7;
        }
        pfVar5 = pfVar3;
        pfVar8 = pfVar7;
      } while ((param_1 < pfVar7) && (param_2 = pfVar7, param_4 < pfVar3));
    }
  }
LAB_10146e660:
  uVar4 = (long)pfVar5 - (long)param_4;
  uVar1 = uVar4 + 3;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((pfVar8 != param_4) || ((float *)((long)param_4 + (uVar1 & 0xfffffffffffffffc)) <= pfVar8)) {
    func_0x000107c610b8(pfVar8,param_4,((long)uVar1 >> 2) << 2);
  }
  return 1;
}



/* Entry: 10146e6bc; end: 10146e6cf;  */

bool FUN_10146e6bc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10146e6d0; end: 10146e77b;  */

void FUN_10146e6d0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10146e77c; end: 10146ef03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10146e77c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)((long)unaff_x20 + _DAT_112da0eb8) = 0;
  *(undefined8 *)((long)unaff_x20 + _DAT_112da0ec0) = 0;
  *(undefined8 *)((long)unaff_x20 + _DAT_112da0e90) = 0xffffffffffffffff;
  lVar2 = _DAT_112da0e98;
  puVar3 = unaff_x20;
  func_0x0001000dbbdc();
  *(undefined8 *)((long)unaff_x20 + lVar2) = *puVar3;
  *(undefined8 *)((long)unaff_x20 + _DAT_112da0ea0) = 1;
  *(undefined8 *)((long)unaff_x20 + _DAT_112da0ea8) = 0;
  *(undefined8 *)((long)unaff_x20 + _DAT_112da0eb0) = 1;
  puVar3 = (undefined8 *)((long)unaff_x20 + _DAT_112da0ec8);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)((long)unaff_x20 + _DAT_112da0ed0);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 *)((long)unaff_x20 + _DAT_112da0ed8) = param_1;
  *(undefined8 *)((long)unaff_x20 + _DAT_112da0ee0) = param_2;
  *(undefined8 *)((long)unaff_x20 + _DAT_112da0ee8) = param_3;
  *(undefined8 *)((long)unaff_x20 + _DAT_112da0ef0) = param_4;
  *(undefined8 *)((long)unaff_x20 + _DAT_112da0ef8) = param_5;
  *(undefined8 *)((long)unaff_x20 + _DAT_112da0f00) = param_6;
  *(undefined8 *)((long)unaff_x20 + _DAT_112da0f08) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  puVar4 = auStack_70;
  func_0x000107c61154(puVar4,puVar1);
  func_0x000107c61180();
  uVar5 = 0;
  uVar6 = 1;
  func_0x0001000dbbe8();
  puVar3 = (undefined8 *)(puVar4 + _DAT_112da0ed0);
  uVar7 = *puVar3;
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  func_0x000107c615e8(uVar7);
  lVar2 = _DAT_112da0ea0;
  func_0x000107c61428(puVar4 + _DAT_112da0ea0,auStack_88,0,0);
  uVar5 = *(undefined8 *)(puVar4 + lVar2);
  uVar6 = 0;
  func_0x0001000dbbe8();
  func_0x000107c615e8(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c61574(param_6);
  func_0x000107c61574(param_7);
  puVar3 = (undefined8 *)(puVar4 + _DAT_112da0ec8);
  uVar7 = *puVar3;
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(uVar7);
  return puVar4;
}



/* Entry: 10146ef04; end: 10146ef63; -[_TtC28SCCurrentCaptureDeviceHelper26CurrentCaptureDeviceHelper init] */

void FUN_10146ef04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCurrentCaptureDeviceHelper.CurrentCaptureDeviceHelper",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10146ef30);
  (*pcVar1)();
}



/* Entry: 10146ef64; end: 10146f04b; -[_TtC28SCCurrentCaptureDeviceHelper26CurrentCaptureDeviceHelper .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010146ef90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010146f030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010146ef94) */
/* WARNING: Removing unreachable block (ram,0x00010146f034) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146ef64(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da0eb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112da0ed8));
  return;
}



/* Entry: 10146f04c; end: 10146f04f;  */

void FUN_10146f04c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da0f20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d943f40;
  func_0x000107c61520(&UNK_10d943f40,&UNK_1103c2120);
  puRam0000000112da0f20 = puVar1;
  return;
}



/* Entry: 10146f050; end: 10146f08f;  */

void FUN_10146f050(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da0f20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d943f40;
  func_0x000107c61520(&UNK_10d943f40,&UNK_1103c2120);
  puRam0000000112da0f20 = puVar1;
  return;
}



/* Entry: 10146f090; end: 10146f1eb;  */

int FUN_10146f090(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10146f10c;
        goto LAB_10146f0f0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10146f0f0:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10146f10c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10146f1ec; end: 10146f35f;  */

void FUN_10146f1ec(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  func_0x0001000285a8(0x112da0e80,&UNK_10d944000);
  lVar12 = *unaff_x20;
  lVar7 = lVar12;
  func_0x000107c6048c();
  if (*(long *)(lVar12 + 0x10) != 0) {
    lVar1 = lVar12 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar12 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar12 + 0x40);
    if (uVar8 == 0) goto LAB_10146f2c8;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        lVar11 = (LZCOUNT(uVar10) | lVar13 << 6) * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x30) + lVar11);
        uVar4 = *(undefined1 *)(puVar2 + 1);
        puVar3 = (undefined8 *)(*(long *)(lVar7 + 0x30) + lVar11);
        puVar5 = (undefined8 *)(*(long *)(lVar12 + 0x38) + lVar11);
        uVar15 = puVar5[1];
        uVar14 = *puVar5;
        *puVar3 = *puVar2;
        *(undefined1 *)(puVar3 + 1) = uVar4;
        puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar11);
        puVar2[1] = uVar15;
        *puVar2 = uVar14;
        func_0x000107c615f0(uVar14);
        if (uVar8 != 0) break;
LAB_10146f2c8:
        do {
          lVar11 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10146f360);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar11) goto LAB_10146f338;
          uVar8 = *(ulong *)(lVar1 + lVar11 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar11;
      }
    } while( true );
  }
LAB_10146f338:
  func_0x000107c61574(lVar12);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 10146f360; end: 10146f62f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146f360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  puVar3 = param_4;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000030;
  func_0x0001000a9a18(0xd000000000000030,0x800000010ef82ff0);
  func_0x000107c61170(uVar4);
  uStack_a0 = 0;
  uStack_98 = 0xe000000000000000;
  func_0x000107c602fc(0x54);
  uVar4 = 0x800000010ef83030;
  func_0x000107c5fb78(0xd00000000000003b,0x800000010ef83030);
  func_0x000107c5fdd8(param_1);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  uVar4 = 0xe400000000000000;
  func_0x000107c5fb78(0x206f7420,0xe400000000000000);
  func_0x000107c5fdd8(param_2);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c5fb78(0x7564206874697720,0xef206e6f69746172);
  uVar8 = param_3;
  func_0x000107c5fddc(&uStack_a0,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_98);
  *(undefined8 *)(unaff_x20 + _DAT_112da0f68) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112da0f70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112da0f78) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112da0f80) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112da0f98);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x00010058d43c(uVar4,uVar2);
  func_0x000107c6157c(param_5);
  func_0x000107c5ee58();
  *(undefined8 *)(unaff_x20 + _DAT_112da0f90) = uVar8;
  lVar7 = _DAT_112da0f88;
  if (*(long *)(unaff_x20 + _DAT_112da0f88) != 0) {
    func_0x000107c498f8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar7);
    *(undefined8 *)(unaff_x20 + lVar7) = 0;
    func_0x000107c61170(uVar4);
  }
  puVar6 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
  func_0x000107c61168();
  func_0x000107c42110();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + lVar7);
  *(undefined **)(unaff_x20 + lVar7) = puVar6;
  func_0x000107c61170(uVar4);
  lVar7 = *(long *)(unaff_x20 + lVar7);
  if (lVar7 != 0) {
    puVar6 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    func_0x000107c61174(lVar7);
    func_0x000107c4c190(puVar6);
    func_0x000107c61180();
    func_0x000107c3d8fc(lVar7);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar6);
  }
  func_0x000107c61428(puVar3,&uStack_a0,0,0);
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  func_0x0001000aa0a8(uVar5);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 10146f630; end: 10146f6ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146f630(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112da0f58;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x00010035ce64(*(undefined8 *)(param_1 + _DAT_112da0f78));
      func_0x000107c615e8(lVar2);
    }
    puVar1 = (undefined8 *)(param_1 + _DAT_112da0f98);
    pcVar5 = (code *)*puVar1;
    if (pcVar5 == (code *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = puVar1[1];
      func_0x000107c6157c(uVar4);
      (*pcVar5)();
      func_0x00010058d43c(pcVar5,uVar4);
      uVar4 = *puVar1;
    }
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x00010058d43c(uVar4,uVar3);
    func_0x000107c61170(param_1);
  }
  return;
}


