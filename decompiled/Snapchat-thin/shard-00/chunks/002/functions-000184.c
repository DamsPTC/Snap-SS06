/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1004378e8; end: 100437a57; -[SCFideliusDeviceGraphManager loadManagerForUser:hashedBeta:iwek:identity:callback:] */

void FUN_1004378e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puVar1 = &UNK_10f30e2d8;
  FUN_1000ba800(&UNK_10f30e2d8);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_100438ed0;
  puStack_90 = &UNK_110852488;
  lStack_88 = param_1;
  func_0x000107c61174(param_7);
  uStack_68 = param_7;
  func_0x000107c61174(param_6);
  uStack_80 = param_6;
  func_0x000107c61174(param_4);
  uStack_78 = param_4;
  func_0x000107c61174(param_5);
  uStack_70 = param_5;
  func_0x000107c4e524(uVar2,param_2,&puStack_a8);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(uStack_68);
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100437a58; end: 100437aa3;  */

void FUN_100437a58(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x30));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  return;
}



/* Entry: 100437aa4; end: 100437ac3; -[SCMessagingExperimentServiceImpl isStreakSettingsEnabled] */

void FUN_100437aa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de8798,0,0);
  return;
}



/* Entry: 100437ac4; end: 100437b17;  */

void FUN_100437ac4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x108);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100437b18; end: 100438c93;  */

void FUN_100437b18(long *param_1,long param_2)

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
  long lVar31;
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
  FUN_1002c1f7c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x38) = uStack_78;
  *(undefined8 *)(param_2 + 0x40) = uStack_80;
  *(undefined8 *)(param_2 + 0x48) = uStack_88;
  *(undefined8 *)(param_2 + 0x50) = uStack_90;
  *(undefined8 *)(param_2 + 0x58) = uStack_98;
  *(undefined8 *)(param_2 + 0x60) = uStack_a0;
  *(undefined8 *)(param_2 + 0x68) = uStack_a8;
  *(undefined8 *)(param_2 + 0x70) = uStack_b0;
  *(undefined8 *)(param_2 + 0x78) = uStack_b8;
  *(undefined8 *)(param_2 + 0x80) = uStack_c0;
  *(undefined8 *)(param_2 + 0x88) = uStack_c8;
  *(undefined8 *)(param_2 + 0x90) = uStack_d0;
  *(undefined8 *)(param_2 + 0x98) = uStack_d8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_e0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_e8;
  *(undefined8 *)(param_2 + 0xb0) = uStack_f0;
  *(undefined8 *)(param_2 + 0xb8) = uStack_f8;
  *(undefined8 *)(param_2 + 0xc0) = uStack_100;
  *(undefined8 *)(param_2 + 200) = uStack_108;
  *(undefined8 *)(param_2 + 0xd0) = uStack_110;
  *(undefined8 *)(param_2 + 0xd8) = uStack_118;
  *(undefined8 *)(param_2 + 0xe0) = uStack_120;
  *(undefined8 *)(param_2 + 0xe8) = uStack_128;
  *(undefined8 *)(param_2 + 0xf0) = uStack_130;
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
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  uVar10 = uStack_b0;
  func_0x000107c61174();
  uVar11 = uStack_b8;
  func_0x000107c61174();
  uVar12 = uStack_c0;
  func_0x000107c61174();
  uVar13 = uStack_c8;
  func_0x000107c61174();
  uVar14 = uStack_d0;
  func_0x000107c61174();
  uVar15 = uStack_d8;
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
  uVar26 = uStack_118;
  func_0x000107c61174();
  uVar27 = uStack_120;
  func_0x000107c61174();
  uVar28 = uStack_128;
  func_0x000107c61174();
  uVar29 = uStack_130;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x28) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x30) = puVar2;
  puVar2 = PTR_PTR_1126a9948;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar16 = auStack_70[0];
  func_0x000107c61174();
  uVar17 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a810);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01a830);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a850);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0x655373706f6f6c62;
  func_0x000107c5fadc(0x655373706f6f6c62,0xee00736563697672);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f017eb0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10b10);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar18);
  uVar17 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0xd00000000000003a;
  func_0x000107c5fadc(0xd00000000000003a,0x800000010f01a870);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f01a8b0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f01a8d0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar18 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar25);
  func_0x000107c61174(uVar17);
  uVar18 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb890);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar26);
  func_0x000107c61174();
  uVar18 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a8f0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar27);
  func_0x000107c61174(uVar17);
  uVar18 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar28);
  func_0x000107c61174(uVar17);
  uVar18 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar29);
  func_0x000107c61174(uVar17);
  uVar18 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar18);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar18 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar30 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f01a910);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar30);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  uVar30 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar18);
  func_0x000107c61174(uVar30);
  uVar17 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f01a930);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar17);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  uVar30 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f01a960);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar17);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  uVar30 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174(uVar18);
  func_0x000107c61174(uVar30);
  uVar17 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f01a990);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar17);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  lVar31 = *(long *)(param_2 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar31 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100438c88);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0xf8) = lVar31;
  lVar31 = *(long *)(param_2 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar31 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100438c8c);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x100) = lVar31;
  lVar31 = *(long *)(param_2 + 0x28);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar31 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100438c90);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x108) = lVar31;
  lVar31 = *(long *)(param_2 + 0x30);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar31 != 0) {
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
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar26);
    func_0x000107c61170(uVar27);
    func_0x000107c61170(uVar28);
    func_0x000107c61170(uVar29);
    *(long *)(param_2 + 0x110) = lVar31;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100438c94);
  (*pcVar1)();
}



/* Entry: 100438c94; end: 100438ce7;  */

void FUN_100438c94(void)

{
  long unaff_x20;
  
  FUN_100437b18(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xd0));
  return;
}



/* Entry: 100438ce8; end: 100438cef;  */

void FUN_100438ce8(undefined8 *param_1)

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



/* Entry: 100438cf0; end: 100438d43;  */

void FUN_100438cf0(undefined8 *param_1)

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



/* Entry: 100438d44; end: 100438d4b;  */

void FUN_100438d44(undefined8 *param_1)

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



/* Entry: 100438d4c; end: 100438d9f;  */

void FUN_100438d4c(undefined8 *param_1)

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



/* Entry: 100438da0; end: 100438da7;  */

void FUN_100438da0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10029b610();
  func_0x000107c613fc();
  func_0x000100438e08(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100438da8; end: 100438ecf;  */

void FUN_100438da8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10029b610();
  func_0x000107c613fc();
  func_0x000100438e08(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 100438ed0; end: 100439213;  */

void FUN_100438ed0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar5 = *(long *)(param_1 + 0x28);
  func_0x000107c61174(lVar5);
  puVar1 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (puVar1 != (undefined *)0x0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),puVar1,0,0);
    puVar7 = (undefined *)0x0;
    goto LAB_1004391e0;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c4197c();
  func_0x000107c61180();
  lVar6 = lVar2;
  func_0x000107c4448c();
  func_0x000107c61180();
  lVar3 = lVar6;
  func_0x000107c4d9e0();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar2);
  puVar1 = PTR_PTR_1126c0460;
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c42a5c(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    lVar2 = *(long *)(param_1 + 0x40);
    pcVar4 = *(code **)(lVar2 + 0x10);
    lVar6 = 0;
LAB_1004391d0:
    (*pcVar4)(lVar2,0,puVar7,lVar6);
    puVar1 = (undefined *)0x0;
  }
  else {
    lVar6 = lVar5;
    if (lVar5 == 0) {
      lVar5 = lVar3;
      func_0x000107c41314(lVar3);
      func_0x000107c61180();
      func_0x000107c4131c();
      func_0x000107c61170(lVar5);
      if (((ulong)puVar1 & 1) == 0) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
        func_0x000107c44384();
        func_0x000107c61180();
        if (lVar6 == 0) {
          lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
          func_0x000107c5c734();
          func_0x000107c61180();
          lVar6 = lVar5;
          func_0x000107c44388();
          func_0x000107c61180();
          func_0x000107c61170(lVar5);
        }
      }
      else {
        lVar6 = 0;
      }
    }
    puVar1 = PTR_PTR_1126c0460;
    func_0x000107c610f4();
    lVar5 = lVar3;
    func_0x000107c41314(lVar3);
    func_0x000107c61180();
    func_0x000107c478d8();
    puVar7 = (undefined *)0x0;
    func_0x000107c61174(0);
    func_0x000107c61170(lVar5);
    lVar5 = lVar6;
    if (puVar1 == (undefined *)0x0) {
      if (lVar6 == 0) {
        func_0x000107c416dc(*(undefined8 *)(param_1 + 0x20));
      }
      lVar2 = *(long *)(param_1 + 0x40);
      pcVar4 = *(code **)(lVar2 + 0x10);
      goto LAB_1004391d0;
    }
    func_0x000107c56bd8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
    if (lVar6 == 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
      func_0x000107c61174(puVar1);
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      func_0x000107c61174(uVar9);
      func_0x000107c4e524(uVar8);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(puVar1);
    }
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),puVar1,0,0);
  }
  func_0x000107c61170(lVar3);
LAB_1004391e0:
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 100439214; end: 10043921b; -[SCFideliusUserDevice databaseName] */

undefined8 FUN_100439214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10043921c; end: 10043924f; -[SCFideliusUserDatabaseManager initWithName:iwek:hashedBeta:identity:error:logger:grapheneRegistry:circumstanceEngine:] */

void FUN_10043921c(void)

{
  func_0x000107c478dc();
  return;
}



/* Entry: 100439250; end: 1004395eb; -[SCFideliusUserDatabaseManager initWithName:iwek:hashedBeta:identity:version:error:logger:grapheneRegistry:circumstanceEngine:] */

undefined8 *
FUN_100439250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puVar1 = &UNK_10f31108c;
  FUN_1000ba800();
  puStack_68 = PTR_PTR_1126eafc0;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR_PTR_1126bd038;
    func_0x000107c5d930();
    func_0x000107c61180();
    uVar6 = puVar2[1];
    puVar2[1] = puVar3;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_9);
    uVar6 = puVar2[2];
    puVar2[2] = param_9;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_10);
    uVar6 = puVar2[3];
    puVar2[3] = param_10;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_11);
    uVar6 = puVar2[0xb];
    puVar2[0xb] = param_11;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_3);
    uVar6 = puVar2[4];
    puVar2[4] = param_3;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_5);
    uVar6 = puVar2[5];
    puVar2[5] = param_5;
    func_0x000107c61170(uVar6);
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c415e0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126c0460;
    func_0x000107c5d934(PTR_PTR_1126c0460);
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126c0460;
    func_0x000107c5d938();
    func_0x000107c61180();
    uVar6 = puVar2[10];
    puVar2[10] = puVar3;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_4);
    uVar6 = puVar2[9];
    puVar2[9] = param_4;
    func_0x000107c61170(uVar6);
    puVar3 = PTR__OBJC_CLASS___NSCache_1126b3388;
    func_0x000107c610fc();
    uVar6 = puVar2[8];
    puVar2[8] = puVar3;
    func_0x000107c61170(uVar6);
    puVar7 = puVar2;
    func_0x000107c3bdb0();
    puVar3 = PTR_PTR_1126c0460;
    if (((ulong)puVar7 & 1) == 0) {
      uVar6 = puVar2[2];
      func_0x000107c5c734(uVar6);
      func_0x000107c61180();
      func_0x000107c416d8(puVar3);
      func_0x000107c61170(uVar6);
      if (param_6 != 0) {
        puVar7 = puVar2;
        func_0x000107c3b3cc();
        puVar3 = PTR_PTR_1126c0460;
        if (((ulong)puVar7 & 1) != 0) goto LAB_1004394cc;
        uVar6 = puVar2[2];
        func_0x000107c5c734(uVar6);
        func_0x000107c61180();
        func_0x000107c416d8(puVar3);
        func_0x000107c61170(uVar6);
      }
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
      puVar7 = (undefined8 *)0x0;
      goto LAB_100439554;
    }
LAB_1004394cc:
    func_0x000107c4baf4(puVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61174(puVar2);
  puVar7 = puVar2;
LAB_100439554:
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar2);
  return puVar7;
}



/* Entry: 1004395ec; end: 10043965b; +[SCFideliusPerformerInitializer userDatabasePerformer] */

void FUN_1004395ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f310cf2);
  func_0x000107c61180();
  func_0x000107c470d0(puVar1,param_2,puVar2,0x15,0,0x18);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10043965c; end: 100439697; -[SCMessagingExperimentServiceImpl enablePublicGroups] */

undefined8 FUN_10043965c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c3c1c4();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c49cd8();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100439698; end: 1004397b3; -[SCMessagingExperimentServiceImpl _publicGroupsConfig] */

void FUN_100439698(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba430;
  func_0x000107c61160(PTR_PTR_1126ba430);
  func_0x000107c55634();
  puVar3 = PTR_PTR_1126af7d0;
  func_0x000107c61160(PTR_PTR_1126af7d0);
  puVar4 = puVar2;
  func_0x000107c41214(puVar2);
  func_0x000107c61180();
  func_0x000107c5a494(puVar3,param_2,puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  uVar5 = uVar1;
  func_0x000107c4f558(uVar1,param_2,&PTR____CFConstantStringClassReference_110de91b8,puVar3,0);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126ba430;
  uVar1 = uVar5;
  func_0x000107c5dc0c(uVar5);
  func_0x000107c61180();
  uStack_48 = 0;
  func_0x000107c4e380(puVar2,param_2,uVar1,&uStack_48);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1004397b4; end: 10043991b; +[SCFideliusUserDatabaseManager userDatabaseUrlWithName:version:fileManager:] */

void FUN_1004397b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puVar1 = &UNK_10f311147;
  FUN_1000ba800(&UNK_10f311147);
  puVar2 = PTR_PTR_1126c0388;
  func_0x000107c5d92c(PTR_PTR_1126c0388,param_2,param_4);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4e430();
  func_0x000107c61180();
  uVar4 = param_5;
  func_0x000107c43418(param_5,param_2,puVar3);
  func_0x000107c61170(puVar3);
  if ((uVar4 & 1) == 0) {
    func_0x000107c409e4(param_5,param_2,puVar2,1,0,0);
    func_0x000107c57e54(puVar2,param_2,PTR____kCFBooleanTrue_11034ab68,
                        *(undefined8 *)PTR__NSURLIsExcludedFromBackupKey_11034ab18,0);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e10df8);
  func_0x000107c61180();
  puVar5 = puVar2;
  func_0x000107c3ac04(puVar2,param_2,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10043991c; end: 1004399a7; +[SCFideliusUtils userDatabaseFolderURLWithVersion:] */

void FUN_10043991c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c3dfd0();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e111f8);
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c3ac04(param_1,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1004399a8; end: 100439a1b; +[SCFideliusUtils applicationSupportDirectory] */

void FUN_1004399a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ac48();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c43638();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100439a1c; end: 100439a83; +[SCMessagingTopicsChatConfig descriptor] */

void FUN_100439a1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727490 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b6e2b0,
                        &PTR____CFConstantStringClassReference_110eabab8,&PTR_DAT_11323eca8,
                        &PTR_s_isEnabled_11323ed20,4,0x20,0x1c);
    puRam0000000113727490 = puVar1;
  }
  return;
}



/* Entry: 100439a84; end: 100439b67; -[SCFriendsFeedLifecycleServiceProvider provide] */

void FUN_100439a84(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126be628;
  func_0x000107c610f4(PTR_PTR_1126be628);
  func_0x000107c46a90();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100439b68; end: 100439bcf; +[RTUSFilteringAndBlock descriptor] */

void FUN_100439b68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0df0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c2a730,
                        &PTR____CFConstantStringClassReference_110f3dbf8,&PTR_DAT_11333e330,
                        &PTR_s_left_11333e3e8,2,0x18,0x1c);
    puRam00000001137f0df0 = puVar1;
  }
  return;
}



/* Entry: 100439bd0; end: 100439c43; -[SCFriendsFeedLifecycleServices initWithFriendsFeedViewLifecycleListener:] */

undefined1 * FUN_100439bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fa628;
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



/* Entry: 100439c44; end: 100439c4b;  */

void FUN_100439c44(undefined8 *param_1)

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



/* Entry: 100439c4c; end: 100439c9f;  */

void FUN_100439c4c(undefined8 *param_1)

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



/* Entry: 100439ca0; end: 100439cab;  */

void FUN_100439ca0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002b65e4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  *(undefined8 *)(lVar1 + 0x20) = uStack_58;
  func_0x00010043cb88(0);
  func_0x000107c613fc();
  uVar2 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  FUN_10043cc04(uStack_48,uVar2,uStack_58);
  *(undefined8 *)(lVar1 + 0x10) = uStack_48;
  FUN_10043cd94();
  *(undefined8 *)(lVar1 + 0x28) = uStack_48;
  *param_1 = lVar1;
  return;
}



/* Entry: 100439cac; end: 100439d83;  */

void FUN_100439cac(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002b65e4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  *(undefined8 *)(param_2 + 0x20) = uStack_58;
  func_0x00010043cb88(0);
  func_0x000107c613fc();
  uVar1 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  FUN_10043cc04(uStack_48,uVar1,uStack_58);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  FUN_10043cd94();
  *(undefined8 *)(param_2 + 0x28) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 100439d84; end: 100439d8b;  */

void FUN_100439d84(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100439d8c; end: 100439ddf;  */

void FUN_100439d8c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100439de0; end: 100439deb;  */

void FUN_100439de0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_1002b64a0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_10043a2e0(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_10043a3b8(uStack_58,uVar2,uVar3,uStack_70);
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  FUN_10043cb44();
  *(undefined8 *)(lVar1 + 0x30) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 100439dec; end: 100439ef3;  */

void FUN_100439dec(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_1002b64a0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_10043a2e0(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_10043a3b8(uStack_58,uVar1,uVar2,uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  FUN_10043cb44();
  *(undefined8 *)(param_2 + 0x30) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 100439ef4; end: 100439efb;  */

void FUN_100439ef4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100439efc; end: 100439f4f;  */

void FUN_100439efc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100439f50; end: 100439f57;  */

void FUN_100439f50(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_100095850();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_10043a03c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_10043a0b8();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_10043a218();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 100439f58; end: 10043a03b;  */

void FUN_100439f58(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100095850();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_10043a03c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_10043a0b8();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_10043a218();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 10043a03c; end: 10043a0b7;  */

void FUN_10043a03c(undefined8 param_1)

{
  if (lRam0000000112da8dd0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e63fe38);
  return;
}



/* Entry: 10043a0b8; end: 10043a17b;  */

void FUN_10043a0b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  
  FUN_1000285a8(0x112da8d98,&UNK_10d9501f0);
  uVar1 = param_2;
  func_0x000107c3e270(param_2);
  func_0x000107c61180();
  uVar2 = uVar1;
  FUN_1000bda74();
  func_0x000107c61170(uVar1);
  uVar1 = 0x112da8da0;
  FUN_1000285a8(0x112da8da0,&UNK_10d9501f8);
  func_0x000107c613fc();
  pcVar3 = FUN_10043c53c;
  FUN_1000bdd8c(FUN_10043c53c,uVar2,uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(code **)(unaff_x20 + 0x10) = pcVar3;
  return;
}



/* Entry: 10043a17c; end: 10043a183; -[SCAsyncQueueServices asyncQueueProvider] */

undefined8 FUN_10043a17c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10043a184; end: 10043a217; -[SCMessagingExperimentServiceImpl enableCleanConversationResetWithoutExposure] */

long FUN_10043a184(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5dc0c(lVar2);
    func_0x000107c61180();
    lVar1 = lVar3;
    func_0x000107c3ebcc();
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61170(lVar2);
  return lVar1;
}



/* Entry: 10043a218; end: 10043a29b;  */

void FUN_10043a218(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1000974e4(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x00010043a250();
  return;
}



/* Entry: 10043a29c; end: 10043a2c7;  */

void FUN_10043a29c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10043a2c8; end: 10043a2df; -[SCMessagingExperimentServiceImpl isMessageWindowingEnabled] */

void FUN_10043a2c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de95d8,0,0);
  return;
}



/* Entry: 10043a2e0; end: 10043a35b;  */

void FUN_10043a2e0(undefined8 param_1)

{
  if (lRam0000000112e3fe60 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e69c294);
  return;
}



/* Entry: 10043a35c; end: 10043a3b7; -[SCMessagingExperimentServiceImpl isPublicGroupsClearNotifOnConvoEnterEnabled] */

void FUN_10043a35c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c42650();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10043a3b8; end: 10043a5af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043a3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(param_4 + _DAT_11302e640);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar8 = 3;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c40448();
    uVar8 = 2;
    if ((int)lVar2 == 0) {
      uVar8 = 3;
    }
  }
  FUN_1000d224c(auStack_88);
  puVar3 = auStack_88;
  FUN_1000a8868(puVar3,uStack_70);
  FUN_10043c5c0(uVar8,0x38,1,uStack_70,uStack_68,puVar3);
  func_0x0001000834e4(auStack_88);
  FUN_1000285a8(0x112dc0fd8,&UNK_10d97e7f0);
  uVar7 = param_3;
  func_0x000107c5cec4();
  func_0x000107c61180();
  uVar4 = uVar7;
  FUN_1000bda74();
  func_0x000107c61170(uVar7);
  puVar5 = &UNK_11049e970;
  func_0x000107c613fc(&UNK_11049e970,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar8;
  *(undefined8 *)(puVar5 + 0x18) = uVar4;
  *(long *)(puVar5 + 0x20) = lVar1;
  FUN_1000285a8(0x112e3fe30,&UNK_10da2df88);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar4);
  func_0x000107c615f0(lVar1);
  puVar6 = &UNK_101f113dc;
  FUN_1000bdd8c(&UNK_101f113dc,puVar5);
  uVar7 = 0;
  FUN_1002b652c(0);
  func_0x000107c610f8();
  FUN_10043caf8(puVar6,uVar7);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar8);
  func_0x000107c615e8(lVar1);
  *(undefined **)(unaff_x20 + 0x10) = puVar6;
  return;
}



/* Entry: 10043a5b0; end: 10043a5b7;  */

void FUN_10043a5b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10043a5b8; end: 10043a5f7;  */

void FUN_10043a5b8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b378();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10043a5f8; end: 10043a763; -[SCStoriesExperimentServiceProvider _createStoriesCofExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043a5f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11272d748;
    func_0x000107c61148(lVar9);
  }
  lVar1 = lVar9;
  func_0x000107c3fa04(lVar9);
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  puVar2 = PTR_PTR_1126c1208;
  func_0x000107c610f4(PTR_PTR_1126c1208);
  lVar9 = param_1 + _DAT_11272d738;
  func_0x000107c61148(lVar9);
  lVar3 = lVar9;
  func_0x000107c50958();
  func_0x000107c61180();
  lVar4 = param_1 + _DAT_11272d73c;
  func_0x000107c61148(lVar4);
  lVar5 = lVar4;
  func_0x000107c5b03c();
  func_0x000107c61180();
  lVar6 = param_1 + _DAT_11272d740;
  func_0x000107c61148(lVar6);
  lVar7 = lVar6;
  func_0x000107c3de48();
  func_0x000107c61180();
  lVar8 = 0;
  if (param_1 != 0) {
    lVar8 = param_1 + _DAT_11272d74c;
    func_0x000107c61148(lVar8);
  }
  func_0x000107c45e20(puVar2,param_2,lVar1,lVar3,lVar5,lVar7,lVar8);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10043a764; end: 10043a773; -[_TtC32SimpleSnapchatExperimentServices32SimpleSnapchatExperimentServices simpleSnapchatExperimentConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043a764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fea2a8));
  return;
}



/* Entry: 10043a774; end: 10043a78b; -[SCMessagingExperimentServiceImpl isNotificationCenterRebuildEnabled] */

void FUN_10043a774(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de8d98,0,0);
  return;
}



/* Entry: 10043a78c; end: 10043bfef; -[SCStoriesConfigProviderImplementation initWithCircumstanceEngine:rtusConfigProvider:simpleSnapchatExperimentConfigProvider:appStartExperimentReader:complianceEngine:] */

undefined8 *
FUN_10043a78c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_5f0 [8];
  undefined *puStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined *puStack_5d0;
  undefined1 auStack_5c8 [8];
  undefined *puStack_5c0;
  undefined8 uStack_5b8;
  undefined *puStack_5b0;
  undefined *puStack_5a8;
  undefined8 uStack_5a0;
  undefined *puStack_598;
  undefined8 uStack_590;
  undefined *puStack_588;
  undefined *puStack_580;
  undefined8 uStack_578;
  undefined *puStack_570;
  undefined8 uStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined1 auStack_550 [8];
  undefined *puStack_548;
  undefined8 uStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined1 auStack_528 [8];
  undefined *puStack_520;
  undefined8 uStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined1 auStack_500 [8];
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  undefined1 auStack_4d8 [8];
  undefined *puStack_4d0;
  undefined8 uStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined1 auStack_4b0 [8];
  undefined *puStack_4a8;
  undefined8 uStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  undefined1 auStack_488 [8];
  undefined *puStack_480;
  undefined8 uStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined1 auStack_460 [8];
  undefined *puStack_458;
  undefined8 uStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined1 auStack_438 [8];
  undefined *puStack_430;
  undefined8 uStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined1 auStack_410 [8];
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  undefined8 uStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined1 auStack_348 [8];
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined1 auStack_280 [8];
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined1 auStack_230 [8];
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined1 auStack_208 [8];
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_80 = PTR_PTR_1126eb4d8;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[2];
    puVar1[2] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126c1190;
    func_0x000107c610f4();
    func_0x000107c45db0();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x100442d7c;
    puStack_a8 = &UNK_1108cd668;
    func_0x000107c61174(param_6);
    uStack_a0 = param_6;
    func_0x000107c61174(param_3);
    uStack_98 = param_3;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    puStack_e8 = puVar3;
    uStack_e0 = 0xc2000000;
    puStack_d8 = &UNK_105a1090c;
    puStack_d0 = &UNK_11084cac0;
    func_0x000107c6111c(auStack_c8,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[7];
    puVar1[7] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    puStack_110 = puVar3;
    uStack_108 = 0xc2000000;
    puStack_100 = &UNK_105a1095c;
    puStack_f8 = &UNK_11084cac0;
    func_0x000107c6111c(auStack_f0,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[8];
    puVar1[8] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    puStack_138 = puVar3;
    uStack_130 = 0xc2000000;
    puStack_128 = &UNK_105a109ac;
    puStack_120 = &UNK_11084cac0;
    func_0x000107c6111c(auStack_118,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[9];
    puVar1[9] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    puStack_160 = puVar3;
    uStack_158 = 0xc2000000;
    puStack_150 = &UNK_105a10a00;
    puStack_148 = &UNK_11084cac0;
    func_0x000107c6111c(auStack_140,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[10];
    puVar1[10] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    puStack_188 = puVar3;
    uStack_180 = 0xc2000000;
    puStack_178 = &UNK_105a10a60;
    puStack_170 = &UNK_1108429c8;
    func_0x000107c61174(param_3);
    uStack_168 = param_3;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    puStack_1b0 = puVar3;
    uStack_1a8 = 0xc2000000;
    puStack_1a0 = &UNK_105a10aa0;
    puStack_198 = &UNK_1108cd6b8;
    func_0x000107c6111c(auStack_190,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x41];
    puVar1[0x41] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    puStack_1d8 = puVar3;
    uStack_1d0 = 0xc2000000;
    puStack_1c8 = &UNK_105a10ae0;
    puStack_1c0 = &UNK_1108cd6e8;
    func_0x000107c6111c(auStack_1b8,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x42];
    puVar1[0x42] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    puStack_200 = puVar3;
    uStack_1f8 = 0xc2000000;
    puStack_1f0 = &UNK_105a10b20;
    puStack_1e8 = &UNK_1108cd718;
    func_0x000107c6111c(auStack_1e0,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x43];
    puVar1[0x43] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    puStack_228 = puVar3;
    uStack_220 = 0xc2000000;
    puStack_218 = &UNK_105a10b60;
    puStack_210 = &UNK_1108cd748;
    func_0x000107c6111c(auStack_208,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x44];
    puVar1[0x44] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    puStack_250 = puVar3;
    uStack_248 = 0xc2000000;
    puStack_240 = &UNK_105a10ba0;
    puStack_238 = &UNK_1108cd778;
    func_0x000107c6111c(auStack_230,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x45];
    puVar1[0x45] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    puStack_278 = puVar3;
    uStack_270 = 0xc2000000;
    puStack_268 = &UNK_105a10be0;
    puStack_260 = &UNK_1108429c8;
    func_0x000107c61174(param_3);
    uStack_258 = param_3;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    puStack_2a0 = puVar3;
    uStack_298 = 0xc2000000;
    puStack_290 = &UNK_105a10c1c;
    puStack_288 = &UNK_11084cac0;
    func_0x000107c6111c(auStack_280,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    puStack_2c8 = puVar3;
    uStack_2c0 = 0xc2000000;
    puStack_2b8 = &UNK_105a10c70;
    puStack_2b0 = &UNK_11084cac0;
    func_0x000107c6111c(auStack_2a8,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x16];
    puVar1[0x16] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    puStack_2f0 = puVar3;
    uStack_2e8 = 0xc2000000;
    puStack_2e0 = &UNK_105a10cc4;
    puStack_2d8 = &UNK_1108cd7a8;
    func_0x000107c61174(param_3);
    uStack_2d0 = param_3;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126ae720;
    puStack_318 = puVar3;
    uStack_310 = 0xc2000000;
    puStack_308 = &UNK_105a10d7c;
    puStack_300 = &UNK_1108429c8;
    func_0x000107c61174();
    puStack_2f8 = puVar4;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x20];
    puVar1[0x20] = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_340 = puVar3;
    uStack_338 = 0xc2000000;
    puStack_330 = &UNK_105a10e2c;
    puStack_328 = &UNK_1108429c8;
    func_0x000107c61174(puVar4);
    puStack_320 = puVar4;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x21];
    puVar1[0x21] = puVar5;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = 0;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_368 = puVar3;
    uStack_360 = 0xc2000000;
    puStack_358 = &UNK_105a10edc;
    puStack_350 = &UNK_11084cac0;
    func_0x000107c6111c(auStack_348,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_390 = puVar3;
    uStack_388 = 0xc2000000;
    puStack_380 = &UNK_105a10f1c;
    puStack_378 = &UNK_1108429c8;
    func_0x000107c61174(param_3);
    uStack_370 = param_3;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_3b8 = puVar3;
    uStack_3b0 = 0xc2000000;
    puStack_3a8 = &UNK_105a10f5c;
    puStack_3a0 = &UNK_1108429c8;
    func_0x000107c61174(param_3);
    uStack_398 = param_3;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_3e0 = puVar3;
    uStack_3d8 = 0xc2000000;
    puStack_3d0 = &UNK_105a10f9c;
    puStack_3c8 = &UNK_1108429c8;
    func_0x000107c61174(param_3);
    uStack_3c0 = param_3;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_408 = puVar3;
    uStack_400 = 0xc2000000;
    puStack_3f8 = &UNK_105a10fdc;
    puStack_3f0 = &UNK_1108429c8;
    func_0x000107c61174(param_3);
    uStack_3e8 = param_3;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_430 = puVar3;
    uStack_428 = 0xc2000000;
    puStack_420 = &UNK_105a1101c;
    puStack_418 = &UNK_11084cac0;
    func_0x000107c6111c(auStack_410,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_458 = puVar3;
    uStack_450 = 0xc2000000;
    puStack_448 = &UNK_105a11070;
    puStack_440 = &UNK_11084cac0;
    func_0x000107c6111c(auStack_438,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_480 = puVar3;
    uStack_478 = 0xc2000000;
    puStack_470 = &UNK_105a110b0;
    puStack_468 = &UNK_11084cac0;
    func_0x000107c6111c(auStack_460,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_4a8 = puVar3;
    uStack_4a0 = 0xc2000000;
    puStack_498 = &UNK_105a110f0;
    puStack_490 = &UNK_11084cac0;
    func_0x000107c6111c(auStack_488,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_4d0 = puVar3;
    uStack_4c8 = 0xc2000000;
    puStack_4c0 = &UNK_105a11130;
    puStack_4b8 = &UNK_11084cac0;
    func_0x000107c6111c(auStack_4b0,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_4f8 = puVar3;
    uStack_4f0 = 0xc2000000;
    puStack_4e8 = &UNK_105a11170;
    puStack_4e0 = &UNK_11084cac0;
    func_0x000107c6111c(auStack_4d8,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_520 = puVar3;
    uStack_518 = 0xc2000000;
    puStack_510 = &UNK_105a111b0;
    puStack_508 = &UNK_1108cd7d8;
    func_0x000107c6111c(auStack_500,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x46];
    puVar1[0x46] = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_548 = puVar3;
    uStack_540 = 0xc2000000;
    puStack_538 = &UNK_105a111f0;
    puStack_530 = &UNK_11084cac0;
    func_0x000107c6111c(auStack_528,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x22];
    puVar1[0x22] = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_570 = puVar3;
    uStack_568 = 0xc2000000;
    puStack_560 = &UNK_105a11230;
    puStack_558 = &UNK_11084cac0;
    func_0x000107c6111c(auStack_550,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x23];
    puVar1[0x23] = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_598 = puVar3;
    uStack_590 = 0xc2000000;
    puStack_588 = &UNK_105a11270;
    puStack_580 = &UNK_1108429c8;
    func_0x000107c61174(param_3);
    uStack_578 = param_3;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_5c0 = puVar3;
    uStack_5b8 = 0xc2000000;
    puStack_5b0 = &UNK_105a112b0;
    puStack_5a8 = &UNK_1108429c8;
    func_0x000107c61174(param_3);
    uStack_5a0 = param_3;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_5e8 = puVar3;
    uStack_5e0 = 0xc2000000;
    uStack_5d8 = 0x10043c4bc;
    puStack_5d0 = &UNK_11084cac0;
    func_0x000107c6111c(auStack_5c8,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x24];
    puVar1[0x24] = puVar5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_5f0,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x47];
    puVar1[0x47] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x25];
    puVar1[0x25] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x26];
    puVar1[0x26] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x27];
    puVar1[0x27] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x28];
    puVar1[0x28] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x29];
    puVar1[0x29] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x31];
    puVar1[0x31] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x33];
    puVar1[0x33] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x34];
    puVar1[0x34] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x35];
    puVar1[0x35] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x36];
    puVar1[0x36] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x37];
    puVar1[0x37] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x39];
    puVar1[0x39] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_6);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x3f];
    puVar1[0x3f] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x40];
    puVar1[0x40] = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = 0;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = 0;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61120(auStack_5f0);
    func_0x000107c61120(auStack_5c8);
    func_0x000107c61170(uStack_5a0);
    func_0x000107c61170(uStack_578);
    func_0x000107c61120(auStack_550);
    func_0x000107c61120(auStack_528);
    func_0x000107c61120(auStack_500);
    func_0x000107c61120(auStack_4d8);
    func_0x000107c61120(auStack_4b0);
    func_0x000107c61120(auStack_488);
    func_0x000107c61120(auStack_460);
    func_0x000107c61120(auStack_438);
    func_0x000107c61120(auStack_410);
    func_0x000107c61170(uStack_3e8);
    func_0x000107c61170(uStack_3c0);
    func_0x000107c61170(uStack_398);
    func_0x000107c61170(uStack_370);
    func_0x000107c61120(auStack_348);
    func_0x000107c61170(puStack_320);
    func_0x000107c61170(puStack_2f8);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uStack_2d0);
    func_0x000107c61120(auStack_2a8);
    func_0x000107c61120(auStack_280);
    func_0x000107c61170(uStack_258);
    func_0x000107c61120(auStack_230);
    func_0x000107c61120(auStack_208);
    func_0x000107c61120(auStack_1e0);
    func_0x000107c61120(auStack_1b8);
    func_0x000107c61120(auStack_190);
    func_0x000107c61170(uStack_168);
    func_0x000107c61120(auStack_140);
    func_0x000107c61120(auStack_118);
    func_0x000107c61120(auStack_f0);
    func_0x000107c61120(auStack_c8);
    func_0x000107c61170(uStack_98);
    func_0x000107c61170(uStack_a0);
    func_0x000107c61120(auStack_90);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10043bff0; end: 10043c007; -[SCMessagingExperimentServiceImpl isArroyoBackgroundTaskRetryKeepaliveEnabled] */

void FUN_10043bff0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de8cd8,0,0);
  return;
}



/* Entry: 10043c008; end: 10043c213; -[SCSpotlightConfigProvider initWithCircumstanceEngine:] */

undefined8 * FUN_10043c008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  puStack_68 = PTR_PTR_1126eb4d0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    puStack_90 = &UNK_105a10174;
    puStack_88 = &UNK_1108cd5d8;
    func_0x000107c6111c(auStack_80,auStack_78);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_c8 = puVar4;
    uStack_c0 = 0xc2000000;
    puStack_b8 = &UNK_105a101b4;
    puStack_b0 = &UNK_1108cd608;
    func_0x000107c6111c(auStack_a8,auStack_78);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_d0,auStack_78);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[3];
    puVar1[3] = puVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_d0);
    func_0x000107c61120(auStack_a8);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10043c214; end: 10043c22b; -[SCMessagingExperimentServiceImpl isArroyoBackgroundTaskForegroundRefreshEnabled] */

void FUN_10043c214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de8cf8,0,0);
  return;
}



/* Entry: 10043c22c; end: 10043c243; -[SCMessagingExperimentServiceImpl isKrakenNseDecryptionEnabled] */

void FUN_10043c22c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de9998,0,0);
  return;
}



/* Entry: 10043c244; end: 10043c283;  */

void FUN_10043c244(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b8c4();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10043c284; end: 10043c47b; -[SCFriendsFeedLoggingServicesEntryPoint _ghostToFeedLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043c284(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  func_0x000107c470d0();
  lVar2 = param_1;
  FUN_10043c7a8(param_1);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  FUN_1003f0d68(param_1);
  func_0x000107c61180();
  lVar4 = lVar2;
  func_0x000107c5dac4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112724c80;
    func_0x000107c61148(param_1);
  }
  lVar2 = param_1;
  func_0x000107c4d7ec(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ba0d0;
  func_0x000107c610f4(PTR_PTR_1126ba0d0);
  func_0x000107c47520();
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10043c47c; end: 10043c50f; -[SCStoriesConfigProviderImplementation contentFeedRepoIncreaseQueuePriority] */

uint FUN_10043c47c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c49820();
  func_0x000107c61170(uVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 10043c510; end: 10043c53b; -[SCStoriesConfigProviderImplementation _contentFeedRepoOptimizationCof] */

long FUN_10043c510(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4980c(uVar1,param_2,&PTR____CFConstantStringClassReference_110e16a98,0,0);
  return (long)(int)uVar1;
}



/* Entry: 10043c53c; end: 10043c547;  */

void FUN_10043c53c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 unaff_x20;
  
  lVar1 = 0;
  FUN_10043c548();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = unaff_x20;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1103cd130;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10043c548; end: 10043c567;  */

void FUN_10043c548(void)

{
  func_0x000107c61168(&PTR_PTR_112da8d38);
  return;
}



/* Entry: 10043c568; end: 10043c5bf;  */

void FUN_10043c568(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  FUN_10043c548();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1103cd130;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10043c5c0; end: 10043c5e3;  */

void FUN_10043c5c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  uStack_68 = 0xd000000000000014;
  lVar3 = *(long *)(param_4 + -8);
  lVar5 = *(long *)(lVar3 + 0x40);
  uStack_80 = param_1;
  uStack_78 = param_2;
  uStack_6c = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)&uStack_80 - (lVar5 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar3 + 0x10))(lVar7);
  uVar2 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar4 = uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff);
  uVar6 = lVar5 + uVar4 + 7 & 0xfffffffffffffff8;
  puVar1 = &UNK_110741b78;
  func_0x000107c613fc(&UNK_110741b78,uVar6 + 0x28,uVar2 | 7);
  *(long *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  (**(code **)(lVar3 + 0x20))(puVar1 + uVar4,lVar7,param_4);
  *(undefined8 *)(puVar1 + uVar6) = uStack_80;
  *(undefined8 *)(puVar1 + uVar6 + 8) = uStack_78;
  *(char *)((long)(puVar1 + uVar6 + 8) + 8) = (char)uStack_6c;
  *(undefined8 *)(puVar1 + uVar6 + 0x18) = uStack_68;
  *(undefined8 *)((long)(puVar1 + uVar6 + 0x18) + 8) = 0x800000010f1eca50;
  FUN_1000285a8(0x112e04c88,&UNK_10d9d8600);
  func_0x000107c613fc();
  func_0x000107c61434(0x800000010f1eca50);
  FUN_1000bdd8c(&UNK_1040abcec,puVar1);
  return;
}



/* Entry: 10043c5e4; end: 10043c737;  */

void FUN_10043c5e4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_6 + -8);
  lVar5 = *(long *)(lVar3 + 0x40);
  uStack_80 = param_1;
  uStack_78 = param_2;
  uStack_6c = param_3;
  uStack_68 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)&uStack_80 - (lVar5 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar3 + 0x10))(lVar7);
  uVar2 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar4 = uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff);
  uVar6 = lVar5 + uVar4 + 7 & 0xfffffffffffffff8;
  puVar1 = &UNK_110741b78;
  func_0x000107c613fc(&UNK_110741b78,uVar6 + 0x28,uVar2 | 7);
  *(long *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_7;
  (**(code **)(lVar3 + 0x20))(puVar1 + uVar4,lVar7,param_6);
  *(undefined8 *)(puVar1 + uVar6) = uStack_80;
  *(undefined8 *)(puVar1 + uVar6 + 8) = uStack_78;
  *(char *)((long)(puVar1 + uVar6 + 8) + 8) = (char)uStack_6c;
  *(undefined8 *)(puVar1 + uVar6 + 0x18) = uStack_68;
  *(undefined8 *)((long)(puVar1 + uVar6 + 0x18) + 8) = param_5;
  FUN_1000285a8(0x112e04c88,&UNK_10d9d8600);
  func_0x000107c613fc();
  func_0x000107c61434(param_5);
  FUN_1000bdd8c(&UNK_1040abcec,puVar1);
  return;
}



/* Entry: 10043c738; end: 10043c7a7;  */

void FUN_10043c738(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar1 + 0x50) ^ 0xffffffffffffffff);
  lVar3 = *(long *)(lVar1 + 0x40);
  (**(code **)(lVar1 + 8))(unaff_x20 + uVar2);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + (lVar3 + uVar2 + 7 & 0xfffffffffffffff8) + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10043c7a8; end: 10043c7cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043c7a8(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112724c88);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10043c7cc; end: 10043c7db; -[_TtC13SCSystemScope13SCSystemScope notificationLifecycleEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043c7cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091b80));
  return;
}



/* Entry: 10043c7dc; end: 10043ca47; -[SCGhostToFeedLogger initWithLogger:notificationLifeCycleEvents:performer:grapheneRegistry:startupInfoService:] */

undefined8 *
FUN_10043c7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_1126e8b80;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_6);
    func_0x000107c3e4fc(puVar3);
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126ba088;
    func_0x000107c610f4();
    func_0x000107c46b94();
    uVar2 = puVar1[6];
    puVar1[6] = puVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    func_0x000107c61170(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(0);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = 0;
    func_0x000107c61170(uVar2);
    puVar1[3] = 0;
    func_0x000107c61174(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_7;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[5];
    puVar1[5] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c3c8cc(puVar1);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_6);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10043ca48; end: 10043caef; -[SCGhostToFeedGrapheneLogger initWithGraphene:performer:] */

undefined1 *
FUN_10043ca48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e8b78;
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
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10043caf0; end: 10043caf7; -[SCSQLiteServices transactorProvider] */

undefined8 FUN_10043caf0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10043caf8; end: 10043cb43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043caf8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f34e90) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10043cb44; end: 10043cb4b;  */

void FUN_10043cb44(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10043cb4c; end: 10043cc03;  */

void FUN_10043cb4c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10043cc04; end: 10043ccf3;  */

void FUN_10043cc04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = &UNK_11049ec60;
  func_0x000107c613fc(&UNK_11049ec60,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  FUN_1000285a8(0x112e40118,&UNK_10da2e180);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  puVar2 = &UNK_101f15cc4;
  FUN_1000bdd8c(&UNK_101f15cc4,puVar1);
  uVar3 = 0;
  FUN_1002b6670(0);
  func_0x000107c610f8();
  FUN_10043cd24(puVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  return;
}



/* Entry: 10043ccf4; end: 10043cd1f;  */

void FUN_10043ccf4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10043cd20; end: 10043cd23;  */

void FUN_10043cd20(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10043cd24; end: 10043cd93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10043cd24(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  FUN_1003a5b88();
  *(long *)(unaff_x20 + _DAT_112f35318) = lVar1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 10043cd94; end: 10043cd9b;  */

void FUN_10043cd94(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10043cd9c; end: 10043cdcf;  */

void FUN_10043cd9c(void)

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



/* Entry: 10043cdd0; end: 10043cdd7;  */

void FUN_10043cdd0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10043cdd8; end: 10043ce2b;  */

void FUN_10043cdd8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10043ce2c; end: 10043ce3f;  */

void FUN_10043ce2c(long *param_1)

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
  long unaff_x20;
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
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100286054();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  *(undefined8 *)(lVar2 + 0x48) = uStack_98;
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
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar9 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  func_0x00010043d7a0(0);
  func_0x000107c613fc();
  uVar10 = uStack_68;
  FUN_10043d7c0(uStack_68,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,puVar3);
  *(undefined8 *)(lVar2 + 0x10) = uVar10;
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar11 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c6157c(uVar10);
  FUN_10043d7dc();
  func_0x000107c61574(uVar10);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    *(undefined **)(lVar2 + 0x50) = puVar3;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10043d0b4);
  (*pcVar1)();
}



/* Entry: 10043ce40; end: 10043d0b3;  */

void FUN_10043ce40(long *param_1,long param_2)

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
  FUN_100286054();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
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
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  func_0x00010043d7a0(0);
  func_0x000107c613fc();
  uVar9 = uStack_68;
  FUN_10043d7c0(uStack_68,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,puVar2);
  *(undefined8 *)(param_2 + 0x10) = uVar9;
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c6157c(uVar9);
  FUN_10043d7dc();
  func_0x000107c61574(uVar9);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(undefined **)(param_2 + 0x50) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10043d0b4);
  (*pcVar1)();
}



/* Entry: 10043d0b4; end: 10043d0bb;  */

void FUN_10043d0b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10043d0bc; end: 10043d10f;  */

void FUN_10043d0bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10043d110; end: 10043d11b;  */

void FUN_10043d110(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1001f6aec();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a8810;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0x6e496e69676562;
  func_0x000107c5fadc(0x6e496e69676562,0xe700000000000000);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  uVar7 = uVar8;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 10043d11c; end: 10043d3cf;  */

void FUN_10043d11c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1001f6aec();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a8810;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0x6e496e69676562;
  func_0x000107c5fadc(0x6e496e69676562,0xe700000000000000);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  uVar6 = uVar7;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 10043d3d0; end: 10043d49b; -[SCGhostToFeedLogger _startObservingNotificationLifecycleEvents] */

void FUN_10043d3d0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 10043d49c; end: 10043d65f; -[SCCreatorsSettingsRequestManagerServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043d49c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar7 = (long)_DAT_112727dfc;
  lVar1 = param_1 + lVar7;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c44f4c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar7 = param_1 + lVar7;
  func_0x000107c61148();
  lVar3 = lVar7;
  func_0x000107c44f60();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  lVar1 = param_1 + _DAT_112727e00;
  func_0x000107c61148();
  lVar7 = lVar1;
  func_0x000107c5cb84();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112727e04;
  func_0x000107c61148();
  lVar4 = lVar1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61144(auStack_58,param_1);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126bd368;
  func_0x000107c610f4(PTR_PTR_1126bd368);
  func_0x000107c46264();
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10043d660; end: 10043d70b; -[SCGhostToFeedLogger logSyncFeedSubstep:startTime:fetchContext:] */

void FUN_10043d660(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = param_1;
  func_0x000107c61174(param_5);
  func_0x000107c6071c();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10043eeac;
  puStack_70 = &UNK_1108714c0;
  uStack_68 = param_5;
  lStack_60 = param_2;
  uStack_58 = uVar2;
  uStack_50 = param_1;
  uStack_48 = param_4;
  func_0x000107c61174(param_5);
  func_0x000107c4e524(uVar1,param_3,&puStack_88);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 10043d70c; end: 10043d763; -[_TtC39SCCreatorsSettingsRequestManagerService39SCCreatorsSettingsRequestManagerService initWithCreatorsSettingsRequestManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043d70c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113049178) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10043d764; end: 10043d7bf;  */

void FUN_10043d764(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10043d7c0; end: 10043d7db;  */

void FUN_10043d7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x10) = param_8;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 10043d7dc; end: 10043dde3;  */

/* WARNING: Possible PIC construction at 0x00010043d82c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010043d864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010043d898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010043dc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010043dc40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010043dc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010043dc60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010043dc80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010043dc9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010043dcf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010043dd08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010043dd18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010043dd28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010043dd38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010043dd48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010043dda4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010043dd4c) */
/* WARNING: Removing unreachable block (ram,0x00010043dd3c) */
/* WARNING: Removing unreachable block (ram,0x00010043dd2c) */
/* WARNING: Removing unreachable block (ram,0x00010043dd1c) */
/* WARNING: Removing unreachable block (ram,0x00010043dd0c) */
/* WARNING: Removing unreachable block (ram,0x00010043dcfc) */
/* WARNING: Removing unreachable block (ram,0x00010043dca0) */
/* WARNING: Removing unreachable block (ram,0x00010043dc84) */
/* WARNING: Removing unreachable block (ram,0x00010043dde0) */
/* WARNING: Removing unreachable block (ram,0x00010043dc88) */
/* WARNING: Removing unreachable block (ram,0x00010043dc64) */
/* WARNING: Removing unreachable block (ram,0x00010043dc54) */
/* WARNING: Removing unreachable block (ram,0x00010043dc44) */
/* WARNING: Removing unreachable block (ram,0x00010043dc34) */
/* WARNING: Removing unreachable block (ram,0x00010043d89c) */
/* WARNING: Removing unreachable block (ram,0x00010043dda0) */
/* WARNING: Removing unreachable block (ram,0x00010043d8a0) */
/* WARNING: Removing unreachable block (ram,0x00010043dddc) */
/* WARNING: Removing unreachable block (ram,0x00010043db4c) */
/* WARNING: Removing unreachable block (ram,0x00010043db88) */
/* WARNING: Removing unreachable block (ram,0x00010043dba0) */
/* WARNING: Removing unreachable block (ram,0x00010043d868) */
/* WARNING: Removing unreachable block (ram,0x00010043dd78) */
/* WARNING: Removing unreachable block (ram,0x00010043d86c) */
/* WARNING: Removing unreachable block (ram,0x00010043ddd8) */
/* WARNING: Removing unreachable block (ram,0x00010043d880) */
/* WARNING: Removing unreachable block (ram,0x00010043d830) */
/* WARNING: Removing unreachable block (ram,0x00010043dd54) */
/* WARNING: Removing unreachable block (ram,0x00010043d834) */
/* WARNING: Removing unreachable block (ram,0x00010043ddd4) */
/* WARNING: Removing unreachable block (ram,0x00010043d84c) */
/* WARNING: Removing unreachable block (ram,0x00010043dda8) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_10043d7dc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c3e464();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10043ddd4);
  (*pcVar1)();
}



/* Entry: 10043dde4; end: 10043de07;  */

void FUN_10043dde4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10043de08; end: 10043de0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043de08(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  uVar2 = uVar1;
  func_0x000107c503b4();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10043de10; end: 10043de8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043de10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  uVar2 = uVar1;
  func_0x000107c503b4();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}


