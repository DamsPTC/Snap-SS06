/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b41904; end: 102b41937; -[SCLensActionBarEntryPoint end] */

void FUN_102b41904(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b41874();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b41938; end: 102b41dbf;  */

void FUN_102b41938(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x000102b4209c(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
  else {
    uVar2 = 0x49556172656d6163;
    if (((param_2 == 0x49556172656d6163) && (param_3 == -0x12ffff9a8f909cad)) ||
       (func_0x000107c605b8(0x49556172656d6163,0xed000065706f6353,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x000102b4209c(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c530ec();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ecf90)) ||
         (func_0x000107c605b8(0xd000000000000010,0x800000010ef13070,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x000102b4209c(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53104();
      }
      else {
        if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10e0a10)) {
          uVar2 = 0xd000000000000015;
          func_0x000107c605b8(0xd000000000000015,0x800000010ef1f5f0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef0f0dc60)) ||
               (func_0x000107c605b8(0xd000000000000016,0x800000010f0f23a0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x000102b4209c(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55d94();
            }
            else {
              uVar2 = 0xd000000000000019;
              if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10e0a30)) ||
                 (func_0x000107c605b8(0xd000000000000019,0x800000010ef1f5d0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x000102b4209c(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55cbc();
              }
              else {
                uVar2 = 0xd000000000000021;
                if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef1039a00)) ||
                   (func_0x000107c605b8(0xd000000000000021,0x800000010efc6600,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x000102b4209c(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c55c90();
                }
                else {
                  if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10ecd50)) {
                    uVar2 = 0xd000000000000015;
                    func_0x000107c605b8(0xd000000000000015,0x800000010ef132b0,param_2,param_3,0);
                    if ((uVar2 & 1) == 0) {
                      uVar2 = 0xd00000000000001f;
                      if (((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f0dc40)) &&
                         (func_0x000107c605b8(0xd00000000000001f,0x800000010f0f23c0,param_2,param_3,
                                              0), (uVar2 & 1) == 0)) {
                        func_0x000107c602fc(0x15);
                        func_0x000107c6142c(0xe000000000000000);
                        func_0x000107c5fb78(param_2,param_3);
                        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                            0x800000010ef0fc20,
                                            "LensCarouselFeaturesWorkflows/SCLensActionBarEntryPoint.swift"
                                            ,0x3d,2,0x4c,0);
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b41dc0);
                        (*pcVar1)();
                      }
                      func_0x000102b4209c(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c55bd0();
                      goto LAB_102b419c8;
                    }
                  }
                  func_0x000102b4209c(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c55f2c();
                }
              }
            }
            goto LAB_102b419c8;
          }
        }
        func_0x000102b4209c(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55df4();
      }
    }
  }
LAB_102b419c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102b41dc0; end: 102b41e6b; -[SCLensActionBarEntryPoint setValue:forIvarName:] */

void FUN_102b41dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b41938(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_102b420e0(auStack_50);
  return;
}



/* Entry: 102b41e6c; end: 102b41f63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b41e6c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112ef5fc0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef5fc8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef5fd0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef5fd8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef5fe0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef5fe8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef5ff0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef5ff8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ef6000) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6008) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b41f64; end: 102b41f83; -[SCLensActionBarEntryPoint init] */

void FUN_102b41f64(void)

{
  FUN_102b41e6c();
  return;
}



/* Entry: 102b41f84; end: 102b41fb7;  */

void FUN_102b41f84(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b41fb8; end: 102b4206f; -[SCLensActionBarEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b41fb8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef5fc0);
  func_0x000107c61610(param_1 + _DAT_112ef5fc8);
  func_0x000107c61610(param_1 + _DAT_112ef5fd0);
  func_0x000107c61610(param_1 + _DAT_112ef5fd8);
  func_0x000107c61610(param_1 + _DAT_112ef5fe0);
  func_0x000107c61610(param_1 + _DAT_112ef5fe8);
  func_0x000107c61610(param_1 + _DAT_112ef5ff0);
  func_0x000107c61610(param_1 + _DAT_112ef5ff8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef6000));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef6008));
  return;
}



/* Entry: 102b42070; end: 102b420bf;  */

void FUN_102b42070(long param_1,long param_2)

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



/* Entry: 102b420c0; end: 102b420df;  */

void FUN_102b420c0(void)

{
  func_0x000107c61168(&PTR_PTR_11288cb90);
  return;
}



/* Entry: 102b420e0; end: 102b42107;  */

void FUN_102b420e0(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000102b420f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 102b42108; end: 102b42113; -[SCLensActionBarLensesFeaturesPluginEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42108(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6038;
  func_0x000107c61428(param_1 + _DAT_112ef6038,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b42114; end: 102b4211f; -[SCLensActionBarLensesFeaturesPluginEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42114(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6038;
  func_0x000107c61428(param_1 + _DAT_112ef6038,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b42120; end: 102b4212b; -[SCLensActionBarLensesFeaturesPluginEntryPoint cameraFeatureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42120(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6040;
  func_0x000107c61428(param_1 + _DAT_112ef6040,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b4212c; end: 102b42137; -[SCLensActionBarLensesFeaturesPluginEntryPoint setCameraFeatureScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b4212c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6040;
  func_0x000107c61428(param_1 + _DAT_112ef6040,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b42138; end: 102b42143; -[SCLensActionBarLensesFeaturesPluginEntryPoint cameraUIScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42138(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6048;
  func_0x000107c61428(param_1 + _DAT_112ef6048,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b42144; end: 102b4214f; -[SCLensActionBarLensesFeaturesPluginEntryPoint setCameraUIScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42144(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6048;
  func_0x000107c61428(param_1 + _DAT_112ef6048,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b42150; end: 102b4215b; -[SCLensActionBarLensesFeaturesPluginEntryPoint lensDeeplinkSendToControllingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42150(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6050;
  func_0x000107c61428(param_1 + _DAT_112ef6050,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b4215c; end: 102b42167; -[SCLensActionBarLensesFeaturesPluginEntryPoint setLensDeeplinkSendToControllingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b4215c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6050;
  func_0x000107c61428(param_1 + _DAT_112ef6050,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b42168; end: 102b42173; -[SCLensActionBarLensesFeaturesPluginEntryPoint favoritesNotificationService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42168(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6058;
  func_0x000107c61428(param_1 + _DAT_112ef6058,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b42174; end: 102b4217f; -[SCLensActionBarLensesFeaturesPluginEntryPoint setFavoritesNotificationService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42174(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6058;
  func_0x000107c61428(param_1 + _DAT_112ef6058,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b42180; end: 102b4218b; -[SCLensActionBarLensesFeaturesPluginEntryPoint lensContentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42180(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6060;
  func_0x000107c61428(param_1 + _DAT_112ef6060,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b4218c; end: 102b42197; -[SCLensActionBarLensesFeaturesPluginEntryPoint setLensContentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b4218c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6060;
  func_0x000107c61428(param_1 + _DAT_112ef6060,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b42198; end: 102b421a3; -[SCLensActionBarLensesFeaturesPluginEntryPoint lensFavoritesService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42198(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6068;
  func_0x000107c61428(param_1 + _DAT_112ef6068,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b421a4; end: 102b421af; -[SCLensActionBarLensesFeaturesPluginEntryPoint setLensFavoritesService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b421a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6068;
  func_0x000107c61428(param_1 + _DAT_112ef6068,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b421b0; end: 102b421bb; -[SCLensActionBarLensesFeaturesPluginEntryPoint lensPerformerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b421b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6070;
  func_0x000107c61428(param_1 + _DAT_112ef6070,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b421bc; end: 102b421c7; -[SCLensActionBarLensesFeaturesPluginEntryPoint setLensPerformerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b421bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6070;
  func_0x000107c61428(param_1 + _DAT_112ef6070,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b421c8; end: 102b421d3; -[SCLensActionBarLensesFeaturesPluginEntryPoint offPlatformLinkGenerationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b421c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6078;
  func_0x000107c61428(param_1 + _DAT_112ef6078,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b421d4; end: 102b421df; -[SCLensActionBarLensesFeaturesPluginEntryPoint setOffPlatformLinkGenerationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b421d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6078;
  func_0x000107c61428(param_1 + _DAT_112ef6078,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b421e0; end: 102b421eb; -[SCLensActionBarLensesFeaturesPluginEntryPoint lensTopicServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b421e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6080;
  func_0x000107c61428(param_1 + _DAT_112ef6080,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b421ec; end: 102b421f7; -[SCLensActionBarLensesFeaturesPluginEntryPoint setLensTopicServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b421ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6080;
  func_0x000107c61428(param_1 + _DAT_112ef6080,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b421f8; end: 102b42203; -[SCLensActionBarLensesFeaturesPluginEntryPoint cameraUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b421f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6088;
  func_0x000107c61428(param_1 + _DAT_112ef6088,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b42204; end: 102b4220f; -[SCLensActionBarLensesFeaturesPluginEntryPoint setCameraUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42204(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6088;
  func_0x000107c61428(param_1 + _DAT_112ef6088,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b42210; end: 102b4221b; -[SCLensActionBarLensesFeaturesPluginEntryPoint lensFavoritesLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42210(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6090;
  func_0x000107c61428(param_1 + _DAT_112ef6090,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b4221c; end: 102b42227; -[SCLensActionBarLensesFeaturesPluginEntryPoint setLensFavoritesLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b4221c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6090;
  func_0x000107c61428(param_1 + _DAT_112ef6090,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b42228; end: 102b42233; -[SCLensActionBarLensesFeaturesPluginEntryPoint lensCarouselStudySettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42228(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6098;
  func_0x000107c61428(param_1 + _DAT_112ef6098,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b42234; end: 102b4223f; -[SCLensActionBarLensesFeaturesPluginEntryPoint setLensCarouselStudySettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42234(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6098;
  func_0x000107c61428(param_1 + _DAT_112ef6098,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b42240; end: 102b4224b; -[SCLensActionBarLensesFeaturesPluginEntryPoint lensConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42240(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef60a0;
  func_0x000107c61428(param_1 + _DAT_112ef60a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b4224c; end: 102b42257; -[SCLensActionBarLensesFeaturesPluginEntryPoint setLensConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b4224c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef60a0;
  func_0x000107c61428(param_1 + _DAT_112ef60a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b42258; end: 102b42263; -[SCLensActionBarLensesFeaturesPluginEntryPoint lensCollectionTabBarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42258(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef60a8;
  func_0x000107c61428(param_1 + _DAT_112ef60a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b42264; end: 102b4226f; -[SCLensActionBarLensesFeaturesPluginEntryPoint setLensCollectionTabBarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42264(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef60a8;
  func_0x000107c61428(param_1 + _DAT_112ef60a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b42270; end: 102b4227b; -[SCLensActionBarLensesFeaturesPluginEntryPoint lensViewCountServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42270(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef60b0;
  func_0x000107c61428(param_1 + _DAT_112ef60b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b4227c; end: 102b42287; -[SCLensActionBarLensesFeaturesPluginEntryPoint setLensViewCountServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b4227c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef60b0;
  func_0x000107c61428(param_1 + _DAT_112ef60b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b42288; end: 102b42293; -[SCLensActionBarLensesFeaturesPluginEntryPoint blizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42288(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef60b8;
  func_0x000107c61428(param_1 + _DAT_112ef60b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b42294; end: 102b4229f; -[SCLensActionBarLensesFeaturesPluginEntryPoint setBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42294(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef60b8;
  func_0x000107c61428(param_1 + _DAT_112ef60b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b422a0; end: 102b422ab; -[SCLensActionBarLensesFeaturesPluginEntryPoint grapheneServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b422a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef60c0;
  func_0x000107c61428(param_1 + _DAT_112ef60c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b422ac; end: 102b422b7; -[SCLensActionBarLensesFeaturesPluginEntryPoint setGrapheneServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b422ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef60c0;
  func_0x000107c61428(param_1 + _DAT_112ef60c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b422b8; end: 102b422c3; -[SCLensActionBarLensesFeaturesPluginEntryPoint lensAutoCopyScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b422b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef60c8;
  func_0x000107c61428(param_1 + _DAT_112ef60c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b422c4; end: 102b422cf; -[SCLensActionBarLensesFeaturesPluginEntryPoint setLensAutoCopyScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b422c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef60c8;
  func_0x000107c61428(param_1 + _DAT_112ef60c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b422d0; end: 102b422db; -[SCLensActionBarLensesFeaturesPluginEntryPoint lensExplorerNavigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b422d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef60d0;
  func_0x000107c61428(param_1 + _DAT_112ef60d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b422dc; end: 102b422e7; -[SCLensActionBarLensesFeaturesPluginEntryPoint setLensExplorerNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b422dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef60d0;
  func_0x000107c61428(param_1 + _DAT_112ef60d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b422e8; end: 102b422f3; -[SCLensActionBarLensesFeaturesPluginEntryPoint arBarResolvingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b422e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef60d8;
  func_0x000107c61428(param_1 + _DAT_112ef60d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b422f4; end: 102b42337;  */

void FUN_102b422f4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102b42338; end: 102b42343; -[SCLensActionBarLensesFeaturesPluginEntryPoint setArBarResolvingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42338(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef60d8;
  func_0x000107c61428(param_1 + _DAT_112ef60d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b42344; end: 102b42397;  */

void FUN_102b42344(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b42398; end: 102b423df; -[SCLensActionBarLensesFeaturesPluginEntryPoint lensAutoCopyScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42398(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef60e0;
  func_0x000107c61428(param_1 + _DAT_112ef60e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102b423e0; end: 102b42443; -[SCLensActionBarLensesFeaturesPluginEntryPoint setLensAutoCopyScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b423e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef60e0;
  func_0x000107c61428(param_1 + _DAT_112ef60e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102b42444; end: 102b43cb3;  */

/* WARNING: Possible PIC construction at 0x000102b426ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b427a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42a60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42a8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42d78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b437a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b437c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b437d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b437e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b437f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43c28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43c38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43c58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43c68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43c78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43bc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43bd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43bf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43c08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b436a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b436b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b436c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b436d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b436e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b436f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b435c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b435d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b435e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b435f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b434ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b434bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b434cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b434dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b434ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b434fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4350c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4351c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4352c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4353c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4340c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4341c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4342c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4343c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4344c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4345c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4346c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4347c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4348c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4349c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4337c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4338c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4339c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b433ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b433bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b433cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b433dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b433ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b433fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b432ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b432fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4330c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4331c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4332c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4333c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4334c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4335c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4325c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4326c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4327c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4328c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4329c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b432ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b432bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b432cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b431dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b431ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b431fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4320c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4321c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4322c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4323c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4324c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4316c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4317c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4318c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4319c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b431ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b431bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b431cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b430fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4310c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4311c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4312c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4313c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4314c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b430a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b430b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b430c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b430d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b430e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42ff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b43024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42f2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42ecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42e5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b42e2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b42e40) */
/* WARNING: Removing unreachable block (ram,0x000102b42e60) */
/* WARNING: Removing unreachable block (ram,0x000102b42e90) */
/* WARNING: Removing unreachable block (ram,0x000102b42e80) */
/* WARNING: Removing unreachable block (ram,0x000102b42ec0) */
/* WARNING: Removing unreachable block (ram,0x000102b42eb0) */
/* WARNING: Removing unreachable block (ram,0x000102b42ea0) */
/* WARNING: Removing unreachable block (ram,0x000102b42ef0) */
/* WARNING: Removing unreachable block (ram,0x000102b42ee0) */
/* WARNING: Removing unreachable block (ram,0x000102b42ed0) */
/* WARNING: Removing unreachable block (ram,0x000102b42f30) */
/* WARNING: Removing unreachable block (ram,0x000102b42f20) */
/* WARNING: Removing unreachable block (ram,0x000102b42f10) */
/* WARNING: Removing unreachable block (ram,0x000102b42f80) */
/* WARNING: Removing unreachable block (ram,0x000102b42f70) */
/* WARNING: Removing unreachable block (ram,0x000102b42f60) */
/* WARNING: Removing unreachable block (ram,0x000102b42f50) */
/* WARNING: Removing unreachable block (ram,0x000102b42fc8) */
/* WARNING: Removing unreachable block (ram,0x000102b42fb8) */
/* WARNING: Removing unreachable block (ram,0x000102b42fa8) */
/* WARNING: Removing unreachable block (ram,0x000102b42f98) */
/* WARNING: Removing unreachable block (ram,0x000102b43028) */
/* WARNING: Removing unreachable block (ram,0x000102b43018) */
/* WARNING: Removing unreachable block (ram,0x000102b43008) */
/* WARNING: Removing unreachable block (ram,0x000102b42ff8) */
/* WARNING: Removing unreachable block (ram,0x000102b42fe8) */
/* WARNING: Removing unreachable block (ram,0x000102b43088) */
/* WARNING: Removing unreachable block (ram,0x000102b43078) */
/* WARNING: Removing unreachable block (ram,0x000102b43068) */
/* WARNING: Removing unreachable block (ram,0x000102b43058) */
/* WARNING: Removing unreachable block (ram,0x000102b43048) */
/* WARNING: Removing unreachable block (ram,0x000102b43038) */
/* WARNING: Removing unreachable block (ram,0x000102b430e8) */
/* WARNING: Removing unreachable block (ram,0x000102b42fcc) */
/* WARNING: Removing unreachable block (ram,0x000102b430d8) */
/* WARNING: Removing unreachable block (ram,0x000102b430c8) */
/* WARNING: Removing unreachable block (ram,0x000102b430b8) */
/* WARNING: Removing unreachable block (ram,0x000102b430a8) */
/* WARNING: Removing unreachable block (ram,0x000102b43098) */
/* WARNING: Removing unreachable block (ram,0x000102b43150) */
/* WARNING: Removing unreachable block (ram,0x000102b43140) */
/* WARNING: Removing unreachable block (ram,0x000102b43130) */
/* WARNING: Removing unreachable block (ram,0x000102b43120) */
/* WARNING: Removing unreachable block (ram,0x000102b43110) */
/* WARNING: Removing unreachable block (ram,0x000102b43100) */
/* WARNING: Removing unreachable block (ram,0x000102b431d0) */
/* WARNING: Removing unreachable block (ram,0x000102b431c0) */
/* WARNING: Removing unreachable block (ram,0x000102b431b0) */
/* WARNING: Removing unreachable block (ram,0x000102b431a0) */
/* WARNING: Removing unreachable block (ram,0x000102b43190) */
/* WARNING: Removing unreachable block (ram,0x000102b43180) */
/* WARNING: Removing unreachable block (ram,0x000102b43170) */
/* WARNING: Removing unreachable block (ram,0x000102b43250) */
/* WARNING: Removing unreachable block (ram,0x000102b43240) */
/* WARNING: Removing unreachable block (ram,0x000102b43230) */
/* WARNING: Removing unreachable block (ram,0x000102b43220) */
/* WARNING: Removing unreachable block (ram,0x000102b43210) */
/* WARNING: Removing unreachable block (ram,0x000102b43200) */
/* WARNING: Removing unreachable block (ram,0x000102b431f0) */
/* WARNING: Removing unreachable block (ram,0x000102b431e0) */
/* WARNING: Removing unreachable block (ram,0x000102b432d0) */
/* WARNING: Removing unreachable block (ram,0x000102b432c0) */
/* WARNING: Removing unreachable block (ram,0x000102b432b0) */
/* WARNING: Removing unreachable block (ram,0x000102b432a0) */
/* WARNING: Removing unreachable block (ram,0x000102b43290) */
/* WARNING: Removing unreachable block (ram,0x000102b43280) */
/* WARNING: Removing unreachable block (ram,0x000102b43270) */
/* WARNING: Removing unreachable block (ram,0x000102b43260) */
/* WARNING: Removing unreachable block (ram,0x000102b43360) */
/* WARNING: Removing unreachable block (ram,0x000102b43350) */
/* WARNING: Removing unreachable block (ram,0x000102b43340) */
/* WARNING: Removing unreachable block (ram,0x000102b43330) */
/* WARNING: Removing unreachable block (ram,0x000102b43320) */
/* WARNING: Removing unreachable block (ram,0x000102b43310) */
/* WARNING: Removing unreachable block (ram,0x000102b43300) */
/* WARNING: Removing unreachable block (ram,0x000102b432f0) */
/* WARNING: Removing unreachable block (ram,0x000102b43400) */
/* WARNING: Removing unreachable block (ram,0x000102b433f0) */
/* WARNING: Removing unreachable block (ram,0x000102b433e0) */
/* WARNING: Removing unreachable block (ram,0x000102b433d0) */
/* WARNING: Removing unreachable block (ram,0x000102b433c0) */
/* WARNING: Removing unreachable block (ram,0x000102b433b0) */
/* WARNING: Removing unreachable block (ram,0x000102b433a0) */
/* WARNING: Removing unreachable block (ram,0x000102b43390) */
/* WARNING: Removing unreachable block (ram,0x000102b43380) */
/* WARNING: Removing unreachable block (ram,0x000102b434a0) */
/* WARNING: Removing unreachable block (ram,0x000102b43490) */
/* WARNING: Removing unreachable block (ram,0x000102b43480) */
/* WARNING: Removing unreachable block (ram,0x000102b43470) */
/* WARNING: Removing unreachable block (ram,0x000102b43460) */
/* WARNING: Removing unreachable block (ram,0x000102b43450) */
/* WARNING: Removing unreachable block (ram,0x000102b43440) */
/* WARNING: Removing unreachable block (ram,0x000102b43430) */
/* WARNING: Removing unreachable block (ram,0x000102b43420) */
/* WARNING: Removing unreachable block (ram,0x000102b43410) */
/* WARNING: Removing unreachable block (ram,0x000102b43540) */
/* WARNING: Removing unreachable block (ram,0x000102b43530) */
/* WARNING: Removing unreachable block (ram,0x000102b43520) */
/* WARNING: Removing unreachable block (ram,0x000102b43510) */
/* WARNING: Removing unreachable block (ram,0x000102b43500) */
/* WARNING: Removing unreachable block (ram,0x000102b434f0) */
/* WARNING: Removing unreachable block (ram,0x000102b434e0) */
/* WARNING: Removing unreachable block (ram,0x000102b434d0) */
/* WARNING: Removing unreachable block (ram,0x000102b434c0) */
/* WARNING: Removing unreachable block (ram,0x000102b434b0) */
/* WARNING: Removing unreachable block (ram,0x000102b4363c) */
/* WARNING: Removing unreachable block (ram,0x000102b4362c) */
/* WARNING: Removing unreachable block (ram,0x000102b4361c) */
/* WARNING: Removing unreachable block (ram,0x000102b4360c) */
/* WARNING: Removing unreachable block (ram,0x000102b435fc) */
/* WARNING: Removing unreachable block (ram,0x000102b435ec) */
/* WARNING: Removing unreachable block (ram,0x000102b435dc) */
/* WARNING: Removing unreachable block (ram,0x000102b435cc) */
/* WARNING: Removing unreachable block (ram,0x000102b436fc) */
/* WARNING: Removing unreachable block (ram,0x000102b436ec) */
/* WARNING: Removing unreachable block (ram,0x000102b436dc) */
/* WARNING: Removing unreachable block (ram,0x000102b436cc) */
/* WARNING: Removing unreachable block (ram,0x000102b436d8) */
/* WARNING: Removing unreachable block (ram,0x000102b436bc) */
/* WARNING: Removing unreachable block (ram,0x000102b436ac) */
/* WARNING: Removing unreachable block (ram,0x000102b4369c) */
/* WARNING: Removing unreachable block (ram,0x000102b4368c) */
/* WARNING: Removing unreachable block (ram,0x000102b4367c) */
/* WARNING: Removing unreachable block (ram,0x000102b4366c) */
/* WARNING: Removing unreachable block (ram,0x000102b4365c) */
/* WARNING: Removing unreachable block (ram,0x000102b43c0c) */
/* WARNING: Removing unreachable block (ram,0x000102b43bfc) */
/* WARNING: Removing unreachable block (ram,0x000102b43bec) */
/* WARNING: Removing unreachable block (ram,0x000102b43bdc) */
/* WARNING: Removing unreachable block (ram,0x000102b43bc4) */
/* WARNING: Removing unreachable block (ram,0x000102b43bb4) */
/* WARNING: Removing unreachable block (ram,0x000102b43ba4) */
/* WARNING: Removing unreachable block (ram,0x000102b43b94) */
/* WARNING: Removing unreachable block (ram,0x000102b43b60) */
/* WARNING: Removing unreachable block (ram,0x000102b43b20) */
/* WARNING: Removing unreachable block (ram,0x000102b43b10) */
/* WARNING: Removing unreachable block (ram,0x000102b43c7c) */
/* WARNING: Removing unreachable block (ram,0x000102b43c6c) */
/* WARNING: Removing unreachable block (ram,0x000102b43c78) */
/* WARNING: Removing unreachable block (ram,0x000102b43c5c) */
/* WARNING: Removing unreachable block (ram,0x000102b43c4c) */
/* WARNING: Removing unreachable block (ram,0x000102b43c3c) */
/* WARNING: Removing unreachable block (ram,0x000102b43c2c) */
/* WARNING: Removing unreachable block (ram,0x000102b43c1c) */
/* WARNING: Removing unreachable block (ram,0x000102b437f4) */
/* WARNING: Removing unreachable block (ram,0x000102b43c18) */
/* WARNING: Removing unreachable block (ram,0x000102b437e4) */
/* WARNING: Removing unreachable block (ram,0x000102b437d4) */
/* WARNING: Removing unreachable block (ram,0x000102b437c4) */
/* WARNING: Removing unreachable block (ram,0x000102b437ac) */
/* WARNING: Removing unreachable block (ram,0x000102b4379c) */
/* WARNING: Removing unreachable block (ram,0x000102b42db0) */
/* WARNING: Removing unreachable block (ram,0x000102b4373c) */
/* WARNING: Removing unreachable block (ram,0x000102b42e10) */
/* WARNING: Removing unreachable block (ram,0x000102b43704) */
/* WARNING: Removing unreachable block (ram,0x000102b43770) */
/* WARNING: Removing unreachable block (ram,0x000102b42e18) */
/* WARNING: Removing unreachable block (ram,0x000102b4378c) */
/* WARNING: Removing unreachable block (ram,0x000102b43804) */
/* WARNING: Removing unreachable block (ram,0x000102b4388c) */
/* WARNING: Removing unreachable block (ram,0x000102b42e1c) */
/* WARNING: Removing unreachable block (ram,0x000102b43794) */
/* WARNING: Removing unreachable block (ram,0x000102b42d7c) */
/* WARNING: Removing unreachable block (ram,0x000102b42d50) */
/* WARNING: Removing unreachable block (ram,0x000102b42d40) */
/* WARNING: Removing unreachable block (ram,0x000102b42a90) */
/* WARNING: Removing unreachable block (ram,0x000102b42a64) */
/* WARNING: Removing unreachable block (ram,0x000102b427a4) */
/* WARNING: Removing unreachable block (ram,0x000102b42a98) */
/* WARNING: Removing unreachable block (ram,0x000102b42b3c) */
/* WARNING: Removing unreachable block (ram,0x000102b427ac) */
/* WARNING: Removing unreachable block (ram,0x000102b42724) */
/* WARNING: Removing unreachable block (ram,0x000102b4364c) */
/* WARNING: Removing unreachable block (ram,0x000102b4272c) */
/* WARNING: Removing unreachable block (ram,0x000102b426f0) */
/* WARNING: Removing unreachable block (ram,0x000102b43654) */
/* WARNING: Removing unreachable block (ram,0x000102b426f8) */
/* WARNING: Removing unreachable block (ram,0x000102b42e30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b42444(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 auStack_90 [24];
  ulong uStack_78;
  long lStack_70;
  
  lVar5 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar5 == 0) {
    return;
  }
  lVar1 = unaff_x20;
  func_0x000107c3f0d0();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f284();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4b060();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar3 = unaff_x20;
        func_0x000107c42e28();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar5);
          lVar5 = lVar1;
        }
        else {
          lVar3 = unaff_x20;
          func_0x000107c4afe4();
          func_0x000107c61180();
          if (lVar3 == 0) {
            func_0x000107c61170(lVar5);
            lVar5 = lVar1;
          }
          else {
            lVar3 = unaff_x20;
            func_0x000107c4b134();
            func_0x000107c61180();
            if (lVar3 != 0) {
              lVar3 = unaff_x20;
              func_0x000107c4b2f4();
              func_0x000107c61180();
              if (lVar3 != 0) {
                lVar3 = unaff_x20;
                func_0x000107c4dadc();
                func_0x000107c61180();
                if (lVar3 == 0) {
                  func_0x000107c61170(lVar5);
                  lVar5 = lVar1;
                }
                else {
                  lVar3 = unaff_x20;
                  func_0x000107c4b4c4();
                  func_0x000107c61180();
                  if (lVar3 == 0) {
                    func_0x000107c61170(lVar5);
                    lVar5 = lVar1;
                  }
                  else {
                    lVar3 = unaff_x20;
                    func_0x000107c3f2a4();
                    func_0x000107c61180();
                    if (lVar3 == 0) {
                      func_0x000107c61170(lVar5);
                      lVar5 = lVar1;
                    }
                    else {
                      lVar3 = unaff_x20;
                      func_0x000107c4b12c();
                      func_0x000107c61180();
                      if (lVar3 == 0) {
                        func_0x000107c61170(lVar5);
                        lVar5 = lVar1;
                      }
                      else {
                        lVar3 = unaff_x20;
                        func_0x000107c4af4c();
                        func_0x000107c61180();
                        if (lVar3 != 0) {
                          lVar4 = unaff_x20;
                          func_0x000107c4afbc();
                          func_0x000107c61180();
                          if (lVar4 != 0) {
                            lVar4 = unaff_x20;
                            func_0x000107c4af8c();
                            func_0x000107c61180();
                            if (lVar4 == 0) {
                              func_0x000107c61170(lVar5);
                              lVar5 = lVar1;
                            }
                            else {
                              lVar4 = unaff_x20;
                              func_0x000107c4b54c();
                              func_0x000107c61180();
                              if (lVar4 == 0) {
                                func_0x000107c61170(lVar5);
                                lVar5 = lVar1;
                              }
                              else {
                                lVar4 = unaff_x20;
                                func_0x000107c3ead8();
                                func_0x000107c61180();
                                if (lVar4 != 0) {
                                  lVar4 = unaff_x20;
                                  func_0x000107c444a8();
                                  func_0x000107c61180();
                                  if (lVar4 != 0) {
                                    lVar4 = unaff_x20;
                                    func_0x000107c4ae0c();
                                    func_0x000107c61180();
                                    if (lVar4 == 0) {
                                      func_0x000107c61170(lVar5);
                                      lVar5 = lVar1;
                                    }
                                    else {
                                      lVar4 = unaff_x20;
                                      func_0x000107c4ae04();
                                      func_0x000107c61180();
                                      if (lVar4 == 0) {
                                        func_0x000107c61170(lVar5);
                                        lVar5 = lVar1;
                                      }
                                      else {
                                        lVar1 = unaff_x20;
                                        func_0x000107c4b0d8();
                                        func_0x000107c61180();
                                        if (lVar1 != 0) {
                                          func_0x000107c3e0ac();
                                          func_0x000107c61180();
                                          if (unaff_x20 != 0) {
                                            lVar5 = 0;
                                            FUN_102b39300();
                                            func_0x000107c613fc();
                                            *(undefined8 *)(lVar5 + 0x18) = 0;
                                            *(undefined8 *)(lVar5 + 0x10) = 0;
                                            *(undefined8 *)(lVar5 + 0x28) = 0;
                                            *(undefined8 *)(lVar5 + 0x20) = 0;
                                            if (2 < *(ulong *)(lVar2 + _DAT_113082420)) {
                                              lVar5 = lVar2;
                                              if (*(ulong *)(lVar2 + _DAT_113082420) != 8)
                                              goto code_r0x000107c61170;
                                              func_0x0001000d224c(auStack_90);
                                              FUN_102b44854(auStack_90);
                                              uVar6 = uStack_78;
                                              (**(code **)(lStack_70 + 0x40))(uStack_78,lStack_70);
                                              FUN_102b44d1c(auStack_90);
                                              if ((uVar6 & 1) == 0) goto code_r0x000107c61170;
                                            }
                                            func_0x000107c4af44();
                                            func_0x000107c61180();
                                            func_0x000107c5c734();
                                            func_0x000107c61180();
                                            lVar5 = lVar3;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 102b43cb4; end: 102b43cbb;  */

void FUN_102b43cb4(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000102b2fd60();
  lVar2 = lVar1;
  func_0x000107c613fc();
  FUN_102b392bc(unaff_x20 + 0x10,lVar2 + 0x10);
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11059f550;
  *param_1 = lVar2;
  return;
}



/* Entry: 102b43cbc; end: 102b43cff;  */

long FUN_102b43cbc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102b43d00; end: 102b43d27; -[SCLensActionBarLensesFeaturesPluginEntryPoint begin] */

void FUN_102b43d00(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b42444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b43d28; end: 102b43def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b43d28(void)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112ef60e8);
  if ((lVar1 != 0) && (lVar2 = *(long *)(lVar1 + 0x20), lVar2 != 0)) {
    func_0x000107c6157c(lVar1);
    func_0x000107c61174(lVar2);
    func_0x0001000d224c(&uStack_60);
    func_0x000107c614f0(uStack_60);
    (**(code **)(lStack_58 + 0x10))();
    func_0x000107c615e8(uStack_60);
    func_0x000107c61170(lVar2);
    func_0x000107c61574(lVar1);
  }
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_end_1125c29d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102b43df0; end: 102b43e23; -[SCLensActionBarLensesFeaturesPluginEntryPoint end] */

void FUN_102b43df0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b43d28();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b43e24; end: 102b44853;  */

void FUN_102b43e24(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if (param_2 != -0x2fffffffffffffee || param_3 != -0x7ffffffef10ef650) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10da5c0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000012,0x800000010ef25a40,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0x49556172656d6163;
          if (((param_2 == 0x49556172656d6163) && (param_3 == -0x12ffff9a8f909cad)) ||
             (func_0x000107c605b8(0x49556172656d6163,0xed000065706f6353,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            FUN_102b44854(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c530ec();
          }
          else {
            uVar2 = 0xd000000000000025;
            if (((param_2 == -0x2fffffffffffffdb) && (param_3 == -0x7ffffffef0f0dbe0)) ||
               (func_0x000107c605b8(0xd000000000000025,0x800000010f0f2420,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              FUN_102b44854(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55ce8();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef0f0dbb0)) ||
                 (func_0x000107c605b8(0xd00000000000001c,0x800000010f0f2450,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                FUN_102b44854(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c548d4();
              }
              else {
                uVar2 = 0xd000000000000013;
                if (((param_2 == -0x2fffffffffffffed) && (param_3 == -0x7ffffffef10ecd30)) ||
                   (func_0x000107c605b8(0xd000000000000013,0x800000010ef132d0,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  FUN_102b44854(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c55cc0();
                }
                else {
                  uVar2 = 0;
                  if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef0fc11b0)) ||
                     (func_0x000107c605b8(0xd000000000000014,0x800000010f03ee50,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    FUN_102b44854(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c55d40();
                  }
                  else {
                    uVar2 = 0xd000000000000015;
                    if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10e0a10)) ||
                       (func_0x000107c605b8(0xd000000000000015,0x800000010ef1f5f0,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      FUN_102b44854(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c55df4();
                    }
                    else {
                      uVar2 = 0xd000000000000021;
                      if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef10d2300)) ||
                         (func_0x000107c605b8(0xd000000000000021,0x800000010ef2dd00,param_2,param_3,
                                              0), (uVar2 & 1) != 0)) {
                        FUN_102b44854(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c56c0c();
                      }
                      else {
                        uVar2 = 0xd000000000000011;
                        if (((param_2 == -0x2fffffffffffffef) && (param_3 == -0x7ffffffef0fc1170))
                           || (func_0x000107c605b8(0xd000000000000011,0x800000010f03ee90,param_2,
                                                   param_3,0), (uVar2 & 1) != 0)) {
                          FUN_102b44854(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c55ec8();
                        }
                        else {
                          if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ecf90))
                          {
                            uVar2 = 0;
                            func_0x000107c605b8(0xd000000000000010,0x800000010ef13070,param_2,
                                                param_3,0);
                            if ((uVar2 & 1) == 0) {
                              if ((param_2 != -0x2fffffffffffffe4) ||
                                 (param_3 != -0x7ffffffef0f0db90)) {
                                uVar2 = 0;
                                func_0x000107c605b8(0xd00000000000001c,0x800000010f0f2470,param_2,
                                                    param_3,0);
                                if ((uVar2 & 1) == 0) {
                                  if ((param_2 != -0x2fffffffffffffdf) ||
                                     (param_3 != -0x7ffffffef1039a00)) {
                                    uVar2 = 0xd000000000000021;
                                    func_0x000107c605b8(0xd000000000000021,0x800000010efc6600,
                                                        param_2,param_3,0);
                                    if ((uVar2 & 1) == 0) {
                                      uVar2 = 0xd000000000000019;
                                      if (((param_2 == -0x2fffffffffffffe7) &&
                                          (param_3 == -0x7ffffffef10e0a30)) ||
                                         (func_0x000107c605b8(0xd000000000000019,0x800000010ef1f5d0,
                                                              param_2,param_3,0), (uVar2 & 1) != 0))
                                      {
                                        FUN_102b44854(param_1,*(undefined8 *)(param_1 + 0x18));
                                        func_0x000107c605b0();
                                        func_0x000107c55cbc();
                                        goto LAB_102b43eb4;
                                      }
                                      if ((param_2 != -0x2fffffffffffffe4) ||
                                         (param_3 != -0x7ffffffef0f0db70)) {
                                        uVar2 = 0;
                                        func_0x000107c605b8(0xd00000000000001c,0x800000010f0f2490,
                                                            param_2,param_3,0);
                                        if ((uVar2 & 1) == 0) {
                                          if ((param_2 != -0x2fffffffffffffeb) ||
                                             (param_3 != -0x7ffffffef0f0db50)) {
                                            uVar2 = 0xd000000000000015;
                                            func_0x000107c605b8(0xd000000000000015,
                                                                0x800000010f0f24b0,param_2,param_3,0
                                                               );
                                            if ((uVar2 & 1) == 0) {
                                              if ((param_2 != -0x2ffffffffffffff0) ||
                                                 (param_3 != -0x7ffffffef10d97d0)) {
                                                uVar2 = 0;
                                                func_0x000107c605b8(0xd000000000000010,
                                                                    0x800000010ef26830,param_2,
                                                                    param_3,0);
                                                if ((uVar2 & 1) == 0) {
                                                  if ((param_2 != -0x2ffffffffffffff0) ||
                                                     (param_3 != -0x7ffffffef10e3fc0)) {
                                                    uVar2 = 0;
                                                    func_0x000107c605b8(0xd000000000000010,
                                                                        0x800000010ef1c040,param_2,
                                                                        param_3,0);
                                                    if ((uVar2 & 1) == 0) {
                                                      if ((param_2 != -0x2fffffffffffffe7) ||
                                                         (param_3 != -0x7ffffffef0f0db30)) {
                                                        uVar2 = 0xd000000000000019;
                                                        func_0x000107c605b8(0xd000000000000019,
                                                                            0x800000010f0f24d0,
                                                                            param_2,param_3,0);
                                                        if ((uVar2 & 1) == 0) {
                                                          uVar2 = 0;
                                                          if (((param_2 == -0x2fffffffffffffe2) &&
                                                              (param_3 == -0x7ffffffef0fc1460)) ||
                                                             (func_0x000107c605b8(0xd00000000000001e
                                                                                  ,
                                                  0x800000010f03eba0,param_2,param_3,0),
                                                  (uVar2 & 1) != 0)) {
                                                    FUN_102b44854(param_1,*(undefined8 *)
                                                                           (param_1 + 0x18));
                                                    func_0x000107c605b0();
                                                    func_0x000107c55d1c();
                                                  }
                                                  else {
                                                    if ((param_2 != -0x2fffffffffffffeb) ||
                                                       (param_3 != -0x7ffffffef0f0db10)) {
                                                      uVar2 = 0xd000000000000015;
                                                      func_0x000107c605b8(0xd000000000000015,
                                                                          0x800000010f0f24f0,param_2
                                                                          ,param_3,0);
                                                      if ((uVar2 & 1) == 0) {
                                                        uVar2 = 0;
                                                        if (((param_2 != -0x2fffffffffffffe8) ||
                                                            (param_3 != -0x7ffffffef0f0daf0)) &&
                                                           (func_0x000107c605b8(0xd000000000000018,
                                                                                0x800000010f0f2510,
                                                                                param_2,param_3,0),
                                                           (uVar2 & 1) == 0)) {
                                                          func_0x000107c602fc(0x15);
                                                          func_0x000107c6142c(0xe000000000000000);
                                                          func_0x000107c5fb78(param_2,param_3);
                                                          func_0x000107c60450("Fatal error",0xb,2,
                                                                              0xd000000000000013,
                                                                              0x800000010ef0fc20,
                                                                                                                                                            
                                                  "LensCarouselFeaturesWorkflows/SCLensActionBarLensesFeaturesPluginEntryPoint.swift"
                                                  ,0x51,2,0x8d,0);
                    /* WARNING: Does not return */
                                                  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b44854)
                                                  ;
                                                  (*pcVar1)();
                                                  }
                                                  FUN_102b44854(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c55bec();
                                                  goto LAB_102b43eb4;
                                                  }
                                                  }
                                                  FUN_102b44854(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c52894();
                                                  }
                                                  goto LAB_102b43eb4;
                                                  }
                                                  }
                                                  FUN_102b44854(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c55bf4();
                                                  goto LAB_102b43eb4;
                                                  }
                                                  }
                                                  FUN_102b44854(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c54f40();
                                                  goto LAB_102b43eb4;
                                                }
                                              }
                                              FUN_102b44854(param_1,*(undefined8 *)(param_1 + 0x18))
                                              ;
                                              func_0x000107c605b0();
                                              func_0x000107c52d80();
                                              goto LAB_102b43eb4;
                                            }
                                          }
                                          FUN_102b44854(param_1,*(undefined8 *)(param_1 + 0x18));
                                          func_0x000107c605b0();
                                          func_0x000107c55f18();
                                          goto LAB_102b43eb4;
                                        }
                                      }
                                      FUN_102b44854(param_1,*(undefined8 *)(param_1 + 0x18));
                                      func_0x000107c605b0();
                                      func_0x000107c55ca0();
                                      goto LAB_102b43eb4;
                                    }
                                  }
                                  FUN_102b44854(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c55c90();
                                  goto LAB_102b43eb4;
                                }
                              }
                              FUN_102b44854(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c55d3c();
                              goto LAB_102b43eb4;
                            }
                          }
                          FUN_102b44854(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c53104();
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_102b43eb4;
        }
      }
      FUN_102b44854(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53004();
      goto LAB_102b43eb4;
    }
  }
  FUN_102b44854(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_102b43eb4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102b44854; end: 102b44877;  */

long * FUN_102b44854(long *param_1,long param_2)

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



/* Entry: 102b44878; end: 102b44923; -[SCLensActionBarLensesFeaturesPluginEntryPoint setValue:forIvarName:] */

void FUN_102b44878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b43e24(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_102b44d1c(auStack_50);
  return;
}



/* Entry: 102b44924; end: 102b44b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44924(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112ef6038,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef6040,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef6048,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef6050,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef6058,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef6060,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef6068,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef6070,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef6078,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef6080,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef6088,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef6090,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef6098,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef60a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef60a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef60b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef60b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef60c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef60c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef60d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef60d8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ef60e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef60e8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b44b20; end: 102b44b3f; -[SCLensActionBarLensesFeaturesPluginEntryPoint init] */

void FUN_102b44b20(void)

{
  FUN_102b44924();
  return;
}



/* Entry: 102b44b40; end: 102b44b73;  */

void FUN_102b44b40(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b44b74; end: 102b44cfb; -[SCLensActionBarLensesFeaturesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44b74(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef6038);
  func_0x000107c61610(param_1 + _DAT_112ef6040);
  func_0x000107c61610(param_1 + _DAT_112ef6048);
  func_0x000107c61610(param_1 + _DAT_112ef6050);
  func_0x000107c61610(param_1 + _DAT_112ef6058);
  func_0x000107c61610(param_1 + _DAT_112ef6060);
  func_0x000107c61610(param_1 + _DAT_112ef6068);
  func_0x000107c61610(param_1 + _DAT_112ef6070);
  func_0x000107c61610(param_1 + _DAT_112ef6078);
  func_0x000107c61610(param_1 + _DAT_112ef6080);
  func_0x000107c61610(param_1 + _DAT_112ef6088);
  func_0x000107c61610(param_1 + _DAT_112ef6090);
  func_0x000107c61610(param_1 + _DAT_112ef6098);
  func_0x000107c61610(param_1 + _DAT_112ef60a0);
  func_0x000107c61610(param_1 + _DAT_112ef60a8);
  func_0x000107c61610(param_1 + _DAT_112ef60b0);
  func_0x000107c61610(param_1 + _DAT_112ef60b8);
  func_0x000107c61610(param_1 + _DAT_112ef60c0);
  func_0x000107c61610(param_1 + _DAT_112ef60c8);
  func_0x000107c61610(param_1 + _DAT_112ef60d0);
  func_0x000107c61610(param_1 + _DAT_112ef60d8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef60e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef60e8));
  return;
}



/* Entry: 102b44cfc; end: 102b44d1b;  */

void FUN_102b44cfc(void)

{
  func_0x000107c61168(&PTR_PTR_11288cc90);
  return;
}



/* Entry: 102b44d1c; end: 102b44d3b;  */

void FUN_102b44d1c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000102b44d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 102b44d3c; end: 102b44d47; -[SCLensCarouselLensFeaturesEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44d3c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6118;
  func_0x000107c61428(param_1 + _DAT_112ef6118,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b44d48; end: 102b44d53; -[SCLensCarouselLensFeaturesEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6118;
  func_0x000107c61428(param_1 + _DAT_112ef6118,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b44d54; end: 102b44d5f; -[SCLensCarouselLensFeaturesEntryPoint cameraFeatureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44d54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6120;
  func_0x000107c61428(param_1 + _DAT_112ef6120,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b44d60; end: 102b44d6b; -[SCLensCarouselLensFeaturesEntryPoint setCameraFeatureScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44d60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6120;
  func_0x000107c61428(param_1 + _DAT_112ef6120,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b44d6c; end: 102b44d77; -[SCLensCarouselLensFeaturesEntryPoint cameraUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44d6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6128;
  func_0x000107c61428(param_1 + _DAT_112ef6128,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b44d78; end: 102b44d83; -[SCLensCarouselLensFeaturesEntryPoint setCameraUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44d78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6128;
  func_0x000107c61428(param_1 + _DAT_112ef6128,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b44d84; end: 102b44d8f; -[SCLensCarouselLensFeaturesEntryPoint lensCarouselSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44d84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6130;
  func_0x000107c61428(param_1 + _DAT_112ef6130,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b44d90; end: 102b44d9b; -[SCLensCarouselLensFeaturesEntryPoint setLensCarouselSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6130;
  func_0x000107c61428(param_1 + _DAT_112ef6130,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b44d9c; end: 102b44da7; -[SCLensCarouselLensFeaturesEntryPoint lensCarouselScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44d9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6138;
  func_0x000107c61428(param_1 + _DAT_112ef6138,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b44da8; end: 102b44db3; -[SCLensCarouselLensFeaturesEntryPoint setLensCarouselScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6138;
  func_0x000107c61428(param_1 + _DAT_112ef6138,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b44db4; end: 102b44dbf; -[SCLensCarouselLensFeaturesEntryPoint lensCarouselStudySettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44db4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6140;
  func_0x000107c61428(param_1 + _DAT_112ef6140,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b44dc0; end: 102b44dcb; -[SCLensCarouselLensFeaturesEntryPoint setLensCarouselStudySettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44dc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6140;
  func_0x000107c61428(param_1 + _DAT_112ef6140,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b44dcc; end: 102b44dd7; -[SCLensCarouselLensFeaturesEntryPoint cameraUIScopedLensProcessingCarouselServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44dcc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6148;
  func_0x000107c61428(param_1 + _DAT_112ef6148,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b44dd8; end: 102b44de3; -[SCLensCarouselLensFeaturesEntryPoint setCameraUIScopedLensProcessingCarouselServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6148;
  func_0x000107c61428(param_1 + _DAT_112ef6148,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b44de4; end: 102b44def; -[SCLensCarouselLensFeaturesEntryPoint lensesFeatureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44de4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6150;
  func_0x000107c61428(param_1 + _DAT_112ef6150,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b44df0; end: 102b44dfb; -[SCLensCarouselLensFeaturesEntryPoint setLensesFeatureServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6150;
  func_0x000107c61428(param_1 + _DAT_112ef6150,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b44dfc; end: 102b44e07; -[SCLensCarouselLensFeaturesEntryPoint scopedLensFeaturesVisibilityControllerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44dfc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6158;
  func_0x000107c61428(param_1 + _DAT_112ef6158,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b44e08; end: 102b44e13; -[SCLensCarouselLensFeaturesEntryPoint setScopedLensFeaturesVisibilityControllerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44e08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6158;
  func_0x000107c61428(param_1 + _DAT_112ef6158,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b44e14; end: 102b44e1f; -[SCLensCarouselLensFeaturesEntryPoint plusServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44e14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6160;
  func_0x000107c61428(param_1 + _DAT_112ef6160,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b44e20; end: 102b44e2b; -[SCLensCarouselLensFeaturesEntryPoint setPlusServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6160;
  func_0x000107c61428(param_1 + _DAT_112ef6160,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b44e2c; end: 102b44e37; -[SCLensCarouselLensFeaturesEntryPoint lensPlusServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44e2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6168;
  func_0x000107c61428(param_1 + _DAT_112ef6168,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b44e38; end: 102b44e43; -[SCLensCarouselLensFeaturesEntryPoint setLensPlusServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44e38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6168;
  func_0x000107c61428(param_1 + _DAT_112ef6168,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b44e44; end: 102b44e4f; -[SCLensCarouselLensFeaturesEntryPoint lensConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44e44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6170;
  func_0x000107c61428(param_1 + _DAT_112ef6170,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b44e50; end: 102b44e5b; -[SCLensCarouselLensFeaturesEntryPoint setLensConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6170;
  func_0x000107c61428(param_1 + _DAT_112ef6170,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b44e5c; end: 102b44e67; -[SCLensCarouselLensFeaturesEntryPoint lensViewControllerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44e5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6178;
  func_0x000107c61428(param_1 + _DAT_112ef6178,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b44e68; end: 102b44e73; -[SCLensCarouselLensFeaturesEntryPoint setLensViewControllerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44e68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6178;
  func_0x000107c61428(param_1 + _DAT_112ef6178,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b44e74; end: 102b44e7f; -[SCLensCarouselLensFeaturesEntryPoint lensCarouselLensDownloadingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44e74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6180;
  func_0x000107c61428(param_1 + _DAT_112ef6180,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b44e80; end: 102b44e8b; -[SCLensCarouselLensFeaturesEntryPoint setLensCarouselLensDownloadingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44e80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6180;
  func_0x000107c61428(param_1 + _DAT_112ef6180,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b44e8c; end: 102b44e97; -[SCLensCarouselLensFeaturesEntryPoint cameraUIScopedLensCarouselLensApplicatorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b44e8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6188;
  func_0x000107c61428(param_1 + _DAT_112ef6188,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


