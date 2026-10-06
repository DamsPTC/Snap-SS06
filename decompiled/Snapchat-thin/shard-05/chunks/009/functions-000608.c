/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10433fe5c; end: 10433feb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433fe5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306fc80);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306fc88);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306fc90) = param_5;
  func_0x0001004717a0();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10433feb8; end: 10433ff5b; -[SCLensCoreUsageEvent initWithLensCoreId:contextId:lensUsage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433feb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_50;
  undefined8 uStack_48;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11306fc80);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_11306fc88);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  *(undefined8 *)(param_1 + _DAT_11306fc90) = param_5;
  func_0x0001004717a0();
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  uStack_48 = param_4;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 10433ff5c; end: 10433ff87; -[SCLensCoreUsageEvent init] */

void FUN_10433ff5c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensProcessingUsageApi.LensCoreUsageEvent",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10433ff88);
  (*pcVar1)();
}



/* Entry: 10433ff88; end: 10433ff93;  */

void FUN_10433ff88(void)

{
  (*(code *)&SUB_1004717a0)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10433ff94; end: 10433ffc3;  */

void FUN_10433ff94(code *param_1)

{
  (*param_1)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10433ffc4; end: 104340013; -[SCLensCoreUsageEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433ffc4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306fc80 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306fc88 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306fc90));
  return;
}



/* Entry: 104340014; end: 104340027;  */

bool FUN_104340014(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104340028; end: 1043400ff;  */

void FUN_104340028(void)

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



/* Entry: 104340100; end: 10434011f;  */

void FUN_104340100(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104340120; end: 10434015f;  */

void FUN_104340120(void)

{
  undefined *puVar1;
  
  if (puRam000000011306fce8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dced420;
  _swift_getWitnessTable(&UNK_10dced420,&UNK_11075c628);
  puRam000000011306fce8 = puVar1;
  return;
}



/* Entry: 104340160; end: 10434016f;  */

undefined1  [16] FUN_104340160(void)

{
  return ZEXT816(0x11075c628);
}



/* Entry: 104340170; end: 1043401bb; -[SCLensGenAIUsageEvent lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104340170(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306fcf0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306fcf0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043401bc; end: 1043401cb; -[SCLensGenAIUsageEvent state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043401bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306fcf8);
}



/* Entry: 1043401cc; end: 1043401db; -[SCLensGenAIUsageEvent timestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043401cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306fd00);
}



/* Entry: 1043401dc; end: 1043402e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043401dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306fcf0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306fcf8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306fd00) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043402e4; end: 10434036f; -[SCLensGenAIUsageEvent initWithLensId:state:timestampMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043402e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11306fcf0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11306fcf8) = param_4;
  *(undefined8 *)(param_1 + _DAT_11306fd00) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104340370; end: 1043403cf; -[SCLensGenAIUsageEvent init] */

void FUN_104340370(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensProcessingUsageApi.LensGenAIUsageEvent",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10434039c);
  (*pcVar1)();
}



/* Entry: 1043403d0; end: 1043403e3; -[SCLensGenAIUsageEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043403d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306fcf0 + 8))
  ;
  return;
}



/* Entry: 1043403e4; end: 104340403;  */

void FUN_1043403e4(void)

{
  _objc_opt_self(&PTR_PTR_11299f610);
  return;
}



/* Entry: 104340404; end: 10434041b;  */

bool FUN_104340404(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10434041c; end: 10434045b;  */

void FUN_10434041c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306fd30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dced500;
  _swift_getWitnessTable(&UNK_10dced500,&UNK_11075c6a0);
  puRam000000011306fd30 = puVar1;
  return;
}



/* Entry: 10434045c; end: 104340507;  */

void FUN_10434045c(void)

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



/* Entry: 104340508; end: 10434053f;  */

void FUN_104340508(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 104340540; end: 10434058b; -[SCLensMLModelPerfEvent modelName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104340540(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306fd38);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306fd38))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10434058c; end: 10434059b; -[SCLensMLModelPerfEvent lens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434058c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306fd40));
  return;
}



/* Entry: 10434059c; end: 1043405ab; -[SCLensMLModelPerfEvent loadingStartedTimeStamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434059c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306fd48));
  return;
}



/* Entry: 1043405ac; end: 1043405bb; -[SCLensMLModelPerfEvent loadingEndedTimeStamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043405ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306fd50));
  return;
}



/* Entry: 1043405bc; end: 1043405cb; -[SCLensMLModelPerfEvent usedTimeStamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043405bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306fd58));
  return;
}



/* Entry: 1043405cc; end: 104340677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043405cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306fd38);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306fd40) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306fd48) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306fd50) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306fd58) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104340678; end: 104340707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104340678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306fd38);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306fd40) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306fd48) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306fd50) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306fd58) = param_6;
  func_0x0001043406e8();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104340708; end: 104340763; -[SCLensMLModelPerfEvent init] */

void FUN_104340708(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensProcessingUsageApi.LensMLModelPerfEvent",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104340734);
  (*pcVar1)();
}



/* Entry: 104340764; end: 1043407cf; -[SCLensMLModelPerfEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104340764(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306fd38 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306fd40));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306fd48));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306fd50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306fd58));
  return;
}



/* Entry: 1043407d0; end: 1043407db; -[SCLensUsageFunnelEvent sessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043407d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306fd88);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306fd88))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043407dc; end: 1043407e7; -[SCLensUsageFunnelEvent lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043407dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306fd90);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306fd90))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043407e8; end: 10434082f;  */

void FUN_1043407e8(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104340830; end: 10434088b; -[SCLensUsageFunnelEvent lensContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104340830(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306fd98))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306fd98);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10434088c; end: 10434089b; -[SCLensUsageFunnelEvent applyDelay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434088c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306fda0));
  return;
}



/* Entry: 10434089c; end: 1043408ab; -[SCLensUsageFunnelEvent isApplied] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10434089c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306fda8);
}



/* Entry: 1043408ac; end: 1043408fb; -[SCLensUsageFunnelEvent mlModelsInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043408ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306fdb0);
  func_0x0001043406e8(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043408fc; end: 10434090b; -[SCLensUsageFunnelEvent applyRequested] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043408fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306fdb8));
  return;
}



/* Entry: 10434090c; end: 10434091b; -[SCLensUsageFunnelEvent nativeApply] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434090c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306fdc0));
  return;
}



/* Entry: 10434091c; end: 10434092b; -[SCLensUsageFunnelEvent firstFrameReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434091c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306fdc8));
  return;
}



/* Entry: 10434092c; end: 10434093b; -[SCLensUsageFunnelEvent lensLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434092c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306fdd0));
  return;
}



/* Entry: 10434093c; end: 10434094b; -[SCLensUsageFunnelEvent removeRequested] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434093c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306fdd8));
  return;
}



/* Entry: 10434094c; end: 10434095b; -[SCLensUsageFunnelEvent turnedOff] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434094c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306fde0));
  return;
}



/* Entry: 10434095c; end: 10434096b; -[SCLensUsageFunnelEvent firstException] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434095c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306fde8));
  return;
}



/* Entry: 10434096c; end: 104340ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434096c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306fd88);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306fd90);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306fd98);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306fda0) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_11306fda8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306fdb0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11306fdb8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11306fdc0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11306fdc8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11306fdd0) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11306fdd8) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_11306fde0) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_11306fde8) = param_16;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104340ad4; end: 104340bdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104340ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306fd88);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306fd90);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306fd98);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306fda0) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_11306fda8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306fdb0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11306fdb8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11306fdc0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11306fdc8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11306fdd0) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11306fdd8) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_11306fde0) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_11306fde8) = param_16;
  func_0x000104340bbc();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104340bdc; end: 104340d03; -[SCLensUsageFunnelEvent initWithSessionId:lensId:lensContext:applyDelay:isApplied:mlModelsInfo:applyRequested:nativeApply:firstFrameReady:lensLoaded:removeRequested:turnedOff:firstException:] */

void FUN_104340bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_a8;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar2 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_5 == 0) {
    uStack_a8 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = uVar2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a8 = param_5;
  }
  uVar1 = 0;
  func_0x0001043406e8(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_8,uVar1);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  FUN_104340ad4(param_3,param_2,param_4,uVar2,uStack_a8,uVar3,param_6,param_7,param_8,param_9,
                param_10,param_11,param_12,param_13,param_14,param_15);
  return;
}



/* Entry: 104340d04; end: 104340d5f; -[SCLensUsageFunnelEvent init] */

void FUN_104340d04(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensProcessingUsageApi.LensUsageFunnelEvent",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104340d30);
  (*pcVar1)();
}



/* Entry: 104340d60; end: 104340e43; -[SCLensUsageFunnelEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104340d60(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306fd88 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306fd90 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306fd98 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306fda0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306fdb0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306fdb8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306fdc0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306fdc8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306fdd0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306fdd8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306fde0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306fde8));
  return;
}



/* Entry: 104340e44; end: 104340e5b;  */

void FUN_104340e44(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = param_2;
  uVar6 = param_3;
  (*(code *)0x1043478b4)();
  uVar2 = uVar1;
  uVar7 = uVar6;
  func_0x000104347980();
  uVar3 = uVar2;
  uVar8 = uVar7;
  func_0x000104347a50();
  uVar4 = uVar3;
  uVar9 = uVar8;
  func_0x000104347b1c();
  uVar5 = uVar4;
  uVar10 = uVar9;
  func_0x000104347be8();
  _swift_bridgeObjectRetain(param_3);
  FUN_104340f4c(param_4,param_5,param_6,param_7);
  *param_1 = uVar1;
  param_1[1] = uVar6;
  param_1[2] = uVar2;
  param_1[3] = uVar7;
  param_1[4] = uVar3;
  param_1[5] = uVar8;
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[8] = param_4;
  param_1[9] = param_5;
  param_1[10] = param_6;
  param_1[0xb] = param_7;
  *(undefined1 *)(param_1 + 0xc) = param_8;
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar9;
  param_1[0xf] = uVar5;
  param_1[0x10] = uVar10;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  return;
}



/* Entry: 104340e5c; end: 104340f4b;  */

void FUN_104340e5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  code *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = param_2;
  uVar6 = param_3;
  (*param_9)();
  uVar2 = uVar1;
  uVar7 = uVar6;
  func_0x000104347980();
  uVar3 = uVar2;
  uVar8 = uVar7;
  func_0x000104347a50();
  uVar4 = uVar3;
  uVar9 = uVar8;
  func_0x000104347b1c();
  uVar5 = uVar4;
  uVar10 = uVar9;
  func_0x000104347be8();
  _swift_bridgeObjectRetain(param_3);
  FUN_104340f4c(param_4,param_5,param_6,param_7);
  *param_1 = uVar1;
  param_1[1] = uVar6;
  param_1[2] = uVar2;
  param_1[3] = uVar7;
  param_1[4] = uVar3;
  param_1[5] = uVar8;
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[8] = param_4;
  param_1[9] = param_5;
  param_1[10] = param_6;
  param_1[0xb] = param_7;
  *(undefined1 *)(param_1 + 0xc) = param_8;
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar9;
  param_1[0xf] = uVar5;
  param_1[0x10] = uVar10;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  return;
}



/* Entry: 104340f4c; end: 104340f7b;  */

void FUN_104340f4c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRetain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
    return;
  }
  return;
}



/* Entry: 104340f7c; end: 104340f9b;  */

void FUN_104340f7c(undefined8 *param_1)

{
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 104340f9c; end: 104341733;  */

void FUN_104340f9c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  if (*(long *)(param_1 + 0x48) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x58));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x90));
  return;
}



/* Entry: 104341734; end: 104341793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104341734(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_11306fe18;
  lVar2 = *(long *)(unaff_x20 + _DAT_11306fe18);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_104341794();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _objc_retain();
    _objc_release(uVar4);
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  return lVar2;
}



/* Entry: 104341794; end: 10434186b;  */

undefined * FUN_104341794(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_allocWithZone(PTR_PTR_1126aea58);
  func_0x00010bfee200();
  func_0x00010c21ad00();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retain(puVar1);
  func_0x00010c23ba80(puVar2,param_2,0x3e);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c1cfce0(puVar1,param_2,1);
  func_0x00010c165e20(puVar1,param_2,1);
  func_0x00010c1c83a0(0x3fe6666666666666,puVar1);
  func_0x00010c21e900(puVar1,param_2,0);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar1,param_2,0);
  return puVar1;
}



/* Entry: 10434186c; end: 104341b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10434186c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffff80;
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_11306fe18) = 0;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00010c1af000();
  func_0x00010c161080(puVar2);
  if (lRam0000000113070008 != -1) {
    _swift_once(0x113070008,0x10434707c);
  }
  func_0x00010c16e440(puVar2);
  puVar3 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar3);
  FUN_104341734();
  func_0x00010befbb60(puVar2);
  _objc_release(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  _objc_opt_self();
  puVar5 = puVar4;
  func_0x0001008478a8();
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 7;
  *(undefined8 *)(puVar5 + 0x10) = 3;
  lVar1 = _DAT_11306fe18;
  uVar6 = *(undefined8 *)(puVar2 + _DAT_11306fe18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493c0(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar3);
  *(undefined8 *)(puVar5 + 0x20) = uVar7;
  uVar6 = *(undefined8 *)(puVar2 + lVar1);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2793a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493c0(0xc032000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar3);
  *(undefined8 *)(puVar5 + 0x28) = uVar7;
  uVar6 = *(undefined8 *)(puVar2 + lVar1);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf348e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar7 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar3);
  *(undefined8 *)(puVar5 + 0x30) = uVar7;
  uVar7 = 0;
  func_0x000100847984(0);
  puVar8 = puVar5;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar5,uVar7);
  _swift_release(puVar5);
  func_0x00010beef8c0(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar8);
  return puVar2;
}



/* Entry: 104341b30; end: 104341b4f; -[_TtC23GamesLensPlusUpsellCard14DarkPillButton initWithFrame:] */

void FUN_104341b30(void)

{
  FUN_10434186c();
  return;
}



/* Entry: 104341b50; end: 104341bb3; -[_TtC23GamesLensPlusUpsellCard14DarkPillButton initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104341b50(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_11306fe18) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
             "GamesLensPlusUpsellCard/DarkPillButton.swift",0x2c,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104341bb4);
  (*pcVar1)();
}



/* Entry: 104341bb4; end: 104341bef; -[_TtC23GamesLensPlusUpsellCard14DarkPillButton isHighlighted] */

void FUN_104341bb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_isHighlighted_1125fad78);
  return;
}



/* Entry: 104341bf0; end: 104341c8b; -[_TtC23GamesLensPlusUpsellCard14DarkPillButton setHighlighted:] */

void FUN_104341bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar2 = (int)&uStack_50;
  uVar3 = param_1;
  _swift_getObjectType();
  puVar1 = PTR_s_setHighlighted__112647c38;
  uStack_40 = param_1;
  uStack_38 = uVar3;
  _objc_retain();
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  uStack_50 = param_1;
  uStack_48 = uVar3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_isHighlighted_1125fad78);
  uVar3 = 0x3feb333333333333;
  if (iVar2 == 0) {
    uVar3 = 0x3ff0000000000000;
  }
  func_0x00010c1677c0(uVar3,param_1);
  _objc_release(param_1);
  return;
}



/* Entry: 104341c8c; end: 104341d17; -[_TtC23GamesLensPlusUpsellCard14DarkPillButton layoutSubviews] */

void FUN_104341c8c(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2;
  _swift_getObjectType();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  uStack_30 = param_2;
  uStack_28 = uVar2;
  _objc_retain(param_2);
  _objc_msgSendSuper2(&uStack_30,puVar1);
  uVar2 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  func_0x00010c1842e0(param_1 * 0.5,uVar2);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 104341d18; end: 104341db3; -[_TtC23GamesLensPlusUpsellCard14DarkPillButton pointInside:withEvent:] */

undefined8 FUN_104341d18(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  uVar1 = param_1;
  func_0x00010bf20c00(param_1);
  _CGRectInset();
  _CGRectContainsPoint();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104341db4; end: 104341de7;  */

void FUN_104341db4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104341de8; end: 104341df7; -[_TtC23GamesLensPlusUpsellCard14DarkPillButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104341de8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306fe18));
  return;
}



/* Entry: 104341df8; end: 104341e17;  */

void FUN_104341df8(void)

{
  _objc_opt_self(&PTR_PTR_11299f8e0);
  return;
}



/* Entry: 104341e18; end: 104341fdf;  */

long FUN_104341e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _swift_allocObject();
  _swift_unknownObjectWeakInit(unaff_x20 + 0x40,0);
  FUN_104340f7c(&uStack_f8);
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_70;
  *(undefined8 *)(unaff_x20 + 200) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_68;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_b8;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_58;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return unaff_x20;
}



/* Entry: 104341fe0; end: 10434202f;  */

void FUN_104341fe0(void)

{
  long unaff_x20;
  
  FUN_104342030();
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100db5f18(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x40);
  FUN_1043422b4(unaff_x20 + 0x48);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000100db5f18(*(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118));
  return;
}



/* Entry: 104342030; end: 1043422b3;  */

void FUN_104342030(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  func_0x000100db5f18(uVar3,uVar1);
  FUN_104340f7c(&uStack_1b8);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_90 = *(undefined8 *)(unaff_x20 + 200);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_140;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_148;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_130;
  *(undefined8 *)(unaff_x20 + 200) = uStack_138;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_120;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_128;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_160;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_150;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_158;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_1a8;
  uStack_70 = *(undefined8 *)(unaff_x20 + 0xe8);
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_198;
  FUN_1043422b4(&uStack_110);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xf8);
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  _swift_bridgeObjectRelease(uVar3);
  lVar4 = unaff_x20 + 0x40;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 != 0) {
    _swift_unknownObjectWeakAssign(unaff_x20 + 0x40,0);
    puVar5 = &UNK_11075cb40;
    _swift_allocObject(&UNK_11075cb40,0x18,7);
    *(long *)(puVar5 + 0x10) = lVar4;
    _objc_retain();
    func_0x00010c21e900();
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_self(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar7 = &UNK_11075cb68;
    _swift_allocObject(&UNK_11075cb68,0x18,7);
    *(long *)(puVar7 + 0x10) = lVar4;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c8 = 0x10434345c;
    puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1e0 = 0x42000000;
    puStack_1d8 = &UNK_1000f6b44;
    puStack_1d0 = &UNK_11075cb80;
    ppuVar8 = &puStack_1e8;
    puStack_1c0 = puVar7;
    __Block_copy(ppuVar8);
    puVar7 = puStack_1c0;
    _objc_retain(lVar4);
    _swift_release(puVar7);
    puVar7 = &UNK_11075cbb8;
    _swift_allocObject(&UNK_11075cbb8,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_104343454;
    *(undefined **)(puVar7 + 0x18) = puVar5;
    uStack_1c8 = 0x104343464;
    puStack_1e8 = puVar2;
    uStack_1e0 = 0x42000000;
    puStack_1d8 = &UNK_100288f10;
    puStack_1d0 = &UNK_11075cbd0;
    ppuVar9 = &puStack_1e8;
    puStack_1c0 = puVar7;
    __Block_copy(ppuVar9);
    puVar7 = puStack_1c0;
    _swift_retain(puVar5);
    _swift_release(puVar7);
    func_0x00010bf03440(0x3fc70a3d70a3d70a,0,puVar6);
    __Block_release(ppuVar9);
    __Block_release(ppuVar8);
    _objc_release(lVar4);
    _swift_release(puVar5);
  }
  return;
}



/* Entry: 1043422b4; end: 1043422fb;  */

undefined8 FUN_1043422b4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x11306fe48;
  func_0x0001000285a8(0x11306fe48,&UNK_10dced6f0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1043422fc; end: 10434231b;  */

void FUN_1043422fc(void)

{
  FUN_104341fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10434231c; end: 104342a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10434231c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined **ppuVar16;
  long unaff_x20;
  code *pcVar17;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_88 = param_1[0x11];
  uStack_90 = param_1[0x10];
  uStack_78 = param_1[0x13];
  uStack_80 = param_1[0x12];
  uStack_70 = param_1[0x14];
  uStack_c8 = param_1[9];
  uStack_d0 = param_1[8];
  uStack_b8 = param_1[0xb];
  uStack_c0 = param_1[10];
  uStack_a8 = param_1[0xd];
  uStack_b0 = param_1[0xc];
  uStack_98 = param_1[0xf];
  uStack_a0 = param_1[0xe];
  uStack_108 = param_1[1];
  uStack_110 = *param_1;
  uStack_f8 = param_1[3];
  uStack_100 = param_1[2];
  uStack_e8 = param_1[5];
  uStack_f0 = param_1[4];
  uStack_d8 = param_1[7];
  uStack_e0 = param_1[6];
  lVar4 = unaff_x20 + 0x40;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 == 0) {
    puVar6 = &UNK_11075c958;
    _swift_allocObject(&UNK_11075c958,0x11,7);
    puVar6[0x10] = 0;
    puVar7 = &UNK_11075c980;
    _swift_allocObject(&UNK_11075c980,0x18,7);
    _swift_weakInit(puVar7 + 0x10);
    puVar8 = &UNK_11075c9a8;
    _swift_allocObject(&UNK_11075c9a8,0x20,7);
    *(undefined **)(puVar8 + 0x10) = puVar6;
    *(undefined **)(puVar8 + 0x18) = puVar7;
    puVar7 = &UNK_11075c9d0;
    _swift_allocObject(&UNK_11075c9d0,0x30,7);
    *(code **)(puVar7 + 0x10) = FUN_104342b30;
    *(undefined **)(puVar7 + 0x18) = puVar8;
    *(undefined8 *)(puVar7 + 0x20) = param_2;
    *(undefined8 *)(puVar7 + 0x28) = param_3;
    puVar9 = &UNK_11075c9f8;
    _swift_allocObject(&UNK_11075c9f8,0x30,7);
    *(code **)(puVar9 + 0x10) = FUN_104342b30;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    *(undefined8 *)(puVar9 + 0x20) = param_4;
    *(undefined8 *)(puVar9 + 0x28) = param_5;
    FUN_1043462bc(0);
    _objc_allocWithZone();
    _swift_retain_n(puVar8,2);
    _swift_retain(puVar6);
    _swift_retain(param_3);
    _swift_retain(param_5);
    func_0x0001043432bc(param_1,&uStack_1c0);
    puVar10 = param_1;
    FUN_1043441d4(param_1,FUN_104342b38,puVar7,0x104343478,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c219b60();
    pcVar17 = *(code **)(unaff_x20 + 0x20);
    if (pcVar17 == (code *)0x0) {
      (**(code **)(unaff_x20 + 0x10))();
      if (puVar11 == (undefined8 *)0x0) goto LAB_10434296c;
      func_0x00010befbb60();
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
      _swift_retain(uVar5);
      puVar11 = puVar10;
      (*pcVar17)();
      func_0x000100db5f18(pcVar17,uVar5);
      if (puVar11 == (undefined8 *)0x0) {
LAB_10434296c:
        _swift_release(puVar6);
        _swift_release(puVar8);
        _objc_release(puVar10);
        goto LAB_104342390;
      }
    }
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    _objc_opt_self();
    lVar4 = 0x112d360b8;
    FUN_104343374(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                  &UNK_10d9011a0);
    _swift_allocObject();
    *(undefined8 *)(lVar4 + 0x18) = 9;
    *(undefined8 *)(lVar4 + 0x10) = 4;
    _objc_retain(puVar11);
    puVar12 = puVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010c08de00(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar13);
    *(undefined8 **)(lVar4 + 0x20) = puVar14;
    puVar12 = puVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010c2793a0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar13);
    *(undefined8 **)(lVar4 + 0x28) = puVar14;
    puVar12 = puVar10;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010c274200(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar13);
    *(undefined8 **)(lVar4 + 0x30) = puVar14;
    puVar12 = puVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar13 = puVar11;
    func_0x00010bf1ff80(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar13);
    *(undefined8 **)(lVar4 + 0x38) = puVar14;
    uVar5 = 0;
    FUN_104343414(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar15 = lVar4;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar5);
    _swift_release(lVar4);
    func_0x00010beef8c0(puVar7);
    _objc_release(lVar15);
    func_0x00010c08cdc0(puVar11);
    _objc_release(puVar11);
    lVar4 = _DAT_11306ff20;
    func_0x00010c1677c0(0,*(undefined8 *)((long)puVar10 + _DAT_11306ff20));
    uVar5 = *(undefined8 *)((long)puVar10 + lVar4);
    _CGAffineTransformMakeScale(&puStack_320,0x3fee147ae147ae14,0x3fee147ae147ae14);
    func_0x00010c219960(uVar5);
    puVar9 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_self(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar7 = &UNK_11075ca20;
    _swift_allocObject(&UNK_11075ca20,0x18,7);
    *(undefined8 **)(puVar7 + 0x10) = puVar10;
    uStack_300 = 0x1043432f8;
    puStack_320 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_318 = 0x42000000;
    puStack_310 = &UNK_1000f6b44;
    puStack_308 = &UNK_11075ca38;
    ppuVar16 = &puStack_320;
    puStack_2f8 = puVar7;
    __Block_copy(ppuVar16);
    puVar7 = puStack_2f8;
    _objc_retain();
    _swift_release(puVar7);
    func_0x00010bf03460(0x3fd0000000000000,0,0x3feb851eb851eb85,0,puVar9);
    __Block_release(ppuVar16);
    _swift_unknownObjectWeakAssign(unaff_x20 + 0x40,puVar10);
    uStack_1e8 = uStack_88;
    uStack_1f0 = uStack_90;
    uStack_1d8 = uStack_78;
    uStack_1e0 = uStack_80;
    uStack_1d0 = uStack_70;
    uStack_228 = uStack_c8;
    uStack_230 = uStack_d0;
    uStack_218 = uStack_b8;
    uStack_220 = uStack_c0;
    uStack_208 = uStack_a8;
    uStack_210 = uStack_b0;
    uStack_1f8 = uStack_98;
    uStack_200 = uStack_a0;
    uStack_268 = uStack_108;
    uStack_270 = uStack_110;
    uStack_258 = uStack_f8;
    uStack_260 = uStack_100;
    uStack_248 = uStack_e8;
    uStack_250 = uStack_f0;
    uStack_238 = uStack_d8;
    uStack_240 = uStack_e0;
    func_0x00010434331c(&uStack_270);
    uStack_148 = *(undefined8 *)(unaff_x20 + 0xc0);
    uStack_150 = *(undefined8 *)(unaff_x20 + 0xb8);
    uStack_138 = *(undefined8 *)(unaff_x20 + 0xd0);
    uStack_140 = *(undefined8 *)(unaff_x20 + 200);
    uStack_128 = *(undefined8 *)(unaff_x20 + 0xe0);
    uStack_130 = *(undefined8 *)(unaff_x20 + 0xd8);
    uStack_188 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_190 = *(undefined8 *)(unaff_x20 + 0x78);
    uStack_178 = *(undefined8 *)(unaff_x20 + 0x90);
    uStack_180 = *(undefined8 *)(unaff_x20 + 0x88);
    uStack_168 = *(undefined8 *)(unaff_x20 + 0xa0);
    uStack_170 = *(undefined8 *)(unaff_x20 + 0x98);
    uStack_158 = *(undefined8 *)(unaff_x20 + 0xb0);
    uStack_160 = *(undefined8 *)(unaff_x20 + 0xa8);
    uStack_1b8 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_1c0 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_1a8 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_1b0 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_198 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_1a0 = *(undefined8 *)(unaff_x20 + 0x68);
    *(undefined8 *)(unaff_x20 + 0xc0) = uStack_1f8;
    *(undefined8 *)(unaff_x20 + 0xb8) = uStack_200;
    *(undefined8 *)(unaff_x20 + 0xd0) = uStack_1e8;
    *(undefined8 *)(unaff_x20 + 200) = uStack_1f0;
    *(undefined8 *)(unaff_x20 + 0xe0) = uStack_1d8;
    *(undefined8 *)(unaff_x20 + 0xd8) = uStack_1e0;
    *(undefined8 *)(unaff_x20 + 0x80) = uStack_238;
    *(undefined8 *)(unaff_x20 + 0x78) = uStack_240;
    *(undefined8 *)(unaff_x20 + 0x90) = uStack_228;
    *(undefined8 *)(unaff_x20 + 0x88) = uStack_230;
    *(undefined8 *)(unaff_x20 + 0xa0) = uStack_218;
    *(undefined8 *)(unaff_x20 + 0x98) = uStack_220;
    *(undefined8 *)(unaff_x20 + 0xb0) = uStack_208;
    *(undefined8 *)(unaff_x20 + 0xa8) = uStack_210;
    *(undefined8 *)(unaff_x20 + 0x50) = uStack_268;
    *(undefined8 *)(unaff_x20 + 0x48) = uStack_270;
    *(undefined8 *)(unaff_x20 + 0x60) = uStack_258;
    *(undefined8 *)(unaff_x20 + 0x58) = uStack_260;
    uStack_120 = *(undefined8 *)(unaff_x20 + 0xe8);
    *(undefined8 *)(unaff_x20 + 0xe8) = uStack_1d0;
    *(undefined8 *)(unaff_x20 + 0x70) = uStack_248;
    *(undefined8 *)(unaff_x20 + 0x68) = uStack_250;
    FUN_1043422b4(&uStack_1c0);
    puVar7 = &UNK_11075ca70;
    _swift_allocObject(&UNK_11075ca70,0x30,7);
    *(code **)(puVar7 + 0x10) = FUN_104342b30;
    *(undefined **)(puVar7 + 0x18) = puVar8;
    *(undefined8 *)(puVar7 + 0x20) = param_4;
    *(undefined8 *)(puVar7 + 0x28) = param_5;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x110);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x118);
    *(undefined8 *)(unaff_x20 + 0x110) = 0x10434347c;
    *(undefined **)(unaff_x20 + 0x118) = puVar7;
    _swift_retain(puVar8);
    _swift_retain(param_5);
    func_0x0001043432bc(param_1,&puStack_320);
    func_0x000100db5f18(uVar5,uVar1);
    if (param_1[0x12] == 0) {
      uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
      lVar4 = *(long *)(unaff_x20 + 0x38);
      _swift_getObjectType();
      uVar3 = *(undefined1 *)(param_1 + 0xc);
      uVar1 = param_1[0xd];
      uVar2 = param_1[0xe];
      puVar7 = &UNK_11075c980;
      _swift_allocObject(&UNK_11075c980,0x18,7);
      _swift_weakInit(puVar7 + 0x10);
      puVar9 = &UNK_11075ca98;
      _swift_allocObject(&UNK_11075ca98,0x20,7);
      *(undefined **)(puVar9 + 0x10) = puVar7;
      *(undefined8 **)(puVar9 + 0x18) = puVar10;
      pcVar17 = *(code **)(lVar4 + 8);
      _objc_retain(puVar10);
      _swift_retain(puVar7);
      (*pcVar17)(uVar3,uVar1,uVar2,FUN_10434334c,puVar9,uVar5,lVar4);
      _swift_release(puVar6);
      _swift_release(puVar7);
      _swift_release(puVar9);
    }
    else {
      _swift_release(puVar6);
    }
    _objc_release(puVar10);
    _swift_release(puVar8);
    _objc_release(puVar11);
    uVar5 = 1;
  }
  else {
LAB_104342390:
    _objc_release();
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 104342a80; end: 104342b2f;  */

void FUN_104342a80(code *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_58,0,0);
  if ((*(byte *)(param_3 + 0x10) & 1) == 0) {
    _swift_beginAccess(param_3 + 0x10,auStack_70,1,0);
    *(undefined1 *)(param_3 + 0x10) = 1;
    _swift_beginAccess(param_4 + 0x10,auStack_88,0,0);
    param_4 = param_4 + 0x10;
    _swift_weakLoadStrong();
    if (param_4 != 0) {
      FUN_104342030();
      _swift_release(param_4);
    }
    (*param_1)();
  }
  return;
}



/* Entry: 104342b30; end: 104342b37;  */

void FUN_104342b30(code *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar1 + 0x10,auStack_58,0,0);
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    _swift_beginAccess(lVar1 + 0x10,auStack_70,1,0);
    *(undefined1 *)(lVar1 + 0x10) = 1;
    _swift_beginAccess(lVar2 + 0x10,auStack_88,0,0);
    lVar2 = lVar2 + 0x10;
    _swift_weakLoadStrong();
    if (lVar2 != 0) {
      FUN_104342030();
      _swift_release(lVar2);
    }
    (*param_1)();
  }
  return;
}



/* Entry: 104342b38; end: 104342b5f;  */

void FUN_104342b38(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 104342b60; end: 104342e5b;  */

void FUN_104342b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  pcVar1 = "present(copy:onCTA:onClose:)";
  func_0x0001000c10c0("present(copy:onCTA:onClose:)");
  _objc_retainAutoreleasedReturnValue();
  puVar2 = &UNK_11075caf0;
  _swift_allocObject(&UNK_11075caf0,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  *(undefined8 *)(puVar2 + 0x38) = param_6;
  pcStack_60 = FUN_1043433ec;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11075cb08;
  puStack_58 = puVar2;
  __Block_copy(&puStack_80);
  puVar2 = puStack_58;
  _swift_bridgeObjectRetain(param_2);
  _objc_retain(param_6);
  _swift_retain(param_5);
  _swift_release(puVar2);
  func_0x00010c0f7fc0(pcVar1);
  __Block_release(ppuVar3);
  _swift_unknownObjectRelease(pcVar1);
  return;
}



/* Entry: 104342e5c; end: 104343133;  */

void FUN_104342e5c(undefined8 *param_1)

{
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined1 auStack_3d0 [168];
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 uStack_2c8;
  undefined7 uStack_2c7;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar1 = unaff_x20 + 0x40;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    _objc_release();
    lVar1 = param_1[0x12];
    if (lVar1 == 0) {
      uStack_3f0 = *(undefined8 *)(unaff_x20 + 0xf0);
      lVar1 = *(long *)(unaff_x20 + 0xf8);
      uStack_3f8 = *(undefined8 *)(unaff_x20 + 0x100);
      uStack_3e8 = *(undefined8 *)(unaff_x20 + 0x108);
      uStack_430 = *param_1;
      uStack_440 = param_1[1];
      uStack_428 = param_1[2];
      uStack_438 = param_1[3];
      uVar2 = param_1[4];
      uVar7 = param_1[5];
      uStack_418 = param_1[7];
      uStack_420 = param_1[6];
      uStack_3d8 = param_1[9];
      uStack_3e0 = param_1[8];
      uVar4 = param_1[10];
      uVar6 = param_1[0xb];
      uStack_408 = param_1[0xd];
      uVar5 = param_1[0xe];
      uStack_400 = param_1[0xf];
      uVar3 = param_1[0x10];
      _swift_bridgeObjectRetain(param_1[7]);
      _swift_bridgeObjectRetain(uStack_440);
      _swift_bridgeObjectRetain(uStack_438);
      _swift_bridgeObjectRetain(uVar7);
      FUN_104340f4c(uStack_3e0,uStack_3d8,uVar4,uVar6);
      _swift_bridgeObjectRetain(lVar1);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar3);
    }
    else {
      uStack_3f8 = param_1[0x13];
      uStack_3e8 = param_1[0x14];
      uVar3 = param_1[0x10];
      uStack_3f0 = param_1[0x11];
      uVar5 = param_1[0xe];
      uStack_400 = param_1[0xf];
      uStack_408 = param_1[0xd];
      uVar4 = param_1[10];
      uVar6 = param_1[0xb];
      uStack_418 = param_1[7];
      uStack_420 = param_1[6];
      uStack_3d8 = param_1[9];
      uStack_3e0 = param_1[8];
      uVar2 = param_1[4];
      uVar7 = param_1[5];
      uStack_428 = param_1[2];
      uStack_438 = param_1[3];
      uStack_430 = *param_1;
      uStack_440 = param_1[1];
      func_0x0001043432bc(param_1,&uStack_120);
    }
    uStack_2c8 = *(undefined1 *)(param_1 + 0xc);
    uStack_328 = uStack_430;
    uStack_320 = uStack_440;
    uStack_318 = uStack_428;
    uStack_310 = uStack_438;
    uStack_2f0 = uStack_418;
    uStack_2f8 = uStack_420;
    uStack_2e0 = uStack_3d8;
    uStack_2e8 = uStack_3e0;
    uStack_2c0 = uStack_408;
    uStack_2b0 = uStack_400;
    uStack_2a0 = uStack_3f0;
    uStack_290 = uStack_3f8;
    uStack_118 = uStack_440;
    uStack_120 = uStack_430;
    uStack_108 = uStack_438;
    uStack_110 = uStack_428;
    uStack_d8 = uStack_3d8;
    uStack_e0 = uStack_3e0;
    uStack_98 = uStack_3f0;
    uStack_88 = uStack_3f8;
    uStack_e8 = uStack_418;
    uStack_f0 = uStack_420;
    uStack_c0 = CONCAT71(uStack_2c7,uStack_2c8);
    uStack_220 = CONCAT71(uStack_2c7,uStack_2c8);
    uStack_b8 = uStack_408;
    uStack_a8 = uStack_400;
    uStack_1f8 = uStack_3f0;
    uStack_1e8 = uStack_3f8;
    uStack_238 = uStack_3d8;
    uStack_240 = uStack_3e0;
    uStack_218 = uStack_408;
    uStack_208 = uStack_400;
    uStack_278 = uStack_440;
    uStack_280 = uStack_430;
    uStack_268 = uStack_438;
    uStack_270 = uStack_428;
    uStack_288 = uStack_3e8;
    uStack_80 = uStack_3e8;
    uStack_1e0 = uStack_3e8;
    uStack_248 = uStack_418;
    uStack_250 = uStack_420;
    uStack_308 = uVar2;
    uStack_300 = uVar7;
    uStack_2d8 = uVar4;
    uStack_2d0 = uVar6;
    uStack_2b8 = uVar5;
    uStack_2a8 = uVar3;
    lStack_298 = lVar1;
    uStack_260 = uVar2;
    uStack_258 = uVar7;
    uStack_230 = uVar4;
    uStack_228 = uVar6;
    uStack_210 = uVar5;
    uStack_200 = uVar3;
    lStack_1f0 = lVar1;
    uStack_100 = uVar2;
    uStack_f8 = uVar7;
    uStack_d0 = uVar4;
    uStack_c8 = uVar6;
    uStack_b0 = uVar5;
    uStack_a0 = uVar3;
    lStack_90 = lVar1;
    func_0x00010434331c(&uStack_280);
    uStack_158 = *(undefined8 *)(unaff_x20 + 0xc0);
    uStack_160 = *(undefined8 *)(unaff_x20 + 0xb8);
    uStack_148 = *(undefined8 *)(unaff_x20 + 0xd0);
    uStack_150 = *(undefined8 *)(unaff_x20 + 200);
    uStack_138 = *(undefined8 *)(unaff_x20 + 0xe0);
    uStack_140 = *(undefined8 *)(unaff_x20 + 0xd8);
    uStack_198 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_1a0 = *(undefined8 *)(unaff_x20 + 0x78);
    uStack_188 = *(undefined8 *)(unaff_x20 + 0x90);
    uStack_190 = *(undefined8 *)(unaff_x20 + 0x88);
    uStack_178 = *(undefined8 *)(unaff_x20 + 0xa0);
    uStack_180 = *(undefined8 *)(unaff_x20 + 0x98);
    uStack_168 = *(undefined8 *)(unaff_x20 + 0xb0);
    uStack_170 = *(undefined8 *)(unaff_x20 + 0xa8);
    uStack_1c8 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_1d0 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_1b8 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_1c0 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_1a8 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_1b0 = *(undefined8 *)(unaff_x20 + 0x68);
    *(undefined8 *)(unaff_x20 + 0xc0) = uStack_208;
    *(undefined8 *)(unaff_x20 + 0xb8) = uStack_210;
    *(undefined8 *)(unaff_x20 + 0xd0) = uStack_1f8;
    *(undefined8 *)(unaff_x20 + 200) = uStack_200;
    *(undefined8 *)(unaff_x20 + 0xe0) = uStack_1e8;
    *(long *)(unaff_x20 + 0xd8) = lStack_1f0;
    *(undefined8 *)(unaff_x20 + 0x80) = uStack_248;
    *(undefined8 *)(unaff_x20 + 0x78) = uStack_250;
    *(undefined8 *)(unaff_x20 + 0x90) = uStack_238;
    *(undefined8 *)(unaff_x20 + 0x88) = uStack_240;
    *(undefined8 *)(unaff_x20 + 0xa0) = uStack_228;
    *(undefined8 *)(unaff_x20 + 0x98) = uStack_230;
    *(undefined8 *)(unaff_x20 + 0xb0) = uStack_218;
    *(undefined8 *)(unaff_x20 + 0xa8) = uStack_220;
    *(undefined8 *)(unaff_x20 + 0x50) = uStack_278;
    *(undefined8 *)(unaff_x20 + 0x48) = uStack_280;
    *(undefined8 *)(unaff_x20 + 0x60) = uStack_268;
    *(undefined8 *)(unaff_x20 + 0x58) = uStack_270;
    uStack_130 = *(undefined8 *)(unaff_x20 + 0xe8);
    *(undefined8 *)(unaff_x20 + 0xe8) = uStack_1e0;
    *(undefined8 *)(unaff_x20 + 0x70) = uStack_258;
    *(undefined8 *)(unaff_x20 + 0x68) = uStack_260;
    func_0x0001043432bc(&uStack_328,auStack_3d0);
    FUN_1043422b4(&uStack_1d0);
    lVar1 = unaff_x20 + 0x40;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar1 != 0) {
      FUN_10434348c(&uStack_120);
      _objc_release(lVar1);
    }
    func_0x000103417d34(&uStack_328);
  }
  return;
}



/* Entry: 104343134; end: 1043431eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104343134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x40;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      func_0x00010bf511c0(param_1,param_2,lVar1,param_4,lVar2);
      uVar3 = *(undefined8 *)(lVar1 + _DAT_11306ff20);
      func_0x00010bfb68e0(uVar3);
      _CGRectContainsPoint();
      _objc_release(lVar1);
      lVar1 = lVar2;
    }
    _objc_release(lVar1);
  }
  return uVar3;
}



/* Entry: 1043431ec; end: 10434322f;  */

/* WARNING: Possible PIC construction at 0x00010434205c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104342060) */
/* WARNING: Removing unreachable block (ram,0x000104342128) */
/* WARNING: Removing unreachable block (ram,0x000104342294) */

void FUN_1043431ec(void)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(unaff_x20 + 0x110);
  if (pcVar1 == (code *)0x0) {
    pcVar1 = *(code **)(unaff_x20 + 0x110);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x118);
    *(undefined8 *)(unaff_x20 + 0x110) = 0;
    *(undefined8 *)(unaff_x20 + 0x118) = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x118);
    _swift_retain(uVar2);
    (*pcVar1)();
  }
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104343230; end: 104343233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104343230(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined **ppuVar16;
  long unaff_x20;
  code *pcVar17;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_88 = param_1[0x11];
  uStack_90 = param_1[0x10];
  uStack_78 = param_1[0x13];
  uStack_80 = param_1[0x12];
  uStack_70 = param_1[0x14];
  uStack_c8 = param_1[9];
  uStack_d0 = param_1[8];
  uStack_b8 = param_1[0xb];
  uStack_c0 = param_1[10];
  uStack_a8 = param_1[0xd];
  uStack_b0 = param_1[0xc];
  uStack_98 = param_1[0xf];
  uStack_a0 = param_1[0xe];
  uStack_108 = param_1[1];
  uStack_110 = *param_1;
  uStack_f8 = param_1[3];
  uStack_100 = param_1[2];
  uStack_e8 = param_1[5];
  uStack_f0 = param_1[4];
  uStack_d8 = param_1[7];
  uStack_e0 = param_1[6];
  lVar4 = unaff_x20 + 0x40;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 == 0) {
    puVar6 = &UNK_11075c958;
    _swift_allocObject(&UNK_11075c958,0x11,7);
    puVar6[0x10] = 0;
    puVar7 = &UNK_11075c980;
    _swift_allocObject(&UNK_11075c980,0x18,7);
    _swift_weakInit(puVar7 + 0x10);
    puVar8 = &UNK_11075c9a8;
    _swift_allocObject(&UNK_11075c9a8,0x20,7);
    *(undefined **)(puVar8 + 0x10) = puVar6;
    *(undefined **)(puVar8 + 0x18) = puVar7;
    puVar7 = &UNK_11075c9d0;
    _swift_allocObject(&UNK_11075c9d0,0x30,7);
    *(code **)(puVar7 + 0x10) = FUN_104342b30;
    *(undefined **)(puVar7 + 0x18) = puVar8;
    *(undefined8 *)(puVar7 + 0x20) = param_2;
    *(undefined8 *)(puVar7 + 0x28) = param_3;
    puVar9 = &UNK_11075c9f8;
    _swift_allocObject(&UNK_11075c9f8,0x30,7);
    *(code **)(puVar9 + 0x10) = FUN_104342b30;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    *(undefined8 *)(puVar9 + 0x20) = param_4;
    *(undefined8 *)(puVar9 + 0x28) = param_5;
    FUN_1043462bc(0);
    _objc_allocWithZone();
    _swift_retain_n(puVar8,2);
    _swift_retain(puVar6);
    _swift_retain(param_3);
    _swift_retain(param_5);
    func_0x0001043432bc(param_1,&uStack_1c0);
    puVar10 = param_1;
    FUN_1043441d4(param_1,FUN_104342b38,puVar7,0x104343478,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c219b60();
    pcVar17 = *(code **)(unaff_x20 + 0x20);
    if (pcVar17 == (code *)0x0) {
      (**(code **)(unaff_x20 + 0x10))();
      if (puVar11 == (undefined8 *)0x0) goto LAB_10434296c;
      func_0x00010befbb60();
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
      _swift_retain(uVar5);
      puVar11 = puVar10;
      (*pcVar17)();
      func_0x000100db5f18(pcVar17,uVar5);
      if (puVar11 == (undefined8 *)0x0) {
LAB_10434296c:
        _swift_release(puVar6);
        _swift_release(puVar8);
        _objc_release(puVar10);
        goto LAB_104342390;
      }
    }
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    _objc_opt_self();
    lVar4 = 0x112d360b8;
    FUN_104343374(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                  &UNK_10d9011a0);
    _swift_allocObject();
    *(undefined8 *)(lVar4 + 0x18) = 9;
    *(undefined8 *)(lVar4 + 0x10) = 4;
    _objc_retain(puVar11);
    puVar12 = puVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010c08de00(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar13);
    *(undefined8 **)(lVar4 + 0x20) = puVar14;
    puVar12 = puVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010c2793a0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar13);
    *(undefined8 **)(lVar4 + 0x28) = puVar14;
    puVar12 = puVar10;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010c274200(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar13);
    *(undefined8 **)(lVar4 + 0x30) = puVar14;
    puVar12 = puVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar13 = puVar11;
    func_0x00010bf1ff80(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar13);
    *(undefined8 **)(lVar4 + 0x38) = puVar14;
    uVar5 = 0;
    FUN_104343414(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar15 = lVar4;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar5);
    _swift_release(lVar4);
    func_0x00010beef8c0(puVar7);
    _objc_release(lVar15);
    func_0x00010c08cdc0(puVar11);
    _objc_release(puVar11);
    lVar4 = _DAT_11306ff20;
    func_0x00010c1677c0(0,*(undefined8 *)((long)puVar10 + _DAT_11306ff20));
    uVar5 = *(undefined8 *)((long)puVar10 + lVar4);
    _CGAffineTransformMakeScale(&puStack_320,0x3fee147ae147ae14,0x3fee147ae147ae14);
    func_0x00010c219960(uVar5);
    puVar9 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_self(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar7 = &UNK_11075ca20;
    _swift_allocObject(&UNK_11075ca20,0x18,7);
    *(undefined8 **)(puVar7 + 0x10) = puVar10;
    uStack_300 = 0x1043432f8;
    puStack_320 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_318 = 0x42000000;
    puStack_310 = &UNK_1000f6b44;
    puStack_308 = &UNK_11075ca38;
    ppuVar16 = &puStack_320;
    puStack_2f8 = puVar7;
    __Block_copy(ppuVar16);
    puVar7 = puStack_2f8;
    _objc_retain();
    _swift_release(puVar7);
    func_0x00010bf03460(0x3fd0000000000000,0,0x3feb851eb851eb85,0,puVar9);
    __Block_release(ppuVar16);
    _swift_unknownObjectWeakAssign(unaff_x20 + 0x40,puVar10);
    uStack_1e8 = uStack_88;
    uStack_1f0 = uStack_90;
    uStack_1d8 = uStack_78;
    uStack_1e0 = uStack_80;
    uStack_1d0 = uStack_70;
    uStack_228 = uStack_c8;
    uStack_230 = uStack_d0;
    uStack_218 = uStack_b8;
    uStack_220 = uStack_c0;
    uStack_208 = uStack_a8;
    uStack_210 = uStack_b0;
    uStack_1f8 = uStack_98;
    uStack_200 = uStack_a0;
    uStack_268 = uStack_108;
    uStack_270 = uStack_110;
    uStack_258 = uStack_f8;
    uStack_260 = uStack_100;
    uStack_248 = uStack_e8;
    uStack_250 = uStack_f0;
    uStack_238 = uStack_d8;
    uStack_240 = uStack_e0;
    func_0x00010434331c(&uStack_270);
    uStack_148 = *(undefined8 *)(unaff_x20 + 0xc0);
    uStack_150 = *(undefined8 *)(unaff_x20 + 0xb8);
    uStack_138 = *(undefined8 *)(unaff_x20 + 0xd0);
    uStack_140 = *(undefined8 *)(unaff_x20 + 200);
    uStack_128 = *(undefined8 *)(unaff_x20 + 0xe0);
    uStack_130 = *(undefined8 *)(unaff_x20 + 0xd8);
    uStack_188 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_190 = *(undefined8 *)(unaff_x20 + 0x78);
    uStack_178 = *(undefined8 *)(unaff_x20 + 0x90);
    uStack_180 = *(undefined8 *)(unaff_x20 + 0x88);
    uStack_168 = *(undefined8 *)(unaff_x20 + 0xa0);
    uStack_170 = *(undefined8 *)(unaff_x20 + 0x98);
    uStack_158 = *(undefined8 *)(unaff_x20 + 0xb0);
    uStack_160 = *(undefined8 *)(unaff_x20 + 0xa8);
    uStack_1b8 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_1c0 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_1a8 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_1b0 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_198 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_1a0 = *(undefined8 *)(unaff_x20 + 0x68);
    *(undefined8 *)(unaff_x20 + 0xc0) = uStack_1f8;
    *(undefined8 *)(unaff_x20 + 0xb8) = uStack_200;
    *(undefined8 *)(unaff_x20 + 0xd0) = uStack_1e8;
    *(undefined8 *)(unaff_x20 + 200) = uStack_1f0;
    *(undefined8 *)(unaff_x20 + 0xe0) = uStack_1d8;
    *(undefined8 *)(unaff_x20 + 0xd8) = uStack_1e0;
    *(undefined8 *)(unaff_x20 + 0x80) = uStack_238;
    *(undefined8 *)(unaff_x20 + 0x78) = uStack_240;
    *(undefined8 *)(unaff_x20 + 0x90) = uStack_228;
    *(undefined8 *)(unaff_x20 + 0x88) = uStack_230;
    *(undefined8 *)(unaff_x20 + 0xa0) = uStack_218;
    *(undefined8 *)(unaff_x20 + 0x98) = uStack_220;
    *(undefined8 *)(unaff_x20 + 0xb0) = uStack_208;
    *(undefined8 *)(unaff_x20 + 0xa8) = uStack_210;
    *(undefined8 *)(unaff_x20 + 0x50) = uStack_268;
    *(undefined8 *)(unaff_x20 + 0x48) = uStack_270;
    *(undefined8 *)(unaff_x20 + 0x60) = uStack_258;
    *(undefined8 *)(unaff_x20 + 0x58) = uStack_260;
    uStack_120 = *(undefined8 *)(unaff_x20 + 0xe8);
    *(undefined8 *)(unaff_x20 + 0xe8) = uStack_1d0;
    *(undefined8 *)(unaff_x20 + 0x70) = uStack_248;
    *(undefined8 *)(unaff_x20 + 0x68) = uStack_250;
    FUN_1043422b4(&uStack_1c0);
    puVar7 = &UNK_11075ca70;
    _swift_allocObject(&UNK_11075ca70,0x30,7);
    *(code **)(puVar7 + 0x10) = FUN_104342b30;
    *(undefined **)(puVar7 + 0x18) = puVar8;
    *(undefined8 *)(puVar7 + 0x20) = param_4;
    *(undefined8 *)(puVar7 + 0x28) = param_5;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x110);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x118);
    *(undefined8 *)(unaff_x20 + 0x110) = 0x10434347c;
    *(undefined **)(unaff_x20 + 0x118) = puVar7;
    _swift_retain(puVar8);
    _swift_retain(param_5);
    func_0x0001043432bc(param_1,&puStack_320);
    func_0x000100db5f18(uVar5,uVar1);
    if (param_1[0x12] == 0) {
      uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
      lVar4 = *(long *)(unaff_x20 + 0x38);
      _swift_getObjectType();
      uVar3 = *(undefined1 *)(param_1 + 0xc);
      uVar1 = param_1[0xd];
      uVar2 = param_1[0xe];
      puVar7 = &UNK_11075c980;
      _swift_allocObject(&UNK_11075c980,0x18,7);
      _swift_weakInit(puVar7 + 0x10);
      puVar9 = &UNK_11075ca98;
      _swift_allocObject(&UNK_11075ca98,0x20,7);
      *(undefined **)(puVar9 + 0x10) = puVar7;
      *(undefined8 **)(puVar9 + 0x18) = puVar10;
      pcVar17 = *(code **)(lVar4 + 8);
      _objc_retain(puVar10);
      _swift_retain(puVar7);
      (*pcVar17)(uVar3,uVar1,uVar2,FUN_10434334c,puVar9,uVar5,lVar4);
      _swift_release(puVar6);
      _swift_release(puVar7);
      _swift_release(puVar9);
    }
    else {
      _swift_release(puVar6);
    }
    _objc_release(puVar10);
    _swift_release(puVar8);
    _objc_release(puVar11);
    uVar5 = 1;
  }
  else {
LAB_104342390:
    _objc_release();
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 104343234; end: 104343277;  */

/* WARNING: Possible PIC construction at 0x00010434205c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104342060) */
/* WARNING: Removing unreachable block (ram,0x000104342128) */
/* WARNING: Removing unreachable block (ram,0x000104342294) */

void FUN_104343234(void)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(unaff_x20 + 0x110);
  if (pcVar1 == (code *)0x0) {
    pcVar1 = *(code **)(unaff_x20 + 0x110);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x118);
    *(undefined8 *)(unaff_x20 + 0x110) = 0;
    *(undefined8 *)(unaff_x20 + 0x118) = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x118);
    _swift_retain(uVar2);
    (*pcVar1)();
  }
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104343278; end: 10434327f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104343278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x40;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      func_0x00010bf511c0(param_1,param_2,lVar1,param_4,lVar2);
      uVar3 = *(undefined8 *)(lVar1 + _DAT_11306ff20);
      func_0x00010bfb68e0(uVar3);
      _CGRectContainsPoint();
      _objc_release(lVar1);
      lVar1 = lVar2;
    }
    _objc_release(lVar1);
  }
  return uVar3;
}



/* Entry: 104343280; end: 1043432f7;  */

void FUN_104343280(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x40;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    FUN_10434366c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1043432f8; end: 10434331f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043432f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11306ff20);
  func_0x00010c1677c0(0x3ff0000000000000,uVar1);
  uStack_50 = 0x3ff0000000000000;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010c219960(uVar1,param_2,&uStack_50);
  return;
}



/* Entry: 104343320; end: 10434334b;  */

void FUN_104343320(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10434334c; end: 104343353;  */

void FUN_10434334c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_80;
  pcVar3 = "present(copy:onCTA:onClose:)";
  func_0x0001000c10c0("present(copy:onCTA:onClose:)");
  _objc_retainAutoreleasedReturnValue();
  puVar4 = &UNK_11075caf0;
  _swift_allocObject(&UNK_11075caf0,0x40,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  *(undefined8 *)(puVar4 + 0x28) = param_3;
  *(undefined8 *)(puVar4 + 0x30) = param_4;
  *(undefined8 *)(puVar4 + 0x38) = uVar2;
  pcStack_60 = FUN_1043433ec;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11075cb08;
  puStack_58 = puVar4;
  __Block_copy(&puStack_80);
  puVar4 = puStack_58;
  _swift_bridgeObjectRetain(param_2);
  _objc_retain(uVar2);
  _swift_retain(uVar1);
  _swift_release(puVar4);
  func_0x00010c0f7fc0(pcVar3);
  __Block_release(ppuVar5);
  _swift_unknownObjectRelease(pcVar3);
  return;
}



/* Entry: 104343354; end: 104343373;  */

void FUN_104343354(void)

{
  _objc_opt_self(&PTR_PTR_11306fe90);
  return;
}



/* Entry: 104343374; end: 1043433eb;  */

void FUN_104343374(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_104343414(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1043433ec; end: 104343413;  */

void FUN_1043433ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  undefined1 auStack_3c8 [168];
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  _swift_beginAccess(lVar6 + 0x10,auStack_118,0,0);
  lVar6 = lVar6 + 0x10;
  _swift_weakLoadStrong();
  if (lVar6 == 0) {
    return;
  }
  if (lVar9 != 0) {
    lVar7 = lVar6 + 0x40;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar7 != 0) {
      _swift_bridgeObjectRetain(lVar9);
      _objc_release(lVar7);
      if (lVar7 != lVar4) {
        _swift_release(lVar6);
        _swift_bridgeObjectRelease(lVar9);
        return;
      }
      uVar8 = *(undefined8 *)(lVar6 + 0xf8);
      *(undefined8 *)(lVar6 + 0xf0) = uVar2;
      *(long *)(lVar6 + 0xf8) = lVar9;
      *(undefined8 *)(lVar6 + 0x100) = uVar3;
      *(undefined8 *)(lVar6 + 0x108) = uVar1;
      _swift_bridgeObjectRelease(uVar8);
      uStack_208 = *(undefined8 *)(lVar6 + 0xb0);
      uStack_210 = *(undefined8 *)(lVar6 + 0xa8);
      uStack_218 = *(undefined8 *)(lVar6 + 0xa0);
      uStack_220 = *(undefined8 *)(lVar6 + 0x98);
      uStack_228 = *(undefined8 *)(lVar6 + 0x90);
      uStack_230 = *(undefined8 *)(lVar6 + 0x88);
      uStack_1d0 = *(undefined8 *)(lVar6 + 0xe8);
      uStack_1d8 = *(undefined8 *)(lVar6 + 0xe0);
      lVar9 = *(long *)(lVar6 + 0xd8);
      uStack_1e8 = *(undefined8 *)(lVar6 + 0xd0);
      uStack_1f0 = *(undefined8 *)(lVar6 + 200);
      uStack_1f8 = *(undefined8 *)(lVar6 + 0xc0);
      uStack_200 = *(undefined8 *)(lVar6 + 0xb8);
      uStack_238 = *(undefined8 *)(lVar6 + 0x80);
      uStack_240 = *(undefined8 *)(lVar6 + 0x78);
      uStack_268 = *(undefined8 *)(lVar6 + 0x50);
      uStack_270 = *(undefined8 *)(lVar6 + 0x48);
      uStack_258 = *(undefined8 *)(lVar6 + 0x60);
      uStack_260 = *(undefined8 *)(lVar6 + 0x58);
      uStack_248 = *(undefined8 *)(lVar6 + 0x70);
      uStack_250 = *(undefined8 *)(lVar6 + 0x68);
      uStack_158 = *(undefined8 *)(lVar6 + 0xa0);
      uStack_160 = *(undefined8 *)(lVar6 + 0x98);
      uStack_148 = *(undefined8 *)(lVar6 + 0xb0);
      uStack_150 = *(undefined8 *)(lVar6 + 0xa8);
      uStack_138 = *(undefined8 *)(lVar6 + 0xc0);
      uStack_140 = *(undefined8 *)(lVar6 + 0xb8);
      uStack_128 = *(undefined8 *)(lVar6 + 0xd0);
      uStack_130 = *(undefined8 *)(lVar6 + 200);
      uStack_198 = *(undefined8 *)(lVar6 + 0x60);
      uStack_1a0 = *(undefined8 *)(lVar6 + 0x58);
      uStack_188 = *(undefined8 *)(lVar6 + 0x70);
      uStack_190 = *(undefined8 *)(lVar6 + 0x68);
      uStack_178 = *(undefined8 *)(lVar6 + 0x80);
      uStack_180 = *(undefined8 *)(lVar6 + 0x78);
      uStack_168 = *(undefined8 *)(lVar6 + 0x90);
      uStack_170 = *(undefined8 *)(lVar6 + 0x88);
      uStack_1a8 = *(undefined8 *)(lVar6 + 0x50);
      uStack_1b0 = *(undefined8 *)(lVar6 + 0x48);
      uStack_1b8 = *(undefined8 *)(lVar6 + 0xe8);
      uStack_1c0 = *(undefined8 *)(lVar6 + 0xe0);
      iVar5 = (int)&uStack_270;
      lStack_1e0 = lVar9;
      func_0x0001043433fc();
      if (iVar5 != 1) {
        uStack_98 = uStack_148;
        uStack_a0 = uStack_150;
        uStack_88 = uStack_138;
        uStack_90 = uStack_140;
        uStack_78 = uStack_128;
        uStack_80 = uStack_130;
        uStack_d8 = uStack_188;
        uStack_e0 = uStack_190;
        uStack_c8 = uStack_178;
        uStack_d0 = uStack_180;
        uStack_b8 = uStack_168;
        uStack_c0 = uStack_170;
        uStack_a8 = uStack_158;
        uStack_b0 = uStack_160;
        uStack_f8 = uStack_1a8;
        uStack_100 = uStack_1b0;
        uStack_e8 = uStack_198;
        uStack_f0 = uStack_1a0;
        uStack_60 = uStack_1b8;
        uStack_68 = uStack_1c0;
        lStack_70 = lVar9;
        if (lVar9 == 0) {
          uStack_298 = uStack_1e8;
          uStack_2a0 = uStack_1f0;
          uStack_288 = uStack_1d8;
          lStack_290 = lStack_1e0;
          uStack_280 = uStack_1d0;
          uStack_2d8 = uStack_228;
          uStack_2e0 = uStack_230;
          uStack_2c8 = uStack_218;
          uStack_2d0 = uStack_220;
          uStack_2b8 = uStack_208;
          uStack_2c0 = uStack_210;
          uStack_2a8 = uStack_1f8;
          uStack_2b0 = uStack_200;
          uStack_318 = uStack_268;
          uStack_320 = uStack_270;
          uStack_308 = uStack_258;
          uStack_310 = uStack_260;
          uStack_2f8 = uStack_248;
          uStack_300 = uStack_250;
          uStack_2e8 = uStack_238;
          uStack_2f0 = uStack_240;
          func_0x0001043432bc(&uStack_320,auStack_3c8);
          FUN_104342e5c(&uStack_100);
          _swift_release(lVar6);
          FUN_1043422b4(&uStack_270);
          return;
        }
      }
    }
  }
  _swift_release(lVar6);
  return;
}



/* Entry: 104343414; end: 104343453;  */

void FUN_104343414(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 104343454; end: 10434348b;  */

void FUN_104343454(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 10434348c; end: 10434366b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434348c(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_e0 [120];
  ulong uStack_68;
  
  puVar3 = &DAT_11306ff38;
  func_0x000104343c9c(&DAT_11306ff38,FUN_104343934);
  uVar12 = *param_1;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar12,param_1[1]);
  func_0x00010c212f20(puVar3);
  _objc_release(puVar3);
  _objc_release(uVar12);
  puVar3 = &DAT_11306ff40;
  func_0x000104343c9c(&DAT_11306ff40,0x104343a28);
  uVar12 = param_1[2];
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar12,param_1[3]);
  func_0x00010c212f20(puVar3);
  _objc_release(puVar3);
  _objc_release(uVar12);
  func_0x000104343bb8();
  uVar4 = param_1[4];
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,param_1[5]);
  func_0x00010c212f20(uVar12);
  _objc_release(uVar12);
  _objc_release(uVar4);
  FUN_1043445ec(param_1);
  puVar5 = param_1;
  FUN_104344a38(param_1);
  func_0x000104344024();
  uVar12 = param_1[0xd];
  uVar4 = param_1[0xe];
  puVar6 = puVar5;
  FUN_104341734();
  uVar7 = uVar12;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar12,uVar4);
  func_0x00010c212f20(puVar6);
  _objc_release(puVar6);
  _objc_release(uVar7);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar12,uVar4);
  func_0x00010c161020(puVar5);
  _objc_release(puVar5);
  _objc_release(uVar12);
  func_0x0001043440fc();
  uVar8 = param_1[0xf];
  uVar4 = param_1[0x10];
  uVar7 = uVar12;
  func_0x0001043472d8();
  uVar15 = uVar8;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,uVar4);
  func_0x00010c212f20(uVar7);
  _objc_release(uVar7);
  _objc_release(uVar15);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,uVar4);
  func_0x00010c161020(uVar12);
  _objc_release(uVar12);
  _objc_release();
  func_0x0001008479c8();
  uVar15 = uVar8;
  _swift_initStackObject();
  *(undefined8 *)(uVar15 + 0x18) = 9;
  *(undefined8 *)(uVar15 + 0x10) = 4;
  puVar3 = &DAT_11306ff38;
  func_0x000104343c9c(&DAT_11306ff38,FUN_104343934);
  *(undefined **)(uVar15 + 0x20) = puVar3;
  puVar3 = &DAT_11306ff40;
  func_0x000104343c9c(&DAT_11306ff40,0x104343a28);
  *(undefined **)(uVar15 + 0x28) = puVar3;
  func_0x000104343bb8();
  *(undefined **)(uVar15 + 0x30) = puVar3;
  puVar3 = &DAT_11306ff68;
  func_0x000104343c9c(&DAT_11306ff68,FUN_104343cf8);
  *(undefined **)(uVar15 + 0x38) = puVar3;
  uStack_68 = uVar15;
  _swift_initStackObject(uVar8,auStack_e0);
  *(undefined8 *)(uVar8 + 0x18) = 7;
  *(undefined8 *)(uVar8 + 0x10) = 3;
  uVar15 = uVar8;
  func_0x000104344024();
  *(ulong *)(uVar8 + 0x20) = uVar15;
  func_0x0001043440fc();
  *(ulong *)(uVar8 + 0x28) = uVar15;
  func_0x000104343db8();
  *(ulong *)(uVar8 + 0x30) = uVar15;
  func_0x000100847d40(uVar8);
  uVar8 = uStack_68;
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_11306ff20);
  uVar15 = uStack_68 & 0xffffffffffffff8;
  if (uStack_68 >> 0x3e == 0) {
    uVar13 = *(ulong *)(uVar15 + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar13 = uVar15;
    if (0x7fffffffffffffff < uStack_68) {
      uVar13 = uStack_68;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar3;
  if (uVar13 != 0) {
    uVar14 = 0;
    do {
      while( true ) {
        if ((uVar8 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar15 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x104345190);
            (*pcVar2)();
          }
          uVar9 = *(ulong *)(uVar8 + uVar14 * 8 + 0x20);
          _objc_retain();
        }
        else {
          uVar9 = uVar14;
          FUN_1043462dc(uVar14,uVar8,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
        }
        uVar1 = uVar14 + 1;
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10434518c);
          (*pcVar2)();
        }
        uVar10 = uVar9;
        func_0x00010c074c20();
        if ((uVar10 & 1) == 0) break;
        _objc_release(uVar9);
        uVar14 = uVar14 + 1;
        if (uVar1 == uVar13) goto LAB_1043451ac;
      }
      puVar11 = puVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar11 & 1) == 0) {
        func_0x0001033463bc(0,*(long *)(puVar3 + 0x10) + 1,1);
      }
      uVar14 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar14) {
        func_0x0001033463bc(1 < *(ulong *)(puVar3 + 0x18),uVar14 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar14 + 1;
      *(ulong *)(puVar3 + uVar14 * 8 + 0x20) = uVar9;
      uVar14 = uVar1;
    } while (uVar1 != uVar13);
  }
LAB_1043451ac:
  puVar11 = puVar3;
  FUN_104345bb0(puVar3);
  _swift_release(puVar3);
  puVar3 = puVar11;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar11,PTR___sypN_11034f1a8 + 8);
  _swift_bridgeObjectRelease(puVar11);
  func_0x00010c160ee0(uVar12);
  _swift_bridgeObjectRelease(uVar8);
  _objc_release(puVar3);
  return;
}



/* Entry: 10434366c; end: 104343933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434366c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f118e10);
  puVar2 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  _objc_opt_self(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240);
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x18) = 0x10;
  *(undefined8 *)(lVar3 + 0x10) = 8;
  puVar6 = PTR___sSiN_11034deb0;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined **)(lVar3 + 0x38) = puVar6;
  *(undefined8 *)(lVar3 + 0x40) = 0xfffffffffffffff8;
  *(undefined **)(lVar3 + 0x58) = puVar6;
  *(undefined8 *)(lVar3 + 0x60) = 8;
  *(undefined **)(lVar3 + 0x78) = puVar6;
  *(undefined8 *)(lVar3 + 0x80) = 0xfffffffffffffffa;
  *(undefined **)(lVar3 + 0x98) = puVar6;
  *(undefined8 *)(lVar3 + 0xa0) = 6;
  *(undefined **)(lVar3 + 0xb8) = puVar6;
  *(undefined8 *)(lVar3 + 0xc0) = 0xfffffffffffffffd;
  *(undefined **)(lVar3 + 0xd8) = puVar6;
  *(undefined8 *)(lVar3 + 0xe0) = 3;
  *(undefined **)(lVar3 + 0x118) = puVar6;
  *(undefined **)(lVar3 + 0xf8) = puVar6;
  *(undefined8 *)(lVar3 + 0x100) = 0;
  lVar4 = lVar3;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_release(lVar3);
  func_0x00010c220360(puVar2);
  _objc_release();
  func_0x000100673624();
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x18) = 0x11;
  *(undefined8 *)(lVar4 + 0x10) = 8;
  uVar1 = 0;
  FUN_104346ffc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = 0;
  __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  __sSo8NSNumberC10FoundationE12floatLiteralABSd_tcfC(0x3fbeb851eb851eb8);
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  __sSo8NSNumberC10FoundationE12floatLiteralABSd_tcfC(0x3fd0a3d70a3d70a4);
  *(undefined8 *)(lVar4 + 0x30) = uVar5;
  __sSo8NSNumberC10FoundationE12floatLiteralABSd_tcfC(0x3fd999999999999a);
  *(undefined8 *)(lVar4 + 0x38) = uVar5;
  __sSo8NSNumberC10FoundationE12floatLiteralABSd_tcfC(0x3fe147ae147ae148);
  *(undefined8 *)(lVar4 + 0x40) = uVar5;
  __sSo8NSNumberC10FoundationE12floatLiteralABSd_tcfC(0x3fe6666666666666);
  *(undefined8 *)(lVar4 + 0x48) = uVar5;
  __sSo8NSNumberC10FoundationE12floatLiteralABSd_tcfC(0x3feb333333333333);
  *(undefined8 *)(lVar4 + 0x50) = uVar5;
  uVar5 = 1;
  __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
  *(undefined8 *)(lVar4 + 0x58) = uVar5;
  lVar3 = lVar4;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar1);
  _swift_release(lVar4);
  func_0x00010c1b6d00(puVar2);
  _objc_release(lVar3);
  _objc_retain(puVar2);
  func_0x00010c192d40(0x3fd999999999999a);
  puVar6 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  _objc_opt_self(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  func_0x00010bfbc100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar6);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ff20);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x656764756e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656764756e,0xe500000000000000);
  func_0x00010bef6c20(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 104343934; end: 104343ad3;  */

undefined * FUN_104343934(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_allocWithZone(PTR_PTR_1126aea58);
  func_0x00010bfee200();
  func_0x00010c21ad00();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retain(puVar1);
  func_0x00010c23ba80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1);
  _objc_release(puVar2);
  func_0x00010c1cfce0(puVar1);
  func_0x00010c213040(puVar1);
  _objc_release(puVar1);
  _objc_retain(puVar1);
  uVar3 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1f6fc0);
  func_0x00010c160fc0(puVar1);
  _objc_release(uVar3);
  func_0x00010c219b60(puVar1);
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 104343ad4; end: 104343cf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104343ad4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_11306ff58;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_11306ff58);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    FUN_104346498();
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_allocWithZone();
    func_0x00010c01bf60();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar3,param_2,puVar2);
    _objc_release(puVar2);
    _objc_retain();
    func_0x00010c182220();
    func_0x00010c219b60(puVar3,param_2,0);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar4);
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  return puVar3;
}



/* Entry: 104343cf8; end: 104343db7;  */

undefined * FUN_104343cf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_allocWithZone(PTR_PTR_1126aea58);
  func_0x00010bfee200();
  func_0x00010c21ad00();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retain(puVar1);
  func_0x00010c23ba80(puVar2,param_2,0x3d);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1cfce0(puVar1,param_2,1);
  func_0x00010c165e20(puVar1,param_2,1);
  func_0x00010c1c83a0(0x3fe6666666666666,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar1,param_2,0);
  return puVar1;
}



/* Entry: 104343db8; end: 1043441d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104343db8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_11306ff70;
  lVar2 = *(long *)(unaff_x20 + _DAT_11306ff70);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    func_0x000104343e1c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    _objc_retain();
    _objc_release(uVar4);
    lVar2 = 0;
  }
  _objc_retain(lVar2);
  return lVar3;
}



/* Entry: 1043441d4; end: 1043445eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1043441d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffff90;
  _swift_getObjectType();
  lVar1 = _DAT_11306ff20;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_11306ff28;
  puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_11306ff30;
  puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  puVar2 = &DAT_11306ff38;
  *(undefined8 *)(unaff_x20 + _DAT_11306ff38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11306ff40) = 0;
  lVar1 = _DAT_11306ff48;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_11306ff50;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11306ff58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11306ff60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11306ff68) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11306ff70) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11306ff78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11306ff80) = 0;
  puVar7 = (undefined8 *)(unaff_x20 + _DAT_11306ff88);
  *puVar7 = param_2;
  puVar7[1] = param_3;
  puVar7 = (undefined8 *)(unaff_x20 + _DAT_11306ff90);
  *puVar7 = param_4;
  puVar7[1] = param_5;
  puVar3 = PTR_s_initWithFrame__1125e2948;
  _swift_retain(param_3);
  _swift_retain(param_5);
  _objc_msgSendSuper2(0,0,0,0,&stack0xffffffffffffff90,puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retain(puVar4);
  _objc_retain();
  _objc_retain();
  func_0x00010bf3ae40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar4);
  _objc_release(puVar3);
  func_0x00010c1af000(puVar4);
  _objc_release(puVar4);
  uVar5 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f6f80);
  func_0x00010c160fc0(puVar4);
  _objc_release(puVar4);
  _objc_release(uVar5);
  func_0x000104343c9c(&DAT_11306ff38,FUN_104343934);
  uVar5 = *param_1;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,param_1[1]);
  func_0x00010c212f20(puVar2);
  _objc_release(puVar2);
  _objc_release(uVar5);
  puVar2 = &DAT_11306ff40;
  func_0x000104343c9c(&DAT_11306ff40,0x104343a28);
  uVar5 = param_1[2];
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,param_1[3]);
  func_0x00010c212f20(puVar2);
  _objc_release(puVar2);
  _objc_release(uVar5);
  func_0x000104343bb8();
  uVar6 = param_1[4];
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,param_1[5]);
  func_0x00010c212f20(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar6);
  FUN_1043445ec(param_1);
  puVar7 = param_1;
  FUN_104344a38(param_1);
  func_0x000104344f98();
  func_0x000104344024();
  uVar5 = param_1[0xd];
  uVar6 = param_1[0xe];
  puVar8 = puVar7;
  FUN_104341734();
  uVar9 = uVar5;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,uVar6);
  func_0x00010c212f20(puVar8);
  _objc_release(puVar8);
  _objc_release(uVar9);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,uVar6);
  func_0x00010c161020(puVar7);
  _objc_release(puVar7);
  _objc_release(uVar5);
  func_0x0001043440fc();
  uVar6 = param_1[0xf];
  uVar9 = param_1[0x10];
  uVar10 = uVar5;
  func_0x0001043472d8();
  uVar11 = uVar6;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar9);
  func_0x00010c212f20(uVar10);
  _objc_release(uVar10);
  _objc_release(uVar11);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar9);
  func_0x00010c161020(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar6);
  func_0x000103417d34(param_1);
  func_0x00010434521c();
  _objc_release(puVar4);
  _swift_release(param_3);
  _swift_release(param_5);
  return puVar4;
}


