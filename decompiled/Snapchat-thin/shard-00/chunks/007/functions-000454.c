/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10092d734; end: 10092d7d7;  */

void FUN_10092d734(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ac8d8;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(puVar1,&UNK_102facdb0,param_2,&UNK_102facdb4,param_2,&UNK_102facddc,param_2);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10092d7d8; end: 10092d833; +[SCTIVNotificationEntryPoint attributedTask] */

void FUN_10092d7d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae960;
  puVar1 = PTR_PTR_1126bd0b0;
  func_0x000107c5cadc(PTR_PTR_1126bd0b0);
  func_0x000107c61180();
  func_0x000107c515c0(puVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10092d834; end: 10092d863; +[SCAttributedSafetyTask tivNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10092d834(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bb60) = 0xe;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10092d864; end: 10092d8a3;  */

void FUN_10092d864(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010092d848();
  FUN_100082720("SCTIVServicesEntryPointWrapperScopeInitializationPluginProvider",0x3f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10092d8a4; end: 10092d8ab;  */

void FUN_10092d8a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102fadf10);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10092d8ac; end: 10092d92f;  */

void FUN_10092d8ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102fadf10,param_2,FUN_10092d930,param_2,&UNK_102fadf14,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10092d930; end: 10092d957;  */

void FUN_10092d930(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10092d958; end: 10092eb3f;  */

void FUN_10092d958(long *param_1,long param_2)

{
  code *pcVar1;
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
  undefined *puVar12;
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
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_100083b20(&uStack_118);
  FUN_100083b20(&uStack_120);
  FUN_100083b20(&uStack_128);
  FUN_100083b20(&uStack_130);
  FUN_100083b20(&uStack_138);
  FUN_100083b20(&uStack_140);
  FUN_100083b20(&uStack_148);
  FUN_100360224();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  *(undefined8 *)(param_2 + 0x70) = uStack_b8;
  *(undefined8 *)(param_2 + 0x78) = uStack_c0;
  *(undefined8 *)(param_2 + 0x80) = uStack_c8;
  *(undefined8 *)(param_2 + 0x88) = uStack_d0;
  *(undefined8 *)(param_2 + 0x90) = uStack_d8;
  *(undefined8 *)(param_2 + 0x98) = uStack_e0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f0;
  *(undefined8 *)(param_2 + 0xb0) = uStack_f8;
  *(undefined8 *)(param_2 + 0xb8) = uStack_100;
  *(undefined8 *)(param_2 + 0xc0) = uStack_108;
  *(undefined8 *)(param_2 + 200) = uStack_110;
  *(undefined8 *)(param_2 + 0xd0) = uStack_118;
  *(undefined8 *)(param_2 + 0xd8) = uStack_120;
  *(undefined8 *)(param_2 + 0xe0) = uStack_128;
  *(undefined8 *)(param_2 + 0xe8) = uStack_130;
  *(undefined8 *)(param_2 + 0xf0) = uStack_138;
  FUN_1000285a8(0x112dd2e10,&UNK_10dab8500);
  func_0x000107c610f8();
  uVar2 = uStack_118;
  func_0x000107c61174();
  uVar15 = uStack_78;
  func_0x000107c61174();
  uVar16 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar17 = uStack_d0;
  func_0x000107c61174();
  uVar18 = uStack_d8;
  func_0x000107c61174();
  uVar19 = uStack_e0;
  func_0x000107c61174();
  uVar20 = uStack_e8;
  func_0x000107c61174();
  uVar21 = uStack_f0;
  func_0x000107c61174();
  uVar22 = uStack_f8;
  func_0x000107c61174();
  uVar23 = uStack_100;
  func_0x000107c61174();
  uVar24 = uStack_108;
  func_0x000107c61174();
  uVar25 = uStack_110;
  func_0x000107c61174();
  uVar27 = uStack_120;
  func_0x000107c61174();
  uVar28 = uStack_128;
  func_0x000107c61174();
  uVar29 = uStack_130;
  func_0x000107c61174();
  uVar30 = uStack_138;
  func_0x000107c61174();
  uVar14 = uStack_140;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x18) = puVar12;
  FUN_1000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar14 = uStack_148;
  func_0x000107c6157c(uStack_148);
  FUN_10017da58();
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x20) = puVar12;
  puVar12 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x28) = puVar12;
  puVar12 = PTR_PTR_1126ac8e0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar12;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar12);
  uVar14 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  uVar31 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar31);
  uVar14 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010efc3350);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar31);
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar31);
  uVar14 = 0x655378656c707564;
  func_0x000107c5fadc(0x655378656c707564,0xee00736563697672);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  uVar31 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f017640);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef19d20);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef19c70);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1a530);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar31);
  uVar14 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar31);
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2e2d0);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar31);
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar31);
  uVar14 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2a4b0);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar14);
  uVar31 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar31);
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0x767265536b636564;
  func_0x000107c5fadc(0x767265536b636564,0xec00000073656369);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar14);
  uVar31 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar31);
  uVar14 = 0x112dca948;
  FUN_1000285a8(0x112dca948,&UNK_10d99f4a0);
  func_0x000107c60184();
  uVar26 = 0x5372657070696c66;
  func_0x000107c5fadc(0x5372657070696c66,0xef73656369767265);
  func_0x000107c5a49c(uVar31);
  func_0x000107c61170(uVar31);
  func_0x000107c615e8(uVar14);
  func_0x000107c61170(uVar26);
  uVar26 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef26830);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar28);
  func_0x000107c61174();
  uVar14 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef29650);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar29);
  func_0x000107c61174();
  uVar14 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar30);
  func_0x000107c61174(uVar26);
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc0770);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar14);
  lVar32 = *(long *)(param_2 + 0x28);
  func_0x000107c61174(uVar26);
  func_0x000107c61174();
  uVar14 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f1172e0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(lVar32);
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar26);
  func_0x000107c61174(uVar14);
  uVar31 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc0790);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar31);
  uVar14 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar26);
  func_0x000107c61174(uVar14);
  uVar31 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar31);
  func_0x000107c3e740(uVar26);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar32 != 0) {
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar27);
    func_0x000107c61170(uVar28);
    func_0x000107c61170(uVar29);
    func_0x000107c61170(uVar30);
    func_0x000107c61574(uStack_140);
    func_0x000107c61574(uStack_148);
    *(long *)(param_2 + 0xf8) = lVar32;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10092eb40);
  (*pcVar1)();
}



/* Entry: 10092eb40; end: 10092eb9b;  */

void FUN_10092eb40(void)

{
  long unaff_x20;
  
  FUN_10092d958(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8));
  return;
}



/* Entry: 10092eb9c; end: 10092eba3;  */

void FUN_10092eb9c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126adb68;
  func_0x000107c610f8();
  func_0x000107c465a0();
  func_0x000107c61170(unaff_x20);
  *param_1 = puVar1;
  return;
}



/* Entry: 10092eba4; end: 10092ebf7;  */

void FUN_10092eba4(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126adb68;
  func_0x000107c610f8();
  func_0x000107c465a0();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 10092ebf8; end: 10092ec6b; -[SCDirectoriesServices initWithDirectories:] */

undefined1 * FUN_10092ebf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112706668;
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



/* Entry: 10092ec6c; end: 10092ec73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10092ec6c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100099ec8();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_113083cb8) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10092ec74; end: 10092ecdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10092ec74(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100099ec8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_113083cb8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10092ece0; end: 10092ece7;  */

void FUN_10092ece0(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112daabd0,&UNK_10d9534a0);
  func_0x000107c613fc();
  puVar1 = &UNK_1014ec4c8;
  FUN_1000841f8();
  FUN_100084214(&UNK_10d953470,0x2b,2);
  *param_1 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10092ece8; end: 10092ed63;  */

void FUN_10092ece8(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112daabd0,&UNK_10d9534a0);
  func_0x000107c613fc();
  puVar1 = &UNK_1014ec4c8;
  FUN_1000841f8(&UNK_1014ec4c8,param_2);
  FUN_100084214(&UNK_10d953470,0x2b,2);
  *param_1 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10092ed64; end: 10092eefb; -[SCTIVServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10092ed64(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = 0;
  func_0x000107c60f2c(0,0);
  func_0x000107c61180();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10092f160;
  puStack_58 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_50,auStack_48);
  FUN_10007380c(uVar1,&puStack_70);
  func_0x000107c61170(uVar1);
  func_0x000107c61144(auStack_78,param_1);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_80,auStack_78);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112750ad8);
  *(undefined **)(param_1 + _DAT_112750ad8) = puVar2;
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126ce350;
  func_0x000107c610f4(PTR_PTR_1126ce350);
  func_0x000107c48358();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112750adc));
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 10092eefc; end: 10092ef6f; -[SCTIVServices initWithRequestHandler:] */

undefined1 * FUN_10092eefc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f3478;
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



/* Entry: 10092ef70; end: 10092f06b;  */

void FUN_10092ef70(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10092f06c; end: 10092f093;  */

undefined ** FUN_10092f06c(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10092f094; end: 10092f0d3;  */

void FUN_10092f094(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010092f078();
  FUN_100082720("SCUserFeatureLaunchServicesEntryPointWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10092f0d4; end: 10092f0db;  */

void FUN_10092f0d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e528b8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10092f0dc; end: 10092f15f;  */

void FUN_10092f0dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e528b8,param_2,&UNK_102e528bc,param_2,&UNK_102e528e4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10092f160; end: 10092f1ab;  */

/* WARNING: Possible PIC construction at 0x00010092f198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010092f19c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10092f160(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  lVar1 = param_1;
  func_0x000107c3b390();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112750ad4);
  *(long *)(param_1 + _DAT_112750ad4) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10092f1ac; end: 10092f1b7;  */

undefined ** FUN_10092f1ac(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10092f1b8; end: 10092f243;  */

void FUN_10092f1b8(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10092f244,param_1);
  return;
}



/* Entry: 10092f244; end: 10092f2c7;  */

void FUN_10092f244(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_10300aa8c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10092f2c8; end: 10092f2ef;  */

void FUN_10092f2c8(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10092f2f0; end: 10093000f;  */

void FUN_10092f2f0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
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
  FUN_10036b6d0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x70) = uStack_78;
  *(undefined8 *)(param_2 + 0x78) = uStack_80;
  *(undefined8 *)(param_2 + 0x80) = uStack_88;
  *(undefined8 *)(param_2 + 0x88) = uStack_90;
  *(undefined8 *)(param_2 + 0x90) = uStack_98;
  *(undefined8 *)(param_2 + 0x98) = uStack_a0;
  FUN_1000285a8(0x112f32810,&UNK_10db79158);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar4 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c6157c(uStack_a8);
  FUN_10017da58();
  puVar7 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x18) = puVar7;
  FUN_1000285a8(0x112f32818,&UNK_10db79160);
  func_0x000107c610f8();
  uVar9 = uStack_b0;
  func_0x000107c6157c(uStack_b0);
  FUN_10017da58();
  puVar7 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x20) = puVar7;
  FUN_1000285a8(0x112f32820,&UNK_10db79168);
  func_0x000107c610f8();
  uVar9 = uStack_b8;
  func_0x000107c6157c(uStack_b8);
  FUN_10017da58();
  puVar7 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x28) = puVar7;
  FUN_1000285a8(0x112f32828,&UNK_10db79170);
  func_0x000107c610f8();
  uVar9 = uStack_c0;
  func_0x000107c6157c(uStack_c0);
  FUN_10017da58();
  puVar7 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x30) = puVar7;
  FUN_1000285a8(0x112f32830,&UNK_10db79178);
  func_0x000107c610f8();
  uVar9 = uStack_c8;
  func_0x000107c6157c(uStack_c8);
  FUN_10017da58();
  puVar7 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x38) = puVar7;
  FUN_1000285a8(0x112f32838,&UNK_10db79180);
  func_0x000107c610f8();
  uVar9 = uStack_d0;
  func_0x000107c6157c(uStack_d0);
  FUN_10017da58();
  puVar7 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x40) = puVar7;
  FUN_1000285a8(0x112f32840,&UNK_10db79188);
  func_0x000107c610f8();
  uVar9 = uStack_d8;
  func_0x000107c6157c(uStack_d8);
  FUN_10017da58();
  puVar7 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x48) = puVar7;
  FUN_1000285a8(0x112f32848,&UNK_10db79190);
  func_0x000107c610f8();
  uVar9 = uStack_e0;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar7 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x50) = puVar7;
  FUN_1000285a8(0x112f32850,&UNK_10db79198);
  func_0x000107c610f8();
  uVar9 = uStack_e8;
  func_0x000107c6157c(uStack_e8);
  FUN_10017da58();
  puVar7 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x58) = puVar7;
  FUN_1000285a8(0x112f32858,&UNK_10db791a0);
  func_0x000107c610f8();
  uVar9 = uStack_f0;
  func_0x000107c6157c(uStack_f0);
  FUN_10017da58();
  puVar7 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x60) = puVar7;
  FUN_1000285a8(0x112f32860,&UNK_10db791a8);
  func_0x000107c610f8();
  uVar9 = uStack_f8;
  func_0x000107c6157c(uStack_f8);
  FUN_10017da58();
  puVar7 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x68) = puVar7;
  puVar7 = PTR_PTR_1126ac9c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar7;
  func_0x000107c61174();
  uVar8 = auStack_70[0];
  func_0x000107c61174();
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61174();
  func_0x000107c61174(puVar7);
  uVar9 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar7);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  uVar10 = 0x5370757472617473;
  func_0x000107c5fadc(0x5370757472617473,0xef73656369767265);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd000000000000038;
  func_0x000107c5fadc(0xd000000000000038,0x800000010f119a90);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd00000000000003d;
  func_0x000107c5fadc(0xd00000000000003d,0x800000010f119ad0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  uVar10 = 0xd00000000000003d;
  func_0x000107c5fadc(0xd00000000000003d,0x800000010f119b10);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000045;
  func_0x000107c5fadc(0xd000000000000045,0x800000010f119b50);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  uVar10 = 0xd000000000000037;
  func_0x000107c5fadc(0xd000000000000037,0x800000010f119ba0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  uVar10 = 0xd00000000000003b;
  func_0x000107c5fadc(0xd00000000000003b,0x800000010f119be0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174();
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000044;
  func_0x000107c5fadc(0xd000000000000044,0x800000010f119c20);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  uVar9 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  uVar10 = 0xd000000000000038;
  func_0x000107c5fadc(0xd000000000000038,0x800000010f119c70);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  uVar9 = *(undefined8 *)(param_2 + 0x48);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd00000000000003f;
  func_0x000107c5fadc(0xd00000000000003f,0x800000010f119cb0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  uVar10 = *(undefined8 *)(param_2 + 0x50);
  func_0x000107c61174();
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000049;
  func_0x000107c5fadc(0xd000000000000049,0x800000010f119cf0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  uVar9 = *(undefined8 *)(param_2 + 0x58);
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  uVar10 = 0xd000000000000038;
  func_0x000107c5fadc(0xd000000000000038,0x800000010f119d40);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  uVar9 = *(undefined8 *)(param_2 + 0x60);
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  uVar10 = 0xd00000000000003e;
  func_0x000107c5fadc(0xd00000000000003e,0x800000010f119d80);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  uVar9 = *(undefined8 *)(param_2 + 0x68);
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  uVar10 = 0xd00000000000003d;
  func_0x000107c5fadc(0xd00000000000003d,0x800000010f119dc0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(uVar11);
  func_0x000107c61574(uStack_f8);
  func_0x000107c61574(uStack_f0);
  func_0x000107c61574(uStack_e8);
  func_0x000107c61574(uStack_e0);
  func_0x000107c61574(uStack_d8);
  func_0x000107c61574(uStack_d0);
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(uStack_c0);
  func_0x000107c61574(uStack_b8);
  func_0x000107c61574(uStack_b0);
  func_0x000107c61574(uStack_a8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar8);
  *param_1 = param_2;
  return;
}



/* Entry: 100930010; end: 1009304eb; -[SCTIVServicesEntryPoint _createTIVClient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100930010(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  
  lVar16 = param_1 + _DAT_112750ae0;
  func_0x000107c61148();
  lVar1 = lVar16;
  func_0x000107c41e98();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c421f4();
  func_0x000107c61180();
  func_0x000107c61174(0);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar16);
  puVar18 = (undefined *)0x0;
  if (lVar3 != 0) {
    lVar16 = lVar3;
    func_0x000107c5c168();
    func_0x000107c61180();
    lVar1 = lVar16;
    func_0x000107c5c16c();
    func_0x000107c61180();
    func_0x000107c61170(lVar16);
    lVar16 = lVar3;
    func_0x000107c5c168();
    func_0x000107c61180();
    lVar2 = lVar16;
    func_0x000107c5c16c();
    func_0x000107c61180();
    func_0x000107c61170(lVar16);
    lVar16 = (long)_DAT_112750ae4;
    uVar4 = param_1 + lVar16;
    func_0x000107c61148();
    puVar18 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c61158(PTR__OBJC_CLASS___NSNull_1126aef28);
    uVar5 = uVar4;
    func_0x000107c6115c(uVar4,puVar18);
    if ((uVar5 & 1) == 0) {
      lVar16 = param_1 + lVar16;
      func_0x000107c61148();
      lVar17 = lVar16;
      func_0x000107c436d4();
      func_0x000107c61180();
      func_0x000107c61170(lVar16);
    }
    else {
      lVar17 = 0;
    }
    func_0x000107c61170(uVar4);
    func_0x000107c3d648(lVar17);
    lVar16 = param_1 + _DAT_112750ae8;
    func_0x000107c61148();
    lVar6 = lVar16;
    func_0x000107c5da60();
    func_0x000107c61180();
    lVar7 = lVar6;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar16);
    lVar16 = param_1 + _DAT_112750aec;
    func_0x000107c61148(lVar16);
    lVar6 = lVar16;
    func_0x000107c4cdb8();
    func_0x000107c61180();
    lVar8 = lVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c4a594();
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar16);
    puVar9 = PTR_PTR_1126ce358;
    func_0x000107c610f4();
    func_0x000107c49204();
    puVar10 = PTR_PTR_1126ce360;
    func_0x000107c610f4(PTR_PTR_1126ce360);
    lVar16 = param_1 + _DAT_112750af0;
    func_0x000107c61148(lVar16);
    lVar6 = lVar16;
    func_0x000107c5dac4();
    func_0x000107c61180();
    func_0x000107c459d8(puVar10);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar16);
    lVar8 = param_1;
    func_0x000107c3b31c();
    func_0x000107c61180();
    puVar18 = PTR_PTR_1126ce368;
    lVar16 = param_1 + _DAT_112750af4;
    func_0x000107c61148(lVar16);
    lVar11 = lVar16;
    func_0x000107c42364();
    func_0x000107c61180();
    lVar12 = lVar11;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar6 = param_1 + _DAT_112750af8;
    func_0x000107c61148(lVar6);
    lVar19 = lVar6;
    func_0x000107c3e420();
    func_0x000107c61180();
    lVar13 = lVar19;
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar14 = PTR_PTR_1126b0380;
    func_0x000107c5d8e4();
    func_0x000107c61180();
    func_0x000107c40908(puVar18);
    func_0x000107c61180();
    func_0x000107c61170(puVar14);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lVar19);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar16);
    puVar14 = PTR_PTR_1126ce370;
    func_0x000107c610f4(PTR_PTR_1126ce370);
    func_0x000107c48be0();
    if (param_1 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = param_1 + _DAT_112750b50;
      func_0x000107c61148();
    }
    lVar6 = lVar16;
    func_0x000107c3dec0();
    func_0x000107c61180();
    lVar11 = lVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar12 = lVar11;
    func_0x000107c40938();
    func_0x000107c61180();
    lVar19 = (long)_DAT_112750afc;
    uVar15 = *(undefined8 *)(param_1 + lVar19);
    *(long *)(param_1 + lVar19) = lVar12;
    func_0x000107c61170(uVar15);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar16);
    func_0x000107c3e7d8(*(undefined8 *)(param_1 + lVar19));
    func_0x000107c61170(puVar14);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(lVar3);
  func_0x000107c61170(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 1009304ec; end: 100930553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009304ec(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10036b514();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_11307b380) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100930554; end: 10093055b; -[SCDirectoriesServices directories] */

undefined8 FUN_100930554(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10093055c; end: 100930917;  */

/* WARNING: Possible PIC construction at 0x000100930798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009307a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009307b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009307c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009307d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009307e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009307f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100930808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100930818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100930828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100930838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100930848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100930858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100930868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100930878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100930888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100930898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009308a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009308b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009308c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009308d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009308e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009308dc) */
/* WARNING: Removing unreachable block (ram,0x0001009308cc) */
/* WARNING: Removing unreachable block (ram,0x0001009308bc) */
/* WARNING: Removing unreachable block (ram,0x0001009308ac) */
/* WARNING: Removing unreachable block (ram,0x00010093089c) */
/* WARNING: Removing unreachable block (ram,0x00010093088c) */
/* WARNING: Removing unreachable block (ram,0x00010093087c) */
/* WARNING: Removing unreachable block (ram,0x00010093086c) */
/* WARNING: Removing unreachable block (ram,0x00010093085c) */
/* WARNING: Removing unreachable block (ram,0x00010093084c) */
/* WARNING: Removing unreachable block (ram,0x00010093083c) */
/* WARNING: Removing unreachable block (ram,0x00010093082c) */
/* WARNING: Removing unreachable block (ram,0x00010093081c) */
/* WARNING: Removing unreachable block (ram,0x00010093080c) */
/* WARNING: Removing unreachable block (ram,0x0001009307fc) */
/* WARNING: Removing unreachable block (ram,0x0001009307ec) */
/* WARNING: Removing unreachable block (ram,0x0001009307dc) */
/* WARNING: Removing unreachable block (ram,0x0001009307cc) */
/* WARNING: Removing unreachable block (ram,0x0001009307bc) */
/* WARNING: Removing unreachable block (ram,0x0001009307ac) */
/* WARNING: Removing unreachable block (ram,0x00010093079c) */
/* WARNING: Removing unreachable block (ram,0x0001009308ec) */

void FUN_10093055c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_1106879b0;
  func_0x000107c613fc(&UNK_1106879b0,0x178,7);
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
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  uVar2 = 0x112f8b690;
  FUN_1000285a8(0x112f8b690,&UNK_10dc00dd0);
  func_0x000107c613fc();
  puVar3 = &UNK_103719be0;
  FUN_1000841f8(&UNK_103719be0,puVar1,uVar2);
  FUN_100084214(&UNK_10dc00d80,0x49,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100930918; end: 10093091b;  */

void FUN_100930918(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10093091c; end: 10093099f;  */

void FUN_10093091c(void)

{
  long unaff_x20;
  
  FUN_10093055c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170));
  return;
}



/* Entry: 1009309a0; end: 1009309a3;  */

void FUN_1009309a0(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009309a4; end: 100930b27;  */

void FUN_1009309a4(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100930b28; end: 100930b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100930b28(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100361718();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_11307b320) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100930b90; end: 100930b97;  */

void FUN_100930b90(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f4aa58,&UNK_10db99830);
  func_0x000107c613fc();
  puVar1 = &UNK_1031d73e8;
  FUN_1000841f8();
  FUN_100084214(&UNK_10db997e0,0x4e,2);
  *param_1 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 100930b98; end: 100930c13;  */

void FUN_100930b98(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f4aa58,&UNK_10db99830);
  func_0x000107c613fc();
  puVar1 = &UNK_1031d73e8;
  FUN_1000841f8(&UNK_1031d73e8,param_2);
  FUN_100084214(&UNK_10db997e0,0x4e,2);
  *param_1 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100930c14; end: 100930c6b;  */

void FUN_100930c14(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100930c6c; end: 1009317e7; -[SCUserNavStartupCompletedEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100930c6c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar13 = *(undefined8 *)(param_1 + _DAT_112752c94);
  *(undefined **)(param_1 + _DAT_112752c94) = puVar2;
  func_0x000107c61170(uVar13);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  uVar13 = *(undefined8 *)(param_1 + _DAT_112752c98);
  *(undefined **)(param_1 + _DAT_112752c98) = puVar2;
  func_0x000107c61170(uVar13);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126bd0b0;
  puVar2 = PTR_PTR_1126ae960;
  uVar13 = *(undefined8 *)(param_1 + _DAT_112752cc0);
  func_0x000107c61174(uVar13);
  func_0x000107c433b0(puVar4);
  func_0x000107c61180();
  func_0x000107c515c0(puVar2);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae970;
  func_0x000107c4c0f8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126bd0b0;
  puVar2 = PTR_PTR_1126ae960;
  uVar13 = *(undefined8 *)(param_1 + _DAT_112752ccc);
  func_0x000107c61174(uVar13);
  func_0x000107c5b418(puVar4);
  func_0x000107c61180();
  func_0x000107c515c0(puVar2);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae970;
  func_0x000107c4c0f8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ceb98;
  puVar4 = PTR_PTR_1126bdfe0;
  puVar2 = PTR_PTR_1126ae960;
  uVar13 = *(undefined8 *)(param_1 + _DAT_112752cb8);
  func_0x000107c61174(uVar13);
  func_0x000107c42c18(puVar3);
  func_0x000107c61180();
  func_0x000107c41294(puVar4);
  func_0x000107c61180();
  func_0x000107c4c968(puVar2);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae970;
  func_0x000107c4ca90(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ceba8;
  puVar2 = PTR_PTR_1126ae960;
  uVar13 = *(undefined8 *)(param_1 + _DAT_112752cbc);
  func_0x000107c61174(uVar13);
  func_0x000107c4d7e0(puVar4);
  func_0x000107c61180();
  func_0x000107c3e958(puVar2);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae970;
  func_0x000107c4ca90(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae968;
  puVar2 = PTR_PTR_1126ae960;
  uVar13 = *(undefined8 *)(param_1 + _DAT_112752cc4);
  func_0x000107c61174(uVar13);
  func_0x000107c45268(puVar4);
  func_0x000107c61180();
  func_0x000107c3d0cc(puVar2);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae970;
  func_0x000107c4ca90(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126bdb28;
  puVar2 = PTR_PTR_1126ae960;
  uVar13 = *(undefined8 *)(param_1 + _DAT_112752cc8);
  func_0x000107c61174(uVar13);
  func_0x000107c4b890(puVar4);
  func_0x000107c61180();
  func_0x000107c4f6b4(puVar2);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae970;
  func_0x000107c4c0f8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126c14e8;
  puVar2 = PTR_PTR_1126ae960;
  uVar13 = *(undefined8 *)(param_1 + _DAT_112752cd0);
  func_0x000107c61174(uVar13);
  func_0x000107c413d8();
  func_0x000107c61180();
  func_0x000107c5b6e0(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae970;
  func_0x000107c4c0f8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  puVar2 = PTR_PTR_1126ae960;
  puVar4 = PTR_PTR_1126ae968;
  func_0x000107c45280();
  iVar1 = (int)puVar4;
  func_0x000107c61180();
  func_0x000107c3d0cc();
  func_0x000107c61180();
  func_0x000107c61170();
  FUN_100288f58();
  if (iVar1 == 0) {
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar3 = puVar4;
    func_0x000107c3dfc0();
    func_0x000107c61170(puVar4);
joined_r0x0001009312f4:
    if (puVar3 == (undefined *)0x2) {
      func_0x000107c61144(auStack_80,param_1);
      lVar7 = param_1 + _DAT_112752c9c;
      func_0x000107c61148(lVar7);
      lVar8 = lVar7;
      func_0x000107c3dfac();
      func_0x000107c61180();
      lVar9 = lVar8;
      func_0x000107c5e370();
      func_0x000107c61180();
      lVar10 = lVar9;
      func_0x000107c5c6c0();
      func_0x000107c61180();
      func_0x000107c6111c(auStack_88,auStack_80);
      func_0x000107c61174(puVar2);
      lVar11 = lVar10;
      func_0x000107c5c320(lVar10);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(lVar11);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(puVar2);
      func_0x000107c61120(auStack_88);
      func_0x000107c61120(auStack_80);
      goto LAB_1009314f0;
    }
  }
  else {
    lVar7 = param_1 + _DAT_112752ca4;
    func_0x000107c61148();
    lVar8 = lVar7;
    func_0x000107c5bcac();
    func_0x000107c61180();
    lVar9 = lVar8;
    func_0x000107c4f2bc();
    if ((int)lVar9 == 0) {
      puVar4 = (undefined *)(param_1 + _DAT_112752c9c);
      func_0x000107c61148();
      puVar5 = puVar4;
      func_0x000107c3dfc4();
      func_0x000107c61180();
      puVar3 = puVar5;
      func_0x000107c3dfc0();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar7);
      goto joined_r0x0001009312f4;
    }
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
  }
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae970;
  uVar13 = *(undefined8 *)(param_1 + _DAT_112752cd4);
  func_0x000107c61174(uVar13);
  func_0x000107c4ca90(puVar4);
  func_0x000107c61180();
  func_0x000107c3b644(param_1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
LAB_1009314f0:
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126cebd0;
  puVar3 = PTR_PTR_1126b6bc0;
  puVar4 = PTR_PTR_1126ae960;
  uVar13 = *(undefined8 *)(param_1 + _DAT_112752cd8);
  func_0x000107c61174(uVar13);
  func_0x000107c42c2c(puVar5);
  func_0x000107c61180();
  func_0x000107c4a828(puVar3);
  func_0x000107c61180();
  func_0x000107c5e8c4(puVar4);
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126ae970;
  func_0x000107c44e60(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126bd0b0;
  puVar4 = PTR_PTR_1126ae960;
  uVar13 = *(undefined8 *)(param_1 + _DAT_112752cdc);
  func_0x000107c61174(uVar13);
  func_0x000107c5da88(puVar3);
  func_0x000107c61180();
  func_0x000107c515c0(puVar4);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae970;
  func_0x000107c4c0f8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126cebe0;
  puVar4 = PTR_PTR_1126ae960;
  uVar13 = *(undefined8 *)(param_1 + _DAT_112752ce0);
  func_0x000107c61174(uVar13);
  func_0x000107c45408(puVar3);
  func_0x000107c61180();
  func_0x000107c40538(puVar4);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae970;
  func_0x000107c4c0f8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c3b644(param_1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1009317e8; end: 1009317ef; +[SCAttributedSafetyTask fideliusTweaks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009317e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bb60) = 9;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1009317f0; end: 10093195f; -[SCUserNavStartupCompletedEntryPoint _exposeStartupCompleteScope:exposer:attributedTask:priority:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009317f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  uVar1 = param_4;
  func_0x000107c49cd8();
  if ((int)uVar1 != 0) {
    func_0x000107c61144(auStack_58,param_4);
    puVar2 = PTR_PTR_1126aeec0;
    func_0x000107c6111c(auStack_60,auStack_58);
    func_0x000107c61174(param_3);
    func_0x000107c3e2d8();
    func_0x000107c61180();
    if (puVar2 != (undefined *)0x0) {
      func_0x000107c3d798(*(undefined8 *)(param_1 + _DAT_112752c98));
    }
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_3);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_58);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100931960; end: 10093196f; -[SCOptionalScopeExposerProxy isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100931960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112787ce4),PTR_s_isEnabled_1125fa010);
  return;
}



/* Entry: 100931970; end: 1009319a3;  */

uint FUN_100931970(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1009319a4();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1009319a4; end: 100931a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1009319a4(void)

{
  undefined1 auStack_50 [16];
  undefined1 uStack_31;
  
  FUN_100087bd4(&uStack_31,FUN_100931a04,auStack_50,PTR___sSbN_11034dd40);
  return uStack_31;
}



/* Entry: 100931a04; end: 100931a4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100931a04(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113092400);
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    func_0x000107c49cd8();
    uVar1 = (undefined1)lVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 100931a4c; end: 100931a53; +[SCAttributedSafetyTask snapTokenTweaks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100931a4c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bb60) = 0xc;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100931a54; end: 100931a5b; +[SCAttributedMDPDataSaverPromptSubTask exposeScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100931a54(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b660) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100931a5c; end: 100931aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100931a5c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b660) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100931aac; end: 100931b17; +[SCAttributedMDPTask dataSaverModePrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100931aac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b650) = 2;
  *(undefined8 *)(lVar2 + _DAT_11309b658) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100931b18; end: 100931db3; +[SCAttributedTask mediaDeliveryPlatform:] */

void FUN_100931b18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000100931b50();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100931db4; end: 100931dc3; -[SCAttributedMDPTask .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100931db4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11309b658));
  return;
}



/* Entry: 100931dc4; end: 100931dcb; +[SCAttributedBitmojiTask notificationExtension] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100931dc4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ade8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100931dcc; end: 100931e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100931dcc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ade8) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100931e1c; end: 1009320b7; +[SCAttributedTask bitmoji:] */

void FUN_100931e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000100931e54();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1009320b8; end: 1009320bf; +[SCAttributedActivationTask inAppRatingPrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009320b8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309aac0) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309aac8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1009320c0; end: 100932127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009320c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309aac0) = param_3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309aac8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100932128; end: 10093247f; +[SCAttributedTask activation:] */

void FUN_100932128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000100932160();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100932480; end: 1009324af;  */

void FUN_100932480(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x80,0x100932480);
  (*pcVar1)();
}



/* Entry: 1009324b0; end: 1009324b7; +[SCAttributedPushTask locationARLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009324b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309baf0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1009324b8; end: 100932507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009324b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309baf0) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100932508; end: 1009327a3; +[SCAttributedTask push:] */

void FUN_100932508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000100932540();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1009327a4; end: 1009327ab; +[SCAttributedSpectaclesTask debugStatusController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009327a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bd40) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1009327ac; end: 1009327fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009327ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bd40) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1009327fc; end: 100932a97; +[SCAttributedTask spectacles:] */

void FUN_1009327fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000100932834();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100932a98; end: 100932aff; +[SCAttributedActivationTask inAppTakeOver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100932a98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309aac0) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309aac8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100932b00; end: 100932b07; +[SCAttributedJobSchedulerSubtask exposeUserJobProviderScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100932b00(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309be78) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100932b08; end: 100932b0f; +[SCAttributedSafetyTask userSessionValidation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100932b08(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bb60) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100932b10; end: 100932b17; +[SCAttributedContextTask initContextActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100932b10(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b1b8) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100932b18; end: 100932bc3;  */

void FUN_100932b18(void)

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



/* Entry: 100932bc4; end: 100932beb;  */

undefined ** FUN_100932bc4(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100932bec; end: 100932c2b;  */

void FUN_100932bec(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100932bd0();
  FUN_100082720("SCUserNavigationScopedMemoriesActivityServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x5d,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100932c2c; end: 100932c33;  */

void FUN_100932c2c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e76e9c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100932c34; end: 100932cb7;  */

void FUN_100932c34(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e76e9c,param_2,&UNK_102e76ea0,param_2,&UNK_102e76ec8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100932cb8; end: 100932cdf;  */

undefined ** FUN_100932cb8(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100932ce0; end: 100932d1f;  */

void FUN_100932ce0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100932cc4();
  FUN_100082720("SCUserNavigationScopedMemoriesOperaSessionServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x61,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100932d20; end: 100932d27;  */

void FUN_100932d20(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e7721c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100932d28; end: 100932dab;  */

void FUN_100932d28(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e7721c,param_2,&UNK_102e77220,param_2,&UNK_102e77248,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100932dac; end: 100932dd3;  */

undefined ** FUN_100932dac(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100932dd4; end: 100932e13;  */

void FUN_100932dd4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100932db8();
  FUN_100082720("SCUserNavigationScopedMemoriesSendServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x59,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100932e14; end: 100932e1b;  */

void FUN_100932e14(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e7759c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100932e1c; end: 100932e9f;  */

void FUN_100932e1c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e7759c,param_2,&UNK_102e775a0,param_2,&UNK_102e775c8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100932ea0; end: 100932eb3;  */

undefined ** FUN_100932ea0(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100932eb4; end: 100932f5b;  */

void FUN_100932eb4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b1230;
  func_0x000107c613fc(&UNK_1104b1230,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_100932f5c;
  FUN_1000823a8(FUN_100932f5c,puVar1);
  FUN_100082720("SCUserNavigationScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 100932f5c; end: 100932f63;  */

void FUN_100932f5c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uStack_38;
  func_0x000107c61174();
  FUN_100083b20(&uStack_38);
  FUN_10058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104af020;
  func_0x000107c613fc(&UNK_1104af020,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_101f99574;
  FUN_10058fa64(&UNK_101f99574,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100932f64; end: 100933027;  */

void FUN_100932f64(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  FUN_100083b20(&uStack_38);
  FUN_10058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104af020;
  func_0x000107c613fc(&UNK_1104af020,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_101f99574;
  FUN_10058fa64(&UNK_101f99574,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100933028; end: 10093304b;  */

void FUN_100933028(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10093304c; end: 100933083;  */

void FUN_10093304c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 100933084; end: 10093308b;  */

void FUN_100933084(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10093308c; end: 1009330b7;  */

void FUN_10093308c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009330b8; end: 1009330df;  */

undefined ** FUN_1009330b8(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1009330e0; end: 10093311f;  */

void FUN_1009330e0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009330c4();
  FUN_100082720("SCUserSnapSendActivityServiceProviderWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100933120; end: 100933127;  */

void FUN_100933120(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102cd6dbc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100933128; end: 1009331ab;  */

void FUN_100933128(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102cd6dbc,param_2,&UNK_102cd6dc0,param_2,&UNK_102cd6de8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009331ac; end: 1009331d3;  */

undefined ** FUN_1009331ac(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1009331d4; end: 100933213;  */

void FUN_1009331d4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009331b8();
  FUN_100082720("SCVoiceMLLensAppEventsServiceProviderWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100933214; end: 10093321b;  */

void FUN_100933214(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102df5978);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10093321c; end: 10093329f;  */

void FUN_10093321c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102df5978,param_2,&UNK_102df597c,param_2,&UNK_102df59a4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}


