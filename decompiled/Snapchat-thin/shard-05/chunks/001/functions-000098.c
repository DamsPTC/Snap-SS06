/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b3a2e0; end: 103b3a33f; -[SCAdFeatureRenderedTrigger init] */

void FUN_103b3a2e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.AdFeatureRenderedTrigger",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3a30c);
  (*pcVar1)();
}



/* Entry: 103b3a340; end: 103b3a353; -[SCAdFeatureRenderedTrigger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3a340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed560 + 8))
  ;
  return;
}



/* Entry: 103b3a354; end: 103b3a373;  */

void FUN_103b3a354(void)

{
  func_0x000107c61168(&PTR_PTR_11292c2c8);
  return;
}



/* Entry: 103b3a374; end: 103b3a42b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3a374(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed5a8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3a42c; end: 103b3a48b; -[SCAdParticleEffectStartedTrigger init] */

void FUN_103b3a42c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.AdParticleEffectStartedTrigger",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3a458);
  (*pcVar1)();
}



/* Entry: 103b3a48c; end: 103b3a49f; -[SCAdParticleEffectStartedTrigger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3a48c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed5a8 + 8))
  ;
  return;
}



/* Entry: 103b3a4a0; end: 103b3a4bf;  */

void FUN_103b3a4a0(void)

{
  func_0x000107c61168(&PTR_PTR_11292c3a0);
  return;
}



/* Entry: 103b3a4c0; end: 103b3a577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3a4c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed5d8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3a578; end: 103b3a5d7; -[SCAdParticleEffectStoppedTrigger init] */

void FUN_103b3a578(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.AdParticleEffectStoppedTrigger",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3a5a4);
  (*pcVar1)();
}



/* Entry: 103b3a5d8; end: 103b3a5eb; -[SCAdParticleEffectStoppedTrigger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3a5d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed5d8 + 8))
  ;
  return;
}



/* Entry: 103b3a5ec; end: 103b3a60b;  */

void FUN_103b3a5ec(void)

{
  func_0x000107c61168(&PTR_PTR_11292c460);
  return;
}



/* Entry: 103b3a60c; end: 103b3a617; -[SCAddSongTrigger providerTrackID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3a60c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed608);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed608))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3a618; end: 103b3a623; -[SCAddSongTrigger trackISRC] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3a618(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed610);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed610))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3a624; end: 103b3a62f; -[SCAddSongTrigger musicProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3a624(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed618);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed618))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3a630; end: 103b3a677;  */

void FUN_103b3a630(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3a678; end: 103b3a713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3a678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed608);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed610);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed618);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3a714; end: 103b3a7cf; -[SCAddSongTrigger initWithProviderTrackID:trackISRC:musicProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3a714(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  uVar4 = uVar3;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112fed608);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fed610);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fed618);
  *puVar1 = param_5;
  puVar1[1] = uVar4;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3a7d0; end: 103b3a82f; -[SCAddSongTrigger init] */

void FUN_103b3a7d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.AddSongTrigger",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3a7fc);
  (*pcVar1)();
}



/* Entry: 103b3a830; end: 103b3a883; -[SCAddSongTrigger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b3a850: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b3a854) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3a830(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed608 + 8))
  ;
  return;
}



/* Entry: 103b3a884; end: 103b3a8a3;  */

void FUN_103b3a884(void)

{
  func_0x000107c61168(&PTR_PTR_11292c520);
  return;
}



/* Entry: 103b3a8a4; end: 103b3a8ef; -[SCAddWidgetTrigger friendID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3a8a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed648);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed648))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3a8f0; end: 103b3a94b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3a8f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed648);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3a94c; end: 103b3a9af; -[SCAddWidgetTrigger initWithFriendID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3a94c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112fed648);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3a9b0; end: 103b3aa0f; -[SCAddWidgetTrigger init] */

void FUN_103b3a9b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.AddWidgetTrigger",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3a9dc);
  (*pcVar1)();
}



/* Entry: 103b3aa10; end: 103b3aa23; -[SCAddWidgetTrigger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3aa10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed648 + 8))
  ;
  return;
}



/* Entry: 103b3aa24; end: 103b3aa43;  */

void FUN_103b3aa24(void)

{
  func_0x000107c61168(&PTR_PTR_11292c5f0);
  return;
}



/* Entry: 103b3aa44; end: 103b3aa4f; -[SCTappedClusterOverlappingFeature identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3aa44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed678);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed678))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3aa50; end: 103b3aa63; -[SCTappedClusterOverlappingFeature coordinate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b3aa50(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112fed680);
}



/* Entry: 103b3aa64; end: 103b3aa6f; -[SCTappedClusterOverlappingFeature userIDs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3aa64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed688);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b3aa70; end: 103b3aa7b; -[SCTappedClusterOverlappingFeature serverClusterID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3aa70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed690);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed690))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3aa7c; end: 103b3aa8b; -[SCTappedClusterOverlappingFeature isCluster] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b3aa7c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fed698);
}



/* Entry: 103b3aa8c; end: 103b3ab4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3aa8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed678);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed680);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fed688) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed690);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112fed698) = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3ab50; end: 103b3abe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3ab50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed678);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed680);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fed688) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed690);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112fed698) = param_8;
  func_0x000103b3abc8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3abe8; end: 103b3acc3; -[SCTappedClusterOverlappingFeature initWithIdentifier:coordinate:userIDs:serverClusterID:isCluster:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3abe8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x000107c5faec();
  puVar2 = PTR___sSSN_11034da80;
  func_0x000107c5fc54();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_3 + _DAT_112fed678);
  *puVar1 = param_5;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(param_3 + _DAT_112fed680);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(param_3 + _DAT_112fed688) = param_6;
  puVar1 = (undefined8 *)(param_3 + _DAT_112fed690);
  *puVar1 = param_7;
  puVar1[1] = puVar2;
  *(undefined1 *)(param_3 + _DAT_112fed698) = param_8;
  func_0x000103b3abc8();
  lStack_60 = param_3;
  uStack_58 = param_7;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3acc4; end: 103b3ad1f; -[SCTappedClusterOverlappingFeature init] */

void FUN_103b3acc4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.TappedClusterOverlappingFeature",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3acf0);
  (*pcVar1)();
}



/* Entry: 103b3ad20; end: 103b3ad6f; -[SCTappedClusterOverlappingFeature .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b3ad40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b3ad44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3ad20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed678 + 8))
  ;
  return;
}



/* Entry: 103b3ad70; end: 103b3ad7b; -[SCClusterTappedTrigger identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3ad70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed6a0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed6a0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3ad7c; end: 103b3adc3;  */

void FUN_103b3ad7c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3adc4; end: 103b3add7; -[SCClusterTappedTrigger coordinate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b3adc4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112fed6a8);
}



/* Entry: 103b3add8; end: 103b3ade3; -[SCClusterTappedTrigger userIDs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3add8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed6b0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b3ade4; end: 103b3ae27;  */

void FUN_103b3ade4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b3ae28; end: 103b3ae73; -[SCClusterTappedTrigger overlappingFeatures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3ae28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed6b8);
  func_0x000103b3abc8();
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b3ae74; end: 103b3aecf; -[SCClusterTappedTrigger serverClusterID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3ae74(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fed6c0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fed6c0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3aed0; end: 103b3af93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3aed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed6a0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed6a8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fed6b0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fed6b8) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed6c0);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3af94; end: 103b3b0a3; -[SCClusterTappedTrigger initWithIdentifier:coordinate:userIDs:overlappingFeatures:serverClusterID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3af94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_3;
  func_0x000107c614f0();
  func_0x000107c5faec();
  func_0x000107c5fc54(param_6,PTR___sSSN_11034da80);
  lVar4 = param_6;
  func_0x000103b3abc8();
  func_0x000107c5fc54();
  if (param_8 == 0) {
    param_8 = 0;
    lVar4 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  puVar1 = (undefined8 *)(param_3 + _DAT_112fed6a0);
  *puVar1 = param_5;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(param_3 + _DAT_112fed6a8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(long *)(param_3 + _DAT_112fed6b0) = param_6;
  *(undefined8 *)(param_3 + _DAT_112fed6b8) = param_7;
  plVar2 = (long *)(param_3 + _DAT_112fed6c0);
  *plVar2 = param_8;
  plVar2[1] = lVar4;
  lStack_70 = param_3;
  lStack_68 = lVar3;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3b0a4; end: 103b3b103; -[SCClusterTappedTrigger init] */

void FUN_103b3b0a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.ClusterTappedTrigger",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3b0d0);
  (*pcVar1)();
}



/* Entry: 103b3b104; end: 103b3b163; -[SCClusterTappedTrigger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b3b124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b3b144: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b3b128) */
/* WARNING: Removing unreachable block (ram,0x000103b3b148) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3b104(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed6a0 + 8))
  ;
  return;
}



/* Entry: 103b3b164; end: 103b3b183;  */

void FUN_103b3b164(void)

{
  func_0x000107c61168(&PTR_PTR_11292c790);
  return;
}



/* Entry: 103b3b184; end: 103b3b1bf; -[SCEnableBackgroundLocationTrigger init] */

void FUN_103b3b184(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3b1c0; end: 103b3b213;  */

void FUN_103b3b1c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b3b214; end: 103b3b24f; -[SCEnableNotificationsTrigger init] */

void FUN_103b3b214(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3b250; end: 103b3b2a3;  */

void FUN_103b3b250(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b3b2a4; end: 103b3b2df; -[SCEnablePreciseLocationTrigger init] */

void FUN_103b3b2a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3b2e0; end: 103b3b333;  */

void FUN_103b3b2e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b3b334; end: 103b3b37f; -[SCLaunchChatTrigger friendID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3b334(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed790);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed790))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3b380; end: 103b3b3db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3b380(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed790);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3b3dc; end: 103b3b43f; -[SCLaunchChatTrigger initWithFriendID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3b3dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112fed790);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3b440; end: 103b3b49f; -[SCLaunchChatTrigger init] */

void FUN_103b3b440(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.LaunchChatTrigger",0x22,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3b46c);
  (*pcVar1)();
}



/* Entry: 103b3b4a0; end: 103b3b4b3; -[SCLaunchChatTrigger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3b4a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed790 + 8))
  ;
  return;
}



/* Entry: 103b3b4b4; end: 103b3b4d3;  */

void FUN_103b3b4b4(void)

{
  func_0x000107c61168(&PTR_PTR_11292ca80);
  return;
}



/* Entry: 103b3b4d4; end: 103b3b4e7; -[SCLaunchDropsAppTrigger location] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b3b4d4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112fed7c0);
}



/* Entry: 103b3b4e8; end: 103b3b533; -[SCLaunchDropsAppTrigger dropID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3b4e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed7c8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed7c8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3b534; end: 103b3b53f; -[SCLaunchDropsAppTrigger senderID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3b534(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fed7d0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fed7d0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3b540; end: 103b3b54b; -[SCLaunchDropsAppTrigger addressText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3b540(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fed7d8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fed7d8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3b54c; end: 103b3b5a3;  */

void FUN_103b3b54c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103b3b5a4; end: 103b3b65f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3b5a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed7c0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed7c8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed7d0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed7d8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3b660; end: 103b3b757; -[SCLaunchDropsAppTrigger initWithLocation:dropID:senderID:addressText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3b660(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_3;
  func_0x000107c614f0();
  func_0x000107c5faec();
  if (param_6 == 0) {
    lVar5 = 0;
    lVar4 = param_4;
  }
  else {
    lVar5 = param_4;
    func_0x000107c5faec();
    lVar4 = lVar5;
  }
  if (param_7 == 0) {
    param_7 = 0;
    lVar4 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  puVar1 = (undefined8 *)(param_3 + _DAT_112fed7c0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_3 + _DAT_112fed7c8);
  *puVar1 = param_5;
  puVar1[1] = param_4;
  plVar2 = (long *)(param_3 + _DAT_112fed7d0);
  *plVar2 = param_6;
  plVar2[1] = lVar5;
  plVar2 = (long *)(param_3 + _DAT_112fed7d8);
  *plVar2 = param_7;
  plVar2[1] = lVar4;
  lStack_70 = param_3;
  lStack_68 = lVar3;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3b758; end: 103b3b7b7; -[SCLaunchDropsAppTrigger init] */

void FUN_103b3b758(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.LaunchDropsAppTrigger",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3b784);
  (*pcVar1)();
}



/* Entry: 103b3b7b8; end: 103b3b80b; -[SCLaunchDropsAppTrigger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b3b7d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b3b7dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3b7b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed7c8 + 8))
  ;
  return;
}



/* Entry: 103b3b80c; end: 103b3b82b;  */

void FUN_103b3b80c(void)

{
  func_0x000107c61168(&PTR_PTR_11292cb40);
  return;
}



/* Entry: 103b3b82c; end: 103b3b92b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3b82c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fed808) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed810);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3b92c; end: 103b3b98b; -[SCLaunchMemoryPlaybackTrigger init] */

void FUN_103b3b92c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.LaunchMemoryPlaybackTrigger",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3b958);
  (*pcVar1)();
}



/* Entry: 103b3b98c; end: 103b3b99b; -[SCLaunchMemoryPlaybackTrigger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3b98c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed808));
  return;
}



/* Entry: 103b3b99c; end: 103b3b9bb;  */

void FUN_103b3b99c(void)

{
  func_0x000107c61168(&PTR_PTR_11292cc18);
  return;
}



/* Entry: 103b3b9bc; end: 103b3ba07; -[SCLaunchStoryTrigger friendID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3b9bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed840);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed840))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3ba08; end: 103b3ba63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3ba08(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed840);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3ba64; end: 103b3bac7; -[SCLaunchStoryTrigger initWithFriendID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3ba64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112fed840);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3bac8; end: 103b3bb27; -[SCLaunchStoryTrigger init] */

void FUN_103b3bac8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.LaunchStoryTrigger",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3baf4);
  (*pcVar1)();
}



/* Entry: 103b3bb28; end: 103b3bb3b; -[SCLaunchStoryTrigger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3bb28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed840 + 8))
  ;
  return;
}



/* Entry: 103b3bb3c; end: 103b3bb5b;  */

void FUN_103b3bb3c(void)

{
  func_0x000107c61168(&PTR_PTR_11292cce0);
  return;
}



/* Entry: 103b3bb5c; end: 103b3bba7; -[SCLocationLoadingTimedOutTrigger friendID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3bb5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed870);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed870))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3bba8; end: 103b3bc03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3bba8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed870);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3bc04; end: 103b3bc67; -[SCLocationLoadingTimedOutTrigger initWithFriendID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3bc04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112fed870);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3bc68; end: 103b3bcc7; -[SCLocationLoadingTimedOutTrigger init] */

void FUN_103b3bc68(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.LocationLoadingTimedOutTrigger",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3bc94);
  (*pcVar1)();
}



/* Entry: 103b3bcc8; end: 103b3bcdb; -[SCLocationLoadingTimedOutTrigger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3bcc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed870 + 8))
  ;
  return;
}



/* Entry: 103b3bcdc; end: 103b3bcfb;  */

void FUN_103b3bcdc(void)

{
  func_0x000107c61168(&PTR_PTR_11292cda0);
  return;
}



/* Entry: 103b3bcfc; end: 103b3bd47; -[SCOpenFocusViewTrigger friendID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3bcfc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed8a0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed8a0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3bd48; end: 103b3bda3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3bd48(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed8a0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3bda4; end: 103b3be07; -[SCOpenFocusViewTrigger initWithFriendID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3bda4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112fed8a0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3be08; end: 103b3be67; -[SCOpenFocusViewTrigger init] */

void FUN_103b3be08(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.OpenFocusViewTrigger",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3be34);
  (*pcVar1)();
}



/* Entry: 103b3be68; end: 103b3be7b; -[SCOpenFocusViewTrigger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3be68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed8a0 + 8))
  ;
  return;
}



/* Entry: 103b3be7c; end: 103b3be9b;  */

void FUN_103b3be7c(void)

{
  func_0x000107c61168(&PTR_PTR_11292ce60);
  return;
}



/* Entry: 103b3be9c; end: 103b3bee7; -[SCOpenHomeProfileTrigger friendID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3be9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fed8d0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fed8d0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b3bee8; end: 103b3befb; -[SCOpenHomeProfileTrigger location] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b3bee8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112fed8d8);
}



/* Entry: 103b3befc; end: 103b3bf0b; -[SCOpenHomeProfileTrigger mapRotation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b3befc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fed8e0);
}



/* Entry: 103b3bf0c; end: 103b3bf1b; -[SCOpenHomeProfileTrigger mapZoomLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b3bf0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fed8e8);
}



/* Entry: 103b3bf1c; end: 103b3bfbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3bf1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed8d0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed8d8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fed8e0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fed8e8) = param_4;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3bfc0; end: 103b3c06b; -[SCOpenHomeProfileTrigger initWithFriendID:location:mapRotation:mapZoomLevel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3bfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_5;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_5 + _DAT_112fed8d0);
  *puVar1 = param_7;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(param_5 + _DAT_112fed8d8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(param_5 + _DAT_112fed8e0) = param_3;
  *(undefined8 *)(param_5 + _DAT_112fed8e8) = param_4;
  lStack_60 = param_5;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3c06c; end: 103b3c0cb; -[SCOpenHomeProfileTrigger init] */

void FUN_103b3c06c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAppTriggerAPI.OpenHomeProfileTrigger",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3c098);
  (*pcVar1)();
}



/* Entry: 103b3c0cc; end: 103b3c0df; -[SCOpenHomeProfileTrigger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3c0cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fed8d0 + 8))
  ;
  return;
}


