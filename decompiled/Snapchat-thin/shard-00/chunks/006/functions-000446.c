/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10091403c; end: 1009140bf;  */

void FUN_10091403c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e3c598,param_2,&UNK_102e3c59c,param_2,&UNK_102e3c5c4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009140c0; end: 1009140cb;  */

undefined ** FUN_1009140c0(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1009140cc; end: 100914157;  */

void FUN_1009140cc(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100914158,param_1);
  return;
}



/* Entry: 100914158; end: 10091415f;  */

void FUN_100914158(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102d6e740);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100914160; end: 1009141e3;  */

void FUN_100914160(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102d6e740,param_2,FUN_1009141e4,param_2,&UNK_102d6e744,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009141e4; end: 10091420b;  */

void FUN_1009141e4(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10091420c; end: 100914d73;  */

void FUN_10091420c(long *param_1,long param_2)

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
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
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
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_10032dbd8();
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
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  *(undefined8 *)(param_2 + 0x88) = uStack_e8;
  *(undefined8 *)(param_2 + 0x90) = uStack_f0;
  *(undefined8 *)(param_2 + 0x98) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_100;
  puVar1 = PTR_PTR_1126ac410;
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
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174();
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174(uStack_e0);
  uVar16 = uStack_e8;
  func_0x000107c61174();
  uVar17 = uStack_f0;
  func_0x000107c61174();
  uVar18 = uStack_f8;
  func_0x000107c61174();
  uVar19 = uStack_100;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar20 = auStack_70[0];
  func_0x000107c61174();
  uVar21 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar21 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2e280);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar21 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar21);
  uVar22 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef19d20);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(uVar22);
  uVar21 = 0x72655370756f7267;
  func_0x000107c5fadc(0x72655370756f7267,0xed00007365636976);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar21);
  uVar22 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef299a0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef22380);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(uVar22);
  uVar21 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar21);
  uVar22 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar14);
  func_0x000107c61174();
  uVar21 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00a6d0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar22);
  uVar21 = 0x53656761726f7473;
  func_0x000107c5fadc(0x53656761726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar21);
  uVar22 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar17);
  func_0x000107c61174();
  uVar21 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2a380);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(uVar22);
  uVar21 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c280);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(uVar22);
  uVar21 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar21);
  func_0x000107c3e740(uVar22);
  func_0x000107c61170(uVar20);
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
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  *param_1 = param_2;
  return;
}



/* Entry: 100914d74; end: 100914dbf;  */

void FUN_100914d74(void)

{
  long unaff_x20;
  
  FUN_10091420c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 100914dc0; end: 100914dc7;  */

void FUN_100914dc0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100914dc8; end: 100914e1b;  */

void FUN_100914dc8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100914e1c; end: 100914e23;  */

void FUN_100914e1c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1001b8df4();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100914ebc();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_100914f48();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100914e24; end: 100914ebb;  */

void FUN_100914e24(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1001b8df4();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100914ebc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_100914f48();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 100914ebc; end: 100914f47;  */

void FUN_100914ebc(undefined8 param_1)

{
  if (lRam0000000112ddbaf8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e65d5c4);
  return;
}



/* Entry: 100914f48; end: 100914f97;  */

undefined * FUN_100914f48(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0;
  func_0x000100914f28(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126a8000;
  func_0x000107c610f8(PTR_PTR_1126a8000);
  func_0x000107c46cec();
  func_0x000107c61170(uVar1);
  return puVar2;
}



/* Entry: 100914f98; end: 100914fd3; -[_TtC38HomeScreenWidgetServicesImplementation23HomeScreenWidgetUpdater init] */

void FUN_100914f98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000100914f28();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100914fd4; end: 100915047; -[SCHomeScreenWidgetServices initWithHomeScreenWidgetUpdater:] */

undefined1 * FUN_100914fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fda08;
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



/* Entry: 100915048; end: 100915a47; -[SCExtensionsUserDataEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100915048(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined8 uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f37f249);
  func_0x000107c61180();
  func_0x000107c470d0(puVar1,param_2,puVar2,0x11,0,9);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126cb0e0;
  func_0x000107c610f4();
  lVar37 = (long)_DAT_112748f28;
  lVar3 = param_1 + lVar37;
  func_0x000107c61148();
  lVar4 = lVar3;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar38 = (long)_DAT_112748f2c;
  lVar6 = param_1 + lVar38;
  func_0x000107c61148();
  lVar7 = lVar6;
  func_0x000107c3e980();
  func_0x000107c61180();
  lVar8 = param_1 + lVar38;
  func_0x000107c61148();
  lVar9 = lVar8;
  func_0x000107c3ea24();
  func_0x000107c61180();
  lVar39 = param_1 + _DAT_112748f30;
  func_0x000107c61148();
  lVar10 = lVar39;
  func_0x000107c410f8();
  func_0x000107c61180();
  lVar31 = (long)_DAT_112748f34;
  lVar35 = param_1 + lVar31;
  func_0x000107c61148();
  lVar11 = lVar35;
  func_0x000107c51d00();
  func_0x000107c61180();
  lVar32 = (long)_DAT_112748f38;
  lVar12 = param_1 + lVar32;
  func_0x000107c61148();
  lVar13 = lVar12;
  func_0x000107c3dda8();
  func_0x000107c61180();
  lVar14 = param_1 + lVar38;
  func_0x000107c61148();
  lVar15 = lVar14;
  func_0x000107c3e9c0();
  func_0x000107c61180();
  lVar33 = (long)_DAT_112748f3c;
  lVar16 = param_1 + lVar33;
  func_0x000107c61148();
  lVar17 = lVar16;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar34 = (long)_DAT_112748f40;
  lVar18 = param_1 + lVar34;
  func_0x000107c61148();
  lVar19 = lVar18;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c491e0(puVar2,param_2,lVar5,lVar7,lVar9,lVar10,lVar11,lVar13,lVar15,lVar17,lVar19,
                      puVar1);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar39);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  puVar20 = PTR_PTR_1126cb0e8;
  func_0x000107c610f4();
  lVar35 = (long)_DAT_112748f44;
  lVar3 = param_1 + lVar35;
  func_0x000107c61148(lVar3);
  lVar12 = lVar3;
  func_0x000107c5b478();
  func_0x000107c61180();
  lVar39 = (long)_DAT_112748f48;
  lVar6 = param_1 + lVar39;
  func_0x000107c61148(lVar6);
  lVar14 = lVar6;
  func_0x000107c44574();
  func_0x000107c61180();
  lVar8 = param_1 + lVar37;
  func_0x000107c61148(lVar8);
  lVar16 = lVar8;
  func_0x000107c5da68();
  func_0x000107c61180();
  func_0x000107c48870(puVar20,param_2,lVar12,lVar14,lVar16);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar3);
  puVar21 = PTR_PTR_1126cb0f0;
  func_0x000107c610f4();
  lVar3 = param_1 + _DAT_112748f4c;
  func_0x000107c61148();
  lVar17 = lVar3;
  func_0x000107c43a50();
  func_0x000107c61180();
  lVar6 = param_1 + lVar37;
  func_0x000107c61148();
  lVar19 = lVar6;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar22 = lVar19;
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar8 = param_1 + lVar38;
  func_0x000107c61148();
  lVar23 = lVar8;
  func_0x000107c4213c();
  func_0x000107c61180();
  lVar39 = param_1 + lVar39;
  func_0x000107c61148();
  lVar24 = lVar39;
  func_0x000107c4456c();
  func_0x000107c61180();
  lVar31 = param_1 + lVar31;
  func_0x000107c61148();
  lVar25 = lVar31;
  func_0x000107c51d00();
  func_0x000107c61180();
  lVar35 = param_1 + lVar35;
  func_0x000107c61148();
  lVar7 = lVar35;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  lVar12 = param_1 + _DAT_112748f50;
  func_0x000107c61148();
  lVar9 = lVar12;
  func_0x000107c4e754();
  func_0x000107c61180();
  lVar14 = param_1 + lVar32;
  func_0x000107c61148();
  lVar10 = lVar14;
  func_0x000107c3dda8();
  func_0x000107c61180();
  lVar16 = param_1 + _DAT_112748f54;
  func_0x000107c61148();
  lVar11 = lVar16;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar18 = param_1 + lVar33;
  func_0x000107c61148();
  lVar13 = lVar18;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar34 = param_1 + lVar34;
  func_0x000107c61148();
  lVar15 = lVar34;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar4 = param_1 + lVar38;
  func_0x000107c61148();
  lVar5 = lVar4;
  func_0x000107c3e980();
  func_0x000107c61180();
  func_0x000107c46a5c(puVar21,param_2,lVar17,lVar22,lVar23,lVar24,lVar25,lVar7,lVar9,lVar10,lVar11,
                      puVar1,puVar20,lVar13,lVar15,lVar5);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar34);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar39);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar3);
  puVar26 = PTR_PTR_1126cb0f8;
  func_0x000107c610f4();
  lVar3 = param_1 + _DAT_112748f58;
  func_0x000107c61148();
  lVar8 = lVar3;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  lVar6 = param_1 + lVar32;
  func_0x000107c61148();
  lVar39 = lVar6;
  func_0x000107c3dda8();
  func_0x000107c61180();
  lVar33 = param_1 + lVar33;
  func_0x000107c61148();
  lVar35 = lVar33;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c477b4(puVar26,param_2,lVar8,lVar39,lVar35,puVar1);
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar33);
  func_0x000107c61170(lVar39);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar3);
  puVar27 = PTR_PTR_1126cb100;
  func_0x000107c610f4();
  lVar32 = param_1 + lVar32;
  func_0x000107c61148();
  lVar39 = lVar32;
  func_0x000107c3dda8();
  func_0x000107c61180();
  lVar3 = param_1 + _DAT_112748f5c;
  func_0x000107c61148();
  lVar6 = param_1 + lVar38;
  func_0x000107c61148();
  lVar35 = lVar6;
  func_0x000107c3e944();
  func_0x000107c61180();
  lVar8 = param_1 + lVar38;
  func_0x000107c61148();
  lVar12 = lVar8;
  func_0x000107c3e980();
  func_0x000107c61180();
  func_0x000107c49304(puVar27,param_2,lVar39,lVar3,lVar35,lVar12,puVar1);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar39);
  func_0x000107c61170(lVar32);
  puVar28 = PTR_PTR_1126cb108;
  func_0x000107c610f4();
  lVar3 = param_1 + _DAT_112748f60;
  func_0x000107c61148();
  lVar35 = lVar3;
  func_0x000107c3dfac();
  func_0x000107c61180();
  lVar6 = param_1 + lVar37;
  func_0x000107c61148();
  lVar12 = lVar6;
  func_0x000107c5da68();
  func_0x000107c61180();
  lVar37 = param_1 + lVar37;
  func_0x000107c61148();
  lVar14 = lVar37;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar38 = param_1 + lVar38;
  func_0x000107c61148();
  lVar16 = lVar38;
  func_0x000107c5db24();
  func_0x000107c61180();
  lVar8 = param_1 + _DAT_112748f64;
  func_0x000107c61148();
  lVar18 = lVar8;
  func_0x000107c3dda8();
  func_0x000107c61180();
  puVar29 = PTR_PTR_1126cb110;
  func_0x000107c610fc();
  puVar30 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar2;
  puStack_88 = puVar21;
  puStack_80 = puVar26;
  puStack_78 = puVar27;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,4);
  func_0x000107c61180();
  lVar39 = param_1 + _DAT_112748f68;
  func_0x000107c61148();
  lVar31 = lVar39;
  func_0x000107c44ee4();
  func_0x000107c61180();
  func_0x000107c45720(puVar28,param_2,lVar35,lVar12,lVar14,lVar16,lVar18,puVar29,puVar30,lVar31,
                      puVar1);
  lVar34 = (long)_DAT_112748f6c;
  uVar36 = *(undefined8 *)(param_1 + lVar34);
  *(undefined **)(param_1 + lVar34) = puVar28;
  func_0x000107c61170(uVar36);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(lVar39);
  func_0x000107c61170(puVar30);
  func_0x000107c61170(puVar29);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar38);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar37);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar3);
  func_0x000107c3e740(*(undefined8 *)(param_1 + lVar34));
  func_0x000107c61170(puVar27);
  func_0x000107c61170(puVar26);
  func_0x000107c61170(puVar21);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(puVar2);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  func_0x000107c60e78();
  return *(undefined **)(puVar1 + 0x28);
}



/* Entry: 100915a48; end: 100915a4f; -[SCUserInfoServices bitmojiFlatlandInfoProvider] */

undefined8 FUN_100915a48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100915a50; end: 100915c8f; -[SCExtensionStoryDataProvider initWithUserId:bitmojiAvatarIdProvider:bitmojiSelfieIdProvider:customStoriesDataFetcher:bitmojiSelfieFetcher:userScopedAppGroupStorage:bitmojiFlatlandInfoProvider:configProvider:preferences:performer:] */

undefined8 *
FUN_100915a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  puStack_68 = PTR_PTR_1126f1750;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100915c90; end: 100915f63; -[SCExtensionSnapchatterDependencyMonitor initWithSnapchattersObservableRepository:groupsDataTracker:userSessionContext:] */

undefined8 *
FUN_100915c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **unaff_x28;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_80 = PTR_PTR_1126f1748;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae560;
    func_0x000107c61160();
    uVar8 = puVar1[2];
    puVar1[2] = puVar2;
    func_0x000107c61170(uVar8);
    func_0x000107c61144(auStack_90,puVar1);
    puVar7 = PTR_PTR_1126aeec0;
    puVar2 = PTR_PTR_1126ae960;
    puVar3 = PTR_PTR_1126cb0b8;
    func_0x000107c5b4c0(PTR_PTR_1126cb0b8);
    func_0x000107c61180();
    func_0x000107c42c74(puVar2);
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126ae970;
    func_0x000107c44e60(PTR_PTR_1126ae970);
    func_0x000107c61180();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    puStack_b0 = &UNK_1064c4cd0;
    puStack_a8 = &UNK_11084b7a0;
    func_0x000107c6111c(auStack_98,auStack_90);
    func_0x000107c61174(param_3);
    uStack_a0 = param_3;
    func_0x000107c3e2d4(puVar7);
    func_0x000107c611b0();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    puVar2 = PTR_PTR_1126ae558;
    uVar8 = param_4;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar5 = uVar8;
    func_0x000107c44578();
    func_0x000107c61180();
    uVar6 = puVar1[2];
    uStack_78 = uVar5;
    func_0x000107c43bf4();
    func_0x000107c61180();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar6;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3db10();
    func_0x000107c61180();
    uVar9 = puVar1[3];
    puVar1[3] = puVar2;
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uStack_a0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
    unaff_x28 = &puStack_c0;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  func_0x000107c60e78();
  func_0x000107c61120((undefined1 *)((long)unaff_x28 + 0x28));
  func_0x000107c61120(auStack_90);
  uVar8 = param_3;
  func_0x000107c60bd8();
  puVar1 = &uStack_f0;
  pcStack_c8 = FUN_100915f64;
  uStack_e0 = param_4;
  uStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x000107c614ec();
  uVar5 = uVar8;
  func_0x000107c610f8();
  uStack_f0 = uVar5;
  uStack_e8 = uVar8;
  func_0x000107c61154(&uStack_f0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 100915f64; end: 100915fa3; +[SCAttributedExtensionsTask snapchattersDependencyMonitor] */

void FUN_100915f64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c614ec();
  uVar1 = param_1;
  func_0x000107c610f8();
  uStack_30 = uVar1;
  uStack_28 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100915fa4; end: 10091623f; +[SCAttributedTask extensions:] */

void FUN_100915fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000100915fdc();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100916240; end: 100916247; -[SCGroupsDataTracker groupsLoadedFuture] */

void FUN_100916240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 100916248; end: 10091634b;  */

/* WARNING: Possible PIC construction at 0x00010091631c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009162ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100916320) */

void FUN_100916248(long param_1,undefined *param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61178(uVar1);
  func_0x000107c3cb4c();
  func_0x000107c611ec();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  if (*(long *)(lVar3 + 0x18) != 0) {
    if (param_3 == (undefined *)0x0) {
      puVar2 = param_2;
      if (param_2 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
        func_0x000107c61180();
      }
      func_0x000107c56bc4(*(undefined8 *)(param_1 + 0x30));
      if (param_2 == (undefined *)0x0) goto code_r0x000107c61170;
      lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      lVar3 = *(long *)(lVar4 + 0x18) + -1;
      *(long *)(lVar4 + 0x18) = lVar3;
      if (lVar3 == 0) {
        func_0x000107c3fefc(*(undefined8 *)(param_1 + 0x28));
      }
    }
    else {
      *(undefined8 *)(lVar3 + 0x18) = 0;
      func_0x000107c3fef8(*(undefined8 *)(param_1 + 0x28));
    }
  }
  func_0x000107c611f0(uVar1);
  puVar2 = param_3;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10091634c; end: 100916353; -[SCPinnedConversationsServices pinnedConversationsDataCoordinator] */

undefined8 FUN_10091634c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100916354; end: 1009165c7; -[SCExtensionSnapchatterDataProvider initWithFriendmojiPresenter:userId:displayNameProvider:groupsDataFetcher:bitmojiSelfieFetcher:snapchattersDataFetcher:pinnedConversationsDataCoordinator:userScopedAppGroupStorage:grapheneRegistry:performer:dependencyMonitor:configProvider:preferences:bitmojiAvatarIdProvider:] */

undefined8
FUN_100916354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  func_0x000107c61174(param_14);
  puVar1 = PTR_PTR_1126ae720;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  puStack_80 = &UNK_1064c2124;
  puStack_78 = &UNK_1108429c8;
  uStack_70 = param_14;
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3e4fc(puVar1,param_2,&puStack_90);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126cb070;
  func_0x000107c610f4();
  func_0x000107c46bb4();
  func_0x000107c61170(param_11);
  func_0x000107c46a60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,0xfa,puVar1,puVar2,param_12,param_13,param_14,param_15,param_16);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(param_14);
  return param_1;
}



/* Entry: 1009165c8; end: 10091669b; -[SCAppExtensionUserDataLogger initWithGrapheneRegistry:] */

undefined8 * FUN_1009165c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126f17d0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10091669c; end: 100916a0f; -[SCExtensionSnapchatterDataProvider initWithFriendmojiPresenter:userId:displayNameProvider:groupsDataFetcher:bitmojiSelfieFetcher:snapchattersDataFetcher:pinnedConversationsDataCoordinator:userScopedAppGroupStorage:maxGroupsSavedForNotifExt:maxFriendsSavedForAppExt:grapheneLogger:performer:dependencyMonitor:configProvider:preferences:bitmojiAvatarIdProvider:] */

undefined8 *
FUN_10091669c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  puStack_70 = PTR_PTR_1126f1740;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[4];
    puVar1[4] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[4];
    puVar1[4] = param_10;
    func_0x000107c61170(uVar2);
    puVar1[0xd] = param_11;
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[5];
    puVar1[5] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[6];
    puVar1[6] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_18;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100916a10; end: 100916b0b; -[SCExtensionConfigDataProvider initWithMessagingExperimentService:userScopedAppGroupStorage:configProvider:performer:] */

undefined1 *
FUN_100916a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126f1738;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
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
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100916b0c; end: 100916c2f; -[SCExtensionUserInfoDataProvider initWithUserScopedAppGroupStorage:userIPInferredLocationServices:birthdayInfoProvider:bitmojiAvatarIdProvider:performer:] */

undefined1 *
FUN_100916b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1126f1758;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
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
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100916c30; end: 100916c37; -[SCAppExtensionStorageServices appGroupPlistStorage] */

undefined8 FUN_100916c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100916c38; end: 100916cdf; -[_TtC37AuthNotificationExtensionUserDefaults37AuthNotificationExtensionUserDefaults init] */

undefined * FUN_100916c38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_PTR_1126a7148;
  func_0x000107c61168(PTR_PTR_1126a7148);
  func_0x000107c5a9f0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3dda8();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8);
  func_0x000107c453e4();
  uVar4 = uVar1;
  func_0x000107c610f8(uVar1);
  FUN_100916d10(puVar3,puVar2,uVar4);
  func_0x000107c61464(param_1,uVar1,0x28,7);
  return puVar3;
}



/* Entry: 100916ce0; end: 100916d0f; -[SCAppExtensionStorageServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100916cf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100916cfc) */

void FUN_100916ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100916d10; end: 100916ea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100916d10(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_3;
  uStack_80 = param_1;
  uStack_78 = param_2;
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5eb14();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5eb44();
  lVar6 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = _DAT_113052848;
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar5 = 0;
  func_0x000107c5eb54();
  func_0x000107c613fc();
  func_0x000107c5eb50();
  (**(code **)(lVar6 + 0x68))
            (lVar8,*(undefined4 *)
                    PTR___s10Foundation11JSONEncoderC20DateEncodingStrategyO7iso8601yA2EmFWC_1103503b8
             ,lVar4);
  func_0x000107c5eb48(lVar8);
  *(undefined8 *)(param_3 + lVar1) = uVar5;
  lVar1 = _DAT_113052850;
  uVar5 = 0;
  func_0x000107c5eb24();
  func_0x000107c613fc();
  func_0x000107c5eb20();
  (**(code **)(lVar9 + 0x68))
            (lVar7,*(undefined4 *)
                    PTR___s10Foundation11JSONDecoderC20DateDecodingStrategyO7iso8601yA2EmFWC_110350328
             ,lVar3);
  func_0x000107c5eb18(lVar7);
  *(undefined8 *)(param_3 + lVar1) = uVar5;
  *(undefined8 *)(param_3 + _DAT_113052838) = uStack_80;
  *(undefined8 *)(param_3 + _DAT_113052840) = uStack_78;
  lStack_70 = param_3;
  lStack_68 = lVar2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100916ea4; end: 100916eab; -[SCHomeScreenWidgetServices homeScreenWidgetUpdater] */

undefined8 FUN_100916ea4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100916eac; end: 100917107; -[SCExtensionsUserDataWorkflow initWithApplicationEvents:userSessionContext:userSession:usernameProvider:systemScopedAppGroupStorage:authNotificationUserDefaults:extensionUserDataProviders:homeScreenWidgetUpdater:performer:] */

undefined8 *
FUN_100916eac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_1126f1768;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x000107c61160();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[9];
    func_0x000107c4f7c0(uVar2);
    func_0x000107c61180();
    func_0x000107c5a168(puVar1[8]);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100917108; end: 100917267; -[SCExtensionsUserDataWorkflow begin] */

void FUN_100917108(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  puStack_58 = &UNK_1064c5f9c;
  puStack_50 = &UNK_110885010;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  puStack_80 = &UNK_1064c5fc4;
  puStack_78 = &UNK_110885040;
  lStack_70 = param_1;
  lStack_48 = param_1;
  func_0x000107c4c6fc(*(undefined8 *)(param_1 + 0x10),param_2,&PTR___NSConcreteGlobalBlock_110926198
                      ,&puStack_68,&puStack_90);
  func_0x000107c61144(auStack_98,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c41b80();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4da80();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_a0,auStack_98);
  uVar3 = uVar2;
  func_0x000107c5c320();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_a0);
  func_0x000107c61120(auStack_98);
  return;
}



/* Entry: 100917268; end: 10091726b;  */

void FUN_100917268(void)

{
  return;
}



/* Entry: 10091726c; end: 10091731f;  */

void FUN_10091726c(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100917320; end: 100917347;  */

undefined ** FUN_100917320(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100917348; end: 100917387;  */

void FUN_100917348(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010091732c();
  FUN_100082720("SCExternalMediaPreparingServiceProviderWrapperScopeInitializationPluginProvider",
                0x4f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100917388; end: 10091738f;  */

void FUN_100917388(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d6eb08);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100917390; end: 100917413;  */

void FUN_100917390(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d6eb08,param_2,&UNK_102d6eb0c,param_2,&UNK_102d6eb34,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100917414; end: 10091743b;  */

undefined ** FUN_100917414(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10091743c; end: 10091747b;  */

void FUN_10091743c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100917420();
  FUN_100082720("SCFamilyCenterServiceProviderWrapperScopeInitializationPluginProvider",0x45,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10091747c; end: 100917483;  */

void FUN_10091747c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102faab50);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100917484; end: 100917507;  */

void FUN_100917484(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102faab50,param_2,&UNK_102faab54,param_2,&UNK_102faab7c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100917508; end: 100917513;  */

undefined ** FUN_100917508(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100917514; end: 10091753f;  */

void FUN_100917514(void)

{
  FUN_1008f5bec();
  return;
}



/* Entry: 100917540; end: 100917547;  */

void FUN_100917540(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101f9eb50);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100917548; end: 1009175cb;  */

void FUN_100917548(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101f9eb50,param_2,&UNK_101f9eb54,param_2,&UNK_101f9eb7c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009175cc; end: 1009175f3;  */

undefined ** FUN_1009175cc(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1009175f4; end: 100917633;  */

void FUN_1009175f4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009175d8();
  FUN_100082720("SCFriendingNearbyFriendsServiceProviderWrapperScopeInitializationPluginProvider",
                0x4f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100917634; end: 10091763b;  */

void FUN_100917634(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102dbecb4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10091763c; end: 1009176bf;  */

void FUN_10091763c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102dbecb4,param_2,&UNK_102dbecb8,param_2,&UNK_102dbece0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009176c0; end: 1009176e7;  */

undefined ** FUN_1009176c0(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1009176e8; end: 100917727;  */

void FUN_1009176e8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009176cc();
  FUN_100082720("SCFriendsFeedMoreUnreadServiceProviderWrapperScopeInitializationPluginProvider",
                0x4e,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100917728; end: 10091772f;  */

void FUN_100917728(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d6f29c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100917730; end: 1009177b3;  */

void FUN_100917730(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d6f29c,param_2,&UNK_102d6f2a0,param_2,&UNK_102d6f2c8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009177b4; end: 1009177db;  */

undefined ** FUN_1009177b4(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1009177dc; end: 10091781b;  */

void FUN_1009177dc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009177c0();
  FUN_100082720("SCGalleryMediaSendingServicesEntryPointWrapperScopeInitializationPluginProvider",
                0x4f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10091781c; end: 100917823;  */

void FUN_10091781c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e58740);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100917824; end: 1009178a7;  */

void FUN_100917824(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e58740,param_2,&UNK_102e58744,param_2,&UNK_102e5876c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009178a8; end: 1009178cf;  */

undefined ** FUN_1009178a8(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1009178d0; end: 10091790f;  */

void FUN_1009178d0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009178b4();
  FUN_100082720("SCGalleryStorySavingServiceProviderWrapperScopeInitializationPluginProvider",0x4b,2
               );
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100917910; end: 100917917;  */

void FUN_100917910(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10301c1f0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100917918; end: 10091799b;  */

void FUN_100917918(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10301c1f0,param_2,&UNK_10301c1f4,param_2,&UNK_10301c21c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10091799c; end: 1009179c3;  */

undefined ** FUN_10091799c(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1009179c4; end: 100917a03;  */

void FUN_1009179c4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009179a8();
  FUN_100082720("SCGenericStoryQueryServiceProviderWrapperScopeInitializationPluginProvider",0x4a,2)
  ;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100917a04; end: 100917a0b;  */

void FUN_100917a04(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10301df04);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100917a0c; end: 100917a8f;  */

void FUN_100917a0c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10301df04,param_2,&UNK_10301df08,param_2,&UNK_10301df30,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100917a90; end: 100917a9b;  */

undefined ** FUN_100917a90(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100917a9c; end: 100917ac7;  */

void FUN_100917a9c(void)

{
  FUN_1008f5bec();
  return;
}



/* Entry: 100917ac8; end: 100917acf;  */

void FUN_100917ac8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101f9ef9c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100917ad0; end: 100917b53;  */

void FUN_100917ad0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101f9ef9c,param_2,FUN_100917b54,param_2,&UNK_101f9efa0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100917b54; end: 100917b7b;  */

void FUN_100917b54(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100917b7c; end: 100917b9b;  */

void FUN_100917b7c(long *param_1)

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
  long unaff_x20;
  undefined8 uVar10;
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
  func_0x00010032e85c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a9c48;
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
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar9 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e20);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0x6553726567676f6c;
  func_0x000107c5fadc(0x6553726567676f6c,0xee00736563697672);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
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



/* Entry: 100917b9c; end: 100917f57;  */

void FUN_100917b9c(long *param_1,long param_2)

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
  func_0x00010032e85c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a9c48;
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
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar8 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e20);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar9);
  uVar8 = 0x6553726567676f6c;
  func_0x000107c5fadc(0x6553726567676f6c,0xee00736563697672);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
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



/* Entry: 100917f58; end: 100918093; -[SCGeolocationLoggerEntryPoint begin] */

void FUN_100917f58(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  puVar1 = PTR_PTR_1126aeec0;
  puVar3 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126bf070;
  func_0x000107c43e70(PTR_PTR_1126bf070);
  func_0x000107c61180();
  func_0x000107c4c280(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae970;
  func_0x000107c4c0f8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c3e2d4(puVar1);
  func_0x000107c611b0();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 100918094; end: 10091809f; +[SCAttributedMapTask geoLocationLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100918094(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b568) = 1;
  *(undefined8 *)(lVar1 + _DAT_11309b570) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b578) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b580) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1009180a0; end: 1009180eb;  */

void FUN_1009180a0(void)

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



/* Entry: 1009180ec; end: 100918113;  */

undefined ** FUN_1009180ec(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100918114; end: 100918153;  */

void FUN_100918114(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009180f8();
  FUN_100082720("SCGroupChatAddButtonServiceProviderWrapperScopeInitializationPluginProvider",0x4b,2
               );
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100918154; end: 10091815b;  */

void FUN_100918154(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102dbf398);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10091815c; end: 1009181df;  */

void FUN_10091815c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102dbf398,param_2,&UNK_102dbf39c,param_2,&UNK_102dbf3c4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009181e0; end: 100918207;  */

undefined ** FUN_1009181e0(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100918208; end: 100918247;  */

void FUN_100918208(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009181ec();
  FUN_100082720("SCHeaderButtonServiceProviderWrapperScopeInitializationPluginProvider",0x45,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100918248; end: 10091824f;  */

void FUN_100918248(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102fde37c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100918250; end: 1009182d3;  */

void FUN_100918250(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102fde37c,param_2,&UNK_102fde380,param_2,&UNK_102fde3a8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009182d4; end: 1009182df;  */

undefined ** FUN_1009182d4(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1009182e0; end: 10091836b;  */

void FUN_1009182e0(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10091836c,param_1);
  return;
}



/* Entry: 10091836c; end: 100918373;  */

void FUN_10091836c(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ac8b8;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(puVar1,&UNK_102fab340);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100918374; end: 100918417;  */

void FUN_100918374(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ac8b8;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(puVar1,&UNK_102fab340,param_2,&UNK_102fab344,param_2,&UNK_102fab36c,param_2);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100918418; end: 100918473; +[SCHermodDuplexEntryPoint attributedTask] */

void FUN_100918418(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae960;
  puVar1 = PTR_PTR_1126bd0b0;
  func_0x000107c44db8(PTR_PTR_1126bd0b0);
  func_0x000107c61180();
  func_0x000107c515c0(puVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100918474; end: 10091847b; +[SCAttributedSafetyTask hermodDuplex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100918474(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bb60) = 0xf;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10091847c; end: 1009184cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10091847c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bb60) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1009184cc; end: 100918767; +[SCAttributedTask safety:] */

void FUN_1009184cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000100918504();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100918768; end: 10091878f;  */

undefined ** FUN_100918768(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100918790; end: 1009187cf;  */

void FUN_100918790(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100918774();
  FUN_100082720("SCHermodDuplexServiceProviderWrapperScopeInitializationPluginProvider",0x45,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009187d0; end: 1009187d7;  */

void FUN_1009187d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102faba48);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}


