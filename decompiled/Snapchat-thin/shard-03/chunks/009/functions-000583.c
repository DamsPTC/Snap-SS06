/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e27128; end: 102e2712f;  */

void FUN_102e27128(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102e27130; end: 102e2719b;  */

undefined1  [16] FUN_102e27130(long *param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c4b3f8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
    param_2 = -0x2000000000000000;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  param_1[1] = param_2;
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = FUN_102e2719c;
  return auVar3;
}



/* Entry: 102e2719c; end: 102e271a3;  */

void FUN_102e2719c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102e271a4; end: 102e27573;  */

undefined1  [16] FUN_102e271a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c4b474();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
    param_2 = 0xe000000000000000;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 102e27574; end: 102e2757b;  */

void FUN_102e27574(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  uVar6 = *unaff_x20;
  lVar2 = unaff_x20[5];
  func_0x000107c40f64();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c602fc(0x3a);
    func_0x000107c5fb78(0xd000000000000038,0x800000010f110a10);
    uVar4 = unaff_x20[2];
    uVar1 = unaff_x20[3];
    func_0x000107c5fb78(uVar4,uVar1);
    func_0x0001007d6c6c(3,0,0xe000000000000000,uVar6,&PTR_DAT_1105d8998);
    func_0x000107c6142c(0xe000000000000000);
    puVar3 = PTR_PTR_1126b0820;
    func_0x000107c610f8(PTR_PTR_1126b0820);
    func_0x000107c453e4();
    func_0x000107c5fadc(uVar4,uVar1);
    puVar5 = puVar3;
    func_0x000107c5e650(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c3ecc8(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 102e2757c; end: 102e275f7;  */

undefined1  [16] FUN_102e2757c(long *param_1)

{
  long *plVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  plVar1 = param_1;
  FUN_102e26680();
  *param_1 = (long)plVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = 0x102e275b0;
  return auVar2;
}



/* Entry: 102e275f8; end: 102e275ff;  */

void FUN_102e275f8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  func_0x0001007d6c6c(1,0x7465736572,0xe500000000000000,*unaff_x20,&PTR_DAT_1105d8998);
  FUN_102e267b0();
  FUN_102e26ad0(2);
  uVar1 = unaff_x20[9];
  unaff_x20[9] = 0;
  func_0x000107c61170(uVar1);
  uVar1 = unaff_x20[5];
  func_0x000107c54d84(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_reset_11262ba18);
  return;
}



/* Entry: 102e27600; end: 102e27623;  */

undefined8 FUN_102e27600(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102e27624; end: 102e27627; -[_TtC32PlayGamesLensLoggingServicesImpl29PlayGamesRenderingFPSProvider willCreateRenderModule] */

void FUN_102e27624(void)

{
  return;
}



/* Entry: 102e27628; end: 102e2762b; -[_TtC32PlayGamesLensLoggingServicesImpl29PlayGamesRenderingFPSProvider didCreateRenderModule] */

void FUN_102e27628(void)

{
  return;
}



/* Entry: 102e2762c; end: 102e2762f; -[_TtC32PlayGamesLensLoggingServicesImpl29PlayGamesRenderingFPSProvider willAttachRenderModule] */

void FUN_102e2762c(void)

{
  return;
}



/* Entry: 102e27630; end: 102e27633; -[_TtC32PlayGamesLensLoggingServicesImpl29PlayGamesRenderingFPSProvider didAttachRenderModule] */

void FUN_102e27630(void)

{
  return;
}



/* Entry: 102e27634; end: 102e27637; -[_TtC32PlayGamesLensLoggingServicesImpl29PlayGamesRenderingFPSProvider willRenderSampleBuffer:] */

void FUN_102e27634(void)

{
  return;
}



/* Entry: 102e27638; end: 102e276fb; -[_TtC32PlayGamesLensLoggingServicesImpl29PlayGamesRenderingFPSProvider didRenderSampleBuffer:latency:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e27638(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_2 + _DAT_112f1da70);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x0001007d6c6c(3,0xd00000000000001f,0x800000010f110a90,lVar1,&PTR_DAT_1105d8950);
  }
  else {
    func_0x000107c41b4c(param_1);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c615e8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102e276fc; end: 102e2775b; -[_TtC32PlayGamesLensLoggingServicesImpl29PlayGamesRenderingFPSProvider init] */

void FUN_102e276fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesLensLoggingServicesImpl.PlayGamesRenderingFPSProvider",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e27728);
  (*pcVar1)();
}



/* Entry: 102e2775c; end: 102e2776b; -[_TtC32PlayGamesLensLoggingServicesImpl29PlayGamesRenderingFPSProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2775c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f1da70));
  return;
}



/* Entry: 102e2776c; end: 102e2778b;  */

void FUN_102e2776c(void)

{
  func_0x000107c61168(&PTR_PTR_1128a8520);
  return;
}



/* Entry: 102e2778c; end: 102e277d3;  */

void FUN_102e2778c(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000102e2779c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 102e277d4; end: 102e277df; -[SCPlayGamesLensLoggerServicesEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e277d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f1daa0;
  func_0x000107c61428(param_1 + _DAT_112f1daa0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e277e0; end: 102e277eb; -[SCPlayGamesLensLoggerServicesEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e277e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f1daa0;
  func_0x000107c61428(param_1 + _DAT_112f1daa0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e277ec; end: 102e277f7; -[SCPlayGamesLensLoggerServicesEntryPoint playGamesScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e277ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f1daa8;
  func_0x000107c61428(param_1 + _DAT_112f1daa8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e277f8; end: 102e27803; -[SCPlayGamesLensLoggerServicesEntryPoint setPlayGamesScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e277f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f1daa8;
  func_0x000107c61428(param_1 + _DAT_112f1daa8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e27804; end: 102e2780f; -[SCPlayGamesLensLoggerServicesEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e27804(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f1dab0;
  func_0x000107c61428(param_1 + _DAT_112f1dab0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e27810; end: 102e2781b; -[SCPlayGamesLensLoggerServicesEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e27810(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f1dab0;
  func_0x000107c61428(param_1 + _DAT_112f1dab0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e2781c; end: 102e27827; -[SCPlayGamesLensLoggerServicesEntryPoint lensLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2781c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f1dab8;
  func_0x000107c61428(param_1 + _DAT_112f1dab8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e27828; end: 102e27833; -[SCPlayGamesLensLoggerServicesEntryPoint setLensLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e27828(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f1dab8;
  func_0x000107c61428(param_1 + _DAT_112f1dab8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e27834; end: 102e2783f; -[SCPlayGamesLensLoggerServicesEntryPoint lensProcessingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e27834(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f1dac0;
  func_0x000107c61428(param_1 + _DAT_112f1dac0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e27840; end: 102e2784b; -[SCPlayGamesLensLoggerServicesEntryPoint setLensProcessingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e27840(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f1dac0;
  func_0x000107c61428(param_1 + _DAT_112f1dac0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e2784c; end: 102e27857; -[SCPlayGamesLensLoggerServicesEntryPoint pipelineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2784c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f1dac8;
  func_0x000107c61428(param_1 + _DAT_112f1dac8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e27858; end: 102e2789b;  */

void FUN_102e27858(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102e2789c; end: 102e278a7; -[SCPlayGamesLensLoggerServicesEntryPoint setPipelineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2789c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f1dac8;
  func_0x000107c61428(param_1 + _DAT_112f1dac8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e278a8; end: 102e278fb;  */

void FUN_102e278a8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e278fc; end: 102e27943; -[SCPlayGamesLensLoggerServicesEntryPoint lensCarouselLoggerServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e278fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f1dad0;
  func_0x000107c61428(param_1 + _DAT_112f1dad0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102e27944; end: 102e2794f; -[SCPlayGamesLensLoggerServicesEntryPoint setLensCarouselLoggerServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e27944(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f1dad0;
  func_0x000107c61428(param_1 + _DAT_112f1dad0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102e27950; end: 102e27997; -[SCPlayGamesLensLoggerServicesEntryPoint playGamesLoggingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e27950(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f1dad8;
  func_0x000107c61428(param_1 + _DAT_112f1dad8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102e27998; end: 102e279a3; -[SCPlayGamesLensLoggerServicesEntryPoint setPlayGamesLoggingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e27998(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f1dad8;
  func_0x000107c61428(param_1 + _DAT_112f1dad8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102e279a4; end: 102e27a03;  */

void FUN_102e279a4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102e27a04; end: 102e27d2b;  */

/* WARNING: Possible PIC construction at 0x000102e27ba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e27bb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e27bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e27bd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e27cdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e27cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e27cfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e27cac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e27cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e27ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e27c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e27c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e27c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e27c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e27c3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e27c50) */
/* WARNING: Removing unreachable block (ram,0x000102e27c70) */
/* WARNING: Removing unreachable block (ram,0x000102e27ca0) */
/* WARNING: Removing unreachable block (ram,0x000102e27c90) */
/* WARNING: Removing unreachable block (ram,0x000102e27cd0) */
/* WARNING: Removing unreachable block (ram,0x000102e27cc0) */
/* WARNING: Removing unreachable block (ram,0x000102e27cb0) */
/* WARNING: Removing unreachable block (ram,0x000102e27d00) */
/* WARNING: Removing unreachable block (ram,0x000102e27cf0) */
/* WARNING: Removing unreachable block (ram,0x000102e27ce0) */
/* WARNING: Removing unreachable block (ram,0x000102e27bd8) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000102e27bc8) */
/* WARNING: Removing unreachable block (ram,0x000102e27bb8) */
/* WARNING: Removing unreachable block (ram,0x000102e27ba8) */
/* WARNING: Removing unreachable block (ram,0x000102e27c40) */

void FUN_102e27a04(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c4e88c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5d900();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c4b258();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c4b364();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar6 = unaff_x20;
          func_0x000107c4e780();
          func_0x000107c61180();
          if (lVar6 == 0) {
            func_0x000107c61170(lVar1);
            lVar1 = lVar2;
          }
          else {
            lVar7 = unaff_x20;
            func_0x000107c4aeac();
            func_0x000107c61180();
            if (lVar7 != 0) {
              func_0x000107c4e884();
              func_0x000107c61180();
              if (unaff_x20 != 0) {
                lVar8 = 0;
                FUN_102e256f4();
                func_0x000107c613fc();
                func_0x0001000c6560();
                *(undefined8 *)(lVar8 + 0x50) = 0;
                *(undefined8 *)(lVar8 + 0x58) = 0;
                *(undefined8 *)(lVar8 + 0x48) = 0;
                func_0x000107c613fc();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                lVar1 = unaff_x20;
                func_0x0001000c6580();
                *(long *)(lVar8 + 0x60) = lVar1;
                *(long *)(lVar8 + 0x10) = lVar2;
                *(long *)(lVar8 + 0x18) = lVar3;
                *(long *)(lVar8 + 0x20) = lVar4;
                *(long *)(lVar8 + 0x28) = lVar5;
                *(long *)(lVar8 + 0x30) = lVar6;
                *(long *)(lVar8 + 0x38) = lVar7;
                *(long *)(lVar8 + 0x40) = unaff_x20;
                FUN_102e24b30();
                lVar1 = unaff_x20;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 102e27d2c; end: 102e27d53; -[SCPlayGamesLensLoggerServicesEntryPoint begin] */

void FUN_102e27d2c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e27a04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e27d54; end: 102e2822b; -[SCPlayGamesLensLoggerServicesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e27d54(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar5 = *(undefined1 **)(param_1 + _DAT_112f1dae0);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    puVar3 = puVar5;
    func_0x000107c6157c();
    FUN_102e25470();
    func_0x000107c61574(puVar5);
    if (puVar3 != (undefined1 *)0x0) goto LAB_102e27de8;
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  lVar2 = param_1;
  puVar3 = (undefined1 *)plVar4;
LAB_102e27de8:
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 102e2822c; end: 102e282d7; -[SCPlayGamesLensLoggerServicesEntryPoint setValue:forIvarName:] */

void FUN_102e2822c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x000102e27e08(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102e282d8; end: 102e283b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e282d8(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f1daa0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f1daa8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f1dab0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f1dab8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f1dac0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f1dac8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f1dad0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f1dad8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f1dae0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102e283b4; end: 102e283d3; -[SCPlayGamesLensLoggerServicesEntryPoint init] */

void FUN_102e283b4(void)

{
  FUN_102e282d8();
  return;
}



/* Entry: 102e283d4; end: 102e28407;  */

void FUN_102e283d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e28408; end: 102e284af; -[SCPlayGamesLensLoggerServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e28408(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f1daa0);
  func_0x000107c61610(param_1 + _DAT_112f1daa8);
  func_0x000107c61610(param_1 + _DAT_112f1dab0);
  func_0x000107c61610(param_1 + _DAT_112f1dab8);
  func_0x000107c61610(param_1 + _DAT_112f1dac0);
  func_0x000107c61610(param_1 + _DAT_112f1dac8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f1dad0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f1dad8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f1dae0));
  return;
}



/* Entry: 102e284b0; end: 102e284cf;  */

void FUN_102e284b0(void)

{
  func_0x000107c61168(&PTR_PTR_1128a85e0);
  return;
}



/* Entry: 102e284d0; end: 102e28587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e284d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1db10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102e28588; end: 102e285e7; -[_TtC28PlayGamesLensLoggingServices28PlayGamesLensLoggingServices init] */

void FUN_102e28588(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesLensLoggingServices.PlayGamesLensLoggingServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e285b4);
  (*pcVar1)();
}



/* Entry: 102e285e8; end: 102e285f7; -[_TtC28PlayGamesLensLoggingServices28PlayGamesLensLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e285e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f1db10));
  return;
}



/* Entry: 102e285f8; end: 102e28617;  */

void FUN_102e285f8(void)

{
  func_0x000107c61168(&PTR_PTR_1128a86d8);
  return;
}



/* Entry: 102e28618; end: 102e28677;  */

undefined8 FUN_102e28618(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102e2880c(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 102e28678; end: 102e2869f;  */

void FUN_102e28678(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 102e286a0; end: 102e287bb;  */

undefined * FUN_102e286a0(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = uVar4;
  func_0x000107c4a214();
  if ((int)uVar5 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168();
    func_0x000107c3e26c();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined **)(unaff_x20 + 0x18) = puVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
    puVar3 = &UNK_1105d8b40;
    func_0x000107c613fc(&UNK_1105d8b40,0x18,7);
    *(undefined **)(puVar3 + 0x10) = puVar1;
    pcStack_40 = FUN_102e28a88;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1105d8b58;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    puVar3 = puStack_38;
    func_0x000107c61174(puVar1);
    func_0x000107c61574(puVar3);
    func_0x000107c4205c(uVar4);
    func_0x000107c60bd0(ppuVar2);
    puVar3 = puVar1;
    func_0x000107c4f3ec(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
  }
  return puVar3;
}



/* Entry: 102e287bc; end: 102e287e7;  */

void FUN_102e287bc(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e287e8; end: 102e287eb;  */

void FUN_102e287e8(void)

{
  return;
}



/* Entry: 102e287ec; end: 102e2880b;  */

void FUN_102e287ec(void)

{
  FUN_102e286a0();
  return;
}



/* Entry: 102e2880c; end: 102e28a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2880c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar6 = *(undefined **)(param_1 + _DAT_1130715e0);
  puVar1 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b1b50;
    func_0x000107c61168(PTR_PTR_1126b1b50);
    func_0x000107c41638();
    func_0x000107c61180();
  }
  puVar2 = PTR_PTR_1126b1b58;
  func_0x000107c610f8();
  func_0x000107c61174(puVar6);
  func_0x000107c48890();
  func_0x000107c61170(puVar1);
  func_0x0001000285a8(0x112d5c1e0,&UNK_10d923090);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + _DAT_1130715d0) + _DAT_1130715a8);
  func_0x000107c61174();
  func_0x000107c61174(uVar7);
  uVar4 = uVar7;
  func_0x0001000b637c();
  func_0x000107c61170(uVar7);
  pcVar3 = FUN_102e28678;
  func_0x0001000bfde0(FUN_102e28678,0,PTR___sSSN_11034da80);
  func_0x000107c61574(uVar4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1130715e8);
  func_0x000107c61174(uVar4);
  func_0x000107c4b2ec(param_2);
  func_0x000107c61180();
  uVar7 = 0;
  FUN_102e2c274(0);
  func_0x000107c610f8();
  puVar1 = puVar2;
  func_0x000102e2b0b8(puVar2,pcVar3,uVar4,param_2,uVar7);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  lVar5 = _DAT_113071610;
  func_0x000107c61428(param_1 + _DAT_113071610,auStack_68,0,0);
  lVar5 = param_1 + lVar5;
  func_0x000107c61618(lVar5);
  func_0x000107c61174(puVar1);
  func_0x000107c53fcc();
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(lVar5);
  lVar5 = _DAT_113071618;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61428(param_1 + _DAT_113071618,auStack_80,0,0);
  param_1 = param_1 + lVar5;
  func_0x000107c61618(param_1);
  func_0x000107c615f0(uVar4);
  func_0x000107c55f64();
  func_0x000107c615e8(uVar4);
  func_0x000107c615e8(param_1);
  func_0x000107c4ef54(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 102e28a88; end: 102e28aab;  */

void FUN_102e28a88(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102e28aac; end: 102e28acb;  */

void FUN_102e28aac(void)

{
  func_0x000107c61168(&PTR_PTR_112f1db80);
  return;
}



/* Entry: 102e28acc; end: 102e28b7b;  */

void FUN_102e28acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_8;
  *(undefined8 *)(unaff_x20 + 0x28) = param_10;
  *(undefined8 *)(unaff_x20 + 0x20) = param_9;
  *(undefined8 *)(unaff_x20 + 0x38) = param_12;
  *(undefined8 *)(unaff_x20 + 0x30) = param_11;
  *(undefined8 *)(unaff_x20 + 0x48) = param_14;
  *(undefined8 *)(unaff_x20 + 0x40) = param_13;
  *(undefined8 *)(unaff_x20 + 0x50) = param_15;
  *(undefined8 *)(unaff_x20 + 0x58) = param_4;
  *(undefined8 *)(unaff_x20 + 0x60) = param_5;
  *(undefined8 *)(unaff_x20 + 0x68) = param_6;
  *(undefined8 *)(unaff_x20 + 0x70) = param_16;
  *(undefined8 *)(unaff_x20 + 0x78) = param_7;
  *(undefined8 *)(unaff_x20 + 0x80) = param_3;
  return;
}



/* Entry: 102e28b7c; end: 102e28bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e28b7c(void)

{
  long unaff_x20;
  
  func_0x000107c5c734(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113071370));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102e28bf8; end: 102e28c53;  */

void FUN_102e28bf8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010317b9d4(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x00010317b808(param_1,param_2);
  return;
}



/* Entry: 102e28c54; end: 102e28c5b;  */

void FUN_102e28c54(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x00010317b9d4(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x00010317b808(uVar1,uVar2);
  return;
}



/* Entry: 102e28c5c; end: 102e28c83;  */

void FUN_102e28c5c(void)

{
  long unaff_x20;
  
  FUN_102e28c84(*(undefined8 *)(unaff_x20 + 0x10),&UNK_10317bedc,&UNK_10317ba84);
  return;
}



/* Entry: 102e28c84; end: 102e28ccb;  */

void FUN_102e28c84(undefined8 param_1,code *param_2,code *param_3)

{
  (*param_2)(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  (*param_3)();
  return;
}



/* Entry: 102e28ccc; end: 102e28d63;  */

void FUN_102e28ccc(void)

{
  long unaff_x20;
  
  FUN_102e28c84(*(undefined8 *)(unaff_x20 + 0x10),&UNK_10317b1e0,&UNK_10317ad2c);
  return;
}



/* Entry: 102e28d64; end: 102e28de7;  */

void FUN_102e28d64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c613fc(param_3,0x18,7);
  *(undefined8 *)(param_3 + 0x10) = param_2;
  func_0x0001000285a8(param_4,param_5);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  func_0x0001031797a8();
  return;
}



/* Entry: 102e28de8; end: 102e28f4f;  */

void FUN_102e28de8(void)

{
  long unaff_x20;
  
  FUN_102e28d64(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),&UNK_1105d8ed0,
                0x112f1dd28,&UNK_10db55e08,0x102e28f74);
  return;
}



/* Entry: 102e28f50; end: 102e28fd3;  */

void FUN_102e28f50(undefined8 *param_1,undefined8 param_2)

{
  func_0x000100766460();
  *param_1 = param_2;
  return;
}



/* Entry: 102e28fd4; end: 102e29013;  */

void FUN_102e28fd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 102e29014; end: 102e29047;  */

void FUN_102e29014(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 102e29048; end: 102e2908f;  */

void FUN_102e29048(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010073aee4(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x00010317bfcc();
  *param_1 = param_2;
  return;
}



/* Entry: 102e29090; end: 102e2909f;  */

void FUN_102e29090(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00010073aee4(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x00010317bfcc();
  *param_1 = uVar1;
  return;
}



/* Entry: 102e290a0; end: 102e290d7;  */

void FUN_102e290a0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102e290d8; end: 102e290fb;  */

undefined8 FUN_102e290d8(void)

{
  undefined8 uStack_18;
  
  func_0x0001000d224c(&uStack_18);
  return uStack_18;
}



/* Entry: 102e290fc; end: 102e29103;  */

void FUN_102e290fc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102e29104; end: 102e29127;  */

void FUN_102e29104(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e29128; end: 102e2914b;  */

void FUN_102e29128(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010073ac78();
  *param_1 = param_2;
  return;
}



/* Entry: 102e2914c; end: 102e29163;  */

void FUN_102e2914c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 102e29164; end: 102e2918f;  */

void FUN_102e29164(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e29190; end: 102e29373;  */

void FUN_102e29190(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 **ppuVar7;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar7 = &puStack_80;
  puVar2 = param_1;
  func_0x0001000d224c(&puStack_80);
  puVar1 = puStack_80;
  if (puStack_80 != (undefined1 *)0x0) {
    puVar3 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    puVar2 = puVar1;
    func_0x000107c4b3a0();
    func_0x000107c61180();
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(puVar3);
    func_0x0001000d224c(&puStack_80);
    puVar1 = puStack_80;
    if (puStack_80 != (undefined1 *)0x0) {
      puVar4 = PTR_PTR_1126ccbc8;
      func_0x000107c610f8(PTR_PTR_1126ccbc8);
      func_0x000107c5fadc(param_1,param_2);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
      func_0x000107c48544(puVar4);
      func_0x000107c61170(param_1);
      func_0x000107c61170(puVar5);
      puVar3 = puVar1;
      func_0x000107c43168(puVar1);
      func_0x000107c61180();
      puVar6 = puVar2;
      func_0x000107c3f3fc();
      if (((ulong)puVar6 & 1) != 0) {
        pcStack_60 = FUN_102e29374;
        uStack_58 = 0;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        pcStack_70 = FUN_1024ff1e4;
        puStack_68 = &UNK_1105d90c0;
        func_0x000107c60bc4(&puStack_80);
        func_0x000107c50708(puVar2);
        func_0x000107c60bd0(ppuVar7);
      }
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(puVar2);
      func_0x000107c615e8(puVar1);
      return;
    }
    func_0x000107c615e8();
  }
  func_0x000102e294c8();
  func_0x000107c613f8(&UNK_1105d91c8,puVar2,0,0);
  *puVar2 = 0;
  func_0x000107c61654();
  return;
}



/* Entry: 102e29374; end: 102e2949f;  */

void FUN_102e29374(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar3 = &puStack_70;
  ppuVar4 = &puStack_70;
  pcStack_50 = FUN_102e294a0;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = (undefined *)0x102e29534;
  puStack_58 = &UNK_1105d90e8;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(uStack_48);
  pcStack_50 = FUN_102e294a0;
  uStack_48 = 0;
  puStack_70 = puVar1;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100e27b38;
  puStack_58 = &UNK_1105d9110;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(uStack_48);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  uVar5 = 0;
  func_0x000107c61544(0,"",0x7b,0x2c,0x21,1);
  if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102e2949c);
    (*pcVar2)();
  }
  uVar5 = 0;
  func_0x000107c61544(0,"",0x7b,0x2e,0x18,1);
  if ((uVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102e294a0);
  (*pcVar2)();
}



/* Entry: 102e294a0; end: 102e294a7;  */

void FUN_102e294a0(void)

{
  return;
}



/* Entry: 102e294a8; end: 102e29507;  */

void FUN_102e294a8(void)

{
  func_0x000107c61168(&PTR_PTR_112f1de58);
  return;
}



/* Entry: 102e29508; end: 102e2954b;  */

void FUN_102e29508(long param_1,long param_2)

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



/* Entry: 102e2954c; end: 102e295f7;  */

void FUN_102e2954c(void)

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



/* Entry: 102e295f8; end: 102e29607;  */

void FUN_102e295f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102e29608; end: 102e297ef;  */

void FUN_102e29608(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 *apuStack_80 [2];
  
  puVar1 = (undefined1 *)0x112f1df88;
  func_0x0001000285a8(0x112f1df88,&UNK_10db55fe0);
  lVar5 = *(long *)(puVar1 + -8);
  puVar2 = puVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(apuStack_80);
  puVar3 = apuStack_80[0];
  if (apuStack_80[0] != (undefined1 *)0x0) {
    func_0x0001000d224c(apuStack_80);
    if (apuStack_80[0] != (undefined1 *)0x0) {
      lVar6 = *(long *)(unaff_x20 + 0x28);
      puVar4 = PTR_PTR_1126cce30;
      if (lVar6 == 0) {
        func_0x000107c61168(PTR_PTR_1126cce30);
        func_0x000107c4156c();
        func_0x000107c61180();
      }
      else {
        uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
        uStack_88 = param_1;
        func_0x000107c61168(PTR_PTR_1126cce30);
        func_0x000107c5fadc(uVar7,lVar6);
        func_0x000107c3e6dc(puVar4);
        func_0x000107c61180();
        param_1 = uStack_88;
        func_0x000107c61170(uVar7);
      }
      puVar2 = puVar3;
      func_0x000107c3f6ec();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
      *(undefined1 **)(unaff_x20 + 0x30) = puVar2;
      func_0x000107c615e8(uVar7);
      (**(code **)(lVar5 + 0x68))
                (auStack_90 + -extraout_x8,
                 *(undefined4 *)
                  PTR___sScs12ContinuationV15BufferingPolicyO9unboundedyADyxq___GAFms5ErrorR_r0_lFWC_11034fee8
                 ,puVar1);
      func_0x000107c5fdc8(param_1,&UNK_1105d9458,auStack_90 + -extraout_x8,FUN_102e2a1b4,apuStack_80
                          ,&UNK_1105d9458);
      func_0x000107c615e8(apuStack_80[0]);
      func_0x000107c615e8(puVar3);
      return;
    }
    func_0x000107c615e8();
    puVar2 = puVar3;
  }
  func_0x000102e294c8();
  func_0x000107c613f8(&UNK_1105d91c8,puVar2,0,0);
  *puVar2 = 0;
  func_0x000107c61654();
  return;
}



/* Entry: 102e297f0; end: 102e29cfb;  */

void FUN_102e297f0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long extraout_x8;
  undefined1 *puVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = 0x112f1df90;
  func_0x0001000285a8(0x112f1df90,&UNK_10db55fe8);
  lVar11 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar9 + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_b0 + -extraout_x8;
  lVar3 = *(long *)(param_2 + 0x30);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c3f6f0();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c4da88();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar4;
    func_0x000107c421ac();
    func_0x000107c61180();
    lStack_a8 = lVar3;
    func_0x000107c61170(lVar4);
    pcVar10 = *(code **)(lVar11 + 0x10);
    (*pcVar10)(puVar8,param_1,lVar2);
    uVar13 = (ulong)*(byte *)(lVar11 + 0x50);
    uVar14 = uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff);
    puVar5 = &UNK_1105d91e8;
    func_0x000107c613fc(&UNK_1105d91e8,uVar14 + lVar9,uVar13 | 7);
    pcVar12 = *(code **)(lVar11 + 0x20);
    (*pcVar12)(puVar5 + uVar14,puVar8,lVar2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = (code *)0x102e2a1bc;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_102e29f64;
    puStack_88 = &UNK_1105d9200;
    ppuVar6 = &puStack_a0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_78);
    (*pcVar10)(puVar8,param_1,lVar2);
    puVar5 = &UNK_1105d9238;
    func_0x000107c613fc(&UNK_1105d9238,uVar14 + lVar9,uVar13 | 7);
    (*pcVar12)(puVar5 + uVar14,puVar8,lVar2);
    pcStack_80 = FUN_102e2a1e4;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_1000f6b44;
    puStack_88 = &UNK_1105d9250;
    ppuVar7 = &puStack_a0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_78);
    lVar9 = lStack_a8;
    lVar3 = lStack_a8;
    func_0x000107c5c324();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar9);
  }
  puVar5 = &UNK_1105d9288;
  func_0x000107c613fc(&UNK_1105d9288,0x18,7);
  *(long *)(puVar5 + 0x10) = lVar3;
  func_0x000107c5fda8(FUN_102e2a258,puVar5,lVar2);
  return;
}



/* Entry: 102e29cfc; end: 102e29eb7;  */

void FUN_102e29cfc(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0x112f1df98;
  func_0x0001000285a8(0x112f1df98,&UNK_10db55ff0);
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_1 != (undefined1 *)0x0) {
    func_0x000107c61174();
    puVar2 = param_1;
    func_0x000107c3da44();
    func_0x000107c61180();
    puVar6 = puVar2;
    func_0x000107c3f6e0();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
    uVar3 = 0;
    FUN_102e2a354();
    puVar2 = puVar6;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar6);
    if ((ulong)puVar2 >> 0x3e == 0) {
      puVar6 = *(undefined1 **)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar6 = (undefined1 *)((ulong)puVar2 & 0xffffffffffffff8);
      if ((undefined1 *)0x7fffffffffffffff < puVar2) {
        puVar6 = puVar2;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(puVar2);
    if (puVar6 != (undefined1 *)0x0) {
      func_0x000107c61174();
      puVar2 = param_1;
      FUN_102e2a6a0();
      uVar4 = 0x112f1df90;
      puStack_68 = puVar2;
      uStack_60 = uVar3;
      uStack_58 = param_3;
      func_0x0001000285a8(0x112f1df90,&UNK_10db55fe8);
      func_0x000107c5fdb0(auStack_70 + -extraout_x8,&puStack_68,uVar4);
      func_0x000107c61170(param_1);
      (**(code **)(lVar7 + 8))(auStack_70 + -extraout_x8,lVar1);
      return;
    }
    func_0x000107c61170();
  }
  func_0x000102e294c8();
  puVar5 = &UNK_1105d91c8;
  func_0x000107c613f8(&UNK_1105d91c8,param_1,0,0);
  *param_1 = 2;
  uVar3 = 0x112f1df90;
  puStack_68 = puVar5;
  func_0x0001000285a8(0x112f1df90,&UNK_10db55fe8);
  func_0x000107c5fdb4(&puStack_68,uVar3);
  return;
}



/* Entry: 102e29eb8; end: 102e29ef7;  */

void FUN_102e29eb8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102e29ef8; end: 102e29f63;  */

void FUN_102e29ef8(undefined1 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_28;
  
  func_0x000102e294c8();
  puVar1 = &UNK_1105d91c8;
  func_0x000107c613f8(&UNK_1105d91c8,param_1,0,0);
  *param_1 = 1;
  uVar2 = 0x112f1df90;
  puStack_28 = puVar1;
  func_0x0001000285a8(0x112f1df90,&UNK_10db55fe8);
  func_0x000107c5fdb4(&puStack_28,uVar2);
  return;
}



/* Entry: 102e29f64; end: 102e29faf;  */

void FUN_102e29f64(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102e29fb0; end: 102e2a00b;  */

void FUN_102e29fb0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e2a00c; end: 102e2a173;  */

int FUN_102e2a00c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102e2a088;
        goto LAB_102e2a06c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102e2a06c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_102e2a088:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102e2a174; end: 102e2a1b3;  */

void FUN_102e2a174(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1df80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db55f78;
  func_0x000107c61520(&UNK_10db55f78,&UNK_1105d91c8);
  puRam0000000112f1df80 = puVar1;
  return;
}



/* Entry: 102e2a1b4; end: 102e2a1e3;  */

void FUN_102e2a1b4(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = 0x112f1df90;
  func_0x0001000285a8(0x112f1df90,&UNK_10db55fe8);
  lVar11 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar9 + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_b0 + -extraout_x8;
  lVar3 = *(long *)(lVar3 + 0x30);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c3f6f0();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c4da88();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar4;
    func_0x000107c421ac();
    func_0x000107c61180();
    lStack_a8 = lVar3;
    func_0x000107c61170(lVar4);
    pcVar10 = *(code **)(lVar11 + 0x10);
    (*pcVar10)(puVar8,param_1,lVar2);
    uVar13 = (ulong)*(byte *)(lVar11 + 0x50);
    uVar14 = uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff);
    puVar5 = &UNK_1105d91e8;
    func_0x000107c613fc(&UNK_1105d91e8,uVar14 + lVar9,uVar13 | 7);
    pcVar12 = *(code **)(lVar11 + 0x20);
    (*pcVar12)(puVar5 + uVar14,puVar8,lVar2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = (code *)0x102e2a1bc;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_102e29f64;
    puStack_88 = &UNK_1105d9200;
    ppuVar6 = &puStack_a0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_78);
    (*pcVar10)(puVar8,param_1,lVar2);
    puVar5 = &UNK_1105d9238;
    func_0x000107c613fc(&UNK_1105d9238,uVar14 + lVar9,uVar13 | 7);
    (*pcVar12)(puVar5 + uVar14,puVar8,lVar2);
    pcStack_80 = FUN_102e2a1e4;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_1000f6b44;
    puStack_88 = &UNK_1105d9250;
    ppuVar7 = &puStack_a0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_78);
    lVar9 = lStack_a8;
    lVar3 = lStack_a8;
    func_0x000107c5c324();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar9);
  }
  puVar5 = &UNK_1105d9288;
  func_0x000107c613fc(&UNK_1105d9288,0x18,7);
  *(long *)(puVar5 + 0x10) = lVar3;
  func_0x000107c5fda8(FUN_102e2a258,puVar5,lVar2);
  return;
}



/* Entry: 102e2a1e4; end: 102e2a257;  */

void FUN_102e2a1e4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_38;
  
  lVar2 = 0x112f1df90;
  lVar1 = lVar2;
  func_0x0001000285a8(0x112f1df90,&UNK_10db55fe8);
  uStack_38 = 0;
  func_0x0001000285a8(*(undefined1 *)(*(long *)(lVar1 + -8) + 0x50),0x112f1df90,&UNK_10db55fe8);
  func_0x000107c5fdb4(&uStack_38,lVar2);
  return;
}



/* Entry: 102e2a258; end: 102e2a26b;  */

void FUN_102e2a258(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 102e2a26c; end: 102e2a28b;  */

void FUN_102e2a26c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}


