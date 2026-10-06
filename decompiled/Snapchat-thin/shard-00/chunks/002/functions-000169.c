/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1003e5270; end: 1003e52a3;  */

void FUN_1003e5270(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  func_0x000107c46b68();
  uVar1 = puRam00000001137fe018;
  puRam00000001137fe018 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003e52a4; end: 1003e544f;  */

void FUN_1003e52a4(undefined8 param_1,ulong param_2,char param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_3 == '\0') {
    func_0x000107c60690(1);
    uVar1 = (uint)param_2 & 0xff;
    uVar3 = 0x6863746566657270;
    if (uVar1 != 2) {
      uVar3 = 0x656e656870617267;
    }
    uVar4 = 0xe800000000000000;
    if (uVar1 != 2) {
      uVar4 = 0xee00726567676f4c;
    }
    uVar2 = 0xe900000000000061;
    uVar5 = 0x7461446775626564;
    if ((param_2 & 0xff) != 0) {
      uVar2 = 0xec00000072656c64;
      uVar5 = 0x6e6148726f727265;
    }
    if (uVar1 == 1 || (param_2 & 0xff) == 0) {
      uVar3 = uVar5;
    }
    if (uVar1 == 1 || (param_2 & 0xff) == 0) {
      uVar4 = uVar2;
    }
    func_0x000107c5fb58(param_1,uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
    return;
  }
  if (param_3 != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001003e53ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dd3f924)[param_2] * 4 + 0x1003e53b0))();
    return;
  }
  func_0x000107c60690(3);
  func_0x000107c60690(param_2);
  return;
}



/* Entry: 1003e5450; end: 1003e552b;  */

void FUN_1003e5450(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003e552c; end: 1003e5533;  */

void FUN_1003e552c(undefined8 *param_1)

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



/* Entry: 1003e5534; end: 1003e5587;  */

void FUN_1003e5534(undefined8 *param_1)

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



/* Entry: 1003e5588; end: 1003e5bbf;  */

void FUN_1003e5588(long *param_1,long param_2)

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
  FUN_10022d79c();
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
  puVar1 = PTR_PTR_1126a8028;
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
  uVar12 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010efc3ce0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar12 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  uVar12 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef32c60);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar13);
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar13);
  uVar12 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc3dc0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  uVar12 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1c950);
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



/* Entry: 1003e5bc0; end: 1003e5bf3;  */

void FUN_1003e5bc0(void)

{
  long unaff_x20;
  
  FUN_1003e5588(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1003e5bf4; end: 1003e5bfb;  */

void FUN_1003e5bf4(undefined8 *param_1)

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



/* Entry: 1003e5bfc; end: 1003e5c4f;  */

void FUN_1003e5bfc(undefined8 *param_1)

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



/* Entry: 1003e5c50; end: 1003e5c5b;  */

void FUN_1003e5c50(undefined8 *param_1)

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
  FUN_1001df490();
  func_0x000107c613fc();
  FUN_1003e5cf0(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003e5c5c; end: 1003e5cef;  */

void FUN_1003e5c5c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001df490();
  func_0x000107c613fc();
  FUN_1003e5cf0(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1003e5cf0; end: 1003e5ecf;  */

void FUN_1003e5cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a8020;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
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



/* Entry: 1003e5ed0; end: 1003e61bf; -[CTPPersistenceServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003e5ed0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
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
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_105550d98;
  puStack_90 = &UNK_11084e7a0;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112725914);
  *(undefined **)(param_1 + _DAT_112725914) = puVar1;
  func_0x000107c61170(uVar3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_d0 = puVar2;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_105550dd0;
  puStack_b8 = &UNK_11084e7a0;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112725918);
  *(undefined **)(param_1 + _DAT_112725918) = puVar1;
  func_0x000107c61170(uVar3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_f8 = puVar2;
  uStack_f0 = 0xc2000000;
  puStack_e8 = &UNK_105550e08;
  puStack_e0 = &UNK_11084e7a0;
  func_0x000107c6111c(auStack_d8,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272591c);
  *(undefined **)(param_1 + _DAT_11272591c) = puVar1;
  func_0x000107c61170(uVar3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_120 = puVar2;
  uStack_118 = 0xc2000000;
  puStack_110 = &UNK_105550e40;
  puStack_108 = &UNK_11084e7a0;
  func_0x000107c6111c(auStack_100,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112725920);
  *(undefined **)(param_1 + _DAT_112725920) = puVar1;
  func_0x000107c61170(uVar3);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_128,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112725924);
  *(undefined **)(param_1 + _DAT_112725924) = puVar2;
  func_0x000107c61170(uVar3);
  puVar2 = PTR_PTR_1126bac80;
  func_0x000107c610f4(PTR_PTR_1126bac80);
  func_0x000107c468d0();
  func_0x000107c61120(auStack_128);
  func_0x000107c61120(auStack_100);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1003e61c0; end: 1003e62bb; -[CTPPersistenceServices initWithFeedsPersistenceService:itemsPersistenceService:externalIdsPersistenceService:searchSectionPersistenceService:] */

undefined1 *
FUN_1003e61c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fdac0;
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



/* Entry: 1003e62bc; end: 1003e62ef;  */

void FUN_1003e62bc(void)

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



/* Entry: 1003e62f0; end: 1003e632f;  */

void FUN_1003e62f0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb678;
  func_0x000107c610f4(PTR_PTR_1126bb678);
  func_0x000107c48860();
  func_0x000107c5d694();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1003e6330; end: 1003e6337;  */

void FUN_1003e6330(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003e6338; end: 1003e638b;  */

void FUN_1003e6338(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003e638c; end: 1003e6af3;  */

void FUN_1003e638c(long *param_1,long param_2)

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
  FUN_10022d5fc();
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
  puVar1 = PTR_PTR_1126a8010;
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
  func_0x000107c61174(uStack_98);
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar9 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb8f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c280);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010efc3ce0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc3d00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef857e0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  uVar14 = uVar15;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar13);
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
  *(undefined8 *)(param_2 + 0x70) = uVar14;
  *param_1 = param_2;
  return;
}



/* Entry: 1003e6af4; end: 1003e6b2f;  */

void FUN_1003e6af4(void)

{
  long unaff_x20;
  
  FUN_1003e638c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1003e6b30; end: 1003e6b37;  */

void FUN_1003e6b30(undefined8 *param_1)

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



/* Entry: 1003e6b38; end: 1003e6b8b;  */

void FUN_1003e6b38(undefined8 *param_1)

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



/* Entry: 1003e6b8c; end: 1003e6b97;  */

void FUN_1003e6b8c(undefined8 *param_1)

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
  FUN_10020c5b4();
  func_0x000107c613fc();
  FUN_1003e77d4(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003e6b98; end: 1003e6c2b;  */

void FUN_1003e6b98(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10020c5b4();
  func_0x000107c613fc();
  FUN_1003e77d4(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1003e6c2c; end: 1003e6c33;  */

void FUN_1003e6c2c(undefined8 *param_1)

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



/* Entry: 1003e6c34; end: 1003e6c87;  */

void FUN_1003e6c34(undefined8 *param_1)

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



/* Entry: 1003e6c88; end: 1003e6c93;  */

void FUN_1003e6c88(long *param_1)

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
  FUN_100209abc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a7e68;
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
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
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



/* Entry: 1003e6c94; end: 1003e6f47;  */

void FUN_1003e6c94(long *param_1,long param_2)

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
  FUN_100209abc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a7e68;
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
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
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



/* Entry: 1003e6f48; end: 1003e7013; -[SCSnapchattersDataInitializer initWithSnapchattersDataMutator:userSessionContext:circumstanceEngine:] */

undefined1 *
FUN_1003e6f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fdbc8;
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



/* Entry: 1003e7014; end: 1003e7093; -[SCSnapchattersDataInitializer updateUponLoginOrRegistration] */

void FUN_1003e7014(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  puStack_28 = &UNK_108bcc90c;
  puStack_20 = &UNK_110885010;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  puStack_50 = &UNK_108bcc918;
  puStack_48 = &UNK_110885040;
  lStack_40 = param_1;
  lStack_18 = param_1;
  func_0x000107c4c6fc(*(undefined8 *)(param_1 + 0x10),param_2,&PTR___NSConcreteGlobalBlock_110ab6130
                      ,&puStack_38,&puStack_60);
  return;
}



/* Entry: 1003e7094; end: 1003e70df; -[SCBlizzardEventFieldProvider osVersion] */

void FUN_1003e7094(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x000107c40efc(PTR_PTR_1126b2930);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c650();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1003e70e0; end: 1003e712b; -[SCBlizzardEventFieldProvider osMinorVersion] */

void FUN_1003e70e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x000107c40efc(PTR_PTR_1126b2930);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ed14();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1003e712c; end: 1003e756b; -[SCBloopsUserServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003e712c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar1 = param_1 + _DAT_1127241ac;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c5da60();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar3 = lVar2;
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar1 = param_1 + _DAT_1127241b0;
  func_0x000107c61148();
  lVar4 = lVar1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127241b4;
  func_0x000107c61148();
  lVar5 = lVar1;
  func_0x000107c42eac();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  param_1 = param_1 + _DAT_1127241b8;
  func_0x000107c61148();
  lVar1 = param_1;
  func_0x000107c44580();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar6 = PTR_PTR_1126ae720;
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_1054b17fc;
  puStack_90 = &UNK_11088f858;
  func_0x000107c61174(lVar1);
  lStack_88 = lVar1;
  func_0x000107c61174(lVar4);
  lStack_80 = lVar4;
  func_0x000107c3e4fc(puVar6,param_2,&puStack_a8);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11088f8a8);
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  puStack_e0 = puVar13;
  uStack_d8 = 0xc2000000;
  puStack_d0 = &UNK_1054b18d0;
  puStack_c8 = &UNK_11088f8c8;
  puStack_c0 = puVar6;
  puStack_b8 = puVar7;
  func_0x000107c61174(lVar3);
  lStack_b0 = lVar3;
  func_0x000107c3e4fc(puVar8,param_2,&puStack_e0);
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ae720;
  puStack_108 = puVar13;
  uStack_100 = 0xc2000000;
  puStack_f8 = &UNK_1054b1924;
  puStack_f0 = &UNK_11088f8f8;
  func_0x000107c61174(lVar2);
  lStack_e8 = lVar2;
  func_0x000107c3e4fc(puVar9,param_2,&puStack_108);
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126ae720;
  puStack_138 = puVar13;
  uStack_130 = 0xc2000000;
  puStack_128 = &UNK_1054b1998;
  puStack_120 = &UNK_11088f928;
  puStack_118 = puVar9;
  func_0x000107c61174(lVar4);
  lStack_110 = lVar4;
  func_0x000107c3e4fc(puVar10,param_2,&puStack_138);
  func_0x000107c61180();
  func_0x000107c61170(lStack_110);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lStack_e8);
  puVar9 = PTR_PTR_1126ae720;
  puStack_168 = puVar13;
  uStack_160 = 0xc2000000;
  puStack_158 = &UNK_1054b1a00;
  puStack_150 = &UNK_11088f958;
  func_0x000107c61174(lVar2);
  lStack_148 = lVar2;
  lStack_140 = lVar4;
  func_0x000107c61174(lVar4);
  func_0x000107c3e4fc(puVar9,param_2,&puStack_168);
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126ae720;
  puStack_198 = puVar13;
  uStack_190 = 0xc2000000;
  puStack_188 = &UNK_1054b1ba4;
  puStack_180 = &UNK_11088f988;
  lStack_178 = lVar2;
  lStack_170 = lVar3;
  func_0x000107c61174(lVar3);
  func_0x000107c61174(lVar2);
  func_0x000107c3e4fc(puVar11,param_2,&puStack_198);
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126ae720;
  puStack_1e0 = puVar13;
  uStack_1d8 = 0xc2000000;
  puStack_1d0 = &UNK_1054b1cd0;
  puStack_1c8 = &UNK_11088f9b8;
  puStack_1c0 = puVar8;
  puStack_1b8 = puVar10;
  puStack_1b0 = puVar11;
  puStack_1a8 = puVar9;
  lStack_1a0 = lVar5;
  func_0x000107c61174(lVar5);
  func_0x000107c61174(puVar10);
  func_0x000107c3e4fc(puVar12,param_2,&puStack_1e0);
  func_0x000107c61180();
  puVar13 = PTR_PTR_1126b9968;
  func_0x000107c610f4(PTR_PTR_1126b9968);
  func_0x000107c49310();
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lStack_1a0);
  func_0x000107c61170(puStack_1b8);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lStack_170);
  func_0x000107c61170(lStack_178);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lStack_140);
  func_0x000107c61170(lStack_148);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lStack_b0);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lStack_80);
  func_0x000107c61170(lStack_88);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1003e756c; end: 1003e75b7; -[SCBlizzardEventFieldProvider deviceModel] */

void FUN_1003e756c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x000107c40efc(PTR_PTR_1126b2930);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c446b4();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1003e75b8; end: 1003e75c3; -[SCBlizzardEventFieldProvider appVersion] */

void FUN_1003e75b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf066f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0380,PTR_s_appVersion_11259f360);
  return;
}



/* Entry: 1003e75c4; end: 1003e75f3; -[SCBlizzardEventFieldProvider devicePlatform] */

void FUN_1003e75c4(void)

{
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110ea5178);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110ea5178);
  return;
}



/* Entry: 1003e75f4; end: 1003e7673; -[SCBlizzardEventFieldProvider schemeName] */

void FUN_1003e75f4(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126b0380;
  func_0x000107c51944();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar2 = (undefined **)PTR_PTR_1126b0380;
    func_0x000107c51944(PTR_PTR_1126b0380);
    func_0x000107c61180();
    ppuVar3 = ppuVar2;
    func_0x000107c5d798();
    func_0x000107c61180();
    func_0x000107c61170(ppuVar2);
  }
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1003e7674; end: 1003e7797; -[SCBloopsUserServices initWithUserServices:withUserGRPCService:withCurrentUserCache:withFriendsCache:withGetMyDataCache:] */

undefined1 *
FUN_1003e7674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fd858;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
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
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003e7798; end: 1003e77d3;  */

void FUN_1003e7798(void)

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



/* Entry: 1003e77d4; end: 1003e79bb;  */

void FUN_1003e77d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a7e40;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc1570);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0x7672655372657375;
  func_0x000107c5fadc(0x7672655372657375,0xec00000073656369);
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



/* Entry: 1003e79bc; end: 1003e7a17; -[SCBlizzardEventFieldProvider connectivityType] */

long FUN_1003e79bc(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (uRam00000001136c4a98 != 0) {
    uVar1 = uRam00000001136c4a98;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c40244();
    func_0x000107c61170(uVar1);
    lVar3 = 2 - uVar2;
    if (2 < uVar2) {
      lVar3 = -1;
    }
    return lVar3;
  }
  return -1;
}



/* Entry: 1003e7a18; end: 1003e7a1b;  */

void FUN_1003e7a18(long param_1)

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



/* Entry: 1003e7a1c; end: 1003e7b1f; -[SCBloopsCTPOptionsServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003e7a1c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1 + _DAT_1127240e4;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c5da5c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  param_1 = param_1 + _DAT_1127240e8;
  func_0x000107c61148();
  lVar1 = param_1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  puStack_50 = &UNK_1054b0108;
  puStack_48 = &UNK_11088f628;
  puVar3 = PTR_PTR_1126ae720;
  lStack_40 = lVar2;
  lStack_38 = lVar1;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_60);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126b98c0;
  func_0x000107c610f4(PTR_PTR_1126b98c0);
  func_0x000107c45b14();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1003e7b20; end: 1003e7b2b; -[SCBloopsUserServices userService] */

undefined8 FUN_1003e7b20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1003e7b2c; end: 1003e7b97;  */

undefined8 FUN_1003e7b2c(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_28;
  
  FUN_100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + *param_2);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_28);
  uVar2 = uVar1;
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1003e7b98; end: 1003e7bb7;  */

void FUN_1003e7b98(void)

{
  FUN_1003e7b2c();
  return;
}



/* Entry: 1003e7bb8; end: 1003e7c2b; -[SCBloopsCTPOptionsServices initWithCTPOptionsService:] */

undefined1 * FUN_1003e7bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fd838;
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



/* Entry: 1003e7c2c; end: 1003e7c5f;  */

void FUN_1003e7c2c(void)

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



/* Entry: 1003e7c60; end: 1003e7c83;  */

void FUN_1003e7c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1003e7c84; end: 1003e7d6b; -[SCBlizzardEventFieldProvider userLocale] */

void FUN_1003e7c84(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c4ab0 != -1) {
    FUN_10002a2fc(0x1136c4ab0,&PTR___NSConcreteGlobalBlock_11095ee00);
  }
  uVar1 = uRam00000001136c4aa8;
  func_0x000107c61174(uRam00000001136c4aa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003e7d6c; end: 1003e86ab; -[CTPGRPCNetworkServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003e7d6c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined1 auStack_358 [8];
  undefined *puStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined1 auStack_330 [8];
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined1 auStack_308 [8];
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined1 auStack_2e0 [8];
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined1 auStack_270 [8];
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined1 auStack_238 [8];
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar17 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_105582ed0;
  puStack_90 = &UNK_1108986f8;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar19 = *(undefined8 *)(param_1 + _DAT_112725bd0);
  *(undefined **)(param_1 + _DAT_112725bd0) = puVar1;
  func_0x000107c61170(uVar19);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126ae720;
  puStack_d0 = puVar17;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_105583080;
  puStack_b8 = &UNK_1108987a8;
  func_0x000107c61174(puVar2);
  puStack_b0 = puVar2;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  puStack_100 = puVar17;
  uStack_f8 = 0xc2000000;
  puStack_f0 = &UNK_1055830b0;
  puStack_e8 = &UNK_1108987d8;
  func_0x000107c61174(puVar3);
  puStack_e0 = puVar3;
  func_0x000107c61174(puVar1);
  puStack_d8 = puVar1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  puStack_140 = puVar17;
  uStack_138 = 0xc2000000;
  puStack_130 = &UNK_1055830e0;
  puStack_128 = &UNK_110898808;
  func_0x000107c6111c(auStack_108,auStack_80);
  func_0x000107c61174(puVar2);
  puStack_120 = puVar2;
  func_0x000107c61174(puVar3);
  puStack_118 = puVar3;
  func_0x000107c61174(puVar1);
  puStack_110 = puVar1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  puStack_178 = puVar17;
  uStack_170 = 0xc2000000;
  puStack_168 = &UNK_1055833ac;
  puStack_160 = &UNK_110898838;
  func_0x000107c6111c(auStack_148,auStack_80);
  func_0x000107c61174(puVar5);
  puStack_158 = puVar5;
  func_0x000107c61174(puVar4);
  puStack_150 = puVar4;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae720;
  puStack_1a8 = puVar17;
  uStack_1a0 = 0xc2000000;
  puStack_198 = &UNK_1055834c8;
  puStack_190 = &UNK_110898868;
  func_0x000107c6111c(auStack_180,auStack_80);
  func_0x000107c61174(puVar5);
  puStack_188 = puVar5;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  puStack_1e0 = puVar17;
  uStack_1d8 = 0xc2000000;
  puStack_1d0 = &UNK_1055835c4;
  puStack_1c8 = &UNK_110898898;
  func_0x000107c6111c(auStack_1b0,auStack_80);
  func_0x000107c61174(puVar5);
  puStack_1c0 = puVar5;
  func_0x000107c61174(puVar4);
  puStack_1b8 = puVar4;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ae720;
  puStack_208 = puVar17;
  uStack_200 = 0xc2000000;
  puStack_1f8 = &UNK_105583778;
  puStack_1f0 = &UNK_1108988c8;
  func_0x000107c61174(puVar2);
  puStack_1e8 = puVar2;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126ae720;
  puStack_230 = puVar17;
  uStack_228 = 0xc2000000;
  puStack_220 = &UNK_1055837a8;
  puStack_218 = &UNK_1108988f8;
  func_0x000107c6111c(auStack_210,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126ae720;
  puStack_268 = puVar17;
  uStack_260 = 0xc2000000;
  puStack_258 = &UNK_105583864;
  puStack_250 = &UNK_110898928;
  func_0x000107c6111c(auStack_238,auStack_80);
  func_0x000107c61174(puVar9);
  puStack_248 = puVar9;
  func_0x000107c61174(puVar10);
  puStack_240 = puVar10;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126ae720;
  puStack_2a0 = puVar17;
  uStack_298 = 0xc2000000;
  puStack_290 = &UNK_1055839a0;
  puStack_288 = &UNK_110898958;
  func_0x000107c6111c(auStack_270,auStack_80);
  func_0x000107c61174(puVar5);
  puStack_280 = puVar5;
  func_0x000107c61174(puVar1);
  puStack_278 = puVar1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar13 = PTR_PTR_1126ae720;
  puStack_2d8 = puVar17;
  uStack_2d0 = 0xc2000000;
  puStack_2c8 = &UNK_1055839e8;
  puStack_2c0 = &UNK_110898988;
  func_0x000107c6111c(auStack_2a8,auStack_80);
  func_0x000107c61174(puVar1);
  puStack_2b8 = puVar1;
  func_0x000107c61174(puVar4);
  puStack_2b0 = puVar4;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar14 = PTR_PTR_1126ae720;
  puStack_300 = puVar17;
  uStack_2f8 = 0xc2000000;
  puStack_2f0 = &UNK_105583b60;
  puStack_2e8 = &UNK_1108989b8;
  func_0x000107c6111c(auStack_2e0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar15 = PTR_PTR_1126ae720;
  puStack_328 = puVar17;
  uStack_320 = 0xc2000000;
  puStack_318 = &UNK_105583c00;
  puStack_310 = &UNK_1108989e8;
  func_0x000107c6111c(auStack_308,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar16 = PTR_PTR_1126ae720;
  puStack_350 = puVar17;
  uStack_348 = 0xc2000000;
  puStack_340 = &UNK_105583c80;
  puStack_338 = &UNK_110898a18;
  func_0x000107c6111c(auStack_330,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar17 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_358,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar18 = PTR_PTR_1126baee0;
  func_0x000107c610f4(PTR_PTR_1126baee0);
  func_0x000107c4851c();
  func_0x000107c61170(puVar17);
  func_0x000107c61120(auStack_358);
  func_0x000107c61170(puVar16);
  func_0x000107c61120(auStack_330);
  func_0x000107c61170(puVar15);
  func_0x000107c61120(auStack_308);
  func_0x000107c61170(puVar14);
  func_0x000107c61120(auStack_2e0);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puStack_2b0);
  func_0x000107c61170(puStack_2b8);
  func_0x000107c61120(auStack_2a8);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puStack_278);
  func_0x000107c61170(puStack_280);
  func_0x000107c61120(auStack_270);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puStack_240);
  func_0x000107c61170(puStack_248);
  func_0x000107c61120(auStack_238);
  func_0x000107c61170(puVar10);
  func_0x000107c61120(auStack_210);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puStack_1e8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puStack_1b8);
  func_0x000107c61170(puStack_1c0);
  func_0x000107c61120(auStack_1b0);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puStack_188);
  func_0x000107c61120(auStack_180);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puStack_150);
  func_0x000107c61170(puStack_158);
  func_0x000107c61120(auStack_148);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puStack_110);
  func_0x000107c61170(puStack_118);
  func_0x000107c61170(puStack_120);
  func_0x000107c61120(auStack_108);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puStack_d8);
  func_0x000107c61170(puStack_e0);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puStack_b0);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 1003e86ac; end: 1003e88eb; -[CTPNetworkServices initWithSearchClient:itemsClient:feedsClient:forYouClient:giphyClient:itemsLookupClient:userDataClient:customStickerClient:customojiClient:shareYoursClient:] */

undefined8 *
FUN_1003e86ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126fdad0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
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



/* Entry: 1003e88ec; end: 1003e8967;  */

void FUN_1003e88ec(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003e8968; end: 1003e896f;  */

void FUN_1003e8968(undefined8 *param_1)

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



/* Entry: 1003e8970; end: 1003e89c3;  */

void FUN_1003e8970(undefined8 *param_1)

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



/* Entry: 1003e89c4; end: 1003e89cb;  */

void FUN_1003e89c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_1001b1ed4();
  func_0x000107c613fc();
  FUN_1003e8a40(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003e89cc; end: 1003e8a3f;  */

void FUN_1003e89cc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_1001b1ed4();
  func_0x000107c613fc();
  FUN_1003e8a40(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 1003e8a40; end: 1003e8b97;  */

void FUN_1003e8a40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8008;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
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



/* Entry: 1003e8b98; end: 1003e8bb3; -[CTKmpStorageServiceProvider provide] */

void FUN_1003e8b98(void)

{
  func_0x000107c61160(PTR_PTR_1126bac70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1003e8bb4; end: 1003e8c4f; -[CTKmpStorageServices init] */

undefined1 * FUN_1003e8bb4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fdac8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1003e8c50; end: 1003e8c57; -[SCBlizzardEventConfigurer sessionIdProvider] */

undefined8 FUN_1003e8c50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1003e8c58; end: 1003e8c97; -[SCBlizzardExperimentProvider gpsInstrumentationEnabled] */

undefined8 FUN_1003e8c58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3ebcc();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1003e8c98; end: 1003e8d2f;  */

void FUN_1003e8c98(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR____kCFBooleanTrue_11034ab68;
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c3de48(param_1);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c3ebd4();
    func_0x000107c4d94c(puVar3,param_2,lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    puVar4 = puVar3;
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1003e8d30; end: 1003e8d47; -[SCBlizzardExperimentProvider appStartExperimentReader] */

void FUN_1003e8d30(long param_1)

{
  func_0x000107c61148(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1003e8d48; end: 1003e8e43; -[SCBlizzardGeoSignalManager currentGpsS2Token] */

void FUN_1003e8d48(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  func_0x000107c611ec(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x28);
  func_0x000107c61174(lVar5);
  func_0x000107c611f0(param_1 + 0x20);
  if (lVar5 == 0) {
    puVar4 = PTR_PTR_1126d03d8;
    func_0x000107c4d8b8(PTR_PTR_1126d03d8);
    func_0x000107c61180();
  }
  else {
    lVar1 = param_1;
    func_0x000107c3bfe4(param_1);
    lVar2 = lVar5;
    func_0x000107c3fd60(lVar5);
    func_0x000107c3bbd8(param_1,param_2,lVar2,lVar1,86400000);
    puVar4 = PTR_PTR_1126d03d8;
    if ((int)param_1 == 0) {
      func_0x000107c5d098(PTR_PTR_1126d03d8);
      func_0x000107c61180();
    }
    else {
      lVar2 = lVar5;
      func_0x000107c509c8(lVar5);
      func_0x000107c61180();
      lVar3 = lVar5;
      func_0x000107c3fd60(lVar5);
      func_0x000107c5c3d4(puVar4,param_2,lVar2,
                          lVar1 - lVar3 & (lVar1 - lVar3 >> 0x3f ^ 0xffffffffffffffffU));
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
    }
  }
  func_0x000107c61170(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1003e8e44; end: 1003e8e6b; +[_TtC22SCBlizzardGeoSignalAPI29SCBlizzardGeoSignalReadResult null] */

void FUN_1003e8e44(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c614ec();
  func_0x000107c610f8();
  func_0x000107c49474(param_1,param_2,0,2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1003e8e6c; end: 1003e8f13; -[_TtC22SCBlizzardGeoSignalAPI29SCBlizzardGeoSignalReadResult initWithValue:outcome:ageMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003e8e6c(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f52cb0);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112f52cb8) = param_4;
  *(undefined8 *)(param_1 + _DAT_112f52cc0) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_50,puVar2);
  return;
}



/* Entry: 1003e8f14; end: 1003e8f1b; -[SCBlizzardEventConfigurer graphene] */

undefined8 FUN_1003e8f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1003e8f1c; end: 1003e8f2b; -[_TtC22SCBlizzardGeoSignalAPI29SCBlizzardGeoSignalReadResult outcome] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1003e8f1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f52cb8);
}



/* Entry: 1003e8f2c; end: 1003e917f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003e8f2c(long param_1,undefined *param_2,undefined *param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11095db90);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        puVar2 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_78,puVar2);
      func_0x000107c61174(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_3);
        puVar2 = param_3;
        func_0x000107c3ac4c(param_3);
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_60,puVar2);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095db90,&uStack_98,param_4 * 100);
      puStack_80 = &uStack_98;
      FUN_10007e5dc(&puStack_80);
      lVar3 = 0;
      do {
        if ((&cStack_49)[lVar3] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar3));
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x30);
    }
  }
  func_0x000107c61170(param_3);
  puVar2 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(puVar2 + _DAT_112f52cc0));
  return;
}



/* Entry: 1003e9180; end: 1003e918f; -[_TtC22SCBlizzardGeoSignalAPI29SCBlizzardGeoSignalReadResult ageMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003e9180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f52cc0));
  return;
}



/* Entry: 1003e9190; end: 1003e91eb; -[_TtC22SCBlizzardGeoSignalAPI29SCBlizzardGeoSignalReadResult value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003e9190(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f52cb0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f52cb0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1003e91ec; end: 1003e9227; -[_TtC22SCBlizzardGeoSignalAPI29SCBlizzardGeoSignalReadResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003e91ec(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f52cb0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f52cc0));
  return;
}



/* Entry: 1003e9228; end: 1003e9267; -[SCBlizzardExperimentProvider mccInstrumentationEnabled] */

undefined8 FUN_1003e9228(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3ebcc();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1003e9268; end: 1003e92ff;  */

void FUN_1003e9268(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR____kCFBooleanTrue_11034ab68;
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c3de48(param_1);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c3ebd4();
    func_0x000107c4d94c(puVar3,param_2,lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    puVar4 = puVar3;
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1003e9300; end: 1003e93fb; -[SCBlizzardGeoSignalManager currentMcc] */

void FUN_1003e9300(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  func_0x000107c611ec(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x30);
  func_0x000107c61174(lVar5);
  func_0x000107c611f0(param_1 + 0x20);
  if (lVar5 == 0) {
    puVar4 = PTR_PTR_1126d03d8;
    func_0x000107c4d8b8(PTR_PTR_1126d03d8);
    func_0x000107c61180();
  }
  else {
    lVar1 = param_1;
    func_0x000107c3bfe4(param_1);
    lVar2 = lVar5;
    func_0x000107c3fd60(lVar5);
    func_0x000107c3bbd8(param_1,param_2,lVar2,lVar1,0x9a7ec800);
    puVar4 = PTR_PTR_1126d03d8;
    if ((int)param_1 == 0) {
      func_0x000107c5d098(PTR_PTR_1126d03d8);
      func_0x000107c61180();
    }
    else {
      lVar2 = lVar5;
      func_0x000107c4c8f0(lVar5);
      func_0x000107c61180();
      lVar3 = lVar5;
      func_0x000107c3fd60(lVar5);
      func_0x000107c5c3d4(puVar4,param_2,lVar2,
                          lVar1 - lVar3 & (lVar1 - lVar3 >> 0x3f ^ 0xffffffffffffffffU));
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
    }
  }
  func_0x000107c61170(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1003e93fc; end: 1003e949f; -[SCBlizzardEvent _getDateFromPropertiesMap:] */

void FUN_1003e93fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c4d2e0();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c4223c(lVar1);
    func_0x000107c48cfc(puVar2);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1003e94a0; end: 1003e94eb; -[SCBlizzardEventFieldProvider clientId] */

void FUN_1003e94a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = uRam00000001136c4a80;
  func_0x000107c5c734(uRam00000001136c4a80);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c43f7c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1003e94ec; end: 1003e94f3;  */

void FUN_1003e94ec(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  puVar2 = PTR_PTR_1126d0518;
  func_0x000107c610f8(PTR_PTR_1126d0518);
  func_0x000107c45db4();
  func_0x000107c615e8(uStack_38);
  func_0x000107c615e8(uStack_40);
  puVar3 = PTR_PTR_1126a6fa8;
  func_0x000107c610f8();
  func_0x000107c46808();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(puVar2);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e959c);
  (*pcVar1)();
}



/* Entry: 1003e94f4; end: 1003e959b;  */

void FUN_1003e94f4(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  puVar2 = PTR_PTR_1126d0518;
  func_0x000107c610f8(PTR_PTR_1126d0518);
  func_0x000107c45db4();
  func_0x000107c615e8(uStack_38);
  func_0x000107c615e8(uStack_40);
  puVar3 = PTR_PTR_1126a6fa8;
  func_0x000107c610f8();
  func_0x000107c46808();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(puVar2);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e959c);
  (*pcVar1)();
}



/* Entry: 1003e959c; end: 1003e9613; -[SCBlizzardClientIdProviderImpl initWithExperimentProvider:] */

undefined1 * FUN_1003e959c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f4ad0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 8) = 0;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003e9614; end: 1003e963f;  */

void FUN_1003e9614(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003e9640; end: 1003e96c3; -[SCBlizzardClientIdProviderImpl getClientId] */

void FUN_1003e9640(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x000107c611ec(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c3b878(param_1,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c611f0(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1003e96c4; end: 1003e9753; -[SCBlizzardClientIdProviderImpl _getMonthlyClientId:] */

void FUN_1003e96c4(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x000107c3bd2c(param_1,param_2,param_3);
    }
    else {
      uVar1 = param_1;
      func_0x000107c3bac0(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x28));
      if ((uVar1 & 1) == 0) {
        func_0x000107c3c30c(param_1,param_2,param_3);
        func_0x000107c611b0();
      }
    }
    ppuVar2 = *(undefined ***)(param_1 + 0x20);
    func_0x000107c61174(ppuVar2);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1003e9754; end: 1003e9a4f; -[SCBlizzardClientIdProviderImpl _loadClientIdFromUserDefaultsOrKeychain:] */

undefined *
FUN_1003e9754(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  puVar10 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c5ba34();
  func_0x000107c61180();
  puVar2 = puVar10;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  puVar10 = puVar2;
  func_0x000107c4d9e8(puVar2,param_2,&PTR____CFConstantStringClassReference_110e6d558);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4d9e8(puVar2,param_2,&PTR____CFConstantStringClassReference_110e6d578);
  func_0x000107c61180();
  puVar9 = param_3;
  if (puVar10 == (undefined *)0x0 || puVar3 == (undefined *)0x0) {
    puVar4 = param_1;
    func_0x000107c3c3dc();
    func_0x000107c61180();
    puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
    if (puVar4 == (undefined *)0x0) {
      func_0x000107c3c30c(param_1);
      func_0x000107c611b0();
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x000107c61158();
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_80 = puVar5;
      func_0x000107c61158();
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      puStack_78 = puVar6;
      func_0x000107c61158();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar5;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,3);
      func_0x000107c61180();
      func_0x000107c5a74c(puVar7,param_2,puVar6);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      lStack_88 = 0;
      puVar5 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
      param_4 = puVar4;
      func_0x000107c5d1d0(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98,param_2,puVar7,puVar4,
                          &lStack_88);
      func_0x000107c61180();
      lVar1 = lStack_88;
      func_0x000107c61170(puVar2);
      if (lVar1 == 0) {
        puVar2 = puVar5;
        func_0x000107c4d9e8(puVar5,param_2,&PTR____CFConstantStringClassReference_110e6d558);
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        puVar6 = puVar5;
        func_0x000107c4d9e8(puVar5,param_2,&PTR____CFConstantStringClassReference_110e6d578);
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        puVar10 = puVar2;
        puVar3 = puVar6;
        if ((puVar2 == (undefined *)0x0) ||
           (puVar8 = param_1, param_4 = puVar6, func_0x000107c3bac0(param_1,param_2,param_3),
           ((ulong)puVar8 & 1) == 0)) {
          func_0x000107c3c30c(param_1);
          func_0x000107c611b0();
        }
        else {
          puVar9 = puVar2;
          param_4 = puVar6;
          func_0x000107c3cb80(param_1);
        }
      }
      else {
        func_0x000107c3c30c(param_1);
        func_0x000107c611b0();
      }
      func_0x000107c61170(puVar7);
      puVar2 = puVar5;
    }
    func_0x000107c61170(puVar4);
  }
  else {
    puVar7 = param_1;
    param_4 = puVar3;
    func_0x000107c3bac0(param_1,param_2,param_3);
    if ((int)puVar7 == 0) {
      func_0x000107c3c30c(param_1);
      func_0x000107c611b0();
    }
    else {
      puVar9 = puVar10;
      param_4 = puVar3;
      func_0x000107c3af84(param_1);
    }
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  func_0x000107c60e78();
  func_0x000107c61174(puVar9);
  puVar10 = (undefined *)0x0;
  if ((puVar9 != (undefined *)0x0) && (param_4 != (undefined *)0x0)) {
    func_0x000107c61174(param_4);
    func_0x000107c4f5b8(param_3);
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
    func_0x000107c61160(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
    func_0x000107c53e50();
    puVar3 = param_3;
    func_0x000107c41328(param_3,param_2,puVar2,param_4,0);
    func_0x000107c61180();
    puVar10 = param_4;
    func_0x000107c3fec0(param_4,param_2,puVar9);
    func_0x000107c61170(param_4);
    if (puVar10 == (undefined *)0x1) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = puVar9;
      func_0x000107c3fec0(puVar9,param_2,puVar3);
      puVar10 = (undefined *)(ulong)(puVar10 == (undefined *)0xffffffffffffffff);
    }
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(puVar9);
  return puVar10;
}



/* Entry: 1003e9a50; end: 1003e9b4b; -[SCBlizzardClientIdProviderImpl _isClientIdWithinOneMonth:clientIdDate:] */

bool FUN_1003e9a50(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x000107c61174(param_3);
  bVar1 = false;
  if ((param_3 != 0) && (param_4 != 0)) {
    func_0x000107c61174(param_4);
    func_0x000107c4f5b8(param_1);
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
    func_0x000107c61160(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
    func_0x000107c53e50();
    uVar3 = param_1;
    func_0x000107c41328(param_1,param_2,puVar2,param_4,0);
    func_0x000107c61180();
    lVar4 = param_4;
    func_0x000107c3fec0(param_4,param_2,param_3);
    func_0x000107c61170(param_4);
    if (lVar4 == 1) {
      bVar1 = false;
    }
    else {
      lVar4 = param_3;
      func_0x000107c3fec0(param_3,param_2,uVar3);
      bVar1 = lVar4 == -1;
    }
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 1003e9b4c; end: 1003e9bab; -[SCBlizzardClientIdProviderImpl pstCalendar] */

void FUN_1003e9b4c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    func_0x000107c610f4();
    func_0x000107c45b58();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1003e9bac; end: 1003e9c0f; -[SCBlizzardClientIdProviderImpl _cacheInMemory:date:] */

/* WARNING: Possible PIC construction at 0x0001003e9bec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003e9bf0) */

void FUN_1003e9bac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003e9c10; end: 1003e9c17; -[SCBlizzardEvent isUserTrackedEvent] */

undefined8 FUN_1003e9c10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1003e9c18; end: 1003e9c43; -[SCBlizzardEventConfigurer userGuid] */

void FUN_1003e9c18(void)

{
  undefined8 uVar1;
  
  uVar1 = uRam00000001136c4a58;
  func_0x000107c61174(uRam00000001136c4a58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003e9c44; end: 1003e9e47; -[SCBlizzardEventConfigurer configureAppOpenInformationForBlizzardEvent:] */

/* WARNING: Possible PIC construction at 0x0001003e9c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003e9cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003e9cf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003e9d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003e9e30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003e9d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003e9d78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003e9dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003e9df0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003e9dd8) */
/* WARNING: Removing unreachable block (ram,0x0001003e9ddc) */
/* WARNING: Removing unreachable block (ram,0x0001003e9d7c) */
/* WARNING: Removing unreachable block (ram,0x0001003e9d80) */
/* WARNING: Removing unreachable block (ram,0x0001003e9d60) */
/* WARNING: Removing unreachable block (ram,0x0001003e9dac) */
/* WARNING: Removing unreachable block (ram,0x0001003e9d64) */
/* WARNING: Removing unreachable block (ram,0x0001003e9d10) */
/* WARNING: Removing unreachable block (ram,0x0001003e9e28) */
/* WARNING: Removing unreachable block (ram,0x0001003e9d2c) */
/* WARNING: Removing unreachable block (ram,0x0001003e9cf8) */
/* WARNING: Removing unreachable block (ram,0x0001003e9cc4) */
/* WARNING: Removing unreachable block (ram,0x0001003e9c90) */
/* WARNING: Removing unreachable block (ram,0x0001003e9d34) */
/* WARNING: Removing unreachable block (ram,0x0001003e9c94) */
/* WARNING: Removing unreachable block (ram,0x0001003e9df4) */
/* WARNING: Removing unreachable block (ram,0x0001003e9e34) */
/* WARNING: Removing unreachable block (ram,0x0001003e9df8) */
/* WARNING: Removing unreachable block (ram,0x0001003e9e20) */
/* WARNING: Removing unreachable block (ram,0x0001003e9e2c) */

void FUN_1003e9c44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c4d3e4(param_3);
  func_0x000107c61180();
  func_0x000107c49d0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1003e9e48; end: 1003e9e97; -[SCBlizzardEvent name] */

void FUN_1003e9e48(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4d2e0();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003e9e98; end: 1003e9f43; -[SCBlizzardEventConfigurer configureEventConfigVersionForBlizzardEvent:] */

/* WARNING: Possible PIC construction at 0x0001003e9ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003e9f24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003e9ee4) */
/* WARNING: Removing unreachable block (ram,0x0001003e9ee8) */
/* WARNING: Removing unreachable block (ram,0x0001003e9f28) */
/* WARNING: Removing unreachable block (ram,0x0001003e9f30) */

void FUN_1003e9e98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c4d3e4(param_3);
  func_0x000107c61180();
  func_0x000107c49d0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1003e9f44; end: 1003ea0c7; -[SCBlizzardEventConfigurer configureSamplingRatesForBlizzardEvent:] */

/* WARNING: Possible PIC construction at 0x0001003e9f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ea000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ea010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ea090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ea0a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003ea094) */
/* WARNING: Removing unreachable block (ram,0x0001003ea014) */
/* WARNING: Removing unreachable block (ram,0x0001003ea004) */
/* WARNING: Removing unreachable block (ram,0x0001003e9f84) */
/* WARNING: Removing unreachable block (ram,0x0001003e9f88) */
/* WARNING: Removing unreachable block (ram,0x0001003ea0a4) */
/* WARNING: Removing unreachable block (ram,0x0001003ea0ac) */

void FUN_1003e9f44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c4f908(param_3);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1003ea0c8; end: 1003ea0cf; -[SCBlizzardEvent rawEvent] */

undefined8 FUN_1003ea0c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1003ea0d0; end: 1003ea0d7; -[SCBlizzardEventConfigurer samplingRateResolver] */

undefined8 FUN_1003ea0d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1003ea0d8; end: 1003ea0df; -[SCBlizzardEventLoggerAdapter pageViewStateManager] */

undefined8 FUN_1003ea0d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 1003ea0e0; end: 1003ea183; -[SCBlizzardPageViewStateManager attributeEventToTabSession:] */

/* WARNING: Possible PIC construction at 0x0001003ea130: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003ea134) */
/* WARNING: Removing unreachable block (ram,0x0001003ea148) */
/* WARNING: Removing unreachable block (ram,0x0001003ea138) */
/* WARNING: Removing unreachable block (ram,0x0001003ea154) */

void FUN_1003ea0e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x18);
  func_0x000107c4d3e4(param_3);
  func_0x000107c61180();
  func_0x000107c49d0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1003ea184; end: 1003ea2db; -[SCBlizzardPageViewStateManager _augmentTabInfo:] */

/* WARNING: Possible PIC construction at 0x0001003ea1d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ea1fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ea26c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ea2a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ea2b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003ea2a4) */
/* WARNING: Removing unreachable block (ram,0x0001003ea270) */
/* WARNING: Removing unreachable block (ram,0x0001003ea200) */
/* WARNING: Removing unreachable block (ram,0x0001003ea1d4) */
/* WARNING: Removing unreachable block (ram,0x0001003ea1d8) */
/* WARNING: Removing unreachable block (ram,0x0001003ea2b8) */
/* WARNING: Removing unreachable block (ram,0x0001003ea1dc) */
/* WARNING: Removing unreachable block (ram,0x0001003ea2b4) */
/* WARNING: Removing unreachable block (ram,0x0001003ea2c4) */

void FUN_1003ea184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c4f908(param_3);
  func_0x000107c61180();
  FUN_10010fab4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1003ea2dc; end: 1003ea38f; -[SCBlizzardPageViewStateManager _augmentTabInfoWithoutTabCorrection:] */

/* WARNING: Possible PIC construction at 0x0001003ea344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ea378: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003ea348) */
/* WARNING: Removing unreachable block (ram,0x0001003ea37c) */

void FUN_1003ea2dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x000107c4d2e0(param_3);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4e2e8(uVar1);
  func_0x000107c4d974(puVar2,param_2,uVar1);
  func_0x000107c61180();
  func_0x000107c56bd8(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e6db98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}


