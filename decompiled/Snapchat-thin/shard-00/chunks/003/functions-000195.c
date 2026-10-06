/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10046ac30; end: 10046ace3; -[SCStickerSearchServicesImplServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10046ac30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  param_1 = param_1 + _DAT_11272575c;
  func_0x000107c61148();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_105539b38;
  puStack_40 = &UNK_1108963e0;
  puVar1 = PTR_PTR_1126ae720;
  lStack_38 = param_1;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_58);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba7b8;
  func_0x000107c610f4(PTR_PTR_1126ba7b8);
  func_0x000107c48510();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10046ace4; end: 10046ad57; -[SCStickerSearchServices initWithSearch:] */

undefined1 * FUN_10046ace4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fe690;
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



/* Entry: 10046ad58; end: 10046ad83;  */

void FUN_10046ad58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10046ad84; end: 10046ad8b;  */

void FUN_10046ad84(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10046ad8c; end: 10046addf;  */

void FUN_10046ad8c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10046ade0; end: 10046adef;  */

void FUN_10046ade0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10023be4c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  func_0x0001004892ac(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_100489328();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_100489498();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 10046adf0; end: 10046af97;  */

void FUN_10046adf0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  FUN_10023be4c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  func_0x0001004892ac(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_100489328();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_100489498();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 10046af98; end: 10046af9f;  */

void FUN_10046af98(undefined8 *param_1)

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



/* Entry: 10046afa0; end: 10046aff3;  */

void FUN_10046afa0(undefined8 *param_1)

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



/* Entry: 10046aff4; end: 10046b7ff;  */

void FUN_10046aff4(long *param_1,long param_2)

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
  FUN_10023b888();
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
  puVar1 = PTR_PTR_1126a7e10;
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
  func_0x000107c61174(uStack_b8);
  uVar11 = uStack_c0;
  func_0x000107c61174();
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
  uVar15 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar15);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar16);
  uVar15 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(uVar16);
  uVar15 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef9e300);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(uVar16);
  uVar15 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc12d0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc12f0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar15);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000035;
  func_0x000107c5fadc(0xd000000000000035,0x800000010efc1310);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1a250);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar15);
  func_0x000107c61174(uVar13);
  func_0x000107c61174();
  uVar15 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef9e320);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
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



/* Entry: 10046b800; end: 10046b83b;  */

void FUN_10046b800(void)

{
  long unaff_x20;
  
  FUN_10046aff4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 10046b83c; end: 10046b843;  */

void FUN_10046b83c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x80);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10046b844; end: 10046b897;  */

void FUN_10046b844(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x80);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10046b898; end: 10046c1c7;  */

void FUN_10046b898(long *param_1,long param_2)

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
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
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
  FUN_10023b33c();
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
  FUN_1000285a8(0x112de5ba0,&UNK_10db261c0);
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
  func_0x000107c61174(uStack_a8);
  uVar8 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar9 = uStack_b8;
  func_0x000107c61174(uStack_b8);
  uVar10 = uStack_c0;
  func_0x000107c61174(uStack_c0);
  uVar13 = uStack_c8;
  func_0x000107c6157c(uStack_c8);
  FUN_10017da58();
  puVar11 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x18) = puVar11;
  FUN_1000285a8(0x112de5ba8,&UNK_10d9b0520);
  func_0x000107c610f8();
  uVar13 = uStack_d0;
  func_0x000107c6157c(uStack_d0);
  FUN_10025a71c();
  puVar11 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x20) = puVar11;
  FUN_1000285a8(0x112de5bb0,&UNK_10db261b0);
  func_0x000107c610f8();
  uVar13 = uStack_d8;
  func_0x000107c6157c(uStack_d8);
  FUN_10017da58();
  puVar11 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x28) = puVar11;
  puVar11 = PTR_PTR_1126a8378;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar11;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efc71f0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc6a20);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010efc6510);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010efb7910);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc7220);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef19ca0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar13 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1f630);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc64f0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  uVar15 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010efc7240);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar13);
  uVar15 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efc7270);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar13);
  uVar13 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010efc72a0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  uVar13 = uVar14;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar12);
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
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(uStack_d0);
  func_0x000107c61574(uStack_d8);
  *(undefined8 *)(param_2 + 0x80) = uVar13;
  *param_1 = param_2;
  return;
}



/* Entry: 10046c1c8; end: 10046c203;  */

void FUN_10046c1c8(void)

{
  long unaff_x20;
  
  FUN_10046b898(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 10046c204; end: 10046c26b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10046c204(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001dd4d0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_11302a4c8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10046c26c; end: 10046c273;  */

void FUN_10046c26c(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc08e8,&UNK_10d97d358);
  func_0x000107c613fc();
  puVar1 = &UNK_1016bd9ac;
  FUN_1000841f8();
  FUN_100084214(&UNK_10d97d320,0x33,2);
  *param_1 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10046c274; end: 10046c2ef;  */

void FUN_10046c274(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc08e8,&UNK_10d97d358);
  func_0x000107c613fc();
  puVar1 = &UNK_1016bd9ac;
  FUN_1000841f8(&UNK_1016bd9ac,param_2);
  FUN_100084214(&UNK_10d97d320,0x33,2);
  *param_1 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10046c2f0; end: 10046c2f7;  */

void FUN_10046c2f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xd8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10046c2f8; end: 10046c34b;  */

void FUN_10046c2f8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xd8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10046c34c; end: 10046d223;  */

void FUN_10046c34c(long *param_1,long param_2)

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
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
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
  FUN_10023a9ec();
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
  uVar16 = uStack_e0;
  func_0x000107c61174();
  uVar17 = uStack_e8;
  func_0x000107c61174();
  uVar18 = uStack_f0;
  func_0x000107c61174();
  uVar19 = uStack_f8;
  func_0x000107c61174();
  uVar20 = uStack_100;
  func_0x000107c61174();
  uVar21 = uStack_108;
  func_0x000107c61174();
  uVar24 = uStack_110;
  func_0x000107c61174();
  uVar25 = uStack_118;
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
  puVar2 = PTR_PTR_1126a82f0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar22 = auStack_70[0];
  func_0x000107c61174();
  uVar29 = 0xd000000000000010;
  uVar23 = uVar29;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar23 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar23);
  uVar26 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar27 = 0xd000000000000015;
  uVar23 = uVar27;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc6d40);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb7000);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0xd000000000000016;
  uVar23 = uVar31;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar27);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc6d60);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010efc6d80);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar27 = 0xd000000000000018;
  uVar23 = uVar27;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc65b0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc6da0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174(uVar26);
  uVar23 = uVar27;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc6dc0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar23);
  uVar26 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef13090);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar29);
  func_0x000107c61174();
  func_0x000107c61174(uVar26);
  uVar23 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc6de0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc6a20);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc6e00);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc6790);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar31);
  func_0x000107c61174(uVar25);
  func_0x000107c61174();
  uVar23 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc64f0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar23);
  lVar32 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc6e20);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(lVar32);
  func_0x000107c61170(uVar27);
  lVar28 = *(long *)(param_2 + 0x20);
  func_0x000107c61174(uVar26);
  func_0x000107c61174();
  uVar23 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc6e40);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(uVar23);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  lVar30 = *(long *)(param_2 + 0x28);
  func_0x000107c61174(uVar27);
  func_0x000107c61174();
  uVar23 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010efc6e60);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(uVar23);
  func_0x000107c3e740(uVar27);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar32 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10046d21c);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0xd8) = lVar32;
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar28 != 0) {
    *(long *)(param_2 + 0xe0) = lVar28;
    func_0x000107c52018();
    func_0x000107c61180();
    if (lVar30 != 0) {
      func_0x000107c61170(uVar22);
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
      func_0x000107c61170(uVar20);
      func_0x000107c61170(uVar21);
      func_0x000107c61170(uVar24);
      func_0x000107c61170(uVar25);
      *(long *)(param_2 + 0xe8) = lVar30;
      *param_1 = param_2;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10046d224);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10046d220);
  (*pcVar1)();
}



/* Entry: 10046d224; end: 10046d26f;  */

void FUN_10046d224(void)

{
  long unaff_x20;
  
  FUN_10046c34c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 10046d270; end: 10046d277;  */

void FUN_10046d270(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10046d278; end: 10046d2cb;  */

void FUN_10046d278(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10046d2cc; end: 10046d2ff;  */

void FUN_10046d2cc(void)

{
  long unaff_x20;
  
  FUN_10046d580(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 10046d300; end: 10046d323;  */

void FUN_10046d300(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &UNK_10f73f5cb;
  func_0x00010002b82c(unaff_x20 + 0x18,&UNK_10f73f5cb);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 10046d324; end: 10046d44f;  */

/* WARNING: Removing unreachable block (ram,0x00010046d3b0) */
/* WARNING: Removing unreachable block (ram,0x00010046d3b8) */

void FUN_10046d324(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 **ppuVar3;
  byte bVar4;
  undefined8 *puStack_50;
  long lStack_48;
  undefined **ppuStack_40;
  undefined1 uStack_38;
  
  ppuStack_40 = &PTR_DAT_1107ec4f0;
  if (plRam0000000113815c78 == (long *)0x0) {
    (**(code **)(*plRam0000000113815c70 + 0x10))
              (plRam0000000113815c70,
               "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
               ,
               "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/grpc_library.h"
               ,0x2f);
  }
  (**(code **)(*plRam0000000113815c78 + 0x10))();
  uStack_38 = 1;
  bVar4 = *(byte *)(param_2 + 0x2f);
  puStack_50 = *(undefined8 **)(param_2 + 0x18);
  if (-1 < (char)bVar4) {
    puStack_50 = (undefined8 *)(param_2 + 0x18);
  }
  lStack_48 = *(long *)(param_2 + 0x30);
  if (-1 < *(char *)(param_2 + 0x47)) {
    lStack_48 = param_2 + 0x30;
  }
  lVar1 = 0;
  if (*(char *)(param_2 + 0x17) != '\0') {
    lVar1 = param_2;
  }
  uVar2 = *(ulong *)(param_2 + 0x20);
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  ppuVar3 = (undefined8 **)(undefined1 *)0x0;
  if (uVar2 != 0) {
    ppuVar3 = &puStack_50;
  }
  FUN_10046d450(lVar1,ppuVar3,0,0);
  FUN_10046dd70(param_1);
  FUN_10046df00(&ppuStack_40);
  return;
}



/* Entry: 10046d450; end: 10046d4d3;  */

undefined8 * FUN_10046d450(long param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *extraout_x8;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 auStack_d0 [2];
  
  if (param_4 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    func_0x000107c60e20();
    *puVar1 = &PTR_DAT_1107c6480;
    puVar1[1] = 1;
    puVar1[7] = 0x100000000;
    FUN_10046d4d4();
    return puVar1;
  }
  func_0x000107c2c3c4();
  func_0x000107c60e14();
  func_0x000107c60bd8();
  FUN_1004601ac();
  *(undefined8 **)(param_1 + 0x18) = param_2;
  if (param_3 != (long *)0x0) {
    if (*param_3 == 0) {
      func_0x000107c2c3b8();
    }
    else if (param_3[1] != 0) {
      uVar2 = 0x10;
      FUN_100460860();
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      lVar3 = param_3[1];
      FUN_1004601ac();
      *(long *)(*(long *)(param_1 + 0x10) + 8) = lVar3;
      param_2 = (undefined8 *)*param_3;
      FUN_1004601ac();
      **(long **)(param_1 + 0x10) = (long)param_2;
      goto LAB_10046d544;
    }
    func_0x000107c2c3bc();
    FUN_100083b20(auStack_d0);
    FUN_100083b20(&uStack_d8);
    FUN_100083b20(&uStack_e0);
    FUN_100083b20(&uStack_e8);
    FUN_100083b20(&uStack_f0);
    FUN_100083b20(&uStack_f8);
    FUN_100083b20(&uStack_100);
    FUN_100083b20(&uStack_108);
    FUN_100083b20(&uStack_110);
    FUN_100083b20(&puStack_118);
    FUN_10023a59c();
    func_0x000107c613fc();
    param_2[3] = uStack_d8;
    param_2[4] = uStack_e0;
    param_2[5] = uStack_e8;
    param_2[6] = uStack_f0;
    param_2[7] = uStack_f8;
    param_2[8] = uStack_100;
    param_2[9] = uStack_108;
    param_2[10] = uStack_110;
    param_2[0xb] = puStack_118;
    puVar4 = PTR_PTR_1126a8270;
    func_0x000107c610f8();
    uVar14 = uStack_d8;
    func_0x000107c61174();
    uVar5 = uStack_e0;
    func_0x000107c61174();
    uVar6 = uStack_e8;
    func_0x000107c61174();
    uVar7 = uStack_f0;
    func_0x000107c61174(uStack_f0);
    uVar8 = uStack_f8;
    func_0x000107c61174();
    uVar9 = uStack_100;
    func_0x000107c61174(uStack_100);
    uVar10 = uStack_108;
    func_0x000107c61174();
    uVar11 = uStack_110;
    func_0x000107c61174();
    puVar1 = puStack_118;
    func_0x000107c61174();
    func_0x000107c453e4();
    param_2[2] = puVar4;
    func_0x000107c61174();
    uVar12 = auStack_d0[0];
    func_0x000107c61174();
    uVar2 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
    func_0x000107c5a49c(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar2);
    func_0x000107c61174();
    func_0x000107c61174(puVar4);
    uVar2 = 0xd000000000000014;
    func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
    func_0x000107c5a49c(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar2);
    func_0x000107c61174();
    func_0x000107c61174(puVar4);
    uVar2 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
    func_0x000107c5a49c(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61174();
    func_0x000107c61174(puVar4);
    uVar2 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
    func_0x000107c5a49c(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c61174(uVar7);
    func_0x000107c61174(puVar4);
    uVar2 = 0x7265536873617263;
    func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
    func_0x000107c5a49c(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar2);
    uVar13 = param_2[2];
    func_0x000107c61174(uVar8);
    func_0x000107c61174();
    uVar2 = 0xd00000000000001b;
    func_0x000107c5fadc(0xd00000000000001b,0x800000010efb7000);
    func_0x000107c5a49c(uVar13);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar2);
    func_0x000107c61174(uVar9);
    func_0x000107c61174();
    uVar2 = 0xd000000000000013;
    func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
    func_0x000107c5a49c(uVar13);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar2);
    func_0x000107c61174();
    func_0x000107c61174();
    uVar2 = 0xd00000000000001a;
    func_0x000107c5fadc(0xd00000000000001a,0x800000010ef23640);
    func_0x000107c5a49c(uVar13);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar2);
    func_0x000107c61174();
    func_0x000107c61174();
    uVar2 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010ef25bc0);
    func_0x000107c5a49c(uVar13);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar2);
    func_0x000107c61174();
    func_0x000107c61174();
    uVar2 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
    func_0x000107c5a49c(uVar13);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61174();
    uVar2 = uVar13;
    func_0x000107c4f570();
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(puVar1);
    param_2[0xc] = uVar2;
    *extraout_x8 = (long)param_2;
    return puVar1;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
LAB_10046d544:
  if (param_4 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    uVar14 = param_4[1];
    uVar2 = *param_4;
    *(undefined8 *)(param_1 + 0x30) = param_4[2];
    *(undefined8 *)(param_1 + 0x28) = uVar14;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  return param_2;
}



/* Entry: 10046d4d4; end: 10046d57f;  */

void FUN_10046d4d4(long param_1,long param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
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
  long *extraout_x8;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 auStack_a0 [2];
  
  FUN_1004601ac();
  *(long *)(param_1 + 0x18) = param_2;
  if (param_3 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
LAB_10046d544:
    if (param_4 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      uVar14 = param_4[1];
      uVar1 = *param_4;
      *(undefined8 *)(param_1 + 0x30) = param_4[2];
      *(undefined8 *)(param_1 + 0x28) = uVar14;
      *(undefined8 *)(param_1 + 0x20) = uVar1;
    }
    return;
  }
  if (*param_3 == 0) {
    func_0x000107c2c3b8();
  }
  else if (param_3[1] != 0) {
    uVar1 = 0x10;
    FUN_100460860();
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    lVar2 = param_3[1];
    FUN_1004601ac();
    *(long *)(*(long *)(param_1 + 0x10) + 8) = lVar2;
    lVar2 = *param_3;
    FUN_1004601ac();
    **(long **)(param_1 + 0x10) = lVar2;
    goto LAB_10046d544;
  }
  func_0x000107c2c3bc();
  FUN_100083b20(auStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_10023a59c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_a8;
  *(undefined8 *)(param_2 + 0x20) = uStack_b0;
  *(undefined8 *)(param_2 + 0x28) = uStack_b8;
  *(undefined8 *)(param_2 + 0x30) = uStack_c0;
  *(undefined8 *)(param_2 + 0x38) = uStack_c8;
  *(undefined8 *)(param_2 + 0x40) = uStack_d0;
  *(undefined8 *)(param_2 + 0x48) = uStack_d8;
  *(undefined8 *)(param_2 + 0x50) = uStack_e0;
  *(undefined8 *)(param_2 + 0x58) = uStack_e8;
  puVar3 = PTR_PTR_1126a8270;
  func_0x000107c610f8();
  uVar14 = uStack_a8;
  func_0x000107c61174();
  uVar4 = uStack_b0;
  func_0x000107c61174();
  uVar5 = uStack_b8;
  func_0x000107c61174();
  uVar6 = uStack_c0;
  func_0x000107c61174(uStack_c0);
  uVar7 = uStack_c8;
  func_0x000107c61174();
  uVar8 = uStack_d0;
  func_0x000107c61174(uStack_d0);
  uVar9 = uStack_d8;
  func_0x000107c61174();
  uVar10 = uStack_e0;
  func_0x000107c61174();
  uVar11 = uStack_e8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar12 = auStack_a0[0];
  func_0x000107c61174();
  uVar1 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar1 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar3);
  uVar1 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb7000);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar1 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef23640);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef25bc0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  uVar1 = uVar13;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  *(undefined8 *)(param_2 + 0x60) = uVar1;
  *extraout_x8 = param_2;
  return;
}



/* Entry: 10046d580; end: 10046dbab;  */

void FUN_10046d580(long *param_1,long param_2)

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
  FUN_10023a59c();
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
  puVar1 = PTR_PTR_1126a8270;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar11 = auStack_70[0];
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar12 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar1);
  uVar12 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb7000);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar12 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef23640);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef25bc0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  uVar12 = uVar13;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  *(undefined8 *)(param_2 + 0x60) = uVar12;
  *param_1 = param_2;
  return;
}



/* Entry: 10046dbac; end: 10046dbb3;  */

void FUN_10046dbac(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10046dbb4; end: 10046dc07;  */

void FUN_10046dbb4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10046dc08; end: 10046dc0f;  */

void FUN_10046dc08(undefined8 *param_1)

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



/* Entry: 10046dc10; end: 10046dc63;  */

void FUN_10046dc10(undefined8 *param_1)

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



/* Entry: 10046dc64; end: 10046dc6b;  */

void FUN_10046dc64(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1001b909c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10046dd04();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10046e3c0();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10046dc6c; end: 10046dd03;  */

void FUN_10046dc6c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1001b909c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10046dd04();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10046e3c0();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 10046dd04; end: 10046dd6f;  */

void FUN_10046dd04(undefined8 param_1)

{
  if (lRam0000000112de5ef8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e664064);
  return;
}



/* Entry: 10046dd70; end: 10046ddeb;  */

undefined8 * FUN_10046dd70(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)0x18;
    func_0x000107c60e20();
    FUN_10046de78();
    *puVar1 = &PTR_DAT_1107c7ef0;
    puVar1[2] = param_2;
    *param_1 = puVar1;
    puVar2 = (undefined8 *)0x20;
    func_0x000107c60e20();
    *puVar2 = &PTR_DAT_1107c7f48;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = puVar1;
    param_1[1] = puVar2;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return (undefined8 *)0x0;
}



/* Entry: 10046ddec; end: 10046de77;  */

undefined8 * FUN_10046ddec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_DAT_1107ec4f0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_2 != 0) {
    if (plRam0000000113815c78 == (long *)0x0) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/grpc_library.h"
                 ,0x2f);
    }
    (**(code **)(*plRam0000000113815c78 + 0x10))();
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return param_1;
}



/* Entry: 10046de78; end: 10046de9b;  */

void FUN_10046de78(undefined8 *param_1)

{
  FUN_10046ddec(param_1,1);
  *param_1 = &PTR_DAT_1107c7db8;
  return;
}



/* Entry: 10046de9c; end: 10046defb;  */

undefined8 * FUN_10046de9c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *puVar1 = &PTR_DAT_1107c7f48;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10046defc; end: 10046deff;  */

void FUN_10046defc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined2 auStack_60 [4];
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  puVar1 = puRam00000001136a2af0;
  puVar2 = puRam00000001136a2af0;
  FUN_100460448();
  iRam00000001136a22e8 = iRam00000001136a22e8 + -1;
  if (iRam00000001136a22e8 == 0) {
    FUN_1004b6294();
    pbVar3 = (byte *)*puVar2;
    FUN_100836ca0();
    if ((((ulong)puVar2 & 1) == 0) && ((pbVar3 == (byte *)0x0 || ((*pbVar3 & 1) == 0)))) {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/init.cc"
                    ,0xdb,0,"grpc_shutdown starts clean-up now");
      uRam00000001136a2af8 = 1;
      func_0x000104adb7b8();
    }
    else {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/init.cc"
                    ,0xe1,0,"grpc_shutdown spawns clean-up thread");
      iRam00000001136a22e8 = iRam00000001136a22e8 + 1;
      uRam00000001136a2af8 = 1;
      uStack_58 = 0;
      auStack_60[0] = 0;
      FUN_100462a0c(auStack_50,"grpc_shutdown",&UNK_104adb86c,0,0,auStack_60);
      FUN_100463850(auStack_50);
      FUN_1004629b0(auStack_50);
    }
  }
  func_0x000100466b80(puVar1);
  return;
}



/* Entry: 10046df00; end: 10046df8b;  */

undefined8 * FUN_10046df00(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107ec4f0;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (plRam0000000113815c78 == (long *)0x0) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000113815c78 + 0x18))();
  }
  return param_1;
}



/* Entry: 10046df8c; end: 10046e0cb;  */

void FUN_10046df8c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined2 auStack_60 [4];
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  puVar1 = puRam00000001136a2af0;
  puVar2 = puRam00000001136a2af0;
  FUN_100460448();
  iRam00000001136a22e8 = iRam00000001136a22e8 + -1;
  if (iRam00000001136a22e8 == 0) {
    FUN_1004b6294();
    pbVar3 = (byte *)*puVar2;
    FUN_100836ca0();
    if ((((ulong)puVar2 & 1) == 0) && ((pbVar3 == (byte *)0x0 || ((*pbVar3 & 1) == 0)))) {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/init.cc"
                    ,0xdb,0,"grpc_shutdown starts clean-up now");
      uRam00000001136a2af8 = 1;
      func_0x000104adb7b8();
    }
    else {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/init.cc"
                    ,0xe1,0,"grpc_shutdown spawns clean-up thread");
      iRam00000001136a22e8 = iRam00000001136a22e8 + 1;
      uRam00000001136a2af8 = 1;
      uStack_58 = 0;
      auStack_60[0] = 0;
      FUN_100462a0c(auStack_50,"grpc_shutdown",&UNK_104adb86c,0,0,auStack_60);
      FUN_100463850(auStack_50);
      FUN_1004629b0(auStack_50);
    }
  }
  func_0x000100466b80(puVar1);
  return;
}



/* Entry: 10046e0cc; end: 10046e133;  */

void FUN_10046e0cc(long param_1)

{
  FUN_100450bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10046e134; end: 10046e13b;  */

/* WARNING: Possible PIC construction at 0x00010046e150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010046e154) */

void FUN_10046e134(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000058);
  return;
}



/* Entry: 10046e13c; end: 10046e16b;  */

/* WARNING: Possible PIC construction at 0x00010046e150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010046e154) */

void FUN_10046e13c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x30);
  return;
}



/* Entry: 10046e16c; end: 10046e1bb;  */

undefined1  [16] FUN_10046e16c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    func_0x0001004699c4(param_4,param_2);
  }
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 10046e1bc; end: 10046e1e7;  */

void FUN_10046e1bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10046e16c(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10046e1e8; end: 10046e217;  */

long FUN_10046e1e8(long param_1,long *param_2)

{
  if (*param_2 != param_2[1]) {
    FUN_10046e1bc(*param_2,param_2[1],param_1 + 0x28);
  }
  return param_1;
}



/* Entry: 10046e218; end: 10046e223;  */

undefined8 FUN_10046e218(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10046e224; end: 10046e26b;  */

void FUN_10046e224(long param_1)

{
  FUN_10046e218();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10046e26c; end: 10046e27f;  */

void FUN_10046e26c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010046e278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10046e280; end: 10046e2cf;  */

undefined8 * FUN_10046e280(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11087f540;
  func_0x000107c60ca0(param_1 + 0x13);
  FUN_1001148fc(param_1 + 9);
  FUN_1001148fc(param_1 + 5);
  FUN_1001148fc(param_1 + 1);
  return param_1;
}



/* Entry: 10046e2d0; end: 10046e2e7;  */

void FUN_10046e2d0(void)

{
  return;
}



/* Entry: 10046e2e8; end: 10046e347;  */

void FUN_10046e2e8(long *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010046e2dc();
  if (*param_1 != 0) {
    FUN_10046e348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*unaff_x19);
    return;
  }
  return;
}



/* Entry: 10046e348; end: 10046e34f;  */

void FUN_10046e348(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_1001246dc(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x00010046e384();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10046e350; end: 10046e3b3;  */

void FUN_10046e350(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_1001246dc();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x00010046e384();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10046e3b4; end: 10046e3bf;  */

void FUN_10046e3b4(void)

{
  return;
}



/* Entry: 10046e3c0; end: 10046e463;  */

void FUN_10046e3c0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = 0x112de5ec0;
  FUN_1000285a8(0x112de5ec0,&UNK_10d9b0ae0);
  func_0x000107c613fc();
  FUN_1000c2754();
  FUN_1000285a8(0x112de5ec8,&UNK_10d9b0ae8);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  puVar2 = &UNK_1019c0da0;
  FUN_1000bdd8c(&UNK_1019c0da0,uVar1);
  uVar3 = 0;
  FUN_1001d0a84(0);
  func_0x000107c610f8();
  FUN_10046f27c(puVar2,uVar1,uVar3);
  return;
}



/* Entry: 10046e464; end: 10046e483;  */

void FUN_10046e464(void)

{
  func_0x000107c61168(&PTR_PTR_11295d8e8);
  return;
}



/* Entry: 10046e484; end: 10046e4eb;  */

long FUN_10046e484(long param_1)

{
  int iVar1;
  int extraout_w8;
  undefined1 auStack_38 [24];
  
  FUN_10028b8c8(param_1,&UNK_10f82fbf1);
  FUN_10028b93c();
  func_0x000107c60db8();
  FUN_10044fd58();
  iVar1 = *(int *)(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x20) & 0 < iVar1) == 0) {
    iVar1 = extraout_w8;
  }
  FUN_10046e4ec(auStack_38,iVar1);
  func_0x00010028bc60();
  return param_1;
}



/* Entry: 10046e4ec; end: 10046e573;  */

undefined8 FUN_10046e4ec(void)

{
  int iVar1;
  undefined8 unaff_x20;
  
  if ((bRam0000000113404438 & 1) == 0) {
    iVar1 = 0x13404438;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_10028ba44();
      func_0x00010028ba4c();
      FUN_10028ba78();
      uRam0000000113404430 = unaff_x20;
      func_0x000107c60e4c(0x113404438);
    }
  }
  return uRam0000000113404430;
}



/* Entry: 10046e574; end: 10046e627;  */

void FUN_10046e574(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 uStack_61;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  long lStack_38;
  
  puVar2 = auStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100450688(auStack_50,1);
  FUN_10046e6c4(lStack_40,param_3,param_4,param_5);
  lVar1 = lStack_40;
  lStack_40 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000100450b64(auStack_50);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  func_0x000100450b64(auStack_50);
  func_0x00010564735c();
  pcStack_58 = FUN_10046e628;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10046e574(&uStack_61,puVar2,param_3,param_4);
  return;
}



/* Entry: 10046e628; end: 10046e653;  */

void FUN_10046e628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10046e574(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10046e654; end: 10046e6c3;  */

undefined8
FUN_10046e654(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  FUN_10002b838(auStack_48);
  FUN_10028bc78(param_1,auStack_48,*param_3,param_4,0);
  func_0x000107c60ca0(auStack_48);
  return param_1;
}



/* Entry: 10046e6c4; end: 10046e70b;  */

undefined8 * FUN_10046e6c4(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107ea880;
  param_1[1] = 0;
  FUN_10046e654(param_1 + 3);
  return param_1;
}



/* Entry: 10046e70c; end: 10046e713;  */

void FUN_10046e70c(void)

{
  return;
}



/* Entry: 10046e714; end: 10046e8d7;  */

void FUN_10046e714(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *apuStack_88 [2];
  char cStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined1 uStack_50;
  undefined1 *puStack_48;
  
  ppuStack_58 = &PTR_DAT_1107ec4f0;
  if (plRam0000000113815c78 == (long *)0x0) {
    (**(code **)(*plRam0000000113815c70 + 0x10))
              (plRam0000000113815c70,
               "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
               ,
               "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/grpc_library.h"
               ,0x2f);
  }
  (**(code **)(*plRam0000000113815c78 + 0x10))();
  uStack_50 = 1;
  param_3 = (long *)*param_3;
  if (param_3 == (long *)0x0) {
    FUN_10002b024(apuStack_88,"");
    uVar1 = 0;
    func_0x000104adbd2c(0,3,"Invalid credentials.");
    uStack_98 = param_5[1];
    uStack_a0 = *param_5;
    uStack_90 = param_5[2];
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    FUN_100487f08(param_1,apuStack_88,uVar1,&uStack_a0);
    puStack_48 = (undefined1 *)&uStack_a0;
    FUN_1004889dc(&puStack_48);
    if (cStack_71 < '\0') {
      func_0x000107c60e14(apuStack_88[0]);
    }
  }
  else {
    uStack_68 = param_5[1];
    uStack_70 = *param_5;
    uStack_60 = param_5[2];
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    (**(code **)(*param_3 + 0x20))(param_1,param_3,param_2,param_4,&uStack_70);
    apuStack_88[0] = &uStack_70;
    FUN_1004889dc(apuStack_88);
  }
  FUN_10046df00(&ppuStack_58);
  return;
}



/* Entry: 10046e8d8; end: 10046e9e7;  */

void FUN_10046e8d8(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = *(long *)(param_2 + 0x28);
  lVar2 = *(long *)(param_2 + 0x30);
  if (lVar1 == lVar2) {
    func_0x000104ae38d8(auStack_60,param_2,param_2 + 0x18,param_2 + 0x40);
    FUN_100488b34();
    func_0x000100488b84(auStack_60);
  }
  else {
    uStack_38 = *(undefined8 *)(param_2 + 0x38);
    *(long *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    lStack_48 = lVar1;
    lStack_40 = lVar2;
    FUN_10046e714(auStack_60,param_2,param_2 + 0x18,param_2 + 0x40,&lStack_48);
    FUN_100488b34();
    func_0x000100488b84(auStack_60);
    func_0x00010046e31c(&lStack_48);
  }
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    uVar3 = *param_1;
    FUN_10076de84(auStack_60,param_2 + 0xd8,0x2f);
    FUN_10076dec8(uVar3,auStack_60);
    func_0x000107c60ca0(auStack_60);
  }
  return;
}



/* Entry: 10046e9e8; end: 10046ea03;  */

void FUN_10046e9e8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1] - lVar1;
  *param_2 = lVar2 >> 5;
  if (lVar2 != 0) {
    param_2[1] = lVar1;
  }
  return;
}



/* Entry: 10046ea04; end: 10046eaf7;  */

void FUN_10046ea04(undefined8 param_1,long param_2,long *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined1 auStack_58 [16];
  undefined1 *puStack_48;
  
  FUN_10046e9e8(param_4,auStack_58);
  FUN_10046eaf8(auStack_70,param_4);
  plVar1 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar1 = param_3;
  }
  FUN_10046ec34(plVar1,*(undefined8 *)(param_2 + 0x10),auStack_58);
  uStack_88 = param_5[1];
  uStack_90 = *param_5;
  uStack_80 = param_5[2];
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  FUN_100487f08(param_1,auStack_70,plVar1,&uStack_90);
  puStack_48 = (undefined1 *)&uStack_90;
  FUN_1004889dc(&puStack_48);
  if (cStack_59 < '\0') {
    func_0x000107c60e14(auStack_70[0]);
  }
  return;
}



/* Entry: 10046eaf8; end: 10046ec33;  */

void FUN_10046eaf8(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uStack_68;
  ulong uStack_60;
  byte bStack_51;
  
  if (param_2[1] != *param_2) {
    uVar4 = 1;
    uVar11 = 0;
    do {
      uVar10 = uVar4;
      FUN_10002b024(&uStack_68,"grpc.ssl_target_name_override");
      lVar9 = *param_2;
      uVar8 = *(ulong *)(lVar9 + uVar11 * 0x20 + 8);
      uVar4 = uVar8;
      func_0x000107c613d0();
      uVar1 = uStack_68;
      if ((char)bStack_51 < '\0') {
        if (uVar4 == uStack_60) {
          if (uVar4 == 0xffffffffffffffff) goto LAB_10046ec24;
          uVar6 = uStack_68;
          func_0x000107c610b0(uStack_68,uVar8);
          func_0x000107c60e14(uVar1);
          lVar9 = *param_2;
          iVar3 = (int)uVar6;
          goto joined_r0x00010046ebc0;
        }
        func_0x000107c60e14(uStack_68);
        lVar9 = *param_2;
      }
      else if (uVar4 == bStack_51) {
        if (uVar4 == 0xffffffffffffffff) {
LAB_10046ec24:
          func_0x000104abe9e0(&uStack_68);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10046ec30);
          (*pcVar2)();
        }
        puVar5 = &uStack_68;
        func_0x000107c610b0(puVar5,uVar8);
        iVar3 = (int)puVar5;
joined_r0x00010046ebc0:
        if (iVar3 == 0) {
          pcVar7 = *(char **)(lVar9 + uVar11 * 0x20 + 0x10);
          goto LAB_10046ec00;
        }
      }
      uVar4 = (ulong)((int)uVar10 + 1);
      uVar11 = uVar10;
    } while (uVar10 < (ulong)(param_2[1] - lVar9 >> 5));
  }
  pcVar7 = "";
LAB_10046ec00:
  FUN_10002b024(param_1,pcVar7);
  return;
}



/* Entry: 10046ec34; end: 10046f24f;  */

/* WARNING: Removing unreachable block (ram,0x00010046ef40) */
/* WARNING: Removing unreachable block (ram,0x00010046eec0) */
/* WARNING: Removing unreachable block (ram,0x00010046ef50) */

long FUN_10046ec34(long param_1,long *param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong *puVar11;
  char *pcVar12;
  int *piVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  ulong uStack_118;
  long lStack_110;
  long *plStack_108;
  undefined1 auStack_100 [8];
  long *plStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  undefined1 auStack_d8 [72];
  ulong uStack_90;
  undefined **ppuStack_88;
  undefined4 uStack_78;
  ulong uStack_70;
  undefined **ppuStack_68;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  FUN_100460de4(auStack_d8);
  uStack_e0 = 0;
  if (param_2 == (long *)0x0) {
    bVar6 = false;
LAB_10046f088:
    uVar10 = uStack_e0;
    puVar11 = &uStack_138;
    uStack_138 = uStack_e0;
    FUN_10084d7f0(puVar11,3,&uStack_90);
    if ((uStack_138 & 1) != 0) {
      FUN_10084dad0();
    }
    uVar4 = (undefined4)uStack_90;
    if ((int)puVar11 == 0) {
      uVar4 = 0xd;
    }
    func_0x000104adbd2c(param_1,uVar4,"Failed to create secure client channel");
    lVar14 = param_1;
    if (!bVar6) goto LAB_10046f0d8;
  }
  else {
    FUN_10045fe6c(0x1130a58d0,FUN_10046f250);
    if (lRam0000000113815be8 == 0) {
      FUN_100472138();
    }
    FUN_100477994(auStack_50);
    plVar1 = param_2 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    pcVar12 = "grpc.internal.channel_credentials";
    puVar9 = auStack_50;
    plStack_108 = param_2;
    FUN_10047acfc(&uStack_70,puVar9,"grpc.internal.channel_credentials",0x21,&plStack_108);
    uVar10 = uRam00000001136a1df0;
    FUN_10047ad6c();
    uStack_90 = uVar10;
    ppuStack_88 = &PTR_FUN_1107c4090;
    uStack_78 = 2;
    FUN_100477f30(auStack_100,&uStack_70,puVar9,pcVar12,&uStack_90);
    FUN_100478948(&uStack_90);
    (**(code **)(*param_2 + 0x20))(&uStack_f0,param_2,auStack_100);
    if (plStack_f8 != (long *)0x0) {
      plVar1 = plStack_f8 + 1;
      do {
        lVar14 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        func_0x000107c60d68(plStack_f8);
      }
    }
    ppuVar8 = ppuStack_68;
    if (ppuStack_68 != (undefined **)0x0) {
      ppuVar2 = ppuStack_68 + 1;
      do {
        puVar15 = *ppuVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar6) {
          *ppuVar2 = puVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar15 == (undefined *)0x0) {
        (**(code **)(*ppuStack_68 + 0x10))(ppuStack_68);
        func_0x000107c60d68(ppuVar8);
      }
    }
    if (plStack_108 != (long *)0x0) {
      plVar1 = plStack_108 + 1;
      do {
        lVar14 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*plStack_108 + 8))();
      }
    }
    plVar1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
      do {
        lVar14 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        func_0x000107c60d68(plVar1);
      }
    }
    uStack_128 = uStack_f0;
    plStack_120 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar1 = plStack_e8 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (param_1 == 0) {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
                    ,0x150,2,"cannot create channel with NULL target name");
      func_0x000107c2b9c4(&uStack_90,"channel target is NULL",0x16);
      func_0x000104a96544(&uStack_118,&uStack_90);
      if ((uStack_90 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      lVar14 = lRam0000000113815be8;
      if (lRam0000000113815be8 == 0) {
        FUN_100472138();
      }
      lVar16 = param_1;
      func_0x000107c613d0(param_1);
      FUN_10047bca0(&uStack_90,lVar14 + 0xf0,param_1,lVar16);
      ppuStack_68 = ppuStack_88;
      uStack_70 = uStack_90;
      FUN_1004792c0(auStack_50,&uStack_128,"grpc.server_uri",0xf,&uStack_70);
      FUN_10047cc18(&uStack_118,param_1,auStack_50,0,0);
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 1;
        do {
          lVar14 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          func_0x000107c60d68(plStack_48);
        }
      }
    }
    plVar1 = plStack_120;
    if (plStack_120 != (long *)0x0) {
      plVar3 = plStack_120 + 1;
      do {
        lVar14 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_120 + 0x10))(plStack_120);
        func_0x000107c60d68(plVar1);
      }
    }
    lVar14 = lStack_110;
    if (uStack_118 == 0) {
      lStack_110 = 0;
    }
    else {
      uStack_130 = uStack_118;
      if ((uStack_118 & 1) != 0) {
        piVar13 = (int *)(uStack_118 - 1);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar6) {
            *piVar13 = *piVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      func_0x000104addba0(&uStack_90,&uStack_130);
      uVar10 = uStack_e0;
      if (uStack_90 == uStack_e0) {
LAB_10046efe8:
        if ((uVar10 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      else {
        uStack_e0 = uStack_90;
        uStack_90 = 0x36;
        if ((uVar10 & 1) != 0) {
          FUN_10084dad0();
          uVar10 = uStack_90;
          goto LAB_10046efe8;
        }
      }
      if ((uStack_130 & 1) != 0) {
        FUN_10084dad0();
      }
      lVar14 = 0;
    }
    FUN_100487ea0(&uStack_118);
    if (plStack_e8 != (long *)0x0) {
      plVar1 = plStack_e8 + 1;
      do {
        lVar16 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        func_0x000107c60d68(plStack_e8);
      }
    }
    if (lVar14 == 0) {
      if ((uStack_e0 & 1) == 0) {
        bVar6 = false;
      }
      else {
        piVar13 = (int *)(uStack_e0 - 1);
        bVar6 = true;
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar7) {
            *piVar13 = *piVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      goto LAB_10046f088;
    }
    uVar10 = uStack_e0;
    param_1 = lVar14;
    if ((uStack_e0 & 1) == 0) goto LAB_10046f0d8;
  }
  FUN_10084dad0(uVar10);
  lVar14 = param_1;
LAB_10046f0d8:
  FUN_100467a48(auStack_d8);
  return lVar14;
}



/* Entry: 10046f250; end: 10046f27b;  */

void FUN_10046f250(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x8;
  func_0x000107c60e20();
  *puVar1 = &PTR_DAT_1107c4020;
  puRam00000001136a1df0 = puVar1;
  return;
}



/* Entry: 10046f27c; end: 10046f2df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10046f27c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_11302a2a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302a2b0) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10046f2e0; end: 10046f6d7; -[SCLensCrashLoggerOnCameraServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10046f2e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar1 = param_1 + _DAT_1127263b4;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c5dac4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127263b8;
  func_0x000107c61148();
  lVar3 = lVar1;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127263bc;
  func_0x000107c61148();
  lVar4 = lVar1;
  func_0x000107c408d0();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127263c0;
  func_0x000107c61148();
  lVar5 = lVar1;
  func_0x000107c3ddd8();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127263c4;
  func_0x000107c61148();
  lVar6 = lVar1;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127263c8;
  func_0x000107c61148();
  lVar7 = lVar1;
  func_0x000107c4af30();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127263cc;
  func_0x000107c61148();
  lVar8 = lVar1;
  func_0x000107c42a4c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar9 = lVar7;
  func_0x000107c4c280(lVar7,param_2,&PTR___NSConcreteGlobalBlock_11089c500);
  func_0x000107c61180();
  lVar10 = lVar7;
  func_0x000107c4c280(lVar7,param_2,&PTR___NSConcreteGlobalBlock_11089c550);
  func_0x000107c61180();
  lVar1 = param_1 + _DAT_1127263d0;
  func_0x000107c61148();
  lVar11 = lVar1;
  func_0x000107c4af44();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  param_1 = param_1 + _DAT_1127263d4;
  func_0x000107c61148();
  lVar1 = param_1;
  func_0x000107c3de48();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar12 = PTR_PTR_1126ae720;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  puStack_d8 = &UNK_1055caa38;
  puStack_d0 = &UNK_11089c570;
  lStack_c8 = lVar2;
  lStack_c0 = lVar4;
  lStack_b8 = lVar5;
  lStack_b0 = lVar6;
  lStack_a8 = lVar3;
  lStack_a0 = lVar10;
  lStack_98 = lVar9;
  lStack_90 = lVar8;
  lStack_88 = lVar11;
  lStack_80 = lVar1;
  func_0x000107c61174(lVar1);
  func_0x000107c61174(lVar3);
  func_0x000107c61174(lVar6);
  func_0x000107c61174(lVar5);
  func_0x000107c61174(lVar4);
  func_0x000107c61174(lVar2);
  func_0x000107c3e4fc(puVar12,param_2,&puStack_e8);
  func_0x000107c61180();
  puVar13 = PTR_PTR_1126ae720;
  puVar15 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  puStack_100 = &UNK_1055cab08;
  puStack_f8 = &UNK_11089c430;
  func_0x000107c61174();
  puStack_f0 = puVar12;
  func_0x000107c3e4fc(puVar13,param_2,&puStack_110);
  func_0x000107c61180();
  puVar14 = PTR_PTR_1126ae720;
  puStack_138 = puVar15;
  uStack_130 = 0xc2000000;
  puStack_128 = &UNK_1055cab50;
  puStack_120 = &UNK_11089c430;
  puStack_118 = puVar12;
  func_0x000107c61174(puVar12);
  func_0x000107c3e4fc(puVar14,param_2,&puStack_138);
  func_0x000107c61180();
  puVar15 = PTR_PTR_1126bb940;
  func_0x000107c610f4(PTR_PTR_1126bb940);
  func_0x000107c47228();
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puStack_118);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puStack_f0);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lStack_80);
  func_0x000107c61170(lStack_a8);
  func_0x000107c61170(lStack_b0);
  func_0x000107c61170(lStack_b8);
  func_0x000107c61170(lStack_c0);
  func_0x000107c61170(lStack_c8);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 10046f6d8; end: 10046f6df; -[SCLensCarouselLoggerServices lensCarouselSessionLogger] */

undefined8 FUN_10046f6d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10046f6e0; end: 10046f71f; -[_TtC17LensErrorHandling26SCLensErrorHandlingService errorReporterObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10046f6e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1003a5b88();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10046f720; end: 10046f7eb; -[SCLensCrashLoggerOnCameraServices initWithLensCrashLoggerFactory:lensCrashLogger:userInteractedLogger:] */

undefined1 *
FUN_10046f720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112704e58;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10046f7ec; end: 10046f857;  */

void FUN_10046f7ec(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10046f858; end: 10046f85f;  */

void FUN_10046f858(undefined8 *param_1)

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



/* Entry: 10046f860; end: 10046f8b3;  */

void FUN_10046f860(undefined8 *param_1)

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



/* Entry: 10046f8b4; end: 10046f8bf;  */

void FUN_10046f8b4(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
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
  FUN_100231f34();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a8328;
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
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc65b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c280);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 10046f8c0; end: 10046fb73;  */

void FUN_10046f8c0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100231f34();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a8328;
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
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc65b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c280);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 10046fb74; end: 10046fc57; -[SCLensUserDataServiceProvider provide] */

void FUN_10046fb74(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126dd6d8;
  func_0x000107c610f4(PTR_PTR_1126dd6d8);
  func_0x000107c4742c();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10046fc58; end: 10046fccb; -[SCLensUserDataProviderServices initWithLensUserDataProvider:] */

undefined1 * FUN_10046fc58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112700a80;
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



/* Entry: 10046fccc; end: 10046fd07;  */

void FUN_10046fccc(void)

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



/* Entry: 10046fd08; end: 10046fd0f;  */

void FUN_10046fd08(undefined8 *param_1)

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



/* Entry: 10046fd10; end: 10046fd63;  */

void FUN_10046fd10(undefined8 *param_1)

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



/* Entry: 10046fd64; end: 10046fd6b;  */

void FUN_10046fd64(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1001d6d8c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10046fe04();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10046fe90();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10046fd6c; end: 10046fe03;  */

void FUN_10046fd6c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1001d6d8c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10046fe04();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10046fe90();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 10046fe04; end: 10046fe8f;  */

void FUN_10046fe04(undefined8 param_1)

{
  if (lRam0000000113481318 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6657c4);
  return;
}



/* Entry: 10046fe90; end: 10046fecf;  */

void FUN_10046fe90(undefined8 param_1)

{
  func_0x00010046fe70();
  func_0x000107c610f8();
  func_0x000107c453e4();
  FUN_1001ddfac(0);
  func_0x000107c610f8();
  FUN_10046ff50(param_1);
  return;
}



/* Entry: 10046fed0; end: 10046ff4f; -[_TtC31WebLensesActiveLensServicesImpl32WebLensesActiveLensPublisherImpl init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10046fed0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112de81c0;
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lVar1 = _DAT_112de81c8;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10046ff50; end: 10046ff9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10046ff50(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113070388) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10046ff9c; end: 10046ffa3;  */

void FUN_10046ff9c(undefined8 *param_1)

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



/* Entry: 10046ffa4; end: 10046fff7;  */

void FUN_10046ffa4(undefined8 *param_1)

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



/* Entry: 10046fff8; end: 100470003;  */

void FUN_10046fff8(undefined8 *param_1)

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
  FUN_1001f5f58();
  func_0x000107c613fc();
  FUN_100470098(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100470004; end: 100470097;  */

void FUN_100470004(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001f5f58();
  func_0x000107c613fc();
  FUN_100470098(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}


