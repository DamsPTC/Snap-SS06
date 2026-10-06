/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1025a9ae0; end: 1025a9b13;  */

void FUN_1025a9ae0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025a9b14; end: 1025a9b1b;  */

undefined8 FUN_1025a9b14(void)

{
  return 0x1b;
}



/* Entry: 1025a9b1c; end: 1025a9b9f;  */

void FUN_1025a9b1c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1025a9e08,param_2,FUN_1025a9e0c,param_2,FUN_1025a9e34,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1025a9ba0; end: 1025a9bef;  */

undefined8 FUN_1025a9ba0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1025a9bf0; end: 1025a9c03;  */

void FUN_1025a9bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110524288;
  return;
}



/* Entry: 1025a9c04; end: 1025a9dab;  */

void FUN_1025a9c04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126aab58;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0x537765695670616d;
  uVar4 = uVar3;
  func_0x000107c5fadc(0x537765695670616d,0xec00000065706f63);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar4);
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef27ee0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar4);
  func_0x000107c5fadc(0x537765695670616d,0xef73656369767265);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1025a9dac; end: 1025a9dc7;  */

undefined ** FUN_1025a9dac(void)

{
  return &PTR_DAT_113066d90;
}



/* Entry: 1025a9dc8; end: 1025a9de7;  */

void FUN_1025a9dc8(void)

{
  func_0x000107c61168(&PTR_PTR_112ea8908);
  return;
}



/* Entry: 1025a9de8; end: 1025a9e0b;  */

undefined1  [16] FUN_1025a9de8(void)

{
  return ZEXT816(0x1105242c8);
}



/* Entry: 1025a9e0c; end: 1025a9e33;  */

void FUN_1025a9e0c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1025a9e34; end: 1025a9e3b;  */

undefined8 FUN_1025a9e34(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1025a9e3c; end: 1025aa447;  */

void FUN_1025a9e3c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_1025aa598();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126aab60;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0x537765695670616d;
  uVar7 = uVar8;
  func_0x000107c5fadc(0x537765695670616d,0xec00000065706f63);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar7);
  func_0x000107c5fadc(0x537765695670616d,0xef73656369767265);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar7);
  uVar8 = 0x655343505270616d;
  func_0x000107c5fadc(0x655343505270616d,0xee00736563697672);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0ad9f0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e20);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *param_1 = param_2;
  return;
}



/* Entry: 1025aa448; end: 1025aa48b;  */

void FUN_1025aa448(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025aa48c; end: 1025aa493;  */

undefined8 FUN_1025aa48c(void)

{
  return 0x1b;
}



/* Entry: 1025aa494; end: 1025aa517;  */

void FUN_1025aa494(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1025aa5d8,param_2,FUN_1025aa5dc,param_2,FUN_1025aa604,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1025aa518; end: 1025aa567;  */

undefined8 FUN_1025aa518(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1025aa568; end: 1025aa597;  */

void FUN_1025aa568(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110524308;
  return;
}



/* Entry: 1025aa598; end: 1025aa5b7;  */

void FUN_1025aa598(void)

{
  func_0x000107c61168(&PTR_PTR_112ea89e0);
  return;
}



/* Entry: 1025aa5b8; end: 1025aa5db;  */

undefined1  [16] FUN_1025aa5b8(void)

{
  return ZEXT816(0x110524348);
}



/* Entry: 1025aa5dc; end: 1025aa603;  */

void FUN_1025aa5dc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1025aa604; end: 1025aa60b;  */

undefined8 FUN_1025aa604(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1025aa60c; end: 1025ab7e3;  */

void FUN_1025aa60c(long *param_1,long param_2)

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
  long lVar20;
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
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  FUN_1025aba00();
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
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  *(undefined8 *)(param_2 + 0x78) = uStack_d0;
  *(undefined8 *)(param_2 + 0x80) = uStack_d8;
  *(undefined8 *)(param_2 + 0x88) = uStack_e0;
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
  func_0x000107c61174(uStack_d0);
  uVar15 = uStack_d8;
  func_0x000107c61174(uStack_d8);
  uVar16 = uStack_e0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126aab68;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar17 = auStack_70[0];
  func_0x000107c61174();
  uVar18 = 0x537765695670616d;
  func_0x000107c5fadc(0x537765695670616d,0xec00000065706f63);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar19);
  uVar18 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(uVar19);
  uVar18 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0adb00);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00c430);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efbb8d0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar18);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00c4d0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef16f90);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0adb20);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0adb40);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar18);
  func_0x000107c61174(uVar15);
  func_0x000107c61174();
  uVar18 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010ef10f50);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar18);
  lVar20 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0adb60);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(uVar18);
  func_0x000107c3e740(uVar19);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar20 != 0) {
    func_0x000107c61170(uVar17);
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
    *(long *)(param_2 + 0x90) = lVar20;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025aaf90);
  (*pcVar1)();
}



/* Entry: 1025ab7e4; end: 1025ab89f;  */

void FUN_1025ab7e4(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 1025ab8a0; end: 1025ab8f3;  */

void FUN_1025ab8a0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x90);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1025ab8f4; end: 1025ab8fb;  */

undefined8 FUN_1025ab8f4(void)

{
  return 0x1b;
}



/* Entry: 1025ab8fc; end: 1025ab97f;  */

void FUN_1025ab8fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1025aba50,param_2,FUN_1025aba54,param_2,FUN_1025aba7c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1025ab980; end: 1025ab9cf;  */

undefined8 FUN_1025ab980(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1025ab9d0; end: 1025ab9ff;  */

undefined ** FUN_1025ab9d0(void)

{
  return &PTR_DAT_113066d90;
}



/* Entry: 1025aba00; end: 1025aba1f;  */

void FUN_1025aba00(void)

{
  func_0x000107c61168(&PTR_PTR_112ea8ac8);
  return;
}



/* Entry: 1025aba20; end: 1025aba53;  */

undefined1  [16] FUN_1025aba20(void)

{
  return ZEXT816(0x1105243c8);
}



/* Entry: 1025aba54; end: 1025aba7b;  */

void FUN_1025aba54(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1025aba7c; end: 1025aba83;  */

undefined8 FUN_1025aba7c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1025aba84; end: 1025ac83b;  */

void FUN_1025aba84(long *param_1,long param_2)

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
  long lVar16;
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
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  FUN_1025aca38();
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
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
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
  func_0x000107c61174(uStack_98);
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar10 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar11 = uStack_b8;
  func_0x000107c61174();
  uVar12 = uStack_c0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126aab70;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar15 = 0x537765695670616d;
  uVar14 = uVar15;
  func_0x000107c5fadc(0x537765695670616d,0xec00000065706f63);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  func_0x000107c5fadc(0x537765695670616d,0xef73656369767265);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0adb80);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar14 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef28040);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar15);
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar15);
  uVar14 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0ad9f0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar15);
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar15);
  uVar14 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef27f20);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  lVar16 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar15);
  func_0x000107c61174();
  uVar14 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0adba0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(uVar14);
  func_0x000107c3e740(uVar15);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar16 != 0) {
    func_0x000107c61170(uVar13);
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
    *(long *)(param_2 + 0x70) = lVar16;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025ac1d0);
  (*pcVar1)();
}



/* Entry: 1025ac83c; end: 1025ac8d7;  */

void FUN_1025ac83c(void)

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
  return;
}



/* Entry: 1025ac8d8; end: 1025ac92b;  */

void FUN_1025ac8d8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1025ac92c; end: 1025ac933;  */

undefined8 FUN_1025ac92c(void)

{
  return 0x1b;
}



/* Entry: 1025ac934; end: 1025ac9b7;  */

void FUN_1025ac934(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1025aca88,param_2,FUN_1025aca8c,param_2,FUN_1025acab4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1025ac9b8; end: 1025aca07;  */

undefined8 FUN_1025ac9b8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1025aca08; end: 1025aca37;  */

void FUN_1025aca08(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110524428;
  return;
}



/* Entry: 1025aca38; end: 1025aca57;  */

void FUN_1025aca38(void)

{
  func_0x000107c61168(&PTR_PTR_112ea8c10);
  return;
}



/* Entry: 1025aca58; end: 1025aca8b;  */

undefined1  [16] FUN_1025aca58(void)

{
  return ZEXT816(0x110524468);
}



/* Entry: 1025aca8c; end: 1025acab3;  */

void FUN_1025aca8c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1025acab4; end: 1025acabb;  */

undefined8 FUN_1025acab4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1025acabc; end: 1025acca3;  */

/* WARNING: Possible PIC construction at 0x0001025acbf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025acc04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025acc14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025acc24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025acc34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025acc44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025acc54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025acc64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025acc74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025acc68) */
/* WARNING: Removing unreachable block (ram,0x0001025acc58) */
/* WARNING: Removing unreachable block (ram,0x0001025acc48) */
/* WARNING: Removing unreachable block (ram,0x0001025acc38) */
/* WARNING: Removing unreachable block (ram,0x0001025acc28) */
/* WARNING: Removing unreachable block (ram,0x0001025acc18) */
/* WARNING: Removing unreachable block (ram,0x0001025acc08) */
/* WARNING: Removing unreachable block (ram,0x0001025acbf8) */
/* WARNING: Removing unreachable block (ram,0x0001025acc78) */

void FUN_1025acabc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1105244d8;
  func_0x000107c613fc(&UNK_1105244d8,0xa8,7);
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
  uVar2 = 0x112ea8cd0;
  func_0x0001000285a8(0x112ea8cd0,&UNK_10dabd228);
  func_0x000107c613fc();
  pcVar3 = FUN_1025acdb4;
  func_0x0001000841fc(FUN_1025acdb4,puVar1,uVar2);
  func_0x000100084214("MapStartupPromptPluginRegistryServiceProvider",0x2d,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1025acca4; end: 1025acdb3;  */

void FUN_1025acca4(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  bVar1 = *param_2;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      FUN_1026cd894(param_3,param_4,param_5);
      pcVar2 = "MapFootstepsOnboardingPluginPluginProvider";
      uVar3 = 0x2a;
    }
    else {
      FUN_1026ce958(param_6,param_3,param_7,param_8,param_9,param_10,param_11,param_12,param_13,
                    param_14,param_15,param_16,param_17,param_18);
      pcVar2 = "ShareLocationOnboardingPluginPluginProvider";
      uVar3 = 0x2b;
      param_3 = param_6;
    }
  }
  else {
    if (bVar1 == 2) {
      FUN_1026d1b14(param_3,param_4,param_9,param_15,param_19);
      pcVar2 = "ShareBackBannerPluginPluginProvider";
    }
    else {
      FUN_1026cf994(param_3,param_4,param_12,param_20,param_21);
      pcVar2 = "MusicOnboardingPluginPluginProvider";
    }
    uVar3 = 0x23;
  }
  func_0x000100082720(pcVar2,uVar3,2);
  *param_1 = param_3;
  return;
}



/* Entry: 1025acdb4; end: 1025ace07;  */

void FUN_1025acdb4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1025acca4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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



/* Entry: 1025ace08; end: 1025acf4f;  */

/* WARNING: Possible PIC construction at 0x0001025acee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025acef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025acf00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025acf10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025acf20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025acf14) */
/* WARNING: Removing unreachable block (ram,0x0001025acf04) */
/* WARNING: Removing unreachable block (ram,0x0001025acef4) */
/* WARNING: Removing unreachable block (ram,0x0001025acee4) */
/* WARNING: Removing unreachable block (ram,0x0001025acf24) */

void FUN_1025ace08(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110524500;
  func_0x000107c613fc(&UNK_110524500,0x68,7);
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
  uVar2 = 0x112ea8cd8;
  func_0x0001000285a8(0x112ea8cd8,&UNK_10dabd230);
  func_0x000107c613fc();
  pcVar3 = FUN_1025ad044;
  func_0x0001000841fc(FUN_1025ad044,puVar1,uVar2);
  func_0x000100084214("MapStartupPromptTypeRegistryServiceProvider",0x2b,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1025acf50; end: 1025ad043;  */

void FUN_1025acf50(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  bVar1 = *param_2;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      FUN_1026cc928(param_3,param_4);
      pcVar2 = "ArrivalNotificationsUpsellPluginPluginProvider";
      uVar3 = 0x2e;
    }
    else {
      FUN_1026cd228(param_3,param_5);
      pcVar2 = "ExternalMusicPluginPluginProvider";
      uVar3 = 0x21;
    }
  }
  else if (bVar1 == 2) {
    FUN_1026ce1fc(param_6,param_7,param_8);
    pcVar2 = "MapFootstepsOnboardingPluginV2PluginProvider";
    uVar3 = 0x2c;
    param_3 = param_6;
  }
  else {
    if (bVar1 == 3) {
      FUN_1026d2fe0(param_6,param_7,param_9,param_10,param_11);
      pcVar2 = "ShareBackBannerPluginV2PluginProvider";
    }
    else {
      FUN_1026d089c(param_6,param_7,param_12,param_5,param_13);
      pcVar2 = "MusicOnboardingPluginV2PluginProvider";
    }
    uVar3 = 0x25;
    param_3 = param_6;
  }
  func_0x000100082720(pcVar2,uVar3,2);
  *param_1 = param_3;
  return;
}



/* Entry: 1025ad044; end: 1025ad07f;  */

void FUN_1025ad044(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1025acf50(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1025ad080; end: 1025ad42f;  */

/* WARNING: Possible PIC construction at 0x0001025ad1c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ad1d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ad1e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ad1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ad200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ad210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ad220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ad230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ad240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ad250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025ad244) */
/* WARNING: Removing unreachable block (ram,0x0001025ad234) */
/* WARNING: Removing unreachable block (ram,0x0001025ad224) */
/* WARNING: Removing unreachable block (ram,0x0001025ad214) */
/* WARNING: Removing unreachable block (ram,0x0001025ad204) */
/* WARNING: Removing unreachable block (ram,0x0001025ad1f4) */
/* WARNING: Removing unreachable block (ram,0x0001025ad1e4) */
/* WARNING: Removing unreachable block (ram,0x0001025ad1d4) */
/* WARNING: Removing unreachable block (ram,0x0001025ad1c4) */
/* WARNING: Removing unreachable block (ram,0x0001025ad254) */

void FUN_1025ad080(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110524528;
  func_0x000107c613fc(&UNK_110524528,0xb8,7);
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
  uVar2 = 0x112ea8ce0;
  func_0x0001000285a8(0x112ea8ce0,&UNK_10dabd248);
  func_0x000107c613fc();
  pcVar3 = FUN_1025ad430;
  func_0x0001000841fc(FUN_1025ad430,puVar1,uVar2);
  func_0x000100084214("MapViewLifecyclePluginRegistryServiceProvider",0x2d,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1025ad430; end: 1025ad487;  */

void FUN_1025ad430(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001025ad280(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0));
  return;
}



/* Entry: 1025ad488; end: 1025adf73;  */

void FUN_1025ad488(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d910;
  ppuVar4 = &PTR_DAT_113066d90;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112ea8ce8;
  func_0x0001000285a8(0x112ea8ce8,&UNK_10dabd250);
  func_0x0001000a6ee8(&UNK_110523688,
                      "MapAdSDKEventLoggingEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      FUN_1025adf74,param_2,uVar2,&UNK_110523688,&PTR_DAT_112ea6fd0);
  func_0x000107c61574(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110523748,
                      "MapAdTrackingServicesEntryPointWrapperScopeInitializationPluginKey",0x42,2,
                      0x1025adfa0,param_3,uVar2,&UNK_110523748,&PTR_DAT_112ea70b8);
  func_0x000107c61574(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105237e8,
                      "MapAdsPromotedPlaceAdResponseParserServicesProviderWrapperScopeInitializationPluginKey"
                      ,0x56,2,0x1025adfcc,param_4,uVar2,&UNK_1105237e8,&PTR_DAT_112ea71a8);
  func_0x000107c61574(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_110523888,
                      "MapAdsPromotedPlaceLoggerServiceProviderWrapperScopeInitializationPluginKey",
                      0x4b,2,0x1025adff8,param_5,uVar2,&UNK_110523888,&PTR_DAT_112ea72a0);
  func_0x000107c61574(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_110523928,
                      "MapAdsPromotedPlaceWorkflowImplEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4c,2,0x1025ae024,param_6,uVar2,&UNK_110523928,&PTR_DAT_112ea7378);
  func_0x000107c61574(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000a6ee8(&UNK_1105239c8,
                      "MapAdsStudyConfigurationServicesProviderWrapperScopeInitializationPluginKey",
                      0x4b,2,0x1025ae050,param_7,uVar2,&UNK_1105239c8,&PTR_DAT_112ea7490);
  func_0x000107c61574(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000a6ee8(&UNK_110523a48,"MapLensLauncherEntryPointWrapperScopeInitializationPluginKey",
                      0x3c,2,0x1025ae07c,param_8,uVar2,&UNK_110523a48,&PTR_DAT_112ea7568);
  func_0x000107c61574(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000a6ee8(&UNK_110523ac8,
                      "MapMemoriesPlaybackEntryPointWrapperScopeInitializationPluginKey",0x40,2,
                      0x1025ae0a8,param_9,uVar2,&UNK_110523ac8,&PTR_DAT_112ea7648);
  func_0x000107c61574(param_9);
  puVar3 = &UNK_110524550;
  func_0x000107c613fc(&UNK_110524550,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = param_10;
  *(undefined8 *)(puVar3 + 0x18) = param_11;
  *(undefined8 *)(puVar3 + 0x20) = param_12;
  *(undefined8 *)(puVar3 + 0x28) = param_13;
  *(undefined8 *)(puVar3 + 0x30) = param_14;
  func_0x000107c6157c();
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x0001000a6ee8(&UNK_110538e28,"MapStartupPromptManagerKey",0x1a,2,FUN_1025ae0d4,puVar3,uVar2,
                      &UNK_110538e28,&PTR_DAT_112eb6510);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110524578;
  func_0x000107c613fc(&UNK_110524578,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_15;
  *(undefined8 *)(puVar3 + 0x18) = param_16;
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x0001000a6ee8(&UNK_1105273a8,"MapViewScopeGraphBridgeScopeInitializationPluginKey",0x33,2,
                      0x1025ae11c,puVar3,uVar2,&UNK_1105273a8,&PTR_DAT_112eab3f0);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_17);
  func_0x0001000a6ee8(&UNK_110523b68,
                      "PromotedPlaceTrackerEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      FUN_1025ae15c,param_17,uVar2,&UNK_110523b68,&PTR_DAT_112ea7730);
  func_0x000107c61574(param_17);
  func_0x000107c6157c(param_18);
  func_0x0001000a6ee8(&UNK_110523be8,"SCFullMapScopeEntryPointWrapperScopeInitializationPluginKey",
                      0x3b,2,0x1025ae188,param_18,uVar2,&UNK_110523be8,&PTR_DAT_112ea7890);
  func_0x000107c61574(param_18);
  func_0x000107c6157c(param_19);
  func_0x0001000a6ee8(&UNK_110523c88,
                      "SCMapBitmojiLayerServiceProviderWrapperScopeInitializationPluginKey",0x43,2,
                      0x1025ae1b4,param_19,uVar2,&UNK_110523c88,&PTR_DAT_112ea7d30);
  func_0x000107c61574(param_19);
  func_0x000107c6157c(param_20);
  func_0x0001000a6ee8(&UNK_110523d28,
                      "SCMapDropsAnnotationServiceProviderWrapperScopeInitializationPluginKey",0x46,
                      2,0x1025ae1e0,param_20,uVar2,&UNK_110523d28,&PTR_DAT_112ea7e18);
  func_0x000107c61574(param_20);
  func_0x000107c6157c(param_21);
  func_0x0001000a6ee8(&UNK_110523da8,"SCMapDropsEntryPointWrapperScopeInitializationPluginKey",0x37,
                      2,0x1025ae20c,param_21,uVar2,&UNK_110523da8,&PTR_DAT_112ea7ef8);
  func_0x000107c61574(param_21);
  func_0x000107c6157c(param_22);
  func_0x0001000a6ee8(&UNK_110523e48,
                      "SCMapFocusViewLoggingServiceProviderWrapperScopeInitializationPluginKey",0x47
                      ,2,0x1025ae238,param_22,uVar2,&UNK_110523e48,&PTR_DAT_112ea8020);
  func_0x000107c61574(param_22);
  func_0x000107c6157c(param_23);
  func_0x0001000a6ee8(&UNK_110523ee8,
                      "SCMapGestureServicesEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      0x1025ae264,param_23,uVar2,&UNK_110523ee8,&PTR_DAT_112ea8108);
  func_0x000107c61574(param_23);
  func_0x000107c6157c(param_24);
  func_0x0001000a6ee8(&UNK_110523f88,
                      "SCMapLoggingServicesEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      0x1025ae290,param_24,uVar2,&UNK_110523f88,&PTR_DAT_112ea81f0);
  func_0x000107c61574(param_24);
  func_0x000107c6157c(param_25);
  func_0x0001000a6ee8(&UNK_110524028,
                      "SCMapMultiTrayServicesEntryPointWrapperScopeInitializationPluginKey",0x43,2,
                      0x1025ae2bc,param_25,uVar2,&UNK_110524028,&PTR_DAT_112ea8338);
  func_0x000107c61574(param_25);
  func_0x000107c6157c(param_26);
  func_0x0001000a6ee8(&UNK_1105240c8,
                      "SCMapPlacesBasemapServicesEntryPointWrapperScopeInitializationPluginKey",0x47
                      ,2,0x1025ae2e8,param_26,uVar2,&UNK_1105240c8,&PTR_DAT_112ea8430);
  func_0x000107c61574(param_26);
  func_0x000107c6157c(param_27);
  func_0x0001000a6ee8(&UNK_110524148,
                      "SCMapPlacesContentServicesMapSetupEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4f,2,0x1025ae314,param_27,uVar2,&UNK_110524148,&PTR_DAT_112ea8530);
  func_0x000107c61574(param_27);
  func_0x000107c6157c(param_28);
  func_0x0001000a6ee8(&UNK_1105241c8,
                      "SCMapSDKDataBridgingEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      0x1025ae340,param_28,uVar2,&UNK_1105241c8,&PTR_DAT_112ea8608);
  func_0x000107c61574(param_28);
  func_0x000107c6157c(param_29);
  func_0x0001000a6ee8(&UNK_110524248,"SCMapTapToPlayEntryPointWrapperScopeInitializationPluginKey",
                      0x3b,2,0x1025ae36c,param_29,uVar2,&UNK_110524248,&PTR_DAT_112ea8798);
  func_0x000107c61574(param_29);
  func_0x000107c6157c(param_30);
  func_0x0001000a6ee8(&UNK_1105242c8,
                      "SCMapTileEvictionEntryPointWrapperScopeInitializationPluginKey",0x3e,2,
                      0x1025ae398,param_30,uVar2,&UNK_1105242c8,&PTR_DAT_112ea88a0);
  func_0x000107c61574(param_30);
  func_0x000107c6157c(param_31);
  func_0x0001000a6ee8(&UNK_110524348,
                      "SCMapValisViewportPublishingEntryPointWrapperScopeInitializationPluginKey",
                      0x49,2,0x1025ae3c4,param_31,uVar2,&UNK_110524348,&PTR_DAT_112ea8978);
  func_0x000107c61574(param_31);
  func_0x000107c6157c(param_32);
  func_0x0001000a6ee8(&UNK_1105243e8,"SCMapViewEntryPointWrapperScopeInitializationPluginKey",0x36,2
                      ,0x1025ae3f0,param_32,uVar2,&UNK_1105243e8,&PTR_DAT_112ea8a60);
  func_0x000107c61574(param_32);
  puVar3 = &UNK_1105245a0;
  func_0x000107c613fc(&UNK_1105245a0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_15;
  *(undefined8 *)(puVar3 + 0x18) = param_33;
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_33);
  func_0x0001000a6ee8(&UNK_110523070,"SCMapViewScopedServicesScopeInitializationPluginKey",0x33,2,
                      FUN_1025ae4c4,puVar3,uVar2,&UNK_110523070,&PTR_DAT_112ea6df8);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_34);
  func_0x0001000a6ee8(&UNK_110524488,
                      "SCMapViewportItemsRegistryServicesEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4f,2,FUN_1025ae550,param_34,uVar2,&UNK_110524488,&PTR_DAT_112ea8ba8);
  func_0x000107c61574(param_34);
  uVar2 = 0x112ea8cf0;
  func_0x0001000285a8(0x112ea8cf0,&UNK_10dabd258);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCMapViewScopeInitializationPluginRegistryServiceProvider",0x39,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1025adf74; end: 1025ae0d3;  */

void FUN_1025adf74(void)

{
  FUN_1025ae4cc();
  return;
}



/* Entry: 1025ae0d4; end: 1025ae15b;  */

void FUN_1025ae0d4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1026c955c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100082720("MapStartupPromptManagerPluginProvider",0x25,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1025ae15c; end: 1025ae41b;  */

void FUN_1025ae15c(void)

{
  FUN_1025ae4cc();
  return;
}



/* Entry: 1025ae41c; end: 1025ae4c3;  */

void FUN_1025ae41c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105245c8;
  func_0x000107c613fc(&UNK_1105245c8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1025ae5b0;
  func_0x0001000823a8(FUN_1025ae5b0,puVar1);
  func_0x000100082720("SCMapViewScopedServicesScopeInitializationPluginProvider",0x38,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1025ae4c4; end: 1025ae4cb;  */

void FUN_1025ae4c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105245c8;
  func_0x000107c613fc(&UNK_1105245c8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1025ae5b0;
  func_0x0001000823a8(FUN_1025ae5b0,puVar3);
  func_0x000100082720("SCMapViewScopedServicesScopeInitializationPluginProvider",0x38,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1025ae4cc; end: 1025ae54f;  */

void FUN_1025ae4cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 1025ae550; end: 1025ae57b;  */

void FUN_1025ae550(void)

{
  FUN_1025ae4cc();
  return;
}



/* Entry: 1025ae57c; end: 1025ae583;  */

void FUN_1025ae57c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x1025aca88);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1025ae584; end: 1025ae5af;  */

void FUN_1025ae584(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1025ae5b0; end: 1025ae677;  */

void FUN_1025ae5b0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105230f8;
  func_0x000107c613fc(&UNK_1105230f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10258cd90;
  func_0x00010058fa64(FUN_10258cd90,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1025ae678; end: 1025aee6b;  */

void FUN_1025ae678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea8cf8,&UNK_10dabd260);
  puVar1 = &UNK_110524698;
  func_0x000107c613fc(&UNK_110524698,0x1a8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_45;
  *(undefined8 *)(puVar1 + 0x18) = param_46;
  *(undefined8 *)(puVar1 + 0x20) = param_47;
  *(undefined8 *)(puVar1 + 0x28) = param_49;
  *(undefined8 *)(puVar1 + 0x30) = param_48;
  *(undefined8 *)(puVar1 + 0x38) = param_1;
  *(undefined8 *)(puVar1 + 0x40) = param_2;
  *(undefined8 *)(puVar1 + 0x48) = param_20;
  *(undefined8 *)(puVar1 + 0x50) = param_24;
  *(undefined8 *)(puVar1 + 0x58) = param_28;
  *(undefined8 *)(puVar1 + 0x60) = param_32;
  *(undefined8 *)(puVar1 + 0x68) = param_9;
  *(undefined8 *)(puVar1 + 0x70) = param_18;
  *(undefined8 *)(puVar1 + 0x78) = param_26;
  *(undefined8 *)(puVar1 + 0x80) = param_38;
  *(undefined8 *)(puVar1 + 0x88) = param_8;
  *(undefined8 *)(puVar1 + 0x90) = param_6;
  *(undefined8 *)(puVar1 + 0x98) = param_12;
  *(undefined8 *)(puVar1 + 0xa0) = param_41;
  *(undefined8 *)(puVar1 + 0xa8) = param_42;
  *(undefined8 *)(puVar1 + 0xb0) = param_5;
  *(undefined8 *)(puVar1 + 0xb8) = param_17;
  *(undefined8 *)(puVar1 + 0xc0) = param_31;
  *(undefined8 *)(puVar1 + 200) = param_29;
  *(undefined8 *)(puVar1 + 0xd0) = param_50;
  *(undefined8 *)(puVar1 + 0xd8) = param_44;
  *(undefined8 *)(puVar1 + 0xe0) = param_21;
  *(undefined8 *)(puVar1 + 0xe8) = param_51;
  *(undefined8 *)(puVar1 + 0xf0) = param_4;
  *(undefined8 *)(puVar1 + 0xf8) = param_27;
  *(undefined8 *)(puVar1 + 0x100) = param_16;
  *(undefined8 *)(puVar1 + 0x108) = param_23;
  *(undefined8 *)(puVar1 + 0x110) = param_36;
  *(undefined8 *)(puVar1 + 0x118) = param_10;
  *(undefined8 *)(puVar1 + 0x120) = param_11;
  *(undefined8 *)(puVar1 + 0x128) = param_40;
  *(undefined8 *)(puVar1 + 0x130) = param_19;
  *(undefined8 *)(puVar1 + 0x138) = param_3;
  *(undefined8 *)(puVar1 + 0x140) = param_30;
  *(undefined8 *)(puVar1 + 0x148) = param_37;
  *(undefined8 *)(puVar1 + 0x150) = param_39;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_22;
  *(undefined8 *)(puVar1 + 0x168) = param_33;
  *(undefined8 *)(puVar1 + 0x170) = param_7;
  *(undefined8 *)(puVar1 + 0x178) = param_34;
  *(undefined8 *)(puVar1 + 0x180) = param_13;
  *(undefined8 *)(puVar1 + 0x188) = param_14;
  *(undefined8 *)(puVar1 + 400) = param_15;
  *(undefined8 *)(puVar1 + 0x198) = param_25;
  *(undefined8 *)(puVar1 + 0x1a0) = param_35;
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_35);
  func_0x0001000823a8(0x1025aeab0,puVar1);
  return;
}



/* Entry: 1025aee6c; end: 1025aee7b;  */

undefined1  [16] FUN_1025aee6c(void)

{
  return ZEXT816(0x1105246c0);
}



/* Entry: 1025aee7c; end: 1025af02f;  */

void FUN_1025aee7c(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1025af030; end: 1025af74f;  */

void FUN_1025af030(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
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
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  long unaff_x20;
  undefined8 uVar55;
  undefined8 auStack_70 [2];
  
  uVar33 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar34 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar35 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar36 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar37 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar39 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar38 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar53 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar46 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar42 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar43 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar49 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar52 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar48 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar51 = *(undefined8 *)(unaff_x20 + 200);
  uVar44 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar45 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar47 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar50 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar24 = *(undefined8 *)(unaff_x20 + 0x128);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x130);
  uVar25 = *(undefined8 *)(unaff_x20 + 0x138);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x140);
  uVar26 = *(undefined8 *)(unaff_x20 + 0x148);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x150);
  uVar27 = *(undefined8 *)(unaff_x20 + 0x158);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x160);
  uVar28 = *(undefined8 *)(unaff_x20 + 0x168);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x170);
  uVar29 = *(undefined8 *)(unaff_x20 + 0x178);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x180);
  uVar30 = *(undefined8 *)(unaff_x20 + 0x188);
  uVar13 = *(undefined8 *)(unaff_x20 + 400);
  uVar31 = *(undefined8 *)(unaff_x20 + 0x198);
  uVar54 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uVar55 = *param_2;
  func_0x0001000285a8(0x112ea8d08,&UNK_10dabd2d8);
  puVar32 = auStack_70;
  auStack_70[0] = uVar55;
  func_0x0001000838ec();
  FUN_10265c50c();
  func_0x000100082720("ChatCameraScopeExposerServiceProvider",0x25,2);
  func_0x00010265c43c();
  func_0x000100082720("ChatScopeExposerServiceProvider",0x1f,2);
  FUN_10265c4d8();
  func_0x000100082720("CreateChatScopeExposerServiceProvider",0x25,2);
  FUN_10265c540();
  func_0x000100082720("DirectionsSheetScopeExposerServiceProvider",0x2a,2);
  FUN_10265c4a4();
  func_0x000100082720("FriendProfileScopeExposerServiceProvider",0x28,2);
  uVar55 = uVar14;
  FUN_10264f28c(uVar14,uVar39);
  func_0x000100082720("MapFocusCardMusicServiceProvider",0x20,2);
  FUN_102642244(uVar38,uVar53,uVar15,uVar1,puVar32);
  func_0x000100082720("MapFocusCardsLoggerServiceProvider",0x22,2);
  uVar39 = uVar16;
  FUN_102653614(uVar16,uVar46,uVar17,uVar15,uVar1,uVar2,uVar18);
  func_0x000100082720("MapFocusCardsNavigationRouteHandlerServiceProvider",0x32,2);
  uVar40 = uVar42;
  FUN_10264ae10();
  func_0x000100082720("MapFocusCardsReactionBarServiceProvider",0x27,2);
  uVar41 = uVar19;
  FUN_10264cb04(uVar19,uVar43,uVar49,uVar38,uVar40,uVar52,uVar42,puVar32);
  func_0x000100082720("MapFocusCardsReactionBarPresenterServiceProvider",0x30,2);
  uVar42 = uVar20;
  FUN_102655ab0(uVar20,uVar15,uVar48,uVar18);
  func_0x000100082720("MapFocusCardsValisPublisherServiceProvider",0x2a,2);
  uVar43 = uVar15;
  FUN_1026560b4(uVar15,uVar51);
  func_0x000100082720("MapFriendStatusManagerServiceProvider",0x25,2);
  FUN_10265c5a8();
  func_0x000100082720("MusicTopicViewerScopeExposerServiceProvider",0x2b,2);
  FUN_10265c574();
  func_0x000100082720("PlusGiftingScopeExposerServiceProvider",0x26,2);
  uVar46 = uVar16;
  FUN_1025af750(uVar16,uVar3,uVar15,uVar1);
  func_0x000100082720("MapFocusCardViewportScopedFactoryServiceProvider",0x30,2);
  FUN_10265c470();
  func_0x000100082720("SnapshotScopeExposerServiceProvider",0x23,2);
  uVar48 = uVar38;
  FUN_10264f614(uVar38,uVar46,uVar15,uVar1,puVar32);
  func_0x000100082720("MapFocusCardsBasemapManagerServiceProvider",0x2a,2);
  uVar49 = uVar48;
  FUN_102638144(uVar48,uVar50,uVar43,uVar21,uVar39,uVar42);
  func_0x000100082720("MapFocusCardsBusinessLogicServiceProvider",0x29,2);
  uVar50 = uVar49;
  FUN_102650cd0(uVar49,uVar4,uVar22,uVar20,uVar21,uVar15,uVar5,uVar18);
  func_0x000100082720("MapFocusCardsDataUpdaterServiceProvider",0x27,2);
  uVar51 = uVar33;
  FUN_10264383c(uVar33,uVar23,uVar34,uVar6,uVar19,uVar35,uVar24,uVar50,uVar36,uVar7,uVar55,uVar37,
                uVar25,uVar22,uVar38,uVar21,uVar15,uVar8,uVar26,uVar44,uVar9,uVar45,puVar32,uVar27,
                uVar47);
  func_0x000100082720("MapFocusCardsRouterServiceProvider",0x22,2);
  uVar52 = uVar16;
  FUN_102638de8(uVar16,uVar55,uVar50,uVar4,uVar20,uVar38,uVar10,uVar53,uVar17,uVar21,uVar15,uVar8,
                uVar1,uVar39,uVar28,uVar11,puVar32,uVar29,uVar5,uVar2,uVar18);
  func_0x000100082720("MapFocusCardsDataProviderServiceProvider",0x28,2);
  uVar53 = uVar48;
  func_0x00010265926c(uVar48,uVar49,uVar16,uVar12,uVar30,uVar13,uVar52,uVar14,uVar38,uVar3,uVar41,
                      uVar1,uVar31,uVar39,uVar51,puVar32,uVar54,uVar2,uVar18);
  func_0x000107c61574(uVar52);
  func_0x000107c61574(uVar51);
  func_0x000107c61574(uVar50);
  func_0x000107c61574(uVar49);
  func_0x000107c61574(uVar48);
  func_0x000107c61574(uVar47);
  func_0x000107c61574(uVar46);
  func_0x000107c61574(uVar45);
  func_0x000107c61574(uVar44);
  func_0x000107c61574(uVar43);
  func_0x000107c61574(uVar42);
  func_0x000107c61574(uVar41);
  func_0x000107c61574(uVar40);
  func_0x000107c61574(uVar39);
  func_0x000107c61574(uVar38);
  func_0x000107c61574(uVar55);
  func_0x000107c61574(uVar37);
  func_0x000107c61574(uVar36);
  func_0x000107c61574(uVar35);
  func_0x000107c61574(uVar34);
  func_0x000107c61574(uVar33);
  func_0x000107c61574(puVar32);
  func_0x000100082720("MapFocusCardsPresenterEntryPointProvider",0x28,2);
  *param_1 = uVar53;
  return;
}



/* Entry: 1025af750; end: 1025af8b7;  */

void FUN_1025af750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea8d10,&UNK_10dabd2e0);
  puVar1 = &UNK_1105247b0;
  func_0x000107c613fc(&UNK_1105247b0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(0x1025af7f4,puVar1);
  return;
}



/* Entry: 1025af8b8; end: 1025af8c7;  */

undefined1  [16] FUN_1025af8b8(void)

{
  return ZEXT816(0x1105247d8);
}



/* Entry: 1025af8c8; end: 1025af903;  */

void FUN_1025af8c8(void)

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



/* Entry: 1025af904; end: 1025af9f3;  */

void FUN_1025af904(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = &uStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *param_2;
  uVar7 = param_2[1];
  func_0x0001000285a8(0x112ea8d20,&UNK_10dabd330);
  uStack_70 = uVar6;
  uStack_68 = uVar7;
  func_0x0001000838ec(&uStack_70);
  FUN_102657a3c(uVar4,uVar5,uVar1,uVar2,puVar3);
  func_0x000100082720("MapFocusCardCameraProviderServiceProvider",0x29,2);
  uVar5 = uVar4;
  FUN_1026588dc(uVar4,uVar2,uVar1);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar3);
  func_0x000100082720("MapFocusCardViewportTargetEntryPointProvider",0x2c,2);
  *param_1 = uVar5;
  return;
}



/* Entry: 1025af9f4; end: 1025afa5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025af9f4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1025afde8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ea8d30) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1025afa60; end: 1025afacb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025afa60(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea8d30) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025afacc; end: 1025afb2b; -[_TtC47MapAddressSelectionScopedFactoryServiceProvider35SCMapAddressSelectionScopedServices init] */

void FUN_1025afacc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAddressSelectionScopedFactoryServiceProvider.SCMapAddressSelectionScopedServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025afaf8);
  (*pcVar1)();
}



/* Entry: 1025afb2c; end: 1025afb3b; -[_TtC47MapAddressSelectionScopedFactoryServiceProvider35SCMapAddressSelectionScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025afb2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea8d30));
  return;
}



/* Entry: 1025afb3c; end: 1025afba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025afb3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105249d8;
  func_0x000107c613fc(&UNK_1105249d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1025afe80,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1025afba8; end: 1025afc43;  */

void FUN_1025afba8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105248e8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105248e8;
  return;
}



/* Entry: 1025afc44; end: 1025afc7b;  */

void FUN_1025afc44(long *param_1)

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



/* Entry: 1025afc7c; end: 1025afc83;  */

undefined8 FUN_1025afc7c(void)

{
  return 0x1b;
}



/* Entry: 1025afc84; end: 1025afdb7;  */

void FUN_1025afc84(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110524a00;
  func_0x000107c613fc(&UNK_110524a00,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1025afe58;
  func_0x00010058fa64(FUN_1025afe58,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1025afdb8; end: 1025afde7;  */

undefined ** FUN_1025afdb8(void)

{
  return &PTR_DAT_113066cd0;
}



/* Entry: 1025afde8; end: 1025afe07;  */

void FUN_1025afde8(void)

{
  func_0x000107c61168(&PTR_PTR_11284f9e8);
  return;
}



/* Entry: 1025afe08; end: 1025afe57;  */

undefined1  [16] FUN_1025afe08(void)

{
  return ZEXT816(0x110524938);
}



/* Entry: 1025afe58; end: 1025afe7f;  */

void FUN_1025afe58(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1025afe80; end: 1025afe83;  */

void FUN_1025afe80(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1025afe84; end: 1025b014b;  */

void FUN_1025afe84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea8d98,&UNK_10dabd570);
  puVar1 = &UNK_110524a40;
  func_0x000107c613fc(&UNK_110524a40,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  *(undefined8 *)(puVar1 + 0x30) = param_10;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_14;
  *(undefined8 *)(puVar1 + 0x48) = param_11;
  *(undefined8 *)(puVar1 + 0x50) = param_13;
  *(undefined8 *)(puVar1 + 0x58) = param_9;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_7;
  *(undefined8 *)(puVar1 + 0x70) = param_4;
  *(undefined8 *)(puVar1 + 0x78) = param_5;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1025b014c,puVar1);
  return;
}



/* Entry: 1025b014c; end: 1025b0187;  */

void FUN_1025b014c(void)

{
  long unaff_x20;
  
  func_0x0001025affcc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 1025b0188; end: 1025b0197;  */

undefined1  [16] FUN_1025b0188(void)

{
  return ZEXT816(0x110524a68);
}



/* Entry: 1025b0198; end: 1025b05ef;  */

void FUN_1025b0198(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 auStack_70 [2];
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112ea8da8,&UNK_10dabd5c0);
  puVar1 = auStack_70;
  auStack_70[0] = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1025b2610();
  func_0x000100082720("SCMapFocusedDropScopeExposerSubjectServiceProvider",0x32,2);
  puVar3 = puVar2;
  FUN_1025b269c();
  func_0x000100082720("SCMapFocusedDropScopeExposerObservableServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1025afc44;
  func_0x0001000823a8(FUN_1025afc44,0);
  func_0x000100082720("SCMapAddressSelectionScopedServicesCleanupRelayServiceProvider",0x3e,2);
  puVar5 = puVar2;
  FUN_1025b24c4();
  func_0x000100082720("MapAddressSelectionScopeGraphBridgeServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112ea8db0,&UNK_10dabd5d0);
  puVar6 = &UNK_110524ab0;
  func_0x000107c613fc(&UNK_110524ab0,0x90,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  *(undefined8 *)(puVar6 + 0x38) = param_7;
  *(undefined8 *)(puVar6 + 0x40) = param_8;
  *(undefined8 *)(puVar6 + 0x48) = param_9;
  *(undefined8 *)(puVar6 + 0x50) = param_10;
  *(undefined8 *)(puVar6 + 0x58) = param_11;
  *(undefined8 *)(puVar6 + 0x60) = param_12;
  *(undefined8 *)(puVar6 + 0x68) = param_13;
  *(undefined8 *)(puVar6 + 0x70) = param_14;
  *(undefined8 *)(puVar6 + 0x78) = param_15;
  *(undefined8 *)(puVar6 + 0x80) = param_16;
  *(undefined8 **)(puVar6 + 0x88) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x1025b06c4;
  func_0x0001000823a8(0x1025b06c4,puVar6);
  func_0x000100082720("SCMapAddressSelectionEntryPointWrapperServiceProvider",0x35,2);
  func_0x0001000285a8(0x112ea8db8,&UNK_10dabd5d8);
  puVar6 = &UNK_110524ad8;
  func_0x000107c613fc(&UNK_110524ad8,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar10;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  pcVar7 = FUN_1025b0708;
  func_0x0001000823a8(FUN_1025b0708,puVar6);
  func_0x000100082720("SCMapAddressSelectionScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112ea8d38,&UNK_10dabd350);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x1025b0714;
  func_0x0001000823a8(0x1025b0714,pcVar7);
  func_0x000100082720("SCMapAddressSelectionScopeInitializationServiceProvider",0x37,2);
  func_0x0001000285a8(0x112ea8d28,&UNK_10dabd340);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1025b071c;
  func_0x0001000823a8(0x1025b071c,uVar8);
  func_0x000100082720("SCMapAddressSelectionScopedServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_110524b00;
  func_0x000107c613fc(&UNK_110524b00,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x1025b0724;
  func_0x0001000823a8(0x1025b0724,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCMapAddressSelectionScopeEntryPointProvider",0x2c,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1025b05f0; end: 1025b0707;  */

void FUN_1025b05f0(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1025b0708; end: 1025b072b;  */

void FUN_1025b0708(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1025b1c2c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCMapAddressSelectionScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 1025b072c; end: 1025b19bb;  */

void FUN_1025b072c(long *param_1,long param_2)

{
  undefined8 uVar1;
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
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
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
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  FUN_1025b1b7c();
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
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  *(undefined8 *)(param_2 + 0x78) = uStack_d0;
  *(undefined8 *)(param_2 + 0x80) = uStack_d8;
  *(undefined8 *)(param_2 + 0x88) = uStack_e0;
  func_0x0001000285a8(0x112ea7848,&UNK_10dabb4a8);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
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
  uVar12 = uStack_d0;
  func_0x000107c61174(uStack_d0);
  uVar13 = uStack_d8;
  func_0x000107c61174(uStack_d8);
  uVar14 = uStack_e0;
  func_0x000107c61174();
  uVar17 = uStack_e8;
  func_0x000107c6157c(uStack_e8);
  func_0x00010017da58();
  puVar15 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar17);
  *(undefined **)(param_2 + 0x18) = puVar15;
  puVar15 = PTR_PTR_1126aab78;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar15;
  func_0x000107c61174();
  uVar16 = auStack_70[0];
  func_0x000107c61174();
  uVar17 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0af630);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174(puVar15);
  uVar17 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000010;
  uVar17 = uVar19;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef27ea0);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0x537765695670616d;
  func_0x000107c5fadc(0x537765695670616d,0xef73656369767265);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar17);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef27f20);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0x65537361696c6570;
  func_0x000107c5fadc(0x65537361696c6570,0xee00736563697672);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar17);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef28040);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar17);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar19);
  uVar17 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0af650);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar17);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar19);
  uVar17 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0ad710);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0ad8b0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c3e740(uVar19);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar1);
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
  func_0x000107c61574(uStack_e8);
  *param_1 = param_2;
  return;
}



/* Entry: 1025b19bc; end: 1025b1a6f;  */

void FUN_1025b19bc(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 1025b1a70; end: 1025b1a77;  */

undefined8 FUN_1025b1a70(void)

{
  return 0x1b;
}



/* Entry: 1025b1a78; end: 1025b1afb;  */

void FUN_1025b1a78(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1025b1bbc,param_2,FUN_1025b1bc0,param_2,FUN_1025b1be8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1025b1afc; end: 1025b1b4b;  */

undefined8 FUN_1025b1afc(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1025b1b4c; end: 1025b1b7b;  */

undefined ** FUN_1025b1b4c(void)

{
  return &PTR_DAT_113066cd0;
}



/* Entry: 1025b1b7c; end: 1025b1b9b;  */

void FUN_1025b1b7c(void)

{
  func_0x000107c61168(&PTR_PTR_112ea8e28);
  return;
}



/* Entry: 1025b1b9c; end: 1025b1bbf;  */

undefined1  [16] FUN_1025b1b9c(void)

{
  return ZEXT816(0x110524b58);
}



/* Entry: 1025b1bc0; end: 1025b1be7;  */

void FUN_1025b1bc0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1025b1be8; end: 1025b1bef;  */

undefined8 FUN_1025b1be8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}


