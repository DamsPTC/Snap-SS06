/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f62428; end: 103f6242b;  */

void FUN_103f62428(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf230;
  _swift_getWitnessTable(&UNK_10dcaf230,&UNK_110725680);
  puRam0000000113035378 = puVar1;
  return;
}



/* Entry: 103f6242c; end: 103f62497;  */

void FUN_103f6242c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf230;
  _swift_getWitnessTable(&UNK_10dcaf230,&UNK_110725680);
  puRam0000000113035378 = puVar1;
  return;
}



/* Entry: 103f62498; end: 103f6249b;  */

void FUN_103f62498(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf2d8;
  _swift_getWitnessTable(&UNK_10dcaf2d8,&UNK_1107254c8);
  puRam0000000113035390 = puVar1;
  return;
}



/* Entry: 103f6249c; end: 103f62507;  */

void FUN_103f6249c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf2d8;
  _swift_getWitnessTable(&UNK_10dcaf2d8,&UNK_1107254c8);
  puRam0000000113035390 = puVar1;
  return;
}



/* Entry: 103f62508; end: 103f6258b;  */

void FUN_103f62508(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103f6258c; end: 103f6258f;  */

void FUN_103f6258c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130353a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf348;
  _swift_getWitnessTable(&UNK_10dcaf348,&UNK_1107254c8);
  puRam00000001130353a8 = puVar1;
  return;
}



/* Entry: 103f62590; end: 103f625cf;  */

void FUN_103f62590(void)

{
  undefined *puVar1;
  
  if (puRam00000001130353a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf348;
  _swift_getWitnessTable(&UNK_10dcaf348,&UNK_1107254c8);
  puRam00000001130353a8 = puVar1;
  return;
}



/* Entry: 103f625d0; end: 103f625d3;  */

void FUN_103f625d0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130353b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf300;
  _swift_getWitnessTable(&UNK_10dcaf300,&UNK_1107254c8);
  puRam00000001130353b0 = puVar1;
  return;
}



/* Entry: 103f625d4; end: 103f62613;  */

void FUN_103f625d4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130353b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf300;
  _swift_getWitnessTable(&UNK_10dcaf300,&UNK_1107254c8);
  puRam00000001130353b0 = puVar1;
  return;
}



/* Entry: 103f62614; end: 103f62787;  */

int FUN_103f62614(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf5 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 10) {
      iVar2 = 4;
    }
    if (param_2 + 10 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103f62690;
        goto LAB_103f62674;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103f62674:
      return ((uint)*param_1 | uVar1 << 8) - 10;
    }
  }
LAB_103f62690:
  iVar2 = *param_1 - 0xb;
  if (*param_1 < 0xb) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103f62788; end: 103f627a7; -[_TtC20SCCameraFeatureScope20SCCameraFeatureScope privateFeatureContainerDebugInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f62788(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130353e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f627a8; end: 103f627b7; -[_TtC20SCCameraFeatureScope20SCCameraFeatureScope featureUpdateEventSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f627a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113035408));
  return;
}



/* Entry: 103f627b8; end: 103f6286b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f627b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130353e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130353e8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_1130353f0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130353f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113035400) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113035408) = param_5;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6286c; end: 103f628cb; -[_TtC20SCCameraFeatureScope20SCCameraFeatureScope init] */

void FUN_103f6286c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCameraFeatureScope.SCCameraFeatureScope",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f62898);
  (*pcVar1)();
}



/* Entry: 103f628cc; end: 103f62943; -[_TtC20SCCameraFeatureScope20SCCameraFeatureScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f628cc(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130353e0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130353e8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130353f0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130353f8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113035400));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113035408));
  return;
}



/* Entry: 103f62944; end: 103f62963; -[SCCameraFeatureScopeInfo privateFeatureContainerDebugInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f62944(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113035440));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f62964; end: 103f62973; -[SCCameraFeatureScopeInfo featureAnimatableTransitionCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f62964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113035448));
  return;
}



/* Entry: 103f62974; end: 103f62983; -[SCCameraFeatureScopeInfo gestureInteractionCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f62974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113035450));
  return;
}



/* Entry: 103f62984; end: 103f62993; -[SCCameraFeatureScopeInfo metricCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f62984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113035458));
  return;
}



/* Entry: 103f62994; end: 103f62a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f62994(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  code *pcVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103f62a44);
    (*pcVar1)();
  }
  *(long *)(unaff_x20 + _DAT_113035438) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113035440) = param_5;
  if (param_3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103f62a48);
    (*pcVar1)();
  }
  *(long *)(unaff_x20 + _DAT_113035448) = param_3;
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103f62a4c);
    (*pcVar1)();
  }
  *(long *)(unaff_x20 + _DAT_113035450) = param_2;
  if (param_4 != 0) {
    *(long *)(unaff_x20 + _DAT_113035458) = param_4;
    _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f62a50);
  (*pcVar1)();
}



/* Entry: 103f62a50; end: 103f62aaf; -[SCCameraFeatureScopeInfo init] */

void FUN_103f62a50(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCameraFeatureScope.CameraFeatureScopeInfo",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f62a7c);
  (*pcVar1)();
}



/* Entry: 103f62ab0; end: 103f62b17; -[SCCameraFeatureScopeInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f62ab0(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113035438));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113035440));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113035448));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113035450));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113035458));
  return;
}



/* Entry: 103f62b18; end: 103f62b37;  */

void FUN_103f62b18(void)

{
  _objc_opt_self(&PTR_PTR_11296b320);
  return;
}



/* Entry: 103f62b38; end: 103f62b47; -[_TtC20SCCameraFeatureScope23SCCameraFeatureServices cameraFeatureScopeInfoPromise] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f62b38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130354a8));
  return;
}



/* Entry: 103f62b48; end: 103f62b57; -[_TtC20SCCameraFeatureScope23SCCameraFeatureServices featureUpdateEventSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f62b48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130354b0));
  return;
}



/* Entry: 103f62b58; end: 103f62b8b;  */

void FUN_103f62b58(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f62b8c; end: 103f62bd3; -[_TtC20SCCameraFeatureScope23SCCameraFeatureServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f62b8c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130354a0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130354a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130354b0));
  return;
}



/* Entry: 103f62bd4; end: 103f62be3;  */

undefined1  [16] FUN_103f62bd4(void)

{
  return ZEXT816(0x110725738);
}



/* Entry: 103f62be4; end: 103f62ca7;  */

void FUN_103f62be4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113035510;
  func_0x0001000285a8(0x113035510,&UNK_10dcaf4c0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 103f62ca8; end: 103f62cab;  */

void FUN_103f62ca8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf4d0;
  _swift_getWitnessTable(&UNK_10dcaf4d0,&UNK_1107257c8);
  puRam0000000113035550 = puVar1;
  return;
}



/* Entry: 103f62cac; end: 103f62d17;  */

void FUN_103f62cac(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf4d0;
  _swift_getWitnessTable(&UNK_10dcaf4d0,&UNK_1107257c8);
  puRam0000000113035550 = puVar1;
  return;
}



/* Entry: 103f62d18; end: 103f62d1b;  */

void FUN_103f62d18(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf578;
  _swift_getWitnessTable(&UNK_10dcaf578,&UNK_110725558);
  puRam0000000113035568 = puVar1;
  return;
}



/* Entry: 103f62d1c; end: 103f62d87;  */

void FUN_103f62d1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf578;
  _swift_getWitnessTable(&UNK_10dcaf578,&UNK_110725558);
  puRam0000000113035568 = puVar1;
  return;
}



/* Entry: 103f62d88; end: 103f62e0b;  */

void FUN_103f62d88(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103f62e0c; end: 103f62e0f;  */

void FUN_103f62e0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035580 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf5e8;
  _swift_getWitnessTable(&UNK_10dcaf5e8,&UNK_110725558);
  puRam0000000113035580 = puVar1;
  return;
}



/* Entry: 103f62e10; end: 103f62e4f;  */

void FUN_103f62e10(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035580 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf5e8;
  _swift_getWitnessTable(&UNK_10dcaf5e8,&UNK_110725558);
  puRam0000000113035580 = puVar1;
  return;
}



/* Entry: 103f62e50; end: 103f62e53;  */

void FUN_103f62e50(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035588 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf5a0;
  _swift_getWitnessTable(&UNK_10dcaf5a0,&UNK_110725558);
  puRam0000000113035588 = puVar1;
  return;
}



/* Entry: 103f62e54; end: 103f62e93;  */

void FUN_103f62e54(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035588 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf5a0;
  _swift_getWitnessTable(&UNK_10dcaf5a0,&UNK_110725558);
  puRam0000000113035588 = puVar1;
  return;
}



/* Entry: 103f62e94; end: 103f63007;  */

int FUN_103f62e94(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103f62f10;
        goto LAB_103f62ef4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103f62ef4:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_103f62f10:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103f63008; end: 103f63053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f63008(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130355b8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f63054; end: 103f630b3; -[_TtC20SCCameraFeatureScope55SCMainCameraScopedCameraPrivateFeatureContainerServices init] */

void FUN_103f63054(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCameraFeatureScope.SCMainCameraScopedCameraPrivateFeatureContainerServices",0x4c,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f63080);
  (*pcVar1)();
}



/* Entry: 103f630b4; end: 103f630d7; -[_TtC20SCCameraFeatureScope55SCMainCameraScopedCameraPrivateFeatureContainerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f630b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_1130355b8));
  return;
}



/* Entry: 103f630d8; end: 103f63183;  */

void FUN_103f630d8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f63184; end: 103f631ab;  */

void FUN_103f63184(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103f631ac; end: 103f6321f;  */

void FUN_103f631ac(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103f63cdc(uVar1,param_2[1],0x113035a00);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103f63220; end: 103f632db; +[SCCameraCaptureControlsExperiment enabledWithAppStartExperimentReader:] */

undefined8 FUN_103f63220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x1130355f0,auStack_48,0,0);
  if (cRam00000001130355f0 == '\0') {
    uVar1 = 0;
  }
  else if (cRam00000001130355f0 == '\x01') {
    uVar1 = 1;
  }
  else {
    _swift_unknownObjectRetain(param_3);
    uVar2 = 0xd000000000000026;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1d1760);
    uVar1 = param_3;
    func_0x00010bf1f440(param_3);
    _objc_release(uVar2);
    _swift_unknownObjectRelease(param_3);
  }
  return uVar1;
}



/* Entry: 103f632dc; end: 103f633c3;  */

void FUN_103f632dc(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103f63cdc(uVar1,param_2[1],0x113035990);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103f633c4; end: 103f6373f;  */

void FUN_103f633c4(long param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 unaff_x20;
  undefined *apuStack_a8 [2];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = 0x800000010f1d17d0;
  uVar3 = 0xd000000000000022;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f1d17d0);
  func_0x000107c4f558();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (param_1 == 0) {
LAB_103f636f8:
    uVar3 = 0;
  }
  else {
    lVar12 = param_1;
    func_0x000107c5dc0c();
    _objc_retainAutoreleasedReturnValue();
    if (lVar12 == 0) {
LAB_103f636f4:
      _objc_release(param_1);
      goto LAB_103f636f8;
    }
    lVar4 = lVar12;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar12);
    lVar5 = 0;
    FUN_103f63bac();
    _swift_getObjCClassFromMetadata();
    lVar12 = lVar4;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar4,uVar10);
    puStack_98 = (undefined *)0x0;
    func_0x000107c4e380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    puVar9 = puStack_98;
    if (lVar5 == 0) {
      puVar8 = puStack_98;
      _objc_retain();
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(puVar9);
      _objc_release(puVar8);
      _swift_willThrow();
      func_0x00010006c090(lVar4,uVar10);
      _objc_release(param_1);
      _swift_errorRelease(puVar9);
      goto LAB_103f636f8;
    }
    _objc_retain();
    lVar12 = lVar5;
    func_0x00010bf29300();
    _objc_retainAutoreleasedReturnValue();
    if (lVar12 == 0) goto LAB_103f6373c;
    apuStack_a8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar9 = &UNK_1107258f0;
    _swift_allocObject(&UNK_1107258f0,0x20,7);
    *(undefined8 *)(puVar9 + 0x10) = unaff_x20;
    *(undefined ***)(puVar9 + 0x18) = apuStack_a8;
    puVar8 = &UNK_110725918;
    _swift_allocObject(&UNK_110725918,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_103f63bf0;
    *(undefined **)(puVar8 + 0x18) = puVar9;
    pcStack_78 = FUN_103f63ca0;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_10104fffc;
    puStack_80 = &UNK_110725930;
    ppuVar6 = &puStack_98;
    puStack_70 = puVar8;
    __Block_copy(ppuVar6);
    puVar7 = puStack_70;
    _swift_retain(puVar8);
    _swift_release(puVar7);
    func_0x000107c429d8(lVar12);
    __Block_release(ppuVar6);
    puVar7 = puVar8;
    _swift_isEscapingClosureAtFileLocation(puVar8,"",0x6b,0xb2,0x1f,1);
    _swift_release(puVar8);
    puVar8 = apuStack_a8[0];
    if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f63738);
      (*pcVar2)();
    }
    _objc_release(lVar12);
    _swift_release(puVar9);
    _swift_beginAccess(0x113035680,&puStack_98,0,0);
    if (cRam0000000113035680 == '\0') {
      _objc_release(param_1);
      func_0x00010006c090(lVar4,uVar10);
LAB_103f636e8:
      _swift_bridgeObjectRelease(puVar8);
      param_1 = lVar5;
      goto LAB_103f636f4;
    }
    if (cRam0000000113035680 == '\x01') {
      _objc_release(param_1);
      func_0x00010006c090(lVar4,uVar10);
    }
    else {
      lVar11 = *(long *)(puVar8 + 0x10);
      lVar12 = 0x20;
      do {
        if (lVar11 == 0) {
          func_0x00010006c090(lVar4,uVar10);
          _objc_release(param_1);
          goto LAB_103f636e8;
        }
        piVar1 = (int *)(puVar8 + lVar12);
        lVar12 = lVar12 + 8;
        lVar11 = lVar11 + -1;
      } while (*piVar1 != 1);
      func_0x00010006c090(lVar4,uVar10);
      _objc_release(param_1);
    }
    _swift_bridgeObjectRelease(puVar8);
    _objc_release(lVar5);
    uVar3 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail(uVar3);
LAB_103f6373c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103f63740);
  (*pcVar2)();
}



/* Entry: 103f63740; end: 103f639c3; +[SCCameraCaptureControlsExperiment enableZoomCaptureControlWithCircumstanceEngine:] */

uint FUN_103f63740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  _swift_getObjCClassMetadata();
  uVar2 = param_3;
  _swift_unknownObjectRetain(param_3);
  uVar1 = (uint)uVar2;
  FUN_103f633c4();
  _swift_unknownObjectRelease(param_3);
  return uVar1 & 1;
}



/* Entry: 103f639c4; end: 103f63a3b; +[SCCameraCaptureControlsExperiment hideDismissButtonDuringRecordingEnabledWithCircumstanceEngine:] */

undefined8 FUN_103f639c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_unknownObjectRetain(param_3);
  uVar1 = 0xd00000000000002f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002f,0x800000010f1d1800);
  uVar2 = param_3;
  func_0x00010bf1f440(param_3);
  _swift_unknownObjectRelease(param_3);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 103f63a3c; end: 103f63a77; -[SCCameraCaptureControlsExperiment init] */

void FUN_103f63a3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103f63d48();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f63a78; end: 103f63aa7;  */

void FUN_103f63a78(void)

{
  FUN_103f63d48();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f63aa8; end: 103f63aab; -[SCCameraCaptureControlsExperiment .cxx_destruct] */

void FUN_103f63aa8(void)

{
  return;
}



/* Entry: 103f63aac; end: 103f63bab;  */

undefined * FUN_103f63aac(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f63bac);
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
    puVar3 = (undefined *)0x113035910;
    func_0x0001000285a8(0x113035910,&UNK_10dcafcc0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
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
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 103f63bac; end: 103f63bef;  */

void FUN_103f63bac(void)

{
  undefined *puVar1;
  
  if (puRam00000001130356c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126adb30;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam00000001130356c0 = puVar1;
  return;
}



/* Entry: 103f63bf0; end: 103f63c9f;  */

void FUN_103f63bf0(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  ulong *puVar4;
  
  puVar4 = *(ulong **)(unaff_x20 + 0x18);
  uVar3 = *puVar4;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  *puVar4 = uVar3;
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_103f63aac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    *puVar4 = uVar2;
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_103f63aac(uVar3,uVar1 + 1,1,uVar2);
    *puVar4 = uVar3;
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(ulong *)(uVar3 + uVar1 * 8 + 0x20) = (ulong)(param_1 == 1);
  return;
}



/* Entry: 103f63ca0; end: 103f63cbf;  */

void FUN_103f63ca0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103f63cc0; end: 103f63cdb;  */

void FUN_103f63cc0(long param_1,long param_2)

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



/* Entry: 103f63cdc; end: 103f63d47;  */

ulong FUN_103f63cdc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 103f63d48; end: 103f63d67;  */

void FUN_103f63d48(void)

{
  _objc_opt_self(&PTR_PTR_11296b588);
  return;
}



/* Entry: 103f63d68; end: 103f63d6b;  */

void FUN_103f63d68(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035710 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf6f0;
  _swift_getWitnessTable(&UNK_10dcaf6f0,&UNK_1107259e8);
  puRam0000000113035710 = puVar1;
  return;
}



/* Entry: 103f63d6c; end: 103f63dab;  */

void FUN_103f63d6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035710 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf6f0;
  _swift_getWitnessTable(&UNK_10dcaf6f0,&UNK_1107259e8);
  puRam0000000113035710 = puVar1;
  return;
}



/* Entry: 103f63dac; end: 103f63daf;  */

void FUN_103f63dac(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf790;
  _swift_getWitnessTable(&UNK_10dcaf790,&UNK_110725a98);
  puRam0000000113035718 = puVar1;
  return;
}



/* Entry: 103f63db0; end: 103f63def;  */

void FUN_103f63db0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf790;
  _swift_getWitnessTable(&UNK_10dcaf790,&UNK_110725a98);
  puRam0000000113035718 = puVar1;
  return;
}



/* Entry: 103f63df0; end: 103f63e03;  */

void FUN_103f63df0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103f63e04();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103f63e44)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103f63e04; end: 103f63eaf;  */

void FUN_103f63e04(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035720 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf858;
  _swift_getWitnessTable(&UNK_10dcaf858,&UNK_110725a98);
  puRam0000000113035720 = puVar1;
  return;
}



/* Entry: 103f63eb0; end: 103f63eb3;  */

void FUN_103f63eb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf890;
  _swift_getWitnessTable(&UNK_10dcaf890,&UNK_110725b48);
  puRam0000000113035740 = puVar1;
  return;
}



/* Entry: 103f63eb4; end: 103f63ef3;  */

void FUN_103f63eb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf890;
  _swift_getWitnessTable(&UNK_10dcaf890,&UNK_110725b48);
  puRam0000000113035740 = puVar1;
  return;
}



/* Entry: 103f63ef4; end: 103f63f07;  */

void FUN_103f63ef4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103f63f08();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103f63f48)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103f63f08; end: 103f63fb3;  */

void FUN_103f63f08(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf958;
  _swift_getWitnessTable(&UNK_10dcaf958,&UNK_110725b48);
  puRam0000000113035748 = puVar1;
  return;
}



/* Entry: 103f63fb4; end: 103f63fb7;  */

void FUN_103f63fb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf990;
  _swift_getWitnessTable(&UNK_10dcaf990,&UNK_110725bf8);
  puRam0000000113035768 = puVar1;
  return;
}



/* Entry: 103f63fb8; end: 103f63ff7;  */

void FUN_103f63fb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaf990;
  _swift_getWitnessTable(&UNK_10dcaf990,&UNK_110725bf8);
  puRam0000000113035768 = puVar1;
  return;
}



/* Entry: 103f63ff8; end: 103f6400b;  */

void FUN_103f63ff8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103f6400c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103f6404c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103f6400c; end: 103f640b7;  */

void FUN_103f6400c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035770 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcafa58;
  _swift_getWitnessTable(&UNK_10dcafa58,&UNK_110725bf8);
  puRam0000000113035770 = puVar1;
  return;
}



/* Entry: 103f640b8; end: 103f640bb;  */

void FUN_103f640b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035790 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcafa90;
  _swift_getWitnessTable(&UNK_10dcafa90,&UNK_110725ca8);
  puRam0000000113035790 = puVar1;
  return;
}



/* Entry: 103f640bc; end: 103f640fb;  */

void FUN_103f640bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035790 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcafa90;
  _swift_getWitnessTable(&UNK_10dcafa90,&UNK_110725ca8);
  puRam0000000113035790 = puVar1;
  return;
}



/* Entry: 103f640fc; end: 103f6410f;  */

void FUN_103f640fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103f64140();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103f64180)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103f64110; end: 103f6413f;  */

void FUN_103f64110(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103f64140; end: 103f641eb;  */

void FUN_103f64140(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcafb58;
  _swift_getWitnessTable(&UNK_10dcafb58,&UNK_110725ca8);
  puRam0000000113035798 = puVar1;
  return;
}



/* Entry: 103f641ec; end: 103f6422f;  */

void FUN_103f641ec(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103f64230; end: 103f644b7;  */

undefined1  [16] FUN_103f64230(void)

{
  return ZEXT816(0x1107259e8);
}



/* Entry: 103f644b8; end: 103f6454f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f644b8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113035a68) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f64550; end: 103f645af; -[_TtC33MiniCameraActivationStateServices51SCCaaSCameraScopedMiniCameraActivationStateServices init] */

void FUN_103f64550(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MiniCameraActivationStateServices.SCCaaSCameraScopedMiniCameraActivationStateServices"
             ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6457c);
  (*pcVar1)();
}



/* Entry: 103f645b0; end: 103f645bf; -[_TtC33MiniCameraActivationStateServices51SCCaaSCameraScopedMiniCameraActivationStateServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f645b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113035a68));
  return;
}



/* Entry: 103f645c0; end: 103f645df;  */

void FUN_103f645c0(void)

{
  _objc_opt_self(&PTR_PTR_11296b638);
  return;
}



/* Entry: 103f645e0; end: 103f64677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f645e0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113035a98) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f64678; end: 103f646d7; -[_TtC33MiniCameraActivationStateServices51SCChatCameraScopedMiniCameraActivationStateServices init] */

void FUN_103f64678(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MiniCameraActivationStateServices.SCChatCameraScopedMiniCameraActivationStateServices"
             ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f646a4);
  (*pcVar1)();
}



/* Entry: 103f646d8; end: 103f646e7; -[_TtC33MiniCameraActivationStateServices51SCChatCameraScopedMiniCameraActivationStateServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f646d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113035a98));
  return;
}



/* Entry: 103f646e8; end: 103f64707;  */

void FUN_103f646e8(void)

{
  _objc_opt_self(&PTR_PTR_11296b6f8);
  return;
}



/* Entry: 103f64708; end: 103f6479f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f64708(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113035ac8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f647a0; end: 103f647ff; -[_TtC33MiniCameraActivationStateServices57SCLensTalkCarouselScopedMiniCameraActivationStateServices init] */

void FUN_103f647a0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MiniCameraActivationStateServices.SCLensTalkCarouselScopedMiniCameraActivationStateServices"
             ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f647cc);
  (*pcVar1)();
}



/* Entry: 103f64800; end: 103f6480f; -[_TtC33MiniCameraActivationStateServices57SCLensTalkCarouselScopedMiniCameraActivationStateServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f64800(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113035ac8));
  return;
}



/* Entry: 103f64810; end: 103f6482f;  */

void FUN_103f64810(void)

{
  _objc_opt_self(&PTR_PTR_11296b7b8);
  return;
}



/* Entry: 103f64830; end: 103f648c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f64830(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113035af8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f648c8; end: 103f64927; -[_TtC33MiniCameraActivationStateServices60SCLensesModularCameraScopedMiniCameraActivationStateServices init] */

void FUN_103f648c8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MiniCameraActivationStateServices.SCLensesModularCameraScopedMiniCameraActivationStateServices"
             ,0x5e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f648f4);
  (*pcVar1)();
}



/* Entry: 103f64928; end: 103f64937; -[_TtC33MiniCameraActivationStateServices60SCLensesModularCameraScopedMiniCameraActivationStateServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f64928(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113035af8));
  return;
}



/* Entry: 103f64938; end: 103f64957;  */

void FUN_103f64938(void)

{
  _objc_opt_self(&PTR_PTR_11296b878);
  return;
}



/* Entry: 103f64958; end: 103f649a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f64958(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113035b28) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f649a4; end: 103f64a03; -[_TtC33MiniCameraActivationStateServices51SCMainCameraScopedMiniCameraActivationStateServices init] */

void FUN_103f649a4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MiniCameraActivationStateServices.SCMainCameraScopedMiniCameraActivationStateServices"
             ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f649d0);
  (*pcVar1)();
}



/* Entry: 103f64a04; end: 103f64a13; -[_TtC33MiniCameraActivationStateServices51SCMainCameraScopedMiniCameraActivationStateServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f64a04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113035b28));
  return;
}


