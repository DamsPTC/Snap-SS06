/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103480484; end: 10348048f; -[SCLensCarouselLegacyLensDelegateConfigurationEntryPoint setCameraFeatureScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480484(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70ca0;
  func_0x000107c61428(param_1 + _DAT_112f70ca0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103480490; end: 10348049b; -[SCLensCarouselLegacyLensDelegateConfigurationEntryPoint lensCarouselScopeInfoProvidingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480490(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70ca8;
  func_0x000107c61428(param_1 + _DAT_112f70ca8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10348049c; end: 1034804a7; -[SCLensCarouselLegacyLensDelegateConfigurationEntryPoint setLensCarouselScopeInfoProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348049c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70ca8;
  func_0x000107c61428(param_1 + _DAT_112f70ca8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034804a8; end: 1034804b3; -[SCLensCarouselLegacyLensDelegateConfigurationEntryPoint lensCarouselOnCameraScopeControllingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034804a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70cb0;
  func_0x000107c61428(param_1 + _DAT_112f70cb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034804b4; end: 1034804f7;  */

void FUN_1034804b4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1034804f8; end: 103480503; -[SCLensCarouselLegacyLensDelegateConfigurationEntryPoint setLensCarouselOnCameraScopeControllingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034804f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70cb0;
  func_0x000107c61428(param_1 + _DAT_112f70cb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103480504; end: 103480557;  */

void FUN_103480504(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103480558; end: 1034806ef;  */

/* WARNING: Possible PIC construction at 0x00010348065c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010348066c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034806c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034806b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034806c8) */
/* WARNING: Removing unreachable block (ram,0x000103480670) */
/* WARNING: Removing unreachable block (ram,0x000103480660) */
/* WARNING: Removing unreachable block (ram,0x0001034806b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480558(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_58;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3f0d0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4af1c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4aebc();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        lVar2 = 0;
        FUN_103471c60();
        func_0x000107c613fc();
        *(undefined8 *)(lVar2 + 0x10) = 0;
        lVar3 = *(long *)(unaff_x20 + _DAT_113038b58);
        func_0x000107c5c734();
        func_0x000107c61180();
        lVar1 = unaff_x20;
        if (lVar3 != 0) {
          *(long *)(lVar2 + 0x10) = lVar3;
          func_0x000107c615f0();
          func_0x0001000d224c(&uStack_58);
          func_0x000107c55c74(lVar3);
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(uStack_58);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1034806f0; end: 103480717; -[SCLensCarouselLegacyLensDelegateConfigurationEntryPoint begin] */

void FUN_1034806f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103480558();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103480718; end: 10348075b; -[SCLensCarouselLegacyLensDelegateConfigurationEntryPoint end] */

void FUN_103480718(undefined8 param_1)

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



/* Entry: 10348075c; end: 1034809cb;  */

void FUN_10348075c(long param_1,long param_2,long param_3)

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
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffda) && (param_3 == -0x7ffffffef0f0d9d0)) ||
             (func_0x000107c605b8(0xd000000000000026,0x800000010f0f2630,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55c78();
          }
          else {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0f246f0)) &&
               (func_0x000107c605b8(0xd00000000000002c,0x800000010f0db910,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "SCLensCarouselIntegration/SCLensCarouselLegacyLensDelegateConfigurationEntryPoint.swift"
                                  ,0x57,2,0x33,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1034809cc);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55c5c();
          }
          goto LAB_1034807f0;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53004();
      goto LAB_1034807f0;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_1034807f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1034809cc; end: 103480a77; -[SCLensCarouselLegacyLensDelegateConfigurationEntryPoint setValue:forIvarName:] */

void FUN_1034809cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10348075c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103480a78; end: 103480b13; -[SCLensCarouselLegacyLensDelegateConfigurationEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480a78(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f70c98,0);
  func_0x000107c61614(param_1 + _DAT_112f70ca0,0);
  func_0x000107c61614(param_1 + _DAT_112f70ca8,0);
  func_0x000107c61614(param_1 + _DAT_112f70cb0,0);
  *(undefined8 *)(param_1 + _DAT_112f70cb8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103480b14; end: 103480b47;  */

void FUN_103480b14(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103480b48; end: 103480baf; -[SCLensCarouselLegacyLensDelegateConfigurationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480b48(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f70c98);
  func_0x000107c61610(param_1 + _DAT_112f70ca0);
  func_0x000107c61610(param_1 + _DAT_112f70ca8);
  func_0x000107c61610(param_1 + _DAT_112f70cb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f70cb8));
  return;
}



/* Entry: 103480bb0; end: 103480bcf;  */

void FUN_103480bb0(void)

{
  func_0x000107c61168(&PTR_PTR_1128dd1e0);
  return;
}



/* Entry: 103480bd0; end: 103480bdb; -[SCLensCarouselContextConfiguratorServiceProvider conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480bd0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70ce8;
  func_0x000107c61428(param_1 + _DAT_112f70ce8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103480bdc; end: 103480be7; -[SCLensCarouselContextConfiguratorServiceProvider setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70ce8;
  func_0x000107c61428(param_1 + _DAT_112f70ce8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103480be8; end: 103480bf3; -[SCLensCarouselContextConfiguratorServiceProvider cameraFeatureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480be8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70cf0;
  func_0x000107c61428(param_1 + _DAT_112f70cf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103480bf4; end: 103480bff; -[SCLensCarouselContextConfiguratorServiceProvider setCameraFeatureScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480bf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70cf0;
  func_0x000107c61428(param_1 + _DAT_112f70cf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103480c00; end: 103480c0b; -[SCLensCarouselContextConfiguratorServiceProvider cameraUIScopedLensCarouselLensApplicatorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480c00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70cf8;
  func_0x000107c61428(param_1 + _DAT_112f70cf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103480c0c; end: 103480c17; -[SCLensCarouselContextConfiguratorServiceProvider setCameraUIScopedLensCarouselLensApplicatorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480c0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70cf8;
  func_0x000107c61428(param_1 + _DAT_112f70cf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103480c18; end: 103480c23; -[SCLensCarouselContextConfiguratorServiceProvider cameraHardwareServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480c18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70d00;
  func_0x000107c61428(param_1 + _DAT_112f70d00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103480c24; end: 103480c2f; -[SCLensCarouselContextConfiguratorServiceProvider setCameraHardwareServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480c24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70d00;
  func_0x000107c61428(param_1 + _DAT_112f70d00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103480c30; end: 103480c3b; -[SCLensCarouselContextConfiguratorServiceProvider cameraUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480c30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70d08;
  func_0x000107c61428(param_1 + _DAT_112f70d08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103480c3c; end: 103480c47; -[SCLensCarouselContextConfiguratorServiceProvider setCameraUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480c3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70d08;
  func_0x000107c61428(param_1 + _DAT_112f70d08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103480c48; end: 103480c53; -[SCLensCarouselContextConfiguratorServiceProvider lensCameraPositionSwitcherServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480c48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70d10;
  func_0x000107c61428(param_1 + _DAT_112f70d10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103480c54; end: 103480c97;  */

void FUN_103480c54(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103480c98; end: 103480ca3; -[SCLensCarouselContextConfiguratorServiceProvider setLensCameraPositionSwitcherServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480c98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70d10;
  func_0x000107c61428(param_1 + _DAT_112f70d10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103480ca4; end: 103480cf7;  */

void FUN_103480ca4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103480cf8; end: 103480f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480cf8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  code *pcVar9;
  long unaff_x20;
  undefined8 uVar10;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f0d0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c3f298();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c3f0f8();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          lVar1 = lVar3;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c3f2a4();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            lVar1 = lVar4;
          }
          else {
            lVar6 = unaff_x20;
            func_0x000107c4ae3c();
            func_0x000107c61180();
            if (lVar6 != 0) {
              lVar7 = 0;
              func_0x000103470e78();
              func_0x000107c613fc();
              puVar8 = &UNK_11065ac50;
              func_0x000107c613fc(&UNK_11065ac50,0x30,7);
              *(long *)(puVar8 + 0x10) = lVar3;
              *(long *)(puVar8 + 0x18) = lVar4;
              *(long *)(puVar8 + 0x20) = lVar5;
              *(long *)(puVar8 + 0x28) = lVar6;
              func_0x0001000285a8(0x112f41da8,&UNK_10db8ef70);
              func_0x000107c613fc();
              func_0x000107c61174();
              func_0x000107c61174(lVar4);
              func_0x000107c61174(lVar5);
              func_0x000107c61174(lVar6);
              pcVar9 = FUN_103480f74;
              func_0x0001000bdd8c(FUN_103480f74,puVar8);
              *(code **)(lVar7 + 0x10) = pcVar9;
              uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f70d18);
              *(long *)(unaff_x20 + _DAT_112f70d18) = lVar7;
              func_0x000107c6157c(lVar7);
              func_0x000107c61574(uVar10);
              uVar10 = *(undefined8 *)(lVar7 + 0x10);
              func_0x000103f94e34(0);
              func_0x000107c610f8();
              func_0x000107c6157c(uVar10);
              func_0x000103f94d78();
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar5);
              func_0x000107c61170(lVar6);
              func_0x000107c61574(lVar7);
              return;
            }
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            func_0x000107c61170(lVar4);
            lVar1 = lVar5;
          }
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103480f74; end: 103480f7f;  */

/* WARNING: Possible PIC construction at 0x000103470de0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103470de4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480f74(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113038790) + _DAT_1130387c8);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113074f60);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_1130385c0);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_113038af8);
  lVar1 = 0;
  func_0x0001034790b4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  *(undefined8 *)(lVar2 + 0x18) = uVar4;
  *(undefined8 *)(lVar2 + 0x20) = uVar5;
  *(undefined8 *)(lVar2 + 0x28) = uVar6;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11065a700;
  *param_1 = lVar2;
  func_0x000107c6157c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar4);
  return;
}



/* Entry: 103480f80; end: 10348100b; -[SCLensCarouselContextConfiguratorServiceProvider provide] */

void FUN_103480f80(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_103480cf8();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "SCLensCarouselIntegration/SCLensCarouselContextConfiguratorServiceProvider.swift"
                      ,0x50,2,0x25,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10348100c);
  (*pcVar1)();
}



/* Entry: 10348100c; end: 10348103f; -[SCLensCarouselContextConfiguratorServiceProvider __safeProvide] */

void FUN_10348100c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103480cf8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103481040; end: 103481083; -[SCLensCarouselContextConfiguratorServiceProvider end] */

void FUN_103481040(undefined8 param_1)

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



/* Entry: 103481084; end: 1034813cb;  */

void FUN_103481084(long param_1,long param_2,long param_3)

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
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffd0) && (param_3 == -0x7ffffffef0f0da10)) ||
             (func_0x000107c605b8(0xd000000000000030,0x800000010f0f25f0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c530f8();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10ecf30)) ||
               (func_0x000107c605b8(0xd000000000000016,0x800000010ef130d0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c53024();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ecf90)) ||
                 (func_0x000107c605b8(0xd000000000000010,0x800000010ef13070,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c53104();
              }
              else {
                uVar2 = 0;
                if (((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0eacb30)) &&
                   (func_0x000107c605b8(0xd000000000000022,0x800000010f1534d0,param_2,param_3,0),
                   (uVar2 & 1) == 0)) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "SCLensCarouselIntegration/SCLensCarouselContextConfiguratorServiceProvider.swift"
                                      ,0x50,2,0x42,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034813cc);
                  (*pcVar1)();
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55c10();
              }
            }
          }
          goto LAB_103481118;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53004();
      goto LAB_103481118;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_103481118:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1034813cc; end: 103481477; -[SCLensCarouselContextConfiguratorServiceProvider setValue:forIvarName:] */

void FUN_1034813cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103481084(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103481478; end: 10348153b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103481478(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f70ce8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70cf0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70cf8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70d00,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70d08,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70d10,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f70d18) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10348153c; end: 10348155b; -[SCLensCarouselContextConfiguratorServiceProvider init] */

void FUN_10348153c(void)

{
  FUN_103481478();
  return;
}



/* Entry: 10348155c; end: 10348158f;  */

void FUN_10348155c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103481590; end: 103481617; -[SCLensCarouselContextConfiguratorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103481590(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f70ce8);
  func_0x000107c61610(param_1 + _DAT_112f70cf0);
  func_0x000107c61610(param_1 + _DAT_112f70cf8);
  func_0x000107c61610(param_1 + _DAT_112f70d00);
  func_0x000107c61610(param_1 + _DAT_112f70d08);
  func_0x000107c61610(param_1 + _DAT_112f70d10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f70d18));
  return;
}



/* Entry: 103481618; end: 103481637;  */

void FUN_103481618(void)

{
  func_0x000107c61168(&PTR_PTR_112f70d60);
  return;
}



/* Entry: 103481638; end: 103481643; -[SCLensCarouselViewModelCreatingServiceProvider conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103481638(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70de8;
  func_0x000107c61428(param_1 + _DAT_112f70de8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103481644; end: 10348164f; -[SCLensCarouselViewModelCreatingServiceProvider setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103481644(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70de8;
  func_0x000107c61428(param_1 + _DAT_112f70de8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103481650; end: 10348165b; -[SCLensCarouselViewModelCreatingServiceProvider cameraFeatureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103481650(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70df0;
  func_0x000107c61428(param_1 + _DAT_112f70df0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10348165c; end: 103481667; -[SCLensCarouselViewModelCreatingServiceProvider setCameraFeatureScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348165c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70df0;
  func_0x000107c61428(param_1 + _DAT_112f70df0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103481668; end: 103481673; -[SCLensCarouselViewModelCreatingServiceProvider lensCarouselPrivateServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103481668(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70df8;
  func_0x000107c61428(param_1 + _DAT_112f70df8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103481674; end: 10348167f; -[SCLensCarouselViewModelCreatingServiceProvider setLensCarouselPrivateServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103481674(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70df8;
  func_0x000107c61428(param_1 + _DAT_112f70df8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103481680; end: 10348168b; -[SCLensCarouselViewModelCreatingServiceProvider lensCarouselDataProviderControllingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103481680(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70e00;
  func_0x000107c61428(param_1 + _DAT_112f70e00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10348168c; end: 103481697; -[SCLensCarouselViewModelCreatingServiceProvider setLensCarouselDataProviderControllingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348168c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70e00;
  func_0x000107c61428(param_1 + _DAT_112f70e00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103481698; end: 1034816a3; -[SCLensCarouselViewModelCreatingServiceProvider scopedLensFeaturesVisibilityControllerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103481698(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70e08;
  func_0x000107c61428(param_1 + _DAT_112f70e08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034816a4; end: 1034816af; -[SCLensCarouselViewModelCreatingServiceProvider setScopedLensFeaturesVisibilityControllerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034816a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70e08;
  func_0x000107c61428(param_1 + _DAT_112f70e08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034816b0; end: 1034816bb; -[SCLensCarouselViewModelCreatingServiceProvider lensCarouselContextConfiguratorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034816b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70e10;
  func_0x000107c61428(param_1 + _DAT_112f70e10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034816bc; end: 1034816c7; -[SCLensCarouselViewModelCreatingServiceProvider setLensCarouselContextConfiguratorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034816bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70e10;
  func_0x000107c61428(param_1 + _DAT_112f70e10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034816c8; end: 1034816d3; -[SCLensCarouselViewModelCreatingServiceProvider lensCarouselOnCameraScopeControllingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034816c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70e18;
  func_0x000107c61428(param_1 + _DAT_112f70e18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034816d4; end: 103481717;  */

void FUN_1034816d4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103481718; end: 103481723; -[SCLensCarouselViewModelCreatingServiceProvider setLensCarouselOnCameraScopeControllingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103481718(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70e18;
  func_0x000107c61428(param_1 + _DAT_112f70e18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103481724; end: 103481777;  */

void FUN_103481724(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103481778; end: 103481aa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103481778(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_70;
  long lStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f0d0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4aef8();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4ae64();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          lVar1 = lVar3;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c519b0();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            lVar1 = lVar4;
          }
          else {
            lVar6 = unaff_x20;
            func_0x000107c4ae60();
            func_0x000107c61180();
            if (lVar6 == 0) {
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              lVar1 = lVar5;
            }
            else {
              lVar7 = unaff_x20;
              func_0x000107c4aebc();
              func_0x000107c61180();
              if (lVar7 != 0) {
                lVar8 = 0;
                FUN_103472b0c();
                func_0x000107c613fc();
                uVar14 = *(undefined8 *)(lVar5 + _DAT_113082920);
                uVar15 = *(undefined8 *)(lVar6 + _DAT_113038858);
                uVar13 = *(undefined8 *)(lVar7 + _DAT_113038b60);
                puVar9 = &UNK_11065ac78;
                func_0x000107c613fc(&UNK_11065ac78,0x38,7);
                *(long *)(puVar9 + 0x10) = lVar4;
                *(undefined8 *)(puVar9 + 0x18) = uVar14;
                *(undefined8 *)(puVar9 + 0x20) = uVar15;
                *(long *)(puVar9 + 0x28) = lVar3;
                *(undefined8 *)(puVar9 + 0x30) = uVar13;
                func_0x0001000285a8(0x112f420e8,&UNK_10db8f0b0);
                func_0x000107c613fc();
                func_0x000107c61174();
                func_0x000107c61174(lVar4);
                func_0x000107c61174(uVar14);
                func_0x000107c6157c(uVar15);
                func_0x000107c6157c(uVar13);
                pcVar10 = FUN_103481aa8;
                func_0x0001000bdd8c(FUN_103481aa8,puVar9);
                *(code **)(lVar8 + 0x10) = pcVar10;
                uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f70e20);
                *(long *)(unaff_x20 + _DAT_112f70e20) = lVar8;
                func_0x000107c6157c(lVar8);
                func_0x000107c61574(uVar13);
                uVar13 = *(undefined8 *)(lVar8 + 0x10);
                lVar11 = 0;
                FUN_103475eb8();
                lVar12 = lVar11;
                func_0x000107c610f8();
                *(undefined8 *)(lVar12 + _DAT_112f70160) = uVar13;
                puVar9 = PTR_s_init_1125d9248;
                lStack_70 = lVar12;
                lStack_68 = lVar11;
                func_0x000107c6157c(uVar13);
                func_0x000107c61154(&lStack_70,puVar9);
                func_0x000107c61574(lVar8);
                func_0x000107c61170(lVar1);
                func_0x000107c61170(lVar2);
                func_0x000107c61170(lVar3);
                func_0x000107c61170(lVar4);
                func_0x000107c61170(lVar5);
                func_0x000107c61170(lVar6);
                func_0x000107c61170(lVar7);
                return;
              }
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar5);
              lVar1 = lVar6;
            }
          }
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103481aa8; end: 103481ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103481aa8(long *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar8 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar1 = &UNK_11065a178;
  func_0x000107c613fc(&UNK_11065a178,0x18,7,uVar5,*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  func_0x0001000285a8(0x112f421c0,&UNK_10dbcc740);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  pcVar2 = FUN_103472b88;
  func_0x0001000bdd8c(FUN_103472b88,puVar1);
  func_0x0001000285a8(0x112f55828,&UNK_10dbcae70);
  uVar3 = *(undefined8 *)(lVar8 + _DAT_1130828e8);
  func_0x0001000bda74();
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar4 = uStack_60;
  (**(code **)(lStack_58 + 8))(uStack_60,lStack_58);
  func_0x000107c4af50();
  func_0x000107c61180();
  func_0x0001000d224c(auStack_a0);
  func_0x0001000a8868(auStack_a0,uStack_88);
  uVar6 = uStack_88;
  (**(code **)(lStack_80 + 8))(uStack_88,lStack_80);
  lVar7 = 0;
  FUN_103476260();
  lVar8 = lVar7;
  func_0x000107c613fc();
  *(code **)(lVar8 + 0x10) = pcVar2;
  *(undefined8 *)(lVar8 + 0x18) = uVar3;
  *(undefined8 *)(lVar8 + 0x28) = uVar6;
  *(undefined8 *)(lVar8 + 0x30) = uVar5;
  *(undefined8 *)(lVar8 + 0x20) = uVar4;
  func_0x0001000834e4(auStack_a0);
  func_0x0001000834e4(auStack_78);
  param_1[3] = lVar7;
  param_1[4] = (long)&PTR_DAT_11065a420;
  *param_1 = lVar8;
  return;
}



/* Entry: 103481ab8; end: 103481b43; -[SCLensCarouselViewModelCreatingServiceProvider provide] */

void FUN_103481ab8(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_103481778();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "SCLensCarouselIntegration/SCLensCarouselViewModelCreatingServiceProvider.swift"
                      ,0x4e,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103481b44);
  (*pcVar1)();
}



/* Entry: 103481b44; end: 103481b77; -[SCLensCarouselViewModelCreatingServiceProvider __safeProvide] */

void FUN_103481b44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103481778();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103481b78; end: 103481bbb; -[SCLensCarouselViewModelCreatingServiceProvider end] */

void FUN_103481b78(undefined8 param_1)

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



/* Entry: 103481bbc; end: 103481f6f;  */

void FUN_103481bbc(long param_1,long param_2,long param_3)

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
          uVar2 = 0xd00000000000001b;
          if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef0f24760)) ||
             (func_0x000107c605b8(0xd00000000000001b,0x800000010f0db8a0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55c60();
          }
          else {
            uVar2 = 0xd00000000000002b;
            if (((param_2 == -0x2fffffffffffffd5) && (param_3 == -0x7ffffffef0ed9910)) ||
               (func_0x000107c605b8(0xd00000000000002b,0x800000010f1266f0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55c24();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffd2) && (param_3 == -0x7ffffffef0f0da40)) ||
                 (func_0x000107c605b8(0xd00000000000002e,0x800000010f0f25c0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c58c94();
              }
              else {
                uVar2 = 0xd000000000000027;
                if (((param_2 == -0x2fffffffffffffd9) && (param_3 == -0x7ffffffef0ed98e0)) ||
                   (func_0x000107c605b8(0xd000000000000027,0x800000010f126720,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c55c20();
                }
                else {
                  uVar2 = 0;
                  if (((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0f246f0)) &&
                     (func_0x000107c605b8(0xd00000000000002c,0x800000010f0db910,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "SCLensCarouselIntegration/SCLensCarouselViewModelCreatingServiceProvider.swift"
                                        ,0x4e,2,0x48,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x103481f70);
                    (*pcVar1)();
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c55c5c();
                }
              }
            }
          }
          goto LAB_103481c50;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53004();
      goto LAB_103481c50;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_103481c50:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103481f70; end: 10348201b; -[SCLensCarouselViewModelCreatingServiceProvider setValue:forIvarName:] */

void FUN_103481f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103481bbc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10348201c; end: 1034820f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348201c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f70de8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70df0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70df8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70e00,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70e08,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70e10,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70e18,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f70e20) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1034820f4; end: 103482113; -[SCLensCarouselViewModelCreatingServiceProvider init] */

void FUN_1034820f4(void)

{
  FUN_10348201c();
  return;
}



/* Entry: 103482114; end: 103482147;  */

void FUN_103482114(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103482148; end: 1034821df; -[SCLensCarouselViewModelCreatingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103482148(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f70de8);
  func_0x000107c61610(param_1 + _DAT_112f70df0);
  func_0x000107c61610(param_1 + _DAT_112f70df8);
  func_0x000107c61610(param_1 + _DAT_112f70e00);
  func_0x000107c61610(param_1 + _DAT_112f70e08);
  func_0x000107c61610(param_1 + _DAT_112f70e10);
  func_0x000107c61610(param_1 + _DAT_112f70e18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f70e20));
  return;
}



/* Entry: 1034821e0; end: 1034821ff;  */

void FUN_1034821e0(void)

{
  func_0x000107c61168(&PTR_PTR_112f70e68);
  return;
}



/* Entry: 103482200; end: 10348220b; -[SCLensCarouselCollectionControllerServiceProvider conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103482200(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70ef8;
  func_0x000107c61428(param_1 + _DAT_112f70ef8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10348220c; end: 103482217; -[SCLensCarouselCollectionControllerServiceProvider setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348220c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70ef8;
  func_0x000107c61428(param_1 + _DAT_112f70ef8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103482218; end: 103482223; -[SCLensCarouselCollectionControllerServiceProvider cameraFeatureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103482218(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70f00;
  func_0x000107c61428(param_1 + _DAT_112f70f00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103482224; end: 10348222f; -[SCLensCarouselCollectionControllerServiceProvider setCameraFeatureScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103482224(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70f00;
  func_0x000107c61428(param_1 + _DAT_112f70f00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103482230; end: 10348223b; -[SCLensCarouselCollectionControllerServiceProvider cameraLensesViewControllerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103482230(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70f08;
  func_0x000107c61428(param_1 + _DAT_112f70f08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10348223c; end: 103482247; -[SCLensCarouselCollectionControllerServiceProvider setCameraLensesViewControllerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348223c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70f08;
  func_0x000107c61428(param_1 + _DAT_112f70f08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103482248; end: 103482253; -[SCLensCarouselCollectionControllerServiceProvider lensCarouselCollectionControllerCreatingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103482248(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70f10;
  func_0x000107c61428(param_1 + _DAT_112f70f10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103482254; end: 103482297;  */

void FUN_103482254(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103482298; end: 1034822a3; -[SCLensCarouselCollectionControllerServiceProvider setLensCarouselCollectionControllerCreatingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103482298(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70f10;
  func_0x000107c61428(param_1 + _DAT_112f70f10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034822a4; end: 1034822f7;  */

void FUN_1034822a4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034822f8; end: 10348246b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034822f8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f0d0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c3f12c();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4ae50();
        func_0x000107c61180();
        if (lVar4 != 0) {
          lVar5 = 0;
          FUN_103470ba0();
          func_0x000107c613fc();
          *(long *)(lVar5 + 0x10) = lVar3;
          *(long *)(lVar5 + 0x18) = lVar4;
          uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f70f18);
          *(long *)(unaff_x20 + _DAT_112f70f18) = lVar5;
          func_0x000107c61174(lVar3);
          func_0x000107c61174(lVar4);
          func_0x000107c6157c(lVar5);
          func_0x000107c61574(uVar7);
          uVar7 = *(undefined8 *)(lVar5 + 0x10);
          FUN_103470924(uVar7,*(undefined8 *)(lVar5 + 0x18));
          uVar6 = 0;
          func_0x000103f9808c(0);
          func_0x000107c610f8();
          func_0x000103f97f78(uVar7,uVar6);
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar4);
          func_0x000107c61574(lVar5);
          return;
        }
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        lVar1 = lVar3;
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10348246c; end: 1034824f7; -[SCLensCarouselCollectionControllerServiceProvider provide] */

void FUN_10348246c(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_1034822f8();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "SCLensCarouselIntegration/SCLensCarouselCollectionControllerServiceProvider.swift"
                      ,0x51,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034824f8);
  (*pcVar1)();
}



/* Entry: 1034824f8; end: 10348252b; -[SCLensCarouselCollectionControllerServiceProvider __safeProvide] */

void FUN_1034824f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1034822f8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10348252c; end: 10348256f; -[SCLensCarouselCollectionControllerServiceProvider end] */

void FUN_10348252c(undefined8 param_1)

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



/* Entry: 103482570; end: 1034827df;  */

void FUN_103482570(long param_1,long param_2,long param_3)

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
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef0f24360)) ||
             (func_0x000107c605b8(0xd000000000000022,0x800000010f0dbca0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5303c();
          }
          else {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0eaca50)) &&
               (func_0x000107c605b8(0xd000000000000030,0x800000010f1535b0,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "SCLensCarouselIntegration/SCLensCarouselCollectionControllerServiceProvider.swift"
                                  ,0x51,2,0x3c,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1034827e0);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55c18();
          }
          goto LAB_103482604;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53004();
      goto LAB_103482604;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_103482604:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1034827e0; end: 10348288b; -[SCLensCarouselCollectionControllerServiceProvider setValue:forIvarName:] */

void FUN_1034827e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103482570(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10348288c; end: 103482927; -[SCLensCarouselCollectionControllerServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348288c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f70ef8,0);
  func_0x000107c61614(param_1 + _DAT_112f70f00,0);
  func_0x000107c61614(param_1 + _DAT_112f70f08,0);
  func_0x000107c61614(param_1 + _DAT_112f70f10,0);
  *(undefined8 *)(param_1 + _DAT_112f70f18) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103482928; end: 10348295b;  */

void FUN_103482928(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10348295c; end: 1034829c3; -[SCLensCarouselCollectionControllerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348295c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f70ef8);
  func_0x000107c61610(param_1 + _DAT_112f70f00);
  func_0x000107c61610(param_1 + _DAT_112f70f08);
  func_0x000107c61610(param_1 + _DAT_112f70f10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f70f18));
  return;
}



/* Entry: 1034829c4; end: 1034829e3;  */

void FUN_1034829c4(void)

{
  func_0x000107c61168(&PTR_PTR_112f70f60);
  return;
}



/* Entry: 1034829e4; end: 1034829ef; -[SCLensCarouselCameraPaginationEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034829e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70fd8;
  func_0x000107c61428(param_1 + _DAT_112f70fd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034829f0; end: 1034829fb; -[SCLensCarouselCameraPaginationEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034829f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70fd8;
  func_0x000107c61428(param_1 + _DAT_112f70fd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034829fc; end: 103482a07; -[SCLensCarouselCameraPaginationEntryPoint cameraFeatureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034829fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70fe0;
  func_0x000107c61428(param_1 + _DAT_112f70fe0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103482a08; end: 103482a13; -[SCLensCarouselCameraPaginationEntryPoint setCameraFeatureScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103482a08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70fe0;
  func_0x000107c61428(param_1 + _DAT_112f70fe0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103482a14; end: 103482a1f; -[SCLensCarouselCameraPaginationEntryPoint lensCarouselScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103482a14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70fe8;
  func_0x000107c61428(param_1 + _DAT_112f70fe8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103482a20; end: 103482a2b; -[SCLensCarouselCameraPaginationEntryPoint setLensCarouselScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103482a20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70fe8;
  func_0x000107c61428(param_1 + _DAT_112f70fe8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103482a2c; end: 103482a37; -[SCLensCarouselCameraPaginationEntryPoint lensCarouselDataProvidingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103482a2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70ff0;
  func_0x000107c61428(param_1 + _DAT_112f70ff0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103482a38; end: 103482a43; -[SCLensCarouselCameraPaginationEntryPoint setLensCarouselDataProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103482a38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70ff0;
  func_0x000107c61428(param_1 + _DAT_112f70ff0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103482a44; end: 103482a4f; -[SCLensCarouselCameraPaginationEntryPoint lensConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103482a44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70ff8;
  func_0x000107c61428(param_1 + _DAT_112f70ff8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103482a50; end: 103482a93;  */

void FUN_103482a50(long param_1,undefined8 param_2,long *param_3)

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


