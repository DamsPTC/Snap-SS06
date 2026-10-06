/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101749d18; end: 10174a10b;  */

void FUN_101749d18(undefined8 *param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x20;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined1 auStack_100 [48];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar14 = 0x6c6168635f746567;
  uVar10 = *unaff_x20;
  uVar16 = unaff_x20[2];
  uVar12 = uVar14;
  func_0x000107c5fadc(0x6c6168635f746567,0xed000065676e656c);
  func_0x0001053dca30(uVar16,uVar12,1);
  func_0x000107c61170(uVar12);
  uVar12 = unaff_x20[7];
  func_0x000107c6157c(uVar12);
  func_0x0001000285a8(0x112dc60e8,&UNK_10d985ed0);
  puVar6 = unaff_x20;
  func_0x000100075034(&puStack_a0,FUN_10174a10c);
  func_0x000107c61574(uVar12);
  puVar3 = puStack_a0;
  if (puStack_a0 == (undefined *)0x0) {
    func_0x000107c5fadc(0x6c6168635f746567,0xed000065676e656c);
    uVar12 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010efb9f40);
    func_0x0001053dcba4(uVar16,uVar14,uVar12,1);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar12);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    puStack_a0 = (undefined *)0x0;
    uStack_70 = 0x3000000000000000;
    (*param_2)(&puStack_a0);
  }
  else {
    func_0x000103ff7724(&uStack_d0);
    puVar11 = (undefined8 *)((ulong)param_1 & 0xffffffffffffff8);
    if ((ulong)param_1 >> 0x3e == 0) {
      puVar15 = (undefined8 *)puVar11[2];
    }
    else {
      puVar15 = puVar11;
      if ((undefined8 *)0x7fffffffffffffff < param_1) {
        puVar15 = param_1;
      }
      func_0x000107c60480();
    }
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar17 = (undefined8 *)0x0;
    while (puVar15 != puVar17) {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if ((undefined8 *)puVar11[2] <= puVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10174a0f8);
          (*pcVar4)();
        }
        puVar5 = (undefined8 *)param_1[(long)puVar17 + 4];
        func_0x000107c61174();
        puVar9 = puVar6;
      }
      else {
        puVar5 = puVar17;
        puVar9 = param_1;
        func_0x00010174b454();
      }
      puVar1 = (undefined8 *)((long)puVar17 + 1);
      if (SCARRY8((long)puVar17,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10174a0f4);
        (*pcVar4)();
      }
      puVar6 = puVar5;
      func_0x0001005923b4();
      func_0x000107c61170(puVar5);
      uVar7 = (ulong)puVar6 & 0xffffffff;
      func_0x000104004518();
      puVar6 = puVar9;
      puVar17 = (undefined8 *)((long)puVar17 + 1);
      if (((uint)puVar9 & 0xff00) != 0x100) {
        puVar8 = puVar13;
        func_0x000107c61558();
        if (((ulong)puVar8 & 1) == 0) {
          puVar6 = (undefined8 *)(*(long *)(puVar13 + 0x10) + 1);
          puVar8 = (undefined *)0x0;
          func_0x00010174b358(0,puVar6,1,puVar13);
          puVar13 = puVar8;
        }
        uVar2 = *(ulong *)(puVar13 + 0x10);
        puVar17 = (undefined8 *)(uVar2 + 1);
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar2) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
          puVar6 = puVar17;
          func_0x00010174b358(puVar8,puVar17,1,puVar13);
          puVar13 = puVar8;
        }
        *(undefined8 **)(puVar13 + 0x10) = puVar17;
        *(ulong *)(puVar13 + uVar2 * 0x10 + 0x20) = uVar7;
        puVar13[uVar2 * 0x10 + 0x28] = (char)puVar9;
        puVar17 = puVar1;
      }
    }
    uStack_a8 = uStack_d0;
    func_0x00010174c3ec(&uStack_a8,0x112dc60f0,&UNK_10d985ed8);
    uVar12 = unaff_x20[5];
    uVar14 = unaff_x20[6];
    uStack_98 = uStack_c8;
    uStack_90 = uStack_c0;
    uStack_88 = uStack_b8;
    uStack_80 = uStack_b0;
    puVar8 = &UNK_110402400;
    puStack_a0 = puVar13;
    func_0x000107c613fc(&UNK_110402400,0x80,7);
    *(undefined8 **)(puVar8 + 0x10) = unaff_x20;
    *(undefined **)(puVar8 + 0x18) = puVar3;
    *(undefined8 *)(puVar8 + 0x28) = uStack_98;
    *(undefined **)(puVar8 + 0x20) = puStack_a0;
    *(undefined8 *)(puVar8 + 0x38) = uStack_88;
    *(undefined8 *)(puVar8 + 0x30) = uStack_90;
    *(undefined8 *)(puVar8 + 0x40) = uStack_80;
    *(undefined8 *)(puVar8 + 0x48) = uVar16;
    puVar8[0x50] = 0;
    *(undefined8 *)(puVar8 + 0x58) = uVar12;
    *(undefined8 *)(puVar8 + 0x60) = uVar14;
    *(code **)(puVar8 + 0x68) = param_2;
    *(undefined8 *)(puVar8 + 0x70) = param_3;
    *(undefined8 *)(puVar8 + 0x78) = uVar10;
    func_0x000107c6157c(uVar12);
    func_0x000107c6157c(uVar14);
    func_0x000107c61174(uVar16);
    func_0x000107c6157c();
    func_0x000107c6157c(puVar3);
    func_0x000107c6157c(param_3);
    FUN_10174b6f8(&puStack_a0,auStack_100);
    uVar12 = 7;
    func_0x0001001ca524(7,0,0x5c,4,0,0,&UNK_10d985ee8,puVar8,PTR___sytN_11034f1b0 + 8);
    func_0x000107c6142c(uStack_c0);
    func_0x000107c6142c(puVar13);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(uVar12);
    func_0x000107c61574(puVar3);
    func_0x00010006c090(uStack_b8,uStack_b0);
  }
  return;
}



/* Entry: 10174a10c; end: 10174a123;  */

void FUN_10174a10c(void)

{
  FUN_101749b2c();
  return;
}



/* Entry: 10174a124; end: 10174a15f;  */

void FUN_10174a124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x330) = param_10;
  *(undefined8 *)(unaff_x22 + 0x328) = param_9;
  *(undefined8 *)(unaff_x22 + 800) = param_8;
  *(undefined8 *)(unaff_x22 + 0x318) = param_7;
  *(undefined1 *)(unaff_x22 + 0x350) = param_6;
  *(undefined8 *)(unaff_x22 + 0x310) = param_5;
  *(undefined8 *)(unaff_x22 + 0x308) = param_4;
  *(undefined8 *)(unaff_x22 + 0x300) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10174a160,0,0);
  return;
}



/* Entry: 10174a160; end: 10174a20f;  */

void FUN_10174a160(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  plVar3 = *(long **)(unaff_x22 + 0x300);
  func_0x000107c6071c();
  *(undefined8 *)(unaff_x22 + 0x338) = param_1;
  func_0x00010448a8f4(unaff_x22 + 0x1b0);
  func_0x00010448aa5c(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x160);
  func_0x000100e19000(unaff_x22 + 0x1b0);
  piVar2 = *(int **)(*plVar3 + 0x78);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x340) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10174a210;
                    /* WARNING: Could not recover jumptable at 0x00010174a20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))
            (plVar3,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x308),unaff_x22 + 0xf0);
  return;
}



/* Entry: 10174a210; end: 10174a273;  */

void FUN_10174a210(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x348) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x340));
  func_0x000100e19000(lVar2 + 0x150);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10174a274;
  }
  else {
    pcVar1 = FUN_10174a520;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10174a274; end: 10174a51f;  */

void FUN_10174a274(double param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  double dVar11;
  
  dVar11 = *(double *)(unaff_x22 + 0x338);
  func_0x000107c6071c();
  dVar11 = (param_1 - dVar11) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar11)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10174a518);
    (*pcVar9)();
  }
  if (dVar11 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10174a51c);
    (*pcVar9)();
  }
  if (9.223372036854776e+18 <= dVar11) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10174a520);
    (*pcVar9)();
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x310);
  bVar2 = *(char *)(unaff_x22 + 0x350) != '\x01';
  uVar3 = 0xd000000000000010;
  if (bVar2) {
    uVar3 = 0x6c6168635f746567;
  }
  uVar1 = 0x800000010efb9f60;
  if (bVar2) {
    uVar1 = 0xed000065676e656c;
  }
  uVar6 = uVar3;
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x0001053dcdd4(uVar5,uVar6,(long)dVar11);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(unaff_x22 + 0x298) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x290) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x2a8) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x288) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x280) = *(undefined8 *)(unaff_x22 + 0x30);
  if ((*(byte *)(unaff_x22 + 0x2af) & 0x30) == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 800);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x318);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x290);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x288);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x280);
    func_0x00010174c3a4(unaff_x22 + 0x280,unaff_x22 + 0x2b0,0x112dc61d0,&UNK_10d985fb8);
    FUN_10174ba04(uVar10,uVar8,uVar7,uVar6,uVar5);
    func_0x00010174c3ec(unaff_x22 + 0x280,0x112dc61d0,&UNK_10d985fb8);
  }
  func_0x00010174c300(unaff_x22 + 0x10,unaff_x22 + 0x80);
  FUN_10174baf4(unaff_x22 + 0x248,unaff_x22 + 0x10);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  uVar4 = (uint)((ulong)*(undefined8 *)(unaff_x22 + 0x278) >> 0x3c) & 3;
  uVar5 = 0x64656b636f6c62;
  if (uVar4 != 2) {
    uVar5 = 0x726f727265;
  }
  uVar1 = 0xe700000000000000;
  if (uVar4 != 2) {
    uVar1 = 0xe500000000000000;
  }
  uVar6 = 0xea00000000006465;
  uVar7 = 0x676e656c6c616863;
  if (uVar4 != 0) {
    uVar6 = 0xe700000000000000;
    uVar7 = 0x73736563637573;
  }
  if (uVar4 < 2) {
    uVar1 = uVar6;
    uVar5 = uVar7;
  }
  pcVar9 = *(code **)(unaff_x22 + 0x328);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x310);
  func_0x000107c5fadc(uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x0001053dcba4(uVar6,uVar3,uVar5,1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  (*pcVar9)(unaff_x22 + 0x248);
  func_0x00010174c33c(unaff_x22 + 0x248);
  func_0x00010174c370(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010174a510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10174a520; end: 10174a707;  */

void FUN_10174a520(double param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  code *pcVar7;
  double dVar8;
  
  dVar8 = *(double *)(unaff_x22 + 0x338);
  func_0x000107c6071c();
  dVar8 = (param_1 - dVar8) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar8)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10174a700);
    (*pcVar7)();
  }
  if (-9.223372036854778e+18 < dVar8) {
    if (dVar8 < 9.223372036854776e+18) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x348);
      pcVar7 = *(code **)(unaff_x22 + 0x328);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x310);
      bVar1 = *(char *)(unaff_x22 + 0x350) != '\x01';
      uVar4 = 0xd000000000000010;
      if (bVar1) {
        uVar4 = 0x6c6168635f746567;
      }
      uVar3 = 0x800000010efb9f60;
      if (bVar1) {
        uVar3 = 0xed000065676e656c;
      }
      uVar2 = uVar4;
      func_0x000107c5fadc(uVar4,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x0001053dcdd4(uVar6,uVar2,(long)dVar8);
      func_0x000107c61170(uVar2);
      func_0x000107c5fadc(uVar4,uVar3);
      func_0x000107c6142c(uVar3);
      uVar3 = 0x7272655f63707267;
      func_0x000107c5fadc(0x7272655f63707267,0xea0000000000726f);
      func_0x0001053dcba4(uVar6,uVar4,uVar3,1);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c614cc(uVar5,unaff_x22 + 0x2f8,unaff_x22 + 0x2e0);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x2e8);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x2f0);
      func_0x000107c60640();
      *(undefined8 *)(unaff_x22 + 0x210) = uVar4;
      *(undefined8 *)(unaff_x22 + 0x218) = uVar6;
      *(undefined8 *)(unaff_x22 + 0x228) = 0;
      *(undefined8 *)(unaff_x22 + 0x220) = 0;
      *(undefined8 *)(unaff_x22 + 0x238) = 0;
      *(undefined8 *)(unaff_x22 + 0x230) = 0;
      *(undefined8 *)(unaff_x22 + 0x240) = 0x3000000000000000;
      (*pcVar7)(unaff_x22 + 0x210);
      func_0x000107c6142c(uVar6);
      func_0x000107c614ac(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010174a6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10174a708);
    (*pcVar7)();
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10174a704);
  (*pcVar7)();
}



/* Entry: 10174a708; end: 10174ac33;  */

void FUN_10174a708(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  code *param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x20;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined *puStack_418;
  undefined1 auStack_410 [160];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
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
  
  uVar12 = *unaff_x20;
  uStack_a8 = param_4[9];
  uStack_b0 = param_4[8];
  uStack_98 = param_4[0xb];
  uStack_a0 = param_4[10];
  uStack_88 = param_4[0xd];
  uStack_90 = param_4[0xc];
  uStack_80 = param_4[0xe];
  uStack_e8 = param_4[1];
  uStack_f0 = *param_4;
  uStack_d8 = param_4[3];
  uStack_e0 = param_4[2];
  uStack_c8 = param_4[5];
  uStack_d0 = param_4[4];
  uStack_b8 = param_4[7];
  uStack_c0 = param_4[6];
  uVar14 = unaff_x20[2];
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efb9f60);
  func_0x0001053dca30(uVar14,uVar6,1);
  func_0x000107c61170(uVar6);
  uVar6 = unaff_x20[7];
  func_0x000107c6157c(uVar6);
  func_0x0001000285a8(0x112dc60e8,&UNK_10d985ed0);
  puVar8 = unaff_x20;
  func_0x000100075034(&puStack_190,FUN_10174c580);
  func_0x000107c61574(uVar6);
  puVar4 = puStack_190;
  if (puStack_190 == (undefined *)0x0) {
    uVar6 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010efb9f60);
    uVar12 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010efb9f40);
    func_0x0001053dcba4(uVar14,uVar6,uVar12,1);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar12);
    uStack_160 = 0;
    uStack_188 = 0;
    puStack_190 = (undefined *)0x0;
    uStack_158 = CONCAT71(uStack_158._1_7_,1);
    (*param_5)(&puStack_190);
  }
  else {
    func_0x000103ff774c(&puStack_248);
    uStack_198 = uStack_238;
    uStack_1a0 = uStack_240;
    uStack_288 = uStack_1e0;
    uStack_290 = uStack_1e8;
    uStack_278 = uStack_1d0;
    uStack_280 = uStack_1d8;
    uStack_268 = uStack_1c0;
    uStack_270 = uStack_1c8;
    uStack_258 = uStack_1b0;
    uStack_260 = uStack_1b8;
    uStack_2c8 = uStack_220;
    uStack_2d0 = uStack_228;
    uStack_2b8 = uStack_210;
    uStack_2c0 = uStack_218;
    uStack_2a8 = uStack_200;
    uStack_2b0 = uStack_208;
    uStack_298 = uStack_1f0;
    uStack_2a0 = uStack_1f8;
    uStack_2e8 = uStack_240;
    puStack_2f0 = puStack_248;
    uStack_2d8 = uStack_230;
    uStack_2e0 = uStack_238;
    func_0x000107c61434(param_2);
    func_0x000100bcb1dc(&uStack_1a0);
    puVar15 = (undefined8 *)((ulong)param_3 & 0xffffffffffffff8);
    uStack_2e8 = param_1;
    uStack_2e0 = param_2;
    if ((ulong)param_3 >> 0x3e == 0) {
      puVar16 = (undefined8 *)puVar15[2];
    }
    else {
      puVar16 = puVar15;
      if ((undefined8 *)0x7fffffffffffffff < param_3) {
        puVar16 = param_3;
      }
      func_0x000107c60480();
    }
    puStack_418 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar13 = (undefined8 *)0x0;
    while (puVar16 != puVar13) {
      if (((ulong)param_3 & 0xc000000000000001) == 0) {
        if ((undefined8 *)puVar15[2] <= puVar13) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10174ac20);
          (*pcVar5)();
        }
        puVar7 = (undefined8 *)param_3[(long)puVar13 + 4];
        func_0x000107c61174();
        puVar11 = puVar8;
      }
      else {
        puVar7 = puVar13;
        puVar11 = param_3;
        func_0x00010174b454();
      }
      puVar1 = (undefined8 *)((long)puVar13 + 1);
      if (SCARRY8((long)puVar13,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10174ac1c);
        (*pcVar5)();
      }
      puVar8 = puVar7;
      func_0x0001005923b4();
      func_0x000107c61170(puVar7);
      uVar9 = (ulong)puVar8 & 0xffffffff;
      func_0x000104004518();
      puVar8 = puVar11;
      puVar13 = (undefined8 *)((long)puVar13 + 1);
      if (((uint)puVar11 & 0xff00) != 0x100) {
        puVar10 = puStack_418;
        func_0x000107c61558();
        if (((ulong)puVar10 & 1) == 0) {
          puVar8 = (undefined8 *)(*(long *)(puStack_418 + 0x10) + 1);
          puStack_418 = (undefined *)0x0;
          func_0x00010174b358(0,puVar8,1);
        }
        uVar2 = *(ulong *)(puStack_418 + 0x10);
        puVar13 = (undefined8 *)(uVar2 + 1);
        if (*(ulong *)(puStack_418 + 0x18) >> 1 <= uVar2) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puStack_418 + 0x18));
          puVar8 = puVar13;
          func_0x00010174b358(puVar10,puVar13,1,puStack_418);
          puStack_418 = puVar10;
        }
        *(undefined8 **)(puStack_418 + 0x10) = puVar13;
        *(ulong *)(puStack_418 + uVar2 * 0x10 + 0x20) = uVar9;
        puStack_418[uVar2 * 0x10 + 0x28] = (char)puVar11;
        puVar13 = puVar1;
      }
    }
    puStack_1a8 = puStack_248;
    func_0x00010174c3ec(&puStack_1a8,0x112dc60f0,&UNK_10d985ed8);
    puStack_2f0 = puStack_418;
    uStack_328 = uStack_280;
    uStack_330 = uStack_288;
    uStack_318 = uStack_270;
    uStack_320 = uStack_278;
    uStack_308 = uStack_260;
    uStack_310 = uStack_268;
    uStack_300 = uStack_258;
    uStack_368 = uStack_2c0;
    uStack_370 = uStack_2c8;
    uStack_358 = uStack_2b0;
    uStack_360 = uStack_2b8;
    uStack_348 = uStack_2a0;
    uStack_350 = uStack_2a8;
    uStack_338 = uStack_290;
    uStack_340 = uStack_298;
    func_0x00010174b734(param_4,&puStack_190);
    func_0x00010174c3ec(&uStack_370,0x112dc60f8,&UNK_10d985ef0);
    uStack_290 = uStack_b8;
    uStack_298 = uStack_c0;
    uStack_280 = uStack_a8;
    uStack_288 = uStack_b0;
    uStack_270 = uStack_98;
    uStack_278 = uStack_a0;
    uStack_260 = uStack_88;
    uStack_268 = uStack_90;
    uStack_2c0 = uStack_e8;
    uStack_2c8 = uStack_f0;
    uStack_258 = uStack_80;
    uStack_2b0 = uStack_d8;
    uStack_2b8 = uStack_e0;
    uStack_2a0 = uStack_c8;
    uStack_2a8 = uStack_d0;
    uVar6 = unaff_x20[5];
    uVar3 = unaff_x20[6];
    uStack_128 = uStack_b0;
    uStack_130 = uStack_b8;
    uStack_118 = uStack_a0;
    uStack_120 = uStack_a8;
    uStack_108 = uStack_90;
    uStack_110 = uStack_98;
    uStack_f8 = uStack_80;
    uStack_100 = uStack_88;
    uStack_168 = uStack_f0;
    uStack_170 = uStack_2d0;
    uStack_158 = uStack_e0;
    uStack_160 = uStack_e8;
    uStack_148 = uStack_d0;
    uStack_150 = uStack_d8;
    uStack_138 = uStack_c0;
    uStack_140 = uStack_c8;
    uStack_188 = uStack_2e8;
    puStack_190 = puStack_2f0;
    uStack_178 = uStack_2d8;
    uStack_180 = uStack_2e0;
    puVar10 = &UNK_110402428;
    func_0x000107c613fc(&UNK_110402428,0xf8,7);
    *(undefined8 **)(puVar10 + 0x10) = unaff_x20;
    *(undefined **)(puVar10 + 0x18) = puVar4;
    *(undefined8 *)(puVar10 + 0x88) = uStack_288;
    *(undefined8 *)(puVar10 + 0x80) = uStack_290;
    *(undefined8 *)(puVar10 + 0x98) = uStack_278;
    *(undefined8 *)(puVar10 + 0x90) = uStack_280;
    *(undefined8 *)(puVar10 + 0xa8) = uStack_268;
    *(undefined8 *)(puVar10 + 0xa0) = uStack_270;
    *(undefined8 *)(puVar10 + 0xb8) = uStack_258;
    *(undefined8 *)(puVar10 + 0xb0) = uStack_260;
    *(undefined8 *)(puVar10 + 0x48) = uStack_2c8;
    *(undefined8 *)(puVar10 + 0x40) = uStack_2d0;
    *(undefined8 *)(puVar10 + 0x58) = uStack_2b8;
    *(undefined8 *)(puVar10 + 0x50) = uStack_2c0;
    *(undefined8 *)(puVar10 + 0x68) = uStack_2a8;
    *(undefined8 *)(puVar10 + 0x60) = uStack_2b0;
    *(undefined8 *)(puVar10 + 0x78) = uStack_298;
    *(undefined8 *)(puVar10 + 0x70) = uStack_2a0;
    *(undefined8 *)(puVar10 + 0x28) = uStack_2e8;
    *(undefined **)(puVar10 + 0x20) = puStack_2f0;
    *(undefined8 *)(puVar10 + 0x38) = uStack_2d8;
    *(undefined8 *)(puVar10 + 0x30) = uStack_2e0;
    *(undefined8 *)(puVar10 + 0xc0) = uVar14;
    puVar10[200] = 1;
    *(undefined8 *)(puVar10 + 0xd0) = uVar6;
    *(undefined8 *)(puVar10 + 0xd8) = uVar3;
    *(code **)(puVar10 + 0xe0) = param_5;
    *(undefined8 *)(puVar10 + 0xe8) = param_6;
    *(undefined8 *)(puVar10 + 0xf0) = uVar12;
    func_0x000107c6157c(uVar6);
    func_0x000107c6157c(uVar3);
    func_0x000107c61174(uVar14);
    func_0x000107c6157c(unaff_x20);
    func_0x000107c6157c(puVar4);
    func_0x000107c6157c(param_6);
    FUN_10174b964(&puStack_190,auStack_410);
    uVar6 = 7;
    func_0x0001001ca524(7,0,0x5c,4,0,0,&UNK_10d985f00,puVar10,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar10);
    func_0x000107c61574(uVar6);
    func_0x000107c61574(puVar4);
    func_0x00010174b9a0(&puStack_2f0);
  }
  return;
}



/* Entry: 10174ac34; end: 10174ac6f;  */

void FUN_10174ac34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x340) = param_10;
  *(undefined8 *)(unaff_x22 + 0x338) = param_9;
  *(undefined8 *)(unaff_x22 + 0x330) = param_8;
  *(undefined8 *)(unaff_x22 + 0x328) = param_7;
  *(undefined1 *)(unaff_x22 + 0x249) = param_6;
  *(undefined8 *)(unaff_x22 + 800) = param_5;
  *(undefined8 *)(unaff_x22 + 0x318) = param_4;
  *(undefined8 *)(unaff_x22 + 0x310) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10174ac70,0,0);
  return;
}



/* Entry: 10174ac70; end: 10174ad1f;  */

void FUN_10174ac70(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  plVar3 = *(long **)(unaff_x22 + 0x310);
  func_0x000107c6071c();
  *(undefined8 *)(unaff_x22 + 0x348) = param_1;
  func_0x00010448a8f4(unaff_x22 + 0x1b0);
  func_0x00010448aa5c(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x160);
  func_0x000100e19000(unaff_x22 + 0x1b0);
  piVar2 = *(int **)(*plVar3 + 0x80);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x350) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10174ad20;
                    /* WARNING: Could not recover jumptable at 0x00010174ad1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))
            (plVar3,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x318),unaff_x22 + 0xf0);
  return;
}



/* Entry: 10174ad20; end: 10174ad83;  */

void FUN_10174ad20(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x358) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x350));
  func_0x000100e19000(lVar2 + 0x150);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10174ad84;
  }
  else {
    pcVar1 = FUN_10174b064;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10174ad84; end: 10174b063;  */

void FUN_10174ad84(double param_1)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  double dVar11;
  
  dVar11 = *(double *)(unaff_x22 + 0x348);
  func_0x000107c6071c();
  dVar11 = (param_1 - dVar11) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar11)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10174b05c);
    (*pcVar9)();
  }
  if (-9.223372036854778e+18 < dVar11) {
    if (dVar11 < 9.223372036854776e+18) {
      uVar5 = *(undefined8 *)(unaff_x22 + 800);
      bVar3 = *(char *)(unaff_x22 + 0x249) != '\x01';
      uVar4 = 0xd000000000000010;
      if (bVar3) {
        uVar4 = 0x6c6168635f746567;
      }
      uVar1 = 0x800000010efb9f60;
      if (bVar3) {
        uVar1 = 0xed000065676e656c;
      }
      uVar6 = uVar4;
      func_0x000107c5fadc(uVar4,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x0001053dcdd4(uVar5,uVar6,(long)dVar11);
      func_0x000107c61170(uVar6);
      *(undefined8 *)(unaff_x22 + 0x2a8) = *(undefined8 *)(unaff_x22 + 0x38);
      *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(unaff_x22 + 0x30);
      *(undefined8 *)(unaff_x22 + 0x2b8) = *(undefined8 *)(unaff_x22 + 0x48);
      *(undefined8 *)(unaff_x22 + 0x2b0) = *(undefined8 *)(unaff_x22 + 0x40);
      *(undefined8 *)(unaff_x22 + 0x298) = *(undefined8 *)(unaff_x22 + 0x28);
      *(undefined8 *)(unaff_x22 + 0x290) = *(undefined8 *)(unaff_x22 + 0x20);
      if ((*(byte *)(unaff_x22 + 0x2bf) & 0x30) == 0) {
        uVar5 = *(undefined8 *)(unaff_x22 + 0x330);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x328);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x2a0);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x298);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x290);
        func_0x00010174c3a4(unaff_x22 + 0x290,unaff_x22 + 0x2c0,0x112dc61c8,&UNK_10d985fb0);
        FUN_10174ba04(uVar10,uVar8,uVar7,uVar6,uVar5);
        func_0x00010174c3ec(unaff_x22 + 0x290,0x112dc61c8,&UNK_10d985fb0);
      }
      FUN_10174c1d4(unaff_x22 + 0x10,unaff_x22 + 0x80);
      func_0x00010174be10(unaff_x22 + 0x250,unaff_x22 + 0x10);
      func_0x000107c5fadc(uVar4,uVar1);
      func_0x000107c6142c(uVar1);
      uVar2 = (uint)((ulong)*(undefined8 *)(unaff_x22 + 0x280) >> 0x3c) & 3 |
              (*(byte *)(unaff_x22 + 0x288) & 0x3f) << 2;
      uVar5 = 0x64656b636f6c62;
      if (uVar2 != 3) {
        uVar5 = 0x726f727265;
      }
      uVar1 = 0xe700000000000000;
      if (uVar2 != 3) {
        uVar1 = 0xe500000000000000;
      }
      uVar6 = 0x800000010efb9f80;
      uVar7 = 0xd000000000000013;
      if (uVar2 != 2) {
        uVar6 = uVar1;
        uVar7 = uVar5;
      }
      uVar5 = 0x73736563637573;
      if (uVar2 != 0) {
        uVar5 = 0x676e656c6c616863;
      }
      uVar1 = 0xe700000000000000;
      if (uVar2 != 0) {
        uVar1 = 0xea00000000006465;
      }
      if (uVar2 < 2) {
        uVar6 = uVar1;
        uVar7 = uVar5;
      }
      pcVar9 = *(code **)(unaff_x22 + 0x338);
      uVar5 = *(undefined8 *)(unaff_x22 + 800);
      func_0x000107c5fadc(uVar7,uVar6);
      func_0x000107c6142c(uVar6);
      func_0x0001053dcba4(uVar5,uVar4,uVar7,1);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar4);
      (*pcVar9)(unaff_x22 + 0x250);
      func_0x00010174c210(unaff_x22 + 0x250);
      func_0x00010174c244(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010174b054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10174b064);
    (*pcVar9)();
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10174b060);
  (*pcVar9)();
}



/* Entry: 10174b064; end: 10174b247;  */

void FUN_10174b064(double param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  code *pcVar7;
  double dVar8;
  
  dVar8 = *(double *)(unaff_x22 + 0x348);
  func_0x000107c6071c();
  dVar8 = (param_1 - dVar8) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar8)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10174b240);
    (*pcVar7)();
  }
  if (-9.223372036854778e+18 < dVar8) {
    if (dVar8 < 9.223372036854776e+18) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x358);
      pcVar7 = *(code **)(unaff_x22 + 0x338);
      uVar6 = *(undefined8 *)(unaff_x22 + 800);
      bVar1 = *(char *)(unaff_x22 + 0x249) != '\x01';
      uVar4 = 0xd000000000000010;
      if (bVar1) {
        uVar4 = 0x6c6168635f746567;
      }
      uVar3 = 0x800000010efb9f60;
      if (bVar1) {
        uVar3 = 0xed000065676e656c;
      }
      uVar2 = uVar4;
      func_0x000107c5fadc(uVar4,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x0001053dcdd4(uVar6,uVar2,(long)dVar8);
      func_0x000107c61170(uVar2);
      func_0x000107c5fadc(uVar4,uVar3);
      func_0x000107c6142c(uVar3);
      uVar3 = 0x7272655f63707267;
      func_0x000107c5fadc(0x7272655f63707267,0xea0000000000726f);
      func_0x0001053dcba4(uVar6,uVar4,uVar3,1);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c614cc(uVar5,unaff_x22 + 0x308,unaff_x22 + 0x2f0);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x2f8);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x300);
      func_0x000107c60640();
      *(undefined8 *)(unaff_x22 + 0x210) = uVar4;
      *(undefined8 *)(unaff_x22 + 0x218) = uVar6;
      *(undefined8 *)(unaff_x22 + 0x240) = 0;
      *(undefined1 *)(unaff_x22 + 0x248) = 1;
      (*pcVar7)(unaff_x22 + 0x210);
      func_0x000107c6142c(uVar6);
      func_0x000107c614ac(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010174b238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10174b248);
    (*pcVar7)();
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10174b244);
  (*pcVar7)();
}



/* Entry: 10174b248; end: 10174b293;  */

void FUN_10174b248(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10174b294; end: 10174b2d3;  */

void FUN_10174b294(void)

{
  FUN_101749d18();
  return;
}



/* Entry: 10174b2d4; end: 10174b607;  */

byte FUN_10174b2d4(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  byte *pbVar7;
  
  puVar3 = PTR_PTR_1126b1278;
  func_0x000107c61168();
  func_0x000107c4fa84();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x0001005923b4();
  func_0x000107c61170(puVar3);
  lVar6 = *(long *)(param_1 + 0x10) + 1;
  pbVar7 = (byte *)(param_1 + -0x1c);
  do {
    lVar6 = lVar6 + -1;
    bVar5 = 0;
    if (lVar6 == 0) goto LAB_10174b344;
    pbVar2 = pbVar7 + 0x40;
    pbVar1 = pbVar7 + 0x3c;
    pbVar7 = pbVar2;
  } while (*(int *)pbVar1 != (int)puVar4);
  bVar5 = *pbVar2 ^ 1;
LAB_10174b344:
  return bVar5 & 1;
}



/* Entry: 10174b608; end: 10174b6bb;  */

void FUN_10174b608(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x48);
  lVar1 = *(long *)(unaff_x20 + 0x58);
  lVar3 = *(long *)(unaff_x20 + 0x60);
  lVar8 = *(long *)(unaff_x20 + 0x70);
  lVar7 = *(long *)(unaff_x20 + 0x68);
  plVar5 = (long *)0x360;
  uVar4 = *(undefined1 *)(unaff_x20 + 0x50);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10174b6bc;
  plVar5[0x66] = lVar8;
  plVar5[0x65] = lVar7;
  plVar5[100] = lVar3;
  plVar5[99] = lVar1;
  *(undefined1 *)(plVar5 + 0x6a) = uVar4;
  plVar5[0x62] = lVar6;
  plVar5[0x61] = unaff_x20 + 0x20;
  plVar5[0x60] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10174a160,0,0);
  return;
}



/* Entry: 10174b6bc; end: 10174b6f7;  */

void FUN_10174b6bc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010174b6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10174b6f8; end: 10174b76f;  */

undefined8 FUN_10174b6f8(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_104000d50)(param_2,param_1);
  return param_2;
}



/* Entry: 10174b770; end: 10174b837;  */

/* WARNING: Possible PIC construction at 0x00010174b7b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010174b7e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010174b7bc) */
/* WARNING: Removing unreachable block (ram,0x000101553d58) */
/* WARNING: Removing unreachable block (ram,0x000101553d68) */
/* WARNING: Removing unreachable block (ram,0x000101553d64) */
/* WARNING: Removing unreachable block (ram,0x00010174b7ec) */
/* WARNING: Removing unreachable block (ram,0x00010174b89c) */
/* WARNING: Removing unreachable block (ram,0x00010174b8ac) */
/* WARNING: Removing unreachable block (ram,0x00010174b8a8) */

void FUN_10174b770(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,ulong param_8)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  char in_stack_00000020;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (in_stack_00000020 != '\x02') {
    unaff_x19 = param_8;
    unaff_x20 = param_7;
    unaff_x29 = puVar1;
    if (in_stack_00000020 == '\x01') {
      unaff_x30 = 0x10174b7ec;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      param_1 = param_5;
      param_2 = param_6;
    }
    else {
      if (in_stack_00000020 != '\0') {
        return;
      }
      FUN_10174b838();
      unaff_x30 = 0x10174b7bc;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      param_1 = param_7;
      param_2 = param_8;
    }
  }
  uVar2 = (uint)(param_2 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c61574(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10174b838; end: 10174b84b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10174b838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  uint uVar1;
  
  if (((param_6 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
  if ((param_6 >> 0x3d & 1) == 0) {
    func_0x000107c6142c(param_2);
  }
  else {
    param_6 = param_6 & 0xdfffffffffffffff;
  }
  func_0x000107c6142c(param_4);
  uVar1 = (uint)(param_6 >> 0x3e);
  if (uVar1 == 1) {
    param_5 = param_6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 10174b84c; end: 10174b89b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10174b84c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  uint uVar1;
  
  if ((param_6 >> 0x3d & 1) == 0) {
    func_0x000107c6142c(param_2);
  }
  else {
    param_6 = param_6 & 0xdfffffffffffffff;
  }
  func_0x000107c6142c(param_4);
  uVar1 = (uint)(param_6 >> 0x3e);
  if (uVar1 == 1) {
    param_5 = param_6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 10174b89c; end: 10174b8af;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10174b89c(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10174b8b0; end: 10174b963;  */

void FUN_10174b8b0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0xc0);
  lVar1 = *(long *)(unaff_x20 + 0xd0);
  lVar3 = *(long *)(unaff_x20 + 0xd8);
  lVar8 = *(long *)(unaff_x20 + 0xe8);
  lVar7 = *(long *)(unaff_x20 + 0xe0);
  plVar5 = (long *)0x360;
  uVar4 = *(undefined1 *)(unaff_x20 + 200);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10174c594;
  plVar5[0x68] = lVar8;
  plVar5[0x67] = lVar7;
  plVar5[0x66] = lVar3;
  plVar5[0x65] = lVar1;
  *(undefined1 *)((long)plVar5 + 0x249) = uVar4;
  plVar5[100] = lVar6;
  plVar5[99] = unaff_x20 + 0x20;
  plVar5[0x62] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10174ac70,0,0);
  return;
}



/* Entry: 10174b964; end: 10174b9d3;  */

undefined8 FUN_10174b964(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_1040014d8)(param_2,param_1);
  return param_2;
}



/* Entry: 10174b9d4; end: 10174b9e3;  */

undefined1  [16] FUN_10174b9d4(void)

{
  return ZEXT816(0x110402468);
}



/* Entry: 10174b9e4; end: 10174ba03;  */

void FUN_10174b9e4(void)

{
  func_0x000107c61168(&PTR_PTR_112dc6140);
  return;
}



/* Entry: 10174ba04; end: 10174baf3;  */

void FUN_10174ba04(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_50);
  lVar4 = lStack_50;
  lVar2 = lStack_50;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar2 != 0) {
    uVar3 = 0xd000000000000031;
    func_0x000107c5fadc(0xd000000000000031,0x800000010efb9fa0);
    lVar4 = lVar2;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    if ((int)lVar4 != 0) {
      func_0x000100083b20(&lStack_50);
      lVar4 = lStack_50;
      func_0x000107c614f0(lStack_50);
      (**(code **)(lStack_48 + 0x10))(param_1,3,lVar4,lStack_48);
      func_0x000107c615e8(lStack_50);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10174baf4);
  (*pcVar1)();
}



/* Entry: 10174baf4; end: 10174c1d3;  */

void FUN_10174baf4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_c0 [48];
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  if ((char)param_2[1] == '\x01') {
    lVar1 = *param_2;
    if (lVar1 < 3) {
      if (lVar1 == 0) goto LAB_10174bb7c;
      if (lVar1 == 1) {
        uVar3 = param_2[9];
        if ((uVar3 & 0x3000000000000000) == 0) {
          lVar1 = param_2[7];
          lVar5 = param_2[8];
          lVar2 = param_2[5];
          lVar7 = param_2[6];
          uVar6 = param_2[4];
          func_0x00010174c42c(uVar6,lVar2,lVar7,lVar1,lVar5,uVar3);
          uVar4 = uVar6;
          FUN_10174b2d4(uVar6,lVar2,lVar7);
          func_0x000100cbba90(uVar6,lVar2,lVar7,lVar1,lVar5,uVar3);
          uVar4 = uVar4 & 1;
        }
        else {
          uVar4 = 0;
        }
        lVar1 = param_2[2];
        lVar2 = param_2[3];
        func_0x000107c61434(lVar2);
        func_0x00010174c370(param_2);
        lVar5 = 0;
        lVar7 = 0;
        lVar8 = 0;
        lVar9 = 0x1000000000000000;
        goto LAB_10174bc38;
      }
      lVar8 = param_2[7];
      lVar7 = param_2[6];
      uStack_68 = param_2[9];
      lVar9 = param_2[8];
      lVar5 = param_2[5];
      uVar4 = param_2[4];
      uStack_90 = uVar4;
      lStack_88 = lVar5;
      lStack_80 = lVar7;
      lStack_78 = lVar8;
      lStack_70 = lVar9;
      if ((uStack_68 & 0x3000000000000000) == 0x1000000000000000) {
        lVar1 = param_2[2];
        lVar2 = param_2[3];
        func_0x00010174c3a4(&uStack_90,auStack_c0,0x112dc61d0,&UNK_10d985fb8);
        func_0x000107c61434(lVar2);
        func_0x00010174c370(param_2);
        goto LAB_10174bc38;
      }
      goto LAB_10174bb90;
    }
    if (lVar1 - 3U < 2 || lVar1 != 5) goto LAB_10174bb7c;
    uVar3 = param_2[9];
    if ((uVar3 & 0x3000000000000000) == 0x3000000000000000) {
      func_0x00010174c370();
LAB_10174bdf0:
      lVar1 = 0;
      lVar2 = 0;
    }
    else {
      lVar1 = param_2[4];
      lVar2 = param_2[5];
      lVar5 = param_2[6];
      lVar7 = param_2[7];
      lVar8 = param_2[8];
      func_0x00010174c42c(lVar1,lVar2,lVar5,lVar7,lVar8,uVar3);
      func_0x00010174c370(param_2);
      if ((uVar3 & 0x3000000000000000) != 0x2000000000000000) {
        func_0x000100cbba90(lVar1,lVar2,lVar5,lVar7,lVar8,uVar3);
        goto LAB_10174bdf0;
      }
      func_0x000107c61434(lVar2);
      func_0x000100cbba90(lVar1,lVar2,lVar5,lVar7,lVar8,uVar3);
    }
    uVar4 = 0;
    lVar5 = 0;
    lVar7 = 0;
    lVar8 = 0;
    lVar9 = 0x2000000000000000;
    goto LAB_10174bc38;
  }
LAB_10174bb7c:
  uVar3 = param_2[9];
  if ((uVar3 & 0x3000000000000000) == 0x3000000000000000) {
LAB_10174bb90:
    func_0x00010174c370();
LAB_10174bc1c:
    lVar1 = 0;
    lVar2 = 0;
  }
  else {
    lVar1 = param_2[4];
    lVar2 = param_2[5];
    lVar5 = param_2[6];
    lVar7 = param_2[7];
    lVar8 = param_2[8];
    func_0x00010174c42c(lVar1,lVar2,lVar5,lVar7,lVar8,uVar3);
    func_0x00010174c370(param_2);
    if ((uVar3 & 0x3000000000000000) != 0x2000000000000000) {
      func_0x000100cbba90(lVar1,lVar2,lVar5,lVar7,lVar8,uVar3);
      goto LAB_10174bc1c;
    }
    func_0x000107c61434(lVar2);
    func_0x000100cbba90(lVar1,lVar2,lVar5,lVar7,lVar8,uVar3);
  }
  uVar4 = 0;
  lVar5 = 0;
  lVar7 = 0;
  lVar8 = 0;
  lVar9 = 0x3000000000000000;
LAB_10174bc38:
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = uVar4;
  param_1[3] = lVar5;
  param_1[4] = lVar7;
  param_1[5] = lVar8;
  param_1[6] = lVar9;
  return;
}



/* Entry: 10174c1d4; end: 10174c277;  */

undefined8 FUN_10174c1d4(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_104001e28)(param_2,param_1);
  return param_2;
}



/* Entry: 10174c278; end: 10174c28b;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_10174c278(ulong param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (((param_3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
  if ((param_3 >> 0x3d & 1) == 0) {
    func_0x000107c61434();
    param_1 = param_2;
    param_2 = param_3;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return;
}



/* Entry: 10174c28c; end: 10174c2bb;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_10174c28c(ulong param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if ((param_3 >> 0x3d & 1) == 0) {
    func_0x000107c61434();
    param_1 = param_2;
    param_2 = param_3;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return;
}



/* Entry: 10174c2bc; end: 10174c2cf;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10174c2bc(ulong param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (((param_3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
  if ((param_3 >> 0x3d & 1) == 0) {
    func_0x000107c6142c();
    param_1 = param_2;
    param_2 = param_3;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10174c2d0; end: 10174c52b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10174c2d0(ulong param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if ((param_3 >> 0x3d & 1) == 0) {
    func_0x000107c6142c();
    param_1 = param_2;
    param_2 = param_3;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10174c52c; end: 10174c56f;  */

void FUN_10174c52c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc61d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b1278;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dc61d8 = puVar1;
  return;
}



/* Entry: 10174c570; end: 10174c57f;  */

void FUN_10174c570(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10174c580; end: 10174c593;  */

void FUN_10174c580(void)

{
  FUN_10174a10c();
  return;
}



/* Entry: 10174c594; end: 10174c597;  */

void FUN_10174c594(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010174b6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10174c598; end: 10174c5df;  */

void FUN_10174c598(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010021633c(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000103ff6424();
  *param_1 = param_2;
  return;
}



/* Entry: 10174c5e0; end: 10174c5f7;  */

void FUN_10174c5e0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010021633c(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000103ff6424();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10174c5f8; end: 10174c65f;  */

void FUN_10174c5f8(undefined8 param_1,code *param_2,undefined8 param_3,code *param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  code *pcVar1;
  
  pcVar1 = param_2;
  func_0x000107c61174();
  (*param_4)();
  (*param_2)();
                    /* WARNING: Could not recover jumptable at 0x00010174c65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,pcVar1,param_3);
  return;
}



/* Entry: 10174c660; end: 10174c6a3;  */

void FUN_10174c660(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10174c6a4; end: 10174c707;  */

void FUN_10174c6a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10174c708(param_2,param_3,param_4);
  return;
}



/* Entry: 10174c708; end: 10174c7ff;  */

void FUN_10174c708(undefined8 param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    (*param_2)();
  }
  else {
    puVar2 = &UNK_110402518;
    func_0x000107c613fc(&UNK_110402518,0x20,7);
    *(code **)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    pcStack_50 = FUN_10174c990;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100de6134;
    puStack_58 = &UNK_110402530;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c43ebc(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 10174c800; end: 10174c94b;  */

void FUN_10174c800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    (*param_5)();
  }
  else {
    func_0x000100de5f24(0);
    func_0x000100de5f68(param_1,param_2,param_3,param_4);
    func_0x000104060028(param_1,param_2,param_3,param_4);
    puVar2 = &UNK_1104024c8;
    func_0x000107c613fc(&UNK_1104024c8,0x20,7);
    *(code **)(puVar2 + 0x10) = param_5;
    *(undefined8 *)(puVar2 + 0x18) = param_6;
    pcStack_60 = FUN_10174c94c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100de6138;
    puStack_68 = &UNK_1104024e0;
    puStack_58 = puVar2;
    func_0x000107c60bc4(&puStack_80);
    puVar2 = puStack_58;
    func_0x000107c6157c(param_6);
    func_0x000107c61574(puVar2);
    func_0x000107c5dcf0(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10174c94c; end: 10174c973;  */

void FUN_10174c94c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10174c5f8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                &UNK_1040601d8,&SUB_100de5fcc);
  return;
}



/* Entry: 10174c974; end: 10174c98f;  */

void FUN_10174c974(long param_1,long param_2)

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



/* Entry: 10174c990; end: 10174c9b7;  */

void FUN_10174c990(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10174c5f8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                &UNK_104060938,&SUB_100dd0920);
  return;
}



/* Entry: 10174c9b8; end: 10174c9bf;  */

void FUN_10174c9b8(long param_1,long param_2)

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



/* Entry: 10174c9c0; end: 10174c9ff;  */

long FUN_10174c9c0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100e9ebd4(param_1,unaff_x20 + 0x10);
  return unaff_x20;
}



/* Entry: 10174ca00; end: 10174ca1b;  */

void FUN_10174ca00(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000100e9ebd4(param_1,unaff_x20 + 0x10);
  return;
}



/* Entry: 10174ca1c; end: 10174ca37;  */

void FUN_10174ca1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x160) = param_3;
  *(undefined8 *)(unaff_x22 + 0x168) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x150) = param_1;
  *(undefined8 *)(unaff_x22 + 0x158) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10174ca38,0,0);
  return;
}



/* Entry: 10174ca38; end: 10174cb8f;  */

/* WARNING: Removing unreachable block (ram,0x00010174cacc) */

void FUN_10174ca38(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar9 = *(undefined8 **)(unaff_x22 + 0x158);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x168) + 0x10,unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar3 = *(long *)(unaff_x22 + 0x110);
  lVar4 = unaff_x22 + 0xf0;
  func_0x0001000a8868(lVar4,uVar2);
  uVar7 = puVar9[4];
  uVar12 = *puVar9;
  uVar11 = puVar9[3];
  uVar10 = puVar9[2];
  *(undefined8 *)(unaff_x22 + 0x120) = puVar9[1];
  *(undefined8 *)(unaff_x22 + 0x118) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar7;
  func_0x00010174cca8();
  func_0x000100075890(unaff_x22 + 0x140,0,0,&UNK_110732ef8,PTR___s10Foundation4DataVN_110350ae0,
                      lVar4,&PTR_DAT_110789f58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x170) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x178) = uVar10;
  piVar8 = *(int **)(lVar3 + 8);
  iVar1 = *piVar8;
  plVar5 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x180) = plVar5;
  plVar6 = plVar5;
  func_0x00010174cce8();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10174cb90;
                    /* WARNING: Could not recover jumptable at 0x00010174cb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (unaff_x22 + 0x10,0xd000000000000043,0x800000010efba020,uVar7,uVar10,
             *(undefined8 *)(unaff_x22 + 0x160),&UNK_110732f80,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 10174cb90; end: 10174cbfb;  */

void FUN_10174cb90(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x188) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x180));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x170),*(undefined8 *)(lVar2 + 0x178));
    pcVar1 = FUN_10174cbfc;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x170),*(undefined8 *)(lVar2 + 0x178));
    pcVar1 = (code *)0x10174cc74;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10174cbfc; end: 10174cd27;  */

void FUN_10174cbfc(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000834e4(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  puVar1[3] = *(undefined8 *)(unaff_x22 + 0x98);
  puVar1[2] = uVar4;
  puVar1[5] = uVar6;
  puVar1[4] = uVar5;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
  puVar1[0xb] = *(undefined8 *)(unaff_x22 + 0xd8);
  puVar1[10] = uVar6;
  puVar1[0xd] = uVar8;
  puVar1[0xc] = uVar7;
  puVar1[7] = uVar3;
  puVar1[6] = uVar2;
  puVar1[9] = uVar5;
  puVar1[8] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010174cc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10174cd28; end: 10174cd43;  */

void FUN_10174cd28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1e0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10174cd44,0,0);
  return;
}



/* Entry: 10174cd44; end: 10174ceb3;  */

/* WARNING: Removing unreachable block (ram,0x00010174cdf0) */

void FUN_10174cd44(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x1d0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x1e0) + 0x10,unaff_x22 + 400);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a8);
  lVar3 = *(long *)(unaff_x22 + 0x1b0);
  lVar4 = unaff_x22 + 400;
  func_0x0001000a8868(lVar4,uVar2);
  uVar11 = *puVar8;
  uVar10 = puVar8[3];
  uVar9 = puVar8[2];
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  uVar9 = puVar8[8];
  uVar11 = puVar8[0xb];
  uVar10 = puVar8[10];
  uVar15 = puVar8[5];
  uVar14 = puVar8[4];
  uVar13 = puVar8[7];
  uVar12 = puVar8[6];
  *(undefined8 *)(unaff_x22 + 0x58) = puVar8[9];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar12;
  uVar9 = puVar8[0x10];
  uVar11 = puVar8[0x13];
  uVar10 = puVar8[0x12];
  uVar15 = puVar8[0xd];
  uVar14 = puVar8[0xc];
  uVar13 = puVar8[0xf];
  uVar12 = puVar8[0xe];
  *(undefined8 *)(unaff_x22 + 0x98) = puVar8[0x11];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar12;
  func_0x00010174cfcc();
  func_0x000100075890(unaff_x22 + 0x1b8,0,0,&UNK_1107330a0,PTR___s10Foundation4DataVN_110350ae0,
                      lVar4,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1c0);
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1f8) = plVar5;
  plVar6 = plVar5;
  func_0x00010174d00c();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10174ceb4;
                    /* WARNING: Could not recover jumptable at 0x00010174ceb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0xb0,0xd000000000000046,0x800000010efba070,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x1d8),&UNK_110733128,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 10174ceb4; end: 10174cf1f;  */

void FUN_10174ceb4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x200) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1f8));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1e8),*(undefined8 *)(lVar2 + 0x1f0));
    pcVar1 = FUN_10174cf20;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1e8),*(undefined8 *)(lVar2 + 0x1f0));
    pcVar1 = (code *)0x10174cf98;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10174cf20; end: 10174d08f;  */

void FUN_10174cf20(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x1c8);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x0001000834e4(unaff_x22 + 400);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x140);
  puVar1[3] = *(undefined8 *)(unaff_x22 + 0x138);
  puVar1[2] = uVar4;
  puVar1[5] = uVar6;
  puVar1[4] = uVar5;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x180);
  puVar1[0xb] = *(undefined8 *)(unaff_x22 + 0x178);
  puVar1[10] = uVar6;
  puVar1[0xd] = uVar8;
  puVar1[0xc] = uVar7;
  puVar1[7] = uVar3;
  puVar1[6] = uVar2;
  puVar1[9] = uVar5;
  puVar1[8] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010174cf94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10174d090; end: 10174d0db;  */

void FUN_10174d090(undefined8 param_1)

{
  func_0x0001000285a8(0x112db0c30,&UNK_10d95acb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10174d148,param_1);
  return;
}



/* Entry: 10174d0dc; end: 10174d147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174d0dc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10174d28c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112dc6370) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10174d148; end: 10174d14f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174d148(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10174d28c();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112dc6370) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10174d150; end: 10174d19b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174d150(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dc6370) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10174d19c; end: 10174d20b; -[_TtC27ComplianceEngineValdiPlugin22ComplianceEnginePlugin pushToValdiMarshaller:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10174d19c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x000107c2bc80(param_3,uStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uStack_38);
  return param_3;
}



/* Entry: 10174d20c; end: 10174d26b; -[_TtC27ComplianceEngineValdiPlugin22ComplianceEnginePlugin init] */

void FUN_10174d20c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComplianceEngineValdiPlugin.ComplianceEnginePlugin",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10174d238);
  (*pcVar1)();
}



/* Entry: 10174d26c; end: 10174d27b;  */

undefined1  [16] FUN_10174d26c(void)

{
  return ZEXT816(0x110402628);
}



/* Entry: 10174d27c; end: 10174d28b; -[_TtC27ComplianceEngineValdiPlugin22ComplianceEnginePlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174d27c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc6370));
  return;
}



/* Entry: 10174d28c; end: 10174d2ab;  */

void FUN_10174d28c(void)

{
  func_0x000107c61168(&PTR_PTR_1127e8858);
  return;
}



/* Entry: 10174d2ac; end: 10174d317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174d2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc63a0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112dc63a8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10174d318; end: 10174d403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174d318(undefined8 param_1,double param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dc63a0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112dc63a0))[1];
  FUN_10174dd64();
  bVar3 = false;
  if ((((ulong)param_2 < 0x8000000000000000 &&
        (long)ABS(param_2) + 0xfff0000000000000U >> 0x35 < 0x3ff ||
       (long)param_2 - 1U < 0xfffffffffffff) || ABS(param_2) == 0.0) &&
     (bVar3 = false, !NAN(param_2))) {
    bVar3 = param_2 < 9.223372036854776e+18;
  }
  if (bVar3) {
    if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10174d404);
      (*pcVar2)();
    }
    lVar5 = (long)param_2;
  }
  else {
    lVar5 = 0;
  }
  func_0x000107c614f0(uVar4);
  (**(code **)(lVar1 + 8))(param_3,lVar5,uVar4,lVar1);
  func_0x000107c61170(param_3);
  func_0x000107c610f8(PTR_PTR_1126a7aa0);
                    /* WARNING: Could not recover jumptable at 0x00010c00fa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10174d404; end: 10174d44f; -[_TtC27ComplianceEngineValdiPlugin29SCComplianceEngineServiceImpl getFlagWithFeature:context:] */

void FUN_10174d404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_3;
  FUN_10174d318(param_1,param_2);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10174d450; end: 10174d4b7; -[_TtC27ComplianceEngineValdiPlugin29SCComplianceEngineServiceImpl isRestrictedAppExperience] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10174d450(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4a348(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10174d4b8; end: 10174d62f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10174d4b8(undefined8 param_1,double param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  
  uVar7 = param_3;
  FUN_10174dd64();
  bVar3 = false;
  if ((((ulong)param_2 < 0x8000000000000000 &&
        (long)ABS(param_2) + 0xfff0000000000000U >> 0x35 < 0x3ff ||
       (long)param_2 - 1U < 0xfffffffffffff) || ABS(param_2) == 0.0) &&
     (bVar3 = false, !NAN(param_2))) {
    bVar3 = param_2 < 9.223372036854776e+18;
  }
  if (bVar3) {
    if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10174d630);
      (*pcVar2)();
    }
    lVar8 = (long)param_2;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = 0;
  FUN_10174de08();
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar1 = _DAT_112dc63a0;
  puVar5 = &UNK_110402648;
  func_0x000107c613fc(&UNK_110402648,0x38,7);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(puVar5 + 0x18) = ((undefined8 *)(unaff_x20 + lVar1))[1];
  *(undefined8 *)(puVar5 + 0x10) = uVar6;
  *(undefined8 *)(puVar5 + 0x20) = uVar7;
  *(long *)(puVar5 + 0x28) = lVar8;
  *(undefined8 *)(puVar5 + 0x30) = param_3;
  func_0x000107c615f0(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c615f0(param_3);
  uVar6 = 7;
  func_0x0001001ca524(7,0,0x5c,4,0,0,&UNK_10d986158,puVar5,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar5);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(lVar4 + _DAT_112dc63b0);
  *(undefined8 *)(lVar4 + _DAT_112dc63b0) = uVar6;
  func_0x000107c61574(uVar7);
  return lVar4;
}



/* Entry: 10174d630; end: 10174d6d7;  */

void FUN_10174d630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  lVar2 = 0x112dc5490;
  func_0x0001000285a8(0x112dc5490,&UNK_10d985250);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar1;
  lVar2 = 0x112dc5838;
  func_0x0001000285a8(0x112dc5838,&UNK_10d985418);
  *(long *)(unaff_x22 + 0x50) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10174d6d8,0,0);
  return;
}



/* Entry: 10174d6d8; end: 10174d7a3;  */

void FUN_10174d6d8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar1 = *(long *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar5 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c614f0(uVar6);
  (**(code **)(lVar5 + 0x10))(uVar3,uVar2,uVar4,uVar6,lVar5);
  func_0x000107c5fd34(uVar8,uVar9);
  (**(code **)(lVar1 + 8))(uVar3,uVar9);
  plVar7 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10174d7a4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar7,unaff_x22 + 0x78,*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Entry: 10174d7a4; end: 10174d7eb;  */

void FUN_10174d7a4(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10174d7ec,0,0);
  return;
}



/* Entry: 10174d7ec; end: 10174d8d3;  */

void FUN_10174d7ec(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if ((*(ushort *)(unaff_x22 + 0x78) & 0xff) == 2) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
    (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x50));
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010174d850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar2 = PTR_PTR_1126a7aa0;
  func_0x000107c610f8(PTR_PTR_1126a7aa0);
  func_0x000107c4676c();
  func_0x000107c4dc14(uVar4);
  func_0x000107c61170(puVar2);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10174d8d4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar3,(ushort *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Entry: 10174d8d4; end: 10174d91b;  */

void FUN_10174d8d4(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10174df04,0,0);
  return;
}



/* Entry: 10174d91c; end: 10174d98f; -[_TtC27ComplianceEngineValdiPlugin29SCComplianceEngineServiceImpl observeFlagWithFeature:context:listener:] */

void FUN_10174d91c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_3);
  uVar1 = param_5;
  FUN_10174d4b8(param_1,param_2,param_5);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10174d990; end: 10174d9ef; -[_TtC27ComplianceEngineValdiPlugin29SCComplianceEngineServiceImpl init] */

void FUN_10174d990(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComplianceEngineValdiPlugin.SCComplianceEngineServiceImpl",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10174d9bc);
  (*pcVar1)();
}



/* Entry: 10174d9f0; end: 10174da27; -[_TtC27ComplianceEngineValdiPlugin29SCComplianceEngineServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174d9f0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dc63a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc63a8));
  return;
}



/* Entry: 10174da28; end: 10174dad7;  */

/* WARNING: Possible PIC construction at 0x00010174dab0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174da28(void)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112dc63e8);
  func_0x000107c4b940(uVar3);
  bVar1 = *(byte *)(unaff_x20 + _DAT_112dc63e0);
  *(undefined1 *)(unaff_x20 + _DAT_112dc63e0) = 1;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dc63b0);
  func_0x000107c6157c(lVar2);
  func_0x000107c5d278(uVar3);
  if ((bVar1 & 1) == 0) {
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c6157c(lVar2);
    func_0x000107c5fd50();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar2);
  return;
}



/* Entry: 10174dad8; end: 10174daff; -[_TtC27ComplianceEngineValdiPluginP33_AD786B46C382E0B3841F390BFAD8DF6E12Subscription cancel] */

void FUN_10174dad8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10174da28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10174db00; end: 10174dbd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174db00(void)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112dc63e8;
  func_0x000107c4b940(*(undefined8 *)(unaff_x20 + _DAT_112dc63e8));
  bVar1 = *(byte *)(unaff_x20 + _DAT_112dc63e0);
  *(undefined1 *)(unaff_x20 + _DAT_112dc63e0) = 1;
  lVar3 = *(long *)(unaff_x20 + _DAT_112dc63b0);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c6157c(lVar3);
  func_0x000107c5d278(uVar4);
  if ((bVar1 & 1) == 0) {
    if (lVar3 == 0) goto LAB_10174dba8;
    func_0x000107c6157c(lVar3);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar3);
  }
  func_0x000107c61574(lVar3);
LAB_10174dba8:
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10174dbd4; end: 10174dbf7; -[_TtC27ComplianceEngineValdiPluginP33_AD786B46C382E0B3841F390BFAD8DF6E12Subscription dealloc] */

void FUN_10174dbd4(void)

{
  func_0x000107c61174();
  FUN_10174db00();
  return;
}



/* Entry: 10174dbf8; end: 10174dc2f; -[_TtC27ComplianceEngineValdiPluginP33_AD786B46C382E0B3841F390BFAD8DF6E12Subscription .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174dbf8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dc63b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc63e8));
  return;
}



/* Entry: 10174dc30; end: 10174dcab; -[_TtC27ComplianceEngineValdiPluginP33_AD786B46C382E0B3841F390BFAD8DF6E12Subscription init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174dc30(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112dc63b0) = 0;
  *(undefined1 *)(param_1 + _DAT_112dc63e0) = 0;
  lVar1 = _DAT_112dc63e8;
  puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10174dcac; end: 10174dd63; -[_TtC27ComplianceEngineValdiPluginP33_AD786B46C382E0B3841F390BFAD8DF6E12Subscription initWithObjectRegistry:storage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10174dcac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112dc63b0) = 0;
  *(undefined1 *)(param_1 + _DAT_112dc63e0) = 0;
  lVar1 = _DAT_112dc63e8;
  puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_initWithObjectRegistry_storage__1125e9c58,param_3,param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)plVar4;
}



/* Entry: 10174dd64; end: 10174de07;  */

void FUN_10174dd64(double param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = false;
  bVar3 = true;
  if (((ulong)param_1 < 0x8000000000000000 &&
       (long)ABS(param_1) + 0xfff0000000000000U >> 0x35 < 0x3ff ||
      (long)param_1 - 1U < 0xfffffffffffff) || ABS(param_1) == 0.0) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1)) {
      bVar2 = param_1 == 2147483647.0;
      bVar3 = 2147483647.0 <= param_1;
    }
  }
  if (!bVar3 || bVar2) {
    if (param_1 <= -2147483649.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10174de04);
      (*pcVar1)();
    }
    if (2147483648.0 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10174de08);
      (*pcVar1)();
    }
  }
  func_0x000107c610f8(PTR_PTR_1126b1278);
                    /* WARNING: Could not recover jumptable at 0x00010c01b1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10174de08; end: 10174de27;  */

void FUN_10174de08(void)

{
  func_0x000107c61168(&PTR_PTR_1127e89e0);
  return;
}



/* Entry: 10174de28; end: 10174dea7;  */

void FUN_10174de28(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10174dea8;
  plVar5[5] = lVar3;
  plVar5[6] = lVar7;
  plVar5[3] = lVar2;
  plVar5[4] = lVar1;
  plVar5[2] = lVar6;
  lVar6 = 0x112dc5490;
  func_0x0001000285a8(0x112dc5490,&UNK_10d985250);
  plVar5[7] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar5[8] = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[9] = uVar4;
  lVar6 = 0x112dc5838;
  func_0x0001000285a8(0x112dc5838,&UNK_10d985418);
  plVar5[10] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10174d6d8,0,0);
  return;
}



/* Entry: 10174dea8; end: 10174df03;  */

void FUN_10174dea8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010174dee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10174df04; end: 10174df07;  */

void FUN_10174df04(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if ((*(ushort *)(unaff_x22 + 0x78) & 0xff) == 2) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
    (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x50));
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010174d850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar2 = PTR_PTR_1126a7aa0;
  func_0x000107c610f8(PTR_PTR_1126a7aa0);
  func_0x000107c4676c();
  func_0x000107c4dc14(uVar4);
  func_0x000107c61170(puVar2);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10174d8d4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar3,(ushort *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Entry: 10174df08; end: 10174df9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174df08(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_40);
  lVar3 = 0;
  func_0x00010174dee4();
  lVar4 = lVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112dc63a0);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  *(undefined8 *)(lVar4 + _DAT_112dc63a8) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c6157c(param_3);
  plVar5 = &lStack_50;
  func_0x000107c61154(plVar5,puVar2);
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 10174df9c; end: 10174dfb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174df9c(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&uStack_40,*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = 0;
  func_0x00010174dee4();
  lVar5 = lVar4;
  func_0x000107c610f8();
  puVar2 = (undefined8 *)(lVar5 + _DAT_112dc63a0);
  puVar2[1] = uStack_38;
  *puVar2 = uStack_40;
  *(undefined8 *)(lVar5 + _DAT_112dc63a8) = uVar1;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(uVar1);
  plVar6 = &lStack_50;
  func_0x000107c61154(plVar6,puVar3);
  *param_1 = (long)plVar6;
  return;
}



/* Entry: 10174dfb4; end: 10174dffb;  */

void FUN_10174dfb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  func_0x000100591f50(param_1,param_2,param_3);
  return;
}



/* Entry: 10174dffc; end: 10174e00b; -[_TtC44ComplianceRestrictedAppExperienceServiceImpl40ComplianceRestrictedAppExperienceChecker didTransitionToRestricted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10174dffc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112dc6430);
}



/* Entry: 10174e00c; end: 10174e01b; -[_TtC44ComplianceRestrictedAppExperienceServiceImpl40ComplianceRestrictedAppExperienceChecker didTransitionFromRestricted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10174e00c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112dc6438);
}



/* Entry: 10174e01c; end: 10174e07b; -[_TtC44ComplianceRestrictedAppExperienceServiceImpl40ComplianceRestrictedAppExperienceChecker hasAcknowledgedRestrictedExperience] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10174e01c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112dc6448);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112dc6448))[1];
  func_0x000107c61174();
  FUN_10174e19c(uVar2,uVar1);
  func_0x000107c61170(param_1);
  return (uint)uVar2 & 1;
}



/* Entry: 10174e07c; end: 10174e0df; -[_TtC44ComplianceRestrictedAppExperienceServiceImpl40ComplianceRestrictedAppExperienceChecker setHasAcknowledgedRestrictedExperience:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174e07c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dc6448);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112dc6448))[1];
  func_0x000107c61174();
  FUN_10174e268(param_3,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


