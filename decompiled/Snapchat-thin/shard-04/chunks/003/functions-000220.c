/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103349ff8; end: 10334a04f; -[SCLensModularReplyCameraScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010334a024: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010334a028) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103349ff8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f5b4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5b4d8));
  return;
}



/* Entry: 10334a050; end: 10334a06f;  */

void FUN_10334a050(void)

{
  func_0x000107c61168(&PTR_PTR_1128cfbe0);
  return;
}



/* Entry: 10334a070; end: 10334a0b7; -[SCSCLensModularReplyCameraScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334a070(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5b518;
  func_0x000107c61428(param_1 + _DAT_112f5b518,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10334a0b8; end: 10334a10f; -[SCSCLensModularReplyCameraScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334a0b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5b518;
  func_0x000107c61428(param_1 + _DAT_112f5b518,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10334a110; end: 10334a1e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334a110(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_1033492e8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f5b430) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10334a1e8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f5b438);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f5b520);
    *(long **)(unaff_x20 + _DAT_112f5b520) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10334a1e8; end: 10334a20f; -[SCSCLensModularReplyCameraScopedServicesSaberEntryPoint begin] */

void FUN_10334a1e8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10334a110();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10334a210; end: 10334a387;  */

/* WARNING: Possible PIC construction at 0x00010334a278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334a310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010334a27c) */
/* WARNING: Removing unreachable block (ram,0x00010334a314) */
/* WARNING: Removing unreachable block (ram,0x00010334a32c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334a210(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f5b520);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10334a388; end: 10334a38f;  */

void FUN_10334a388(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10334a390; end: 10334a3c3; -[SCSCLensModularReplyCameraScopedServicesSaberEntryPoint end] */

void FUN_10334a390(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10334a210();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10334a3c4; end: 10334a4e3;  */

void FUN_10334a3c4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "LensModularReplyCameraScopeGraphBridge/SCSCLensModularReplyCameraScopedServicesSaberEntryPoint.swift"
                        ,100,2,0x2e,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10334a4e4);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10334a4e4; end: 10334a58f; -[SCSCLensModularReplyCameraScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10334a4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10334a3c4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10334a590; end: 10334a5ef; -[SCSCLensModularReplyCameraScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334a590(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f5b518,0);
  *(undefined8 *)(param_1 + _DAT_112f5b520) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10334a5f0; end: 10334a623;  */

void FUN_10334a5f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10334a624; end: 10334a65b; -[SCSCLensModularReplyCameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334a624(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f5b518);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5b520));
  return;
}



/* Entry: 10334a65c; end: 10334a67b;  */

void FUN_10334a65c(void)

{
  func_0x000107c61168(&PTR_PTR_1128cfcb0);
  return;
}



/* Entry: 10334a67c; end: 10334a80b;  */

/* WARNING: Possible PIC construction at 0x00010334a77c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334a78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334a79c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334a7ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334a7bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334a7cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334a7dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010334a7d0) */
/* WARNING: Removing unreachable block (ram,0x00010334a7c0) */
/* WARNING: Removing unreachable block (ram,0x00010334a7b0) */
/* WARNING: Removing unreachable block (ram,0x00010334a7a0) */
/* WARNING: Removing unreachable block (ram,0x00010334a790) */
/* WARNING: Removing unreachable block (ram,0x00010334a780) */
/* WARNING: Removing unreachable block (ram,0x00010334a7e0) */

void FUN_10334a67c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110641060;
  func_0x000107c613fc(&UNK_110641060,0x88,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  uVar2 = 0x112f5b558;
  func_0x0001000285a8(0x112f5b558,&UNK_10dbb39f0);
  func_0x000107c613fc();
  uVar3 = 0x10334ab04;
  func_0x0001000841fc(0x10334ab04,puVar1,uVar2);
  func_0x000100084214(&UNK_10dbb39c0,0x2e,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10334a80c; end: 10334a84f;  */

void FUN_10334a80c(void)

{
  long unaff_x20;
  
  FUN_10334a67c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 10334a850; end: 10334a85f;  */

undefined1  [16] FUN_10334a850(void)

{
  return ZEXT816(0x110641040);
}



/* Entry: 10334a860; end: 10334aa6f;  */

void FUN_10334a860(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_70 [2];
  
  uVar4 = *param_2;
  func_0x0001000285a8(0x112f5b560,&UNK_10dbb39f8);
  puVar1 = auStack_70;
  auStack_70[0] = uVar4;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f5b568,&UNK_10dbb3a00);
  puVar2 = &UNK_110641088;
  func_0x000107c613fc(&UNK_110641088,0x90,7);
  *(undefined8 *)(puVar2 + 0x10) = param_16;
  *(undefined8 *)(puVar2 + 0x18) = param_14;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  *(undefined8 **)(puVar2 + 0x28) = puVar1;
  *(undefined8 *)(puVar2 + 0x30) = param_8;
  *(undefined8 *)(puVar2 + 0x38) = param_13;
  *(undefined8 *)(puVar2 + 0x40) = param_7;
  *(undefined8 *)(puVar2 + 0x48) = param_15;
  *(undefined8 *)(puVar2 + 0x50) = param_12;
  *(undefined8 *)(puVar2 + 0x58) = param_17;
  *(undefined8 *)(puVar2 + 0x60) = param_4;
  *(undefined8 *)(puVar2 + 0x68) = param_10;
  *(undefined8 *)(puVar2 + 0x70) = param_3;
  *(undefined8 *)(puVar2 + 0x78) = param_5;
  *(undefined8 *)(puVar2 + 0x80) = param_11;
  *(undefined8 *)(puVar2 + 0x88) = param_9;
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_9);
  uVar4 = 0x10334ab4c;
  func_0x0001000823a8(0x10334ab4c,puVar2);
  func_0x000100082720("LensURISaberPluginRegistryServiceProvider",0x29,2);
  uVar3 = uVar4;
  func_0x000103361dd0();
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar4);
  func_0x000100082720("LensURISaberPluginCollectionEntryPointProvider",0x2e,2);
  *param_1 = uVar3;
  return;
}



/* Entry: 10334aa70; end: 10334ab8f;  */

void FUN_10334aa70(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10334ab90; end: 10334ad3b;  */

/* WARNING: Possible PIC construction at 0x00010334aca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334acb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334acc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334acd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334ace4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334acf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334ad04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334ad14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010334ad08) */
/* WARNING: Removing unreachable block (ram,0x00010334acf8) */
/* WARNING: Removing unreachable block (ram,0x00010334ace8) */
/* WARNING: Removing unreachable block (ram,0x00010334acd8) */
/* WARNING: Removing unreachable block (ram,0x00010334acc8) */
/* WARNING: Removing unreachable block (ram,0x00010334acb8) */
/* WARNING: Removing unreachable block (ram,0x00010334aca8) */
/* WARNING: Removing unreachable block (ram,0x00010334ad18) */

void FUN_10334ab90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1106410b0;
  func_0x000107c613fc(&UNK_1106410b0,0x90,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  uVar2 = 0x112f5b570;
  func_0x0001000285a8(0x112f5b570,&UNK_10dbb3a08);
  func_0x000107c613fc();
  pcVar3 = FUN_10334ae30;
  func_0x0001000841fc(FUN_10334ae30,puVar1,uVar2);
  func_0x000100084214("LensURISaberPluginRegistryServiceProvider",0x29,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10334ad3c; end: 10334ae2f;  */

void FUN_10334ad3c(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  bVar1 = *param_2;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      FUN_10334ae7c(param_3,param_4,param_5);
      pcVar2 = "LensFriendDataRequestURIPluginProvider";
      uVar3 = 0x26;
      param_6 = param_3;
    }
    else {
      FUN_10335dea0(param_6,param_7,param_8,param_9,param_10);
      pcVar2 = "LensLeaderboardURIPluginProvider";
      uVar3 = 0x20;
    }
  }
  else if (bVar1 == 2) {
    FUN_103356f70(param_6,param_11,param_12,param_5,param_8,param_13,param_14,param_15,param_10,
                  param_16,param_17);
    pcVar2 = "LensMultiplayerURIPluginProvider";
    uVar3 = 0x20;
  }
  else {
    FUN_10334b250(param_6,param_18);
    pcVar2 = "LensTextInputURIPluginProvider";
    uVar3 = 0x1e;
  }
  func_0x000100082720(pcVar2,uVar3,2);
  *param_1 = param_6;
  return;
}



/* Entry: 10334ae30; end: 10334ae7b;  */

void FUN_10334ae30(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10334ad3c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 10334ae7c; end: 10334af13;  */

void FUN_10334ae7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ee3a00,&UNK_10db0ebc0);
  puVar1 = &UNK_110641180;
  func_0x000107c613fc(&UNK_110641180,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_10334b16c,puVar1);
  return;
}



/* Entry: 10334af14; end: 10334b16b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334af14(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar8 = &puStack_80;
  uVar9 = param_3;
  func_0x000100083b20(&puStack_80);
  puVar1 = puStack_80;
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_60 = FUN_10334b1f4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10334b1fc;
  puStack_68 = &UNK_1106411b8;
  uStack_58 = param_3;
  func_0x000107c60bc4(&puStack_80);
  uVar5 = uStack_58;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(uVar5);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  puVar4 = puVar1;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10334b168);
    (*pcVar2)();
  }
  func_0x000100083b20(&puStack_80);
  puVar6 = puStack_80;
  uVar5 = *(undefined8 *)(puStack_80 + _DAT_113034408);
  func_0x000107c61174(uVar5);
  func_0x000107c61170(puVar6);
  puVar6 = puVar1;
  func_0x000107c5b478();
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    puVar7 = PTR_PTR_1126d07b8;
    func_0x000107c610f8(PTR_PTR_1126d07b8);
    func_0x000107c61174(puVar3);
    func_0x000107c4883c(puVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar6);
    ppuVar8 = &PTR____CFConstantStringClassReference_110dd6d58;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd6d58);
    puVar4 = PTR_PTR_1126b1cb0;
    func_0x000107c610f8();
    func_0x000107c61174(puVar7);
    func_0x000107c5fadc(ppuVar8,uVar9);
    func_0x000107c6142c(uVar9);
    uVar5 = 0x7973646e65697266;
    func_0x000107c5fadc(0x7973646e65697266,0xec0000006d657473);
    func_0x000107c46c6c();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(ppuVar8);
    func_0x000107c61170(uVar5);
    *param_1 = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10334b16c);
  (*pcVar2)();
}



/* Entry: 10334b16c; end: 10334b187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334b16c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar9 = &puStack_80;
  uVar10 = uVar6;
  func_0x000100083b20(&puStack_80,*(undefined8 *)(unaff_x20 + 0x10),uVar6,
                      *(undefined8 *)(unaff_x20 + 0x20));
  puVar1 = puStack_80;
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_60 = FUN_10334b1f4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10334b1fc;
  puStack_68 = &UNK_1106411b8;
  uStack_58 = uVar6;
  func_0x000107c60bc4(&puStack_80);
  uVar2 = uStack_58;
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(uVar2);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar9);
  puVar5 = puVar1;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10334b168);
    (*pcVar3)();
  }
  func_0x000100083b20(&puStack_80);
  puVar7 = puStack_80;
  uVar6 = *(undefined8 *)(puStack_80 + _DAT_113034408);
  func_0x000107c61174(uVar6);
  func_0x000107c61170(puVar7);
  puVar7 = puVar1;
  func_0x000107c5b478();
  func_0x000107c61180();
  if (puVar7 != (undefined *)0x0) {
    puVar8 = PTR_PTR_1126d07b8;
    func_0x000107c610f8(PTR_PTR_1126d07b8);
    func_0x000107c61174(puVar4);
    func_0x000107c4883c(puVar8);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar7);
    ppuVar9 = &PTR____CFConstantStringClassReference_110dd6d58;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd6d58);
    puVar5 = PTR_PTR_1126b1cb0;
    func_0x000107c610f8();
    func_0x000107c61174(puVar8);
    func_0x000107c5fadc(ppuVar9,uVar10);
    func_0x000107c6142c(uVar10);
    uVar6 = 0x7973646e65697266;
    func_0x000107c5fadc(0x7973646e65697266,0xec0000006d657473);
    func_0x000107c46c6c();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(ppuVar9);
    func_0x000107c61170(uVar6);
    *param_1 = puVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10334b16c);
  (*pcVar3)();
}



/* Entry: 10334b188; end: 10334b1f3;  */

undefined8 FUN_10334b188(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c4c3ac(uStack_28);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  uVar2 = uVar1;
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10334b1f4; end: 10334b1fb;  */

undefined8 FUN_10334b1f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c4c3ac(uStack_28);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  uVar2 = uVar1;
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10334b1fc; end: 10334b233;  */

void FUN_10334b1fc(long param_1)

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



/* Entry: 10334b234; end: 10334b24f;  */

void FUN_10334b234(long param_1,long param_2)

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



/* Entry: 10334b250; end: 10334b2cf;  */

void FUN_10334b250(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ee3a00,&UNK_10db0ebc0);
  puVar1 = &UNK_1106411f0;
  func_0x000107c613fc(&UNK_1106411f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10334b528,puVar1);
  return;
}



/* Entry: 10334b2d0; end: 10334b527;  */

void FUN_10334b2d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  ppuVar7 = &puStack_90;
  func_0x000100083b20(&puStack_90);
  puVar1 = puStack_90;
  uVar9 = *(undefined8 *)(puStack_90 + 0x28);
  pcStack_70 = FUN_10334b540;
  uStack_68 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10334b5ec;
  puStack_78 = &UNK_110641228;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61174(uVar9);
  uVar3 = uVar9;
  func_0x000107c3feb8();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar9);
  uVar4 = uVar3;
  func_0x000107c421ac(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(puVar1 + 0x18);
  uVar9 = *(undefined8 *)(puVar1 + 0x20);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000100083b20(&puStack_90);
  puVar6 = puStack_90;
  puVar5 = puStack_90;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  if (puVar5 != (undefined *)0x0) {
    puVar6 = PTR_PTR_1126d07f8;
    func_0x000107c610f8(PTR_PTR_1126d07f8);
    func_0x000107c61174(uVar4);
    func_0x000107c47d9c(puVar6);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(puVar5);
    ppuVar7 = &PTR____CFConstantStringClassReference_110dd6d58;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd6d58);
    ppuVar8 = &PTR____CFConstantStringClassReference_110e72ab8;
    uVar3 = param_3;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e72ab8);
    puVar5 = PTR_PTR_1126b1cb0;
    func_0x000107c610f8();
    func_0x000107c61174(puVar6);
    func_0x000107c5fadc(ppuVar7,param_3);
    func_0x000107c6142c(param_3);
    func_0x000107c5fadc(ppuVar8,uVar3);
    func_0x000107c6142c(uVar3);
    func_0x000107c46c6c();
    func_0x000107c61574(puVar1);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(ppuVar7);
    func_0x000107c61170(ppuVar8);
    *param_1 = puVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10334b528);
  (*pcVar2)();
}



/* Entry: 10334b528; end: 10334b53f;  */

void FUN_10334b528(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar7 = &puStack_90;
  func_0x000100083b20(&puStack_90,*(undefined8 *)(unaff_x20 + 0x10),uVar9);
  puVar1 = puStack_90;
  uVar10 = *(undefined8 *)(puStack_90 + 0x28);
  pcStack_70 = FUN_10334b540;
  uStack_68 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10334b5ec;
  puStack_78 = &UNK_110641228;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61174(uVar10);
  uVar3 = uVar10;
  func_0x000107c3feb8();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar10);
  uVar4 = uVar3;
  func_0x000107c421ac(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(puVar1 + 0x18);
  uVar10 = *(undefined8 *)(puVar1 + 0x20);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000100083b20(&puStack_90);
  puVar6 = puStack_90;
  puVar5 = puStack_90;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  if (puVar5 != (undefined *)0x0) {
    puVar6 = PTR_PTR_1126d07f8;
    func_0x000107c610f8(PTR_PTR_1126d07f8);
    func_0x000107c61174(uVar4);
    func_0x000107c47d9c(puVar6);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(puVar5);
    ppuVar7 = &PTR____CFConstantStringClassReference_110dd6d58;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd6d58);
    ppuVar8 = &PTR____CFConstantStringClassReference_110e72ab8;
    uVar3 = uVar9;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e72ab8);
    puVar5 = PTR_PTR_1126b1cb0;
    func_0x000107c610f8();
    func_0x000107c61174(puVar6);
    func_0x000107c5fadc(ppuVar7,uVar9);
    func_0x000107c6142c(uVar9);
    func_0x000107c5fadc(ppuVar8,uVar3);
    func_0x000107c6142c(uVar3);
    func_0x000107c46c6c();
    func_0x000107c61574(puVar1);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(ppuVar7);
    func_0x000107c61170(ppuVar8);
    *param_1 = puVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10334b528);
  (*pcVar2)();
}



/* Entry: 10334b540; end: 10334b5df;  */

void FUN_10334b540(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [16];
  long *plStack_50;
  undefined1 auStack_40 [16];
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = 0;
  plStack_50 = &lStack_28;
  plStack_30 = plStack_50;
  func_0x0001008546f4(FUN_10334b5e0,0,0x10334b5e4,0,FUN_10334b6fc,auStack_40,0x10334b5e8,0,
                      0x10334b738,auStack_60);
  lVar1 = lStack_28;
  if (lStack_28 == 0) {
    lVar2 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    lVar2 = 0;
    func_0x0001002ed07c();
  }
  *param_1 = lVar1;
  param_1[3] = lVar2;
  return;
}



/* Entry: 10334b5e0; end: 10334b5eb;  */

void FUN_10334b5e0(void)

{
  return;
}



/* Entry: 10334b5ec; end: 10334b6df;  */

void FUN_10334b5ec(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_60);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  if (lStack_48 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_60,lStack_48);
    lVar5 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(puVar4);
    puVar3 = puVar4;
    func_0x000107c605b0(puVar4,lStack_48);
    (**(code **)(lVar5 + 8))(puVar4,lStack_48);
    func_0x000100183ab8(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10334b6e0; end: 10334b6fb;  */

void FUN_10334b6e0(long param_1,long param_2)

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



/* Entry: 10334b6fc; end: 10334b773;  */

void FUN_10334b6fc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  uVar2 = *puVar3;
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10334b774; end: 10334b7df;  */

void FUN_10334b774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  return;
}



/* Entry: 10334b7e0; end: 10334bc83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334b7e0(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 uVar18;
  long lStack_70;
  long lStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x40);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c51f40();
    func_0x000107c61180();
    func_0x0001000285a8(0x112d6e970,&UNK_10d9307a0);
    uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_11307e0b8);
    func_0x000107c61174();
    uVar5 = uVar4;
    func_0x0001000bda74();
    func_0x000107c61170(uVar4);
    puVar6 = &UNK_110641308;
    func_0x000107c613fc(&UNK_110641308,0x20,7);
    *(long *)(puVar6 + 0x10) = lVar2;
    *(undefined8 *)(puVar6 + 0x18) = uVar5;
    func_0x0001000285a8(0x112f5b578,&UNK_10dbb3d40);
    func_0x000107c613fc();
    func_0x000107c615f0(lVar2);
    func_0x000107c6157c(uVar5);
    pcVar7 = FUN_10334bd0c;
    func_0x0001000bdd8c(FUN_10334bd0c,puVar6);
    uVar18 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_11307b7f8);
    func_0x0001000285a8(0x112f5b580,&UNK_10dbb3a80);
    uVar17 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c615f0(uVar18);
    func_0x000107c6157c(pcVar7);
    func_0x000107c4b194();
    func_0x000107c61180();
    uVar4 = uVar17;
    func_0x0001000bda74();
    func_0x000107c61170(uVar17);
    func_0x0001000285a8(0x112d5de00,&UNK_10d9245b8);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c4ae48();
    func_0x000107c61180();
    uVar17 = uVar8;
    func_0x0001000bda74();
    func_0x000107c61170(uVar8);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar8 = uVar9;
    func_0x000107c42438();
    func_0x000107c61180();
    func_0x0001000285a8(0x112f5b588,&UNK_10dbb3a90);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c4168c();
    func_0x000107c61180();
    uVar11 = uVar10;
    func_0x0001000bda74();
    func_0x000107c61170(uVar10);
    lVar12 = 0;
    FUN_103356dc4();
    lVar13 = lVar12;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar13 + _DAT_112f5b840);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar13 + _DAT_112f5b848) = 0;
    *(undefined1 *)(lVar13 + _DAT_112f5b850) = 0;
    *(undefined8 *)(lVar13 + _DAT_112f5b858) = uVar18;
    *(long *)(lVar13 + _DAT_112f5b860) = lVar2;
    *(code **)(lVar13 + _DAT_112f5b868) = pcVar7;
    *(undefined8 *)(lVar13 + _DAT_112f5b870) = uVar8;
    *(undefined8 *)(lVar13 + _DAT_112f5b878) = uVar4;
    *(undefined8 *)(lVar13 + _DAT_112f5b880) = uVar11;
    *(undefined8 *)(lVar13 + _DAT_112f5b888) = uVar17;
    puVar6 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c615f0(lVar2);
    func_0x000107c615f0(uVar18);
    func_0x000107c6157c(pcVar7);
    func_0x000107c615f0(uVar8);
    func_0x000107c6157c(uVar4);
    func_0x000107c6157c(uVar11);
    func_0x000107c6157c(uVar17);
    func_0x000107c453e4();
    *(undefined **)(lVar13 + _DAT_112f5b890) = puVar6;
    plVar14 = &lStack_70;
    puVar16 = PTR_s_init_1125d9248;
    lStack_70 = lVar13;
    lStack_68 = lVar12;
    func_0x000107c61154(plVar14,PTR_s_init_1125d9248);
    FUN_103354bb4();
    FUN_103354cd8();
    func_0x000107c615e8(uVar18);
    func_0x000107c61574(pcVar7);
    func_0x000107c61574(uVar4);
    func_0x000107c61574(uVar17);
    func_0x000107c615e8(uVar8);
    func_0x000107c61574(uVar11);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
    *(long **)(unaff_x20 + 0x48) = plVar14;
    func_0x000107c61174(plVar14);
    func_0x000107c61170(uVar4);
    ppuVar15 = &PTR____CFConstantStringClassReference_110dd6d58;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd6d58);
    puVar6 = PTR_PTR_1126b1cb0;
    func_0x000107c610f8(PTR_PTR_1126b1cb0);
    func_0x000107c61174(plVar14);
    func_0x000107c5fadc(ppuVar15,puVar16);
    func_0x000107c6142c(puVar16);
    uVar4 = 0x616c7069746c756d;
    func_0x000107c5fadc(0x616c7069746c756d,0xeb00000000726579);
    func_0x000107c46c6c(puVar6);
    func_0x000107c61170(plVar14);
    func_0x000107c61170(ppuVar15);
    func_0x000107c61170(uVar4);
    func_0x000107c5d7e4();
    func_0x000107c61180();
    func_0x000107c4fba8();
    func_0x000107c615e8(lVar3);
    func_0x000107c615e8(lVar2);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(pcVar7);
    func_0x000107c61170(plVar14);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar9);
  }
  return;
}



/* Entry: 10334bc84; end: 10334bd0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334bc84(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = 0;
  FUN_10334d9c0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f5b720) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f5b728) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10334bd0c; end: 10334bd13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334bd0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = 0;
  FUN_10334d9c0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112f5b720) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112f5b728) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c615f0(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 10334bd14; end: 10334bd87;  */

void FUN_10334bd14(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 10334bd88; end: 10334bda7;  */

void FUN_10334bd88(void)

{
  FUN_10334b7e0();
  return;
}



/* Entry: 10334bda8; end: 10334bdaf;  */

undefined8 FUN_10334bda8(void)

{
  return 0;
}



/* Entry: 10334bdb0; end: 10334bdcf;  */

void FUN_10334bdb0(void)

{
  func_0x000107c61168(&PTR_PTR_112f5b5d0);
  return;
}



/* Entry: 10334bdd0; end: 10334bde3;  */

bool FUN_10334bdd0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10334bde4; end: 10334be8f;  */

void FUN_10334bde4(void)

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



/* Entry: 10334be90; end: 10334c2bf;  */

void FUN_10334be90(undefined8 *param_1,long param_2,undefined8 ****param_3,undefined8 ****param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  byte bVar13;
  bool bVar14;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar3 = param_2;
  ppppuVar7 = param_3;
  func_0x00010912c758();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5faec();
  ppppuVar11 = ppppuVar7;
  func_0x000107c61170(lVar3);
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_10334bfe8:
    pppuStack_78 = (undefined8 ****)0x0;
    pppuStack_80 = (undefined8 ****)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
LAB_10334bff4:
    func_0x000107c6142c(ppppuVar7);
    ppppuVar12 = ppppuVar11;
LAB_10334bff8:
    ppppuVar6 = &pppuStack_80;
    func_0x00010006e7f4();
  }
  else {
    func_0x000107c61434(param_2);
    ppppuVar11 = ppppuVar7;
    func_0x000100029284(lVar4);
    if (((ulong)ppppuVar11 & 1) == 0) {
      func_0x000107c6142c(param_2);
      goto LAB_10334bfe8;
    }
    ppppuVar12 = &pppuStack_80;
    func_0x0001000bb420(*(long *)(param_2 + 0x38) + lVar4 * 0x20);
    func_0x000107c6142c(ppppuVar7);
    func_0x000107c6142c(param_2);
    if (lStack_68 == 0) goto LAB_10334bff8;
    uVar5 = 0x112d472a8;
    func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
    puVar2 = PTR___sypN_11034f1a8;
    ppppuVar6 = &pppuStack_90;
    ppppuVar12 = &pppuStack_80;
    func_0x000107c6147c(ppppuVar6,ppppuVar12,PTR___sypN_11034f1a8 + 8,uVar5,6);
    ppppuVar10 = (undefined8 ****)pppuStack_90;
    if (((ulong)ppppuVar6 & 1) == 0) goto LAB_10334c000;
    func_0x00010912c784();
    func_0x000107c61180();
    ppppuVar7 = ppppuVar6;
    func_0x000107c5faec();
    ppppuVar11 = ppppuVar12;
    func_0x000107c61170(ppppuVar6);
    if (ppppuVar10[2] == (undefined8 ***)0x0) {
      pppuStack_78 = (undefined8 ****)0x0;
      pppuStack_80 = (undefined8 ****)0x0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x000107c61434(ppppuVar10);
      ppppuVar11 = ppppuVar12;
      func_0x000100029284(ppppuVar7);
      if (((ulong)ppppuVar11 & 1) == 0) {
        func_0x000107c6142c(ppppuVar10);
        pppuStack_78 = (undefined8 ****)0x0;
        pppuStack_80 = (undefined8 ****)0x0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        ppppuVar11 = &pppuStack_80;
        func_0x0001000bb420(ppppuVar10[7] + (long)ppppuVar7 * 4);
        func_0x000107c6142c(ppppuVar12);
        ppppuVar12 = ppppuVar10;
      }
    }
    func_0x000107c6142c(ppppuVar12);
    ppppuVar7 = ppppuVar10;
    if (lStack_68 == 0) goto LAB_10334bff4;
    ppppuVar8 = &pppuStack_90;
    ppppuVar12 = &pppuStack_80;
    func_0x000107c6147c(ppppuVar8,ppppuVar12,puVar2 + 8,PTR___sSSN_11034da80,6);
    ppppuVar7 = (undefined8 ****)pppuStack_88;
    ppppuVar6 = (undefined8 ****)pppuStack_90;
    if (((ulong)ppppuVar8 & 1) == 0) {
      func_0x000107c6142c();
      ppppuVar6 = ppppuVar10;
    }
    else {
      uVar1 = (ulong)pppuStack_90 & 0xffffffffffff;
      if (((ulong)pppuStack_88 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)pppuStack_88 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        func_0x00010912c7b0();
        func_0x000107c61180();
        ppppuVar9 = ppppuVar8;
        func_0x000107c5faec();
        ppppuVar11 = ppppuVar12;
        func_0x000107c61170(ppppuVar8);
        if (ppppuVar10[2] == (undefined8 ***)0x0) {
          pppuStack_78 = (undefined8 ****)0x0;
          pppuStack_80 = (undefined8 ****)0x0;
          lStack_68 = 0;
          uStack_70 = 0;
        }
        else {
          func_0x000107c61434(ppppuVar10);
          ppppuVar11 = ppppuVar12;
          func_0x000100029284(ppppuVar9);
          if (((ulong)ppppuVar11 & 1) == 0) {
            func_0x000107c6142c(ppppuVar10);
            pppuStack_78 = (undefined8 ****)0x0;
            pppuStack_80 = (undefined8 ****)0x0;
            lStack_68 = 0;
            uStack_70 = 0;
          }
          else {
            ppppuVar11 = &pppuStack_80;
            func_0x0001000bb420(ppppuVar10[7] + (long)ppppuVar9 * 4);
            func_0x000107c6142c(ppppuVar12);
            ppppuVar12 = ppppuVar10;
          }
        }
        puVar2 = PTR___sypN_11034f1a8;
        func_0x000107c6142c(ppppuVar12);
        func_0x000107c6142c(ppppuVar10);
        if (lStack_68 == 0) goto LAB_10334bff4;
        ppppuVar11 = &pppuStack_90;
        ppppuVar12 = &pppuStack_80;
        func_0x000107c6147c(ppppuVar11,ppppuVar12,puVar2 + 8,PTR___sSSN_11034da80,6);
        if (((ulong)ppppuVar11 & 1) == 0) goto LAB_10334c1f4;
        ppppuVar11 = (undefined8 ****)0x112d3cde0;
        func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
        func_0x000107c61538();
        func_0x000107c604c4();
        func_0x000107c6142c();
        if (ppppuVar11 == (undefined8 ****)0x0) {
          bVar14 = true;
        }
        else {
          ppppuVar12 = (undefined8 ****)pppuStack_90;
          if (ppppuVar11 != (undefined8 ****)0x1) goto LAB_10334c1f4;
          bVar14 = false;
        }
        if (param_4 == (undefined8 ****)0x0) {
LAB_10334c230:
          func_0x00010011df08();
          ppppuVar12 = (undefined8 ****)pppuStack_88;
          func_0x000107c61180();
          param_3 = ppppuVar12;
          ppppuVar10 = (undefined8 ****)pppuStack_90;
          func_0x000107c5faec();
          func_0x000107c61170(ppppuVar12);
          param_4 = ppppuVar10;
          func_0x000107c5fb1c();
          func_0x000107c6142c(ppppuVar10);
        }
        else {
          uVar1 = (ulong)param_3 & 0xffffffffffff;
          if (((ulong)param_4 & 0x2000000000000000) != 0) {
            uVar1 = (ulong)param_4 >> 0x38 & 0xf;
          }
          if (uVar1 == 0) goto LAB_10334c230;
          func_0x000107c61434(param_4);
        }
        if (bVar14) {
          FUN_10334c4cc(ppppuVar6,ppppuVar7);
        }
        else {
          func_0x0001000285a8(0x112e29388,&UNK_10da117e8);
          pppuStack_80 = ppppuVar6;
          pppuStack_78 = ppppuVar7;
          ppppuVar6 = &pppuStack_80;
          func_0x000104888f7c();
        }
        func_0x000107c6142c(ppppuVar7);
        bVar13 = 1;
        ppppuVar12 = ppppuVar11;
        goto LAB_10334c01c;
      }
      func_0x000107c6142c(ppppuVar10);
LAB_10334c1f4:
      func_0x000107c6142c();
      ppppuVar6 = ppppuVar7;
    }
  }
LAB_10334c000:
  FUN_10334c2c0();
  bVar13 = (byte)((ulong)ppppuVar12 >> 7) & 2;
  func_0x000107c61434(param_4);
LAB_10334c01c:
  *param_1 = param_3;
  param_1[1] = param_4;
  *(byte *)(param_1 + 2) = bVar13;
  param_1[3] = ppppuVar6;
  *(byte *)(param_1 + 4) = (byte)ppppuVar12 & 1;
  return;
}



/* Entry: 10334c2c0; end: 10334c4cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10334c2c0(void)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined *puStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined2 uStack_52;
  undefined *puStack_50;
  ulong uStack_48;
  
  puStack_50 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_52 = 0;
  func_0x0001000d224c(&lStack_60);
  if (lStack_60 == 0) {
LAB_10334c454:
    puVar8 = (undefined *)0x0;
    pcVar9 = (code *)0x0;
  }
  else {
    lVar4 = lStack_60;
    func_0x000107c501d0();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_60);
    if (lVar4 == 0) goto LAB_10334c454;
    puVar8 = &UNK_110641440;
    func_0x000107c613fc(&UNK_110641440,0x28,7);
    *(undefined ***)(puVar8 + 0x10) = &puStack_50;
    *(undefined2 **)(puVar8 + 0x18) = &uStack_52;
    *(long *)(puVar8 + 0x20) = (long)&uStack_52 + 1;
    puVar5 = &UNK_110641468;
    func_0x000107c613fc(&UNK_110641468,0x20,7);
    pcVar9 = FUN_10334d258;
    *(code **)(puVar5 + 0x10) = FUN_10334d258;
    *(undefined **)(puVar5 + 0x18) = puVar8;
    uStack_70 = 0x10334d280;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1019dec60;
    puStack_78 = &UNK_110641480;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_68);
    func_0x000107c4c590(lVar4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar4);
    uVar3 = uStack_48;
    puVar5 = puStack_50;
    if (uStack_48 != 0) {
      uVar1 = (ulong)puStack_50 & 0xffffffffffff;
      if ((uStack_48 & 0x2000000000000000) != 0) {
        uVar1 = uStack_48 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        func_0x0001000285a8(0x112e29388,&UNK_10da117e8);
        puStack_90 = puVar5;
        uStack_88 = uVar3;
        ppuVar6 = &puStack_90;
        func_0x000104888f7c(ppuVar6);
        uVar7 = 0x100;
        if ((char)uStack_52 == '\0') {
          uVar7 = 0;
        }
        pcVar9 = FUN_10334d258;
        goto LAB_10334c488;
      }
      pcVar9 = FUN_10334d258;
    }
  }
  func_0x0001000285a8(0x112e29388,&UNK_10da117e8);
  puStack_90 = (undefined *)0x0;
  uStack_88 = 0;
  ppuVar6 = &puStack_90;
  func_0x000104888f7c(ppuVar6);
  uVar7 = 0;
LAB_10334c488:
  bVar2 = uStack_52._1_1_;
  func_0x000107c6142c(uStack_48);
  func_0x0001032e7e70(pcVar9,puVar8);
  auVar10._8_4_ = uVar7 | bVar2;
  auVar10._0_8_ = ppuVar6;
  auVar10._12_4_ = 0;
  return auVar10;
}



/* Entry: 10334c4cc; end: 10334cea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10334c4cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  ppuVar9 = &puStack_90;
  func_0x0001000d224c(&puStack_90);
  puVar1 = puStack_90;
  if (puStack_90 == (undefined *)0x0) {
    func_0x0001000285a8(0x112e29388,&UNK_10da117e8);
    puStack_90 = (undefined *)0x0;
    uStack_88 = 0;
    func_0x000104888f7c(&puStack_90);
  }
  else {
    func_0x0001000285a8(0x112f5b710,&UNK_10dbb3b70);
    func_0x000107c613fc();
    lVar2 = 0;
    func_0x00010095c380();
    uVar3 = 0;
    func_0x000104522c9c(0);
    lVar4 = param_1;
    func_0x00010452281c(param_1,param_2);
    lVar5 = lVar4;
    func_0x0001011d1d1c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x18) = 3;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    *(long *)(lVar5 + 0x20) = lVar4;
    func_0x000107c61174(lVar4);
    lVar6 = lVar5;
    func_0x000107c5fc48(lVar5,uVar3);
    func_0x000107c61574(lVar5);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f5b680);
    func_0x000107c614f0(uVar3);
    func_0x000100bcb214();
    puVar7 = &UNK_1106413f0;
    func_0x000107c613fc(&UNK_1106413f0,0x28,7);
    *(long *)(puVar7 + 0x10) = param_1;
    *(undefined8 *)(puVar7 + 0x18) = param_2;
    *(long *)(puVar7 + 0x20) = lVar2;
    uStack_70 = 0x10334d230;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1011d1310;
    puStack_78 = &UNK_110641408;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = puStack_68;
    func_0x000107c61434(param_2);
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(puVar7);
    func_0x000107c40698(puVar1);
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(lVar4);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(uVar3);
    ppuVar9 = *(undefined ***)(lVar2 + 0x10);
    func_0x000107c6157c(ppuVar9);
    func_0x000107c61574(lVar2);
  }
  return (undefined1 *)ppuVar9;
}



/* Entry: 10334cea4; end: 10334d027;  */

void FUN_10334cea4(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long *in_x7;
  undefined1 *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  if (param_3 == 0) {
    lVar3 = in_x7[1];
    *in_x7 = 0;
    in_x7[1] = 0;
    func_0x000107c6142c(lVar3);
    uVar1 = 0;
  }
  else {
    lVar3 = param_3;
    func_0x000107c40674();
    func_0x000107c61180();
    if (lVar3 == 0) {
      lVar3 = in_x7[1];
      *in_x7 = 0;
      in_x7[1] = 0;
    }
    else {
      lVar2 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      lVar3 = in_x7[1];
      *in_x7 = lVar2;
      in_x7[1] = param_2;
    }
    func_0x000107c6142c(lVar3);
    func_0x000107c4a0dc();
    uVar1 = (undefined1)param_3;
  }
  *in_stack_00000000 = uVar1;
  func_0x000107c501d8();
  func_0x000107c61180();
  if (param_1 != 0) {
    puVar4 = &UNK_1106414b8;
    func_0x000107c613fc(&UNK_1106414b8,0x18,7);
    *(undefined8 *)(puVar4 + 0x10) = in_stack_00000008;
    puVar5 = &UNK_1106414e0;
    func_0x000107c613fc(&UNK_1106414e0,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_10334d2a4;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    pcStack_60 = FUN_10334d2b4;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100de6bdc;
    puStack_68 = &UNK_1106414f8;
    puStack_58 = puVar5;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c4c79c(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10334d028; end: 10334d097;  */

void FUN_10334d028(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uStack_30;
  ulong uStack_28;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uStack_30 = *(ulong *)(param_1 + 0x20);
    uVar2 = *(ulong *)(param_1 + 0x28);
    uVar1 = uStack_30 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uStack_28 = uVar2;
      func_0x000107c61434(uVar2);
      func_0x000100b60084(&uStack_30);
      func_0x000107c6142c(uVar2);
      return;
    }
  }
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000100b60084(&uStack_30);
  return;
}



/* Entry: 10334d098; end: 10334d0f7; -[_TtC25LensMultiplayerURIHandler32LensMultiplayerInvitationHandler init] */

void FUN_10334d098(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensMultiplayerURIHandler.LensMultiplayerInvitationHandler",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10334d0c4);
  (*pcVar1)();
}



/* Entry: 10334d0f8; end: 10334d15f; -[_TtC25LensMultiplayerURIHandler32LensMultiplayerInvitationHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334d0f8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5b668));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5b670));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5b678));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f5b680));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f5b688));
  return;
}



/* Entry: 10334d160; end: 10334d17f;  */

void FUN_10334d160(void)

{
  func_0x000107c61168(&PTR_PTR_1128cfd70);
  return;
}



/* Entry: 10334d180; end: 10334d1af;  */

void FUN_10334d180(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 10334d1b0; end: 10334d207;  */

void FUN_10334d1b0(ulong param_1)

{
  long unaff_x20;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ushort uStack_28;
  
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_28 = 0x100;
  if ((param_1 & 1) == 0) {
    uStack_28 = 0;
  }
  uStack_28 = uStack_28 | *(byte *)(unaff_x20 + 0x60);
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18),&uStack_48);
  return;
}



/* Entry: 10334d208; end: 10334d257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334d208(char param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    (*pcVar2)(param_1 != '\0');
  }
  else {
    uVar9 = *(undefined8 *)(lVar4 + _DAT_112f5b680);
    uVar5 = uVar9;
    func_0x000107c614f0();
    puVar6 = &UNK_110641378;
    func_0x000107c613fc(&UNK_110641378,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,lVar4);
    puVar7 = &UNK_1106413c8;
    func_0x000107c613fc(&UNK_1106413c8,0x40,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(code **)(puVar7 + 0x18) = pcVar2;
    *(undefined8 *)(puVar7 + 0x20) = uVar1;
    puVar7[0x28] = param_1 != '\0';
    puVar7[0x29] = param_1;
    *(undefined8 *)(puVar7 + 0x30) = uVar3;
    *(undefined8 *)(puVar7 + 0x38) = uVar8;
    func_0x000107c615f0(uVar9);
    func_0x000107c6157c(puVar6);
    func_0x000107c6157c(uVar1);
    func_0x000107c61434(uVar8);
    func_0x00010090569c(0x10334d218,puVar7,uVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61574(puVar6);
    func_0x000107c615e8(uVar9);
    func_0x000107c61574(puVar7);
  }
  return;
}



/* Entry: 10334d258; end: 10334d2a3;  */

void FUN_10334d258(void)

{
  FUN_10334cea4();
  return;
}



/* Entry: 10334d2a4; end: 10334d2b3;  */

void FUN_10334d2a4(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 10334d2b4; end: 10334d2d3;  */

void FUN_10334d2b4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10334d2d4; end: 10334d2df;  */

void FUN_10334d2d4(long param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_bridgeObjectRelease_11034f258;
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010334d4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10334d2e0; end: 10334d323;  */

undefined8 * FUN_10334d2e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 10334d324; end: 10334d39f;  */

undefined8 * FUN_10334d324(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  return param_1;
}



/* Entry: 10334d3a0; end: 10334d3f3;  */

undefined8 * FUN_10334d3a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  return param_1;
}



/* Entry: 10334d3f4; end: 10334d4c3;  */

int FUN_10334d3f4(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x22) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10334d4c4; end: 10334d547;  */

void FUN_10334d4c4(long param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010334d4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10334d548; end: 10334d5bb;  */

undefined8 * FUN_10334d548(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 10334d5bc; end: 10334d60f;  */

undefined8 * FUN_10334d5bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61574(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 10334d610; end: 10334d813;  */

int FUN_10334d610(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10334d814; end: 10334d853;  */

void FUN_10334d814(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5b718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb3bec;
  func_0x000107c61520(&UNK_10dbb3bec,&UNK_1106416b0);
  puRam0000000112f5b718 = puVar1;
  return;
}



/* Entry: 10334d854; end: 10334d86b;  */

void FUN_10334d854(long param_1,long param_2)

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



/* Entry: 10334d86c; end: 10334d8cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334d86c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5b720) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f5b728) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10334d8d0; end: 10334d927;  */

void FUN_10334d8d0(undefined8 param_1,undefined8 param_2,code *param_3)

{
  (*param_3)(param_1,param_2,0);
  return;
}



/* Entry: 10334d928; end: 10334d987; -[_TtC25LensMultiplayerURIHandler35LensMultiplayerPlatformTokenHandler init] */

void FUN_10334d928(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensMultiplayerURIHandler.LensMultiplayerPlatformTokenHandler",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10334d954);
  (*pcVar1)();
}



/* Entry: 10334d988; end: 10334d9bf; -[_TtC25LensMultiplayerURIHandler35LensMultiplayerPlatformTokenHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334d988(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5b728));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f5b720));
  return;
}



/* Entry: 10334d9c0; end: 10334d9df;  */

void FUN_10334d9c0(void)

{
  func_0x000107c61168(&PTR_PTR_1128cfe50);
  return;
}



/* Entry: 10334d9e0; end: 10334d9ff;  */

void FUN_10334d9e0(void)

{
  code *in_x7;
  
  (*in_x7)();
  return;
}



/* Entry: 10334da00; end: 10334dc1b;  */

void FUN_10334da00(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_110 [104];
  ulong auStack_a8 [9];
  
  func_0x00010912c994();
  func_0x000107c61180();
  uVar5 = param_1;
  func_0x000107c5faec();
  uVar8 = param_2;
  func_0x000107c61170();
  auStack_a8[0] = uVar5;
  auStack_a8[1] = param_2;
  func_0x00010912c9c0();
  func_0x000107c61180();
  uVar5 = param_1;
  func_0x000107c5faec();
  uVar9 = uVar8;
  func_0x000107c61170();
  auStack_a8[2] = uVar5;
  auStack_a8[3] = uVar8;
  func_0x00010912c9ec();
  func_0x000107c61180();
  uVar5 = param_1;
  func_0x000107c5faec();
  uVar8 = uVar9;
  func_0x000107c61170();
  auStack_a8[4] = uVar5;
  auStack_a8[5] = uVar9;
  func_0x00010912ca18();
  func_0x000107c61180();
  uVar5 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  auStack_a8[6] = uVar5;
  auStack_a8[7] = uVar8;
  func_0x0001000285a8(0x112d46b30,&UNK_10d917640);
  lVar6 = 4;
  func_0x000107c602e8();
  lVar15 = 0;
  lVar1 = lVar6 + 0x38;
  do {
    uVar5 = auStack_a8[lVar15 * 2];
    uVar3 = auStack_a8[lVar15 * 2 + 1];
    func_0x000107c6068c(auStack_110,*(undefined8 *)(lVar6 + 0x28));
    func_0x000107c61434(uVar3);
    puVar7 = auStack_110;
    func_0x000107c5fb58(auStack_110,uVar5,uVar3);
    func_0x000107c606a8();
    uVar13 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar14 = (ulong)puVar7 & (uVar13 ^ 0xffffffffffffffff);
    uVar10 = uVar14 >> 6;
    uVar11 = *(ulong *)(lVar1 + uVar10 * 8);
    uVar12 = 1L << (uVar14 & 0x3f);
    if ((uVar12 & uVar11) != 0) {
      do {
        puVar2 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar14 * 0x10);
        uVar10 = *puVar2;
        uVar11 = puVar2[1];
        if ((uVar10 == uVar5 && uVar11 == uVar3) ||
           (func_0x000107c605b8(uVar10,uVar11,uVar5,uVar3,0), (uVar10 & 1) != 0)) {
          func_0x000107c6142c(uVar3);
          goto LAB_10334db08;
        }
        uVar14 = uVar14 + 1 & ~uVar13;
        uVar10 = uVar14 >> 6;
        uVar11 = *(ulong *)(lVar1 + uVar10 * 8);
        uVar12 = 1L << (uVar14 & 0x3f);
      } while ((uVar12 & uVar11) != 0);
    }
    *(ulong *)(lVar1 + uVar10 * 8) = uVar12 | uVar11;
    puVar2 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar14 * 0x10);
    *puVar2 = uVar5;
    puVar2[1] = uVar3;
    if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10334dc1c);
      (*pcVar4)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
LAB_10334db08:
    lVar15 = lVar15 + 1;
    if (lVar15 == 4) {
      func_0x000107c61408(auStack_a8,4,PTR___sSSN_11034da80);
      lRam0000000112f5b838 = lVar6;
      return;
    }
  } while( true );
}



/* Entry: 10334dc1c; end: 10334dc9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10334dc1c(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long unaff_x20;
  long lStack_38;
  
  lVar1 = _DAT_112f5b770;
  uVar3 = (uint)*(byte *)(unaff_x20 + _DAT_112f5b770);
  if (*(byte *)(unaff_x20 + _DAT_112f5b770) == 2) {
    func_0x0001000d224c(&lStack_38);
    if (lStack_38 == 0) {
      uVar3 = 0;
    }
    else {
      lVar2 = lStack_38;
      func_0x000107c4a630();
      uVar3 = (uint)lVar2;
      func_0x000107c615e8(lStack_38);
    }
    *(char *)(unaff_x20 + lVar1) = (char)uVar3;
  }
  return uVar3 & 1;
}



/* Entry: 10334dc9c; end: 10334e06f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10334dc9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5b758) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f5b760) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f5b768) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f5b770) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5b778);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5b780);
  *(undefined8 *)((long)puVar1 + 0x41) = 0;
  *(undefined8 *)((long)puVar1 + 0x39) = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5b788) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f5b790) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f5b798) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f5b7a0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f5b7a8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f5b7b0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f5b7b8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f5b7c0) = param_9;
  FUN_1033545ac(param_10,unaff_x20 + _DAT_112f5b7c8,0x112e60330,&UNK_10dbb3c50);
  FUN_1033545ac(param_11,unaff_x20 + _DAT_112f5b7d0,0x112f5b7d8,&UNK_10dbb3d50);
  *(undefined8 *)(unaff_x20 + _DAT_112f5b7e0) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112f5b7e8) = param_13;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_12);
  func_0x000107c615f0(param_13);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112f5b7f0) = puVar2;
  puVar3 = auStack_78;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x000107c61180();
  uVar4 = param_2;
  func_0x000107c4da88(param_2);
  func_0x000107c61180();
  puVar2 = &UNK_110641708;
  func_0x000107c613fc(&UNK_110641708,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,puVar3);
  pcStack_88 = FUN_10334e10c;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_101218f4c;
  puStack_90 = &UNK_110641720;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar2;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_80);
  uVar6 = uVar4;
  func_0x000107c5c320(uVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c3e924(uVar6);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_5);
  func_0x000107c61574(param_6);
  func_0x000107c61574(param_7);
  func_0x000107c61574(param_8);
  func_0x000107c61574(param_9);
  func_0x000107c61574(param_12);
  func_0x000107c615e8(param_13);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar6);
  FUN_103354944(param_11,0x112f5b7d8,&UNK_10dbb3d50);
  FUN_103354944(param_10,0x112e60330,&UNK_10dbb3c50);
  return puVar3;
}



/* Entry: 10334e070; end: 10334e10b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334e070(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uStack_40 = 0;
    uVar1 = 0;
    FUN_103354994(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    func_0x000107c5fc50(param_1,&uStack_40,uVar1);
    uVar1 = *(undefined8 *)(param_2 + _DAT_112f5b758);
    *(undefined8 *)(param_2 + _DAT_112f5b758) = uStack_40;
    func_0x000107c6142c(uVar1);
    FUN_10334e114();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10334e10c; end: 10334e113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334e10c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uStack_40 = 0;
    uVar2 = 0;
    FUN_103354994(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    func_0x000107c5fc50(param_1,&uStack_40,uVar2);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f5b758);
    *(undefined8 *)(lVar1 + _DAT_112f5b758) = uStack_40;
    func_0x000107c6142c(uVar2);
    FUN_10334e114();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10334e114; end: 10334e1f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334e114(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5b780);
  uStack_48 = puVar1[5];
  uStack_50 = puVar1[4];
  uStack_40 = puVar1[6];
  uStack_38 = (undefined1)puVar1[7];
  uStack_2f = *(undefined8 *)((long)puVar1 + 0x41);
  uStack_37 = (undefined7)*(undefined8 *)((long)puVar1 + 0x39);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x39) >> 0x38);
  uStack_68 = puVar1[1];
  uStack_70 = *puVar1;
  uStack_58 = puVar1[3];
  uStack_60 = puVar1[2];
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((long)puVar1 + 0x41) = 0;
  *(undefined8 *)((long)puVar1 + 0x39) = 0;
  FUN_103354944(&uStack_70,0x112f5b820,&UNK_10dbb3ca8);
  *(undefined1 *)(unaff_x20 + _DAT_112f5b768) = 0;
  func_0x000104875e28(&lStack_80);
  lVar2 = lStack_80;
  if (lStack_80 != 0) {
    func_0x000107c4acd0(lStack_80);
    func_0x000107c615e8(lVar2);
  }
  func_0x000104875e28(&lStack_80);
  if (lStack_80 != 0) {
    func_0x000107c614f0(lStack_80);
    (**(code **)(lStack_78 + 0x10))();
    func_0x000107c615e8(lStack_80);
  }
  return;
}



/* Entry: 10334e1f8; end: 10334e213;  */

void FUN_10334e1f8(long param_1,long param_2)

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



/* Entry: 10334e214; end: 10334e857;  */

void FUN_10334e214(long param_1,code *param_2,long param_3,code *param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  code *pcVar9;
  code *pcVar10;
  code *unaff_x19;
  long unaff_x20;
  code *pcVar11;
  undefined1 *unaff_x21;
  code *unaff_x22;
  long unaff_x23;
  code *unaff_x24;
  code *unaff_x25;
  undefined1 *unaff_x26;
  code *unaff_x27;
  code *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    pcVar10 = param_4;
    *(code **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(code **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(code **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(code **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(code **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x80);
    func_0x000107c61428(param_1 + 0x10,puVar6,0,0);
    unaff_x20 = param_1 + 0x10;
    func_0x000107c61618();
    pcVar11 = pcVar10;
    if (unaff_x20 == 0) {
      func_0x000107c498cc();
      func_0x000107c61180();
      (*param_2)();
      unaff_x19 = pcVar11;
LAB_10334e768:
      func_0x000107c61170(pcVar11);
      unaff_x20 = param_3;
      unaff_x28 = param_2;
    }
    else {
      *(long *)((long)register0x00000008 + -0xd8) = param_3;
      pcVar9 = pcVar10;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      unaff_x24 = pcVar9;
      func_0x000107c5faec();
      func_0x000107c61170(pcVar9);
      puVar8 = puVar6;
      FUN_10334e864(unaff_x24,puVar6);
      func_0x000107c6142c(puVar6);
      pcVar9 = pcVar10;
      func_0x000107c3eb80();
      func_0x000107c61180();
      unaff_x23 = unaff_x20;
      if (pcVar9 != (code *)0x0) {
        pcVar2 = pcVar9;
        func_0x000107c5ee30();
        func_0x000107c61170(pcVar9);
        puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        func_0x000107c61168();
        pcVar9 = pcVar2;
        func_0x000107c5ee20(pcVar2,puVar8);
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
        func_0x000107c3ab8c();
        func_0x000107c61180();
        func_0x000107c61170(pcVar9);
        uVar4 = *(undefined8 *)((long)register0x00000008 + -0xc0);
        func_0x000107c61174(uVar4);
        if (puVar3 == (undefined *)0x0) {
          uVar5 = uVar4;
          func_0x000107c5ed30();
          func_0x000107c61170(uVar4);
          func_0x000107c61654();
          func_0x00010006c090(pcVar2,puVar8);
          func_0x000107c614ac(uVar5);
          *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
        }
        else {
          func_0x000107c60234((undefined1 *)((long)register0x00000008 + -0xa0),puVar3);
          func_0x00010006c090(pcVar2,puVar8);
          func_0x000107c615e8(puVar3);
        }
        *(undefined8 *)((long)register0x00000008 + -0xb8) =
             *(undefined8 *)((long)register0x00000008 + -0x98);
        *(undefined8 *)((long)register0x00000008 + -0xc0) =
             *(undefined8 *)((long)register0x00000008 + -0xa0);
        *(undefined8 *)((long)register0x00000008 + -0xa8) =
             *(undefined8 *)((long)register0x00000008 + -0x88);
        *(undefined8 *)((long)register0x00000008 + -0xb0) =
             *(undefined8 *)((long)register0x00000008 + -0x90);
        if (*(long *)((long)register0x00000008 + -0xa8) == 0) {
          FUN_103354944((undefined1 *)((long)register0x00000008 + -0xc0),0x112d387f8,&UNK_10d902650)
          ;
          goto LAB_10334e498;
        }
        uVar4 = 0x112d472a8;
        func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
        puVar3 = PTR___sypN_11034f1a8;
        puVar6 = (undefined1 *)((long)register0x00000008 + -0xd0);
        puVar8 = (undefined1 *)((long)register0x00000008 + -0xc0);
        func_0x000107c6147c(puVar6,puVar8,PTR___sypN_11034f1a8 + 8,uVar4,6);
        if ((((ulong)puVar6 & 1) == 0) ||
           (unaff_x21 = *(undefined1 **)((long)register0x00000008 + -0xd0),
           unaff_x21 == (undefined1 *)0x0)) goto LAB_10334e498;
        puVar6 = unaff_x21;
        func_0x000107c61434(unaff_x21);
        func_0x00010912c5f8();
        func_0x000107c61180();
        puVar7 = puVar6;
        func_0x000107c5faec();
        func_0x000107c61170(puVar6);
        if (*(long *)(unaff_x21 + 0x10) == 0) {
LAB_10334e524:
          *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
        }
        else {
          func_0x000107c61434(unaff_x21);
          puVar6 = puVar8;
          func_0x000100029284(puVar7);
          if (((ulong)puVar6 & 1) == 0) {
            func_0x000107c6142c(unaff_x21);
            goto LAB_10334e524;
          }
          func_0x0001000bb420(*(long *)(unaff_x21 + 0x38) + (long)puVar7 * 0x20,
                              (undefined1 *)((long)register0x00000008 + -0xa0));
          func_0x000107c6142c(puVar8);
          puVar8 = unaff_x21;
        }
        func_0x000107c6142c(puVar8);
        func_0x000107c6142c(unaff_x21);
        if (*(long *)((long)register0x00000008 + -0x88) == 0) {
          unaff_x22 = (code *)0x0;
          goto LAB_10334e4a8;
        }
        puVar6 = (undefined1 *)((long)register0x00000008 + -0xc0);
        unaff_x26 = (undefined1 *)((long)register0x00000008 + -0xa0);
        func_0x000107c6147c(puVar6,unaff_x26,puVar3 + 8,PTR___sSSN_11034da80,6);
        if (((ulong)puVar6 & 1) != 0) {
          unaff_x27 = *(code **)((long)register0x00000008 + -0xc0);
          puVar6 = *(undefined1 **)((long)register0x00000008 + -0xb8);
          uVar1 = (ulong)unaff_x27 & 0xffffffffffff;
          if (((ulong)puVar6 & 0x2000000000000000) != 0) {
            uVar1 = (ulong)puVar6 >> 0x38 & 0xf;
          }
          puVar8 = unaff_x26;
          if (uVar1 == 0) {
            func_0x000107c6142c(puVar6);
            goto LAB_10334e584;
          }
          goto LAB_10334e5ac;
        }
LAB_10334e584:
        unaff_x22 = (code *)0x0;
        if (unaff_x24 != (code *)0x0) goto LAB_10334e4c4;
LAB_10334e58c:
        if ((int)unaff_x22 == 0) {
          unaff_x27 = (code *)0x0;
          puVar8 = unaff_x26;
          puVar6 = (undefined1 *)0x0;
          goto LAB_10334e5ac;
        }
        unaff_x27 = (code *)0x0;
        unaff_x26 = (undefined1 *)0x0;
LAB_10334e598:
        *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
LAB_10334e6a8:
        unaff_x19 = (code *)0x112d387f8;
        FUN_103354944((undefined1 *)((long)register0x00000008 + -0xa0),0x112d387f8,&UNK_10d902650);
LAB_10334e6c0:
        if (unaff_x26 != (undefined1 *)0x0) {
          uVar1 = (ulong)unaff_x27 & 0xffffffffffff;
          if (((ulong)unaff_x26 & 0x2000000000000000) != 0) {
            uVar1 = (ulong)unaff_x26 >> 0x38 & 0xf;
          }
          if (uVar1 != 0) {
            *(code **)((long)register0x00000008 + -0xe0) = param_2;
            unaff_x28 = (code *)0x0;
            if (unaff_x24 != (code *)0x0) goto LAB_10334e6e4;
            pcVar11 = (code *)0x0;
            unaff_x19 = (code *)0x0;
            pcVar9 = (code *)0x0;
            goto LAB_10334e77c;
          }
          func_0x000107c6142c(unaff_x26);
        }
        func_0x000107c6142c(unaff_x21);
        unaff_x19 = pcVar10;
        func_0x000107c498f4();
        func_0x000107c61180();
        param_3 = *(long *)((long)register0x00000008 + -0xd8);
        (*param_2)();
        func_0x000107c61170(unaff_x20);
        func_0x000107c61170(unaff_x19);
        pcVar11 = unaff_x24;
        goto LAB_10334e768;
      }
LAB_10334e498:
      unaff_x21 = (undefined1 *)0x0;
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
      unaff_x22 = (code *)0x1;
LAB_10334e4a8:
      unaff_x26 = (undefined1 *)0x112d387f8;
      FUN_103354944((undefined1 *)((long)register0x00000008 + -0xa0),0x112d387f8,&UNK_10d902650);
      if (unaff_x24 == (code *)0x0) goto LAB_10334e58c;
LAB_10334e4c4:
      pcVar9 = unaff_x24;
      func_0x000107c401fc();
      func_0x000107c61180();
      if (pcVar9 == (code *)0x0) goto LAB_10334e58c;
      pcVar2 = pcVar9;
      func_0x000107c3ddb8();
      func_0x000107c61180();
      func_0x000107c61170(pcVar9);
      if (pcVar2 == (code *)0x0) goto LAB_10334e58c;
      unaff_x27 = pcVar2;
      func_0x000107c5faec();
      puVar8 = unaff_x26;
      func_0x000107c61170(pcVar2);
      puVar6 = unaff_x26;
      if ((int)unaff_x22 != 0) goto LAB_10334e598;
LAB_10334e5ac:
      unaff_x26 = puVar6;
      puVar6 = unaff_x21;
      func_0x000107c61434(unaff_x21);
      func_0x00010912c67c();
      func_0x000107c61180();
      puVar7 = puVar6;
      func_0x000107c5faec();
      func_0x000107c61170(puVar6);
      if (*(long *)(unaff_x21 + 0x10) == 0) {
        *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
      }
      else {
        func_0x000107c61434(unaff_x21);
        puVar6 = puVar8;
        func_0x000100029284(puVar7);
        if (((ulong)puVar6 & 1) == 0) {
          func_0x000107c6142c(unaff_x21);
          *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
        }
        else {
          func_0x0001000bb420(*(long *)(unaff_x21 + 0x38) + (long)puVar7 * 0x20,
                              (undefined1 *)((long)register0x00000008 + -0xa0));
          func_0x000107c6142c(puVar8);
          puVar8 = unaff_x21;
        }
      }
      func_0x000107c6142c(puVar8);
      func_0x000107c6142c(unaff_x21);
      unaff_x22 = param_2;
      if (*(long *)((long)register0x00000008 + -0x88) == 0) goto LAB_10334e6a8;
      puVar6 = (undefined1 *)((long)register0x00000008 + -0xc0);
      unaff_x19 = (code *)((long)register0x00000008 + -0xa0);
      func_0x000107c6147c(puVar6,unaff_x19,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
      if ((((ulong)puVar6 & 1) == 0) || (*(char *)((long)register0x00000008 + -0xc0) != '\x01'))
      goto LAB_10334e6c0;
      if ((unaff_x24 == (code *)0x0) ||
         (pcVar9 = unaff_x24, func_0x000107c4a55c(), ((ulong)pcVar9 & 1) == 0)) {
        func_0x000107c6142c(unaff_x21);
        func_0x000107c6142c(unaff_x26);
        func_0x000107c4ce64();
        func_0x000107c61180();
        param_3 = *(long *)((long)register0x00000008 + -0xd8);
        (*param_2)();
        func_0x000107c61170(unaff_x20);
        func_0x000107c61170(unaff_x24);
        unaff_x19 = pcVar11;
        goto LAB_10334e768;
      }
      *(code **)((long)register0x00000008 + -0xe0) = param_2;
      unaff_x28 = (code *)0x1;
LAB_10334e6e4:
      unaff_x22 = unaff_x24;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      pcVar11 = unaff_x22;
      func_0x000107c5faec();
      func_0x000107c61170(unaff_x22);
      pcVar9 = unaff_x24;
      func_0x000107c4a55c(unaff_x24);
      if (unaff_x26 == (undefined1 *)0x0) {
        unaff_x27 = (code *)0x0;
        unaff_x26 = (undefined1 *)0xe000000000000000;
      }
LAB_10334e77c:
      FUN_10334e9ec(pcVar11,unaff_x19,pcVar9,unaff_x27,unaff_x26);
      func_0x000107c6142c(unaff_x26);
      func_0x000107c6142c(unaff_x19);
      FUN_10334eb80(pcVar10,unaff_x28,unaff_x24,unaff_x21,
                    *(undefined8 *)((long)register0x00000008 + -0xe0),
                    *(undefined8 *)((long)register0x00000008 + -0xd8));
      func_0x000107c61170(unaff_x20);
      func_0x000107c61170(unaff_x24);
      func_0x000107c6142c(unaff_x21);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68)) {
      return;
    }
    unaff_x30 = FUN_10334e858;
    func_0x000107c60e78();
    param_1 = *(long *)(unaff_x20 + 0x10);
    param_2 = *(code **)(unaff_x20 + 0x18);
    param_3 = *(long *)(unaff_x20 + 0x20);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
    param_4 = *(code **)(unaff_x20 + 0x28);
    unaff_x25 = pcVar10;
  } while( true );
}



/* Entry: 10334e858; end: 10334e863;  */

void FUN_10334e858(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  code *pcVar11;
  code *unaff_x19;
  long lVar12;
  code *pcVar13;
  long unaff_x20;
  undefined1 *unaff_x21;
  code *unaff_x22;
  long unaff_x23;
  code *unaff_x24;
  code *unaff_x25;
  undefined1 *unaff_x26;
  code *unaff_x27;
  code *pcVar14;
  code *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    lVar3 = *(long *)(unaff_x20 + 0x10);
    pcVar14 = *(code **)(unaff_x20 + 0x18);
    lVar12 = *(long *)(unaff_x20 + 0x20);
    pcVar2 = *(code **)(unaff_x20 + 0x28);
    *(code **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(code **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(code **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(code **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(code **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = (undefined1 *)((long)register0x00000008 + -0x80);
    func_0x000107c61428(lVar3 + 0x10,puVar8,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61618();
    pcVar13 = pcVar2;
    if (lVar3 == 0) {
      func_0x000107c498cc();
      func_0x000107c61180();
      (*pcVar14)();
      unaff_x19 = pcVar13;
LAB_10334e768:
      func_0x000107c61170(pcVar13);
    }
    else {
      *(long *)((long)register0x00000008 + -0xd8) = lVar12;
      pcVar11 = pcVar2;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      unaff_x24 = pcVar11;
      func_0x000107c5faec();
      func_0x000107c61170(pcVar11);
      puVar10 = puVar8;
      FUN_10334e864(unaff_x24,puVar8);
      func_0x000107c6142c(puVar8);
      pcVar11 = pcVar2;
      func_0x000107c3eb80();
      func_0x000107c61180();
      unaff_x23 = lVar3;
      if (pcVar11 != (code *)0x0) {
        pcVar4 = pcVar11;
        func_0x000107c5ee30();
        func_0x000107c61170(pcVar11);
        puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        func_0x000107c61168();
        pcVar11 = pcVar4;
        func_0x000107c5ee20(pcVar4,puVar10);
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
        func_0x000107c3ab8c();
        func_0x000107c61180();
        func_0x000107c61170(pcVar11);
        uVar6 = *(undefined8 *)((long)register0x00000008 + -0xc0);
        func_0x000107c61174(uVar6);
        if (puVar5 == (undefined *)0x0) {
          uVar7 = uVar6;
          func_0x000107c5ed30();
          func_0x000107c61170(uVar6);
          func_0x000107c61654();
          func_0x00010006c090(pcVar4,puVar10);
          func_0x000107c614ac(uVar7);
          *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
        }
        else {
          func_0x000107c60234((undefined1 *)((long)register0x00000008 + -0xa0),puVar5);
          func_0x00010006c090(pcVar4,puVar10);
          func_0x000107c615e8(puVar5);
        }
        *(undefined8 *)((long)register0x00000008 + -0xb8) =
             *(undefined8 *)((long)register0x00000008 + -0x98);
        *(undefined8 *)((long)register0x00000008 + -0xc0) =
             *(undefined8 *)((long)register0x00000008 + -0xa0);
        *(undefined8 *)((long)register0x00000008 + -0xa8) =
             *(undefined8 *)((long)register0x00000008 + -0x88);
        *(undefined8 *)((long)register0x00000008 + -0xb0) =
             *(undefined8 *)((long)register0x00000008 + -0x90);
        if (*(long *)((long)register0x00000008 + -0xa8) == 0) {
          FUN_103354944((undefined1 *)((long)register0x00000008 + -0xc0),0x112d387f8,&UNK_10d902650)
          ;
          goto LAB_10334e498;
        }
        uVar6 = 0x112d472a8;
        func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
        puVar5 = PTR___sypN_11034f1a8;
        puVar8 = (undefined1 *)((long)register0x00000008 + -0xd0);
        puVar10 = (undefined1 *)((long)register0x00000008 + -0xc0);
        func_0x000107c6147c(puVar8,puVar10,PTR___sypN_11034f1a8 + 8,uVar6,6);
        if ((((ulong)puVar8 & 1) == 0) ||
           (unaff_x21 = *(undefined1 **)((long)register0x00000008 + -0xd0),
           unaff_x21 == (undefined1 *)0x0)) goto LAB_10334e498;
        puVar8 = unaff_x21;
        func_0x000107c61434(unaff_x21);
        func_0x00010912c5f8();
        func_0x000107c61180();
        puVar9 = puVar8;
        func_0x000107c5faec();
        func_0x000107c61170(puVar8);
        if (*(long *)(unaff_x21 + 0x10) == 0) {
LAB_10334e524:
          *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
        }
        else {
          func_0x000107c61434(unaff_x21);
          puVar8 = puVar10;
          func_0x000100029284(puVar9);
          if (((ulong)puVar8 & 1) == 0) {
            func_0x000107c6142c(unaff_x21);
            goto LAB_10334e524;
          }
          func_0x0001000bb420(*(long *)(unaff_x21 + 0x38) + (long)puVar9 * 0x20,
                              (undefined1 *)((long)register0x00000008 + -0xa0));
          func_0x000107c6142c(puVar10);
          puVar10 = unaff_x21;
        }
        func_0x000107c6142c(puVar10);
        func_0x000107c6142c(unaff_x21);
        if (*(long *)((long)register0x00000008 + -0x88) == 0) {
          unaff_x22 = (code *)0x0;
          goto LAB_10334e4a8;
        }
        puVar8 = (undefined1 *)((long)register0x00000008 + -0xc0);
        unaff_x26 = (undefined1 *)((long)register0x00000008 + -0xa0);
        func_0x000107c6147c(puVar8,unaff_x26,puVar5 + 8,PTR___sSSN_11034da80,6);
        if (((ulong)puVar8 & 1) != 0) {
          unaff_x27 = *(code **)((long)register0x00000008 + -0xc0);
          puVar8 = *(undefined1 **)((long)register0x00000008 + -0xb8);
          uVar1 = (ulong)unaff_x27 & 0xffffffffffff;
          if (((ulong)puVar8 & 0x2000000000000000) != 0) {
            uVar1 = (ulong)puVar8 >> 0x38 & 0xf;
          }
          puVar10 = unaff_x26;
          if (uVar1 == 0) {
            func_0x000107c6142c(puVar8);
            goto LAB_10334e584;
          }
          goto LAB_10334e5ac;
        }
LAB_10334e584:
        unaff_x22 = (code *)0x0;
        if (unaff_x24 != (code *)0x0) goto LAB_10334e4c4;
LAB_10334e58c:
        if ((int)unaff_x22 == 0) {
          unaff_x27 = (code *)0x0;
          puVar10 = unaff_x26;
          puVar8 = (undefined1 *)0x0;
          goto LAB_10334e5ac;
        }
        unaff_x27 = (code *)0x0;
        unaff_x26 = (undefined1 *)0x0;
LAB_10334e598:
        *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
LAB_10334e6a8:
        unaff_x19 = (code *)0x112d387f8;
        FUN_103354944((undefined1 *)((long)register0x00000008 + -0xa0),0x112d387f8,&UNK_10d902650);
LAB_10334e6c0:
        if (unaff_x26 != (undefined1 *)0x0) {
          uVar1 = (ulong)unaff_x27 & 0xffffffffffff;
          if (((ulong)unaff_x26 & 0x2000000000000000) != 0) {
            uVar1 = (ulong)unaff_x26 >> 0x38 & 0xf;
          }
          if (uVar1 != 0) {
            *(code **)((long)register0x00000008 + -0xe0) = pcVar14;
            pcVar14 = (code *)0x0;
            if (unaff_x24 != (code *)0x0) goto LAB_10334e6e4;
            pcVar13 = (code *)0x0;
            unaff_x19 = (code *)0x0;
            pcVar11 = (code *)0x0;
            goto LAB_10334e77c;
          }
          func_0x000107c6142c(unaff_x26);
        }
        func_0x000107c6142c(unaff_x21);
        unaff_x19 = pcVar2;
        func_0x000107c498f4();
        func_0x000107c61180();
        lVar12 = *(long *)((long)register0x00000008 + -0xd8);
        (*pcVar14)();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(unaff_x19);
        pcVar13 = unaff_x24;
        goto LAB_10334e768;
      }
LAB_10334e498:
      unaff_x21 = (undefined1 *)0x0;
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
      unaff_x22 = (code *)0x1;
LAB_10334e4a8:
      unaff_x26 = (undefined1 *)0x112d387f8;
      FUN_103354944((undefined1 *)((long)register0x00000008 + -0xa0),0x112d387f8,&UNK_10d902650);
      if (unaff_x24 == (code *)0x0) goto LAB_10334e58c;
LAB_10334e4c4:
      pcVar11 = unaff_x24;
      func_0x000107c401fc();
      func_0x000107c61180();
      if (pcVar11 == (code *)0x0) goto LAB_10334e58c;
      pcVar4 = pcVar11;
      func_0x000107c3ddb8();
      func_0x000107c61180();
      func_0x000107c61170(pcVar11);
      if (pcVar4 == (code *)0x0) goto LAB_10334e58c;
      unaff_x27 = pcVar4;
      func_0x000107c5faec();
      puVar10 = unaff_x26;
      func_0x000107c61170(pcVar4);
      puVar8 = unaff_x26;
      if ((int)unaff_x22 != 0) goto LAB_10334e598;
LAB_10334e5ac:
      unaff_x26 = puVar8;
      puVar8 = unaff_x21;
      func_0x000107c61434(unaff_x21);
      func_0x00010912c67c();
      func_0x000107c61180();
      puVar9 = puVar8;
      func_0x000107c5faec();
      func_0x000107c61170(puVar8);
      if (*(long *)(unaff_x21 + 0x10) == 0) {
        *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
      }
      else {
        func_0x000107c61434(unaff_x21);
        puVar8 = puVar10;
        func_0x000100029284(puVar9);
        if (((ulong)puVar8 & 1) == 0) {
          func_0x000107c6142c(unaff_x21);
          *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
        }
        else {
          func_0x0001000bb420(*(long *)(unaff_x21 + 0x38) + (long)puVar9 * 0x20,
                              (undefined1 *)((long)register0x00000008 + -0xa0));
          func_0x000107c6142c(puVar10);
          puVar10 = unaff_x21;
        }
      }
      func_0x000107c6142c(puVar10);
      func_0x000107c6142c(unaff_x21);
      unaff_x22 = pcVar14;
      if (*(long *)((long)register0x00000008 + -0x88) == 0) goto LAB_10334e6a8;
      puVar8 = (undefined1 *)((long)register0x00000008 + -0xc0);
      unaff_x19 = (code *)((long)register0x00000008 + -0xa0);
      func_0x000107c6147c(puVar8,unaff_x19,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
      if ((((ulong)puVar8 & 1) == 0) || (*(char *)((long)register0x00000008 + -0xc0) != '\x01'))
      goto LAB_10334e6c0;
      if ((unaff_x24 == (code *)0x0) ||
         (pcVar11 = unaff_x24, func_0x000107c4a55c(), ((ulong)pcVar11 & 1) == 0)) {
        func_0x000107c6142c(unaff_x21);
        func_0x000107c6142c(unaff_x26);
        func_0x000107c4ce64();
        func_0x000107c61180();
        lVar12 = *(long *)((long)register0x00000008 + -0xd8);
        (*pcVar14)();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(unaff_x24);
        unaff_x19 = pcVar13;
        goto LAB_10334e768;
      }
      *(code **)((long)register0x00000008 + -0xe0) = pcVar14;
      pcVar14 = (code *)0x1;
LAB_10334e6e4:
      unaff_x22 = unaff_x24;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      pcVar13 = unaff_x22;
      func_0x000107c5faec();
      func_0x000107c61170(unaff_x22);
      pcVar11 = unaff_x24;
      func_0x000107c4a55c(unaff_x24);
      if (unaff_x26 == (undefined1 *)0x0) {
        unaff_x27 = (code *)0x0;
        unaff_x26 = (undefined1 *)0xe000000000000000;
      }
LAB_10334e77c:
      FUN_10334e9ec(pcVar13,unaff_x19,pcVar11,unaff_x27,unaff_x26);
      func_0x000107c6142c(unaff_x26);
      func_0x000107c6142c(unaff_x19);
      FUN_10334eb80(pcVar2,pcVar14,unaff_x24,unaff_x21,
                    *(undefined8 *)((long)register0x00000008 + -0xe0),
                    *(undefined8 *)((long)register0x00000008 + -0xd8));
      func_0x000107c61170(lVar3);
      func_0x000107c61170(unaff_x24);
      func_0x000107c6142c(unaff_x21);
      lVar12 = lVar3;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68)) {
      return;
    }
    unaff_x30 = FUN_10334e858;
    func_0x000107c60e78();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
    unaff_x20 = lVar12;
    unaff_x25 = pcVar2;
    unaff_x28 = pcVar14;
  } while( true );
}



/* Entry: 10334e864; end: 10334e9eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10334e864(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if ((param_2 != 0) && (uVar10 = *(ulong *)(unaff_x20 + _DAT_112f5b758), uVar10 != 0)) {
    uVar8 = uVar10 & 0xffffffffffffff8;
    uVar4 = param_2;
    if (uVar10 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar7 = uVar10;
      if (-1 < (long)uVar10) {
        uVar7 = uVar8;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(uVar10);
    if (uVar7 != 0) {
      uVar9 = 0;
      do {
        if ((uVar10 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar8 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10334e9d8);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(uVar10 + uVar9 * 8 + 0x20);
          func_0x000107c61174();
          uVar6 = uVar4;
        }
        else {
          uVar3 = uVar9;
          uVar6 = uVar10;
          func_0x000100ff3f88();
        }
        uVar1 = uVar9 + 1;
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10334e9d4);
          (*pcVar2)();
        }
        uVar4 = uVar3;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar5 = uVar4;
        func_0x000107c5faec();
        func_0x000107c61170(uVar4);
        if ((uVar5 == param_1) && (param_2 == uVar6)) {
          func_0x000107c6142c(uVar10);
          func_0x000107c6142c(uVar6);
          return uVar3;
        }
        uVar4 = uVar6;
        func_0x000107c605b8(uVar5,uVar6,param_1,param_2,0);
        func_0x000107c6142c(uVar6);
        if ((uVar5 & 1) != 0) {
          func_0x000107c6142c(uVar10);
          return uVar3;
        }
        func_0x000107c61170(uVar3);
        uVar9 = uVar9 + 1;
      } while (uVar1 != uVar7);
    }
    func_0x000107c6142c(uVar10);
  }
  return 0;
}



/* Entry: 10334e9ec; end: 10334eb7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334e9ec(undefined8 param_1,long param_2,ulong param_3,ulong param_4,ulong param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f5b7e8));
  func_0x000100bc7fa4();
  if (((*(byte *)(unaff_x20 + _DAT_112f5b760) & 1) == 0) && ((param_3 & 1) == 0)) {
    uVar2 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar2 = param_5 >> 0x38 & 0xf;
    }
    if ((uVar2 != 0) && (param_2 != 0)) {
      *(undefined1 *)(unaff_x20 + _DAT_112f5b760) = 1;
      func_0x000107c61434(param_2);
      func_0x0001000d224c(&lStack_58);
      if (lStack_58 == 0) {
        func_0x000107c6142c(param_2);
      }
      else {
        uVar1 = param_1;
        func_0x000107c5fadc(param_1,param_2);
        uVar2 = param_4;
        func_0x000107c5fadc(param_4,param_5);
        puVar3 = &UNK_110641bf8;
        func_0x000107c613fc(&UNK_110641bf8,0x30,7);
        *(undefined8 *)(puVar3 + 0x10) = param_1;
        *(long *)(puVar3 + 0x18) = param_2;
        *(ulong *)(puVar3 + 0x20) = param_4;
        *(ulong *)(puVar3 + 0x28) = param_5;
        uStack_68 = 0x103354990;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        puStack_78 = &UNK_100ff4e10;
        puStack_70 = &UNK_110641c10;
        ppuVar4 = &puStack_88;
        puStack_60 = puVar3;
        func_0x000107c60bc4(ppuVar4);
        puVar3 = puStack_60;
        func_0x000107c61434(param_5);
        func_0x000107c61574(puVar3);
        func_0x000107c4fa9c(lStack_58);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c615e8(lStack_58);
        func_0x000107c61170(uVar1);
        func_0x000107c61170(uVar2);
      }
    }
  }
  return;
}



/* Entry: 10334eb80; end: 10334f367;  */

/* WARNING: Possible PIC construction at 0x00010334ec44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334ec94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334edbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334edd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334ee1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334ef70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334f118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334ee90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334f294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334f220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334f2c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334f360: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010334f2c4) */
/* WARNING: Removing unreachable block (ram,0x00010334f2cc) */
/* WARNING: Removing unreachable block (ram,0x00010334f2f4) */
/* WARNING: Removing unreachable block (ram,0x00010334f2d4) */
/* WARNING: Removing unreachable block (ram,0x00010334f324) */
/* WARNING: Removing unreachable block (ram,0x00010334f224) */
/* WARNING: Removing unreachable block (ram,0x00010334f22c) */
/* WARNING: Removing unreachable block (ram,0x00010334f240) */
/* WARNING: Removing unreachable block (ram,0x00010334f29c) */
/* WARNING: Removing unreachable block (ram,0x00010334f2e8) */
/* WARNING: Removing unreachable block (ram,0x00010334f340) */
/* WARNING: Removing unreachable block (ram,0x00010334f2a0) */
/* WARNING: Removing unreachable block (ram,0x00010334f268) */
/* WARNING: Removing unreachable block (ram,0x00010334f234) */
/* WARNING: Removing unreachable block (ram,0x00010334f26c) */
/* WARNING: Removing unreachable block (ram,0x00010334f298) */
/* WARNING: Removing unreachable block (ram,0x00010334ee94) */
/* WARNING: Removing unreachable block (ram,0x00010334f11c) */
/* WARNING: Removing unreachable block (ram,0x00010334f12c) */
/* WARNING: Removing unreachable block (ram,0x00010334ef74) */
/* WARNING: Removing unreachable block (ram,0x00010334ee20) */
/* WARNING: Removing unreachable block (ram,0x00010334ee28) */
/* WARNING: Removing unreachable block (ram,0x00010334ee98) */
/* WARNING: Removing unreachable block (ram,0x00010334eea0) */
/* WARNING: Removing unreachable block (ram,0x00010334ee44) */
/* WARNING: Removing unreachable block (ram,0x00010334eea8) */
/* WARNING: Removing unreachable block (ram,0x00010334ef04) */
/* WARNING: Removing unreachable block (ram,0x00010334eeb8) */
/* WARNING: Removing unreachable block (ram,0x00010334ef1c) */
/* WARNING: Removing unreachable block (ram,0x00010334eee0) */
/* WARNING: Removing unreachable block (ram,0x00010334eee8) */
/* WARNING: Removing unreachable block (ram,0x00010334eef8) */
/* WARNING: Removing unreachable block (ram,0x00010334ef00) */
/* WARNING: Removing unreachable block (ram,0x00010334ef20) */
/* WARNING: Removing unreachable block (ram,0x00010334ef3c) */
/* WARNING: Removing unreachable block (ram,0x00010334efd4) */
/* WARNING: Removing unreachable block (ram,0x00010334efd8) */
/* WARNING: Removing unreachable block (ram,0x00010334efdc) */
/* WARNING: Removing unreachable block (ram,0x00010334efec) */
/* WARNING: Removing unreachable block (ram,0x00010334ef5c) */
/* WARNING: Removing unreachable block (ram,0x00010334eddc) */
/* WARNING: Removing unreachable block (ram,0x00010334edc0) */
/* WARNING: Removing unreachable block (ram,0x00010334edc4) */
/* WARNING: Removing unreachable block (ram,0x00010334ec98) */
/* WARNING: Removing unreachable block (ram,0x00010334ec9c) */
/* WARNING: Removing unreachable block (ram,0x00010334eca0) */
/* WARNING: Removing unreachable block (ram,0x00010334ed68) */
/* WARNING: Removing unreachable block (ram,0x00010334eca4) */
/* WARNING: Removing unreachable block (ram,0x00010334eccc) */
/* WARNING: Removing unreachable block (ram,0x00010334ed70) */
/* WARNING: Removing unreachable block (ram,0x00010334edf8) */
/* WARNING: Removing unreachable block (ram,0x00010334edfc) */
/* WARNING: Removing unreachable block (ram,0x00010334eda4) */
/* WARNING: Removing unreachable block (ram,0x00010334ec48) */
/* WARNING: Removing unreachable block (ram,0x00010334ed14) */
/* WARNING: Removing unreachable block (ram,0x00010334ed2c) */
/* WARNING: Removing unreachable block (ram,0x00010334ed30) */
/* WARNING: Removing unreachable block (ram,0x00010334ee64) */
/* WARNING: Removing unreachable block (ram,0x00010334ed34) */
/* WARNING: Removing unreachable block (ram,0x00010334ef78) */
/* WARNING: Removing unreachable block (ram,0x00010334ef84) */
/* WARNING: Removing unreachable block (ram,0x00010334ef9c) */
/* WARNING: Removing unreachable block (ram,0x00010334efa0) */
/* WARNING: Removing unreachable block (ram,0x00010334f14c) */
/* WARNING: Removing unreachable block (ram,0x00010334efa4) */
/* WARNING: Removing unreachable block (ram,0x00010334f178) */
/* WARNING: Removing unreachable block (ram,0x00010334f198) */
/* WARNING: Removing unreachable block (ram,0x00010334f1ac) */
/* WARNING: Removing unreachable block (ram,0x00010334f200) */
/* WARNING: Removing unreachable block (ram,0x00010334f1d0) */
/* WARNING: Removing unreachable block (ram,0x00010334f1a0) */
/* WARNING: Removing unreachable block (ram,0x00010334f1d4) */
/* WARNING: Removing unreachable block (ram,0x00010334f290) */
/* WARNING: Removing unreachable block (ram,0x00010334efcc) */
/* WARNING: Removing unreachable block (ram,0x00010334f154) */
/* WARNING: Removing unreachable block (ram,0x00010334ed60) */
/* WARNING: Removing unreachable block (ram,0x00010334ee70) */
/* WARNING: Removing unreachable block (ram,0x00010334ec74) */
/* WARNING: Removing unreachable block (ram,0x00010334f364) */
/* WARNING: Removing unreachable block (ram,0x00010334ee8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334eb80(undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                  code *param_5)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  long lStack_a8;
  
  lVar1 = 0;
  uStack_b4 = param_2;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f5b7e8);
  func_0x000107c614f0(uVar2);
  uStack_b0 = uVar2;
  func_0x000100bc7fa4();
  if (param_3 == 0) {
    func_0x000107c52014(param_1);
    func_0x000107c61180();
    (*param_5)();
  }
  else {
    func_0x000107c61174();
    uStack_c0 = param_1;
    lStack_a8 = param_3;
    func_0x000107c5d7e0(param_1);
    func_0x000107c61180();
    func_0x000107c5edb4(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10334f368; end: 10334f493; -[_TtC25LensMultiplayerURIHandler42LensProcessingURIServiceMultiplayerHandler handleWithRequest:completion:] */

/* WARNING: Possible PIC construction at 0x00010334f45c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010334f46c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010334f460) */
/* WARNING: Removing unreachable block (ram,0x00010334f470) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334f368(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1106417e8;
  func_0x000107c613fc(&UNK_1106417e8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112f5b7e8);
  func_0x000107c614f0(uVar4);
  puVar2 = &UNK_110641708;
  func_0x000107c613fc(&UNK_110641708,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_110641810;
  func_0x000107c613fc(&UNK_110641810,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = 0x103353b28;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x1033549e8,puVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 10334f494; end: 10334f627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334f494(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112f5b758);
    *(undefined8 *)(param_1 + _DAT_112f5b758) = 0;
    func_0x000107c6142c(uVar3);
    *(undefined1 *)(param_1 + _DAT_112f5b760) = 0;
    plVar1 = (long *)(param_1 + _DAT_112f5b778);
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar6 = plVar1[1];
      lVar4 = lVar5;
      func_0x000107c614f0(lVar5);
      pcVar7 = *(code **)(lVar6 + 8);
      func_0x000107c615f0(lVar5);
      (*pcVar7)(lVar4,lVar6);
      func_0x000107c615e8(lVar5);
      lVar5 = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    func_0x000107c615e8(lVar5);
    puVar2 = (undefined8 *)(param_1 + _DAT_112f5b780);
    uStack_a8 = puVar2[1];
    uStack_b0 = *puVar2;
    uStack_88 = puVar2[5];
    uStack_90 = puVar2[4];
    uStack_80 = puVar2[6];
    uStack_6f = *(undefined8 *)((long)puVar2 + 0x41);
    uStack_98 = puVar2[3];
    uStack_a0 = puVar2[2];
    uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)puVar2 + 0x39) >> 0x38);
    uStack_78 = (undefined1)puVar2[7];
    uStack_77 = (undefined7)((ulong)puVar2[7] >> 8);
    *(undefined8 *)((long)puVar2 + 0x41) = 0;
    *(undefined8 *)((long)puVar2 + 0x39) = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    FUN_103354944(&uStack_b0,0x112f5b820,&UNK_10dbb3ca8);
    func_0x000104875e28(&lStack_c0);
    lVar5 = lStack_c0;
    if (lStack_c0 != 0) {
      func_0x000107c4acd0(lStack_c0);
      func_0x000107c615e8(lVar5);
    }
    func_0x000104875e28(&lStack_c0);
    if (lStack_c0 != 0) {
      func_0x000107c614f0(lStack_c0);
      (**(code **)(lStack_b8 + 0x10))();
      func_0x000107c615e8(lStack_c0);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10334f628; end: 10334f62f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334f628(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  code *pcVar8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112f5b758);
    *(undefined8 *)(lVar3 + _DAT_112f5b758) = 0;
    func_0x000107c6142c(uVar4);
    *(undefined1 *)(lVar3 + _DAT_112f5b760) = 0;
    plVar1 = (long *)(lVar3 + _DAT_112f5b778);
    lVar6 = *plVar1;
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      lVar7 = plVar1[1];
      lVar5 = lVar6;
      func_0x000107c614f0(lVar6);
      pcVar8 = *(code **)(lVar7 + 8);
      func_0x000107c615f0(lVar6);
      (*pcVar8)(lVar5,lVar7);
      func_0x000107c615e8(lVar6);
      lVar6 = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    func_0x000107c615e8(lVar6);
    puVar2 = (undefined8 *)(lVar3 + _DAT_112f5b780);
    uStack_a8 = puVar2[1];
    uStack_b0 = *puVar2;
    uStack_88 = puVar2[5];
    uStack_90 = puVar2[4];
    uStack_80 = puVar2[6];
    uStack_6f = *(undefined8 *)((long)puVar2 + 0x41);
    uStack_98 = puVar2[3];
    uStack_a0 = puVar2[2];
    uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)puVar2 + 0x39) >> 0x38);
    uStack_78 = (undefined1)puVar2[7];
    uStack_77 = (undefined7)((ulong)puVar2[7] >> 8);
    *(undefined8 *)((long)puVar2 + 0x41) = 0;
    *(undefined8 *)((long)puVar2 + 0x39) = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    FUN_103354944(&uStack_b0,0x112f5b820,&UNK_10dbb3ca8);
    func_0x000104875e28(&lStack_c0);
    lVar6 = lStack_c0;
    if (lStack_c0 != 0) {
      func_0x000107c4acd0(lStack_c0);
      func_0x000107c615e8(lVar6);
    }
    func_0x000104875e28(&lStack_c0);
    if (lStack_c0 != 0) {
      func_0x000107c614f0(lStack_c0);
      (**(code **)(lStack_b8 + 0x10))();
      func_0x000107c615e8(lStack_c0);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 10334f630; end: 10334f7ff; -[_TtC25LensMultiplayerURIHandler42LensProcessingURIServiceMultiplayerHandler reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334f630(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f5b7e8);
  func_0x000107c614f0(uVar2);
  puVar1 = &UNK_110641708;
  func_0x000107c613fc(&UNK_110641708,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x103354a00,puVar1,uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61578(puVar1,2);
  return;
}



/* Entry: 10334f800; end: 103350c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334f800(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  long unaff_x20;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  
  func_0x0001000d224c(&plStack_c0);
  plVar15 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar5 = plStack_c0;
    func_0x000107c4a0b4();
    func_0x000107c615e8(plVar15);
    if ((int)plVar5 != 0) {
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5b780);
      uVar17 = puVar1[1];
      plVar15 = (long *)*puVar1;
      uVar21 = puVar1[3];
      uVar20 = puVar1[2];
      uVar18 = puVar1[5];
      uVar16 = puVar1[4];
      uStack_90 = puVar1[6];
      uStack_88 = (undefined1)puVar1[7];
      uVar19 = *(ulong *)((long)puVar1 + 0x41);
      uStack_7f = (undefined7)uVar19;
      uStack_78 = (undefined1)(uVar19 >> 0x38);
      uStack_87 = (undefined7)*(undefined8 *)((long)puVar1 + 0x39);
      uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x39) >> 0x38);
      lVar10 = CONCAT71(uStack_7f,uStack_80);
      plStack_c0 = plVar15;
      uStack_b8 = uVar17;
      uStack_b0 = uVar20;
      uStack_a8 = uVar21;
      uStack_a0 = uVar16;
      uStack_98 = uVar18;
      if ((lVar10 != 0) && (uVar17 != 0)) {
        uVar2 = (ulong)plVar15 & 0xffffffffffff;
        if ((uVar17 & 0x2000000000000000) != 0) {
          uVar2 = uVar17 >> 0x38 & 0xf;
        }
        if (uVar2 != 0) {
          if ((uVar19 & 0x100000000000000) == 0) {
            bVar4 = (byte)uStack_90;
            uVar3 = CONCAT71(uStack_87,uStack_88);
            plVar5 = (long *)(unaff_x20 + _DAT_112f5b778);
            lVar12 = *plVar5;
            if (lVar12 == 0) {
              FUN_1033545ac(&plStack_c0,&uStack_110,0x112f5b820,&UNK_10dbb3ca8);
              func_0x000107c61434(uVar17);
            }
            else {
              lVar14 = plVar5[1];
              lVar6 = lVar12;
              func_0x000107c614f0();
              pcVar11 = *(code **)(lVar14 + 8);
              FUN_1033545ac(&plStack_c0,&uStack_110,0x112f5b820,&UNK_10dbb3ca8);
              func_0x000107c61434(uVar17);
              func_0x000107c615f0(lVar12);
              (*pcVar11)(lVar6,lVar14);
              func_0x000107c615e8(lVar12);
            }
            lVar12 = *plVar5;
            *plVar5 = 0;
            plVar5[1] = 0;
            func_0x000107c615e8(lVar12);
            func_0x0001000d224c(&uStack_110);
            uVar7 = uStack_110;
            func_0x000107c614f0();
            (**(code **)(lStack_108 + 8))
                      (plVar15,uVar17,uVar20,uVar21,uVar16,uVar18,bVar4 & 1,uVar3,lVar10,uVar7,
                       lStack_108);
            func_0x000107c615e8(uStack_110);
            FUN_103354944(&plStack_c0,0x112f5b820,&UNK_10dbb3ca8);
            puVar8 = &UNK_110641708;
            func_0x000107c613fc(&UNK_110641708,0x18,7);
            func_0x000107c61614(puVar8 + 0x10);
            puVar9 = &UNK_110641ba8;
            func_0x000107c613fc(&UNK_110641ba8,0x30,7);
            *(undefined **)(puVar9 + 0x10) = puVar8;
            *(undefined8 *)(puVar9 + 0x18) = param_1;
            *(code **)(puVar9 + 0x20) = param_2;
            *(undefined8 *)(puVar9 + 0x28) = param_3;
            pcVar13 = *(code **)(*plVar15 + 0x60);
            func_0x000107c61174(param_1);
            func_0x000107c6157c(param_3);
            pcVar11 = FUN_1033545f4;
            puVar8 = puVar9;
            (*pcVar13)();
            func_0x000107c61574(plVar15);
            func_0x000107c61574(puVar9);
            func_0x000107c6142c(uVar17);
            lVar10 = *plVar5;
            *plVar5 = (long)pcVar11;
            plVar5[1] = (long)puVar8;
            func_0x000107c615e8(lVar10);
            return;
          }
          func_0x000107c4d778(param_1);
          goto LAB_10334f8e4;
        }
      }
      func_0x000107c498f4(param_1);
      goto LAB_10334f8e4;
    }
  }
  func_0x000107c4d778(param_1);
LAB_10334f8e4:
  func_0x000107c61180();
  (*param_2)();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103350c4c; end: 103350df3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103350c4c(ulong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_80 [24];
  long lStack_68;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  if ((param_1 & 1) != 0) {
    FUN_1033545ac(unaff_x20 + _DAT_112f5b7c8,auStack_80,0x112e60330,&UNK_10dbb3c50);
    if (lStack_68 != 0) {
      func_0x000100d43ce8(auStack_80,auStack_58);
      if (*(char *)(unaff_x20 + _DAT_112f5b768) == '\x01') {
        func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
        auStack_80[0] = 0;
        func_0x000104888f7c(auStack_80);
      }
      else {
        func_0x0001000a8868(auStack_58,uStack_40);
        uVar1 = uStack_40;
        (**(code **)(lStack_38 + 8))(uStack_40,lStack_38);
        puVar2 = &UNK_110641708;
        func_0x000107c613fc(&UNK_110641708,0x18,7);
        func_0x000107c61614(puVar2 + 0x10);
        FUN_103354528(auStack_58,auStack_80);
        puVar3 = &UNK_110641b58;
        func_0x000107c613fc(&UNK_110641b58,0x40,7);
        *(undefined **)(puVar3 + 0x10) = puVar2;
        func_0x000100d43ce8(auStack_80,puVar3 + 0x18);
        func_0x0001048898b8(0,1,FUN_10335456c,puVar3,PTR___sSbN_11034dd40);
        func_0x000107c61574(uVar1);
        func_0x000107c61574(puVar3);
      }
      func_0x0001000834e4(auStack_58);
      return;
    }
    FUN_103354944(auStack_80,0x112e60330,&UNK_10dbb3c50);
  }
  func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
  auStack_58[0] = 0;
  func_0x000104888f7c(auStack_58);
  return;
}



/* Entry: 103350df4; end: 1033517ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103350df4(undefined8 *param_1,long param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10)

{
  char cVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [24];
  undefined *puStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puStack_100 = (undefined1 *)CONCAT44(puStack_100._4_4_,param_6);
  puVar17 = (undefined *)*param_1;
  cVar1 = *(char *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_a8,0,0);
  ppuVar2 = (undefined **)(param_2 + 0x10);
  func_0x000107c61618();
  if (ppuVar2 == (undefined **)0x0) {
    func_0x000107c498cc(param_5);
    func_0x000107c61180();
    (*param_3)();
    func_0x000107c61170(param_5);
  }
  else {
    ppuVar3 = ppuVar2;
    pcStack_140 = param_3;
    puStack_118 = puVar17;
    lStack_110 = param_7;
    if (cVar1 == '\x01') {
      ppuVar3 = (undefined **)0x2;
      puStack_f8 = puVar17;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)ppuVar3 != 0) {
        uVar5 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        ppuVar3 = &puStack_f8;
        func_0x000107c61658(ppuVar3,uVar5,PTR___ss5ErrorWS_11034ee10);
      }
      puStack_118 = (undefined *)0x0;
    }
    func_0x0001000d224c(&puStack_f8);
    puVar9 = puStack_f8;
    func_0x000107c60f34();
    puVar17 = &UNK_1106418d8;
    func_0x000107c613fc(&UNK_1106418d8,0x21,7);
    *(undefined8 *)(puVar17 + 0x10) = 0;
    *(undefined8 *)(puVar17 + 0x18) = 0;
    puVar17[0x20] = 0xff;
    puVar4 = &UNK_110641900;
    func_0x000107c613fc(&UNK_110641900,0x33,7);
    *(undefined8 *)(puVar4 + 0x18) = 0;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 0x28) = 0;
    *(undefined8 *)(puVar4 + 0x20) = 0;
    puVar4[0x32] = 0xff;
    *(undefined2 *)(puVar4 + 0x30) = 0;
    func_0x000107c60f38(ppuVar3);
    puStack_130 = puVar9;
    uStack_148 = param_8;
    puStack_138 = puVar4;
    uStack_128 = param_5;
    lStack_120 = param_4;
    if (((ulong)puStack_100 & 1) == 0) {
      puVar6 = &UNK_110641708;
      func_0x000107c613fc(&UNK_110641708,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,ppuVar2);
      puVar7 = &UNK_110641928;
      func_0x000107c613fc(&UNK_110641928,0x28,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(undefined ***)(puVar7 + 0x18) = ppuVar3;
      *(undefined **)(puVar7 + 0x20) = puVar4;
      uVar5 = param_10[3];
      uStack_150 = *(undefined8 *)(puVar9 + _DAT_112f5b680);
      puVar8 = &UNK_110641950;
      func_0x000107c613fc(&UNK_110641950,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,puVar9);
      uStack_88 = param_10[1];
      uStack_90 = *param_10;
      puVar9 = &UNK_110641978;
      func_0x000107c613fc(&UNK_110641978,0x59,7);
      lVar12 = lStack_110;
      *(undefined **)(puVar9 + 0x10) = puVar8;
      *(code **)(puVar9 + 0x18) = FUN_1033540fc;
      *(undefined **)(puVar9 + 0x20) = puVar7;
      uVar14 = *param_10;
      uVar19 = param_10[3];
      uVar18 = param_10[2];
      *(undefined8 *)(puVar9 + 0x30) = param_10[1];
      *(undefined8 *)(puVar9 + 0x28) = uVar14;
      *(undefined8 *)(puVar9 + 0x40) = uVar19;
      *(undefined8 *)(puVar9 + 0x38) = uVar18;
      puVar9[0x48] = *(undefined1 *)(param_10 + 4);
      *(long *)(puVar9 + 0x50) = lStack_110;
      puVar9[0x58] = (byte)puStack_118 & 1;
      func_0x000107c6157c(puVar6);
      func_0x000107c61174(ppuVar3);
      func_0x000107c6157c(puVar4);
      func_0x000107c6157c(puVar7);
      FUN_1033545ac(&uStack_90,&puStack_f8,0x112d35ff8,&UNK_10d900cd0);
      func_0x000107c6157c(uVar5);
      func_0x000107c61174(lVar12);
      func_0x00010075a04c(uStack_150,1,0x103354108,puVar9);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar9);
    }
    else {
      uVar5 = param_10[1];
      uVar14 = *param_10;
      *(undefined8 *)(puVar4 + 0x18) = param_10[1];
      *(undefined8 *)(puVar4 + 0x10) = uVar14;
      *(undefined8 *)(puVar4 + 0x20) = 0;
      *(undefined8 *)(puVar4 + 0x28) = 0;
      puVar4[0x32] = 0;
      *(undefined2 *)(puVar4 + 0x30) = 0x100;
      func_0x000107c61434(uVar5);
      func_0x0001033541b4(0,0,0,0,0xff0000);
      func_0x000107c60f3c(ppuVar3);
    }
    uStack_150 = param_9;
    func_0x000107c60f38(ppuVar3);
    func_0x0001000d224c(&puStack_b0);
    puVar4 = &UNK_110641708;
    func_0x000107c613fc(&UNK_110641708,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,ppuVar2);
    puVar9 = &UNK_1106419a0;
    func_0x000107c613fc(&UNK_1106419a0,0x28,7);
    *(undefined **)(puVar9 + 0x10) = puVar4;
    *(undefined ***)(puVar9 + 0x18) = ppuVar3;
    *(undefined **)(puVar9 + 0x20) = puVar17;
    func_0x000107c61580(puVar17,2);
    func_0x000107c61174();
    func_0x000107c6157c(puVar4);
    func_0x0001000d224c(&puStack_f8);
    puVar7 = puStack_f8;
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_158 = ppuVar3;
    puStack_108 = puVar17;
    if (puStack_f8 == (undefined *)0x0) {
      puStack_160 = puStack_b0;
      func_0x000107c61428(puVar4 + 0x10,auStack_c8,0,0);
      puVar7 = puVar4 + 0x10;
      func_0x000107c61618();
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c60f3c(ppuVar3);
      }
      else {
        uVar14 = *(undefined8 *)(puVar7 + _DAT_112f5b7e8);
        uVar5 = uVar14;
        func_0x000107c614f0(uVar14);
        puVar8 = &UNK_110641a18;
        func_0x000107c613fc(&UNK_110641a18,0x38,7);
        *(undefined8 *)(puVar8 + 0x10) = 0;
        *(undefined8 *)(puVar8 + 0x18) = 0;
        *(undefined8 *)(puVar8 + 0x20) = 0;
        *(undefined **)(puVar8 + 0x28) = puVar17;
        *(undefined ***)(puVar8 + 0x30) = ppuVar3;
        func_0x000107c61174(ppuVar3);
        func_0x000107c6157c(puVar17);
        func_0x000107c615f0(uVar14);
        func_0x00010090569c(0x1033541a0,puVar8,uVar5);
        func_0x000107c61574(puVar4);
        func_0x000107c61170(puVar7);
        func_0x000107c615e8(uVar14);
        puVar4 = puVar8;
      }
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar9);
      func_0x000107c61170(puStack_160);
      func_0x000107c61574(puVar17);
    }
    else {
      uVar5 = *(undefined8 *)(puStack_b0 + _DAT_112f5b720);
      func_0x000107c614f0(uVar5);
      func_0x000100bcb214();
      puVar17 = &UNK_110641a40;
      func_0x000107c613fc(&UNK_110641a40,0x20,7);
      *(code **)(puVar17 + 0x10) = FUN_103354154;
      *(undefined **)(puVar17 + 0x18) = puVar9;
      pcStack_d8 = (code *)0x1033541a4;
      puStack_f8 = puVar6;
      uStack_f0 = 0x42000000;
      puStack_e8 = &UNK_100c75f50;
      puStack_e0 = &UNK_110641a58;
      ppuVar3 = &puStack_f8;
      puStack_d0 = puVar17;
      func_0x000107c60bc4(ppuVar3);
      puVar17 = puStack_d0;
      func_0x000107c6157c(puVar9);
      func_0x000107c61574(puVar17);
      puVar17 = &UNK_110641a90;
      func_0x000107c613fc(&UNK_110641a90,0x20,7);
      *(code **)(puVar17 + 0x10) = FUN_103354154;
      *(undefined **)(puVar17 + 0x18) = puVar9;
      pcStack_d8 = (code *)0x1033541ac;
      puStack_f8 = puVar6;
      uStack_f0 = 0x42000000;
      puStack_e8 = &UNK_1012519d0;
      puStack_e0 = &UNK_110641aa8;
      ppuVar10 = &puStack_f8;
      puStack_d0 = puVar17;
      func_0x000107c60bc4(ppuVar10);
      puVar8 = puStack_d0;
      func_0x000107c6157c(puVar9);
      puVar17 = puStack_108;
      func_0x000107c61574(puVar8);
      func_0x000107c42f88(puVar7);
      func_0x000107c61574(puVar9);
      func_0x000107c61170(puStack_b0);
      func_0x000107c61574(puVar17);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61574(puVar4);
      func_0x000107c615e8(puVar7);
      func_0x000107c61170(uVar5);
    }
    lVar13 = lStack_110;
    FUN_103354994(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    lVar11 = 0;
    func_0x000107c5f804();
    lVar15 = *(long *)(lVar11 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
    lVar16 = (long)&puStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar15 + 0x68))
              (lVar16,*(undefined4 *)
                       PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar11);
    lVar12 = lVar16;
    func_0x000107c5fff0();
    lStack_110 = lVar12;
    (**(code **)(lVar15 + 8))(lVar16,lVar11);
    puVar4 = &UNK_110641708;
    func_0x000107c613fc(&UNK_110641708,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,ppuVar2);
    puVar9 = &UNK_1106419c8;
    func_0x000107c613fc(&UNK_1106419c8,0x61,7);
    lVar12 = lStack_120;
    uVar14 = uStack_128;
    puVar7 = puStack_138;
    uVar5 = uStack_150;
    *(undefined **)(puVar9 + 0x10) = puVar4;
    *(undefined **)(puVar9 + 0x18) = puVar17;
    *(undefined **)(puVar9 + 0x20) = puStack_138;
    puVar9[0x28] = (byte)puStack_100 & 1;
    *(code **)(puVar9 + 0x30) = pcStack_140;
    *(long *)(puVar9 + 0x38) = lStack_120;
    *(undefined8 *)(puVar9 + 0x40) = uStack_128;
    *(long *)(puVar9 + 0x48) = lVar13;
    *(undefined8 *)(puVar9 + 0x50) = uStack_148;
    *(undefined8 *)(puVar9 + 0x58) = uStack_150;
    puVar9[0x60] = (byte)puStack_118 & 1;
    pcStack_d8 = FUN_103354160;
    puStack_f8 = puVar6;
    uStack_f0 = 0x42000000;
    puStack_e8 = &UNK_1000f6b44;
    puStack_e0 = &UNK_1106419e0;
    ppuVar10 = &puStack_f8;
    puStack_d0 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    lVar11 = 0;
    func_0x000107c5f824();
    pcStack_140 = *(code **)(lVar11 + -8);
    puStack_118 = (undefined *)lVar11;
    puStack_100 = (undefined1 *)&puStack_160;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)((long)pcStack_140 + 0x40));
    lVar15 = (long)&puStack_160 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    func_0x000107c61434(uVar5);
    func_0x000107c6157c(puVar7);
    func_0x000107c61174(lVar13);
    func_0x000107c6157c(puVar17);
    func_0x000107c6157c(puVar4);
    func_0x000107c6157c(lVar12);
    func_0x000107c61174(uVar14);
    func_0x000107c5f808(lVar15);
    lVar13 = 0;
    func_0x000107c5f7fc();
    lVar16 = *(long *)(lVar13 + -8);
    lVar12 = lVar13;
    lStack_120 = lVar15;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
    lVar11 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar5 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar14 = uVar5;
    func_0x0001001c7f30();
    func_0x000107c60264(lVar11,&puStack_b0,uVar5,uVar14,lVar13,lVar12);
    lVar12 = lStack_110;
    ppuVar3 = ppuStack_158;
    func_0x000107c5ffb8(lVar15,lVar11,lStack_110,ppuVar10);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(ppuVar2);
    func_0x000107c61170(puStack_130);
    func_0x000107c61170(lVar12);
    (**(code **)(lVar16 + 8))(lVar11,lVar13);
    (**(code **)((long)pcStack_140 + 8))(lVar15,puStack_118);
    puVar17 = puStack_d0;
    func_0x000107c61574(puStack_108);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar17);
  }
  return;
}



/* Entry: 1033517ac; end: 1033518cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033517ac(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    func_0x000107c60f3c(param_3);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112f5b7e8);
    uVar1 = uVar3;
    func_0x000107c614f0(uVar3);
    puVar2 = &UNK_110641b08;
    func_0x000107c613fc(&UNK_110641b08,0x48,7);
    uVar4 = *param_1;
    uVar6 = param_1[3];
    uVar5 = param_1[2];
    *(undefined8 *)(puVar2 + 0x18) = param_1[1];
    *(undefined8 *)(puVar2 + 0x10) = uVar4;
    *(undefined8 *)(puVar2 + 0x28) = uVar6;
    *(undefined8 *)(puVar2 + 0x20) = uVar5;
    *(undefined2 *)(puVar2 + 0x30) = *(undefined2 *)(param_1 + 4);
    *(undefined8 *)(puVar2 + 0x38) = param_4;
    *(undefined8 *)(puVar2 + 0x40) = param_3;
    func_0x000107c615f0(uVar3);
    FUN_1033545ac(param_1,auStack_90,0x112f5b828,&UNK_10dbb3cb0);
    func_0x000107c6157c(param_4);
    func_0x000107c61174(param_3);
    func_0x00010090569c(FUN_1033544d0,puVar2,uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(uVar3);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 1033518cc; end: 103351b0f;  */

void FUN_1033518cc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  uint3 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_78 [24];
  
  lVar11 = param_1[1];
  if (lVar11 == 1) {
    func_0x000107c61428(param_2 + 0x10,auStack_78,1,0);
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(uint3 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x18) = 1;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined2 *)(param_2 + 0x30) = 0;
    *(undefined1 *)(param_2 + 0x32) = 1;
  }
  else {
    bVar3 = *(byte *)(param_1 + 4);
    uVar10 = *param_1;
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    uVar9 = 0x100;
    if ((*(byte *)((long)param_1 + 0x21) & 1) == 0) {
      uVar9 = 0;
    }
    func_0x000107c61428(param_2 + 0x10,auStack_78,1,0);
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(uint3 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x10) = uVar10;
    *(long *)(param_2 + 0x18) = lVar11;
    *(undefined8 *)(param_2 + 0x20) = uVar1;
    *(undefined8 *)(param_2 + 0x28) = uVar2;
    *(ushort *)(param_2 + 0x30) = uVar9 | bVar3 & 1;
    *(undefined1 *)(param_2 + 0x32) = 0;
    func_0x000107c61434(uVar2);
    func_0x000107c61434(lVar11);
  }
  func_0x0001033541b4(uVar5,uVar6,uVar7,uVar8,(ulong)uVar4);
  func_0x000107c60f3c(param_3);
  return;
}


