/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10094a318; end: 10094a357;  */

void FUN_10094a318(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010094a2fc();
  FUN_100082720("CTPSearchServicesEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10094a358; end: 10094a35f;  */

void FUN_10094a358(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101cd8f6c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10094a360; end: 10094a3e3;  */

void FUN_10094a360(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101cd8f6c,param_2,FUN_10094a3e4,param_2,&UNK_101cd8f70,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10094a3e4; end: 10094a40b;  */

void FUN_10094a3e4(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10094a40c; end: 10094a41f;  */

void FUN_10094a40c(long *param_1)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
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
  FUN_100283d34();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  *(undefined8 *)(lVar2 + 0x48) = uStack_98;
  *(undefined8 *)(lVar2 + 0x50) = uStack_a0;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174();
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar9 = uStack_98;
  func_0x000107c61174();
  uVar10 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126a9028;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar11 = uStack_68;
  func_0x000107c61174();
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar3);
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar3);
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar3);
  uVar12 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  uVar14 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010efc3ce0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  lVar13 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f00ac40);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(uVar14);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar13 != 0) {
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    *(long *)(lVar2 + 0x58) = lVar13;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10094a998);
  (*pcVar1)();
}



/* Entry: 10094a420; end: 10094a997;  */

void FUN_10094a420(long *param_1,long param_2)

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
  long lVar12;
  undefined8 uVar13;
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
  FUN_100283d34();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  uVar9 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a9028;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar2);
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar2);
  uVar11 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010efc3ce0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  lVar12 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f00ac40);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(uVar13);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar12 != 0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    *(long *)(param_2 + 0x58) = lVar12;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10094a998);
  (*pcVar1)();
}



/* Entry: 10094a998; end: 10094ad0b; -[CTPSearchServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10094a998(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
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
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_1058057a8;
  puStack_90 = &UNK_1108b56b8;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar6;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_1058057e8;
  puStack_b8 = &UNK_1108b56e8;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_f8 = puVar6;
  uStack_f0 = 0xc2000000;
  puStack_e8 = &UNK_1058058bc;
  puStack_e0 = &UNK_1108b5718;
  func_0x000107c6111c(auStack_d8,auStack_80);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  puStack_120 = puVar6;
  uStack_118 = 0xc2000000;
  puStack_110 = &UNK_105805a58;
  puStack_108 = &UNK_1108b5748;
  func_0x000107c6111c(auStack_100,auStack_80);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  puStack_148 = puVar6;
  uStack_140 = 0xc2000000;
  puStack_138 = &UNK_105805b0c;
  puStack_130 = &UNK_1108b5778;
  func_0x000107c6111c(auStack_128,auStack_80);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_150,auStack_80);
  func_0x000107c3e4fc(puVar6);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126beb98;
  func_0x000107c610f4(PTR_PTR_1126beb98);
  func_0x000107c48520();
  uVar8 = 0;
  if (param_1 != 0) {
    uVar8 = *(undefined8 *)(param_1 + _DAT_11272a15c);
  }
  func_0x000107c61174(uVar8);
  func_0x000107c42c20(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_150);
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
  return;
}



/* Entry: 10094ad0c; end: 10094ae5f; -[CTPSearchServices initWithSearchEngineFactory:searchStrategyFactory:sessionFactory:loggerFactory:searchPreTypeForYou:searchSectionPersistenceProvider:] */

undefined1 *
FUN_10094ad0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1127009c0;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
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
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10094ae60; end: 10094aebb;  */

void FUN_10094ae60(void)

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



/* Entry: 10094aebc; end: 10094aee3;  */

undefined ** FUN_10094aebc(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10094aee4; end: 10094af23;  */

void FUN_10094aee4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010094aec8();
  FUN_100082720("CTPUserDataFeedServicesImplEntryPointWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10094af24; end: 10094af2b;  */

void FUN_10094af24(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cd95f0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10094af2c; end: 10094afaf;  */

void FUN_10094af2c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cd95f0,param_2,&UNK_101cd95f4,param_2,&UNK_101cd961c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10094afb0; end: 10094afd3;  */

undefined ** FUN_10094afb0(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10094afd4; end: 10094b053;  */

void FUN_10094afd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106b7288;
  func_0x000107c613fc(&UNK_1106b7288,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10094b054,puVar1);
  return;
}



/* Entry: 10094b054; end: 10094b05b;  */

void FUN_10094b054(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fbf380,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fbf380,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b7320;
  func_0x000107c613fc(&UNK_1106b7320,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039a7604;
  FUN_10058fa64(&UNK_1039a7604,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10094b05c; end: 10094b153;  */

void FUN_10094b05c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fbf380,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fbf380,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b7320;
  func_0x000107c613fc(&UNK_1106b7320,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039a7604;
  FUN_10058fa64(&UNK_1039a7604,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10094b154; end: 10094b177;  */

void FUN_10094b154(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10094b178; end: 10094b187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10094b178(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar8 = &lStack_60;
  lVar6 = lVar1;
  FUN_1002cc24c();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112fbf390) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112fbf398) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112fbf3a0) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112fbf3a8) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112fbf3b0) = uVar9;
  puVar5 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar9);
  func_0x000107c61154(&lStack_60,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 10094b188; end: 10094b263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10094b188(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  lVar2 = param_2;
  FUN_1002cc24c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fbf390) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fbf398) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fbf3a0) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fbf3a8) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112fbf3b0) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c61154(&lStack_60,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10094b264; end: 10094b2d3;  */

void FUN_10094b264(void)

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



/* Entry: 10094b2d4; end: 10094b2f7;  */

undefined ** FUN_10094b2d4(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10094b2f8; end: 10094b377;  */

void FUN_10094b2f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106b75f8;
  func_0x000107c613fc(&UNK_1106b75f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10094b378,puVar1);
  return;
}



/* Entry: 10094b378; end: 10094b37f;  */

void FUN_10094b378(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fbfb58,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fbfb58,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b7690;
  func_0x000107c613fc(&UNK_1106b7690,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039aa5fc;
  FUN_10058fa64(&UNK_1039aa5fc,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10094b380; end: 10094b477;  */

void FUN_10094b380(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fbfb58,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fbfb58,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b7690;
  func_0x000107c613fc(&UNK_1106b7690,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039aa5fc;
  FUN_10058fa64(&UNK_1039aa5fc,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10094b478; end: 10094b49b;  */

void FUN_10094b478(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10094b49c; end: 10094b4a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10094b49c(undefined8 *param_1)

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
  FUN_1002b5fc4();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112fbfb68) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112fbfb70) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112fbfb78) = uVar7;
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



/* Entry: 10094b4a8; end: 10094b54b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10094b4a8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_2;
  FUN_1002b5fc4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fbfb68) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fbfb70) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fbfb78) = param_4;
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



/* Entry: 10094b54c; end: 10094b5ab;  */

void FUN_10094b54c(void)

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



/* Entry: 10094b5ac; end: 10094b5d3;  */

undefined ** FUN_10094b5ac(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10094b5d4; end: 10094b613;  */

void FUN_10094b5d4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010094b5b8();
  FUN_100082720("ChatMediaPreviewServiceProviderWrapperScopeInitializationPluginProvider",0x47,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10094b614; end: 10094b61b;  */

void FUN_10094b614(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cc283c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10094b61c; end: 10094b69f;  */

void FUN_10094b61c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cc283c,param_2,&UNK_101cc2840,param_2,&UNK_101cc2868,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10094b6a0; end: 10094b6c7;  */

undefined ** FUN_10094b6a0(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10094b6c8; end: 10094b707;  */

void FUN_10094b6c8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010094b6ac();
  FUN_100082720("ChatPeekServiceProviderWrapperScopeInitializationPluginProvider",0x3f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10094b708; end: 10094b70f;  */

void FUN_10094b708(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cc2a74);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10094b710; end: 10094b793;  */

void FUN_10094b710(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cc2a74,param_2,&UNK_101cc2a78,param_2,&UNK_101cc2aa0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10094b794; end: 10094b7a3;  */

void FUN_10094b794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010094b798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 10094b7a4; end: 10094b7f7;  */

void FUN_10094b7a4(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_10094b9c0();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 10094b7f8; end: 10094b81b;  */

undefined ** FUN_10094b7f8(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10094b81c; end: 10094b89b;  */

void FUN_10094b81c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106b7828;
  func_0x000107c613fc(&UNK_1106b7828,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10094b89c,puVar1);
  return;
}



/* Entry: 10094b89c; end: 10094b8a3;  */

void FUN_10094b89c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fbffc0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fbffc0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b78c0;
  func_0x000107c613fc(&UNK_1106b78c0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039ac470;
  FUN_10058fa64(&UNK_1039ac470,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10094b8a4; end: 10094b99b;  */

void FUN_10094b8a4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fbffc0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fbffc0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b78c0;
  func_0x000107c613fc(&UNK_1106b78c0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039ac470;
  FUN_10058fa64(&UNK_1039ac470,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10094b99c; end: 10094b9bf;  */

void FUN_10094b99c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10094b9c0; end: 10094bb8b;  */

void FUN_10094b9c0(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar5 = lVar2;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  if (lVar5 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(&uStack_70);
    func_0x000107c615e8(lVar5);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    FUN_10006e7f4(&uStack_50);
  }
  else {
    uVar3 = 0;
    FUN_1002ed07c(0);
    puVar4 = &uStack_78;
    func_0x000107c6147c(puVar4,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      uVar3 = uStack_78;
      func_0x000107c3ebcc();
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uStack_78);
      *(char *)(unaff_x20 + 0x38) = (char)uVar3;
      return;
    }
  }
  lVar5 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x000107c615e8(lVar2);
    *(undefined1 *)(unaff_x20 + 0x38) = 0;
    return;
  }
  lVar6 = lVar5;
  func_0x000107c5dc1c();
  func_0x000107c61180();
  if (lVar6 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(&uStack_70);
    func_0x000107c615e8(lVar6);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    FUN_10006e7f4(&uStack_50);
  }
  else {
    uVar3 = 0;
    FUN_1002ed07c(0);
    puVar4 = &uStack_78;
    func_0x000107c6147c(puVar4,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      uVar3 = uStack_78;
      func_0x000107c3ebcc();
      uVar1 = (undefined1)uVar3;
      goto LAB_10094bb4c;
    }
  }
  uVar1 = 0;
  uStack_78 = 0;
LAB_10094bb4c:
  *(undefined1 *)(unaff_x20 + 0x38) = uVar1;
  func_0x000107c52de0(lVar2);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uStack_78);
  func_0x000107c615e8(lVar2);
  return;
}



/* Entry: 10094bb8c; end: 10094bb93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10094bb8c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1002ad8fc();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112fbffd0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10094bb94; end: 10094bbff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10094bb94(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1002ad8fc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fbffd0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10094bc00; end: 10094bc2b;  */

void FUN_10094bc00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10094bc2c; end: 10094bc53;  */

undefined ** FUN_10094bc2c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10094bc54; end: 10094bc93;  */

void FUN_10094bc54(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010094bc38();
  FUN_100082720("CloudSyncStatusServicesProviderWrapperScopeInitializationPluginProvider",0x47,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10094bc94; end: 10094bc9b;  */

void FUN_10094bc94(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d1d72c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10094bc9c; end: 10094bd1f;  */

void FUN_10094bc9c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d1d72c,param_2,&UNK_101d1d730,param_2,&UNK_101d1d758,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10094bd20; end: 10094bd43;  */

undefined ** FUN_10094bd20(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10094bd44; end: 10094bdc3;  */

void FUN_10094bd44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106b7d30;
  func_0x000107c613fc(&UNK_1106b7d30,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10094bdc4,puVar1);
  return;
}



/* Entry: 10094bdc4; end: 10094bdcb;  */

void FUN_10094bdc4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fc0318,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fc0318,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b7dc8;
  func_0x000107c613fc(&UNK_1106b7dc8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039ae0d8;
  FUN_10058fa64(&UNK_1039ae0d8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10094bdcc; end: 10094bec3;  */

void FUN_10094bdcc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fc0318,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fc0318,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b7dc8;
  func_0x000107c613fc(&UNK_1106b7dc8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039ae0d8;
  FUN_10058fa64(&UNK_1039ae0d8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10094bec4; end: 10094bee7;  */

void FUN_10094bec4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10094bee8; end: 10094beef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10094bee8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1002c71d8();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112fc0328) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10094bef0; end: 10094bf5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10094bef0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1002c71d8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fc0328) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10094bf5c; end: 10094bf87;  */

void FUN_10094bf5c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10094bf88; end: 10094bfab;  */

undefined ** FUN_10094bf88(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10094bfac; end: 10094c02b;  */

void FUN_10094bfac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106b7f10;
  func_0x000107c613fc(&UNK_1106b7f10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10094c02c,puVar1);
  return;
}



/* Entry: 10094c02c; end: 10094c033;  */

void FUN_10094c02c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fc06b0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fc06b0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b7fa8;
  func_0x000107c613fc(&UNK_1106b7fa8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039ae924;
  FUN_10058fa64(&UNK_1039ae924,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10094c034; end: 10094c12b;  */

void FUN_10094c034(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fc06b0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fc06b0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b7fa8;
  func_0x000107c613fc(&UNK_1106b7fa8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039ae924;
  FUN_10058fa64(&UNK_1039ae924,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10094c12c; end: 10094c14f;  */

void FUN_10094c12c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10094c150; end: 10094c15b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10094c150(undefined8 *param_1)

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
  FUN_1002b61fc();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112fc06c0) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112fc06c8) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112fc06d0) = uVar7;
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



/* Entry: 10094c15c; end: 10094c1ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10094c15c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_2;
  FUN_1002b61fc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fc06c0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fc06c8) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fc06d0) = param_4;
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



/* Entry: 10094c200; end: 10094c25f;  */

void FUN_10094c200(void)

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



/* Entry: 10094c260; end: 10094c283;  */

undefined ** FUN_10094c260(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10094c284; end: 10094c303;  */

void FUN_10094c284(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106b8138;
  func_0x000107c613fc(&UNK_1106b8138,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10094c304,puVar1);
  return;
}



/* Entry: 10094c304; end: 10094c30b;  */

void FUN_10094c304(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fc0ec0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fc0ec0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b81d0;
  func_0x000107c613fc(&UNK_1106b81d0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039b0908;
  FUN_10058fa64(&UNK_1039b0908,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10094c30c; end: 10094c403;  */

void FUN_10094c30c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fc0ec0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fc0ec0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b81d0;
  func_0x000107c613fc(&UNK_1106b81d0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039b0908;
  FUN_10058fa64(&UNK_1039b0908,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10094c404; end: 10094c427;  */

void FUN_10094c404(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10094c428; end: 10094c437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10094c428(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar10 = &lStack_60;
  lVar8 = lVar1;
  FUN_1002b62e4();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(long *)(lVar9 + _DAT_112fc0ed0) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_112fc0ed8) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112fc0ee0) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_112fc0ee8) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112fc0ef0) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112fc0ef8) = uVar6;
  puVar7 = PTR_s_init_1125d9248;
  lStack_60 = lVar9;
  lStack_58 = lVar8;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_60,puVar7);
  *param_1 = plVar10;
  return;
}



/* Entry: 10094c438; end: 10094c52b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10094c438(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  lVar2 = param_2;
  FUN_1002b62e4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fc0ed0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fc0ed8) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fc0ee0) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fc0ee8) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112fc0ef0) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112fc0ef8) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c61154(&lStack_60,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10094c52c; end: 10094c5a3;  */

void FUN_10094c52c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10094c5a4; end: 10094c5cb;  */

undefined ** FUN_10094c5a4(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10094c5cc; end: 10094c60b;  */

void FUN_10094c5cc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010094c5b0();
  FUN_100082720("CommunitiesOrgNetworkServiceProviderWrapperScopeInitializationPluginProvider",0x4c,
                2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10094c60c; end: 10094c613;  */

void FUN_10094c60c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ec9bb8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10094c614; end: 10094c697;  */

void FUN_10094c614(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ec9bb8,param_2,&UNK_101ec9bbc,param_2,&UNK_101ec9be4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10094c698; end: 10094c6bb;  */

undefined ** FUN_10094c698(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10094c6bc; end: 10094c73b;  */

void FUN_10094c6bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106b82c0;
  func_0x000107c613fc(&UNK_1106b82c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10094c73c,puVar1);
  return;
}



/* Entry: 10094c73c; end: 10094c743;  */

void FUN_10094c73c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fc1518,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fc1518,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b8358;
  func_0x000107c613fc(&UNK_1106b8358,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039b36d4;
  FUN_10058fa64(&UNK_1039b36d4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10094c744; end: 10094c83b;  */

void FUN_10094c744(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fc1518,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fc1518,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b8358;
  func_0x000107c613fc(&UNK_1106b8358,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039b36d4;
  FUN_10058fa64(&UNK_1039b36d4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10094c83c; end: 10094c85f;  */

void FUN_10094c83c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10094c860; end: 10094c867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10094c860(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1002ad9f4();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112fc1528) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10094c868; end: 10094c8d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10094c868(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1002ad9f4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fc1528) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10094c8d4; end: 10094c8ff;  */

void FUN_10094c8d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10094c900; end: 10094ce37; +[SCStoriesSummaryInfo immutableObjectParse:bufferSize:] */

void FUN_10094c900(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ushort *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar5 = PTR_PTR_1126d5360;
  func_0x000107c610f4(PTR_PTR_1126d5360);
  lVar9 = (long)*piVar1;
  uVar8 = *(ushort *)((long)piVar1 - lVar9);
  if (uVar8 < 5) {
    puVar18 = (undefined *)0x0;
LAB_10094c9c4:
    uVar20 = 0;
LAB_10094c9c8:
    lVar9 = 0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar1 - lVar9))[2];
    if (uVar11 == 0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      func_0x000107c61180();
      lVar9 = (long)*piVar1;
      uVar8 = *(ushort *)((long)piVar1 - lVar9);
    }
    if (uVar8 < 7) goto LAB_10094c9c4;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar9));
    if (uVar11 == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(undefined4 *)((long)piVar1 + uVar11);
    }
    if ((uVar8 < 9) || (uVar11 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar9)), uVar11 == 0))
    goto LAB_10094c9c8;
    puVar2 = (uint *)((long)piVar1 + uVar11);
    lVar9 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_10094d854(lVar9);
  func_0x000107c61180();
  lVar10 = (long)*piVar1;
  puVar12 = (ushort *)((long)piVar1 - lVar10);
  uVar8 = *puVar12;
  uVar21 = 0;
  if (uVar8 < 0xb) {
    uVar6 = 0;
    bVar3 = false;
    uVar24 = 0;
    uVar23 = 0;
  }
  else {
    uVar22 = 0;
    uVar23 = 0;
    if ((ulong)puVar12[5] != 0) {
      uVar23 = *(undefined8 *)((long)piVar1 + (ulong)puVar12[5]);
    }
    if (uVar8 < 0xd) {
      uVar6 = 0;
LAB_10094cac0:
      bVar3 = false;
    }
    else {
      if ((ulong)puVar12[6] == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)((long)piVar1 + (ulong)puVar12[6]);
      }
      if (uVar8 < 0xf) goto LAB_10094cac0;
      if ((ulong)puVar12[7] == 0) {
        bVar3 = false;
      }
      else {
        bVar3 = *(char *)((long)piVar1 + (ulong)puVar12[7]) != '\0';
      }
      if (0x10 < uVar8) {
        uVar24 = 0;
        if ((ulong)puVar12[8] != 0) {
          uVar24 = *(undefined8 *)((long)piVar1 + (ulong)puVar12[8]);
        }
        if (uVar8 < 0x13) goto LAB_10094cadc;
        uVar25 = 0;
        if ((ulong)puVar12[9] != 0) {
          uVar25 = *(undefined8 *)((long)piVar1 + (ulong)puVar12[9]);
        }
        if (uVar8 < 0x15) {
LAB_10094cbfc:
          uVar13 = 0;
          uVar7 = 0;
        }
        else {
          if ((ulong)puVar12[10] != 0) {
            uVar22 = *(undefined8 *)((long)piVar1 + (ulong)puVar12[10]);
          }
          if (uVar8 < 0x17) goto LAB_10094cbfc;
          if ((ulong)puVar12[0xb] == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined8 *)((long)piVar1 + (ulong)puVar12[0xb]);
          }
          if (uVar8 < 0x19) {
            uVar13 = 0;
          }
          else {
            uVar13 = 0;
            if ((ulong)puVar12[0xc] != 0) {
              uVar13 = *(undefined8 *)((long)piVar1 + (ulong)puVar12[0xc]);
            }
            if (0x1a < uVar8) {
              if ((ulong)puVar12[0xd] == 0) {
                puVar17 = (undefined *)0x0;
              }
              else {
                puVar2 = (uint *)((long)piVar1 + (ulong)puVar12[0xd]);
                puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                    (long)puVar2 + (ulong)*puVar2 + 4);
                func_0x000107c61180();
                lVar10 = (long)*piVar1;
                uVar8 = *(ushort *)((long)piVar1 - lVar10);
              }
              uVar21 = 0;
              if (uVar8 < 0x1d) {
                uVar15 = 0;
                uVar14 = 0;
LAB_10094cd34:
                uVar16 = 0;
              }
              else {
                uVar11 = (ulong)*(ushort *)((long)piVar1 + (0x1c - lVar10));
                if (uVar11 == 0) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = *(undefined8 *)((long)piVar1 + uVar11);
                }
                if (uVar8 < 0x1f) {
                  uVar15 = 0;
                  goto LAB_10094cd34;
                }
                uVar11 = (ulong)*(ushort *)((long)piVar1 + (0x1e - lVar10));
                if (uVar11 == 0) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = *(undefined8 *)((long)piVar1 + uVar11);
                }
                if (uVar8 < 0x21) goto LAB_10094cd34;
                uVar11 = (ulong)*(ushort *)((long)piVar1 + (0x20 - lVar10));
                if (uVar11 == 0) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = *(undefined8 *)((long)piVar1 + uVar11);
                }
                if (0x22 < uVar8) {
                  uVar11 = (ulong)*(ushort *)((long)piVar1 + (0x22 - lVar10));
                  if (uVar11 == 0) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = *(undefined4 *)((long)piVar1 + uVar11);
                  }
                  if (uVar8 < 0x25) {
                    bVar4 = false;
                  }
                  else {
                    uVar11 = (ulong)*(ushort *)((long)piVar1 + (0x24 - lVar10));
                    if (uVar11 == 0) {
                      bVar4 = false;
                    }
                    else {
                      bVar4 = *(char *)((long)piVar1 + uVar11) != '\0';
                    }
                    if ((0x26 < uVar8) &&
                       (uVar11 = (ulong)*(ushort *)((long)piVar1 + (0x26 - lVar10)), uVar11 != 0)) {
                      puVar2 = (uint *)((long)piVar1 + uVar11);
                      puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                          (long)puVar2 + (ulong)*puVar2 + 4);
                      func_0x000107c61180();
                      goto LAB_10094cae0;
                    }
                  }
                  puVar19 = (undefined *)0x0;
                  goto LAB_10094cae0;
                }
              }
              bVar4 = false;
              puVar19 = (undefined *)0x0;
              goto LAB_10094cae0;
            }
          }
        }
        puVar19 = (undefined *)0x0;
        puVar17 = (undefined *)0x0;
        uVar15 = 0;
        uVar14 = 0;
        uVar16 = 0;
        bVar4 = false;
        goto LAB_10094cae0;
      }
    }
    uVar24 = 0;
  }
LAB_10094cadc:
  uVar22 = 0;
  puVar19 = (undefined *)0x0;
  puVar17 = (undefined *)0x0;
  bVar4 = false;
  uVar16 = 0;
  uVar15 = 0;
  uVar14 = 0;
  uVar13 = 0;
  uVar7 = 0;
  uVar25 = 0;
LAB_10094cae0:
  func_0x000107c48a9c(uVar23,uVar24,uVar25,uVar22,uVar21,puVar5,param_2,puVar18,uVar20,lVar9,uVar6,
                      bVar3,uVar7,uVar13,puVar17,uVar14,uVar15,uVar16,bVar4);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10094ce38; end: 10094ce5f;  */

undefined ** FUN_10094ce38(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10094ce60; end: 10094ce9f;  */

void FUN_10094ce60(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010094ce44();
  FUN_100082720("ComposerPeopleBridgeLastInteractionStateServicesProviderWrapperScopeInitializationPluginProvider"
                ,0x60,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10094cea0; end: 10094cea7;  */

void FUN_10094cea0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ed3558);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10094cea8; end: 10094cf2b;  */

void FUN_10094cea8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ed3558,param_2,&UNK_101ed355c,param_2,&UNK_101ed3584,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10094cf2c; end: 10094cf53;  */

undefined ** FUN_10094cf2c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10094cf54; end: 10094cf93;  */

void FUN_10094cf54(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010094cf38();
  FUN_100082720("ContactsServicesProviderWrapperScopeInitializationPluginProvider",0x40,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10094cf94; end: 10094cf9b;  */

void FUN_10094cf94(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c8a4ac);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10094cf9c; end: 10094d01f;  */

void FUN_10094cf9c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c8a4ac,param_2,&UNK_101c8a4b0,param_2,&UNK_101c8a4d8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10094d020; end: 10094d047;  */

undefined ** FUN_10094d020(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10094d048; end: 10094d087;  */

void FUN_10094d048(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010094d02c();
  FUN_100082720("ContentFeedRepositoryServiceProviderWrapperScopeInitializationPluginProvider",0x4c,
                2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10094d088; end: 10094d08f;  */

void FUN_10094d088(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101f0407c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}


