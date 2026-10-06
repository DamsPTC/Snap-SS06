/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100768f90; end: 100768faf;  */

void FUN_100768f90(void)

{
  func_0x000107c61168(&PTR_PTR_112f55618);
  return;
}



/* Entry: 100768fb0; end: 100768fb7;  */

void FUN_100768fb0(undefined8 *param_1)

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



/* Entry: 100768fb8; end: 10076900b;  */

void FUN_100768fb8(undefined8 *param_1)

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



/* Entry: 10076900c; end: 100769013;  */

void FUN_10076900c(long *param_1)

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
  FUN_1002877f8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_1007690f8(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_100769174();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_10076919c();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 100769014; end: 1007690f7;  */

void FUN_100769014(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_1002877f8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_1007690f8(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_100769174();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_10076919c();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 1007690f8; end: 100769173;  */

void FUN_1007690f8(undefined8 param_1)

{
  if (lRam0000000112f5db58 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e75e168);
  return;
}



/* Entry: 100769174; end: 10076919b;  */

void FUN_100769174(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10076919c; end: 1007693e3;  */

undefined * FUN_10076919c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1000285a8(0x112f5dae0,&UNK_10dbb8840);
  func_0x000107c613fc();
  puVar1 = &UNK_103374bb8;
  FUN_1000bdd8c(&UNK_103374bb8,0);
  FUN_1000285a8(0x112f5dae8,&UNK_10dbb8848);
  func_0x000107c613fc();
  puVar2 = &UNK_103374c8c;
  FUN_1000bdd8c(&UNK_103374c8c,0);
  puVar3 = &UNK_1106461f0;
  func_0x000107c613fc(&UNK_1106461f0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  FUN_1000285a8(0x112f5daf0,&UNK_10dbb8850);
  func_0x000107c613fc();
  func_0x000107c61174(uVar8);
  puVar4 = &UNK_103374dc4;
  FUN_1000bdd8c(&UNK_103374dc4,puVar3);
  FUN_1000285a8(0x112f5daf8,&UNK_10dbb8858);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar1);
  puVar3 = &UNK_103374dcc;
  FUN_1000bdd8c(&UNK_103374dcc,puVar1);
  FUN_1000285a8(0x112f5db00,&UNK_10dbb8860);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar1);
  puVar5 = &UNK_103374e08;
  FUN_1000bdd8c(&UNK_103374e08,puVar1);
  FUN_1000285a8(0x112f5db08,&UNK_10dbb8868);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar2);
  puVar6 = &UNK_103374e44;
  FUN_1000bdd8c(&UNK_103374e44,puVar2);
  FUN_1000285a8(0x112f5db10,&UNK_10dbb8870);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar2);
  puVar7 = &UNK_103374e80;
  FUN_1000bdd8c(&UNK_103374e80,puVar2);
  uVar8 = 0;
  FUN_100287884(0);
  func_0x000107c610f8();
  FUN_1007694c0(puVar4,puVar3,puVar5,puVar6,puVar7,uVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return puVar4;
}



/* Entry: 1007693e4; end: 1007694b3;  */

void FUN_1007693e4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007694b4; end: 1007694bf;  */

undefined ** FUN_1007694b4(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 1007694c0; end: 10076955b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007694c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113070ea8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113070eb0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113070eb8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113070ec0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113070ec8) = param_5;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10076955c; end: 100769587;  */

void FUN_10076955c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100769588; end: 10076958f;  */

void FUN_100769588(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xa8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100769590; end: 1007695e3;  */

void FUN_100769590(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xa8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007695e4; end: 100769b83;  */

void FUN_1007695e4(long *param_1,long param_2)

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
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
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
  func_0x0001005c6b20();
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
  *(undefined8 *)(param_2 + 0x90) = uStack_e8;
  *(undefined8 *)(param_2 + 0x98) = uStack_f0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_f8;
  FUN_1000285a8(0x112e4cd28,&UNK_10daaf350);
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
  func_0x000107c61174();
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c61174();
  uVar15 = uStack_e8;
  func_0x000107c61174();
  uVar16 = uStack_f0;
  func_0x000107c61174();
  uVar17 = uStack_f8;
  func_0x000107c61174();
  uVar18 = uStack_100;
  func_0x000107c6157c(uStack_100);
  FUN_10017da58();
  puVar19 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar18);
  *(undefined **)(param_2 + 0x18) = puVar19;
  FUN_10076d254();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = auStack_70[0];
  func_0x000107c61174();
  uVar21 = uVar20;
  FUN_10076d2f0();
  *(undefined8 *)(param_2 + 0x10) = uVar21;
  uVar18 = uVar21;
  func_0x000107c6157c();
  func_0x00010076d3a4();
  func_0x000107c61574(uVar21);
  func_0x000107c61170(uVar20);
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
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61574(uStack_100);
  *(undefined8 *)(param_2 + 0xa8) = uVar18;
  *param_1 = param_2;
  return;
}



/* Entry: 100769b84; end: 100769bcf;  */

void FUN_100769b84(void)

{
  long unaff_x20;
  
  FUN_1007695e4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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



/* Entry: 100769bd0; end: 100769bd7;  */

void FUN_100769bd0(undefined8 *param_1)

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



/* Entry: 100769bd8; end: 100769c2b;  */

void FUN_100769bd8(undefined8 *param_1)

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



/* Entry: 100769c2c; end: 100769c37;  */

void FUN_100769c2c(undefined8 *param_1)

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
  FUN_10033cf40();
  func_0x000107c613fc();
  func_0x000100769ccc(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100769c38; end: 100769deb;  */

void FUN_100769c38(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10033cf40();
  func_0x000107c613fc();
  func_0x000100769ccc(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 100769dec; end: 100769e67;  */

void FUN_100769dec(undefined8 param_1)

{
  if (lRam0000000112f2dd80 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e73c8f0);
  return;
}



/* Entry: 100769e68; end: 100769e9b;  */

void FUN_100769e68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 100769e9c; end: 100769f2f;  */

undefined * FUN_100769e9c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  FUN_1000285a8(0x112f2dd50,&UNK_10db72320);
  func_0x000107c613fc();
  func_0x000107c6157c();
  puVar1 = &UNK_102fb3224;
  FUN_1000bdd8c(&UNK_102fb3224);
  puVar2 = puVar1;
  FUN_1003a5b88();
  uVar3 = 0;
  FUN_10033cfcc(0);
  func_0x000107c610f8();
  FUN_10076a1f0(puVar2,uVar3);
  func_0x000107c61574(puVar1);
  return puVar2;
}



/* Entry: 100769f30; end: 100769fd3; -[SCNDeltaforceHeaders initWithHeaders:] */

undefined1 * FUN_100769f30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126e7e28;
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



/* Entry: 100769fd4; end: 100769fdf;  */

void FUN_100769fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 100769fe0; end: 10076a173; +[SCNDeltaforceDeltaForceSyncClient newClientWithHeaders:authContextDelegate:dispatchQueue:headers:] */

undefined8 FUN_100769fe0(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [192];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100769fd4();
  FUN_10076a174();
  func_0x000107c61174(in_x4);
  func_0x000107c61174(in_x5);
  FUN_10076a17c(auStack_120);
  FUN_100459fd0(auStack_130,in_x3);
  FUN_10049e05c(auStack_140,in_x4);
  FUN_10076a5a0(auStack_160,in_x5);
  FUN_10076a814(&uStack_60,auStack_120,auStack_130,auStack_140,auStack_160);
  FUN_10076a7d8(auStack_160);
  FUN_100554470(auStack_140);
  func_0x00010048b850(auStack_130);
  FUN_100469c34(auStack_120);
  FUN_10076e358(uStack_60,uStack_58);
  uVar1 = uStack_60;
  func_0x000107c61180();
  func_0x00010076e508(&uStack_60);
  func_0x000107c61170(in_x5);
  func_0x00010076e548();
  func_0x00010076e550();
  func_0x00010076e558();
  return uVar1;
}



/* Entry: 10076a174; end: 10076a17b;  */

void FUN_10076a174(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10076a17c; end: 10076a1e7;  */

void FUN_10076a17c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_e0 [192];
  
  func_0x000107c44584();
  func_0x000107c61180();
  FUN_10061b09c(auStack_e0);
  FUN_10076a4ac(param_1,auStack_e0);
  FUN_100469c34(auStack_e0);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10076a1e8; end: 10076a1ef; -[SCNDeltaforceDeltaForceConfiguration grpcParameters] */

undefined8 FUN_10076a1e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10076a1f0; end: 10076a23b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10076a1f0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113070f30) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10076a23c; end: 10076a26f;  */

void FUN_10076a23c(void)

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



/* Entry: 10076a270; end: 10076a277;  */

void FUN_10076a270(undefined8 *param_1)

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



/* Entry: 10076a278; end: 10076a2cb;  */

void FUN_10076a278(undefined8 *param_1)

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



/* Entry: 10076a2cc; end: 10076a2d3;  */

void FUN_10076a2cc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_10032feb4();
  func_0x000107c613fc();
  FUN_10076a348(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 10076a2d4; end: 10076a347;  */

void FUN_10076a2d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_10032feb4();
  func_0x000107c613fc();
  FUN_10076a348(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 10076a348; end: 10076a4ab;  */

void FUN_10076a348(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126ac530;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 10076a4ac; end: 10076a59f;  */

void FUN_10076a4ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar3 = param_2[4];
  uVar2 = param_2[3];
  uVar1 = *(undefined4 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 5) = uVar1;
  param_1[4] = uVar3;
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 9) = 0;
  if (*(char *)(param_2 + 9) == '\x01') {
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
    param_1[6] = uVar2;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[6] = 0;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  uVar2 = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[10] = uVar2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (*(char *)(param_2 + 0xe) == '\x01') {
    uVar3 = param_2[0xc];
    uVar2 = param_2[0xb];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar3;
    param_1[0xb] = uVar2;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xb] = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  uVar3 = param_2[0x10];
  uVar2 = param_2[0xf];
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x10] = uVar3;
  param_1[0xf] = uVar2;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_2 + 0x14) == '\x01') {
    uVar3 = param_2[0x12];
    uVar2 = param_2[0x11];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar3;
    param_1[0x11] = uVar2;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x11] = 0;
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  uVar3 = param_2[0x16];
  uVar2 = param_2[0x15];
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  param_1[0x16] = uVar3;
  param_1[0x15] = uVar2;
  return;
}



/* Entry: 10076a5a0; end: 10076a5f7;  */

void FUN_10076a5a0(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  func_0x000107c44d80();
  func_0x000107c61180();
  FUN_10076a600(auStack_40);
  FUN_10076a77c(param_1,auStack_40);
  FUN_10076a7d8(auStack_40);
  FUN_1004a2120();
  return;
}



/* Entry: 10076a5f8; end: 10076a5ff; -[SCNDeltaforceHeaders headers] */

undefined8 FUN_10076a5f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10076a600; end: 10076a677;  */

void FUN_10076a600(undefined8 *param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    FUN_1004a1ac4(&uStack_40,param_2);
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    param_1[2] = uStack_30;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    func_0x0001004a21bc(&uStack_40);
  }
  FUN_1004a2120();
  return;
}



/* Entry: 10076a678; end: 10076a75b; -[SCLensFavoritesNotificationServiceProvider provide] */

void FUN_10076a678(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126cd500;
  func_0x000107c610f4(PTR_PTR_1126cd500);
  func_0x000107c472ac();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10076a75c; end: 10076a77b;  */

void FUN_10076a75c(void)

{
  return;
}



/* Entry: 10076a77c; end: 10076a7ab;  */

undefined1 * FUN_10076a77c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  func_0x00010076a768();
  return param_1;
}



/* Entry: 10076a7ac; end: 10076a7d7;  */

void FUN_10076a7ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10076a7d8; end: 10076a7f7;  */

void FUN_10076a7d8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0001004a21bc();
  }
  return;
}



/* Entry: 10076a7f8; end: 10076a813;  */

void FUN_10076a7f8(void)

{
  return;
}



/* Entry: 10076a814; end: 10076a8a7;  */

void FUN_10076a814(void)

{
  long lVar1;
  long *in_x3;
  long lVar2;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  
  FUN_10076a7f8();
  FUN_10076a8a8();
  func_0x0001004a21bc(auStack_68);
  if ((char)in_x3[3] == '\x01') {
    lVar1 = in_x3[1];
    for (lVar2 = *in_x3; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
      FUN_10076a9c0(uStack_50,lVar2);
    }
  }
  FUN_10076aaf0();
  FUN_10076e31c();
  return;
}



/* Entry: 10076a8a8; end: 10076a8b3;  */

void FUN_10076a8a8(void)

{
  undefined1 uStack_11;
  
  FUN_10076a8b4(&stack0x00000020,&uStack_11,&stack0x00000008);
  return;
}



/* Entry: 10076a8b4; end: 10076a913;  */

void FUN_10076a8b4(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010054fcb8();
  FUN_10054fd50();
  FUN_10076a934();
  FUN_10076a97c(uStack_30,param_2);
  func_0x00010054ff60();
  func_0x00010076a9b0();
  func_0x00010054ff88(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001053a6b34();
  func_0x00010076a9b0();
  func_0x0001053a6ad0();
  pcStack_48 = FUN_10076a914;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10076a8b4(&uStack_51,uStack_30);
  return;
}



/* Entry: 10076a914; end: 10076a933;  */

void FUN_10076a914(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10076a8b4(&uStack_11,param_1);
  return;
}



/* Entry: 10076a934; end: 10076a953;  */

void FUN_10076a934(void)

{
  func_0x00010054fd5c();
  FUN_10076a954();
  FUN_10054fdb8();
  return;
}



/* Entry: 10076a954; end: 10076a97b;  */

void FUN_10076a954(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 < (undefined8 *)0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_DAT_1107eb548;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar1;
  param_1[5] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10076a97c; end: 10076a9bf;  */

void FUN_10076a97c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_1107eb548;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar1;
  param_1[5] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10076a9c0; end: 10076a9fb;  */

long FUN_10076a9c0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x0001053a6320();
    lVar2 = uVar1 + 0x30;
  }
  else {
    lVar2 = param_1;
    FUN_10076aa4c();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x30;
}



/* Entry: 10076a9fc; end: 10076aa4b;  */

ulong FUN_10076a9fc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  if (param_2 < 0x555555555555556) {
    uVar1 = (param_1[2] - *param_1) / 0x30;
    uVar3 = uVar1 * 2;
    if (uVar3 < param_2 || uVar3 - param_2 == 0) {
      uVar3 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar1) {
      uVar3 = 0x555555555555555;
    }
    return uVar3;
  }
  func_0x000104bff778();
  plVar2 = param_1;
  FUN_10076a9fc();
  func_0x0001004a1c90(auStack_68,plVar2,(param_1[1] - *param_1) / 0x30,param_1 + 2);
  FUN_1004a2588(lStack_58,param_2);
  lStack_58 = lStack_58 + 0x30;
  FUN_1004a1d78(param_1,auStack_68);
  uVar3 = param_1[1];
  FUN_1004a1f08(auStack_68);
  return uVar3;
}



/* Entry: 10076aa4c; end: 10076aaef;  */

long FUN_10076aa4c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_10076a9fc(param_1,(param_1[1] - *param_1) / 0x30 + 1);
  func_0x0001004a1c90(auStack_58,plVar1,(param_1[1] - *param_1) / 0x30,param_1 + 2);
  FUN_1004a2588(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x30;
  FUN_1004a1d78(param_1,auStack_58);
  lVar2 = param_1[1];
  FUN_1004a1f08(auStack_58);
  return lVar2;
}



/* Entry: 10076aaf0; end: 10076ab07;  */

void FUN_10076aaf0(void)

{
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [16];
  undefined4 auStack_68 [4];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [8];
  
  FUN_10055c758(auStack_48);
  auStack_68[0] = 1;
  FUN_10044fc98();
  FUN_10076ac3c(auStack_58,"deltaforce",auStack_68,unaff_x21);
  FUN_10054fd30(auStack_68);
  FUN_10076ad8c(auStack_78,auStack_58,auStack_48);
  FUN_10076e140(&uStack_90,auStack_78,auStack_68,auStack_58);
  unaff_x22[1] = uStack_88;
  *unaff_x22 = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  FUN_10076e2d4(&uStack_90);
  func_0x00010076e2f8(auStack_78);
  FUN_100558bb4(auStack_68);
  FUN_100450be4(auStack_58);
  func_0x00010055f5a0(auStack_48);
  return;
}



/* Entry: 10076ab08; end: 10076ac27;  */

void FUN_10076ab08(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [16];
  undefined4 auStack_68 [4];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [8];
  
  uVar1 = param_2;
  FUN_10055c758(auStack_48);
  auStack_68[0] = 1;
  FUN_10044fc98();
  FUN_10076ac3c(auStack_58,"deltaforce",auStack_68,uVar1);
  FUN_10054fd30(auStack_68,param_4);
  FUN_10076ad8c(auStack_78,auStack_58,auStack_48,param_3,param_2,param_5);
  FUN_10076e140(&uStack_90,auStack_78,auStack_68,auStack_58);
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  FUN_10076e2d4(&uStack_90);
  func_0x00010076e2f8(auStack_78);
  FUN_100558bb4(auStack_68);
  FUN_100450be4(auStack_58);
  func_0x00010055f5a0(auStack_48);
  return;
}



/* Entry: 10076ac28; end: 10076ac3b;  */

long FUN_10076ac28(void)

{
  long unaff_x29;
  
  return unaff_x29 + -1;
}



/* Entry: 10076ac3c; end: 10076ac57;  */

void FUN_10076ac3c(void)

{
  FUN_10076ac28();
  FUN_10076ac58();
  return;
}



/* Entry: 10076ac58; end: 10076accb;  */

undefined1 *
FUN_10076ac58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 auStack_48 [8];
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010054fcb8();
  FUN_10054fd50();
  FUN_100450688();
  FUN_10076ad40(puStack_40,param_2,param_3,param_4);
  func_0x00010054ff60();
  func_0x000100450b64();
  func_0x00010054ff88(uStack_38);
  if ((bool)in_ZR) {
    return puStack_40;
  }
  func_0x000107c60e78();
  func_0x0001053a6b34();
  func_0x000100450b64();
  func_0x0001053a6ad0();
  return auStack_48;
}



/* Entry: 10076accc; end: 10076acd7;  */

undefined1 * FUN_10076accc(void)

{
  return &stack0x00000008;
}



/* Entry: 10076acd8; end: 10076ad3f;  */

void FUN_10076acd8(void)

{
  undefined1 auStack_48 [24];
  
  FUN_10076accc();
  FUN_10002b838();
  FUN_10028bc78();
  func_0x000107c60ca0(auStack_48);
  return;
}



/* Entry: 10076ad40; end: 10076ad7b;  */

undefined8 * FUN_10076ad40(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107ea880;
  param_1[1] = 0;
  FUN_10076acd8(param_1 + 3);
  return param_1;
}



/* Entry: 10076ad7c; end: 10076ad8b;  */

void FUN_10076ad7c(void)

{
  return;
}



/* Entry: 10076ad8c; end: 10076adaf;  */

void FUN_10076ad8c(void)

{
  FUN_10076ac28();
  FUN_10076adb0();
  return;
}



/* Entry: 10076adb0; end: 10076ae47;  */

void FUN_10076adb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 in_ZR;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010054fcb8();
  FUN_10054fd50();
  FUN_10076ae48();
  FUN_10076b198(uStack_50,param_2,param_3,param_4,param_5,param_6);
  func_0x00010054ff60();
  FUN_10076e130();
  func_0x00010054ff88(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001053a6b34();
  FUN_10076e130();
  func_0x0001053a6ad0();
  func_0x00010054fd5c();
  FUN_10076ae68();
  FUN_10054fdb8();
  return;
}



/* Entry: 10076ae48; end: 10076ae67;  */

void FUN_10076ae48(void)

{
  func_0x00010054fd5c();
  FUN_10076ae68();
  FUN_10054fdb8();
  return;
}



/* Entry: 10076ae68; end: 10076ae8f;  */

/* WARNING: Possible PIC construction at 0x00010076af24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010076b008: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010076af28) */
/* WARNING: Removing unreachable block (ram,0x00010076af98) */
/* WARNING: Removing unreachable block (ram,0x00010076afa0) */
/* WARNING: Removing unreachable block (ram,0x00010076afa8) */
/* WARNING: Removing unreachable block (ram,0x00010076b00c) */
/* WARNING: Removing unreachable block (ram,0x00010076b0b8) */
/* WARNING: Removing unreachable block (ram,0x00010076b0fc) */
/* WARNING: Removing unreachable block (ram,0x00010076b10c) */
/* WARNING: Removing unreachable block (ram,0x00010076b114) */
/* WARNING: Removing unreachable block (ram,0x00010076b094) */

void FUN_10076ae68(uint *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined1 auStack_90 [8];
  ulong uStack_88;
  byte bStack_79;
  undefined8 uStack_78;
  
  if (param_2 < 0x555555555555556) {
    lVar1 = param_2 * 0x30;
  }
  else {
    func_0x000104bd35f4();
    uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    FUN_100638a28(auStack_90,param_5 + 0x58,&PTR_s__110881000);
    if (-1 < (char)bStack_79) {
      uStack_88 = (ulong)bStack_79;
    }
    func_0x000107c60ca0(auStack_90);
    *param_1 = (uint)(uStack_88 != 0);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    lVar1 = 0x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(lVar1);
  return;
}



/* Entry: 10076ae90; end: 10076b147;  */

uint * FUN_10076ae90(uint *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                    long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  long *plVar7;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [16];
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100638a28(&uStack_80,param_5 + 0x58,&PTR_s__110881000);
  if (-1 < (long)puStack_70) {
    uStack_78 = (ulong)puStack_70 >> 0x38;
  }
  func_0x000107c60ca0(&uStack_80);
  *param_1 = (uint)(uStack_78 != 0);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar4 = (undefined8 *)0x30;
  func_0x000107c60e20();
  plVar7 = puVar4 + 1;
  *plVar7 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110881018;
  puVar1 = puVar4 + 3;
  FUN_10076b1d0(puVar1,param_6);
  puStack_a8 = puVar1;
  puStack_a0 = puVar4;
  FUN_1004896c8(auStack_b8,param_4);
  func_0x00010046a3b4(*param_3,param_5);
  FUN_10055d588(&uStack_80,1);
  puStack_70[1] = 0;
  puStack_70[2] = 0;
  *puStack_70 = &PTR_DAT_1107e9bc8;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uStack_98 = *param_3;
  *param_3 = 0;
  puStack_90 = puVar1;
  puStack_88 = puVar4;
  FUN_10055d67c(puStack_70 + 3,param_2,auStack_b8,&puStack_90,&uStack_98,0,0,0);
  func_0x00010055f5a0(&uStack_98);
  FUN_100561d44(&puStack_90);
  puVar1 = puStack_70;
  puStack_70 = (undefined8 *)0x0;
  FUN_100561d68(&uStack_d0,puVar1 + 3);
  FUN_100561e6c(&uStack_80);
  puVar5 = (undefined8 *)0x30;
  func_0x000107c60e20();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110881068;
  puVar1 = puVar5 + 3;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  FUN_10076e098(puVar1,&uStack_80);
  FUN_100561f40(&uStack_80);
  puStack_90 = (undefined8 *)0x0;
  puStack_88 = (undefined8 *)0x0;
  uStack_78 = *(ulong *)(param_1 + 4);
  uStack_80 = *(undefined8 *)(param_1 + 2);
  *(undefined8 **)(param_1 + 2) = puVar1;
  *(undefined8 **)(param_1 + 4) = puVar5;
  FUN_10076e0e0(&uStack_80);
  FUN_10076e0e0(&puStack_90);
  FUN_100561f40(&uStack_d0);
  FUN_10048b4e8(auStack_b8);
  ppuVar6 = &puStack_a8;
  func_0x00010076e104(ppuVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  func_0x000107c60e78();
  FUN_100561f40(&uStack_d0);
  FUN_10048b4e8(auStack_b8);
  func_0x00010076e104(&puStack_a8);
  do {
    FUN_10076e0e0(puVar1);
    func_0x000107c60bd8(ppuVar6);
    func_0x000107c60d70(puVar4);
    func_0x000107c60e14();
  } while( true );
}



/* Entry: 10076b148; end: 10076b197;  */

undefined8 FUN_10076b148(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_28;
  
  uStack_28 = *param_3;
  *param_3 = 0;
  FUN_10076ae90(param_1,param_2,&uStack_28);
  func_0x00010055f5a0(&uStack_28);
  return param_1;
}



/* Entry: 10076b198; end: 10076b1cf;  */

undefined8 * FUN_10076b198(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110880dc0;
  FUN_10076b148(param_1 + 3);
  return param_1;
}



/* Entry: 10076b1d0; end: 10076b293;  */

undefined8 * FUN_10076b1d0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  *param_1 = &PTR_DAT_1108810b8;
  puVar6 = (undefined8 *)*param_2;
  lVar1 = param_2[1];
  param_1[1] = puVar6;
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    plVar7 = (long *)(lVar1 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar6 = (undefined8 *)param_1[1];
  }
  plVar2 = (long *)puVar6[1];
  for (plVar7 = (long *)*puVar6; plVar7 != plVar2; plVar7 = plVar7 + 6) {
    if ((long)*(char *)((long)plVar7 + 0x17) < 0) {
      plVar9 = (long *)*plVar7;
      plVar8 = (long *)((long)plVar9 + plVar7[1]);
    }
    else {
      plVar8 = (long *)((long)plVar7 + (long)*(char *)((long)plVar7 + 0x17));
      plVar9 = plVar7;
    }
    for (; plVar9 != plVar8; plVar9 = (long *)((long)plVar9 + 1)) {
      uVar5 = (undefined1)*plVar9;
      func_0x000107c60e80();
      *(undefined1 *)plVar9 = uVar5;
    }
  }
  return param_1;
}



/* Entry: 10076b294; end: 10076b29b;  */

undefined8 FUN_10076b294(void)

{
  return 0;
}



/* Entry: 10076b29c; end: 10076b4c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10076b29c(int param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  
  FUN_10076b294();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ed6a10);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed69e0);
    func_0x000107c61428(puVar1,auStack_68,0,0);
    dVar4 = (double)puVar1[4];
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(uVar3);
    func_0x000107c466c0(dVar4 * 1000000.0,puVar2);
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ed6a18);
    uVar5 = puVar1[2];
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(uVar3);
    func_0x000107c466c0(uVar5,puVar2);
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ed6a20);
    uVar5 = puVar1[3];
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(uVar3);
    func_0x000107c466c0(uVar5,puVar2);
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ed6a28);
    dVar4 = (double)puVar1[6];
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(uVar3);
    func_0x000107c466c0(puVar2);
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c4c928(*puVar1);
    if (0.0 < dVar4) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ed6a08);
      uVar5 = *puVar1;
      func_0x000107c61174(uVar3);
      func_0x000107c4c928(uVar5);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(1.0 / dVar4);
      func_0x000107c4d664(uVar3);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar2);
    }
  }
  return;
}



/* Entry: 10076b4c8; end: 10076b53b; -[SCLensFavoritesNotificationService initWithLensFavoritesNotifications:] */

undefined1 * FUN_10076b4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f99b0;
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



/* Entry: 10076b53c; end: 10076b567;  */

void FUN_10076b53c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10076b568; end: 10076b56f;  */

void FUN_10076b568(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10076b570; end: 10076b5c3;  */

void FUN_10076b570(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10076b5c4; end: 10076b5d7;  */

void FUN_10076b5c4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
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
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_1002b6acc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  func_0x00010076ca74(0);
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
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = uVar8;
  FUN_10076cb04();
  *(undefined8 *)(lVar1 + 0x10) = uVar9;
  uVar10 = uVar9;
  func_0x000107c6157c();
  func_0x00010076cbb4();
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar1 + 0x48) = uVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 10076b5d8; end: 10076b7f3;  */

void FUN_10076b5d8(long *param_1,long param_2)

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
  FUN_1002b6acc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  func_0x00010076ca74(0);
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
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  FUN_10076cb04();
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  func_0x00010076cbb4();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 10076b7f4; end: 10076b7fb;  */

void FUN_10076b7f4(undefined8 *param_1)

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



/* Entry: 10076b7fc; end: 10076b84f;  */

void FUN_10076b7fc(undefined8 *param_1)

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



/* Entry: 10076b850; end: 10076b85b;  */

void FUN_10076b850(undefined8 *param_1)

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
  FUN_1002977b0();
  func_0x000107c613fc();
  FUN_10076b8f0(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10076b85c; end: 10076b8ef;  */

void FUN_10076b85c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002977b0();
  func_0x000107c613fc();
  FUN_10076b8f0(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 10076b8f0; end: 10076bacb;  */

void FUN_10076b8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a8ec0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12300);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c280);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  return;
}



/* Entry: 10076bacc; end: 10076bd03; -[SCCognacDataServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10076bacc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126be0a8;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_112729604;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar5 = param_1 + _DAT_112729608;
  func_0x000107c61148(lVar5);
  lVar6 = lVar5;
  func_0x000107c40870();
  func_0x000107c61180();
  func_0x000107c49210();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  puVar7 = PTR_PTR_1126ae720;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  puStack_88 = &UNK_10578ffe0;
  puStack_80 = &UNK_1108b10f8;
  func_0x000107c6111c(auStack_70,auStack_68);
  puStack_78 = puVar1;
  func_0x000107c3e4fc(puVar7);
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_a0,auStack_68);
  func_0x000107c3e4fc(puVar8);
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126be0b0;
  func_0x000107c610f4(PTR_PTR_1126be0b0);
  func_0x000107c491ac();
  uVar10 = *(undefined8 *)(param_1 + _DAT_11272960c);
  *(undefined8 *)(param_1 + _DAT_11272960c) = 0;
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar8);
  func_0x000107c61120(auStack_a0);
  func_0x000107c61170(puVar7);
  func_0x000107c61120(auStack_70);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10076bd04; end: 10076be87; -[SCCognacServiceClient initWithUserId:ipInferredCountryCodeProvider:] */

undefined8 *
FUN_10076bd04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126ea338;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = puVar1[5];
    puVar1[5] = &PTR____CFConstantStringClassReference_110def498;
    func_0x000107c61170(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c3ac40();
    func_0x000107c61180();
    uVar2 = puVar1[6];
    puVar1[6] = puVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar3);
    puVar4 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = puVar1[2];
    puVar1[2] = puVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61174(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c5c5c8(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10076be88; end: 10076bf37; -[SCCognacServiceClient syncUserContextToken] */

void FUN_10076be88(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c4e524(uVar1);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 10076bf38; end: 10076bfdb; -[SCCognacDataServices initWithUserContextTokenProvider:leaderboardDataService:] */

undefined1 *
FUN_10076bf38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126ffdd0;
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
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10076bfdc; end: 10076c00f;  */

void FUN_10076bfdc(void)

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



/* Entry: 10076c010; end: 10076c017;  */

void FUN_10076c010(undefined8 *param_1)

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



/* Entry: 10076c018; end: 10076c06b;  */

void FUN_10076c018(undefined8 *param_1)

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



/* Entry: 10076c06c; end: 10076c073;  */

void FUN_10076c06c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_10028728c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10076c10c();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10076c278();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10076c074; end: 10076c10b;  */

void FUN_10076c074(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_10028728c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10076c10c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10076c278();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 10076c10c; end: 10076c177;  */

void FUN_10076c10c(undefined8 param_1)

{
  if (lRam0000000112e1cc60 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e687230);
  return;
}



/* Entry: 10076c178; end: 10076c17f;  */

void FUN_10076c178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010076c17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 10076c180; end: 10076c21b;  */

/* WARNING: Possible PIC construction at 0x00010076c1c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010076c1e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010076c204: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010076c1ec) */
/* WARNING: Removing unreachable block (ram,0x00010076c1c4) */
/* WARNING: Removing unreachable block (ram,0x00010076c1d8) */
/* WARNING: Removing unreachable block (ram,0x00010076c208) */

void FUN_10076c180(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c41050();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10076c21c; end: 10076c223;  */

void FUN_10076c21c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a7168;
  func_0x000107c610f8();
  func_0x000107c47fd4();
  func_0x000107c61170(unaff_x20);
  *param_1 = puVar1;
  return;
}



/* Entry: 10076c224; end: 10076c277;  */

void FUN_10076c224(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a7168;
  func_0x000107c610f8();
  func_0x000107c47fd4();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}


