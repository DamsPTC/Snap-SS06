/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038688e4; end: 10386890f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038688e4(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f9f678);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 103868910; end: 103868937; -[SCARBarModularCameraActivationEntryPoint begin] */

void FUN_103868910(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103867e64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103868938; end: 10386897b; -[SCARBarModularCameraActivationEntryPoint end] */

void FUN_103868938(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10386897c; end: 103868e67;  */

void FUN_10386897c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10da5c0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000012,0x800000010ef25a40,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef0e905e0)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000012,0x800000010f16fa20,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0xd00000000000002b;
              if (((param_2 == -0x2fffffffffffffd5) && (param_3 == -0x7ffffffef0f1a7c0)) ||
                 (func_0x000107c605b8(0xd00000000000002b,0x800000010f0e5840,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                FUN_103868e68(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c531f0();
              }
              else {
                uVar2 = 0x7265537261427261;
                if (((param_2 == 0x7265537261427261) && (param_3 == -0x12ffff8c9a9c968a)) ||
                   (func_0x000107c605b8(0x7265537261427261,0xed00007365636976,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  FUN_103868e68(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c52898();
                }
                else {
                  uVar2 = 0xd000000000000021;
                  if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef1039a00)) ||
                     (func_0x000107c605b8(0xd000000000000021,0x800000010efc6600,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    FUN_103868e68(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c55c90();
                  }
                  else {
                    uVar2 = 0xd000000000000019;
                    if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef0e90c60)) ||
                       (func_0x000107c605b8(0xd000000000000019,0x800000010f16f3a0,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      FUN_103868e68(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c55d24();
                    }
                    else {
                      uVar2 = 0xd000000000000015;
                      if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef103ce90)) ||
                         (func_0x000107c605b8(0xd000000000000015,0x800000010efc3170,param_2,param_3,
                                              0), (uVar2 & 1) != 0)) {
                        FUN_103868e68(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c59c30();
                      }
                      else {
                        uVar2 = 0;
                        if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef0f0db70))
                           || (func_0x000107c605b8(0xd00000000000001c,0x800000010f0f2490,param_2,
                                                   param_3,0), (uVar2 & 1) != 0)) {
                          FUN_103868e68(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c55ca0();
                        }
                        else {
                          if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10e0a30))
                          {
                            uVar2 = 0xd000000000000019;
                            func_0x000107c605b8(0xd000000000000019,0x800000010ef1f5d0,param_2,
                                                param_3,0);
                            if ((uVar2 & 1) == 0) {
                              func_0x000107c602fc(0x15);
                              func_0x000107c6142c(0xe000000000000000);
                              func_0x000107c5fb78(param_2,param_3);
                              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                  0x800000010ef0fc20,
                                                  "ARBarIntegration/SCARBarModularCameraActivationEntryPoint.swift"
                                                  ,0x3f,2,0x56,0);
                    /* WARNING: Does not return */
                              pcVar1 = (code *)SoftwareBreakpoint(1,0x103868e68);
                              (*pcVar1)();
                            }
                          }
                          FUN_103868e68(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c55cbc();
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_103868a10;
            }
          }
          FUN_103868e68(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c567b0();
          goto LAB_103868a10;
        }
      }
      FUN_103868e68(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53004();
      goto LAB_103868a10;
    }
  }
  FUN_103868e68(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_103868a10:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103868e68; end: 103868e8b;  */

long * FUN_103868e68(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 103868e8c; end: 103868f37; -[SCARBarModularCameraActivationEntryPoint setValue:forIvarName:] */

void FUN_103868e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10386897c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_103869188(auStack_50);
  return;
}



/* Entry: 103868f38; end: 10386904b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103868f38(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112fa3cf8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3d00,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3d08,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3d10,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3d18,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3d20,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3d28,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3d30,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3d38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3d40,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa3d48) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10386904c; end: 10386906b; -[SCARBarModularCameraActivationEntryPoint init] */

void FUN_10386904c(void)

{
  FUN_103868f38();
  return;
}



/* Entry: 10386906c; end: 10386909f;  */

void FUN_10386906c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038690a0; end: 103869167; -[SCARBarModularCameraActivationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038690a0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fa3cf8);
  func_0x000107c61610(param_1 + _DAT_112fa3d00);
  func_0x000107c61610(param_1 + _DAT_112fa3d08);
  func_0x000107c61610(param_1 + _DAT_112fa3d10);
  func_0x000107c61610(param_1 + _DAT_112fa3d18);
  func_0x000107c61610(param_1 + _DAT_112fa3d20);
  func_0x000107c61610(param_1 + _DAT_112fa3d28);
  func_0x000107c61610(param_1 + _DAT_112fa3d30);
  func_0x000107c61610(param_1 + _DAT_112fa3d38);
  func_0x000107c61610(param_1 + _DAT_112fa3d40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa3d48));
  return;
}



/* Entry: 103869168; end: 103869187;  */

void FUN_103869168(void)

{
  func_0x000107c61168(&PTR_PTR_1128f4408);
  return;
}



/* Entry: 103869188; end: 1038691a7;  */

void FUN_103869188(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010386919c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1038691a8; end: 1038691b3; -[SCARBarModularCameraMiniCameraFeaturesEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038691a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3d78;
  func_0x000107c61428(param_1 + _DAT_112fa3d78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038691b4; end: 1038691bf; -[SCARBarModularCameraMiniCameraFeaturesEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038691b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3d78;
  func_0x000107c61428(param_1 + _DAT_112fa3d78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038691c0; end: 1038691cb; -[SCARBarModularCameraMiniCameraFeaturesEntryPoint cameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038691c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3d80;
  func_0x000107c61428(param_1 + _DAT_112fa3d80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038691cc; end: 1038691d7; -[SCARBarModularCameraMiniCameraFeaturesEntryPoint setCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038691cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3d80;
  func_0x000107c61428(param_1 + _DAT_112fa3d80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038691d8; end: 1038691e3; -[SCARBarModularCameraMiniCameraFeaturesEntryPoint lensCarouselFeatureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038691d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3d88;
  func_0x000107c61428(param_1 + _DAT_112fa3d88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038691e4; end: 1038691ef; -[SCARBarModularCameraMiniCameraFeaturesEntryPoint setLensCarouselFeatureServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038691e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3d88;
  func_0x000107c61428(param_1 + _DAT_112fa3d88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038691f0; end: 1038691fb; -[SCARBarModularCameraMiniCameraFeaturesEntryPoint lensContentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038691f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3d90;
  func_0x000107c61428(param_1 + _DAT_112fa3d90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038691fc; end: 103869207; -[SCARBarModularCameraMiniCameraFeaturesEntryPoint setLensContentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038691fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3d90;
  func_0x000107c61428(param_1 + _DAT_112fa3d90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103869208; end: 103869213; -[SCARBarModularCameraMiniCameraFeaturesEntryPoint lensPerformerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869208(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3d98;
  func_0x000107c61428(param_1 + _DAT_112fa3d98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103869214; end: 10386921f; -[SCARBarModularCameraMiniCameraFeaturesEntryPoint setLensPerformerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869214(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3d98;
  func_0x000107c61428(param_1 + _DAT_112fa3d98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103869220; end: 10386922b; -[SCARBarModularCameraMiniCameraFeaturesEntryPoint lensExplorerNavigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869220(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3da0;
  func_0x000107c61428(param_1 + _DAT_112fa3da0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10386922c; end: 103869237; -[SCARBarModularCameraMiniCameraFeaturesEntryPoint setLensExplorerNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386922c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3da0;
  func_0x000107c61428(param_1 + _DAT_112fa3da0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103869238; end: 103869243; -[SCARBarModularCameraMiniCameraFeaturesEntryPoint lensConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869238(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3da8;
  func_0x000107c61428(param_1 + _DAT_112fa3da8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103869244; end: 103869287;  */

void FUN_103869244(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103869288; end: 103869293; -[SCARBarModularCameraMiniCameraFeaturesEntryPoint setLensConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869288(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3da8;
  func_0x000107c61428(param_1 + _DAT_112fa3da8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103869294; end: 1038692e7;  */

void FUN_103869294(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038692e8; end: 10386978f;  */

/* WARNING: Possible PIC construction at 0x00010386949c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103869548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103869584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103869604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103869614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103869624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103869634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386971c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386972c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386973c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386974c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038696d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038696e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038696f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038696b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038696c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103869690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103869670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103869660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103869674) */
/* WARNING: Removing unreachable block (ram,0x000103869694) */
/* WARNING: Removing unreachable block (ram,0x0001038696c4) */
/* WARNING: Removing unreachable block (ram,0x0001038696b4) */
/* WARNING: Removing unreachable block (ram,0x0001038696f4) */
/* WARNING: Removing unreachable block (ram,0x0001038696e4) */
/* WARNING: Removing unreachable block (ram,0x0001038696d4) */
/* WARNING: Removing unreachable block (ram,0x000103869750) */
/* WARNING: Removing unreachable block (ram,0x000103869740) */
/* WARNING: Removing unreachable block (ram,0x000103869730) */
/* WARNING: Removing unreachable block (ram,0x000103869638) */
/* WARNING: Removing unreachable block (ram,0x00010386975c) */
/* WARNING: Removing unreachable block (ram,0x000103869628) */
/* WARNING: Removing unreachable block (ram,0x000103869618) */
/* WARNING: Removing unreachable block (ram,0x000103869608) */
/* WARNING: Removing unreachable block (ram,0x000103869588) */
/* WARNING: Removing unreachable block (ram,0x00010386954c) */
/* WARNING: Removing unreachable block (ram,0x0001038694a0) */
/* WARNING: Removing unreachable block (ram,0x000103869664) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038692e8(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong unaff_x20;
  undefined1 auStack_88 [24];
  ulong uStack_70;
  long lStack_68;
  
  uVar5 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (uVar5 != 0) {
    uVar1 = unaff_x20;
    func_0x000107c3f1f4();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = unaff_x20;
      func_0x000107c4ae78();
      func_0x000107c61180();
      if (uVar2 != 0) {
        uVar3 = unaff_x20;
        func_0x000107c4afe4();
        func_0x000107c61180();
        if (uVar3 != 0) {
          uVar3 = unaff_x20;
          func_0x000107c4b2f4();
          func_0x000107c61180();
          if (uVar3 == 0) {
            func_0x000107c61170(uVar5);
            uVar5 = uVar1;
          }
          else {
            uVar3 = unaff_x20;
            func_0x000107c4b0d8();
            func_0x000107c61180();
            if (uVar3 == 0) {
              func_0x000107c61170(uVar5);
              uVar5 = uVar1;
            }
            else {
              func_0x000107c4afbc();
              func_0x000107c61180();
              if (unaff_x20 != 0) {
                lVar4 = 0;
                FUN_10383870c();
                func_0x000107c613fc();
                *(undefined8 *)(lVar4 + 0x10) = 0;
                func_0x0001000d224c(auStack_88);
                FUN_103869bb0(auStack_88,uStack_70);
                uVar5 = uStack_70;
                (**(code **)(lStack_68 + 0x40))(uStack_70,lStack_68);
                FUN_103869e64(auStack_88);
                if (((uVar5 & 1) == 0) || (uVar5 = *(ulong *)(uVar1 + _DAT_113071fd0), uVar5 == 0))
                {
                  func_0x000107c61170(unaff_x20);
                  uVar5 = uVar1;
                }
                else {
                  func_0x000107c61174();
                  uVar1 = uVar5;
                  func_0x000107c42548();
                  if ((uVar1 & 1) != 0) {
                    FUN_103842494();
                    func_0x000107c613fc();
                    func_0x0001000285a8(0x112ee3e90,&UNK_10db0ef60);
                    func_0x000107c4aeb4(uVar2);
                    func_0x000107c61180();
                    func_0x000100759c94();
                    uVar5 = uVar2;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 103869790; end: 1038697b7; -[SCARBarModularCameraMiniCameraFeaturesEntryPoint begin] */

void FUN_103869790(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1038692e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038697b8; end: 1038697fb; -[SCARBarModularCameraMiniCameraFeaturesEntryPoint end] */

void FUN_1038697b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038697fc; end: 103869baf;  */

void FUN_1038697fc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    FUN_103869bb0(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
  else {
    uVar2 = 0x63536172656d6163;
    if (((param_2 == 0x63536172656d6163) && (param_3 == -0x14ffffffff9a8f91)) ||
       (func_0x000107c605b8(0x63536172656d6163,0xeb0000000065706f,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_103869bb0(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53098();
    }
    else {
      uVar2 = 0xd00000000000001b;
      if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10e43b0)) ||
         (func_0x000107c605b8(0xd00000000000001b,0x800000010ef1bc50,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        FUN_103869bb0(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55c30();
      }
      else {
        if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10ecd30)) {
          uVar2 = 0xd000000000000013;
          func_0x000107c605b8(0xd000000000000013,0x800000010ef132d0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd000000000000015;
            if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10e0a10)) ||
               (func_0x000107c605b8(0xd000000000000015,0x800000010ef1f5f0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              FUN_103869bb0(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55df4();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef0fc1460)) ||
                 (func_0x000107c605b8(0xd00000000000001e,0x800000010f03eba0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                FUN_103869bb0(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55d1c();
              }
              else {
                uVar2 = 0xd000000000000019;
                if (((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10e0a30)) &&
                   (func_0x000107c605b8(0xd000000000000019,0x800000010ef1f5d0,param_2,param_3,0),
                   (uVar2 & 1) == 0)) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "ARBarIntegration/SCARBarModularCameraMiniCameraFeaturesEntryPoint.swift"
                                      ,0x47,2,0x4b,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x103869bb0);
                  (*pcVar1)();
                }
                FUN_103869bb0(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55cbc();
              }
            }
            goto LAB_10386988c;
          }
        }
        FUN_103869bb0(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55cc0();
      }
    }
  }
LAB_10386988c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103869bb0; end: 103869bd3;  */

long * FUN_103869bb0(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 103869bd4; end: 103869c7f; -[SCARBarModularCameraMiniCameraFeaturesEntryPoint setValue:forIvarName:] */

void FUN_103869bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1038697fc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_103869e64(auStack_50);
  return;
}



/* Entry: 103869c80; end: 103869d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869c80(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112fa3d78,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3d80,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3d88,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3d90,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3d98,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3da0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3da8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa3db0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103869d58; end: 103869d77; -[SCARBarModularCameraMiniCameraFeaturesEntryPoint init] */

void FUN_103869d58(void)

{
  FUN_103869c80();
  return;
}



/* Entry: 103869d78; end: 103869dab;  */

void FUN_103869d78(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103869dac; end: 103869e43; -[SCARBarModularCameraMiniCameraFeaturesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869dac(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fa3d78);
  func_0x000107c61610(param_1 + _DAT_112fa3d80);
  func_0x000107c61610(param_1 + _DAT_112fa3d88);
  func_0x000107c61610(param_1 + _DAT_112fa3d90);
  func_0x000107c61610(param_1 + _DAT_112fa3d98);
  func_0x000107c61610(param_1 + _DAT_112fa3da0);
  func_0x000107c61610(param_1 + _DAT_112fa3da8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa3db0));
  return;
}



/* Entry: 103869e44; end: 103869e63;  */

void FUN_103869e44(void)

{
  func_0x000107c61168(&PTR_PTR_1128f4510);
  return;
}



/* Entry: 103869e64; end: 103869e83;  */

void FUN_103869e64(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103869e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103869e84; end: 103869e8f; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869e84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3de0;
  func_0x000107c61428(param_1 + _DAT_112fa3de0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103869e90; end: 103869e9b; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869e90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3de0;
  func_0x000107c61428(param_1 + _DAT_112fa3de0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103869e9c; end: 103869ea7; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint cameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869e9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3de8;
  func_0x000107c61428(param_1 + _DAT_112fa3de8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103869ea8; end: 103869eb3; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint setCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869ea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3de8;
  func_0x000107c61428(param_1 + _DAT_112fa3de8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103869eb4; end: 103869ebf; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint arBarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869eb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3df0;
  func_0x000107c61428(param_1 + _DAT_112fa3df0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103869ec0; end: 103869ecb; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint setArBarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3df0;
  func_0x000107c61428(param_1 + _DAT_112fa3df0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103869ecc; end: 103869ed7; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint arBarIntegrationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869ecc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3df8;
  func_0x000107c61428(param_1 + _DAT_112fa3df8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103869ed8; end: 103869ee3; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint setArBarIntegrationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869ed8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3df8;
  func_0x000107c61428(param_1 + _DAT_112fa3df8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103869ee4; end: 103869eef; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint lensExplorerStudySettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869ee4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3e00;
  func_0x000107c61428(param_1 + _DAT_112fa3e00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103869ef0; end: 103869efb; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint setLensExplorerStudySettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869ef0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3e00;
  func_0x000107c61428(param_1 + _DAT_112fa3e00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103869efc; end: 103869f07; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint lensConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869efc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3e08;
  func_0x000107c61428(param_1 + _DAT_112fa3e08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103869f08; end: 103869f13; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint setLensConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869f08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3e08;
  func_0x000107c61428(param_1 + _DAT_112fa3e08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103869f14; end: 103869f1f; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint lensCarouselFeatureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869f14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3e10;
  func_0x000107c61428(param_1 + _DAT_112fa3e10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103869f20; end: 103869f2b; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint setLensCarouselFeatureServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869f20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3e10;
  func_0x000107c61428(param_1 + _DAT_112fa3e10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103869f2c; end: 103869f37; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint lensExplorerNavigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869f2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3e18;
  func_0x000107c61428(param_1 + _DAT_112fa3e18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103869f38; end: 103869f7b;  */

void FUN_103869f38(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103869f7c; end: 103869f87; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint setLensExplorerNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869f7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3e18;
  func_0x000107c61428(param_1 + _DAT_112fa3e18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103869f88; end: 103869fdb;  */

void FUN_103869f88(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103869fdc; end: 10386a4db;  */

/* WARNING: Possible PIC construction at 0x00010386a254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a47c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a48c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a49c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a3f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a39c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a3ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a3bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a36c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a37c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a38c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a34c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a35c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a32c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a30c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386a2fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010386a310) */
/* WARNING: Removing unreachable block (ram,0x00010386a330) */
/* WARNING: Removing unreachable block (ram,0x00010386a360) */
/* WARNING: Removing unreachable block (ram,0x00010386a350) */
/* WARNING: Removing unreachable block (ram,0x00010386a390) */
/* WARNING: Removing unreachable block (ram,0x00010386a380) */
/* WARNING: Removing unreachable block (ram,0x00010386a370) */
/* WARNING: Removing unreachable block (ram,0x00010386a3c0) */
/* WARNING: Removing unreachable block (ram,0x00010386a3b0) */
/* WARNING: Removing unreachable block (ram,0x00010386a3a0) */
/* WARNING: Removing unreachable block (ram,0x00010386a45c) */
/* WARNING: Removing unreachable block (ram,0x00010386a44c) */
/* WARNING: Removing unreachable block (ram,0x00010386a42c) */
/* WARNING: Removing unreachable block (ram,0x00010386a418) */
/* WARNING: Removing unreachable block (ram,0x00010386a404) */
/* WARNING: Removing unreachable block (ram,0x00010386a4a0) */
/* WARNING: Removing unreachable block (ram,0x00010386a490) */
/* WARNING: Removing unreachable block (ram,0x00010386a480) */
/* WARNING: Removing unreachable block (ram,0x00010386a470) */
/* WARNING: Removing unreachable block (ram,0x00010386a288) */
/* WARNING: Removing unreachable block (ram,0x00010386a2d8) */
/* WARNING: Removing unreachable block (ram,0x00010386a468) */
/* WARNING: Removing unreachable block (ram,0x00010386a278) */
/* WARNING: Removing unreachable block (ram,0x00010386a268) */
/* WARNING: Removing unreachable block (ram,0x00010386a258) */
/* WARNING: Removing unreachable block (ram,0x00010386a300) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103869fdc(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong unaff_x20;
  undefined1 auStack_88 [24];
  ulong uStack_70;
  long lStack_68;
  
  uVar6 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (uVar6 != 0) {
    uVar1 = unaff_x20;
    func_0x000107c3f1f4();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = unaff_x20;
      func_0x000107c3e0b0();
      func_0x000107c61180();
      if (uVar2 != 0) {
        uVar2 = unaff_x20;
        func_0x000107c3e090();
        func_0x000107c61180();
        if (uVar2 != 0) {
          uVar3 = unaff_x20;
          func_0x000107c4b104();
          func_0x000107c61180();
          if (uVar3 == 0) {
            func_0x000107c61170(uVar6);
            uVar6 = uVar1;
          }
          else {
            uVar3 = unaff_x20;
            func_0x000107c4afbc();
            func_0x000107c61180();
            if (uVar3 == 0) {
              func_0x000107c61170(uVar6);
              uVar6 = uVar1;
            }
            else {
              uVar4 = unaff_x20;
              func_0x000107c4ae78();
              func_0x000107c61180();
              if (uVar4 != 0) {
                func_0x000107c4b0d8();
                func_0x000107c61180();
                if (unaff_x20 != 0) {
                  lVar5 = 0;
                  FUN_103838a94();
                  func_0x000107c613fc();
                  *(undefined8 *)(lVar5 + 0x10) = 0;
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c3e0a8();
                  func_0x000107c61180();
                  func_0x000107c61174();
                  func_0x000107c4ae78();
                  func_0x000107c61180();
                  func_0x0001000d224c(auStack_88);
                  lVar5 = lStack_68;
                  uVar6 = uStack_70;
                  FUN_10386a974(auStack_88,uStack_70);
                  (**(code **)(lVar5 + 0x40))(uVar6,lVar5);
                  FUN_10386ac4c(auStack_88);
                  if (((uVar6 & 1) == 0) || (uVar6 = *(ulong *)(uVar1 + _DAT_113071fd0), uVar6 == 0)
                     ) {
                    func_0x000107c61170(uVar2);
                    uVar6 = uVar3;
                  }
                  else {
                    func_0x000107c61174();
                    uVar1 = uVar6;
                    func_0x000107c42548();
                    if ((uVar1 & 1) != 0) {
                      func_0x000107c4ac68();
                      func_0x000107c61180();
                      func_0x0001000d224c(auStack_88);
                      FUN_10386a974(auStack_88,uStack_70);
                      (**(code **)(lStack_68 + 0x40))(uStack_70,lStack_68);
                      FUN_103843fd8(0);
                      func_0x000107c613fc();
                      uVar6 = uVar2;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  return;
}



/* Entry: 10386a4dc; end: 10386a503; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint begin] */

void FUN_10386a4dc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103869fdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10386a504; end: 10386a547; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint end] */

void FUN_10386a504(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10386a548; end: 10386a973;  */

void FUN_10386a548(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0x63536172656d6163;
      if (((param_2 == 0x63536172656d6163) && (param_3 == -0x14ffffffff9a8f91)) ||
         (func_0x000107c605b8(0x63536172656d6163,0xeb0000000065706f,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        FUN_10386a974(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53098();
      }
      else {
        uVar2 = 0x7265537261427261;
        if (((param_2 == 0x7265537261427261) && (param_3 == -0x12ffff8c9a9c968a)) ||
           (func_0x000107c605b8(0x7265537261427261,0xed00007365636976,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          FUN_10386a974(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c52898();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef0e90cf0)) ||
             (func_0x000107c605b8(0xd000000000000018,0x800000010f16f310,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            FUN_10386a974(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c52888();
          }
          else {
            uVar2 = 0xd000000000000021;
            if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef10399b0)) ||
               (func_0x000107c605b8(0xd000000000000021,0x800000010efc6650,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              FUN_10386a974(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55d28();
            }
            else {
              uVar2 = 0xd000000000000019;
              if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10e0a30)) ||
                 (func_0x000107c605b8(0xd000000000000019,0x800000010ef1f5d0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                FUN_10386a974(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55cbc();
              }
              else {
                uVar2 = 0xd00000000000001b;
                if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10e43b0)) ||
                   (func_0x000107c605b8(0xd00000000000001b,0x800000010ef1bc50,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  FUN_10386a974(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c55c30();
                }
                else {
                  uVar2 = 0;
                  if (((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef0fc1460)) &&
                     (func_0x000107c605b8(0xd00000000000001e,0x800000010f03eba0,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "ARBarIntegration/SCARBarModularCameraPublicFeaturesIntegrationEntryPoint.swift"
                                        ,0x4e,2,0x4c,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x10386a974);
                    (*pcVar1)();
                  }
                  FUN_10386a974(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c55d1c();
                }
              }
            }
          }
        }
      }
      goto LAB_10386a5dc;
    }
  }
  FUN_10386a974(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_10386a5dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10386a974; end: 10386a997;  */

long * FUN_10386a974(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 10386a998; end: 10386aa43; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint setValue:forIvarName:] */

void FUN_10386a998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10386a548(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_10386ac4c(auStack_50);
  return;
}



/* Entry: 10386aa44; end: 10386ab2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386aa44(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112fa3de0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3de8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3df0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3df8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3e00,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3e08,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3e10,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3e18,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa3e20) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10386ab30; end: 10386ab4f; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint init] */

void FUN_10386ab30(void)

{
  FUN_10386aa44();
  return;
}



/* Entry: 10386ab50; end: 10386ab83;  */

void FUN_10386ab50(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10386ab84; end: 10386ac2b; -[SCARBarModularCameraPublicFeaturesIntegrationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386ab84(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fa3de0);
  func_0x000107c61610(param_1 + _DAT_112fa3de8);
  func_0x000107c61610(param_1 + _DAT_112fa3df0);
  func_0x000107c61610(param_1 + _DAT_112fa3df8);
  func_0x000107c61610(param_1 + _DAT_112fa3e00);
  func_0x000107c61610(param_1 + _DAT_112fa3e08);
  func_0x000107c61610(param_1 + _DAT_112fa3e10);
  func_0x000107c61610(param_1 + _DAT_112fa3e18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa3e20));
  return;
}



/* Entry: 10386ac2c; end: 10386ac4b;  */

void FUN_10386ac2c(void)

{
  func_0x000107c61168(&PTR_PTR_1128f4600);
  return;
}



/* Entry: 10386ac4c; end: 10386ac6b;  */

void FUN_10386ac4c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010386ac60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 10386ac6c; end: 10386ac77; -[SCARBarModularMiniCameraUIHandlingEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386ac6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3e50;
  func_0x000107c61428(param_1 + _DAT_112fa3e50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10386ac78; end: 10386ac83; -[SCARBarModularMiniCameraUIHandlingEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386ac78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3e50;
  func_0x000107c61428(param_1 + _DAT_112fa3e50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10386ac84; end: 10386ac8f; -[SCARBarModularMiniCameraUIHandlingEntryPoint cameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386ac84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3e58;
  func_0x000107c61428(param_1 + _DAT_112fa3e58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10386ac90; end: 10386ac9b; -[SCARBarModularMiniCameraUIHandlingEntryPoint setCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386ac90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3e58;
  func_0x000107c61428(param_1 + _DAT_112fa3e58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10386ac9c; end: 10386aca7; -[SCARBarModularMiniCameraUIHandlingEntryPoint cameraUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386ac9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3e60;
  func_0x000107c61428(param_1 + _DAT_112fa3e60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10386aca8; end: 10386acb3; -[SCARBarModularMiniCameraUIHandlingEntryPoint setCameraUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386aca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3e60;
  func_0x000107c61428(param_1 + _DAT_112fa3e60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10386acb4; end: 10386acbf; -[SCARBarModularMiniCameraUIHandlingEntryPoint miniCameraActivationStateServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386acb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3e68;
  func_0x000107c61428(param_1 + _DAT_112fa3e68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10386acc0; end: 10386accb; -[SCARBarModularMiniCameraUIHandlingEntryPoint setMiniCameraActivationStateServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386acc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3e68;
  func_0x000107c61428(param_1 + _DAT_112fa3e68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10386accc; end: 10386acd7; -[SCARBarModularMiniCameraUIHandlingEntryPoint arBarIntegrationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386accc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3e70;
  func_0x000107c61428(param_1 + _DAT_112fa3e70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10386acd8; end: 10386ace3; -[SCARBarModularMiniCameraUIHandlingEntryPoint setArBarIntegrationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386acd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3e70;
  func_0x000107c61428(param_1 + _DAT_112fa3e70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10386ace4; end: 10386acef; -[SCARBarModularMiniCameraUIHandlingEntryPoint lensPerformerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386ace4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3e78;
  func_0x000107c61428(param_1 + _DAT_112fa3e78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10386acf0; end: 10386acfb; -[SCARBarModularMiniCameraUIHandlingEntryPoint setLensPerformerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386acf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3e78;
  func_0x000107c61428(param_1 + _DAT_112fa3e78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10386acfc; end: 10386ad07; -[SCARBarModularMiniCameraUIHandlingEntryPoint lensConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386acfc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3e80;
  func_0x000107c61428(param_1 + _DAT_112fa3e80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10386ad08; end: 10386ad4b;  */

void FUN_10386ad08(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10386ad4c; end: 10386ad57; -[SCARBarModularMiniCameraUIHandlingEntryPoint setLensConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386ad4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3e80;
  func_0x000107c61428(param_1 + _DAT_112fa3e80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10386ad58; end: 10386adab;  */

void FUN_10386ad58(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10386adac; end: 10386b3ef;  */

/* WARNING: Possible PIC construction at 0x00010386b124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386b318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386b330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386b378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386b388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386b398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386b3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386b3b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386af84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386af94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386afa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386af64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386af74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386af44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386af24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386af14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010386af28) */
/* WARNING: Removing unreachable block (ram,0x00010386af48) */
/* WARNING: Removing unreachable block (ram,0x00010386af78) */
/* WARNING: Removing unreachable block (ram,0x00010386af68) */
/* WARNING: Removing unreachable block (ram,0x00010386afa8) */
/* WARNING: Removing unreachable block (ram,0x00010386af98) */
/* WARNING: Removing unreachable block (ram,0x00010386af88) */
/* WARNING: Removing unreachable block (ram,0x00010386b3bc) */
/* WARNING: Removing unreachable block (ram,0x00010386b3ac) */
/* WARNING: Removing unreachable block (ram,0x00010386b39c) */
/* WARNING: Removing unreachable block (ram,0x00010386b38c) */
/* WARNING: Removing unreachable block (ram,0x00010386b334) */
/* WARNING: Removing unreachable block (ram,0x00010386b31c) */
/* WARNING: Removing unreachable block (ram,0x00010386b128) */
/* WARNING: Removing unreachable block (ram,0x00010386af18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386adac(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  ulong uStack_78;
  long lStack_70;
  
  lVar5 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar5 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3f1f4();
  func_0x000107c61180();
  if (lVar2 == 0) goto code_r0x000107c61170;
  lVar3 = unaff_x20;
  func_0x000107c3f2a4();
  func_0x000107c61180();
  if (lVar3 == 0) goto code_r0x000107c61170;
  lVar3 = unaff_x20;
  func_0x000107c4cf58();
  func_0x000107c61180();
  if (lVar3 == 0) goto code_r0x000107c61170;
  lVar3 = unaff_x20;
  func_0x000107c3e090();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61170(lVar5);
    lVar5 = lVar2;
    goto code_r0x000107c61170;
  }
  lVar4 = unaff_x20;
  func_0x000107c4b2f4();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c61170(lVar5);
    lVar5 = lVar2;
    goto code_r0x000107c61170;
  }
  func_0x000107c4afbc();
  func_0x000107c61180();
  if (unaff_x20 == 0) goto code_r0x000107c61170;
  lVar5 = 0;
  FUN_10383a1e4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar6 = *(long *)(lVar3 + _DAT_112f9fbc8);
  func_0x000107c61174();
  func_0x0001000d224c(&puStack_c0);
  pcVar1 = pcStack_a0;
  puVar7 = puStack_a8;
  FUN_10386b848(&puStack_c0,puStack_a8);
  (**(code **)(pcVar1 + 0x40))(puVar7,pcVar1);
  if (((ulong)puVar7 & 1) == 0) {
    func_0x0001000d224c(auStack_90);
    FUN_10386b848(auStack_90,uStack_78);
    uVar8 = uStack_78;
    (**(code **)(lStack_70 + 0xf0))(uStack_78,lStack_70);
    FUN_10386bafc(auStack_90);
    FUN_10386bafc(&puStack_c0);
    if ((uVar8 & 1) != 0) goto LAB_10386b014;
  }
  else {
    FUN_10386bafc(&puStack_c0);
LAB_10386b014:
    lVar5 = *(long *)(lVar2 + _DAT_113071fd0);
    if (lVar5 != 0) {
      func_0x000107c61174();
      lVar2 = lVar5;
      func_0x000107c42548();
      if ((int)lVar2 != 0) {
        puVar7 = &UNK_11069ef68;
        func_0x000107c613fc(&UNK_11069ef68,0x18,7);
        *(long *)(puVar7 + 0x10) = lVar4;
        func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
        func_0x000107c613fc();
        func_0x000107c61174();
        func_0x0001000bdd8c(FUN_10386b3f0,puVar7);
        lVar5 = *(long *)(lVar6 + _DAT_112f9f6d8);
        pcStack_a0 = FUN_103839fe8;
        uStack_98 = 0;
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0x42000000;
        uStack_b0 = 0x1038272c8;
        puStack_a8 = &UNK_11069ef80;
        ppuVar9 = &puStack_c0;
        func_0x000107c60bc4(ppuVar9);
        func_0x000107c61174();
        func_0x000107c4c280();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar9);
      }
      goto code_r0x000107c61170;
    }
  }
  func_0x000107c61170(lVar3);
  lVar5 = unaff_x20;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 10386b3f0; end: 10386b423;  */

void FUN_10386b3f0(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  
  pcVar2 = *(char **)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = pcVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(pcVar2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = 
    "init(conditionalBeginIn:cameraScope:cameraUIServices:miniCameraActivationStateServices:arBarIntegrationServices:lensPerformerServices:lensConfigurationServices:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 10386b424; end: 10386b44b; -[SCARBarModularMiniCameraUIHandlingEntryPoint begin] */

void FUN_10386b424(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10386adac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10386b44c; end: 10386b48f; -[SCARBarModularMiniCameraUIHandlingEntryPoint end] */

void FUN_10386b44c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10386b490; end: 10386b847;  */

void FUN_10386b490(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if (param_2 != -0x2fffffffffffffee || param_3 != -0x7ffffffef10ef650) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0x63536172656d6163;
      if (((param_2 == 0x63536172656d6163) && (param_3 == -0x14ffffffff9a8f91)) ||
         (func_0x000107c605b8(0x63536172656d6163,0xeb0000000065706f,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        FUN_10386b848(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53098();
      }
      else {
        if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ecf90)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010ef13070,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd000000000000021;
            if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef0ed9390)) ||
               (func_0x000107c605b8(0xd000000000000021,0x800000010f126c70,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              FUN_10386b848(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c566d8();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef0e90cf0)) ||
                 (func_0x000107c605b8(0xd000000000000018,0x800000010f16f310,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                FUN_10386b848(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c52888();
              }
              else {
                uVar2 = 0xd000000000000015;
                if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10e0a10)) ||
                   (func_0x000107c605b8(0xd000000000000015,0x800000010ef1f5f0,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  FUN_10386b848(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c55df4();
                }
                else {
                  uVar2 = 0xd000000000000019;
                  if (((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10e0a30)) &&
                     (func_0x000107c605b8(0xd000000000000019,0x800000010ef1f5d0,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "ARBarIntegration/SCARBarModularMiniCameraUIHandlingEntryPoint.swift"
                                        ,0x43,2,0x43,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x10386b848);
                    (*pcVar1)();
                  }
                  FUN_10386b848(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c55cbc();
                }
              }
            }
            goto LAB_10386b520;
          }
        }
        FUN_10386b848(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53104();
      }
      goto LAB_10386b520;
    }
  }
  FUN_10386b848(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_10386b520:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10386b848; end: 10386b86b;  */

long * FUN_10386b848(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 10386b86c; end: 10386b917; -[SCARBarModularMiniCameraUIHandlingEntryPoint setValue:forIvarName:] */

void FUN_10386b86c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10386b490(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_10386bafc(auStack_50);
  return;
}



/* Entry: 10386b918; end: 10386b9ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386b918(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112fa3e50,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3e58,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3e60,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3e68,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3e70,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3e78,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3e80,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa3e88) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10386b9f0; end: 10386ba0f; -[SCARBarModularMiniCameraUIHandlingEntryPoint init] */

void FUN_10386b9f0(void)

{
  FUN_10386b918();
  return;
}



/* Entry: 10386ba10; end: 10386ba43;  */

void FUN_10386ba10(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10386ba44; end: 10386badb; -[SCARBarModularMiniCameraUIHandlingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386ba44(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fa3e50);
  func_0x000107c61610(param_1 + _DAT_112fa3e58);
  func_0x000107c61610(param_1 + _DAT_112fa3e60);
  func_0x000107c61610(param_1 + _DAT_112fa3e68);
  func_0x000107c61610(param_1 + _DAT_112fa3e70);
  func_0x000107c61610(param_1 + _DAT_112fa3e78);
  func_0x000107c61610(param_1 + _DAT_112fa3e80);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa3e88));
  return;
}



/* Entry: 10386badc; end: 10386bafb;  */

void FUN_10386badc(void)

{
  func_0x000107c61168(&PTR_PTR_1128f46f8);
  return;
}



/* Entry: 10386bafc; end: 10386bb1b;  */

void FUN_10386bafc(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010386bb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 10386bb1c; end: 10386bb27; -[SCARBarCallLEBrowserIntegrationEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386bb1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3eb8;
  func_0x000107c61428(param_1 + _DAT_112fa3eb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


