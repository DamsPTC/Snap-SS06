/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10077b930; end: 10077b937;  */

void FUN_10077b930(undefined8 *param_1)

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



/* Entry: 10077b938; end: 10077b98b;  */

void FUN_10077b938(undefined8 *param_1)

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



/* Entry: 10077b98c; end: 10077c04f;  */

void FUN_10077b98c(long *param_1,long param_2)

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
  FUN_1002be164();
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
  puVar1 = PTR_PTR_1126a9320;
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
  func_0x000107c61174(uStack_a0);
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar13 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efe1e40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar13 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar13 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc7150);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar13 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef384a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar1);
  uVar13 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc8a80);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc3d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d360);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f00d550);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00d050);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar13);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar13 = uVar14;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar12);
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
  *(undefined8 *)(param_2 + 0x68) = uVar13;
  *param_1 = param_2;
  return;
}



/* Entry: 10077c050; end: 10077c08b;  */

void FUN_10077c050(void)

{
  long unaff_x20;
  
  FUN_10077b98c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 10077c08c; end: 10077c093;  */

void FUN_10077c08c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10077c094; end: 10077c0e7;  */

void FUN_10077c094(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10077c0e8; end: 10077c66f;  */

void FUN_10077c0e8(long *param_1,long param_2)

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
  undefined8 uStack_a8;
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
  FUN_100083b20(&uStack_a8);
  FUN_1002bcad8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  puVar1 = PTR_PTR_1126a98d0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar11 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar11 = 0x53534664756f6c63;
  func_0x000107c5fadc(0x53534664756f6c63,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar11 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar11 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f00d550);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar11 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f00d310);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00aca0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  uVar11 = uVar12;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  *(undefined8 *)(param_2 + 0x58) = uVar11;
  *param_1 = param_2;
  return;
}



/* Entry: 10077c670; end: 10077c6a3;  */

void FUN_10077c670(void)

{
  long unaff_x20;
  
  FUN_10077c0e8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10077c6a4; end: 10077c793; -[SCSpectaclesAuxiliaryContentServiceProvider provide] */

void FUN_10077c6a4(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126d36b8;
  func_0x000107c610f4(PTR_PTR_1126d36b8);
  func_0x000107c457bc();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10077c794; end: 10077c88f; -[SCSpectaclesAuxiliaryContentServices initWithAssetMetadataHandler:renderingAvailabilityHandler:renderingMetadataProvider:cacheClearing:] */

undefined1 *
FUN_10077c794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ffea0;
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



/* Entry: 10077c890; end: 10077c8f3;  */

void FUN_10077c890(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10077c8f4; end: 10077c9d7; -[SCMemoriesCachingMediaHelperServiceProvider provide] */

void FUN_10077c8f4(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126bfbb0;
  func_0x000107c610f4(PTR_PTR_1126bfbb0);
  func_0x000107c45b48();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10077c9d8; end: 10077ca4b; -[SCMemoriesCachingMediaHelperServices initWithCachingMediaHelper:] */

undefined1 * FUN_10077c9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fbdc8;
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



/* Entry: 10077ca4c; end: 10077cabf;  */

void FUN_10077ca4c(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10077cac0; end: 10077cac7;  */

void FUN_10077cac0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10077cac8; end: 10077cb1b;  */

void FUN_10077cac8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10077cb1c; end: 10077d097;  */

void FUN_10077cb1c(long *param_1,long param_2)

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
  undefined *puVar12;
  undefined8 uStack_a8;
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
  FUN_100083b20(&uStack_a8);
  FUN_1002c64ac();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  puVar1 = PTR_PTR_1126a9420;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f00d870);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc8ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1dff0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar11 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efcd7a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f00d840);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f00dcf0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  puVar12 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x58) = puVar12;
  *param_1 = param_2;
  return;
}



/* Entry: 10077d098; end: 10077d0cb;  */

void FUN_10077d098(void)

{
  long unaff_x20;
  
  FUN_10077cb1c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10077d0cc; end: 10077d0d3;  */

void FUN_10077d0cc(undefined8 *param_1)

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



/* Entry: 10077d0d4; end: 10077d127;  */

void FUN_10077d0d4(undefined8 *param_1)

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



/* Entry: 10077d128; end: 10077d13b;  */

void FUN_10077d128(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  FUN_1002c343c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  FUN_10077d2bc(0);
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
  func_0x000107c61174(uStack_98);
  FUN_10077d338(uStack_68,uVar2,uVar3,uVar4,uVar5,uVar6,uStack_98);
  *(undefined8 *)(lVar1 + 0x10) = uStack_68;
  FUN_10077d5f8();
  *(undefined8 *)(lVar1 + 0x48) = uStack_68;
  *param_1 = lVar1;
  return;
}



/* Entry: 10077d13c; end: 10077d2bb;  */

void FUN_10077d13c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  FUN_1002c343c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  FUN_10077d2bc(0);
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
  func_0x000107c61174(uStack_98);
  FUN_10077d338(uStack_68,uVar1,uVar2,uVar3,uVar4,uVar5,uStack_98);
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  FUN_10077d5f8();
  *(undefined8 *)(param_2 + 0x48) = uStack_68;
  *param_1 = param_2;
  return;
}



/* Entry: 10077d2bc; end: 10077d337;  */

void FUN_10077d2bc(undefined8 param_1)

{
  if (lRam0000000112e20928 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e689958);
  return;
}



/* Entry: 10077d338; end: 10077d56b;  */

void FUN_10077d338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_110474c70;
  func_0x000107c613fc(&UNK_110474c70,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  puStack_80 = &UNK_101d19274;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101d19040;
  puStack_88 = &UNK_110474c88;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  puVar4 = puVar1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar2 = &UNK_110474cc0;
  func_0x000107c613fc(&UNK_110474cc0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  *(undefined8 *)(puVar2 + 0x28) = param_7;
  puStack_80 = &UNK_101d19264;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101d19040;
  puStack_88 = &UNK_110474cd8;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_78;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  uVar5 = 0;
  FUN_1002c4af0(0);
  func_0x000107c610f8();
  FUN_10077d594(puVar4,puVar1,uVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  *(undefined **)(unaff_x20 + 0x10) = puVar4;
  return;
}



/* Entry: 10077d56c; end: 10077d593;  */

void FUN_10077d56c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10077d594; end: 10077d5f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077d594(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ff73c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff73d0) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10077d5f8; end: 10077d5ff;  */

void FUN_10077d5f8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10077d600; end: 10077d653;  */

void FUN_10077d600(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10077d654; end: 10077d8b7;  */

uint FUN_10077d654(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48)) {
    func_0x0001001b536c();
    param_1 = param_1 + 0x20;
    func_0x00010064da40(param_1,param_2 + 0x20);
    iVar1 = (int)param_1;
    if ((((iVar1 == 0) || (*(int *)(unaff_x20 + 0x4c) != *(int *)(unaff_x19 + 0x4c))) ||
        (FUN_10064dafc(), iVar1 == 0)) ||
       (*(int *)(unaff_x20 + 0x120) != *(int *)(unaff_x19 + 0x120))) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)(*(short *)(unaff_x20 + 0x124) == *(short *)(unaff_x19 + 0x124));
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2 | 0x100;
}



/* Entry: 10077d8b8; end: 10077db57; -[SCMemoriesSnapDocThumbnailGeneratorServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077d8b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_98;
  
  puVar1 = PTR_PTR_1126bfb58;
  func_0x000107c610f4();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11272b9ec;
    func_0x000107c61148();
  }
  lVar2 = lVar10;
  func_0x000107c3ef70();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11272b9f0;
    func_0x000107c61148();
  }
  lVar3 = lVar11;
  func_0x000107c4e17c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11272b9f4;
    func_0x000107c61148();
  }
  lVar4 = lVar12;
  func_0x000107c5b1d4();
  func_0x000107c61180();
  if (param_1 == 0) {
    uStack_98 = 0;
    lVar13 = 0;
  }
  else {
    uStack_98 = param_1 + _DAT_11272b9f8;
    func_0x000107c61148();
    lVar13 = param_1 + _DAT_11272b9fc;
    func_0x000107c61148();
  }
  lVar5 = lVar13;
  func_0x000107c40748();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11272ba00;
    func_0x000107c61148();
  }
  lVar6 = lVar14;
  func_0x000107c4cb88();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11272ba04;
    func_0x000107c61148();
  }
  lVar7 = lVar15;
  func_0x000107c5b1c4();
  func_0x000107c61180();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11272ba08;
    func_0x000107c61148();
  }
  lVar8 = param_1;
  func_0x000107c5b29c();
  func_0x000107c61180();
  func_0x000107c476dc(puVar1,param_2,lVar2,lVar3,lVar4,uStack_98,lVar5,lVar6,lVar7,lVar8);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar10);
  puVar9 = PTR_PTR_1126bfb60;
  func_0x000107c610f4(PTR_PTR_1126bfb60);
  func_0x000107c47754();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10077db58; end: 10077db5f; -[SCMemoriesCachingMediaHelperServices cachingMediaHelper] */

undefined8 FUN_10077db58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10077db60; end: 10077db67; -[SCSnapDocConverterServices converter] */

undefined8 FUN_10077db60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10077db68; end: 10077db77; -[_TtC26MemoriesExperimentServices34SCLegacyMemoriesExperimentServices memoriesExperimentService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077db68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113080730));
  return;
}



/* Entry: 10077db78; end: 10077db87; -[_TtC35SCMemoriesSnapDocEncryptionServices33MemoriesSnapDocEncryptionServices snapDocEncryptionManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077db78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff4be8));
  return;
}



/* Entry: 10077db88; end: 10077db97; -[_TtC21SCSnapDocThumbnailAPI26SCSnapDocThumbnailServices snapEditorThumbnailGenerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077db88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff73d0));
  return;
}



/* Entry: 10077db98; end: 10077dd37; -[SCMemoriesSnapDocThumbnailGenerator initWithMemoriesCachingMediaHelper:overlayFormatter:snapDocManager:snapDocEditorServices:snapDocConverter:memoriesExperimentService:memoriesSnapDocEncryptionManager:snapEditorThumbnailGenerator:] */

undefined1 *
FUN_10077db98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  puStack_68 = PTR_PTR_1126eac00;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10077dd38; end: 10077ddab; -[SCMemoriesSnapDocThumbnailGeneratorServices initWithMemoriesSnapDocThumbnailGenerator:] */

undefined1 * FUN_10077dd38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fbdd8;
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



/* Entry: 10077ddac; end: 10077de0f;  */

void FUN_10077ddac(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10077de10; end: 10077de17;  */

void FUN_10077de10(undefined8 *param_1)

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



/* Entry: 10077de18; end: 10077de6b;  */

void FUN_10077de18(undefined8 *param_1)

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



/* Entry: 10077de6c; end: 10077de73;  */

void FUN_10077de6c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_100217ed4();
  func_0x000107c613fc();
  FUN_10077dee8(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 10077de74; end: 10077dee7;  */

void FUN_10077de74(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_100217ed4();
  func_0x000107c613fc();
  FUN_10077dee8(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 10077dee8; end: 10077e04b;  */

void FUN_10077dee8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8550;
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
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
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



/* Entry: 10077e04c; end: 10077e41f;  */

/* WARNING: Removing unreachable block (ram,0x00010077e3d8) */
/* WARNING: Removing unreachable block (ram,0x00010077e7a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077e04c(undefined1 *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,long param_7)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  puVar6 = &uStack_100;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar3 = param_3;
  puVar7 = param_4;
  puVar4 = param_5;
  puVar5 = param_6;
  lVar10 = param_7;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  if (param_1 != (undefined1 *)0x0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_11095b8e0;
    (**(code **)(*plVar1 + 0x28))();
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
      FUN_10002b838(auStack_e0,puVar2);
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
      FUN_10002b838(auStack_c8,puVar2);
      func_0x000107c61174(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_4);
        puVar2 = param_4;
        func_0x000107c3ac4c(param_4);
      }
      func_0x000107c61170(param_4);
      FUN_10002b838(auStack_b0,puVar2);
      func_0x000107c61174(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_5);
        puVar2 = param_5;
        func_0x000107c3ac4c(param_5);
      }
      func_0x000107c61170(param_5);
      FUN_10002b838(auStack_98,puVar2);
      func_0x000107c61174(param_6);
      if (param_6 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_6);
        puVar2 = param_6;
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_6);
      FUN_10002b838(auStack_80,puVar2);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      FUN_10007e1e8(&uStack_100,auStack_e0,&lStack_68,5);
      puVar7 = (undefined *)(param_7 * 10);
      puVar2 = &UNK_11095b8e0;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_e8 = (undefined1 *)&uStack_100;
      FUN_10007e5dc(&puStack_e8);
      lVar9 = 0;
      param_1 = auStack_e0;
      puVar3 = (undefined *)puVar6;
      do {
        if ((&cStack_69)[lVar9] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_80 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x78);
    }
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  puVar11 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    func_0x000107c61170(param_6);
    do {
      param_1 = param_1 + -0x18;
    } while (param_1 != auStack_e0);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_2);
    func_0x000107c60bd8();
    lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x000107c61174(puVar2);
    func_0x000107c61174(puVar3);
    func_0x000107c61174(puVar7);
    func_0x000107c61174(puVar4);
    func_0x000107c61174(puVar5);
    if (puVar11 != (undefined *)0x0) {
      plVar1 = *(long **)(puVar11 + 8);
      (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11095bd40);
      if ((int)plVar1 != 0) {
        plVar1 = *(long **)(puVar11 + 8);
        func_0x000107c61174(puVar2);
        if (puVar2 == (undefined *)0x0) {
          puVar11 = &UNK_10f3adf9b;
        }
        else {
          puVar11 = puVar2;
          func_0x000107c61178(puVar2);
          func_0x000107c3ac4c();
        }
        func_0x000107c61170(puVar2);
        FUN_10002b838(auStack_1e0,puVar11);
        func_0x000107c61174(puVar3);
        if (puVar3 == (undefined *)0x0) {
          puVar11 = &UNK_10f3adf9b;
        }
        else {
          func_0x000107c61178(puVar3);
          puVar11 = puVar3;
          func_0x000107c3ac4c(puVar3);
        }
        func_0x000107c61170(puVar3);
        FUN_10002b838(auStack_1c8,puVar11);
        func_0x000107c61174(puVar7);
        if (puVar7 == (undefined *)0x0) {
          puVar11 = &UNK_10f3adf9b;
        }
        else {
          func_0x000107c61178(puVar7);
          puVar11 = puVar7;
          func_0x000107c3ac4c(puVar7);
        }
        func_0x000107c61170(puVar7);
        FUN_10002b838(auStack_1b0,puVar11);
        func_0x000107c61174(puVar4);
        if (puVar4 == (undefined *)0x0) {
          puVar11 = &UNK_10f3adf9b;
        }
        else {
          func_0x000107c61178(puVar4);
          puVar11 = puVar4;
          func_0x000107c3ac4c(puVar4);
        }
        func_0x000107c61170(puVar4);
        FUN_10002b838(auStack_198,puVar11);
        func_0x000107c61174(puVar5);
        if (puVar5 == (undefined *)0x0) {
          puVar11 = &UNK_10f3adf9b;
        }
        else {
          func_0x000107c61178(puVar5);
          puVar11 = puVar5;
          func_0x000107c3ac4c(puVar5);
        }
        func_0x000107c61170(puVar5);
        FUN_10002b838(auStack_180,puVar11);
        uStack_200 = 0;
        uStack_1f8 = 0;
        uStack_1f0 = 0;
        FUN_10007e1e8(&uStack_200,auStack_1e0,&lStack_168,5);
        (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095bd40,&uStack_200,lVar10);
        puStack_1e8 = (undefined1 *)&uStack_200;
        FUN_10007e5dc(&puStack_1e8);
        lVar10 = 0;
        puVar11 = auStack_1e0;
        do {
          if ((&cStack_169)[lVar10] < '\0') {
            func_0x000107c60e14(*(undefined8 *)((long)auStack_180 + lVar10));
          }
          lVar10 = lVar10 + -0x18;
        } while (lVar10 != -0x78);
      }
    }
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar3);
    puVar8 = puVar2;
    func_0x000107c61170();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
      func_0x000107c60e78();
      func_0x000107c61170(puVar5);
      do {
        puVar11 = puVar11 + -0x18;
      } while (puVar11 != auStack_1e0);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c60bd8();
      if (puVar8 == (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = puVar8 + _DAT_112727234;
        func_0x000107c61148();
      }
      puVar2 = puVar8;
      func_0x000107c4cb6c();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      puVar3 = PTR_PTR_1126ae720;
      func_0x000107c3e4fc();
      func_0x000107c61180();
      puVar7 = PTR_PTR_1126ae720;
      func_0x000107c3e4fc();
      func_0x000107c61180();
      puVar4 = PTR_PTR_1126ae720;
      func_0x000107c3e4fc(PTR_PTR_1126ae720);
      func_0x000107c61180();
      puVar5 = PTR_PTR_1126bc7a8;
      func_0x000107c610f4(PTR_PTR_1126bc7a8);
      func_0x000107c46390();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10077e420; end: 10077e7ef;  */

/* WARNING: Removing unreachable block (ram,0x00010077e7a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077e420(undefined1 *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined8 param_7)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  if (param_1 != (undefined1 *)0x0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11095bd40);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar6 = &UNK_10f3adf9b;
      }
      else {
        puVar6 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_e0,puVar6);
      func_0x000107c61174(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar6 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_3);
        puVar6 = param_3;
        func_0x000107c3ac4c(param_3);
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_c8,puVar6);
      func_0x000107c61174(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar6 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_4);
        puVar6 = param_4;
        func_0x000107c3ac4c(param_4);
      }
      func_0x000107c61170(param_4);
      FUN_10002b838(auStack_b0,puVar6);
      func_0x000107c61174(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar6 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_5);
        puVar6 = param_5;
        func_0x000107c3ac4c(param_5);
      }
      func_0x000107c61170(param_5);
      FUN_10002b838(auStack_98,puVar6);
      func_0x000107c61174(param_6);
      if (param_6 == (undefined *)0x0) {
        puVar6 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_6);
        puVar6 = param_6;
        func_0x000107c3ac4c(param_6);
      }
      func_0x000107c61170(param_6);
      FUN_10002b838(auStack_80,puVar6);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      FUN_10007e1e8(&uStack_100,auStack_e0,&lStack_68,5);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095bd40,&uStack_100,param_7);
      puStack_e8 = (undefined1 *)&uStack_100;
      FUN_10007e5dc(&puStack_e8);
      lVar7 = 0;
      param_1 = auStack_e0;
      do {
        if ((&cStack_69)[lVar7] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_80 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != -0x78);
    }
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  puVar6 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    func_0x000107c61170(param_6);
    do {
      param_1 = param_1 + -0x18;
    } while (param_1 != auStack_e0);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_2);
    func_0x000107c60bd8();
    if (puVar6 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar6 + _DAT_112727234;
      func_0x000107c61148();
    }
    puVar2 = puVar6;
    func_0x000107c4cb6c();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    puVar6 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc(PTR_PTR_1126ae720);
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126bc7a8;
    func_0x000107c610f4(PTR_PTR_1126bc7a8);
    func_0x000107c46390();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  return;
}



/* Entry: 10077e7f0; end: 10077e947; -[SCMemoriesDBBridgeServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077e7f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112727234;
    func_0x000107c61148();
  }
  lVar1 = param_1;
  func_0x000107c4cb6c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  puStack_68 = &UNK_105660d2c;
  puStack_60 = &UNK_1108a4ea0;
  puVar2 = PTR_PTR_1126ae720;
  lStack_58 = lVar1;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_78);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108a4ed0);
  func_0x000107c61180();
  puStack_b0 = puVar4;
  uStack_a8 = 0xc2000000;
  puStack_a0 = &UNK_105660d90;
  puStack_98 = &UNK_1108a4ef0;
  puVar4 = PTR_PTR_1126ae720;
  lStack_90 = lVar1;
  puStack_88 = puVar2;
  puStack_80 = puVar3;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_b0);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126bc7a8;
  func_0x000107c610f4(PTR_PTR_1126bc7a8);
  func_0x000107c46390();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10077e948; end: 10077e9eb; -[SCMemoriesDBBridgeServices initWithDataModelFetcher:dataModelMutator:] */

undefined1 *
FUN_10077e948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1127022d8;
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



/* Entry: 10077e9ec; end: 10077ea17;  */

void FUN_10077e9ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10077ea18; end: 10077eabb; -[SCBlizzardAllTiersFileQueue addFiles:region:] */

/* WARNING: Possible PIC construction at 0x00010077ea80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010077ea90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010077ea94) */

void FUN_10077ea18(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  if ((param_3 == 0) || (func_0x000107c40808(), param_3 == 0)) {
    func_0x000107c611a8(param_1);
  }
  else {
    func_0x000107c4f244(param_1);
    func_0x000107c61180();
    func_0x000107c3d698();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10077eabc; end: 10077eb13; -[SCBlizzardPrioritizedQueue addFiles:region:] */

void FUN_10077eabc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  if ((param_3 != 0) && (lVar1 = param_3, func_0x000107c40808(), lVar1 != 0)) {
    func_0x000107c3ad1c(param_1,param_2,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10077eb14; end: 10077eb2f;  */

void FUN_10077eb14(void)

{
  return;
}



/* Entry: 10077eb30; end: 10077ec13; -[SCMemoriesSyncThumbnailGeneratorServiceProvider provide] */

void FUN_10077eb30(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126d8768;
  func_0x000107c610f4(PTR_PTR_1126d8768);
  func_0x000107c48ba8();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10077ec14; end: 10077ec87; -[SCMemoriesSyncThumbnailGeneratorServices initWithSyncThumbnailGenerator:] */

undefined1 * FUN_10077ec14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fbca8;
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



/* Entry: 10077ec88; end: 10077eceb;  */

void FUN_10077ec88(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10077ecec; end: 10077ecf3;  */

void FUN_10077ecec(undefined8 *param_1)

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



/* Entry: 10077ecf4; end: 10077ed47;  */

void FUN_10077ecf4(undefined8 *param_1)

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



/* Entry: 10077ed48; end: 10077ed53;  */

void FUN_10077ed48(long *param_1)

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
  FUN_1002a3b4c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a9460;
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
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efce9c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
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



/* Entry: 10077ed54; end: 10077f007;  */

void FUN_10077ed54(long *param_1,long param_2)

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
  FUN_1002a3b4c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a9460;
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
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efce9c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
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



/* Entry: 10077f008; end: 10077f35b;  */

/* WARNING: Removing unreachable block (ram,0x00010077f674) */
/* WARNING: Removing unreachable block (ram,0x00010077f31c) */
/* WARNING: Removing unreachable block (ram,0x00010077f9c8) */

void FUN_10077f008(long param_1,undefined *param_2,undefined8 *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *unaff_x25;
  undefined *unaff_x26;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 auStack_278 [3];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  undefined *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [3];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar3 = param_3;
  puVar9 = param_4;
  puVar11 = param_5;
  puVar7 = param_6;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_11095cd30;
    (**(code **)(*plVar1 + 0x28))();
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
      FUN_10002b838(auStack_b8,puVar2);
      func_0x000107c61174(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_3);
        puVar3 = param_3;
        func_0x000107c3ac4c(param_3);
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_a0,puVar3);
      func_0x000107c61174(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_4);
        puVar2 = param_4;
        func_0x000107c3ac4c(param_4);
      }
      func_0x000107c61170(param_4);
      FUN_10002b838(auStack_88,puVar2);
      func_0x000107c61174(param_5);
      if (param_5 == (undefined *)0x0) {
        unaff_x26 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_5);
        unaff_x26 = param_5;
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_5);
      FUN_10002b838(auStack_70,unaff_x26);
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      FUN_10007e1e8(&uStack_d8,auStack_b8,&lStack_58,4);
      puVar2 = &UNK_11095cd30;
      unaff_x25 = &uStack_d8;
      puVar3 = &uStack_d8;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_c0 = unaff_x25;
      FUN_10007e5dc(&puStack_c0);
      lVar14 = 0;
      puVar9 = param_6;
      do {
        if ((&cStack_59)[lVar14] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_70 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x60);
    }
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  puVar4 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_5);
  puStack_120 = auStack_b8;
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != puStack_120);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  puVar5 = puVar4;
  func_0x000107c60bd8();
  pcStack_e8 = FUN_10077f35c;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar6 = puVar3;
  puVar10 = puVar9;
  puVar12 = puVar11;
  puVar13 = puVar7;
  puStack_130 = unaff_x26;
  puStack_128 = unaff_x25;
  puStack_118 = puVar4;
  puStack_110 = param_5;
  puStack_108 = param_4;
  puStack_100 = param_3;
  puStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x000107c61174(puVar2);
  func_0x000107c61174(puVar3);
  func_0x000107c61174(puVar9);
  func_0x000107c61174(puVar11);
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    puVar8 = &UNK_11095cd80;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar5 + 8);
      func_0x000107c61174(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar4 = &UNK_10f3adf9b;
      }
      else {
        puVar4 = puVar2;
        func_0x000107c61178(puVar2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(puVar2);
      FUN_10002b838(auStack_198,puVar4);
      func_0x000107c61174(puVar3);
      if (puVar3 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(puVar3);
        puVar6 = puVar3;
        func_0x000107c3ac4c(puVar3);
      }
      func_0x000107c61170(puVar3);
      FUN_10002b838(auStack_180,puVar6);
      func_0x000107c61174(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar4 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(puVar9);
        puVar4 = puVar9;
        func_0x000107c3ac4c(puVar9);
      }
      func_0x000107c61170(puVar9);
      FUN_10002b838(auStack_168,puVar4);
      func_0x000107c61174(puVar11);
      if (puVar11 == (undefined *)0x0) {
        unaff_x26 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(puVar11);
        unaff_x26 = puVar11;
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(puVar11);
      FUN_10002b838(auStack_150,unaff_x26);
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      FUN_10007e1e8(&uStack_1b8,auStack_198,&lStack_138,4);
      puVar10 = (undefined *)((long)puVar7 * 10);
      puVar8 = &UNK_11095cd80;
      unaff_x25 = &uStack_1b8;
      puVar6 = &uStack_1b8;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_1a0 = unaff_x25;
      FUN_10007e5dc(&puStack_1a0);
      lVar14 = 0;
      do {
        if ((&cStack_139)[lVar14] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_150 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x60);
    }
  }
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar3);
  puVar7 = puVar2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(puVar11);
  puStack_200 = auStack_198;
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != puStack_200);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  puVar4 = puVar7;
  func_0x000107c60bd8();
  pcStack_1c8 = FUN_10077f6b4;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_210 = unaff_x26;
  puStack_208 = unaff_x25;
  puStack_1f8 = puVar7;
  puStack_1f0 = puVar11;
  puStack_1e8 = puVar9;
  puStack_1e0 = puVar3;
  puStack_1d8 = puVar2;
  ppuStack_1d0 = &puStack_f0;
  func_0x000107c61174(puVar8);
  func_0x000107c61174(puVar6);
  func_0x000107c61174(puVar10);
  func_0x000107c61174(puVar12);
  if (puVar4 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar4 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11095ce20);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar4 + 8);
      func_0x000107c61174(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        puVar2 = puVar8;
        func_0x000107c61178(puVar8);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(puVar8);
      FUN_10002b838(auStack_278,puVar2);
      func_0x000107c61174(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(puVar6);
        puVar3 = puVar6;
        func_0x000107c3ac4c(puVar6);
      }
      func_0x000107c61170(puVar6);
      FUN_10002b838(auStack_260,puVar3);
      func_0x000107c61174(puVar10);
      if (puVar10 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(puVar10);
        puVar2 = puVar10;
        func_0x000107c3ac4c(puVar10);
      }
      func_0x000107c61170(puVar10);
      FUN_10002b838(auStack_248,puVar2);
      func_0x000107c61174(puVar12);
      if (puVar12 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(puVar12);
        puVar2 = puVar12;
        func_0x000107c3ac4c(puVar12);
      }
      func_0x000107c61170(puVar12);
      FUN_10002b838(auStack_230,puVar2);
      uStack_298 = 0;
      uStack_290 = 0;
      uStack_288 = 0;
      FUN_10007e1e8(&uStack_298,auStack_278,&lStack_218,4);
      unaff_x25 = &uStack_298;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095ce20,&uStack_298,puVar13);
      puStack_280 = unaff_x25;
      FUN_10007e5dc(&puStack_280);
      lVar14 = 0;
      do {
        if ((&cStack_219)[lVar14] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_230 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x60);
    }
  }
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar6);
  puVar2 = puVar8;
  func_0x000107c61170(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
    func_0x000107c60e78();
    func_0x000107c61170(puVar12);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_278);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar8);
    func_0x000107c60bd8(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
              (auStack_278);
    return;
  }
  return;
}



/* Entry: 10077f35c; end: 10077f6b3;  */

/* WARNING: Removing unreachable block (ram,0x00010077f674) */
/* WARNING: Removing unreachable block (ram,0x00010077f9c8) */

void FUN_10077f35c(long param_1,undefined *param_2,undefined8 *param_3,undefined *param_4,
                  undefined *param_5,long param_6)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *unaff_x25;
  undefined *unaff_x26;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [3];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar3 = param_3;
  puVar7 = param_4;
  puVar8 = param_5;
  lVar10 = param_6;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_11095cd80;
    (**(code **)(*plVar1 + 0x28))();
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
      FUN_10002b838(auStack_b8,puVar2);
      func_0x000107c61174(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_3);
        puVar3 = param_3;
        func_0x000107c3ac4c(param_3);
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_a0,puVar3);
      func_0x000107c61174(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_4);
        puVar2 = param_4;
        func_0x000107c3ac4c(param_4);
      }
      func_0x000107c61170(param_4);
      FUN_10002b838(auStack_88,puVar2);
      func_0x000107c61174(param_5);
      if (param_5 == (undefined *)0x0) {
        unaff_x26 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_5);
        unaff_x26 = param_5;
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_5);
      FUN_10002b838(auStack_70,unaff_x26);
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      FUN_10007e1e8(&uStack_d8,auStack_b8,&lStack_58,4);
      puVar7 = (undefined *)(param_6 * 10);
      puVar2 = &UNK_11095cd80;
      unaff_x25 = &uStack_d8;
      puVar3 = &uStack_d8;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_c0 = unaff_x25;
      FUN_10007e5dc(&puStack_c0);
      lVar9 = 0;
      do {
        if ((&cStack_59)[lVar9] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_70 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x60);
    }
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  puVar4 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_5);
  puStack_120 = auStack_b8;
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != puStack_120);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  puVar5 = puVar4;
  func_0x000107c60bd8();
  pcStack_e8 = FUN_10077f6b4;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = unaff_x26;
  puStack_128 = unaff_x25;
  puStack_118 = puVar4;
  puStack_110 = param_5;
  puStack_108 = param_4;
  puStack_100 = param_3;
  puStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x000107c61174(puVar2);
  func_0x000107c61174(puVar3);
  func_0x000107c61174(puVar7);
  func_0x000107c61174(puVar8);
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11095ce20);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar5 + 8);
      func_0x000107c61174(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar4 = &UNK_10f3adf9b;
      }
      else {
        puVar4 = puVar2;
        func_0x000107c61178(puVar2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(puVar2);
      FUN_10002b838(auStack_198,puVar4);
      func_0x000107c61174(puVar3);
      if (puVar3 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(puVar3);
        puVar6 = puVar3;
        func_0x000107c3ac4c(puVar3);
      }
      func_0x000107c61170(puVar3);
      FUN_10002b838(auStack_180,puVar6);
      func_0x000107c61174(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar4 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(puVar7);
        puVar4 = puVar7;
        func_0x000107c3ac4c(puVar7);
      }
      func_0x000107c61170(puVar7);
      FUN_10002b838(auStack_168,puVar4);
      func_0x000107c61174(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar4 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(puVar8);
        puVar4 = puVar8;
        func_0x000107c3ac4c(puVar8);
      }
      func_0x000107c61170(puVar8);
      FUN_10002b838(auStack_150,puVar4);
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      FUN_10007e1e8(&uStack_1b8,auStack_198,&lStack_138,4);
      unaff_x25 = &uStack_1b8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095ce20,&uStack_1b8,lVar10);
      puStack_1a0 = unaff_x25;
      FUN_10007e5dc(&puStack_1a0);
      lVar10 = 0;
      do {
        if ((&cStack_139)[lVar10] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_150 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x60);
    }
  }
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar3);
  puVar4 = puVar2;
  func_0x000107c61170(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    func_0x000107c60e78();
    func_0x000107c61170(puVar8);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_198);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c60bd8(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
              (auStack_198);
    return;
  }
  return;
}



/* Entry: 10077f6b4; end: 10077fa07;  */

/* WARNING: Removing unreachable block (ram,0x00010077f9c8) */

void FUN_10077f6b4(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *unaff_x25;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11095ce20);
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
      FUN_10002b838(auStack_b8,puVar2);
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
      FUN_10002b838(auStack_a0,puVar2);
      func_0x000107c61174(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_4);
        puVar2 = param_4;
        func_0x000107c3ac4c(param_4);
      }
      func_0x000107c61170(param_4);
      FUN_10002b838(auStack_88,puVar2);
      func_0x000107c61174(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_5);
        puVar2 = param_5;
        func_0x000107c3ac4c(param_5);
      }
      func_0x000107c61170(param_5);
      FUN_10002b838(auStack_70,puVar2);
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      FUN_10007e1e8(&uStack_d8,auStack_b8,&lStack_58,4);
      unaff_x25 = &uStack_d8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095ce20,&uStack_d8,param_6);
      puStack_c0 = unaff_x25;
      FUN_10007e5dc(&puStack_c0);
      lVar3 = 0;
      do {
        if ((&cStack_59)[lVar3] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_70 + lVar3));
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x60);
    }
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  puVar2 = param_2;
  func_0x000107c61170(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    func_0x000107c61170(param_5);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_b8);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_2);
    func_0x000107c60bd8(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
              (auStack_b8);
    return;
  }
  return;
}



/* Entry: 10077fa08; end: 10077fa0f;  */

void FUN_10077fa08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000028);
  return;
}



/* Entry: 10077fa10; end: 10077fd67;  */

/* WARNING: Removing unreachable block (ram,0x00010077fd28) */

void FUN_10077fa10(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,long param_6)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *unaff_x25;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11095cdd0);
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
      FUN_10002b838(auStack_b8,puVar2);
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
      FUN_10002b838(auStack_a0,puVar2);
      func_0x000107c61174(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_4);
        puVar2 = param_4;
        func_0x000107c3ac4c(param_4);
      }
      func_0x000107c61170(param_4);
      FUN_10002b838(auStack_88,puVar2);
      func_0x000107c61174(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_5);
        puVar2 = param_5;
        func_0x000107c3ac4c(param_5);
      }
      func_0x000107c61170(param_5);
      FUN_10002b838(auStack_70,puVar2);
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      FUN_10007e1e8(&uStack_d8,auStack_b8,&lStack_58,4);
      unaff_x25 = &uStack_d8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095cdd0,&uStack_d8,param_6 * 10);
      puStack_c0 = unaff_x25;
      FUN_10007e5dc(&puStack_c0);
      lVar3 = 0;
      do {
        if ((&cStack_59)[lVar3] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_70 + lVar3));
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x60);
    }
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  puVar2 = param_2;
  func_0x000107c61170(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    func_0x000107c61170(param_5);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_b8);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_2);
    func_0x000107c60bd8(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
              (&uStack_d0);
    return;
  }
  return;
}



/* Entry: 10077fd68; end: 10077fd8b;  */

void FUN_10077fd68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000010);
  return;
}



/* Entry: 10077fd8c; end: 10077fe6f; -[SCSnapUploadWorkflowServiceProvider provide] */

void FUN_10077fd8c(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126bfcb8;
  func_0x000107c610f4(PTR_PTR_1126bfcb8);
  func_0x000107c48800();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10077fe70; end: 1007800ab;  */

undefined1  [16] FUN_10077fe70(long *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 in_ZR;
  long *plVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long alStack_60 [4];
  
  plVar2 = param_1;
  func_0x000100641404(param_1,param_2,param_2);
  alStack_60[3] = extraout_x8;
  func_0x00010077ff58();
  lVar4 = *plVar2;
  bVar1 = lVar4 == 0;
  if (bVar1) {
    alStack_60[1] = 0xaaaaaaaaaaaaaaaa;
    alStack_60[2] = 0xaaaaaaaaaaaaaaaa;
    alStack_60[0] = -0x5555555555555556;
    func_0x00010077ffd0(alStack_60);
    func_0x00010077ffdc();
    func_0x000100780020(param_1,0xaaaaaaaaaaaaaaaa,plVar2,alStack_60[0]);
    lVar4 = alStack_60[0];
    alStack_60[0] = 0;
    plVar2 = alStack_60;
    func_0x000100780088(plVar2);
  }
  uVar3 = (ulong)bVar1;
  func_0x000100645b18(alStack_60[3]);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    FUN_10077fe70();
    auVar6._8_8_ = uVar3 & 0xff;
    auVar6._0_8_ = plVar2;
    return auVar6;
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = lVar4;
  return auVar5;
}



/* Entry: 1007800ac; end: 100780103; -[SCSnapUploadWorkflowServices initWithSnapUploadWorkflow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007800ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff4d90) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100780104; end: 10078013f;  */

void FUN_100780104(void)

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



/* Entry: 100780140; end: 100780147;  */

void FUN_100780140(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x88);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100780148; end: 10078019b;  */

void FUN_100780148(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x88);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10078019c; end: 100780ab3;  */

void FUN_10078019c(long *param_1,long param_2)

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
  FUN_1002bdbc8();
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
  puVar1 = PTR_PTR_1126a92d0;
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
  func_0x000107c61174(uStack_b0);
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174(uStack_d0);
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar16 = auStack_70[0];
  func_0x000107c61174();
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar17 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar17 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2e690);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d360);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f00d380);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f00d3a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00d3c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d3e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f00d400);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar17);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef28e70);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00d420);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d440);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar17);
  func_0x000107c61174(uVar15);
  func_0x000107c61174();
  uVar17 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f00d460);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  uVar17 = uVar18;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar16);
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
  *(undefined8 *)(param_2 + 0x88) = uVar17;
  *param_1 = param_2;
  return;
}



/* Entry: 100780ab4; end: 100780af7;  */

void FUN_100780ab4(void)

{
  long unaff_x20;
  
  FUN_10078019c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 100780af8; end: 100780aff;  */

void FUN_100780af8(undefined8 *param_1)

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



/* Entry: 100780b00; end: 100780b53;  */

void FUN_100780b00(undefined8 *param_1)

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



/* Entry: 100780b54; end: 100780b5b;  */

void FUN_100780b54(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100289b5c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100780bf4();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_100780f08();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100780b5c; end: 100780bf3;  */

void FUN_100780b5c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100289b5c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100780bf4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_100780f08();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 100780bf4; end: 100780c2b;  */

void FUN_100780bf4(undefined8 param_1)

{
  if (lRam0000000113498de0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e68e704);
  return;
}



/* Entry: 100780c2c; end: 100780d5f; -[SCBlizzardEventLogger _emitEstimatedEventSizeMetricsWithEventNames:totalSizeBytes:] */

void FUN_100780c2c(long param_1,undefined *param_2,undefined1 *param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 unaff_x22;
  undefined1 *unaff_x23;
  long unaff_x24;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  long lStack_160;
  undefined1 *puStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  long lStack_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  func_0x000107c61174(param_3);
  puVar2 = param_3;
  func_0x000107c40808();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x23 = param_3;
    func_0x000107c40808();
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    func_0x000107c61174(param_3);
    puVar2 = param_3;
    func_0x000107c4080c();
    if (puVar2 != (undefined1 *)0x0) {
      unaff_x24 = *plStack_110;
      uVar1 = 0;
      if (unaff_x23 != (undefined1 *)0x0) {
        uVar1 = param_4 / (ulong)unaff_x23;
      }
      do {
        param_4 = uVar1;
        unaff_x23 = (undefined1 *)0x0;
        do {
          if (*plStack_110 != unaff_x24) {
            func_0x000107c61128(param_3);
          }
          param_2 = *(undefined **)(lStack_118 + (long)unaff_x23 * 8);
          FUN_100780d60(*(undefined8 *)(param_1 + 0x20),param_2,param_4);
          unaff_x23 = unaff_x23 + 1;
        } while (puVar2 != unaff_x23);
        puVar2 = param_3;
        puVar5 = &uStack_120;
        func_0x000107c4080c();
        unaff_x22 = 0;
        uVar1 = param_4;
      } while (puVar2 != (undefined1 *)0x0);
    }
    func_0x000107c61170(param_3);
    puVar4 = (undefined1 *)puVar5;
  }
  puVar2 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  pcStack_128 = FUN_100780d60;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  uStack_150 = unaff_x22;
  uStack_148 = param_4;
  lStack_140 = param_1;
  puStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x000107c61174(param_2);
  if (puVar2 != (undefined1 *)0x0) {
    plVar6 = *(long **)(puVar2 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar3 = &UNK_10f3adf9b;
    }
    else {
      puVar3 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    FUN_10002b838(auStack_180,puVar3);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    FUN_10007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_11095daf0,&uStack_1a0,puVar4);
    puStack_188 = (undefined1 *)&uStack_1a0;
    FUN_10007e5dc(&puStack_188);
    if (cStack_169 < '\0') {
      func_0x000107c60e14(auStack_180[0]);
    }
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
  func_0x000107c61524();
  return;
}



/* Entry: 100780d60; end: 100780ed3;  */

void FUN_100780d60(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    FUN_10002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_11095daf0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    FUN_10007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      func_0x000107c60e14(auStack_60[0]);
    }
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
  func_0x000107c61524();
  return;
}



/* Entry: 100780ed4; end: 100780f07;  */

void FUN_100780ed4(long param_1)

{
  undefined1 auStack_18 [8];
  
  func_0x000107c61524(param_1,0x100,0,auStack_18,param_1 + 0x70);
  return;
}



/* Entry: 100780f08; end: 100780f8f;  */

void FUN_100780f08(void)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  puVar1 = &UNK_11047be60;
  func_0x000107c613fc(&UNK_11047be60,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  FUN_1000285a8(0x112d62380,&UNK_10d990b80);
  func_0x000107c613fc();
  uVar2 = 0x100b871c8;
  FUN_1000bdd8c(0x100b871c8,puVar1);
  FUN_100289b98(0);
  func_0x000107c610f8();
  FUN_100780f90(uVar2);
  return;
}



/* Entry: 100780f90; end: 100780fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100780f90(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112ff4aa8) = param_1;
  FUN_100289b98();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100780fcc; end: 100780fd3;  */

void FUN_100780fcc(undefined8 *param_1)

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



/* Entry: 100780fd4; end: 100781027;  */

void FUN_100780fd4(undefined8 *param_1)

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



/* Entry: 100781028; end: 10078103b;  */

void FUN_100781028(long *param_1)

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
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
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
  FUN_1002b7f04();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  puVar2 = PTR_PTR_1126a92d8;
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
  func_0x000107c61174();
  uVar8 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar10 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f00d380);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar2);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar2);
  uVar10 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar10 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f00d480);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  uVar10 = uVar11;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined8 *)(lVar1 + 0x48) = uVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 10078103c; end: 10078149b;  */

void FUN_10078103c(long *param_1,long param_2)

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
  FUN_1002b7f04();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  puVar1 = PTR_PTR_1126a92d8;
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
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar9 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f00d380);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar1);
  uVar9 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f00d480);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  uVar9 = uVar10;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 10078149c; end: 100781517; -[SCBlizzardEventList removeEarliestEvents:] */

ulong FUN_10078149c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x000107c4d2d8();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c40808();
  func_0x000107c61170(uVar1);
  if (uVar2 <= param_3) {
    param_3 = uVar2;
  }
  func_0x000107c4d2d8(param_1);
  func_0x000107c61180();
  func_0x000107c4ff98();
  func_0x000107c61170(param_1);
  return param_3;
}



/* Entry: 100781518; end: 10078151f;  */

void FUN_100781518(undefined8 *param_1)

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



/* Entry: 100781520; end: 100781573;  */

void FUN_100781520(undefined8 *param_1)

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



/* Entry: 100781574; end: 10078157b;  */

void FUN_100781574(long *param_1)

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
  FUN_1002ae3cc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  func_0x00010078265c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_100782974();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_10078299c();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 10078157c; end: 10078165f;  */

void FUN_10078157c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_1002ae3cc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  func_0x00010078265c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_100782974();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_10078299c();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 100781660; end: 100781667;  */

void FUN_100781660(undefined8 *param_1)

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



/* Entry: 100781668; end: 1007816bb;  */

void FUN_100781668(undefined8 *param_1)

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



/* Entry: 1007816bc; end: 1007816cb;  */

void FUN_1007816bc(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
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
  FUN_10029bd28();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126a8e40;
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
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar2);
  uVar8 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  uVar8 = uVar9;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1007816cc; end: 100781a0f;  */

void FUN_1007816cc(long *param_1,long param_2)

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
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10029bd28();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a8e40;
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
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar7 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
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
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 100781a10; end: 100781a17; -[SCBlizzardEventLogger setBlizzardLastDiskFlushTimeSecs:] */

void FUN_100781a10(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0xb0) = param_1;
  return;
}



/* Entry: 100781a18; end: 100782317;  */

void FUN_100781a18(char *param_1)

{
  if ((*param_1 == '\x01') && (*(long **)(param_1 + 0x18) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x68))();
  }
  func_0x0001001c664c(param_1,1,1);
  param_1[0x150] = '\0';
  param_1[0x151] = '\0';
  param_1[0x152] = '\0';
  param_1[0x153] = '\0';
  param_1[0x154] = '\0';
  param_1[0x158] = '\0';
  param_1[0x160] = '\0';
  param_1[0x161] = '\0';
  param_1[0x162] = '\0';
  param_1[0x163] = '\0';
  param_1[0x164] = '\0';
  param_1[0x165] = '\0';
  param_1[0x166] = '\0';
  param_1[0x167] = '\0';
  func_0x0001001c6884(&stack0xffffffffffffffe8);
  return;
}



/* Entry: 100782318; end: 1007823cf; -[SCGenerativeAIDreamsServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100782318(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127294f0;
  lVar5 = *(long *)(param_1 + lVar6);
  if (lVar5 == 0) {
    lVar1 = param_1;
    func_0x000107c3b57c();
    func_0x000107c61180();
    lVar2 = param_1;
    func_0x000107c3b578(param_1,param_2,lVar1);
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126bdfb0;
    func_0x000107c610f4();
    func_0x000107c46b00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar3;
    func_0x000107c61170(uVar4);
    lVar5 = *(long *)(param_1 + lVar6);
    func_0x000107c61174(lVar5);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  else {
    func_0x000107c61174(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1007823d0; end: 100782487; -[SCGenerativeAIDreamsServiceProvider _dreamsService] */

void FUN_1007823d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100782488; end: 100782573; -[SCGenerativeAIDreamsServiceProvider _dreamsBadgeService:] */

void FUN_100782488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(param_3);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


