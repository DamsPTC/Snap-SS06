/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10442dfc4; end: 10442dfd7;  */

undefined1  [16] FUN_10442dfc4(void)

{
  return ZEXT816(0x11076d8a0);
}



/* Entry: 10442dfd8; end: 10442e0ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10442dfd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [8];
  
  puVar3 = auStack_70;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113078d80) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113078d88) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113078d90) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113078d98) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113078da0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113078da8) = param_6;
  lVar1 = _DAT_1138135f0;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  (**(code **)(lVar4 + 0x10))(unaff_x20 + lVar1,param_7,lVar2);
  *(undefined8 *)(unaff_x20 + _DAT_1138135f8) = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  (**(code **)(lVar4 + 8))(param_7,lVar2);
  return puVar3;
}



/* Entry: 10442e0f0; end: 10442e0ff; -[SCOperaSessionContext featureMajorName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10442e0f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078d80);
}



/* Entry: 10442e100; end: 10442e10f; -[SCOperaSessionContext viewSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10442e100(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078d88);
}



/* Entry: 10442e110; end: 10442e11f; -[SCOperaSessionContext playSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10442e110(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078d90);
}



/* Entry: 10442e120; end: 10442e12f; -[SCOperaSessionContext entryEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10442e120(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078d98);
}



/* Entry: 10442e130; end: 10442e13f; -[SCOperaSessionContext entryIntent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10442e130(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078da0);
}



/* Entry: 10442e140; end: 10442e14f; -[SCOperaSessionContext viewLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10442e140(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078da8);
}



/* Entry: 10442e150; end: 10442e1e7; -[SCOperaSessionContext intentDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442e150(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_1138135f0,lVar1);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10442e1e8; end: 10442e1f7; -[SCOperaSessionContext pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10442e1e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1138135f8);
}



/* Entry: 10442e1f8; end: 10442e30f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10442e1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  
  puVar3 = &stack0xffffffffffffff90;
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_113078d80) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113078d88) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113078d90) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113078d98) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113078da0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113078da8) = param_6;
  lVar1 = _DAT_1138135f0;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  (**(code **)(lVar4 + 0x10))(unaff_x20 + lVar1,param_7,lVar2);
  *(undefined8 *)(unaff_x20 + _DAT_1138135f8) = param_8;
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  (**(code **)(lVar4 + 8))(param_7,lVar2);
  return puVar3;
}



/* Entry: 10442e310; end: 10442e3d3; -[SCOperaSessionContext initWithFeatureMajorName:viewSource:playSource:entryEvent:entryIntent:viewLocation:intentDate:pageViewName:] */

void FUN_10442e310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_9);
  FUN_10442e1f8(param_3,param_4,param_5,param_6,param_7,param_8,
                &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_10);
  return;
}



/* Entry: 10442e3d4; end: 10442e403;  */

void FUN_10442e3d4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10442e404(param_1);
  return;
}



/* Entry: 10442e404; end: 10442e507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10442e404(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  puVar6 = &stack0xffffffffffffffb0;
  _swift_getObjectType();
  uVar1 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113078d80) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113078d88) = uVar1;
  uVar1 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113078d90) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_113078d98) = uVar1;
  uVar1 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_113078da0) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_113078da8) = uVar1;
  lVar4 = 0;
  func_0x000100371f48();
  lVar3 = _DAT_1138135f0;
  iVar2 = *(int *)(lVar4 + 0x28);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))(unaff_x20 + lVar3,(long)param_1 + (long)iVar2,lVar5);
  *(undefined8 *)(unaff_x20 + _DAT_1138135f8) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x2c));
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  FUN_10442e508(param_1);
  return puVar6;
}



/* Entry: 10442e508; end: 10442e543;  */

undefined8 FUN_10442e508(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100371f48();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10442e544; end: 10442e547; -[SCOperaSessionContext copyWithZone:] */

void FUN_10442e544(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10442e548; end: 10442e58f; -[SCOperaSessionContext description] */

void FUN_10442e548(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_10442e590();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10442e590; end: 10442e697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10442e590(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 *puVar10;
  
  lVar3 = 0;
  func_0x000100371f48();
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar2 = _DAT_1138135f0;
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar5);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113078d88);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113078d90);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_113078d98);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_113078da0);
  *puVar10 = *(undefined8 *)(unaff_x20 + _DAT_113078d80);
  *(undefined8 *)(&stack0xffffffffffffffc8 + lVar5) = uVar6;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113078da8);
  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = uVar7;
  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar5) = uVar8;
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar5) = uVar9;
  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar5) = uVar6;
  iVar1 = *(int *)(lVar4 + 0x28);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))
            ((undefined1 *)((long)puVar10 + (long)iVar1),unaff_x20 + lVar2,lVar5);
  *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar3 + 0x2c)) =
       *(undefined8 *)(unaff_x20 + _DAT_1138135f8);
  FUN_10442e508(puVar10);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 10442e698; end: 10442e713; -[SCOperaSessionContext init] */

void FUN_10442e698(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCOperaSessionScope/SCOperaSessionContextWrapper.swift",0x36,2,0x4c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10442e6e0);
  (*pcVar1)();
}



/* Entry: 10442e714; end: 10442e74f; -[SCOperaSessionContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442e714(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_1138135f0;
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x00010442e74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 10442e750; end: 10442e757;  */

void FUN_10442e750(void)

{
  if (lRam0000000113078dd8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e805f34);
  return;
}



/* Entry: 10442e758; end: 10442e78f;  */

void FUN_10442e758(undefined8 param_1)

{
  if (lRam0000000113078dd8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e805f34);
  return;
}



/* Entry: 10442e790; end: 10442e813;  */

void FUN_10442e790(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar2 = 0x13f;
  puStack_60 = puVar1;
  puStack_58 = puVar1;
  puStack_50 = puVar1;
  puStack_48 = puVar1;
  puStack_40 = puVar1;
  puStack_38 = puVar1;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar2 + -8) + 0x40;
    puStack_28 = puVar1;
    _swift_updateClassMetadata2(param_1,0x100,8,&puStack_60,param_1 + 0x50);
  }
  return;
}



/* Entry: 10442e814; end: 10442e827;  */

bool FUN_10442e814(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10442e828; end: 10442e8d3;  */

void FUN_10442e828(void)

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



/* Entry: 10442e8d4; end: 10442e8fb;  */

void FUN_10442e8d4(ulong *param_1,ulong *param_2)

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



/* Entry: 10442e8fc; end: 10442e90b; -[SCOperaActionBarContentConfiguration backgroundStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10442e8fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078de8);
}



/* Entry: 10442e90c; end: 10442e957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442e90c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113078de8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10442e958; end: 10442e977;  */

void FUN_10442e958(void)

{
  _objc_opt_self(&PTR_PTR_1129b2a80);
  return;
}



/* Entry: 10442e978; end: 10442e9bf; -[SCOperaActionBarContentConfiguration initWithBackgroundStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442e978(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_113078de8) = param_3;
  lVar1 = param_1;
  FUN_10442e958();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10442e9c0; end: 10442ea1b; -[SCOperaActionBarContentConfiguration init] */

void FUN_10442e9c0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("OperaAPIDefines.OperaActionBarContentConfiguration",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10442e9ec);
  (*pcVar1)();
}



/* Entry: 10442ea1c; end: 10442ea1f;  */

void FUN_10442ea1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113078df0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfd6a0;
  _swift_getWitnessTable(&UNK_10dcfd6a0,&UNK_11076d970);
  puRam0000000113078df0 = puVar1;
  return;
}



/* Entry: 10442ea20; end: 10442ea5f;  */

void FUN_10442ea20(void)

{
  undefined *puVar1;
  
  if (puRam0000000113078df0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfd6a0;
  _swift_getWitnessTable(&UNK_10dcfd6a0,&UNK_11076d970);
  puRam0000000113078df0 = puVar1;
  return;
}



/* Entry: 10442ea60; end: 10442ea87;  */

undefined1  [16] FUN_10442ea60(void)

{
  return ZEXT816(0x11076d970);
}



/* Entry: 10442ea88; end: 10442eac7;  */

void FUN_10442ea88(void)

{
  undefined *puVar1;
  
  if (puRam0000000113078e20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfd7b0;
  _swift_getWitnessTable(&UNK_10dcfd7b0,&UNK_11076d9e8);
  puRam0000000113078e20 = puVar1;
  return;
}



/* Entry: 10442eac8; end: 10442eb73;  */

void FUN_10442eac8(void)

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



/* Entry: 10442eb74; end: 10442ebbf;  */

void FUN_10442eb74(ulong *param_1,ulong *param_2)

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



/* Entry: 10442ebc0; end: 10442ec97;  */

void FUN_10442ebc0(void)

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



/* Entry: 10442ec98; end: 10442ecb7;  */

void FUN_10442ec98(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10442ecb8; end: 10442ecf7;  */

void FUN_10442ecb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113078e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfd870;
  _swift_getWitnessTable(&UNK_10dcfd870,&UNK_11076da60);
  puRam0000000113078e28 = puVar1;
  return;
}



/* Entry: 10442ecf8; end: 10442ed07;  */

undefined1  [16] FUN_10442ecf8(void)

{
  return ZEXT816(0x11076da60);
}



/* Entry: 10442ed08; end: 10442f17b;  */

long FUN_10442ed08(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10442f17c; end: 10442f1a7; +[SCOperaPropertyUpdateKeys horizontalScrollingPercentage] */

void FUN_10442f17c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002f,0x800000010f1fdb30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f1a8; end: 10442f1d3; +[SCOperaPropertyUpdateKeys timerValue] */

void FUN_10442f1a8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1fdb60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f1d4; end: 10442f1ff; +[SCOperaPropertyUpdateKeys timerVisibility] */

void FUN_10442f1d4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1fdb80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f200; end: 10442f22b; +[SCOperaPropertyUpdateKeys timerPause] */

void FUN_10442f200(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1fdbb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f22c; end: 10442f257; +[SCOperaPropertyUpdateKeys cardYOffset] */

void FUN_10442f22c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1fdbd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f258; end: 10442f283; +[SCOperaPropertyUpdateKeys chromeVisibility] */

void FUN_10442f258(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f1fdbf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f284; end: 10442f2af; +[SCOperaPropertyUpdateKeys showActionMenuButtonVisibility] */

void FUN_10442f284(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000032,0x800000010f1fdc20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f2b0; end: 10442f2db; +[SCOperaPropertyUpdateKeys showActionMenuButtonVisibilityFadeDuration] */

void FUN_10442f2b0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000040,0x800000010f1fdc60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f2dc; end: 10442f307; +[SCOperaPropertyUpdateKeys showActionMenuButtonIsVisible] */

void FUN_10442f2dc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000032,0x800000010f1fdcb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f308; end: 10442f333; +[SCOperaPropertyUpdateKeys showSubscribeButtonVisibility] */

void FUN_10442f308(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000030,0x800000010f1fdcf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f334; end: 10442f35f; +[SCOperaPropertyUpdateKeys showSubscribeButtonVisibilityFadeDuration] */

void FUN_10442f334(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000003d,0x800000010f1fdd30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f360; end: 10442f38b; +[SCOperaPropertyUpdateKeys showSubscribeButtonIsVisible] */

void FUN_10442f360(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000030,0x800000010f1fdd70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f38c; end: 10442f397;  */

undefined * FUN_10442f38c(void)

{
  return &UNK_11076dbe0;
}



/* Entry: 10442f398; end: 10442f3c3; +[SCOperaPropertyUpdateKeys showFanPassSubscribeButtonVisibility] */

void FUN_10442f398(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000039,0x800000010f1fddb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f3c4; end: 10442f3ef; +[SCOperaPropertyUpdateKeys showFanPassSubscribeButtonVisibilityFadeDuration] */

void FUN_10442f3c4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000047,0x800000010f1fddf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f3f0; end: 10442f41b; +[SCOperaPropertyUpdateKeys showFanPassSubscribeButtonIsVisible] */

void FUN_10442f3f0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000039,0x800000010f1fde40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f41c; end: 10442f447; +[SCOperaPropertyUpdateKeys showOptInDoorbellVisibility] */

void FUN_10442f41c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002f,0x800000010f1fde80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f448; end: 10442f473; +[SCOperaPropertyUpdateKeys showOptInDoorbellVisibilityFadeDuration] */

void FUN_10442f448(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000003d,0x800000010f1fdeb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f474; end: 10442f49f; +[SCOperaPropertyUpdateKeys showOptInDoorbellIsVisible] */

void FUN_10442f474(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002f,0x800000010f1fdef0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f4a0; end: 10442f4ab;  */

undefined * FUN_10442f4a0(void)

{
  return &UNK_11076dbf0;
}



/* Entry: 10442f4ac; end: 10442f4d7; +[SCOperaPropertyUpdateKeys arrowVisibilityFade] */

void FUN_10442f4ac(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1fdf20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f4d8; end: 10442f503; +[SCOperaPropertyUpdateKeys arrowVisibilitySuppressed] */

void FUN_10442f4d8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010f1fdf50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f504; end: 10442f52f; +[SCOperaPropertyUpdateKeys textVisibilityFade] */

void FUN_10442f504(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f1fdf80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f530; end: 10442f55b; +[SCOperaPropertyUpdateKeys textVisibilityFadeDelay] */

void FUN_10442f530(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f1fdfb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f55c; end: 10442f587; +[SCOperaPropertyUpdateKeys leftTapEnabled] */

void FUN_10442f55c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1fdfe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f588; end: 10442f5b3; +[SCOperaPropertyUpdateKeys longPressEnabled] */

void FUN_10442f588(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f1fe010);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f5b4; end: 10442f5df; +[SCOperaPropertyUpdateKeys contextMenuEnabled] */

void FUN_10442f5b4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f1fe040);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f5e0; end: 10442f5eb;  */

undefined * FUN_10442f5e0(void)

{
  return &UNK_11076dc00;
}



/* Entry: 10442f5ec; end: 10442f617; +[SCOperaPropertyUpdateKeys mediaLoop] */

void FUN_10442f5ec(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1fe070);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f618; end: 10442f643; +[SCOperaPropertyUpdateKeys chromeHeaderAlpha] */

void FUN_10442f618(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1fe090);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f644; end: 10442f66f; +[SCOperaPropertyUpdateKeys seekable] */

void FUN_10442f644(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1fe0c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f670; end: 10442f69b; +[SCOperaPropertyUpdateKeys paginationEnabled] */

void FUN_10442f670(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f1fe0e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f69c; end: 10442f6a7;  */

undefined * FUN_10442f69c(void)

{
  return &UNK_11076dc10;
}



/* Entry: 10442f6a8; end: 10442f6d3; +[SCOperaPropertyUpdateKeys fadeInMediaVolume] */

void FUN_10442f6a8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f1fe110);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f6d4; end: 10442f6df;  */

undefined * FUN_10442f6d4(void)

{
  return &UNK_11076dc20;
}



/* Entry: 10442f6e0; end: 10442f70b; +[SCOperaPropertyUpdateKeys fadeOutMediaVolume] */

void FUN_10442f6e0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1fe140);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f70c; end: 10442f737; +[SCOperaPropertyUpdateKeys touchPoint] */

void FUN_10442f70c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1fe170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f738; end: 10442f763; +[SCOperaPropertyUpdateKeys viewContainingTouchPoint] */

void FUN_10442f738(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010f1fe190);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f764; end: 10442f78f; +[SCOperaPropertyUpdateKeys isFullScreenView] */

void FUN_10442f764(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1fe1c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f790; end: 10442f7bb; +[SCOperaPropertyUpdateKeys webViewURL] */

void FUN_10442f790(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1fe1f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f7bc; end: 10442f7e7; +[SCOperaPropertyUpdateKeys actionMenuURL] */

void FUN_10442f7bc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1fe210);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f7e8; end: 10442f813; +[SCOperaPropertyUpdateKeys lastInteractiveItemIndex] */

void FUN_10442f7e8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010f1fe230);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f814; end: 10442f83f; +[SCOperaPropertyUpdateKeys attachmentSwipeToExitAngle] */

void FUN_10442f814(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002e,0x800000010f1fe260);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f840; end: 10442f86b; +[SCOperaPropertyUpdateKeys attachmentSwipeToExitVerticalTranslation] */

void FUN_10442f840(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000003d,0x800000010f1fe290);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f86c; end: 10442f897; +[SCOperaPropertyUpdateKeys attachmentAnchorPoint] */

void FUN_10442f86c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000027,0x800000010f1fe2d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f898; end: 10442f8c3; +[SCOperaPropertyUpdateKeys previewToolbarVisibilityFade] */

void FUN_10442f898(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002f,0x800000010f1fe300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f8c4; end: 10442f8ef; +[SCOperaPropertyUpdateKeys viewerIsDismissing] */

void FUN_10442f8c4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f1fe330);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f8f0; end: 10442f91b; +[SCOperaPropertyUpdateKeys chromeAndActionMenuFadeOut] */

void FUN_10442f8f0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002f,0x800000010f1fe360);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f91c; end: 10442f947; +[SCOperaPropertyUpdateKeys interactionBoomboxButtonFadeIn] */

void FUN_10442f91c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000032,0x800000010f1fe390);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f948; end: 10442f953;  */

undefined * FUN_10442f948(void)

{
  return &UNK_11076dc30;
}



/* Entry: 10442f954; end: 10442f97f; +[SCOperaPropertyUpdateKeys velocity] */

void FUN_10442f954(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1fe3d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f980; end: 10442f98b;  */

undefined * FUN_10442f980(void)

{
  return &UNK_11076dc40;
}



/* Entry: 10442f98c; end: 10442f9b7; +[SCOperaPropertyUpdateKeys isProgrammaticScrolling] */

void FUN_10442f98c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f1fe3f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f9b8; end: 10442f9e3; +[SCOperaPropertyUpdateKeys rewindVideo] */

void FUN_10442f9b8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1fe420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442f9e4; end: 10442fa0f; +[SCOperaPropertyUpdateKeys rewindVideoFromTimestamp] */

void FUN_10442f9e4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010f1fe440);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442fa10; end: 10442fa1b;  */

undefined * FUN_10442fa10(void)

{
  return &UNK_11076dc50;
}



/* Entry: 10442fa1c; end: 10442fa47; +[SCOperaPropertyUpdateKeys seekToTimeInMS] */

void FUN_10442fa1c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f1fe470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442fa48; end: 10442fa73; +[SCOperaPropertyUpdateKeys seekToTimeReason] */

void FUN_10442fa48(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1fe4a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


