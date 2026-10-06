/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038be44c; end: 1038be5f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1038be44c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  
  uVar7 = *(ulong *)(param_1 + _DAT_112fa97b8);
  if (uVar7 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar8 = uVar7;
    }
    func_0x000107c60480();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar8 != 0) {
    func_0x0001038be080(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1038be5f4);
      (*pcVar4)();
    }
    uVar9 = 0;
    do {
      if ((uVar7 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar7 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar9;
        func_0x00010111c37c(uVar9,uVar7);
      }
      lVar6 = *(long *)(uVar5 + _DAT_112fa9758);
      func_0x000107c61174();
      func_0x000107c61170(uVar5);
      uVar10 = *(undefined4 *)(*(long *)(lVar6 + _DAT_112fa98a8) + _DAT_112fa98e0);
      uVar11 = *(undefined8 *)(*(long *)(lVar6 + _DAT_112fa98a8) + _DAT_112fa98e8);
      uVar1 = *(undefined8 *)(lVar6 + _DAT_112fa98b0);
      uVar2 = ((undefined8 *)(lVar6 + _DAT_112fa98b0))[1];
      func_0x000107c61434(uVar2);
      func_0x000107c61170(lVar6);
      uVar5 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar5) {
        func_0x0001038be080(1 < *(ulong *)(puVar3 + 0x18),uVar5 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar5 + 1;
      *(undefined4 *)(puVar3 + uVar5 * 0x20 + 0x20) = uVar10;
      uVar9 = uVar9 + 1;
      *(undefined8 *)(puVar3 + uVar5 * 0x20 + 0x28) = uVar11;
      *(undefined8 *)(puVar3 + uVar5 * 0x20 + 0x30) = uVar1;
      *(undefined8 *)(puVar3 + uVar5 * 0x20 + 0x38) = uVar2;
    } while (uVar8 != uVar9);
  }
  return puVar3;
}



/* Entry: 1038be5f4; end: 1038be613;  */

void FUN_1038be5f4(void)

{
  func_0x000107c61168(&PTR_PTR_1128fb610);
  return;
}



/* Entry: 1038be614; end: 1038be623; -[SCMapNavigationLatLng latitude] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038be614(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fa9800);
}



/* Entry: 1038be624; end: 1038be63b; -[SCMapNavigationLatLng longitude] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038be624(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fa9808);
}



/* Entry: 1038be63c; end: 1038be69f; -[SCMapNavigationLatLng initWithLatitude:longitude:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038be63c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_3;
  func_0x000107c614f0();
  *(undefined8 *)(param_3 + _DAT_112fa9800) = param_1;
  *(undefined8 *)(param_3 + _DAT_112fa9808) = param_2;
  lStack_40 = param_3;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038be6a0; end: 1038be757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038be6a0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9800) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9808) = param_2;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038be758; end: 1038be7d7; -[SCMapNavigationLatLng hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038be758(long param_1)

{
  double dVar1;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_112fa9800) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_112fa9800);
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_112fa9808) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_112fa9808);
  }
  func_0x000107c606a0(dVar1);
  func_0x000107c606a4();
  return;
}



/* Entry: 1038be7d8; end: 1038be897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1038be7d8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar2 = &lStack_68;
    func_0x000107c6147c(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      dVar3 = *(double *)(unaff_x20 + _DAT_112fa9800);
      dVar4 = *(double *)(lStack_68 + _DAT_112fa9800);
      dVar5 = *(double *)(unaff_x20 + _DAT_112fa9808);
      dVar6 = *(double *)(lStack_68 + _DAT_112fa9808);
      func_0x000107c61170();
      if (dVar5 != dVar6) {
        return false;
      }
      return dVar3 == dVar4;
    }
  }
  return false;
}



/* Entry: 1038be898; end: 1038be917; -[SCMapNavigationLatLng isEqual:] */

uint FUN_1038be898(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1038be7d8(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1038be918; end: 1038be91b; -[SCMapNavigationLatLng copyWithZone:] */

void FUN_1038be918(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1038be91c; end: 1038be937; -[SCMapNavigationLatLng description] */

void FUN_1038be91c(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038be938; end: 1038be9d3; -[SCMapNavigationLatLng init] */

void FUN_1038be938(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapNavigationServices/SCMapNavigationLatLngWrapper.swift",0x3a,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038be980);
  (*pcVar1)();
}



/* Entry: 1038be9d4; end: 1038be9d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038be9d4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9800) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9808) = param_2;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038be9d8; end: 1038be9e7; -[SCMapNavigationLocation ll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038be9d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fa9838));
  return;
}



/* Entry: 1038be9e8; end: 1038bea7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038be9e8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9838) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038bea80; end: 1038bead7; -[SCMapNavigationLocation initWithLl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bea80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fa9838) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1038bead8; end: 1038beb7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bead8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  long lStack_50;
  long lStack_48;
  
  func_0x000107c610f8();
  lVar1 = 0;
  func_0x0001038be9b4();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112fa9800) = param_1;
  *(undefined8 *)(lVar2 + _DAT_112fa9808) = param_2;
  plVar3 = &lStack_50;
  lStack_50 = lVar2;
  lStack_48 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_112fa9838) = plVar3;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038beb7c; end: 1038beb9b; -[SCMapNavigationLocation hash] */

void FUN_1038beb7c(void)

{
  FUN_1038beb9c();
  return;
}



/* Entry: 1038beb9c; end: 1038bec43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038beb9c(void)

{
  long lVar1;
  long unaff_x20;
  double dVar2;
  double dVar3;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  lVar1 = *(long *)(unaff_x20 + _DAT_112fa9838);
  func_0x000107c606ac(auStack_c0);
  dVar2 = *(double *)(lVar1 + _DAT_112fa9800);
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  func_0x000107c606a0(dVar3);
  dVar2 = *(double *)(lVar1 + _DAT_112fa9808);
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  func_0x000107c606a0(dVar3);
  func_0x000107c606a4();
  func_0x000107c60690();
  func_0x000107c606a4();
  return;
}



/* Entry: 1038bec44; end: 1038bed0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1038bec44(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  long lStack_58;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    func_0x000107c6147c(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,unaff_x20,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar5 = *(undefined8 *)(lStack_58 + _DAT_112fa9838);
      uVar2 = 0;
      func_0x0001038be9b4();
      auStack_50[0] = uVar5;
      lStack_38 = uVar2;
      func_0x000107c61174(uVar5);
      puVar3 = auStack_50;
      FUN_1038be7d8(puVar3);
      uVar4 = (uint)puVar3;
      func_0x000107c61170(lStack_58);
      func_0x00010006e7f4(auStack_50);
      goto LAB_1038becf8;
    }
  }
  uVar4 = 0;
LAB_1038becf8:
  return uVar4 & 1;
}



/* Entry: 1038bed10; end: 1038bed8f; -[SCMapNavigationLocation isEqual:] */

uint FUN_1038bed10(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1038bec44(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1038bed90; end: 1038bed93; -[SCMapNavigationLocation copyWithZone:] */

void FUN_1038bed90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1038bed94; end: 1038bedaf; -[SCMapNavigationLocation description] */

void FUN_1038bed94(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038bedb0; end: 1038bee2b; -[SCMapNavigationLocation init] */

void FUN_1038bedb0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapNavigationServices/SCMapNavigationLocationWrapper.swift",0x3c,2,0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038bedf8);
  (*pcVar1)();
}



/* Entry: 1038bee2c; end: 1038bee3b; -[SCMapNavigationLocation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bee2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa9838));
  return;
}



/* Entry: 1038bee3c; end: 1038bee5b;  */

void FUN_1038bee3c(void)

{
  func_0x000107c61168(&PTR_PTR_1128fb7a8);
  return;
}



/* Entry: 1038bee5c; end: 1038bef47;  */

void FUN_1038bee5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_1038bf230(param_1,param_2,param_3);
  return;
}



/* Entry: 1038bef48; end: 1038bf043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1038bef48(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar4 = &lStack_78;
    func_0x000107c6147c(plVar4,auStack_70,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_112fa9868);
      iVar2 = *(int *)(lStack_78 + _DAT_112fa9868);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112fa9870);
      uVar8 = *(undefined8 *)(lStack_78 + _DAT_112fa9870);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fa9878);
      uVar6 = *(undefined8 *)(lStack_78 + _DAT_112fa9878);
      func_0x000107c61434(uVar6);
      func_0x0001038bc1dc(uVar5,uVar6);
      func_0x000107c61170(lStack_78);
      func_0x000107c6142c(uVar6);
      return (uint)(iVar1 == iVar2 && (int)uVar7 == (int)uVar8) & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 1038bf044; end: 1038bf053; -[SCMapNavigationRouteOptions units] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038bf044(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fa9868);
}



/* Entry: 1038bf054; end: 1038bf063; -[SCMapNavigationRouteOptions costingType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038bf054(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fa9870);
}



/* Entry: 1038bf064; end: 1038bf0b3; -[SCMapNavigationRouteOptions locationsArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bf064(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fa9878);
  FUN_1038bee3c(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038bf0b4; end: 1038bf19b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bf0b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9868) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9870) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9878) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038bf19c; end: 1038bf22f; -[SCMapNavigationRouteOptions initWithUnits:costingType:locationsArray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bf19c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = 0;
  FUN_1038bee3c(0);
  func_0x000107c5fc54(param_5,uVar2);
  *(undefined8 *)(param_1 + _DAT_112fa9868) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fa9870) = param_4;
  *(undefined8 *)(param_1 + _DAT_112fa9878) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038bf230; end: 1038bf3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bf230(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [16];
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9868) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9870) = param_2;
  lVar7 = *(long *)(param_3 + 0x10);
  if (lVar7 == 0) {
    func_0x000107c6142c(param_3);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1038bdffc(0,lVar7,0);
    puVar8 = puStack_78;
    lVar2 = 0;
    FUN_1038bee3c();
    puVar9 = (undefined8 *)(param_3 + 0x28);
    do {
      uVar10 = puVar9[-1];
      uVar11 = *puVar9;
      lVar3 = lVar2;
      func_0x000107c610f8();
      lVar4 = 0;
      func_0x0001038be9b4();
      lVar5 = lVar4;
      func_0x000107c610f8();
      *(undefined8 *)(lVar5 + _DAT_112fa9800) = uVar10;
      *(undefined8 *)(lVar5 + _DAT_112fa9808) = uVar11;
      plVar6 = &lStack_88;
      lStack_88 = lVar5;
      lStack_80 = lVar4;
      func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
      *(long **)(lVar3 + _DAT_112fa9838) = plVar6;
      plVar6 = &lStack_98;
      lStack_98 = lVar3;
      lStack_90 = lVar2;
      func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
      uVar1 = *(ulong *)(puVar8 + 0x10);
      puStack_78 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        FUN_1038bdffc(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
      }
      puVar8 = puStack_78;
      puVar9 = puVar9 + 2;
      *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
      *(long **)(puStack_78 + uVar1 * 8 + 0x20) = plVar6;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    func_0x000107c6142c(param_3);
  }
  *(undefined **)(unaff_x20 + _DAT_112fa9878) = puVar8;
  func_0x000107c61154(auStack_a8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038bf3fc; end: 1038bf42f; -[SCMapNavigationRouteOptions hash] */

undefined8 FUN_1038bf3fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001038beea4();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1038bf430; end: 1038bf4af; -[SCMapNavigationRouteOptions isEqual:] */

uint FUN_1038bf430(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1038bef48(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1038bf4b0; end: 1038bf4b3; -[SCMapNavigationRouteOptions copyWithZone:] */

void FUN_1038bf4b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1038bf4b4; end: 1038bf4f7; -[SCMapNavigationRouteOptions description] */

void FUN_1038bf4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1038bf584();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038bf4f8; end: 1038bf573; -[SCMapNavigationRouteOptions init] */

void FUN_1038bf4f8(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapNavigationServices/SCMapNavigationRouteOptionsWrapper.swift",0x40,2,0x41
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038bf540);
  (*pcVar1)();
}



/* Entry: 1038bf574; end: 1038bf583; -[SCMapNavigationRouteOptions .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bf574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fa9878));
  return;
}



/* Entry: 1038bf584; end: 1038bf71f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038bf584(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_112fa9868);
  uVar6 = *(ulong *)(param_1 + _DAT_112fa9878);
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    func_0x0001038be030(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038bf720);
      (*pcVar2)();
    }
    uVar8 = 0;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar8;
        FUN_1038bde60(uVar8,uVar6);
      }
      lVar4 = *(long *)(uVar3 + _DAT_112fa9838);
      func_0x000107c61174();
      func_0x000107c61170(uVar3);
      uVar9 = *(undefined8 *)(lVar4 + _DAT_112fa9800);
      uVar10 = *(undefined8 *)(lVar4 + _DAT_112fa9808);
      func_0x000107c61170(lVar4);
      uVar3 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
        func_0x0001038be030(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puVar1 + uVar3 * 0x10 + 0x20) = uVar9;
      *(undefined8 *)(puVar1 + uVar3 * 0x10 + 0x28) = uVar10;
    } while (uVar7 != uVar8);
  }
  return uVar5;
}



/* Entry: 1038bf720; end: 1038bf73f;  */

void FUN_1038bf720(void)

{
  func_0x000107c61168(&PTR_PTR_1128fb870);
  return;
}



/* Entry: 1038bf740; end: 1038bf803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bf740(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  long lStack_60;
  long lStack_58;
  
  func_0x000107c610f8();
  lVar2 = 0;
  func_0x0001038bffe0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined4 *)(lVar3 + _DAT_112fa98e0) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112fa98e8) = param_2;
  plVar4 = &lStack_60;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_112fa98a8) = plVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa98b0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038bf804; end: 1038bf90f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1038bf804(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_58;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    func_0x000107c6147c(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_112fa98a8);
      uVar3 = 0;
      func_0x0001038bffe0();
      auStack_50[0] = uVar6;
      lStack_38 = uVar3;
      func_0x000107c61174(uVar6);
      puVar4 = auStack_50;
      FUN_1038bfcf8(puVar4);
      func_0x00010006e7f4(auStack_50);
      lVar1 = *(long *)(unaff_x20 + _DAT_112fa98b0);
      if (lVar1 == *(long *)(lStack_58 + _DAT_112fa98b0) &&
          ((long *)(unaff_x20 + _DAT_112fa98b0))[1] == ((long *)(lStack_58 + _DAT_112fa98b0))[1]) {
        uVar5 = 1;
      }
      else {
        func_0x000107c605b8();
        uVar5 = (uint)lVar1;
      }
      func_0x000107c61170(lStack_58);
      uVar5 = (uint)puVar4 & uVar5;
      goto LAB_1038bf8f8;
    }
  }
  uVar5 = 0;
LAB_1038bf8f8:
  return uVar5 & 1;
}



/* Entry: 1038bf910; end: 1038bf91f; -[SCMapNavigationDirectionsLeg summary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bf910(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fa98a8));
  return;
}



/* Entry: 1038bf920; end: 1038bf96b; -[SCMapNavigationDirectionsLeg shape] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bf920(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fa98b0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fa98b0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038bf96c; end: 1038bf9d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bf96c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa98a8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa98b0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038bf9d8; end: 1038bfa57; -[SCMapNavigationDirectionsLeg initWithSummary:shape:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bf9d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  *(undefined8 *)(param_1 + _DAT_112fa98a8) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fa98b0);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar2);
  return;
}



/* Entry: 1038bfa58; end: 1038bfb03; -[SCMapNavigationDirectionsLeg hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038bfa58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  FUN_1038bfc7c();
  func_0x000107c60690();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112fa98b0);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112fa98b0))[1];
  func_0x000107c61174(param_1);
  func_0x000107c5fadc(uVar1,uVar2);
  uVar2 = uVar1;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar1);
  func_0x000107c60690(uVar2);
  func_0x000107c606a4();
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 1038bfb04; end: 1038bfb83; -[SCMapNavigationDirectionsLeg isEqual:] */

uint FUN_1038bfb04(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1038bf804(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1038bfb84; end: 1038bfb87; -[SCMapNavigationDirectionsLeg copyWithZone:] */

void FUN_1038bfb84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1038bfb88; end: 1038bfba3; -[SCMapNavigationDirectionsLeg description] */

void FUN_1038bfb88(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038bfba4; end: 1038bfc1f; -[SCMapNavigationDirectionsLeg init] */

void FUN_1038bfba4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapNavigationServices/SCMapNavigationDirectionsLegWrapper.swift",0x41,2,
                      0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038bfbec);
  (*pcVar1)();
}



/* Entry: 1038bfc20; end: 1038bfc5b; -[SCMapNavigationDirectionsLeg .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bfc20(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fa98a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fa98b0 + 8))
  ;
  return;
}



/* Entry: 1038bfc5c; end: 1038bfc7b;  */

void FUN_1038bfc5c(void)

{
  func_0x000107c61168(&PTR_PTR_1128fb948);
  return;
}



/* Entry: 1038bfc7c; end: 1038bfcf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bfc7c(void)

{
  long unaff_x20;
  float fVar1;
  double dVar2;
  undefined1 auStack_68 [72];
  
  func_0x000107c606ac(auStack_68);
  fVar1 = 0.0;
  if (*(float *)(unaff_x20 + _DAT_112fa98e0) != 0.0) {
    fVar1 = *(float *)(unaff_x20 + _DAT_112fa98e0);
  }
  func_0x000107c6069c(fVar1);
  dVar2 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_112fa98e8) != 0.0) {
    dVar2 = *(double *)(unaff_x20 + _DAT_112fa98e8);
  }
  func_0x000107c606a0(dVar2);
  func_0x000107c606a4();
  return;
}



/* Entry: 1038bfcf8; end: 1038bfdbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1038bfcf8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar2 = &lStack_78;
    func_0x000107c6147c(plVar2,auStack_70,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      fVar3 = *(float *)(unaff_x20 + _DAT_112fa98e0);
      fVar4 = *(float *)(lStack_78 + _DAT_112fa98e0);
      dVar5 = *(double *)(unaff_x20 + _DAT_112fa98e8);
      dVar6 = *(double *)(lStack_78 + _DAT_112fa98e8);
      func_0x000107c61170();
      if (dVar5 != dVar6) {
        return false;
      }
      if (NAN(fVar3) || NAN(fVar4)) {
        return false;
      }
      return fVar3 == fVar4;
    }
  }
  return false;
}



/* Entry: 1038bfdc0; end: 1038bfdcf; -[SCMapNavigationDirectionsLegSummary length] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1038bfdc0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112fa98e0);
}



/* Entry: 1038bfdd0; end: 1038bfde3; -[SCMapNavigationDirectionsLegSummary time] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038bfdd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fa98e8);
}



/* Entry: 1038bfde4; end: 1038bfe3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bfde4(undefined4 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined4 *)(unaff_x20 + _DAT_112fa98e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa98e8) = param_2;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038bfe40; end: 1038bfea3; -[SCMapNavigationDirectionsLegSummary initWithLength:time:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bfe40(undefined4 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_3;
  func_0x000107c614f0();
  *(undefined4 *)(param_3 + _DAT_112fa98e0) = param_1;
  *(undefined8 *)(param_3 + _DAT_112fa98e8) = param_2;
  lStack_40 = param_3;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038bfea4; end: 1038bfec3; -[SCMapNavigationDirectionsLegSummary hash] */

void FUN_1038bfea4(void)

{
  FUN_1038bfc7c();
  return;
}



/* Entry: 1038bfec4; end: 1038bff43; -[SCMapNavigationDirectionsLegSummary isEqual:] */

uint FUN_1038bfec4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1038bfcf8(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1038bff44; end: 1038bff47; -[SCMapNavigationDirectionsLegSummary copyWithZone:] */

void FUN_1038bff44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1038bff48; end: 1038bff63; -[SCMapNavigationDirectionsLegSummary description] */

void FUN_1038bff48(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038bff64; end: 1038bffff; -[SCMapNavigationDirectionsLegSummary init] */

void FUN_1038bff64(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapNavigationServices/SCMapNavigationDirectionsLegSummaryWrapper.swift",
                      0x48,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038bffac);
  (*pcVar1)();
}



/* Entry: 1038c0000; end: 1038c0003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c0000(undefined4 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined4 *)(unaff_x20 + _DAT_112fa98e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa98e8) = param_2;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038c0004; end: 1038c0013; -[_TtC25SCMapNotificationServices25SCMapNotificationServices locationSharingNotificationController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c0004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fa9918));
  return;
}



/* Entry: 1038c0014; end: 1038c0033; -[_TtC25SCMapNotificationServices25SCMapNotificationServices locationPrivacyReminderNotificationController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c0014(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fa9920));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038c0034; end: 1038c0097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c0034(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9918) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9920) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038c0098; end: 1038c00f7; -[_TtC25SCMapNotificationServices25SCMapNotificationServices init] */

void FUN_1038c0098(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapNotificationServices.SCMapNotificationServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038c00c4);
  (*pcVar1)();
}



/* Entry: 1038c00f8; end: 1038c012f; -[_TtC25SCMapNotificationServices25SCMapNotificationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c00f8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fa9918));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fa9920));
  return;
}



/* Entry: 1038c0130; end: 1038c0363;  */

long FUN_1038c0130(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1038c0364; end: 1038c0373; -[_TtC25SCMapSlippyUpsellServices25SCMapSlippyUpsellServices upsellRequestService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c0364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fa9950));
  return;
}



/* Entry: 1038c0374; end: 1038c03bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c0374(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9950) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038c03c0; end: 1038c0417; -[_TtC25SCMapSlippyUpsellServices25SCMapSlippyUpsellServices initWithUpsellRequestService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c03c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fa9950) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1038c0418; end: 1038c0477; -[_TtC25SCMapSlippyUpsellServices25SCMapSlippyUpsellServices init] */

void FUN_1038c0418(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapSlippyUpsellServices.SCMapSlippyUpsellServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038c0444);
  (*pcVar1)();
}



/* Entry: 1038c0478; end: 1038c0487; -[_TtC25SCMapSlippyUpsellServices25SCMapSlippyUpsellServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c0478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa9950));
  return;
}



/* Entry: 1038c0488; end: 1038c0537;  */

void FUN_1038c0488(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001038c0554();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1038c0538; end: 1038c0567;  */

void FUN_1038c0538(ulong *param_1,ulong *param_2)

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



/* Entry: 1038c0568; end: 1038c05a7;  */

void FUN_1038c0568(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa9980 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1c6a0;
  func_0x000107c61520(&UNK_10dc1c6a0,&UNK_1106a4e58);
  puRam0000000112fa9980 = puVar1;
  return;
}



/* Entry: 1038c05a8; end: 1038c05ab;  */

void FUN_1038c05a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa9988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1c740;
  func_0x000107c61520(&UNK_10dc1c740,&UNK_1106a4e78);
  puRam0000000112fa9988 = puVar1;
  return;
}



/* Entry: 1038c05ac; end: 1038c05eb;  */

void FUN_1038c05ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa9988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1c740;
  func_0x000107c61520(&UNK_10dc1c740,&UNK_1106a4e78);
  puRam0000000112fa9988 = puVar1;
  return;
}



/* Entry: 1038c05ec; end: 1038c0633;  */

undefined1  [16] FUN_1038c05ec(void)

{
  return ZEXT816(0x1106a4e58);
}



/* Entry: 1038c0634; end: 1038c067f; -[SCMapShareBackUpsellConfig friendId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c0634(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fa9990);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fa9990))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038c0680; end: 1038c068b; -[SCMapShareBackUpsellConfig title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c0680(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fa9998))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fa9998);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038c068c; end: 1038c0697; -[SCMapShareBackUpsellConfig subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c068c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fa99a0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fa99a0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038c0698; end: 1038c06ef;  */

void FUN_1038c0698(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038c06f0; end: 1038c078b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c06f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa9990);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa9998);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa99a0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038c078c; end: 1038c0863; -[SCMapShareBackUpsellConfig initWithFriendId:title:subtitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c078c(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  if (param_4 == 0) {
    lVar5 = 0;
    lVar4 = param_2;
  }
  else {
    lVar5 = param_2;
    func_0x000107c5faec();
    lVar4 = lVar5;
  }
  if (param_5 == 0) {
    param_5 = 0;
    lVar4 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112fa9990);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  plVar2 = (long *)(param_1 + _DAT_112fa9998);
  *plVar2 = param_4;
  plVar2[1] = lVar5;
  plVar2 = (long *)(param_1 + _DAT_112fa99a0);
  *plVar2 = param_5;
  plVar2[1] = lVar4;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038c0864; end: 1038c08cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c0864(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa9990);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa9998);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  uVar2 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa99a0);
  puVar1[1] = param_1[5];
  *puVar1 = uVar2;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038c08d0; end: 1038c08d3; -[SCMapShareBackUpsellConfig copyWithZone:] */

void FUN_1038c08d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1038c08d4; end: 1038c08ef; -[SCMapShareBackUpsellConfig description] */

void FUN_1038c08d4(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038c08f0; end: 1038c096b; -[SCMapShareBackUpsellConfig init] */

void FUN_1038c08f0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapSlippyUpsellServices/SCMapShareBackUpsellConfigWrapper.swift",0x41,2,
                      0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038c0938);
  (*pcVar1)();
}



/* Entry: 1038c096c; end: 1038c09bf; -[SCMapShareBackUpsellConfig .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038c098c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038c0990) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c096c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fa9990 + 8))
  ;
  return;
}



/* Entry: 1038c09c0; end: 1038c09df;  */

void FUN_1038c09c0(void)

{
  func_0x000107c61168(&PTR_PTR_1128fbc70);
  return;
}



/* Entry: 1038c09e0; end: 1038c09ef; -[_TtC23SCMapStoryMediaServices23SCMapStoryMediaServices mapStoryMediaFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c09e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fa99d0));
  return;
}



/* Entry: 1038c09f0; end: 1038c0a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c09f0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa99d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038c0a3c; end: 1038c0a93; -[_TtC23SCMapStoryMediaServices23SCMapStoryMediaServices initWithMediaFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c0a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fa99d0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1038c0a94; end: 1038c0af3; -[_TtC23SCMapStoryMediaServices23SCMapStoryMediaServices init] */

void FUN_1038c0a94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapStoryMediaServices.SCMapStoryMediaServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038c0ac0);
  (*pcVar1)();
}


