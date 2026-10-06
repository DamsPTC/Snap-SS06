/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006e2c08; end: 1006e2c13;  */

void FUN_1006e2c08(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_10069b818();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1006e2ce4(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006e2c14; end: 1006e2ce3;  */

void FUN_1006e2c14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_10069b818();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1006e2ce4(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006e2ce4; end: 1006e2f9b;  */

void FUN_1006e2ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126ac008;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0x646e696677656976;
  func_0x000107c5fadc(0x646e696677656976,0xef65706f63537265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef23cd0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef13090);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0f3f40);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x38) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006e2f9c);
  (*pcVar1)();
}



/* Entry: 1006e2f9c; end: 1006e2fdb;  */

void FUN_1006e2f9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1da0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s10Foundation4DataVSeAAMc_110350b00;
  func_0x000107c61520(PTR___s10Foundation4DataVSeAAMc_110350b00,PTR___s10Foundation4DataVN_110350ae0
                     );
  puRam0000000112da1da0 = puVar1;
  return;
}



/* Entry: 1006e2fdc; end: 1006e30ef;  */

undefined1  [16] FUN_1006e2fdc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  uVar4 = 0xe900000000000079;
  uVar2 = 0x654b63696c627570;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xe700000000000000;
    uVar2 = 0x6e6f6973726576;
  }
  uVar1 = 0xea00000000007965;
  uVar3 = 0x4b65746176697270;
  if (*unaff_x20 != '\0') {
    uVar1 = uVar4;
    uVar3 = uVar2;
  }
  auVar5._8_8_ = uVar1;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 1006e30f0; end: 1006e3113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006e30f0(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127793e0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006e3114; end: 1006e33e3; -[SCLensProcessingCarouselEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006e3114(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar8 = param_1;
  FUN_1006e30f0();
  func_0x000107c61180();
  lVar1 = lVar8;
  func_0x000107c4afac();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4ade8();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar8);
  lVar8 = param_1;
  FUN_1006e30f0();
  func_0x000107c61180();
  lVar1 = lVar8;
  func_0x000107c4afac();
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c4b148();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar8);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_1127793d8;
    func_0x000107c61148();
  }
  puVar4 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_108c81254;
  puStack_90 = &UNK_110abf408;
  func_0x000107c61174(lVar2);
  lStack_88 = lVar2;
  func_0x000107c61174(lVar3);
  lStack_80 = lVar3;
  func_0x000107c61174(lVar8);
  lStack_78 = lVar8;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_1 + _DAT_1127793cc);
  *(undefined **)(param_1 + _DAT_1127793cc) = puVar4;
  func_0x000107c61170(uVar7);
  lVar1 = param_1;
  FUN_1006e30f0(param_1);
  func_0x000107c61180();
  lVar5 = lVar1;
  func_0x000107c4afac();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c4ade8();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar1);
  puVar4 = PTR_PTR_1126db420;
  func_0x000107c610f4(PTR_PTR_1126db420);
  func_0x000107c471bc();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_1127793e4));
  func_0x000107c61144(auStack_b0,param_1);
  param_1 = param_1 + _DAT_1127793e0;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c4b398();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_b8,auStack_b0);
  func_0x000107c4db94(lVar1);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_b8);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lStack_78);
  func_0x000107c61170(lStack_80);
  func_0x000107c61170(lStack_88);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1006e33e4; end: 1006e3487; -[SCLensProcessingCarouselServices initWithLensCarouselApplicator:effectActionUpdater:] */

undefined1 *
FUN_1006e33e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112701e00;
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



/* Entry: 1006e3488; end: 1006e348b;  */

void FUN_1006e3488(void)

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



/* Entry: 1006e348c; end: 1006e34ff; -[SCCameraUIScopedLensProcessingCarouselServices initWithLensProcessingCarouselServices:] */

undefined1 * FUN_1006e348c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701df8;
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



/* Entry: 1006e3500; end: 1006e3507;  */

void FUN_1006e3500(undefined8 *param_1)

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



/* Entry: 1006e3508; end: 1006e355b;  */

void FUN_1006e3508(undefined8 *param_1)

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



/* Entry: 1006e355c; end: 1006e3563;  */

void FUN_1006e355c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  func_0x0001005c76cc();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_10074d7a4(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006e3564; end: 1006e35eb;  */

void FUN_1006e3564(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  func_0x0001005c76cc();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_10074d7a4(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006e35ec; end: 1006e35f3;  */

void FUN_1006e35ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x198);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006e35f4; end: 1006e3647;  */

void FUN_1006e35f4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x198);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006e3648; end: 1006e36d3;  */

void FUN_1006e3648(void)

{
  long unaff_x20;
  
  FUN_1006e3788(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400));
  return;
}



/* Entry: 1006e36d4; end: 1006e36f3;  */

void FUN_1006e36d4(void)

{
  func_0x000107c61168(&PTR_PTR_112807dc0);
  return;
}



/* Entry: 1006e36f4; end: 1006e3777;  */

undefined8 FUN_1006e36f4(undefined8 param_1,undefined8 param_2)

{
  (**(code **)(*(long *)(PTR___s10Foundation4DataVN_110350ae0 + -8) + 0x10))(param_2,param_1);
  return param_2;
}



/* Entry: 1006e3778; end: 1006e3787;  */

undefined1  [16] FUN_1006e3778(void)

{
  return ZEXT816(0x110494ee8);
}



/* Entry: 1006e3788; end: 1006e5557;  */

void FUN_1006e3788(long *param_1,long param_2)

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
  undefined *puVar18;
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
  undefined8 uVar32;
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
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
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
  FUN_100083b20(&uStack_150);
  FUN_100083b20(&uStack_158);
  FUN_100083b20(&uStack_160);
  FUN_100083b20(&uStack_168);
  FUN_100083b20(&uStack_170);
  FUN_100083b20(&uStack_178);
  FUN_100083b20(&uStack_180);
  FUN_100083b20(&uStack_188);
  FUN_100083b20(&uStack_190);
  FUN_100083b20(&uStack_198);
  FUN_100083b20(&uStack_1a0);
  FUN_100083b20(&uStack_1a8);
  FUN_100083b20(&uStack_1b0);
  FUN_100083b20(&uStack_1b8);
  FUN_100083b20(&uStack_1c0);
  FUN_100083b20(&uStack_1c8);
  FUN_100083b20(&uStack_1d0);
  FUN_100083b20(&uStack_1d8);
  FUN_100083b20(&uStack_1e0);
  FUN_100083b20(&uStack_1e8);
  FUN_100083b20(&uStack_1f0);
  func_0x0001005c760c();
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
  *(undefined8 *)(param_2 + 0xa8) = uStack_108;
  *(undefined8 *)(param_2 + 0xb0) = uStack_110;
  *(undefined8 *)(param_2 + 0xb8) = uStack_118;
  *(undefined8 *)(param_2 + 0xc0) = uStack_120;
  *(undefined8 *)(param_2 + 200) = uStack_128;
  *(undefined8 *)(param_2 + 0xd0) = uStack_130;
  *(undefined8 *)(param_2 + 0xd8) = uStack_138;
  *(undefined8 *)(param_2 + 0xe0) = uStack_140;
  *(undefined8 *)(param_2 + 0xe8) = uStack_148;
  *(undefined8 *)(param_2 + 0xf0) = uStack_150;
  *(undefined8 *)(param_2 + 0xf8) = uStack_158;
  *(undefined8 *)(param_2 + 0x100) = uStack_160;
  *(undefined8 *)(param_2 + 0x108) = uStack_168;
  *(undefined8 *)(param_2 + 0x110) = uStack_170;
  *(undefined8 *)(param_2 + 0x118) = uStack_178;
  *(undefined8 *)(param_2 + 0x120) = uStack_180;
  *(undefined8 *)(param_2 + 0x128) = uStack_188;
  *(undefined8 *)(param_2 + 0x130) = uStack_190;
  *(undefined8 *)(param_2 + 0x138) = uStack_198;
  *(undefined8 *)(param_2 + 0x140) = uStack_1a0;
  *(undefined8 *)(param_2 + 0x148) = uStack_1a8;
  *(undefined8 *)(param_2 + 0x150) = uStack_1b0;
  *(undefined8 *)(param_2 + 0x158) = uStack_1b8;
  *(undefined8 *)(param_2 + 0x160) = uStack_1c0;
  *(undefined8 *)(param_2 + 0x168) = uStack_1c8;
  *(undefined8 *)(param_2 + 0x170) = uStack_1d0;
  *(undefined8 *)(param_2 + 0x178) = uStack_1d8;
  *(undefined8 *)(param_2 + 0x180) = uStack_1e0;
  *(undefined8 *)(param_2 + 0x188) = uStack_1e8;
  *(undefined8 *)(param_2 + 400) = uStack_1f0;
  puVar18 = PTR_PTR_1126abcc0;
  func_0x000107c610f8();
  uVar21 = uStack_78;
  func_0x000107c61174();
  uVar22 = uStack_80;
  func_0x000107c61174();
  uVar23 = uStack_88;
  func_0x000107c61174();
  uVar24 = uStack_90;
  func_0x000107c61174();
  uVar25 = uStack_98;
  func_0x000107c61174();
  uVar26 = uStack_a0;
  func_0x000107c61174();
  uVar1 = uStack_a8;
  func_0x000107c61174();
  uVar2 = uStack_b0;
  func_0x000107c61174();
  uVar3 = uStack_b8;
  func_0x000107c61174();
  uVar4 = uStack_c0;
  func_0x000107c61174();
  uVar5 = uStack_c8;
  func_0x000107c61174();
  uVar6 = uStack_d0;
  func_0x000107c61174();
  uVar7 = uStack_d8;
  func_0x000107c61174();
  uVar8 = uStack_e0;
  func_0x000107c61174();
  uVar9 = uStack_e8;
  func_0x000107c61174();
  uVar10 = uStack_f0;
  func_0x000107c61174();
  uVar11 = uStack_f8;
  func_0x000107c61174();
  uVar12 = uStack_100;
  func_0x000107c61174();
  uVar13 = uStack_108;
  func_0x000107c61174();
  uVar14 = uStack_110;
  func_0x000107c61174();
  uVar15 = uStack_118;
  func_0x000107c61174();
  uVar16 = uStack_120;
  func_0x000107c61174();
  uVar17 = uStack_128;
  func_0x000107c61174();
  uVar27 = uStack_130;
  func_0x000107c61174();
  uVar28 = uStack_138;
  func_0x000107c61174();
  uVar29 = uStack_140;
  func_0x000107c61174();
  uVar30 = uStack_148;
  func_0x000107c61174();
  uVar31 = uStack_150;
  func_0x000107c61174();
  uVar32 = uStack_158;
  func_0x000107c61174();
  uVar33 = uStack_160;
  func_0x000107c61174();
  uVar34 = uStack_168;
  func_0x000107c61174();
  uVar35 = uStack_170;
  func_0x000107c61174();
  uVar36 = uStack_178;
  func_0x000107c61174();
  uVar37 = uStack_180;
  func_0x000107c61174();
  uVar38 = uStack_188;
  func_0x000107c61174();
  uVar39 = uStack_190;
  func_0x000107c61174();
  uVar40 = uStack_198;
  func_0x000107c61174();
  uVar41 = uStack_1a0;
  func_0x000107c61174();
  uVar42 = uStack_1a8;
  func_0x000107c61174();
  uVar43 = uStack_1b0;
  func_0x000107c61174();
  uVar44 = uStack_1b8;
  func_0x000107c61174();
  uVar45 = uStack_1c0;
  func_0x000107c61174();
  uVar46 = uStack_1c8;
  func_0x000107c61174();
  uVar47 = uStack_1d0;
  func_0x000107c61174();
  uVar48 = uStack_1d8;
  func_0x000107c61174();
  uVar49 = uStack_1e0;
  func_0x000107c61174();
  uVar50 = uStack_1e8;
  func_0x000107c61174();
  uVar51 = uStack_1f0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar18;
  func_0x000107c61174();
  uVar19 = auStack_70[0];
  func_0x000107c61174();
  uVar20 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar18);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar53 = 0xd000000000000010;
  uVar20 = uVar53;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef13070);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar53);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar54 = 0xd000000000000013;
  uVar20 = uVar54;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef27f00);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar20);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efe1e70);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar20);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar53 = 0xd000000000000012;
  uVar20 = uVar53;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef13090);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar20);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar52);
  uVar57 = 0xd00000000000001a;
  uVar20 = uVar57;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0db780);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar52 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc6680);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar52);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar56 = 0xd000000000000015;
  uVar20 = uVar56;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd20);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar20);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6650);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar20);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar20);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = uVar57;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar52 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc65b0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar52);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = uVar57;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0db7a0);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar52 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc6750);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar52);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar53);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar52 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0db7c0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar52);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar52 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85690);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar52);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = uVar54;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar52 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0db7e0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar52);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar55 = 0xd000000000000017;
  uVar20 = uVar55;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc15d0);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0db800);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar57);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar52 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar52);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc6770);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar52 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar52);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar52);
  uVar20 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f000a30);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar20);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar53 = 0xd000000000000016;
  uVar20 = uVar53;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar20);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar52);
  uVar20 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f03ee20);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar54);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0db820);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar20);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = uVar53;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef235a0);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar20);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0db850);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000016,0x800000010efb78d0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar53);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0db880);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  uVar52 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef1bc50);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar52);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  func_0x000107c5fadc(0xd000000000000017,0x800000010f088580);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar55);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar52 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0db8a0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar52);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef132b0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar56);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0db8c0);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar20);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0db8e0);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar20);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f03eba0);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar52 = 0x5370757472617473;
  func_0x000107c5fadc(0x5370757472617473,0xef73656369767265);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar52);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f0db910);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar20);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar20);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000036;
  func_0x000107c5fadc(0xd000000000000036,0x800000010f0db940);
  func_0x000107c5a49c(uVar52);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar52 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0db980);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar52);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar52 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0db9a0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar52);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar52 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0db9c0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(uVar52);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar52 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef1f5d0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar51);
  func_0x000107c61170(uVar52);
  uVar52 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar20 = uVar52;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
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
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(uVar51);
  *(undefined8 *)(param_2 + 0x198) = uVar20;
  *param_1 = param_2;
  return;
}



/* Entry: 1006e5558; end: 1006e555f;  */

void FUN_1006e5558(undefined8 *param_1)

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



/* Entry: 1006e5560; end: 1006e55b3;  */

void FUN_1006e5560(undefined8 *param_1)

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



/* Entry: 1006e55b4; end: 1006e55bb;  */

void FUN_1006e55b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_10020d728();
  func_0x000107c613fc();
  FUN_1006e5630(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006e55bc; end: 1006e562f;  */

void FUN_1006e55bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_10020d728();
  func_0x000107c613fc();
  FUN_1006e5630(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 1006e5630; end: 1006e5793;  */

void FUN_1006e5630(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8380;
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
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef34050);
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



/* Entry: 1006e5794; end: 1006e57e7;  */

int FUN_1006e5794(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1006e57e8; end: 1006e5847;  */

/* WARNING: Possible PIC construction at 0x0001006e5800: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006e5804) */

void FUN_1006e57e8(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1006e5848; end: 1006e5853; -[SCFideliusExtensionIdentity privateKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006e5848(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e37700);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112e37700))[1];
  FUN_10006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  func_0x000107c5ee20(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1006e5854; end: 1006e58ab;  */

void FUN_1006e5854(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + *param_3);
  uVar2 = ((undefined8 *)(param_1 + *param_3))[1];
  FUN_10006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  func_0x000107c5ee20(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1006e58ac; end: 1006e598f; -[SCVoiceMLLoggingServicesServiceProvider provide] */

void FUN_1006e58ac(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126bc028;
  func_0x000107c610f4(PTR_PTR_1126bc028);
  func_0x000107c49554();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006e5990; end: 1006e5a03; -[SCVoiceMLLensLoggingServices initWithVoiceMLLensLogger:] */

undefined1 * FUN_1006e5990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701ef8;
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



/* Entry: 1006e5a04; end: 1006e5a2f;  */

void FUN_1006e5a04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006e5a30; end: 1006e5a37;  */

void FUN_1006e5a30(undefined8 *param_1)

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



/* Entry: 1006e5a38; end: 1006e5a8b;  */

void FUN_1006e5a38(undefined8 *param_1)

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



/* Entry: 1006e5a8c; end: 1006e5a93;  */

void FUN_1006e5a8c(undefined8 *param_1)

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



/* Entry: 1006e5a94; end: 1006e5ae7;  */

void FUN_1006e5a94(undefined8 *param_1)

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



/* Entry: 1006e5ae8; end: 1006e5af3;  */

void FUN_1006e5ae8(void)

{
  long unaff_x20;
  
  FUN_1006e5af4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 1006e5af4; end: 1006e5f3f;  */

void FUN_1006e5af4(long *param_1,long param_2)

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
  long lVar11;
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
  func_0x0001005c33a4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
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
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126abcf0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  lVar11 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar9 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0dbbd0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar10);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar11 != 0) {
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    *(long *)(param_2 + 0x48) = lVar11;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006e5f40);
  (*pcVar1)();
}



/* Entry: 1006e5f40; end: 1006e6057; -[SCLegacyCameraTooltipsServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006e5f40(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273fb80);
  }
  func_0x000107c61174(uVar3);
  puVar2 = PTR_PTR_1126c8278;
  func_0x000107c610f4(PTR_PTR_1126c8278);
  func_0x000107c47140();
  func_0x000107c42c20(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 1006e6058; end: 1006e60cb; -[SCLegacyCameraTooltipsServices initWithLegacyCameraTooltipsService:] */

undefined1 * FUN_1006e6058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f85c8;
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



/* Entry: 1006e60cc; end: 1006e60d7;  */

void FUN_1006e60cc(void)

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



/* Entry: 1006e60d8; end: 1006e612b;  */

void FUN_1006e60d8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x118);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006e612c; end: 1006e767b;  */

void FUN_1006e612c(long *param_1,long param_2)

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
  undefined *puVar13;
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
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
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
  FUN_100083b20(&uStack_150);
  FUN_100083b20(&uStack_158);
  FUN_100083b20(&uStack_160);
  FUN_100083b20(&uStack_168);
  FUN_100083b20(&uStack_170);
  func_0x0001005c5d68();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x40) = uStack_78;
  *(undefined8 *)(param_2 + 0x48) = uStack_80;
  *(undefined8 *)(param_2 + 0x50) = uStack_88;
  *(undefined8 *)(param_2 + 0x58) = uStack_90;
  *(undefined8 *)(param_2 + 0x60) = uStack_98;
  *(undefined8 *)(param_2 + 0x68) = uStack_a0;
  *(undefined8 *)(param_2 + 0x70) = uStack_a8;
  *(undefined8 *)(param_2 + 0x78) = uStack_b0;
  *(undefined8 *)(param_2 + 0x80) = uStack_b8;
  *(undefined8 *)(param_2 + 0x88) = uStack_c0;
  *(undefined8 *)(param_2 + 0x90) = uStack_c8;
  *(undefined8 *)(param_2 + 0x98) = uStack_d0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_d8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_e0;
  *(undefined8 *)(param_2 + 0xb0) = uStack_e8;
  *(undefined8 *)(param_2 + 0xb8) = uStack_f0;
  *(undefined8 *)(param_2 + 0xc0) = uStack_f8;
  *(undefined8 *)(param_2 + 200) = uStack_100;
  *(undefined8 *)(param_2 + 0xd0) = uStack_108;
  *(undefined8 *)(param_2 + 0xd8) = uStack_110;
  *(undefined8 *)(param_2 + 0xe0) = uStack_118;
  *(undefined8 *)(param_2 + 0xe8) = uStack_120;
  *(undefined8 *)(param_2 + 0xf0) = uStack_128;
  *(undefined8 *)(param_2 + 0xf8) = uStack_130;
  *(undefined8 *)(param_2 + 0x100) = uStack_138;
  *(undefined8 *)(param_2 + 0x108) = uStack_140;
  *(undefined8 *)(param_2 + 0x110) = uStack_148;
  FUN_1000285a8(0x112e49ff0,&UNK_10da41b70);
  func_0x000107c610f8();
  uVar16 = uStack_78;
  func_0x000107c61174();
  uVar18 = uStack_80;
  func_0x000107c61174();
  uVar1 = uStack_88;
  func_0x000107c61174();
  uVar2 = uStack_90;
  func_0x000107c61174();
  uVar3 = uStack_98;
  func_0x000107c61174();
  uVar4 = uStack_a0;
  func_0x000107c61174();
  uVar5 = uStack_a8;
  func_0x000107c61174();
  uVar6 = uStack_b0;
  func_0x000107c61174();
  uVar7 = uStack_b8;
  func_0x000107c61174();
  uVar8 = uStack_c0;
  func_0x000107c61174();
  uVar9 = uStack_c8;
  func_0x000107c61174();
  uVar10 = uStack_d0;
  func_0x000107c61174();
  uVar11 = uStack_d8;
  func_0x000107c61174();
  uVar12 = uStack_e0;
  func_0x000107c61174();
  uVar19 = uStack_e8;
  func_0x000107c61174();
  uVar20 = uStack_f0;
  func_0x000107c61174();
  uVar21 = uStack_f8;
  func_0x000107c61174();
  uVar22 = uStack_100;
  func_0x000107c61174();
  uVar23 = uStack_108;
  func_0x000107c61174();
  uVar24 = uStack_110;
  func_0x000107c61174();
  uVar25 = uStack_118;
  func_0x000107c61174();
  uVar26 = uStack_120;
  func_0x000107c61174();
  uVar27 = uStack_128;
  func_0x000107c61174();
  uVar28 = uStack_130;
  func_0x000107c61174();
  uVar29 = uStack_138;
  func_0x000107c61174();
  uVar30 = uStack_140;
  func_0x000107c61174();
  uVar31 = uStack_148;
  func_0x000107c61174();
  uVar15 = uStack_150;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar13 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x18) = puVar13;
  FUN_1000285a8(0x112e49ff8,&UNK_10db4d4b0);
  func_0x000107c610f8();
  uVar15 = uStack_158;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar13 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x20) = puVar13;
  FUN_1000285a8(0x112e4a000,&UNK_10da41b80);
  func_0x000107c610f8();
  uVar15 = uStack_160;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar13 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x28) = puVar13;
  FUN_1000285a8(0x112e4a008,&UNK_10da41b88);
  func_0x000107c610f8();
  uVar15 = uStack_168;
  func_0x000107c6157c(uStack_168);
  FUN_1003b3b80();
  puVar13 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x30) = puVar13;
  FUN_1000285a8(0x112e4a010,&UNK_10da41b90);
  func_0x000107c610f8();
  uVar15 = uStack_170;
  func_0x000107c6157c();
  FUN_1003b3b80();
  puVar13 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x38) = puVar13;
  puVar13 = PTR_PTR_1126abce0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar13;
  func_0x000107c61174();
  uVar14 = auStack_70[0];
  func_0x000107c61174();
  uVar15 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1ae00);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6a80);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc82c0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f03ef90);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc0750);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0x6553726579616c70;
  func_0x000107c5fadc(0x6553726579616c70,0xee00736563697672);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f03efc0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f03efe0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar32 = 0xd000000000000010;
  uVar15 = uVar32;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar17 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f03f000);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = uVar32;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef20500);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar33 = 0xd000000000000012;
  uVar15 = uVar33;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef13090);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2a4b0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f03f020);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar15 = uVar32;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef26830);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efbb870);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = uVar33;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f03f040);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f03f060);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010f03f080);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar33);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar27);
  func_0x000107c61174(uVar17);
  uVar15 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb8f0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar32);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0070a0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar30);
  func_0x000107c61174(uVar17);
  uVar15 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f03f0a0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2a560);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar33 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f03f0f0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  uVar17 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar17);
  uVar33 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f03f120);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar33);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar33 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f03f140);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  uVar17 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar33 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar33);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  uVar17 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar33 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2a5a0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar33);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar15 = uVar17;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar18);
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
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar31);
  func_0x000107c61574(uStack_150);
  func_0x000107c61574(uStack_158);
  func_0x000107c61574(uStack_160);
  func_0x000107c61574(uStack_168);
  func_0x000107c61574(uStack_170);
  *(undefined8 *)(param_2 + 0x118) = uVar15;
  *param_1 = param_2;
  return;
}



/* Entry: 1006e767c; end: 1006e76df;  */

void FUN_1006e767c(void)

{
  long unaff_x20;
  
  FUN_1006e612c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x110));
  return;
}



/* Entry: 1006e76e0; end: 1006e76e7;  */

void FUN_1006e76e0(undefined8 *param_1)

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



/* Entry: 1006e76e8; end: 1006e773b;  */

void FUN_1006e76e8(undefined8 *param_1)

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



/* Entry: 1006e773c; end: 1006e774f;  */

void FUN_1006e773c(long *param_1)

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
  FUN_1001f7f70();
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
  func_0x000107c61174();
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar9 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar10 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126a7dc0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar11 = uStack_68;
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar12 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  uVar14 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb890);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb7000);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  lVar13 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc0730);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006e7cc0);
  (*pcVar1)();
}



/* Entry: 1006e7750; end: 1006e7cbf;  */

void FUN_1006e7750(long *param_1,long param_2)

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
  FUN_1001f7f70();
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
  func_0x000107c61174();
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar9 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7dc0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar11 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb890);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb7000);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  lVar12 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc0730);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006e7cc0);
  (*pcVar1)();
}



/* Entry: 1006e7cc0; end: 1006e7cc7;  */

void FUN_1006e7cc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_100096f48(0);
  func_0x000107c610f8();
  FUN_1006e7d10(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1006e7cc8; end: 1006e7d0f;  */

void FUN_1006e7cc8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_100096f48(0);
  func_0x000107c610f8();
  FUN_1006e7d10(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1006e7d10; end: 1006e7d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006e7d10(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  FUN_1000285a8(0x112da9f18,&UNK_10d951250);
  uVar1 = param_1;
  FUN_1000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_1130838d0) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_1130838d8) = param_1;
  FUN_100096f48();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1006e7d90; end: 1006e7dbb;  */

void FUN_1006e7d90(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if ((param_1 != 0) && (*(char *)(param_1 + 0x2b) == '\x01')) {
    *(undefined1 *)(param_1 + 0x2b) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006e7dbc; end: 1006e7e03;  */

/* WARNING: Possible PIC construction at 0x0001006e7df0: Changing call to branch */

void FUN_1006e7dbc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c40794();
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1006e7e04; end: 1006e81c3; -[SCShakeToReportAuthenticatedEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006e7e04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  func_0x000107c61144(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_78,auStack_70);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126d0140;
  func_0x000107c610f4(PTR_PTR_1126d0140);
  lVar22 = (long)_DAT_11275715c;
  lVar4 = param_1 + lVar22;
  func_0x000107c61148();
  lVar5 = lVar4;
  func_0x000107c44f4c();
  func_0x000107c61180();
  lVar22 = param_1 + lVar22;
  func_0x000107c61148();
  lVar6 = lVar22;
  func_0x000107c44f60();
  func_0x000107c61180();
  lVar7 = param_1 + _DAT_112757160;
  func_0x000107c61148();
  lVar8 = lVar7;
  func_0x000107c5b76c();
  func_0x000107c61180();
  lVar9 = param_1 + _DAT_112757164;
  func_0x000107c61148();
  lVar10 = lVar9;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar11 = lVar10;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar12 = lVar11;
  func_0x000107c509cc();
  func_0x000107c61180();
  lVar13 = param_1 + _DAT_112757168;
  func_0x000107c61148(lVar13);
  lVar14 = lVar13;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar15 = param_1 + _DAT_11275716c;
  func_0x000107c61148(lVar15);
  lVar16 = lVar15;
  func_0x000107c5cb84();
  func_0x000107c61180();
  puVar17 = PTR_PTR_1126bb598;
  func_0x000107c5a9f0();
  func_0x000107c61180();
  lVar18 = param_1 + _DAT_112757170;
  func_0x000107c61148();
  lVar19 = lVar18;
  func_0x000107c3ddd8();
  func_0x000107c61180();
  lVar20 = lVar19;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c46c4c(puVar3);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c56a68(PTR_PTR_1126d0148);
  puVar21 = PTR_PTR_1126d0150;
  func_0x000107c610f4(PTR_PTR_1126d0150);
  func_0x000107c48658();
  puVar17 = PTR_PTR_1126d0158;
  lVar4 = param_1 + _DAT_112757174;
  func_0x000107c61148(lVar4);
  lVar22 = lVar4;
  func_0x000107c5da60();
  func_0x000107c61180();
  func_0x000107c4a688(puVar17);
  func_0x000107c558bc(puVar21);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar4);
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112757178));
  func_0x000107c61170(puVar21);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_78);
  func_0x000107c61120(auStack_70);
  return;
}



/* Entry: 1006e81c4; end: 1006e81d3; -[_TtC18SCSpectrumServices23SCNoDepSpectrumServices spectrumLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006e81c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130838d8));
  return;
}



/* Entry: 1006e81d4; end: 1006e8353; -[SCGrapheneRegistry s2rGraphene] */

void FUN_1006e81d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1006e825c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c49b0 != -1) {
    FUN_10002a2fc(0x1136c49b0,&puStack_48);
  }
  uVar1 = uRam00000001136c49a8;
  func_0x000107c61174(uRam00000001136c49a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1006e8354; end: 1006e835b; -[SCFideliusUserIdentity inBeta] */

undefined8 FUN_1006e8354(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1006e835c; end: 1006e8367; -[SCFideliusExtensionIdentity publicKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006e835c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e37708);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112e37708))[1];
  FUN_10006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  func_0x000107c5ee20(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1006e8368; end: 1006e836f; -[SCFideliusUserIdentity outBeta] */

undefined8 FUN_1006e8368(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1006e8370; end: 1006e84d7;  */

void FUN_1006e8370(undefined8 param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  param_2 = param_2 & 0xff;
  if (param_2 < 4) {
    uVar5 = 0xec00000070756d72;
    uVar7 = 0x615779636167656c;
    if (param_2 != 2) {
      uVar5 = 0x800000010f2153e0;
      uVar7 = 0xd000000000000016;
    }
    uVar6 = 0xd000000000000013;
    pcVar2 = "warmupCustomStories";
    if (param_2 != 0) {
      pcVar2 = "snapReadReceiptCleanup";
    }
    uVar8 = (ulong)pcVar2 | 0x8000000000000000;
    bVar3 = SBORROW4(param_2,1);
    iVar1 = param_2 - 1;
    bVar4 = param_2 == 1;
  }
  else {
    uVar8 = 0xee00676e69676461;
    uVar6 = 0x42736569726f7473;
    if (param_2 != 7) {
      uVar8 = 0x800000010f215380;
      uVar6 = 0xd00000000000001a;
    }
    uVar5 = 0x800000010f2153a0;
    uVar7 = 0xd000000000000010;
    if (param_2 != 6) {
      uVar5 = uVar8;
      uVar7 = uVar6;
    }
    uVar8 = 0x800000010f2153c0;
    uVar6 = 0xd00000000000001c;
    if (param_2 != 4) {
      uVar8 = 0xec00000073656972;
      uVar6 = 0x6f74536863746566;
    }
    bVar3 = SBORROW4(param_2,5);
    iVar1 = param_2 - 5;
    bVar4 = param_2 == 5;
  }
  if (bVar4 || iVar1 < 0 != bVar3) {
    uVar5 = uVar8;
    uVar7 = uVar6;
  }
  func_0x000107c5fb58(param_1,uVar7,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
  return;
}



/* Entry: 1006e84d8; end: 1006e84e7; -[SCFideliusExtensionIdentity version] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1006e84d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112e37710);
}



/* Entry: 1006e84e8; end: 1006e8527; -[SCFideliusExtensionIdentity .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001006e8508: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006e850c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006e84e8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = ((undefined8 *)(param_1 + _DAT_112e37700))[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e37700));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1006e8528; end: 1006e86cf; -[SCSnapchatNetworkRequestSender initWithHTTPMetadataService:httpRequestModifier:spectrum:graphene:configProvider:tokenProvider:blizzardSessionIDProvider:appInsightsMetadataStoring:] */

undefined1 *
FUN_1006e8528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126f49a0;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
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



/* Entry: 1006e86d0; end: 1006e874b; +[SCSnapchatAirConfigProvider setNetworkRequestSender:] */

/* WARNING: Possible PIC construction at 0x0001006e8710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006e8734: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006e8714) */
/* WARNING: Removing unreachable block (ram,0x0001006e8738) */

void FUN_1006e86d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c43f0c(param_1);
  func_0x000107c61180();
  func_0x000107c56a68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1006e874c; end: 1006e87d3; +[SCSnapchatAirConfigProvider getBaseConfig] */

void FUN_1006e874c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_1006e87d4;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c4968 != -1) {
    FUN_10002a2fc(0x1136c4968,&puStack_48);
  }
  uVar1 = uRam00000001136c4960;
  func_0x000107c61174(uRam00000001136c4960);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1006e87d4; end: 1006e8803;  */

void FUN_1006e87d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3b7f0();
  func_0x000107c61180();
  uVar1 = uRam00000001136c4960;
  uRam00000001136c4960 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1006e8804; end: 1006e8877; +[SCSnapchatAirConfigProvider _getBaseConfig] */

void FUN_1006e8804(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d0228;
  puVar1 = PTR_PTR_1126d0130;
  func_0x000107c5a9c0(PTR_PTR_1126d0130);
  func_0x000107c61180();
  func_0x000107c43f10(puVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126d0230;
  func_0x000107c61158(PTR_PTR_1126d0230);
  func_0x000107c546b8(puVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006e8878; end: 1006e88ff; +[SCS2RBaseAdapter sharedAdapter] */

void FUN_1006e8878(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_1006e8900;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam0000000113726fe8 != -1) {
    FUN_10002a2fc(0x113726fe8,&puStack_48);
  }
  uVar1 = uRam0000000113726fe0;
  func_0x000107c61174(uRam0000000113726fe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1006e8900; end: 1006e892b;  */

void FUN_1006e8900(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61158();
  func_0x000107c610fc();
  uVar1 = uRam0000000113726fe0;
  uRam0000000113726fe0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1006e892c; end: 1006e8a27; +[SCSnapAirConfigProvider getBaseConfig:] */

void FUN_1006e892c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126d57d0;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  puVar2 = PTR_PTR_1126d57d8;
  func_0x000107c610f4(PTR_PTR_1126d57d8);
  func_0x000107c48734();
  puVar3 = puVar2;
  FUN_100088750();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126d57e0;
  func_0x000107c5a9bc(PTR_PTR_1126d57e0);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126d57e8;
  func_0x000107c610f4();
  func_0x000107c48734();
  func_0x000107c61170(param_3);
  func_0x000107c483ac(puVar1,param_2,0,0,0,puVar2,puVar3,puVar4,puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1006e8a28; end: 1006e8a9b; -[SCSnapchatDeviceInfoProvider initWithSnapAirShakeTicketAdapter:] */

undefined1 * FUN_1006e8a28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f8f38;
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



/* Entry: 1006e8a9c; end: 1006e8b8b; +[SCNativeBlizzardLoggerDelegateUtils toUserPkId:] */

void FUN_1006e8a9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x000107c61174(param_3);
  func_0x000107c41304();
  func_0x000107c61180();
  lVar2 = param_3;
  func_0x000107c61178();
  func_0x000107c3eea8();
  lVar3 = param_3;
  func_0x000107c4adac(param_3);
  func_0x000107c61170(param_3);
  puVar4 = puVar1;
  func_0x000107c61178(puVar1);
  func_0x000107c4d2d0();
  func_0x000107c60730(lVar2,lVar3,puVar4);
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x000107c61178();
    func_0x000107c3eea8();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
  }
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1006e8b8c; end: 1006e8bdf; +[SCSnapchatAirPerformer shared] */

void FUN_1006e8b8c(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113727000 != -1) {
    FUN_10002a2fc(0x113727000,&PTR___NSConcreteGlobalBlock_1109f1af0);
  }
  uVar1 = uRam0000000113726ff8;
  func_0x000107c61174(uRam0000000113726ff8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1006e8be0; end: 1006e8c7f; -[SCFideliusDeviceGraphManager deviceIDString] */

void FUN_1006e8be0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c41900();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1006e8c80; end: 1006e8d87; -[SCFideliusDeviceIDManager initWithLogger:performer:] */

undefined1 *
FUN_1006e8c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = &UNK_10f30e86b;
  FUN_1000ba800(&UNK_10f30e86b);
  puStack_48 = PTR_PTR_1126eaf38;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_3;
    func_0x000107c61170(uVar3);
    puVar4 = (undefined1 *)puVar2;
    func_0x000107c3bd40();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined1 **)((long)puVar2 + 0x18) = puVar4;
    func_0x000107c61170(uVar3);
  }
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 1006e8d88; end: 1006e8e77; -[SCFideliusDeviceIDManager _loadDeviceID] */

void FUN_1006e8d88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  puVar1 = &UNK_10f30e94e;
  FUN_1000ba800(&UNK_10f30e94e);
  lVar2 = param_1;
  func_0x000107c3bd44();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x000107c3bd48();
    func_0x000107c61180();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      puStack_50 = &UNK_10592ee60;
      puStack_48 = &UNK_110841f80;
      lStack_40 = param_1;
      func_0x000107c61174(lVar2);
      lStack_38 = lVar2;
      func_0x000107c4e524(uVar3,param_2,&puStack_60);
      func_0x000107c61170(lStack_38);
    }
  }
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1006e8e78; end: 1006e8f5f; -[SCFideliusDeviceIDManager _loadDeviceIDFromArchive] */

void FUN_1006e8e78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = &UNK_10f30e976;
  FUN_1000ba800(&UNK_10f30e976);
  puVar2 = PTR_PTR_1126b85c8;
  func_0x000107c5a9bc(PTR_PTR_1126b85c8);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x000107c61158(PTR__OBJC_CLASS___NSUUID_1126b0270);
  func_0x000107c60b14();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126c0458;
  func_0x000107c3b718(PTR_PTR_1126c0458);
  func_0x000107c61180();
  puVar5 = puVar2;
  func_0x000107c4b754(puVar2,param_2,puVar3,puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1006e8f60; end: 1006e8fb3; +[SCFideliusDeviceIDManager _fideliusDeviceIDPath] */

void FUN_1006e8f60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x000107c5a9bc(PTR_PTR_1126b85c8);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4e450();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006e8fb4; end: 1006e8fdf;  */

void FUN_1006e8fb4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d57e0;
  func_0x000107c610fc();
  uVar1 = puRam0000000113726ff8;
  puRam0000000113726ff8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1006e8fe0; end: 1006e9093; -[SCSnapchatAirPerformer init] */

undefined1 * FUN_1006e8fe0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8f30;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    puVar1 = puRam0000000113726ff0;
    puRam0000000113726ff0 = puVar3;
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar4);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 1006e9094; end: 1006e9107; -[SCSnapchatNotificationHandler initWithSnapAirShakeTicketAdapter:] */

undefined1 * FUN_1006e9094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f8f40;
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



/* Entry: 1006e9108; end: 1006e924b; -[SCSnapAirConfiguration initWithRequestSender:withLogWriter:withEventLogger:withDeviceInfoProvider:withWorkDirectory:withPerformer:notificationHandler:] */

undefined1 *
FUN_1006e9108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_58 = PTR_PTR_1126f8f88;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c56a68(puVar1);
    func_0x000107c560bc(puVar1);
    func_0x000107c546b8(puVar1);
    func_0x000107c5408c(puVar1);
    func_0x000107c5a7c8(puVar1);
    func_0x000107c57314(puVar1);
    func_0x000107c56afc(puVar1);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006e924c; end: 1006e927b; -[SCSnapAirConfiguration setNetworkRequestSender:] */

void FUN_1006e924c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1006e927c; end: 1006e92ab; -[SCSnapAirConfiguration setLogWriter:] */

void FUN_1006e927c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1006e92ac; end: 1006e92db; -[SCSnapAirConfiguration setEventLogger:] */

void FUN_1006e92ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1006e92dc; end: 1006e930b; -[SCSnapAirConfiguration setDeviceInfoProvider:] */

void FUN_1006e92dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1006e930c; end: 1006e933b; -[SCSnapAirConfiguration setWorkDirectory:] */

void FUN_1006e930c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1006e933c; end: 1006e936b; -[SCSnapAirConfiguration setPerformer:] */

void FUN_1006e933c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1006e936c; end: 1006e939b; -[SCSnapAirConfiguration setNotificationHandler:] */

void FUN_1006e936c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1006e939c; end: 1006e9487; +[SCSnapchatAirConfigProvider getDefaultBetaConfig] */

void FUN_1006e939c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  uStack_38 = 0x1006e9424;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c4958 != -1) {
    FUN_10002a2fc(0x1136c4958,&puStack_48);
  }
  uVar1 = uRam00000001136c4950;
  func_0x000107c61174(uRam00000001136c4950);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1006e9488; end: 1006e94db; +[SCSnapchatBetaShakeLogWriter shared] */

void FUN_1006e9488(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c6688 != -1) {
    FUN_10002a2fc(0x1136c6688,&PTR___NSConcreteGlobalBlock_1109605a8);
  }
  uVar1 = uRam00000001136c6680;
  func_0x000107c61174(uRam00000001136c6680);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1006e94dc; end: 1006e9507;  */

void FUN_1006e94dc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d0220;
  func_0x000107c610fc();
  uVar1 = puRam00000001136c6680;
  puRam00000001136c6680 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1006e9508; end: 1006e95ab; -[SCShakeToReportServices initWithShakeInfoHolder:eventListenerAnnouncer:] */

undefined1 *
FUN_1006e9508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112704fa8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006e95ac; end: 1006e95b3; +[SCShakeConfigCoordinator isUserGodMode:] */

undefined8 FUN_1006e95ac(void)

{
  return 0;
}



/* Entry: 1006e95b4; end: 1006e95bb; -[SCShakeToReportServices setIsUserGodMode:] */

void FUN_1006e95b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1006e95bc; end: 1006e9617;  */

void FUN_1006e95bc(void)

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



/* Entry: 1006e9618; end: 1006e961f;  */

void FUN_1006e9618(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xe8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006e9620; end: 1006e9673;  */

void FUN_1006e9620(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xe8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006e9674; end: 1006ea793;  */

void FUN_1006e9674(long *param_1,long param_2)

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
  long lVar27;
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
  FUN_100365a14();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x48) = uStack_78;
  *(undefined8 *)(param_2 + 0x50) = uStack_80;
  *(undefined8 *)(param_2 + 0x58) = uStack_88;
  *(undefined8 *)(param_2 + 0x60) = uStack_90;
  *(undefined8 *)(param_2 + 0x68) = uStack_98;
  *(undefined8 *)(param_2 + 0x70) = uStack_a0;
  *(undefined8 *)(param_2 + 0x78) = uStack_a8;
  *(undefined8 *)(param_2 + 0x80) = uStack_b0;
  *(undefined8 *)(param_2 + 0x88) = uStack_b8;
  *(undefined8 *)(param_2 + 0x90) = uStack_c0;
  *(undefined8 *)(param_2 + 0x98) = uStack_c8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_d0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_d8;
  *(undefined8 *)(param_2 + 0xb0) = uStack_e0;
  *(undefined8 *)(param_2 + 0xb8) = uStack_e8;
  *(undefined8 *)(param_2 + 0xc0) = uStack_f0;
  *(undefined8 *)(param_2 + 200) = uStack_f8;
  *(undefined8 *)(param_2 + 0xd0) = uStack_100;
  *(undefined8 *)(param_2 + 0xd8) = uStack_108;
  *(undefined8 *)(param_2 + 0xe0) = uStack_110;
  FUN_1000285a8(0x112f12a70,&UNK_10db46d48);
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
  uVar15 = uStack_c8;
  func_0x000107c61174();
  uVar16 = uStack_d0;
  func_0x000107c61174();
  uVar17 = uStack_d8;
  func_0x000107c61174();
  uVar18 = uStack_e0;
  func_0x000107c61174();
  uVar19 = uStack_e8;
  func_0x000107c61174();
  uVar20 = uStack_f0;
  func_0x000107c61174();
  uVar21 = uStack_f8;
  func_0x000107c61174();
  uVar22 = uStack_100;
  func_0x000107c61174();
  uVar23 = uStack_108;
  func_0x000107c61174();
  uVar24 = uStack_110;
  func_0x000107c61174();
  uVar14 = uStack_118;
  func_0x000107c6157c(uStack_118);
  FUN_1003b3b80();
  puVar12 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x18) = puVar12;
  FUN_1000285a8(0x112f12a78,&UNK_10db46d50);
  func_0x000107c610f8();
  uVar14 = uStack_120;
  func_0x000107c6157c(uStack_120);
  FUN_1003b3b80();
  puVar12 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x20) = puVar12;
  FUN_1000285a8(0x112f12a80,&UNK_10db46d58);
  func_0x000107c610f8();
  uVar14 = uStack_128;
  func_0x000107c6157c();
  FUN_1003b3b80();
  puVar12 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x28) = puVar12;
  FUN_1000285a8(0x112f12a88,&UNK_10db46d60);
  func_0x000107c610f8();
  uVar14 = uStack_130;
  func_0x000107c6157c(uStack_130);
  FUN_1003b3b80();
  puVar12 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x30) = puVar12;
  FUN_1000285a8(0x112f12a90,&UNK_10db46d68);
  func_0x000107c610f8();
  uVar14 = uStack_138;
  func_0x000107c6157c();
  FUN_1003b3b80();
  puVar12 = PTR_PTR_1126aa638;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x38) = puVar12;
  puVar12 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x40) = puVar12;
  puVar12 = PTR_PTR_1126ac3b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar12;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0x5376614e72657375;
  func_0x000107c5fadc(0x5376614e72657375,0xec00000065706f63);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  uVar25 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar25);
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar25);
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar25);
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0fcb00);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar25);
  uVar14 = 0x53747865746e6f63;
  func_0x000107c5fadc(0x53747865746e6f63,0xef73656369767265);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  uVar25 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f10b980);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efbb850);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f10b9a0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f10b900);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f03eda0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f05c040);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef287a0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f009fa0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc6dc0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar14);
  uVar26 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar26);
  uVar14 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f10b9d0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar22);
  func_0x000107c61174();
  uVar14 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f10b9f0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar23);
  func_0x000107c61174();
  uVar14 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f10ba20);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar24);
  func_0x000107c61174();
  uVar14 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f10ba40);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar14);
  lVar27 = *(long *)(param_2 + 0x40);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f10ba60);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar25 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f10ba80);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar25);
  uVar25 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174(uVar25);
  uVar14 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f10baa0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar14);
  uVar25 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174(uVar26);
  func_0x000107c61174(uVar25);
  uVar14 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f10bac0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174(uVar26);
  func_0x000107c61174(uVar14);
  uVar25 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f10bae0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar25);
  uVar14 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174(uVar26);
  func_0x000107c61174(uVar14);
  uVar25 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f10bb00);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar25);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar27 != 0) {
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
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar24);
    func_0x000107c61574(uStack_118);
    func_0x000107c61574(uStack_120);
    func_0x000107c61574(uStack_128);
    func_0x000107c61574(uStack_130);
    func_0x000107c61574(uStack_138);
    *(long *)(param_2 + 0xe8) = lVar27;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006ea794);
  (*pcVar1)();
}


