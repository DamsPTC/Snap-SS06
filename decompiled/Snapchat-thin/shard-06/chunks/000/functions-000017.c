/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043b69ac; end: 1043b6a87; -[_TtC17SCViewfinderScope17SCViewfinderScope initWithRenderTarget:defaultDataSource:] */

undefined8
FUN_1043b69ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_opt_self(PTR_PTR_1126ae6b8);
  func_0x0001005f57cc(0);
  _objc_retain(param_3);
  uVar2 = param_4;
  _swift_unknownObjectRetain(param_4);
  FUN_10450b144();
  func_0x00010c0860a0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c03e1a0(param_1,param_2,param_3,1,param_4,puVar1,0,0,0,0);
  _objc_release(puVar1);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  return param_1;
}



/* Entry: 1043b6a88; end: 1043b6c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1043b6a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_a0 [8];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113074eb0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113074eb0,0);
  lVar3 = _DAT_113074eb8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113074eb8,0);
  *(undefined8 *)(unaff_x20 + _DAT_113074e90) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113074e98) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113074ea0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113074ea8) = param_4;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_5);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_6);
  *(undefined8 *)(unaff_x20 + _DAT_113074ec0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113074ec8) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  puVar4 = auStack_a0;
  _objc_msgSendSuper2(puVar4,puVar1);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  return puVar4;
}



/* Entry: 1043b6c10; end: 1043b6cfb; -[_TtC17SCViewfinderScope17SCViewfinderScope initWithRenderTarget:defaultRenderingModuleType:defaultDataSource:screenLifecycleEvents:delegate:gestureRecognizerDelegate:lensProcessingURIPluginProvider:apiServicePluginProvider:] */

undefined8
FUN_1043b6c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_6);
  _swift_unknownObjectRetain(param_7);
  _swift_unknownObjectRetain(param_8);
  _swift_unknownObjectRetain(param_9);
  _swift_unknownObjectRetain(param_10);
  uVar1 = param_3;
  FUN_1043b7244(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_6);
  _swift_unknownObjectRelease(param_7);
  _swift_unknownObjectRelease(param_8);
  return uVar1;
}



/* Entry: 1043b6cfc; end: 1043b6d27; -[_TtC17SCViewfinderScope17SCViewfinderScope init] */

void FUN_1043b6cfc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCViewfinderScope.SCViewfinderScope",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b6d28);
  (*pcVar1)();
}



/* Entry: 1043b6d28; end: 1043b6dfb; -[_TtC17SCViewfinderScope17SCViewfinderScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b6d28(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074e90));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113074ea0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074ea8));
  func_0x000100db7c40(param_1 + _DAT_113074eb0);
  func_0x000100db7c40(param_1 + _DAT_113074eb8);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113074ec0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113074ec8));
  return;
}



/* Entry: 1043b6dfc; end: 1043b6f8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043b6dfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x00010023b5f0();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar2 = _DAT_113074eb0;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113074eb0,0);
  lVar3 = _DAT_113074eb8;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113074eb8,0);
  *(long *)(lVar5 + _DAT_113074e90) = param_1;
  *(undefined8 *)(lVar5 + _DAT_113074e98) = param_2;
  *(undefined8 *)(lVar5 + _DAT_113074ea0) = param_3;
  *(undefined8 *)(lVar5 + _DAT_113074ea8) = param_4;
  _swift_beginAccess(lVar5 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar2,param_5);
  _swift_beginAccess(lVar5 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_6);
  *(undefined8 *)(lVar5 + _DAT_113074ec0) = 0;
  *(undefined8 *)(lVar5 + _DAT_113074ec8) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_a0 = lVar5;
  lStack_98 = lVar4;
  _objc_retain(param_1);
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  plVar6 = &lStack_a0;
  _objc_msgSendSuper2(plVar6,puVar1);
  aplStack_b8[0] = plVar6;
  func_0x00010008a7c8(&uStack_a8,aplStack_b8);
  func_0x000100083b20(aplStack_b8);
  _swift_release(uStack_a8);
  _swift_unknownObjectRelease(aplStack_b8[0]);
  return plVar6;
}



/* Entry: 1043b6f8c; end: 1043b7063; -[_TtC17SCViewfinderScope25SCViewfinderScopeServices buildWithRenderTarget:defaultRenderingModuleType:defaultDataSource:screenLifecycleEvents:delegate:gestureRecognizerDelegate:] */

void FUN_1043b6f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_6);
  _swift_unknownObjectRetain(param_7);
  _swift_unknownObjectRetain(param_8);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_1043b6dfc(param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_6);
  _swift_unknownObjectRelease(param_7);
  _swift_unknownObjectRelease(param_8);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043b7064; end: 1043b715b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043b7064(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 auStack_58 [2];
  undefined8 uStack_48;
  
  func_0x00010023b5f0();
  _objc_allocWithZone();
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_opt_self(PTR_PTR_1126ae6b8);
  uVar2 = 0;
  func_0x0001005f57cc(0);
  FUN_10450b144();
  func_0x00010c0860a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c03e1a0();
  _objc_release(puVar1);
  auStack_58[0] = param_1;
  func_0x00010008a7c8(&uStack_48,auStack_58);
  func_0x000100083b20(auStack_58);
  _swift_release(uStack_48);
  _swift_unknownObjectRelease(auStack_58[0]);
  return param_1;
}



/* Entry: 1043b715c; end: 1043b71cf; -[_TtC17SCViewfinderScope25SCViewfinderScopeServices buildWithRenderTarget:defaultDataSource:] */

void FUN_1043b715c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_1043b7064(param_3,param_4);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043b71d0; end: 1043b71fb; -[_TtC17SCViewfinderScope25SCViewfinderScopeServices init] */

void FUN_1043b71d0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCViewfinderScope.SCViewfinderScopeServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b71fc);
  (*pcVar1)();
}



/* Entry: 1043b71fc; end: 1043b71ff;  */

void FUN_1043b71fc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043b7200; end: 1043b7233;  */

void FUN_1043b7200(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043b7234; end: 1043b7243; -[_TtC17SCViewfinderScope25SCViewfinderScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b7234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113074ed8));
  return;
}



/* Entry: 1043b7244; end: 1043b7393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b7244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  lVar2 = _DAT_113074eb0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113074eb0,0);
  lVar3 = _DAT_113074eb8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113074eb8,0);
  *(undefined8 *)(unaff_x20 + _DAT_113074e90) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113074e98) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113074ea0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113074ea8) = param_4;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_5);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_6);
  *(undefined8 *)(unaff_x20 + _DAT_113074ec0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113074ec8) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&stack0xffffffffffffff60,puVar1);
  return;
}



/* Entry: 1043b7394; end: 1043b73bf;  */

undefined1  [16] FUN_1043b7394(void)

{
  return ZEXT816(0x110764c80);
}



/* Entry: 1043b73c0; end: 1043b73ff;  */

void FUN_1043b73c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113074f30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf52b0;
  _swift_getWitnessTable(&UNK_10dcf52b0,&UNK_110764d80);
  puRam0000000113074f30 = puVar1;
  return;
}



/* Entry: 1043b7400; end: 1043b74ab;  */

void FUN_1043b7400(void)

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



/* Entry: 1043b74ac; end: 1043b74e3;  */

void FUN_1043b74ac(ulong *param_1,ulong *param_2)

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



/* Entry: 1043b74e4; end: 1043b750f; +[SCViewfinderDataSourceContext tinySnaps] */

void FUN_1043b74e4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x414e535f594e4954,0xea00000000005350);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b7510; end: 1043b753b; +[SCViewfinderDataSourceContext mySelfieOnboarding] */

void FUN_1043b7510(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1faf30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b753c; end: 1043b7553;  */

undefined * FUN_1043b753c(void)

{
  return &UNK_110764de8;
}



/* Entry: 1043b7554; end: 1043b757f; +[SCViewfinderDataSourceContext lensStory] */

void FUN_1043b7554(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f54535f534e454c,0xea00000000005952);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b7580; end: 1043b758b;  */

undefined * FUN_1043b7580(void)

{
  return &UNK_10dcf5430;
}



/* Entry: 1043b758c; end: 1043b75bf; +[SCViewfinderDataSourceContext playGamesView] */

void FUN_1043b758c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d41475f59414c50,0xef574549565f5345);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b75c0; end: 1043b75fb; -[SCViewfinderDataSourceContext init] */

void FUN_1043b75c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b75fc; end: 1043b762f;  */

void FUN_1043b75fc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043b7630; end: 1043b7633; -[SCViewfinderDataSourceContext .cxx_destruct] */

void FUN_1043b7630(void)

{
  return;
}



/* Entry: 1043b7634; end: 1043b7653;  */

void FUN_1043b7634(void)

{
  _objc_opt_self(&PTR_PTR_1129aac60);
  return;
}



/* Entry: 1043b7654; end: 1043b7663; -[_TtC24SCCameraHardwareServices24SCCameraHardwareServices deviceSubjectAreaHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b7654(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074fa0));
  return;
}



/* Entry: 1043b7664; end: 1043b774f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b7664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113074f60) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113074f68) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113074f70) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113074f78) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113074f80) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113074f88) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113074f90) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113074f98) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113074fa0) = param_9;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b7750; end: 1043b783f; -[_TtC24SCCameraHardwareServices24SCCameraHardwareServices initWithCameraHardwareServicesAPIImpl:cameraHardwareResource:managedCaptureSession:authorizationChecker:cameraHardwareOwnershipRequester:managedCapturerStateCoordinator:captureDeviceManager:deviceCapacityAnalyzer:deviceSubjectAreaHandler:] */

void FUN_1043b7750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain();
  func_0x0001000ba44c(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  return;
}



/* Entry: 1043b7840; end: 1043b789f; -[_TtC24SCCameraHardwareServices24SCCameraHardwareServices init] */

void FUN_1043b7840(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCameraHardwareServices.SCCameraHardwareServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b786c);
  (*pcVar1)();
}



/* Entry: 1043b78a0; end: 1043b7947; -[_TtC24SCCameraHardwareServices24SCCameraHardwareServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b78a0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074f60));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074f68));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074f70));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074f78));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074f80));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074f88));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074f90));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074f98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113074fa0));
  return;
}



/* Entry: 1043b7948; end: 1043b795f;  */

bool FUN_1043b7948(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1043b7960; end: 1043b799f;  */

void FUN_1043b7960(void)

{
  undefined *puVar1;
  
  if (puRam0000000113074fd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf5480;
  _swift_getWitnessTable(&UNK_10dcf5480,&UNK_110764f80);
  puRam0000000113074fd0 = puVar1;
  return;
}



/* Entry: 1043b79a0; end: 1043b7a4b;  */

void FUN_1043b79a0(void)

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



/* Entry: 1043b7a4c; end: 1043b7a9b;  */

void FUN_1043b7a4c(ulong *param_1,ulong *param_2)

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



/* Entry: 1043b7a9c; end: 1043b7adb;  */

void FUN_1043b7a9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113074fd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf5560;
  _swift_getWitnessTable(&UNK_10dcf5560,&UNK_110764ff8);
  puRam0000000113074fd8 = puVar1;
  return;
}



/* Entry: 1043b7adc; end: 1043b7b87;  */

void FUN_1043b7adc(void)

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



/* Entry: 1043b7b88; end: 1043b7bd3;  */

void FUN_1043b7b88(ulong *param_1,ulong *param_2)

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



/* Entry: 1043b7bd4; end: 1043b7cab;  */

void FUN_1043b7bd4(void)

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



/* Entry: 1043b7cac; end: 1043b7ccf;  */

void FUN_1043b7cac(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1043b7cd0; end: 1043b7d0f;  */

void FUN_1043b7cd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113074fe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf5620;
  _swift_getWitnessTable(&UNK_10dcf5620,&UNK_110765070);
  puRam0000000113074fe0 = puVar1;
  return;
}



/* Entry: 1043b7d10; end: 1043b7d33;  */

undefined1  [16] FUN_1043b7d10(void)

{
  return ZEXT816(0x110765070);
}



/* Entry: 1043b7d34; end: 1043b7e0b;  */

void FUN_1043b7d34(void)

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



/* Entry: 1043b7e0c; end: 1043b7e2b;  */

void FUN_1043b7e0c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1043b7e2c; end: 1043b7e6b;  */

void FUN_1043b7e2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113074fe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf56e0;
  _swift_getWitnessTable(&UNK_10dcf56e0,&UNK_1107651c0);
  puRam0000000113074fe8 = puVar1;
  return;
}



/* Entry: 1043b7e6c; end: 1043b7e97;  */

undefined1  [16] FUN_1043b7e6c(void)

{
  return ZEXT816(0x1107651c0);
}



/* Entry: 1043b7e98; end: 1043b7f1b;  */

void FUN_1043b7e98(void)

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



/* Entry: 1043b7f1c; end: 1043b7f37;  */

void FUN_1043b7f1c(ulong *param_1,ulong *param_2)

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



/* Entry: 1043b7f38; end: 1043b7f47; -[_TtC25SCCameraFingerDownWarming31CameraFingerDownWarmingServices fingerDownWarmupEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043b7f38(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113074ff8);
}



/* Entry: 1043b7f48; end: 1043b7fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b7f48(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113074ff0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113074ff8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b7fac; end: 1043b801b; -[_TtC25SCCameraFingerDownWarming31CameraFingerDownWarmingServices initWithFingerDownWarmer:fingerDownWarmupEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b7fac(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113074ff0) = param_3;
  *(undefined1 *)(param_1 + _DAT_113074ff8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1043b801c; end: 1043b804f;  */

void FUN_1043b801c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043b8050; end: 1043b8063; -[_TtC25SCCameraFingerDownWarming31CameraFingerDownWarmingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b8050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113074ff0));
  return;
}



/* Entry: 1043b8064; end: 1043b80a3;  */

void FUN_1043b8064(void)

{
  undefined *puVar1;
  
  if (puRam0000000113075000 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf57c0;
  _swift_getWitnessTable(&UNK_10dcf57c0,&UNK_110765270);
  puRam0000000113075000 = puVar1;
  return;
}



/* Entry: 1043b80a4; end: 1043b80a7;  */

void FUN_1043b80a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113075008 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf5860;
  _swift_getWitnessTable(&UNK_10dcf5860,&UNK_110765290);
  puRam0000000113075008 = puVar1;
  return;
}



/* Entry: 1043b80a8; end: 1043b80e7;  */

void FUN_1043b80a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113075008 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf5860;
  _swift_getWitnessTable(&UNK_10dcf5860,&UNK_110765290);
  puRam0000000113075008 = puVar1;
  return;
}



/* Entry: 1043b80e8; end: 1043b8143;  */

undefined1  [16] FUN_1043b80e8(void)

{
  return ZEXT816(0x110765270);
}



/* Entry: 1043b8144; end: 1043b821b;  */

void FUN_1043b8144(void)

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



/* Entry: 1043b821c; end: 1043b823b;  */

void FUN_1043b821c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1043b823c; end: 1043b827b;  */

void FUN_1043b823c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113075038 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf5980;
  _swift_getWitnessTable(&UNK_10dcf5980,&UNK_110765388);
  puRam0000000113075038 = puVar1;
  return;
}



/* Entry: 1043b827c; end: 1043b828b;  */

undefined1  [16] FUN_1043b827c(void)

{
  return ZEXT816(0x110765388);
}



/* Entry: 1043b828c; end: 1043b833b;  */

int FUN_1043b828c(int *param_1,uint param_2)

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



/* Entry: 1043b833c; end: 1043b83e7;  */

void FUN_1043b833c(void)

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



/* Entry: 1043b83e8; end: 1043b8427;  */

void FUN_1043b83e8(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1043b8428; end: 1043b844b; -[SCCameraHardwareOwnershipState description] */

void FUN_1043b8428(void)

{
  _objc_retain();
  FUN_1043b88a0();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b844c; end: 1043b8493; -[SCCameraHardwareOwnershipState init] */

void FUN_1043b844c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCameraHardwareOwnership/SCCameraHardwareOwnershipStateWrapper.swift",0x45,2,0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b8494);
  (*pcVar1)();
}



/* Entry: 1043b8494; end: 1043b8497; -[SCCameraHardwareOwnershipState copyWithZone:] */

void FUN_1043b8494(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043b8498; end: 1043b8543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b8498(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113075040) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075048);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075050);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075058);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075060);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b8544; end: 1043b869f; +[SCCameraHardwareOwnershipState willTransferOwnershipFrom:to:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b8544(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113075040) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113075048);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113075050);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113075058);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113075060);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b86a0; end: 1043b874f; +[SCCameraHardwareOwnershipState didTransferOwnershipFrom:to:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b86a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113075040) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113075048);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113075050);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113075058);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113075060);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b8750; end: 1043b8817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b8750(code *param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_113075040) == '\x01') {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113075058) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b880c);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113075060) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b8814);
      (*pcVar1)();
    }
    (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_113075058),
               *(undefined8 *)(unaff_x20 + _DAT_113075060));
  }
  else {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113075048) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b8810);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113075050) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b8818);
      (*pcVar1)();
    }
    (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_113075048),
               *(undefined8 *)(unaff_x20 + _DAT_113075050));
  }
  return;
}



/* Entry: 1043b8818; end: 1043b886b; -[SCCameraHardwareOwnershipState matchWillTransferOwnership:didTransferOwnership:] */

void FUN_1043b8818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_1043b8750(FUN_1043b8b30,auStack_40,0x1043b8b44,auStack_60);
  _objc_release(param_1);
  return;
}



/* Entry: 1043b886c; end: 1043b889f;  */

void FUN_1043b886c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043b88a0; end: 1043b8967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043b88a0(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + _DAT_113075040) == '\x01') {
    puVar2 = (undefined8 *)(param_1 + _DAT_113075058);
    if (*(char *)(puVar2 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b895c);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + _DAT_113075060 + 8) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b8964);
      (*pcVar1)();
    }
  }
  else {
    puVar2 = (undefined8 *)(param_1 + _DAT_113075048);
    if (*(char *)(puVar2 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b8960);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + _DAT_113075050 + 8) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b8968);
      (*pcVar1)();
    }
  }
  uVar3 = *puVar2;
  _objc_release();
  return uVar3;
}



/* Entry: 1043b8968; end: 1043b8987;  */

void FUN_1043b8968(void)

{
  _objc_opt_self(&PTR_PTR_1129aaed8);
  return;
}



/* Entry: 1043b8988; end: 1043b8aef;  */

int FUN_1043b8988(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1043b8a04;
        goto LAB_1043b89e8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1043b89e8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1043b8a04:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1043b8af0; end: 1043b8b2f;  */

void FUN_1043b8af0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113075090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf5ad4;
  _swift_getWitnessTable(&UNK_10dcf5ad4,&UNK_110765500);
  puRam0000000113075090 = puVar1;
  return;
}



/* Entry: 1043b8b30; end: 1043b8b47;  */

void FUN_1043b8b30(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001043b8b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 1043b8b48; end: 1043b8b8f; -[SCStillImageData image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b8b48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113075098;
  _swift_beginAccess(param_1 + _DAT_113075098,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1043b8b90; end: 1043b8bf3; -[SCStillImageData setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b8b90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113075098;
  _swift_beginAccess(param_1 + _DAT_113075098,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1043b8bf4; end: 1043b8bff; -[SCStillImageData metadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b8bf4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130750a0;
  _swift_beginAccess(param_1 + _DAT_1130750a0,auStack_38,0,0);
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043b8c00; end: 1043b8c0b; -[SCStillImageData setMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b8c00(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
               PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  lVar1 = _DAT_1130750a0;
  _swift_beginAccess(param_1 + _DAT_1130750a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(long *)(param_1 + lVar1) = param_3;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1043b8c0c; end: 1043b8c17; -[SCStillImageData healthInfoData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b8c0c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130750a8;
  _swift_beginAccess(param_1 + _DAT_1130750a8,auStack_38,0,0);
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043b8c18; end: 1043b8c9b;  */

void FUN_1043b8c18(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043b8c9c; end: 1043b8ca7; -[SCStillImageData setHealthInfoData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b8c9c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
               PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  lVar1 = _DAT_1130750a8;
  _swift_beginAccess(param_1 + _DAT_1130750a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(long *)(param_1 + lVar1) = param_3;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1043b8ca8; end: 1043b8d33;  */

void FUN_1043b8ca8(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
               PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  lVar2 = *param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = param_3;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Entry: 1043b8d34; end: 1043b8d8f; -[SCStillImageData timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b8d34(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_2 + _DAT_1130750b0);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  uVar2 = puVar1[2];
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = uVar2;
  return;
}



/* Entry: 1043b8d90; end: 1043b8df7; -[SCStillImageData setTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b8d90(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  uVar2 = *param_3;
  uVar3 = param_3[2];
  puVar1 = (undefined8 *)(param_1 + _DAT_1130750b0);
  uVar4 = param_3[1];
  _swift_beginAccess(puVar1,auStack_58,1,0);
  *puVar1 = uVar2;
  puVar1[1] = uVar4;
  puVar1[2] = uVar3;
  return;
}



/* Entry: 1043b8df8; end: 1043b8e47;  */

undefined8 FUN_1043b8df8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1043b91e8(param_1,param_2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1043b8e48; end: 1043b8e77;  */

undefined8 FUN_1043b8e48(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1043b91e8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1043b8e78; end: 1043b8eff; -[SCStillImageData initWithImage:metadata:] */

undefined8 FUN_1043b8e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
               PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043b91e8(param_3,param_4);
  _objc_release(uVar1);
  return param_3;
}



/* Entry: 1043b8f00; end: 1043b8f03; -[SCStillImageData copyWithZone:] */

void FUN_1043b8f00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043b8f04; end: 1043b8f63; -[SCStillImageData init] */

void FUN_1043b8f04(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCCapturer.StillImageData",0x19,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b8f30);
  (*pcVar1)();
}



/* Entry: 1043b8f64; end: 1043b8fab; -[SCStillImageData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b8f64(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113075098));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130750a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130750a8));
  return;
}



/* Entry: 1043b8fac; end: 1043b9123;  */

void FUN_1043b8fac(ulong *param_1,ulong *param_2)

{
  ulong *unaff_x20;
  
  *param_1 = *unaff_x20 | *param_2;
  return;
}



/* Entry: 1043b9124; end: 1043b91cb;  */

void FUN_1043b9124(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_1043b91b8;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_1043b91b8:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 1043b91cc; end: 1043b91e7;  */

void FUN_1043b91cc(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1043b91e8; end: 1043b92eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b91e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_getObjectType();
  lVar3 = _DAT_113075098;
  *(undefined8 *)(unaff_x20 + _DAT_113075098) = 0;
  lVar4 = _DAT_1130750a0;
  *(undefined8 *)(unaff_x20 + _DAT_1130750a0) = 0;
  lVar5 = _DAT_1130750a8;
  *(undefined8 *)(unaff_x20 + _DAT_1130750a8) = 0;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_68,1,0);
  *(undefined8 *)(unaff_x20 + lVar3) = param_1;
  _swift_beginAccess(unaff_x20 + lVar4,auStack_80,1,0);
  *(undefined8 *)(unaff_x20 + lVar4) = param_2;
  _swift_beginAccess(unaff_x20 + lVar5,auStack_98,1,0);
  *(undefined8 *)(unaff_x20 + lVar5) = 0;
  puVar2 = PTR__kCMTimeZero_110348670;
  uVar6 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130750b0);
  *puVar1 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  puVar1[1] = *(undefined8 *)(puVar2 + 8);
  puVar1[2] = uVar6;
  puVar2 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&stack0xffffffffffffff58,puVar2);
  return;
}


