/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10450e0a4; end: 10450e0af; -[SCImagineLensActiveStateParams viewfinder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450e0a4(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_113082a48);
  _objc_retain();
  lVar2 = param_1;
  (*pcVar1)();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10450e0b0; end: 10450e0f7;  */

void FUN_10450e0b0(long param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  long lVar2;
  
  pcVar1 = *(code **)(param_1 + *param_3);
  _objc_retain();
  lVar2 = param_1;
  (*pcVar1)();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10450e0f8; end: 10450e153; -[SCImagineLensActiveStateParams init] */

void FUN_10450e0f8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ImagineLensServiceAPI.ImagineLensActiveStateParams",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10450e124);
  (*pcVar1)();
}



/* Entry: 10450e154; end: 10450e1a7; -[SCImagineLensActiveStateParams .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450e154(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113082a18 + 8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113082a40 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113082a48 + 8));
  return;
}



/* Entry: 10450e1a8; end: 10450e1c7;  */

void FUN_10450e1a8(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10450e1c8; end: 10450e1cb;  */

void FUN_10450e1c8(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10450e1cc; end: 10450e24f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10450e1cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113082a78) = param_1;
  uVar1 = param_1;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_113082a80) = uVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  _swift_release(param_1);
  return puVar2;
}



/* Entry: 10450e250; end: 10450e2ab; -[SCImagineLensServices init] */

void FUN_10450e250(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ImagineLensServiceAPI.SCImagineLensServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10450e27c);
  (*pcVar1)();
}



/* Entry: 10450e2ac; end: 10450e2e3; -[SCImagineLensServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450e2ac(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113082a78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113082a80));
  return;
}



/* Entry: 10450e2e4; end: 10450e303; -[SCLensInterfaceElements rawValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10450e2e4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113082ab0);
}



/* Entry: 10450e304; end: 10450e343;  */

undefined8 FUN_10450e304(void)

{
  if (lRam0000000113648680 != -1) {
    _swift_once(0x113648680,0x10450e2f4);
  }
  return 0x113813bb0;
}



/* Entry: 10450e344; end: 10450e36f; +[SCLensInterfaceElements none] */

void FUN_10450e344(void)

{
  if (lRam0000000113648680 != -1) {
    _swift_once(0x113648680,0x10450e2f4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813bb0);
  return;
}



/* Entry: 10450e370; end: 10450e3bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450e370(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113082ab0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10450e3bc; end: 10450e3fb;  */

undefined8 FUN_10450e3bc(void)

{
  if (lRam0000000113648688 != -1) {
    _swift_once(0x113648688,0x10450e360);
  }
  return 0x113813bb8;
}



/* Entry: 10450e3fc; end: 10450e417; +[SCLensInterfaceElements captureButton] */

void FUN_10450e3fc(void)

{
  if (lRam0000000113648688 != -1) {
    _swift_once(0x113648688,0x10450e360);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813bb8);
  return;
}



/* Entry: 10450e418; end: 10450e45b;  */

void FUN_10450e418(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    _swift_once(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uVar1);
  return;
}



/* Entry: 10450e45c; end: 10450e46b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450e45c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_40;
  long lStack_38;
  
  plVar2 = &lStack_40;
  func_0x00010450e890();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113082ab0) = 2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  puRam0000000113813bc0 = (undefined1 *)plVar2;
  return;
}



/* Entry: 10450e46c; end: 10450e4ab;  */

undefined8 FUN_10450e46c(void)

{
  if (lRam0000000113648690 != -1) {
    _swift_once(0x113648690,FUN_10450e45c);
  }
  return 0x113813bc0;
}



/* Entry: 10450e4ac; end: 10450e4d7; +[SCLensInterfaceElements dismissButton] */

void FUN_10450e4ac(void)

{
  if (lRam0000000113648690 != -1) {
    _swift_once(0x113648690,FUN_10450e45c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813bc0);
  return;
}



/* Entry: 10450e4d8; end: 10450e537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450e4d8(long param_1,undefined1 param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long lStack_40;
  long lStack_38;
  
  plVar2 = &lStack_40;
  func_0x00010450e890();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113082ab0) = param_2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  *param_3 = plVar2;
  return;
}



/* Entry: 10450e538; end: 10450e577;  */

undefined8 FUN_10450e538(void)

{
  if (lRam0000000113648698 != -1) {
    _swift_once(0x113648698,0x10450e4c8);
  }
  return 0x113813bc8;
}



/* Entry: 10450e578; end: 10450e593; +[SCLensInterfaceElements other] */

void FUN_10450e578(void)

{
  if (lRam0000000113648698 != -1) {
    _swift_once(0x113648698,0x10450e4c8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813bc8);
  return;
}



/* Entry: 10450e594; end: 10450e7f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450e594(ulong param_1)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  
  FUN_10450f338();
  _swift_initStackObject();
  *(undefined8 *)(param_1 + 0x18) = 7;
  *(undefined8 *)(param_1 + 0x10) = 3;
  if (lRam0000000113648688 != -1) {
    _swift_once(0x113648688,0x10450e360);
  }
  *(undefined8 *)(param_1 + 0x20) = uRam0000000113813bb8;
  lVar7 = lRam0000000113648690;
  _objc_retain();
  if (lVar7 != -1) {
    _swift_once(0x113648690,FUN_10450e45c);
  }
  lVar7 = lRam0000000113813bc0;
  *(long *)(param_1 + 0x28) = lRam0000000113813bc0;
  lVar8 = lRam0000000113648698;
  _objc_retain();
  if (lVar8 != -1) {
    lVar7 = 0x113648698;
    _swift_once(0x113648698,0x10450e4c8);
  }
  uVar5 = uRam0000000113813bc8;
  *(undefined8 *)(param_1 + 0x30) = uRam0000000113813bc8;
  func_0x00010450e890();
  lVar8 = lVar7;
  _objc_allocWithZone();
  *(undefined1 *)(lVar8 + _DAT_113082ab0) = 0;
  puVar4 = PTR_s_init_1125d9248;
  lStack_a8 = lVar8;
  lStack_a0 = lVar7;
  _objc_retain(uVar5);
  plVar9 = &lStack_a8;
  _objc_msgSendSuper2(plVar9,puVar4);
  uVar14 = 0;
  do {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(param_1 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10450e7b0);
        (*pcVar6)();
      }
      uVar10 = *(ulong *)(param_1 + uVar14 * 8 + 0x20);
      _objc_retain();
    }
    else {
      uVar10 = uVar14;
      FUN_10450f390(uVar14,param_1);
    }
    lVar8 = _DAT_113082ab0;
    uVar14 = uVar14 + 1;
    uVar1 = *(undefined1 *)(uVar10 + _DAT_113082ab0);
    lVar11 = lVar7;
    _objc_allocWithZone();
    *(undefined1 *)(lVar11 + _DAT_113082ab0) = uVar1;
    plVar12 = &lStack_b8;
    lStack_b8 = lVar11;
    lStack_b0 = lVar7;
    _objc_msgSendSuper2(plVar12,PTR_s_init_1125d9248);
    bVar2 = *(byte *)((long)plVar12 + _DAT_113082ab0);
    _objc_release();
    lVar11 = _DAT_113082ab0;
    bVar3 = *(byte *)((long)plVar9 + _DAT_113082ab0);
    lVar13 = lVar7;
    _objc_allocWithZone();
    *(byte *)(lVar13 + _DAT_113082ab0) = bVar3 & bVar2;
    plVar12 = &lStack_c8;
    lStack_c8 = lVar13;
    lStack_c0 = lVar7;
    _objc_msgSendSuper2(plVar12,PTR_s_init_1125d9248);
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(plVar12);
    bVar2 = *(byte *)((long)plVar9 + lVar11);
    _objc_release(plVar9);
    bVar3 = *(byte *)(uVar10 + lVar8);
    lVar8 = lVar7;
    _objc_allocWithZone();
    *(byte *)(lVar8 + _DAT_113082ab0) = bVar3 | bVar2;
    plVar9 = &lStack_d8;
    lStack_d8 = lVar8;
    lStack_d0 = lVar7;
    _objc_msgSendSuper2(plVar9,PTR_s_init_1125d9248);
    _objc_release(uVar10);
  } while (uVar14 != 3);
  _swift_setDeallocating(param_1);
  _swift_arrayDestroy(param_1 + 0x20,*(undefined8 *)(param_1 + 0x10),lVar7);
  plRam0000000113813bd0 = plVar9;
  return;
}



/* Entry: 10450e7f8; end: 10450e837;  */

undefined8 FUN_10450e7f8(void)

{
  if (lRam00000001136486a0 != -1) {
    _swift_once(0x1136486a0,FUN_10450e594);
  }
  return 0x113813bd0;
}



/* Entry: 10450e838; end: 10450e853; +[SCLensInterfaceElements all] */

void FUN_10450e838(void)

{
  if (lRam00000001136486a0 != -1) {
    _swift_once(0x1136486a0,FUN_10450e594);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813bd0);
  return;
}



/* Entry: 10450e854; end: 10450e8af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450e854(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_113082ab0) = param_1;
  func_0x00010450e890();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10450e8b0; end: 10450e97f; -[SCLensInterfaceElements initWithRawValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450e8b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  *(undefined1 *)(param_1 + _DAT_113082ab0) = param_3;
  lVar1 = param_1;
  func_0x00010450e890();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10450e980; end: 10450e9ff; -[SCLensInterfaceElements isEqual:] */

uint FUN_10450e980(undefined8 param_1,undefined8 param_2,long param_3)

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
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x00010450e8f8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10450ea00; end: 10450ea0f; -[SCLensInterfaceElements hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10450ea00(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113082ab0);
}



/* Entry: 10450ea10; end: 10450ea3f;  */

void FUN_10450ea10(void)

{
  func_0x00010450e890();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10450ea40; end: 10450ea43; -[SCLensInterfaceElements .cxx_destruct] */

void FUN_10450ea40(void)

{
  return;
}



/* Entry: 10450ea44; end: 10450ea8b;  */

void FUN_10450ea44(void)

{
  FUN_10450ebac(0x113082ab8,&UNK_10dd12190);
  return;
}



/* Entry: 10450ea8c; end: 10450eb4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450ea8c(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  ppuVar3 = &puStack_40;
  uVar1 = *param_2;
  func_0x00010450e890();
  puVar2 = param_2;
  _objc_allocWithZone();
  puVar2[_DAT_113082ab0] = uVar1;
  puStack_40 = puVar2;
  puStack_38 = param_2;
  _objc_msgSendSuper2(&puStack_40,PTR_s_init_1125d9248);
  *param_1 = ppuVar3;
  return;
}



/* Entry: 10450eb4c; end: 10450eb63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450eb4c(undefined1 *param_1)

{
  long *unaff_x20;
  
  *param_1 = *(undefined1 *)(*unaff_x20 + _DAT_113082ab0);
  return;
}



/* Entry: 10450eb64; end: 10450ebab;  */

void FUN_10450eb64(void)

{
  FUN_10450ebac(0x113082ac8,PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0);
  return;
}



/* Entry: 10450ebac; end: 10450ebe7;  */

void FUN_10450ebac(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    func_0x00010450e890();
    _swift_getWitnessTable(param_2,lVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10450ebe8; end: 10450ec37;  */

void FUN_10450ebe8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_10dd12158;
  _swift_getWitnessTable(&UNK_10dd12158,param_2);
  puVar2 = puVar1;
  FUN_10450f6fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9OptionSetPss17FixedWidthInteger8RawValueRpzrlExycfC_11034f168)
            (param_1,param_2,puVar1,puVar2);
  return;
}



/* Entry: 10450ec38; end: 10450ec63;  */

uint FUN_10450ec38(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_10450f214(*param_1,uVar1);
  return (uint)uVar1 & 1;
}



/* Entry: 10450ec64; end: 10450ec6f;  */

void FUN_10450ec64(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  
  puVar1 = PTR___ss9OptionSetPsE5unionyxxF_11034f148;
  puVar2 = &UNK_10dd12158;
  _swift_getWitnessTable(&UNK_10dd12158);
  (*(code *)puVar1)(param_1,param_2,param_3,puVar2);
  _objc_release(*unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_2);
  return;
}



/* Entry: 10450ec70; end: 10450ecbf;  */

void FUN_10450ec70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  
  puVar1 = &UNK_10dd12158;
  _swift_getWitnessTable(&UNK_10dd12158);
  __ss9OptionSetPsE12intersectionyxxF(param_1,param_2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*unaff_x20);
  return;
}



/* Entry: 10450ecc0; end: 10450eccb;  */

void FUN_10450ecc0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  
  puVar1 = PTR___ss9OptionSetPsE19symmetricDifferenceyxxF_11034f140;
  puVar2 = &UNK_10dd12158;
  _swift_getWitnessTable(&UNK_10dd12158);
  (*(code *)puVar1)(param_1,param_2,param_3,puVar2);
  _objc_release(*unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_2);
  return;
}



/* Entry: 10450eccc; end: 10450ed2f;  */

void FUN_10450eccc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  
  puVar1 = &UNK_10dd12158;
  _swift_getWitnessTable(&UNK_10dd12158);
  (*param_5)(param_1,param_2,param_3,puVar1);
  _objc_release(*unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_2);
  return;
}



/* Entry: 10450ed30; end: 10450eddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10450ed30(long *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  lVar6 = *param_2;
  lVar7 = *unaff_x20;
  lVar3 = lVar7;
  FUN_10450f214(lVar7);
  bVar1 = *(byte *)(lVar7 + _DAT_113082ab0);
  _objc_release();
  bVar2 = *(byte *)(lVar6 + _DAT_113082ab0);
  func_0x00010450e890();
  lVar4 = lVar7;
  _objc_allocWithZone();
  *(byte *)(lVar4 + _DAT_113082ab0) = bVar2 | bVar1;
  lStack_60 = lVar4;
  lStack_58 = lVar7;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  *unaff_x20 = (long)plVar5;
  *param_1 = lVar6;
  return ((uint)lVar3 ^ 0xffffffff) & 1;
}



/* Entry: 10450eddc; end: 10450ee03;  */

void FUN_10450eddc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10450ee04();
  *param_1 = uVar1;
  return;
}



/* Entry: 10450ee04; end: 10450efb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10450ee04(long param_1)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *unaff_x20;
  long lVar10;
  long *plVar11;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  plVar9 = &lStack_c0;
  lVar10 = *unaff_x20;
  lVar4 = param_1;
  func_0x00010450e890();
  lVar8 = _DAT_113082ab0;
  uVar1 = *(undefined1 *)(lVar10 + _DAT_113082ab0);
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113082ab0) = uVar1;
  plVar11 = &lStack_70;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  _objc_msgSendSuper2(plVar11,PTR_s_init_1125d9248);
  bVar2 = *(byte *)((long)plVar11 + _DAT_113082ab0);
  _objc_release();
  bVar3 = *(byte *)(param_1 + _DAT_113082ab0);
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(byte *)(lVar5 + _DAT_113082ab0) = bVar3 & bVar2;
  plVar11 = &lStack_80;
  lStack_80 = lVar5;
  lStack_78 = lVar4;
  _objc_msgSendSuper2(plVar11,PTR_s_init_1125d9248);
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113082ab0) = 0;
  plVar6 = &lStack_90;
  lStack_90 = lVar5;
  lStack_88 = lVar4;
  _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
  plVar7 = plVar11;
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(plVar11,plVar6);
  _objc_release(plVar6);
  if (((ulong)plVar7 & 1) == 0) {
    uVar1 = *(undefined1 *)(lVar10 + lVar8);
    lVar5 = lVar4;
    _objc_allocWithZone();
    *(undefined1 *)(lVar5 + _DAT_113082ab0) = uVar1;
    plVar6 = &lStack_a0;
    lStack_a0 = lVar5;
    lStack_98 = lVar4;
    _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
    bVar2 = *(byte *)((long)plVar6 + _DAT_113082ab0);
    _objc_release();
    lVar5 = lVar4;
    _objc_allocWithZone();
    *(byte *)(lVar5 + _DAT_113082ab0) = bVar2 ^ bVar3;
    plVar6 = &lStack_b0;
    lStack_b0 = lVar5;
    lStack_a8 = lVar4;
    _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
    bVar2 = *(byte *)(lVar10 + lVar8);
    _objc_release(lVar10);
    bVar3 = *(byte *)((long)plVar6 + _DAT_113082ab0);
    lVar8 = lVar4;
    _objc_allocWithZone();
    *(byte *)(lVar8 + _DAT_113082ab0) = bVar3 & bVar2;
    lStack_c0 = lVar8;
    lStack_b8 = lVar4;
    _objc_msgSendSuper2(&lStack_c0,PTR_s_init_1125d9248);
    _objc_release(plVar6);
    *unaff_x20 = (long)plVar9;
  }
  else {
    _objc_release(plVar11);
    plVar11 = (long *)0x0;
  }
  return plVar11;
}



/* Entry: 10450efb4; end: 10450eff3;  */

void FUN_10450efb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = uVar2;
  FUN_10450eff4();
  _objc_release(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10450eff4; end: 10450f133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10450eff4(long param_1)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x20;
  long *plVar9;
  long lVar10;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  plVar8 = &lStack_a0;
  lVar10 = *unaff_x20;
  lVar4 = param_1;
  func_0x00010450e890();
  lVar6 = _DAT_113082ab0;
  uVar1 = *(undefined1 *)(lVar10 + _DAT_113082ab0);
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113082ab0) = uVar1;
  plVar9 = &lStack_70;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  _objc_msgSendSuper2(plVar9,PTR_s_init_1125d9248);
  bVar2 = *(byte *)((long)plVar9 + _DAT_113082ab0);
  _objc_release();
  bVar3 = *(byte *)(param_1 + _DAT_113082ab0);
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(byte *)(lVar5 + _DAT_113082ab0) = bVar3 & bVar2;
  plVar9 = &lStack_80;
  lStack_80 = lVar5;
  lStack_78 = lVar4;
  _objc_msgSendSuper2(plVar9,PTR_s_init_1125d9248);
  bVar2 = *(byte *)(lVar10 + lVar6);
  _objc_release(lVar10);
  lVar6 = lVar4;
  _objc_allocWithZone();
  *(byte *)(lVar6 + _DAT_113082ab0) = bVar2 | bVar3;
  plVar7 = &lStack_90;
  lStack_90 = lVar6;
  lStack_88 = lVar4;
  _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
  *unaff_x20 = (long)plVar7;
  lVar6 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar6 + _DAT_113082ab0) = 0;
  lStack_a0 = lVar6;
  lStack_98 = lVar4;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_init_1125d9248);
  plVar7 = plVar9;
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(plVar9,plVar8);
  _objc_release(plVar8);
  if (((ulong)plVar7 & 1) != 0) {
    _objc_release(plVar9);
    plVar9 = (long *)0x0;
  }
  return plVar9;
}



/* Entry: 10450f134; end: 10450f13f;  */

void FUN_10450f134(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR___ss9OptionSetPss17FixedWidthInteger8RawValueRpzrlE9formUnionyyxF_11034f160;
  puVar2 = &UNK_10dd12158;
  _swift_getWitnessTable(&UNK_10dd12158);
  puVar3 = puVar2;
  FUN_10450f6fc();
  (*(code *)puVar1)(param_1,param_2,puVar2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 10450f140; end: 10450f18b;  */

void FUN_10450f140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_10dd12158;
  _swift_getWitnessTable(&UNK_10dd12158);
  puVar2 = puVar1;
  FUN_10450f6fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9OptionSetPss17FixedWidthInteger8RawValueRpzrlE16formIntersectionyyxF_11034f150)
            (param_1,param_2,puVar1,puVar2);
  return;
}



/* Entry: 10450f18c; end: 10450f197;  */

void FUN_10450f18c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = 
  PTR___ss9OptionSetPss17FixedWidthInteger8RawValueRpzrlE23formSymmetricDifferenceyyxF_11034f158;
  puVar2 = &UNK_10dd12158;
  _swift_getWitnessTable(&UNK_10dd12158);
  puVar3 = puVar2;
  FUN_10450f6fc();
  (*(code *)puVar1)(param_1,param_2,puVar2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 10450f198; end: 10450f1f7;  */

void FUN_10450f198(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_10dd12158;
  _swift_getWitnessTable(&UNK_10dd12158);
  puVar2 = puVar1;
  FUN_10450f6fc();
  (*param_4)(param_1,param_2,puVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 10450f1f8; end: 10450f20f;  */

void FUN_10450f1f8(void)

{
  undefined8 *unaff_x20;
  
  __ss10SetAlgebraPsE11subtractingyxxF();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*unaff_x20);
  return;
}



/* Entry: 10450f210; end: 10450f213;  */

void FUN_10450f210(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb8f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss10SetAlgebraPsE8isSubset2ofSbx_tF_11034e338)();
  return;
}



/* Entry: 10450f214; end: 10450f2d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10450f214(long param_1)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined1 *puVar8;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_60;
  lVar4 = param_1;
  func_0x00010450e890();
  uVar1 = *(undefined1 *)(unaff_x20 + _DAT_113082ab0);
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113082ab0) = uVar1;
  plVar6 = &lStack_50;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
  bVar2 = *(byte *)((long)plVar6 + _DAT_113082ab0);
  _objc_release();
  bVar3 = *(byte *)(param_1 + _DAT_113082ab0);
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(byte *)(lVar5 + _DAT_113082ab0) = bVar3 & bVar2;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  puVar8 = (undefined1 *)plVar7;
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
  _objc_release(plVar7);
  return (uint)puVar8 & 1;
}



/* Entry: 10450f2d4; end: 10450f2fb;  */

void FUN_10450f2d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb8f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss10SetAlgebraPsE10isDisjoint4withSbx_tF_11034e318)();
  return;
}



/* Entry: 10450f2fc; end: 10450f337;  */

void FUN_10450f2fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_10450f524();
  _swift_bridgeObjectRelease(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10450f338; end: 10450f38f;  */

void FUN_10450f338(void)

{
  ulong *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (((int)lVar3 == 0) || (func_0x00010450e890(), lVar3 == 0)) {
    puVar1 = (ulong *)0x113082b08;
    plVar4 = (long *)&UNK_10dd122f8;
  }
  else {
    puVar1 = (ulong *)0x112d36e60;
    plVar4 = (long *)&UNK_10d901170;
  }
  if (*puVar1 == 0 || (*puVar1 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar4 + (long)(int)*plVar4);
    func_0x000107c61518(puVar2,*plVar4 >> 0x20,0,0);
    *puVar1 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10450f390; end: 10450f523;  */

ulong FUN_10450f390(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10450f458);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10450f45c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x00010450e890();
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar5 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar3 = param_1;
    func_0x00010450e890();
    uVar4 = param_1;
    _swift_dynamicCastClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar5 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd000000000000015,0x800000010dd122c0);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar5 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar5);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10450f524);
  (*pcVar2)();
}



/* Entry: 10450f524; end: 10450f6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10450f524(ulong param_1)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar7 = param_1;
  func_0x00010450e890();
  uVar14 = uVar7;
  _objc_allocWithZone();
  *(undefined1 *)(uVar14 + _DAT_113082ab0) = 0;
  puVar8 = &uStack_70;
  uStack_70 = uVar14;
  uStack_68 = uVar7;
  _objc_msgSendSuper2(puVar8,PTR_s_init_1125d9248);
  if (param_1 >> 0x3e == 0) {
    uVar14 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar14 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar14 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar14 != 0) {
    uVar13 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10450f6c0);
          (*pcVar6)();
        }
        uVar9 = *(ulong *)(param_1 + uVar13 * 8 + 0x20);
        _objc_retain();
        lVar4 = _DAT_113082ab0;
      }
      else {
        uVar9 = uVar13;
        FUN_10450f390(uVar13,param_1);
        lVar4 = _DAT_113082ab0;
      }
      _DAT_113082ab0 = lVar4;
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10450f6bc);
        (*pcVar6)();
      }
      uVar12 = uVar13 + 1;
      uVar1 = *(undefined1 *)(uVar9 + lVar4);
      uVar10 = uVar7;
      _objc_allocWithZone();
      *(undefined1 *)(uVar10 + _DAT_113082ab0) = uVar1;
      puVar11 = &uStack_80;
      uStack_80 = uVar10;
      uStack_78 = uVar7;
      _objc_msgSendSuper2(puVar11,PTR_s_init_1125d9248);
      bVar2 = *(byte *)((long)puVar11 + _DAT_113082ab0);
      _objc_release();
      lVar5 = _DAT_113082ab0;
      bVar3 = *(byte *)((long)puVar8 + _DAT_113082ab0);
      uVar10 = uVar7;
      _objc_allocWithZone();
      *(byte *)(uVar10 + _DAT_113082ab0) = bVar3 & bVar2;
      puVar11 = &uStack_90;
      uStack_90 = uVar10;
      uStack_88 = uVar7;
      _objc_msgSendSuper2(puVar11,PTR_s_init_1125d9248);
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
      _objc_release(puVar11);
      bVar2 = *(byte *)((long)puVar8 + lVar5);
      _objc_release(puVar8);
      bVar3 = *(byte *)(uVar9 + lVar4);
      uVar10 = uVar7;
      _objc_allocWithZone();
      *(byte *)(uVar10 + _DAT_113082ab0) = bVar3 | bVar2;
      puVar8 = &uStack_a0;
      uStack_a0 = uVar10;
      uStack_98 = uVar7;
      _objc_msgSendSuper2(puVar8,PTR_s_init_1125d9248);
      _objc_release(uVar9);
      uVar13 = uVar13 + 1;
    } while (uVar12 != uVar14);
  }
  return puVar8;
}



/* Entry: 10450f6fc; end: 10450f73b;  */

void FUN_10450f6fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082b00 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___ss5UInt8Vs17FixedWidthIntegersMc_11034ef00;
  _swift_getWitnessTable
            (PTR___ss5UInt8Vs17FixedWidthIntegersMc_11034ef00,PTR___ss5UInt8VN_11034eef8);
  puRam0000000113082b00 = puVar1;
  return;
}



/* Entry: 10450f73c; end: 10450f7e3;  */

void FUN_10450f73c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10450f7e4; end: 10450f823;  */

void FUN_10450f7e4(void)

{
  long unaff_x20;
  
  func_0x00010058d43c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10450f824; end: 10450f837;  */

bool FUN_10450f824(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10450f838; end: 10450f90b;  */

void FUN_10450f838(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10450f90c; end: 10450f917;  */

void FUN_10450f90c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 10450f918; end: 10450f957;  */

void FUN_10450f918(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113082c58;
  func_0x0001000285a8(0x113082c58,&UNK_10dd124d0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 10450f958; end: 10450f96b;  */

ulong FUN_10450f958(ulong param_1)

{
  if (0x1a < param_1) {
    param_1 = 0x1b;
  }
  return param_1;
}



/* Entry: 10450f96c; end: 10450f9ab;  */

void FUN_10450f96c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082c60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd124d8;
  _swift_getWitnessTable(&UNK_10dd124d8,&UNK_110782110);
  puRam0000000113082c60 = puVar1;
  return;
}



/* Entry: 10450f9ac; end: 10450f9af;  */

void FUN_10450f9ac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113082c68 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113082c70;
  func_0x00010002969c(0x113082c70,&UNK_10dd12578);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113082c68 = puVar2;
  return;
}



/* Entry: 10450f9b0; end: 10450f9ff;  */

void FUN_10450f9b0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113082c68 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113082c70;
  func_0x00010002969c(0x113082c70,&UNK_10dd12578);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113082c68 = puVar2;
  return;
}



/* Entry: 10450fa00; end: 10450fb63;  */

int FUN_10450fa00(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xe5 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x1a) {
      iVar2 = 4;
    }
    if (param_2 + 0x1a >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10450fa7c;
        goto LAB_10450fa60;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10450fa60:
      return ((uint)*param_1 | uVar1 << 8) - 0x1a;
    }
  }
LAB_10450fa7c:
  iVar2 = *param_1 - 0x1b;
  if (*param_1 < 0x1b) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10450fb64; end: 10450fbb3;  */

void FUN_10450fb64(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000113082c80 != 0) {
    return;
  }
  puVar1 = &UNK_110782228;
  _swift_getForeignTypeMetadata();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000113082c80 = param_1;
  return;
}



/* Entry: 10450fbb4; end: 10450fbff;  */

bool FUN_10450fbb4(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10450fc00; end: 10450fc87;  */

undefined8
FUN_10450fc00(ulong param_1,long param_2,char param_3,ulong param_4,long param_5,char param_6)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_a8 [72];
  
  if (param_3 == '\x01') {
    if (param_6 == '\x01') {
      if (param_1 == param_4) {
code_r0x000100c3fc94:
        uVar7 = 1;
      }
      else {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_4 + 0x10)) {
          uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
          uVar14 = 0xffffffffffffffff;
          if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
            uVar14 = ~(-1L << (uVar11 & 0x3f));
          }
          uVar14 = uVar14 & *(ulong *)(param_1 + 0x38);
          lVar9 = 0;
          while( true ) {
            if (uVar14 == 0) {
              do {
                lVar13 = lVar9 + 1;
                if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x100c3fcbc);
                  (*pcVar4)();
                }
                if ((long)(uVar11 + 0x3f >> 6) <= lVar13) goto code_r0x000100c3fc94;
                uVar14 = ((ulong *)(param_1 + 0x38))[lVar13];
                lVar9 = lVar9 + 1;
              } while (uVar14 == 0);
              uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
              uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
              uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
              uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
              uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
              uVar14 = uVar14 - 1 & uVar14;
            }
            else {
              uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
              uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
              uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
              uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
              uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
              uVar14 = uVar14 - 1 & uVar14;
              lVar13 = lVar9;
            }
            puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + (LZCOUNT(uVar8) | lVar13 << 6) * 0x10);
            uVar8 = *puVar1;
            uVar2 = puVar1[1];
            func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_4 + 0x28));
            func_0x000107c61434(uVar2);
            puVar5 = auStack_a8;
            func_0x000107c5fb58(puVar5,uVar8,uVar2);
            func_0x000107c606a8();
            uVar10 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
            uVar12 = (ulong)puVar5 & (uVar10 ^ 0xffffffffffffffff);
            if ((*(ulong *)(param_4 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) == 0) break;
            while( true ) {
              puVar1 = (ulong *)(*(long *)(param_4 + 0x30) + uVar12 * 0x10);
              uVar6 = *puVar1;
              uVar3 = puVar1[1];
              if ((uVar6 == uVar8 && uVar3 == uVar2) ||
                 (func_0x000107c605b8(uVar6,uVar3,uVar8,uVar2,0), (uVar6 & 1) != 0)) break;
              uVar12 = uVar12 + 1 & ~uVar10;
              if ((*(ulong *)(param_4 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) == 0)
              goto code_r0x000100c3fc84;
            }
            func_0x000107c6142c(uVar2);
            lVar9 = lVar13;
          }
code_r0x000100c3fc84:
          func_0x000107c6142c(uVar2);
        }
        uVar7 = 0;
      }
      return uVar7;
    }
  }
  else if (param_6 != '\x01') {
    if (param_2 == 0) {
      if (param_5 == 0) {
        return 1;
      }
    }
    else if (param_5 != 0) {
      if ((param_1 == param_4) && (param_2 == param_5)) {
        return 1;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_1,param_2,param_4,param_5,0);
      if ((param_1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10450fc88; end: 10450fcb7;  */

void FUN_10450fc88(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\x01') {
    param_1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_1);
  return;
}



/* Entry: 10450fcb8; end: 10450fd53;  */

undefined8 * FUN_10450fcb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_10450fc88(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10450fd54; end: 10450fd97;  */

undefined8 * FUN_10450fd54(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010450fca8(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10450fd98; end: 10450fe63;  */

int FUN_10450fd98(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10450fe64; end: 10450ff3b;  */

void FUN_10450fe64(void)

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



/* Entry: 10450ff3c; end: 10450ff5b;  */

void FUN_10450ff3c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10450ff5c; end: 10450ff9b;  */

void FUN_10450ff5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd126e0;
  _swift_getWitnessTable(&UNK_10dd126e0,&UNK_110782318);
  puRam0000000113082c88 = puVar1;
  return;
}



/* Entry: 10450ff9c; end: 10450ffbf;  */

undefined1  [16] FUN_10450ff9c(void)

{
  return ZEXT816(0x110782318);
}



/* Entry: 10450ffc0; end: 104510017;  */

uint FUN_10450ffc0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_104510018(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 104510018; end: 1045101f3;  */

undefined8 FUN_104510018(long *param_1,long *param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  cVar1 = (char)param_2[3];
  if ((char)param_1[3] == -1) {
    if (cVar1 != -1) {
      return 0;
    }
    goto LAB_104510058;
  }
  if (cVar1 == -1) {
    return 0;
  }
  uVar6 = param_1[1];
  lVar5 = param_1[2];
  uVar2 = param_2[1];
  lVar4 = param_2[2];
  if ((char)param_1[3] == '\x01') {
    if (cVar1 != '\x01') {
      return 0;
    }
    func_0x00010450ffac(uVar2,lVar4,1);
    func_0x00010450ffac(uVar6,lVar5,1);
    uVar3 = uVar6;
    func_0x000100c3fb0c(uVar6,uVar2);
    func_0x0001045105a0(uVar2,lVar4,1);
    func_0x0001045105a0(uVar6,lVar5,1);
  }
  else {
    if (cVar1 == '\x01') {
      return 0;
    }
    if (lVar5 == 0) {
      if (lVar4 != 0) {
        return 0;
      }
      goto LAB_104510058;
    }
    if (lVar4 == 0) {
      return 0;
    }
    if ((uVar6 == uVar2) && (lVar5 == lVar4)) goto LAB_104510058;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar6,lVar5,uVar2,lVar4,0);
    uVar3 = uVar6;
  }
  if ((uVar3 & 1) == 0) {
    return 0;
  }
LAB_104510058:
  uVar6 = param_1[4];
  lVar5 = param_2[4];
  if (uVar6 == 0) {
    if (lVar5 != 0) {
      return 0;
    }
  }
  else {
    if (lVar5 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar5);
    uVar2 = uVar6;
    _swift_bridgeObjectRetain();
    func_0x000100c3fb0c();
    _swift_bridgeObjectRelease(uVar6);
    _swift_bridgeObjectRelease(lVar5);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  lVar4 = param_1[6];
  lVar5 = param_2[6];
  if (lVar4 == 0) {
    if (lVar5 == 0) {
      return 1;
    }
  }
  else if (lVar5 != 0) {
    uVar6 = param_1[5];
    if ((uVar6 == param_2[5]) && (lVar4 == lVar5)) {
      return 1;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar6,lVar4,param_2[5],lVar5,0);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1045101f4; end: 10451025b;  */

long FUN_1045101f4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10451025c; end: 1045103ff;  */

undefined8 * FUN_10451025c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  cVar2 = *(char *)(param_2 + 3);
  if (cVar2 == -1) {
    uVar3 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  }
  else {
    uVar3 = param_2[1];
    uVar1 = param_2[2];
    FUN_10450fc88(uVar3,uVar1,cVar2);
    param_1[1] = uVar3;
    param_1[2] = uVar1;
    *(char *)(param_1 + 3) = cVar2;
  }
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  uVar3 = param_2[6];
  param_1[6] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 104510400; end: 104510433;  */

undefined8 FUN_104510400(undefined8 param_1)

{
  (*(code *)(undefined *)0x10450fc98)();
  return param_1;
}



/* Entry: 104510434; end: 1045104d3;  */

undefined8 * FUN_104510434(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  if (*(char *)(param_1 + 3) != -1) {
    cVar1 = *(char *)(param_2 + 3);
    if (cVar1 != -1) {
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_2[1];
      param_1[2] = param_2[2];
      param_1[1] = uVar4;
      *(char *)(param_1 + 3) = cVar1;
      func_0x00010450fca8(uVar2,uVar3);
      goto LAB_1045104a0;
    }
    FUN_104510400(param_1 + 1);
  }
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
LAB_1045104a0:
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[6];
  uVar3 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}



/* Entry: 1045104d4; end: 1045105b3;  */

int FUN_1045104d4(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1045105b4; end: 10451082f;  */

long FUN_1045105b4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104510830; end: 104510a2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104510830(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined1 auStack_90 [16];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined1 uStack_59;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar6 = &UNK_1107824b8;
  puVar1 = puVar6;
  _swift_allocObject(&UNK_1107824b8,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1107824e0;
  _swift_allocObject(&UNK_1107824e0,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_104510abc;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar3 = 0x113082c78;
  func_0x0001000285a8(0x113082c78,&UNK_10dd125e0);
  uVar4 = uVar3;
  FUN_104510aec();
  pcVar5 = FUN_104510ac4;
  __s7Combine9PublisherPAAs5NeverO7FailureRtzrlE4sink12receiveValueAA14AnyCancellableCy6OutputQzc_tF
            (FUN_104510ac4,puVar2,uVar3,uVar4);
  _swift_release(puVar2);
  __s7Combine14AnyCancellableC5store2inyShyACGz_tF(&puStack_58);
  _swift_release(pcVar5);
  _swift_allocObject(&UNK_1107824b8,0x18,7);
  _swift_unknownObjectWeakInit(puVar6 + 0x10,param_1);
  puVar2 = &UNK_110782508;
  _swift_allocObject(&UNK_110782508,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_104510bcc;
  *(undefined **)(puVar2 + 0x18) = puVar6;
  pcVar5 = FUN_10451129c;
  __s7Combine9PublisherPAAs5NeverO7FailureRtzrlE4sink12receiveValueAA14AnyCancellableCy6OutputQzc_tF
            (FUN_10451129c,puVar2,uVar3,uVar4);
  _swift_release(puVar2);
  __s7Combine14AnyCancellableC5store2inyShyACGz_tF(&puStack_58);
  _swift_release(pcVar5);
  puVar6 = &UNK_110782530;
  _swift_allocObject(&UNK_110782530,0x18,7);
  _swift_unknownObjectWeakInit(puVar6 + 0x10);
  uVar3 = 0x112d518a8;
  puStack_80 = puVar6;
  uStack_78 = param_1;
  ppuStack_70 = &puStack_58;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x000100087bd4(&uStack_59,FUN_104510cc4,auStack_90,uVar3);
  _swift_release(puVar6);
  _swift_bridgeObjectRelease(puStack_58);
  return 1;
}



/* Entry: 104510a2c; end: 104510abb;  */

void FUN_104510a2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    uVar1 = 0;
    func_0x000100c70ba8(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar1);
    func_0x00010bf7e340(param_3);
    _swift_unknownObjectRelease(param_3);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 104510abc; end: 104510ac3;  */

void FUN_104510abc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    uVar2 = 0;
    func_0x000100c70ba8(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar2);
    func_0x00010bf7e340(lVar1);
    _swift_unknownObjectRelease(lVar1);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 104510ac4; end: 104510aeb;  */

void FUN_104510ac4(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 104510aec; end: 104510b3b;  */

void FUN_104510aec(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113082c98 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113082c78;
  func_0x00010002969c(0x113082c78,&UNK_10dd125e0);
  puVar2 = PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18;
  _swift_getWitnessTable(PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18,uVar1);
  puRam0000000113082c98 = puVar2;
  return;
}



/* Entry: 104510b3c; end: 104510bcb;  */

void FUN_104510b3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    uVar1 = 0;
    func_0x000100c70ba8(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar1);
    func_0x00010bf7e380(param_3);
    _swift_unknownObjectRelease(param_3);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 104510bcc; end: 104510bd3;  */

void FUN_104510bcc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    uVar2 = 0;
    func_0x000100c70ba8(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar2);
    func_0x00010bf7e380(lVar1);
    _swift_unknownObjectRelease(lVar1);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 104510bd4; end: 104510cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104510bd4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _DAT_113082cb0;
  if (param_2 != 0) {
    uVar4 = *param_4;
    _swift_beginAccess(param_2 + _DAT_113082cb0,auStack_80,0x21,0);
    _swift_bridgeObjectRetain(uVar4);
    uVar2 = *(undefined8 *)(param_2 + lVar1);
    _swift_isUniquelyReferenced_nonNull_native(uVar2);
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    *(undefined8 *)(param_2 + lVar1) = 0x8000000000000000;
    func_0x00010049915c(uVar4,param_3,uVar2);
    *(undefined8 *)(param_2 + lVar1) = uVar3;
    _swift_endAccess(auStack_80);
    _objc_release(param_2);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 104510cc4; end: 104510cdf;  */

void FUN_104510cc4(void)

{
  long unaff_x20;
  
  FUN_104510bd4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 104510ce0; end: 104510d2f; -[SCLensMetadataStoreListenerAnnouncer addListener:] */

undefined8 FUN_104510ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_104510830(param_3);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  return 1;
}


