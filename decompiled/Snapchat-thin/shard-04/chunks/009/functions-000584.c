/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10399a94c; end: 10399a967; -[SCAdProviderAdPodResult failure] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399a94c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fbd198);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x10399b854;
  puStack_48 = &UNK_1106b61f8;
  func_0x000107c60bc4(&puStack_60);
  uVar2 = uStack_38;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10399a968; end: 10399aa83;  */

undefined8
FUN_10399a968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar3 = &puStack_90;
  ppuVar4 = &puStack_90;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x10399b85c;
  puStack_78 = &UNK_1106b5f28;
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000107c60bc4(&puStack_90);
  uVar2 = uStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar2);
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  uStack_80 = 0x10399b854;
  puStack_78 = &UNK_1106b5f50;
  uStack_70 = param_3;
  uStack_68 = param_4;
  func_0x000107c60bc4(&puStack_90);
  uVar2 = uStack_68;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(uVar2);
  func_0x000107c490e4();
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_4);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  return unaff_x20;
}



/* Entry: 10399aa84; end: 10399aa9f;  */

void FUN_10399aa84(long param_1,long param_2)

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



/* Entry: 10399aaa0; end: 10399ab2f; -[SCAdProviderAdPodResult initWithSuccess:failure:] */

void FUN_10399aaa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1106b61b8;
  func_0x000107c613fc(&UNK_1106b61b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_1106b61e0;
  func_0x000107c613fc(&UNK_1106b61e0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  FUN_10399a968(0x10399b844,puVar1,0x10399b848,puVar2);
  return;
}



/* Entry: 10399ab30; end: 10399ab4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399ab30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbd188) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fbd190);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fbd198);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10399ab4c; end: 10399ac2f; -[SCAdProviderAdPodResult initWithUnviewedEligibleStoryCount:success:failure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399ab4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar3 = &UNK_1106b6168;
  func_0x000107c613fc(&UNK_1106b6168,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  puVar4 = &UNK_1106b6190;
  func_0x000107c613fc(&UNK_1106b6190,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_5;
  *(undefined8 *)(param_1 + _DAT_112fbd188) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fbd190);
  *puVar1 = 0x10399b83c;
  puVar1[1] = puVar3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fbd198);
  *puVar1 = 0x10399b840;
  puVar1[1] = puVar4;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10399ac30; end: 10399ac5b; -[SCAdProviderAdPodResult init] */

void FUN_10399ac30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdProviderServices.AdProviderAdPodResult",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10399ac5c);
  (*pcVar1)();
}



/* Entry: 10399ac5c; end: 10399ac6f; -[SCAdProviderAdPodResult .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010399ac90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010399ac94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399ac5c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)
            (*(undefined8 *)(param_1 + _DAT_112fbd190 + 8),param_2,&DAT_112fbd190,&DAT_112fbd198);
  return;
}



/* Entry: 10399ac70; end: 10399acab;  */

/* WARNING: Possible PIC construction at 0x00010399ac90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010399ac94) */

void FUN_10399ac70(long param_1,undefined8 param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + *param_3 + 8));
  return;
}



/* Entry: 10399acac; end: 10399acbb; -[SCAdProviderBrandSafetyAdPodsResult smartCacheAllocationEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10399acac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fbd1a0);
}



/* Entry: 10399acbc; end: 10399ad0b; -[SCAdProviderBrandSafetyAdPodsResult brandSafetyTypesNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399acbc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fbd1a8);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fe08();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10399ad0c; end: 10399ad5b; -[SCAdProviderBrandSafetyAdPodsResult pendingInsertAdResponses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399ad0c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fbd1b0);
  func_0x0001047c0984(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10399ad5c; end: 10399ad6b; -[SCAdProviderBrandSafetyAdPodsResult unviewedEligibleStoryCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10399ad5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fbd1b8);
}



/* Entry: 10399ad6c; end: 10399ad87; -[SCAdProviderBrandSafetyAdPodsResult success] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399ad6c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fbd1c0);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_10399ad88;
  puStack_48 = &UNK_1106b6130;
  func_0x000107c60bc4(&puStack_60);
  uVar2 = uStack_38;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10399ad88; end: 10399ade7;  */

void FUN_10399ad88(long param_1,undefined8 param_2)

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



/* Entry: 10399ade8; end: 10399ae03; -[SCAdProviderBrandSafetyAdPodsResult failure] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399ade8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fbd1c8);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x10399b854;
  puStack_48 = &UNK_1106b6108;
  func_0x000107c60bc4(&puStack_60);
  uVar2 = uStack_38;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10399ae04; end: 10399af97;  */

undefined8
FUN_10399ae04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  uVar2 = param_2;
  func_0x000107c5fe08(param_2,PTR___sSiN_11034deb0,PTR___sSiSHsWP_11034dec0);
  func_0x000107c6142c(param_2);
  uVar3 = 0;
  func_0x0001047c0984(0);
  uVar4 = param_3;
  func_0x000107c5fc48(param_3,uVar3);
  func_0x000107c6142c(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_10399ad88;
  puStack_88 = &UNK_1106b5f78;
  uStack_80 = param_4;
  uStack_78 = param_5;
  func_0x000107c60bc4(&puStack_a0);
  uVar3 = uStack_78;
  func_0x000107c6157c(param_5);
  func_0x000107c61574(uVar3);
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)0x10399b854;
  puStack_88 = &UNK_1106b5fa0;
  uStack_80 = param_6;
  uStack_78 = param_7;
  func_0x000107c60bc4(&puStack_a0);
  uVar3 = uStack_78;
  func_0x000107c6157c(param_7);
  func_0x000107c61574(uVar3);
  func_0x000107c48714();
  func_0x000107c61574(param_5);
  func_0x000107c61574(param_7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  return unaff_x20;
}



/* Entry: 10399af98; end: 10399b083; -[SCAdProviderBrandSafetyAdPodsResult initWithSmartCacheAllocationEnabled:brandSafetyTypesNeeded:pendingInsertAdResponses:success:failure:] */

void FUN_10399af98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5fe10(param_4,PTR___sSiN_11034deb0,PTR___sSiSHsWP_11034dec0);
  uVar1 = 0;
  func_0x0001047c0984(0);
  func_0x000107c5fc54(param_5,uVar1);
  puVar2 = &UNK_1106b60c8;
  func_0x000107c613fc(&UNK_1106b60c8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  puVar3 = &UNK_1106b60f0;
  func_0x000107c613fc(&UNK_1106b60f0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_7;
  FUN_10399ae04(param_3,param_4,param_5,0x10399b834,puVar2,0x10399b838,puVar3);
  return;
}



/* Entry: 10399b084; end: 10399b14f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399b084(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112fbd1a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fbd1a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fbd1b0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fbd1b8) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fbd1c0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fbd1c8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10399b150; end: 10399b2a7; -[SCAdProviderBrandSafetyAdPodsResult initWithSmartCacheAllocationEnabled:brandSafetyTypesNeeded:pendingInsertAdResponses:unviewedEligibleStoryCount:success:failure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399b150(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5fe10(param_4,PTR___sSiN_11034deb0,PTR___sSiSHsWP_11034dec0);
  uVar3 = 0;
  func_0x0001047c0984(0);
  func_0x000107c5fc54(param_5,uVar3);
  puVar4 = &UNK_1106b6078;
  func_0x000107c613fc(&UNK_1106b6078,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_7;
  puVar5 = &UNK_1106b60a0;
  func_0x000107c613fc(&UNK_1106b60a0,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_8;
  *(undefined1 *)(param_1 + _DAT_112fbd1a0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fbd1a8) = param_4;
  *(undefined8 *)(param_1 + _DAT_112fbd1b0) = param_5;
  *(undefined8 *)(param_1 + _DAT_112fbd1b8) = param_6;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fbd1c0);
  *puVar1 = FUN_10399b7b4;
  puVar1[1] = puVar4;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fbd1c8);
  *puVar1 = 0x10399b84c;
  puVar1[1] = puVar5;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10399b2a8; end: 10399b2d3; -[SCAdProviderBrandSafetyAdPodsResult init] */

void FUN_10399b2a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdProviderServices.AdProviderBrandSafetyAdPodsResult",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10399b2d4);
  (*pcVar1)();
}



/* Entry: 10399b2d4; end: 10399b333; -[SCAdProviderBrandSafetyAdPodsResult .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010399b314: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010399b318) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399b2d4(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fbd1a8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fbd1b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbd1c0 + 8));
  return;
}



/* Entry: 10399b334; end: 10399b37b; -[SCAdProviderAdResponsesResult predefinedAdRequestClientIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399b334(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fbd1d0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10399b37c; end: 10399b3a3; -[SCAdProviderAdResponsesResult success] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399b37c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fbd1d8);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x10399b398;
  puStack_48 = &UNK_1106b6040;
  func_0x000107c60bc4(&puStack_60);
  uVar2 = uStack_38;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10399b3a4; end: 10399b3cb; -[SCAdProviderAdResponsesResult failure] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399b3a4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fbd1e0);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x10399b3c0;
  puStack_48 = &UNK_1106b6018;
  func_0x000107c60bc4(&puStack_60);
  uVar2 = uStack_38;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10399b3cc; end: 10399b427;  */

void FUN_10399b3cc(long param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  (*param_3)(0);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10399b428; end: 10399b443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399b428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbd1d0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fbd1d8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fbd1e0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10399b444; end: 10399b4df;  */

void FUN_10399b444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6,long *param_7,long *param_8)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + *param_6) = param_1;
  lVar1 = *param_7;
  *(undefined8 *)(unaff_x20 + lVar1) = param_2;
  ((undefined8 *)(unaff_x20 + lVar1))[1] = param_3;
  lVar1 = *param_8;
  *(undefined8 *)(unaff_x20 + lVar1) = param_4;
  ((undefined8 *)(unaff_x20 + lVar1))[1] = param_5;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10399b4e0; end: 10399b5d7; -[SCAdProviderAdResponsesResult initWithPredefinedAdRequestClientIds:success:failure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399b4e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  puVar3 = &UNK_1106b5fd8;
  func_0x000107c613fc(&UNK_1106b5fd8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  puVar4 = &UNK_1106b6000;
  func_0x000107c613fc(&UNK_1106b6000,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_5;
  *(undefined8 *)(param_1 + _DAT_112fbd1d0) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fbd1d8);
  *puVar1 = 0x10399b774;
  puVar1[1] = puVar3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fbd1e0);
  *puVar1 = 0x10399b794;
  puVar1[1] = puVar4;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10399b5d8; end: 10399b623;  */

void FUN_10399b5d8(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  (*param_3)(0);
  func_0x000107c5fc48(param_1,uVar1);
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10399b624; end: 10399b683; -[SCAdProviderAdResponsesResult init] */

void FUN_10399b624(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdProviderServices.AdProviderAdResponsesResult",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10399b650);
  (*pcVar1)();
}



/* Entry: 10399b684; end: 10399b6d3; -[SCAdProviderAdResponsesResult .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010399b6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010399b6b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399b684(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fbd1d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbd1d8 + 8));
  return;
}



/* Entry: 10399b6d4; end: 10399b7b3;  */

void FUN_10399b6d4(void)

{
  func_0x000107c61168(&PTR_PTR_11290ab10);
  return;
}



/* Entry: 10399b7b4; end: 10399b86f;  */

void FUN_10399b7b4(undefined8 param_1,uint param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010399b7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2 & 1)
  ;
  return;
}



/* Entry: 10399b870; end: 10399b87f; -[AdProviderServices adProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399b870(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fbd2b0));
  return;
}



/* Entry: 10399b880; end: 10399b8cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399b880(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbd2b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10399b8cc; end: 10399b923; -[AdProviderServices initWithAdProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399b8cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fbd2b0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10399b924; end: 10399b983; -[AdProviderServices init] */

void FUN_10399b924(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdProviderServices.AdProviderServices",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10399b950);
  (*pcVar1)();
}



/* Entry: 10399b984; end: 10399b9a7; -[AdProviderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399b984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbd2b0));
  return;
}



/* Entry: 10399b9a8; end: 10399ba7f;  */

void FUN_10399b9a8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10399ba80; end: 10399ba9f;  */

void FUN_10399ba80(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10399baa0; end: 10399badf;  */

void FUN_10399baa0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbd2e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2e540;
  func_0x000107c61520(&UNK_10dc2e540,&UNK_1106b62f8);
  puRam0000000112fbd2e0 = puVar1;
  return;
}



/* Entry: 10399bae0; end: 10399baef;  */

undefined1  [16] FUN_10399bae0(void)

{
  return ZEXT816(0x1106b62f8);
}



/* Entry: 10399baf0; end: 10399bc9b;  */

void FUN_10399baf0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_1 >> 0x20);
  uVar1 = param_1;
  if (uVar3 >> 0x1e != 0) {
    uVar1 = param_1 & 0x3fffffffffffffff;
  }
  uVar2 = param_1 & 0x3fffffffffffffff;
  if (uVar3 >> 0x1e < 2) {
    uVar2 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 10399bc9c; end: 10399bd6f;  */

void FUN_10399bc9c(void)

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



/* Entry: 10399bd70; end: 10399bd8f;  */

void FUN_10399bd70(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 10399bd90; end: 10399bdaf; -[SCAdProvidingFetchRequest description] */

void FUN_10399bd90(void)

{
  func_0x00010399c0a4();
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10399bdb0; end: 10399bdf7; -[SCAdProvidingFetchRequest init] */

void FUN_10399bdb0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "AdProviderServices/AdProvidingFetchRequestWrapper.swift",0x37,2,0x3e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10399bdf8);
  (*pcVar1)();
}



/* Entry: 10399bdf8; end: 10399bdfb; -[SCAdProvidingFetchRequest copyWithZone:] */

void FUN_10399bdf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10399bdfc; end: 10399be33; +[SCAdProvidingFetchRequest adResponseWithResult:] */

void FUN_10399bdfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_10399c130();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10399be34; end: 10399be6b; +[SCAdProvidingFetchRequest adPodWithResult:] */

void FUN_10399be34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x00010399c1bc();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10399be6c; end: 10399bea3; +[SCAdProvidingFetchRequest adPodsWithResult:] */

void FUN_10399be6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x00010399c24c();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10399bea4; end: 10399bf93; +[SCAdProvidingFetchRequest adResponsesWithResult:] */

void FUN_10399bea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x00010399c2dc();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10399bf94; end: 10399c007; -[SCAdProvidingFetchRequest matchAdResponse:adPod:adPods:adResponses:] */

void FUN_10399bf94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x00010399bedc(0x10399c548,auStack_40,0x10399c544,auStack_60,FUN_10399c534,auStack_80,
                      0x10399c54c,auStack_a0);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10399c008; end: 10399c03b;  */

void FUN_10399c008(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10399c03c; end: 10399c093; -[SCAdProvidingFetchRequest .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010399c058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010399c078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010399c05c) */
/* WARNING: Removing unreachable block (ram,0x00010399c07c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399c03c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbd2f0));
  return;
}



/* Entry: 10399c094; end: 10399c12f;  */

ulong FUN_10399c094(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 10399c130; end: 10399c36b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399c130(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_10399c36c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112fbd2e8) = 0;
  *(long *)(lVar3 + _DAT_112fbd2f0) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112fbd2f8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112fbd300) = 0;
  *(undefined8 *)(lVar3 + _DAT_112fbd308) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10399c36c; end: 10399c38b;  */

void FUN_10399c36c(void)

{
  func_0x000107c61168(&PTR_PTR_11290afd8);
  return;
}



/* Entry: 10399c38c; end: 10399c4f3;  */

int FUN_10399c38c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10399c408;
        goto LAB_10399c3ec;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10399c3ec:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_10399c408:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10399c4f4; end: 10399c533;  */

void FUN_10399c4f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbd338 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2e660;
  func_0x000107c61520(&UNK_10dc2e660,&UNK_1106b6470);
  puRam0000000112fbd338 = puVar1;
  return;
}



/* Entry: 10399c534; end: 10399c54f;  */

void FUN_10399c534(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010399c540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10399c550; end: 10399c55f; -[AdEOVTimerServices adEOVTimerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399c550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fbd340));
  return;
}



/* Entry: 10399c560; end: 10399c5ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399c560(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbd340) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10399c5ac; end: 10399c60b; -[AdEOVTimerServices init] */

void FUN_10399c5ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdEOVTimerServices.AdEOVTimerServices",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10399c5d8);
  (*pcVar1)();
}



/* Entry: 10399c60c; end: 10399c627; -[AdEOVTimerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399c60c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbd340));
  return;
}



/* Entry: 10399c628; end: 10399c653; +[_TtC32SCSKStoreProductPrefetchServices32SCSKStoreProductPrefetchServices jobTypeIdentifier] */

void FUN_10399c628(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f1800c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10399c654; end: 10399c663; -[_TtC32SCSKStoreProductPrefetchServices32SCSKStoreProductPrefetchServices jobProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399c654(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fbd378));
  return;
}



/* Entry: 10399c664; end: 10399c6c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399c664(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbd370) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fbd378) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10399c6c8; end: 10399c727; -[_TtC32SCSKStoreProductPrefetchServices32SCSKStoreProductPrefetchServices init] */

void FUN_10399c6c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSKStoreProductPrefetchServices.SCSKStoreProductPrefetchServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10399c6f4);
  (*pcVar1)();
}



/* Entry: 10399c728; end: 10399c75f; -[_TtC32SCSKStoreProductPrefetchServices32SCSKStoreProductPrefetchServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010399c744: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010399c748) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399c728(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbd370));
  return;
}



/* Entry: 10399c760; end: 10399c777;  */

bool FUN_10399c760(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10399c778; end: 10399c7b7;  */

void FUN_10399c778(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbd3a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2e750;
  func_0x000107c61520(&UNK_10dc2e750,&UNK_1106b66a0);
  puRam0000000112fbd3a8 = puVar1;
  return;
}



/* Entry: 10399c7b8; end: 10399c863;  */

void FUN_10399c7b8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10399c864; end: 10399c89b;  */

void FUN_10399c864(ulong *param_1,ulong *param_2)

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



/* Entry: 10399c89c; end: 10399c8ab; -[ThirdPartyLoginServices thirdPartyLoginService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399c89c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fbd3b0));
  return;
}



/* Entry: 10399c8ac; end: 10399c92f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10399c8ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbd3b8) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112fbd3b0) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 10399c930; end: 10399c99f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10399c930(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffd0;
  *(undefined8 *)(unaff_x20 + _DAT_112fbd3b8) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112fbd3b0) = uVar1;
  func_0x0001002b572c();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 10399c9a0; end: 10399c9fb; -[ThirdPartyLoginServices init] */

void FUN_10399c9a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ThirdPartyLoginServices.ThirdPartyLoginServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10399c9cc);
  (*pcVar1)();
}



/* Entry: 10399c9fc; end: 10399ca33; -[ThirdPartyLoginServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399c9fc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fbd3b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbd3b8));
  return;
}



/* Entry: 10399ca34; end: 10399ca3f;  */

undefined * FUN_10399ca34(void)

{
  return &UNK_1106b6708;
}



/* Entry: 10399ca40; end: 10399ca6b; +[SCThirdPartyLoginErrorKeys domain] */

void FUN_10399ca40(void)

{
  func_0x000107c5fadc(0xd000000000000027,0x800000010f180160);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10399ca6c; end: 10399caa7; -[SCThirdPartyLoginErrorKeys init] */

void FUN_10399ca6c(undefined8 param_1)

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



/* Entry: 10399caa8; end: 10399cadb;  */

void FUN_10399caa8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10399cadc; end: 10399caf3; -[SCThirdPartyLoginErrorKeys .cxx_destruct] */

void FUN_10399cadc(void)

{
  return;
}



/* Entry: 10399caf4; end: 10399cbcb;  */

void FUN_10399caf4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10399cbcc; end: 10399cc27;  */

void FUN_10399cbcc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10399cc28; end: 10399cc87;  */

void FUN_10399cc28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbd3e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2e850;
  func_0x000107c61520(&UNK_10dc2e850,&UNK_1106b6728);
  puRam0000000112fbd3e8 = puVar1;
  return;
}



/* Entry: 10399cc88; end: 10399ccaf;  */

undefined1  [16] FUN_10399cc88(void)

{
  return ZEXT816(0x1106b6728);
}



/* Entry: 10399ccb0; end: 10399ccef;  */

void FUN_10399ccb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbd418 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2e940;
  func_0x000107c61520(&UNK_10dc2e940,&UNK_1106b67a0);
  puRam0000000112fbd418 = puVar1;
  return;
}



/* Entry: 10399ccf0; end: 10399cd9b;  */

void FUN_10399ccf0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10399cd9c; end: 10399cdd3;  */

void FUN_10399cd9c(ulong *param_1,ulong *param_2)

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



/* Entry: 10399cdd4; end: 10399d353;  */

long * FUN_10399cdd4(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar4 = param_2;
    func_0x000107c614c4(param_2,param_3);
    bVar3 = (int)plVar4 != 1;
    if (bVar3) {
      lVar5 = *param_2;
      func_0x000107c614b0(lVar5);
      *param_1 = lVar5;
    }
    else {
      lVar5 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar5;
      lVar7 = param_2[2];
      param_1[2] = lVar7;
      lVar5 = 0;
      FUN_10399d354();
      iVar2 = *(int *)(lVar5 + 0x18);
      lVar5 = 0;
      func_0x000107c5eea4();
      pcVar8 = *(code **)(*(long *)(lVar5 + -8) + 0x10);
      func_0x000107c61434(lVar7);
      (*pcVar8)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar5);
    }
    func_0x000107c6159c(param_1,param_3,!bVar3);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 10399d354; end: 10399d38b;  */

void FUN_10399d354(undefined8 param_1)

{
  if (lRam0000000112fbd520 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e794e34);
  return;
}



/* Entry: 10399d38c; end: 10399d42b;  */

long * FUN_10399d38c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar3;
    lVar5 = param_2[2];
    param_1[2] = lVar5;
    iVar2 = *(int *)(param_3 + 0x18);
    lVar3 = 0;
    func_0x000107c5eea4();
    pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
    func_0x000107c61434(lVar5);
    (*pcVar6)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 10399d42c; end: 10399d46f;  */

void FUN_10399d42c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x00010399d46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 10399d470; end: 10399d4e3;  */

undefined8 * FUN_10399d470(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar3 = param_2[2];
  param_1[2] = uVar3;
  iVar1 = *(int *)(param_3 + 0x18);
  lVar2 = 0;
  func_0x000107c5eea4();
  pcVar4 = *(code **)(*(long *)(lVar2 + -8) + 0x10);
  func_0x000107c61434(uVar3);
  (*pcVar4)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  return param_1;
}



/* Entry: 10399d4e4; end: 10399d62b;  */

undefined8 * FUN_10399d4e4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  iVar1 = *(int *)(param_3 + 0x18);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  return param_1;
}



/* Entry: 10399d62c; end: 10399d643;  */

void FUN_10399d62c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10399d644; end: 10399d76f;  */

void FUN_10399d644(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_30 = &UNK_10dc2ea58;
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}


