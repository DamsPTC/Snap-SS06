/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1003cc838; end: 1003cc88b;  */

void FUN_1003cc838(undefined8 *param_1)

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



/* Entry: 1003cc88c; end: 1003cd157;  */

void FUN_1003cc88c(long *param_1,long param_2)

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
  long lVar19;
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
  FUN_10021e2fc();
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
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_c0;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174();
  uVar5 = uStack_80;
  func_0x000107c61174();
  uVar6 = uStack_88;
  func_0x000107c61174();
  uVar7 = uStack_90;
  func_0x000107c61174();
  uVar8 = uStack_98;
  func_0x000107c61174();
  uVar9 = uStack_a0;
  func_0x000107c61174();
  uVar10 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar11 = uStack_b0;
  func_0x000107c61174();
  uVar12 = uStack_b8;
  func_0x000107c61174(uStack_b8);
  uVar13 = uStack_c8;
  func_0x000107c61174();
  uVar14 = uStack_d0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7c00;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar15 = auStack_70[0];
  func_0x000107c61174();
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar16 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010efbb820);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar16 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef10e10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar16);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar16);
  uVar17 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efbb850);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  uVar16 = 0x112dca948;
  FUN_1000285a8(0x112dca948,&UNK_10d99f4a0);
  func_0x000107c60184();
  uVar18 = 0x5372657070696c66;
  func_0x000107c5fadc(0x5372657070696c66,0xef73656369767265);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c615e8(uVar16);
  func_0x000107c61170(uVar18);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar14);
  func_0x000107c61174();
  uVar16 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar16);
  lVar19 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efbb870);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(uVar16);
  func_0x000107c3e740(uVar17);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar19 != 0) {
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
    *(long *)(param_2 + 0x80) = lVar19;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cd158);
  (*pcVar1)();
}



/* Entry: 1003cd158; end: 1003cd193;  */

void FUN_1003cd158(void)

{
  long unaff_x20;
  
  FUN_1003cc88c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1003cd194; end: 1003cd19b;  */

void FUN_1003cd194(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  FUN_1000cad14();
  uVar1 = 0;
  FUN_1001b11b8(0);
  func_0x000107c610f8();
  func_0x0001003cd1e4(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1003cd19c; end: 1003cd23b;  */

void FUN_1003cd19c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1000cad14();
  uVar1 = 0;
  FUN_1001b11b8(0);
  func_0x000107c610f8();
  func_0x0001003cd1e4(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1003cd23c; end: 1003cd243;  */

void FUN_1003cd23c(undefined8 *param_1)

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



/* Entry: 1003cd244; end: 1003cd297;  */

void FUN_1003cd244(undefined8 *param_1)

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



/* Entry: 1003cd298; end: 1003cd29f;  */

void FUN_1003cd298(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_1001cd01c();
  func_0x000107c613fc();
  FUN_1003cd314(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003cd2a0; end: 1003cd313;  */

void FUN_1003cd2a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_1001cd01c();
  func_0x000107c613fc();
  FUN_1003cd314(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 1003cd314; end: 1003cd47b;  */

void FUN_1003cd314(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a7f60;
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
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
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



/* Entry: 1003cd47c; end: 1003cd55f; -[SCContextExperimentServiceProvider provide] */

void FUN_1003cd47c(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126ba048;
  func_0x000107c610f4(PTR_PTR_1126ba048);
  func_0x000107c46128();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1003cd560; end: 1003cd5b7; -[_TtC27SCContextExperimentServices27SCContextExperimentServices initWithContextExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003cd560(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_1130190c8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1003cd5b8; end: 1003cd5e3;  */

void FUN_1003cd5b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003cd5e4; end: 1003cd9ff; -[SCAdOperationalLoggingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003cd5e4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
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
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_105415840;
  puStack_90 = &UNK_110886f08;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar8;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_105415a78;
  puStack_b8 = &UNK_110886f38;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_f8 = puVar8;
  uStack_f0 = 0xc2000000;
  puStack_e8 = &UNK_105415ab8;
  puStack_e0 = &UNK_110886f68;
  func_0x000107c6111c(auStack_d8,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  puStack_120 = puVar8;
  uStack_118 = 0xc2000000;
  puStack_110 = &UNK_105415b6c;
  puStack_108 = &UNK_110886f98;
  func_0x000107c6111c(auStack_100,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_1127231d8;
    func_0x000107c61148();
  }
  lVar5 = lVar11;
  func_0x000107c5db24();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_1127231e8;
    func_0x000107c61148();
  }
  lVar6 = lVar11;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  puVar7 = PTR_PTR_1126ae720;
  puStack_160 = puVar8;
  uStack_158 = 0xc2000000;
  puStack_150 = &UNK_105415d68;
  puStack_148 = &UNK_110886fc8;
  func_0x000107c6111c(auStack_128,auStack_80);
  puStack_140 = puVar4;
  lStack_138 = lVar5;
  lStack_130 = lVar6;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_168,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(param_1 + _DAT_1127231c4);
  puVar9 = PTR_PTR_1126b8d60;
  func_0x000107c610f4(PTR_PTR_1126b8d60);
  func_0x000107c455e0();
  func_0x000107c42c20(uVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61120(auStack_168);
  func_0x000107c61170(puVar7);
  func_0x000107c61120(auStack_128);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
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



/* Entry: 1003cda00; end: 1003cda07; -[SCUserInfoServices usernameProvider] */

undefined8 FUN_1003cda00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1003cda08; end: 1003cdd23; -[_TtC28AdOperationalLoggingServices28AdOperationalLoggingServices initWithAdOpportunityLogger:adOpportunityLoggerV2:adDebugNetworkResponseLogger:commonOperationMetricsManager:adInitMetricsManager:serveMetricsManager:settingsMetricsManager:trackMetricsManager:mediaMetricsManager:adTrackingAuthorizationMetricsManager:skAdNetworkMetricsManager:lifecycleWatermarkMetricsManager:adShake2ReportLogger:insertionMetricsManager:internalErrorMetricsManager:multiAdPodMetricsManager:promotedStoryMetricsManager:] */

void FUN_1003cda08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x0001003cdb90(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19);
  return;
}



/* Entry: 1003cdd24; end: 1003cdda7;  */

void FUN_1003cdd24(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003cdda8; end: 1003cddaf;  */

void FUN_1003cdda8(undefined8 *param_1)

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



/* Entry: 1003cddb0; end: 1003cde03;  */

void FUN_1003cddb0(undefined8 *param_1)

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



/* Entry: 1003cde04; end: 1003ce0f7;  */

void FUN_1003cde04(long *param_1,long param_2)

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
  FUN_10022e970();
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
  func_0x0001003d14bc();
  func_0x000107c613fc();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar3 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar4 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar7 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = auStack_70[0];
  func_0x000107c61174();
  uVar11 = uVar10;
  FUN_1003d1548();
  *(undefined8 *)(param_2 + 0x10) = uVar11;
  uVar12 = uVar11;
  func_0x000107c6157c();
  FUN_1003d1568();
  func_0x000107c61574(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  *(undefined8 *)(param_2 + 0x60) = uVar12;
  *param_1 = param_2;
  return;
}



/* Entry: 1003ce0f8; end: 1003ce12b;  */

void FUN_1003ce0f8(void)

{
  long unaff_x20;
  
  FUN_1003cde04(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1003ce12c; end: 1003ce133;  */

void FUN_1003ce12c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_1001ddd5c(0);
  func_0x000107c610f8();
  func_0x0001003ce17c(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1003ce134; end: 1003ce1c7;  */

void FUN_1003ce134(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_1001ddd5c(0);
  func_0x000107c610f8();
  func_0x0001003ce17c(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1003ce1c8; end: 1003ce1cf;  */

void FUN_1003ce1c8(undefined8 *param_1)

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



/* Entry: 1003ce1d0; end: 1003ce223;  */

void FUN_1003ce1d0(undefined8 *param_1)

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



/* Entry: 1003ce224; end: 1003ce25f;  */

void FUN_1003ce224(void)

{
  long unaff_x20;
  
  FUN_1003ce260(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1003ce260; end: 1003ce917;  */

void FUN_1003ce260(long *param_1,long param_2)

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
  FUN_10021e788();
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
  puVar1 = PTR_PTR_1126a7c08;
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
  uVar11 = uStack_c0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar15 = 0xd000000000000010;
  uVar13 = uVar15;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar13 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar13);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar13 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2a580);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar14);
  uVar13 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85690);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar14);
  uVar13 = 0x65536574696c7173;
  func_0x000107c5fadc(0x65536574696c7173,0xee00736563697672);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb890);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efbb8b0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efbb8d0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar13);
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



/* Entry: 1003ce918; end: 1003ce91f;  */

void FUN_1003ce918(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_100b991c0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100b99188;
  puStack_78 = &UNK_11074c7d8;
  uStack_68 = uVar1;
  func_0x000107c60bc4(&puStack_90);
  uVar3 = uStack_68;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar3);
  puVar6 = puVar4;
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  pcStack_70 = FUN_100b991c4;
  puStack_90 = puVar8;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100b99188;
  puStack_78 = &UNK_11074c800;
  uStack_68 = uVar2;
  func_0x000107c60bc4(&puStack_90);
  uVar1 = uStack_68;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  puVar8 = PTR_PTR_1126adc50;
  func_0x000107c610f8();
  func_0x000107c48e60();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  *param_1 = puVar8;
  return;
}



/* Entry: 1003ce920; end: 1003cea83;  */

void FUN_1003ce920(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_100b991c0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100b99188;
  puStack_78 = &UNK_11074c7d8;
  uStack_68 = param_2;
  func_0x000107c60bc4(&puStack_90);
  uVar1 = uStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  puVar4 = puVar2;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  pcStack_70 = FUN_100b991c4;
  puStack_90 = puVar6;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100b99188;
  puStack_78 = &UNK_11074c800;
  uStack_68 = param_3;
  func_0x000107c60bc4(&puStack_90);
  uVar1 = uStack_68;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(uVar1);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar6 = PTR_PTR_1126adc50;
  func_0x000107c610f8();
  func_0x000107c48e60();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  *param_1 = puVar6;
  return;
}



/* Entry: 1003cea84; end: 1003cea9b;  */

void FUN_1003cea84(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1003cea9c; end: 1003ceb3f; -[SCSQLiteServices initWithTransactorProvider:appGroupTransactionProvider:] */

undefined1 *
FUN_1003cea9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112705488;
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



/* Entry: 1003ceb40; end: 1003ceb6b;  */

void FUN_1003ceb40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003ceb6c; end: 1003ceb73;  */

void FUN_1003ceb6c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003ceb74; end: 1003cebc7;  */

void FUN_1003ceb74(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003cebc8; end: 1003cebd7;  */

void FUN_1003cebc8(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10020d4c8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
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
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar8 = PTR_PTR_1126a8138;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar8;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85a70);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(puVar8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc4420);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(puVar8);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    *(undefined **)(lVar2 + 0x40) = puVar3;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cef8c);
  (*pcVar1)();
}



/* Entry: 1003cebd8; end: 1003cef8b;  */

void FUN_1003cebd8(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  FUN_10020d4c8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
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
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar7 = PTR_PTR_1126a8138;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar7;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85a70);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(puVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc4420);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(puVar7);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    *(undefined **)(param_2 + 0x40) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cef8c);
  (*pcVar1)();
}



/* Entry: 1003cef8c; end: 1003cef93;  */

void FUN_1003cef8c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a6fd0;
  func_0x000107c610f8();
  func_0x000107c47158();
  func_0x000107c61170(unaff_x20);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003cef94; end: 1003cefe7;  */

void FUN_1003cef94(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a6fd0;
  func_0x000107c610f8();
  func_0x000107c47158();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003cefe8; end: 1003cf05b; -[SCLegacyBlizzardServices initWithLegacyLogger:] */

undefined1 * FUN_1003cefe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702cc8;
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



/* Entry: 1003cf05c; end: 1003cf1c7; -[SCSpectrumServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003cf05c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f4b08;
  lStack_50 = param_1;
  func_0x000107c61154(&lStack_50,PTR_s_begin_1125a3840);
  func_0x000107c61144(auStack_58,param_1);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126d0350;
  func_0x000107c610f4(PTR_PTR_1126d0350);
  func_0x000107c48924();
  puVar1 = PTR_PTR_1126b6b50;
  lVar4 = param_1 + _DAT_1127577d8;
  func_0x000107c61148(lVar4);
  func_0x000107c5a3b0(puVar1);
  func_0x000107c61170(lVar4);
  uVar5 = 0;
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127577ec);
  }
  func_0x000107c61174(uVar5);
  func_0x000107c42c20(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  return;
}



/* Entry: 1003cf1c8; end: 1003cf1cb; -[SCEntryPoint begin] */

void FUN_1003cf1c8(void)

{
  return;
}



/* Entry: 1003cf1cc; end: 1003cf253; -[_TtC18SCSpectrumServices18SCSpectrumServices initWithSpectrumLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003cf1cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_1000285a8(0x112da9f18,&UNK_10d951250);
  func_0x000107c61174();
  uVar1 = param_3;
  FUN_1000bda74();
  *(undefined8 *)(param_1 + _DAT_113083908) = uVar1;
  *(undefined8 *)(param_1 + _DAT_113083910) = param_3;
  FUN_100210c04();
  lStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003cf254; end: 1003cf283; +[SCBlizzardUploadManager setUserNetworkServices:] */

void FUN_1003cf254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = uRam00000001136c4b30;
  uRam00000001136c4b30 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003cf284; end: 1003cf2c7;  */

void FUN_1003cf284(void)

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



/* Entry: 1003cf2c8; end: 1003cf2cf;  */

void FUN_1003cf2c8(undefined8 *param_1)

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



/* Entry: 1003cf2d0; end: 1003cf323;  */

void FUN_1003cf2d0(undefined8 *param_1)

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



/* Entry: 1003cf324; end: 1003cf333;  */

void FUN_1003cf324(long *param_1)

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
  FUN_1001d6e68();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  FUN_1003cf4dc(0);
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
  FUN_1003cf55c();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_1003cf740();
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



/* Entry: 1003cf334; end: 1003cf4db;  */

void FUN_1003cf334(long *param_1,long param_2)

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
  FUN_1001d6e68();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  FUN_1003cf4dc(0);
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
  FUN_1003cf55c();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_1003cf740();
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



/* Entry: 1003cf4dc; end: 1003cf55b;  */

void FUN_1003cf4dc(undefined8 param_1)

{
  if (lRam0000000112dd0708 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e656b4c);
  return;
}



/* Entry: 1003cf55c; end: 1003cf5a3;  */

void FUN_1003cf55c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 1003cf5a4; end: 1003cf73f;  */

void FUN_1003cf5a4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar7 = (uint)param_2;
  FUN_100028eb0();
  uVar5 = *param_2;
  bVar6 = (uVar7 & 0xff) != 1;
  uVar2 = 0x5344415241;
  if (bVar6) {
    uVar2 = 0x4c434441;
  }
  uVar3 = 0xe500000000000000;
  if (bVar6) {
    uVar3 = 0xe400000000000000;
  }
  uVar1 = 0xd00000000000001d;
  pcVar4 = "ion.AdCrashLogger";
  if (bVar6) {
    uVar1 = 0xd00000000000001a;
    pcVar4 = "r auto S2R is invalid.";
  }
  uVar8 = 0x112d38280;
  FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  *param_1 = 1;
  param_1[1] = uVar5;
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 8) = 0x44495f4441;
  *(undefined8 *)(param_1 + 0x10) = 0xe500000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0x48534152435f4441;
  *(undefined8 *)(param_1 + 0x20) = 0xef524547474f4c5f;
  *(undefined8 *)(param_1 + 0x28) = 0xd00000000000004d;
  *(undefined8 *)(param_1 + 0x30) = 0x800000010efbeff0;
  *(undefined8 *)(param_1 + 0x38) = 0x535341205d40255b;
  *(undefined8 *)(param_1 + 0x40) = 0xee0040252d545245;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(ulong *)(param_1 + 0x50) = (ulong)pcVar4 | 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined8 *)(param_1 + 0x68) = uVar8;
  *(undefined8 *)(param_1 + 0x78) = 0xd00000000000001d;
  *(undefined8 *)(param_1 + 0x70) = 0x40;
  *(undefined8 *)(param_1 + 0x80) = 0x800000010efbf040;
  *(undefined8 *)(param_1 + 0x88) = 0xd000000000000055;
  *(undefined8 *)(param_1 + 0x90) = 0x800000010efbf060;
  *(undefined8 *)(param_1 + 0x98) = 0xd000000000000026;
  *(undefined8 *)(param_1 + 0xa0) = 0x800000010efbf0c0;
  return;
}



/* Entry: 1003cf740; end: 1003cf7c7;  */

void FUN_1003cf740(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_180 [168];
  undefined1 auStack_d8 [168];
  
  puVar1 = auStack_180;
  FUN_1003cf5a4(auStack_180,0);
  FUN_1003cf7c8(auStack_180);
  func_0x0001003cfb68(auStack_180);
  FUN_1003cf5a4(auStack_d8,1);
  puVar2 = auStack_d8;
  FUN_1003cf7c8(puVar2);
  func_0x0001003cfb68(auStack_d8);
  uVar3 = 0;
  FUN_1001d6ef4(0);
  func_0x000107c610f8();
  FUN_1003cfb9c(puVar1,puVar2,uVar3);
  return;
}



/* Entry: 1003cf7c8; end: 1003cf9cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1003cf7c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_f8 [168];
  
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130807f0);
  FUN_1000285a8(0x112da9848,&UNK_10d991ca0);
  pcVar7 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + 0x28)) +
                     0x58);
  uVar1 = uVar6;
  func_0x000107c615f0();
  (*pcVar7)();
  uVar2 = uVar1;
  FUN_1000bda74();
  func_0x000107c61170(uVar1);
  FUN_1000285a8(0x112dd07c8,&UNK_10d9bc7b0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c444a4(uVar3);
  func_0x000107c61180();
  uVar1 = uVar3;
  FUN_1000bda74();
  func_0x000107c61170(uVar3);
  FUN_1000285a8(0x112dd07d0,&UNK_10d991cb0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  puVar4 = &UNK_1018e14e8;
  FUN_1000bdd8c(&UNK_1018e14e8,uVar1);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_11304a478);
  puVar5 = &UNK_11040e2d0;
  func_0x000107c613fc(&UNK_11040e2d0,0xd8,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar6;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  *(undefined8 *)(puVar5 + 0x28) = uVar3;
  uVar8 = param_1[0x10];
  uVar10 = param_1[0x13];
  uVar9 = param_1[0x12];
  *(undefined8 *)(puVar5 + 0xb8) = param_1[0x11];
  *(undefined8 *)(puVar5 + 0xb0) = uVar8;
  *(undefined8 *)(puVar5 + 200) = uVar10;
  *(undefined8 *)(puVar5 + 0xc0) = uVar9;
  *(undefined8 *)(puVar5 + 0xd0) = param_1[0x14];
  uVar8 = param_1[8];
  uVar10 = param_1[0xb];
  uVar9 = param_1[10];
  *(undefined8 *)(puVar5 + 0x78) = param_1[9];
  *(undefined8 *)(puVar5 + 0x70) = uVar8;
  *(undefined8 *)(puVar5 + 0x88) = uVar10;
  *(undefined8 *)(puVar5 + 0x80) = uVar9;
  uVar10 = param_1[0xc];
  uVar9 = param_1[0xf];
  uVar8 = param_1[0xe];
  *(undefined8 *)(puVar5 + 0x98) = param_1[0xd];
  *(undefined8 *)(puVar5 + 0x90) = uVar10;
  *(undefined8 *)(puVar5 + 0xa8) = uVar9;
  *(undefined8 *)(puVar5 + 0xa0) = uVar8;
  uVar8 = *param_1;
  uVar10 = param_1[3];
  uVar9 = param_1[2];
  *(undefined8 *)(puVar5 + 0x38) = param_1[1];
  *(undefined8 *)(puVar5 + 0x30) = uVar8;
  *(undefined8 *)(puVar5 + 0x48) = uVar10;
  *(undefined8 *)(puVar5 + 0x40) = uVar9;
  uVar10 = param_1[4];
  uVar9 = param_1[7];
  uVar8 = param_1[6];
  *(undefined8 *)(puVar5 + 0x58) = param_1[5];
  *(undefined8 *)(puVar5 + 0x50) = uVar10;
  *(undefined8 *)(puVar5 + 0x68) = uVar9;
  *(undefined8 *)(puVar5 + 0x60) = uVar8;
  FUN_1000285a8(0x112dd07d8,&UNK_10db40610);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  FUN_1003cfac4(param_1,auStack_f8);
  pcVar7 = FUN_10040b574;
  FUN_1000bdd8c(FUN_10040b574,puVar5);
  func_0x000107c615e8(uVar6);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar1);
  return pcVar7;
}



/* Entry: 1003cf9d0; end: 1003cfac3;  */

undefined1 * FUN_1003cf9d0(undefined1 *param_1,undefined1 *param_2)

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
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  uVar7 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  uVar9 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x80);
  uVar6 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar9;
  *(undefined8 *)(param_1 + 0x88) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x90);
  uVar8 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar6;
  *(undefined8 *)(param_1 + 0x98) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = uVar8;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar9);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar8);
  return param_1;
}



/* Entry: 1003cfac4; end: 1003cfb9b;  */

undefined8 FUN_1003cfac4(undefined8 param_1,undefined8 param_2)

{
  FUN_1003cf9d0(param_2,param_1);
  return param_2;
}



/* Entry: 1003cfb9c; end: 1003cfc17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003cfb9c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113010aa0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113010aa8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113010a90) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113010a98) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003cfc18; end: 1003cfc5b;  */

void FUN_1003cfc18(void)

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



/* Entry: 1003cfc5c; end: 1003cfc63;  */

void FUN_1003cfc5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_1000970a4(0);
  func_0x000107c610f8();
  FUN_1003cfcac(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1003cfc64; end: 1003cfcab;  */

void FUN_1003cfc64(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_1000970a4(0);
  func_0x000107c610f8();
  FUN_1003cfcac(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1003cfcac; end: 1003cfce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003cfcac(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_113053888) = param_1;
  FUN_1000970a4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003cfce8; end: 1003d027b; -[SCAdTrackEventRepositoryServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003cfce8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined8 uStack_198;
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
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1003d0aec;
  puStack_90 = &UNK_110861c28;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d8 = puVar7;
  uStack_d0 = 0xc2000000;
  puStack_c8 = &UNK_1054218d4;
  puStack_c0 = &UNK_110887730;
  func_0x000107c6111c(auStack_b0,auStack_80);
  puStack_b8 = puVar1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_110 = puVar7;
  uStack_108 = 0xc2000000;
  puStack_100 = &UNK_105421944;
  puStack_f8 = &UNK_110887760;
  func_0x000107c6111c(auStack_e0,auStack_80);
  puStack_f0 = puVar2;
  puStack_e8 = puVar1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  puStack_140 = puVar7;
  uStack_138 = 0xc2000000;
  puStack_130 = &UNK_1054219d4;
  puStack_128 = &UNK_110887790;
  func_0x000107c6111c(auStack_118,auStack_80);
  puStack_120 = puVar1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  puStack_178 = puVar7;
  uStack_170 = 0xc2000000;
  puStack_168 = &UNK_105421a44;
  puStack_160 = &UNK_1108877c0;
  func_0x000107c6111c(auStack_148,auStack_80);
  puStack_158 = puVar1;
  puStack_150 = puVar4;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  puStack_1a0 = puVar7;
  uStack_198 = 0xc2000000;
  puStack_190 = &UNK_105421ab8;
  puStack_188 = &UNK_1108877f0;
  func_0x000107c6111c(auStack_180,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_1a8,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126b8eb0;
  func_0x000107c610fc();
  lVar9 = param_1 + _DAT_112723390;
  func_0x000107c61148(lVar9);
  lVar10 = lVar9;
  func_0x000107c453b0();
  func_0x000107c61180();
  lVar11 = lVar10;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4fc5c();
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  param_1 = param_1 + _DAT_112723394;
  func_0x000107c61148();
  lVar9 = param_1;
  func_0x000107c3de00();
  func_0x000107c61180();
  lVar10 = lVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar16 = PTR_PTR_1126ae960;
  puVar12 = PTR_PTR_1126b8dd8;
  func_0x000107c3d4fc(PTR_PTR_1126b8dd8);
  func_0x000107c61180();
  func_0x000107c3d284();
  func_0x000107c61180();
  puVar13 = PTR_PTR_1126ae970;
  func_0x000107c44e60(PTR_PTR_1126ae970);
  func_0x000107c61180();
  puVar14 = puVar1;
  func_0x000107c5c734(puVar1);
  func_0x000107c61180();
  puVar15 = puVar14;
  func_0x000107c4f7c0();
  func_0x000107c61180();
  func_0x000107c5e08c(lVar10);
  func_0x000107c611b0();
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(param_1);
  puVar16 = PTR_PTR_1126b8eb8;
  func_0x000107c610f4(PTR_PTR_1126b8eb8);
  func_0x000107c45610();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61120(auStack_1a8);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_180);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_148);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_118);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_e0);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 1003d027c; end: 1003d05ab; -[SCCachedConfigDataStore cacheNamespaceBundle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d027c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x21;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  long lStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_228 = param_1;
  func_0x000107c61174(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c610fc();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar3 = param_3;
  func_0x000107c400dc();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c4080c();
  if (lVar4 != 0) {
    lVar11 = *plStack_1a0;
    do {
      unaff_x21 = 0;
      do {
        if (*plStack_1a0 != lVar11) {
          func_0x000107c61128(lVar3);
        }
        uVar10 = *(undefined8 *)(lStack_1a8 + unaff_x21 * 8);
        uVar9 = uVar10;
        func_0x000107c40098(uVar10);
        func_0x000107c61180();
        puVar5 = puVar2;
        func_0x000107c4d9c0();
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        if (puVar5 == (undefined *)0x0) {
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x000107c610fc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          uVar9 = uVar10;
          func_0x000107c40098(uVar10);
          func_0x000107c61180();
          func_0x000107c5a4a0(puVar2);
          func_0x000107c61170(uVar9);
          func_0x000107c61170(puVar5);
          func_0x000107c40098(uVar10);
          func_0x000107c61180();
          puVar5 = puVar2;
          func_0x000107c4d9c0(puVar2);
          func_0x000107c61180();
          func_0x000107c61170(uVar10);
        }
        func_0x000107c3d798(puVar5);
        func_0x000107c61170(puVar5);
        unaff_x21 = unaff_x21 + 1;
      } while (lVar4 != unaff_x21);
      lVar4 = lVar3;
      func_0x000107c4080c();
    } while (lVar4 != 0);
  }
  func_0x000107c61170(lVar3);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  puVar5 = puVar2;
  func_0x000107c3db60();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c4080c();
  if (puVar6 != (undefined *)0x0) {
    unaff_x21 = *plStack_1e0;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != unaff_x21) {
          func_0x000107c61128(puVar5);
        }
        puVar7 = puVar2;
        func_0x000107c4d9c0(puVar2);
        func_0x000107c61180();
        puVar8 = puVar7;
        func_0x000107c5b5c0();
        func_0x000107c61180();
        func_0x000107c5a4a0(puVar2);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar7);
        puVar12 = puVar12 + 1;
      } while (puVar6 != puVar12);
      puVar6 = puVar5;
      func_0x000107c4080c();
    } while (puVar6 != (undefined *)0x0);
  }
  func_0x000107c61170(puVar5);
  uVar9 = *(undefined8 *)(lStack_228 + 0x18);
  puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_218 = 0xc2000000;
  pcStack_210 = FUN_1003d2dbc;
  puStack_208 = &UNK_110841f80;
  lStack_200 = lStack_228;
  puStack_1f8 = puVar2;
  func_0x000107c61174(puVar2);
  FUN_10006eaa4(uVar9,&puStack_220);
  func_0x000107c61170(puStack_1f8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
  pcStack_238 = FUN_1003d05ac;
  puVar5 = puVar2;
  uStack_260 = uVar9;
  lStack_258 = unaff_x21;
  puStack_250 = puVar2;
  lStack_248 = param_3;
  puStack_240 = &stack0xfffffffffffffff0;
  func_0x000107c614f0();
  lVar3 = _DAT_112dcf678;
  puVar6 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(puVar2 + lVar3) = puVar6;
  *(undefined8 *)(puVar2 + _DAT_112dcf680) = 0;
  *(undefined8 *)(puVar2 + _DAT_112dcf688) = 0;
  *(undefined8 *)(puVar2 + _DAT_112dcf690) = 0;
  *(undefined8 *)(puVar2 + _DAT_112dcf698) = 0;
  puVar1 = (undefined8 *)(puVar2 + _DAT_112dcf6a0);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  puVar1 = (undefined8 *)(puVar2 + _DAT_112dcf6a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puStack_270 = puVar2;
  puStack_268 = puVar5;
  func_0x000107c61154(&puStack_270,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003d05ac; end: 1003d0663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d05ac(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112dcf678;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf680) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf688) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf690) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf698) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dcf6a0);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dcf6a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003d0664; end: 1003d0683; -[SCAdWebviewOperationEventRepositoryImpl init] */

void FUN_1003d0664(void)

{
  FUN_1003d05ac();
  return;
}



/* Entry: 1003d0684; end: 1003d0693; -[_TtC34SCShakeToReportInfoProviderService34SCShakeToReportInfoProviderService infoProviderRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d0684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113053888));
  return;
}



/* Entry: 1003d0694; end: 1003d06cb;  */

void FUN_1003d0694(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126a6f98;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003d06cc);
  (*pcVar1)();
}



/* Entry: 1003d06cc; end: 1003d0783; -[SCShakeToReportInfoProviderRegistryImpl init] */

undefined1 * FUN_1003d06cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f4998;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x000107c5e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x000107c5e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x000107c5e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1003d0784; end: 1003d07df; -[SCShakeToReportInfoProviderRegistryImpl registerMetaInfoProvider:] */

void FUN_1003d0784(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x10);
  func_0x000107c3d798(*(undefined8 *)(param_1 + 8),param_2,param_3);
  func_0x000107c611f0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1003d07e0; end: 1003d07ef; -[_TtC24SCTaskManagementServices24SCTaskManagementServices appLifecycleManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d07e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113093a90));
  return;
}



/* Entry: 1003d07f0; end: 1003d07f7; +[SCAttributedAdClientTask adTrackEventRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d07f0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ab70) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1003d07f8; end: 1003d0847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d07f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ab70) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1003d0848; end: 1003d0ae3; +[SCAttributedTask adClient:] */

void FUN_1003d0848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x0001003d0880();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003d0ae4; end: 1003d0aeb; +[SCSnapTaskPriority high] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d0ae4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_113096e78) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1003d0aec; end: 1003d0b2b;  */

void FUN_1003d0aec(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3c114();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1003d0b2c; end: 1003d0bbf; -[SCAdTrackEventRepositoryServiceProvider _performer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d0b2c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_112723394;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c4e604();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4e60c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1003d0bc0; end: 1003d0d9b; -[_TtC24AdTrackEventDataServices24AdTrackEventDataServices initWithAdTrackEventRepository:adTrackEventRepositoryV2:adTrackSeqNumProvider:adTrackPerformer:backgroundTaskProcessor:adTrackFunnelEventTracker:adPlaybackSessionObservableRepository:adWebviewConfigRepository:adWebviewOperationEventRepository:] */

void FUN_1003d0bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c615f0(param_11);
  func_0x0001003d0cb0(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  return;
}



/* Entry: 1003d0d9c; end: 1003d0e0f;  */

void FUN_1003d0d9c(void)

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



/* Entry: 1003d0e10; end: 1003d0e17;  */

void FUN_1003d0e10(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003d0e18; end: 1003d0e6b;  */

void FUN_1003d0e18(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003d0e6c; end: 1003d0e7b;  */

void FUN_1003d0e6c(long *param_1)

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
  long unaff_x20;
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
  FUN_10022d248();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  FUN_1003d105c(0);
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
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  FUN_1003d10ec();
  *(undefined8 *)(lVar1 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  FUN_1003d1104();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar1 + 0x40) = uVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 1003d0e7c; end: 1003d105b;  */

void FUN_1003d0e7c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_10022d248();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  FUN_1003d105c(0);
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
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_1003d10ec();
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_1003d1104();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x40) = uVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 1003d105c; end: 1003d10eb;  */

void FUN_1003d105c(undefined8 param_1)

{
  if (lRam000000011347a280 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e655d94);
  return;
}



/* Entry: 1003d10ec; end: 1003d1103;  */

void FUN_1003d10ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 1003d1104; end: 1003d133f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d1104(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = *unaff_x20;
  uVar6 = unaff_x20[3];
  uVar1 = *(undefined8 *)(unaff_x20[2] + _DAT_113091ae0);
  func_0x000107c61174();
  func_0x000107c4ec80();
  func_0x000107c61180();
  uVar2 = unaff_x20[5];
  func_0x000107c444a4();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(unaff_x20[7] + _DAT_11304a478);
  puVar3 = &UNK_11040be90;
  func_0x000107c613fc(&UNK_11040be90,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x28) = uVar2;
  *(undefined8 *)(puVar3 + 0x30) = uVar9;
  FUN_1000285a8(0x112dcec58,&UNK_10d990ae0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar8);
  puVar4 = &UNK_100c53434;
  FUN_1000bdd8c(&UNK_100c53434,puVar3);
  uVar1 = unaff_x20[3];
  func_0x000107c4ec80();
  func_0x000107c61180();
  uVar2 = unaff_x20[5];
  func_0x000107c444a4();
  func_0x000107c61180();
  uVar6 = uVar2;
  FUN_1003d1364();
  uVar8 = *(undefined8 *)(unaff_x20[7] + _DAT_11304a478);
  puVar3 = &UNK_11040be40;
  func_0x000107c613fc(&UNK_11040be40,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  *(undefined8 *)(puVar3 + 0x20) = uVar2;
  *(undefined8 *)(puVar3 + 0x28) = uVar6;
  *(undefined8 *)(puVar3 + 0x30) = uVar9;
  FUN_1000285a8(0x112dceb58,&UNK_10d990a40);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar8);
  pcVar5 = FUN_100b8ea88;
  FUN_1000bdd8c(FUN_100b8ea88,puVar3);
  uVar6 = unaff_x20[4];
  func_0x000107c42eac();
  func_0x000107c61180();
  puVar3 = &UNK_11040be68;
  func_0x000107c613fc(&UNK_11040be68,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  FUN_1000285a8(0x112dceb60,&UNK_10d990a48);
  func_0x000107c613fc();
  puVar7 = &UNK_1018c0b10;
  FUN_1000bdd8c(&UNK_1018c0b10,puVar3);
  uVar6 = unaff_x20[8];
  unaff_x20[8] = pcVar5;
  func_0x000107c6157c(pcVar5);
  func_0x000107c61574(uVar6);
  uVar6 = 0;
  FUN_10022d2d4(0);
  func_0x000107c610f8();
  func_0x0001003d13d8(puVar4,pcVar5,puVar7,uVar6);
  return;
}



/* Entry: 1003d1340; end: 1003d1363;  */

void FUN_1003d1340(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003d1364; end: 1003d146f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1003d1364(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_113043d38;
  lVar2 = *(long *)(unaff_x20 + _DAT_113043d38);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_1003a5b88(*(undefined8 *)(unaff_x20 + _DAT_113043d30));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 1003d1470; end: 1003d1547;  */

void FUN_1003d1470(void)

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



/* Entry: 1003d1548; end: 1003d1567;  */

void FUN_1003d1548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  return;
}



/* Entry: 1003d1568; end: 1003d1953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1003d1568(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long unaff_x20;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + _DAT_11307e0b8);
  func_0x000107c61174();
  uVar7 = 3;
  FUN_1003d19b0(3,0);
  uVar8 = 4;
  FUN_1003d19b0(4,0);
  puVar9 = PTR_PTR_1126a7c80;
  func_0x000107c610f8();
  func_0x000107c487ec();
  uVar10 = 0;
  FUN_1003d19b0(0,puVar9);
  puVar11 = puVar9;
  func_0x000107c61174();
  uVar12 = 1;
  FUN_1003d19b0(1,puVar9);
  func_0x000107c61170(puVar11);
  func_0x000107c61174();
  uVar13 = 2;
  FUN_1003d19b0(2,puVar9);
  func_0x000107c61170(puVar11);
  lVar5 = _DAT_11304a480;
  lVar4 = _DAT_113043d30;
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  uVar31 = *(undefined8 *)(lVar1 + _DAT_113043d30);
  uVar23 = *(undefined8 *)(lVar3 + _DAT_11304a480);
  uVar26 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6157c(uVar31);
  func_0x000107c61174();
  func_0x000107c421c8();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_11307e6a8);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  uVar28 = *(undefined8 *)(lVar2 + _DAT_11308b858);
  lVar27 = *(long *)(unaff_x20 + 0x58);
  uVar24 = *(undefined8 *)(lVar27 + _DAT_113010c10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = uVar24;
  FUN_1003d2494();
  uVar25 = *(undefined8 *)(lVar1 + lVar4);
  uVar29 = *(undefined8 *)(lVar3 + lVar5);
  uVar30 = *(undefined8 *)(lVar2 + _DAT_11308b868);
  uVar32 = *(undefined8 *)(lVar27 + _DAT_113010bf0);
  puVar9 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8);
  func_0x000107c6157c(uVar25);
  func_0x000107c61174(uVar29);
  func_0x000107c61174(uVar30);
  func_0x000107c61174(uVar32);
  func_0x000107c453e4(puVar9);
  puVar15 = puVar9;
  FUN_1003a5b88();
  puVar16 = PTR_PTR_1126a7c88;
  func_0x000107c610f8();
  uVar17 = 0x5f6b636172746461;
  func_0x000107c5fadc(0x5f6b636172746461,0xea00000000003276);
  func_0x000107c45570();
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(puVar15);
  func_0x000107c61574(uVar25);
  puVar9 = &UNK_11040bd30;
  func_0x000107c613fc(&UNK_11040bd30,0x50,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar31;
  *(undefined8 *)(puVar9 + 0x18) = uVar23;
  *(undefined8 *)(puVar9 + 0x20) = uVar26;
  *(undefined8 *)(puVar9 + 0x28) = uVar14;
  *(undefined8 *)(puVar9 + 0x30) = uVar28;
  *(undefined8 *)(puVar9 + 0x38) = uVar24;
  *(undefined **)(puVar9 + 0x40) = puVar16;
  *(undefined8 *)(puVar9 + 0x48) = uVar22;
  FUN_1000285a8(0x112dceb48,&UNK_10d990a30);
  func_0x000107c613fc();
  puVar15 = &UNK_1018c071c;
  FUN_1000bdd8c(&UNK_1018c071c,puVar9);
  puVar9 = puVar15;
  FUN_1003a5b88();
  puVar16 = puVar9;
  FUN_1003a5b88();
  puVar18 = puVar16;
  FUN_1003a5b88();
  puVar19 = puVar18;
  FUN_1003a5b88();
  puVar20 = puVar19;
  FUN_1003a5b88();
  puVar21 = puVar20;
  FUN_1003a5b88();
  uVar22 = 0;
  FUN_10022f19c(0);
  func_0x000107c610f8();
  FUN_1003d2514(puVar9,puVar16,puVar18,puVar19,puVar20,puVar21,uVar22);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61170(puVar11);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(puVar15);
  return puVar9;
}



/* Entry: 1003d1954; end: 1003d19af;  */

void FUN_1003d1954(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003d19b0; end: 1003d1cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d19b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_11307e6a8);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61174();
  func_0x000107c444a4();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_113043d30);
  func_0x000107c6157c(uVar9);
  FUN_1000d224c(&uStack_68);
  func_0x000107c61574(uVar9);
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + _DAT_11304a480);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126aeea8;
  uVar14 = *(undefined8 *)(*(long *)(unaff_x20 + 0x50) + _DAT_1130440d8);
  uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_113043d30);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + _DAT_113010c10);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + _DAT_11304a480);
  uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x48) + _DAT_11308b868);
  uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + _DAT_113010bf0);
  func_0x000107c61174();
  func_0x000107c6157c(uVar14);
  func_0x000107c610f8(puVar3);
  func_0x000107c6157c(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar12);
  func_0x000107c453e4(puVar3);
  if (param_1 < 2) {
    uVar8 = 0x31765f717467;
    if (param_1 != 0) {
      uVar8 = 0x776569765f717467;
    }
    uVar13 = 0xe600000000000000;
    if (param_1 != 0) {
      uVar13 = 0xeb0000000032765f;
    }
  }
  else if (param_1 == 4) {
    uVar8 = 0x5f6b636172746461;
    uVar13 = 0xea00000000003176;
  }
  else if (param_1 == 3) {
    uVar8 = 0x62616b636f6c6e75;
    uVar13 = 0xee0031765f73656c;
  }
  else {
    uVar8 = 0x616572635f717467;
    uVar13 = 0xef32765f6e6f6974;
  }
  puVar4 = puVar3;
  FUN_1003a5b88();
  puVar5 = PTR_PTR_1126a7c88;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar8,uVar13);
  func_0x000107c6142c(uVar13);
  func_0x000107c45570();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar4);
  func_0x000107c61574(uVar10);
  puVar3 = &UNK_11040bd58;
  func_0x000107c613fc(&UNK_11040bd58,0x58,7);
  *(long *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = uStack_68;
  *(undefined8 *)(puVar3 + 0x28) = uVar9;
  *(undefined8 *)(puVar3 + 0x30) = uVar6;
  *(undefined8 *)(puVar3 + 0x38) = param_2;
  *(undefined8 *)(puVar3 + 0x40) = uVar2;
  *(undefined **)(puVar3 + 0x48) = puVar5;
  *(undefined8 *)(puVar3 + 0x50) = uVar14;
  FUN_1000285a8(0x112dceb50,&UNK_10d990a38);
  func_0x000107c613fc();
  func_0x000107c615f0(param_2);
  FUN_1000bdd8c(&UNK_1018c087c,puVar3);
  return;
}



/* Entry: 1003d1d00; end: 1003d1d5b;  */

void FUN_1003d1d00(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003d1d5c; end: 1003d1dc7;  */

void FUN_1003d1d5c(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a7c68;
  func_0x000107c610f8();
  func_0x000107c45614();
  *param_1 = puVar1;
  return;
}



/* Entry: 1003d1dc8; end: 1003d1f1b; -[SCAdConfigProviderImpl initWithAdTrackV2ConfigProvider:adTrackDurableRequestConfigProvider:circumstanceEngine:plusSubscriptionInfoProvider:webBrowsingConfigProvider:adConfigProviderV2:] */

undefined1 *
FUN_1003d1dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126e83f0;
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



/* Entry: 1003d1f1c; end: 1003d1f67;  */

void FUN_1003d1f1c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003d1f68; end: 1003d1f9b;  */

void FUN_1003d1f68(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1003d1f9c; end: 1003d1fa3;  */

void FUN_1003d1f9c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_1001ad724();
  FUN_100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c614f0(uStack_38);
  FUN_1003d2004(uStack_38,unaff_x20,uVar1);
  *param_1 = uStack_38;
  return;
}



/* Entry: 1003d1fa4; end: 1003d2003;  */

void FUN_1003d1fa4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_1001ad724();
  FUN_100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c614f0(uStack_38);
  FUN_1003d2004(uStack_38,param_2,uVar1);
  *param_1 = uStack_38;
  return;
}



/* Entry: 1003d2004; end: 1003d20bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d2004(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_2;
  func_0x000107c610f8();
  lVar1 = _DAT_112dbe720;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1003d20c0();
  *(undefined **)(lVar2 + lVar1) = puVar3;
  lVar1 = _DAT_112dbe738;
  FUN_1003d21d8();
  *(undefined **)(lVar2 + lVar1) = puVar4;
  lVar1 = _DAT_112dbe718;
  uVar5 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(lVar2 + lVar1) = uVar5;
  *(undefined8 *)(lVar2 + _DAT_112dbe730) = param_1;
  lStack_50 = lVar2;
  lStack_48 = param_2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003d20c0; end: 1003d21d7;  */

undefined * FUN_1003d20c0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [40];
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    FUN_1000285a8(0x112dbe770,&UNK_10d979988);
    puVar5 = puVar8;
    func_0x000107c60498();
    param_1 = param_1 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x000101688228(param_1,&uStack_98);
      uVar3 = uStack_90;
      uVar2 = uStack_98;
      uVar6 = uStack_98;
      uVar7 = uStack_90;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003d21d4);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_1003ff244(auStack_88,*(long *)(puVar5 + 0x38) + uVar6 * 0x28);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003d21d8);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x38;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}


