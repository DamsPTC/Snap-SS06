/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101466678; end: 101466683; -[_TtC26SCCaptureDeviceManagerImpl36CaptureDeviceAvailabilityHandlerImpl setBackDeviceActiveWithBackDeviceType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101466678(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0a10);
  func_0x000107c61174();
  func_0x000107c3e208(uVar1);
  (*(code *)0x10146e9cc)(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101466684; end: 10146668f; -[_TtC26SCCaptureDeviceManagerImpl36CaptureDeviceAvailabilityHandlerImpl getCurrentBackDeviceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101466684(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0a10);
  func_0x000107c61174();
  func_0x000107c3e208(uVar2);
  lVar1 = _DAT_112da0ea0;
  lVar3 = *(long *)(param_1 + _DAT_112da0a18);
  func_0x000107c61428(lVar3 + _DAT_112da0ea0,auStack_48,0,0);
  uVar2 = *(undefined8 *)(lVar3 + lVar1);
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 101466690; end: 10146669b; -[_TtC26SCCaptureDeviceManagerImpl36CaptureDeviceAvailabilityHandlerImpl getCurrentPrimaryDevicePosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101466690(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0a10);
  func_0x000107c61174();
  func_0x000107c3e208(uVar2);
  lVar1 = _DAT_112da0e90;
  lVar3 = *(long *)(param_1 + _DAT_112da0a18);
  func_0x000107c61428(lVar3 + _DAT_112da0e90,auStack_48,0,0);
  uVar2 = *(undefined8 *)(lVar3 + lVar1);
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 10146669c; end: 101466717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10146669c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0a10);
  func_0x000107c61174();
  func_0x000107c3e208(uVar2);
  lVar3 = *(long *)(param_1 + _DAT_112da0a18);
  lVar1 = *param_3;
  func_0x000107c61428(lVar3 + lVar1,auStack_48,0,0);
  uVar2 = *(undefined8 *)(lVar3 + lVar1);
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 101466718; end: 10146682b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101466718(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined *puStack_48;
  
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112da0a10));
  lVar4 = _DAT_112da0e90;
  puStack_48 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar6 = *(long *)(unaff_x20 + _DAT_112da0a18);
  func_0x000107c61428(lVar6 + _DAT_112da0e90,auStack_60,0,0);
  lVar2 = _DAT_112da0e98;
  uVar7 = 1;
  if (*(long *)(lVar6 + lVar4) == 1) {
    uVar7 = 2;
  }
  uVar1 = 0;
  if (*(long *)(lVar6 + lVar4) != -1) {
    uVar1 = uVar7;
  }
  func_0x000107c61428(lVar6 + _DAT_112da0e98,auStack_78,0,0);
  uVar7 = *(ulong *)(lVar6 + lVar2);
  func_0x0001002a5a2c(0);
  lVar4 = unaff_x20 + _DAT_112da0a20;
  func_0x000107c61618(lVar4);
  func_0x0001002a5a4c(&puStack_48,uVar7 | uVar1,lVar4);
  func_0x000107c615e8(lVar4);
  puVar3 = puStack_48;
  puVar5 = puStack_48;
  func_0x000107c5fc48(puStack_48,&UNK_11077dd00);
  func_0x000107c6142c(puVar3);
  return puVar5;
}



/* Entry: 10146682c; end: 10146685f; -[_TtC26SCCaptureDeviceManagerImpl36CaptureDeviceAvailabilityHandlerImpl currentlyActiveDevicePositions] */

void FUN_10146682c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101466718();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101466860; end: 1014668bf; -[_TtC26SCCaptureDeviceManagerImpl36CaptureDeviceAvailabilityHandlerImpl init] */

void FUN_101466860(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCaptureDeviceManagerImpl.CaptureDeviceAvailabilityHandlerImpl",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10146688c);
  (*pcVar1)();
}



/* Entry: 1014668c0; end: 10146692b; -[_TtC26SCCaptureDeviceManagerImpl36CaptureDeviceAvailabilityHandlerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1014668c0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da0a10));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112da0a18));
  param_1 = param_1 + _DAT_112da0a20;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10146692c; end: 101466ab7;  */

/* WARNING: Possible PIC construction at 0x0001014669c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101466a50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014669c8) */
/* WARNING: Removing unreachable block (ram,0x000101466a54) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146692c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112da0a50));
  lVar1 = 1;
  func_0x0001002a1e70();
  lVar4 = param_2;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c614f0();
    lVar3 = lVar2;
    (**(code **)(param_2 + 0x188))();
    if (lVar3 != 0) {
      (**(code **)(param_2 + 0x1a0))(lVar2,param_2);
      (**(code **)(param_2 + 0x198))(lVar2,param_2);
      goto code_r0x000107c615e8;
    }
    func_0x000107c615e8(lVar1);
  }
  lVar1 = 2;
  func_0x0001002a1e70();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1;
  func_0x000107c614f0();
  lVar3 = lVar2;
  (**(code **)(lVar4 + 0x188))();
  if (lVar3 != 0) {
    (**(code **)(lVar4 + 0x1a0))(lVar2,lVar4);
    (**(code **)(lVar4 + 0x198))(lVar2,lVar4);
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 101466ab8; end: 101466adf; -[_TtC26SCCaptureDeviceManagerImpl30CaptureDeviceFormatHandlerImpl saveDeviceFormat] */

void FUN_101466ab8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10146692c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101466ae0; end: 101466c57;  */

/* WARNING: Possible PIC construction at 0x000101466b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101466c14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101466c2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101466c30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101466ae0(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  code *pcVar4;
  
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112da0a50));
  plVar1 = (long *)(unaff_x20 + _DAT_112da0a68);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    func_0x000107c61174();
    lVar3 = 1;
    func_0x0001002a1e70();
    if (lVar3 != 0) {
      func_0x000107c614f0();
      pcVar4 = *(code **)(param_2 + 0x1a8);
      func_0x000107c61174(lVar2);
      (*pcVar4)();
      func_0x000107c615e8(lVar3);
      goto code_r0x000107c61170;
    }
    func_0x000107c61170(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112da0a70);
  if (lVar2 != 0) {
    func_0x000107c61174();
    lVar3 = 2;
    func_0x0001002a1e70();
    if (lVar3 != 0) {
      func_0x000107c614f0();
      pcVar4 = *(code **)(param_2 + 0x1a8);
      func_0x000107c61174(lVar2);
      (*pcVar4)();
      func_0x000107c615e8(lVar3);
      goto code_r0x000107c61170;
    }
    func_0x000107c61170(lVar2);
  }
  lVar2 = *plVar1;
  plVar1[1] = 0;
  plVar1[2] = 0;
  *plVar1 = 0;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101466c58; end: 101466c7f; -[_TtC26SCCaptureDeviceManagerImpl30CaptureDeviceFormatHandlerImpl restoreDeviceFormat] */

void FUN_101466c58(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101466ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101466c80; end: 101466cdf; -[_TtC26SCCaptureDeviceManagerImpl30CaptureDeviceFormatHandlerImpl init] */

void FUN_101466c80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCaptureDeviceManagerImpl.CaptureDeviceFormatHandlerImpl",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101466cac);
  (*pcVar1)();
}



/* Entry: 101466ce0; end: 101466d47; -[_TtC26SCCaptureDeviceManagerImpl30CaptureDeviceFormatHandlerImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101466d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101466d2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101466d10) */
/* WARNING: Removing unreachable block (ram,0x000101466d30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101466ce0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da0a50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da0a58));
  return;
}



/* Entry: 101466d48; end: 101466d4f;  */

void FUN_101466d48(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 101466d50; end: 101466da3;  */

undefined8 * FUN_101466d50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 101466da4; end: 101466ddf;  */

undefined8 * FUN_101466da4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  return param_1;
}



/* Entry: 101466de0; end: 101466e7f;  */

int FUN_101466de0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101466e80; end: 101466edf; -[_TtC26SCCaptureDeviceManagerImpl31CaptureDeviceLoggingHandlerImpl init] */

void FUN_101466e80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCaptureDeviceManagerImpl.CaptureDeviceLoggingHandlerImpl",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101466eac);
  (*pcVar1)();
}



/* Entry: 101466ee0; end: 101466f93; -[_TtC26SCCaptureDeviceManagerImpl31CaptureDeviceLoggingHandlerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101466ee0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da0aa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da0ab0));
  return;
}



/* Entry: 101466f94; end: 10146704b; -[_TtC26SCCaptureDeviceManagerImpl44CaptureDeviceSessionInfoProvidingHandlerImpl getDeviceInputForDeviceAtPosition:] */

void FUN_101466f94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000101466f18(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10146704c; end: 10146707b; -[_TtC26SCCaptureDeviceManagerImpl44CaptureDeviceSessionInfoProvidingHandlerImpl resetCaptureInputForDeviceAtPosition:] */

void FUN_10146704c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000101466fd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10146707c; end: 1014670db; -[_TtC26SCCaptureDeviceManagerImpl44CaptureDeviceSessionInfoProvidingHandlerImpl init] */

void FUN_10146707c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCaptureDeviceManagerImpl.CaptureDeviceSessionInfoProvidingHandlerImpl",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014670a8);
  (*pcVar1)();
}



/* Entry: 1014670dc; end: 101467113; -[_TtC26SCCaptureDeviceManagerImpl44CaptureDeviceSessionInfoProvidingHandlerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014670dc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da0ae0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da0ae8));
  return;
}



/* Entry: 101467114; end: 10146718b; -[_TtC26SCCaptureDeviceManagerImpl41CaptureDeviceCapabilitiesInfoProviderImpl isSystemVideoEffectsPortraitActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101467114(undefined8 param_1,long param_2)

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
    (**(code **)(param_2 + 0xa0))();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
  return uVar3 & 1;
}



/* Entry: 10146718c; end: 101467203; -[_TtC26SCCaptureDeviceManagerImpl41CaptureDeviceCapabilitiesInfoProviderImpl frontCameraPortraitEffectActiveObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146718c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar1 = 1;
  func_0x0001002a1e70();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c614f0();
    (**(code **)(param_2 + 0xa8))();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 101467204; end: 1014672d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101467204(long param_1,long param_2)

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
    (**(code **)(param_2 + 0x88))();
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 1014672d4; end: 101467363; -[_TtC26SCCaptureDeviceManagerImpl41CaptureDeviceCapabilitiesInfoProviderImpl currentActiveCameraDeviceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014672d4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar1 = 0;
  func_0x0001002a1e70();
  if (lVar1 == 0) {
    lVar2 = *(long *)PTR__AVCaptureDeviceTypeBuiltInWideAngleCamera_110347f20;
    func_0x000107c61174(lVar2);
    func_0x000107c61170(param_1);
  }
  else {
    lVar2 = lVar1;
    func_0x000107c614f0();
    (**(code **)(param_2 + 0x80))();
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 101467364; end: 1014673e3; -[_TtC26SCCaptureDeviceManagerImpl41CaptureDeviceCapabilitiesInfoProviderImpl formatDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101467364(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar1 = 0;
  func_0x0001002a1e70();
  if (lVar1 == 0) {
    func_0x000107c61170(param_1);
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c614f0();
    (**(code **)(param_2 + 0x180))();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1014673e4; end: 10146741f; -[_TtC26SCCaptureDeviceManagerImpl41CaptureDeviceCapabilitiesInfoProviderImpl isUltraWideCameraActiveForDeviceAtPosition:] */

uint FUN_1014673e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101467204(param_3);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 101467420; end: 10146745b; -[_TtC26SCCaptureDeviceManagerImpl41CaptureDeviceCapabilitiesInfoProviderImpl isTelephotoCameraActiveForDeviceAtPosition:] */

uint FUN_101467420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x00010146726c(param_3);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 10146745c; end: 1014674bf; -[_TtC26SCCaptureDeviceManagerImpl41CaptureDeviceCapabilitiesInfoProviderImpl isMixCaptureSupported] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10146745c(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001002a5da4();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed278(0);
  }
  func_0x000107c61170(param_1);
  return uVar2 & 1;
}



/* Entry: 1014674c0; end: 101467527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014674c0(long param_1,long param_2)

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
    (**(code **)(param_2 + 0x78))();
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 101467528; end: 101467563; -[_TtC26SCCaptureDeviceManagerImpl41CaptureDeviceCapabilitiesInfoProviderImpl isDeviceAvailableForDeviceAtPosition:] */

uint FUN_101467528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1014674c0(param_3);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 101467564; end: 101467583; -[_TtC26SCCaptureDeviceManagerImpl41CaptureDeviceCapabilitiesInfoProviderImpl openSystemVideoEffectsUI] */

void FUN_101467564(void)

{
  func_0x000107c61168(PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0);
                    /* WARNING: Could not recover jumptable at 0x00010c23a610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101467584; end: 1014675e3; -[_TtC26SCCaptureDeviceManagerImpl41CaptureDeviceCapabilitiesInfoProviderImpl init] */

void FUN_101467584(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCaptureDeviceManagerImpl.CaptureDeviceCapabilitiesInfoProviderImpl",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014675b0);
  (*pcVar1)();
}



/* Entry: 1014675e4; end: 1014675f3; -[_TtC26SCCaptureDeviceManagerImpl41CaptureDeviceCapabilitiesInfoProviderImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014675e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da0b18));
  return;
}



/* Entry: 1014675f4; end: 1014677f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014675f4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_68 = (undefined *)0x0;
  uStack_60 = 0xe000000000000000;
  func_0x000107c602fc(0x78);
  func_0x000107c5fb78(0xd000000000000076,0x800000010ef81fa0);
  uStack_38 = param_1;
  func_0x000107c603d0(&uStack_38,&puStack_68,&UNK_11077dd00,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_60);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112da0b48);
  puVar1 = &UNK_1103c1718;
  func_0x000107c613fc(&UNK_1103c1718,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1103c1790;
  func_0x000107c613fc(&UNK_1103c1790,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  uStack_48 = 0x101467b38;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x42000000;
  puStack_58 = &UNK_1000f6b44;
  puStack_50 = &UNK_1103c17a8;
  ppuVar3 = &puStack_68;
  puStack_40 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_40);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 1014677f8; end: 101467827; -[_TtC26SCCaptureDeviceManagerImpl49CaptureDeviceConstituentDeviceBehaviorHandlerImpl setPrimaryConstituentDeviceSwitchingBehaviorRestrictedForDeviceAtPosition:] */

void FUN_1014677f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1014675f4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101467828; end: 101467a2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101467828(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_68 = (undefined *)0x0;
  uStack_60 = 0xe000000000000000;
  func_0x000107c602fc(0x72);
  func_0x000107c5fb78(0xd000000000000070,0x800000010ef81f20);
  uStack_38 = param_1;
  func_0x000107c603d0(&uStack_38,&puStack_68,&UNK_11077dd00,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_60);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112da0b48);
  puVar1 = &UNK_1103c1718;
  func_0x000107c613fc(&UNK_1103c1718,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1103c1740;
  func_0x000107c613fc(&UNK_1103c1740,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  pcStack_48 = FUN_101467b14;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x42000000;
  puStack_58 = &UNK_1000f6b44;
  puStack_50 = &UNK_1103c1758;
  ppuVar3 = &puStack_68;
  puStack_40 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_40);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 101467a2c; end: 101467a5b; -[_TtC26SCCaptureDeviceManagerImpl49CaptureDeviceConstituentDeviceBehaviorHandlerImpl setPrimaryConstituentDeviceSwitchingBehaviorAutoForDeviceAtPosition:] */

void FUN_101467a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101467828(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101467a5c; end: 101467abb; -[_TtC26SCCaptureDeviceManagerImpl49CaptureDeviceConstituentDeviceBehaviorHandlerImpl init] */

void FUN_101467a5c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCaptureDeviceManagerImpl.CaptureDeviceConstituentDeviceBehaviorHandlerImpl"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101467a88);
  (*pcVar1)();
}



/* Entry: 101467abc; end: 101467af3; -[_TtC26SCCaptureDeviceManagerImpl49CaptureDeviceConstituentDeviceBehaviorHandlerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101467abc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da0b48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da0b50));
  return;
}



/* Entry: 101467af4; end: 101467b13;  */

void FUN_101467af4(void)

{
  func_0x000107c61168(&PTR_PTR_1127d85f0);
  return;
}



/* Entry: 101467b14; end: 101467b47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101467b14(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  puVar4 = auStack_48;
  func_0x000107c61428(lVar2 + 0x10,puVar4,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112da0b50);
    uVar5 = 2;
    if (lVar1 != 1) {
      uVar5 = (uint)(lVar1 == 0);
    }
    uVar6 = (ulong)uVar5;
    func_0x000107c61174(uVar3);
    func_0x0001002a1e70();
    func_0x000107c61170(uVar3);
    if (uVar6 != 0) {
      func_0x000107c614f0(uVar6);
      (**(code **)(puVar4 + 0x1e0))();
      func_0x000107c615e8(uVar6);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101467b48; end: 101467bcf; -[_TtC26SCCaptureDeviceManagerImpl32CaptureDeviceExposureHandlerImpl maxExposureBias] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_101467b48(float param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  double dVar2;
  
  func_0x000107c61174();
  lVar1 = 0;
  func_0x0001002a1e70();
  if (lVar1 == 0) {
    func_0x000107c61170(param_2);
    dVar2 = 0.0;
  }
  else {
    func_0x000107c614f0();
    (**(code **)(param_3 + 0xe0))();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_2);
    dVar2 = (double)param_1;
  }
  return dVar2;
}



/* Entry: 101467bd0; end: 101467c57; -[_TtC26SCCaptureDeviceManagerImpl32CaptureDeviceExposureHandlerImpl minExposureBias] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_101467bd0(float param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  double dVar2;
  
  func_0x000107c61174();
  lVar1 = 0;
  func_0x0001002a1e70();
  if (lVar1 == 0) {
    func_0x000107c61170(param_2);
    dVar2 = 0.0;
  }
  else {
    func_0x000107c614f0();
    (**(code **)(param_3 + 0xe8))();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_2);
    dVar2 = (double)param_1;
  }
  return dVar2;
}



/* Entry: 101467c58; end: 101467cdf; -[_TtC26SCCaptureDeviceManagerImpl32CaptureDeviceExposureHandlerImpl currentISO] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_101467c58(float param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  double dVar2;
  
  func_0x000107c61174();
  lVar1 = 0;
  func_0x0001002a1e70();
  if (lVar1 == 0) {
    func_0x000107c61170(param_2);
    dVar2 = 0.0;
  }
  else {
    func_0x000107c614f0();
    (**(code **)(param_3 + 0xd0))();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_2);
    dVar2 = (double)param_1;
  }
  return dVar2;
}



/* Entry: 101467ce0; end: 101467d67; -[_TtC26SCCaptureDeviceManagerImpl32CaptureDeviceExposureHandlerImpl maxISO] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_101467ce0(float param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  double dVar2;
  
  func_0x000107c61174();
  lVar1 = 0;
  func_0x0001002a1e70();
  if (lVar1 == 0) {
    func_0x000107c61170(param_2);
    dVar2 = 0.0;
  }
  else {
    func_0x000107c614f0();
    (**(code **)(param_3 + 0xd8))();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_2);
    dVar2 = (double)param_1;
  }
  return dVar2;
}



/* Entry: 101467d68; end: 101467deb; -[_TtC26SCCaptureDeviceManagerImpl32CaptureDeviceExposureHandlerImpl isExposureModeSupported:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101467d68(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174();
  lVar2 = 0;
  func_0x0001002a1e70();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c614f0();
    (**(code **)(param_2 + 0xf8))(param_3,lVar3,param_2);
    uVar1 = (uint)param_3;
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101467dec; end: 101467f5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101467dec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puStack_70 = (undefined *)0x0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x36);
  uVar5 = 0x800000010ef820f0;
  func_0x000107c5fb78(0xd000000000000034,0x800000010ef820f0);
  uVar6 = param_1;
  func_0x000107c417f0(param_1);
  func_0x000107c61180();
  uVar1 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61170(uVar6);
  func_0x000107c5fb78(uVar1,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uStack_68);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112da0b80);
  puVar2 = &UNK_1103c17e0;
  func_0x000107c613fc(&UNK_1103c17e0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1103c1858;
  func_0x000107c613fc(&UNK_1103c1858,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  uStack_50 = 0x101468538;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1103c1870;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uVar6);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 101467f5c; end: 10146801b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101467f5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  puVar3 = auStack_48;
  func_0x000107c61428(param_1 + 0x10,puVar3,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112da0b88);
    func_0x000107c61174(uVar4);
    func_0x000107c61170(param_1);
    lVar1 = 0;
    func_0x0001002a1e70();
    func_0x000107c61170(uVar4);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c614f0(lVar1);
      func_0x000107c436dc(param_2);
      (**(code **)(puVar3 + 0x100))(lVar2,puVar3);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 10146801c; end: 10146806b; -[_TtC26SCCaptureDeviceManagerImpl32CaptureDeviceExposureHandlerImpl setExposureBias:] */

/* WARNING: Possible PIC construction at 0x000101468054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101468058) */

void FUN_10146801c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101467dec(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10146806c; end: 10146828b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146806c(undefined8 param_1,undefined8 param_2,byte param_3,byte param_4)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  ppuVar6 = &puStack_b0;
  puStack_b0 = (undefined *)0x0;
  uStack_a8 = 0xe000000000000000;
  func_0x000107c602fc(0x81);
  func_0x000107c5fb78(0xd00000000000003f,0x800000010ef82060);
  uVar3 = 0;
  uStack_80 = param_1;
  uStack_78 = param_2;
  func_0x000100f6e714(0);
  func_0x000107c603d0(&uStack_80,&puStack_b0,uVar3,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0xd000000000000015,0x800000010ef820a0);
  bVar2 = (param_3 & 1) == 0;
  uVar3 = 0x65757274;
  if (bVar2) {
    uVar3 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0xd000000000000027,0x800000010ef820c0);
  bVar2 = (param_4 & 1) == 0;
  uVar3 = 0x65757274;
  if (bVar2) {
    uVar3 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uStack_a8);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112da0b80);
  puVar4 = &UNK_1103c17e0;
  func_0x000107c613fc(&UNK_1103c17e0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_1103c1808;
  func_0x000107c613fc(&UNK_1103c1808,0x2a,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  puVar5[0x28] = param_3;
  puVar5[0x29] = param_4;
  pcStack_90 = FUN_101468508;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_1103c1820;
  puStack_88 = puVar5;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c61574(puStack_88);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar6);
  return;
}



/* Entry: 10146828c; end: 101468413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146828c(undefined8 param_1,undefined8 param_2,long param_3,uint param_4,ulong param_5)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar7 = auStack_78;
  func_0x000107c61428(param_3 + 0x10,puVar7,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112da0b88;
  if (param_3 == 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_3 + _DAT_112da0b88);
  func_0x000107c61174(uVar3);
  uVar4 = 0;
  func_0x0001002a1e70();
  func_0x000107c61170(uVar3);
  if (uVar4 == 0) {
LAB_1014683b8:
    func_0x000107c61170(param_3);
    return;
  }
  uVar5 = uVar4;
  func_0x000107c614f0();
  uVar6 = uVar5;
  (**(code **)(puVar7 + 0x98))();
  if ((uVar6 & 1) == 0) {
    func_0x000107c615e8(uVar4);
    goto LAB_1014683b8;
  }
  func_0x000107c61428(*(long *)(param_3 + lVar1) + _DAT_112da0e90,auStack_90,0,0);
  uVar6 = uVar5;
  (**(code **)(puVar7 + 8))(uVar5,puVar7);
  if ((uVar6 & 1) != 0) {
    pcVar8 = *(code **)(puVar7 + 0x30);
    (*pcVar8)(uVar5,puVar7);
    (*pcVar8)(uVar5,puVar7);
  }
  if ((param_4 & 1) == 0) {
    uVar6 = uVar5;
    (**(code **)(puVar7 + 0x68))(uVar5,puVar7);
    bVar2 = (uVar6 & 0xffffffff) == 0;
    if (((uVar6 & 0xffffffff) != 0) && ((param_5 & 1) != 0)) goto LAB_1014683e4;
  }
  else {
    bVar2 = false;
  }
  (**(code **)(puVar7 + 0x108))(param_1,param_2,param_4 & 1,bVar2,uVar5,puVar7);
LAB_1014683e4:
  func_0x000107c61170(param_3);
  func_0x000107c615e8(uVar4);
  return;
}



/* Entry: 101468414; end: 10146846f; -[_TtC26SCCaptureDeviceManagerImpl32CaptureDeviceExposureHandlerImpl setExposurePointOfInterest:isTriggeredByUser:isFaceDetectionEnabledOnFrontCamera:] */

void FUN_101468414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174();
  FUN_10146806c(param_1,param_2,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101468470; end: 1014684cf; -[_TtC26SCCaptureDeviceManagerImpl32CaptureDeviceExposureHandlerImpl init] */

void FUN_101468470(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCaptureDeviceManagerImpl.CaptureDeviceExposureHandlerImpl",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10146849c);
  (*pcVar1)();
}



/* Entry: 1014684d0; end: 101468507; -[_TtC26SCCaptureDeviceManagerImpl32CaptureDeviceExposureHandlerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014684d0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da0b80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da0b88));
  return;
}



/* Entry: 101468508; end: 101468547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101468508(void)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  long unaff_x20;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  bVar1 = *(byte *)(unaff_x20 + 0x28);
  bVar2 = *(byte *)(unaff_x20 + 0x29);
  puVar10 = auStack_78;
  func_0x000107c61428(lVar9 + 0x10,puVar10,0,0);
  lVar9 = lVar9 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112da0b88;
  if (lVar9 == 0) {
    return;
  }
  uVar5 = *(undefined8 *)(lVar9 + _DAT_112da0b88);
  func_0x000107c61174(uVar5);
  uVar6 = 0;
  func_0x0001002a1e70();
  func_0x000107c61170(uVar5);
  if (uVar6 == 0) {
LAB_1014683b8:
    func_0x000107c61170(lVar9);
    return;
  }
  uVar7 = uVar6;
  func_0x000107c614f0();
  uVar8 = uVar7;
  (**(code **)(puVar10 + 0x98))();
  if ((uVar8 & 1) == 0) {
    func_0x000107c615e8(uVar6);
    goto LAB_1014683b8;
  }
  func_0x000107c61428(*(long *)(lVar9 + lVar3) + _DAT_112da0e90,auStack_90,0,0);
  uVar8 = uVar7;
  (**(code **)(puVar10 + 8))(uVar7,puVar10);
  if ((uVar8 & 1) != 0) {
    pcVar11 = *(code **)(puVar10 + 0x30);
    (*pcVar11)(uVar7,puVar10);
    (*pcVar11)(uVar7,puVar10);
  }
  if ((bVar1 & 1) == 0) {
    uVar8 = uVar7;
    (**(code **)(puVar10 + 0x68))(uVar7,puVar10);
    bVar4 = (uVar8 & 0xffffffff) == 0;
    if (((uVar8 & 0xffffffff) != 0) && ((bVar2 & 1) != 0)) goto LAB_1014683e4;
  }
  else {
    bVar4 = false;
  }
  (**(code **)(puVar10 + 0x108))(uVar12,uVar13,bVar1 & 1,bVar4,uVar7,puVar10);
LAB_1014683e4:
  func_0x000107c61170(lVar9);
  func_0x000107c615e8(uVar6);
  return;
}



/* Entry: 101468548; end: 1014685af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101468548(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112da0bd8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112da0bd8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_101465cd0();
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 1014685b0; end: 1014685fb; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFlashHandlerImpl isBrightScreenOverlayActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1014685b0(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_101468548();
  func_0x000107c61170(param_1);
  uVar1 = *(undefined1 *)(lVar2 + _DAT_112da0998);
  func_0x000107c61170(lVar2);
  return uVar1;
}



/* Entry: 1014685fc; end: 1014686c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014685fc(byte param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x000107c602fc(0x2c);
  func_0x000107c6142c(0xe000000000000000);
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
  func_0x000107c6142c(0x800000010ef822a0);
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xe000000000000000;
  func_0x000107c602fc(0x45);
  func_0x000107c5fb78(0xd00000000000002a,0x800000010ef822a0);
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
  func_0x000107c5fb78(0xd000000000000017,0x800000010ef82230);
  uStack_58 = 0xffffffffffffffff;
  func_0x000107c603d0(&uStack_58,&puStack_88,&UNK_11077dd00,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_80);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112da0bb8);
  puVar3 = &UNK_1103c18d0;
  func_0x000107c613fc(&UNK_1103c18d0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,unaff_x20);
  puVar4 = &UNK_1103c1ad8;
  func_0x000107c613fc(&UNK_1103c1ad8,0x38,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
  puVar4[0x20] = param_1;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  *(undefined8 *)(puVar4 + 0x30) = param_3;
  uStack_68 = 0x101469f3c;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_1103c1af0;
  ppuVar5 = &puStack_88;
  puStack_60 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar3 = puStack_60;
  func_0x000100b64c10(param_2,param_3);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar6);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 1014686c8; end: 10146889f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014686c8(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xe000000000000000;
  func_0x000107c602fc(0x45);
  func_0x000107c5fb78(0xd00000000000002a,0x800000010ef822a0);
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
  func_0x000107c5fb78(0xd000000000000017,0x800000010ef82230);
  uStack_58 = param_2;
  func_0x000107c603d0(&uStack_58,&puStack_88,&UNK_11077dd00,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_80);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112da0bb8);
  puVar3 = &UNK_1103c18d0;
  func_0x000107c613fc(&UNK_1103c18d0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1103c1ad8;
  func_0x000107c613fc(&UNK_1103c1ad8,0x38,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  puVar4[0x20] = param_1;
  *(undefined8 *)(puVar4 + 0x28) = param_3;
  *(undefined8 *)(puVar4 + 0x30) = param_4;
  uStack_68 = 0x101469f3c;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_1103c1af0;
  ppuVar5 = &puStack_88;
  puStack_60 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar3 = puStack_60;
  func_0x000100b64c10(param_3,param_4);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar6);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 1014688a0; end: 10146892f; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFlashHandlerImpl setFlashWithActive:completion:] */

void FUN_1014688a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_1103c1b78;
    func_0x000107c613fc(&UNK_1103c1b78,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x101469fb0;
  }
  func_0x000107c61174(param_1);
  FUN_1014685fc(param_3,uVar2,puVar1);
  func_0x00010058d43c(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101468930; end: 101468ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101468930(long param_1,long param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  puVar5 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar5,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112da0bc8);
    uVar6 = 2;
    if (param_2 != 1) {
      uVar6 = (uint)(param_2 == 0);
    }
    uVar7 = (ulong)uVar6;
    func_0x000107c61174(uVar1);
    func_0x0001002a1e70();
    func_0x000107c61170(uVar1);
    if (uVar7 != 0) {
      uVar2 = uVar7;
      func_0x000107c614f0(uVar7);
      (**(code **)(puVar5 + 0x170))(param_3 & 1,uVar2,puVar5);
      func_0x000107c615e8(uVar7);
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_112da0bc0);
    puVar3 = &UNK_1103c1b28;
    func_0x000107c613fc(&UNK_1103c1b28,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(undefined8 *)(puVar3 + 0x18) = param_5;
    pcStack_78 = FUN_101469f4c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1103c1b40;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_70;
    func_0x000107c615f0(uVar1);
    func_0x000100b64c10(param_4,param_5);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(uVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 101468ab8; end: 101468cd7; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFlashHandlerImpl setFlashWithActive:forDeviceAtPosition:completion:] */

void FUN_101468ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_1103c1ab0;
    func_0x000107c613fc(&UNK_1103c1ab0,0x18,7);
    *(long *)(puVar1 + 0x10) = param_5;
    uVar2 = 0x101469fac;
  }
  func_0x000107c61174(param_1);
  FUN_1014686c8(param_3,param_4,uVar2,puVar1);
  func_0x00010058d43c(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101468cd8; end: 101469063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101468cd8(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long extraout_x8;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_120 [8];
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  uVar2 = 0;
  func_0x000107c5ed50();
  lVar14 = *(long *)(uVar2 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar13 = param_1 + _DAT_112da0bd0;
    func_0x000107c61618();
    if (lVar13 != 0) {
      lVar3 = lVar13;
      func_0x000107c418b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar13);
      lVar13 = lVar3;
      func_0x000107c41070();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      if (lVar13 != 0) {
        lStack_118 = lVar14;
        lStack_110 = lVar13;
        func_0x000107c600f4(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        FUN_100e15a08();
        func_0x000107c601c0(&puStack_b0,uVar2,lVar3);
        puVar1 = PTR___sypN_11034f1a8;
        uStack_100 = param_4;
        uStack_108 = param_3;
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        while (puStack_98 != (undefined *)0x0) {
          func_0x000100102924(&puStack_b0,auStack_d0);
          func_0x0001000bb420(auStack_d0,auStack_f0);
          uVar4 = 0;
          func_0x0001002ed07c(0);
          plVar5 = &lStack_f8;
          func_0x000107c6147c(plVar5,auStack_f0,puVar1 + 8,uVar4,6);
          lVar14 = lStack_f8;
          if ((int)plVar5 == 0) {
            func_0x000100183ab8(auStack_d0);
            lVar13 = -1;
LAB_101468ea4:
            puVar6 = puVar7;
            func_0x000107c61558();
            puVar8 = puVar7;
            if (((ulong)puVar6 & 1) == 0) {
              puVar8 = (undefined *)0x0;
              func_0x0001002a5edc(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
            }
            uVar10 = *(ulong *)(puVar8 + 0x10);
            puVar7 = puVar8;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar10) {
              puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
              func_0x0001002a5edc(puVar7,uVar10 + 1,1,puVar8);
            }
            *(ulong *)(puVar7 + 0x10) = uVar10 + 1;
            *(long *)(puVar7 + uVar10 * 8 + 0x20) = lVar13;
          }
          else {
            lVar13 = lStack_f8;
            func_0x000107c49820();
            func_0x000107c61170(lVar14);
            func_0x000100183ab8(auStack_d0);
            if (lVar13 + 1U < 3) goto LAB_101468ea4;
          }
          func_0x000107c601c0(&puStack_b0,uVar2,lVar3);
        }
        (**(code **)(lStack_118 + 8))(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        lVar14 = *(long *)(puVar7 + 0x10);
        if (lVar14 != 0) {
          plVar5 = (long *)(puVar7 + 0x20);
          do {
            uVar12 = 2;
            if (*plVar5 != 1) {
              uVar12 = (uint)(*plVar5 == 0);
            }
            uVar9 = (ulong)uVar12;
            func_0x0001002a1e70();
            uVar10 = uVar2;
            if (uVar9 != 0) {
              uVar10 = uVar9;
              func_0x000107c614f0();
              (**(code **)(uVar2 + 0x170))(param_2 & 1,uVar10,uVar2);
              func_0x000107c615e8(uVar9);
            }
            lVar14 = lVar14 + -1;
            uVar2 = uVar10;
            plVar5 = plVar5 + 1;
          } while (lVar14 != 0);
        }
        func_0x000107c61170(lStack_110);
        func_0x000107c6142c(puVar7);
        param_4 = uStack_100;
        param_3 = uStack_108;
      }
    }
    uVar4 = *(undefined8 *)(param_1 + _DAT_112da0bc0);
    puVar7 = &UNK_1103c1a60;
    func_0x000107c613fc(&UNK_1103c1a60,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = param_3;
    *(undefined8 *)(puVar7 + 0x18) = param_4;
    uStack_90 = 0x101469fa8;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000f6b44;
    puStack_98 = &UNK_1103c1a78;
    ppuVar11 = &puStack_b0;
    puStack_88 = puVar7;
    func_0x000107c60bc4(ppuVar11);
    puVar7 = puStack_88;
    func_0x000107c615f0(uVar4);
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar7);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 101469064; end: 10146907f; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFlashHandlerImpl setFlashActiveOnAllActiveDevices:completion:] */

void FUN_101469064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103c19e8;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1103c19e8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  (*(code *)0x101468b5c)(param_3,0x101469fa4,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101469080; end: 101469133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101469080(byte param_1)

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
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x000107c602fc(0x2c);
  func_0x000107c6142c(0xe000000000000000);
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
  func_0x000107c6142c(0x800000010ef82200);
  puStack_78 = (undefined *)0x0;
  uStack_70 = 0xe000000000000000;
  func_0x000107c602fc(0x45);
  func_0x000107c5fb78(0xd00000000000002a,0x800000010ef82200);
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
  func_0x000107c5fb78(0xd000000000000017,0x800000010ef82230);
  uStack_48 = 0xffffffffffffffff;
  func_0x000107c603d0(&uStack_48,&puStack_78,&UNK_11077dd00,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_70);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112da0bb8);
  puVar3 = &UNK_1103c18d0;
  func_0x000107c613fc(&UNK_1103c18d0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,unaff_x20);
  puVar4 = &UNK_1103c1998;
  func_0x000107c613fc(&UNK_1103c1998,0x21,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
  puVar4[0x20] = param_1;
  pcStack_58 = FUN_101469ef4;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_1103c19b0;
  ppuVar5 = &puStack_78;
  puStack_50 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_50);
  func_0x000107c4e524(uVar6);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 101469134; end: 1014692e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101469134(byte param_1,undefined8 param_2)

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
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puStack_78 = (undefined *)0x0;
  uStack_70 = 0xe000000000000000;
  func_0x000107c602fc(0x45);
  func_0x000107c5fb78(0xd00000000000002a,0x800000010ef82200);
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
  func_0x000107c5fb78(0xd000000000000017,0x800000010ef82230);
  uStack_48 = param_2;
  func_0x000107c603d0(&uStack_48,&puStack_78,&UNK_11077dd00,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_70);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112da0bb8);
  puVar3 = &UNK_1103c18d0;
  func_0x000107c613fc(&UNK_1103c18d0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1103c1998;
  func_0x000107c613fc(&UNK_1103c1998,0x21,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  puVar4[0x20] = param_1;
  pcStack_58 = FUN_101469ef4;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_1103c19b0;
  ppuVar5 = &puStack_78;
  puStack_50 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_50);
  func_0x000107c4e524(uVar6);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 1014692e8; end: 101469317; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFlashHandlerImpl setTorchWithActive:] */

void FUN_1014692e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101469080(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101469318; end: 1014693e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101469318(long param_1,long param_2,uint param_3)

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
    uVar5 = *(undefined8 *)(param_1 + _DAT_112da0bc8);
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
      (**(code **)(puVar3 + 0x178))(param_3 & 1,uVar2,puVar3);
      func_0x000107c615e8(uVar1);
    }
  }
  return;
}



/* Entry: 1014693e4; end: 101469427; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFlashHandlerImpl setTorchWithActive:forDeviceAtPosition:] */

void FUN_1014693e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_101469134(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101469428; end: 1014695a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101469428(byte param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  puStack_70 = (undefined *)0x0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x44);
  func_0x000107c5fb78(0xd000000000000042,0x800000010ef821b0);
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
  func_0x000107c6142c(uStack_68);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112da0bb8);
  puVar3 = &UNK_1103c18d0;
  func_0x000107c613fc(&UNK_1103c18d0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1103c18f8;
  func_0x000107c613fc(&UNK_1103c18f8,0x30,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  puVar4[0x18] = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  *(undefined8 *)(puVar4 + 0x28) = param_3;
  uStack_50 = 0x101469ea8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1103c1910;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar6);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 1014695a4; end: 10146992f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014695a4(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long extraout_x8;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_120 [8];
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  uVar2 = 0;
  func_0x000107c5ed50();
  lVar14 = *(long *)(uVar2 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar13 = param_1 + _DAT_112da0bd0;
    func_0x000107c61618();
    if (lVar13 != 0) {
      lVar3 = lVar13;
      func_0x000107c418b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar13);
      lVar13 = lVar3;
      func_0x000107c41070();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      if (lVar13 != 0) {
        lStack_118 = lVar14;
        lStack_110 = lVar13;
        func_0x000107c600f4(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        FUN_100e15a08();
        func_0x000107c601c0(&puStack_b0,uVar2,lVar3);
        puVar1 = PTR___sypN_11034f1a8;
        uStack_100 = param_4;
        uStack_108 = param_3;
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        while (puStack_98 != (undefined *)0x0) {
          func_0x000100102924(&puStack_b0,auStack_d0);
          func_0x0001000bb420(auStack_d0,auStack_f0);
          uVar4 = 0;
          func_0x0001002ed07c(0);
          plVar5 = &lStack_f8;
          func_0x000107c6147c(plVar5,auStack_f0,puVar1 + 8,uVar4,6);
          lVar14 = lStack_f8;
          if ((int)plVar5 == 0) {
            func_0x000100183ab8(auStack_d0);
            lVar13 = -1;
LAB_101469770:
            puVar6 = puVar7;
            func_0x000107c61558();
            puVar8 = puVar7;
            if (((ulong)puVar6 & 1) == 0) {
              puVar8 = (undefined *)0x0;
              func_0x0001002a5edc(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
            }
            uVar10 = *(ulong *)(puVar8 + 0x10);
            puVar7 = puVar8;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar10) {
              puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
              func_0x0001002a5edc(puVar7,uVar10 + 1,1,puVar8);
            }
            *(ulong *)(puVar7 + 0x10) = uVar10 + 1;
            *(long *)(puVar7 + uVar10 * 8 + 0x20) = lVar13;
          }
          else {
            lVar13 = lStack_f8;
            func_0x000107c49820();
            func_0x000107c61170(lVar14);
            func_0x000100183ab8(auStack_d0);
            if (lVar13 + 1U < 3) goto LAB_101469770;
          }
          func_0x000107c601c0(&puStack_b0,uVar2,lVar3);
        }
        (**(code **)(lStack_118 + 8))(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        lVar14 = *(long *)(puVar7 + 0x10);
        if (lVar14 != 0) {
          plVar5 = (long *)(puVar7 + 0x20);
          do {
            uVar12 = 2;
            if (*plVar5 != 1) {
              uVar12 = (uint)(*plVar5 == 0);
            }
            uVar9 = (ulong)uVar12;
            func_0x0001002a1e70();
            uVar10 = uVar2;
            if (uVar9 != 0) {
              uVar10 = uVar9;
              func_0x000107c614f0();
              (**(code **)(uVar2 + 0x178))(param_2 & 1,uVar10,uVar2);
              func_0x000107c615e8(uVar9);
            }
            lVar14 = lVar14 + -1;
            uVar2 = uVar10;
            plVar5 = plVar5 + 1;
          } while (lVar14 != 0);
        }
        func_0x000107c61170(lStack_110);
        func_0x000107c6142c(puVar7);
        param_4 = uStack_100;
        param_3 = uStack_108;
      }
    }
    uVar4 = *(undefined8 *)(param_1 + _DAT_112da0bc0);
    puVar7 = &UNK_1103c1948;
    func_0x000107c613fc(&UNK_1103c1948,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = param_3;
    *(undefined8 *)(puVar7 + 0x18) = param_4;
    pcStack_90 = FUN_101469ed4;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000f6b44;
    puStack_98 = &UNK_1103c1960;
    ppuVar11 = &puStack_b0;
    puStack_88 = puVar7;
    func_0x000107c60bc4(ppuVar11);
    puVar7 = puStack_88;
    func_0x000107c615f0(uVar4);
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar7);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 101469930; end: 10146994b; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFlashHandlerImpl setTorchActiveOnAllActiveDevices:completion:] */

void FUN_101469930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103c18a8;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1103c18a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_101469428(param_3,FUN_101469e9c,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10146994c; end: 101469aff;  */

void FUN_10146994c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,code *param_7)

{
  func_0x000107c60bc4();
  func_0x000107c613fc(param_5,0x18,7);
  *(undefined8 *)(param_5 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  (*param_7)(param_3,param_6,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 101469b00; end: 101469b43; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFlashHandlerImpl setBrightScreenOverlayWithActive:intensity:] */

void FUN_101469b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  func_0x0001014699d8(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101469b44; end: 101469bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101469b44(long param_1,long param_2)

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
    (**(code **)(param_2 + 0x168))();
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 101469bac; end: 101469c4f; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFlashHandlerImpl isTorchSupportedForDeviceAtPosition:] */

uint FUN_101469bac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101469b44(param_3);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 101469c50; end: 101469cf3; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFlashHandlerImpl isFlashSupportedForDeviceAtPosition:] */

uint FUN_101469c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000101469be8(param_3);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 101469cf4; end: 101469d97; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFlashHandlerImpl isFlashActiveForDeviceAtPosition:] */

uint FUN_101469cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000101469c8c(param_3);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 101469d98; end: 101469dd3; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFlashHandlerImpl isTorchActiveForDeviceAtPosition:] */

uint FUN_101469d98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000101469d30(param_3);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 101469dd4; end: 101469e33; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFlashHandlerImpl init] */

void FUN_101469dd4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCaptureDeviceManagerImpl.CaptureDeviceFlashHandlerImpl",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101469e00);
  (*pcVar1)();
}



/* Entry: 101469e34; end: 101469e9b; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFlashHandlerImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101469e70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101469e74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101469e34(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da0bb8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da0bc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da0bc8));
  return;
}



/* Entry: 101469e9c; end: 101469ed3;  */

void FUN_101469e9c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101469ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 101469ed4; end: 101469ef3;  */

void FUN_101469ed4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101469ef4; end: 101469eff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101469ef4(void)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  bVar2 = *(byte *)(unaff_x20 + 0x20);
  puVar6 = auStack_48;
  func_0x000107c61428(lVar3 + 0x10,puVar6,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar8 = *(undefined8 *)(lVar3 + _DAT_112da0bc8);
    func_0x000107c61174(uVar8);
    func_0x000107c61170(lVar3);
    uVar7 = 2;
    if (lVar1 != 1) {
      uVar7 = (uint)(lVar1 == 0);
    }
    uVar4 = (ulong)uVar7;
    func_0x0001002a1e70();
    func_0x000107c61170(uVar8);
    if (uVar4 != 0) {
      uVar5 = uVar4;
      func_0x000107c614f0(uVar4);
      (**(code **)(puVar6 + 0x178))(bVar2 & 1,uVar5,puVar6);
      func_0x000107c615e8(uVar4);
    }
  }
  return;
}



/* Entry: 101469f00; end: 101469f2b;  */

void FUN_101469f00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101469f2c; end: 101469f4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101469f2c(void)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined **ppuVar12;
  long lVar13;
  long extraout_x8;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long unaff_x20;
  long lVar18;
  undefined1 auStack_120 [8];
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  lVar13 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = 0;
  func_0x000107c5ed50();
  lVar18 = *(long *)(uVar3 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  func_0x000107c61428(lVar13 + 0x10,auStack_80,0,0);
  lVar13 = lVar13 + 0x10;
  func_0x000107c61618();
  if (lVar13 != 0) {
    lVar16 = lVar13 + _DAT_112da0bd0;
    func_0x000107c61618();
    if (lVar16 != 0) {
      lVar4 = lVar16;
      func_0x000107c418b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar16);
      lVar16 = lVar4;
      func_0x000107c41070();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      if (lVar16 != 0) {
        lStack_118 = lVar18;
        lStack_110 = lVar16;
        func_0x000107c600f4(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        FUN_100e15a08();
        func_0x000107c601c0(&puStack_b0,uVar3,lVar4);
        puVar2 = PTR___sypN_11034f1a8;
        uStack_108 = uVar5;
        uStack_100 = uVar15;
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        while (puStack_98 != (undefined *)0x0) {
          func_0x000100102924(&puStack_b0,auStack_d0);
          func_0x0001000bb420(auStack_d0,auStack_f0);
          uVar5 = 0;
          func_0x0001002ed07c(0);
          plVar6 = &lStack_f8;
          func_0x000107c6147c(plVar6,auStack_f0,puVar2 + 8,uVar5,6);
          lVar18 = lStack_f8;
          if ((int)plVar6 == 0) {
            func_0x000100183ab8(auStack_d0);
            lVar16 = -1;
LAB_101468ea4:
            puVar7 = puVar8;
            func_0x000107c61558();
            puVar9 = puVar8;
            if (((ulong)puVar7 & 1) == 0) {
              puVar9 = (undefined *)0x0;
              func_0x0001002a5edc(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
            }
            uVar11 = *(ulong *)(puVar9 + 0x10);
            puVar8 = puVar9;
            if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar11) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
              func_0x0001002a5edc(puVar8,uVar11 + 1,1,puVar9);
            }
            *(ulong *)(puVar8 + 0x10) = uVar11 + 1;
            *(long *)(puVar8 + uVar11 * 8 + 0x20) = lVar16;
          }
          else {
            lVar16 = lStack_f8;
            func_0x000107c49820();
            func_0x000107c61170(lVar18);
            func_0x000100183ab8(auStack_d0);
            if (lVar16 + 1U < 3) goto LAB_101468ea4;
          }
          func_0x000107c601c0(&puStack_b0,uVar3,lVar4);
        }
        (**(code **)(lStack_118 + 8))(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        lVar18 = *(long *)(puVar8 + 0x10);
        if (lVar18 != 0) {
          plVar6 = (long *)(puVar8 + 0x20);
          do {
            uVar14 = 2;
            if (*plVar6 != 1) {
              uVar14 = (uint)(*plVar6 == 0);
            }
            uVar10 = (ulong)uVar14;
            func_0x0001002a1e70();
            uVar11 = uVar3;
            if (uVar10 != 0) {
              uVar11 = uVar10;
              func_0x000107c614f0();
              (**(code **)(uVar3 + 0x170))(bVar1 & 1,uVar11,uVar3);
              func_0x000107c615e8(uVar10);
            }
            lVar18 = lVar18 + -1;
            uVar3 = uVar11;
            plVar6 = plVar6 + 1;
          } while (lVar18 != 0);
        }
        func_0x000107c61170(lStack_110);
        func_0x000107c6142c(puVar8);
        uVar15 = uStack_100;
        uVar5 = uStack_108;
      }
    }
    uVar17 = *(undefined8 *)(lVar13 + _DAT_112da0bc0);
    puVar8 = &UNK_1103c1a60;
    func_0x000107c613fc(&UNK_1103c1a60,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = uVar5;
    *(undefined8 *)(puVar8 + 0x18) = uVar15;
    uStack_90 = 0x101469fa8;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000f6b44;
    puStack_98 = &UNK_1103c1a78;
    ppuVar12 = &puStack_b0;
    puStack_88 = puVar8;
    func_0x000107c60bc4(ppuVar12);
    puVar8 = puStack_88;
    func_0x000107c615f0(uVar17);
    func_0x000107c6157c(uVar15);
    func_0x000107c61574(puVar8);
    func_0x000107c4e524(uVar17);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(lVar13);
    func_0x000107c615e8(uVar17);
  }
  return;
}



/* Entry: 101469f4c; end: 101469f73;  */

void FUN_101469f4c(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 101469f74; end: 101469fb3;  */

void FUN_101469f74(long param_1,long param_2)

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



/* Entry: 101469fb4; end: 10146a02b; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFocusHandlerImpl focusMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101469fb4(undefined8 param_1,long param_2)

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
    (**(code **)(param_2 + 0x110))();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
  return lVar2;
}



/* Entry: 10146a02c; end: 10146a093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146a02c(long param_1,long param_2)

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
    (**(code **)(param_2 + 0x118))();
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 10146a094; end: 10146a0cf; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFocusHandlerImpl isSmoothAutoFocusSupportedForDeviceAtPosition:] */

uint FUN_10146a094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10146a02c(param_3);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 10146a0d0; end: 10146a17b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146a0d0(long param_1)

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
      (**(code **)(puVar2 + 0x120))();
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 10146a17c; end: 10146a1b3; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFocusHandlerImpl enableContinuousAutofocusIfAvailable] */

void FUN_10146a17c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10146ab90(0x10146ae34,&UNK_1103c1cf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10146a1b4; end: 10146a30b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146a1b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_80;
  puStack_80 = (undefined *)0x0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x3e);
  func_0x000107c5fb78(0xd00000000000003c,0x800000010ef823b0);
  uVar1 = 0;
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000100f6e714(0);
  func_0x000107c603d0(&uStack_50,&puStack_80,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112da0c10);
  puVar2 = &UNK_1103c1ba0;
  func_0x000107c613fc(&UNK_1103c1ba0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1103c1cb8;
  func_0x000107c613fc(&UNK_1103c1cb8,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  uStack_60 = 0x10146ae28;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1103c1cd0;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c4e524(uVar1);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 10146a30c; end: 10146a47b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146a30c(double param_1,double param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar6 = auStack_78;
  func_0x000107c61428(param_3 + 0x10,puVar6,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  lVar7 = _DAT_112da0c18;
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_3 + _DAT_112da0c18);
    func_0x000107c61174(uVar2);
    uVar3 = 0;
    func_0x0001002a1e70();
    func_0x000107c61170(uVar2);
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c614f0();
      uVar5 = uVar4;
      (**(code **)(puVar6 + 0x98))();
      lVar1 = _DAT_112da0e90;
      if ((uVar5 & 1) != 0) {
        lVar7 = *(long *)(param_3 + lVar7);
        func_0x000107c61428(lVar7 + _DAT_112da0e90,auStack_90,0,0);
        dVar9 = 1.0 - param_2;
        dVar10 = dVar9;
        if (*(int *)(lVar7 + lVar1) != 0) {
          dVar10 = param_2;
        }
        uVar5 = uVar4;
        (**(code **)(puVar6 + 8))(uVar4,puVar6);
        if ((uVar5 & 1) != 0) {
          pcVar8 = *(code **)(puVar6 + 0x30);
          (*pcVar8)(uVar4,puVar6);
          dVar9 = (param_1 + -0.5) / dVar9;
          param_1 = dVar9 + 0.5;
          (*pcVar8)(uVar4,puVar6);
          dVar10 = (dVar10 + -0.5) / dVar9 + 0.5;
        }
        (**(code **)(puVar6 + 0x128))(param_1,dVar10,uVar4,puVar6);
      }
      func_0x000107c615e8(uVar3);
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10146a47c; end: 10146a4bb; -[_TtC26SCCaptureDeviceManagerImpl29CaptureDeviceFocusHandlerImpl setAutofocusPointOfInterest:] */

void FUN_10146a47c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10146a1b4(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


