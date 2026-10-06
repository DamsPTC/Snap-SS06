/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006c006c; end: 1006c007b; -[_TtC32SCViewfinderDataPipelineServices32SCViewfinderDataPipelineServices processingPipeline] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c006c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302a380));
  return;
}



/* Entry: 1006c007c; end: 1006c0083; -[SCLensProcessingServices lensComponents] */

undefined8 FUN_1006c007c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1006c0084; end: 1006c008b; -[SCLensProcessingComponentsFacade lensApplicator] */

undefined8 FUN_1006c0084(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006c008c; end: 1006c049f; -[SCCameraViewfinderLegacyEntryPoint _attachCameraCaptureLensProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c008c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61174(param_3);
  lVar1 = param_1 + _DAT_11274388c;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c3f0f4();
  func_0x000107c61180();
  func_0x000107c61144(auStack_80,lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112743890;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c44680();
  func_0x000107c61180();
  func_0x000107c61144(auStack_88,lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  param_1 = param_1 + _DAT_112743874;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c519d8();
  func_0x000107c61180();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_100855bf4;
  puStack_a8 = &UNK_110916fe8;
  func_0x000107c6111c(auStack_98,auStack_80);
  func_0x000107c61174(param_3);
  uStack_a0 = param_3;
  func_0x000107c6111c(auStack_90,auStack_88);
  lVar2 = lVar1;
  func_0x000107c4c280(lVar1);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c3feb4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  puVar4 = auStack_80;
  func_0x000107c61148(puVar4);
  puVar5 = puVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5bde8();
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c5e628();
  func_0x000107c61180();
  puVar8 = puVar7;
  func_0x000107c3feb4();
  func_0x000107c61180();
  func_0x000107c61174(param_3);
  func_0x000107c6111c(auStack_c8,auStack_88);
  puVar9 = puVar8;
  func_0x000107c5c320(puVar8);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  puVar4 = auStack_80;
  func_0x000107c61148(puVar4);
  puVar5 = puVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5dd7c();
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c5e628();
  func_0x000107c61180();
  puVar8 = puVar7;
  func_0x000107c3feb4();
  func_0x000107c61180();
  func_0x000107c61174(param_3);
  puVar9 = puVar8;
  func_0x000107c5c320(puVar8);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_c8);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar3);
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1006c04a0; end: 1006c04bf; -[_TtC18SCCameraMLServices18SCCameraMLServices handler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c04a0(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_1130764c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006c04c0; end: 1006c04f7; -[SCObservable compactMap] */

void FUN_1006c04c0(void)

{
  func_0x000107c610f4(PTR_PTR_1126e2e70);
  func_0x000107c47d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006c04f8; end: 1006c04ff; -[SCCameraHardwareResourceImpl stillImageCapturerObservable] */

undefined8 FUN_1006c04f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1006c0500; end: 1006c0573; -[SCObservable withLatestFrom:combiner:] */

void FUN_1006c0500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2fb0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c47d84();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1006c0574; end: 1006c063b; -[SCWithLatestFromObservable initWithParentObservable:otherObservable:combiner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1006c0574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_11270e548;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_initWithParentObservable__1125ea888,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11279676c;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    func_0x000107c61170(uVar2);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112796770);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112796770) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1006c063c; end: 1006c06df; -[SCWithLatestFromObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c063c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c4e358(param_1);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126e2fb8;
  func_0x000107c610f4(PTR_PTR_1126e2fb8);
  func_0x000107c470f4();
  func_0x000107c61170(param_3);
  uVar2 = param_1;
  func_0x000107c5c310(param_1,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1006c06e0; end: 1006c083f; -[SCWithLatestFromObserver initWithLatestFromObservable:combiner:observer:] */

undefined8 *
FUN_1006c06e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_11270e550;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    func_0x000107c61170(uVar2);
    *(undefined4 *)(puVar1 + 5) = 0;
    func_0x000107c61144(auStack_58,puVar1);
    func_0x000107c6111c(auStack_60,auStack_58);
    uVar2 = param_3;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_58);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1006c0840; end: 1006c087f; -[SCWithLatestFromObservable .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001006c0864: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006c0868) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c0840(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112796770,0);
  return;
}



/* Entry: 1006c0880; end: 1006c0a0b; -[SCCameraViewfinderLegacyEntryPoint _attachStartupWorkflow] */

/* WARNING: Possible PIC construction at 0x0001006c08f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006c0900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006c0978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006c0988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006c0998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006c09dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006c09ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006c09e0) */
/* WARNING: Removing unreachable block (ram,0x0001006c099c) */
/* WARNING: Removing unreachable block (ram,0x0001006c098c) */
/* WARNING: Removing unreachable block (ram,0x0001006c097c) */
/* WARNING: Removing unreachable block (ram,0x0001006c0904) */
/* WARNING: Removing unreachable block (ram,0x0001006c08f4) */
/* WARNING: Removing unreachable block (ram,0x0001006c09f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c0880(long param_1)

{
  param_1 = param_1 + _DAT_112743894;
  func_0x000107c61148(param_1);
  func_0x000107c3dfac();
  func_0x000107c61180();
  func_0x000107c5e370();
  func_0x000107c61180();
  func_0x000107c4c280();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1006c0a0c; end: 1006c0a13; -[SCLensProcessingServices lensFPSTracker] */

undefined8 FUN_1006c0a0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1006c0a14; end: 1006c0b97; -[SCCameraViewfinderStartupWorkflow initWithStartupEventBus:willEnterForegroundSignal:lensFPSTracker:] */

undefined8 *
FUN_1006c0a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126f0810;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    func_0x000107c61170(uVar2);
    *(undefined2 *)(puVar1 + 3) = 0x101;
    *(undefined4 *)((long)puVar1 + 0x1c) = 0;
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_58,puVar1);
    func_0x000107c6111c(auStack_60,auStack_58);
    uVar2 = param_4;
    func_0x000107c5c320(param_4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_58);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1006c0b98; end: 1006c0ba7; -[_TtC32SCViewfinderDataPipelineServices32SCViewfinderDataPipelineServices renderingPipeline] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c0b98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302a390));
  return;
}



/* Entry: 1006c0ba8; end: 1006c0bbb; -[SCViewfinderRenderingPipelineImpl setStartupDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c0ba8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112743950,param_3);
  return;
}



/* Entry: 1006c0bbc; end: 1006c0c2f; -[SCCameraCaptureLensProvidingServices initWithCameraLensProvider:] */

undefined1 * FUN_1006c0bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112704478;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006c0c30; end: 1006c0d17; -[SCViewfinderRenderingPipelineImpl addRenderingModule:] */

void FUN_1006c0c30(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c40400(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x000107c5bca4(param_1);
    func_0x000107c61180();
    func_0x000107c5e324();
    func_0x000107c61170(uVar1);
    uVar2 = param_3;
    func_0x000107c50128();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1008bbd34;
    puStack_48 = &UNK_110917628;
    uStack_40 = param_1;
    uStack_38 = uVar2;
    func_0x000107c4210c(param_3,param_2,&puStack_60);
    func_0x000107c3d774(param_1,param_2,param_3);
    func_0x000107c4168c(param_1);
    func_0x000107c61180();
    func_0x000107c419c4();
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1006c0d18; end: 1006c0d87; -[SCViewfinderPipelineBase containsModule:] */

undefined8 FUN_1006c0d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c40404(uVar1,param_2,param_3);
  func_0x000107c611f0(param_1 + 8);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1006c0d88; end: 1006c0da7; -[SCViewfinderRenderingPipelineImpl startupDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c0d88(long param_1)

{
  func_0x000107c61148(param_1 + _DAT_112743950);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006c0da8; end: 1006c0db3; -[SCCameraViewfinderStartupWorkflow willAttachRenderModule] */

void FUN_1006c0da8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onCustomPoint__112616730,0x30);
  return;
}



/* Entry: 1006c0db4; end: 1006c0dbb; -[SCCameraViewfinderRenderAgentImpl renderingModuleType] */

undefined8 FUN_1006c0db4(void)

{
  return 1;
}



/* Entry: 1006c0dbc; end: 1006c0e5b; -[SCCameraViewfinderRenderAgentImpl displayLayerContainer:] */

void FUN_1006c0dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  func_0x000107c3b3ec(param_1);
  func_0x000107c61180();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1008bbd1c;
  puStack_30 = &UNK_110872bc0;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c43084(param_1,param_2,&puStack_48);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1006c0e5c; end: 1006c0ec7; -[SCViewfinderPipelineBase addModule:] */

void FUN_1006c0e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 8);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x000107c40404(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x000107c3d798(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  }
  func_0x000107c611f0(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1006c0ec8; end: 1006c0ee7; -[SCViewfinderRenderingPipelineImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c0ec8(long param_1)

{
  func_0x000107c61148(param_1 + _DAT_112743954);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006c0ee8; end: 1006c0eeb; -[SCViewfinderPipelineCoordinator didAddRenderingModuleOfType:] */

void FUN_1006c0ee8(void)

{
  return;
}



/* Entry: 1006c0eec; end: 1006c0f47;  */

void FUN_1006c0eec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006c0f48; end: 1006c0f53;  */

undefined ** FUN_1006c0f48(void)

{
  return &PTR_DAT_1130670f0;
}



/* Entry: 1006c0f54; end: 1006c0f7f;  */

void FUN_1006c0f54(void)

{
  FUN_1006b2280();
  return;
}



/* Entry: 1006c0f80; end: 1006c0f87;  */

void FUN_1006c0f80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102b5e4a8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006c0f88; end: 1006c100b;  */

void FUN_1006c0f88(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102b5e4a8,param_2,&UNK_102b5e4ac,param_2,&UNK_102b5e4d4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006c100c; end: 1006c1017;  */

undefined ** FUN_1006c100c(void)

{
  return &PTR_DAT_1130670f0;
}



/* Entry: 1006c1018; end: 1006c1043;  */

void FUN_1006c1018(void)

{
  FUN_1006b2280();
  return;
}



/* Entry: 1006c1044; end: 1006c104b;  */

void FUN_1006c1044(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102b5f344);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006c104c; end: 1006c10cf;  */

void FUN_1006c104c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102b5f344,param_2,&UNK_102b5f348,param_2,&UNK_102b5f370,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006c10d0; end: 1006c10db;  */

undefined ** FUN_1006c10d0(void)

{
  return &PTR_DAT_1130670f0;
}



/* Entry: 1006c10dc; end: 1006c1107;  */

void FUN_1006c10dc(void)

{
  FUN_1006b2280();
  return;
}



/* Entry: 1006c1108; end: 1006c110f;  */

void FUN_1006c1108(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102b5f49c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006c1110; end: 1006c1193;  */

void FUN_1006c1110(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102b5f49c,param_2,FUN_1006c1194,param_2,&UNK_102b5f4a0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006c1194; end: 1006c11bb;  */

void FUN_1006c1194(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1006c11bc; end: 1006c11c7;  */

void FUN_1006c11bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100692ce4();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  func_0x0001006c1278(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006c11c8; end: 1006c141f;  */

void FUN_1006c11c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100692ce4();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  func_0x0001006c1278(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006c1420; end: 1006c14eb; -[SCLensProcessingInMemoryAssetsPluginEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x0001006c14b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006c14c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006c14b8) */
/* WARNING: Removing unreachable block (ram,0x0001006c14c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c1420(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126db5d0;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_112779588;
  func_0x000107c61148(lVar2);
  func_0x000107c496e0();
  func_0x000107c61180();
  lVar3 = param_1 + _DAT_11277958c;
  func_0x000107c61148(lVar3);
  func_0x000107c4ad38();
  func_0x000107c61180();
  func_0x000107c457c0(puVar1,param_2,lVar2,lVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112779590);
  *(undefined **)(param_1 + _DAT_112779590) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1006c14ec; end: 1006c161b; -[SCLensProcessingInMemoryAssetsWorkflow initWithAssetProvider:lensDataFetcher:] */

undefined8 *
FUN_1006c14ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126fdfb8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_58,puVar1);
    uVar2 = puVar1[2];
    func_0x000107c6111c(auStack_60,auStack_58);
    func_0x000107c4db94(uVar2);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_58);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1006c161c; end: 1006c1623;  */

void FUN_1006c161c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006c1624; end: 1006c1657;  */

void FUN_1006c1624(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006c1658; end: 1006c1663;  */

undefined ** FUN_1006c1658(void)

{
  return &PTR_DAT_1130670f0;
}



/* Entry: 1006c1664; end: 1006c168f;  */

void FUN_1006c1664(void)

{
  FUN_1006b2280();
  return;
}



/* Entry: 1006c1690; end: 1006c1697;  */

void FUN_1006c1690(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102b5fcb4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006c1698; end: 1006c171b;  */

void FUN_1006c1698(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102b5fcb4,param_2,FUN_1006c171c,param_2,&UNK_102b5fcb8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006c171c; end: 1006c1743;  */

void FUN_1006c171c(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1006c1744; end: 1006c1f1b;  */

void FUN_1006c1744(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
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
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_10069f510();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar9 = uStack_a8;
  func_0x000107c61174();
  uVar10 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar11 = uStack_b8;
  func_0x000107c61174();
  uVar12 = uStack_c0;
  func_0x000107c61174(uStack_c0);
  uVar13 = uStack_c8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126ac020;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar14 = auStack_70[0];
  func_0x000107c61174();
  uVar15 = 0x646e696677656976;
  func_0x000107c5fadc(0x646e696677656976,0xef65706f63537265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar16 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar16);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar16);
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef23cd0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(uVar16);
  uVar15 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(uVar16);
  uVar15 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1f630);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f0f40d0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar15);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar15);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar15 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc6cd0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0f40f0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc6a20);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar15);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar16);
  uVar15 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef3a8e0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar15);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar16);
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef235a0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  lVar17 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar16);
  func_0x000107c61174();
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0f4110);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(uVar15);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar17 != 0) {
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    *(long *)(param_2 + 0x78) = lVar17;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006c1f1c);
  (*pcVar1)();
}



/* Entry: 1006c1f1c; end: 1006c1f57;  */

void FUN_1006c1f1c(void)

{
  long unaff_x20;
  
  FUN_1006c1744(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1006c1f58; end: 1006c1f5f;  */

void FUN_1006c1f58(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006c1f60; end: 1006c1fb3;  */

void FUN_1006c1f60(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006c1fb4; end: 1006c2537;  */

void FUN_1006c1fb4(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_10069d52c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  puVar1 = PTR_PTR_1126ac028;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0x646e696677656976;
  func_0x000107c5fadc(0x646e696677656976,0xef65706f63537265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar11);
  uVar12 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar12);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef23cd0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar11 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc6cd0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1f630);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc6a20);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0f40f0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef235a0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc64f0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  uVar11 = uVar12;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  *(undefined8 *)(param_2 + 0x58) = uVar11;
  *param_1 = param_2;
  return;
}



/* Entry: 1006c2538; end: 1006c258f;  */

void FUN_1006c2538(void)

{
  long unaff_x20;
  
  FUN_1006c1fb4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1006c2590; end: 1006c2a67; -[SCLensProcessingLensModeServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c2590(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar1 = param_1;
  func_0x0001006c256c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4afac();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4ade8();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  lVar1 = param_1;
  func_0x0001006c256c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4afac();
  func_0x000107c61180();
  lVar4 = lVar2;
  func_0x000107c4b148();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  lVar1 = param_1;
  func_0x0001006c256c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4e600();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar5 = PTR_PTR_1126ae720;
  puVar12 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  puStack_a0 = &UNK_108ca77b8;
  puStack_98 = &UNK_110ac13b8;
  func_0x000107c61174(lVar4);
  lStack_90 = lVar4;
  func_0x000107c61174(lVar3);
  lStack_88 = lVar3;
  func_0x000107c61174(lVar2);
  lStack_80 = lVar2;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar13 = *(undefined8 *)(param_1 + _DAT_112779ac4);
  *(undefined **)(param_1 + _DAT_112779ac4) = puVar5;
  func_0x000107c61170(uVar13);
  lVar1 = param_1;
  FUN_1006c2a78();
  func_0x000107c61180();
  lVar6 = lVar1;
  func_0x000107c4ad38();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1;
  FUN_1006c2a78();
  func_0x000107c61180();
  lVar7 = lVar1;
  func_0x000107c4ad3c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112779ae8;
  func_0x000107c61148();
  lVar8 = lVar1;
  func_0x000107c4b020();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar5 = PTR_PTR_1126ae720;
  puStack_e8 = puVar12;
  uStack_e0 = 0xc2000000;
  puStack_d8 = &UNK_108ca7880;
  puStack_d0 = &UNK_110ac1148;
  func_0x000107c61174(lVar8);
  lStack_c8 = lVar8;
  func_0x000107c61174(lVar7);
  lStack_c0 = lVar7;
  func_0x000107c61174(lVar6);
  lStack_b8 = lVar6;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar1 = param_1 + _DAT_112779ad8;
  func_0x000107c61148();
  lVar9 = lVar1;
  func_0x000107c3dfac();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112779aec;
  func_0x000107c61148();
  lVar10 = lVar1;
  func_0x000107c496e0();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar11 = PTR_PTR_1126ae720;
  puStack_120 = puVar12;
  uStack_118 = 0xc2000000;
  puStack_110 = &UNK_108ca7914;
  puStack_108 = &UNK_110ac13e8;
  func_0x000107c61174(puVar5);
  puStack_100 = puVar5;
  func_0x000107c61174(lVar9);
  lStack_f8 = lVar9;
  func_0x000107c61174(lVar10);
  lStack_f0 = lVar10;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar13 = *(undefined8 *)(param_1 + _DAT_112779ac8);
  *(undefined **)(param_1 + _DAT_112779ac8) = puVar11;
  func_0x000107c61170(uVar13);
  func_0x000107c61144(auStack_128,param_1);
  param_1 = param_1 + _DAT_112779acc;
  func_0x000107c61148();
  lVar1 = param_1;
  func_0x000107c3ee24();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar12 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_130,auStack_128);
  func_0x000107c61174(lVar1);
  func_0x000107c61174(lVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126db898;
  func_0x000107c610f4(PTR_PTR_1126db898);
  func_0x000107c4738c();
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61120(auStack_130);
  func_0x000107c61170(lVar1);
  func_0x000107c61120(auStack_128);
  func_0x000107c61170(lStack_f0);
  func_0x000107c61170(lStack_f8);
  func_0x000107c61170(puStack_100);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lStack_b8);
  func_0x000107c61170(lStack_c0);
  func_0x000107c61170(lStack_c8);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lStack_80);
  func_0x000107c61170(lStack_88);
  func_0x000107c61170(lStack_90);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1006c2a68; end: 1006c2a6f; -[SCLensProcessingComponentsFacade lensFeatureProvider] */

undefined8 FUN_1006c2a68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1006c2a70; end: 1006c2a77; -[SCLensProcessingServices performer] */

undefined8 FUN_1006c2a70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1006c2a78; end: 1006c2a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c2a78(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112779ae4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006c2a9c; end: 1006c2aa3; -[SCLegacyLensDataFetcherServices legacyLensDataFetcherFactory] */

undefined8 FUN_1006c2a9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1006c2aa4; end: 1006c2b1b; -[SCLensProcessingLensModeFactoryServices initWithLensModeFeatureDelegates:lensModeFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c2aa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113036110) = param_3;
  *(undefined8 *)(param_1 + _DAT_113036118) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1006c2b1c; end: 1006c2ba3;  */

void FUN_1006c2b1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006c2ba4; end: 1006c37fb; -[SCLensProcessingLensModeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c2ba4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar25 = param_1;
  func_0x0001006c2b80();
  func_0x000107c61180();
  lVar27 = lVar25;
  func_0x000107c4afac();
  func_0x000107c61180();
  lVar1 = lVar27;
  func_0x000107c4ade8();
  func_0x000107c61180();
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar25);
  lVar25 = param_1;
  func_0x0001006c2b80();
  func_0x000107c61180();
  lVar27 = lVar25;
  func_0x000107c4afac();
  func_0x000107c61180();
  lVar2 = lVar27;
  func_0x000107c4b148();
  func_0x000107c61180();
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar25);
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_112779a7c;
    func_0x000107c61148();
  }
  lVar3 = lVar25;
  func_0x000107c3f0fc();
  func_0x000107c61180();
  func_0x000107c61170(lVar25);
  lVar25 = param_1;
  func_0x0001006c2b80();
  func_0x000107c61180();
  lVar4 = lVar25;
  func_0x000107c4e600();
  func_0x000107c61180();
  func_0x000107c61170(lVar25);
  lVar25 = param_1;
  FUN_1006c37fc();
  func_0x000107c61180();
  lVar27 = lVar25;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar5 = lVar27;
  func_0x000107c4b42c();
  func_0x000107c61180();
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar25);
  puVar6 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar23 = *(undefined8 *)(param_1 + _DAT_112779a3c);
  *(undefined **)(param_1 + _DAT_112779a3c) = puVar6;
  func_0x000107c61170(uVar23);
  lVar25 = param_1 + _DAT_112779a40;
  func_0x000107c61148();
  lVar27 = lVar25;
  func_0x000107c4129c();
  func_0x000107c61180();
  lVar7 = lVar27;
  func_0x000107c40534();
  func_0x000107c61180();
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar25);
  puVar6 = PTR_PTR_1126ae720;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  puStack_b0 = &UNK_108ca5750;
  puStack_a8 = &UNK_110ac10c8;
  func_0x000107c61174(lVar7);
  lStack_a0 = lVar7;
  func_0x000107c61174(lVar5);
  lStack_98 = lVar5;
  func_0x000107c61174(lVar2);
  lStack_90 = lVar2;
  func_0x000107c61174(lVar1);
  lStack_88 = lVar1;
  func_0x000107c61174(lVar4);
  lStack_80 = lVar4;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar27 = (long)_DAT_112779a44;
  uVar23 = *(undefined8 *)(param_1 + lVar27);
  *(undefined **)(param_1 + lVar27) = puVar6;
  func_0x000107c61170(uVar23);
  func_0x000107c61144(auStack_c8,lVar3);
  func_0x000107c61144(auStack_d0,param_1);
  uVar23 = *(undefined8 *)(param_1 + lVar27);
  func_0x000107c6111c(auStack_e0,auStack_d0);
  func_0x000107c6111c(auStack_d8,auStack_c8);
  func_0x000107c4db94(uVar23);
  lVar25 = param_1 + _DAT_112779a80;
  func_0x000107c61148();
  lVar8 = lVar25;
  func_0x000107c4ad38();
  func_0x000107c61180();
  func_0x000107c61170(lVar25);
  lVar25 = param_1 + _DAT_112779a80;
  func_0x000107c61148();
  lVar9 = lVar25;
  func_0x000107c4ad3c();
  func_0x000107c61180();
  func_0x000107c61170(lVar25);
  lVar25 = param_1 + _DAT_112779a88;
  func_0x000107c61148();
  lVar10 = lVar25;
  func_0x000107c4b020();
  func_0x000107c61180();
  func_0x000107c61170(lVar25);
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c61174(lVar10);
  func_0x000107c61174(lVar9);
  func_0x000107c61174(lVar8);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar25 = param_1 + _DAT_112779a70;
  func_0x000107c61148();
  lVar11 = lVar25;
  func_0x000107c3dfac();
  func_0x000107c61180();
  func_0x000107c61170(lVar25);
  puVar12 = PTR_PTR_1126ae720;
  func_0x000107c61174(puVar6);
  func_0x000107c61174(lVar11);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar25 = (long)_DAT_112779a48;
  uVar23 = *(undefined8 *)(param_1 + lVar25);
  *(undefined **)(param_1 + lVar25) = puVar12;
  func_0x000107c61170(uVar23);
  uVar26 = *(undefined8 *)(param_1 + lVar25);
  func_0x000107c61174(uVar26);
  uVar23 = *(undefined8 *)(param_1 + lVar27);
  func_0x000107c61174();
  lVar25 = param_1 + _DAT_112779a4c;
  func_0x000107c61148();
  lVar13 = lVar25;
  func_0x000107c5190c();
  func_0x000107c61180();
  func_0x000107c61170(lVar25);
  lVar25 = param_1 + _DAT_112779a50;
  func_0x000107c61148();
  lVar27 = param_1 + _DAT_112779a54;
  func_0x000107c61148();
  lVar14 = lVar27;
  func_0x000107c3ee24();
  func_0x000107c61180();
  func_0x000107c61170(lVar27);
  lVar27 = param_1 + _DAT_112779a88;
  func_0x000107c61148();
  lVar15 = lVar27;
  func_0x000107c4b020();
  func_0x000107c61180();
  func_0x000107c61170(lVar27);
  puVar12 = PTR_PTR_1126ae720;
  func_0x000107c61174(uVar26);
  func_0x000107c61174(uVar23);
  func_0x000107c61174(lVar13);
  func_0x000107c61174(lVar25);
  func_0x000107c61174(lVar14);
  func_0x000107c61174(lVar15);
  func_0x000107c61174(lVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar27 = param_1 + _DAT_112779a78;
  func_0x000107c61148();
  lVar16 = lVar27;
  func_0x000107c4008c();
  func_0x000107c61180();
  func_0x000107c61170(lVar27);
  lVar27 = param_1 + _DAT_112779a88;
  func_0x000107c61148();
  lVar17 = lVar27;
  func_0x000107c4b020();
  func_0x000107c61180();
  lVar18 = lVar17;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar19 = lVar18;
  func_0x000107c50770();
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar27);
  lVar27 = lVar16;
  lVar17 = param_1;
  if ((int)lVar19 == 0) {
    lVar18 = lVar16;
    func_0x000107c444bc(lVar16);
    func_0x000107c61180();
    lVar19 = param_1;
    func_0x000107c3afb4();
    func_0x000107c61180();
    uVar24 = *(undefined8 *)(param_1 + _DAT_112779a58);
    *(long *)(param_1 + _DAT_112779a58) = lVar19;
    func_0x000107c61170(uVar24);
    func_0x000107c61170(lVar18);
    lVar18 = lVar16;
    func_0x000107c4d16c(lVar16);
    func_0x000107c61180();
    lVar19 = param_1;
    func_0x000107c3afb4();
    func_0x000107c61180();
    uVar24 = *(undefined8 *)(param_1 + _DAT_112779a5c);
    *(long *)(param_1 + _DAT_112779a5c) = lVar19;
    func_0x000107c61170(uVar24);
    func_0x000107c61170(lVar18);
    lVar18 = lVar16;
    func_0x000107c51d48(lVar16);
    func_0x000107c61180();
    lVar19 = param_1;
    func_0x000107c3afb4();
    func_0x000107c61180();
    uVar24 = *(undefined8 *)(param_1 + _DAT_112779a60);
    *(long *)(param_1 + _DAT_112779a60) = lVar19;
    func_0x000107c61170(uVar24);
    func_0x000107c61170(lVar18);
    lVar18 = lVar16;
    func_0x000107c4fdc8(lVar16);
    func_0x000107c61180();
    lVar19 = param_1;
    func_0x000107c3afb4();
    func_0x000107c61180();
    uVar24 = *(undefined8 *)(param_1 + _DAT_112779a64);
    *(long *)(param_1 + _DAT_112779a64) = lVar19;
    func_0x000107c61170(uVar24);
    func_0x000107c61170(lVar18);
    lVar18 = lVar16;
    func_0x000107c4ae38();
    func_0x000107c61180();
    lVar19 = lVar18;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar20 = lVar19;
    func_0x000107c4b2cc();
    func_0x000107c61170(lVar19);
    func_0x000107c61170(lVar18);
    if ((int)lVar20 == 0) goto LAB_1006c3538;
    func_0x000107c4ae38(lVar16);
    func_0x000107c61180();
    func_0x000107c3afb4();
    func_0x000107c61180();
  }
  else {
    lVar18 = lVar16;
    func_0x000107c444bc(lVar16);
    func_0x000107c61180();
    lVar19 = param_1;
    func_0x000107c3afb8();
    func_0x000107c61180();
    uVar24 = *(undefined8 *)(param_1 + _DAT_112779a58);
    *(long *)(param_1 + _DAT_112779a58) = lVar19;
    func_0x000107c61170(uVar24);
    func_0x000107c61170(lVar18);
    lVar18 = lVar16;
    func_0x000107c4d16c(lVar16);
    func_0x000107c61180();
    lVar19 = param_1;
    func_0x000107c3afb8();
    func_0x000107c61180();
    uVar24 = *(undefined8 *)(param_1 + _DAT_112779a5c);
    *(long *)(param_1 + _DAT_112779a5c) = lVar19;
    func_0x000107c61170(uVar24);
    func_0x000107c61170(lVar18);
    lVar18 = lVar16;
    func_0x000107c51d48(lVar16);
    func_0x000107c61180();
    lVar19 = param_1;
    func_0x000107c3afb8();
    func_0x000107c61180();
    uVar24 = *(undefined8 *)(param_1 + _DAT_112779a60);
    *(long *)(param_1 + _DAT_112779a60) = lVar19;
    func_0x000107c61170(uVar24);
    func_0x000107c61170(lVar18);
    lVar18 = lVar16;
    func_0x000107c4fdc8(lVar16);
    func_0x000107c61180();
    lVar19 = param_1;
    func_0x000107c3afb8();
    func_0x000107c61180();
    uVar24 = *(undefined8 *)(param_1 + _DAT_112779a64);
    *(long *)(param_1 + _DAT_112779a64) = lVar19;
    func_0x000107c61170(uVar24);
    func_0x000107c61170(lVar18);
    lVar18 = lVar16;
    func_0x000107c4ae38();
    func_0x000107c61180();
    lVar19 = lVar18;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar20 = lVar19;
    func_0x000107c4b2cc();
    func_0x000107c61170(lVar19);
    func_0x000107c61170(lVar18);
    if ((int)lVar20 == 0) goto LAB_1006c3538;
    func_0x000107c4ae38(lVar16);
    func_0x000107c61180();
    func_0x000107c3afb8();
    func_0x000107c61180();
  }
  uVar24 = *(undefined8 *)(param_1 + _DAT_112779a68);
  *(long *)(param_1 + _DAT_112779a68) = lVar17;
  func_0x000107c61170(uVar24);
  func_0x000107c61170(lVar27);
LAB_1006c3538:
  lVar27 = param_1 + _DAT_112779a6c;
  func_0x000107c61148();
  lVar17 = lVar27;
  func_0x000107c5c21c();
  func_0x000107c61180();
  func_0x000107c61170(lVar27);
  puVar21 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar22 = PTR_PTR_1126db880;
  func_0x000107c610f4(PTR_PTR_1126db880);
  func_0x000107c47390();
  uVar24 = *(undefined8 *)(param_1 + _DAT_112779a8c);
  func_0x000107c61174(uVar24);
  func_0x000107c42c20(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(puVar22);
  func_0x000107c61170(puVar21);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61120(auStack_e0);
  func_0x000107c61120(auStack_d0);
  func_0x000107c61120(auStack_c8);
  func_0x000107c61170(lStack_80);
  func_0x000107c61170(lStack_88);
  func_0x000107c61170(lStack_90);
  func_0x000107c61170(lStack_98);
  func_0x000107c61170(lStack_a0);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1006c37fc; end: 1006c381f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c37fc(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112779a78);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006c3820; end: 1006c3827; -[SCCameraConfigurationImpl lensStackingConfiguration] */

undefined8 FUN_1006c3820(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1006c3828; end: 1006c382f; -[SCLensScheduleNamespaceServices scheduleServiceProvider] */

undefined8 FUN_1006c3828(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006c3830; end: 1006c386f;  */

void FUN_1006c3830(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3bc60();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1006c3870; end: 1006c3a0f; -[SCLensDataConfigServiceProvider _lensDataConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c3870(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lVar1 = param_1 + _DAT_1127268d0;
  func_0x000107c61148();
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_1127268dc;
    func_0x000107c61148(lVar8);
  }
  lVar2 = lVar8;
  func_0x000107c3fa04(lVar8);
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1007b25e0;
  puStack_60 = &UNK_110890588;
  puVar3 = PTR_PTR_1126ae720;
  lStack_58 = lVar1;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_78);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126bc050;
  func_0x000107c610f4(PTR_PTR_1126bc050);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_1127268d8;
    func_0x000107c61148(lVar8);
  }
  lVar5 = lVar8;
  func_0x000107c4af44(lVar8);
  func_0x000107c61180();
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_1127268e0;
    func_0x000107c61148(lVar6);
  }
  lVar7 = lVar6;
  func_0x000107c3de48(lVar6);
  func_0x000107c61180();
  func_0x000107c45c1c(puVar4,param_2,puVar3,lVar5,lVar2,lVar7);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1006c3a10; end: 1006c3c3b; -[SCLensDataConfigProvider initWithCameraPlatformConfigProvider:lensStudySettingsProvider:circumstanceEngine:appStartExperimentReader:] */

long FUN_1006c3a10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  if (param_1 != 0) {
    func_0x000107c61174(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    func_0x000107c61170(uVar1);
    func_0x000107c61174(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    func_0x000107c61170(uVar1);
    func_0x000107c61174(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_5;
    func_0x000107c61170(uVar1);
    func_0x000107c61174(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_6;
    func_0x000107c61170(uVar1);
    puVar2 = PTR_PTR_1126bc048;
    func_0x000107c610f4();
    func_0x000107c45db0();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar2;
    func_0x000107c61170(uVar1);
    puVar3 = PTR_PTR_1126ae720;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x100ba3c18;
    puStack_70 = &UNK_1108429c8;
    func_0x000107c61174(param_3);
    uStack_68 = param_3;
    func_0x000107c3e4fc(puVar3,param_2,&puStack_88);
    func_0x000107c61180();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar3;
    func_0x000107c61170(uVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b0 = puVar2;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_100b7dec0;
    puStack_98 = &UNK_11089e3a0;
    func_0x000107c61174(param_3);
    uStack_90 = param_3;
    func_0x000107c3e4fc(puVar3,param_2,&puStack_b0);
    func_0x000107c61180();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar3;
    func_0x000107c61170(uVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_d8 = puVar2;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x100ba9344;
    puStack_c0 = &UNK_11089e3d0;
    func_0x000107c61174(param_3);
    uStack_b8 = param_3;
    func_0x000107c3e4fc(puVar3,param_2,&puStack_d8);
    func_0x000107c61180();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar3;
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uStack_b8);
    func_0x000107c61170(uStack_90);
    func_0x000107c61170(uStack_68);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 1006c3c3c; end: 1006c3cf3; -[SCDeviceDependentAssetResolverModeConfigReader initWithCircumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c3c3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112de81f8);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112de8200);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112de8208;
  FUN_10006a340(0);
  func_0x000107c613fc();
  uVar4 = param_3;
  func_0x000107c615f0();
  FUN_10006a360();
  *(undefined8 *)(param_1 + lVar2) = uVar4;
  *(undefined8 *)(param_1 + _DAT_112de8210) = param_3;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1006c3cf4; end: 1006c3d0b; -[SCLensDataConfigProvider retrieveCameraModesByLensIds] */

void FUN_1006c3cf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df0918,0,0);
  return;
}



/* Entry: 1006c3d0c; end: 1006c3d13; -[SCCameraConfigurationImpl greenScreenModeConfig] */

undefined8 FUN_1006c3d0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 1006c3d14; end: 1006c3ea3; -[SCLensProcessingLensModeEntryPoint _cameraModeWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c3d14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000107c61174(param_3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112779a48);
  func_0x000107c61174(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112779a44);
  func_0x000107c61174(uVar5);
  lVar1 = param_1 + _DAT_112779a4c;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c5190c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x0001006c2b80();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c4e600();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar3 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_108ca5d40;
  puStack_70 = &UNK_110ac1278;
  lStack_68 = lVar2;
  uStack_60 = param_3;
  uStack_58 = uVar4;
  uStack_50 = uVar5;
  lStack_48 = lVar1;
  func_0x000107c61174(lVar1);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(lVar2);
  func_0x000107c3e4fc(puVar3,param_2,&puStack_88);
  func_0x000107c61180();
  func_0x000107c61170(lStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(lStack_68);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1006c3ea4; end: 1006c3eab; -[SCCameraConfigurationImpl multiCamModeConfig] */

undefined8 FUN_1006c3ea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1006c3eac; end: 1006c3eb3; -[SCCameraConfigurationImpl selfieSettingsConfig] */

undefined8 FUN_1006c3eac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 1006c3eb4; end: 1006c3ebb; -[SCCameraConfigurationImpl remixCamModeConfig] */

undefined8 FUN_1006c3eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 1006c3ebc; end: 1006c3eeb;  */

void FUN_1006c3ebc(void)

{
  func_0x000107c610f4(PTR_PTR_1126b9bc8);
  func_0x000107c45db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006c3eec; end: 1006c4007; -[SCCameraLensNightModeConfigurationImpl initWithCircumstanceEngine:] */

undefined8 * FUN_1006c3eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126e8918;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_48,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_50,auStack_48);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1006c4008; end: 1006c4067; -[SCCameraLensNightModeConfigurationImpl lensNightModeEnabled] */

ulong FUN_1006c4008(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  func_0x000107c3cb04();
  if (lVar1 - 1U < 3) {
    uVar2 = (ulong)(((uint)(lVar1 - 1U) ^ 0xffffffff) & 1);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x10);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x000107c426f4();
    func_0x000107c61170(uVar3);
  }
  return uVar2;
}



/* Entry: 1006c4068; end: 1006c406f; -[SCCameraLensNightModeConfigurationImpl _tweakSettings] */

undefined8 FUN_1006c4068(void)

{
  return 0;
}



/* Entry: 1006c4070; end: 1006c40af;  */

void FUN_1006c4070(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b2b8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1006c40b0; end: 1006c418f; -[SCCameraLensNightModeConfigurationImpl _createLensNightModeConfig] */

/* WARNING: Removing unreachable block (ram,0x0001006c415c) */

void FUN_1006c40b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4f558();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  puVar5 = PTR_PTR_1126b9b30;
  func_0x000107c610f4(PTR_PTR_1126b9b30);
  func_0x000107c4636c();
  func_0x000107c61174(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1006c4190; end: 1006c4273; +[SCCameraLensNightModeConfig descriptor] */

void FUN_1006c4190(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc750 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a40050,
                        &PTR____CFConstantStringClassReference_110de5b18,
                        &PTR_s_snapchat_camera_1130dfa50,&PTR_DAT_1130dfa68,0xd,0x30,0x1c);
    puRam00000001136bc750 = puVar1;
  }
  return;
}



/* Entry: 1006c4274; end: 1006c4373; -[SCLensProcessingLensModeServices initWithLensModeFeatureDelegates:lensModeProvider:greenScreenMode:multiCameraMode:remixCameraMode:selfieSettingsMode:nightMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c4274(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113036148) = param_3;
  *(undefined8 *)(param_1 + _DAT_113036150) = param_4;
  *(undefined8 *)(param_1 + _DAT_113036158) = param_5;
  *(undefined8 *)(param_1 + _DAT_113036160) = param_6;
  *(undefined8 *)(param_1 + _DAT_113036168) = param_8;
  *(undefined8 *)(param_1 + _DAT_113036170) = param_7;
  *(undefined8 *)(param_1 + _DAT_113036178) = param_9;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61154(&lStack_60,puVar1);
  return;
}



/* Entry: 1006c4374; end: 1006c43ef;  */

void FUN_1006c4374(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006c43f0; end: 1006c43fb;  */

undefined ** FUN_1006c43f0(void)

{
  return &PTR_DAT_1130670f0;
}



/* Entry: 1006c43fc; end: 1006c4427;  */

void FUN_1006c43fc(void)

{
  FUN_1006b2280();
  return;
}



/* Entry: 1006c4428; end: 1006c442f;  */

void FUN_1006c4428(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102b602b8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006c4430; end: 1006c44b3;  */

void FUN_1006c4430(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102b602b8,param_2,&UNK_102b602bc,param_2,&UNK_102b602e4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006c44b4; end: 1006c44bf;  */

undefined ** FUN_1006c44b4(void)

{
  return &PTR_DAT_1130670f0;
}



/* Entry: 1006c44c0; end: 1006c44eb;  */

void FUN_1006c44c0(void)

{
  FUN_1006b2280();
  return;
}



/* Entry: 1006c44ec; end: 1006c44f3;  */

void FUN_1006c44ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102b60708);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006c44f4; end: 1006c4577;  */

void FUN_1006c44f4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102b60708,param_2,FUN_1006c4578,param_2,&UNK_102b6070c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006c4578; end: 1006c459f;  */

void FUN_1006c4578(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1006c45a0; end: 1006c45af;  */

void FUN_1006c45a0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100697d8c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126ac030;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0x646e696677656976;
  func_0x000107c5fadc(0x646e696677656976,0xef65706f63537265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  uVar10 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef23cd0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef13090);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc6de0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *param_1 = lVar1;
  return;
}



/* Entry: 1006c45b0; end: 1006c496f;  */

void FUN_1006c45b0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100697d8c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126ac030;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0x646e696677656976;
  func_0x000107c5fadc(0x646e696677656976,0xef65706f63537265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar8);
  uVar9 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef23cd0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef13090);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc6de0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *param_1 = param_2;
  return;
}



/* Entry: 1006c4970; end: 1006c4c5f; -[SCLensProcessingViewfinderEventsEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x0001006c4a34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006c4a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006c4a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006c4a64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006c4bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006c4bc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006c4bd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006c4be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006c4bf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006c4c08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006c4c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006c4c28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006c4c38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006c4c2c) */
/* WARNING: Removing unreachable block (ram,0x0001006c4c1c) */
/* WARNING: Removing unreachable block (ram,0x0001006c4c0c) */
/* WARNING: Removing unreachable block (ram,0x0001006c4bfc) */
/* WARNING: Removing unreachable block (ram,0x0001006c4bec) */
/* WARNING: Removing unreachable block (ram,0x0001006c4bdc) */
/* WARNING: Removing unreachable block (ram,0x0001006c4bcc) */
/* WARNING: Removing unreachable block (ram,0x0001006c4bbc) */
/* WARNING: Removing unreachable block (ram,0x0001006c4a68) */
/* WARNING: Removing unreachable block (ram,0x0001006c4a58) */
/* WARNING: Removing unreachable block (ram,0x0001006c4a48) */
/* WARNING: Removing unreachable block (ram,0x0001006c4a38) */
/* WARNING: Removing unreachable block (ram,0x0001006c4c3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c4970(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c8f20;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_112743780;
  func_0x000107c61148(lVar2);
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4b348();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_112743784;
  func_0x000107c61148(param_1);
  func_0x000107c4b3a4();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c473bc(puVar1,param_2,lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


