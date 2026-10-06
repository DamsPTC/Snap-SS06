/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10048eefc; end: 10048ef53; -[AdEOVTimerServices initWithAdEOVTimerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10048eefc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fbd340) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10048ef54; end: 10048ef7f;  */

void FUN_10048ef54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10048ef80; end: 10048ef87;  */

void FUN_10048ef80(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10048ef88; end: 10048efdb;  */

void FUN_10048ef88(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10048efdc; end: 10048efe7;  */

void FUN_10048efdc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002a31f4();
  func_0x000107c613fc();
  FUN_10048f07c(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10048efe8; end: 10048f07b;  */

void FUN_10048efe8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002a31f4();
  func_0x000107c613fc();
  FUN_10048f07c(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 10048f07c; end: 10048f25b;  */

void FUN_10048f07c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a8d88;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f007250);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 10048f25c; end: 10048f343; -[SCSKStoreProductPrefetchServiceProvider provide] */

void FUN_10048f25c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bdd58;
  func_0x000107c610f4(PTR_PTR_1126bdd58);
  func_0x000107c48010();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10048f344; end: 10048f3bb; -[_TtC32SCSKStoreProductPrefetchServices32SCSKStoreProductPrefetchServices initWithPrefetcher:jobProcessor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10048f344(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fbd370) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fbd378) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10048f3bc; end: 10048f487;  */

void FUN_10048f3bc(void)

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



/* Entry: 10048f488; end: 10048f4b7;  */

void FUN_10048f488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  return;
}



/* Entry: 10048f4b8; end: 10048f953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10048f4b8(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 auStack_f0 [2];
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
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
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar14 + 0x68))
            (auStack_e0 + lVar1,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,
             lVar2);
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f007850);
  func_0x000107c5f800();
  func_0x000107c470d0();
  puStack_c8 = puVar3;
  func_0x000107c61170(uVar4);
  (**(code **)(lVar14 + 8))(auStack_e0 + lVar1,lVar2);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + _DAT_113069508);
  func_0x000107c61174();
  uVar4 = uVar5;
  FUN_1003d1364();
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x50) + _DAT_11304a480);
  uStack_68 = uVar4;
  func_0x000107c61174();
  uVar4 = uVar6;
  FUN_10048fa14();
  uStack_80 = uVar4;
  FUN_1003d2494();
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_70 = uVar4;
  func_0x000107c421c8();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_78 = uVar7;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar2 = *(long *)(unaff_x20 + 0x60);
  uVar8 = *(undefined8 *)(lVar2 + _DAT_113010c10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_88 = uVar4;
  func_0x000107c61174();
  func_0x000107c4ec80();
  func_0x000107c61180();
  uStack_90 = uVar7;
  func_0x00010048fa88();
  uVar9 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_d0 = uVar7;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(*(long *)(unaff_x20 + 0x78) + _DAT_112fbd340);
  uVar16 = *(undefined8 *)(lVar2 + _DAT_113010be0);
  uVar13 = *(undefined8 *)(*(long *)(unaff_x20 + 0x80) + _DAT_112fbd370);
  puVar3 = &UNK_110462458;
  func_0x000107c613fc(&UNK_110462458,0x90,7);
  puVar10 = puStack_c8;
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x18) = uStack_68;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x28) = uStack_80;
  *(undefined8 *)(puVar3 + 0x30) = uStack_70;
  *(undefined8 *)(puVar3 + 0x38) = uStack_78;
  *(undefined8 *)(puVar3 + 0x40) = uStack_88;
  *(undefined8 *)(puVar3 + 0x48) = uVar8;
  *(undefined8 *)(puVar3 + 0x50) = uStack_90;
  *(undefined8 *)(puVar3 + 0x58) = uVar7;
  *(undefined8 *)(puVar3 + 0x60) = uVar9;
  *(undefined8 *)(puVar3 + 0x68) = uVar15;
  *(undefined8 *)(puVar3 + 0x70) = uVar16;
  *(undefined8 *)(puVar3 + 0x78) = uVar13;
  *(undefined **)(puVar3 + 0x80) = puStack_c8;
  *(long *)(puVar3 + 0x88) = unaff_x20;
  uVar4 = 0x112e0f9e0;
  FUN_1000285a8(0x112e0f9e0,&UNK_10d9ead90);
  func_0x000107c613fc();
  uStack_d8 = uVar4;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uStack_c0 = uVar5;
  func_0x000107c61174();
  uStack_b8 = uVar6;
  func_0x000107c61174();
  uStack_b0 = uVar8;
  func_0x000107c61174();
  uStack_98 = uVar15;
  func_0x000107c61174();
  uStack_a0 = uVar16;
  func_0x000107c61174();
  uVar7 = uStack_68;
  uStack_a8 = uVar13;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_70;
  uStack_68 = uVar4;
  func_0x000107c61174();
  uStack_80 = uVar5;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_d0;
  uStack_70 = uVar4;
  func_0x000107c61174(uStack_d0);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(puVar10);
  func_0x000107c6157c();
  puVar11 = &UNK_101c7d810;
  FUN_1000bdd8c(&UNK_101c7d810,puVar3);
  puVar12 = puVar11;
  FUN_1003a5b88();
  func_0x000107c61574(puVar11);
  puVar3 = &UNK_110462480;
  func_0x000107c613fc(&UNK_110462480,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar12;
  func_0x000107c61174();
  uVar4 = 0x112e0f9e8;
  FUN_1000285a8(0x112e0f9e8,&UNK_10d9eada8);
  *(undefined8 *)((long)auStack_f0 + lVar1) = uVar4;
  uVar4 = 10;
  func_0x0001001ca524(10,0,8,3,0,0,&UNK_10d9eada0,puVar3);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  FUN_1002ad514(0);
  func_0x000107c610f8();
  FUN_10048fafc(puVar12);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uStack_c0);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uStack_b8);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uStack_b0);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61170(uStack_a8);
  return puVar12;
}



/* Entry: 10048f954; end: 10048fa13;  */

void FUN_10048f954(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10048fa14; end: 10048fafb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10048fa14(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_113010938;
  lVar2 = *(long *)(unaff_x20 + _DAT_113010938);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_1003a5b88(*(undefined8 *)(unaff_x20 + _DAT_113010930));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 10048fafc; end: 10048fb47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10048fafc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fbd2b0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10048fb48; end: 10048fbdb;  */

void FUN_10048fb48(void)

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



/* Entry: 10048fbdc; end: 10048fbe3;  */

void FUN_10048fbdc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10048fbe4; end: 10048fc37;  */

void FUN_10048fbe4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10048fc38; end: 10048fc73;  */

void FUN_10048fc38(void)

{
  long unaff_x20;
  
  FUN_10048fc74(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 10048fc74; end: 10049047f;  */

void FUN_10048fc74(long *param_1,long param_2)

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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
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
  FUN_100083b20(&uStack_d0);
  FUN_1002c6290();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  puVar1 = PTR_PTR_1126a9970;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar9 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174(uStack_c0);
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar14 = auStack_70[0];
  func_0x000107c61174();
  uVar15 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar15 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar15);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar16);
  uVar15 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(uVar16);
  uVar15 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efc46f0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(uVar16);
  uVar15 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00a580);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f00acf0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef32790);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar15);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar16);
  uVar15 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar15 = uVar16;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar2);
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
  *(undefined8 *)(param_2 + 0x78) = uVar15;
  *param_1 = param_2;
  return;
}



/* Entry: 100490480; end: 10049058f; -[SCDiscoverFeedStoriesServiceProvider provide] */

void FUN_100490480(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126cee60;
  func_0x000107c610f4(PTR_PTR_1126cee60);
  func_0x000107c465c0();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100490590; end: 100490607; -[_TtC29SCDiscoverFeedStoriesServices29SCDiscoverFeedStoriesServices initWithDiscoverFeedFriendStoriesDataCoordinator:replayManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100490590(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11302e240) = param_3;
  *(undefined8 *)(param_1 + _DAT_11302e248) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 100490608; end: 10049068b;  */

void FUN_100490608(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10049068c; end: 10049095b; -[SCAdPrefetchServiceProvider provide] */

void FUN_10049068c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_10575db9c;
  puStack_90 = &UNK_1108af9d8;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar5;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_10575dbdc;
  puStack_b8 = &UNK_1108afa08;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_f8 = puVar5;
  uStack_f0 = 0xc2000000;
  puStack_e8 = &UNK_10575dc1c;
  puStack_e0 = &UNK_1108afa38;
  func_0x000107c6111c(auStack_d8,auStack_80);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  puStack_120 = puVar5;
  uStack_118 = 0xc2000000;
  puStack_110 = &UNK_10575dc5c;
  puStack_108 = &UNK_1108afa68;
  func_0x000107c6111c(auStack_100,auStack_80);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_128,auStack_80);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126bdbf8;
  func_0x000107c610f4(PTR_PTR_1126bdbf8);
  func_0x000107c455e8();
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_128);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_100);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10049095c; end: 100490a23; -[_TtC20SCAdPrefetchServices20SCAdPrefetchServices initWithAdPrefetcher:userStoriesAdPrefetcher:spotlightAdPrefetcher:contentDeepLinkAdPrefetcher:discoverTileTapContextBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049095c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff2370) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ff2378) = param_4;
  *(undefined8 *)(param_1 + _DAT_112ff2380) = param_5;
  *(undefined8 *)(param_1 + _DAT_112ff2388) = param_6;
  *(undefined8 *)(param_1 + _DAT_112ff2390) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 100490a24; end: 100490ab7;  */

void FUN_100490a24(void)

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



/* Entry: 100490ab8; end: 100490d7b;  */

void FUN_100490ab8(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long alStack_c8 [9];
  long lStack_80;
  long alStack_78 [3];
  
  plVar4 = alStack_c8;
  FUN_100466e48(plVar4,4);
  plVar1 = (long *)0x1136a2198;
  do {
    while( true ) {
      lStack_80 = 0x7fffffffffffffff;
      func_0x000100460dc4();
      *(undefined1 *)(*plVar4 + 0x34) = 0;
      plVar4 = &lStack_80;
      FUN_100490d7c();
      iVar3 = (int)plVar4;
      if (iVar3 == 0) break;
      if (iVar3 == 1) goto LAB_100490b9c;
      if (iVar3 == 2) {
        alStack_78[0] = 1;
        alStack_78[1] = 0;
        alStack_78[2] = 0;
        FUN_1004b6294();
        if (*plVar4 == 0) {
          FUN_1004b6294();
          *plVar4 = (long)alStack_78;
        }
        plVar4 = plVar1;
        FUN_100460448();
        iRam00000001136a2240 = iRam00000001136a2240 + -1;
        if ((iRam00000001136a2240 == 0) && (cRam00000001136a2238 == '\x01')) {
          FUN_100468abc();
        }
        else {
          if ((bRam00000001136a2250 & 1) == 0) {
            func_0x000100466b64(0x1136a21d8);
          }
          plVar4 = plVar1;
          func_0x000100466b80();
        }
        func_0x000100460dc4();
        FUN_100467970(*plVar4);
        FUN_100460448(0x1136a2198);
        func_0x000104ac87f0();
        iRam00000001136a2240 = iRam00000001136a2240 + 1;
        func_0x000100466b80(0x1136a2198);
        plVar4 = alStack_78;
        FUN_1004b6ddc();
      }
    }
    lStack_80 = 0x7fffffffffffffff;
LAB_100490b9c:
    lVar2 = lStack_80;
    alStack_78[0] = lStack_80;
    FUN_100460448(0x1136a2198);
    if (cRam00000001136a2238 != '\x01') {
      func_0x000100466b80(0x1136a2198);
      FUN_100460448(0x1136a2198);
      iRam00000001136a2240 = iRam00000001136a2240 + -1;
      iRam00000001136a223c = iRam00000001136a223c + -1;
      if (iRam00000001136a223c == 0) {
        func_0x000100466b64(0x1136a2208);
      }
      *(long *)(param_1 + 0x20) = lRam00000001136a2248;
      lRam00000001136a2248 = param_1;
      func_0x000100466b80(0x1136a2198);
      FUN_100467a48(alStack_c8);
      return;
    }
    if ((bRam00000001136a2260 & 1) == 0) {
      lVar6 = lRam00000001136a2268 + -1;
      if (lVar2 != 0x7fffffffffffffff) {
        if ((bRam00000001136a2250 == 1) && (lRam00000001136a2258 <= lVar2)) {
          alStack_78[0] = 0x7fffffffffffffff;
        }
        else {
          lVar6 = lRam00000001136a2268 + 1;
          bRam00000001136a2250 = 1;
          lRam00000001136a2258 = lVar2;
          lRam00000001136a2268 = lVar6;
        }
      }
      plVar4 = alStack_78;
      uVar5 = 0;
      FUN_10047e568(plVar4,0);
      FUN_100466590(0x1136a21d8,0x1136a2198,plVar4,uVar5);
      if (lVar6 == lRam00000001136a2268) {
        lRam00000001136a2270 = lRam00000001136a2270 + 1;
        bRam00000001136a2250 = 0;
        lRam00000001136a2258 = 0x7fffffffffffffff;
      }
      if (bRam00000001136a2260 == 1) goto LAB_100490cb4;
    }
    else {
LAB_100490cb4:
      func_0x000104ac82c4();
      bRam00000001136a2260 = 0;
    }
    plVar4 = plVar1;
    func_0x000100466b80();
  } while( true );
}



/* Entry: 100490d7c; end: 100490d8b;  */

void FUN_100490d7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100490d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000113815c30 + 0x10))();
  return;
}



/* Entry: 100490d8c; end: 100490ee3;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_100490d8c(long *param_1)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  int *piVar7;
  bool bVar8;
  ulong auStack_68 [4];
  undefined1 uStack_41;
  ulong uStack_40;
  ulong *puStack_38;
  
  plVar3 = param_1;
  func_0x000100460dc4();
  lVar4 = *plVar3;
  FUN_1004671a4();
  ppuVar5 = &PTR___tlv_bootstrap_11340d990;
  (*(code *)PTR___tlv_bootstrap_11340d990)();
  puVar6 = *ppuVar5;
  if (lVar4 < (long)puVar6) {
    if (param_1 != (long *)0x0) {
      if (*param_1 <= (long)puVar6) {
        puVar6 = (undefined *)*param_1;
      }
      *param_1 = (long)puVar6;
    }
    return 1;
  }
  if (lVar4 == 0x7fffffffffffffff) {
    auStack_68[1] = 0;
    auStack_68[2] = 0;
    auStack_68[3] = 0;
    func_0x000104ab5920(&uStack_40,2,"Shutting down timer system",0x1a,&uStack_41,auStack_68 + 1);
    puStack_38 = auStack_68 + 1;
    func_0x000100482b64(&puStack_38);
    if ((uStack_40 & 1) != 0) {
      piVar7 = (int *)(uStack_40 - 1);
      do {
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar8) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      bVar8 = false;
      goto LAB_100490e68;
    }
  }
  else {
    uStack_40 = 0;
  }
  bVar8 = true;
LAB_100490e68:
  uVar2 = uStack_40;
  auStack_68[0] = uStack_40;
  FUN_100490ee4(lVar4,param_1,auStack_68);
  if (!bVar8) {
    FUN_10084dad0(uVar2);
  }
  if ((uStack_40 & 1) != 0) {
    FUN_10084dad0();
  }
  return lVar4;
}



/* Entry: 100490ee4; end: 1004912bb;  */

undefined4 FUN_100490ee4(double param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined *extraout_x8;
  ulong uVar8;
  int *piVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  double dVar16;
  double dVar17;
  undefined4 uStack_ac;
  ulong uStack_a0;
  undefined1 uStack_91;
  
  ppuVar7 = &PTR___tlv_bootstrap_11340d990;
  (*(code *)PTR___tlv_bootstrap_11340d990)(uRam00000001136a2100);
  *ppuVar7 = extraout_x8;
  if ((long)param_2 < (long)extraout_x8) {
    if (param_3 != (ulong *)0x0) {
      puVar2 = extraout_x8;
      if ((long)*param_3 <= (long)extraout_x8) {
        puVar2 = (undefined *)*param_3;
      }
      *param_3 = (ulong)puVar2;
    }
    return 1;
  }
  do {
    if (lRam00000001136a2108 != 0) {
      ClearExclusiveLocal();
      return 0;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0x1136a2108,0x10);
    if (bVar5) {
      lRam00000001136a2108 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_100460448(0x1136a2118);
  lVar14 = *plRam00000001136a2190;
  puVar10 = (ulong *)(lVar14 + 0x80);
  uVar8 = *puVar10;
  if ((long)uVar8 < (long)param_2 || uVar8 == param_2 && param_2 != 0x7fffffffffffffff) {
    uStack_ac = 1;
LAB_100490fe4:
    uVar8 = *param_4;
    if ((uVar8 & 1) != 0) {
      piVar9 = (int *)(uVar8 - 1);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar5) {
          *piVar9 = *piVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_100460448(lVar14);
    lVar13 = 0;
    plVar1 = (long *)(lVar14 + 0x90);
    piVar9 = (int *)(uVar8 - 1);
    do {
      plVar15 = plVar1;
      func_0x000100467904();
      if ((int)plVar15 != 0) {
        if ((long)param_2 < *(long *)(lVar14 + 0x78)) goto LAB_100491190;
        FUN_1004912bc(lVar14 + 0x40);
        param_1 = param_1 * 0.33;
        dVar17 = 1000.0;
        if (param_1 <= 1.0) {
          dVar17 = param_1 * 1000.0;
        }
        uVar3 = *(ulong *)(lVar14 + 0x78);
        if ((long)*(ulong *)(lVar14 + 0x78) <= (long)param_2) {
          uVar3 = param_2;
        }
        dVar16 = 10.0;
        if (0.01 <= param_1) {
          dVar16 = dVar17;
        }
        lVar11 = 0x7fffffffffffffff;
        param_1 = dVar16;
        if (dVar16 < 9.223372036854776e+18) {
          param_1 = -9.223372036854776e+18;
          if (-9.223372036854776e+18 < dVar16) {
            param_1 = dVar16;
          }
          lVar12 = (long)param_1;
          if ((lVar12 != 0x7fffffffffffffff && uVar3 != 0x7fffffffffffffff) &&
             (lVar11 = -0x8000000000000000,
             lVar12 != -0x8000000000000000 && uVar3 != 0x8000000000000000)) {
            if ((long)uVar3 < 1) {
              if ((long)(-0x8000000000000000 - uVar3) <= lVar12) goto LAB_1004910d8;
            }
            else if ((long)(uVar3 ^ 0x7fffffffffffffff) < lVar12) {
              lVar11 = 0x7fffffffffffffff;
            }
            else {
LAB_1004910d8:
              lVar11 = uVar3 + lVar12;
            }
          }
        }
        *(long *)(lVar14 + 0x78) = lVar11;
        plVar15 = *(long **)(lVar14 + 0xb0);
        while (plVar6 = plVar15, plVar6 != (long *)(lVar14 + 0xa0)) {
          plVar15 = (long *)plVar6[2];
          if (*plVar6 < *(long *)(lVar14 + 0x78)) {
            plVar15[3] = plVar6[3];
            *(long **)(plVar6[3] + 0x10) = plVar15;
            func_0x000104ac8428(plVar1);
          }
        }
        plVar15 = plVar1;
        func_0x000100467904();
        if (((ulong)plVar15 & 1) != 0) goto LAB_100491190;
      }
      plVar15 = plVar1;
      func_0x000104ac8688();
      if ((long)param_2 < *plVar15) goto LAB_100491190;
      *(undefined1 *)((long)plVar15 + 0xc) = 0;
      func_0x000104ac8694(plVar1);
      lVar11 = plVar15[4];
      if ((uVar8 & 1) != 0) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar5) {
            *piVar9 = *piVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_a0 = uVar8;
      FUN_1004bd7e8(&uStack_91,lVar11,&uStack_a0);
      if ((uStack_a0 & 1) != 0) {
        FUN_10084dad0();
      }
      lVar13 = lVar13 + 1;
    } while( true );
  }
  uStack_ac = 1;
  uRam00000001136a2100 = uVar8;
joined_r0x00010049120c:
  if (param_3 != (ulong *)0x0) {
    if ((long)*param_3 <= (long)uRam00000001136a2100) {
      uRam00000001136a2100 = *param_3;
    }
    *param_3 = uRam00000001136a2100;
    uRam00000001136a2100 = *puVar10;
  }
  func_0x000100466b80(0x1136a2118);
  lRam00000001136a2108 = 0;
  return uStack_ac;
LAB_100491190:
  lVar11 = lVar14;
  FUN_100467914();
  func_0x000100466b80(lVar14);
  if ((uVar8 & 1) != 0) {
    FUN_10084dad0(uVar8);
  }
  if (lVar13 != 0) {
    uStack_ac = 2;
  }
  *(long *)(*plRam00000001136a2190 + 0x80) = lVar11;
  func_0x000100491318();
  lVar14 = *plRam00000001136a2190;
  uVar8 = *(ulong *)(lVar14 + 0x80);
  if (((long)uVar8 < (long)param_2) || (uVar8 == param_2 && param_2 != 0x7fffffffffffffff))
  goto LAB_100490fe4;
  puVar10 = (ulong *)(lVar14 + 0x80);
  uRam00000001136a2100 = uVar8;
  goto joined_r0x00010049120c;
}



/* Entry: 1004912bc; end: 1004913b7;  */

void FUN_1004912bc(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_1[3];
  dVar2 = param_1[4];
  dVar3 = param_1[1];
  if (0.0 < dVar3) {
    dVar1 = dVar1 + *param_1 * dVar3;
    dVar2 = dVar2 + dVar3;
  }
  if (0.0 < param_1[2]) {
    dVar3 = param_1[2] * param_1[5];
    dVar1 = dVar1 + param_1[6] * dVar3;
    dVar2 = dVar2 + dVar3;
  }
  if (dVar2 <= 0.0) {
    dVar1 = *param_1;
  }
  else {
    dVar1 = dVar1 / dVar2;
  }
  param_1[5] = dVar2;
  param_1[6] = dVar1;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  return;
}



/* Entry: 1004913b8; end: 1004913f7;  */

undefined1  [16]
FUN_1004913b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  FUN_100466678();
  if ((int)uVar1 < 1) {
    param_2 = param_4;
    param_1 = param_3;
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1004913f8; end: 100491557;  */

undefined8 FUN_1004913f8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puStack_d0;
  long *plStack_c8;
  long lStack_c0;
  undefined1 uStack_b1;
  long lStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  long lStack_48;
  
  ppuVar5 = &puStack_d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d0 = param_1;
  func_0x000107c60d74();
  *param_1 = 0;
  FUN_100491558();
  uVar7 = param_1[1];
  lStack_b0 = 0;
  uStack_b1 = 0;
  while( true ) {
    uVar6 = 1;
    plVar3 = plRam0000000113815c70;
    (**(code **)(*plRam0000000113815c70 + 0x1c0))(plRam0000000113815c70,1);
    uVar4 = uVar7;
    FUN_100491574(uVar7,&lStack_b0,&uStack_b1,plVar3,uVar6);
    if ((int)uVar4 != 1) break;
    if (lStack_b0 != 0) {
      plStack_c8 = *(long **)(lStack_b0 + 8);
      lStack_c0 = *(long *)(lStack_b0 + 0x10);
      if (lStack_c0 != 0) {
        plVar3 = (long *)(lStack_c0 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pcStack_a8 = FUN_100834e1c;
      ppuStack_a0 = &PTR_DAT_110ccd258;
      lStack_98 = lStack_b0;
      uStack_90 = uStack_b1;
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8,&pcStack_a8);
      func_0x000100834e0c();
      FUN_100450be4(&plStack_c8);
    }
  }
  FUN_10048957c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return 0;
  }
  func_0x000107c60e78();
  FUN_10048957c(&puStack_d0);
  func_0x000107c60bd8();
  uVar7 = *ppuVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_setspecific_11034c998)(uVar7);
  return uVar7;
}



/* Entry: 100491558; end: 100491573;  */

void FUN_100491558(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_setspecific_11034c998)(*param_1);
  return;
}



/* Entry: 100491574; end: 100491617;  */

void FUN_100491574(long param_1,ulong *param_2,undefined8 param_3,long *param_4,undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  while( true ) {
    while( true ) {
      uVar2 = *(ulong *)(param_1 + 0x10);
      plVar3 = param_4;
      func_0x000100491568(uVar2,param_4,param_5,0);
      iVar1 = (int)uVar2;
      if (iVar1 != 2) break;
      *(bool *)param_3 = uVar2 >> 0x20 != 0;
      *param_2 = (ulong)plVar3;
      (**(code **)(*plVar3 + 0x10))(plVar3,param_2,param_3);
      if (((ulong)plVar3 & 1) != 0) {
        return;
      }
    }
    if (iVar1 == 0) break;
    if (iVar1 == 1) {
      return;
    }
  }
  return;
}



/* Entry: 100491618; end: 100491667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100491618(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  double dVar18;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  
  FUN_1004673f0(param_1,param_2,0);
  lVar1 = lRam00000001136a1f48;
  if (lRam00000001136a1f48 == 0) {
    lVar1 = param_1;
    FUN_100467528();
  }
  FUN_10046778c(param_1,param_2,lVar1,0);
  if (param_2 >> 0x20 == 3) {
    dVar18 = (double)(int)param_2 / 1000000.0 + (double)param_1 * 1000.0 + 0.999999999;
    if (dVar18 <= -9.223372036854776e+18) {
      puVar2 = (undefined1 *)0x8000000000000000;
    }
    else if (9.223372036854776e+18 <= dVar18) {
      puVar2 = (undefined1 *)0x7fffffffffffffff;
    }
    else {
      puVar2 = (undefined1 *)(long)dVar18;
    }
    return puVar2;
  }
  func_0x000107c2c338();
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar15 = *(undefined8 *)(param_1 + _DAT_11274ae44);
  *(undefined **)(param_1 + _DAT_11274ae44) = puVar3;
  func_0x000107c61170(uVar15);
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar15 = *(undefined8 *)(param_1 + _DAT_11274ae48);
  *(undefined **)(param_1 + _DAT_11274ae48) = puVar3;
  func_0x000107c61170(uVar15);
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar15 = *(undefined8 *)(param_1 + _DAT_11274ae4c);
  *(undefined **)(param_1 + _DAT_11274ae4c) = puVar3;
  func_0x000107c61170(uVar15);
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c61160();
  uVar15 = *(undefined8 *)(param_1 + _DAT_11274ae50);
  *(undefined **)(param_1 + _DAT_11274ae50) = puVar3;
  func_0x000107c61170(uVar15);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(param_1 + _DAT_11274ae54);
  *(undefined **)(param_1 + _DAT_11274ae54) = puVar3;
  func_0x000107c61170(uVar15);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(param_1 + _DAT_11274ae58);
  *(undefined **)(param_1 + _DAT_11274ae58) = puVar3;
  func_0x000107c61170(uVar15);
  lVar1 = param_1;
  func_0x000107c3b034();
  func_0x000107c61180();
  lVar17 = (long)_DAT_11274ae5c;
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  *(long *)(param_1 + lVar17) = lVar1;
  func_0x000107c61170(uVar15);
  func_0x000107c61144(auStack_90,param_1);
  puVar4 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  puStack_a8 = &UNK_1065a2a28;
  puStack_a0 = &UNK_11092d188;
  func_0x000107c6111c(auStack_98,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  puStack_e0 = puVar3;
  uStack_d8 = 0xc2000000;
  puStack_d0 = &UNK_1065a2a68;
  puStack_c8 = &UNK_11092d1b8;
  func_0x000107c6111c(auStack_c0,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  puStack_108 = puVar3;
  uStack_100 = 0xc2000000;
  puStack_f8 = &UNK_1065a2aa8;
  puStack_f0 = &UNK_11092d1e8;
  func_0x000107c6111c(auStack_e8,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae720;
  puStack_130 = puVar3;
  uStack_128 = 0xc2000000;
  puStack_120 = &UNK_1065a2b70;
  puStack_118 = &UNK_11092d218;
  func_0x000107c6111c(auStack_110,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  puStack_158 = puVar3;
  uStack_150 = 0xc2000000;
  puStack_148 = &UNK_1065a2bb0;
  puStack_140 = &UNK_11092d248;
  func_0x000107c6111c(auStack_138,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ae720;
  puStack_180 = puVar3;
  uStack_178 = 0xc2000000;
  puStack_170 = &UNK_1065a2bf0;
  puStack_168 = &UNK_11092d278;
  func_0x000107c6111c(auStack_160,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_188,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126cbaf0;
  func_0x000107c610f4();
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  func_0x000107c4c9fc();
  func_0x000107c61180();
  func_0x000107c461b4();
  func_0x000107c61170(uVar15);
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11274ae64));
  uVar16 = *(undefined8 *)(param_1 + _DAT_11274ae68);
  puVar11 = PTR_PTR_1126cbaf8;
  func_0x000107c610f4();
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  func_0x000107c498a0(uVar15);
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_1 + lVar17);
  func_0x000107c3dcec();
  func_0x000107c61180();
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  func_0x000107c4ca44();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(param_1 + lVar17);
  func_0x000107c406f0();
  func_0x000107c61180();
  func_0x000107c46ef4();
  func_0x000107c42c20(uVar16);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_188);
  func_0x000107c61170(puVar9);
  func_0x000107c61120(auStack_160);
  func_0x000107c61170(puVar8);
  func_0x000107c61120(auStack_138);
  func_0x000107c61170(puVar7);
  func_0x000107c61120(auStack_110);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_e8);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_c0);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_98);
  puVar2 = auStack_90;
  func_0x000107c61120(puVar2);
  return puVar2;
}



/* Entry: 100491668; end: 100491a33;  */

undefined1  [16] FUN_100491668(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined ****ppppuVar10;
  int iVar11;
  int *piVar12;
  ulong uVar13;
  uint uVar14;
  ulong unaff_x28;
  undefined1 auVar15 [16];
  ulong uStack_118;
  undefined ***pppuStack_110;
  ulong auStack_108 [2];
  char cStack_f1;
  undefined ***pppuStack_f0;
  undefined **appuStack_e8 [9];
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  char cStack_70;
  
  if (param_4 != 0) {
    func_0x000107c2c41c();
    goto LAB_100491988;
  }
  plVar1 = param_1 + 9;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar5) {
      *param_1 = *param_1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_100491618(param_2,param_3);
  lStack_98 = param_1[0x15];
  lStack_80 = 0;
  uStack_78 = 0;
  cStack_70 = '\x01';
  pppuVar9 = appuStack_e8;
  plStack_90 = param_1;
  lStack_88 = param_2;
  FUN_100466e48(pppuVar9,0);
  plStack_a0 = &lStack_98;
  appuStack_e8[0] = &PTR_DAT_1107c71b0;
  plVar2 = param_1 + 0x14;
  do {
    lVar3 = lStack_80;
    if (lStack_80 != 0) {
      lStack_80 = 0;
      param_2 = *(long *)(lVar3 + 8);
      uVar13 = *(ulong *)(lVar3 + 0x20);
      (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 0x18));
      goto LAB_1004918cc;
    }
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        goto LAB_10049173c;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    auStack_108[0] = auStack_108[0] & 0xffffffffffffff00;
    plVar7 = param_1 + 10;
    FUN_1004920d0(param_1 + 10,auStack_108);
    *plVar1 = 0;
    pppuVar9 = (undefined ***)0x0;
    if (plVar7 != (long *)0x0) goto LAB_10049189c;
LAB_10049173c:
    lVar3 = 0;
    if (param_1[0x14] < 1) {
      lVar3 = param_2;
    }
    if (param_1[0x16] == 0) {
      if (*plVar2 < 1) {
        uVar13 = 0;
        unaff_x28 = 0;
        goto LAB_1004918ec;
      }
      iVar11 = 7;
    }
    else {
      if (cStack_70 == '\0') {
        func_0x000100460dc4();
        ppuVar8 = *pppuVar9;
        FUN_1004671a4();
        if (param_2 <= (long)ppuVar8) {
          uVar13 = 0;
          unaff_x28 = 1;
          goto LAB_1004918ec;
        }
      }
      FUN_100460448(param_1[1]);
      *(int *)(param_1 + 8) = (int)param_1[8] + 1;
      (**(code **)(param_1[3] + 0x20))
                (&pppuStack_f0,(long)plVar1 + *(long *)(param_1[2] + 8),0,lVar3);
      pppuVar9 = (undefined ***)param_1[1];
      func_0x000100466b80();
      if (pppuStack_f0 == (undefined ***)0x0) {
        cStack_70 = '\0';
        iVar11 = 0;
      }
      else {
        pppuStack_110 = pppuStack_f0;
        if (((ulong)pppuStack_f0 & 1) != 0) {
          piVar12 = (int *)((long)pppuStack_f0 + -1);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar5) {
              *piVar12 = *piVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        func_0x000104aba950(auStack_108,&pppuStack_110);
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/completion_queue.cc"
                      ,0x425,2,"Completion queue next failed: %s");
        if (cStack_f1 < '\0') {
          func_0x000107c60e14(auStack_108[0]);
        }
        if (((ulong)pppuStack_110 & 1) != 0) {
          FUN_10084dad0();
        }
        auStack_108[0] = 4;
        if (pppuStack_f0 == (undefined ***)0x4) {
          uVar14 = 1;
        }
        else {
          ppppuVar10 = &pppuStack_f0;
          func_0x000107c2b9bc(ppppuVar10,auStack_108);
          uVar14 = (uint)ppppuVar10;
          if ((auStack_108[0] & 1) != 0) {
            FUN_10084dad0();
          }
        }
        unaff_x28 = (ulong)(uVar14 ^ 1);
        pppuVar9 = pppuStack_f0;
        if (((ulong)pppuStack_f0 & 1) != 0) {
          FUN_10084dad0();
        }
        iVar11 = 6;
      }
    }
  } while (iVar11 != 6);
  uVar13 = 0;
  goto LAB_1004918ec;
LAB_10049189c:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = *plVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  param_2 = plVar7[1];
  uVar13 = plVar7[4];
  (*(code *)plVar7[2])(plVar7[3]);
LAB_1004918cc:
  uVar13 = uVar13 & 1;
  unaff_x28 = 2;
LAB_1004918ec:
  if ((0 < *plVar2) && (0 < param_1[0x16])) {
    FUN_100460448(param_1[1]);
    (**(code **)(param_1[3] + 0x18))(&uStack_118,(long)plVar1 + *(long *)(param_1[2] + 8),0);
    if ((uStack_118 & 1) != 0) {
      FUN_10084dad0();
    }
    func_0x000100466b80(param_1[1]);
  }
  FUN_100832ca0(param_1);
  if (lStack_80 == 0) {
    FUN_100467a48(appuStack_e8);
    auVar15._0_8_ = unaff_x28 & 0xffffffff | uVar13 << 0x20;
    auVar15._8_8_ = param_2;
    return auVar15;
  }
LAB_100491988:
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/completion_queue.cc"
                ,0x43e,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1004919b8);
  (*pcVar6)();
}



/* Entry: 100491a34; end: 100491ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100491a34(long param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  double dVar18;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  
  if (param_2 >> 0x20 == 3) {
    dVar18 = (double)(int)param_2 / 1000000.0 + (double)param_1 * 1000.0 + 0.999999999;
    if (dVar18 <= -9.223372036854776e+18) {
      puVar1 = (undefined1 *)0x8000000000000000;
    }
    else if (9.223372036854776e+18 <= dVar18) {
      puVar1 = (undefined1 *)0x7fffffffffffffff;
    }
    else {
      puVar1 = (undefined1 *)(long)dVar18;
    }
    return puVar1;
  }
  func_0x000107c2c338();
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar15 = *(undefined8 *)(param_1 + _DAT_11274ae44);
  *(undefined **)(param_1 + _DAT_11274ae44) = puVar2;
  func_0x000107c61170(uVar15);
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar15 = *(undefined8 *)(param_1 + _DAT_11274ae48);
  *(undefined **)(param_1 + _DAT_11274ae48) = puVar2;
  func_0x000107c61170(uVar15);
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar15 = *(undefined8 *)(param_1 + _DAT_11274ae4c);
  *(undefined **)(param_1 + _DAT_11274ae4c) = puVar2;
  func_0x000107c61170(uVar15);
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c61160();
  uVar15 = *(undefined8 *)(param_1 + _DAT_11274ae50);
  *(undefined **)(param_1 + _DAT_11274ae50) = puVar2;
  func_0x000107c61170(uVar15);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(param_1 + _DAT_11274ae54);
  *(undefined **)(param_1 + _DAT_11274ae54) = puVar2;
  func_0x000107c61170(uVar15);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(param_1 + _DAT_11274ae58);
  *(undefined **)(param_1 + _DAT_11274ae58) = puVar2;
  func_0x000107c61170(uVar15);
  lVar3 = param_1;
  func_0x000107c3b034();
  func_0x000107c61180();
  lVar17 = (long)_DAT_11274ae5c;
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  *(long *)(param_1 + lVar17) = lVar3;
  func_0x000107c61170(uVar15);
  func_0x000107c61144(auStack_90,param_1);
  puVar4 = PTR_PTR_1126ae720;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  puStack_a8 = &UNK_1065a2a28;
  puStack_a0 = &UNK_11092d188;
  func_0x000107c6111c(auStack_98,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  puStack_e0 = puVar2;
  uStack_d8 = 0xc2000000;
  puStack_d0 = &UNK_1065a2a68;
  puStack_c8 = &UNK_11092d1b8;
  func_0x000107c6111c(auStack_c0,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  puStack_108 = puVar2;
  uStack_100 = 0xc2000000;
  puStack_f8 = &UNK_1065a2aa8;
  puStack_f0 = &UNK_11092d1e8;
  func_0x000107c6111c(auStack_e8,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae720;
  puStack_130 = puVar2;
  uStack_128 = 0xc2000000;
  puStack_120 = &UNK_1065a2b70;
  puStack_118 = &UNK_11092d218;
  func_0x000107c6111c(auStack_110,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  puStack_158 = puVar2;
  uStack_150 = 0xc2000000;
  puStack_148 = &UNK_1065a2bb0;
  puStack_140 = &UNK_11092d248;
  func_0x000107c6111c(auStack_138,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ae720;
  puStack_180 = puVar2;
  uStack_178 = 0xc2000000;
  puStack_170 = &UNK_1065a2bf0;
  puStack_168 = &UNK_11092d278;
  func_0x000107c6111c(auStack_160,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_188,auStack_90);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126cbaf0;
  func_0x000107c610f4();
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  func_0x000107c4c9fc();
  func_0x000107c61180();
  func_0x000107c461b4();
  func_0x000107c61170(uVar15);
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11274ae64));
  uVar16 = *(undefined8 *)(param_1 + _DAT_11274ae68);
  puVar14 = PTR_PTR_1126cbaf8;
  func_0x000107c610f4();
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  func_0x000107c498a0();
  func_0x000107c61180();
  uVar11 = *(undefined8 *)(param_1 + lVar17);
  func_0x000107c3dcec();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_1 + lVar17);
  func_0x000107c4ca44();
  func_0x000107c61180();
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  func_0x000107c406f0();
  func_0x000107c61180();
  func_0x000107c46ef4();
  func_0x000107c42c20(uVar16);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_188);
  func_0x000107c61170(puVar9);
  func_0x000107c61120(auStack_160);
  func_0x000107c61170(puVar8);
  func_0x000107c61120(auStack_138);
  func_0x000107c61170(puVar7);
  func_0x000107c61120(auStack_110);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_e8);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_c0);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_98);
  puVar1 = auStack_90;
  func_0x000107c61120(puVar1);
  return puVar1;
}



/* Entry: 100491ab4; end: 1004920cf; -[SCConversationServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100491ab4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11274ae44);
  *(undefined **)(param_1 + _DAT_11274ae44) = puVar1;
  func_0x000107c61170(uVar14);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11274ae48);
  *(undefined **)(param_1 + _DAT_11274ae48) = puVar1;
  func_0x000107c61170(uVar14);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11274ae4c);
  *(undefined **)(param_1 + _DAT_11274ae4c) = puVar1;
  func_0x000107c61170(uVar14);
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c61160();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11274ae50);
  *(undefined **)(param_1 + _DAT_11274ae50) = puVar1;
  func_0x000107c61170(uVar14);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11274ae54);
  *(undefined **)(param_1 + _DAT_11274ae54) = puVar1;
  func_0x000107c61170(uVar14);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11274ae58);
  *(undefined **)(param_1 + _DAT_11274ae58) = puVar1;
  func_0x000107c61170(uVar14);
  lVar2 = param_1;
  func_0x000107c3b034();
  func_0x000107c61180();
  lVar16 = (long)_DAT_11274ae5c;
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  *(long *)(param_1 + lVar16) = lVar2;
  func_0x000107c61170(uVar14);
  func_0x000107c61144(auStack_80,param_1);
  puVar3 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_1065a2a28;
  puStack_90 = &UNK_11092d188;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_1065a2a68;
  puStack_b8 = &UNK_11092d1b8;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  puStack_e8 = &UNK_1065a2aa8;
  puStack_e0 = &UNK_11092d1e8;
  func_0x000107c6111c(auStack_d8,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  puStack_110 = &UNK_1065a2b70;
  puStack_108 = &UNK_11092d218;
  func_0x000107c6111c(auStack_100,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae720;
  puStack_148 = puVar1;
  uStack_140 = 0xc2000000;
  puStack_138 = &UNK_1065a2bb0;
  puStack_130 = &UNK_11092d248;
  func_0x000107c6111c(auStack_128,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  puStack_170 = puVar1;
  uStack_168 = 0xc2000000;
  puStack_160 = &UNK_1065a2bf0;
  puStack_158 = &UNK_11092d278;
  func_0x000107c6111c(auStack_150,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_178,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126cbaf0;
  func_0x000107c610f4();
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  func_0x000107c4c9fc();
  func_0x000107c61180();
  func_0x000107c461b4();
  func_0x000107c61170(uVar14);
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11274ae64));
  uVar15 = *(undefined8 *)(param_1 + _DAT_11274ae68);
  puVar13 = PTR_PTR_1126cbaf8;
  func_0x000107c610f4();
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  func_0x000107c498a0();
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(param_1 + lVar16);
  func_0x000107c3dcec();
  func_0x000107c61180();
  uVar11 = *(undefined8 *)(param_1 + lVar16);
  func_0x000107c4ca44();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_1 + lVar16);
  func_0x000107c406f0();
  func_0x000107c61180();
  func_0x000107c46ef4();
  func_0x000107c42c20(uVar15);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_178);
  func_0x000107c61170(puVar8);
  func_0x000107c61120(auStack_150);
  func_0x000107c61170(puVar7);
  func_0x000107c61120(auStack_128);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_100);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 1004920d0; end: 10049216b;  */

long * FUN_1004920d0(undefined8 *param_1,undefined1 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  plVar4 = (long *)param_1[8];
  plVar6 = (long *)*plVar4;
  plVar1 = param_1 + 9;
  if (plVar4 == plVar1) {
    if (plVar6 == (long *)0x0) {
      *param_2 = 1;
      return (long *)0x0;
    }
    param_1[8] = plVar6;
    plVar4 = plVar6;
    plVar6 = (long *)*plVar6;
  }
  if (plVar6 == (long *)0x0) {
    if (plVar4 == (long *)*param_1) {
      *plVar1 = 0;
      do {
        puVar7 = (undefined8 *)*param_1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *param_1 = plVar1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar7 = plVar1;
      lVar5 = *plVar4;
      if (lVar5 != 0) {
        *param_2 = 0;
        param_1[8] = lVar5;
        return plVar4;
      }
    }
    *param_2 = 0;
    return (long *)0x0;
  }
  *param_2 = 0;
  param_1[8] = plVar6;
  return plVar4;
}



/* Entry: 10049216c; end: 100492313;  */

undefined1  [16] FUN_10049216c(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_c0;
  uint uStack_b8;
  long *plStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  ulong uStack_88;
  undefined1 uStack_79;
  undefined8 uStack_78;
  undefined1 auStack_70 [48];
  char cStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_3;
  uStack_78 = param_4;
  FUN_100460338(auStack_70);
  cStack_40 = '\0';
  if (param_3 != (long *)0x0) {
    *param_3 = (long)auStack_70;
  }
  if ((char)param_2[0xd] == '\0') {
    plVar4 = (long *)0x18;
    func_0x000107c60e20();
    plVar4[2] = (long)auStack_70;
    puVar11 = (undefined8 *)param_2[9];
    *plVar4 = (long)(param_2 + 8);
    plVar4[1] = (long)puVar11;
    *puVar11 = plVar4;
    param_2[9] = (long)plVar4;
    param_2[10] = param_2[10] + 1;
    while ((char)param_2[0xb] == '\0') {
      puVar11 = &uStack_78;
      uVar10 = 1;
      FUN_10047e568(puVar11,1);
      FUN_100492314();
      uVar10 = uVar10 & 0xffffffff;
      FUN_100466ec8();
      puVar5 = auStack_70;
      plVar8 = param_2;
      FUN_100466590(puVar5,param_2,puVar11,uVar10);
      if (((int)puVar5 != 0) || (cStack_40 != '\0')) break;
    }
    lVar2 = *plVar4;
    *(long *)(lVar2 + 8) = plVar4[1];
    *(long *)plVar4[1] = lVar2;
    param_2[10] = param_2[10] + -1;
    func_0x000107c60e14(plVar4);
    if (((char)param_2[0xb] != '\0') && (param_2[10] == 0)) {
      plVar8 = (long *)param_2[0xc];
      uStack_88 = 0;
      FUN_1004bd7e8(&uStack_79,plVar8,&uStack_88);
      if ((uStack_88 & 1) != 0) {
        FUN_10084dad0();
      }
    }
  }
  else {
    *(undefined1 *)(param_2 + 0xd) = 0;
  }
  *param_1 = 0;
  puVar5 = auStack_70;
  FUN_100832c44();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar12._8_8_ = plVar8;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  func_0x000107c60e78();
  if ((int)plVar8 == 0) {
    func_0x000107c60bd8(puVar5);
  }
  puVar6 = puVar5;
  func_0x000104bd46a0();
  pcStack_98 = FUN_100492314;
  plStack_b0 = param_2;
  puStack_a8 = puVar5;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((ulong)plVar8 >> 0x20 == 3) {
    func_0x000107c2c178();
    auVar14._0_8_ = *(undefined8 *)(puVar6 + 0x18);
    auVar14._8_8_ = plVar8;
    return auVar14;
  }
  FUN_1004673f0();
  uVar7 = 1;
  plVar4 = plVar8;
  FUN_100466584(1);
  puVar5 = puVar6;
  plVar9 = plVar8;
  FUN_100466678(puVar6,plVar8,uVar7,plVar4);
  if ((int)puVar5 == 0) {
    uStack_c0 = 0x7fffffffffffffff;
  }
  else {
    uVar7 = 1;
    func_0x000104a6f550(1);
    puVar5 = puVar6;
    FUN_100466678(puVar6,plVar8,uVar7,plVar9);
    if ((int)puVar5 != 0) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      func_0x000107c2ba00(&uStack_c0,puVar6,0);
      iVar3 = (int)plVar8 % 1000000000;
      iVar1 = iVar3 * 4 + -0x1194d800;
      if (-1 < iVar3) {
        iVar1 = iVar3 * 4;
      }
      func_0x000107c2ba00(&uStack_c0,((long)iVar3 >> 0x3d) + (long)((int)plVar8 / 1000000000),iVar1)
      ;
      uVar10 = (ulong)uStack_b8;
      goto LAB_100492418;
    }
    uStack_c0 = 0x8000000000000000;
  }
  uVar10 = 0xffffffff;
LAB_100492418:
  auVar13._8_8_ = uVar10;
  auVar13._0_8_ = uStack_c0;
  return auVar13;
}



/* Entry: 100492314; end: 10049242f;  */

undefined1  [16] FUN_100492314(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uStack_30;
  uint uStack_28;
  
  if (param_2 >> 0x20 == 3) {
    func_0x000107c2c178();
    auVar8._0_8_ = *(undefined8 *)(param_1 + 0x18);
    auVar8._8_8_ = param_2;
    return auVar8;
  }
  FUN_1004673f0(param_1,param_2,1);
  uVar3 = 1;
  uVar6 = param_2;
  FUN_100466584(1);
  lVar4 = param_1;
  uVar5 = param_2;
  FUN_100466678(param_1,param_2,uVar3,uVar6);
  if ((int)lVar4 == 0) {
    uStack_30 = 0x7fffffffffffffff;
  }
  else {
    uVar3 = 1;
    func_0x000104a6f550(1);
    lVar4 = param_1;
    FUN_100466678(param_1,param_2,uVar3,uVar5);
    if ((int)lVar4 != 0) {
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x000107c2ba00(&uStack_30,param_1,0);
      iVar2 = (int)param_2 % 1000000000;
      iVar1 = iVar2 * 4 + -0x1194d800;
      if (-1 < iVar2) {
        iVar1 = iVar2 * 4;
      }
      func_0x000107c2ba00(&uStack_30,((long)iVar2 >> 0x3d) + (long)((int)param_2 / 1000000000),iVar1
                         );
      uVar6 = (ulong)uStack_28;
      goto LAB_100492418;
    }
    uStack_30 = 0x8000000000000000;
  }
  uVar6 = 0xffffffff;
LAB_100492418:
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = uStack_30;
  return auVar7;
}



/* Entry: 100492430; end: 10049243b;  */

void FUN_100492430(void)

{
  return;
}



/* Entry: 10049243c; end: 10049248b; -[SCNDuplexDuplexClientCppProxy appStateChanged:] */

void FUN_10049243c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  
  FUN_100492430(param_1,param_3);
  (**(code **)(extraout_x8 + 0x38))();
  return;
}



/* Entry: 10049248c; end: 1004924ab;  */

void FUN_10049248c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100492498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x60))();
  return;
}



/* Entry: 1004924ac; end: 10049252f;  */

long FUN_1004924ac(long param_1)

{
  undefined1 in_ZR;
  long extraout_x9;
  int extraout_w10;
  undefined8 uStack_80;
  undefined8 uStack_28;
  
  func_0x00010049249c(param_1);
  FUN_100492530();
  if (extraout_x9 != 0) {
    do {
      FUN_10048a5a8();
    } while (extraout_w10 != 0);
  }
  func_0x000100492544(FUN_100492cbc);
  func_0x000100492554();
  func_0x000100492560();
  func_0x00010049259c(uStack_80);
  func_0x0001004925a8();
  FUN_10048b398(uStack_28);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000107c34d68();
    func_0x0001004925a8();
    func_0x000107c34d70();
    return *(long *)(param_1 + 0x20);
  }
  return param_1;
}



/* Entry: 100492530; end: 1004925d3;  */

undefined8 FUN_100492530(long param_1)

{
  undefined8 in_x9;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x18) = in_x9;
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1004925d4; end: 1004925f7;  */

void FUN_1004925d4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004925f8; end: 10049260f;  */

void FUN_1004925f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100492610; end: 100492653;  */

void FUN_100492610(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100492654; end: 10049273b; -[SCDuplexAppUserLifecycleObserver initWithDuplexClient:memoryPressureState:applicationLifecycleEvents:] */

undefined1 *
FUN_100492654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126e7c28;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10049273c; end: 100492947; -[SCDuplexAppUserLifecycleObserver beginObserving] */

void FUN_10049273c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c41b80(uVar2);
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  puStack_80 = &UNK_105386cc0;
  puStack_78 = &UNK_110846510;
  func_0x000107c6111c(auStack_70,auStack_68);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5e370(uVar2);
  func_0x000107c61180();
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  puStack_a8 = &UNK_105386cec;
  puStack_a0 = &UNK_110846510;
  func_0x000107c6111c(auStack_98,auStack_68);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5e3d8(uVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_c0,auStack_68);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_c0);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 100492948; end: 10049294f;  */

void FUN_100492948(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100492950; end: 10049297b;  */

void FUN_100492950(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10049297c; end: 100492a2f; -[SCArroyoBackgroundTaskManager initWithBackgroundTaskWrapper:applicationLifecycleEvents:retryKeepaliveEnabled:foregroundRefreshEnabled:] */

undefined8
FUN_10049297c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c470d0();
  func_0x000107c458e8(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100492a30; end: 100492cbb; -[SCArroyoBackgroundTaskManager initWithBackgroundTaskWrapper:applicationLifecycleEvents:retryKeepaliveEnabled:foregroundRefreshEnabled:performer:] */

undefined8 *
FUN_100492a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,int param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_7);
  puStack_78 = PTR_PTR_1126e8db0;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 4) = param_5;
    *(char *)((long)puVar1 + 0x21) = (char)param_6;
    func_0x000107c61174(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ba4f0;
    func_0x000107c61160();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 7) = 1;
    if (param_6 != 0) {
      func_0x000107c61144(auStack_88,puVar1);
      uVar2 = param_4;
      func_0x000107c41b80(param_4);
      func_0x000107c61180();
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      puStack_a0 = &UNK_105524a30;
      puStack_98 = &UNK_110846510;
      func_0x000107c6111c(auStack_90,auStack_88);
      uVar4 = uVar2;
      func_0x000107c5c320(uVar2);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar2);
      uVar2 = param_4;
      func_0x000107c419f0(param_4);
      func_0x000107c61180();
      func_0x000107c6111c(auStack_b8,auStack_88);
      uVar4 = uVar2;
      func_0x000107c5c320(uVar2);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar2);
      func_0x000107c61120(auStack_b8);
      func_0x000107c61120(auStack_90);
      func_0x000107c61120(auStack_88);
    }
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100492cbc; end: 100492e1f;  */

void FUN_100492cbc(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x9;
  int extraout_w12;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_70;
  code *pcStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_28;
  
  FUN_100489ca8();
  plVar4 = &lStack_98;
  uStack_28 = extraout_x8;
  FUN_100492e20();
  lVar6 = lStack_98;
  if (lStack_98 != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    *(int *)(lStack_98 + 0xd8) = iVar1;
    if (*(long *)(lStack_98 + 0xa8) != 0) {
      *(int *)(*(long *)(lStack_98 + 0xa8) + 0xac) = iVar1;
    }
    if (iVar1 == 0) {
      FUN_100492e6c(lStack_98);
    }
    else {
      in_ZR = iVar1 == 1;
      if (((bool)in_ZR) && (*(long *)(lStack_98 + 0x58) != 0)) {
        func_0x000100492554();
        (*extraout_x8_00)();
        *(undefined1 *)(lVar6 + 0xa1) = 1;
      }
    }
    plVar4 = *(long **)(lStack_98 + 200);
    if (lStack_90 == 0) {
      lVar6 = 0;
    }
    else {
      plVar5 = (long *)(lStack_90 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        lVar6 = lStack_90;
      } while (cVar2 != '\0');
    }
    pcStack_58 = FUN_100493048;
    ppuStack_50 = &PTR_DAT_110abd968;
    lStack_48 = lStack_98;
    lStack_40 = lStack_90;
    uStack_70 = 0;
    if (lVar6 != 0) {
      do {
        FUN_100492ea4();
        uStack_70 = extraout_x9;
      } while (extraout_w12 != 0);
    }
    puStack_88 = &UNK_108c73548;
    ppuStack_80 = &PTR_DAT_110abd980;
    FUN_100492ec4();
    func_0x00010049259c(ppuStack_80);
    func_0x0001004931cc();
    func_0x0001004931b4(ppuStack_50);
    func_0x0001004931d8();
  }
  func_0x0001004931e0();
  FUN_10048b398(uStack_28);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    plVar5 = plVar4;
    func_0x0001004931e0();
    func_0x000107c34d70();
    *plVar5 = 0;
    plVar5[1] = 0;
    lVar6 = plVar4[3];
    if (lVar6 != 0) {
      func_0x000107c60d6c();
      plVar5[1] = lVar6;
      if (lVar6 != 0) {
        *plVar5 = plVar4[2];
      }
    }
    return;
  }
  return;
}



/* Entry: 100492e20; end: 100492e27;  */

void FUN_100492e20(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = *(long *)(unaff_x19 + 0x18);
  if (lVar1 != 0) {
    func_0x000107c60d6c();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *(undefined8 *)(unaff_x19 + 0x10);
    }
  }
  return;
}



/* Entry: 100492e28; end: 100492e63;  */

void FUN_100492e28(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    func_0x000107c60d6c();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 100492e64; end: 100492e6b;  */

void FUN_100492e64(void)

{
  return;
}



/* Entry: 100492e6c; end: 100492ea3;  */

void FUN_100492e6c(long param_1)

{
  if ((*(char *)(param_1 + 0xa1) == '\x01') && (*(long *)(param_1 + 0x58) != 0)) {
    func_0x000107c34dcc();
    *(undefined1 *)(param_1 + 0xa1) = 0;
  }
  return;
}



/* Entry: 100492ea4; end: 100492ec3;  */

void FUN_100492ea4(void)

{
  bool bVar1;
  long *in_x10;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x10,0x10);
  if (bVar1) {
    *in_x10 = *in_x10 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100492ec4; end: 100493013;  */

void FUN_100492ec4(long param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  long lVar6;
  code *UNRECOVERED_JUMPTABLE;
  int aiStack_e0 [2];
  undefined8 uStack_d8;
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [16];
  undefined *puStack_98;
  undefined1 auStack_90 [96];
  
  func_0x000100492eb4();
  uVar4 = param_2 == *(int *)(param_1 + 0x30);
  if (!(bool)uVar4) {
    *(int *)(param_1 + 0x30) = param_2;
    piVar1 = (int *)(param_1 + 0x3c);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar5 = param_2 == 1;
    if (bVar5) {
      uVar4 = *(long *)(param_1 + 0x20) == 0;
      if (*(long *)(param_1 + 0x20) < 1) {
        if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
          UNRECOVERED_JUMPTABLE = (code *)*param_4;
          FUN_100493014();
          if ((bool)uVar4) goto LAB_100492f28;
          goto LAB_100492fec;
        }
      }
      else if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
        lVar6 = param_1;
        func_0x000107c60d9c();
        *(long *)(param_1 + 0x28) = lVar6;
        uStack_d8 = *param_4;
        aiStack_e0[0] = iVar2 + 1;
        (**(code **)(param_4[1] + 0x10))(auStack_d0,param_4 + 1);
        func_0x000107c2bf88(auStack_a8,param_1);
        puStack_98 = &UNK_10b2816c0;
        func_0x000107c35248(auStack_90,aiStack_e0);
        func_0x000107c35258();
        func_0x000107c35250();
        func_0x000107c3526c();
        func_0x000107c35244(aiStack_e0);
      }
    }
    else {
      uVar4 = 0;
      if (param_2 == 0) {
        UNRECOVERED_JUMPTABLE = (code *)*param_3;
        param_4 = param_3;
        FUN_100493014();
        if (bVar5) {
LAB_100492f28:
                    /* WARNING: Could not recover jumptable at 0x000100493038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(param_4);
          return;
        }
        goto LAB_100492fec;
      }
    }
  }
  FUN_100493014();
  if ((bool)uVar4) {
    return;
  }
LAB_100492fec:
  func_0x000107c60e78();
  func_0x000107c35250();
  func_0x000107c35244(aiStack_e0);
  func_0x000107c35268();
  return;
}



/* Entry: 100493014; end: 100493047;  */

void FUN_100493014(void)

{
  return;
}



/* Entry: 100493048; end: 100493083;  */

void FUN_100493048(long *param_1)

{
  long unaff_x19;
  
  func_0x00010049303c();
  if (*(char *)((long)param_1 + 0xa2) == '\x01') {
    func_0x000107c2a8b8(param_1[0x24]);
    param_1 = *(long **)(unaff_x19 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x000100493080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 100493084; end: 100493107;  */

void FUN_100493084(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_80;
  
  FUN_100489ca8();
  FUN_100493108();
  func_0x000100493114();
  func_0x000100493160(FUN_1004932cc);
  func_0x000100493174();
  func_0x000100493180();
  func_0x0001004931b4(uStack_80);
  func_0x0001004931c0();
  FUN_10048b398(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001004931b4(uStack_80);
  func_0x0001004931c0();
  func_0x000107c34d70();
  return;
}



/* Entry: 100493108; end: 10049311b;  */

void FUN_100493108(void)

{
  return;
}



/* Entry: 10049311c; end: 100493157;  */

void FUN_10049311c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  *param_1 = param_2;
  if (param_3 == 0) {
    param_1[1] = 0;
  }
  else {
    func_0x000107c60d6c();
    param_1[1] = param_3;
    if (param_3 != 0) {
      return;
    }
  }
  func_0x00010527822c();
  return;
}



/* Entry: 100493158; end: 1004931ef;  */

void FUN_100493158(void)

{
  return;
}



/* Entry: 1004931f0; end: 10049328f;  */

undefined8 FUN_1004931f0(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  
  if ((bRam0000000113829a40 & 1) == 0) {
    iVar1 = 0x13829a40;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_100493384(auStack_68);
      puVar2 = auStack_68;
      FUN_10028f4b0();
      puRam0000000113829a38 = puVar2;
      FUN_100164334(auStack_68);
      func_0x000107c60e4c(0x113829a40);
    }
  }
  return 0x113829a38;
}



/* Entry: 100493290; end: 1004932cb;  */

void FUN_100493290(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  
  FUN_1004931f0();
  FUN_100493788();
  func_0x00010049379c(2);
  func_0x0001004937b0(param_1,auStack_48);
  func_0x0001004937c8();
  return;
}



/* Entry: 1004932cc; end: 10049330f;  */

void FUN_1004932cc(long param_1)

{
  long extraout_x8;
  long lVar1;
  undefined1 uStack_21;
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_100493290();
  *(undefined1 *)(lVar1 + 0xa2) = 1;
  func_0x00010049380c();
  func_0x000100493818((&PTR_FUN_110abda28)[extraout_x8],&uStack_21);
  return;
}



/* Entry: 100493310; end: 100493383; -[SCGrapheneChatMetric2 init] */

undefined1 * FUN_100493310(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc970;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100493384; end: 1004935db;  */

undefined8 * FUN_100493384(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [288];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10002b838(&uStack_188,&UNK_10f50ed01);
  FUN_10002b838(&uStack_1a0,"");
  FUN_10002b838(auStack_170,&UNK_10f50ed0c);
  FUN_1004935dc();
  FUN_1004935dc();
  FUN_1004935dc();
  FUN_1004935dc();
  FUN_1004935dc();
  FUN_1004935dc();
  FUN_1004935dc();
  FUN_1004935dc();
  FUN_1004935dc();
  FUN_1004935dc();
  FUN_1004935dc();
  FUN_1004935dc(auStack_170);
  puVar1 = auStack_170;
  FUN_1000e3098(&uStack_1c0,puVar1,0xd);
  param_1[1] = uStack_180;
  *param_1 = uStack_188;
  param_1[2] = uStack_178;
  uStack_180 = 0;
  uStack_178 = 0;
  param_1[4] = uStack_198;
  param_1[3] = uStack_1a0;
  param_1[5] = uStack_190;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  param_1[7] = uStack_1b8;
  param_1[6] = uStack_1c0;
  param_1[8] = uStack_1b0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1c0 = 0;
  FUN_1000e30f4(&uStack_1c0);
  lVar4 = 0x120;
  do {
    func_0x000107c60ca0(auStack_170 + lVar4);
    lVar4 = lVar4 + -0x18;
  } while (lVar4 != -0x18);
  func_0x000107c60ca0(&uStack_1a0);
  puVar2 = &uStack_188;
  func_0x000107c60ca0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  func_0x000107c60e78();
  puVar3 = auStack_50;
  lVar4 = -0x138;
  do {
    func_0x000107c60ca0(puVar3);
    puVar3 = puVar3 + -0x18;
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0);
  func_0x000107c60ca0(&uStack_1a0);
  func_0x000107c60ca0(&uStack_188);
  func_0x000107c60bd8(puVar2);
  func_0x00010002b82c(0);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50(0,puVar2,puVar1);
  return (undefined8 *)0x0;
}



/* Entry: 1004935dc; end: 1004935e3;  */

void FUN_1004935dc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c();
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 1004935e4; end: 10049371f; -[SCMessagingExperimentServiceImpl enableNativeMediaPrefetcher] */

undefined * FUN_1004935e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ba428;
  func_0x000107c61160(PTR_PTR_1126ba428);
  func_0x000107c55634();
  puVar6 = PTR_PTR_1126af7d0;
  func_0x000107c61160(PTR_PTR_1126af7d0);
  puVar4 = puVar3;
  func_0x000107c41214(puVar3);
  func_0x000107c61180();
  func_0x000107c5a494(puVar6,param_2,puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  uVar5 = uVar2;
  func_0x000107c4f558(uVar2,param_2,&PTR____CFConstantStringClassReference_110de8d78,puVar6,0);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar2);
  puVar3 = PTR_PTR_1126ba428;
  uVar2 = uVar5;
  func_0x000107c5dc0c(uVar5);
  func_0x000107c61180();
  lStack_48 = 0;
  func_0x000107c4e380(puVar3,param_2,uVar2,&lStack_48);
  func_0x000107c61180();
  lVar1 = lStack_48;
  func_0x000107c61170(uVar2);
  puVar6 = (undefined *)0x0;
  if (lVar1 == 0) {
    puVar6 = puVar3;
    func_0x000107c49cd8(puVar3);
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  return puVar6;
}



/* Entry: 100493720; end: 100493787; +[SCNativeMediaPrefetchMediaPrefetchConfig descriptor] */

void FUN_100493720(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc898 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a438e0,
                        &PTR____CFConstantStringClassReference_110de9af8,&PTR_DAT_1130e1ff0,
                        &PTR_s_isEnabled_1130e2008,5,0x14,0x1c);
    puRam00000001136bc898 = puVar1;
  }
  return;
}



/* Entry: 100493788; end: 1004937cf;  */

void FUN_100493788(void)

{
  return;
}



/* Entry: 1004937d0; end: 1004937ff;  */

undefined8 * FUN_1004937d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110abd510;
  FUN_1000e30f4(param_1 + 1);
  return param_1;
}



/* Entry: 100493800; end: 10049382f;  */

void FUN_100493800(void)

{
  return;
}



/* Entry: 100493830; end: 10049384b;  */

undefined8 FUN_100493830(void)

{
  func_0x000100493824();
  FUN_10049385c();
  return 1;
}



/* Entry: 10049384c; end: 10049385b;  */

void FUN_10049384c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            ();
  return;
}



/* Entry: 10049385c; end: 1004938a7;  */

undefined8 FUN_10049385c(void)

{
  undefined8 *unaff_x19;
  
  FUN_10049384c();
  FUN_1004938a8();
  FUN_10048aa48();
  FUN_1004938b4(*unaff_x19);
  func_0x00010048a70c();
  func_0x00010048a704();
  return 1;
}



/* Entry: 1004938a8; end: 1004938b3;  */

void FUN_1004938a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (&stack0x00000018);
  return;
}



/* Entry: 1004938b4; end: 100493a9b;  */

undefined8 * FUN_1004938b4(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong *puVar8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uStack_180;
  undefined8 uStack_178;
  int iStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  long lStack_128;
  int iStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  int aiStack_98 [2];
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_58;
  
  puVar5 = param_1;
  FUN_100489ca8();
  piVar7 = (int *)(puVar5 + 0x17);
  do {
    iVar1 = *piVar7 + 1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
    if (bVar4) {
      *piVar7 = iVar1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar12 = param_1[2];
  lVar2 = param_1[3];
  uStack_c8 = uVar12;
  lStack_c0 = lVar2;
  uStack_58 = extraout_x8;
  if (lVar2 != 0) {
    do {
      FUN_10048a5a8();
    } while (extraout_w10 != 0);
  }
  uVar6 = 0;
  FUN_100467380();
  if (lVar2 != 0) {
    do {
      FUN_10048a5a8();
    } while (extraout_w10_00 != 0);
  }
  uStack_130 = uVar12;
  lStack_128 = lVar2;
  iStack_e0 = iVar1;
  uStack_d8 = uVar6;
  uStack_d0 = param_2;
  if (lVar2 != 0) {
    do {
      FUN_10048a5a8();
    } while (extraout_w10_01 != 0);
  }
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_108 = CONCAT44(uStack_dc,iStack_e0);
  uStack_100 = uStack_d8;
  uStack_f8 = uStack_d0;
  puVar5 = param_1 + 0x25;
  iStack_120 = iVar1;
  uStack_118 = uVar12;
  lStack_110 = lVar2;
  FUN_100493a9c();
  if (puVar5 == (undefined8 *)0x0) {
    FUN_100493b08(&uStack_130);
  }
  else {
    uVar6 = param_1[4];
    uStack_130 = 0;
    lStack_128 = 0;
    uStack_118 = 0;
    lStack_110 = 0;
    uStack_158 = CONCAT44(uStack_dc,iStack_e0);
    uStack_150 = uStack_d8;
    uStack_148 = uStack_d0;
    puVar9 = puVar5;
    iStack_170 = iVar1;
    func_0x000107c60d9c();
    puStack_b8 = &UNK_108c73d74;
    ppuStack_b0 = &PTR_DAT_110abdb68;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_80 = CONCAT44(uStack_dc,iStack_e0);
    uStack_78 = uStack_d8;
    uStack_70 = uStack_d0;
    uStack_a8 = uVar12;
    lStack_a0 = lVar2;
    aiStack_98[0] = iVar1;
    uStack_90 = uVar12;
    lStack_88 = lVar2;
    func_0x000107c31468(auStack_140,uVar6,&puStack_b8,puVar9 + (long)puVar5 * 0x1e848);
    func_0x0001004931b4(ppuStack_b0);
    FUN_100688f2c(auStack_140);
    FUN_1004a5690(&uStack_180);
  }
  FUN_1004a5690(&uStack_130);
  FUN_10048b47c(&uStack_f0);
  FUN_10048b47c();
  FUN_10048b398(uStack_58);
  if ((bool)in_ZR) {
    FUN_100489ca8();
    FUN_100493108();
    func_0x000100493114();
    lStack_a0 = CONCAT44(lStack_a0._4_4_,1);
    func_0x000100493160(FUN_1004c16ec);
    uStack_78 = CONCAT44(uStack_78._4_4_,1);
    func_0x000100493174();
    piVar7 = aiStack_98;
    func_0x000100493180();
    func_0x0001004a5764(uStack_90);
    func_0x0001004931c0();
    FUN_10048b398(extraout_x8_00);
    if ((bool)in_ZR) {
      return param_1;
    }
    func_0x000107c60e78();
    func_0x0001004a5764(uStack_90);
    func_0x0001004931c0();
    func_0x000107c34d70();
    *param_1 = &PTR_DAT_110abdf10;
    uVar12 = *(undefined8 *)(piVar7 + 2);
    param_1[2] = *(undefined8 *)(piVar7 + 4);
    param_1[1] = uVar12;
    piVar7[2] = 0;
    piVar7[3] = 0;
    piVar7[4] = 0;
    piVar7[5] = 0;
    *(int *)(param_1 + 3) = piVar7[6];
    return param_1;
  }
  func_0x000107c60e78();
  func_0x0001004931b4(ppuStack_b0);
  FUN_1004a5690(&uStack_180);
  FUN_1004a5690(&uStack_130);
  FUN_10048b47c(&uStack_f0);
  puVar5 = &uStack_c8;
  FUN_10048b47c();
  func_0x000107c34d70();
  puVar8 = (ulong *)puVar5[3] + 1;
  puVar9 = *(undefined8 **)puVar5[3];
  if (puVar8 != (ulong *)puVar5[1]) {
    puVar5[3] = puVar8;
  }
  fVar10 = *(float *)(puVar5 + 4);
  if (0.0 < fVar10) {
    func_0x000107c2a87c(puVar5 + 0x13e,puVar5 + 5);
    fVar11 = fVar10 * (float)puVar9 + (float)puVar9;
    fVar10 = 0.0;
    if (0.0 <= fVar11) {
      fVar10 = fVar11;
    }
    puVar9 = (undefined8 *)(long)fVar10;
  }
  return puVar9;
}



/* Entry: 100493a9c; end: 100493b07;  */

ulong FUN_100493a9c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  puVar1 = *(ulong **)(param_1 + 0x18) + 1;
  uVar2 = **(ulong **)(param_1 + 0x18);
  if (puVar1 != *(ulong **)(param_1 + 8)) {
    *(ulong **)(param_1 + 0x18) = puVar1;
  }
  fVar3 = *(float *)(param_1 + 0x20);
  if (0.0 < fVar3) {
    func_0x000107c2a87c(param_1 + 0x9f0,param_1 + 0x28);
    fVar4 = fVar3 * (float)uVar2 + (float)uVar2;
    fVar3 = 0.0;
    if (0.0 <= fVar4) {
      fVar3 = fVar4;
    }
    uVar2 = (ulong)fVar3;
  }
  return uVar2;
}



/* Entry: 100493b08; end: 100493cd7;  */

void FUN_100493b08(long param_1)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  int extraout_w11;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  long alStack_b8 [2];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_100492e28(alStack_b8,param_1);
  if ((alStack_b8[0] != 0) && (*(int *)(param_1 + 0x10) == *(int *)(alStack_b8[0] + 0xb8))) {
    lVar2 = *(long *)(alStack_b8[0] + 0x48);
    FUN_100493cd8();
    FUN_10002b838(auStack_d0);
    func_0x000107c60de0(auStack_e8,*(undefined4 *)(param_1 + 0x10));
    plVar3 = *(long **)(lVar2 + 8);
    func_0x000107c60c94(&uStack_70,auStack_d0);
    func_0x000107c60c94(&uStack_88,auStack_e8);
    auStack_58[0] = 0;
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    uStack_40 = uStack_60;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_30 = uStack_80;
    uStack_38 = uStack_88;
    uStack_28 = uStack_78;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    puVar1 = (undefined8 *)0x48;
    func_0x000107c60e20();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_DAT_110abd7f8;
    puStack_98 = puVar1 + 3;
    *puStack_98 = &PTR_FUN_110abd848;
    lVar2 = *(long *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puVar1[5] = *(undefined8 *)(param_1 + 0x20);
    puVar1[4] = uVar4;
    if (lVar2 != 0) {
      do {
        func_0x000100493ce4();
        puStack_98 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    puVar1[7] = *(undefined8 *)(param_1 + 0x30);
    puVar1[6] = uVar4;
    puVar1[8] = *(undefined8 *)(param_1 + 0x38);
    uStack_a8 = 0;
    uStack_a0 = 0;
    puStack_90 = puVar1;
    (**(code **)(*plVar3 + 0x10))(plVar3,auStack_58,&puStack_98);
    func_0x00010049410c(&puStack_98);
    FUN_1004a5634(&uStack_a8);
    FUN_1004a5664(auStack_58);
    func_0x000107c60ca0(&uStack_88);
    func_0x000107c60ca0(&uStack_70);
    FUN_10048aa74();
    FUN_1004a5688();
  }
  func_0x00010048b4a0(alStack_b8);
  return;
}



/* Entry: 100493cd8; end: 100493cf3;  */

void FUN_100493cd8(void)

{
  return;
}



/* Entry: 100493cf4; end: 100493d8b;  */

void FUN_100493cf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_100493d8c(param_2);
  func_0x000107c61180();
  FUN_100493fb0(param_3);
  func_0x000107c61180();
  func_0x000107c43efc(uVar2);
  FUN_1004a51d0();
  FUN_10045a1ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 100493d8c; end: 100493e2f;  */

void FUN_100493d8c(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  byte *pbVar3;
  
  puVar2 = PTR_PTR_1126e0038;
  func_0x000107c610f4(PTR_PTR_1126e0038);
  pbVar3 = param_1 + 0x20;
  bVar1 = *param_1;
  param_1 = param_1 + 8;
  FUN_1001011a4(param_1);
  func_0x000107c61180();
  FUN_1001011a4(pbVar3);
  func_0x000107c61180();
  func_0x000107c45810(puVar2,param_2,bVar1 & 1,param_1,pbVar3);
  FUN_100493f1c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100493e30; end: 100493f1b; -[SCNGrpcAuthContextRequest initWithAttestationRequired:requestPath:networkRequestId:] */

undefined1 *
FUN_100493e30(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_11270b0a0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100493f1c; end: 100493f37;  */

void FUN_100493f1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100493f38; end: 100493faf;  */

void FUN_100493f38(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110ccfd38;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000100493f28();
    } while (extraout_w10 != 0);
  }
  FUN_10015c218(&ppuStack_28,&uStack_40,FUN_100493fdc);
  func_0x000107c61180();
  func_0x00010049413c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100493fb0; end: 100493fdb;  */

void FUN_100493fb0(long *param_1)

{
  if (*param_1 != 0) {
    FUN_100493f38();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100493fdc; end: 10049404f;  */

void FUN_100493fdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e0030;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000100493f28();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010049410c(&uStack_30);
  return;
}



/* Entry: 100494050; end: 100494093; -[SCNGrpcAuthContextCallback .cxx_construct] */

undefined8 * FUN_100494050(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000100493f28();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 100494094; end: 10049412f; -[SCNGrpcAuthContextCallback initWithCpp:] */

undefined1 * FUN_100494094(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127060a0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000100493f28();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010049410c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100494130; end: 100494147;  */

void FUN_100494130(void)

{
  return;
}



/* Entry: 100494148; end: 100494353; -[SCGrpcAuthContextDelegate getAuthContext:callback:] */

void FUN_100494148(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_78,param_2);
  func_0x000107c6071c();
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = param_4;
  func_0x000107c503dc(param_4);
  func_0x000107c61180();
  uVar3 = param_4;
  func_0x000107c4d5e4(param_4);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c4f7c0(uVar4);
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c4f7c0(uVar5);
  func_0x000107c61180();
  uStack_80 = param_1;
  func_0x000107c6111c(auStack_88,auStack_78);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_5);
  func_0x000107c42f90(uVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_78);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 100494354; end: 10049435b; -[SCNGrpcAuthContextRequest requestPath] */

undefined8 FUN_100494354(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


