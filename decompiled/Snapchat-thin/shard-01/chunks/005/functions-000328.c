/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1010d9cdc; end: 1010d9e2f;  */

long FUN_1010d9cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  uVar1 = param_2;
  func_0x000107c501d0();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  puVar2 = &UNK_110382a48;
  func_0x000107c613fc(&UNK_110382a48,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  func_0x0001000285a8(0x112d5c260,&UNK_10d9230d0);
  func_0x000107c613fc();
  func_0x000107c61174(param_3);
  pcVar3 = FUN_1010d9f58;
  func_0x0001000bdd8c(FUN_1010d9f58,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  *(code **)(unaff_x20 + 0x18) = pcVar3;
  return unaff_x20;
}



/* Entry: 1010d9e30; end: 1010d9f57;  */

void FUN_1010d9e30(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uStack_48;
  
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    func_0x0001000285a8(0x112d59888,&UNK_10d923170);
    uStack_48 = 0;
    pcVar5 = (code *)&uStack_48;
    func_0x000100854cb0();
  }
  else {
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    lVar1 = lVar2;
    func_0x000107c3d14c(lVar2);
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    uVar4 = 0x112d3b7d8;
    func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
    pcVar5 = FUN_1010d9f60;
    func_0x0001000bfde0(FUN_1010d9f60,0,uVar4);
    func_0x000107c61574(lVar3);
    func_0x000107c615e8(lVar2);
  }
  *param_1 = pcVar5;
  return;
}



/* Entry: 1010d9f58; end: 1010d9f5f;  */

void FUN_1010d9f58(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uStack_48;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar1 = lVar5;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar5 == 0) {
    func_0x0001000285a8(0x112d59888,&UNK_10d923170);
    uStack_48 = 0;
    pcVar4 = (code *)&uStack_48;
    func_0x000100854cb0();
  }
  else {
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    lVar1 = lVar5;
    func_0x000107c3d14c(lVar5);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    uVar3 = 0x112d3b7d8;
    func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
    pcVar4 = FUN_1010d9f60;
    func_0x0001000bfde0(FUN_1010d9f60,0,uVar3);
    func_0x000107c61574(lVar2);
    func_0x000107c615e8(lVar5);
  }
  *param_1 = pcVar4;
  return;
}



/* Entry: 1010d9f60; end: 1010d9f8f;  */

void FUN_1010d9f60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1010d9f90; end: 1010da02b;  */

/* WARNING: Possible PIC construction at 0x0001010da004: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010da008) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d9f90(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f710d8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c615f0(uVar2);
  func_0x000107c5d198(uVar3);
  func_0x000107c61180();
  func_0x00010437ad5c(uVar1,uVar2,uVar3,*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1010da02c; end: 1010da077;  */

void FUN_1010da02c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010da078; end: 1010da097;  */

void FUN_1010da078(void)

{
  FUN_1010d9f90();
  return;
}



/* Entry: 1010da098; end: 1010da09f;  */

undefined8 FUN_1010da098(void)

{
  return 0;
}



/* Entry: 1010da0a0; end: 1010da0bf;  */

void FUN_1010da0a0(void)

{
  func_0x000107c61168(&PTR_PTR_112d5c2a8);
  return;
}



/* Entry: 1010da0c0; end: 1010da1b7;  */

long FUN_1010da0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_6;
  *(undefined8 *)(unaff_x20 + 0x30) = param_7;
  puVar1 = &UNK_110382a90;
  func_0x000107c613fc(&UNK_110382a90,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x0001000285a8(0x112d5c260,&UNK_10d9230d0);
  func_0x000107c613fc();
  func_0x000107c61174(param_1);
  pcVar2 = FUN_1010da2e0;
  func_0x0001000bdd8c(FUN_1010da2e0,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(code **)(unaff_x20 + 0x18) = pcVar2;
  return unaff_x20;
}



/* Entry: 1010da1b8; end: 1010da2df;  */

void FUN_1010da1b8(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uStack_48;
  
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    func_0x0001000285a8(0x112d59888,&UNK_10d923170);
    uStack_48 = 0;
    pcVar5 = (code *)&uStack_48;
    func_0x000100854cb0();
  }
  else {
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    lVar1 = lVar2;
    func_0x000107c3d14c(lVar2);
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    uVar4 = 0x112d3b7d8;
    func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
    pcVar5 = FUN_1010da2e8;
    func_0x0001000bfde0(FUN_1010da2e8,0,uVar4);
    func_0x000107c61574(lVar3);
    func_0x000107c615e8(lVar2);
  }
  *param_1 = pcVar5;
  return;
}



/* Entry: 1010da2e0; end: 1010da2e7;  */

void FUN_1010da2e0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uStack_48;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar1 = lVar5;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar5 == 0) {
    func_0x0001000285a8(0x112d59888,&UNK_10d923170);
    uStack_48 = 0;
    pcVar4 = (code *)&uStack_48;
    func_0x000100854cb0();
  }
  else {
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    lVar1 = lVar5;
    func_0x000107c3d14c(lVar5);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    uVar3 = 0x112d3b7d8;
    func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
    pcVar4 = FUN_1010da2e8;
    func_0x0001000bfde0(FUN_1010da2e8,0,uVar3);
    func_0x000107c61574(lVar2);
    func_0x000107c615e8(lVar5);
  }
  *param_1 = pcVar4;
  return;
}



/* Entry: 1010da2e8; end: 1010da317;  */

void FUN_1010da2e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1010da318; end: 1010da3b3;  */

/* WARNING: Possible PIC construction at 0x0001010da38c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010da390) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010da318(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f710d8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c615f0(uVar2);
  func_0x000107c5d198(uVar3);
  func_0x000107c61180();
  func_0x00010437ad5c(uVar1,uVar2,uVar3,0);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1010da3b4; end: 1010da3f7;  */

void FUN_1010da3b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010da3f8; end: 1010da417;  */

void FUN_1010da3f8(void)

{
  FUN_1010da318();
  return;
}



/* Entry: 1010da418; end: 1010da41f;  */

undefined8 FUN_1010da418(void)

{
  return 0;
}



/* Entry: 1010da420; end: 1010da43f;  */

void FUN_1010da420(void)

{
  func_0x000107c61168(&PTR_PTR_112d5c370);
  return;
}



/* Entry: 1010da440; end: 1010da44b; -[SCSingleLensFeatureScopeImplCaptureEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010da440(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c3f0;
  func_0x000107c61428(param_1 + _DAT_112d5c3f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010da44c; end: 1010da457; -[SCSingleLensFeatureScopeImplCaptureEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010da44c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c3f0;
  func_0x000107c61428(param_1 + _DAT_112d5c3f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010da458; end: 1010da463; -[SCSingleLensFeatureScopeImplCaptureEntryPoint captureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010da458(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c3f8;
  func_0x000107c61428(param_1 + _DAT_112d5c3f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010da464; end: 1010da46f; -[SCSingleLensFeatureScopeImplCaptureEntryPoint setCaptureScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010da464(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c3f8;
  func_0x000107c61428(param_1 + _DAT_112d5c3f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010da470; end: 1010da47b; -[SCSingleLensFeatureScopeImplCaptureEntryPoint lensCarouselScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010da470(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c400;
  func_0x000107c61428(param_1 + _DAT_112d5c400,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010da47c; end: 1010da487; -[SCSingleLensFeatureScopeImplCaptureEntryPoint setLensCarouselScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010da47c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c400;
  func_0x000107c61428(param_1 + _DAT_112d5c400,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010da488; end: 1010da493; -[SCSingleLensFeatureScopeImplCaptureEntryPoint lensesFeatureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010da488(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c408;
  func_0x000107c61428(param_1 + _DAT_112d5c408,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010da494; end: 1010da49f; -[SCSingleLensFeatureScopeImplCaptureEntryPoint setLensesFeatureServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010da494(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c408;
  func_0x000107c61428(param_1 + _DAT_112d5c408,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010da4a0; end: 1010da4ab; -[SCSingleLensFeatureScopeImplCaptureEntryPoint singleLensFeatureScopeSaberServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010da4a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c410;
  func_0x000107c61428(param_1 + _DAT_112d5c410,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010da4ac; end: 1010da4ef;  */

void FUN_1010da4ac(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1010da4f0; end: 1010da4fb; -[SCSingleLensFeatureScopeImplCaptureEntryPoint setSingleLensFeatureScopeSaberServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010da4f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c410;
  func_0x000107c61428(param_1 + _DAT_112d5c410,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010da4fc; end: 1010da54f;  */

void FUN_1010da4fc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010da550; end: 1010da597; -[SCSingleLensFeatureScopeImplCaptureEntryPoint singleLensFeatureScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010da550(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c418;
  func_0x000107c61428(param_1 + _DAT_112d5c418,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1010da598; end: 1010da5fb; -[SCSingleLensFeatureScopeImplCaptureEntryPoint setSingleLensFeatureScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010da598(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c418;
  func_0x000107c61428(param_1 + _DAT_112d5c418,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1010da5fc; end: 1010da89f;  */

/* WARNING: Possible PIC construction at 0x0001010da788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010da79c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010da7ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010da7bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010da864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010da874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010da844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010da854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010da834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010da858) */
/* WARNING: Removing unreachable block (ram,0x0001010da848) */
/* WARNING: Removing unreachable block (ram,0x0001010da878) */
/* WARNING: Removing unreachable block (ram,0x0001010da868) */
/* WARNING: Removing unreachable block (ram,0x0001010da7c0) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001010da7b0) */
/* WARNING: Removing unreachable block (ram,0x0001010da7a0) */
/* WARNING: Removing unreachable block (ram,0x0001010da78c) */
/* WARNING: Removing unreachable block (ram,0x0001010da838) */

void FUN_1010da5fc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f5cc();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4af24();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4b59c();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c5b054();
          func_0x000107c61180();
          if (lVar5 != 0) {
            func_0x000107c5b05c();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              lVar6 = 0;
              FUN_1010da0a0();
              func_0x000107c613fc();
              *(long *)(lVar6 + 0x10) = lVar1;
              *(long *)(lVar6 + 0x20) = lVar4;
              *(long *)(lVar6 + 0x28) = lVar5;
              *(long *)(lVar6 + 0x30) = unaff_x20;
              func_0x000107c61174(lVar1);
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174(lVar4);
              func_0x000107c61174(lVar5);
              func_0x000107c61174(unaff_x20);
              lVar1 = lVar2;
              func_0x000107c501d0();
              func_0x000107c61180();
              *(long *)(lVar6 + 0x38) = lVar1;
              puVar7 = &UNK_110382ad8;
              func_0x000107c613fc(&UNK_110382ad8,0x18,7);
              *(long *)(puVar7 + 0x10) = lVar3;
              uVar8 = 0x112d5c260;
              func_0x0001000285a8(0x112d5c260,&UNK_10d9230d0);
              func_0x000107c613fc();
              func_0x0001000bdd8c(FUN_1010da8a0,puVar7,uVar8);
              lVar1 = lVar2;
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
  return;
}



/* Entry: 1010da8a0; end: 1010da8a7;  */

void FUN_1010da8a0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uStack_48;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar1 = lVar5;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar5 == 0) {
    func_0x0001000285a8(0x112d59888,&UNK_10d923170);
    uStack_48 = 0;
    pcVar4 = (code *)&uStack_48;
    func_0x000100854cb0();
  }
  else {
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    lVar1 = lVar5;
    func_0x000107c3d14c(lVar5);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    uVar3 = 0x112d3b7d8;
    func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
    pcVar4 = FUN_1010d9f60;
    func_0x0001000bfde0(FUN_1010d9f60,0,uVar3);
    func_0x000107c61574(lVar2);
    func_0x000107c615e8(lVar5);
  }
  *param_1 = pcVar4;
  return;
}



/* Entry: 1010da8a8; end: 1010da8cf; -[SCSingleLensFeatureScopeImplCaptureEntryPoint begin] */

void FUN_1010da8a8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010da5fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010da8d0; end: 1010da913; -[SCSingleLensFeatureScopeImplCaptureEntryPoint end] */

void FUN_1010da8d0(undefined8 param_1)

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



/* Entry: 1010da914; end: 1010dac63;  */

void FUN_1010da914(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0x5365727574706163;
      if (((param_2 == 0x5365727574706163) && (param_3 == -0x13ffffff9a8f909d)) ||
         (func_0x000107c605b8(0x5365727574706163,0xec00000065706f63,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c531dc();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffd0) && (param_3 == -0x7ffffffef10da6a0)) ||
           (func_0x000107c605b8(0xd000000000000030,0x800000010ef25960,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55c80();
        }
        else {
          uVar2 = 0xd000000000000015;
          if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10ecd50)) ||
             (func_0x000107c605b8(0xd000000000000015,0x800000010ef132b0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55f2c();
          }
          else {
            uVar2 = 0xd000000000000023;
            if (((param_2 == -0x2fffffffffffffdd) && (param_3 == -0x7ffffffef10da660)) ||
               (func_0x000107c605b8(0xd000000000000023,0x800000010ef259a0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c592d8();
            }
            else {
              uVar2 = 0xd00000000000001d;
              if (((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef10da630)) &&
                 (func_0x000107c605b8(0xd00000000000001d,0x800000010ef259d0,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "SingleLensFeatureScopeImpl/SCSingleLensFeatureScopeImplCaptureEntryPoint.swift"
                                    ,0x4e,2,0x3f,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1010dac64);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c592d0();
            }
          }
        }
      }
      goto LAB_1010da9a8;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_1010da9a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1010dac64; end: 1010dad0f; -[SCSingleLensFeatureScopeImplCaptureEntryPoint setValue:forIvarName:] */

void FUN_1010dac64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1010da914(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1010dad10; end: 1010dadcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010dad10(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d5c3f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c3f8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c400,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c408,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c410,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d5c418) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d5c420) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010dadcc; end: 1010dadeb; -[SCSingleLensFeatureScopeImplCaptureEntryPoint init] */

void FUN_1010dadcc(void)

{
  FUN_1010dad10();
  return;
}



/* Entry: 1010dadec; end: 1010dae1f;  */

void FUN_1010dadec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010dae20; end: 1010daea7; -[SCSingleLensFeatureScopeImplCaptureEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010dae20(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d5c3f0);
  func_0x000107c61610(param_1 + _DAT_112d5c3f8);
  func_0x000107c61610(param_1 + _DAT_112d5c400);
  func_0x000107c61610(param_1 + _DAT_112d5c408);
  func_0x000107c61610(param_1 + _DAT_112d5c410);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5c418));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d5c420));
  return;
}



/* Entry: 1010daea8; end: 1010daec7;  */

void FUN_1010daea8(void)

{
  func_0x000107c61168(&PTR_PTR_1127aee68);
  return;
}



/* Entry: 1010daec8; end: 1010daed3; -[SCSingleLensFeatureScopeImplMainCameraEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010daec8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c450;
  func_0x000107c61428(param_1 + _DAT_112d5c450,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010daed4; end: 1010daedf; -[SCSingleLensFeatureScopeImplMainCameraEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010daed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c450;
  func_0x000107c61428(param_1 + _DAT_112d5c450,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010daee0; end: 1010daeeb; -[SCSingleLensFeatureScopeImplMainCameraEntryPoint mainCameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010daee0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c458;
  func_0x000107c61428(param_1 + _DAT_112d5c458,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010daeec; end: 1010daef7; -[SCSingleLensFeatureScopeImplMainCameraEntryPoint setMainCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010daeec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c458;
  func_0x000107c61428(param_1 + _DAT_112d5c458,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010daef8; end: 1010daf03; -[SCSingleLensFeatureScopeImplMainCameraEntryPoint cameraFeatureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010daef8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c460;
  func_0x000107c61428(param_1 + _DAT_112d5c460,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010daf04; end: 1010daf0f; -[SCSingleLensFeatureScopeImplMainCameraEntryPoint setCameraFeatureScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010daf04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c460;
  func_0x000107c61428(param_1 + _DAT_112d5c460,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010daf10; end: 1010daf1b; -[SCSingleLensFeatureScopeImplMainCameraEntryPoint lensCarouselScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010daf10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c468;
  func_0x000107c61428(param_1 + _DAT_112d5c468,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010daf1c; end: 1010daf27; -[SCSingleLensFeatureScopeImplMainCameraEntryPoint setLensCarouselScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010daf1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c468;
  func_0x000107c61428(param_1 + _DAT_112d5c468,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010daf28; end: 1010daf33; -[SCSingleLensFeatureScopeImplMainCameraEntryPoint lensesFeatureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010daf28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c470;
  func_0x000107c61428(param_1 + _DAT_112d5c470,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010daf34; end: 1010daf3f; -[SCSingleLensFeatureScopeImplMainCameraEntryPoint setLensesFeatureServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010daf34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c470;
  func_0x000107c61428(param_1 + _DAT_112d5c470,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010daf40; end: 1010daf4b; -[SCSingleLensFeatureScopeImplMainCameraEntryPoint singleLensFeatureScopeSaberServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010daf40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c478;
  func_0x000107c61428(param_1 + _DAT_112d5c478,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010daf4c; end: 1010daf8f;  */

void FUN_1010daf4c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1010daf90; end: 1010daf9b; -[SCSingleLensFeatureScopeImplMainCameraEntryPoint setSingleLensFeatureScopeSaberServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010daf90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c478;
  func_0x000107c61428(param_1 + _DAT_112d5c478,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010daf9c; end: 1010dafef;  */

void FUN_1010daf9c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010daff0; end: 1010db037; -[SCSingleLensFeatureScopeImplMainCameraEntryPoint singleLensFeatureScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010daff0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c480;
  func_0x000107c61428(param_1 + _DAT_112d5c480,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1010db038; end: 1010db09b; -[SCSingleLensFeatureScopeImplMainCameraEntryPoint setSingleLensFeatureScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010db038(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c480;
  func_0x000107c61428(param_1 + _DAT_112d5c480,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1010db09c; end: 1010db373;  */

/* WARNING: Possible PIC construction at 0x0001010db22c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010db23c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010db24c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010db25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010db334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010db344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010db304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010db314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010db2e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010db2f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010db2d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010db2f8) */
/* WARNING: Removing unreachable block (ram,0x0001010db2e8) */
/* WARNING: Removing unreachable block (ram,0x0001010db318) */
/* WARNING: Removing unreachable block (ram,0x0001010db308) */
/* WARNING: Removing unreachable block (ram,0x0001010db348) */
/* WARNING: Removing unreachable block (ram,0x0001010db338) */
/* WARNING: Removing unreachable block (ram,0x0001010db260) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001010db250) */
/* WARNING: Removing unreachable block (ram,0x0001010db240) */
/* WARNING: Removing unreachable block (ram,0x0001010db230) */
/* WARNING: Removing unreachable block (ram,0x0001010db2d8) */

void FUN_1010db09c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c4c144();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c3f0d0();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar5;
      }
      else {
        lVar2 = unaff_x20;
        func_0x000107c4af24();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar5;
        }
        else {
          lVar3 = unaff_x20;
          func_0x000107c4b59c();
          func_0x000107c61180();
          if (lVar3 != 0) {
            lVar4 = unaff_x20;
            func_0x000107c5b054();
            func_0x000107c61180();
            if (lVar4 != 0) {
              func_0x000107c5b05c();
              func_0x000107c61180();
              if (unaff_x20 == 0) {
                func_0x000107c61170(lVar1);
                lVar1 = lVar5;
              }
              else {
                lVar5 = 0;
                FUN_1010da420();
                func_0x000107c613fc();
                *(long *)(lVar5 + 0x10) = lVar1;
                *(long *)(lVar5 + 0x20) = lVar3;
                *(long *)(lVar5 + 0x28) = lVar4;
                *(long *)(lVar5 + 0x30) = unaff_x20;
                puVar6 = &UNK_110382b00;
                func_0x000107c613fc(&UNK_110382b00,0x18,7);
                *(long *)(puVar6 + 0x10) = lVar2;
                func_0x0001000285a8(0x112d5c260,&UNK_10d9230d0);
                func_0x000107c613fc();
                func_0x000107c61174();
                func_0x000107c61174(lVar2);
                func_0x000107c61174(lVar3);
                func_0x000107c61174(lVar4);
                func_0x000107c61174(unaff_x20);
                pcVar7 = FUN_1010db374;
                func_0x0001000bdd8c(FUN_1010db374,puVar6);
                *(code **)(lVar5 + 0x18) = pcVar7;
                FUN_1010da318();
                lVar1 = unaff_x20;
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
  return;
}



/* Entry: 1010db374; end: 1010db37b;  */

void FUN_1010db374(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uStack_48;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar1 = lVar5;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar5 == 0) {
    func_0x0001000285a8(0x112d59888,&UNK_10d923170);
    uStack_48 = 0;
    pcVar4 = (code *)&uStack_48;
    func_0x000100854cb0();
  }
  else {
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    lVar1 = lVar5;
    func_0x000107c3d14c(lVar5);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    uVar3 = 0x112d3b7d8;
    func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
    pcVar4 = FUN_1010da2e8;
    func_0x0001000bfde0(FUN_1010da2e8,0,uVar3);
    func_0x000107c61574(lVar2);
    func_0x000107c615e8(lVar5);
  }
  *param_1 = pcVar4;
  return;
}



/* Entry: 1010db37c; end: 1010db3a3; -[SCSingleLensFeatureScopeImplMainCameraEntryPoint begin] */

void FUN_1010db37c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010db09c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010db3a4; end: 1010db3e7; -[SCSingleLensFeatureScopeImplMainCameraEntryPoint end] */

void FUN_1010db3a4(undefined8 param_1)

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



/* Entry: 1010db3e8; end: 1010db7a7;  */

void FUN_1010db3e8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0x656d61436e69616d;
      if (((param_2 == 0x656d61436e69616d) && (param_3 == -0x109a8f909cac9e8e)) ||
         (func_0x000107c605b8(0x656d61436e69616d,0xef65706f63536172,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c561a0();
      }
      else {
        if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10da5c0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000012,0x800000010ef25a40,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffd0) && (param_3 == -0x7ffffffef10da6a0)) ||
               (func_0x000107c605b8(0xd000000000000030,0x800000010ef25960,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55c80();
            }
            else {
              uVar2 = 0xd000000000000015;
              if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10ecd50)) ||
                 (func_0x000107c605b8(0xd000000000000015,0x800000010ef132b0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55f2c();
              }
              else {
                uVar2 = 0xd000000000000023;
                if (((param_2 == -0x2fffffffffffffdd) && (param_3 == -0x7ffffffef10da660)) ||
                   (func_0x000107c605b8(0xd000000000000023,0x800000010ef259a0,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c592d8();
                }
                else {
                  uVar2 = 0xd00000000000001d;
                  if (((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef10da630)) &&
                     (func_0x000107c605b8(0xd00000000000001d,0x800000010ef259d0,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "SingleLensFeatureScopeImpl/SCSingleLensFeatureScopeImplMainCameraEntryPoint.swift"
                                        ,0x51,2,0x44,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010db7a8);
                    (*pcVar1)();
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c592d0();
                }
              }
            }
            goto LAB_1010db47c;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53004();
      }
      goto LAB_1010db47c;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_1010db47c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1010db7a8; end: 1010db853; -[SCSingleLensFeatureScopeImplMainCameraEntryPoint setValue:forIvarName:] */

void FUN_1010db7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1010db3e8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1010db854; end: 1010db923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010db854(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d5c450,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c458,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c460,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c468,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c470,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c478,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d5c480) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d5c488) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010db924; end: 1010db943; -[SCSingleLensFeatureScopeImplMainCameraEntryPoint init] */

void FUN_1010db924(void)

{
  FUN_1010db854();
  return;
}



/* Entry: 1010db944; end: 1010db977;  */

void FUN_1010db944(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010db978; end: 1010dba0f; -[SCSingleLensFeatureScopeImplMainCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010db978(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d5c450);
  func_0x000107c61610(param_1 + _DAT_112d5c458);
  func_0x000107c61610(param_1 + _DAT_112d5c460);
  func_0x000107c61610(param_1 + _DAT_112d5c468);
  func_0x000107c61610(param_1 + _DAT_112d5c470);
  func_0x000107c61610(param_1 + _DAT_112d5c478);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5c480));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d5c488));
  return;
}



/* Entry: 1010dba10; end: 1010dba2f;  */

void FUN_1010dba10(void)

{
  func_0x000107c61168(&PTR_PTR_1127aef50);
  return;
}



/* Entry: 1010dba30; end: 1010dbf77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1010dba30(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  lVar1 = param_6;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
  }
  else {
    puVar3 = &UNK_110382c00;
    func_0x000107c613fc(&UNK_110382c00,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_7);
    uVar16 = 0x112d5c4b8;
    func_0x0001000285a8(0x112d5c4b8,&UNK_10d923250);
    func_0x000107c613fc();
    pcVar4 = FUN_1010dc00c;
    func_0x0001000bdd8c(FUN_1010dc00c,puVar3,uVar16);
    puVar3 = &UNK_110382c28;
    func_0x000107c613fc(&UNK_110382c28,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_3);
    uVar16 = 0x112d5c4c0;
    func_0x0001000285a8(0x112d5c4c0,&UNK_10d923258);
    func_0x000107c613fc();
    pcVar5 = FUN_1010dc0a8;
    func_0x0001000bdd8c(FUN_1010dc0a8,puVar3,uVar16);
    puVar3 = &UNK_110382c50;
    func_0x000107c613fc(&UNK_110382c50,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_8);
    uVar16 = 0x112d5c4c8;
    func_0x0001000285a8(0x112d5c4c8,&UNK_10d923260);
    func_0x000107c613fc();
    pcVar6 = FUN_1010dc144;
    func_0x0001000bdd8c(FUN_1010dc144,puVar3,uVar16);
    func_0x0001010dd0f0(0);
    func_0x000107c613fc();
    func_0x000107c6157c(pcVar6);
    func_0x000107c615f0(lVar1);
    pcVar7 = pcVar6;
    FUN_1010dcd6c(pcVar6,lVar1);
    puVar3 = &UNK_110382c78;
    func_0x000107c613fc(&UNK_110382c78,0x28,7);
    *(code **)(puVar3 + 0x10) = pcVar5;
    *(code **)(puVar3 + 0x18) = pcVar4;
    *(code **)(puVar3 + 0x20) = pcVar7;
    func_0x0001000285a8(0x112d5c4d0,&UNK_10d923268);
    func_0x000107c613fc();
    func_0x000107c6157c(pcVar5);
    func_0x000107c6157c(pcVar4);
    func_0x000107c6157c(pcVar7);
    pcVar8 = FUN_1010dc31c;
    func_0x0001000bdd8c(FUN_1010dc31c,puVar3);
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    lVar2 = lVar1;
    func_0x000107c51c88(lVar1);
    func_0x000107c61180();
    lVar9 = lVar2;
    func_0x0001000b637c();
    func_0x000107c61170(lVar2);
    uVar16 = 0x112d35ff8;
    func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
    pcVar10 = FUN_1010dc1d0;
    func_0x0001000bfde0(FUN_1010dc1d0,0,uVar16);
    func_0x000107c61574(lVar9);
    uVar16 = *(undefined8 *)(param_4 + _DAT_11302a2b0);
    func_0x000107c6157c(uVar16);
    pcVar11 = pcVar10;
    func_0x0001006c733c(pcVar10);
    func_0x000107c61574(uVar16);
    uVar12 = 0;
    func_0x00010046e464(0);
    uVar16 = 0x1010dc238;
    func_0x0001000d5158(0x1010dc238,0,uVar12);
    func_0x000107c61574(pcVar11);
    uVar12 = 0;
    func_0x0001010dcbf0(0);
    func_0x000107c6157c(pcVar8);
    func_0x000107c6157c(uVar16);
    pcVar13 = "LensErrorNotificationWorkflow";
    func_0x0001000c10c0("LensErrorNotificationWorkflow");
    func_0x000107c61180();
    pcVar14 = pcVar13;
    func_0x000107c614f0();
    puVar3 = PTR_PTR_1126aeea8;
    func_0x000107c610f8(PTR_PTR_1126aeea8);
    func_0x000107c453e4();
    uVar15 = 0;
    FUN_1010dc328(0);
    pcVar11 = pcVar8;
    FUN_1010dccb0(0x404e000000000000,0x4014000000000000,pcVar8,uVar16,pcVar13,puVar3,uVar12,pcVar14,
                  uVar15);
    *(undefined8 *)(unaff_x20 + 0x10) = pcVar11;
    func_0x000107c6157c();
    FUN_1010dc850();
    func_0x000107c61574(pcVar11);
    func_0x0001000d224c(auStack_88);
    func_0x0001000a8868(auStack_88,uStack_70);
    uVar12 = uStack_70;
    (**(code **)(lStack_68 + 0x80))(uStack_70,lStack_68);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_8);
    func_0x000107c61574(pcVar6);
    func_0x000107c615e8(lVar1);
    func_0x000107c61574(pcVar5);
    func_0x000107c61574(pcVar4);
    func_0x000107c61574(pcVar7);
    func_0x000107c61574(pcVar8);
    func_0x000107c61574(uVar16);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_6);
    func_0x000107c6142c(uVar12);
    func_0x000107c61574(pcVar10);
    func_0x0001000834e4(auStack_88);
  }
  return unaff_x20;
}



/* Entry: 1010dbf78; end: 1010dc00b;  */

void FUN_1010dbf78(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000107c4b1cc();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1010dc00c; end: 1010dc013;  */

void FUN_1010dc00c(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c4b1cc();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1010dc014; end: 1010dc0a7;  */

void FUN_1010dc014(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000107c4d80c();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1010dc0a8; end: 1010dc0af;  */

void FUN_1010dc0a8(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c4d80c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1010dc0b0; end: 1010dc143;  */

void FUN_1010dc0b0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000107c4b3b8();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1010dc144; end: 1010dc14b;  */

void FUN_1010dc144(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c4b3b8();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1010dc14c; end: 1010dc1cf;  */

/* WARNING: Possible PIC construction at 0x0001010dc1ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010dc1b0) */

void FUN_1010dc14c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x0001010dc7a8();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined ***)(lVar2 + 0x28) = &PTR_DAT_110382de0;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110382cb0;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_4);
  return;
}



/* Entry: 1010dc1d0; end: 1010dc28b;  */

/* WARNING: Removing unreachable block (ram,0x0001010dc218) */

void FUN_1010dc1d0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fae8();
    func_0x000107c61170(lVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 1010dc28c; end: 1010dc2f3;  */

undefined8 FUN_1010dc28c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x40);
    *(undefined8 *)(lVar2 + 0x40) = 0;
    func_0x000107c61574(uVar1);
  }
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = 0;
    func_0x000107c61574(uVar1);
  }
  return 0;
}



/* Entry: 1010dc2f4; end: 1010dc2f7;  */

void FUN_1010dc2f4(void)

{
  return;
}



/* Entry: 1010dc2f8; end: 1010dc31b;  */

undefined8 FUN_1010dc2f8(void)

{
  FUN_1010dc28c();
  return 0;
}



/* Entry: 1010dc31c; end: 1010dc327;  */

/* WARNING: Possible PIC construction at 0x0001010dc1ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010dc1b0) */

void FUN_1010dc31c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  func_0x0001010dc7a8();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  *(undefined ***)(lVar4 + 0x28) = &PTR_DAT_110382de0;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_110382cb0;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar5);
  return;
}



/* Entry: 1010dc328; end: 1010dc3bf;  */

void FUN_1010dc328(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5c4d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aeea8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d5c4d8 = puVar1;
  return;
}



/* Entry: 1010dc3c0; end: 1010dc4c7;  */

void FUN_1010dc3c0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    FUN_1010dc4c8(param_1,param_2);
    if (param_1 == (undefined *)0x0) {
      FUN_1010dd11c();
      puVar1 = PTR_PTR_1126afde0;
      func_0x000107c61168(PTR_PTR_1126afde0);
      func_0x000107c5fadc(param_1,param_2);
      uVar2 = 0xd000000000000029;
      func_0x000107c5fadc(0xd000000000000029,0x800000010ef25ae0);
      func_0x000107c40b14(puVar1);
      func_0x000107c61180();
      func_0x000107c6142c(param_2);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar2);
      param_1 = puVar1;
    }
    func_0x000107c5c2e0(lStack_48);
    func_0x000107c615e8(lStack_48);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 1010dc4c8; end: 1010dc773;  */

undefined * FUN_1010dc4c8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  if (param_2 != 0) {
    func_0x000107c61434(param_2);
    func_0x0001000d224c(&puStack_90);
    if (puStack_90 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126b5928;
      func_0x000107c610f8(PTR_PTR_1126b5928);
      uVar12 = param_1;
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c472e8(puVar2);
      func_0x000107c61170(uVar12);
      puVar3 = puStack_90;
      func_0x000107c4b1bc();
      func_0x000107c61180();
      func_0x000107c615e8(puStack_90);
      func_0x000107c61170(puVar2);
      if (puVar3 != (undefined *)0x0) {
        lVar11 = *(long *)(unaff_x20 + 0x20);
        if (lVar11 != 0) {
          uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
          puVar2 = &UNK_110382cd0;
          func_0x000107c613fc(&UNK_110382cd0,0x30,7);
          *(long *)(puVar2 + 0x10) = lVar11;
          *(undefined8 *)(puVar2 + 0x18) = uVar12;
          *(undefined8 *)(puVar2 + 0x20) = param_1;
          *(long *)(puVar2 + 0x28) = param_2;
          uVar10 = 2;
          lVar4 = lVar11;
          func_0x000107c615f4(lVar11);
          FUN_1010dd11c();
          lVar5 = lVar4;
          uVar12 = uVar10;
          func_0x0001010dd1e8();
          puVar6 = PTR_PTR_1126b0ae0;
          func_0x000107c61168();
          puVar7 = PTR_PTR_1126ae558;
          func_0x000107c61168(PTR_PTR_1126ae558);
          func_0x000107c451b0();
          func_0x000107c61180();
          func_0x000107c5fadc(lVar4,uVar10);
          func_0x000107c5fadc(lVar5,uVar12);
          pcStack_70 = FUN_1010dc7e8;
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x42000000;
          puStack_80 = &UNK_1000f6b44;
          puStack_78 = &UNK_110382ce8;
          ppuVar8 = &puStack_90;
          puStack_68 = puVar2;
          func_0x000107c60bc4(ppuVar8);
          puVar1 = puStack_68;
          func_0x000107c6157c(puVar2);
          func_0x000107c61574(puVar1);
          uVar9 = 0xd000000000000029;
          func_0x000107c5fadc(0xd000000000000029,0x800000010ef25b10);
          func_0x000107c40b08(puVar6);
          func_0x000107c61180();
          func_0x000107c61170(uVar9);
          func_0x000107c615e8(lVar11);
          func_0x000107c61170(puVar3);
          func_0x000107c61574(puVar2);
          func_0x000107c6142c(uVar10);
          func_0x000107c6142c(uVar12);
          func_0x000107c60bd0(ppuVar8);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar5);
          return puVar6;
        }
        func_0x000107c61170(puVar3);
      }
    }
    func_0x000107c6142c(param_2);
  }
  return (undefined *)0x0;
}



/* Entry: 1010dc774; end: 1010dc7c7;  */

void FUN_1010dc774(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010dc7c8; end: 1010dc7e7;  */

void FUN_1010dc7c8(void)

{
  FUN_1010dc3c0();
  return;
}



/* Entry: 1010dc7e8; end: 1010dc833;  */

void FUN_1010dc7e8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c614f0(uVar4);
  (**(code **)(lVar2 + 8))(uVar1,uVar3,uVar4,lVar2);
  return;
}



/* Entry: 1010dc834; end: 1010dc84f;  */

void FUN_1010dc834(long param_1,long param_2)

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



/* Entry: 1010dc850; end: 1010dc9df;  */

void FUN_1010dc850(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  func_0x000107c6157c();
  func_0x000107c61574(uVar6);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar2 = &UNK_110382da0;
  func_0x000107c613fc(&UNK_110382da0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  func_0x000107c615f0(uVar6);
  uVar6 = 0x112d5c700;
  func_0x0001000285a8(0x112d5c700,&UNK_10d9233a0);
  pcVar8 = FUN_1010dcc68;
  func_0x0001000bfde0(FUN_1010dcc68,puVar2,uVar6);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110382dc8;
  func_0x000107c613fc(&UNK_110382dc8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar10;
  pcVar3 = FUN_1010dcca0;
  func_0x00010487de38(FUN_1010dcca0,puVar2);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(puVar2);
  plVar4 = *(long **)(unaff_x20 + 0x20);
  func_0x000104880bc0(uVar9);
  func_0x000107c61574(pcVar3);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  pcVar8 = *(code **)(*plVar4 + 0x60);
  func_0x000107c6157c(lVar7);
  uVar6 = 0x1010dcca8;
  lVar5 = lVar7;
  (*pcVar8)(0x1010dcca8);
  func_0x000107c61574(plVar4);
  func_0x000107c61574(lVar7);
  uVar9 = uVar6;
  func_0x000107c614f0(uVar6);
  (**(code **)(lVar5 + 0x10))(uVar1,uVar9,lVar5);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar6);
  return;
}



/* Entry: 1010dc9e0; end: 1010dcb07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1010dc9e0(double param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  
  dVar10 = (double)param_2[1];
  dVar11 = (double)param_3[1];
  plVar5 = (long *)(*(long *)(*param_2 + _DAT_11302a2e0) + 0x10);
  lVar6 = *plVar5;
  if (lVar6 == 0) {
    lVar6 = *(long *)(*param_3 + _DAT_11302a2e0);
    lVar9 = *(long *)(lVar6 + 0x10);
    if (lVar9 != 0) {
      uVar7 = 0;
      uVar8 = 0;
      goto LAB_1010dca5c;
    }
LAB_1010dcae4:
    bVar4 = dVar11 - dVar10 < param_1;
  }
  else {
    puVar1 = (ulong *)(plVar5 + lVar6 * 2);
    uVar8 = *puVar1;
    uVar7 = puVar1[1];
    lVar6 = *(long *)(*param_3 + _DAT_11302a2e0);
    lVar9 = *(long *)(lVar6 + 0x10);
    func_0x000107c61434(uVar7);
    uVar3 = uVar7;
    if (lVar9 == 0) {
joined_r0x0001010dcac0:
      uVar7 = uVar3;
      if (uVar7 == 0) goto LAB_1010dcae4;
    }
    else {
LAB_1010dca5c:
      lVar6 = lVar6 + lVar9 * 0x10;
      uVar2 = *(ulong *)(lVar6 + 0x10);
      uVar3 = *(ulong *)(lVar6 + 0x18);
      func_0x000107c61434(uVar3);
      if (uVar7 == 0) goto joined_r0x0001010dcac0;
      if (uVar3 != 0) {
        if (uVar8 == uVar2 && uVar7 == uVar3) {
          func_0x000107c6142c(uVar7);
          func_0x000107c6142c(uVar3);
        }
        else {
          func_0x000107c605b8(uVar8,uVar7,uVar2,uVar3,0);
          func_0x000107c6142c(uVar7);
          func_0x000107c6142c(uVar3);
          if ((uVar8 & 1) == 0) {
            return false;
          }
        }
        goto LAB_1010dcae4;
      }
    }
    func_0x000107c6142c(uVar7);
    bVar4 = false;
  }
  return bVar4;
}



/* Entry: 1010dcb08; end: 1010dcbab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010dcb08(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  plVar2 = (long *)(*(long *)(*param_1 + _DAT_11302a2e0) + 0x10);
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    plVar2 = plVar2 + lVar3 * 2;
    lVar3 = *plVar2;
    lVar1 = plVar2[1];
    func_0x000107c61434(lVar1);
    func_0x0001000d224c(auStack_68);
    func_0x0001000a8868(auStack_68,uStack_50);
    (**(code **)(lStack_48 + 8))(lVar3,lVar1,uStack_50,lStack_48);
    func_0x000107c6142c(lVar1);
    func_0x0001000834e4(auStack_68);
  }
  return;
}



/* Entry: 1010dcbac; end: 1010dcc0f;  */

void FUN_1010dcbac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010dcc10; end: 1010dcc67;  */

int FUN_1010dcc10(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1010dcc68; end: 1010dcc9f;  */

void FUN_1010dcc68(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *param_1 = *param_3;
  func_0x000107c61174();
  func_0x000107c3ceac(uVar1);
  param_1[1] = param_2;
  return;
}



/* Entry: 1010dcca0; end: 1010dccaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1010dcca0(long *param_1,long *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar10 = *(double *)(unaff_x20 + 0x10);
  dVar11 = (double)param_1[1];
  dVar12 = (double)param_2[1];
  plVar5 = (long *)(*(long *)(*param_1 + _DAT_11302a2e0) + 0x10);
  lVar6 = *plVar5;
  if (lVar6 == 0) {
    lVar6 = *(long *)(*param_2 + _DAT_11302a2e0);
    lVar9 = *(long *)(lVar6 + 0x10);
    if (lVar9 != 0) {
      uVar7 = 0;
      uVar8 = 0;
      goto LAB_1010dca5c;
    }
LAB_1010dcae4:
    bVar4 = dVar12 - dVar11 < dVar10;
  }
  else {
    puVar1 = (ulong *)(plVar5 + lVar6 * 2);
    uVar8 = *puVar1;
    uVar7 = puVar1[1];
    lVar6 = *(long *)(*param_2 + _DAT_11302a2e0);
    lVar9 = *(long *)(lVar6 + 0x10);
    func_0x000107c61434(uVar7);
    uVar3 = uVar7;
    if (lVar9 == 0) {
joined_r0x0001010dcac0:
      uVar7 = uVar3;
      if (uVar7 == 0) goto LAB_1010dcae4;
    }
    else {
LAB_1010dca5c:
      lVar6 = lVar6 + lVar9 * 0x10;
      uVar2 = *(ulong *)(lVar6 + 0x10);
      uVar3 = *(ulong *)(lVar6 + 0x18);
      func_0x000107c61434(uVar3);
      if (uVar7 == 0) goto joined_r0x0001010dcac0;
      if (uVar3 != 0) {
        if (uVar8 == uVar2 && uVar7 == uVar3) {
          func_0x000107c6142c(uVar7);
          func_0x000107c6142c(uVar3);
        }
        else {
          func_0x000107c605b8(uVar8,uVar7,uVar2,uVar3,0);
          func_0x000107c6142c(uVar7);
          func_0x000107c6142c(uVar3);
          if ((uVar8 & 1) == 0) {
            return false;
          }
        }
        goto LAB_1010dcae4;
      }
    }
    func_0x000107c6142c(uVar7);
    bVar4 = false;
  }
  return bVar4;
}



/* Entry: 1010dccb0; end: 1010dcd0f;  */

void FUN_1010dccb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  func_0x000107c613fc(param_7,0x48,7);
  *(undefined8 *)(param_7 + 0x40) = 0;
  *(undefined8 *)(param_7 + 0x10) = param_3;
  *(undefined8 *)(param_7 + 0x18) = param_4;
  *(undefined8 *)(param_7 + 0x20) = param_5;
  *(undefined8 *)(param_7 + 0x28) = param_6;
  *(undefined8 *)(param_7 + 0x30) = param_1;
  *(undefined8 *)(param_7 + 0x38) = param_2;
  return;
}



/* Entry: 1010dcd10; end: 1010dcd6b;  */

void FUN_1010dcd10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010dcd6c; end: 1010dcedf;  */

void FUN_1010dcd6c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(long *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  if (param_2 != 0) {
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    func_0x000107c6157c(param_1);
    lVar2 = param_2;
    func_0x000107c615f0(param_2);
    func_0x000107c51c88();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x0001000b637c();
    func_0x000107c61170(lVar2);
    uVar1 = 0x112d35ff8;
    func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
    pcVar4 = FUN_1010dcee0;
    func_0x0001000bfde0(FUN_1010dcee0,0,uVar1);
    func_0x000107c61574(lVar3);
    puVar5 = &UNK_110382e00;
    func_0x000107c613fc(&UNK_110382e00,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    uVar1 = 0x1010dd114;
    puVar7 = puVar5;
    (**(code **)(*(long *)pcVar4 + 0x60))(0x1010dd114);
    func_0x000107c61574(puVar5);
    uVar6 = uVar1;
    func_0x000107c614f0(uVar1);
    (**(code **)(puVar7 + 0x10))(*(undefined8 *)(unaff_x20 + 0x20),uVar6,puVar7);
    func_0x000107c615e8(param_2);
    func_0x000107c61574(pcVar4);
    func_0x000107c61574(param_1);
    func_0x000107c615e8(uVar1);
  }
  return;
}


