/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100764200; end: 10076420f; -[SCLensCarouselFeatureServices lensDisplayableStateProvider] */

undefined8 FUN_100764200(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100764210; end: 100764263;  */

void FUN_100764210(undefined8 *param_1)

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



/* Entry: 100764264; end: 100764273; -[SCUpdatesFrequencyServices updatesFrequencyObservable] */

undefined8 FUN_100764264(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100764274; end: 1007642c7;  */

void FUN_100764274(undefined8 *param_1)

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



/* Entry: 1007642c8; end: 1007642cf;  */

void FUN_1007642c8(long param_1)

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



/* Entry: 1007642d0; end: 100764307;  */

void FUN_1007642d0(long param_1)

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



/* Entry: 100764308; end: 100764ad3;  */

void FUN_100764308(long *param_1,long param_2)

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
  long lVar17;
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
  func_0x0001005c7080();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  *(undefined8 *)(param_2 + 0x68) = uStack_b8;
  *(undefined8 *)(param_2 + 0x70) = uStack_c0;
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
  func_0x000107c61174(uStack_a8);
  uVar10 = uStack_b0;
  func_0x000107c61174();
  uVar11 = uStack_b8;
  func_0x000107c61174();
  uVar12 = uStack_c0;
  func_0x000107c61174(uStack_c0);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar2;
  puVar2 = PTR_PTR_1126abcb0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar14 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef244c0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar14 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar14 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef132d0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f03eba0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar14 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0db6f0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar14 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef1bc50);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar15);
  uVar14 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef1f5d0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  lVar16 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar15);
  func_0x000107c61174();
  uVar14 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0db710);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(uVar14);
  lVar17 = *(long *)(param_2 + 0x20);
  func_0x000107c61174(uVar15);
  func_0x000107c61174();
  uVar14 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0db730);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(uVar14);
  func_0x000107c3e740(uVar15);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar16 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100764ad0);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x78) = lVar16;
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar17 != 0) {
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
    *(long *)(param_2 + 0x80) = lVar17;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100764ad4);
  (*pcVar1)();
}



/* Entry: 100764ad4; end: 100764b0f;  */

void FUN_100764ad4(void)

{
  long unaff_x20;
  
  FUN_100764308(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 100764b10; end: 100764b13;  */

undefined8 FUN_100764b10(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 100764b14; end: 100764b37;  */

undefined8 FUN_100764b14(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 100764b38; end: 100764b3f;  */

void FUN_100764b38(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x90);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100764b40; end: 100764b93;  */

void FUN_100764b40(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x90);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100764b94; end: 100765237;  */

void FUN_100764b94(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
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
  FUN_10034c2d8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x60) = uStack_78;
  *(undefined8 *)(param_2 + 0x68) = uStack_80;
  *(undefined8 *)(param_2 + 0x70) = uStack_88;
  *(undefined8 *)(param_2 + 0x78) = uStack_90;
  *(undefined8 *)(param_2 + 0x80) = uStack_98;
  *(undefined8 *)(param_2 + 0x88) = uStack_a0;
  FUN_1000285a8(0x112f1a5b0,&UNK_10db525c8);
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
  func_0x000107c6157c(uStack_a8);
  FUN_10017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x18) = puVar8;
  FUN_1000285a8(0x112f1a5b8,&UNK_10db525d0);
  func_0x000107c610f8();
  uVar7 = uStack_b0;
  func_0x000107c6157c(uStack_b0);
  FUN_10017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x20) = puVar9;
  FUN_1000285a8(0x112f1a5c0,&UNK_10db525d8);
  func_0x000107c610f8();
  uVar7 = uStack_b8;
  func_0x000107c6157c(uStack_b8);
  FUN_10017da58();
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x28) = puVar10;
  FUN_1000285a8(0x112f1a5c8,&UNK_10db525e0);
  func_0x000107c610f8();
  uVar7 = uStack_c0;
  func_0x000107c6157c(uStack_c0);
  FUN_10017da58();
  puVar11 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x30) = puVar11;
  FUN_1000285a8(0x112f1a5d0,&UNK_10db525e8);
  func_0x000107c610f8();
  uVar7 = uStack_c8;
  func_0x000107c6157c(uStack_c8);
  FUN_10017da58();
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x38) = puVar12;
  FUN_1000285a8(0x112f1a5d8,&UNK_10db525f0);
  func_0x000107c610f8();
  uVar7 = uStack_d0;
  func_0x000107c6157c(uStack_d0);
  FUN_10017da58();
  puVar13 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x40) = puVar13;
  FUN_1000285a8(0x112f1a5e0,&UNK_10db525f8);
  func_0x000107c610f8();
  uVar7 = uStack_d8;
  func_0x000107c6157c(uStack_d8);
  FUN_10017da58();
  puVar16 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x48) = puVar16;
  FUN_1000285a8(0x112f1a5e8,&UNK_10db52600);
  func_0x000107c610f8();
  uVar7 = uStack_e0;
  func_0x000107c6157c(uStack_e0);
  FUN_10017da58();
  puVar17 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x50) = puVar17;
  FUN_1000285a8(0x112f1a5f0,&UNK_10db52608);
  func_0x000107c610f8();
  uVar7 = uStack_e8;
  func_0x000107c6157c(uStack_e8);
  FUN_1003b3b80();
  puVar14 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x58) = puVar14;
  func_0x0001007662e4();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = auStack_70[0];
  func_0x000107c61174();
  func_0x000107c61174(puVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = uVar15;
  FUN_1007663bc(uVar15,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,puVar8,puVar9,puVar10,puVar11,puVar12,
                puVar13,puVar16,puVar17,puVar14);
  *(undefined8 *)(param_2 + 0x10) = uVar18;
  uVar7 = uVar18;
  func_0x000107c6157c();
  FUN_100766460();
  func_0x000107c61574(uVar18);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uStack_a8);
  func_0x000107c61574(uStack_b0);
  func_0x000107c61574(uStack_b8);
  func_0x000107c61574(uStack_c0);
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(uStack_d0);
  func_0x000107c61574(uStack_d8);
  func_0x000107c61574(uStack_e0);
  func_0x000107c61574(uStack_e8);
  *(undefined8 *)(param_2 + 0x90) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 100765238; end: 10076527b;  */

void FUN_100765238(void)

{
  long unaff_x20;
  
  FUN_100764b94(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 10076527c; end: 100765283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10076527c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10033d8a4();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_1130714b8) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100765284; end: 1007652ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100765284(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10033d8a4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_1130714b8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1007652f0; end: 1007652fb;  */

/* WARNING: Possible PIC construction at 0x00010076539c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007653ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007653a0) */
/* WARNING: Removing unreachable block (ram,0x0001007653b0) */

void FUN_1007652f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_110633fc0;
  func_0x000107c613fc(&UNK_110633fc0,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112f52078;
  FUN_1000285a8(0x112f52078,&UNK_10dba8018);
  func_0x000107c613fc();
  puVar6 = &UNK_1032ab660;
  FUN_1000841f8(&UNK_1032ab660,puVar4,uVar5);
  FUN_100084214(&UNK_10dba7fe0,0x33,2);
  *param_1 = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1007652fc; end: 1007653c7;  */

/* WARNING: Possible PIC construction at 0x00010076539c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007653ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007653a0) */
/* WARNING: Removing unreachable block (ram,0x0001007653b0) */

void FUN_1007652fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_110633fc0;
  func_0x000107c613fc(&UNK_110633fc0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  uVar2 = 0x112f52078;
  FUN_1000285a8(0x112f52078,&UNK_10dba8018);
  func_0x000107c613fc();
  puVar3 = &UNK_1032ab660;
  FUN_1000841f8(&UNK_1032ab660,puVar1,uVar2);
  FUN_100084214(&UNK_10dba7fe0,0x33,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1007653c8; end: 1007653cb;  */

void FUN_1007653c8(void)

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



/* Entry: 1007653cc; end: 100765517;  */

void FUN_1007653cc(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_60;
  long lStack_58;
  
  FUN_100083b20(&lStack_58);
  lVar1 = lStack_58;
  lVar3 = lStack_58;
  func_0x000107c41798();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100765514);
    (*pcVar2)();
  }
  puVar4 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8);
  func_0x000107c453e4();
  puVar5 = PTR_PTR_1126a7720;
  func_0x000107c610f8(PTR_PTR_1126a7720);
  func_0x000107c46b9c();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar3);
  FUN_100083b20(&lStack_58);
  lVar1 = lStack_58;
  FUN_100083b20(&lStack_60);
  if (lStack_60 != 0) {
    puVar4 = PTR_PTR_1126a7750;
    func_0x000107c610f8();
    func_0x000107c48ba0();
    func_0x000107c61170(lStack_60);
    func_0x000107c615e8(lVar1);
    FUN_100083b20(&lStack_58);
    func_0x000107c61174();
    FUN_10076f8d8();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61574(lStack_58);
    *param_1 = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100765518);
  (*pcVar2)();
}



/* Entry: 100765518; end: 10076551b;  */

void FUN_100765518(void)

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



/* Entry: 10076551c; end: 100765557;  */

void FUN_10076551c(void)

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



/* Entry: 100765558; end: 10076555f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100765558(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10033d910();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_113071550) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100765560; end: 1007655cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100765560(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10033d910();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_113071550) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1007655cc; end: 1007655db;  */

/* WARNING: Possible PIC construction at 0x000100765688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100765698: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010076568c) */
/* WARNING: Removing unreachable block (ram,0x00010076569c) */

void FUN_1007655cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_110634680;
  func_0x000107c613fc(&UNK_110634680,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = 0x112f52400;
  FUN_1000285a8(0x112f52400,&UNK_10dba8690);
  func_0x000107c613fc();
  puVar6 = &UNK_1032ae04c;
  FUN_1000841f8(&UNK_1032ae04c,puVar4,uVar5);
  FUN_100084214(&UNK_10dba8660,0x29,2);
  *param_1 = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1007655dc; end: 1007656bf;  */

/* WARNING: Possible PIC construction at 0x000100765688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100765698: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010076568c) */
/* WARNING: Removing unreachable block (ram,0x00010076569c) */

void FUN_1007655dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_110634680;
  func_0x000107c613fc(&UNK_110634680,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  uVar2 = 0x112f52400;
  FUN_1000285a8(0x112f52400,&UNK_10dba8690);
  func_0x000107c613fc();
  puVar3 = &UNK_1032ae04c;
  FUN_1000841f8(&UNK_1032ae04c,puVar1,uVar2);
  FUN_100084214(&UNK_10dba8660,0x29,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1007656c0; end: 1007656c3;  */

void FUN_1007656c0(void)

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



/* Entry: 1007656c4; end: 10076574b; -[SCGrapheneRegistry deltaforceGraphene] */

void FUN_1007656c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100765794;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bb6f8 != -1) {
    FUN_10002a2fc(0x1136bb6f8,&puStack_48);
  }
  uVar1 = uRam00000001136bb6f0;
  func_0x000107c61174(uRam00000001136bb6f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10076574c; end: 10076574f;  */

void FUN_10076574c(void)

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



/* Entry: 100765750; end: 100765793;  */

void FUN_100765750(void)

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



/* Entry: 100765794; end: 10076596f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100765794(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long *extraout_x8;
  undefined8 uVar5;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_120 = &PTR____CFConstantStringClassReference_110dd6138;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110dd6158;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110dd6178;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110dd6198;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110dd61b8;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110dd61d8;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110dd61f8;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110dd6218;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110dd6238;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110dd6258;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110dd6278;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110dd6298;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110dd62b8;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110dd62d8;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110dd62f8;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110dd6318;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110dd6338;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dd6358;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dd6378;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dd6398;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110dd63b8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dd63d8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110dd63f8;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110dd6418;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dd6438;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dd6458;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110dd6478;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dd6498;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110dd64b8;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_120,0x1d);
  func_0x000107c61180();
  func_0x000107c4fc78();
  func_0x000107c61180();
  uVar1 = uRam00000001136bb6f0;
  uRam00000001136bb6f0 = uVar5;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  FUN_100083b20(&uStack_158);
  FUN_10033d838();
  puVar3 = puVar2;
  func_0x000107c610f8();
  *(undefined8 *)(puVar3 + _DAT_113071420) = uStack_158;
  ppuVar4 = &puStack_168;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  func_0x000107c61154(ppuVar4,PTR_s_init_1125d9248);
  *extraout_x8 = (long)ppuVar4;
  return;
}



/* Entry: 100765970; end: 100765977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100765970(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10033d838();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_113071420) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100765978; end: 1007659e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100765978(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10033d838();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_113071420) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1007659e4; end: 1007659ef;  */

/* WARNING: Possible PIC construction at 0x000100765a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100765aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100765a94) */
/* WARNING: Removing unreachable block (ram,0x000100765aa4) */

void FUN_1007659e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_110633900;
  func_0x000107c613fc(&UNK_110633900,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112f51ce8;
  FUN_1000285a8(0x112f51ce8,&UNK_10dba7928);
  func_0x000107c613fc();
  puVar6 = &UNK_1032a8cc0;
  FUN_1000841f8(&UNK_1032a8cc0,puVar4,uVar5);
  FUN_100084214(&UNK_10dba78f0,0x31,2);
  *param_1 = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1007659f0; end: 100765abb;  */

/* WARNING: Possible PIC construction at 0x000100765a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100765aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100765a94) */
/* WARNING: Removing unreachable block (ram,0x000100765aa4) */

void FUN_1007659f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_110633900;
  func_0x000107c613fc(&UNK_110633900,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  uVar2 = 0x112f51ce8;
  FUN_1000285a8(0x112f51ce8,&UNK_10dba7928);
  func_0x000107c613fc();
  puVar3 = &UNK_1032a8cc0;
  FUN_1000841f8(&UNK_1032a8cc0,puVar1,uVar2);
  FUN_100084214(&UNK_10dba78f0,0x31,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100765abc; end: 100765ac3;  */

void FUN_100765abc(void)

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



/* Entry: 100765ac4; end: 100765aff;  */

void FUN_100765ac4(void)

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



/* Entry: 100765b00; end: 100765b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100765b00(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100341028();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_1130717d0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100765b08; end: 100765b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100765b08(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100341028();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_1130717d0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100765b74; end: 100765b7f;  */

/* WARNING: Possible PIC construction at 0x000100765c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100765c30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100765c24) */
/* WARNING: Removing unreachable block (ram,0x000100765c34) */

void FUN_100765b74(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_11063c738;
  func_0x000107c613fc(&UNK_11063c738,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112f58348;
  FUN_1000285a8(0x112f58348,&UNK_10dbafc88);
  func_0x000107c613fc();
  puVar6 = &UNK_10330bcf4;
  FUN_1000841f8(&UNK_10330bcf4,puVar4,uVar5);
  FUN_100084214(&UNK_10dbafc50,0x32,2);
  *param_1 = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100765b80; end: 100765c4b;  */

/* WARNING: Possible PIC construction at 0x000100765c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100765c30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100765c24) */
/* WARNING: Removing unreachable block (ram,0x000100765c34) */

void FUN_100765b80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_11063c738;
  func_0x000107c613fc(&UNK_11063c738,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  uVar2 = 0x112f58348;
  FUN_1000285a8(0x112f58348,&UNK_10dbafc88);
  func_0x000107c613fc();
  puVar3 = &UNK_10330bcf4;
  FUN_1000841f8(&UNK_10330bcf4,puVar1,uVar2);
  FUN_100084214(&UNK_10dbafc50,0x32,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100765c4c; end: 100765c53;  */

void FUN_100765c4c(void)

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



/* Entry: 100765c54; end: 100765c8f;  */

void FUN_100765c54(void)

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



/* Entry: 100765c90; end: 100765cbf;  */

void FUN_100765c90(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100765cc0; end: 100765e63; -[SCDeltaSyncGrapheneMetricsReporter initWithGraphene:timeProvider:] */

undefined1 *
FUN_100765cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e7da8;
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
    puVar3 = PTR_PTR_1126b81f0;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100765e64; end: 100765e7b;  */

void FUN_100765e64(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100765e7c; end: 100765e9b;  */

void FUN_100765e7c(void)

{
  func_0x000107c61168(&PTR_PTR_1129a2a60);
  return;
}



/* Entry: 100765e9c; end: 10076608f;  */

void FUN_100765e9c(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lStack_68;
  
  FUN_100083b20(&lStack_68);
  lVar1 = lStack_68;
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efb05a0);
  lVar4 = lVar1;
  func_0x000107c4e60c(lVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(lVar1);
  FUN_100083b20(&lStack_68);
  lVar1 = lStack_68;
  lVar5 = lStack_68;
  func_0x000107c41798();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100766074);
    (*pcVar2)();
  }
  puVar6 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8);
  func_0x000107c453e4();
  puVar7 = PTR_PTR_1126a7720;
  func_0x000107c610f8(PTR_PTR_1126a7720);
  func_0x000107c46b9c();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar5);
  FUN_100083b20(&lStack_68);
  lVar1 = lStack_68;
  if (lStack_68 != 0) {
    FUN_100083b20(&lStack_68);
    lVar5 = lStack_68;
    puVar6 = PTR_PTR_1126a7728;
    func_0x000107c610f8(PTR_PTR_1126a7728);
    func_0x000107c453e4();
    FUN_100083b20(&lStack_68);
    puVar8 = PTR_PTR_1126a7730;
    func_0x000107c610f8();
    func_0x000107c4811c();
    func_0x000107c61170(puVar7);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(lStack_68);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar5);
    *param_1 = puVar8;
    return;
  }
  func_0x0001048d9980(0xd000000000000028,0x800000010efb0530);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100766090);
  (*pcVar2)();
}



/* Entry: 100766090; end: 1007660cf;  */

void FUN_100766090(void)

{
  func_0x000107c61168(&PTR_PTR_1129a2520);
  return;
}



/* Entry: 1007660d0; end: 1007662a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007660d0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lStack_58;
  
  FUN_100083b20(&lStack_58);
  lVar1 = lStack_58;
  uVar2 = *(undefined8 *)(lStack_58 + _DAT_11307e0b8);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lVar1);
  puVar3 = PTR_PTR_1126b8288;
  func_0x000107c610f8(PTR_PTR_1126b8288);
  func_0x000107c487ec();
  FUN_100083b20(&lStack_58);
  lVar1 = lStack_58;
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efb05a0);
  lVar5 = lVar1;
  func_0x000107c4e60c(lVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar1);
  uVar6 = 0;
  FUN_10076637c(0,0x112db0eb0,&PTR_PTR_1126b4ec0);
  func_0x000107c614e8();
  func_0x000107c615f0(lVar5);
  func_0x000107c610f8(uVar6);
  func_0x000107c47de8();
  func_0x000107c615e8(lVar5);
  puVar7 = PTR_PTR_1126b80b8;
  func_0x000107c61168();
  FUN_100083b20(&lStack_58);
  func_0x000107c61174(puVar3);
  func_0x000107c61174(uVar6);
  uVar4 = uVar6;
  FUN_100768818();
  func_0x000107c4d624();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c615e8(lVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lStack_58);
  *param_1 = puVar7;
  return;
}



/* Entry: 1007662a4; end: 10076637b;  */

void FUN_1007662a4(void)

{
  func_0x000107c61168(&PTR_PTR_1129a2888);
  return;
}



/* Entry: 10076637c; end: 1007663bb;  */

void FUN_10076637c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1007663bc; end: 10076645f;  */

void FUN_1007663bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_8;
  *(undefined8 *)(unaff_x20 + 0x28) = param_10;
  *(undefined8 *)(unaff_x20 + 0x20) = param_9;
  *(undefined8 *)(unaff_x20 + 0x38) = param_12;
  *(undefined8 *)(unaff_x20 + 0x30) = param_11;
  *(undefined8 *)(unaff_x20 + 0x48) = param_14;
  *(undefined8 *)(unaff_x20 + 0x40) = param_13;
  *(undefined8 *)(unaff_x20 + 0x50) = param_15;
  *(undefined8 *)(unaff_x20 + 0x58) = param_4;
  *(undefined8 *)(unaff_x20 + 0x60) = param_5;
  *(undefined8 *)(unaff_x20 + 0x68) = param_6;
  *(undefined8 *)(unaff_x20 + 0x70) = param_16;
  *(undefined8 *)(unaff_x20 + 0x78) = param_7;
  *(undefined8 *)(unaff_x20 + 0x80) = param_3;
  return;
}



/* Entry: 100766460; end: 100766ac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100766460(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_c0 [24];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uVar16 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_1105d8bb0;
  func_0x000107c613fc(&UNK_1105d8bb0,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar16;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_1007cb928;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1007cb8e8;
  puStack_90 = &UNK_1105d8bc8;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_80;
  func_0x000107c61174(uVar16);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  lVar2 = _DAT_1130364e0;
  lVar15 = *(long *)(unaff_x20 + 0x80);
  func_0x000107c61428(lVar15 + _DAT_1130364e0,auStack_c0,1,0);
  func_0x000107c61604(lVar15 + lVar2,puVar3);
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uVar16 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar4 = &UNK_1105d8c00;
  func_0x000107c613fc(&UNK_1105d8c00,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar16;
  pcStack_88 = (code *)&UNK_102e28b7c;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_102e28ff8;
  puStack_90 = &UNK_1105d8c18;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_80;
  func_0x000107c61174(uVar16);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uVar16 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = &UNK_1105d8c50;
  func_0x000107c613fc(&UNK_1105d8c50,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar16;
  pcStack_88 = (code *)&UNK_102e28ba8;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_102e28ffc;
  puStack_90 = &UNK_1105d8c68;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_80;
  func_0x000107c61174(uVar16);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uVar16 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar4 = &UNK_1105d8ca0;
  func_0x000107c613fc(&UNK_1105d8ca0,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar16;
  pcStack_88 = (code *)&UNK_102e28bd0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_102e29000;
  puStack_90 = &UNK_1105d8cb8;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_80;
  func_0x000107c61174(uVar16);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uVar16 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x78);
  puVar4 = &UNK_1105d8cf0;
  func_0x000107c613fc(&UNK_1105d8cf0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar16;
  *(undefined8 *)(puVar4 + 0x18) = uVar17;
  pcStack_88 = (code *)&UNK_102e28c54;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_102e29004;
  puStack_90 = &UNK_1105d8d08;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_80;
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar17);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar10 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uVar16 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_1105d8d40;
  func_0x000107c613fc(&UNK_1105d8d40,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar16;
  pcStack_88 = (code *)&UNK_102e28c5c;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_102e29008;
  puStack_90 = &UNK_1105d8d58;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4();
  puVar4 = puStack_80;
  func_0x000107c61174(uVar16);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar11 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uVar16 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar4 = &UNK_1105d8d90;
  func_0x000107c613fc(&UNK_1105d8d90,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar16;
  pcStack_88 = (code *)&UNK_102e28ccc;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_102e2900c;
  puStack_90 = &UNK_1105d8da8;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_80;
  func_0x000107c61174(uVar16);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar14 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uVar16 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x60);
  puVar4 = &UNK_1105d8de0;
  func_0x000107c613fc(&UNK_1105d8de0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar16;
  *(undefined8 *)(puVar4 + 0x18) = uVar17;
  pcStack_88 = (code *)&UNK_102e28cf4;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_102e29010;
  puStack_90 = &UNK_1105d8df8;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4();
  puVar4 = puStack_80;
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar17);
  func_0x000107c61574(puVar4);
  puVar12 = puVar14;
  func_0x000107c3e4fc(puVar14);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x68);
  puVar4 = &UNK_1105d8e30;
  func_0x000107c613fc(&UNK_1105d8e30,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar16;
  *(undefined8 *)(puVar4 + 0x18) = uVar17;
  pcStack_88 = (code *)&UNK_102e28d2c;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_102e29010;
  puStack_90 = &UNK_1105d8e48;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4();
  puVar4 = puStack_80;
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar17);
  func_0x000107c61574(puVar4);
  puVar13 = puVar14;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x58);
  puVar4 = &UNK_1105d8e80;
  func_0x000107c613fc(&UNK_1105d8e80,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar16;
  *(undefined8 *)(puVar4 + 0x18) = uVar17;
  pcStack_88 = (code *)&UNK_102e28de8;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_102e29010;
  puStack_90 = &UNK_1105d8e98;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_80;
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar17);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  FUN_10034ede8(0);
  func_0x000107c610f8();
  FUN_100766b4c(puVar6,puVar7,puVar8,puVar3,puVar9,puVar10,puVar11,puVar12,puVar13,puVar14);
  return;
}



/* Entry: 100766ac8; end: 100766af3;  */

void FUN_100766ac8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100766af4; end: 100766b4b;  */

void FUN_100766af4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100766b4c; end: 100766c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100766b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130712e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130712f0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130712f8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113071300) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113071308) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113071310) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113071318) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113071320) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113071328) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113071330) = param_10;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100766c48; end: 100766ce3;  */

void FUN_100766c48(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100766ce4; end: 100766cf7;  */

void FUN_100766ce4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar2 = 0x617472617073;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = uVar2;
  FUN_100083b20(&uStack_48);
  FUN_100766d98();
  func_0x000107c61574(uStack_48);
  FUN_100766df4(0x617472617073,0xe600000000000000,uVar1,uVar3);
  func_0x000107c61170(uVar3);
  puVar4 = PTR_PTR_1126b80b0;
  func_0x000107c610f8();
  func_0x000107c46c3c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar4;
  return;
}



/* Entry: 100766cf8; end: 100766d97;  */

void FUN_100766cf8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = param_2;
  FUN_100083b20(&uStack_48);
  FUN_100766d98();
  func_0x000107c61574(uStack_48);
  FUN_100766df4(param_2,param_3,uVar1,uVar2);
  func_0x000107c61170(uVar2);
  puVar3 = PTR_PTR_1126b80b0;
  func_0x000107c610f8();
  func_0x000107c46c3c();
  func_0x000107c61170(param_2);
  *param_1 = puVar3;
  return;
}



/* Entry: 100766d98; end: 100766df3;  */

void FUN_100766d98(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    return;
  }
  func_0x000107c61168(PTR_PTR_1126b7f68);
  func_0x000107c40dac();
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c01e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 100766df4; end: 100767077;  */

undefined * FUN_100766df4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lStack_58;
  
  FUN_100083b20(&lStack_58);
  lVar3 = lStack_58;
  uVar1 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efb0610);
  func_0x000107c4c0d0(lVar3);
  func_0x000107c615e8(lVar3);
  func_0x000107c61170(uVar1);
  FUN_100083b20(&lStack_58);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010efb0630);
  uVar1 = 0xd000000000000021;
  uVar6 = 0x800000010efb0650;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efb0650);
  lVar3 = lStack_58;
  func_0x000107c5c1dc();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_58);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  if (lVar3 == 0) {
    lVar3 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
  }
  puVar4 = PTR_PTR_1126ae728;
  func_0x000107c61168(PTR_PTR_1126ae728);
  func_0x000107c3edf4();
  func_0x000107c61180();
  func_0x000107c57f3c();
  func_0x000107c61180();
  func_0x000107c61170();
  puVar5 = puVar4;
  func_0x000107c545b8(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c59d5c(puVar4);
  func_0x000107c61180();
  func_0x000107c61170();
  if (param_2 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    puVar5 = puVar4;
    func_0x000107c57df8(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c5343c(puVar4);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c53b60(puVar4);
  func_0x000107c61180();
  func_0x000107c61170();
  uVar1 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efb0680);
  puVar5 = puVar4;
  func_0x000107c58fa0(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c3ecc8(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  return puVar5;
}



/* Entry: 100767078; end: 10076710f; -[SCCircumstanceEngine longValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

undefined8
FUN_100767078(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  uVar1 = param_1;
  func_0x000107c3c7f4(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x000107c3ade8(param_1,param_2,param_3,2);
    lVar3 = 0xa0;
  }
  else {
    lVar3 = 0x28;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x000107c4c0d0(uVar2,param_2,param_3,param_4,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return uVar2;
}



/* Entry: 100767110; end: 10076715b; -[SCCircumstanceEngineConfigProvider longValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

long FUN_100767110(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000107c3cda0();
  func_0x000107c61180();
  if (param_1 != 0) {
    param_4 = param_1;
    func_0x000107c4c0c8(param_1);
  }
  func_0x000107c61170(param_1);
  return param_4;
}



/* Entry: 10076715c; end: 1007672bb; -[SCCameraCoreLensInfoButtonEntryPoint begin] */

void FUN_10076715c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c8948;
  func_0x000107c610f4(PTR_PTR_1126c8948);
  func_0x000107c47328();
  uVar3 = param_1;
  func_0x000107c4b210(param_1);
  func_0x000107c61180();
  func_0x000107c42c20();
  func_0x000107c61170(uVar3);
  puVar4 = PTR_PTR_1126c8950;
  func_0x000107c610f4(PTR_PTR_1126c8950);
  func_0x000107c4732c();
  func_0x000107c498bc(param_1);
  func_0x000107c61180();
  func_0x000107c42c20();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 1007672bc; end: 10076732f; -[SCLensInfoButtonServices initWithLensInfoButton:] */

undefined1 * FUN_1007672bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701e10;
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



/* Entry: 100767330; end: 10076733f; -[SCCameraCoreLensInfoButtonEntryPoint lensInfoButtonServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100767330(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741e90);
}



/* Entry: 100767340; end: 1007673b3; -[SCInternalLensInfoButtonServices initWithLensInfoButtonFeature:] */

undefined1 * FUN_100767340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f02c8;
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



/* Entry: 1007673b4; end: 1007673c3; -[SCCameraCoreLensInfoButtonEntryPoint internalLensInfoButtonServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007673b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741e94);
}



/* Entry: 1007673c4; end: 100767437;  */

void FUN_1007673c4(void)

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



/* Entry: 100767438; end: 10076743f; -[SCInternalLensInfoButtonServices lensInfoButtonFeature] */

undefined8 FUN_100767438(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100767440; end: 100767b7b; -[SCCameraCoreLensFeatureProviderPlugin initWithPrivateFeatureContainer:cameraUIScope:cameraUIServices:cameraPreviewPresenterServices:userSession:applicationLifecycleEvents:cameraConfigurationServices:lensCollectionsLoggingServices:lensContentServices:lensCollectionsServices:lensLoggerServices:featureSettingsService:circumstanceEngine:countryCodeRepository:cameraUserLoggingServices:snapTokenProvider:lensPerformerProvider:cameraHardwareServices:navigationServices:adConfigProvider:userStorageServices:resourceDownloaderServices:lensExplorerStudySettingsServices:lensCarouselStudySettingsServices:lensCarouselSettingsServices:bundledLensProvider:lensDataFetcherServices:snapchattersDataFetcher:lensInfoButtonVisibility:lensUnlockableDataProviderCreator:lensDataProviderCreator:appLifecycleManager:lensPerformerServices:bitmojiMetricsServices:bitmojiUserServices:cameraReplyConfigurationResolver:lensCarouselManager:lazyLensCarouselManager:lensCarouselUIActivationParameters:lensDisplayableStateProvider:lensCarouselResetEventsProvider:lensInfoButtonFeature:miniCameraActivationStateProvider:lensConfigurationServices:] */

undefined8 *
FUN_100767440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_30);
  func_0x000107c61174(param_31);
  func_0x000107c61174(param_32);
  func_0x000107c61174(param_33);
  func_0x000107c61174(param_34);
  func_0x000107c61174(param_35);
  func_0x000107c61174(param_36);
  func_0x000107c61174(param_37);
  func_0x000107c61174(param_38);
  func_0x000107c61174(param_39);
  func_0x000107c61174(param_40);
  func_0x000107c61174(param_41);
  func_0x000107c61174(param_42);
  func_0x000107c61174(param_43);
  func_0x000107c61174(param_44);
  func_0x000107c61174(param_45);
  func_0x000107c61174(param_46);
  puStack_70 = PTR_PTR_1126f02c0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0(puVar1 + 0x10,param_3);
    func_0x000107c611a0(puVar1 + 2,param_4);
    func_0x000107c611a0(puVar1 + 6,param_7);
    func_0x000107c611a0(puVar1 + 7,param_10);
    func_0x000107c611a0(puVar1 + 8,param_11);
    func_0x000107c611a0(puVar1 + 9,param_12);
    func_0x000107c611a0(puVar1 + 10,param_13);
    func_0x000107c611a0(puVar1 + 0xb,param_14);
    func_0x000107c611a0(puVar1 + 0xc,param_15);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0xe,param_17);
    func_0x000107c611a0(puVar1 + 0xf,param_18);
    func_0x000107c611a0(puVar1 + 1,param_8);
    func_0x000107c611a0(puVar1 + 5,param_9);
    func_0x000107c611a0(puVar1 + 0x11,param_19);
    func_0x000107c611a0(puVar1 + 0x12,param_20);
    func_0x000107c611a0(puVar1 + 0x13,param_21);
    func_0x000107c611a0(puVar1 + 3,param_5);
    func_0x000107c611a0(puVar1 + 4,param_6);
    func_0x000107c611a0(puVar1 + 0x14,param_22);
    func_0x000107c611a0(puVar1 + 0x15,param_23);
    func_0x000107c611a0(puVar1 + 0x16,param_24);
    func_0x000107c611a0(puVar1 + 0x17,param_25);
    func_0x000107c611a0(puVar1 + 0x18,param_26);
    func_0x000107c611a0(puVar1 + 0x19,param_27);
    func_0x000107c61174(param_46);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_46;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x1a,param_28);
    func_0x000107c611a0(puVar1 + 0x1b,param_29);
    func_0x000107c61174(param_30);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_30;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_31);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_31;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_32);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_32;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_33);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_33;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x1c,param_34);
    func_0x000107c611a0(puVar1 + 0x1d,param_35);
    func_0x000107c611a0(puVar1 + 0x29,param_36);
    func_0x000107c611a0(puVar1 + 0x2a,param_37);
    func_0x000107c61174(param_38);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_38;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_39);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_39;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_40);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_40;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_41);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_41;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_42);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_42;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_43);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_43;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_44);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_44;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x2b,param_45);
  }
  func_0x000107c61170(param_46);
  func_0x000107c61170(param_45);
  func_0x000107c61170(param_44);
  func_0x000107c61170(param_43);
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
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



/* Entry: 100767b7c; end: 100767cd7;  */

void FUN_100767b7c(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100767cd8; end: 100767cf3;  */

void FUN_100767cd8(undefined8 param_1)

{
  FUN_1000285a8(0x112ee27c0,&UNK_10db0d490);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100767cf4,param_1);
  return;
}



/* Entry: 100767cf4; end: 100767d27;  */

void FUN_100767cf4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100767d28; end: 100767d6b;  */

void FUN_100767d28(void)

{
  long unaff_x20;
  
  FUN_100767d6c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 100767d6c; end: 10076819b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100767d6c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_1f8;
  long lStack_1f0;
  long alStack_1e8 [17];
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
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
  ulong uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  FUN_100083b20(alStack_1e8);
  lVar2 = alStack_1e8[0];
  uVar9 = *(undefined8 *)(alStack_1e8[0] + _DAT_112fcaac8);
  func_0x000107c6157c(uVar9);
  func_0x000107c61170(lVar2);
  FUN_1000d224c(&uStack_f0);
  func_0x000107c61574(uVar9);
  FUN_1000a8868(&uStack_f0,uStack_d8);
  uVar3 = uStack_d8;
  (**(code **)(lStack_d0 + 8))(uStack_d8,lStack_d0);
  func_0x0001000834e4(&uStack_f0);
  if ((uVar3 & 1) == 0) {
    plVar10 = (long *)0x0;
  }
  else {
    FUN_100083b20(&uStack_f0);
    uVar9 = uStack_f0;
    func_0x000107c4b364();
    func_0x000107c61180();
    func_0x000107c61170(uStack_f0);
    uVar5 = uVar9;
    func_0x000107c4afac();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    uVar9 = uVar5;
    func_0x000107c4ade8();
    func_0x000107c61180();
    func_0x000107c615e8(uVar5);
    lVar4 = 0;
    FUN_100768f90();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x10) = uVar9;
    FUN_100083b20(alStack_1e8);
    uVar8 = *(undefined8 *)(alStack_1e8[0] + _DAT_113082420);
    func_0x000107c61170();
    FUN_100083b20(&uStack_f8);
    uVar9 = uStack_f8;
    FUN_100083b20(&uStack_100);
    FUN_100083b20(&uStack_108);
    FUN_100083b20(&uStack_110);
    FUN_100083b20(&uStack_118);
    FUN_100083b20(&uStack_120);
    FUN_100083b20(&uStack_128);
    FUN_100083b20(&lStack_130);
    uVar5 = *(undefined8 *)(lStack_130 + _DAT_1130828b8);
    func_0x000107c61174();
    func_0x000107c61170(lStack_130);
    FUN_100083b20(&uStack_138);
    FUN_100083b20(&uStack_140);
    func_0x000107c6157c(lVar4);
    FUN_100083b20(&uStack_148);
    FUN_100083b20(&uStack_150);
    FUN_100083b20(&lStack_158);
    uVar11 = *(undefined8 *)(lStack_158 + _DAT_1130363b8);
    func_0x000107c6157c(uVar11);
    func_0x000107c61170(lStack_158);
    FUN_100083b20(&lStack_160);
    uVar12 = *(undefined8 *)(lStack_160 + 0x10);
    func_0x000107c6157c(uVar12);
    func_0x000107c61574(lStack_160);
    uStack_e8 = uVar9;
    uStack_e0 = uStack_100;
    uStack_d8 = uStack_108;
    lStack_d0 = uStack_110;
    uStack_c8 = uStack_118;
    uStack_c0 = uStack_120;
    uStack_b8 = uStack_128;
    uStack_a8 = uStack_138;
    uStack_a0 = uStack_140;
    ppuStack_90 = &PTR_DAT_110637d48;
    uStack_88 = uStack_148;
    uStack_80 = uStack_150;
    uStack_f0 = uVar8;
    uStack_b0 = uVar5;
    lStack_98 = lVar4;
    uStack_78 = uVar11;
    uStack_70 = uVar12;
    FUN_100083b20(&uStack_f8);
    lVar6 = 0;
    FUN_1005c7874();
    lVar7 = lVar6;
    func_0x000107c610f8();
    lVar2 = _DAT_112f558a0;
    func_0x000107c61614(lVar7 + _DAT_112f558a0,0);
    func_0x000107c61614(lVar7 + _DAT_112f55890,0);
    puVar1 = (undefined8 *)(lVar7 + _DAT_112f55898);
    puVar1[1] = uStack_e8;
    *puVar1 = uStack_f0;
    puVar1[7] = uStack_b8;
    puVar1[6] = uStack_c0;
    puVar1[9] = uStack_a8;
    puVar1[8] = uStack_b0;
    puVar1[3] = uStack_d8;
    puVar1[2] = uStack_e0;
    puVar1[5] = uStack_c8;
    puVar1[4] = lStack_d0;
    puVar1[0x10] = uStack_70;
    puVar1[0xd] = uStack_88;
    puVar1[0xc] = ppuStack_90;
    puVar1[0xf] = uStack_78;
    puVar1[0xe] = uStack_80;
    puVar1[0xb] = lStack_98;
    puVar1[10] = uStack_a0;
    func_0x000107c61604(lVar7 + lVar2,uStack_f8);
    FUN_100775574(&uStack_f0,alStack_1e8);
    plVar10 = &lStack_1f8;
    lStack_1f8 = lVar7;
    lStack_1f0 = lVar6;
    func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
    func_0x000107c615e8(uStack_f8);
    func_0x000107c61574(lVar4);
    FUN_100775640(&uStack_f0);
  }
  *param_1 = (long)plVar10;
  return;
}



/* Entry: 10076819c; end: 1007681a3;  */

void FUN_10076819c(undefined8 *param_1)

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



/* Entry: 1007681a4; end: 1007681f7;  */

void FUN_1007681a4(undefined8 *param_1)

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



/* Entry: 1007681f8; end: 100768203;  */

void FUN_1007681f8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  FUN_1002880c0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_10076836c(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_1007683f4();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_1007684a0();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 100768204; end: 10076836b;  */

void FUN_100768204(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_1002880c0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_10076836c(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  FUN_1007683f4();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_1007684a0();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 10076836c; end: 1007683f3;  */

void FUN_10076836c(undefined8 param_1)

{
  if (lRam0000000112f5df78 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e75e2f8);
  return;
}



/* Entry: 1007683f4; end: 10076847f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007683f4(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(param_2 + _DAT_113092298);
  func_0x000107c615f0();
  lVar2 = param_3;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    *(long *)(unaff_x20 + 0x18) = lVar2;
    *(undefined8 *)(unaff_x20 + 0x20) = param_4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100768480);
  (*pcVar1)();
}



/* Entry: 100768480; end: 10076849f;  */

void FUN_100768480(void)

{
  func_0x000107c61168(&PTR_PTR_112f5e2c8);
  return;
}



/* Entry: 1007684a0; end: 10076861f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1007684a0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined1 auStack_b8 [40];
  undefined8 auStack_90 [3];
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long alStack_68 [3];
  long lStack_50;
  undefined **ppuStack_48;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_1130344b8);
  lVar2 = 0;
  FUN_100768480();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined1 *)(lVar3 + 0x28) = 3;
  *(undefined8 *)(lVar3 + 0x10) = uVar7;
  *(undefined8 *)(lVar3 + 0x18) = uVar1;
  *(undefined8 *)(lVar3 + 0x20) = uVar9;
  ppuStack_48 = &PTR_DAT_1106463d0;
  uVar4 = 0;
  alStack_68[0] = lVar3;
  lStack_50 = lVar2;
  FUN_100768620();
  func_0x000107c613fc();
  func_0x000107c615f0(uVar7);
  func_0x000107c615f0(uVar1);
  func_0x000107c61174();
  FUN_100768640();
  ppuStack_70 = &PTR_DAT_110646350;
  auStack_90[0] = uVar9;
  uStack_78 = uVar4;
  FUN_100768c7c(alStack_68,auStack_b8);
  FUN_1000285a8(0x112f5df40,&UNK_10dbb8aa0);
  func_0x000107c613fc();
  puVar5 = &UNK_103375f74;
  FUN_1000bdd8c(&UNK_103375f74,0);
  FUN_1000285a8(0x112f5df48,&UNK_10dbb8aa8);
  func_0x000107c613fc();
  pcVar6 = FUN_100768e18;
  FUN_1000bdd8c(FUN_100768e18,0);
  uVar7 = 0;
  FUN_100288214(0);
  func_0x000107c610f8();
  puVar8 = auStack_90;
  FUN_100768cc0(puVar8,auStack_b8,puVar5,pcVar6,uVar7);
  func_0x0001000834e4(alStack_68);
  return puVar8;
}



/* Entry: 100768620; end: 10076863f;  */

void FUN_100768620(void)

{
  func_0x000107c61168(&PTR_PTR_112f5e158);
  return;
}



/* Entry: 100768640; end: 100768707;  */

void FUN_100768640(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uStack_28;
  
  uStack_28 = CONCAT71(uStack_28._1_7_,10);
  FUN_1000285a8(0x112f5e1d0,&UNK_10dbb8b60);
  func_0x000107c613fc();
  puVar1 = &uStack_28;
  FUN_10042e6a0();
  *(undefined8 **)(unaff_x20 + 0x10) = puVar1;
  uStack_28 = 0;
  FUN_1000285a8(0x112f5e1d8,&UNK_10dbb8b68);
  func_0x000107c613fc();
  puVar1 = &uStack_28;
  FUN_10042e6a0();
  *(undefined8 **)(unaff_x20 + 0x18) = puVar1;
  uStack_28 = 0;
  FUN_1000285a8(0x112f5e1e0,&UNK_10dbb8b70);
  func_0x000107c613fc();
  puVar1 = &uStack_28;
  FUN_10042e6a0();
  *(undefined8 **)(unaff_x20 + 0x20) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return;
}



/* Entry: 100768708; end: 100768717;  */

undefined1  [16] FUN_100768708(void)

{
  return ZEXT816(0x11075e140);
}



/* Entry: 100768718; end: 100768757;  */

void FUN_100768718(void)

{
  func_0x000107c61168(&PTR_PTR_112fca920);
  return;
}



/* Entry: 100768758; end: 10076878f; -[SCNGrpcParamsBuilder setServiceClientSBConfigKey:] */

long FUN_100768758(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100768790; end: 100768817; -[SCNDeltaforceDeltaForceConfiguration initWithGrpcParameters:] */

undefined1 * FUN_100768790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e7e08;
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



/* Entry: 100768818; end: 100768ba7;  */

undefined * FUN_100768818(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  func_0x000107c61168();
  func_0x000107c49800();
  puVar2 = PTR___sSiN_11034deb0;
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  puVar3 = PTR_PTR_1126b4ea0;
  func_0x000107c610f8();
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efb05f0);
  func_0x000107c5fadc(puVar2,puVar5);
  func_0x000107c6142c(puVar5);
  func_0x000107c4706c();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c4c12c();
  func_0x000107c61180();
  puVar5 = puVar2;
  func_0x000107c4ecb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar5;
  func_0x000107c5fc54(puVar5,PTR___sSSN_11034da80);
  func_0x000107c61170(puVar5);
  if (*(long *)(puVar2 + 0x10) == 0) {
    uVar11 = 0;
    uVar4 = 0xe000000000000000;
  }
  else {
    uVar11 = *(ulong *)(puVar2 + 0x20);
    uVar4 = *(undefined8 *)(puVar2 + 0x28);
    func_0x000107c61434(uVar4);
  }
  func_0x000107c6142c(puVar2);
  func_0x000107c61434(uVar4);
  func_0x000107c5fb78(0x313d713b,0xe400000000000000);
  func_0x000107c6142c(uVar4);
  puVar2 = PTR_PTR_1126b4ea0;
  func_0x000107c610f8();
  uVar6 = 0x4c2d747065636341;
  func_0x000107c5fadc(0x4c2d747065636341,0xef65676175676e61);
  func_0x000107c5fadc(uVar11,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c4706c();
  func_0x000107c61170(uVar6);
  func_0x000107c61170();
  func_0x000100769448();
  lVar9 = ((ulong)*(uint *)(uVar11 + 0x30) + 7 & 0x1fffffff8) + 0x10;
  func_0x000107c613fc();
  *(undefined8 *)(uVar11 + 0x18) = 5;
  *(undefined8 *)(uVar11 + 0x10) = 2;
  *(undefined **)(uVar11 + 0x20) = puVar3;
  *(undefined **)(uVar11 + 0x28) = puVar2;
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  puVar5 = puVar2;
  FUN_1007694b4();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    puVar7 = puVar5;
    func_0x000107c5faec();
    func_0x000107c5fb5c();
    if ((long)puVar7 < 1) {
      func_0x000107c6142c(lVar9);
    }
    else {
      puVar7 = PTR_PTR_1126b4ea0;
      func_0x000107c610f8();
      uVar4 = 0xd000000000000010;
      func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c330);
      func_0x000107c6142c(lVar9);
      func_0x000107c4706c();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar5);
      uVar12 = uVar11 & 0xffffffffffffff8;
      uVar8 = *(ulong *)(uVar12 + 0x10);
      uVar1 = *(ulong *)(uVar12 + 0x18);
      func_0x000107c61174();
      uVar10 = uVar11;
      if (uVar1 >> 1 <= uVar8) {
        uVar10 = (ulong)(1 < uVar1);
        func_0x00010152c9f8(uVar10,uVar8 + 1,1,uVar11);
        uVar12 = uVar10 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar12 + 0x10) = uVar8 + 1;
      *(undefined **)(uVar12 + uVar8 * 8 + 0x20) = puVar7;
      uVar11 = uVar10;
    }
    func_0x000107c61170();
  }
  puVar5 = PTR_PTR_1126b80d8;
  func_0x000107c610f8(PTR_PTR_1126b80d8);
  uVar4 = 0;
  FUN_10076637c(0,0x112db0eb8,&PTR_PTR_1126b4ea0);
  uVar8 = uVar11;
  func_0x000107c5fc48(uVar11,uVar4);
  func_0x000107c46cbc(puVar5);
  func_0x000107c6142c(uVar11);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  return puVar5;
}



/* Entry: 100768ba8; end: 100768beb;  */

undefined * FUN_100768ba8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e1548;
  func_0x000107c5a9f0(PTR_PTR_1126e1548);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5ba08();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 100768bec; end: 100768c7b; -[SCDeviceInfoImplementation stableIntegerDeviceId] */

ulong FUN_100768bec(long param_1)

{
  ulong uVar1;
  
  func_0x000107c611ec(param_1 + 0x24);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar1 = *(ulong *)(param_1 + 0x18);
  }
  else {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x000107c44c3c();
    uVar1 = uVar1 % 1000000;
    *(ulong *)(param_1 + 0x18) = uVar1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  func_0x000107c611f0(param_1 + 0x24);
  return uVar1;
}



/* Entry: 100768c7c; end: 100768cbf;  */

long FUN_100768c7c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100768cc0; end: 100768d77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100768cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  FUN_100768d78(param_1,unaff_x20 + _DAT_112fcaab8);
  FUN_100768d78(param_2,unaff_x20 + _DAT_112fcaab0);
  *(undefined8 *)(unaff_x20 + _DAT_112fcaac0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fcaac8) = param_4;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_2);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 100768d78; end: 100768dbb;  */

long FUN_100768d78(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100768dbc; end: 100768e17;  */

void FUN_100768dbc(void)

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



/* Entry: 100768e18; end: 100768f6b;  */

void FUN_100768e18(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000100768df8();
  lVar2 = lVar1;
  func_0x000107c613fc();
  lVar3 = 0x112d38280;
  FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  lVar4 = lVar3;
  FUN_100111634();
  func_0x000107c61408(lVar3 + 0x20,0xc,PTR___sSSN_11034da80);
  *(long *)(lVar2 + 0x10) = lVar4;
  *(undefined2 *)(lVar2 + 0x18) = 0x202;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110646400;
  *param_1 = lVar2;
  return;
}



/* Entry: 100768f6c; end: 100768f8f;  */

uint FUN_100768f6c(uint param_1)

{
  func_0x000100768ebc();
  return param_1 & 1;
}


