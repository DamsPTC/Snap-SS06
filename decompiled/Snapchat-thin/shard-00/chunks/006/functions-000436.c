/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008f8ee8; end: 1008f955f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1008f8ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12,long param_13,
                  undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
                  undefined8 param_18)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_e8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  uStack_e8 = param_18;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  lVar2 = param_5;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
  }
  else {
    uVar3 = param_3;
    func_0x000107c5b478();
    func_0x000107c61180();
    uVar4 = param_3;
    func_0x000107c5b4b4();
    func_0x000107c61180();
    uVar5 = param_3;
    func_0x000107c5b4bc();
    func_0x000107c61180();
    FUN_1000285a8(0x112da1588,&UNK_10db4ed90);
    uVar6 = param_14;
    func_0x000107c4141c();
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c41424();
    func_0x000107c61180();
    func_0x000107c615e8(uVar6);
    uVar6 = uVar7;
    func_0x0001000b637c();
    func_0x000107c61170(uVar7);
    puVar8 = &UNK_1105d1618;
    func_0x000107c613fc(&UNK_1105d1618,0x18,7);
    *(undefined8 *)(puVar8 + 0x10) = param_11;
    puVar9 = &UNK_1105d1640;
    func_0x000107c613fc(&UNK_1105d1640,0x18,7);
    *(undefined8 *)(puVar9 + 0x10) = param_11;
    puVar10 = PTR_PTR_1126aeaf8;
    func_0x000107c610f8();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = &UNK_102dc05a4;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100e1779c;
    puStack_90 = &UNK_1105d1658;
    ppuVar11 = &puStack_a8;
    puStack_80 = puVar8;
    func_0x000107c60bc4(ppuVar11);
    puStack_b8 = &UNK_102dc058c;
    puStack_d8 = puVar1;
    uStack_d0 = 0x42000000;
    puStack_c8 = &UNK_100e17304;
    puStack_c0 = &UNK_1105d1680;
    ppuVar12 = &puStack_d8;
    puStack_b0 = puVar9;
    func_0x000107c60bc4(ppuVar12);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c47be0();
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61574(puStack_b0);
    func_0x000107c61574(puStack_80);
    uVar15 = *(undefined8 *)(param_13 + _DAT_113083868);
    lVar13 = 0;
    FUN_1008f95ac();
    func_0x000107c613fc();
    puVar8 = PTR_PTR_1126ac510;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c453e4();
    *(undefined **)(lVar13 + 0x10) = puVar8;
    *(undefined1 *)(lVar13 + 0x18) = 0;
    *(undefined8 *)(lVar13 + 0x20) = 0x72617473646c6f63;
    *(undefined8 *)(lVar13 + 0x28) = 0xe900000000000074;
    FUN_1000285a8(0x112d39420,&UNK_10d979900);
    uVar7 = uVar15;
    FUN_1000bda74();
    *(undefined8 *)(lVar13 + 0x30) = uVar7;
    FUN_1008f9640(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    uVar7 = uVar15;
    FUN_1008f9660();
    uVar16 = *(undefined8 *)(param_8 + _DAT_113021f38);
    puVar8 = &UNK_1105d16b8;
    func_0x000107c613fc(&UNK_1105d16b8,0xb8,7);
    *(long *)(puVar8 + 0x10) = lVar2;
    *(long *)(puVar8 + 0x18) = unaff_x20;
    *(undefined8 *)(puVar8 + 0x20) = uVar3;
    *(undefined8 *)(puVar8 + 0x28) = uVar4;
    *(undefined8 *)(puVar8 + 0x30) = uVar5;
    *(undefined8 *)(puVar8 + 0x38) = param_4;
    *(undefined8 *)(puVar8 + 0x40) = param_6;
    *(undefined8 *)(puVar8 + 0x48) = param_7;
    *(undefined8 *)(puVar8 + 0x50) = uVar16;
    *(undefined8 *)(puVar8 + 0x58) = param_9;
    *(undefined8 *)(puVar8 + 0x60) = param_11;
    *(undefined8 *)(puVar8 + 0x68) = param_17;
    *(undefined8 *)(puVar8 + 0x70) = param_16;
    *(undefined8 *)(puVar8 + 0x78) = param_18;
    *(undefined **)(puVar8 + 0x80) = puVar10;
    *(undefined8 *)(puVar8 + 0x88) = param_12;
    *(undefined8 *)(puVar8 + 0x90) = uVar6;
    *(long *)(puVar8 + 0x98) = lVar13;
    *(undefined8 *)(puVar8 + 0xa0) = uVar7;
    *(undefined8 *)(puVar8 + 0xa8) = param_10;
    *(undefined8 *)(puVar8 + 0xb0) = param_15;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c615f0(lVar2);
    func_0x000107c6157c();
    func_0x000107c61174();
    func_0x000107c61174(uVar4);
    func_0x000107c61174(uVar5);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(param_17);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(uVar6);
    func_0x000107c6157c(lVar13);
    func_0x000107c61174(uVar7);
    func_0x000107c61174();
    func_0x000107c61174();
    uVar14 = 8;
    func_0x0001001ca524(8,2,0x34,4,0,0,&UNK_10db4edb0,puVar8,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61574(uVar6);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(uVar15);
    func_0x000107c61574(lVar13);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar16);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(uVar14);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    uStack_e8 = param_18;
  }
  func_0x000107c61170(param_17);
  func_0x000107c61170(uStack_e8);
  return unaff_x20;
}



/* Entry: 1008f9560; end: 1008f9583;  */

void FUN_1008f9560(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f9584; end: 1008f95ab;  */

void FUN_1008f9584(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f95ac; end: 1008f95cb;  */

void FUN_1008f95ac(void)

{
  func_0x000107c61168(&PTR_PTR_112f18800);
  return;
}



/* Entry: 1008f95cc; end: 1008f963f; -[SCGrapheneFriendingInteractivePopoverMetricsMetric2 init] */

undefined1 * FUN_1008f95cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f23e0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1008f9640; end: 1008f965f;  */

void FUN_1008f9640(void)

{
  func_0x000107c61168(&PTR_PTR_1128a6f80);
  return;
}



/* Entry: 1008f9660; end: 1008f96eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1008f9660(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  FUN_1000285a8(0x112d39420,&UNK_10d979900);
  uVar1 = param_1;
  FUN_1000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112f189d0) = uVar1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1008f96ec; end: 1008f9797;  */

void FUN_1008f96ec(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f9798; end: 1008f97a3;  */

undefined ** FUN_1008f9798(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f97a4; end: 1008f982f;  */

void FUN_1008f97a4(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1008f9830,param_1);
  return;
}



/* Entry: 1008f9830; end: 1008f9837;  */

void FUN_1008f9830(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102dbe07c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f9838; end: 1008f98bb;  */

void FUN_1008f9838(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102dbe07c,param_2,FUN_1008f98bc,param_2,&UNK_102dbe080,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f98bc; end: 1008f98e3;  */

void FUN_1008f98bc(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1008f98e4; end: 1008f98f7;  */

void FUN_1008f98e4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100324400();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  *(undefined8 *)(lVar1 + 0x48) = uStack_a0;
  FUN_1008f9a98(0);
  func_0x000107c613fc();
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
  uVar7 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uStack_a0);
  FUN_1008f9ab8(uStack_68,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uStack_a0);
  *(undefined8 *)(lVar1 + 0x10) = uStack_68;
  *param_1 = lVar1;
  return;
}



/* Entry: 1008f98f8; end: 1008f9a97;  */

void FUN_1008f98f8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  FUN_100324400();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  FUN_1008f9a98(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uStack_a0);
  FUN_1008f9ab8(uStack_68,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uStack_a0);
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  *param_1 = param_2;
  return;
}



/* Entry: 1008f9a98; end: 1008f9ab7;  */

void FUN_1008f9a98(void)

{
  func_0x000107c61168(&PTR_PTR_112f18a80);
  return;
}



/* Entry: 1008f9ab8; end: 1008f9def;  */

long FUN_1008f9ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  puVar1 = &UNK_1105d24c8;
  func_0x000107c613fc(&UNK_1105d24c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  puVar2 = &UNK_1105d24f0;
  func_0x000107c613fc(&UNK_1105d24f0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  puVar3 = &UNK_1105d2518;
  func_0x000107c613fc(&UNK_1105d2518,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_6;
  puVar4 = &UNK_1105d2540;
  func_0x000107c613fc(&UNK_1105d2540,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_6;
  puVar5 = &UNK_1105d2568;
  func_0x000107c613fc(&UNK_1105d2568,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_6;
  puVar6 = &UNK_1105d2590;
  func_0x000107c613fc(&UNK_1105d2590,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_6;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = param_7;
  func_0x000107c444a4();
  func_0x000107c61180();
  FUN_1008f9e34(0);
  func_0x000107c613fc();
  FUN_1008f9e54();
  puVar8 = &UNK_1105d25b8;
  func_0x000107c613fc(&UNK_1105d25b8,0xa8,7);
  *(undefined **)(puVar8 + 0x10) = &UNK_102dd13dc;
  *(undefined **)(puVar8 + 0x18) = puVar1;
  *(undefined8 *)(puVar8 + 0x20) = param_2;
  *(undefined8 *)(puVar8 + 0x28) = param_3;
  *(undefined8 *)(puVar8 + 0x30) = param_4;
  *(undefined8 *)(puVar8 + 0x38) = uVar7;
  *(long *)(puVar8 + 0x40) = unaff_x20;
  *(undefined8 *)(puVar8 + 0x48) = param_5;
  *(undefined **)(puVar8 + 0x50) = &UNK_102dd13e8;
  *(undefined **)(puVar8 + 0x58) = puVar4;
  *(undefined **)(puVar8 + 0x60) = &UNK_102dd13e0;
  *(undefined **)(puVar8 + 0x68) = puVar2;
  *(undefined **)(puVar8 + 0x70) = &UNK_102dd13e4;
  *(undefined **)(puVar8 + 0x78) = puVar3;
  *(undefined **)(puVar8 + 0x80) = &UNK_102dd13ec;
  *(undefined **)(puVar8 + 0x88) = puVar5;
  *(undefined **)(puVar8 + 0x90) = &UNK_102dd13f0;
  *(undefined **)(puVar8 + 0x98) = puVar6;
  *(undefined8 *)(puVar8 + 0xa0) = param_8;
  func_0x000107c6157c(puVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(unaff_x20);
  func_0x000107c61174(param_5);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar6);
  func_0x000107c61174(param_8);
  uVar9 = 0x10;
  func_0x0001001ca524(0x10,2,0x34,4,0,0,&UNK_10db4f620,puVar8,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(uVar9);
  return unaff_x20;
}



/* Entry: 1008f9df0; end: 1008f9e13;  */

void FUN_1008f9df0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f9e14; end: 1008f9e33;  */

void FUN_1008f9e14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f9e34; end: 1008f9e53;  */

void FUN_1008f9e34(void)

{
  func_0x000107c61168(&PTR_PTR_112f19770);
  return;
}



/* Entry: 1008f9e54; end: 1008f9e5f;  */

void FUN_1008f9e54(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1008f9e60; end: 1008f9ebb;  */

void FUN_1008f9e60(void)

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



/* Entry: 1008f9ebc; end: 1008f9edf;  */

undefined ** FUN_1008f9ebc(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f9ee0; end: 1008f9f5f;  */

void FUN_1008f9ee0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110699be8;
  func_0x000107c613fc(&UNK_110699be8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1008f9f60,puVar1);
  return;
}



/* Entry: 1008f9f60; end: 1008f9f67;  */

void FUN_1008f9f60(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f9d2b0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f9d2b0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110699c80;
  func_0x000107c613fc(&UNK_110699c80,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1038102b8;
  FUN_10058fa64(&UNK_1038102b8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f9f68; end: 1008fa05f;  */

void FUN_1008f9f68(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f9d2b0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f9d2b0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110699c80;
  func_0x000107c613fc(&UNK_110699c80,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1038102b8;
  FUN_10058fa64(&UNK_1038102b8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008fa060; end: 1008fa083;  */

void FUN_1008fa060(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008fa084; end: 1008fa08f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008fa084(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  lVar4 = lVar1;
  FUN_10033d7cc();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112f9d2c0) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112f9d2c8) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112f9d2d0) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1008fa090; end: 1008fa133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008fa090(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_2;
  FUN_10033d7cc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f9d2c0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f9d2c8) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112f9d2d0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1008fa134; end: 1008fa193;  */

void FUN_1008fa134(void)

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



/* Entry: 1008fa194; end: 1008fa1bb;  */

undefined ** FUN_1008fa194(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008fa1bc; end: 1008fa1fb;  */

void FUN_1008fa1bc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001008fa1a0();
  FUN_100082720("GamesExplorerActionBarPresenterServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x56,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1008fa1fc; end: 1008fa203;  */

void FUN_1008fa1fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102df142c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008fa204; end: 1008fa287;  */

void FUN_1008fa204(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102df142c,param_2,&UNK_102df1430,param_2,&UNK_102df1458,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008fa288; end: 1008fa2af;  */

undefined ** FUN_1008fa288(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008fa2b0; end: 1008fa2ef;  */

void FUN_1008fa2b0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001008fa294();
  FUN_100082720("GamesExplorerLaunchingServiceProviderWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1008fa2f0; end: 1008fa2f7;  */

void FUN_1008fa2f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102df172c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008fa2f8; end: 1008fa37b;  */

void FUN_1008fa2f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102df172c,param_2,&UNK_102df1730,param_2,&UNK_102df1758,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008fa37c; end: 1008fa3a3;  */

undefined ** FUN_1008fa37c(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008fa3a4; end: 1008fa3e3;  */

void FUN_1008fa3a4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001008fa388();
  FUN_100082720("GamesExplorerPresentationServiceProviderWrapperScopeInitializationPluginProvider",
                0x50,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1008fa3e4; end: 1008fa3eb;  */

void FUN_1008fa3e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102df1c70);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008fa3ec; end: 1008fa46f;  */

void FUN_1008fa3ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102df1c70,param_2,&UNK_102df1c74,param_2,&UNK_102df1c9c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008fa470; end: 1008fa497;  */

undefined ** FUN_1008fa470(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008fa498; end: 1008fa4d7;  */

void FUN_1008fa498(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001008fa47c();
  FUN_100082720("GamesServiceProviderWrapperScopeInitializationPluginProvider",0x3c,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1008fa4d8; end: 1008fa4df;  */

void FUN_1008fa4d8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102df2040);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008fa4e0; end: 1008fa563;  */

void FUN_1008fa4e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102df2040,param_2,&UNK_102df2044,param_2,&UNK_102df206c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008fa564; end: 1008fa58b;  */

undefined ** FUN_1008fa564(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008fa58c; end: 1008fa5cb;  */

void FUN_1008fa58c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001008fa570();
  FUN_100082720("GenerativeAIOnboardingServiceProviderWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1008fa5cc; end: 1008fa5d3;  */

void FUN_1008fa5cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d45354);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008fa5d4; end: 1008fa657;  */

void FUN_1008fa5d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d45354,param_2,&UNK_102d45358,param_2,&UNK_102d45380,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008fa658; end: 1008fa663;  */

undefined ** FUN_1008fa658(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008fa664; end: 1008fa6ef;  */

void FUN_1008fa664(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1008fa6f0,param_1);
  return;
}



/* Entry: 1008fa6f0; end: 1008fa6f7;  */

void FUN_1008fa6f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102f22cec);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008fa6f8; end: 1008fa77b;  */

void FUN_1008fa6f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102f22cec,param_2,FUN_1008fa77c,param_2,&UNK_102f22cf0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008fa77c; end: 1008fa7a3;  */

void FUN_1008fa77c(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1008fa7a4; end: 1008fa7b3;  */

void FUN_1008fa7a4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  FUN_1003248f8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  func_0x000100905c5c(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uStack_90);
  FUN_100905c7c(uStack_68,uVar2,uVar3,uVar4,uVar5,uStack_90);
  *(undefined8 *)(lVar1 + 0x10) = uStack_68;
  *param_1 = lVar1;
  return;
}



/* Entry: 1008fa7b4; end: 1008fa903;  */

void FUN_1008fa7b4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  FUN_1003248f8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  func_0x000100905c5c(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uStack_90);
  FUN_100905c7c(uStack_68,uVar1,uVar2,uVar3,uVar4,uStack_90);
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  *param_1 = param_2;
  return;
}



/* Entry: 1008fa904; end: 1008fa90b;  */

void FUN_1008fa904(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1008fa90c; end: 1008fa95f;  */

void FUN_1008fa90c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1008fa960; end: 1008fac9b;  */

void FUN_1008fa960(long *param_1,long param_2)

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
  FUN_100291ed0();
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
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_b8;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174();
  uVar6 = uStack_88;
  func_0x000107c61174();
  uVar7 = uStack_90;
  func_0x000107c61174();
  uVar8 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar9 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar10 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar11 = uStack_b0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  func_0x0001008fb3fc();
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = uVar12;
  FUN_1008fb41c();
  *(undefined8 *)(param_2 + 0x10) = uVar13;
  func_0x000107c6157c();
  FUN_1008fb74c();
  func_0x000107c61574(uVar13);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar3);
    *(undefined **)(param_2 + 0x68) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008fac9c);
  (*pcVar1)();
}



/* Entry: 1008fac9c; end: 1008faccf;  */

void FUN_1008fac9c(void)

{
  long unaff_x20;
  
  FUN_1008fa960(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1008facd0; end: 1008facd7;  */

void FUN_1008facd0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1008facd8; end: 1008fad2b;  */

void FUN_1008facd8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1008fad2c; end: 1008fad3b;  */

void FUN_1008fad2c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_1000a10a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126a7358;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar11 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar11);
  uVar9 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd20);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar11);
  uVar9 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar11);
  uVar9 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar11);
  uVar9 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  uVar11 = *(undefined8 *)(lVar2 + 0x10);
  lVar10 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174(uVar11);
  func_0x000107c61174();
  uVar9 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef85c00);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar11);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar10 != 0) {
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    *(long *)(lVar2 + 0x40) = lVar10;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008fb0fc);
  (*pcVar1)();
}



/* Entry: 1008fad3c; end: 1008fb0fb;  */

void FUN_1008fad3c(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
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
  FUN_1000a10a8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7358;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar10);
  uVar8 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd20);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar8 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar8 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar8 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  lVar9 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar8 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef85c00);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(uVar10);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar9 != 0) {
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    *(long *)(param_2 + 0x40) = lVar9;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008fb0fc);
  (*pcVar1)();
}



/* Entry: 1008fb0fc; end: 1008fb2eb; -[SCNotificationDisplayServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008fb0fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  puStack_80 = &UNK_105310cb8;
  puStack_78 = &UNK_110878ba0;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_b8 = puVar3;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_100962364;
  puStack_a0 = &UNK_110878bd0;
  func_0x000107c6111c(auStack_98,auStack_68);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_c0,auStack_68);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126b74e0;
  func_0x000107c610f4(PTR_PTR_1126b74e0);
  func_0x000107c47b14();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_1127216a4));
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_c0);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_98);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 1008fb2ec; end: 1008fb3b7; -[SCNotificationDisplayServices initWithNotificationRemover:notificationEmitter:notificationScreenAccessor:] */

undefined1 *
FUN_1008fb2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112702d60;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008fb3b8; end: 1008fb41b;  */

void FUN_1008fb3b8(void)

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



/* Entry: 1008fb41c; end: 1008fb737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008fb41c(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  long param_10,undefined8 param_11)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(param_2 + _DAT_113091b58);
  uVar4 = *(undefined8 *)(param_2 + _DAT_113091b70);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
  lVar7 = _DAT_113092298;
  iVar6 = (int)*(undefined8 *)(param_9 + _DAT_113092298);
  lVar3 = param_2;
  func_0x000107c61174();
  func_0x000107c615f0(uVar4);
  FUN_1008fb738();
  plVar1 = (long *)&DAT_113091bd0;
  if (iVar6 == 0) {
    plVar1 = (long *)&DAT_113091bc0;
  }
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(param_2 + *plVar1);
  *(undefined8 *)(unaff_x20 + 0x28) = param_7;
  uVar5 = *(undefined8 *)(param_1 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar4 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar4;
  *(long *)(unaff_x20 + 0x38) = lVar3;
  *(long *)(unaff_x20 + 0x40) = param_3;
  *(undefined8 *)(unaff_x20 + 0x48) = param_4;
  *(undefined8 *)(unaff_x20 + 0x50) = param_6;
  *(undefined8 *)(unaff_x20 + 0x58) = param_5;
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = param_8;
  func_0x000107c3ddb0();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x88) = uVar4;
  uVar4 = *(undefined8 *)(param_9 + lVar7);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar4;
  if (param_10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_10 + _DAT_11309bf10);
    func_0x000107c615f0();
  }
  *(undefined8 *)(unaff_x20 + 0x68) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x70) = param_11;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  func_0x000107c615f0(uVar4);
  func_0x000107c61174(param_11);
  func_0x000107c61574(uVar5);
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x90) = puVar2;
  lVar7 = param_3;
  func_0x000107c3e270();
  func_0x000107c61180();
  lVar3 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar3 == 0) {
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_10);
    lVar7 = 0;
  }
  else {
    lVar7 = lVar3;
    func_0x000107c4f800();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_10);
  }
  *(long *)(unaff_x20 + 0x80) = lVar7;
  return;
}



/* Entry: 1008fb738; end: 1008fb74b;  */

void FUN_1008fb738(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e9fad8,0,0);
  return;
}



/* Entry: 1008fb74c; end: 1008fc5e3;  */

/* WARNING: Possible PIC construction at 0x0001008fb928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fb978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fb994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fba4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fbb2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fbb90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fbbf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fbc90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fbca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fbd08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fbdac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fbdbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fbdcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc2d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc2f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc3c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc3d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc3e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc54c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc4cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008fc4c0) */
/* WARNING: Removing unreachable block (ram,0x0001008fc4b0) */
/* WARNING: Removing unreachable block (ram,0x0001008fc588) */
/* WARNING: Removing unreachable block (ram,0x0001008fc578) */
/* WARNING: Removing unreachable block (ram,0x0001008fc568) */
/* WARNING: Removing unreachable block (ram,0x0001008fc550) */
/* WARNING: Removing unreachable block (ram,0x0001008fc53c) */
/* WARNING: Removing unreachable block (ram,0x0001008fc524) */
/* WARNING: Removing unreachable block (ram,0x0001008fc42c) */
/* WARNING: Removing unreachable block (ram,0x0001008fc41c) */
/* WARNING: Removing unreachable block (ram,0x0001008fc404) */
/* WARNING: Removing unreachable block (ram,0x0001008fc3ec) */
/* WARNING: Removing unreachable block (ram,0x0001008fc3d4) */
/* WARNING: Removing unreachable block (ram,0x0001008fc3c4) */
/* WARNING: Removing unreachable block (ram,0x0001008fc3ac) */
/* WARNING: Removing unreachable block (ram,0x0001008fc398) */
/* WARNING: Removing unreachable block (ram,0x0001008fc35c) */
/* WARNING: Removing unreachable block (ram,0x0001008fc2d8) */
/* WARNING: Removing unreachable block (ram,0x0001008fc248) */
/* WARNING: Removing unreachable block (ram,0x0001008fc24c) */
/* WARNING: Removing unreachable block (ram,0x0001008fc208) */
/* WARNING: Removing unreachable block (ram,0x0001008fc2f4) */
/* WARNING: Removing unreachable block (ram,0x0001008fc21c) */
/* WARNING: Removing unreachable block (ram,0x0001008fc138) */
/* WARNING: Removing unreachable block (ram,0x0001008fc018) */
/* WARNING: Removing unreachable block (ram,0x0001008fbdd0) */
/* WARNING: Removing unreachable block (ram,0x0001008fc46c) */
/* WARNING: Removing unreachable block (ram,0x0001008fbdd8) */
/* WARNING: Removing unreachable block (ram,0x0001008fc4d8) */
/* WARNING: Removing unreachable block (ram,0x0001008fbf50) */
/* WARNING: Removing unreachable block (ram,0x0001008fbdc0) */
/* WARNING: Removing unreachable block (ram,0x0001008fbdb0) */
/* WARNING: Removing unreachable block (ram,0x0001008fbd0c) */
/* WARNING: Removing unreachable block (ram,0x0001008fbcac) */
/* WARNING: Removing unreachable block (ram,0x0001008fbc94) */
/* WARNING: Removing unreachable block (ram,0x0001008fbbf8) */
/* WARNING: Removing unreachable block (ram,0x0001008fbd24) */
/* WARNING: Removing unreachable block (ram,0x0001008fbc1c) */
/* WARNING: Removing unreachable block (ram,0x0001008fbc48) */
/* WARNING: Removing unreachable block (ram,0x0001008fbc60) */
/* WARNING: Removing unreachable block (ram,0x0001008fbb94) */
/* WARNING: Removing unreachable block (ram,0x0001008fbb30) */
/* WARNING: Removing unreachable block (ram,0x0001008fba50) */
/* WARNING: Removing unreachable block (ram,0x0001008fc5bc) */
/* WARNING: Removing unreachable block (ram,0x0001008fb998) */
/* WARNING: Removing unreachable block (ram,0x0001008fb97c) */
/* WARNING: Removing unreachable block (ram,0x0001008fb9a4) */
/* WARNING: Removing unreachable block (ram,0x0001008fb9b0) */
/* WARNING: Removing unreachable block (ram,0x0001008fba70) */
/* WARNING: Removing unreachable block (ram,0x0001008fba00) */
/* WARNING: Removing unreachable block (ram,0x0001008fb980) */
/* WARNING: Removing unreachable block (ram,0x0001008fb92c) */
/* WARNING: Removing unreachable block (ram,0x0001008fc4d0) */
/* WARNING: Removing unreachable block (ram,0x0001008fc584) */

void FUN_1008fb74c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long extraout_x12;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_1a0 [144];
  long lStack_110;
  long lStack_108;
  undefined *puStack_100;
  long lStack_e8;
  undefined1 *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  
  lVar1 = 0;
  func_0x000107c5f824();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar2 = 0;
  puStack_e0 = auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar7 = (long)(auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_d0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = 0x112d36580;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar4 = *(undefined **)(unaff_x20 + 0x30);
  uVar6 = *(ulong *)(unaff_x20 + 0x38);
  func_0x000107c61434(uVar6);
  FUN_1008fc608(puVar4);
  if (uVar6 >> 0x3c < 0xf) {
    puVar5 = PTR_PTR_1126ba6c8;
    lStack_110 = lVar8;
    lStack_108 = lVar1;
    lStack_e8 = lVar7 - extraout_x12;
    lStack_d8 = lVar2;
    func_0x000107c610f8();
    FUN_10006c00c(puVar4,uVar6);
    func_0x000107c5ee20(puVar4,uVar6);
    func_0x000107c46d34();
    puStack_100 = puVar5;
  }
  else {
    puVar4 = PTR_PTR_1126a9768;
    func_0x000107c610f8(PTR_PTR_1126a9768);
    func_0x000107c47950();
    func_0x000107c42c20(*(undefined8 *)(unaff_x20 + 0x70));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1008fc5e4; end: 1008fc607;  */

void FUN_1008fc5e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008fc608; end: 1008fc7af;  */

undefined1  [16] FUN_1008fc608(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar1 = 0x112d3bc20;
  FUN_1000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000107c5eea8(puVar5,param_1,param_2);
  func_0x000107c6142c(param_2);
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar6 = *(long *)(lVar1 + -8);
  uVar3 = 1;
  puVar2 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001018d3afc(puVar5);
    lVar6 = 0;
    uVar4 = 0xf000000000000000;
  }
  else {
    func_0x000107c5eec0();
    (**(code **)(lVar6 + 8))(puVar5,lVar1);
    lVar1 = 0x112d48d68;
    FUN_1000285a8(0x112d48d68,&UNK_10d912150);
    uVar4 = 0x30;
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 0x20;
    *(undefined8 *)(lVar1 + 0x10) = 0x10;
    *(char *)(lVar1 + 0x20) = (char)puVar2;
    *(char *)(lVar1 + 0x21) = (char)((ulong)puVar2 >> 8);
    *(char *)(lVar1 + 0x22) = (char)((ulong)puVar2 >> 0x10);
    *(char *)(lVar1 + 0x23) = (char)((ulong)puVar2 >> 0x18);
    *(char *)(lVar1 + 0x24) = (char)((ulong)puVar2 >> 0x20);
    *(char *)(lVar1 + 0x25) = (char)((ulong)puVar2 >> 0x28);
    *(char *)(lVar1 + 0x26) = (char)((ulong)puVar2 >> 0x30);
    *(char *)(lVar1 + 0x27) = (char)((ulong)puVar2 >> 0x38);
    *(char *)(lVar1 + 0x28) = (char)uVar3;
    *(char *)(lVar1 + 0x29) = (char)((ulong)uVar3 >> 8);
    *(char *)(lVar1 + 0x2a) = (char)((ulong)uVar3 >> 0x10);
    *(char *)(lVar1 + 0x2b) = (char)((ulong)uVar3 >> 0x18);
    *(char *)(lVar1 + 0x2c) = (char)((ulong)uVar3 >> 0x20);
    *(char *)(lVar1 + 0x2d) = (char)((ulong)uVar3 >> 0x28);
    *(char *)(lVar1 + 0x2e) = (char)((ulong)uVar3 >> 0x30);
    *(char *)(lVar1 + 0x2f) = (char)((ulong)uVar3 >> 0x38);
    lVar6 = lVar1;
    FUN_1004496cc();
    func_0x000107c61574(lVar1);
  }
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = lVar6;
  return auVar7;
}



/* Entry: 1008fc7b0; end: 1008fc83b; -[SCNShimsUUID initWithId:] */

undefined1 * FUN_1008fc7b0(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffc0;
  FUN_1008fc83c();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c40794();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    func_0x000107c61170(uVar2);
  }
  func_0x0001008fc84c();
  return puVar1;
}



/* Entry: 1008fc83c; end: 1008fc853;  */

void FUN_1008fc83c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1008fc854; end: 1008fc89b;  */

undefined8 FUN_1008fc854(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_1000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1008fc89c; end: 1008fca27;  */

/* WARNING: Possible PIC construction at 0x0001008fc920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc9b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc9d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008fc9e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008fc9dc) */
/* WARNING: Removing unreachable block (ram,0x0001008fc9b8) */
/* WARNING: Removing unreachable block (ram,0x0001008fc9a4) */
/* WARNING: Removing unreachable block (ram,0x0001008fc9bc) */
/* WARNING: Removing unreachable block (ram,0x0001008fc9ac) */
/* WARNING: Removing unreachable block (ram,0x0001008fc924) */
/* WARNING: Removing unreachable block (ram,0x0001008fc964) */
/* WARNING: Removing unreachable block (ram,0x0001008fc9ec) */
/* WARNING: Removing unreachable block (ram,0x0001008fc9f4) */
/* WARNING: Removing unreachable block (ram,0x0001008fca0c) */

void FUN_1008fc89c(undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5edc4();
  puVar3 = puVar2;
  plVar4 = param_2;
  func_0x000107c5fb5c();
  if ((long)puVar3 < 1) {
    func_0x000107c6142c(param_2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
      func_0x000107c60e78();
      if (*plVar4 == 0) {
        lVar5 = *param_3;
        func_0x000107c61168();
        func_0x000107c614ec();
        *plVar4 = lVar5;
        return;
      }
      return;
    }
  }
  else {
    func_0x000107c5fadc(puVar2,param_2);
    func_0x000107c43418(puVar1);
    puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1008fca28; end: 1008fca67;  */

void FUN_1008fca28(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1008fca68; end: 1008fcc8b;  */

undefined * FUN_1008fca68(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = 0x112d38280;
  FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
  uVar7 = 0x60;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 8;
  *(undefined8 *)(lVar1 + 0x10) = 4;
  uVar2 = 2;
  func_0x0001008fcbdc();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  uVar8 = uVar7;
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x28) = uVar7;
  uVar7 = 8;
  func_0x0001008fcbdc();
  func_0x000107c61180();
  uVar3 = uVar7;
  func_0x000107c5faec();
  uVar2 = uVar8;
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar1 + 0x30) = uVar3;
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  uVar7 = 0x27;
  func_0x0001008fcbdc();
  func_0x000107c61180();
  uVar3 = uVar7;
  func_0x000107c5faec();
  uVar8 = uVar2;
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar1 + 0x40) = uVar3;
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  uVar2 = 0x2b;
  func_0x0001008fcbdc();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x50) = uVar3;
  *(undefined8 *)(lVar1 + 0x58) = uVar8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar5 = PTR_PTR_1126c07e8;
  func_0x000107c610f8(PTR_PTR_1126c07e8);
  lVar6 = lVar1;
  func_0x000107c5fc48(lVar1,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar1);
  func_0x000107c47ad8(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar6);
  return puVar5;
}



/* Entry: 1008fcc8c; end: 1008fe2db;  */

undefined1 * FUN_1008fcc8c(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puStack_f60;
  undefined *puStack_f58;
  undefined **ppuStack_f08;
  undefined **ppuStack_f00;
  undefined **ppuStack_ef8;
  undefined **ppuStack_ef0;
  undefined **ppuStack_ee8;
  undefined **ppuStack_ee0;
  undefined **ppuStack_ed8;
  undefined **ppuStack_ed0;
  undefined **ppuStack_ec8;
  undefined **ppuStack_ec0;
  undefined **ppuStack_eb8;
  undefined **ppuStack_eb0;
  undefined **ppuStack_ea8;
  undefined **ppuStack_ea0;
  undefined **ppuStack_e98;
  undefined **ppuStack_e90;
  undefined **ppuStack_e88;
  undefined **ppuStack_e80;
  undefined **ppuStack_e78;
  undefined **ppuStack_e70;
  undefined **ppuStack_e68;
  undefined **ppuStack_e60;
  undefined **ppuStack_e58;
  undefined **ppuStack_e50;
  undefined **ppuStack_e48;
  undefined **ppuStack_e40;
  undefined **ppuStack_e38;
  undefined **ppuStack_e30;
  undefined **ppuStack_e28;
  undefined **ppuStack_e20;
  undefined **ppuStack_e18;
  undefined **ppuStack_e10;
  undefined **ppuStack_e08;
  undefined **ppuStack_e00;
  undefined **ppuStack_df8;
  undefined **ppuStack_df0;
  undefined **ppuStack_de8;
  undefined **ppuStack_de0;
  undefined **ppuStack_dd8;
  undefined **ppuStack_dd0;
  undefined **ppuStack_dc8;
  undefined **ppuStack_dc0;
  undefined **ppuStack_db8;
  undefined **ppuStack_db0;
  undefined **ppuStack_da8;
  undefined **ppuStack_da0;
  undefined **ppuStack_d98;
  undefined **ppuStack_d90;
  undefined **ppuStack_d88;
  undefined **ppuStack_d80;
  undefined **ppuStack_d78;
  undefined **ppuStack_d70;
  undefined **ppuStack_d68;
  undefined **ppuStack_d60;
  undefined **ppuStack_d58;
  undefined **ppuStack_d50;
  undefined **ppuStack_d48;
  undefined **ppuStack_d40;
  undefined **ppuStack_d38;
  undefined **ppuStack_d30;
  undefined **ppuStack_d28;
  undefined **ppuStack_d20;
  undefined **ppuStack_d18;
  undefined **ppuStack_d10;
  undefined **ppuStack_d08;
  undefined **ppuStack_d00;
  undefined **ppuStack_cf8;
  undefined **ppuStack_cf0;
  undefined **ppuStack_ce8;
  undefined **ppuStack_ce0;
  undefined **ppuStack_cd8;
  undefined **ppuStack_cd0;
  undefined **ppuStack_cc8;
  undefined **ppuStack_cc0;
  undefined **ppuStack_cb8;
  undefined **ppuStack_cb0;
  undefined **ppuStack_ca8;
  undefined **ppuStack_ca0;
  undefined **ppuStack_c98;
  undefined **ppuStack_c90;
  undefined **ppuStack_c88;
  undefined **ppuStack_c80;
  undefined **ppuStack_c78;
  undefined **ppuStack_c70;
  undefined **ppuStack_c68;
  undefined **ppuStack_c60;
  undefined **ppuStack_c58;
  undefined **ppuStack_c50;
  undefined **ppuStack_c48;
  undefined **ppuStack_c40;
  undefined **ppuStack_c38;
  undefined **ppuStack_c30;
  undefined **ppuStack_c28;
  undefined **ppuStack_c20;
  undefined **ppuStack_c18;
  undefined **ppuStack_c10;
  undefined **ppuStack_c08;
  undefined **ppuStack_c00;
  undefined **ppuStack_bf8;
  undefined **ppuStack_bf0;
  undefined **ppuStack_be8;
  undefined **ppuStack_be0;
  undefined **ppuStack_bd8;
  undefined **ppuStack_bd0;
  undefined **ppuStack_bc8;
  undefined **ppuStack_bc0;
  undefined **ppuStack_bb8;
  undefined **ppuStack_bb0;
  undefined **ppuStack_ba8;
  undefined **ppuStack_ba0;
  undefined **ppuStack_b98;
  undefined **ppuStack_b90;
  undefined **ppuStack_b88;
  undefined **ppuStack_b80;
  undefined **ppuStack_b78;
  undefined **ppuStack_b70;
  undefined **ppuStack_b68;
  undefined **ppuStack_b60;
  undefined **ppuStack_b58;
  undefined **ppuStack_b50;
  undefined **ppuStack_b48;
  undefined **ppuStack_b40;
  undefined **ppuStack_b38;
  undefined **ppuStack_b30;
  undefined **ppuStack_b28;
  undefined **ppuStack_b20;
  undefined **ppuStack_b18;
  undefined **ppuStack_b10;
  undefined **ppuStack_b08;
  undefined **ppuStack_b00;
  undefined **ppuStack_af8;
  undefined **ppuStack_af0;
  undefined **ppuStack_ae8;
  undefined **ppuStack_ae0;
  undefined **ppuStack_ad8;
  undefined **ppuStack_ad0;
  undefined **ppuStack_ac8;
  undefined **ppuStack_ac0;
  undefined **ppuStack_ab8;
  undefined **ppuStack_ab0;
  undefined **ppuStack_aa8;
  undefined **ppuStack_aa0;
  undefined **ppuStack_a98;
  undefined **ppuStack_a90;
  undefined **ppuStack_a88;
  undefined **ppuStack_a80;
  undefined **ppuStack_a78;
  undefined **ppuStack_a70;
  undefined **ppuStack_a68;
  undefined **ppuStack_a60;
  undefined **ppuStack_a58;
  undefined **ppuStack_a50;
  undefined **ppuStack_a48;
  undefined **ppuStack_a40;
  undefined **ppuStack_a38;
  undefined **ppuStack_a30;
  undefined **ppuStack_a28;
  undefined **ppuStack_a20;
  undefined **ppuStack_a18;
  undefined **ppuStack_a10;
  undefined **ppuStack_a08;
  undefined **ppuStack_a00;
  undefined **ppuStack_9f8;
  undefined **ppuStack_9f0;
  undefined **ppuStack_9e8;
  undefined **ppuStack_9e0;
  undefined **ppuStack_9d8;
  undefined **ppuStack_9d0;
  undefined **ppuStack_9c8;
  undefined **ppuStack_9c0;
  undefined **ppuStack_9b8;
  undefined **ppuStack_9b0;
  undefined **ppuStack_9a8;
  undefined **ppuStack_9a0;
  undefined **ppuStack_998;
  undefined **ppuStack_990;
  undefined **ppuStack_988;
  undefined **ppuStack_980;
  undefined **ppuStack_978;
  undefined **ppuStack_970;
  undefined **ppuStack_968;
  undefined **ppuStack_960;
  undefined **ppuStack_958;
  undefined **ppuStack_950;
  undefined **ppuStack_948;
  undefined **ppuStack_940;
  undefined **ppuStack_938;
  undefined **ppuStack_930;
  undefined **ppuStack_928;
  undefined **ppuStack_920;
  undefined **ppuStack_918;
  undefined **ppuStack_910;
  undefined **ppuStack_908;
  undefined **ppuStack_900;
  undefined **ppuStack_8f8;
  undefined **ppuStack_8f0;
  undefined **ppuStack_8e8;
  undefined **ppuStack_8e0;
  undefined **ppuStack_8d8;
  undefined **ppuStack_8d0;
  undefined **ppuStack_8c8;
  undefined **ppuStack_8c0;
  undefined **ppuStack_8b8;
  undefined **ppuStack_8b0;
  undefined **ppuStack_8a8;
  undefined **ppuStack_8a0;
  undefined **ppuStack_898;
  undefined **ppuStack_890;
  undefined **ppuStack_888;
  undefined **ppuStack_880;
  undefined **ppuStack_878;
  undefined **ppuStack_870;
  undefined **ppuStack_868;
  undefined **ppuStack_860;
  undefined **ppuStack_858;
  undefined **ppuStack_850;
  undefined **ppuStack_848;
  undefined **ppuStack_840;
  undefined **ppuStack_838;
  undefined **ppuStack_830;
  undefined **ppuStack_828;
  undefined **ppuStack_820;
  undefined **ppuStack_818;
  undefined **ppuStack_810;
  undefined **ppuStack_808;
  undefined **ppuStack_800;
  undefined **ppuStack_7f8;
  undefined **ppuStack_7f0;
  undefined **ppuStack_7e8;
  undefined **ppuStack_7e0;
  undefined **ppuStack_7d8;
  undefined **ppuStack_7d0;
  undefined **ppuStack_7c8;
  undefined **ppuStack_7c0;
  undefined **ppuStack_7b8;
  undefined **ppuStack_7b0;
  undefined **ppuStack_7a8;
  undefined **ppuStack_7a0;
  undefined **ppuStack_798;
  undefined **ppuStack_790;
  undefined **ppuStack_788;
  undefined **ppuStack_780;
  undefined **ppuStack_778;
  undefined **ppuStack_770;
  undefined **ppuStack_768;
  undefined **ppuStack_760;
  undefined **ppuStack_758;
  undefined **ppuStack_750;
  undefined **ppuStack_748;
  undefined **ppuStack_740;
  undefined **ppuStack_738;
  undefined **ppuStack_730;
  undefined **ppuStack_728;
  undefined **ppuStack_720;
  undefined **ppuStack_718;
  undefined **ppuStack_710;
  undefined **ppuStack_708;
  undefined **ppuStack_700;
  undefined **ppuStack_6f8;
  undefined **ppuStack_6f0;
  undefined **ppuStack_6e8;
  undefined **ppuStack_6e0;
  undefined **ppuStack_6d8;
  undefined **ppuStack_6d0;
  undefined **ppuStack_6c8;
  undefined **ppuStack_6c0;
  undefined **ppuStack_6b8;
  undefined **ppuStack_6b0;
  undefined **ppuStack_6a8;
  undefined **ppuStack_6a0;
  undefined **ppuStack_698;
  undefined **ppuStack_690;
  undefined **ppuStack_688;
  undefined **ppuStack_680;
  undefined **ppuStack_678;
  undefined **ppuStack_670;
  undefined **ppuStack_668;
  undefined **ppuStack_660;
  undefined **ppuStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined **ppuStack_640;
  undefined **ppuStack_638;
  undefined **ppuStack_630;
  undefined **ppuStack_628;
  undefined **ppuStack_620;
  undefined **ppuStack_618;
  undefined **ppuStack_610;
  undefined **ppuStack_608;
  undefined **ppuStack_600;
  undefined **ppuStack_5f8;
  undefined **ppuStack_5f0;
  undefined **ppuStack_5e8;
  undefined **ppuStack_5e0;
  undefined **ppuStack_5d8;
  undefined **ppuStack_5d0;
  undefined **ppuStack_5c8;
  undefined **ppuStack_5c0;
  undefined **ppuStack_5b8;
  undefined **ppuStack_5b0;
  undefined **ppuStack_5a8;
  undefined **ppuStack_5a0;
  undefined **ppuStack_598;
  undefined **ppuStack_590;
  undefined **ppuStack_588;
  undefined **ppuStack_580;
  undefined **ppuStack_578;
  undefined **ppuStack_570;
  undefined **ppuStack_568;
  undefined **ppuStack_560;
  undefined **ppuStack_558;
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  undefined **ppuStack_538;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined **ppuStack_4d8;
  undefined **ppuStack_4d0;
  undefined **ppuStack_4c8;
  undefined **ppuStack_4c0;
  undefined **ppuStack_4b8;
  undefined **ppuStack_4b0;
  undefined **ppuStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  undefined **ppuStack_488;
  undefined **ppuStack_480;
  undefined **ppuStack_478;
  undefined **ppuStack_470;
  undefined **ppuStack_468;
  undefined **ppuStack_460;
  undefined **ppuStack_458;
  undefined **ppuStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f08 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cdd50;
  ppuStack_f00 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cdd68;
  ppuStack_798 = &PTR____CFConstantStringClassReference_110e03ed8;
  ppuStack_790 = &PTR____CFConstantStringClassReference_110dbb9d8;
  ppuStack_ef8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cdd80;
  ppuStack_ef0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cdff0;
  ppuStack_788 = &PTR____CFConstantStringClassReference_110e12f58;
  ppuStack_780 = &PTR____CFConstantStringClassReference_110ecc418;
  ppuStack_ee8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce008;
  ppuStack_ee0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce020;
  ppuStack_778 = &PTR____CFConstantStringClassReference_110ecc438;
  ppuStack_770 = &PTR____CFConstantStringClassReference_110ecc458;
  ppuStack_ed8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce038;
  ppuStack_ed0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cdd98;
  ppuStack_768 = &PTR____CFConstantStringClassReference_110ecc478;
  ppuStack_760 = &PTR____CFConstantStringClassReference_110e12f98;
  ppuStack_ec8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cddb0;
  ppuStack_ec0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cddc8;
  ppuStack_758 = &PTR____CFConstantStringClassReference_110ecc1f8;
  ppuStack_750 = &PTR____CFConstantStringClassReference_110ecc218;
  ppuStack_eb8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cdde0;
  ppuStack_eb0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cddf8;
  ppuStack_748 = &PTR____CFConstantStringClassReference_110e56bd8;
  ppuStack_740 = &PTR____CFConstantStringClassReference_110dbddd8;
  ppuStack_ea8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cde10;
  ppuStack_ea0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cde28;
  ppuStack_738 = &PTR____CFConstantStringClassReference_110ecc258;
  ppuStack_730 = &PTR____CFConstantStringClassReference_110ddea78;
  ppuStack_e98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cde40;
  ppuStack_e90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cde58;
  ppuStack_728 = &PTR____CFConstantStringClassReference_110e11c38;
  ppuStack_720 = &PTR____CFConstantStringClassReference_110ecc278;
  ppuStack_e88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cdea0;
  ppuStack_e80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cded0;
  ppuStack_718 = &PTR____CFConstantStringClassReference_110ecc2b8;
  ppuStack_710 = &PTR____CFConstantStringClassReference_110e744b8;
  ppuStack_e78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cdee8;
  ppuStack_e70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cdf00;
  ppuStack_708 = &PTR____CFConstantStringClassReference_110ecb5f8;
  ppuStack_700 = &PTR____CFConstantStringClassReference_110ecc318;
  ppuStack_e68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cdf18;
  ppuStack_e60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cdf30;
  ppuStack_6f8 = &PTR____CFConstantStringClassReference_110ecc358;
  ppuStack_6f0 = &PTR____CFConstantStringClassReference_110ecc378;
  ppuStack_e58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cdf48;
  ppuStack_e50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cdf60;
  ppuStack_6e8 = &PTR____CFConstantStringClassReference_110ecb618;
  ppuStack_6e0 = &PTR____CFConstantStringClassReference_110e17458;
  ppuStack_e48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cdf78;
  ppuStack_e40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cdf90;
  ppuStack_6d8 = &PTR____CFConstantStringClassReference_110e12958;
  ppuStack_6d0 = &PTR____CFConstantStringClassReference_110e12978;
  ppuStack_e38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cdfa8;
  ppuStack_e30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cdfc0;
  ppuStack_6c8 = &PTR____CFConstantStringClassReference_110ecc3b8;
  ppuStack_6c0 = &PTR____CFConstantStringClassReference_110ecc3f8;
  ppuStack_e28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cdeb8;
  ppuStack_e20 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce050;
  ppuStack_6b8 = &PTR____CFConstantStringClassReference_110ecc2f8;
  ppuStack_6b0 = &PTR____CFConstantStringClassReference_110ecc498;
  ppuStack_e18 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce068;
  ppuStack_e10 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce080;
  ppuStack_6a8 = &PTR____CFConstantStringClassReference_110ecc4b8;
  ppuStack_6a0 = &PTR____CFConstantStringClassReference_110ecc4d8;
  ppuStack_e08 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce098;
  ppuStack_e00 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce0b0;
  ppuStack_698 = &PTR____CFConstantStringClassReference_110ecc4f8;
  ppuStack_690 = &PTR____CFConstantStringClassReference_110ecb718;
  ppuStack_df8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce0c8;
  ppuStack_df0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce0e0;
  ppuStack_688 = &PTR____CFConstantStringClassReference_110ecb6f8;
  ppuStack_680 = &PTR____CFConstantStringClassReference_110ecb658;
  ppuStack_de8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce110;
  ppuStack_de0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce0f8;
  ppuStack_678 = &PTR____CFConstantStringClassReference_110ecc538;
  ppuStack_670 = &PTR____CFConstantStringClassReference_110ecc518;
  ppuStack_dd8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce140;
  ppuStack_dd0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce128;
  ppuStack_668 = &PTR____CFConstantStringClassReference_110ecba18;
  ppuStack_660 = &PTR____CFConstantStringClassReference_110ecba38;
  ppuStack_dc8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce158;
  ppuStack_dc0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce170;
  ppuStack_658 = &PTR____CFConstantStringClassReference_110ecc558;
  ppuStack_650 = &PTR____CFConstantStringClassReference_110ecc578;
  ppuStack_db8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce1a0;
  ppuStack_db0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce1b8;
  ppuStack_648 = &PTR____CFConstantStringClassReference_110ecb758;
  ppuStack_640 = &PTR____CFConstantStringClassReference_110ecb778;
  ppuStack_da8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce188;
  ppuStack_da0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce1d0;
  ppuStack_638 = &PTR____CFConstantStringClassReference_110ecb7b8;
  ppuStack_630 = &PTR____CFConstantStringClassReference_110ecb798;
  ppuStack_d98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce2a8;
  ppuStack_d90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce290;
  ppuStack_628 = &PTR____CFConstantStringClassReference_110ecb878;
  ppuStack_620 = &PTR____CFConstantStringClassReference_110ecb898;
  ppuStack_d88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce1e8;
  ppuStack_d80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce200;
  ppuStack_618 = &PTR____CFConstantStringClassReference_110ecb8d8;
  ppuStack_610 = &PTR____CFConstantStringClassReference_110ecb7f8;
  ppuStack_d78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce218;
  ppuStack_d70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce230;
  ppuStack_608 = &PTR____CFConstantStringClassReference_110ecc598;
  ppuStack_600 = &PTR____CFConstantStringClassReference_110ecb838;
  ppuStack_d68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce248;
  ppuStack_d60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce260;
  ppuStack_5f8 = &PTR____CFConstantStringClassReference_110ecc5b8;
  ppuStack_5f0 = &PTR____CFConstantStringClassReference_110ecb818;
  ppuStack_d58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce278;
  ppuStack_d50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce2c0;
  ppuStack_5e8 = &PTR____CFConstantStringClassReference_110ecb858;
  ppuStack_5e0 = &PTR____CFConstantStringClassReference_110ecb8f8;
  ppuStack_d48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce2d8;
  ppuStack_d40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cde70;
  ppuStack_5d8 = &PTR____CFConstantStringClassReference_110ecb918;
  ppuStack_5d0 = &PTR____CFConstantStringClassReference_110ecb638;
  ppuStack_d38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cde88;
  ppuStack_d30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce2f0;
  ppuStack_5c8 = &PTR____CFConstantStringClassReference_110ecb8b8;
  ppuStack_5c0 = &PTR____CFConstantStringClassReference_110ecc5d8;
  ppuStack_d28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce308;
  ppuStack_d20 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce320;
  ppuStack_5b8 = &PTR____CFConstantStringClassReference_110ecc5f8;
  ppuStack_5b0 = &PTR____CFConstantStringClassReference_110ecc618;
  ppuStack_d18 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce338;
  ppuStack_d10 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce350;
  ppuStack_5a8 = &PTR____CFConstantStringClassReference_110e5e018;
  ppuStack_5a0 = &PTR____CFConstantStringClassReference_110ecc638;
  ppuStack_d08 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce368;
  ppuStack_598 = &PTR____CFConstantStringClassReference_110ecc658;
  ppuStack_d00 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce380;
  ppuStack_590 = &PTR____CFConstantStringClassReference_110ecc678;
  ppuStack_cf8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce398;
  ppuStack_588 = &PTR____CFConstantStringClassReference_110ecc698;
  ppuStack_cf0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce3b0;
  ppuStack_580 = &PTR____CFConstantStringClassReference_110ecc6b8;
  ppuStack_ce8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce3c8;
  ppuStack_578 = &PTR____CFConstantStringClassReference_110ecc6d8;
  ppuStack_ce0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce3e0;
  ppuStack_570 = &PTR____CFConstantStringClassReference_110e22a18;
  ppuStack_cd8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce3f8;
  ppuStack_568 = &PTR____CFConstantStringClassReference_110ecc6f8;
  ppuStack_cd0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce410;
  ppuStack_560 = &PTR____CFConstantStringClassReference_110ecc718;
  ppuStack_cc8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce428;
  ppuStack_558 = &PTR____CFConstantStringClassReference_110ecc738;
  ppuStack_cc0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce440;
  ppuStack_550 = &PTR____CFConstantStringClassReference_110ecc758;
  ppuStack_cb8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce458;
  ppuStack_548 = &PTR____CFConstantStringClassReference_110ecc778;
  ppuStack_cb0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce470;
  ppuStack_540 = &PTR____CFConstantStringClassReference_110ecc798;
  ppuStack_ca8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce488;
  ppuStack_538 = &PTR____CFConstantStringClassReference_110ecc7b8;
  ppuStack_ca0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce4a0;
  ppuStack_530 = &PTR____CFConstantStringClassReference_110ecc7d8;
  ppuStack_c98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce4b8;
  ppuStack_528 = &PTR____CFConstantStringClassReference_110ecc7f8;
  ppuStack_c90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce4d0;
  ppuStack_520 = &PTR____CFConstantStringClassReference_110ecc818;
  ppuStack_c88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce4e8;
  ppuStack_518 = &PTR____CFConstantStringClassReference_110ecc838;
  ppuStack_c80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce500;
  ppuStack_510 = &PTR____CFConstantStringClassReference_110ecc858;
  ppuStack_c78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce518;
  ppuStack_508 = &PTR____CFConstantStringClassReference_110ecc878;
  ppuStack_c70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce530;
  ppuStack_500 = &PTR____CFConstantStringClassReference_110ecc898;
  ppuStack_c68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce548;
  ppuStack_4f8 = &PTR____CFConstantStringClassReference_110ecc8b8;
  ppuStack_c60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce560;
  ppuStack_4f0 = &PTR____CFConstantStringClassReference_110ecc8d8;
  ppuStack_c58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce578;
  ppuStack_4e8 = &PTR____CFConstantStringClassReference_110ecc8f8;
  ppuStack_c50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce590;
  ppuStack_4e0 = &PTR____CFConstantStringClassReference_110ecc918;
  ppuStack_c48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce5a8;
  ppuStack_4d8 = &PTR____CFConstantStringClassReference_110ecc938;
  ppuStack_c40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce5c0;
  ppuStack_4d0 = &PTR____CFConstantStringClassReference_110ecc958;
  ppuStack_c38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce650;
  ppuStack_4c8 = &PTR____CFConstantStringClassReference_110ecca18;
  ppuStack_c30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce5d8;
  ppuStack_4c0 = &PTR____CFConstantStringClassReference_110ecc978;
  ppuStack_c28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce608;
  ppuStack_4b8 = &PTR____CFConstantStringClassReference_110ecc9b8;
  ppuStack_c20 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce5f0;
  ppuStack_4b0 = &PTR____CFConstantStringClassReference_110ecc998;
  ppuStack_c18 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce620;
  ppuStack_4a8 = &PTR____CFConstantStringClassReference_110ecc9d8;
  ppuStack_c10 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce638;
  ppuStack_4a0 = &PTR____CFConstantStringClassReference_110ecc9f8;
  ppuStack_c08 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce668;
  ppuStack_498 = &PTR____CFConstantStringClassReference_110ecca38;
  ppuStack_c00 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce680;
  ppuStack_490 = &PTR____CFConstantStringClassReference_110ecca58;
  ppuStack_bf8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce698;
  ppuStack_488 = &PTR____CFConstantStringClassReference_110ecca78;
  ppuStack_bf0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce6b0;
  ppuStack_480 = &PTR____CFConstantStringClassReference_110ecca98;
  ppuStack_be8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce6c8;
  ppuStack_478 = &PTR____CFConstantStringClassReference_110eccab8;
  ppuStack_be0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce6e0;
  ppuStack_470 = &PTR____CFConstantStringClassReference_110eccad8;
  ppuStack_bd8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce6f8;
  ppuStack_468 = &PTR____CFConstantStringClassReference_110eccaf8;
  ppuStack_bd0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce710;
  ppuStack_460 = &PTR____CFConstantStringClassReference_110eccb18;
  ppuStack_bc8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce728;
  ppuStack_458 = &PTR____CFConstantStringClassReference_110eccb38;
  ppuStack_bc0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce740;
  ppuStack_450 = &PTR____CFConstantStringClassReference_110eccb58;
  ppuStack_bb8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce758;
  ppuStack_448 = &PTR____CFConstantStringClassReference_110eccb78;
  ppuStack_bb0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce770;
  ppuStack_440 = &PTR____CFConstantStringClassReference_110eccb98;
  ppuStack_ba8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce788;
  ppuStack_438 = &PTR____CFConstantStringClassReference_110eccbb8;
  ppuStack_ba0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce7a0;
  ppuStack_430 = &PTR____CFConstantStringClassReference_110eccbd8;
  ppuStack_b98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce7b8;
  ppuStack_428 = &PTR____CFConstantStringClassReference_110eccbf8;
  ppuStack_b90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce7d0;
  ppuStack_420 = &PTR____CFConstantStringClassReference_110eccc18;
  ppuStack_b88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce7e8;
  ppuStack_418 = &PTR____CFConstantStringClassReference_110eccc38;
  ppuStack_b80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce800;
  ppuStack_410 = &PTR____CFConstantStringClassReference_110eccc58;
  ppuStack_b78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce818;
  ppuStack_408 = &PTR____CFConstantStringClassReference_110eccc78;
  ppuStack_b70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce830;
  ppuStack_400 = &PTR____CFConstantStringClassReference_110eccc98;
  ppuStack_b68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce8f0;
  ppuStack_3f8 = &PTR____CFConstantStringClassReference_110eccd98;
  ppuStack_b60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce908;
  ppuStack_3f0 = &PTR____CFConstantStringClassReference_110eccdb8;
  ppuStack_b58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce920;
  ppuStack_3e8 = &PTR____CFConstantStringClassReference_110ea17b8;
  ppuStack_b50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce938;
  ppuStack_3e0 = &PTR____CFConstantStringClassReference_110eccdd8;
  ppuStack_b48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce950;
  ppuStack_3d8 = &PTR____CFConstantStringClassReference_110eccdf8;
  ppuStack_b40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce968;
  ppuStack_3d0 = &PTR____CFConstantStringClassReference_110ecce18;
  ppuStack_b38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce980;
  ppuStack_3c8 = &PTR____CFConstantStringClassReference_110ecce38;
  ppuStack_b30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce998;
  ppuStack_3c0 = &PTR____CFConstantStringClassReference_110ecce58;
  ppuStack_b28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce9b0;
  ppuStack_3b8 = &PTR____CFConstantStringClassReference_110ecce78;
  ppuStack_b20 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce9c8;
  ppuStack_3b0 = &PTR____CFConstantStringClassReference_110ecce98;
  ppuStack_b18 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce848;
  ppuStack_3a8 = &PTR____CFConstantStringClassReference_110ecccb8;
  ppuStack_b10 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce860;
  ppuStack_3a0 = &PTR____CFConstantStringClassReference_110ecccd8;
  ppuStack_b08 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce878;
  ppuStack_398 = &PTR____CFConstantStringClassReference_110ecccf8;
  ppuStack_b00 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce890;
  ppuStack_390 = &PTR____CFConstantStringClassReference_110eccd18;
  ppuStack_af8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce8a8;
  ppuStack_388 = &PTR____CFConstantStringClassReference_110eccd38;
  ppuStack_af0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce8c0;
  ppuStack_380 = &PTR____CFConstantStringClassReference_110eccd58;
  ppuStack_ae8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce8d8;
  ppuStack_378 = &PTR____CFConstantStringClassReference_110eccd78;
  ppuStack_ae0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce9e0;
  ppuStack_370 = &PTR____CFConstantStringClassReference_110ecceb8;
  ppuStack_ad8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ce9f8;
  ppuStack_368 = &PTR____CFConstantStringClassReference_110ecced8;
  ppuStack_ad0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cea10;
  ppuStack_360 = &PTR____CFConstantStringClassReference_110eccef8;
  ppuStack_ac8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cea28;
  ppuStack_358 = &PTR____CFConstantStringClassReference_110e9ef38;
  ppuStack_ac0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cea40;
  ppuStack_350 = &PTR____CFConstantStringClassReference_110eccf18;
  ppuStack_ab8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cea58;
  ppuStack_348 = &PTR____CFConstantStringClassReference_110eccf38;
  ppuStack_ab0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cea70;
  ppuStack_340 = &PTR____CFConstantStringClassReference_110eccf58;
  ppuStack_aa8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cea88;
  ppuStack_338 = &PTR____CFConstantStringClassReference_110eccf78;
  ppuStack_aa0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ceaa0;
  ppuStack_330 = &PTR____CFConstantStringClassReference_110eccf98;
  ppuStack_a98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ceab8;
  ppuStack_328 = &PTR____CFConstantStringClassReference_110eccfb8;
  ppuStack_a90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cead0;
  ppuStack_320 = &PTR____CFConstantStringClassReference_110eccfd8;
  ppuStack_a88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ceae8;
  ppuStack_318 = &PTR____CFConstantStringClassReference_110eccff8;
  ppuStack_a80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ceb00;
  ppuStack_310 = &PTR____CFConstantStringClassReference_110ecd018;
  ppuStack_a78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ceb18;
  ppuStack_308 = &PTR____CFConstantStringClassReference_110ecd038;
  ppuStack_a70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ceb30;
  ppuStack_300 = &PTR____CFConstantStringClassReference_110ecd058;
  ppuStack_a68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ceb48;
  ppuStack_2f8 = &PTR____CFConstantStringClassReference_110ecd078;
  ppuStack_a60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ceb60;
  ppuStack_2f0 = &PTR____CFConstantStringClassReference_110ecd098;
  ppuStack_a58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ceb78;
  ppuStack_2e8 = &PTR____CFConstantStringClassReference_110ecd0b8;
  ppuStack_a50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ceb90;
  ppuStack_2e0 = &PTR____CFConstantStringClassReference_110ecd0d8;
  ppuStack_a48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ceba8;
  ppuStack_2d8 = &PTR____CFConstantStringClassReference_110ecd0f8;
  ppuStack_a40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cebc0;
  ppuStack_2d0 = &PTR____CFConstantStringClassReference_110ecd118;
  ppuStack_a38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cebd8;
  ppuStack_2c8 = &PTR____CFConstantStringClassReference_110ecd138;
  ppuStack_a30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cebf0;
  ppuStack_2c0 = &PTR____CFConstantStringClassReference_110ecd158;
  ppuStack_a28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cec08;
  ppuStack_2b8 = &PTR____CFConstantStringClassReference_110ecd178;
  ppuStack_a20 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cec20;
  ppuStack_2b0 = &PTR____CFConstantStringClassReference_110ecd198;
  ppuStack_a18 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cec38;
  ppuStack_2a8 = &PTR____CFConstantStringClassReference_110ecd1b8;
  ppuStack_a10 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cec50;
  ppuStack_2a0 = &PTR____CFConstantStringClassReference_110ecd1d8;
  ppuStack_a08 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cec68;
  ppuStack_298 = &PTR____CFConstantStringClassReference_110ecd1f8;
  ppuStack_a00 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cec80;
  ppuStack_290 = &PTR____CFConstantStringClassReference_110ecd218;
  ppuStack_9f8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cec98;
  ppuStack_288 = &PTR____CFConstantStringClassReference_110ecd238;
  ppuStack_9f0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cecb0;
  ppuStack_280 = &PTR____CFConstantStringClassReference_110ecd258;
  ppuStack_9e8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cecc8;
  ppuStack_278 = &PTR____CFConstantStringClassReference_110ecd278;
  ppuStack_9e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cece0;
  ppuStack_270 = &PTR____CFConstantStringClassReference_110e11d18;
  ppuStack_9d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cecf8;
  ppuStack_268 = &PTR____CFConstantStringClassReference_110e11d38;
  ppuStack_9d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ced10;
  ppuStack_260 = &PTR____CFConstantStringClassReference_110ecd298;
  ppuStack_9c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ced28;
  ppuStack_258 = &PTR____CFConstantStringClassReference_110ecd2b8;
  ppuStack_9c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ced40;
  ppuStack_250 = &PTR____CFConstantStringClassReference_110ecd2d8;
  ppuStack_9b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ced58;
  ppuStack_248 = &PTR____CFConstantStringClassReference_110e60c58;
  ppuStack_9b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ced70;
  ppuStack_240 = &PTR____CFConstantStringClassReference_110e60cb8;
  ppuStack_9a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ced88;
  ppuStack_238 = &PTR____CFConstantStringClassReference_110e60c38;
  ppuStack_9a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cedd0;
  ppuStack_230 = &PTR____CFConstantStringClassReference_110ecd2f8;
  ppuStack_998 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cedb8;
  ppuStack_228 = &PTR____CFConstantStringClassReference_110e60c98;
  ppuStack_990 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ceda0;
  ppuStack_220 = &PTR____CFConstantStringClassReference_110e60c78;
  ppuStack_988 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cee00;
  ppuStack_218 = &PTR____CFConstantStringClassReference_110ecd338;
  ppuStack_980 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cede8;
  ppuStack_210 = &PTR____CFConstantStringClassReference_110ecd318;
  ppuStack_978 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cee18;
  ppuStack_208 = &PTR____CFConstantStringClassReference_110ecd358;
  ppuStack_970 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cee30;
  ppuStack_200 = &PTR____CFConstantStringClassReference_110ecd378;
  ppuStack_968 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ceef0;
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_110ecd478;
  ppuStack_960 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cef08;
  ppuStack_1f0 = &PTR____CFConstantStringClassReference_110dafd18;
  ppuStack_958 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cef20;
  ppuStack_1e8 = &PTR____CFConstantStringClassReference_110ecd498;
  ppuStack_950 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cef38;
  ppuStack_1e0 = &PTR____CFConstantStringClassReference_110ecd4b8;
  ppuStack_948 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cef50;
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110e0a858;
  ppuStack_940 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cef68;
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110ecd4d8;
  ppuStack_938 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cef80;
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110ecd4f8;
  ppuStack_930 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cef98;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110ecd518;
  ppuStack_928 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cefb0;
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110ecd538;
  ppuStack_920 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cee48;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110ecd398;
  ppuStack_918 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cee60;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110ecd3b8;
  ppuStack_910 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cee78;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110ecd3d8;
  ppuStack_908 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cee90;
  ppuStack_198 = &PTR____CFConstantStringClassReference_110ecd3f8;
  ppuStack_900 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ceea8;
  ppuStack_190 = &PTR____CFConstantStringClassReference_110ecd418;
  ppuStack_8f8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ceec0;
  ppuStack_188 = &PTR____CFConstantStringClassReference_110ecd438;
  ppuStack_8f0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ceed8;
  ppuStack_180 = &PTR____CFConstantStringClassReference_110ecd458;
  ppuStack_8e8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cefc8;
  ppuStack_178 = &PTR____CFConstantStringClassReference_110ecd558;
  ppuStack_8e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cefe0;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110ecd578;
  ppuStack_8d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf388;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110ecd598;
  ppuStack_8d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ceff8;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110ecd5b8;
  ppuStack_8c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf010;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110ecd5d8;
  ppuStack_8c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf028;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110ecd5f8;
  ppuStack_8b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf040;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110ecd618;
  ppuStack_8b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf058;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110ecd638;
  ppuStack_8a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf070;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110ecd658;
  ppuStack_8a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf088;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110ecd678;
  ppuStack_898 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf0a0;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110ecd698;
  ppuStack_890 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf0b8;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110ecd6b8;
  ppuStack_888 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf0d0;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110ecb678;
  ppuStack_880 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf0e8;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110ecb698;
  ppuStack_878 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf100;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110ecb6b8;
  ppuStack_870 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf118;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110ecb938;
  ppuStack_868 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf130;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110ecb958;
  ppuStack_860 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf148;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110ecb978;
  ppuStack_858 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf160;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110ecb998;
  ppuStack_850 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf178;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110e12f78;
  ppuStack_848 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf190;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110ecb6d8;
  ppuStack_840 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf1a8;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110ecb9b8;
  ppuStack_838 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf1c0;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110ecb9d8;
  ppuStack_830 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf1d8;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110ecb9f8;
  ppuStack_828 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf1f0;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110ecd6d8;
  ppuStack_820 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf208;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110ecd6f8;
  ppuStack_818 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf220;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e11dd8;
  ppuStack_810 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf238;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110ecd718;
  ppuStack_808 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf250;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110ecd738;
  ppuStack_800 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf268;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110ecd758;
  ppuStack_7f8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf280;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110ecd778;
  ppuStack_7f0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf298;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110ecd798;
  ppuStack_7e8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf2b0;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110ecb5d8;
  ppuStack_7e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf2c8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110ecb7d8;
  ppuStack_7d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf2e0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110ecd7b8;
  ppuStack_7d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf2f8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110ecd7d8;
  ppuStack_7c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf310;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110ecd7f8;
  ppuStack_7c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cdfd8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110ecb738;
  ppuStack_7b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf328;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110ecd818;
  ppuStack_7b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf340;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110ecd838;
  ppuStack_7a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf358;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110ecd858;
  ppuStack_7a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf370;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110ecd878;
  pppuVar5 = &ppuStack_798;
  pppuVar6 = &ppuStack_f08;
  uVar7 = 0xee;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c419ac();
  func_0x000107c61180();
  puVar2 = puRam0000000113728aa0;
  puRam0000000113728aa0 = puVar1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  func_0x000107c60e78();
  ppuVar3 = &puStack_f60;
  func_0x000107c61174(pppuVar5);
  func_0x000107c61174(uVar7);
  puStack_f58 = PTR_PTR_1126eb158;
  puStack_f60 = puVar2;
  func_0x000107c61154(&puStack_f60,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined1 **)0x0) {
    pppuVar4 = pppuVar5;
    func_0x000107c40794();
    uVar8 = *(undefined8 *)((long)ppuVar3 + 8);
    *(undefined ****)((long)ppuVar3 + 8) = pppuVar4;
    func_0x000107c61170(uVar8);
    *(undefined ****)((long)ppuVar3 + 0x10) = pppuVar6;
    func_0x000107c61174(uVar7);
    uVar8 = *(undefined8 *)((long)ppuVar3 + 0x18);
    *(undefined8 *)((long)ppuVar3 + 0x18) = uVar7;
    func_0x000107c61170(uVar8);
  }
  func_0x000107c61170(uVar7);
  func_0x000107c61170(pppuVar5);
  return (undefined1 *)ppuVar3;
}



/* Entry: 1008fe2dc; end: 1008fe3bf; -[SCNNotificationsInAppReminderConfig initWithNotifTypes:minDelayMs:maxNotifCountPerRedrive:] */

undefined1 *
FUN_1008fe2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126eb158;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008fe3c0; end: 1008fe4ab; -[SCNNotificationsRedriveConfig initWithMaxAttemptCount:minDelayMs:triggerAfterReceive:maxNotifCountPerRedrive:enableInForeground:inAppReminderConfig:] */

undefined1 *
FUN_1008fe3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126eb190;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 1008fe4ac; end: 1008fe793;  */

long FUN_1008fe4ac(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  uVar3 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f0181c0);
  iVar2 = param_1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar3);
  uVar3 = 0xd000000000000037;
  func_0x000107c5fadc(0xd000000000000037,0x800000010f0181f0);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar3);
  uVar3 = 0xd00000000000003b;
  func_0x000107c5fadc(0xd00000000000003b,0x800000010f018230);
  func_0x000107c4980c();
  func_0x000107c61170(uVar3);
  uVar3 = 0xd000000000000035;
  func_0x000107c5fadc(0xd000000000000035,0x800000010f018270);
  func_0x000107c4980c();
  func_0x000107c61170(uVar3);
  lVar4 = 0x112da0580;
  FUN_1000285a8(0x112da0580,&UNK_10da23000);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 0x12;
  *(undefined8 *)(lVar4 + 0x10) = 9;
  uVar3 = 2;
  func_0x000107c5fe40();
  *(undefined8 *)(lVar4 + 0x20) = uVar3;
  *(undefined8 *)(lVar4 + 0x28) = 0x65736c6166;
  *(undefined8 *)(lVar4 + 0x30) = 0xe500000000000000;
  uVar5 = 3;
  func_0x000107c5fe40();
  uVar3 = 0x65757274;
  if (iVar2 == 0) {
    uVar3 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (iVar2 == 0) {
    uVar1 = 0xe500000000000000;
  }
  *(undefined8 *)(lVar4 + 0x38) = uVar5;
  *(undefined8 *)(lVar4 + 0x40) = uVar3;
  *(undefined8 *)(lVar4 + 0x48) = uVar1;
  uVar3 = 10;
  func_0x000107c5fe40();
  *(undefined8 *)(lVar4 + 0x50) = uVar3;
  *(undefined8 *)(lVar4 + 0x58) = 0x65757274;
  *(undefined8 *)(lVar4 + 0x60) = 0xe400000000000000;
  uVar5 = 0xe;
  func_0x000107c5fe40();
  uVar3 = 0x65757274;
  if (param_1 == 0) {
    uVar3 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (param_1 == 0) {
    uVar1 = 0xe500000000000000;
  }
  *(undefined8 *)(lVar4 + 0x68) = uVar5;
  *(undefined8 *)(lVar4 + 0x70) = uVar3;
  *(undefined8 *)(lVar4 + 0x78) = uVar1;
  uVar3 = 0x10;
  func_0x000107c5fe40();
  *(undefined8 *)(lVar4 + 0x80) = uVar3;
  puVar10 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  puVar7 = PTR___ss5Int32VN_11034ee20;
  puVar6 = PTR___ss5Int32VN_11034ee20;
  puVar9 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  func_0x000107c6057c();
  *(undefined **)(lVar4 + 0x88) = puVar6;
  *(undefined **)(lVar4 + 0x90) = puVar9;
  uVar3 = 0xf;
  func_0x000107c5fe40();
  *(undefined8 *)(lVar4 + 0x98) = uVar3;
  func_0x000107c6057c();
  *(undefined **)(lVar4 + 0xa0) = puVar7;
  *(undefined **)(lVar4 + 0xa8) = puVar10;
  uVar3 = 0xb;
  func_0x000107c5fe40();
  *(undefined8 *)(lVar4 + 0xb0) = uVar3;
  *(undefined8 *)(lVar4 + 0xb8) = 0x65757274;
  *(undefined8 *)(lVar4 + 0xc0) = 0xe400000000000000;
  uVar3 = 0xc;
  func_0x000107c5fe40();
  *(undefined8 *)(lVar4 + 200) = uVar3;
  puVar10 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar7 = PTR___sSiN_11034deb0;
  puVar6 = PTR___sSiN_11034deb0;
  puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c();
  *(undefined **)(lVar4 + 0xd0) = puVar6;
  *(undefined **)(lVar4 + 0xd8) = puVar9;
  uVar3 = 0xd;
  func_0x000107c5fe40();
  *(undefined8 *)(lVar4 + 0xe0) = uVar3;
  func_0x000107c6057c();
  *(undefined **)(lVar4 + 0xe8) = puVar7;
  *(undefined **)(lVar4 + 0xf0) = puVar10;
  lVar8 = lVar4;
  FUN_100121358(lVar4);
  func_0x000107c61588(lVar4);
  uVar3 = 0x112da0588;
  FUN_1000285a8(0x112da0588,&UNK_10d9432f0);
  func_0x000107c61408((undefined8 *)(lVar4 + 0x20),9,uVar3);
  return lVar8;
}



/* Entry: 1008fe794; end: 1008fe837; -[SCNNotificationsTweaks initWithTweaks:] */

undefined1 * FUN_1008fe794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126eb1b0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008fe838; end: 1008fe85f;  */

void FUN_1008fe838(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e9fed8,0,0);
  return;
}



/* Entry: 1008fe860; end: 1008fe9d3; -[SCNNotificationsNotificationHandlerParameters initWithUserId:databasePath:redriveConfig:tweaks:ackConfig:] */

undefined1 *
FUN_1008fe860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_1126eb170;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008fe9d4; end: 1008fe9f3;  */

void FUN_1008fe9d4(void)

{
  func_0x000107c61168(&PTR_PTR_112e384c8);
  return;
}



/* Entry: 1008fe9f4; end: 1008fea67; -[SCGrapheneNativeNotifAnnouncerMetric2 init] */

undefined1 * FUN_1008fe9f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9e18;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1008fea68; end: 1008feadb; -[SCGrapheneNativeNotifHandlerMetric2 init] */

undefined1 * FUN_1008fea68(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9e20;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1008feadc; end: 1008feb1b;  */

void FUN_1008feadc(void)

{
  func_0x000107c61168(&PTR_PTR_112807e90);
  return;
}



/* Entry: 1008feb1c; end: 1008feb27;  */

void FUN_1008feb1c(void)

{
  return;
}



/* Entry: 1008feb28; end: 1008fed4f; +[SCNNotificationsNotificationHandler create:announcer:queue:duplex:permissionProvider:] */

void FUN_1008feb28(void)

{
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  int extraout_w10;
  undefined ***pppuVar1;
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined **appuStack_1c8 [2];
  long lStack_1b8;
  long lStack_1b0;
  long lStack_60;
  long lStack_58;
  
  FUN_1008feb1c();
  FUN_1008fed50();
  func_0x0001008fed58();
  func_0x000107c61174(in_x4);
  func_0x000107c61174(in_x5);
  func_0x000107c61174(in_x6);
  FUN_1008fed60(&lStack_1b8);
  FUN_100900244(appuStack_1c8);
  FUN_10049e05c(auStack_1d8,in_x4);
  FUN_10049e82c(auStack_1e8,in_x5);
  FUN_100900424(auStack_1f8,in_x6);
  FUN_100900608(&lStack_60,&lStack_1b8,appuStack_1c8,auStack_1d8,auStack_1e8,auStack_1f8);
  FUN_1009048c0(auStack_1f8);
  FUN_10048d450(auStack_1e8);
  FUN_100554470(auStack_1d8);
  FUN_100901b38(appuStack_1c8);
  FUN_100904984(&lStack_1b8);
  if (lStack_60 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    appuStack_1c8[0] = &PTR_DAT_1108c1bc8;
    lStack_1b8 = lStack_60;
    lStack_1b0 = lStack_58;
    if (lStack_58 != 0) {
      do {
        FUN_1009049c4();
      } while (extraout_w10 != 0);
    }
    pppuVar1 = appuStack_1c8;
    FUN_10015c218(pppuVar1,&lStack_1b8,FUN_1009049d4);
    func_0x000107c61180();
    FUN_1000df524(&lStack_1b8);
  }
  FUN_1009046e4(&lStack_60);
  func_0x000107c61170(in_x6);
  func_0x000107c61170(in_x5);
  func_0x000100904b08();
  func_0x000100904b10();
  func_0x000100904b18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar1);
  return;
}



/* Entry: 1008fed50; end: 1008fed5f;  */

void FUN_1008fed50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1008fed60; end: 1008fef3f;  */

void FUN_1008fed60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_1a8 [136];
  undefined1 auStack_120 [48];
  undefined1 auStack_f0 [112];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61174();
  uVar1 = param_2;
  func_0x000107c5d984(param_2);
  func_0x000107c61180();
  FUN_1008fef48(auStack_68);
  uVar2 = param_2;
  func_0x000107c41318(param_2);
  func_0x000107c61180();
  FUN_1000fbca4(auStack_80);
  uVar3 = param_2;
  func_0x000107c4fb1c(param_2);
  func_0x000107c61180();
  FUN_1008fefdc(auStack_f0);
  uVar4 = param_2;
  func_0x000107c5d0d0(param_2);
  func_0x000107c61180();
  FUN_1008ff4a8(auStack_120);
  func_0x000107c3cf5c(param_2);
  func_0x000107c61180();
  FUN_100900014(auStack_1a8);
  FUN_100900078(param_1,auStack_68,auStack_80,auStack_f0,auStack_120,auStack_1a8);
  FUN_1009001d4(auStack_1a8);
  func_0x000107c61170(param_2);
  func_0x0001009001f4(auStack_120);
  func_0x000107c61170(uVar4);
  FUN_100900214(auStack_f0);
  func_0x000107c61170(uVar3);
  func_0x000107c60ca0(auStack_80);
  func_0x000107c61170(uVar2);
  FUN_100100fec(auStack_68);
  func_0x000107c61170(uVar1);
  FUN_1008ff498();
  return;
}



/* Entry: 1008fef40; end: 1008fef47; -[SCNNotificationsNotificationHandlerParameters userId] */

undefined8 FUN_1008fef40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1008fef48; end: 1008fefb7;  */

void FUN_1008fef48(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c44fc8();
  func_0x000107c61180();
  FUN_10029a6ec(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  FUN_100100fec(&uStack_40);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008fefb8; end: 1008fefbf; -[SCNShimsUUID id] */

undefined8 FUN_1008fefb8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1008fefc0; end: 1008fefc7; -[SCNNotificationsNotificationHandlerParameters databasePath] */

undefined8 FUN_1008fefc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1008fefc8; end: 1008fefdb; -[SCNNotificationsNotificationHandlerParameters redriveConfig] */

undefined8 FUN_1008fefc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1008fefdc; end: 1008ff04b;  */

void FUN_1008fefdc(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [56];
  
  func_0x0001008fefd0();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x68] = 0;
  }
  else {
    FUN_1008ff058(auStack_98);
    FUN_1008ff47c();
    FUN_1008ff428(auStack_68);
  }
  FUN_1008ff498();
  return;
}


