/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b99570; end: 101b9a073;  */

void FUN_101b99570(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x22;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar15 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x370);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x340));
  func_0x000107c6142c(uVar15);
  func_0x000107c6142c(uVar14);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x3c8);
  lVar19 = *(long *)(unaff_x22 + 0x330);
  func_0x000107c614cc(uVar18,unaff_x22 + 600,unaff_x22 + 0x1d0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1e0);
  func_0x000107c60640();
  uVar15 = uVar10;
  func_0x000107c5cab0();
  func_0x000107c61180();
  if (lVar19 == 0) {
    lVar17 = 0;
    uVar15 = 0;
  }
  else {
    lVar17 = lVar19;
    func_0x000107c5faec();
    func_0x000107c61170(lVar19);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar22 = *(undefined8 *)(unaff_x22 + 800);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x280);
  puVar4 = &UNK_110450168;
  func_0x000107c613fc(&UNK_110450168,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,uVar23);
  puVar5 = &UNK_110450208;
  func_0x000107c613fc(&UNK_110450208,0x50,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = 0xd000000000000029;
  *(undefined8 *)(puVar5 + 0x20) = 0x800000010f001c40;
  puVar5[0x28] = 1;
  *(undefined8 *)(puVar5 + 0x30) = uVar14;
  *(undefined8 *)(puVar5 + 0x38) = uVar10;
  *(long *)(puVar5 + 0x40) = lVar17;
  *(undefined8 *)(puVar5 + 0x48) = uVar15;
  *(undefined8 *)(unaff_x22 + 0xd0) = 0x101b9d918;
  *(undefined **)(unaff_x22 + 0xd8) = puVar5;
  *(undefined **)(unaff_x22 + 0xb0) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0xb8) = 0x42000000;
  *(undefined **)(unaff_x22 + 0xc0) = &UNK_100288f10;
  *(undefined **)(unaff_x22 + 200) = &UNK_110450220;
  lVar19 = unaff_x22 + 0xb0;
  func_0x000107c60bc4(lVar19);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c61434(uVar15);
  func_0x000107c61434(uVar10);
  func_0x000107c61574(uVar14);
  func_0x000108ec0f10(uVar22,uVar20,lVar19);
  func_0x000107c60bd0(lVar19);
  func_0x000107c61170(uVar13);
  func_0x000107c6142c(uVar15);
  func_0x000107c6142c(uVar10);
  func_0x000107c614ac(uVar18);
  uVar16 = *(ulong *)(unaff_x22 + 0x338);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != *(ulong *)(unaff_x22 + 0x318)) {
    do {
      puVar1 = (ulong *)(unaff_x22 + 0x278);
      if (*(long *)(unaff_x22 + 0x310) != 0) {
        puVar1 = (ulong *)(unaff_x22 + 0x300);
      }
      uVar11 = *puVar1;
      if ((uVar11 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101b9a074);
          (*UNRECOVERED_JUMPTABLE)();
        }
        uVar6 = *(ulong *)(uVar11 + uVar16 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar16;
        FUN_101b9bcc0(uVar16,uVar11,&PTR_PTR_1126bf9a8,0x112d61d40);
      }
      *(ulong *)(unaff_x22 + 0x330) = uVar6;
      *(ulong *)(unaff_x22 + 0x338) = uVar16 + 1;
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101b9a070);
        (*UNRECOVERED_JUMPTABLE)();
      }
      uVar16 = uVar6;
      func_0x000107c3fd78();
      func_0x000107c61180();
      if (uVar16 == 0) {
LAB_101b997e8:
        func_0x000107c61170(uVar6);
      }
      else {
        lVar19 = *(long *)(unaff_x22 + 0x290);
        uVar7 = uVar16;
        func_0x000107c5faec();
        func_0x000107c61170(uVar16);
        if (*(long *)(lVar19 + 0x10) == 0) {
          func_0x000107c6142c(uVar11);
          goto LAB_101b997e8;
        }
        func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x290));
        uVar16 = uVar7;
        uVar12 = uVar11;
        func_0x000100029284();
        if ((uVar12 & 1) != 0) {
          lVar19 = *(long *)(unaff_x22 + 0x308);
          lVar17 = *(long *)(unaff_x22 + 0x290);
          lVar21 = *(long *)(*(long *)(lVar17 + 0x38) + uVar16 * 8);
          *(long *)(unaff_x22 + 0x340) = lVar21;
          func_0x000107c615f0(lVar21);
          func_0x000107c61574(lVar17);
          if (*(long *)(lVar19 + 0x10) != 0) {
            func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x308));
            uVar16 = uVar11;
            func_0x000100029284();
            if ((uVar16 & 1) != 0) {
              lVar19 = *(long *)(unaff_x22 + 0x308);
              lVar17 = *(long *)(*(long *)(lVar19 + 0x38) + uVar7 * 8);
              func_0x000107c61434(lVar17);
              func_0x000107c6142c(uVar11);
              func_0x000107c6142c(lVar19);
              *(long *)(unaff_x22 + 0x360) = lVar17;
              lVar19 = *(long *)(lVar17 + 0x10);
              *(long *)(unaff_x22 + 0x368) = lVar19;
              if (lVar19 == 0) {
                lVar17 = *(long *)(unaff_x22 + 0x330);
                func_0x000107c5cab0();
                func_0x000107c61180();
                if (lVar17 == 0) {
                  lVar21 = 0;
                  uVar16 = 0;
                }
                else {
                  lVar21 = lVar17;
                  func_0x000107c5faec();
                  func_0x000107c61170(lVar17);
                }
                uVar14 = *(undefined8 *)(unaff_x22 + 0x328);
                uVar15 = *(undefined8 *)(unaff_x22 + 800);
                uVar18 = *(undefined8 *)(unaff_x22 + 0x280);
                puVar5 = &UNK_110450168;
                func_0x000107c613fc(&UNK_110450168,0x18,7);
                func_0x000107c61644(puVar5 + 0x10,uVar18);
                puVar8 = &UNK_110450348;
                func_0x000107c613fc(&UNK_110450348,0x50,7);
                *(undefined **)(puVar8 + 0x10) = puVar5;
                *(undefined8 *)(puVar8 + 0x18) = 0xd000000000000014;
                *(undefined8 *)(puVar8 + 0x20) = 0x800000010f001c90;
                puVar8[0x28] = 1;
                *(undefined8 *)(puVar8 + 0x30) = 0;
                *(undefined8 *)(puVar8 + 0x38) = 0;
                *(long *)(puVar8 + 0x40) = lVar21;
                *(ulong *)(puVar8 + 0x48) = uVar16;
                *(undefined8 *)(unaff_x22 + 400) = 0x101b9d928;
                *(undefined **)(unaff_x22 + 0x198) = puVar8;
                *(undefined **)(unaff_x22 + 0x170) = PTR___NSConcreteStackBlock_11034bd00;
                *(undefined8 *)(unaff_x22 + 0x178) = 0x42000000;
                *(undefined **)(unaff_x22 + 0x180) = &UNK_100288f10;
                *(undefined **)(unaff_x22 + 0x188) = &UNK_110450360;
                lVar17 = unaff_x22 + 0x170;
                func_0x000107c60bc4(lVar17);
                uVar18 = *(undefined8 *)(unaff_x22 + 0x198);
                func_0x000107c61434(uVar16);
                func_0x000107c61574(uVar18);
                func_0x000108ec0f10(uVar15,uVar14,lVar17);
                func_0x000107c60bd0(lVar17);
                func_0x000107c6142c(uVar16);
              }
              lVar17 = *(long *)(unaff_x22 + 0x330);
              func_0x000107c42d70();
              func_0x000107c61180();
              if (lVar17 == 0) {
                *(undefined8 *)(unaff_x22 + 0x370) = 0;
              }
              else {
                uVar15 = *(undefined8 *)(unaff_x22 + 0x330);
                func_0x000107c61170();
                func_0x000107c42d70();
                func_0x000107c61180();
                uVar14 = uVar15;
                func_0x000107e6b314();
                func_0x000107c61180();
                func_0x000107c61170(uVar15);
                *(undefined8 *)(unaff_x22 + 0x370) = uVar14;
              }
              if (lVar19 != 0) {
                *(undefined **)(unaff_x22 + 0x388) = puVar4;
                *(undefined **)(unaff_x22 + 0x380) = puVar4;
                *(undefined8 *)(unaff_x22 + 0x378) = 0;
                lVar19 = *(long *)(unaff_x22 + 0x360);
                uVar14 = *(undefined8 *)(lVar19 + 0x20);
                *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar19 + 0x28);
                *(undefined8 *)(unaff_x22 + 0x10) = uVar14;
                uVar14 = *(undefined8 *)(lVar19 + 0x50);
                uVar18 = *(undefined8 *)(lVar19 + 0x68);
                uVar15 = *(undefined8 *)(lVar19 + 0x60);
                uVar22 = *(undefined8 *)(lVar19 + 0x38);
                uVar20 = *(undefined8 *)(lVar19 + 0x30);
                uVar13 = *(undefined8 *)(lVar19 + 0x48);
                uVar10 = *(undefined8 *)(lVar19 + 0x40);
                *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(lVar19 + 0x58);
                *(undefined8 *)(unaff_x22 + 0x40) = uVar14;
                *(undefined8 *)(unaff_x22 + 0x58) = uVar18;
                *(undefined8 *)(unaff_x22 + 0x50) = uVar15;
                *(undefined8 *)(unaff_x22 + 0x28) = uVar22;
                *(undefined8 *)(unaff_x22 + 0x20) = uVar20;
                *(undefined8 *)(unaff_x22 + 0x38) = uVar13;
                *(undefined8 *)(unaff_x22 + 0x30) = uVar10;
                plVar9 = (long *)(*(long *)(unaff_x22 + 0x280) + 0x48);
                func_0x0001000a8868(plVar9,*(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x60));
                lVar17 = *plVar9;
                FUN_101b9d4cc(unaff_x22 + 0x10,unaff_x22 + 0x60);
                plVar9 = (long *)0x1d0;
                func_0x000107c615b8();
                *(long **)(unaff_x22 + 0x390) = plVar9;
                *plVar9 = unaff_x22;
                plVar9[1] = (long)FUN_101b9695c;
                lVar19 = *(long *)(unaff_x22 + 0x340);
                plVar9[0x27] = *(long *)(unaff_x22 + 0x370);
                plVar9[0x28] = lVar17;
                plVar9[0x25] = lVar19;
                plVar9[0x26] = unaff_x22 + 0x10;
                UNRECOVERED_JUMPTABLE = FUN_101bad744;
                goto LAB_107c615e0;
              }
              *(undefined **)(unaff_x22 + 0x3a8) = puVar4;
              *(undefined **)(unaff_x22 + 0x3a0) = puVar4;
              lVar19 = *(long *)(unaff_x22 + 0x330);
              func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x360));
              *(undefined8 *)(unaff_x22 + 0x228) = 0;
              *(undefined8 *)(unaff_x22 + 0x230) = 0xe000000000000000;
              func_0x000107c602fc(0x13);
              func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x230));
              *(undefined8 *)(unaff_x22 + 0x218) = 0x206465646441;
              *(undefined8 *)(unaff_x22 + 0x220) = 0xe600000000000000;
              *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(puVar4 + 0x10);
              puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
              func_0x000107c6057c(PTR___sSiN_11034deb0,
                                  PTR___sSis23CustomStringConvertiblesWP_11034df00);
              func_0x000107c5fb78();
              func_0x000107c6142c(puVar5);
              uVar14 = 0xeb00000000736e6f;
              func_0x000107c5fb78(0x6974617265706f20);
              uVar18 = *(undefined8 *)(unaff_x22 + 0x218);
              uVar15 = *(undefined8 *)(unaff_x22 + 0x220);
              lVar17 = *(long *)(puVar4 + 0x10);
              func_0x000107c5cab0();
              func_0x000107c61180();
              if (lVar19 == 0) {
                lVar21 = 0;
                uVar14 = 0;
              }
              else {
                lVar21 = lVar19;
                func_0x000107c5faec();
                func_0x000107c61170(lVar19);
              }
              uVar10 = *(undefined8 *)(unaff_x22 + 0x328);
              uVar13 = *(undefined8 *)(unaff_x22 + 800);
              uVar20 = *(undefined8 *)(unaff_x22 + 0x280);
              puVar4 = &UNK_110450168;
              func_0x000107c613fc(&UNK_110450168,0x18,7);
              func_0x000107c61644(puVar4 + 0x10,uVar20);
              puVar5 = &UNK_1104502a8;
              func_0x000107c613fc(&UNK_1104502a8,0x50,7);
              *(undefined **)(puVar5 + 0x10) = puVar4;
              *(undefined8 *)(puVar5 + 0x18) = uVar18;
              *(undefined8 *)(puVar5 + 0x20) = uVar15;
              puVar5[0x28] = lVar17 == 0;
              *(undefined8 *)(puVar5 + 0x30) = 0;
              *(undefined8 *)(puVar5 + 0x38) = 0;
              *(long *)(puVar5 + 0x40) = lVar21;
              *(undefined8 *)(puVar5 + 0x48) = uVar14;
              *(undefined8 *)(unaff_x22 + 0x130) = 0x101b9d920;
              *(undefined **)(unaff_x22 + 0x138) = puVar5;
              *(undefined **)(unaff_x22 + 0x110) = PTR___NSConcreteStackBlock_11034bd00;
              *(undefined8 *)(unaff_x22 + 0x118) = 0x42000000;
              *(undefined **)(unaff_x22 + 0x120) = &UNK_100288f10;
              *(undefined **)(unaff_x22 + 0x128) = &UNK_1104502c0;
              lVar19 = unaff_x22 + 0x110;
              func_0x000107c60bc4(lVar19);
              uVar18 = *(undefined8 *)(unaff_x22 + 0x138);
              func_0x000107c61434(uVar14);
              func_0x000107c61434(uVar15);
              func_0x000107c61574(uVar18);
              func_0x000108ec0f10(uVar13,uVar10,lVar19);
              func_0x000107c60bd0(lVar19);
              func_0x000107c6142c(uVar14);
              func_0x000107c6142c(uVar15);
              puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
              lVar19 = *(long *)(unaff_x22 + 0x330);
              if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) == 0) {
                func_0x000107c61170();
                uVar15 = *(undefined8 *)(unaff_x22 + 0x3a8);
                uVar14 = *(undefined8 *)(unaff_x22 + 0x3a0);
                uVar18 = *(undefined8 *)(unaff_x22 + 0x370);
                func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x340));
                func_0x000107c6142c(uVar15);
                func_0x000107c6142c(uVar14);
                func_0x000107c61170(uVar18);
                goto LAB_101b997f0;
              }
              bVar3 = *(char *)(unaff_x22 + 0x3d0) == '\0';
              uVar14 = 0xe900000000000065;
              if (bVar3) {
                uVar14 = 0xed00006574616964;
              }
              uVar15 = 0x74616964656d6d69;
              if (bVar3) {
                uVar15 = 0x656d6d69206e6f6e;
              }
              *(undefined8 *)(unaff_x22 + 0x248) = 0;
              *(undefined8 *)(unaff_x22 + 0x250) = 0xe000000000000000;
              func_0x000107c602fc(0x10);
              func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x250));
              *(undefined8 *)(unaff_x22 + 0x238) = 0x656c756465686353;
              *(undefined8 *)(unaff_x22 + 0x240) = 0xea00000000002064;
              func_0x000107c5fb78(uVar15,uVar14);
              func_0x000107c6142c(uVar14);
              uVar14 = 0xe400000000000000;
              func_0x000107c5fb78(0x626f6a20);
              uVar18 = *(undefined8 *)(unaff_x22 + 0x238);
              uVar15 = *(undefined8 *)(unaff_x22 + 0x240);
              func_0x000107c5cab0();
              func_0x000107c61180();
              if (lVar19 == 0) {
                lVar17 = 0;
                uVar14 = 0;
              }
              else {
                lVar17 = lVar19;
                func_0x000107c5faec();
                func_0x000107c61170(lVar19);
              }
              uVar10 = *(undefined8 *)(unaff_x22 + 0x328);
              uVar13 = *(undefined8 *)(unaff_x22 + 800);
              lVar21 = *(long *)(unaff_x22 + 0x280);
              cVar2 = *(char *)(unaff_x22 + 0x3d0);
              puVar4 = &UNK_110450168;
              func_0x000107c613fc(&UNK_110450168,0x18,7);
              func_0x000107c61644(puVar4 + 0x10,lVar21);
              puVar5 = &UNK_1104502f8;
              func_0x000107c613fc(&UNK_1104502f8,0x50,7);
              *(undefined **)(puVar5 + 0x10) = puVar4;
              *(undefined8 *)(puVar5 + 0x18) = uVar18;
              *(undefined8 *)(puVar5 + 0x20) = uVar15;
              puVar5[0x28] = 0;
              *(undefined8 *)(puVar5 + 0x30) = 0;
              *(undefined8 *)(puVar5 + 0x38) = 0;
              *(long *)(puVar5 + 0x40) = lVar17;
              *(undefined8 *)(puVar5 + 0x48) = uVar14;
              *(undefined8 *)(unaff_x22 + 0x160) = 0x101b9d924;
              *(undefined **)(unaff_x22 + 0x168) = puVar5;
              *(undefined **)(unaff_x22 + 0x140) = PTR___NSConcreteStackBlock_11034bd00;
              *(undefined8 *)(unaff_x22 + 0x148) = 0x42000000;
              *(undefined **)(unaff_x22 + 0x150) = &UNK_100288f10;
              *(undefined **)(unaff_x22 + 0x158) = &UNK_110450310;
              lVar19 = unaff_x22 + 0x140;
              func_0x000107c60bc4(lVar19);
              uVar18 = *(undefined8 *)(unaff_x22 + 0x168);
              func_0x000107c61434(uVar14);
              func_0x000107c61434(uVar15);
              func_0x000107c61574(uVar18);
              func_0x000108ec0f10(uVar13,uVar10,lVar19);
              func_0x000107c60bd0(lVar19);
              func_0x000107c6142c(uVar14);
              func_0x000107c6142c(uVar15);
              plVar9 = (long *)(lVar21 + 0x48);
              func_0x0001000a8868(plVar9,*(undefined8 *)(lVar21 + 0x60));
              lVar19 = *plVar9;
              if (cVar2 == '\x01') {
                plVar9 = (long *)0xe0;
                func_0x000107c615b8();
                *(long **)(unaff_x22 + 0x3b0) = plVar9;
                *plVar9 = unaff_x22;
                plVar9[1] = (long)FUN_101b9800c;
                plVar9[0x15] = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
                plVar9[0x16] = lVar19;
                UNRECOVERED_JUMPTABLE = FUN_101bae06c;
                goto LAB_107c615e0;
              }
              plVar9 = (long *)0xd0;
              UNRECOVERED_JUMPTABLE = (code *)0x101bae62c;
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0x3c0) = plVar9;
              *plVar9 = unaff_x22;
              plVar9[1] = (long)FUN_101b99514;
              goto LAB_101b9978c;
            }
            func_0x000107c6142c(uVar11);
            uVar11 = *(ulong *)(unaff_x22 + 0x308);
          }
          lVar19 = *(long *)(unaff_x22 + 0x280);
          func_0x000107c6142c(uVar11);
          plVar9 = (long *)(lVar19 + 0x20);
          func_0x0001000a8868(plVar9,*(undefined8 *)(lVar19 + 0x38));
          lVar19 = *plVar9;
          plVar9 = (long *)0x550;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x348) = plVar9;
          *plVar9 = unaff_x22;
          plVar9[1] = (long)FUN_101b954b4;
          plVar9[99] = lVar19;
          *(undefined1 *)((long)plVar9 + 0x542) = 0;
          plVar9[0x62] = lVar21;
          plVar9[0x61] = uVar6;
          UNRECOVERED_JUMPTABLE = FUN_101b9e2f4;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
          return;
        }
        uVar14 = *(undefined8 *)(unaff_x22 + 0x290);
        func_0x000107c6142c(uVar11);
        func_0x000107c61170(uVar6);
        func_0x000107c61574(uVar14);
      }
LAB_101b997f0:
      uVar16 = *(ulong *)(unaff_x22 + 0x338);
    } while (uVar16 != *(ulong *)(unaff_x22 + 0x318));
  }
  lVar19 = *(long *)(unaff_x22 + 0x310);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x278);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x308));
  func_0x000107c6142c(uVar18);
  func_0x000107c61574(uVar15);
  if (lVar19 != 0) {
    uVar14 = uVar18;
  }
  func_0x000107c6142c(uVar14);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101b9978c:
                    /* WARNING: Could not recover jumptable at 0x000101b997ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101b9a074; end: 101b9a19f; -[_TtC35MemoriesFeaturedStorySnapGeneration34MemoriesFeaturedStorySnapGenerator rescheduleJobsWithCompletionHandler:] */

void FUN_101b9a074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_110450028;
  func_0x000107c613fc(&UNK_110450028,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_110450050;
  func_0x000107c613fc(&UNK_110450050,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d9dab68;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_110450078;
  func_0x000107c613fc(&UNK_110450078,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d9dab78;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c6157c(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10d9dab88,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 101b9a1a0; end: 101b9a2d3;  */

void FUN_101b9a1a0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101b9a1e0,0,0);
  return;
}



/* Entry: 101b9a2d4; end: 101b9a33b;  */

void FUN_101b9a2d4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  uVar2 = uVar3;
  func_0x000107c5ed2c(uVar3);
  func_0x000107c614ac(uVar3);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101b9a338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b9a33c; end: 101b9a39f;  */

void FUN_101b9a33c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101b9a3a0;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
  func_0x000107c6157c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101b9a1e0,0,0);
  return;
}



/* Entry: 101b9a3a0; end: 101b9a3db;  */

void FUN_101b9a3a0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b9a3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b9a3dc; end: 101b9a553;  */

undefined * FUN_101b9a3dc(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *unaff_x20;
  undefined1 *puStack_48;
  
  puVar1 = param_1;
  func_0x0001000d224c(&puStack_48);
  puVar5 = puStack_48;
  if (puStack_48 != (undefined1 *)0x0) {
    func_0x0001000d224c(&puStack_48);
    if (puStack_48 != (undefined1 *)0x0) {
      puVar2 = PTR_PTR_1126af4c0;
      func_0x000107c61168();
      func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
      puVar3 = puVar2;
      func_0x000107c432f4();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar3 != (undefined *)0x0) {
        uVar4 = 0x112d511e8;
        func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
        puVar2 = puVar3;
        func_0x000107c5fc54(puVar3,uVar4);
        func_0x000107c61170(puStack_48);
        func_0x000107c615e8(puVar5);
        func_0x000107c61170(puVar3);
        return puVar2;
      }
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,param_1,0,0);
      *param_1 = 0x2a;
      func_0x000107c61654();
      func_0x000107c615e8(puVar5);
      func_0x000107c61170(puStack_48);
      return puVar2;
    }
    func_0x000107c615e8();
    puVar1 = puVar5;
  }
  func_0x000101b9d5ac();
  func_0x000107c613f8(&UNK_1106c31f8,puVar1,0,0);
  *puVar1 = 0x2e;
  func_0x000107c61654();
  return unaff_x20;
}



/* Entry: 101b9a554; end: 101b9a60f;  */

undefined1 FUN_101b9a554(uint param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_78 [72];
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  uVar2 = (ulong)(param_1 & 0xff);
  func_0x000107c6068c(auStack_78,*(undefined8 *)(param_2 + 0x28));
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar1 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_2 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(param_2 + 0x30) + uVar2) == (param_1 & 0xff)) {
        return 1;
      }
      uVar2 = uVar2 + 1 & ~uVar1;
    } while ((*(ulong *)(param_2 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 101b9a610; end: 101b9a62b;  */

void FUN_101b9a610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b9a62c,0,0);
  return;
}



/* Entry: 101b9a62c; end: 101b9aac7;  */

void FUN_101b9a62c(void)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x22;
  int iVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 *puVar19;
  long lStack_68;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x68);
  func_0x000107e6408c();
  if (((uVar3 & 1) == 0) && (lVar12 = *(long *)(*(long *)(unaff_x22 + 0x70) + 0x48), lVar12 != 0)) {
    lVar15 = lVar12;
    func_0x000107c4d1e4();
    func_0x000107c61180();
    if (lVar15 != 0) {
      lVar18 = lVar15;
      func_0x000107c449a4();
      func_0x000107c61170(lVar15);
      if ((int)lVar18 != 0) {
        func_0x000107c4d1e4();
        func_0x000107c61180();
        if (lVar12 != 0) {
          lVar15 = lVar12;
          func_0x000107c4d1f0();
          func_0x000107c61180();
          func_0x000107c61170(lVar12);
          if (lVar15 != 0) {
            func_0x0001000d224c(unaff_x22 + 0x60);
            lVar18 = *(long *)(unaff_x22 + 0x60);
            uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
            if (lVar18 == 0) {
              func_0x000107c61170(lVar15);
              func_0x000107c61174(uVar5);
              lVar12 = *(long *)(unaff_x22 + 0x68);
            }
            else {
              lVar12 = lVar18;
              func_0x000107c5d61c();
              func_0x000107c61180();
              func_0x000107c61170(lVar15);
              func_0x000107c615e8(lVar18);
            }
            goto LAB_101b9a71c;
          }
        }
      }
    }
  }
  lVar12 = *(long *)(unaff_x22 + 0x68);
  func_0x000107c61174();
LAB_101b9a71c:
  *(long *)(unaff_x22 + 0x88) = lVar12;
  puVar4 = PTR_PTR_1126bf688;
  func_0x000107c61168();
  func_0x000107c4e974();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0x90) = puVar4;
  uVar5 = 0x64696c6176;
  if (puVar4 != (undefined1 *)0x0) {
    uVar5 = 0x64696c61766e69;
  }
  uVar17 = 0xe500000000000000;
  if (puVar4 != (undefined1 *)0x0) {
    uVar17 = 0xe700000000000000;
  }
  *(undefined8 *)(unaff_x22 + 0x38) = 1;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar17;
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar15 = *(long *)(unaff_x22 + 0x28);
  if (lVar15 == 0) {
    func_0x000107c6142c(uVar17);
    puVar16 = (undefined *)0x112e06c10;
    func_0x000101b9d8a0(unaff_x22 + 0x10,0x112e06c10,&UNK_10d9dabb0);
  }
  else {
    lVar18 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,lVar15);
    puVar16 = &UNK_110450630;
    (**(code **)(lVar18 + 8))(unaff_x22 + 0x38,&UNK_110450630,&PTR_DAT_1104503d8,lVar15,lVar18);
    func_0x000107c6142c(uVar17);
    func_0x0001000834e4(unaff_x22 + 0x10);
  }
  if (puVar4 != (undefined1 *)0x0) {
    iVar14 = (int)*(undefined8 *)(*(long *)(unaff_x22 + 0x80) + 0x70);
    func_0x000107c61174();
    puVar16 = (undefined *)0x800000010f001cf0;
    uVar5 = 0xd000000000000033;
    func_0x000107c5fadc(0xd000000000000033,0x800000010f001cf0);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar5);
    puVar6 = puVar4;
    func_0x000107c61170();
    if (iVar14 != 0) {
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,puVar6,0,0);
      *puVar6 = 0xf;
      func_0x000107c61654();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar12);
                    /* WARNING: Could not recover jumptable at 0x000101b9a8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  iVar14 = (int)*(undefined8 *)(unaff_x22 + 0x78);
  func_0x0001000d224c(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar15 = *(long *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  func_0x000107c3fba8();
  if (-1 < iVar14) {
    lVar18 = *(long *)(unaff_x22 + 0x68);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c490d4();
    *(undefined **)(unaff_x22 + 0xa0) = puVar4;
    func_0x000107e64248();
    func_0x000107c61180();
    if (lVar18 == 0) {
      lStack_68 = 0;
      puVar16 = (undefined *)0x0;
    }
    else {
      lStack_68 = lVar18;
      func_0x000107c5faec();
      func_0x000107c61170(lVar18);
    }
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar18 = *(long *)(unaff_x22 + 0x70);
    lVar8 = *(long *)(unaff_x22 + 0x78);
    puVar1 = *(undefined **)(lVar18 + 0x20);
    uVar17 = *(undefined8 *)(lVar18 + 0x28);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar1 != (undefined *)0x0) {
      puVar7 = puVar1;
    }
    uVar13 = *(undefined8 *)(lVar18 + 0x30);
    func_0x000103bd5d30(0);
    func_0x000107c610f8();
    func_0x000107c61434(uVar13);
    func_0x000107c61434(puVar1);
    func_0x000107c61174(puVar4);
    func_0x000103bd5a20(puVar7,puVar10,puVar4,0,0,lStack_68,puVar16,uVar17,uVar13);
    *(undefined **)(unaff_x22 + 0xa8) = puVar7;
    func_0x000107c42950();
    func_0x000107c61180();
    if (lVar8 != 0) {
      puVar19 = *(undefined8 **)(unaff_x22 + 0x70);
      func_0x000107c614f0(uVar5);
      lVar18 = lVar8;
      func_0x000107c5faec(lVar8);
      func_0x000107c61170(lVar8);
      *(undefined **)(unaff_x22 + 0xb0) = puVar10;
      uVar17 = *puVar19;
      *(undefined8 *)(unaff_x22 + 0xb8) = uVar17;
      uVar13 = puVar19[1];
      *(undefined8 *)(unaff_x22 + 0xc0) = uVar13;
      piVar11 = *(int **)(lVar15 + 0x30);
      iVar14 = *piVar11;
      plVar9 = (long *)(ulong)(uint)piVar11[1];
      func_0x000107c61174(puVar7);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 200) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_101b9aac8;
                    /* WARNING: Could not recover jumptable at 0x000101b9aaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar14 + (long)piVar11))
                (lVar12,lVar18,puVar10,puVar7,uVar17,uVar13,uVar5,lVar15);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b9aac8);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b9aac4);
  (*pcVar2)();
}



/* Entry: 101b9aac8; end: 101b9ab8b;  */

void FUN_101b9aac8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long unaff_x20;
  long *unaff_x22;
  long lVar7;
  long lVar8;
  
  lVar8 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar8 + 0xa8);
  uVar3 = *(undefined8 *)(lVar8 + 0xb0);
  lVar7 = *unaff_x22;
  *(long *)(lVar8 + 0xd0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar8 + 200));
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(uVar3);
  if (unaff_x20 == 0) {
    func_0x000107c61170(param_1);
    plVar5 = (long *)0x150;
    func_0x000107c615b8();
    *(long **)(lVar8 + 0xd8) = plVar5;
    *plVar5 = lVar7;
    plVar5[1] = (long)FUN_101b9ab8c;
    lVar7 = *(long *)(lVar8 + 0xb8);
    lVar2 = *(long *)(lVar8 + 0x80);
    lVar4 = *(long *)(lVar8 + 0x88);
    plVar5[0x26] = *(long *)(lVar8 + 0xc0);
    plVar5[0x27] = lVar2;
    plVar5[0x24] = lVar4;
    plVar5[0x25] = lVar7;
    pcVar6 = FUN_101b9acc8;
  }
  else {
    pcVar6 = FUN_101b9ac38;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar6,0,0);
  return;
}



/* Entry: 101b9ab8c; end: 101b9abd3;  */

void FUN_101b9ab8c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b9abd4,0,0);
  return;
}



/* Entry: 101b9abd4; end: 101b9ac37;  */

void FUN_101b9abd4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101b9ac34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b9ac38; end: 101b9ac9b;  */

void FUN_101b9ac38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101b9ac98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b9ac9c; end: 101b9acc7;  */

void FUN_101b9ac9c(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  return;
}



/* Entry: 101b9acc8; end: 101b9ae93;  */

void FUN_101b9acc8(void)

{
  undefined8 uVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long unaff_x22;
  
  iVar5 = (int)*(undefined8 *)(*(long *)(unaff_x22 + 0x138) + 0x70);
  uVar1 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f001d30);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  if (iVar5 != 0) {
    func_0x0001000d224c(unaff_x22 + 0x38);
    if (*(long *)(unaff_x22 + 0x50) != 0) {
      func_0x000100cc8260(unaff_x22 + 0x38,unaff_x22 + 0x10);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar4 = *(long *)(unaff_x22 + 0x30);
      func_0x0001000a8868(unaff_x22 + 0x10,uVar1);
      piVar3 = *(int **)(lVar4 + 0x18);
      iVar5 = *piVar3;
      plVar2 = (long *)(ulong)(uint)piVar3[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x140) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_101b9ae94;
                    /* WARNING: Could not recover jumptable at 0x000101b9add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar5 + (long)piVar3))
                (*(undefined8 *)(unaff_x22 + 0x120),
                 "claimLiveRenderingSnapMediaIfEnabled(snapDoc:snapId:)",0x35,0x8000000000000002,
                 0x1a3,*(undefined8 *)(unaff_x22 + 0x128),*(undefined8 *)(unaff_x22 + 0x130),uVar1,
                 lVar4);
      return;
    }
    func_0x000101b9d8a0(unaff_x22 + 0x38,0x112e06c90,&UNK_10d9dac60);
    *(undefined8 *)(unaff_x22 + 0xe0) = 0x5f72656d69616c63;
    *(undefined8 *)(unaff_x22 + 0xd8) = 1;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0xeb000000006c696e;
    func_0x0001000d224c(unaff_x22 + 0x60);
    lVar4 = *(long *)(unaff_x22 + 0x78);
    if (lVar4 == 0) {
      func_0x000101b9d8a0(unaff_x22 + 0x60,0x112e06c10,&UNK_10d9dabb0);
    }
    else {
      lVar6 = *(long *)(unaff_x22 + 0x80);
      func_0x0001000a8868(unaff_x22 + 0x60,lVar4);
      (**(code **)(lVar6 + 8))(unaff_x22 + 0xd8,&UNK_110450588,&PTR_DAT_110450418,lVar4,lVar6);
      func_0x0001000834e4(unaff_x22 + 0x60);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101b9ae90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b9ae94; end: 101b9aefb;  */

void FUN_101b9ae94(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x148) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x140));
  if (unaff_x20 == 0) {
    func_0x000107c61170(param_1);
    pcVar1 = FUN_101b9aefc;
  }
  else {
    pcVar1 = FUN_101b9afc8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101b9aefc; end: 101b9afc7;  */

void FUN_101b9aefc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x108) = 1;
  *(undefined8 *)(unaff_x22 + 0x110) = 0x64656d69616c63;
  *(undefined8 *)(unaff_x22 + 0x118) = 0xe700000000000000;
  func_0x0001000d224c(unaff_x22 + 0xb0);
  lVar1 = *(long *)(unaff_x22 + 200);
  if (lVar1 == 0) {
    func_0x000101b9d8a0(unaff_x22 + 0xb0,0x112e06c10,&UNK_10d9dabb0);
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0xd0);
    func_0x0001000a8868(unaff_x22 + 0xb0,lVar1);
    (**(code **)(lVar2 + 8))(unaff_x22 + 0x108,&UNK_110450588,&PTR_DAT_110450418,lVar1,lVar2);
    func_0x0001000834e4(unaff_x22 + 0xb0);
  }
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101b9afc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b9afc8; end: 101b9b0b3;  */

void FUN_101b9afc8(void)

{
  long lVar1;
  long unaff_x22;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = 0x61665f6d69616c63;
  *(undefined8 *)(unaff_x22 + 0xf0) = 1;
  lVar1 = unaff_x22 + 0x88;
  *(undefined8 *)(unaff_x22 + 0x100) = 0xec00000064656c69;
  func_0x0001000d224c(lVar1);
  lVar3 = *(long *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
  if (lVar3 == 0) {
    func_0x000100fee738(uVar2);
    func_0x000101b9d8a0(lVar1,0x112e06c10,&UNK_10d9dabb0);
  }
  else {
    lVar4 = *(long *)(unaff_x22 + 0xa8);
    func_0x0001000a8868(lVar1,lVar3);
    (**(code **)(lVar4 + 8))
              ((undefined8 *)(unaff_x22 + 0xf0),&UNK_110450588,&PTR_DAT_110450418,lVar3,lVar4);
    func_0x000100fee738(uVar2);
    func_0x0001000834e4(lVar1);
  }
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101b9b0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b9b0b4; end: 101b9b2c7;  */

void FUN_101b9b0b4(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,long param_9)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  if ((param_1 & 1) != 0) {
    func_0x000107c5fadc(param_3,param_4);
    uVar1 = *(undefined8 *)(param_2 + 0x90);
    if (param_7 == 0) {
      func_0x000107c61174(uVar1);
      param_6 = 0;
    }
    else {
      func_0x000107c61174(uVar1);
      func_0x000107c5fadc(param_6,param_7);
    }
    if (param_9 == 0) {
      param_8 = 0;
    }
    else {
      func_0x000107c5fadc(param_8,param_9);
    }
    func_0x000107e675d4(param_3,param_5 & 1,uVar1,param_6,param_8);
    func_0x000107c61574(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_8);
    return;
  }
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 101b9b2c8; end: 101b9b42b;  */

undefined8 FUN_101b9b2c8(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_a8 [72];
  
  if ((*(ulong *)(param_2 + 0x10) != 0) && (*(ulong *)(param_1 + 0x10) != 0)) {
    lVar8 = 0;
    lVar1 = param_1;
    if (*(ulong *)(param_1 + 0x10) <= *(ulong *)(param_2 + 0x10)) {
      lVar1 = param_2;
      param_2 = param_1;
    }
    uVar5 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar5 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(param_2 + 0x38);
    while( true ) {
      while (uVar7 = uVar9, uVar7 != 0) {
        uVar9 = uVar7 - 1 & uVar7;
        if (*(long *)(lVar1 + 0x10) != 0) {
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          bVar2 = *(byte *)(*(long *)(param_2 + 0x30) + LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) +
                           lVar8 * 0x40);
          uVar7 = (ulong)bVar2;
          func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar1 + 0x28));
          func_0x000107c60690();
          func_0x000107c606a8();
          uVar6 = -1L << ((ulong)*(byte *)(lVar1 + 0x20) & 0x3f);
          uVar7 = uVar7 & (uVar6 ^ 0xffffffffffffffff);
          if ((*(ulong *)(lVar1 + 0x38 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
            do {
              if (*(byte *)(*(long *)(lVar1 + 0x30) + uVar7) == bVar2) {
                return 0;
              }
              uVar7 = uVar7 + 1 & ~uVar6;
            } while ((*(ulong *)(lVar1 + 0x38 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0);
          }
        }
      }
      bVar4 = SCARRY8(lVar8,1);
      lVar8 = lVar8 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101b9b42c);
        (*pcVar3)();
      }
      if ((long)(uVar5 + 0x3f >> 6) <= lVar8) break;
      uVar9 = ((ulong *)(param_2 + 0x38))[lVar8];
    }
  }
  return 1;
}



/* Entry: 101b9b42c; end: 101b9b447;  */

void FUN_101b9b42c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b9b448,0,0);
  return;
}



/* Entry: 101b9b448; end: 101b9b4d7;  */

void FUN_101b9b448(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101b9b4d8;
                    /* WARNING: Could not recover jumptable at 0x000101b9b4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x48),uVar2,lVar3);
  return;
}



/* Entry: 101b9b4d8; end: 101b9b59b;  */

void FUN_101b9b4d8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    uVar1 = 0x101b9b534;
  }
  else {
    uVar1 = 0x101b9b568;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101b9b59c; end: 101b9b613;  */

void FUN_101b9b59c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101b9d934;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101b9b614; end: 101b9b63f;  */

void FUN_101b9b614(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b9b640; end: 101b9b6c3;  */

void FUN_101b9b640(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101b9d93c;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101b9b6c4; end: 101b9b703;  */

void FUN_101b9b6c4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b9b700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b9b704; end: 101b9b70b;  */

void FUN_101b9b704(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  func_0x000107c5f9dc(param_1,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  (**(code **)(lVar2 + 0x10))(lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b9b70c; end: 101b9b783;  */

void FUN_101b9b70c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101b9d860(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101b9b784; end: 101b9b86f;  */

void FUN_101b9b784(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101b9b870();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101b9b870; end: 101b9bacf;  */

undefined * FUN_101b9b870(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b9b9a0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112e06c98;
    func_0x0001000285a8(0x112e06c98,&UNK_10d9dac68);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e06ca0;
    func_0x0001000285a8(0x112e06ca0,&UNK_10d9dac70);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101b9bad0; end: 101b9bc1b;  */

undefined *
FUN_101b9bad0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b9bc1c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_5;
    FUN_101b9b70c(param_5,param_6,param_7,param_8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_101b9d860(0,param_5,param_6);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101b9bc1c; end: 101b9bcab;  */

undefined *
FUN_101b9bc1c(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_101b9b70c(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 101b9bcac; end: 101b9bcbf;  */

ulong FUN_101b9bcac(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b9bda4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b9bda8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126e0d80;
    func_0x000107c61168(PTR_PTR_1126e0d80);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126e0d80;
    func_0x000107c61168(PTR_PTR_1126e0d80);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101b9d860(0,0x112e06c70,&PTR_PTR_1126e0d80);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b9be7c);
  (*pcVar2)();
}



/* Entry: 101b9bcc0; end: 101b9be7b;  */

ulong FUN_101b9bcc0(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b9bda4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b9bda8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101b9d860(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b9be7c);
  (*pcVar2)();
}



/* Entry: 101b9be7c; end: 101b9beb7;  */

ulong FUN_101b9be7c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b9bda4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b9bda8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bf8d8;
    func_0x000107c61168(PTR_PTR_1126bf8d8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126bf8d8;
    func_0x000107c61168(PTR_PTR_1126bf8d8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101b9d860(0,0x112e06c40,&PTR_PTR_1126bf8d8);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b9be7c);
  (*pcVar2)();
}



/* Entry: 101b9beb8; end: 101b9bfcb;  */

undefined *
FUN_101b9beb8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b9bfcc);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 101b9bfcc; end: 101b9c0e7;  */

undefined * FUN_101b9bfcc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b9c0e8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112e06c38;
    func_0x0001000285a8(0x112e06c38,&UNK_10d9dac08);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x50) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110450768);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x50 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x50);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101b9c0e8; end: 101b9c22b;  */

undefined * FUN_101b9c0e8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b9c22c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112e06c78;
    func_0x0001000285a8(0x112e06c78,&UNK_10d9dac30);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e06c80;
    func_0x0001000285a8(0x112e06c80,&UNK_10d9dac38);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101b9c22c; end: 101b9c24f;  */

ulong FUN_101b9c22c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b9c3b0);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101b9bc1c(uVar2,uVar4,0x112e06c40,&PTR_PTR_1126bf8d8,0x112e06c50,&UNK_10d9dac10);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b9c3ac);
      (*pcVar1)();
    }
    FUN_101b9c3d4(0,uVar2,uVar3 + 0x20,param_4,0x112e06c40,&PTR_PTR_1126bf8d8);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101b9c250; end: 101b9c3af;  */

ulong FUN_101b9c250(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b9c3b0);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101b9bc1c(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b9c3ac);
      (*pcVar1)();
    }
    FUN_101b9c3d4(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101b9c3b0; end: 101b9c3d3;  */

ulong FUN_101b9c3b0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b9c3b0);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101b9bc1c(uVar2,uVar4,0x112e06c48,&PTR_PTR_1126bf7e8,0x112e06c58,&UNK_10d9dac18);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b9c3ac);
      (*pcVar1)();
    }
    FUN_101b9c3d4(0,uVar2,uVar3 + 0x20,param_4,0x112e06c48,&PTR_PTR_1126bf7e8);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101b9c3d4; end: 101b9c7bf;  */

long FUN_101b9c3d4(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101b9c4ec);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101b9c4f0);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_101b9d860(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_101b9d860(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b9c4e8);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101b9c7c0; end: 101b9ccef;  */

void FUN_101b9c7c0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e06c18;
  func_0x0001000285a8(0x112e06c18,&UNK_10d9dabf0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101b9ca28:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9ca58);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_101b9ca28;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9ca5c);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 101b9ccf0; end: 101b9ce63;  */

void FUN_101b9ccf0(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b9cdd8);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x000101b9ca5c(lVar6,param_4 & 1,0x112e06c20,&UNK_10d9dabf8);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b9cda0);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000101b9c660(0x112e06c20,&UNK_10d9dabf8);
    lVar6 = *unaff_x20;
    goto joined_r0x000101b9ce00;
  }
  lVar6 = *unaff_x20;
joined_r0x000101b9ce00:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b9ce64);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 101b9ce64; end: 101b9d1cb;  */

long FUN_101b9ce64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,long param_18,long param_19,long param_20,long param_21,
                  undefined4 param_22,undefined4 param_23,undefined8 param_24,undefined8 param_25,
                  undefined8 param_26)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long alStack_170 [4];
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  undefined1 auStack_e0 [24];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_f0 = param_16;
  uStack_e8 = param_17;
  uStack_f8 = param_15;
  uStack_110 = param_14;
  uStack_148 = param_10;
  uStack_150 = param_9;
  uStack_138 = param_11;
  alStack_170[1] = param_18;
  lVar2 = 0;
  uStack_130 = param_1;
  uStack_128 = param_2;
  uStack_120 = param_5;
  uStack_118 = param_6;
  uStack_108 = param_7;
  uStack_100 = param_8;
  func_0x000107c5f804();
  alStack_170[2] = *(long *)(lVar2 + -8);
  alStack_170[3] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_170[2] + 0x40));
  lVar7 = (long)alStack_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_78 = param_19;
  uStack_70 = param_24;
  func_0x0001000c5db4(auStack_90);
  (**(code **)(*(long *)(param_19 + -8) + 0x20))();
  lStack_a0 = param_21;
  uStack_98 = param_26;
  func_0x0001000c5db4(auStack_b8);
  (**(code **)(*(long *)(param_21 + -8) + 0x20))();
  lStack_c8 = param_20;
  uStack_c0 = param_25;
  func_0x0001000c5db4(auStack_e0);
  (**(code **)(*(long *)(param_20 + -8) + 0x20))();
  lVar3 = alStack_170[1];
  func_0x000107c613fc(alStack_170[1],0x118,7);
  lVar2 = lStack_78;
  func_0x0001000c6518(auStack_90,lStack_78);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar8 = (undefined8 *)(lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar8);
  lVar2 = lStack_a0;
  func_0x0001000c6518(auStack_b8,lStack_a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar10 = (undefined8 *)((long)puVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar10);
  uVar6 = *puVar8;
  uVar9 = *puVar10;
  uVar4 = 0;
  func_0x0001007a5a84();
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  *(undefined ***)(lVar3 + 0x40) = &PTR_DAT_110450650;
  *(undefined8 *)(lVar3 + 0x20) = uVar6;
  uVar4 = 0;
  func_0x0001007a58f8();
  lVar1 = alStack_170[3];
  lVar2 = alStack_170[2];
  *(undefined8 *)(lVar3 + 0x60) = uVar4;
  *(undefined ***)(lVar3 + 0x68) = &PTR_DAT_110450878;
  *(undefined8 *)(lVar3 + 0x48) = uVar9;
  (**(code **)(alStack_170[2] + 0x68))
            (lVar7,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO10backgroundyA2EmFWC_11034f7d0,
             alStack_170[3]);
  puVar5 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd000000000000043;
  func_0x000107c5fadc(0xd000000000000043,0x800000010f001dd0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar2 + 8))(lVar7,lVar1);
  *(undefined **)(lVar3 + 0x110) = puVar5;
  *(undefined8 *)(lVar3 + 0x10) = uStack_130;
  *(undefined8 *)(lVar3 + 0x18) = uStack_128;
  *(undefined8 *)(lVar3 + 0x70) = uStack_120;
  *(undefined8 *)(lVar3 + 0x78) = uStack_118;
  *(undefined8 *)(lVar3 + 0x80) = uStack_108;
  *(undefined8 *)(lVar3 + 0x88) = uStack_100;
  *(undefined8 *)(lVar3 + 0x98) = uStack_148;
  *(undefined8 *)(lVar3 + 0x90) = uStack_150;
  *(undefined8 *)(lVar3 + 0xa0) = uStack_138;
  func_0x000100cc8260(auStack_e0,lVar3 + 0xa8);
  *(undefined8 *)(lVar3 + 0xd0) = uStack_110;
  func_0x000100cc8260(uStack_f8,lVar3 + 0xd8);
  *(undefined8 *)(lVar3 + 0x100) = uStack_f0;
  *(undefined8 *)(lVar3 + 0x108) = uStack_e8;
  func_0x0001000834e4(auStack_b8);
  func_0x0001000834e4(auStack_90);
  return lVar3;
}



/* Entry: 101b9d1cc; end: 101b9d27f;  */

void FUN_101b9d1cc(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  long unaff_x20;
  undefined1 auStack_38 [8];
  
  if (param_1 >> 0x3e == 0) {
    uVar1 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar1 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar1 != 0) {
    iVar3 = (int)*(undefined8 *)(unaff_x20 + 0x70);
    uVar2 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010f001da0);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar2);
    if (iVar3 != 0) {
      func_0x0001000d224c(auStack_38);
    }
  }
  return;
}



/* Entry: 101b9d280; end: 101b9d2af;  */

void FUN_101b9d280(void)

{
  long unaff_x20;
  
  func_0x000107c5ac4c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101b9d2b0; end: 101b9d31b;  */

void FUN_101b9d2b0(void)

{
  undefined1 uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x40);
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101b9d940;
  lVar5 = *(long *)(unaff_x20 + 0x30);
  plVar2 = (long *)0xd0;
  func_0x000107c615b8();
  plVar4[2] = (long)plVar2;
  *plVar2 = (long)plVar4;
  plVar2[1] = (long)FUN_101b8eb0c;
  *(undefined1 *)(plVar2 + 0x18) = uVar1;
  plVar2[0xe] = lVar5;
  plVar2[0xf] = lVar6;
  lVar5 = 0;
  func_0x000107c5eec8();
  plVar2[0x10] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar2[0x11] = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x12] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b8ebac,0,0);
  return;
}



/* Entry: 101b9d31c; end: 101b9d363;  */

undefined8 FUN_101b9d31c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101b9d364; end: 101b9d3f3;  */

void FUN_101b9d364(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x40);
  lVar3 = *(long *)(unaff_x20 + 0x48);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x50);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x51);
  plVar7 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x101b9d944;
  *(undefined1 *)((long)plVar7 + 0x49) = uVar5;
  *(undefined1 *)(plVar7 + 9) = uVar4;
  plVar7[2] = lVar8;
  plVar7[3] = lVar1;
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar7[4] = lVar3;
  plVar7[5] = lVar2;
  plVar6 = (long *)0x2e0;
  func_0x000107c615b8();
  plVar7[6] = (long)plVar6;
  *plVar6 = (long)plVar7;
  plVar6[1] = (long)FUN_101b8f254;
  plVar6[0x3a] = lVar1;
  plVar6[0x3b] = lVar8;
  plVar6[0x39] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b8f398,0,0);
  return;
}



/* Entry: 101b9d3f4; end: 101b9d423;  */

void FUN_101b9d3f4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 101b9d424; end: 101b9d48f;  */

void FUN_101b9d424(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101b9d490;
  plVar3[8] = lVar2;
  plVar3[9] = lVar4;
  plVar3[7] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b9b448,0,0);
  return;
}



/* Entry: 101b9d490; end: 101b9d4cb;  */

void FUN_101b9d490(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b9d4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b9d4cc; end: 101b9d53b;  */

undefined8 FUN_101b9d4cc(undefined8 param_1,undefined8 param_2)

{
  FUN_101bacff8(param_2,param_1);
  return param_2;
}



/* Entry: 101b9d53c; end: 101b9d5eb;  */

void FUN_101b9d53c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b9d5ec; end: 101b9d85f;  */

void FUN_101b9d5ec(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  lVar11 = *param_3;
  func_0x000107c61434(uVar3);
  func_0x000107c615f0(uVar13);
  uVar5 = uVar2;
  uVar7 = uVar3;
  func_0x000100029284();
  lVar8 = *(long *)(lVar11 + 0x10);
  uVar9 = (ulong)~(uint)uVar7 & 1;
  lVar12 = lVar8 + uVar9;
  if (SCARRY8(lVar8,uVar9)) {
LAB_101b9d858:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101b9d85c);
    (*pcVar4)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar12) {
    FUN_101b9c7c0(lVar12,param_2 & 1);
    uVar5 = uVar2;
    uVar9 = uVar3;
    func_0x000100029284();
    if (((uint)uVar7 & 1) != ((uint)uVar9 & 1)) {
LAB_101b9d69c:
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b9d6ac);
      (*pcVar4)();
    }
  }
  else if ((param_2 & 1) == 0) {
    func_0x000101b9c4f0();
    lVar12 = *param_3;
    goto joined_r0x000101b9d6f4;
  }
  lVar12 = *param_3;
joined_r0x000101b9d6f4:
  if ((uVar7 & 1) == 0) {
    lVar8 = lVar12 + (uVar5 >> 6) * 8;
    *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar5 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar12 + 0x30) + uVar5 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8) = uVar13;
    if (SCARRY8(*(long *)(lVar12 + 0x10),1)) {
LAB_101b9d85c:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b9d860);
      (*pcVar4)();
    }
    *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
  }
  else {
    func_0x000107c6142c(uVar3);
    uVar6 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8);
    *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8) = uVar13;
    func_0x000107c615e8(uVar6);
  }
  if (lVar10 != 1) {
    lVar10 = lVar10 + -1;
    puVar14 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar2 = puVar14[-2];
      uVar3 = puVar14[-1];
      uVar13 = *puVar14;
      lVar11 = *param_3;
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar13);
      uVar5 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      lVar8 = *(long *)(lVar11 + 0x10);
      uVar9 = (ulong)~(uint)uVar7 & 1;
      lVar12 = lVar8 + uVar9;
      if (SCARRY8(lVar8,uVar9)) goto LAB_101b9d858;
      if (*(long *)(lVar11 + 0x18) < lVar12) {
        FUN_101b9c7c0(lVar12,1);
        uVar5 = uVar2;
        uVar9 = uVar3;
        func_0x000100029284();
        if (((uint)uVar7 & 1) != ((uint)uVar9 & 1)) goto LAB_101b9d69c;
      }
      lVar12 = *param_3;
      if ((uVar7 & 1) == 0) {
        lVar8 = lVar12 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar12 + 0x30) + uVar5 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8) = uVar13;
        if (SCARRY8(*(long *)(lVar12 + 0x10),1)) goto LAB_101b9d85c;
        *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar3);
        uVar6 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8);
        *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8) = uVar13;
        func_0x000107c615e8(uVar6);
      }
      puVar14 = puVar14 + 3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



/* Entry: 101b9d860; end: 101b9d8df;  */

void FUN_101b9d860(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101b9d8e0; end: 101b9d97b;  */

void FUN_101b9d8e0(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101b9d97c; end: 101b9d9f3;  */

void FUN_101b9d97c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100c8ff80();
  func_0x000107c613fc();
  *(undefined1 *)(lVar1 + 0x10) = 0;
  *(char **)(lVar1 + 0x18) = "memories_live_rendering";
  *(undefined8 *)(lVar1 + 0x20) = 0x17;
  *(undefined1 *)(lVar1 + 0x28) = 2;
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  *(undefined8 *)(lVar1 + 0x38) = param_3;
  *(undefined1 *)(lVar1 + 0x40) = 2;
  *(undefined **)(lVar1 + 0x48) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar1 + 0x50) = 10000;
  *param_4 = lVar1;
  return;
}



/* Entry: 101b9d9f4; end: 101b9da87;  */

void FUN_101b9d9f4(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  lVar2 = 0;
  func_0x000100c8ff80();
  func_0x000107c613fc();
  *(undefined1 *)(lVar2 + 0x10) = 1;
  *(char **)(lVar2 + 0x18) = "memories_live_rendering";
  *(undefined8 *)(lVar2 + 0x20) = 0x17;
  *(undefined1 *)(lVar2 + 0x28) = 2;
  *(char **)(lVar2 + 0x30) = "fast_path_save";
  *(undefined8 *)(lVar2 + 0x38) = 0xe;
  *(undefined1 *)(lVar2 + 0x40) = 2;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  *(undefined8 *)(lVar2 + 0x50) = 10000;
  lRam0000000112e06cc0 = lVar2;
  return;
}



/* Entry: 101b9da88; end: 101b9daa7;  */

void FUN_101b9da88(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  lVar2 = 0;
  func_0x000100c8ff80();
  func_0x000107c613fc();
  *(undefined1 *)(lVar2 + 0x10) = 0;
  *(char **)(lVar2 + 0x18) = "memories_live_rendering";
  *(undefined8 *)(lVar2 + 0x20) = 0x17;
  *(undefined1 *)(lVar2 + 0x28) = 2;
  *(char **)(lVar2 + 0x30) = "media_claim";
  *(undefined8 *)(lVar2 + 0x38) = 0xb;
  *(undefined1 *)(lVar2 + 0x40) = 2;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  *(undefined8 *)(lVar2 + 0x50) = 10000;
  lRam0000000112e06d10 = lVar2;
  return;
}



/* Entry: 101b9daa8; end: 101b9db3b;  */

void FUN_101b9daa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  lVar2 = 0;
  func_0x000100c8ff80();
  func_0x000107c613fc();
  *(undefined1 *)(lVar2 + 0x10) = 0;
  *(char **)(lVar2 + 0x18) = "memories_live_rendering";
  *(undefined8 *)(lVar2 + 0x20) = 0x17;
  *(undefined1 *)(lVar2 + 0x28) = 2;
  *(undefined8 *)(lVar2 + 0x30) = param_3;
  *(undefined8 *)(lVar2 + 0x38) = param_4;
  *(undefined1 *)(lVar2 + 0x40) = 2;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  *(undefined8 *)(lVar2 + 0x50) = 10000;
  *param_5 = lVar2;
  return;
}



/* Entry: 101b9db3c; end: 101b9db9f;  */

void FUN_101b9db3c(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  lVar2 = 0;
  func_0x000100c8ff80();
  func_0x000107c613fc();
  *(undefined1 *)(lVar2 + 0x10) = 0;
  *(char **)(lVar2 + 0x18) = "memories_live_rendering";
  *(undefined8 *)(lVar2 + 0x20) = 0x17;
  *(undefined1 *)(lVar2 + 0x28) = 2;
  *(char **)(lVar2 + 0x30) = "fast_path_snap_doc_validation";
  *(undefined8 *)(lVar2 + 0x38) = 0x1d;
  *(undefined1 *)(lVar2 + 0x40) = 2;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  *(undefined8 *)(lVar2 + 0x50) = 10000;
  lRam0000000112e06d70 = lVar2;
  return;
}



/* Entry: 101b9dba0; end: 101b9dbe3;  */

void FUN_101b9dba0(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    func_0x000107c61568(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101b9dbe4; end: 101b9dc4b;  */

long FUN_101b9dbe4(void)

{
  code *pcVar1;
  double *unaff_x20;
  double dVar2;
  
  dVar2 = *unaff_x20 * 1000.0;
  if (((0x7fffffffffffffff < (ulong)dVar2 || 0x3fe < (long)ABS(dVar2) + 0xfff0000000000000U >> 0x35)
      && 0xffffffffffffe < (long)dVar2 - 1U) && ABS(dVar2) != 0.0) {
    return -1;
  }
  if (9.223372036854776e+18 <= dVar2) {
    return 0x7fffffffffffffff;
  }
  dVar2 = (double)(long)dVar2;
  if (dVar2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b9dd48);
    (*pcVar1)();
  }
  if (dVar2 < 9.223372036854776e+18) {
    return (long)dVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b9dd4c);
  (*pcVar1)();
}



/* Entry: 101b9dc4c; end: 101b9dcaf;  */

long FUN_101b9dc4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  func_0x000107c61434(uVar2);
  return lVar3;
}



/* Entry: 101b9dcb0; end: 101b9dd5b;  */

long FUN_101b9dcb0(double param_1)

{
  code *pcVar1;
  double dVar2;
  
  param_1 = param_1 * 1000.0;
  if (((0x7fffffffffffffff < (ulong)param_1 ||
       0x3fe < (long)ABS(param_1) + 0xfff0000000000000U >> 0x35) &&
      0xffffffffffffe < (long)param_1 - 1U) && ABS(param_1) != 0.0) {
    return -1;
  }
  if (9.223372036854776e+18 <= param_1) {
    return 0x7fffffffffffffff;
  }
  dVar2 = (double)(long)param_1;
  if (dVar2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b9dd48);
    (*pcVar1)();
  }
  if (dVar2 < 9.223372036854776e+18) {
    return (long)dVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b9dd4c);
  (*pcVar1)();
}



/* Entry: 101b9dd5c; end: 101b9dddb;  */

undefined8 * FUN_101b9dd5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101b9dddc; end: 101b9de0b;  */

undefined1  [16] FUN_101b9dddc(void)

{
  return ZEXT816(0x110450508);
}



/* Entry: 101b9de0c; end: 101b9de53;  */

undefined8 * FUN_101b9de0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101b9de54; end: 101b9df67;  */

int FUN_101b9de54(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101b9df68; end: 101b9e013;  */

void FUN_101b9df68(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101b9e014; end: 101b9e2cb;  */

undefined1  [16] FUN_101b9e014(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  long lVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar4 = 0x6c696e;
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x9d);
  func_0x000107c5fb78(0xd00000000000001d,0x800000010f001f30);
  func_0x000107c5fb78(*unaff_x20,unaff_x20[1]);
  func_0x000107c5fb78(0x616e73202020200a,0xef203a6570795470);
  uStack_68 = CONCAT71(uStack_68._1_7_,*(undefined1 *)(unaff_x20 + 2));
  func_0x000107c603d0(&uStack_68,&uStack_60,&UNK_110450818,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0xd000000000000014,0x800000010f001f50);
  if (unaff_x20[4] == 0) {
    puVar5 = (undefined *)0xe300000000000000;
  }
  else {
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c5fc58(unaff_x20[4],PTR___sSSN_11034da80);
  }
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  func_0x000107c5fb78(0xd000000000000010,0x800000010f001f70);
  lVar3 = unaff_x20[6];
  if (lVar3 == 0) {
    lVar3 = -0x1d00000000000000;
    uVar6 = 0x6c696e;
  }
  else {
    uVar6 = unaff_x20[5];
  }
  func_0x000107c61434();
  func_0x000107c5fb78(uVar6,lVar3);
  func_0x000107c6142c(lVar3);
  func_0x000107c5fb78(0xd000000000000014,0x800000010f001f90);
  lVar3 = unaff_x20[8];
  if (lVar3 == 0) {
    lVar3 = -0x1d00000000000000;
  }
  else {
    uVar4 = unaff_x20[7];
  }
  func_0x000107c61434();
  func_0x000107c5fb78(uVar4,lVar3);
  func_0x000107c6142c(lVar3);
  func_0x000107c5fb78(0xd00000000000001b,0x800000010f001fb0);
  uStack_68 = unaff_x20[9];
  uVar4 = 0x112e06eb8;
  func_0x0001000285a8(0x112e06eb8,&UNK_10d9daec8);
  puVar2 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar5 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  func_0x000107c603d0(&uStack_68,&uStack_60,uVar4,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x616e73202020200a,0xee00203a636f4470);
  uStack_68 = unaff_x20[3];
  uVar4 = 0x112d62370;
  func_0x0001000285a8(0x112d62370,&UNK_10d9daed0);
  func_0x000107c603d0(&uStack_68,&uStack_60,uVar4,puVar5,puVar2);
  func_0x000107c5fb78(0x290a,0xe200000000000000);
  auVar1._8_8_ = uStack_58;
  auVar1._0_8_ = uStack_60;
  return auVar1;
}



/* Entry: 101b9e2cc; end: 101b9e2f3;  */

undefined1  [16] FUN_101b9e2cc(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  long lVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar4 = 0x6c696e;
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x9d);
  func_0x000107c5fb78(0xd00000000000001d,0x800000010f001f30);
  func_0x000107c5fb78(*unaff_x20,unaff_x20[1]);
  func_0x000107c5fb78(0x616e73202020200a,0xef203a6570795470);
  uStack_68 = CONCAT71(uStack_68._1_7_,*(undefined1 *)(unaff_x20 + 2));
  func_0x000107c603d0(&uStack_68,&uStack_60,&UNK_110450818,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0xd000000000000014,0x800000010f001f50);
  if (unaff_x20[4] == 0) {
    puVar5 = (undefined *)0xe300000000000000;
  }
  else {
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c5fc58(unaff_x20[4],PTR___sSSN_11034da80);
  }
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  func_0x000107c5fb78(0xd000000000000010,0x800000010f001f70);
  lVar3 = unaff_x20[6];
  if (lVar3 == 0) {
    lVar3 = -0x1d00000000000000;
    uVar6 = 0x6c696e;
  }
  else {
    uVar6 = unaff_x20[5];
  }
  func_0x000107c61434();
  func_0x000107c5fb78(uVar6,lVar3);
  func_0x000107c6142c(lVar3);
  func_0x000107c5fb78(0xd000000000000014,0x800000010f001f90);
  lVar3 = unaff_x20[8];
  if (lVar3 == 0) {
    lVar3 = -0x1d00000000000000;
  }
  else {
    uVar4 = unaff_x20[7];
  }
  func_0x000107c61434();
  func_0x000107c5fb78(uVar4,lVar3);
  func_0x000107c6142c(lVar3);
  func_0x000107c5fb78(0xd00000000000001b,0x800000010f001fb0);
  uStack_68 = unaff_x20[9];
  uVar4 = 0x112e06eb8;
  func_0x0001000285a8(0x112e06eb8,&UNK_10d9daec8);
  puVar2 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar5 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  func_0x000107c603d0(&uStack_68,&uStack_60,uVar4,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x616e73202020200a,0xee00203a636f4470);
  uStack_68 = unaff_x20[3];
  uVar4 = 0x112d62370;
  func_0x0001000285a8(0x112d62370,&UNK_10d9daed0);
  func_0x000107c603d0(&uStack_68,&uStack_60,uVar4,puVar5,puVar2);
  func_0x000107c5fb78(0x290a,0xe200000000000000);
  auVar1._8_8_ = uStack_58;
  auVar1._0_8_ = uStack_60;
  return auVar1;
}



/* Entry: 101b9e2f4; end: 101b9fa6f;  */

void FUN_101b9e2f4(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  long *plVar16;
  undefined *puVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int *piVar22;
  undefined1 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  long lVar26;
  undefined8 uVar27;
  undefined1 *puVar28;
  long unaff_x22;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined *puVar32;
  undefined8 uVar33;
  long lVar34;
  long lVar35;
  undefined *puVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  long *plStack_98;
  undefined1 *puStack_90;
  code *UNRECOVERED_JUMPTABLE_00;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar7 = *(ulong *)(unaff_x22 + 0x308);
  func_0x000107c3fd78();
  func_0x000107c61180();
  if (uVar7 == 0) {
    uVar12 = 0;
    puVar9 = (undefined *)0x0;
    puVar10 = param_2;
  }
  else {
    uVar12 = uVar7;
    func_0x000107c5faec();
    puVar10 = param_2;
    func_0x000107c61170(uVar7);
    puVar9 = param_2;
  }
  uVar7 = *(ulong *)(unaff_x22 + 0x310);
  func_0x000107c42c98();
  func_0x000107c61180();
  puVar36 = puVar9;
  if (uVar7 == 0) {
joined_r0x000101b9e3a8:
    puVar9 = puVar36;
    if (puVar9 == (undefined *)0x0) {
LAB_101b9e3f8:
      puVar9 = *(undefined **)(unaff_x22 + 0x308);
      func_0x000107c4455c();
      func_0x000107c61180();
      if (puVar9 == (undefined *)0x0) {
        uVar23 = 0x2d;
      }
      else {
        puVar10 = (undefined *)0x0;
        FUN_101bacea8(0,0x112e06c70,&PTR_PTR_1126e0d80);
        puVar36 = puVar9;
        func_0x000107c5fc54();
        *(undefined **)(unaff_x22 + 800) = puVar36;
        func_0x000107c61170(puVar9);
        if ((ulong)puVar36 >> 0x3e == 0) {
          puVar9 = *(undefined **)(((ulong)puVar36 & 0xffffffffffffff8) + 0x10);
          puVar17 = PTR___sypN_11034f1a8;
        }
        else {
          puVar9 = (undefined *)((ulong)puVar36 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar36) {
            puVar9 = puVar36;
          }
          func_0x000107c60480();
          puVar17 = PTR___sypN_11034f1a8;
        }
        PTR___sypN_11034f1a8 = puVar17;
        if (puVar9 != (undefined *)0x0) {
          uVar7 = 0;
          do {
            if (((ulong)puVar36 & 0xc000000000000001) == 0) {
              if (*(ulong *)(((ulong)puVar36 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9e890);
                (*pcVar5)();
              }
              uVar12 = *(ulong *)(puVar36 + uVar7 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar12 = uVar7;
              puVar10 = puVar36;
              FUN_101b9bcac();
            }
            puVar25 = (undefined *)(uVar7 + 1);
            if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9e88c);
              (*pcVar5)();
            }
            uVar8 = uVar12;
            func_0x000107c51fa0();
            func_0x000107c61180();
            if (uVar8 == 0) {
              bVar6 = true;
            }
            else {
              puVar10 = puVar17 + 8;
              uVar11 = uVar8;
              func_0x000107c5fc54();
              func_0x000107c61170(uVar8);
              lVar29 = *(long *)(uVar11 + 0x10);
              func_0x000107c6142c(uVar11);
              bVar6 = lVar29 == 0;
            }
            uVar8 = uVar12;
            func_0x000107c4c544();
            func_0x000107c61180();
            if (uVar8 == 0) {
              func_0x000107c61170(uVar12);
              bVar4 = bVar6;
            }
            else {
              puVar10 = puVar17 + 8;
              uVar11 = uVar8;
              func_0x000107c5fc54();
              func_0x000107c61170(uVar8);
              lVar29 = *(long *)(uVar11 + 0x10);
              func_0x000107c61170(uVar12);
              func_0x000107c6142c(uVar11);
              bVar4 = false;
              if (lVar29 == 0) {
                bVar4 = bVar6;
              }
            }
            if (!bVar4) {
              lVar29 = *(long *)(unaff_x22 + 0x310);
              func_0x000107c42950();
              func_0x000107c61180();
              if (lVar29 != 0) {
                lVar26 = lVar29;
                func_0x000107c5faec();
                puVar9 = puVar10;
                func_0x000107c61170(lVar29);
                *(long *)(unaff_x22 + 0x328) = lVar26;
                *(undefined **)(unaff_x22 + 0x330) = puVar10;
                func_0x0001000d224c(unaff_x22 + 0x2c8);
                *(long *)(unaff_x22 + 0x338) = *(long *)(unaff_x22 + 0x2c8);
                if (*(long *)(unaff_x22 + 0x2c8) != 0) {
                  if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
                    lVar29 = *(long *)(unaff_x22 + 0x308);
                    func_0x000107c42d70();
                    func_0x000107c61180();
                    if (lVar29 == 0) {
                      lVar29 = 0;
                    }
                    else {
                      lVar26 = lVar29;
                      func_0x000107c5faec();
                      func_0x000107c61170(lVar29);
                      func_0x000107c61434(puVar9);
                      func_0x000107c5fadc(lVar26,puVar9);
                      lVar29 = lVar26;
                      func_0x000107e6b314();
                      func_0x000107c61180();
                      func_0x000107c61170(lVar26);
                      func_0x000107c61430(puVar9,2);
                    }
                    *(long *)(unaff_x22 + 0x340) = lVar29;
                    func_0x0001000d224c(unaff_x22 + 0x1d0);
                    uVar24 = *(undefined8 *)(unaff_x22 + 0x1e8);
                    lVar29 = *(long *)(unaff_x22 + 0x1f0);
                    FUN_101bacf60(unaff_x22 + 0x1d0,uVar24);
                    piVar22 = *(int **)(lVar29 + 0x20);
                    iVar1 = *piVar22;
                    plVar16 = (long *)(ulong)(uint)piVar22[1];
                    func_0x000107c615b8();
                    *(long **)(unaff_x22 + 0x348) = plVar16;
                    *plVar16 = unaff_x22;
                    plVar16[1] = (long)FUN_101b9fa70;
                    /* WARNING: Could not recover jumptable at 0x000101b9e884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)((long)iVar1 + (long)piVar22))(uVar24,lVar29);
                    return;
                  }
                  *(undefined8 *)(unaff_x22 + 0x370) = 0;
                  *(undefined8 *)(unaff_x22 + 0x368) = 0;
                  *(undefined8 *)(unaff_x22 + 0x360) = 0;
                  puVar10 = PTR_PTR_1126af4d0;
                  func_0x000107c61168();
                  func_0x000107c430fc();
                  func_0x000107c61180();
                  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
                  if (puVar10 != (undefined *)0x0) {
                    puVar17 = puVar17 + 8;
                    puVar9 = puVar10;
                    func_0x000107c5fc54();
                    func_0x000107c61170(puVar10);
                    puVar10 = puVar9;
                    FUN_101baa320();
                    func_0x000107c6142c(puVar9);
                    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
                    if (puVar10 != (undefined *)0x0) {
                      puVar36 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
                      if ((ulong)puVar10 >> 0x3e == 0) {
                        puVar25 = *(undefined **)(puVar36 + 0x10);
                      }
                      else {
                        puVar25 = puVar10;
                        if (-1 < (long)puVar10) {
                          puVar25 = puVar36;
                        }
                        func_0x000107c60480();
                        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
                      }
                      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
                      if (puVar25 != (undefined *)0x0) {
                        uVar7 = 0;
                        do {
                          if (((ulong)puVar10 & 0xc000000000000001) == 0) {
                            if (*(ulong *)(puVar36 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
                              pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9e910);
                              (*pcVar5)();
                            }
                            uVar12 = *(ulong *)(puVar10 + uVar7 * 8 + 0x20);
                            func_0x000107c61174();
                          }
                          else {
                            uVar12 = uVar7;
                            puVar17 = puVar10;
                            FUN_101a3ee24();
                          }
                          if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
                            pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9e90c);
                            (*pcVar5)();
                          }
                          puVar32 = (undefined *)(uVar7 + 1);
                          func_0x000107c61174();
                          uVar8 = uVar12;
                          func_0x000107c5b2d0();
                          func_0x000107c61180();
                          if (uVar8 == 0) {
                            func_0x000107c61170(uVar12);
                            func_0x000107c61170(uVar12);
                          }
                          else {
                            uVar11 = uVar8;
                            func_0x000107c5faec();
                            puVar19 = puVar17;
                            func_0x000107c61170(uVar8);
                            func_0x000107c61170(uVar12);
                            func_0x000107c61170(uVar12);
                            puVar13 = puVar9;
                            func_0x000107c61558();
                            puVar14 = puVar9;
                            if (((ulong)puVar13 & 1) == 0) {
                              puVar19 = (undefined *)(*(long *)(puVar9 + 0x10) + 1);
                              puVar14 = (undefined *)0x0;
                              func_0x0001000d182c(0,puVar19,1,puVar9);
                            }
                            uVar12 = *(ulong *)(puVar14 + 0x10);
                            puVar13 = (undefined *)(uVar12 + 1);
                            puVar9 = puVar14;
                            if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar12) {
                              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
                              puVar19 = puVar13;
                              func_0x0001000d182c(puVar9,puVar13,1,puVar14);
                            }
                            *(undefined **)(puVar9 + 0x10) = puVar13;
                            *(ulong *)(puVar9 + uVar12 * 0x10 + 0x20) = uVar11;
                            *(undefined **)(puVar9 + uVar12 * 0x10 + 0x28) = puVar17;
                            puVar17 = puVar19;
                          }
                          uVar7 = uVar7 + 1;
                        } while (puVar32 != puVar25);
                      }
                      func_0x000107c6142c(puVar10);
                    }
                  }
                  lVar26 = *(long *)(unaff_x22 + 800);
                  bVar2 = *(byte *)(unaff_x22 + 0x542);
                  puVar10 = puVar9;
                  func_0x000100403a6c();
                  *(undefined **)(unaff_x22 + 0x378) = puVar10;
                  func_0x000107c6142c(puVar9);
                  lVar29 = lVar26;
                  FUN_101bac00c();
                  *(long *)(unaff_x22 + 0x380) = lVar29;
                  func_0x000107c6142c(lVar26);
                  puVar9 = PTR___swiftEmptySetSingleton_11034f1d8;
                  if ((bVar2 & 1) == 0) {
                    plVar16 = (long *)0xf0;
                    func_0x000107c615b8();
                    *(long **)(unaff_x22 + 0x388) = plVar16;
                    *plVar16 = unaff_x22;
                    plVar16[1] = (long)FUN_101ba0dcc;
                    lVar26 = *(long *)(unaff_x22 + 0x318);
                    plVar16[0x16] = lVar29;
                    plVar16[0x17] = lVar26;
                    pcVar5 = FUN_101baa46c;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)PTR__swift_task_switch_110350130)(pcVar5,0,0);
                    return;
                  }
                  lVar26 = *(long *)(unaff_x22 + 0x380);
                  uVar24 = *(undefined8 *)(unaff_x22 + 0x378);
                  lVar29 = lVar26;
                  func_0x000101bac174(lVar26,uVar24,PTR___swiftEmptySetSingleton_11034f1d8);
                  *(long *)(unaff_x22 + 0x3a0) = lVar29;
                  func_0x000107c6142c(puVar9);
                  func_0x000107c6142c(lVar26);
                  func_0x000107c6142c(uVar24);
                  lVar29 = *(long *)(lVar29 + 0x10);
                  *(long *)(unaff_x22 + 0x3a8) = lVar29;
                  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
                  if (lVar29 == 0) {
                    lVar26 = 0;
                    lVar29 = 0;
                    lVar30 = 0;
                    lVar31 = 0;
                    lVar35 = 0;
                    lVar34 = 0;
                  }
                  else {
                    lVar26 = 0;
                    lVar29 = 0;
                    uVar24 = 0;
                    uVar37 = 0;
                    uVar7 = 0;
                    do {
                      *(ulong *)(unaff_x22 + 0x3b0) = uVar7;
                      if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa24);
                        (*pcVar5)();
                      }
                      lVar30 = *(long *)(unaff_x22 + 0x3a0) + uVar7 * 0x20;
                      uVar7 = *(ulong *)(lVar30 + 0x20);
                      *(ulong *)(unaff_x22 + 0x3b8) = uVar7;
                      uVar27 = *(undefined8 *)(lVar30 + 0x28);
                      *(undefined8 *)(unaff_x22 + 0x3c0) = uVar27;
                      *(undefined8 *)(unaff_x22 + 0x3c8) = *(undefined8 *)(lVar30 + 0x30);
                      uVar33 = *(undefined8 *)(lVar30 + 0x38);
                      *(undefined8 *)(unaff_x22 + 0x3d0) = uVar33;
                      if (uVar7 >> 0x3e == 0) {
                        uVar12 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
                        *(ulong *)(unaff_x22 + 0x3d8) = uVar12;
                      }
                      else {
                        uVar12 = uVar7 & 0xffffffffffffff8;
                        if (0x7fffffffffffffff < uVar7) {
                          uVar12 = uVar7;
                        }
                        func_0x000107c60480();
                        *(ulong *)(unaff_x22 + 0x3d8) = uVar12;
                      }
                      if (uVar12 != 0) {
                        func_0x000107c61438(uVar7,2);
                        func_0x000107c61434(uVar27);
                        func_0x000107c61434(uVar33);
                        puVar28 = (undefined1 *)0x0;
                        do {
                          *(undefined **)(unaff_x22 + 0x400) = puVar9;
                          *(undefined8 *)(unaff_x22 + 0x3f8) = uVar37;
                          *(undefined8 *)(unaff_x22 + 0x3f0) = uVar24;
                          *(long *)(unaff_x22 + 1000) = lVar29;
                          *(long *)(unaff_x22 + 0x3e0) = lVar26;
                          uVar7 = *(ulong *)(unaff_x22 + 0x3b8);
                          if ((uVar7 & 0xc000000000000001) == 0) {
                            if (*(undefined1 **)((uVar7 & 0xffffffffffffff8) + 0x10) <= puVar28) {
                    /* WARNING: Does not return */
                              pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa08);
                              (*pcVar5)();
                            }
                            puVar18 = *(undefined1 **)(uVar7 + (long)puVar28 * 8 + 0x20);
                            func_0x000107c61174();
                          }
                          else {
                            puVar18 = puVar28;
                            func_0x000101b9be90();
                          }
                          *(undefined1 **)(unaff_x22 + 0x408) = puVar18;
                          *(undefined1 **)(unaff_x22 + 0x410) = puVar28 + 1;
                          if (SCARRY8((long)puVar28,1)) {
                    /* WARNING: Does not return */
                            pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa04);
                            (*pcVar5)();
                          }
                          if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
                            FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x1f8);
                            uVar37 = *(undefined8 *)(unaff_x22 + 0x210);
                            lVar29 = *(long *)(unaff_x22 + 0x218);
                            uVar24 = uVar37;
                            FUN_101bacf60(unaff_x22 + 0x1f8);
                            func_0x000107c4a77c();
                            func_0x000107c61180();
                            if (puVar18 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
                              pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa60);
                              (*pcVar5)();
                            }
                            puVar28 = puVar18;
                            func_0x000107c5faec();
                            func_0x000107c61170(puVar18);
                            *(undefined8 *)(unaff_x22 + 0x418) = uVar24;
                            piVar22 = *(int **)(lVar29 + 8);
                            plVar16 = (long *)(ulong)(uint)piVar22[1];
                            UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar22 + (long)piVar22);
                            func_0x000107c615b8();
                            *(long **)(unaff_x22 + 0x420) = plVar16;
                            pcVar5 = FUN_101ba1ed8;
                            goto LAB_101b9f0c8;
                          }
                          func_0x000107c51f9c();
                          func_0x000107c61180();
                          *(undefined1 **)(unaff_x22 + 0x430) = puVar18;
                          if (puVar18 == (undefined1 *)0x0) {
                            func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
                            puVar9 = *(undefined **)(unaff_x22 + 0x400);
                            uVar37 = *(undefined8 *)(unaff_x22 + 0x3f8);
                            uVar24 = *(undefined8 *)(unaff_x22 + 0x3f0);
                            lVar29 = *(long *)(unaff_x22 + 1000);
LAB_101b9eee0:
                            lVar26 = *(long *)(unaff_x22 + 0x3e0);
                          }
                          else {
                            puVar28 = puVar18;
                            func_0x000107c5b420();
                            if ((int)puVar28 != 4) {
                              if ((int)puVar28 != 6) {
                                func_0x000101b9d5ac();
                                puVar9 = &UNK_1106c31f8;
                                func_0x000107c613f8(&UNK_1106c31f8,puVar28,0,0);
                                *puVar28 = 0x37;
                                func_0x000107c61654();
                                func_0x000107c61170(puVar18);
                                lVar29 = *(long *)(unaff_x22 + 1000);
LAB_101b9eeb8:
                                uVar37 = *(undefined8 *)(unaff_x22 + 0x3f8);
                                if (*(char *)(unaff_x22 + 0x542) == '\x01') {
                                  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
                                  func_0x000107c614ac(puVar9);
                                  puVar9 = *(undefined **)(unaff_x22 + 0x400);
                                  uVar24 = *(undefined8 *)(unaff_x22 + 0x3f0);
                                  goto LAB_101b9eee0;
                                }
                                *(undefined8 *)(unaff_x22 + 0x4f8) = uVar37;
                                *(long *)(unaff_x22 + 0x4f0) = lVar29;
                                *(undefined **)(unaff_x22 + 0x4e8) = puVar9;
                                lVar29 = *(long *)(unaff_x22 + 0x408);
                                FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x220)
                                ;
                                uVar37 = *(undefined8 *)(unaff_x22 + 0x238);
                                lVar26 = *(long *)(unaff_x22 + 0x240);
                                uVar24 = uVar37;
                                FUN_101bacf60(unaff_x22 + 0x220);
                                func_0x000107c4a77c();
                                func_0x000107c61180();
                                if (lVar29 == 0) {
                    /* WARNING: Does not return */
                                  pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa64);
                                  (*pcVar5)();
                                }
                                lVar30 = lVar29;
                                func_0x000107c5faec();
                                func_0x000107c61170(lVar29);
                                *(undefined8 *)(unaff_x22 + 0x500) = uVar24;
                                func_0x000107c614cc(puVar9,unaff_x22 + 0x2d0,unaff_x22 + 0x298);
                                uVar27 = *(undefined8 *)(unaff_x22 + 0x2a0);
                                FUN_101da5a48(uVar27,*(undefined8 *)(unaff_x22 + 0x2a8));
                                piVar22 = *(int **)(lVar26 + 0x10);
                                plVar16 = (long *)(ulong)(uint)piVar22[1];
                                UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar22 + (long)piVar22);
                                func_0x000107c615b8();
                                *(long **)(unaff_x22 + 0x508) = plVar16;
                                *plVar16 = unaff_x22;
                                plVar16[1] = (long)FUN_101ba6b18;
                                uVar21 = *(undefined8 *)(unaff_x22 + 0x370);
                                uVar20 = *(undefined8 *)(unaff_x22 + 0x330);
                                uVar33 = *(undefined8 *)(unaff_x22 + 0x328);
                                goto LAB_101b9f1e4;
                              }
                              *(long *)(unaff_x22 + 0x438) = *(long *)(unaff_x22 + 0x3f8) + 1;
                              if (SCARRY8(*(long *)(unaff_x22 + 0x3f8),1)) {
                    /* WARNING: Does not return */
                                pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa50);
                                (*pcVar5)();
                              }
                              lVar29 = *(long *)(unaff_x22 + 0x408);
                              func_0x000107c4a77c();
                              func_0x000107c61180();
                              if (lVar29 == 0) {
                    /* WARNING: Does not return */
                                pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa68);
                                (*pcVar5)();
                              }
                              lVar26 = lVar29;
                              func_0x000107c5faec();
                              func_0x000107c61170(lVar29);
                              *(ulong *)(unaff_x22 + 0x440) = uVar7;
                              plVar16 = (long *)0x60;
                              func_0x000107c615b8();
                              *(long **)(unaff_x22 + 0x448) = plVar16;
                              *plVar16 = unaff_x22;
                              plVar16[1] = (long)FUN_101ba2f64;
                              lVar29 = *(long *)(unaff_x22 + 0x3d0);
                              plVar16[6] = *(long *)(unaff_x22 + 0x3c8);
                              plVar16[7] = lVar29;
                              plVar16[4] = lVar26;
                              plVar16[5] = uVar7;
                              plVar16[2] = unaff_x22 + 0x10;
                              plVar16[3] = (long)puVar18;
                              lVar29 = 0;
                              func_0x000107c5eea4();
                              plVar16[8] = lVar29;
                              lVar29 = *(long *)(lVar29 + -8);
                              plVar16[9] = lVar29;
                              uVar7 = *(long *)(lVar29 + 0x40) + 0xfU & 0xfffffffffffffff0;
                              func_0x000107c615b8();
                              plVar16[10] = uVar7;
                              pcVar5 = FUN_101bacab8;
                              goto LAB_107c615e0;
                            }
                            lVar29 = *(long *)(unaff_x22 + 1000) + 1;
                            if (SCARRY8(*(long *)(unaff_x22 + 1000),1)) {
                    /* WARNING: Does not return */
                              pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa0c);
                              (*pcVar5)();
                            }
                            lVar26 = *(long *)(unaff_x22 + 0x408);
                            func_0x000107c4a77c();
                            func_0x000107c61180();
                            if (lVar26 == 0) {
                    /* WARNING: Does not return */
                              pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa58);
                              (*pcVar5)();
                            }
                            lVar30 = lVar26;
                            func_0x000107c5faec();
                            func_0x000107c61170(lVar26);
                            puVar28 = puVar18;
                            func_0x000107c3fd58();
                            func_0x000107c61180();
                            if (puVar28 == (undefined1 *)0x0) {
                              func_0x000101b9d5ac();
                              puVar9 = &UNK_1106c31f8;
                              func_0x000107c613f8(&UNK_1106c31f8,puVar28,0,0);
                              *puVar28 = 0x3a;
                              func_0x000107c61654();
LAB_101b9eea8:
                              func_0x000107c6142c(uVar7);
                              func_0x000107c61170(puVar18);
                              goto LAB_101b9eeb8;
                            }
                            puVar15 = puVar28;
                            func_0x000107c5b67c();
                            func_0x000107c61180();
                            if (puVar15 == (undefined1 *)0x0) {
LAB_101b9ee3c:
                              func_0x000101b9d5ac();
                              puVar9 = &UNK_1106c31f8;
                              func_0x000107c613f8(&UNK_1106c31f8,puVar15,0,0);
                              *puVar15 = 0x3b;
                              func_0x000107c61654();
                              func_0x000107c61170(puVar28);
                              goto LAB_101b9eea8;
                            }
                            lStack_70 = 0;
                            plVar16 = &lStack_70;
                            func_0x000107c5fc50();
                            func_0x000107c61170();
                            lVar31 = lStack_70;
                            if (lStack_70 == 0) goto LAB_101b9ee3c;
                            puVar18 = puVar28;
                            func_0x000107c4b1dc();
                            func_0x000107c61180();
                            if (puVar18 == (undefined1 *)0x0) {
                              puStack_90 = (undefined1 *)0x0;
                              plVar16 = (long *)0x0;
                            }
                            else {
                              puStack_90 = puVar18;
                              func_0x000107c5faec();
                              func_0x000107c61170(puVar18);
                            }
                            lVar34 = *(long *)(unaff_x22 + 0x3e0);
                            uVar24 = *(undefined8 *)(unaff_x22 + 0x3d0);
                            puVar18 = puVar28;
                            func_0x000107c3fd50();
                            func_0x000107c61180();
                            func_0x000107c61170(puVar28);
                            lVar26 = lVar34 + 1;
                            func_0x000107c61434(uVar24);
                            if (SCARRY8(lVar34,1)) {
                    /* WARNING: Does not return */
                              pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa28);
                              (*pcVar5)();
                            }
                            uVar37 = *(undefined8 *)(unaff_x22 + 0x3f8);
                            uVar24 = *(undefined8 *)(unaff_x22 + 0x3f0);
                            uVar12 = *(ulong *)(unaff_x22 + 0x400);
                            *(long *)(unaff_x22 + 0x100) = lVar30;
                            *(ulong *)(unaff_x22 + 0x108) = uVar7;
                            *(undefined1 *)(unaff_x22 + 0x110) = 0;
                            *(undefined8 *)(unaff_x22 + 0x118) = 0;
                            *(long *)(unaff_x22 + 0x120) = lVar31;
                            *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x3d0);
                            *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x3c8);
                            *(undefined1 **)(unaff_x22 + 0x138) = puStack_90;
                            *(long **)(unaff_x22 + 0x140) = plVar16;
                            *(undefined1 **)(unaff_x22 + 0x148) = puVar18;
                            FUN_101b9d4cc(unaff_x22 + 0x100,unaff_x22 + 0x150);
                            func_0x000107c61558();
                            puVar9 = *(undefined **)(unaff_x22 + 0x400);
                            puVar10 = puVar9;
                            if ((uVar12 & 1) == 0) {
                              puVar10 = (undefined *)0x0;
                              FUN_101b9bfcc(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
                            }
                            uVar7 = *(ulong *)(puVar10 + 0x10);
                            puVar9 = puVar10;
                            if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar7) {
                              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
                              FUN_101b9bfcc(puVar9,uVar7 + 1,1,puVar10);
                            }
                            uVar27 = *(undefined8 *)(unaff_x22 + 0x430);
                            uVar33 = *(undefined8 *)(unaff_x22 + 0x408);
                            *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
                            uVar20 = *(undefined8 *)(unaff_x22 + 0x100);
                            *(undefined8 *)(puVar9 + uVar7 * 0x50 + 0x28) =
                                 *(undefined8 *)(unaff_x22 + 0x108);
                            *(undefined8 *)(puVar9 + uVar7 * 0x50 + 0x20) = uVar20;
                            uVar21 = *(undefined8 *)(unaff_x22 + 0x118);
                            uVar20 = *(undefined8 *)(unaff_x22 + 0x110);
                            uVar39 = *(undefined8 *)(unaff_x22 + 0x128);
                            uVar38 = *(undefined8 *)(unaff_x22 + 0x120);
                            uVar40 = *(undefined8 *)(unaff_x22 + 0x130);
                            uVar42 = *(undefined8 *)(unaff_x22 + 0x148);
                            uVar41 = *(undefined8 *)(unaff_x22 + 0x140);
                            *(undefined8 *)(puVar9 + uVar7 * 0x50 + 0x58) =
                                 *(undefined8 *)(unaff_x22 + 0x138);
                            *(undefined8 *)(puVar9 + uVar7 * 0x50 + 0x50) = uVar40;
                            *(undefined8 *)(puVar9 + uVar7 * 0x50 + 0x68) = uVar42;
                            *(undefined8 *)(puVar9 + uVar7 * 0x50 + 0x60) = uVar41;
                            *(undefined8 *)(puVar9 + uVar7 * 0x50 + 0x38) = uVar21;
                            *(undefined8 *)(puVar9 + uVar7 * 0x50 + 0x30) = uVar20;
                            *(undefined8 *)(puVar9 + uVar7 * 0x50 + 0x48) = uVar39;
                            *(undefined8 *)(puVar9 + uVar7 * 0x50 + 0x40) = uVar38;
                            func_0x000107c61170(uVar27);
                            func_0x000107c61170(uVar33);
                            func_0x000101b9d508(unaff_x22 + 0x100);
                          }
                          puVar28 = *(undefined1 **)(unaff_x22 + 0x410);
                        } while (puVar28 != *(undefined1 **)(unaff_x22 + 0x3d8));
                        uVar27 = *(undefined8 *)(unaff_x22 + 0x3d0);
                        uVar33 = *(undefined8 *)(unaff_x22 + 0x3c0);
                        func_0x000107c61430(*(undefined8 *)(unaff_x22 + 0x3b8),2);
                        func_0x000107c6142c(uVar33);
                        func_0x000107c6142c(uVar27);
                      }
                      *(undefined8 *)(unaff_x22 + 0x470) = uVar37;
                      *(undefined8 *)(unaff_x22 + 0x468) = uVar24;
                      *(long *)(unaff_x22 + 0x460) = lVar29;
                      *(long *)(unaff_x22 + 0x458) = lVar26;
                      uVar7 = *(long *)(unaff_x22 + 0x3b0) + 1;
                    } while (uVar7 != *(ulong *)(unaff_x22 + 0x3a8));
                    lVar26 = 0;
                    lVar29 = 0;
                    uVar7 = 0;
                    do {
                      *(ulong *)(unaff_x22 + 0x478) = uVar7;
                      if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa54);
                        (*pcVar5)();
                      }
                      lVar30 = *(long *)(unaff_x22 + 0x3a0) + uVar7 * 0x20;
                      uVar24 = *(undefined8 *)(lVar30 + 0x20);
                      *(undefined8 *)(unaff_x22 + 0x480) = uVar24;
                      uVar7 = *(ulong *)(lVar30 + 0x28);
                      *(ulong *)(unaff_x22 + 0x488) = uVar7;
                      *(undefined8 *)(unaff_x22 + 0x490) = *(undefined8 *)(lVar30 + 0x30);
                      uVar37 = *(undefined8 *)(lVar30 + 0x38);
                      *(undefined8 *)(unaff_x22 + 0x498) = uVar37;
                      if (uVar7 >> 0x3e == 0) {
                        uVar12 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
                      }
                      else {
                        uVar12 = uVar7 & 0xffffffffffffff8;
                        if (0x7fffffffffffffff < uVar7) {
                          uVar12 = uVar7;
                        }
                        func_0x000107c60480(uVar12);
                        func_0x000107c60480();
                      }
                      *(ulong *)(unaff_x22 + 0x4a0) = uVar12;
                      if (uVar12 != 0) {
                        func_0x000107c61438(uVar7,2);
                        func_0x000107c61434(uVar24);
                        func_0x000107c61434(uVar37);
                        puVar28 = (undefined1 *)0x0;
                        do {
                          *(undefined **)(unaff_x22 + 0x4b8) = puVar9;
                          *(long *)(unaff_x22 + 0x4b0) = lVar29;
                          *(long *)(unaff_x22 + 0x4a8) = lVar26;
                          uVar7 = *(ulong *)(unaff_x22 + 0x488);
                          if ((uVar7 & 0xc000000000000001) == 0) {
                            if (*(undefined1 **)((uVar7 & 0xffffffffffffff8) + 0x10) <= puVar28) {
                    /* WARNING: Does not return */
                              pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa48);
                              (*pcVar5)();
                            }
                            puVar18 = *(undefined1 **)(uVar7 + (long)puVar28 * 8 + 0x20);
                            func_0x000107c61174();
                          }
                          else {
                            puVar18 = puVar28;
                            func_0x000101b9be7c();
                          }
                          *(undefined1 **)(unaff_x22 + 0x4c0) = puVar18;
                          *(undefined1 **)(unaff_x22 + 0x4c8) = puVar28 + 1;
                          if (SCARRY8((long)puVar28,1)) {
                    /* WARNING: Does not return */
                            pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa2c);
                            (*pcVar5)();
                          }
                          if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
                            FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x248);
                            uVar37 = *(undefined8 *)(unaff_x22 + 0x260);
                            lVar29 = *(long *)(unaff_x22 + 0x268);
                            uVar24 = uVar37;
                            FUN_101bacf60(unaff_x22 + 0x248);
                            func_0x000107c4a77c();
                            func_0x000107c61180();
                            if (puVar18 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
                              pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa6c);
                              (*pcVar5)();
                            }
                            puVar28 = puVar18;
                            func_0x000107c5faec();
                            func_0x000107c61170(puVar18);
                            *(undefined8 *)(unaff_x22 + 0x4d0) = uVar24;
                            piVar22 = *(int **)(lVar29 + 8);
                            plVar16 = (long *)(ulong)(uint)piVar22[1];
                            UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar22 + (long)piVar22);
                            func_0x000107c615b8();
                            *(long **)(unaff_x22 + 0x4d8) = plVar16;
                            pcVar5 = FUN_101ba507c;
LAB_101b9f0c8:
                            *plVar16 = unaff_x22;
                            plVar16[1] = (long)pcVar5;
                    /* WARNING: Could not recover jumptable at 0x000101b9f114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            (*UNRECOVERED_JUMPTABLE_00)
                                      (*(undefined8 *)(unaff_x22 + 0x310),puVar28,uVar24,
                                       *(undefined8 *)(unaff_x22 + 0x360),
                                       *(undefined8 *)(unaff_x22 + 0x368),
                                       *(undefined8 *)(unaff_x22 + 0x370),uVar37,lVar29);
                            return;
                          }
                          lVar29 = *(long *)(unaff_x22 + 0x4b0) + 1;
                          if (SCARRY8(*(long *)(unaff_x22 + 0x4b0),1)) {
                    /* WARNING: Does not return */
                            pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa30);
                            (*pcVar5)();
                          }
                          puVar9 = PTR_PTR_1126bf7f0;
                          func_0x000107c610f8();
                          func_0x000107c453e4();
                          puVar10 = PTR_PTR_1126bf8d0;
                          func_0x000107c610f8(PTR_PTR_1126bf8d0);
                          func_0x000107c453e4();
                          func_0x000107c53574(puVar9);
                          func_0x000107c61170(puVar10);
                          puVar28 = puVar9;
                          func_0x000107c3fd58();
                          func_0x000107c61180();
                          if (puVar28 != (undefined1 *)0x0) {
                            uVar24 = *(undefined8 *)(unaff_x22 + 0x4c0);
                            func_0x000107c5b2dc(uVar24);
                            func_0x000107c61180();
                            func_0x000107c59588(puVar28);
                            func_0x000107c61170(uVar24);
                            func_0x000107c61170(puVar28);
                          }
                          puVar28 = puVar9;
                          func_0x000107c3fd58();
                          func_0x000107c61180();
                          if (puVar28 != (undefined1 *)0x0) {
                            uVar24 = *(undefined8 *)(unaff_x22 + 0x4c0);
                            func_0x000107c3fd54(uVar24);
                            func_0x000107c61180();
                            func_0x000107c55d70(puVar28);
                            func_0x000107c61170(uVar24);
                            func_0x000107c61170(puVar28);
                          }
                          lVar26 = *(long *)(unaff_x22 + 0x4c0);
                          func_0x000107c4a77c();
                          func_0x000107c61180();
                          if (lVar26 == 0) {
                    /* WARNING: Does not return */
                            pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa5c);
                            (*pcVar5)();
                          }
                          lVar30 = lVar26;
                          func_0x000107c5faec();
                          func_0x000107c61170(lVar26);
                          puVar28 = puVar9;
                          func_0x000107c3fd58();
                          func_0x000107c61180();
                          if (puVar28 == (undefined1 *)0x0) {
                            func_0x000101b9d5ac();
                            puVar10 = &UNK_1106c31f8;
                            func_0x000107c613f8(&UNK_1106c31f8,puVar28,0,0);
                            *puVar28 = 0x3a;
                            func_0x000107c61654();
LAB_101b9f724:
                            func_0x000107c6142c(uVar7);
                            bVar2 = *(byte *)(unaff_x22 + 0x542);
                            func_0x000107c61170(puVar9);
                            if ((bVar2 & 1) == 0) {
                              *(long *)(unaff_x22 + 0x520) = lVar29;
                              *(undefined **)(unaff_x22 + 0x518) = puVar10;
                              lVar29 = *(long *)(unaff_x22 + 0x4c0);
                              FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x270);
                              uVar37 = *(undefined8 *)(unaff_x22 + 0x288);
                              lVar26 = *(long *)(unaff_x22 + 0x290);
                              uVar24 = uVar37;
                              FUN_101bacf60(unaff_x22 + 0x270);
                              func_0x000107c4a77c();
                              func_0x000107c61180();
                              if (lVar29 == 0) {
                    /* WARNING: Does not return */
                                pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa70);
                                (*pcVar5)();
                              }
                              lVar30 = lVar29;
                              func_0x000107c5faec();
                              func_0x000107c61170(lVar29);
                              *(undefined8 *)(unaff_x22 + 0x528) = uVar24;
                              func_0x000107c614cc(puVar10,unaff_x22 + 0x2e0,unaff_x22 + 0x2b0);
                              uVar27 = *(undefined8 *)(unaff_x22 + 0x2b8);
                              FUN_101da5a48(uVar27,*(undefined8 *)(unaff_x22 + 0x2c0));
                              piVar22 = *(int **)(lVar26 + 0x10);
                              plVar16 = (long *)(ulong)(uint)piVar22[1];
                              UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar22 + (long)piVar22);
                              func_0x000107c615b8();
                              *(long **)(unaff_x22 + 0x530) = plVar16;
                              *plVar16 = unaff_x22;
                              plVar16[1] = (long)FUN_101ba8dec;
                              uVar21 = *(undefined8 *)(unaff_x22 + 0x370);
                              uVar20 = *(undefined8 *)(unaff_x22 + 0x330);
                              uVar33 = *(undefined8 *)(unaff_x22 + 0x328);
LAB_101b9f1e4:
                    /* WARNING: Could not recover jumptable at 0x000101b9f214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              (*UNRECOVERED_JUMPTABLE_00)
                                        (lVar30,uVar24,uVar33,uVar20,uVar27,uVar21,uVar37,lVar26);
                              return;
                            }
                            func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x4c0));
                            func_0x000107c614ac(puVar10);
                            puVar9 = *(undefined **)(unaff_x22 + 0x4b8);
                            lVar26 = *(long *)(unaff_x22 + 0x4a8);
                          }
                          else {
                            puVar18 = puVar28;
                            func_0x000107c5b67c();
                            func_0x000107c61180();
                            if (puVar18 == (undefined1 *)0x0) {
LAB_101b9f6b8:
                              func_0x000101b9d5ac();
                              puVar10 = &UNK_1106c31f8;
                              func_0x000107c613f8(&UNK_1106c31f8,puVar18,0,0);
                              *puVar18 = 0x3b;
                              func_0x000107c61654();
                              func_0x000107c61170(puVar28);
                              goto LAB_101b9f724;
                            }
                            lStack_70 = 0;
                            plStack_98 = &lStack_70;
                            func_0x000107c5fc50();
                            func_0x000107c61170();
                            lVar26 = lStack_70;
                            if (lStack_70 == 0) goto LAB_101b9f6b8;
                            puVar18 = puVar28;
                            func_0x000107c4b1dc();
                            func_0x000107c61180();
                            if (puVar18 == (undefined1 *)0x0) {
                              UNRECOVERED_JUMPTABLE_00 = (code *)0x0;
                              plStack_98 = (long *)0x0;
                            }
                            else {
                              UNRECOVERED_JUMPTABLE_00 = (code *)puVar18;
                              func_0x000107c5faec();
                              func_0x000107c61170(puVar18);
                            }
                            uVar12 = *(ulong *)(unaff_x22 + 0x4b8);
                            uVar24 = *(undefined8 *)(unaff_x22 + 0x498);
                            uVar37 = *(undefined8 *)(unaff_x22 + 0x490);
                            puVar18 = puVar28;
                            func_0x000107c3fd50();
                            func_0x000107c61180();
                            func_0x000107c61170(puVar28);
                            *(long *)(unaff_x22 + 0x60) = lVar30;
                            *(ulong *)(unaff_x22 + 0x68) = uVar7;
                            *(undefined1 *)(unaff_x22 + 0x70) = 0;
                            *(undefined8 *)(unaff_x22 + 0x78) = 0;
                            *(long *)(unaff_x22 + 0x80) = lVar26;
                            *(undefined8 *)(unaff_x22 + 0x88) = uVar37;
                            *(undefined8 *)(unaff_x22 + 0x90) = uVar24;
                            *(code **)(unaff_x22 + 0x98) = UNRECOVERED_JUMPTABLE_00;
                            *(long **)(unaff_x22 + 0xa0) = plStack_98;
                            *(undefined1 **)(unaff_x22 + 0xa8) = puVar18;
                            func_0x000107c61434(uVar24);
                            func_0x000107c61170(puVar9);
                            FUN_101b9d4cc(unaff_x22 + 0x60,unaff_x22 + 0xb0);
                            func_0x000107c61558();
                            puVar9 = *(undefined **)(unaff_x22 + 0x4b8);
                            puVar10 = puVar9;
                            if ((uVar12 & 1) == 0) {
                              puVar10 = (undefined *)0x0;
                              FUN_101b9bfcc(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
                            }
                            uVar7 = *(ulong *)(puVar10 + 0x10);
                            puVar9 = puVar10;
                            if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar7) {
                              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
                              FUN_101b9bfcc(puVar9,uVar7 + 1,1,puVar10);
                            }
                            uVar24 = *(undefined8 *)(unaff_x22 + 0x4c0);
                            lVar30 = *(long *)(unaff_x22 + 0x4a8);
                            *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
                            uVar37 = *(undefined8 *)(unaff_x22 + 0x60);
                            *(undefined8 *)(puVar9 + uVar7 * 0x50 + 0x28) =
                                 *(undefined8 *)(unaff_x22 + 0x68);
                            *(undefined8 *)(puVar9 + uVar7 * 0x50 + 0x20) = uVar37;
                            uVar27 = *(undefined8 *)(unaff_x22 + 0x78);
                            uVar37 = *(undefined8 *)(unaff_x22 + 0x70);
                            uVar20 = *(undefined8 *)(unaff_x22 + 0x88);
                            uVar33 = *(undefined8 *)(unaff_x22 + 0x80);
                            uVar21 = *(undefined8 *)(unaff_x22 + 0x90);
                            uVar39 = *(undefined8 *)(unaff_x22 + 0xa8);
                            uVar38 = *(undefined8 *)(unaff_x22 + 0xa0);
                            *(undefined8 *)(puVar9 + uVar7 * 0x50 + 0x58) =
                                 *(undefined8 *)(unaff_x22 + 0x98);
                            *(undefined8 *)(puVar9 + uVar7 * 0x50 + 0x50) = uVar21;
                            *(undefined8 *)(puVar9 + uVar7 * 0x50 + 0x68) = uVar39;
                            *(undefined8 *)(puVar9 + uVar7 * 0x50 + 0x60) = uVar38;
                            *(undefined8 *)(puVar9 + uVar7 * 0x50 + 0x38) = uVar27;
                            *(undefined8 *)(puVar9 + uVar7 * 0x50 + 0x30) = uVar37;
                            *(undefined8 *)(puVar9 + uVar7 * 0x50 + 0x48) = uVar20;
                            *(undefined8 *)(puVar9 + uVar7 * 0x50 + 0x40) = uVar33;
                            func_0x000107c61170(uVar24);
                            func_0x000101b9d508(unaff_x22 + 0x60);
                            lVar26 = lVar30 + 1;
                            if (SCARRY8(lVar30,1)) {
                    /* WARNING: Does not return */
                              pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa4c);
                              (*pcVar5)();
                            }
                          }
                          puVar28 = *(undefined1 **)(unaff_x22 + 0x4c8);
                        } while (puVar28 != *(undefined1 **)(unaff_x22 + 0x4a0));
                        uVar24 = *(undefined8 *)(unaff_x22 + 0x498);
                        uVar37 = *(undefined8 *)(unaff_x22 + 0x480);
                        func_0x000107c61430(*(undefined8 *)(unaff_x22 + 0x488),2);
                        func_0x000107c6142c(uVar37);
                        func_0x000107c6142c(uVar24);
                      }
                      uVar7 = *(long *)(unaff_x22 + 0x478) + 1;
                    } while (uVar7 != *(ulong *)(unaff_x22 + 0x3a8));
                    lVar34 = *(long *)(unaff_x22 + 0x470);
                    lVar35 = *(long *)(unaff_x22 + 0x468);
                    lVar31 = *(long *)(unaff_x22 + 0x460);
                    lVar30 = *(long *)(unaff_x22 + 0x458);
                  }
                  uVar24 = *(undefined8 *)(unaff_x22 + 0x3a0);
                  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x330));
                  func_0x000107c6142c(uVar24);
                  lVar3 = lVar34 - lVar35;
                  if (SBORROW8(lVar34,lVar35)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa34);
                    (*pcVar5)();
                  }
                  lVar34 = lVar31 - lVar30;
                  if (SBORROW8(lVar31,lVar30)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa38);
                    (*pcVar5)();
                  }
                  lVar30 = lVar29 - lVar26;
                  if (SBORROW8(lVar29,lVar26)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa3c);
                    (*pcVar5)();
                  }
                  if (!SCARRY8(lVar3,lVar34)) {
                    if (!SCARRY8(lVar3 + lVar34,lVar30)) {
                      if (0 < lVar3 + lVar34 + lVar30) {
                        lVar26 = *(long *)(unaff_x22 + 0x308);
                        lStack_70 = 0;
                        uStack_68 = 0xe000000000000000;
                        func_0x000107c602fc(0x5c);
                        func_0x000107c5fb78(0xd00000000000002c,0x800000010f001ec0);
                        *(long *)(unaff_x22 + 0x2f0) = lVar3;
                        puVar36 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
                        puVar10 = PTR___sSiN_11034deb0;
                        puVar17 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
                        func_0x000107c6057c(unaff_x22,PTR___sSiN_11034deb0,
                                            PTR___sSis23CustomStringConvertiblesWP_11034df00);
                        func_0x000107c5fb78();
                        func_0x000107c6142c(puVar17);
                        func_0x000107c5fb78(0xd000000000000011,0x800000010f001ef0);
                        *(long *)(unaff_x22 + 0x2f8) = lVar34;
                        puVar17 = puVar36;
                        func_0x000107c6057c(unaff_x22,puVar10,puVar36);
                        func_0x000107c5fb78();
                        func_0x000107c6142c(puVar17);
                        func_0x000107c5fb78(0xd000000000000019,0x800000010f001f10);
                        *(long *)(unaff_x22 + 0x300) = lVar30;
                        func_0x000107c6057c(puVar10);
                        puVar10 = puVar36;
                        func_0x000107c5fb78();
                        func_0x000107c6142c(puVar36);
                        uVar24 = uStack_68;
                        lVar29 = lStack_70;
                        func_0x000107c5cab0();
                        func_0x000107c61180();
                        if (lVar26 == 0) {
                          lVar30 = 0;
                          puVar10 = (undefined *)0x0;
                        }
                        else {
                          lVar30 = lVar26;
                          func_0x000107c5faec();
                          func_0x000107c61170(lVar26);
                        }
                        lVar26 = *(long *)(unaff_x22 + 0x318);
                        uVar37 = *(undefined8 *)(lVar26 + 0x60);
                        uVar27 = *(undefined8 *)(lVar26 + 0x28);
                        puVar36 = &UNK_110450670;
                        func_0x000107c613fc(&UNK_110450670,0x18,7);
                        func_0x000107c61644(puVar36 + 0x10,lVar26);
                        puVar17 = &UNK_110450698;
                        func_0x000107c613fc(&UNK_110450698,0x50,7);
                        *(undefined **)(puVar17 + 0x10) = puVar36;
                        *(long *)(puVar17 + 0x18) = lVar29;
                        *(undefined8 *)(puVar17 + 0x20) = uVar24;
                        puVar17[0x28] = 1;
                        *(undefined8 *)(puVar17 + 0x30) = 0;
                        *(undefined8 *)(puVar17 + 0x38) = 0;
                        *(long *)(puVar17 + 0x40) = lVar30;
                        *(undefined **)(puVar17 + 0x48) = puVar10;
                        *(code **)(unaff_x22 + 0x1c0) = FUN_101baca00;
                        *(undefined **)(unaff_x22 + 0x1c8) = puVar17;
                        *(undefined **)(unaff_x22 + 0x1a0) = PTR___NSConcreteStackBlock_11034bd00;
                        *(undefined8 *)(unaff_x22 + 0x1a8) = 0x42000000;
                        *(undefined **)(unaff_x22 + 0x1b0) = &UNK_100288f10;
                        *(undefined **)(unaff_x22 + 0x1b8) = &UNK_1104506b0;
                        lVar29 = unaff_x22 + 0x1a0;
                        func_0x000107c60bc4(lVar29);
                        uVar33 = *(undefined8 *)(unaff_x22 + 0x1c8);
                        func_0x000107c61434(puVar10);
                        func_0x000107c61434(uVar24);
                        func_0x000107c61574(uVar33);
                        func_0x000108ec0f10(uVar37,uVar27,lVar29);
                        func_0x000107c60bd0(lVar29);
                        func_0x000107c6142c(puVar10);
                        func_0x000107c6142c(uVar24);
                      }
                      uVar24 = *(undefined8 *)(unaff_x22 + 0x370);
                      uVar37 = *(undefined8 *)(unaff_x22 + 0x368);
                      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x338));
                      func_0x000107c6142c(uVar37);
                      func_0x000107c61170(uVar24);
                    /* WARNING: Could not recover jumptable at 0x000101b9f3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)(unaff_x22 + 8))(puVar9);
                      return;
                    }
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa44);
                    (*pcVar5)();
                  }
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x101b9fa40);
                  (*pcVar5)();
                }
                func_0x000107c6142c(puVar10);
              }
              func_0x000107c6142c();
              uVar23 = 0x2e;
              puVar9 = puVar36;
              goto LAB_101b9e8b8;
            }
            uVar7 = uVar7 + 1;
          } while (puVar25 != puVar9);
        }
        func_0x000107c6142c();
        uVar23 = 0x2d;
        puVar9 = puVar36;
      }
      goto LAB_101b9e8b8;
    }
LAB_101b9e3b8:
    func_0x000107c6142c();
  }
  else {
    uVar8 = uVar7;
    func_0x000107c5faec();
    func_0x000107c61170(uVar7);
    puVar36 = puVar10;
    if (puVar9 == (undefined *)0x0) goto joined_r0x000101b9e3a8;
    if (puVar10 == (undefined *)0x0) goto LAB_101b9e3b8;
    if ((uVar12 == uVar8) && (puVar9 == puVar10)) {
      func_0x000107c6142c(puVar10);
      func_0x000107c6142c(puVar9);
      goto LAB_101b9e3f8;
    }
    func_0x000107c605b8(uVar12,puVar9,uVar8,puVar10,0);
    func_0x000107c6142c(puVar10);
    func_0x000107c6142c();
    if ((uVar12 & 1) != 0) goto LAB_101b9e3f8;
  }
  uVar23 = 0x2c;
LAB_101b9e8b8:
  func_0x000101b9d5ac();
  func_0x000107c613f8(&UNK_1106c31f8,puVar9,0,0);
  *puVar9 = uVar23;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101b9e904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b9fa70; end: 101b9fac3;  */

void FUN_101b9fa70(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x350) = param_1;
  *(undefined8 *)(lVar1 + 0x358) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x348));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b9fac4,0,0);
  return;
}



/* Entry: 101b9fac4; end: 101ba0dcb;  */

void FUN_101b9fac4(void)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined1 *puVar23;
  undefined *puVar24;
  long unaff_x22;
  long lVar25;
  undefined *puVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long *plStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *UNRECOVERED_JUMPTABLE_00;
  long lStack_70;
  undefined8 uStack_68;
  
  FUN_101bacf10(unaff_x22 + 0x1d0);
  *(undefined8 *)(unaff_x22 + 0x370) = *(undefined8 *)(unaff_x22 + 0x340);
  *(undefined8 *)(unaff_x22 + 0x368) = *(undefined8 *)(unaff_x22 + 0x358);
  *(undefined8 *)(unaff_x22 + 0x360) = *(undefined8 *)(unaff_x22 + 0x350);
  puVar24 = PTR_PTR_1126af4d0;
  func_0x000107c61168();
  func_0x000107c430fc();
  func_0x000107c61180();
  puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar24 != (undefined *)0x0) {
    puVar9 = PTR___sypN_11034f1a8 + 8;
    puVar19 = puVar24;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar24);
    puVar24 = puVar19;
    FUN_101baa320();
    func_0x000107c6142c(puVar19);
    puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar24 != (undefined *)0x0) {
      puVar31 = (undefined *)((ulong)puVar24 & 0xffffffffffffff8);
      if ((ulong)puVar24 >> 0x3e == 0) {
        puVar20 = *(undefined **)(puVar31 + 0x10);
      }
      else {
        puVar20 = puVar24;
        if (-1 < (long)puVar24) {
          puVar20 = puVar31;
        }
        func_0x000107c60480();
        puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar19;
      if (puVar20 != (undefined *)0x0) {
        puVar5 = (undefined *)0x0;
        do {
          while( true ) {
            if (((ulong)puVar24 & 0xc000000000000001) == 0) {
              if (*(undefined **)(puVar31 + 0x10) <= puVar5) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101b9fcb4);
                (*pcVar3)();
              }
              puVar4 = *(undefined **)(puVar24 + (long)puVar5 * 8 + 0x20);
              func_0x000107c61174();
              puVar11 = puVar9;
            }
            else {
              puVar4 = puVar5;
              puVar11 = puVar24;
              FUN_101a3ee24();
            }
            if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101b9fcb0);
              (*pcVar3)();
            }
            puVar26 = puVar5 + 1;
            func_0x000107c61174();
            puVar6 = puVar4;
            func_0x000107c5b2d0();
            func_0x000107c61180();
            if (puVar6 == (undefined *)0x0) break;
            puVar5 = puVar6;
            func_0x000107c5faec();
            puVar9 = puVar11;
            func_0x000107c61170(puVar6);
            func_0x000107c61170(puVar4);
            func_0x000107c61170(puVar4);
            puVar4 = puVar19;
            func_0x000107c61558();
            puVar6 = puVar19;
            if (((ulong)puVar4 & 1) == 0) {
              puVar9 = (undefined *)(*(long *)(puVar19 + 0x10) + 1);
              puVar6 = (undefined *)0x0;
              func_0x0001000d182c(0,puVar9,1,puVar19);
            }
            uVar15 = *(ulong *)(puVar6 + 0x10);
            puVar4 = (undefined *)(uVar15 + 1);
            puVar19 = puVar6;
            if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar15) {
              puVar19 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
              puVar9 = puVar4;
              func_0x0001000d182c(puVar19,puVar4,1,puVar6);
            }
            *(undefined **)(puVar19 + 0x10) = puVar4;
            *(undefined **)(puVar19 + uVar15 * 0x10 + 0x20) = puVar5;
            *(undefined **)(puVar19 + uVar15 * 0x10 + 0x28) = puVar11;
            puVar5 = puVar26;
            if (puVar26 == puVar20) goto LAB_101b9fcd0;
          }
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar4);
          puVar9 = puVar11;
          puVar5 = puVar5 + 1;
        } while (puVar26 != puVar20);
      }
LAB_101b9fcd0:
      func_0x000107c6142c(puVar24);
    }
  }
  lVar21 = *(long *)(unaff_x22 + 800);
  bVar1 = *(byte *)(unaff_x22 + 0x542);
  puVar24 = puVar19;
  func_0x000100403a6c();
  *(undefined **)(unaff_x22 + 0x378) = puVar24;
  func_0x000107c6142c(puVar19);
  lVar14 = lVar21;
  FUN_101bac00c();
  *(long *)(unaff_x22 + 0x380) = lVar14;
  func_0x000107c6142c(lVar21);
  puVar19 = PTR___swiftEmptySetSingleton_11034f1d8;
  if ((bVar1 & 1) == 0) {
    plVar8 = (long *)0xf0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x388) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_101ba0dcc;
    lVar21 = *(long *)(unaff_x22 + 0x318);
    plVar8[0x16] = lVar14;
    plVar8[0x17] = lVar21;
    pcVar3 = FUN_101baa46c;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
    return;
  }
  lVar21 = *(long *)(unaff_x22 + 0x380);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x378);
  lVar14 = lVar21;
  func_0x000101bac174(lVar21,uVar18,PTR___swiftEmptySetSingleton_11034f1d8);
  *(long *)(unaff_x22 + 0x3a0) = lVar14;
  func_0x000107c6142c(puVar19);
  func_0x000107c6142c(lVar21);
  func_0x000107c6142c(uVar18);
  lVar14 = *(long *)(lVar14 + 0x10);
  *(long *)(unaff_x22 + 0x3a8) = lVar14;
  puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar14 == 0) {
    lVar21 = 0;
    lVar14 = 0;
    lVar29 = 0;
    lVar25 = 0;
    lVar30 = 0;
    lVar28 = 0;
  }
  else {
    lVar21 = 0;
    lVar14 = 0;
    uVar18 = 0;
    uVar32 = 0;
    uVar15 = 0;
    do {
      *(ulong *)(unaff_x22 + 0x3b0) = uVar15;
      if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0d80);
        (*pcVar3)();
      }
      lVar25 = *(long *)(unaff_x22 + 0x3a0) + uVar15 * 0x20;
      uVar15 = *(ulong *)(lVar25 + 0x20);
      *(ulong *)(unaff_x22 + 0x3b8) = uVar15;
      uVar22 = *(undefined8 *)(lVar25 + 0x28);
      *(undefined8 *)(unaff_x22 + 0x3c0) = uVar22;
      *(undefined8 *)(unaff_x22 + 0x3c8) = *(undefined8 *)(lVar25 + 0x30);
      uVar27 = *(undefined8 *)(lVar25 + 0x38);
      *(undefined8 *)(unaff_x22 + 0x3d0) = uVar27;
      if (uVar15 >> 0x3e == 0) {
        uVar16 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
        *(ulong *)(unaff_x22 + 0x3d8) = uVar16;
      }
      else {
        uVar16 = uVar15 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar15) {
          uVar16 = uVar15;
        }
        func_0x000107c60480();
        *(ulong *)(unaff_x22 + 0x3d8) = uVar16;
      }
      if (uVar16 != 0) {
        func_0x000107c61438(uVar15,2);
        func_0x000107c61434(uVar22);
        func_0x000107c61434(uVar27);
        puVar23 = (undefined1 *)0x0;
        do {
          *(undefined **)(unaff_x22 + 0x400) = puVar19;
          *(undefined8 *)(unaff_x22 + 0x3f8) = uVar32;
          *(undefined8 *)(unaff_x22 + 0x3f0) = uVar18;
          *(long *)(unaff_x22 + 1000) = lVar14;
          *(long *)(unaff_x22 + 0x3e0) = lVar21;
          uVar15 = *(ulong *)(unaff_x22 + 0x3b8);
          if ((uVar15 & 0xc000000000000001) == 0) {
            if (*(undefined1 **)((uVar15 & 0xffffffffffffff8) + 0x10) <= puVar23) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0d64);
              (*pcVar3)();
            }
            puVar10 = *(undefined1 **)(uVar15 + (long)puVar23 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar10 = puVar23;
            func_0x000101b9be90();
          }
          *(undefined1 **)(unaff_x22 + 0x408) = puVar10;
          *(undefined1 **)(unaff_x22 + 0x410) = puVar23 + 1;
          if (SCARRY8((long)puVar23,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0d60);
            (*pcVar3)();
          }
          if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
            FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x1f8);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x210);
            lVar14 = *(long *)(unaff_x22 + 0x218);
            uVar18 = uVar32;
            FUN_101bacf60(unaff_x22 + 0x1f8);
            func_0x000107c4a77c();
            func_0x000107c61180();
            if (puVar10 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0dbc);
              (*pcVar3)();
            }
            puVar23 = puVar10;
            func_0x000107c5faec();
            func_0x000107c61170(puVar10);
            *(undefined8 *)(unaff_x22 + 0x418) = uVar18;
            piVar17 = *(int **)(lVar14 + 8);
            plVar8 = (long *)(ulong)(uint)piVar17[1];
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar17 + (long)piVar17);
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x420) = plVar8;
            pcVar3 = FUN_101ba1ed8;
            goto LAB_101ba0450;
          }
          func_0x000107c51f9c();
          func_0x000107c61180();
          *(undefined1 **)(unaff_x22 + 0x430) = puVar10;
          if (puVar10 == (undefined1 *)0x0) {
            func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
            puVar19 = *(undefined **)(unaff_x22 + 0x400);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x3f8);
            uVar18 = *(undefined8 *)(unaff_x22 + 0x3f0);
            lVar14 = *(long *)(unaff_x22 + 1000);
LAB_101ba0268:
            lVar21 = *(long *)(unaff_x22 + 0x3e0);
          }
          else {
            puVar23 = puVar10;
            func_0x000107c5b420();
            if ((int)puVar23 != 4) {
              if ((int)puVar23 != 6) {
                func_0x000101b9d5ac();
                puVar19 = &UNK_1106c31f8;
                func_0x000107c613f8(&UNK_1106c31f8,puVar23,0,0);
                *puVar23 = 0x37;
                func_0x000107c61654();
                func_0x000107c61170(puVar10);
                lVar14 = *(long *)(unaff_x22 + 1000);
LAB_101ba0240:
                uVar32 = *(undefined8 *)(unaff_x22 + 0x3f8);
                if (*(char *)(unaff_x22 + 0x542) == '\x01') {
                  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
                  func_0x000107c614ac(puVar19);
                  puVar19 = *(undefined **)(unaff_x22 + 0x400);
                  uVar18 = *(undefined8 *)(unaff_x22 + 0x3f0);
                  goto LAB_101ba0268;
                }
                *(undefined8 *)(unaff_x22 + 0x4f8) = uVar32;
                *(long *)(unaff_x22 + 0x4f0) = lVar14;
                *(undefined **)(unaff_x22 + 0x4e8) = puVar19;
                lVar14 = *(long *)(unaff_x22 + 0x408);
                FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x220);
                uVar32 = *(undefined8 *)(unaff_x22 + 0x238);
                lVar21 = *(long *)(unaff_x22 + 0x240);
                uVar18 = uVar32;
                FUN_101bacf60(unaff_x22 + 0x220);
                func_0x000107c4a77c();
                func_0x000107c61180();
                if (lVar14 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0dc0);
                  (*pcVar3)();
                }
                lVar25 = lVar14;
                func_0x000107c5faec();
                func_0x000107c61170(lVar14);
                *(undefined8 *)(unaff_x22 + 0x500) = uVar18;
                func_0x000107c614cc(puVar19,unaff_x22 + 0x2d0,unaff_x22 + 0x298);
                uVar22 = *(undefined8 *)(unaff_x22 + 0x2a0);
                FUN_101da5a48(uVar22,*(undefined8 *)(unaff_x22 + 0x2a8));
                piVar17 = *(int **)(lVar21 + 0x10);
                plVar8 = (long *)(ulong)(uint)piVar17[1];
                UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar17 + (long)piVar17);
                func_0x000107c615b8();
                *(long **)(unaff_x22 + 0x508) = plVar8;
                *plVar8 = unaff_x22;
                plVar8[1] = (long)FUN_101ba6b18;
                uVar13 = *(undefined8 *)(unaff_x22 + 0x370);
                uVar12 = *(undefined8 *)(unaff_x22 + 0x330);
                uVar27 = *(undefined8 *)(unaff_x22 + 0x328);
                goto LAB_101ba056c;
              }
              *(long *)(unaff_x22 + 0x438) = *(long *)(unaff_x22 + 0x3f8) + 1;
              if (SCARRY8(*(long *)(unaff_x22 + 0x3f8),1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0dac);
                (*pcVar3)();
              }
              lVar14 = *(long *)(unaff_x22 + 0x408);
              func_0x000107c4a77c();
              func_0x000107c61180();
              if (lVar14 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0dc4);
                (*pcVar3)();
              }
              lVar21 = lVar14;
              func_0x000107c5faec();
              func_0x000107c61170(lVar14);
              *(ulong *)(unaff_x22 + 0x440) = uVar15;
              plVar8 = (long *)0x60;
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0x448) = plVar8;
              *plVar8 = unaff_x22;
              plVar8[1] = (long)FUN_101ba2f64;
              lVar14 = *(long *)(unaff_x22 + 0x3d0);
              plVar8[6] = *(long *)(unaff_x22 + 0x3c8);
              plVar8[7] = lVar14;
              plVar8[4] = lVar21;
              plVar8[5] = uVar15;
              plVar8[2] = unaff_x22 + 0x10;
              plVar8[3] = (long)puVar10;
              lVar14 = 0;
              func_0x000107c5eea4();
              plVar8[8] = lVar14;
              lVar14 = *(long *)(lVar14 + -8);
              plVar8[9] = lVar14;
              uVar15 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
              func_0x000107c615b8();
              plVar8[10] = uVar15;
              pcVar3 = FUN_101bacab8;
              goto LAB_107c615e0;
            }
            lVar14 = *(long *)(unaff_x22 + 1000) + 1;
            if (SCARRY8(*(long *)(unaff_x22 + 1000),1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0d68);
              (*pcVar3)();
            }
            lVar21 = *(long *)(unaff_x22 + 0x408);
            func_0x000107c4a77c();
            func_0x000107c61180();
            if (lVar21 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0db4);
              (*pcVar3)();
            }
            lVar25 = lVar21;
            func_0x000107c5faec();
            func_0x000107c61170(lVar21);
            puVar23 = puVar10;
            func_0x000107c3fd58();
            func_0x000107c61180();
            if (puVar23 == (undefined1 *)0x0) {
              func_0x000101b9d5ac();
              puVar19 = &UNK_1106c31f8;
              func_0x000107c613f8(&UNK_1106c31f8,puVar23,0,0);
              *puVar23 = 0x3a;
              func_0x000107c61654();
LAB_101ba0230:
              func_0x000107c6142c(uVar15);
              func_0x000107c61170(puVar10);
              goto LAB_101ba0240;
            }
            puVar7 = puVar23;
            func_0x000107c5b67c();
            func_0x000107c61180();
            if (puVar7 == (undefined1 *)0x0) {
LAB_101ba01c4:
              func_0x000101b9d5ac();
              puVar19 = &UNK_1106c31f8;
              func_0x000107c613f8(&UNK_1106c31f8,puVar7,0,0);
              *puVar7 = 0x3b;
              func_0x000107c61654();
              func_0x000107c61170(puVar23);
              goto LAB_101ba0230;
            }
            lStack_70 = 0;
            plVar8 = &lStack_70;
            func_0x000107c5fc50();
            func_0x000107c61170();
            lVar28 = lStack_70;
            if (lStack_70 == 0) goto LAB_101ba01c4;
            puVar10 = puVar23;
            func_0x000107c4b1dc();
            func_0x000107c61180();
            if (puVar10 == (undefined1 *)0x0) {
              puStack_88 = (undefined1 *)0x0;
              plVar8 = (long *)0x0;
            }
            else {
              puStack_88 = puVar10;
              func_0x000107c5faec();
              func_0x000107c61170(puVar10);
            }
            lVar29 = *(long *)(unaff_x22 + 0x3e0);
            uVar18 = *(undefined8 *)(unaff_x22 + 0x3d0);
            puVar10 = puVar23;
            func_0x000107c3fd50();
            func_0x000107c61180();
            func_0x000107c61170(puVar23);
            lVar21 = lVar29 + 1;
            func_0x000107c61434(uVar18);
            if (SCARRY8(lVar29,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0d84);
              (*pcVar3)();
            }
            uVar32 = *(undefined8 *)(unaff_x22 + 0x3f8);
            uVar18 = *(undefined8 *)(unaff_x22 + 0x3f0);
            uVar16 = *(ulong *)(unaff_x22 + 0x400);
            *(long *)(unaff_x22 + 0x100) = lVar25;
            *(ulong *)(unaff_x22 + 0x108) = uVar15;
            *(undefined1 *)(unaff_x22 + 0x110) = 0;
            *(undefined8 *)(unaff_x22 + 0x118) = 0;
            *(long *)(unaff_x22 + 0x120) = lVar28;
            *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x3d0);
            *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x3c8);
            *(undefined1 **)(unaff_x22 + 0x138) = puStack_88;
            *(long **)(unaff_x22 + 0x140) = plVar8;
            *(undefined1 **)(unaff_x22 + 0x148) = puVar10;
            FUN_101b9d4cc(unaff_x22 + 0x100,unaff_x22 + 0x150);
            func_0x000107c61558();
            puVar19 = *(undefined **)(unaff_x22 + 0x400);
            puVar24 = puVar19;
            if ((uVar16 & 1) == 0) {
              puVar24 = (undefined *)0x0;
              FUN_101b9bfcc(0,*(long *)(puVar19 + 0x10) + 1,1,puVar19);
            }
            uVar15 = *(ulong *)(puVar24 + 0x10);
            puVar19 = puVar24;
            if (*(ulong *)(puVar24 + 0x18) >> 1 <= uVar15) {
              puVar19 = (undefined *)(ulong)(1 < *(ulong *)(puVar24 + 0x18));
              FUN_101b9bfcc(puVar19,uVar15 + 1,1,puVar24);
            }
            uVar22 = *(undefined8 *)(unaff_x22 + 0x430);
            uVar27 = *(undefined8 *)(unaff_x22 + 0x408);
            *(ulong *)(puVar19 + 0x10) = uVar15 + 1;
            uVar12 = *(undefined8 *)(unaff_x22 + 0x100);
            *(undefined8 *)(puVar19 + uVar15 * 0x50 + 0x28) = *(undefined8 *)(unaff_x22 + 0x108);
            *(undefined8 *)(puVar19 + uVar15 * 0x50 + 0x20) = uVar12;
            uVar13 = *(undefined8 *)(unaff_x22 + 0x118);
            uVar12 = *(undefined8 *)(unaff_x22 + 0x110);
            uVar34 = *(undefined8 *)(unaff_x22 + 0x128);
            uVar33 = *(undefined8 *)(unaff_x22 + 0x120);
            uVar35 = *(undefined8 *)(unaff_x22 + 0x130);
            uVar37 = *(undefined8 *)(unaff_x22 + 0x148);
            uVar36 = *(undefined8 *)(unaff_x22 + 0x140);
            *(undefined8 *)(puVar19 + uVar15 * 0x50 + 0x58) = *(undefined8 *)(unaff_x22 + 0x138);
            *(undefined8 *)(puVar19 + uVar15 * 0x50 + 0x50) = uVar35;
            *(undefined8 *)(puVar19 + uVar15 * 0x50 + 0x68) = uVar37;
            *(undefined8 *)(puVar19 + uVar15 * 0x50 + 0x60) = uVar36;
            *(undefined8 *)(puVar19 + uVar15 * 0x50 + 0x38) = uVar13;
            *(undefined8 *)(puVar19 + uVar15 * 0x50 + 0x30) = uVar12;
            *(undefined8 *)(puVar19 + uVar15 * 0x50 + 0x48) = uVar34;
            *(undefined8 *)(puVar19 + uVar15 * 0x50 + 0x40) = uVar33;
            func_0x000107c61170(uVar22);
            func_0x000107c61170(uVar27);
            func_0x000101b9d508(unaff_x22 + 0x100);
          }
          puVar23 = *(undefined1 **)(unaff_x22 + 0x410);
        } while (puVar23 != *(undefined1 **)(unaff_x22 + 0x3d8));
        uVar22 = *(undefined8 *)(unaff_x22 + 0x3d0);
        uVar27 = *(undefined8 *)(unaff_x22 + 0x3c0);
        func_0x000107c61430(*(undefined8 *)(unaff_x22 + 0x3b8),2);
        func_0x000107c6142c(uVar27);
        func_0x000107c6142c(uVar22);
      }
      *(undefined8 *)(unaff_x22 + 0x470) = uVar32;
      *(undefined8 *)(unaff_x22 + 0x468) = uVar18;
      *(long *)(unaff_x22 + 0x460) = lVar14;
      *(long *)(unaff_x22 + 0x458) = lVar21;
      uVar15 = *(long *)(unaff_x22 + 0x3b0) + 1;
    } while (uVar15 != *(ulong *)(unaff_x22 + 0x3a8));
    lVar21 = 0;
    lVar14 = 0;
    uVar15 = 0;
    do {
      *(ulong *)(unaff_x22 + 0x478) = uVar15;
      if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0db0);
        (*pcVar3)();
      }
      lVar25 = *(long *)(unaff_x22 + 0x3a0) + uVar15 * 0x20;
      uVar18 = *(undefined8 *)(lVar25 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x480) = uVar18;
      uVar15 = *(ulong *)(lVar25 + 0x28);
      *(ulong *)(unaff_x22 + 0x488) = uVar15;
      *(undefined8 *)(unaff_x22 + 0x490) = *(undefined8 *)(lVar25 + 0x30);
      uVar32 = *(undefined8 *)(lVar25 + 0x38);
      *(undefined8 *)(unaff_x22 + 0x498) = uVar32;
      if (uVar15 >> 0x3e == 0) {
        uVar16 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
        *(ulong *)(unaff_x22 + 0x4a0) = uVar16;
      }
      else {
        uVar16 = uVar15 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar15) {
          uVar16 = uVar15;
        }
        func_0x000107c60480(uVar16);
        func_0x000107c60480();
        *(ulong *)(unaff_x22 + 0x4a0) = uVar16;
      }
      if (uVar16 != 0) {
        func_0x000107c61438(uVar15,2);
        func_0x000107c61434(uVar18);
        func_0x000107c61434(uVar32);
        puVar23 = (undefined1 *)0x0;
        do {
          *(undefined **)(unaff_x22 + 0x4b8) = puVar19;
          *(long *)(unaff_x22 + 0x4b0) = lVar14;
          *(long *)(unaff_x22 + 0x4a8) = lVar21;
          uVar15 = *(ulong *)(unaff_x22 + 0x488);
          if ((uVar15 & 0xc000000000000001) == 0) {
            if (*(undefined1 **)((uVar15 & 0xffffffffffffff8) + 0x10) <= puVar23) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0da4);
              (*pcVar3)();
            }
            puVar10 = *(undefined1 **)(uVar15 + (long)puVar23 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar10 = puVar23;
            func_0x000101b9be7c();
          }
          *(undefined1 **)(unaff_x22 + 0x4c0) = puVar10;
          *(undefined1 **)(unaff_x22 + 0x4c8) = puVar23 + 1;
          if (SCARRY8((long)puVar23,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0d88);
            (*pcVar3)();
          }
          if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
            FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x248);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x260);
            lVar14 = *(long *)(unaff_x22 + 0x268);
            uVar18 = uVar32;
            FUN_101bacf60(unaff_x22 + 0x248);
            func_0x000107c4a77c();
            func_0x000107c61180();
            if (puVar10 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0dc8);
              (*pcVar3)();
            }
            puVar23 = puVar10;
            func_0x000107c5faec();
            func_0x000107c61170(puVar10);
            *(undefined8 *)(unaff_x22 + 0x4d0) = uVar18;
            piVar17 = *(int **)(lVar14 + 8);
            plVar8 = (long *)(ulong)(uint)piVar17[1];
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar17 + (long)piVar17);
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x4d8) = plVar8;
            pcVar3 = FUN_101ba507c;
LAB_101ba0450:
            *plVar8 = unaff_x22;
            plVar8[1] = (long)pcVar3;
                    /* WARNING: Could not recover jumptable at 0x000101ba049c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)
                      (*(undefined8 *)(unaff_x22 + 0x310),puVar23,uVar18,
                       *(undefined8 *)(unaff_x22 + 0x360),*(undefined8 *)(unaff_x22 + 0x368),
                       *(undefined8 *)(unaff_x22 + 0x370),uVar32,lVar14);
            return;
          }
          lVar14 = *(long *)(unaff_x22 + 0x4b0) + 1;
          if (SCARRY8(*(long *)(unaff_x22 + 0x4b0),1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0d8c);
            (*pcVar3)();
          }
          puVar19 = PTR_PTR_1126bf7f0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar24 = PTR_PTR_1126bf8d0;
          func_0x000107c610f8(PTR_PTR_1126bf8d0);
          func_0x000107c453e4();
          func_0x000107c53574(puVar19);
          func_0x000107c61170(puVar24);
          puVar23 = puVar19;
          func_0x000107c3fd58();
          func_0x000107c61180();
          if (puVar23 != (undefined1 *)0x0) {
            uVar18 = *(undefined8 *)(unaff_x22 + 0x4c0);
            func_0x000107c5b2dc(uVar18);
            func_0x000107c61180();
            func_0x000107c59588(puVar23);
            func_0x000107c61170(uVar18);
            func_0x000107c61170(puVar23);
          }
          puVar23 = puVar19;
          func_0x000107c3fd58();
          func_0x000107c61180();
          if (puVar23 != (undefined1 *)0x0) {
            uVar18 = *(undefined8 *)(unaff_x22 + 0x4c0);
            func_0x000107c3fd54(uVar18);
            func_0x000107c61180();
            func_0x000107c55d70(puVar23);
            func_0x000107c61170(uVar18);
            func_0x000107c61170(puVar23);
          }
          lVar21 = *(long *)(unaff_x22 + 0x4c0);
          func_0x000107c4a77c();
          func_0x000107c61180();
          if (lVar21 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0db8);
            (*pcVar3)();
          }
          lVar25 = lVar21;
          func_0x000107c5faec();
          func_0x000107c61170(lVar21);
          puVar23 = puVar19;
          func_0x000107c3fd58();
          func_0x000107c61180();
          if (puVar23 == (undefined1 *)0x0) {
            func_0x000101b9d5ac();
            puVar24 = &UNK_1106c31f8;
            func_0x000107c613f8(&UNK_1106c31f8,puVar23,0,0);
            *puVar23 = 0x3a;
            func_0x000107c61654();
LAB_101ba0868:
            func_0x000107c6142c(uVar15);
            bVar1 = *(byte *)(unaff_x22 + 0x542);
            func_0x000107c61170(puVar19);
            if ((bVar1 & 1) == 0) {
              *(long *)(unaff_x22 + 0x520) = lVar14;
              *(undefined **)(unaff_x22 + 0x518) = puVar24;
              lVar14 = *(long *)(unaff_x22 + 0x4c0);
              FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x270);
              uVar32 = *(undefined8 *)(unaff_x22 + 0x288);
              lVar21 = *(long *)(unaff_x22 + 0x290);
              uVar18 = uVar32;
              FUN_101bacf60(unaff_x22 + 0x270);
              func_0x000107c4a77c();
              func_0x000107c61180();
              if (lVar14 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0dcc);
                (*pcVar3)();
              }
              lVar25 = lVar14;
              func_0x000107c5faec();
              func_0x000107c61170(lVar14);
              *(undefined8 *)(unaff_x22 + 0x528) = uVar18;
              func_0x000107c614cc(puVar24,unaff_x22 + 0x2e0,unaff_x22 + 0x2b0);
              uVar22 = *(undefined8 *)(unaff_x22 + 0x2b8);
              FUN_101da5a48(uVar22,*(undefined8 *)(unaff_x22 + 0x2c0));
              piVar17 = *(int **)(lVar21 + 0x10);
              plVar8 = (long *)(ulong)(uint)piVar17[1];
              UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar17 + (long)piVar17);
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0x530) = plVar8;
              *plVar8 = unaff_x22;
              plVar8[1] = (long)FUN_101ba8dec;
              uVar13 = *(undefined8 *)(unaff_x22 + 0x370);
              uVar12 = *(undefined8 *)(unaff_x22 + 0x330);
              uVar27 = *(undefined8 *)(unaff_x22 + 0x328);
LAB_101ba056c:
                    /* WARNING: Could not recover jumptable at 0x000101ba059c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_00)(lVar25,uVar18,uVar27,uVar12,uVar22,uVar13,uVar32,lVar21);
              return;
            }
            func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x4c0));
            func_0x000107c614ac(puVar24);
            puVar19 = *(undefined **)(unaff_x22 + 0x4b8);
            lVar21 = *(long *)(unaff_x22 + 0x4a8);
          }
          else {
            puVar10 = puVar23;
            func_0x000107c5b67c();
            func_0x000107c61180();
            if (puVar10 == (undefined1 *)0x0) {
LAB_101ba0830:
              func_0x000101b9d5ac();
              puVar24 = &UNK_1106c31f8;
              func_0x000107c613f8(&UNK_1106c31f8,puVar10,0,0);
              *puVar10 = 0x3b;
              func_0x000107c61654();
              func_0x000107c61170(puVar23);
              goto LAB_101ba0868;
            }
            lStack_70 = 0;
            plStack_90 = &lStack_70;
            func_0x000107c5fc50();
            func_0x000107c61170();
            lVar21 = lStack_70;
            if (lStack_70 == 0) goto LAB_101ba0830;
            puVar10 = puVar23;
            func_0x000107c4b1dc();
            func_0x000107c61180();
            if (puVar10 == (undefined1 *)0x0) {
              puStack_80 = (undefined1 *)0x0;
              plStack_90 = (long *)0x0;
            }
            else {
              puStack_80 = puVar10;
              func_0x000107c5faec();
              func_0x000107c61170(puVar10);
            }
            uVar16 = *(ulong *)(unaff_x22 + 0x4b8);
            uVar18 = *(undefined8 *)(unaff_x22 + 0x498);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x490);
            puVar10 = puVar23;
            func_0x000107c3fd50();
            func_0x000107c61180();
            func_0x000107c61170(puVar23);
            *(long *)(unaff_x22 + 0x60) = lVar25;
            *(ulong *)(unaff_x22 + 0x68) = uVar15;
            *(undefined1 *)(unaff_x22 + 0x70) = 0;
            *(undefined8 *)(unaff_x22 + 0x78) = 0;
            *(long *)(unaff_x22 + 0x80) = lVar21;
            *(undefined8 *)(unaff_x22 + 0x88) = uVar32;
            *(undefined8 *)(unaff_x22 + 0x90) = uVar18;
            *(undefined1 **)(unaff_x22 + 0x98) = puStack_80;
            *(long **)(unaff_x22 + 0xa0) = plStack_90;
            *(undefined1 **)(unaff_x22 + 0xa8) = puVar10;
            func_0x000107c61434(uVar18);
            func_0x000107c61170(puVar19);
            FUN_101b9d4cc(unaff_x22 + 0x60,unaff_x22 + 0xb0);
            func_0x000107c61558();
            puVar19 = *(undefined **)(unaff_x22 + 0x4b8);
            puVar24 = puVar19;
            if ((uVar16 & 1) == 0) {
              puVar24 = (undefined *)0x0;
              FUN_101b9bfcc(0,*(long *)(puVar19 + 0x10) + 1,1,puVar19);
            }
            uVar15 = *(ulong *)(puVar24 + 0x10);
            puVar19 = puVar24;
            if (*(ulong *)(puVar24 + 0x18) >> 1 <= uVar15) {
              puVar19 = (undefined *)(ulong)(1 < *(ulong *)(puVar24 + 0x18));
              FUN_101b9bfcc(puVar19,uVar15 + 1,1,puVar24);
            }
            uVar18 = *(undefined8 *)(unaff_x22 + 0x4c0);
            lVar25 = *(long *)(unaff_x22 + 0x4a8);
            *(ulong *)(puVar19 + 0x10) = uVar15 + 1;
            uVar32 = *(undefined8 *)(unaff_x22 + 0x60);
            *(undefined8 *)(puVar19 + uVar15 * 0x50 + 0x28) = *(undefined8 *)(unaff_x22 + 0x68);
            *(undefined8 *)(puVar19 + uVar15 * 0x50 + 0x20) = uVar32;
            uVar22 = *(undefined8 *)(unaff_x22 + 0x78);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x70);
            uVar12 = *(undefined8 *)(unaff_x22 + 0x88);
            uVar27 = *(undefined8 *)(unaff_x22 + 0x80);
            uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
            uVar34 = *(undefined8 *)(unaff_x22 + 0xa8);
            uVar33 = *(undefined8 *)(unaff_x22 + 0xa0);
            *(undefined8 *)(puVar19 + uVar15 * 0x50 + 0x58) = *(undefined8 *)(unaff_x22 + 0x98);
            *(undefined8 *)(puVar19 + uVar15 * 0x50 + 0x50) = uVar13;
            *(undefined8 *)(puVar19 + uVar15 * 0x50 + 0x68) = uVar34;
            *(undefined8 *)(puVar19 + uVar15 * 0x50 + 0x60) = uVar33;
            *(undefined8 *)(puVar19 + uVar15 * 0x50 + 0x38) = uVar22;
            *(undefined8 *)(puVar19 + uVar15 * 0x50 + 0x30) = uVar32;
            *(undefined8 *)(puVar19 + uVar15 * 0x50 + 0x48) = uVar12;
            *(undefined8 *)(puVar19 + uVar15 * 0x50 + 0x40) = uVar27;
            func_0x000107c61170(uVar18);
            func_0x000101b9d508(unaff_x22 + 0x60);
            lVar21 = lVar25 + 1;
            if (SCARRY8(lVar25,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0da8);
              (*pcVar3)();
            }
          }
          puVar23 = *(undefined1 **)(unaff_x22 + 0x4c8);
        } while (puVar23 != *(undefined1 **)(unaff_x22 + 0x4a0));
        uVar18 = *(undefined8 *)(unaff_x22 + 0x498);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x480);
        func_0x000107c61430(*(undefined8 *)(unaff_x22 + 0x488),2);
        func_0x000107c6142c(uVar32);
        func_0x000107c6142c(uVar18);
      }
      uVar15 = *(long *)(unaff_x22 + 0x478) + 1;
    } while (uVar15 != *(ulong *)(unaff_x22 + 0x3a8));
    lVar28 = *(long *)(unaff_x22 + 0x470);
    lVar30 = *(long *)(unaff_x22 + 0x468);
    lVar25 = *(long *)(unaff_x22 + 0x460);
    lVar29 = *(long *)(unaff_x22 + 0x458);
  }
  uVar18 = *(undefined8 *)(unaff_x22 + 0x3a0);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x330));
  func_0x000107c6142c(uVar18);
  lVar2 = lVar28 - lVar30;
  if (SBORROW8(lVar28,lVar30)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0d90);
    (*pcVar3)();
  }
  lVar28 = lVar25 - lVar29;
  if (SBORROW8(lVar25,lVar29)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0d94);
    (*pcVar3)();
  }
  lVar25 = lVar14 - lVar21;
  if (SBORROW8(lVar14,lVar21)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0d98);
    (*pcVar3)();
  }
  if (SCARRY8(lVar2,lVar28)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0d9c);
    (*pcVar3)();
  }
  if (SCARRY8(lVar2 + lVar28,lVar25)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba0da0);
    (*pcVar3)();
  }
  if (0 < lVar2 + lVar28 + lVar25) {
    lVar21 = *(long *)(unaff_x22 + 0x308);
    lStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x5c);
    func_0x000107c5fb78(0xd00000000000002c,0x800000010f001ec0);
    *(long *)(unaff_x22 + 0x2f0) = lVar2;
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    puVar24 = PTR___sSiN_11034deb0;
    puVar31 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar31);
    func_0x000107c5fb78(0xd000000000000011,0x800000010f001ef0);
    *(long *)(unaff_x22 + 0x2f8) = lVar28;
    puVar31 = puVar9;
    func_0x000107c6057c(puVar24,puVar9);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar31);
    func_0x000107c5fb78(0xd000000000000019,0x800000010f001f10);
    *(long *)(unaff_x22 + 0x300) = lVar25;
    func_0x000107c6057c(puVar24);
    puVar24 = puVar9;
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar9);
    uVar18 = uStack_68;
    lVar14 = lStack_70;
    func_0x000107c5cab0();
    func_0x000107c61180();
    if (lVar21 == 0) {
      lVar25 = 0;
      puVar24 = (undefined *)0x0;
    }
    else {
      lVar25 = lVar21;
      func_0x000107c5faec();
      func_0x000107c61170(lVar21);
    }
    lVar21 = *(long *)(unaff_x22 + 0x318);
    uVar32 = *(undefined8 *)(lVar21 + 0x60);
    uVar22 = *(undefined8 *)(lVar21 + 0x28);
    puVar9 = &UNK_110450670;
    func_0x000107c613fc(&UNK_110450670,0x18,7);
    func_0x000107c61644(puVar9 + 0x10,lVar21);
    puVar31 = &UNK_110450698;
    func_0x000107c613fc(&UNK_110450698,0x50,7);
    *(undefined **)(puVar31 + 0x10) = puVar9;
    *(long *)(puVar31 + 0x18) = lVar14;
    *(undefined8 *)(puVar31 + 0x20) = uVar18;
    puVar31[0x28] = 1;
    *(undefined8 *)(puVar31 + 0x30) = 0;
    *(undefined8 *)(puVar31 + 0x38) = 0;
    *(long *)(puVar31 + 0x40) = lVar25;
    *(undefined **)(puVar31 + 0x48) = puVar24;
    *(code **)(unaff_x22 + 0x1c0) = FUN_101baca00;
    *(undefined **)(unaff_x22 + 0x1c8) = puVar31;
    *(undefined **)(unaff_x22 + 0x1a0) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x1a8) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x1b0) = &UNK_100288f10;
    *(undefined **)(unaff_x22 + 0x1b8) = &UNK_1104506b0;
    lVar14 = unaff_x22 + 0x1a0;
    func_0x000107c60bc4(lVar14);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x1c8);
    func_0x000107c61434(puVar24);
    func_0x000107c61434(uVar18);
    func_0x000107c61574(uVar27);
    func_0x000108ec0f10(uVar32,uVar22,lVar14);
    func_0x000107c60bd0(lVar14);
    func_0x000107c6142c(puVar24);
    func_0x000107c6142c(uVar18);
  }
  uVar18 = *(undefined8 *)(unaff_x22 + 0x370);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x368);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x338));
  func_0x000107c6142c(uVar32);
  func_0x000107c61170(uVar18);
                    /* WARNING: Could not recover jumptable at 0x000101ba0770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar19);
  return;
}



/* Entry: 101ba0dcc; end: 101ba0e37;  */

void FUN_101ba0dcc(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x390) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x388));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x398) = param_1;
    pcVar1 = FUN_101ba0e38;
  }
  else {
    pcVar1 = FUN_101ba5a6c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101ba0e38; end: 101ba1ed7;  */

void FUN_101ba0e38(void)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  undefined *puVar21;
  long unaff_x22;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long *plStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *UNRECOVERED_JUMPTABLE_00;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar17 = *(undefined8 *)(unaff_x22 + 0x398);
  lVar15 = *(long *)(unaff_x22 + 0x380);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x378);
  lVar11 = lVar15;
  func_0x000101bac174(lVar15,uVar18,uVar17);
  *(long *)(unaff_x22 + 0x3a0) = lVar11;
  func_0x000107c6142c(uVar17);
  func_0x000107c6142c(lVar15);
  func_0x000107c6142c(uVar18);
  lVar11 = *(long *)(lVar11 + 0x10);
  *(long *)(unaff_x22 + 0x3a8) = lVar11;
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar11 == 0) {
    lVar15 = 0;
    lVar11 = 0;
    lVar25 = 0;
    lVar22 = 0;
    lVar26 = 0;
    lVar23 = 0;
  }
  else {
    lVar15 = 0;
    lVar11 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar12 = 0;
    do {
      *(ulong *)(unaff_x22 + 0x3b0) = uVar12;
      if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1e8c);
        (*pcVar3)();
      }
      lVar22 = *(long *)(unaff_x22 + 0x3a0) + uVar12 * 0x20;
      uVar12 = *(ulong *)(lVar22 + 0x20);
      *(ulong *)(unaff_x22 + 0x3b8) = uVar12;
      uVar19 = *(undefined8 *)(lVar22 + 0x28);
      *(undefined8 *)(unaff_x22 + 0x3c0) = uVar19;
      *(undefined8 *)(unaff_x22 + 0x3c8) = *(undefined8 *)(lVar22 + 0x30);
      uVar24 = *(undefined8 *)(lVar22 + 0x38);
      *(undefined8 *)(unaff_x22 + 0x3d0) = uVar24;
      if (uVar12 >> 0x3e == 0) {
        uVar13 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
        *(ulong *)(unaff_x22 + 0x3d8) = uVar13;
      }
      else {
        uVar13 = uVar12 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar12) {
          uVar13 = uVar12;
        }
        func_0x000107c60480();
        *(ulong *)(unaff_x22 + 0x3d8) = uVar13;
      }
      if (uVar13 != 0) {
        func_0x000107c61438(uVar12,2);
        func_0x000107c61434(uVar19);
        func_0x000107c61434(uVar24);
        puVar20 = (undefined1 *)0x0;
        do {
          *(undefined **)(unaff_x22 + 0x400) = puVar16;
          *(undefined8 *)(unaff_x22 + 0x3f8) = uVar18;
          *(undefined8 *)(unaff_x22 + 0x3f0) = uVar17;
          *(long *)(unaff_x22 + 1000) = lVar11;
          *(long *)(unaff_x22 + 0x3e0) = lVar15;
          uVar12 = *(ulong *)(unaff_x22 + 0x3b8);
          if ((uVar12 & 0xc000000000000001) == 0) {
            if (*(undefined1 **)((uVar12 & 0xffffffffffffff8) + 0x10) <= puVar20) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1e70);
              (*pcVar3)();
            }
            puVar8 = *(undefined1 **)(uVar12 + (long)puVar20 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar8 = puVar20;
            func_0x000101b9be90();
          }
          *(undefined1 **)(unaff_x22 + 0x408) = puVar8;
          *(undefined1 **)(unaff_x22 + 0x410) = puVar20 + 1;
          if (SCARRY8((long)puVar20,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1e6c);
            (*pcVar3)();
          }
          if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
            FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x1f8);
            uVar18 = *(undefined8 *)(unaff_x22 + 0x210);
            lVar11 = *(long *)(unaff_x22 + 0x218);
            uVar17 = uVar18;
            FUN_101bacf60(unaff_x22 + 0x1f8);
            func_0x000107c4a77c();
            func_0x000107c61180();
            if (puVar8 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1ec8);
              (*pcVar3)();
            }
            puVar20 = puVar8;
            func_0x000107c5faec();
            func_0x000107c61170(puVar8);
            *(undefined8 *)(unaff_x22 + 0x418) = uVar17;
            piVar14 = *(int **)(lVar11 + 8);
            plVar5 = (long *)(ulong)(uint)piVar14[1];
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar14 + (long)piVar14);
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x420) = plVar5;
            pcVar3 = FUN_101ba1ed8;
            goto LAB_101ba1550;
          }
          func_0x000107c51f9c();
          func_0x000107c61180();
          *(undefined1 **)(unaff_x22 + 0x430) = puVar8;
          if (puVar8 == (undefined1 *)0x0) {
            func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
            puVar16 = *(undefined **)(unaff_x22 + 0x400);
            uVar18 = *(undefined8 *)(unaff_x22 + 0x3f8);
            uVar17 = *(undefined8 *)(unaff_x22 + 0x3f0);
            lVar11 = *(long *)(unaff_x22 + 1000);
LAB_101ba1368:
            lVar15 = *(long *)(unaff_x22 + 0x3e0);
          }
          else {
            puVar20 = puVar8;
            func_0x000107c5b420();
            if ((int)puVar20 != 4) {
              if ((int)puVar20 == 6) {
                *(long *)(unaff_x22 + 0x438) = *(long *)(unaff_x22 + 0x3f8) + 1;
                if (SCARRY8(*(long *)(unaff_x22 + 0x3f8),1)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1eb8);
                  (*pcVar3)();
                }
                lVar11 = *(long *)(unaff_x22 + 0x408);
                func_0x000107c4a77c();
                func_0x000107c61180();
                if (lVar11 != 0) {
                  lVar15 = lVar11;
                  func_0x000107c5faec();
                  func_0x000107c61170(lVar11);
                  *(ulong *)(unaff_x22 + 0x440) = uVar12;
                  plVar5 = (long *)0x60;
                  func_0x000107c615b8();
                  *(long **)(unaff_x22 + 0x448) = plVar5;
                  *plVar5 = unaff_x22;
                  plVar5[1] = (long)FUN_101ba2f64;
                  lVar11 = *(long *)(unaff_x22 + 0x3d0);
                  plVar5[6] = *(long *)(unaff_x22 + 0x3c8);
                  plVar5[7] = lVar11;
                  plVar5[4] = lVar15;
                  plVar5[5] = uVar12;
                  plVar5[2] = unaff_x22 + 0x10;
                  plVar5[3] = (long)puVar8;
                  lVar11 = 0;
                  func_0x000107c5eea4();
                  plVar5[8] = lVar11;
                  lVar11 = *(long *)(lVar11 + -8);
                  plVar5[9] = lVar11;
                  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
                  func_0x000107c615b8();
                  plVar5[10] = uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bacab8,0,0);
                  return;
                }
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1ed0);
                (*pcVar3)();
              }
              func_0x000101b9d5ac();
              puVar16 = &UNK_1106c31f8;
              func_0x000107c613f8(&UNK_1106c31f8,puVar20,0,0);
              *puVar20 = 0x37;
              func_0x000107c61654();
              func_0x000107c61170(puVar8);
              lVar11 = *(long *)(unaff_x22 + 1000);
LAB_101ba1340:
              uVar18 = *(undefined8 *)(unaff_x22 + 0x3f8);
              if (*(char *)(unaff_x22 + 0x542) == '\x01') {
                func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
                func_0x000107c614ac(puVar16);
                puVar16 = *(undefined **)(unaff_x22 + 0x400);
                uVar17 = *(undefined8 *)(unaff_x22 + 0x3f0);
                goto LAB_101ba1368;
              }
              *(undefined8 *)(unaff_x22 + 0x4f8) = uVar18;
              *(long *)(unaff_x22 + 0x4f0) = lVar11;
              *(undefined **)(unaff_x22 + 0x4e8) = puVar16;
              lVar11 = *(long *)(unaff_x22 + 0x408);
              FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x220);
              uVar18 = *(undefined8 *)(unaff_x22 + 0x238);
              lVar15 = *(long *)(unaff_x22 + 0x240);
              uVar17 = uVar18;
              FUN_101bacf60(unaff_x22 + 0x220);
              func_0x000107c4a77c();
              func_0x000107c61180();
              if (lVar11 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1ecc);
                (*pcVar3)();
              }
              lVar22 = lVar11;
              func_0x000107c5faec();
              func_0x000107c61170(lVar11);
              *(undefined8 *)(unaff_x22 + 0x500) = uVar17;
              func_0x000107c614cc(puVar16,unaff_x22 + 0x2d0,unaff_x22 + 0x298);
              uVar19 = *(undefined8 *)(unaff_x22 + 0x2a0);
              FUN_101da5a48(uVar19,*(undefined8 *)(unaff_x22 + 0x2a8));
              piVar14 = *(int **)(lVar15 + 0x10);
              plVar5 = (long *)(ulong)(uint)piVar14[1];
              UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar14 + (long)piVar14);
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0x508) = plVar5;
              *plVar5 = unaff_x22;
              plVar5[1] = (long)FUN_101ba6b18;
              uVar10 = *(undefined8 *)(unaff_x22 + 0x370);
              uVar9 = *(undefined8 *)(unaff_x22 + 0x330);
              uVar24 = *(undefined8 *)(unaff_x22 + 0x328);
              goto LAB_101ba166c;
            }
            lVar11 = *(long *)(unaff_x22 + 1000) + 1;
            if (SCARRY8(*(long *)(unaff_x22 + 1000),1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1e74);
              (*pcVar3)();
            }
            lVar15 = *(long *)(unaff_x22 + 0x408);
            func_0x000107c4a77c();
            func_0x000107c61180();
            if (lVar15 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1ec0);
              (*pcVar3)();
            }
            lVar22 = lVar15;
            func_0x000107c5faec();
            func_0x000107c61170(lVar15);
            puVar20 = puVar8;
            func_0x000107c3fd58();
            func_0x000107c61180();
            if (puVar20 == (undefined1 *)0x0) {
              func_0x000101b9d5ac();
              puVar16 = &UNK_1106c31f8;
              func_0x000107c613f8(&UNK_1106c31f8,puVar20,0,0);
              *puVar20 = 0x3a;
              func_0x000107c61654();
LAB_101ba1330:
              func_0x000107c6142c(uVar12);
              func_0x000107c61170(puVar8);
              goto LAB_101ba1340;
            }
            puVar4 = puVar20;
            func_0x000107c5b67c();
            func_0x000107c61180();
            if (puVar4 == (undefined1 *)0x0) {
LAB_101ba12c4:
              func_0x000101b9d5ac();
              puVar16 = &UNK_1106c31f8;
              func_0x000107c613f8(&UNK_1106c31f8,puVar4,0,0);
              *puVar4 = 0x3b;
              func_0x000107c61654();
              func_0x000107c61170(puVar20);
              goto LAB_101ba1330;
            }
            lStack_70 = 0;
            plVar5 = &lStack_70;
            func_0x000107c5fc50();
            func_0x000107c61170();
            lVar23 = lStack_70;
            if (lStack_70 == 0) goto LAB_101ba12c4;
            puVar8 = puVar20;
            func_0x000107c4b1dc();
            func_0x000107c61180();
            if (puVar8 == (undefined1 *)0x0) {
              puStack_88 = (undefined1 *)0x0;
              plVar5 = (long *)0x0;
            }
            else {
              puStack_88 = puVar8;
              func_0x000107c5faec();
              func_0x000107c61170(puVar8);
            }
            lVar25 = *(long *)(unaff_x22 + 0x3e0);
            uVar17 = *(undefined8 *)(unaff_x22 + 0x3d0);
            puVar8 = puVar20;
            func_0x000107c3fd50();
            func_0x000107c61180();
            func_0x000107c61170(puVar20);
            lVar15 = lVar25 + 1;
            func_0x000107c61434(uVar17);
            if (SCARRY8(lVar25,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1e90);
              (*pcVar3)();
            }
            uVar18 = *(undefined8 *)(unaff_x22 + 0x3f8);
            uVar17 = *(undefined8 *)(unaff_x22 + 0x3f0);
            uVar13 = *(ulong *)(unaff_x22 + 0x400);
            *(long *)(unaff_x22 + 0x100) = lVar22;
            *(ulong *)(unaff_x22 + 0x108) = uVar12;
            *(undefined1 *)(unaff_x22 + 0x110) = 0;
            *(undefined8 *)(unaff_x22 + 0x118) = 0;
            *(long *)(unaff_x22 + 0x120) = lVar23;
            *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x3d0);
            *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x3c8);
            *(undefined1 **)(unaff_x22 + 0x138) = puStack_88;
            *(long **)(unaff_x22 + 0x140) = plVar5;
            *(undefined1 **)(unaff_x22 + 0x148) = puVar8;
            FUN_101b9d4cc(unaff_x22 + 0x100,unaff_x22 + 0x150);
            func_0x000107c61558();
            puVar16 = *(undefined **)(unaff_x22 + 0x400);
            puVar21 = puVar16;
            if ((uVar13 & 1) == 0) {
              puVar21 = (undefined *)0x0;
              FUN_101b9bfcc(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
            }
            uVar12 = *(ulong *)(puVar21 + 0x10);
            puVar16 = puVar21;
            if (*(ulong *)(puVar21 + 0x18) >> 1 <= uVar12) {
              puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar21 + 0x18));
              FUN_101b9bfcc(puVar16,uVar12 + 1,1,puVar21);
            }
            uVar19 = *(undefined8 *)(unaff_x22 + 0x430);
            uVar24 = *(undefined8 *)(unaff_x22 + 0x408);
            *(ulong *)(puVar16 + 0x10) = uVar12 + 1;
            uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x28) = *(undefined8 *)(unaff_x22 + 0x108);
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x20) = uVar9;
            uVar10 = *(undefined8 *)(unaff_x22 + 0x118);
            uVar9 = *(undefined8 *)(unaff_x22 + 0x110);
            uVar28 = *(undefined8 *)(unaff_x22 + 0x128);
            uVar27 = *(undefined8 *)(unaff_x22 + 0x120);
            uVar29 = *(undefined8 *)(unaff_x22 + 0x130);
            uVar31 = *(undefined8 *)(unaff_x22 + 0x148);
            uVar30 = *(undefined8 *)(unaff_x22 + 0x140);
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x58) = *(undefined8 *)(unaff_x22 + 0x138);
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x50) = uVar29;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x68) = uVar31;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x60) = uVar30;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x38) = uVar10;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x30) = uVar9;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x48) = uVar28;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x40) = uVar27;
            func_0x000107c61170(uVar19);
            func_0x000107c61170(uVar24);
            func_0x000101b9d508(unaff_x22 + 0x100);
          }
          puVar20 = *(undefined1 **)(unaff_x22 + 0x410);
        } while (puVar20 != *(undefined1 **)(unaff_x22 + 0x3d8));
        uVar19 = *(undefined8 *)(unaff_x22 + 0x3d0);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x3c0);
        func_0x000107c61430(*(undefined8 *)(unaff_x22 + 0x3b8),2);
        func_0x000107c6142c(uVar24);
        func_0x000107c6142c(uVar19);
      }
      *(undefined8 *)(unaff_x22 + 0x470) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x468) = uVar17;
      *(long *)(unaff_x22 + 0x460) = lVar11;
      *(long *)(unaff_x22 + 0x458) = lVar15;
      uVar12 = *(long *)(unaff_x22 + 0x3b0) + 1;
    } while (uVar12 != *(ulong *)(unaff_x22 + 0x3a8));
    lVar15 = 0;
    lVar11 = 0;
    uVar12 = 0;
    do {
      *(ulong *)(unaff_x22 + 0x478) = uVar12;
      if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1ebc);
        (*pcVar3)();
      }
      lVar22 = *(long *)(unaff_x22 + 0x3a0) + uVar12 * 0x20;
      uVar17 = *(undefined8 *)(lVar22 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x480) = uVar17;
      uVar12 = *(ulong *)(lVar22 + 0x28);
      *(ulong *)(unaff_x22 + 0x488) = uVar12;
      *(undefined8 *)(unaff_x22 + 0x490) = *(undefined8 *)(lVar22 + 0x30);
      uVar18 = *(undefined8 *)(lVar22 + 0x38);
      *(undefined8 *)(unaff_x22 + 0x498) = uVar18;
      if (uVar12 >> 0x3e == 0) {
        uVar13 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
        *(ulong *)(unaff_x22 + 0x4a0) = uVar13;
      }
      else {
        uVar13 = uVar12 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar12) {
          uVar13 = uVar12;
        }
        func_0x000107c60480(uVar13);
        func_0x000107c60480();
        *(ulong *)(unaff_x22 + 0x4a0) = uVar13;
      }
      if (uVar13 != 0) {
        func_0x000107c61438(uVar12,2);
        func_0x000107c61434(uVar17);
        func_0x000107c61434(uVar18);
        puVar20 = (undefined1 *)0x0;
        do {
          *(undefined **)(unaff_x22 + 0x4b8) = puVar16;
          *(long *)(unaff_x22 + 0x4b0) = lVar11;
          *(long *)(unaff_x22 + 0x4a8) = lVar15;
          uVar12 = *(ulong *)(unaff_x22 + 0x488);
          if ((uVar12 & 0xc000000000000001) == 0) {
            if (*(undefined1 **)((uVar12 & 0xffffffffffffff8) + 0x10) <= puVar20) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1eb0);
              (*pcVar3)();
            }
            puVar8 = *(undefined1 **)(uVar12 + (long)puVar20 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar8 = puVar20;
            func_0x000101b9be7c();
          }
          *(undefined1 **)(unaff_x22 + 0x4c0) = puVar8;
          *(undefined1 **)(unaff_x22 + 0x4c8) = puVar20 + 1;
          if (SCARRY8((long)puVar20,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1e94);
            (*pcVar3)();
          }
          if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
            FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x248);
            uVar18 = *(undefined8 *)(unaff_x22 + 0x260);
            lVar11 = *(long *)(unaff_x22 + 0x268);
            uVar17 = uVar18;
            FUN_101bacf60(unaff_x22 + 0x248);
            func_0x000107c4a77c();
            func_0x000107c61180();
            if (puVar8 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1ed4);
              (*pcVar3)();
            }
            puVar20 = puVar8;
            func_0x000107c5faec();
            func_0x000107c61170(puVar8);
            *(undefined8 *)(unaff_x22 + 0x4d0) = uVar17;
            piVar14 = *(int **)(lVar11 + 8);
            plVar5 = (long *)(ulong)(uint)piVar14[1];
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar14 + (long)piVar14);
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x4d8) = plVar5;
            pcVar3 = FUN_101ba507c;
LAB_101ba1550:
            *plVar5 = unaff_x22;
            plVar5[1] = (long)pcVar3;
                    /* WARNING: Could not recover jumptable at 0x000101ba159c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)
                      (*(undefined8 *)(unaff_x22 + 0x310),puVar20,uVar17,
                       *(undefined8 *)(unaff_x22 + 0x360),*(undefined8 *)(unaff_x22 + 0x368),
                       *(undefined8 *)(unaff_x22 + 0x370),uVar18,lVar11);
            return;
          }
          lVar11 = *(long *)(unaff_x22 + 0x4b0) + 1;
          if (SCARRY8(*(long *)(unaff_x22 + 0x4b0),1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1e98);
            (*pcVar3)();
          }
          puVar16 = PTR_PTR_1126bf7f0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar21 = PTR_PTR_1126bf8d0;
          func_0x000107c610f8(PTR_PTR_1126bf8d0);
          func_0x000107c453e4();
          func_0x000107c53574(puVar16);
          func_0x000107c61170(puVar21);
          puVar20 = puVar16;
          func_0x000107c3fd58();
          func_0x000107c61180();
          if (puVar20 != (undefined1 *)0x0) {
            uVar17 = *(undefined8 *)(unaff_x22 + 0x4c0);
            func_0x000107c5b2dc(uVar17);
            func_0x000107c61180();
            func_0x000107c59588(puVar20);
            func_0x000107c61170(uVar17);
            func_0x000107c61170(puVar20);
          }
          puVar20 = puVar16;
          func_0x000107c3fd58();
          func_0x000107c61180();
          if (puVar20 != (undefined1 *)0x0) {
            uVar17 = *(undefined8 *)(unaff_x22 + 0x4c0);
            func_0x000107c3fd54(uVar17);
            func_0x000107c61180();
            func_0x000107c55d70(puVar20);
            func_0x000107c61170(uVar17);
            func_0x000107c61170(puVar20);
          }
          lVar15 = *(long *)(unaff_x22 + 0x4c0);
          func_0x000107c4a77c();
          func_0x000107c61180();
          if (lVar15 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1ec4);
            (*pcVar3)();
          }
          lVar22 = lVar15;
          func_0x000107c5faec();
          func_0x000107c61170(lVar15);
          puVar20 = puVar16;
          func_0x000107c3fd58();
          func_0x000107c61180();
          if (puVar20 == (undefined1 *)0x0) {
            func_0x000101b9d5ac();
            puVar21 = &UNK_1106c31f8;
            func_0x000107c613f8(&UNK_1106c31f8,puVar20,0,0);
            *puVar20 = 0x3a;
            func_0x000107c61654();
LAB_101ba1b90:
            func_0x000107c6142c(uVar12);
            bVar1 = *(byte *)(unaff_x22 + 0x542);
            func_0x000107c61170(puVar16);
            if ((bVar1 & 1) == 0) {
              *(long *)(unaff_x22 + 0x520) = lVar11;
              *(undefined **)(unaff_x22 + 0x518) = puVar21;
              lVar11 = *(long *)(unaff_x22 + 0x4c0);
              FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x270);
              uVar18 = *(undefined8 *)(unaff_x22 + 0x288);
              lVar15 = *(long *)(unaff_x22 + 0x290);
              uVar17 = uVar18;
              FUN_101bacf60(unaff_x22 + 0x270);
              func_0x000107c4a77c();
              func_0x000107c61180();
              if (lVar11 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1ed8);
                (*pcVar3)();
              }
              lVar22 = lVar11;
              func_0x000107c5faec();
              func_0x000107c61170(lVar11);
              *(undefined8 *)(unaff_x22 + 0x528) = uVar17;
              func_0x000107c614cc(puVar21,unaff_x22 + 0x2e0,unaff_x22 + 0x2b0);
              uVar19 = *(undefined8 *)(unaff_x22 + 0x2b8);
              FUN_101da5a48(uVar19,*(undefined8 *)(unaff_x22 + 0x2c0));
              piVar14 = *(int **)(lVar15 + 0x10);
              plVar5 = (long *)(ulong)(uint)piVar14[1];
              UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar14 + (long)piVar14);
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0x530) = plVar5;
              *plVar5 = unaff_x22;
              plVar5[1] = (long)FUN_101ba8dec;
              uVar10 = *(undefined8 *)(unaff_x22 + 0x370);
              uVar9 = *(undefined8 *)(unaff_x22 + 0x330);
              uVar24 = *(undefined8 *)(unaff_x22 + 0x328);
LAB_101ba166c:
                    /* WARNING: Could not recover jumptable at 0x000101ba169c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_00)(lVar22,uVar17,uVar24,uVar9,uVar19,uVar10,uVar18,lVar15);
              return;
            }
            func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x4c0));
            func_0x000107c614ac(puVar21);
            puVar16 = *(undefined **)(unaff_x22 + 0x4b8);
            lVar15 = *(long *)(unaff_x22 + 0x4a8);
          }
          else {
            puVar8 = puVar20;
            func_0x000107c5b67c();
            func_0x000107c61180();
            if (puVar8 == (undefined1 *)0x0) {
LAB_101ba1b24:
              func_0x000101b9d5ac();
              puVar21 = &UNK_1106c31f8;
              func_0x000107c613f8(&UNK_1106c31f8,puVar8,0,0);
              *puVar8 = 0x3b;
              func_0x000107c61654();
              func_0x000107c61170(puVar20);
              goto LAB_101ba1b90;
            }
            lStack_70 = 0;
            plStack_90 = &lStack_70;
            func_0x000107c5fc50();
            func_0x000107c61170();
            lVar15 = lStack_70;
            if (lStack_70 == 0) goto LAB_101ba1b24;
            puVar8 = puVar20;
            func_0x000107c4b1dc();
            func_0x000107c61180();
            if (puVar8 == (undefined1 *)0x0) {
              puStack_80 = (undefined1 *)0x0;
              plStack_90 = (long *)0x0;
            }
            else {
              puStack_80 = puVar8;
              func_0x000107c5faec();
              func_0x000107c61170(puVar8);
            }
            uVar13 = *(ulong *)(unaff_x22 + 0x4b8);
            uVar17 = *(undefined8 *)(unaff_x22 + 0x498);
            uVar18 = *(undefined8 *)(unaff_x22 + 0x490);
            puVar8 = puVar20;
            func_0x000107c3fd50();
            func_0x000107c61180();
            func_0x000107c61170(puVar20);
            *(long *)(unaff_x22 + 0x60) = lVar22;
            *(ulong *)(unaff_x22 + 0x68) = uVar12;
            *(undefined1 *)(unaff_x22 + 0x70) = 0;
            *(undefined8 *)(unaff_x22 + 0x78) = 0;
            *(long *)(unaff_x22 + 0x80) = lVar15;
            *(undefined8 *)(unaff_x22 + 0x88) = uVar18;
            *(undefined8 *)(unaff_x22 + 0x90) = uVar17;
            *(undefined1 **)(unaff_x22 + 0x98) = puStack_80;
            *(long **)(unaff_x22 + 0xa0) = plStack_90;
            *(undefined1 **)(unaff_x22 + 0xa8) = puVar8;
            func_0x000107c61434(uVar17);
            func_0x000107c61170(puVar16);
            FUN_101b9d4cc(unaff_x22 + 0x60,unaff_x22 + 0xb0);
            func_0x000107c61558();
            puVar16 = *(undefined **)(unaff_x22 + 0x4b8);
            puVar21 = puVar16;
            if ((uVar13 & 1) == 0) {
              puVar21 = (undefined *)0x0;
              FUN_101b9bfcc(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
            }
            uVar12 = *(ulong *)(puVar21 + 0x10);
            puVar16 = puVar21;
            if (*(ulong *)(puVar21 + 0x18) >> 1 <= uVar12) {
              puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar21 + 0x18));
              FUN_101b9bfcc(puVar16,uVar12 + 1,1,puVar21);
            }
            uVar17 = *(undefined8 *)(unaff_x22 + 0x4c0);
            lVar22 = *(long *)(unaff_x22 + 0x4a8);
            *(ulong *)(puVar16 + 0x10) = uVar12 + 1;
            uVar18 = *(undefined8 *)(unaff_x22 + 0x60);
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x28) = *(undefined8 *)(unaff_x22 + 0x68);
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x20) = uVar18;
            uVar19 = *(undefined8 *)(unaff_x22 + 0x78);
            uVar18 = *(undefined8 *)(unaff_x22 + 0x70);
            uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
            uVar24 = *(undefined8 *)(unaff_x22 + 0x80);
            uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
            uVar28 = *(undefined8 *)(unaff_x22 + 0xa8);
            uVar27 = *(undefined8 *)(unaff_x22 + 0xa0);
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x58) = *(undefined8 *)(unaff_x22 + 0x98);
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x50) = uVar10;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x68) = uVar28;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x60) = uVar27;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x38) = uVar19;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x30) = uVar18;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x48) = uVar9;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x40) = uVar24;
            func_0x000107c61170(uVar17);
            func_0x000101b9d508(unaff_x22 + 0x60);
            lVar15 = lVar22 + 1;
            if (SCARRY8(lVar22,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1eb4);
              (*pcVar3)();
            }
          }
          puVar20 = *(undefined1 **)(unaff_x22 + 0x4c8);
        } while (puVar20 != *(undefined1 **)(unaff_x22 + 0x4a0));
        uVar18 = *(undefined8 *)(unaff_x22 + 0x498);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x480);
        func_0x000107c61430(*(undefined8 *)(unaff_x22 + 0x488),2);
        func_0x000107c6142c(uVar17);
        func_0x000107c6142c(uVar18);
      }
      uVar12 = *(long *)(unaff_x22 + 0x478) + 1;
    } while (uVar12 != *(ulong *)(unaff_x22 + 0x3a8));
    lVar23 = *(long *)(unaff_x22 + 0x470);
    lVar26 = *(long *)(unaff_x22 + 0x468);
    lVar22 = *(long *)(unaff_x22 + 0x460);
    lVar25 = *(long *)(unaff_x22 + 0x458);
  }
  uVar17 = *(undefined8 *)(unaff_x22 + 0x3a0);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x330));
  func_0x000107c6142c(uVar17);
  lVar2 = lVar23 - lVar26;
  if (SBORROW8(lVar23,lVar26)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1e9c);
    (*pcVar3)();
  }
  lVar23 = lVar22 - lVar25;
  if (SBORROW8(lVar22,lVar25)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1ea0);
    (*pcVar3)();
  }
  lVar22 = lVar11 - lVar15;
  if (SBORROW8(lVar11,lVar15)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1ea4);
    (*pcVar3)();
  }
  if (!SCARRY8(lVar2,lVar23)) {
    if (!SCARRY8(lVar2 + lVar23,lVar22)) {
      if (0 < lVar2 + lVar23 + lVar22) {
        lVar15 = *(long *)(unaff_x22 + 0x308);
        lStack_70 = 0;
        uStack_68 = 0xe000000000000000;
        func_0x000107c602fc(0x5c);
        func_0x000107c5fb78(0xd00000000000002c,0x800000010f001ec0);
        *(long *)(unaff_x22 + 0x2f0) = lVar2;
        puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        puVar21 = PTR___sSiN_11034deb0;
        puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar7);
        func_0x000107c5fb78(0xd000000000000011,0x800000010f001ef0);
        *(long *)(unaff_x22 + 0x2f8) = lVar23;
        puVar7 = puVar6;
        func_0x000107c6057c(puVar21,puVar6);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar7);
        func_0x000107c5fb78(0xd000000000000019,0x800000010f001f10);
        *(long *)(unaff_x22 + 0x300) = lVar22;
        func_0x000107c6057c(puVar21);
        puVar21 = puVar6;
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar6);
        uVar17 = uStack_68;
        lVar11 = lStack_70;
        func_0x000107c5cab0();
        func_0x000107c61180();
        if (lVar15 == 0) {
          lVar22 = 0;
          puVar21 = (undefined *)0x0;
        }
        else {
          lVar22 = lVar15;
          func_0x000107c5faec();
          func_0x000107c61170(lVar15);
        }
        lVar15 = *(long *)(unaff_x22 + 0x318);
        uVar18 = *(undefined8 *)(lVar15 + 0x60);
        uVar19 = *(undefined8 *)(lVar15 + 0x28);
        puVar6 = &UNK_110450670;
        func_0x000107c613fc(&UNK_110450670,0x18,7);
        func_0x000107c61644(puVar6 + 0x10,lVar15);
        puVar7 = &UNK_110450698;
        func_0x000107c613fc(&UNK_110450698,0x50,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(long *)(puVar7 + 0x18) = lVar11;
        *(undefined8 *)(puVar7 + 0x20) = uVar17;
        puVar7[0x28] = 1;
        *(undefined8 *)(puVar7 + 0x30) = 0;
        *(undefined8 *)(puVar7 + 0x38) = 0;
        *(long *)(puVar7 + 0x40) = lVar22;
        *(undefined **)(puVar7 + 0x48) = puVar21;
        *(code **)(unaff_x22 + 0x1c0) = FUN_101baca00;
        *(undefined **)(unaff_x22 + 0x1c8) = puVar7;
        *(undefined **)(unaff_x22 + 0x1a0) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x1a8) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x1b0) = &UNK_100288f10;
        *(undefined **)(unaff_x22 + 0x1b8) = &UNK_1104506b0;
        lVar11 = unaff_x22 + 0x1a0;
        func_0x000107c60bc4(lVar11);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x1c8);
        func_0x000107c61434(puVar21);
        func_0x000107c61434(uVar17);
        func_0x000107c61574(uVar24);
        func_0x000108ec0f10(uVar18,uVar19,lVar11);
        func_0x000107c60bd0(lVar11);
        func_0x000107c6142c(puVar21);
        func_0x000107c6142c(uVar17);
      }
      uVar17 = *(undefined8 *)(unaff_x22 + 0x370);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x368);
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x338));
      func_0x000107c6142c(uVar18);
      func_0x000107c61170(uVar17);
                    /* WARNING: Could not recover jumptable at 0x000101ba1870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(puVar16);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1eac);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba1ea8);
  (*pcVar3)();
}



/* Entry: 101ba1ed8; end: 101ba1f3b;  */

void FUN_101ba1ed8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x428) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x420));
  func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x418));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101ba1f3c;
  }
  else {
    pcVar1 = FUN_101ba7bc8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101ba1f3c; end: 101ba2f63;  */

void FUN_101ba1f3c(undefined8 param_1,ulong param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long unaff_x22;
  undefined8 uVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 *puStack_90;
  undefined1 *puStack_80;
  code *UNRECOVERED_JUMPTABLE_00;
  long lStack_70;
  undefined8 uStack_68;
  
  FUN_101bacf10(unaff_x22 + 0x1f8);
  puVar3 = *(undefined1 **)(unaff_x22 + 0x408);
  do {
    func_0x000107c51f9c();
    func_0x000107c61180();
    *(undefined1 **)(unaff_x22 + 0x430) = puVar3;
    if (puVar3 == (undefined1 *)0x0) {
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
      uVar13 = *(ulong *)(unaff_x22 + 0x400);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x3f8);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x3f0);
      lVar14 = *(long *)(unaff_x22 + 1000);
LAB_101ba2160:
      lVar25 = *(long *)(unaff_x22 + 0x3e0);
    }
    else {
      puVar19 = puVar3;
      func_0x000107c5b420();
      if ((int)puVar19 != 4) {
        if ((int)puVar19 == 6) {
          *(long *)(unaff_x22 + 0x438) = *(long *)(unaff_x22 + 0x3f8) + 1;
          if (SCARRY8(*(long *)(unaff_x22 + 0x3f8),1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f48);
            (*pcVar2)();
          }
          lVar14 = *(long *)(unaff_x22 + 0x408);
          func_0x000107c4a77c();
          func_0x000107c61180();
          if (lVar14 != 0) {
            lVar10 = lVar14;
            func_0x000107c5faec();
            func_0x000107c61170(lVar14);
            *(ulong *)(unaff_x22 + 0x440) = param_2;
            plVar26 = (long *)0x60;
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x448) = plVar26;
            *plVar26 = unaff_x22;
            plVar26[1] = (long)FUN_101ba2f64;
            lVar14 = *(long *)(unaff_x22 + 0x3d0);
            plVar26[6] = *(long *)(unaff_x22 + 0x3c8);
            plVar26[7] = lVar14;
            plVar26[4] = lVar10;
            plVar26[5] = param_2;
            plVar26[2] = unaff_x22 + 0x10;
            plVar26[3] = (long)puVar3;
            lVar14 = 0;
            func_0x000107c5eea4();
            plVar26[8] = lVar14;
            lVar14 = *(long *)(lVar14 + -8);
            plVar26[9] = lVar14;
            uVar13 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            plVar26[10] = uVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_task_switch_110350130)(FUN_101bacab8,0,0);
            return;
          }
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f64);
          (*pcVar2)();
        }
        func_0x000101b9d5ac();
        puVar16 = &UNK_1106c31f8;
        func_0x000107c613f8(&UNK_1106c31f8,puVar19,0,0);
        *puVar19 = 0x37;
        func_0x000107c61654();
        func_0x000107c61170(puVar3);
        lVar14 = *(long *)(unaff_x22 + 1000);
LAB_101ba2134:
        uVar23 = *(undefined8 *)(unaff_x22 + 0x3f8);
        if (*(char *)(unaff_x22 + 0x542) != '\x01') {
          *(undefined8 *)(unaff_x22 + 0x4f8) = uVar23;
          *(long *)(unaff_x22 + 0x4f0) = lVar14;
          *(undefined **)(unaff_x22 + 0x4e8) = puVar16;
          lVar14 = *(long *)(unaff_x22 + 0x408);
          FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x220);
          uVar23 = *(undefined8 *)(unaff_x22 + 0x238);
          lVar10 = *(long *)(unaff_x22 + 0x240);
          uVar15 = uVar23;
          FUN_101bacf60(unaff_x22 + 0x220);
          func_0x000107c4a77c();
          func_0x000107c61180();
          if (lVar14 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f60);
            (*pcVar2)();
          }
          lVar18 = lVar14;
          func_0x000107c5faec();
          func_0x000107c61170(lVar14);
          *(undefined8 *)(unaff_x22 + 0x500) = uVar15;
          func_0x000107c614cc(puVar16,unaff_x22 + 0x2d0,unaff_x22 + 0x298);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x2a0);
          FUN_101da5a48(uVar17,*(undefined8 *)(unaff_x22 + 0x2a8));
          piVar12 = *(int **)(lVar10 + 0x10);
          plVar26 = (long *)(ulong)(uint)piVar12[1];
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar12 + (long)piVar12);
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x508) = plVar26;
          *plVar26 = unaff_x22;
          plVar26[1] = (long)FUN_101ba6b18;
          uVar9 = *(undefined8 *)(unaff_x22 + 0x370);
          uVar8 = *(undefined8 *)(unaff_x22 + 0x330);
          uVar20 = *(undefined8 *)(unaff_x22 + 0x328);
LAB_101ba2a18:
                    /* WARNING: Could not recover jumptable at 0x000101ba2a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)(lVar18,uVar15,uVar20,uVar8,uVar17,uVar9,uVar23,lVar10);
          return;
        }
        func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
        func_0x000107c614ac(puVar16);
        uVar13 = *(ulong *)(unaff_x22 + 0x400);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x3f0);
        goto LAB_101ba2160;
      }
      lVar14 = *(long *)(unaff_x22 + 1000) + 1;
      if (SCARRY8(*(long *)(unaff_x22 + 1000),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f28);
        (*pcVar2)();
      }
      lVar10 = *(long *)(unaff_x22 + 0x408);
      func_0x000107c4a77c();
      func_0x000107c61180();
      if (lVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f50);
        (*pcVar2)();
      }
      lVar18 = lVar10;
      func_0x000107c5faec();
      func_0x000107c61170(lVar10);
      puVar19 = puVar3;
      func_0x000107c3fd58();
      func_0x000107c61180();
      if (puVar19 == (undefined1 *)0x0) {
        func_0x000101b9d5ac();
        puVar16 = &UNK_1106c31f8;
        func_0x000107c613f8(&UNK_1106c31f8,puVar19,0,0);
        *puVar19 = 0x3a;
        func_0x000107c61654();
LAB_101ba2124:
        func_0x000107c6142c(param_2);
        func_0x000107c61170(puVar3);
        goto LAB_101ba2134;
      }
      puVar4 = puVar19;
      func_0x000107c5b67c();
      func_0x000107c61180();
      if (puVar4 == (undefined1 *)0x0) {
LAB_101ba20b8:
        func_0x000101b9d5ac();
        puVar16 = &UNK_1106c31f8;
        func_0x000107c613f8(&UNK_1106c31f8,puVar4,0,0);
        *puVar4 = 0x3b;
        func_0x000107c61654();
        func_0x000107c61170(puVar19);
        goto LAB_101ba2124;
      }
      lStack_70 = 0;
      plVar26 = &lStack_70;
      func_0x000107c5fc50();
      func_0x000107c61170();
      lVar10 = lStack_70;
      if (lStack_70 == 0) goto LAB_101ba20b8;
      puVar3 = puVar19;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      if (puVar3 == (undefined1 *)0x0) {
        puStack_90 = (undefined1 *)0x0;
        plVar26 = (long *)0x0;
      }
      else {
        puStack_90 = puVar3;
        func_0x000107c5faec();
        func_0x000107c61170(puVar3);
      }
      lVar21 = *(long *)(unaff_x22 + 0x3e0);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x3d0);
      puVar3 = puVar19;
      func_0x000107c3fd50();
      func_0x000107c61180();
      func_0x000107c61170(puVar19);
      lVar25 = lVar21 + 1;
      func_0x000107c61434(uVar15);
      if (SCARRY8(lVar21,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f30);
        (*pcVar2)();
      }
      uVar23 = *(undefined8 *)(unaff_x22 + 0x3f8);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x3f0);
      uVar13 = *(ulong *)(unaff_x22 + 0x400);
      *(long *)(unaff_x22 + 0x100) = lVar18;
      *(ulong *)(unaff_x22 + 0x108) = param_2;
      *(undefined1 *)(unaff_x22 + 0x110) = 0;
      *(undefined8 *)(unaff_x22 + 0x118) = 0;
      *(long *)(unaff_x22 + 0x120) = lVar10;
      *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x3d0);
      *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x3c8);
      *(undefined1 **)(unaff_x22 + 0x138) = puStack_90;
      *(long **)(unaff_x22 + 0x140) = plVar26;
      *(undefined1 **)(unaff_x22 + 0x148) = puVar3;
      FUN_101b9d4cc(unaff_x22 + 0x100,unaff_x22 + 0x150);
      func_0x000107c61558();
      uVar11 = *(ulong *)(unaff_x22 + 0x400);
      uVar5 = uVar11;
      if ((uVar13 & 1) == 0) {
        uVar5 = 0;
        FUN_101b9bfcc(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
      }
      uVar11 = *(ulong *)(uVar5 + 0x10);
      uVar13 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar11) {
        uVar13 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_101b9bfcc(uVar13,uVar11 + 1,1,uVar5);
      }
      uVar17 = *(undefined8 *)(unaff_x22 + 0x430);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x408);
      *(ulong *)(uVar13 + 0x10) = uVar11 + 1;
      lVar10 = uVar13 + uVar11 * 0x50;
      uVar8 = *(undefined8 *)(unaff_x22 + 0x100);
      *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(unaff_x22 + 0x108);
      *(undefined8 *)(lVar10 + 0x20) = uVar8;
      uVar9 = *(undefined8 *)(unaff_x22 + 0x118);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x130);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar30 = *(undefined8 *)(unaff_x22 + 0x140);
      *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)(unaff_x22 + 0x138);
      *(undefined8 *)(lVar10 + 0x50) = uVar29;
      *(undefined8 *)(lVar10 + 0x68) = uVar31;
      *(undefined8 *)(lVar10 + 0x60) = uVar30;
      *(undefined8 *)(lVar10 + 0x38) = uVar9;
      *(undefined8 *)(lVar10 + 0x30) = uVar8;
      *(undefined8 *)(lVar10 + 0x48) = uVar28;
      *(undefined8 *)(lVar10 + 0x40) = uVar27;
      func_0x000107c61170(uVar17);
      func_0x000107c61170(uVar20);
      func_0x000101b9d508(unaff_x22 + 0x100);
    }
    puVar19 = *(undefined1 **)(unaff_x22 + 0x410);
    param_2 = *(ulong *)(unaff_x22 + 0x3b8);
    if (puVar19 == *(undefined1 **)(unaff_x22 + 0x3d8)) {
      uVar17 = *(undefined8 *)(unaff_x22 + 0x3d0);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x3c0);
      func_0x000107c61430(param_2,2);
      func_0x000107c6142c(uVar20);
      func_0x000107c6142c(uVar17);
      do {
        while( true ) {
          *(undefined8 *)(unaff_x22 + 0x470) = uVar23;
          *(undefined8 *)(unaff_x22 + 0x468) = uVar15;
          *(long *)(unaff_x22 + 0x460) = lVar14;
          *(long *)(unaff_x22 + 0x458) = lVar25;
          uVar5 = *(long *)(unaff_x22 + 0x3b0) + 1;
          if (uVar5 == *(ulong *)(unaff_x22 + 0x3a8)) {
            lVar10 = 0;
            lVar14 = 0;
            uVar5 = 0;
            goto LAB_101ba2434;
          }
          *(ulong *)(unaff_x22 + 0x3b0) = uVar5;
          if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2dd4);
            (*pcVar2)();
          }
          lVar10 = *(long *)(unaff_x22 + 0x3a0) + uVar5 * 0x20;
          uVar5 = *(ulong *)(lVar10 + 0x20);
          *(ulong *)(unaff_x22 + 0x3b8) = uVar5;
          uVar17 = *(undefined8 *)(lVar10 + 0x28);
          *(undefined8 *)(unaff_x22 + 0x3c0) = uVar17;
          *(undefined8 *)(unaff_x22 + 0x3c8) = *(undefined8 *)(lVar10 + 0x30);
          uVar20 = *(undefined8 *)(lVar10 + 0x38);
          *(undefined8 *)(unaff_x22 + 0x3d0) = uVar20;
          if (uVar5 >> 0x3e != 0) break;
          lVar10 = *(long *)((uVar5 & 0xffffffffffffff8) + 0x10);
          *(long *)(unaff_x22 + 0x3d8) = lVar10;
          if (lVar10 != 0) goto LAB_101ba223c;
        }
        uVar11 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar11 = uVar5;
        }
        func_0x000107c60480();
        *(ulong *)(unaff_x22 + 0x3d8) = uVar11;
      } while (uVar11 == 0);
LAB_101ba223c:
      func_0x000107c61438(uVar5,2);
      func_0x000107c61434(uVar17);
      func_0x000107c61434(uVar20);
      puVar19 = (undefined1 *)0x0;
      param_2 = *(ulong *)(unaff_x22 + 0x3b8);
    }
    *(ulong *)(unaff_x22 + 0x400) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x3f8) = uVar23;
    *(undefined8 *)(unaff_x22 + 0x3f0) = uVar15;
    *(long *)(unaff_x22 + 1000) = lVar14;
    *(long *)(unaff_x22 + 0x3e0) = lVar25;
    if ((param_2 & 0xc000000000000001) == 0) {
      if (*(undefined1 **)((param_2 & 0xffffffffffffff8) + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f2c);
        (*pcVar2)();
      }
      puVar3 = *(undefined1 **)(param_2 + (long)puVar19 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      puVar3 = puVar19;
      func_0x000101b9be90();
    }
    *(undefined1 **)(unaff_x22 + 0x408) = puVar3;
    *(undefined1 **)(unaff_x22 + 0x410) = puVar19 + 1;
    if (SCARRY8((long)puVar19,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f20);
      (*pcVar2)();
    }
    if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
      FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x1f8);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x210);
      lVar14 = *(long *)(unaff_x22 + 0x218);
      uVar15 = uVar23;
      FUN_101bacf60(unaff_x22 + 0x1f8);
      func_0x000107c4a77c();
      func_0x000107c61180();
      if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f5c);
        (*pcVar2)();
      }
      puVar4 = puVar3;
      func_0x000107c5faec();
      func_0x000107c61170(puVar3);
      *(undefined8 *)(unaff_x22 + 0x418) = uVar15;
      piVar12 = *(int **)(lVar14 + 8);
      plVar26 = (long *)(ulong)(uint)piVar12[1];
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar12 + (long)piVar12);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x420) = plVar26;
      pcVar2 = FUN_101ba1ed8;
LAB_101ba28fc:
      *plVar26 = unaff_x22;
      plVar26[1] = (long)pcVar2;
                    /* WARNING: Could not recover jumptable at 0x000101ba2948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)
                (*(undefined8 *)(unaff_x22 + 0x310),puVar4,uVar15,*(undefined8 *)(unaff_x22 + 0x360)
                 ,*(undefined8 *)(unaff_x22 + 0x368),*(undefined8 *)(unaff_x22 + 0x370),uVar23,
                 lVar14);
      return;
    }
  } while( true );
LAB_101ba2434:
  *(ulong *)(unaff_x22 + 0x478) = uVar5;
  if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f24);
    (*pcVar2)();
  }
  lVar18 = *(long *)(unaff_x22 + 0x3a0) + uVar5 * 0x20;
  uVar15 = *(undefined8 *)(lVar18 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x480) = uVar15;
  uVar5 = *(ulong *)(lVar18 + 0x28);
  *(ulong *)(unaff_x22 + 0x488) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x490) = *(undefined8 *)(lVar18 + 0x30);
  uVar23 = *(undefined8 *)(lVar18 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x498) = uVar23;
  if (uVar5 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    *(ulong *)(unaff_x22 + 0x4a0) = uVar11;
  }
  else {
    uVar11 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar11 = uVar5;
    }
    func_0x000107c60480(uVar11);
    func_0x000107c60480();
    *(ulong *)(unaff_x22 + 0x4a0) = uVar11;
  }
  if (uVar11 != 0) {
    func_0x000107c61438(uVar5,2);
    func_0x000107c61434(uVar15);
    func_0x000107c61434(uVar23);
    puVar3 = (undefined1 *)0x0;
    do {
      puVar16 = &UNK_1106c31f8;
      *(ulong *)(unaff_x22 + 0x4b8) = uVar13;
      *(long *)(unaff_x22 + 0x4b0) = lVar14;
      *(long *)(unaff_x22 + 0x4a8) = lVar10;
      uVar13 = *(ulong *)(unaff_x22 + 0x488);
      if ((uVar13 & 0xc000000000000001) == 0) {
        if (*(undefined1 **)((uVar13 & 0xffffffffffffff8) + 0x10) <= puVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f18);
          (*pcVar2)();
        }
        puVar19 = *(undefined1 **)(uVar13 + (long)puVar3 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar19 = puVar3;
        func_0x000101b9be7c();
      }
      *(undefined1 **)(unaff_x22 + 0x4c0) = puVar19;
      *(undefined1 **)(unaff_x22 + 0x4c8) = puVar3 + 1;
      if (SCARRY8((long)puVar3,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f10);
        (*pcVar2)();
      }
      if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
        FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x248);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x260);
        lVar14 = *(long *)(unaff_x22 + 0x268);
        uVar15 = uVar23;
        FUN_101bacf60(unaff_x22 + 0x248);
        func_0x000107c4a77c();
        func_0x000107c61180();
        if (puVar19 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f54);
          (*pcVar2)();
        }
        puVar4 = puVar19;
        func_0x000107c5faec();
        func_0x000107c61170(puVar19);
        *(undefined8 *)(unaff_x22 + 0x4d0) = uVar15;
        piVar12 = *(int **)(lVar14 + 8);
        plVar26 = (long *)(ulong)(uint)piVar12[1];
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar12 + (long)piVar12);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x4d8) = plVar26;
        pcVar2 = FUN_101ba507c;
        goto LAB_101ba28fc;
      }
      lVar14 = *(long *)(unaff_x22 + 0x4b0) + 1;
      if (SCARRY8(*(long *)(unaff_x22 + 0x4b0),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f14);
        (*pcVar2)();
      }
      puVar6 = PTR_PTR_1126bf7f0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar7 = PTR_PTR_1126bf8d0;
      func_0x000107c610f8(PTR_PTR_1126bf8d0);
      func_0x000107c453e4();
      func_0x000107c53574(puVar6);
      func_0x000107c61170(puVar7);
      puVar3 = puVar6;
      func_0x000107c3fd58();
      func_0x000107c61180();
      if (puVar3 != (undefined1 *)0x0) {
        uVar15 = *(undefined8 *)(unaff_x22 + 0x4c0);
        func_0x000107c5b2dc(uVar15);
        func_0x000107c61180();
        func_0x000107c59588(puVar3);
        func_0x000107c61170(uVar15);
        func_0x000107c61170(puVar3);
      }
      puVar3 = puVar6;
      func_0x000107c3fd58();
      func_0x000107c61180();
      if (puVar3 != (undefined1 *)0x0) {
        uVar15 = *(undefined8 *)(unaff_x22 + 0x4c0);
        func_0x000107c3fd54(uVar15);
        func_0x000107c61180();
        func_0x000107c55d70(puVar3);
        func_0x000107c61170(uVar15);
        func_0x000107c61170(puVar3);
      }
      lVar10 = *(long *)(unaff_x22 + 0x4c0);
      func_0x000107c4a77c();
      func_0x000107c61180();
      if (lVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f4c);
        (*pcVar2)();
      }
      lVar18 = lVar10;
      func_0x000107c5faec();
      func_0x000107c61170(lVar10);
      puVar3 = puVar6;
      func_0x000107c3fd58();
      func_0x000107c61180();
      if (puVar3 == (undefined1 *)0x0) {
        func_0x000101b9d5ac();
        func_0x000107c613f8(&UNK_1106c31f8,puVar3,0,0);
        *puVar3 = 0x3a;
        func_0x000107c61654();
LAB_101ba24d8:
        func_0x000107c6142c(uVar13);
        bVar1 = *(byte *)(unaff_x22 + 0x542);
        func_0x000107c61170(puVar6);
        if ((bVar1 & 1) == 0) {
          *(long *)(unaff_x22 + 0x520) = lVar14;
          *(undefined **)(unaff_x22 + 0x518) = puVar16;
          lVar14 = *(long *)(unaff_x22 + 0x4c0);
          FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x270);
          uVar23 = *(undefined8 *)(unaff_x22 + 0x288);
          lVar10 = *(long *)(unaff_x22 + 0x290);
          uVar15 = uVar23;
          FUN_101bacf60(unaff_x22 + 0x270);
          func_0x000107c4a77c();
          func_0x000107c61180();
          if (lVar14 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f58);
            (*pcVar2)();
          }
          lVar18 = lVar14;
          func_0x000107c5faec();
          func_0x000107c61170(lVar14);
          *(undefined8 *)(unaff_x22 + 0x528) = uVar15;
          func_0x000107c614cc(puVar16,unaff_x22 + 0x2e0,unaff_x22 + 0x2b0);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x2b8);
          FUN_101da5a48(uVar17,*(undefined8 *)(unaff_x22 + 0x2c0));
          piVar12 = *(int **)(lVar10 + 0x10);
          plVar26 = (long *)(ulong)(uint)piVar12[1];
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar12 + (long)piVar12);
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x530) = plVar26;
          *plVar26 = unaff_x22;
          plVar26[1] = (long)FUN_101ba8dec;
          uVar9 = *(undefined8 *)(unaff_x22 + 0x370);
          uVar8 = *(undefined8 *)(unaff_x22 + 0x330);
          uVar20 = *(undefined8 *)(unaff_x22 + 0x328);
          goto LAB_101ba2a18;
        }
        func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x4c0));
        func_0x000107c614ac(puVar16);
        uVar13 = *(ulong *)(unaff_x22 + 0x4b8);
        lVar10 = *(long *)(unaff_x22 + 0x4a8);
      }
      else {
        puVar19 = puVar3;
        func_0x000107c5b67c();
        func_0x000107c61180();
        if (puVar19 == (undefined1 *)0x0) {
LAB_101ba24a4:
          func_0x000101b9d5ac();
          func_0x000107c613f8(&UNK_1106c31f8,puVar19,0,0);
          *puVar19 = 0x3b;
          func_0x000107c61654();
          func_0x000107c61170(puVar3);
          goto LAB_101ba24d8;
        }
        lStack_70 = 0;
        plVar26 = &lStack_70;
        func_0x000107c5fc50();
        func_0x000107c61170();
        lVar10 = lStack_70;
        if (lStack_70 == 0) goto LAB_101ba24a4;
        puVar19 = puVar3;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        if (puVar19 == (undefined1 *)0x0) {
          puStack_80 = (undefined1 *)0x0;
          plVar26 = (long *)0x0;
        }
        else {
          puStack_80 = puVar19;
          func_0x000107c5faec();
          func_0x000107c61170(puVar19);
        }
        uVar11 = *(ulong *)(unaff_x22 + 0x4b8);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x498);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x490);
        puVar19 = puVar3;
        func_0x000107c3fd50();
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        *(long *)(unaff_x22 + 0x60) = lVar18;
        *(ulong *)(unaff_x22 + 0x68) = uVar13;
        *(undefined1 *)(unaff_x22 + 0x70) = 0;
        *(undefined8 *)(unaff_x22 + 0x78) = 0;
        *(long *)(unaff_x22 + 0x80) = lVar10;
        *(undefined8 *)(unaff_x22 + 0x88) = uVar23;
        *(undefined8 *)(unaff_x22 + 0x90) = uVar15;
        *(undefined1 **)(unaff_x22 + 0x98) = puStack_80;
        *(long **)(unaff_x22 + 0xa0) = plVar26;
        *(undefined1 **)(unaff_x22 + 0xa8) = puVar19;
        func_0x000107c61434(uVar15);
        func_0x000107c61170(puVar6);
        FUN_101b9d4cc(unaff_x22 + 0x60,unaff_x22 + 0xb0);
        func_0x000107c61558();
        uVar13 = *(ulong *)(unaff_x22 + 0x4b8);
        uVar5 = uVar13;
        if ((uVar11 & 1) == 0) {
          uVar5 = 0;
          FUN_101b9bfcc(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
        }
        uVar11 = *(ulong *)(uVar5 + 0x10);
        uVar13 = uVar5;
        if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar11) {
          uVar13 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
          FUN_101b9bfcc(uVar13,uVar11 + 1,1,uVar5);
        }
        uVar15 = *(undefined8 *)(unaff_x22 + 0x4c0);
        lVar18 = *(long *)(unaff_x22 + 0x4a8);
        *(ulong *)(uVar13 + 0x10) = uVar11 + 1;
        lVar10 = uVar13 + uVar11 * 0x50;
        uVar23 = *(undefined8 *)(unaff_x22 + 0x60);
        *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(unaff_x22 + 0x68);
        *(undefined8 *)(lVar10 + 0x20) = uVar23;
        uVar17 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x70);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x80);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar28 = *(undefined8 *)(unaff_x22 + 0xa8);
        uVar27 = *(undefined8 *)(unaff_x22 + 0xa0);
        *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)(unaff_x22 + 0x98);
        *(undefined8 *)(lVar10 + 0x50) = uVar9;
        *(undefined8 *)(lVar10 + 0x68) = uVar28;
        *(undefined8 *)(lVar10 + 0x60) = uVar27;
        *(undefined8 *)(lVar10 + 0x38) = uVar17;
        *(undefined8 *)(lVar10 + 0x30) = uVar23;
        *(undefined8 *)(lVar10 + 0x48) = uVar8;
        *(undefined8 *)(lVar10 + 0x40) = uVar20;
        func_0x000107c61170(uVar15);
        func_0x000101b9d508(unaff_x22 + 0x60);
        lVar10 = lVar18 + 1;
        if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f1c);
          (*pcVar2)();
        }
      }
      puVar3 = *(undefined1 **)(unaff_x22 + 0x4c8);
    } while (puVar3 != *(undefined1 **)(unaff_x22 + 0x4a0));
    uVar15 = *(undefined8 *)(unaff_x22 + 0x498);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x480);
    func_0x000107c61430(*(undefined8 *)(unaff_x22 + 0x488),2);
    func_0x000107c6142c(uVar23);
    func_0x000107c6142c(uVar15);
  }
  uVar5 = *(long *)(unaff_x22 + 0x478) + 1;
  if (uVar5 == *(ulong *)(unaff_x22 + 0x3a8)) {
    lVar21 = *(long *)(unaff_x22 + 0x470);
    lVar24 = *(long *)(unaff_x22 + 0x468);
    lVar25 = *(long *)(unaff_x22 + 0x460);
    lVar22 = *(long *)(unaff_x22 + 0x458);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x3a0);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x330));
    func_0x000107c6142c(uVar15);
    lVar18 = lVar21 - lVar24;
    if (SBORROW8(lVar21,lVar24)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f34);
      (*pcVar2)();
    }
    lVar21 = lVar25 - lVar22;
    if (SBORROW8(lVar25,lVar22)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f38);
      (*pcVar2)();
    }
    lVar25 = lVar14 - lVar10;
    if (SBORROW8(lVar14,lVar10)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f3c);
      (*pcVar2)();
    }
    if (!SCARRY8(lVar18,lVar21)) {
      if (!SCARRY8(lVar18 + lVar21,lVar25)) {
        if (0 < lVar18 + lVar21 + lVar25) {
          lVar10 = *(long *)(unaff_x22 + 0x308);
          lStack_70 = 0;
          uStack_68 = 0xe000000000000000;
          func_0x000107c602fc(0x5c);
          func_0x000107c5fb78(0xd00000000000002c,0x800000010f001ec0);
          *(long *)(unaff_x22 + 0x2f0) = lVar18;
          puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          puVar16 = PTR___sSiN_11034deb0;
          puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00)
          ;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar7);
          func_0x000107c5fb78(0xd000000000000011,0x800000010f001ef0);
          *(long *)(unaff_x22 + 0x2f8) = lVar21;
          puVar7 = puVar6;
          func_0x000107c6057c(puVar16,puVar6);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar7);
          func_0x000107c5fb78(0xd000000000000019,0x800000010f001f10);
          *(long *)(unaff_x22 + 0x300) = lVar25;
          func_0x000107c6057c(puVar16);
          puVar16 = puVar6;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar6);
          uVar15 = uStack_68;
          lVar14 = lStack_70;
          func_0x000107c5cab0();
          func_0x000107c61180();
          if (lVar10 == 0) {
            lVar18 = 0;
            puVar16 = (undefined *)0x0;
          }
          else {
            lVar18 = lVar10;
            func_0x000107c5faec();
            func_0x000107c61170(lVar10);
          }
          lVar10 = *(long *)(unaff_x22 + 0x318);
          uVar23 = *(undefined8 *)(lVar10 + 0x60);
          uVar17 = *(undefined8 *)(lVar10 + 0x28);
          puVar6 = &UNK_110450670;
          func_0x000107c613fc(&UNK_110450670,0x18,7);
          func_0x000107c61644(puVar6 + 0x10,lVar10);
          puVar7 = &UNK_110450698;
          func_0x000107c613fc(&UNK_110450698,0x50,7);
          *(undefined **)(puVar7 + 0x10) = puVar6;
          *(long *)(puVar7 + 0x18) = lVar14;
          *(undefined8 *)(puVar7 + 0x20) = uVar15;
          puVar7[0x28] = 1;
          *(undefined8 *)(puVar7 + 0x30) = 0;
          *(undefined8 *)(puVar7 + 0x38) = 0;
          *(long *)(puVar7 + 0x40) = lVar18;
          *(undefined **)(puVar7 + 0x48) = puVar16;
          *(code **)(unaff_x22 + 0x1c0) = FUN_101baca00;
          *(undefined **)(unaff_x22 + 0x1c8) = puVar7;
          *(undefined **)(unaff_x22 + 0x1a0) = PTR___NSConcreteStackBlock_11034bd00;
          *(undefined8 *)(unaff_x22 + 0x1a8) = 0x42000000;
          *(undefined **)(unaff_x22 + 0x1b0) = &UNK_100288f10;
          *(undefined **)(unaff_x22 + 0x1b8) = &UNK_1104506b0;
          lVar14 = unaff_x22 + 0x1a0;
          func_0x000107c60bc4(lVar14);
          uVar20 = *(undefined8 *)(unaff_x22 + 0x1c8);
          func_0x000107c61434(puVar16);
          func_0x000107c61434(uVar15);
          func_0x000107c61574(uVar20);
          func_0x000108ec0f10(uVar23,uVar17,lVar14);
          func_0x000107c60bd0(lVar14);
          func_0x000107c6142c(puVar16);
          func_0x000107c6142c(uVar15);
        }
        uVar15 = *(undefined8 *)(unaff_x22 + 0x370);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x368);
        func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x338));
        func_0x000107c6142c(uVar23);
        func_0x000107c61170(uVar15);
                    /* WARNING: Could not recover jumptable at 0x000101ba2f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))(uVar13);
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f44);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba2f40);
    (*pcVar2)();
  }
  goto LAB_101ba2434;
}



/* Entry: 101ba2f64; end: 101ba2fc7;  */

void FUN_101ba2f64(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x450) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x448));
  func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x440));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101ba2fc8;
  }
  else {
    pcVar1 = FUN_101ba4040;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101ba2fc8; end: 101ba403f;  */

void FUN_101ba2fc8(void)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  undefined8 *puVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined1 *puVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  long unaff_x22;
  long lVar25;
  undefined1 *puVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined1 *puStack_80;
  code *UNRECOVERED_JUMPTABLE_00;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 *puVar16;
  
  lVar22 = *(long *)(unaff_x22 + 0x3f0) + 1;
  if (SCARRY8(*(long *)(unaff_x22 + 0x3f0),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba4000);
    (*pcVar2)();
  }
  plVar27 = *(long **)(unaff_x22 + 0x50);
  puVar26 = *(undefined1 **)(unaff_x22 + 0x58);
  puVar20 = *(undefined1 **)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar28 = *(long *)(unaff_x22 + 0x30);
  uVar14 = *(undefined1 *)(unaff_x22 + 0x20);
  lVar12 = *(long *)(unaff_x22 + 0x10);
  uVar8 = *(ulong *)(unaff_x22 + 0x18);
  plVar7 = (long *)(unaff_x22 + 0x3f8);
  lVar25 = *(long *)(unaff_x22 + 1000);
  lVar29 = *(long *)(unaff_x22 + 0x3e0);
  puVar16 = (undefined8 *)(unaff_x22 + 0x40);
  puVar17 = (undefined8 *)(unaff_x22 + 0x38);
  plVar19 = (long *)(unaff_x22 + 0x438);
LAB_101ba3038:
  uVar15 = *puVar16;
  uVar18 = *puVar17;
  lVar23 = *plVar19;
  uVar31 = *(ulong *)(unaff_x22 + 0x400);
  *(long *)(unaff_x22 + 0x100) = lVar12;
  *(ulong *)(unaff_x22 + 0x108) = uVar8;
  *(undefined1 *)(unaff_x22 + 0x110) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x118) = uVar3;
  *(long *)(unaff_x22 + 0x120) = lVar28;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar15;
  *(undefined1 **)(unaff_x22 + 0x138) = puVar20;
  *(long **)(unaff_x22 + 0x140) = plVar27;
  *(undefined1 **)(unaff_x22 + 0x148) = puVar26;
  FUN_101b9d4cc(unaff_x22 + 0x100,unaff_x22 + 0x150);
  func_0x000107c61558();
  uVar21 = *(ulong *)(unaff_x22 + 0x400);
  uVar8 = uVar21;
  if ((uVar31 & 1) == 0) {
    uVar8 = 0;
    FUN_101b9bfcc(0,*(long *)(uVar21 + 0x10) + 1,1,uVar21);
  }
  uVar31 = *(ulong *)(uVar8 + 0x10);
  uVar21 = uVar8;
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar31) {
    uVar21 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    FUN_101b9bfcc(uVar21,uVar31 + 1,1,uVar8);
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x430);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x408);
  *(ulong *)(uVar21 + 0x10) = uVar31 + 1;
  lVar12 = uVar21 + uVar31 * 0x50;
  uVar18 = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(lVar12 + 0x20) = uVar18;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(lVar12 + 0x58) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(lVar12 + 0x50) = uVar32;
  *(undefined8 *)(lVar12 + 0x68) = uVar34;
  *(undefined8 *)(lVar12 + 0x60) = uVar33;
  *(undefined8 *)(lVar12 + 0x38) = uVar9;
  *(undefined8 *)(lVar12 + 0x30) = uVar18;
  *(undefined8 *)(lVar12 + 0x48) = uVar11;
  *(undefined8 *)(lVar12 + 0x40) = uVar10;
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar15);
  func_0x000101b9d508(unaff_x22 + 0x100);
  do {
    puVar26 = *(undefined1 **)(unaff_x22 + 0x410);
    uVar8 = *(ulong *)(unaff_x22 + 0x3b8);
    if (puVar26 == *(undefined1 **)(unaff_x22 + 0x3d8)) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x3d0);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x3c0);
      func_0x000107c61430(uVar8,2);
      func_0x000107c6142c(uVar15);
      func_0x000107c6142c(uVar3);
      do {
        while( true ) {
          *(long *)(unaff_x22 + 0x470) = lVar23;
          *(long *)(unaff_x22 + 0x468) = lVar22;
          *(long *)(unaff_x22 + 0x460) = lVar25;
          *(long *)(unaff_x22 + 0x458) = lVar29;
          uVar8 = *(long *)(unaff_x22 + 0x3b0) + 1;
          if (uVar8 == *(ulong *)(unaff_x22 + 0x3a8)) {
            lVar25 = 0;
            lVar22 = 0;
            uVar8 = 0;
            goto LAB_101ba3508;
          }
          *(ulong *)(unaff_x22 + 0x3b0) = uVar8;
          if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba3eac);
            (*pcVar2)();
          }
          lVar12 = *(long *)(unaff_x22 + 0x3a0) + uVar8 * 0x20;
          uVar8 = *(ulong *)(lVar12 + 0x20);
          *(ulong *)(unaff_x22 + 0x3b8) = uVar8;
          uVar3 = *(undefined8 *)(lVar12 + 0x28);
          *(undefined8 *)(unaff_x22 + 0x3c0) = uVar3;
          *(undefined8 *)(unaff_x22 + 0x3c8) = *(undefined8 *)(lVar12 + 0x30);
          uVar15 = *(undefined8 *)(lVar12 + 0x38);
          *(undefined8 *)(unaff_x22 + 0x3d0) = uVar15;
          if (uVar8 >> 0x3e != 0) break;
          lVar12 = *(long *)((uVar8 & 0xffffffffffffff8) + 0x10);
          *(long *)(unaff_x22 + 0x3d8) = lVar12;
          if (lVar12 != 0) goto LAB_101ba31ac;
        }
        uVar31 = uVar8 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar8) {
          uVar31 = uVar8;
        }
        func_0x000107c60480();
        *(ulong *)(unaff_x22 + 0x3d8) = uVar31;
      } while (uVar31 == 0);
LAB_101ba31ac:
      func_0x000107c61438(uVar8,2);
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar15);
      puVar26 = (undefined1 *)0x0;
      uVar8 = *(ulong *)(unaff_x22 + 0x3b8);
    }
    *(ulong *)(unaff_x22 + 0x400) = uVar21;
    *(long *)(unaff_x22 + 0x3f8) = lVar23;
    *(long *)(unaff_x22 + 0x3f0) = lVar22;
    *(long *)(unaff_x22 + 1000) = lVar25;
    *(long *)(unaff_x22 + 0x3e0) = lVar29;
    if ((uVar8 & 0xc000000000000001) == 0) {
      if (*(undefined1 **)((uVar8 & 0xffffffffffffff8) + 0x10) <= puVar26) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba4004);
        (*pcVar2)();
      }
      puVar20 = *(undefined1 **)(uVar8 + (long)puVar26 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      puVar20 = puVar26;
      func_0x000101b9be90();
    }
    *(undefined1 **)(unaff_x22 + 0x408) = puVar20;
    *(undefined1 **)(unaff_x22 + 0x410) = puVar26 + 1;
    if (SCARRY8((long)puVar26,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba3ff8);
      (*pcVar2)();
    }
    if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
      FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x1f8);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x210);
      lVar22 = *(long *)(unaff_x22 + 0x218);
      uVar3 = uVar15;
      FUN_101bacf60(unaff_x22 + 0x1f8);
      func_0x000107c4a77c();
      func_0x000107c61180();
      if (puVar20 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba4038);
        (*pcVar2)();
      }
      puVar26 = puVar20;
      func_0x000107c5faec();
      func_0x000107c61170(puVar20);
      *(undefined8 *)(unaff_x22 + 0x418) = uVar3;
      piVar13 = *(int **)(lVar22 + 8);
      plVar7 = (long *)(ulong)(uint)piVar13[1];
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar13 + (long)piVar13);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x420) = plVar7;
      pcVar2 = FUN_101ba1ed8;
      goto LAB_101ba39d0;
    }
    func_0x000107c51f9c();
    func_0x000107c61180();
    *(undefined1 **)(unaff_x22 + 0x430) = puVar20;
    if (puVar20 == (undefined1 *)0x0) {
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
      lVar23 = *(long *)(unaff_x22 + 0x3f8);
      lVar25 = *(long *)(unaff_x22 + 1000);
    }
    else {
      puVar26 = puVar20;
      func_0x000107c5b420();
      if ((int)puVar26 == 4) {
        lVar25 = *(long *)(unaff_x22 + 1000) + 1;
        if (SCARRY8(*(long *)(unaff_x22 + 1000),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba4008);
          (*pcVar2)();
        }
        lVar22 = *(long *)(unaff_x22 + 0x408);
        func_0x000107c4a77c();
        func_0x000107c61180();
        if (lVar22 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba402c);
          (*pcVar2)();
        }
        lVar12 = lVar22;
        func_0x000107c5faec();
        func_0x000107c61170(lVar22);
        puVar4 = puVar20;
        func_0x000107c3fd58();
        func_0x000107c61180();
        if (puVar4 == (undefined1 *)0x0) {
          func_0x000101b9d5ac();
          puVar24 = &UNK_1106c31f8;
          func_0x000107c613f8(&UNK_1106c31f8,puVar4,0,0);
          *puVar4 = 0x3a;
          func_0x000107c61654();
        }
        else {
          puVar26 = puVar4;
          func_0x000107c5b67c();
          func_0x000107c61180();
          if (puVar26 != (undefined1 *)0x0) {
            lStack_70 = 0;
            plVar27 = &lStack_70;
            func_0x000107c5fc50();
            func_0x000107c61170();
            lVar28 = lStack_70;
            if (lStack_70 != 0) goto LAB_101ba33e4;
          }
          func_0x000101b9d5ac();
          puVar24 = &UNK_1106c31f8;
          func_0x000107c613f8(&UNK_1106c31f8,puVar26,0,0);
          *puVar26 = 0x3b;
          func_0x000107c61654();
          func_0x000107c61170(puVar4);
        }
        func_0x000107c6142c(uVar8);
        func_0x000107c61170(puVar20);
      }
      else {
        if ((int)puVar26 == 6) {
          *(long *)(unaff_x22 + 0x438) = *plVar7 + 1;
          if (SCARRY8(*plVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba4024);
            (*pcVar2)();
          }
          lVar22 = *(long *)(unaff_x22 + 0x408);
          func_0x000107c4a77c();
          func_0x000107c61180();
          if (lVar22 != 0) {
            lVar25 = lVar22;
            func_0x000107c5faec();
            func_0x000107c61170(lVar22);
            *(ulong *)(unaff_x22 + 0x440) = uVar8;
            plVar7 = (long *)0x60;
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x448) = plVar7;
            *plVar7 = unaff_x22;
            plVar7[1] = (long)FUN_101ba2f64;
            lVar22 = *(long *)(unaff_x22 + 0x3d0);
            plVar7[6] = *(long *)(unaff_x22 + 0x3c8);
            plVar7[7] = lVar22;
            plVar7[4] = lVar25;
            plVar7[5] = uVar8;
            plVar7[2] = unaff_x22 + 0x10;
            plVar7[3] = (long)puVar20;
            lVar22 = 0;
            func_0x000107c5eea4();
            plVar7[8] = lVar22;
            lVar22 = *(long *)(lVar22 + -8);
            plVar7[9] = lVar22;
            uVar8 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            plVar7[10] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_task_switch_110350130)(FUN_101bacab8,0,0);
            return;
          }
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba4040);
          (*pcVar2)();
        }
        func_0x000101b9d5ac();
        puVar24 = &UNK_1106c31f8;
        func_0x000107c613f8(&UNK_1106c31f8,puVar26,0,0);
        *puVar26 = 0x37;
        func_0x000107c61654();
        func_0x000107c61170(puVar20);
        lVar25 = *(long *)(unaff_x22 + 1000);
      }
      lVar23 = *plVar7;
      if (*(char *)(unaff_x22 + 0x542) != '\x01') {
        *(long *)(unaff_x22 + 0x4f8) = lVar23;
        *(long *)(unaff_x22 + 0x4f0) = lVar25;
        *(undefined **)(unaff_x22 + 0x4e8) = puVar24;
        lVar22 = *(long *)(unaff_x22 + 0x408);
        FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x220);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x238);
        lVar25 = *(long *)(unaff_x22 + 0x240);
        uVar3 = uVar15;
        FUN_101bacf60(unaff_x22 + 0x220);
        func_0x000107c4a77c();
        func_0x000107c61180();
        if (lVar22 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba403c);
          (*pcVar2)();
        }
        lVar29 = lVar22;
        func_0x000107c5faec();
        func_0x000107c61170(lVar22);
        *(undefined8 *)(unaff_x22 + 0x500) = uVar3;
        func_0x000107c614cc(puVar24,unaff_x22 + 0x2d0,unaff_x22 + 0x298);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x2a0);
        FUN_101da5a48(uVar18,*(undefined8 *)(unaff_x22 + 0x2a8));
        piVar13 = *(int **)(lVar25 + 0x10);
        plVar7 = (long *)(ulong)(uint)piVar13[1];
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar13 + (long)piVar13);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x508) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_101ba6b18;
        uVar11 = *(undefined8 *)(unaff_x22 + 0x370);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x330);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x328);
        goto LAB_101ba3aec;
      }
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
      func_0x000107c614ac(puVar24);
    }
    uVar21 = *(ulong *)(unaff_x22 + 0x400);
    lVar22 = *(long *)(unaff_x22 + 0x3f0);
    lVar29 = *(long *)(unaff_x22 + 0x3e0);
  } while( true );
LAB_101ba3508:
  *(ulong *)(unaff_x22 + 0x478) = uVar8;
  if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba3ffc);
    (*pcVar2)();
  }
  lVar29 = *(long *)(unaff_x22 + 0x3a0) + uVar8 * 0x20;
  uVar3 = *(undefined8 *)(lVar29 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x480) = uVar3;
  uVar8 = *(ulong *)(lVar29 + 0x28);
  *(ulong *)(unaff_x22 + 0x488) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x490) = *(undefined8 *)(lVar29 + 0x30);
  uVar15 = *(undefined8 *)(lVar29 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x498) = uVar15;
  if (uVar8 >> 0x3e == 0) {
    uVar31 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    *(ulong *)(unaff_x22 + 0x4a0) = uVar31;
  }
  else {
    uVar31 = uVar8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar8) {
      uVar31 = uVar8;
    }
    func_0x000107c60480(uVar31);
    func_0x000107c60480();
    *(ulong *)(unaff_x22 + 0x4a0) = uVar31;
  }
  if (uVar31 != 0) {
    func_0x000107c61438(uVar8,2);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar15);
    puVar26 = (undefined1 *)0x0;
    do {
      puVar24 = &UNK_1106c31f8;
      *(ulong *)(unaff_x22 + 0x4b8) = uVar21;
      *(long *)(unaff_x22 + 0x4b0) = lVar22;
      *(long *)(unaff_x22 + 0x4a8) = lVar25;
      uVar8 = *(ulong *)(unaff_x22 + 0x488);
      if ((uVar8 & 0xc000000000000001) == 0) {
        if (*(undefined1 **)((uVar8 & 0xffffffffffffff8) + 0x10) <= puVar26) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba3ff0);
          (*pcVar2)();
        }
        puVar20 = *(undefined1 **)(uVar8 + (long)puVar26 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar20 = puVar26;
        func_0x000101b9be7c();
      }
      *(undefined1 **)(unaff_x22 + 0x4c0) = puVar20;
      *(undefined1 **)(unaff_x22 + 0x4c8) = puVar26 + 1;
      if (SCARRY8((long)puVar26,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba3fe8);
        (*pcVar2)();
      }
      if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
        FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x248);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x260);
        lVar22 = *(long *)(unaff_x22 + 0x268);
        uVar3 = uVar15;
        FUN_101bacf60(unaff_x22 + 0x248);
        func_0x000107c4a77c();
        func_0x000107c61180();
        if (puVar20 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba4030);
          (*pcVar2)();
        }
        puVar26 = puVar20;
        func_0x000107c5faec();
        func_0x000107c61170(puVar20);
        *(undefined8 *)(unaff_x22 + 0x4d0) = uVar3;
        piVar13 = *(int **)(lVar22 + 8);
        plVar7 = (long *)(ulong)(uint)piVar13[1];
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar13 + (long)piVar13);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x4d8) = plVar7;
        pcVar2 = FUN_101ba507c;
LAB_101ba39d0:
        *plVar7 = unaff_x22;
        plVar7[1] = (long)pcVar2;
                    /* WARNING: Could not recover jumptable at 0x000101ba3a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)
                  (*(undefined8 *)(unaff_x22 + 0x310),puVar26,uVar3,
                   *(undefined8 *)(unaff_x22 + 0x360),*(undefined8 *)(unaff_x22 + 0x368),
                   *(undefined8 *)(unaff_x22 + 0x370),uVar15,lVar22);
        return;
      }
      lVar22 = *(long *)(unaff_x22 + 0x4b0) + 1;
      if (SCARRY8(*(long *)(unaff_x22 + 0x4b0),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba3fec);
        (*pcVar2)();
      }
      puVar5 = PTR_PTR_1126bf7f0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar6 = PTR_PTR_1126bf8d0;
      func_0x000107c610f8(PTR_PTR_1126bf8d0);
      func_0x000107c453e4();
      func_0x000107c53574(puVar5);
      func_0x000107c61170(puVar6);
      puVar26 = puVar5;
      func_0x000107c3fd58();
      func_0x000107c61180();
      if (puVar26 != (undefined1 *)0x0) {
        uVar3 = *(undefined8 *)(unaff_x22 + 0x4c0);
        func_0x000107c5b2dc(uVar3);
        func_0x000107c61180();
        func_0x000107c59588(puVar26);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(puVar26);
      }
      puVar26 = puVar5;
      func_0x000107c3fd58();
      func_0x000107c61180();
      if (puVar26 != (undefined1 *)0x0) {
        uVar3 = *(undefined8 *)(unaff_x22 + 0x4c0);
        func_0x000107c3fd54(uVar3);
        func_0x000107c61180();
        func_0x000107c55d70(puVar26);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(puVar26);
      }
      lVar25 = *(long *)(unaff_x22 + 0x4c0);
      func_0x000107c4a77c();
      func_0x000107c61180();
      if (lVar25 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba4020);
        (*pcVar2)();
      }
      lVar29 = lVar25;
      func_0x000107c5faec();
      func_0x000107c61170(lVar25);
      puVar26 = puVar5;
      func_0x000107c3fd58();
      func_0x000107c61180();
      if (puVar26 == (undefined1 *)0x0) {
        func_0x000101b9d5ac();
        func_0x000107c613f8(&UNK_1106c31f8,puVar26,0,0);
        *puVar26 = 0x3a;
        func_0x000107c61654();
LAB_101ba35ac:
        func_0x000107c6142c(uVar8);
        bVar1 = *(byte *)(unaff_x22 + 0x542);
        func_0x000107c61170(puVar5);
        if ((bVar1 & 1) == 0) {
          *(long *)(unaff_x22 + 0x520) = lVar22;
          *(undefined **)(unaff_x22 + 0x518) = puVar24;
          lVar22 = *(long *)(unaff_x22 + 0x4c0);
          FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x270);
          uVar15 = *(undefined8 *)(unaff_x22 + 0x288);
          lVar25 = *(long *)(unaff_x22 + 0x290);
          uVar3 = uVar15;
          FUN_101bacf60(unaff_x22 + 0x270);
          func_0x000107c4a77c();
          func_0x000107c61180();
          if (lVar22 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba4034);
            (*pcVar2)();
          }
          lVar29 = lVar22;
          func_0x000107c5faec();
          func_0x000107c61170(lVar22);
          *(undefined8 *)(unaff_x22 + 0x528) = uVar3;
          func_0x000107c614cc(puVar24,unaff_x22 + 0x2e0,unaff_x22 + 0x2b0);
          uVar18 = *(undefined8 *)(unaff_x22 + 0x2b8);
          FUN_101da5a48(uVar18,*(undefined8 *)(unaff_x22 + 0x2c0));
          piVar13 = *(int **)(lVar25 + 0x10);
          plVar7 = (long *)(ulong)(uint)piVar13[1];
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar13 + (long)piVar13);
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x530) = plVar7;
          *plVar7 = unaff_x22;
          plVar7[1] = (long)FUN_101ba8dec;
          uVar11 = *(undefined8 *)(unaff_x22 + 0x370);
          uVar10 = *(undefined8 *)(unaff_x22 + 0x330);
          uVar9 = *(undefined8 *)(unaff_x22 + 0x328);
LAB_101ba3aec:
                    /* WARNING: Could not recover jumptable at 0x000101ba3b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)(lVar29,uVar3,uVar9,uVar10,uVar18,uVar11,uVar15,lVar25);
          return;
        }
        func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x4c0));
        func_0x000107c614ac(puVar24);
        uVar21 = *(ulong *)(unaff_x22 + 0x4b8);
        lVar25 = *(long *)(unaff_x22 + 0x4a8);
      }
      else {
        puVar20 = puVar26;
        func_0x000107c5b67c();
        func_0x000107c61180();
        if (puVar20 == (undefined1 *)0x0) {
LAB_101ba3578:
          func_0x000101b9d5ac();
          func_0x000107c613f8(&UNK_1106c31f8,puVar20,0,0);
          *puVar20 = 0x3b;
          func_0x000107c61654();
          func_0x000107c61170(puVar26);
          goto LAB_101ba35ac;
        }
        lStack_70 = 0;
        plVar7 = &lStack_70;
        func_0x000107c5fc50();
        func_0x000107c61170();
        lVar25 = lStack_70;
        if (lStack_70 == 0) goto LAB_101ba3578;
        puVar20 = puVar26;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        if (puVar20 == (undefined1 *)0x0) {
          puStack_80 = (undefined1 *)0x0;
          plVar7 = (long *)0x0;
        }
        else {
          puStack_80 = puVar20;
          func_0x000107c5faec();
          func_0x000107c61170(puVar20);
        }
        uVar31 = *(ulong *)(unaff_x22 + 0x4b8);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x498);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x490);
        puVar20 = puVar26;
        func_0x000107c3fd50();
        func_0x000107c61180();
        func_0x000107c61170(puVar26);
        *(long *)(unaff_x22 + 0x60) = lVar29;
        *(ulong *)(unaff_x22 + 0x68) = uVar8;
        *(undefined1 *)(unaff_x22 + 0x70) = 0;
        *(undefined8 *)(unaff_x22 + 0x78) = 0;
        *(long *)(unaff_x22 + 0x80) = lVar25;
        *(undefined8 *)(unaff_x22 + 0x88) = uVar15;
        *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
        *(undefined1 **)(unaff_x22 + 0x98) = puStack_80;
        *(long **)(unaff_x22 + 0xa0) = plVar7;
        *(undefined1 **)(unaff_x22 + 0xa8) = puVar20;
        func_0x000107c61434(uVar3);
        func_0x000107c61170(puVar5);
        FUN_101b9d4cc(unaff_x22 + 0x60,unaff_x22 + 0xb0);
        func_0x000107c61558();
        uVar21 = *(ulong *)(unaff_x22 + 0x4b8);
        uVar8 = uVar21;
        if ((uVar31 & 1) == 0) {
          uVar8 = 0;
          FUN_101b9bfcc(0,*(long *)(uVar21 + 0x10) + 1,1,uVar21);
        }
        uVar31 = *(ulong *)(uVar8 + 0x10);
        uVar21 = uVar8;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar31) {
          uVar21 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
          FUN_101b9bfcc(uVar21,uVar31 + 1,1,uVar8);
        }
        uVar3 = *(undefined8 *)(unaff_x22 + 0x4c0);
        lVar29 = *(long *)(unaff_x22 + 0x4a8);
        *(ulong *)(uVar21 + 0x10) = uVar31 + 1;
        lVar25 = uVar21 + uVar31 * 0x50;
        uVar15 = *(undefined8 *)(unaff_x22 + 0x60);
        *(undefined8 *)(lVar25 + 0x28) = *(undefined8 *)(unaff_x22 + 0x68);
        *(undefined8 *)(lVar25 + 0x20) = uVar15;
        uVar18 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar33 = *(undefined8 *)(unaff_x22 + 0xa8);
        uVar32 = *(undefined8 *)(unaff_x22 + 0xa0);
        *(undefined8 *)(lVar25 + 0x58) = *(undefined8 *)(unaff_x22 + 0x98);
        *(undefined8 *)(lVar25 + 0x50) = uVar11;
        *(undefined8 *)(lVar25 + 0x68) = uVar33;
        *(undefined8 *)(lVar25 + 0x60) = uVar32;
        *(undefined8 *)(lVar25 + 0x38) = uVar18;
        *(undefined8 *)(lVar25 + 0x30) = uVar15;
        *(undefined8 *)(lVar25 + 0x48) = uVar10;
        *(undefined8 *)(lVar25 + 0x40) = uVar9;
        func_0x000107c61170(uVar3);
        func_0x000101b9d508(unaff_x22 + 0x60);
        lVar25 = lVar29 + 1;
        if (SCARRY8(lVar29,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba3ff4);
          (*pcVar2)();
        }
      }
      puVar26 = *(undefined1 **)(unaff_x22 + 0x4c8);
    } while (puVar26 != *(undefined1 **)(unaff_x22 + 0x4a0));
    uVar3 = *(undefined8 *)(unaff_x22 + 0x498);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x480);
    func_0x000107c61430(*(undefined8 *)(unaff_x22 + 0x488),2);
    func_0x000107c6142c(uVar15);
    func_0x000107c6142c(uVar3);
  }
  uVar8 = *(long *)(unaff_x22 + 0x478) + 1;
  if (uVar8 == *(ulong *)(unaff_x22 + 0x3a8)) {
    lVar28 = *(long *)(unaff_x22 + 0x470);
    lVar30 = *(long *)(unaff_x22 + 0x468);
    lVar12 = *(long *)(unaff_x22 + 0x460);
    lVar23 = *(long *)(unaff_x22 + 0x458);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x3a0);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x330));
    func_0x000107c6142c(uVar3);
    lVar29 = lVar28 - lVar30;
    if (SBORROW8(lVar28,lVar30)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba400c);
      (*pcVar2)();
    }
    lVar28 = lVar12 - lVar23;
    if (SBORROW8(lVar12,lVar23)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba4010);
      (*pcVar2)();
    }
    lVar12 = lVar22 - lVar25;
    if (SBORROW8(lVar22,lVar25)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba4014);
      (*pcVar2)();
    }
    if (!SCARRY8(lVar29,lVar28)) {
      if (!SCARRY8(lVar29 + lVar28,lVar12)) {
        if (0 < lVar29 + lVar28 + lVar12) {
          lVar25 = *(long *)(unaff_x22 + 0x308);
          lStack_70 = 0;
          uStack_68 = 0xe000000000000000;
          func_0x000107c602fc(0x5c);
          func_0x000107c5fb78(0xd00000000000002c,0x800000010f001ec0);
          *(long *)(unaff_x22 + 0x2f0) = lVar29;
          puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          puVar24 = PTR___sSiN_11034deb0;
          puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00)
          ;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar6);
          func_0x000107c5fb78(0xd000000000000011,0x800000010f001ef0);
          *(long *)(unaff_x22 + 0x2f8) = lVar28;
          puVar6 = puVar5;
          func_0x000107c6057c(puVar24,puVar5);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar6);
          func_0x000107c5fb78(0xd000000000000019,0x800000010f001f10);
          *(long *)(unaff_x22 + 0x300) = lVar12;
          func_0x000107c6057c(puVar24);
          puVar24 = puVar5;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar5);
          uVar3 = uStack_68;
          lVar22 = lStack_70;
          func_0x000107c5cab0();
          func_0x000107c61180();
          if (lVar25 == 0) {
            lVar29 = 0;
            puVar24 = (undefined *)0x0;
          }
          else {
            lVar29 = lVar25;
            func_0x000107c5faec();
            func_0x000107c61170(lVar25);
          }
          lVar25 = *(long *)(unaff_x22 + 0x318);
          uVar15 = *(undefined8 *)(lVar25 + 0x60);
          uVar18 = *(undefined8 *)(lVar25 + 0x28);
          puVar5 = &UNK_110450670;
          func_0x000107c613fc(&UNK_110450670,0x18,7);
          func_0x000107c61644(puVar5 + 0x10,lVar25);
          puVar6 = &UNK_110450698;
          func_0x000107c613fc(&UNK_110450698,0x50,7);
          *(undefined **)(puVar6 + 0x10) = puVar5;
          *(long *)(puVar6 + 0x18) = lVar22;
          *(undefined8 *)(puVar6 + 0x20) = uVar3;
          puVar6[0x28] = 1;
          *(undefined8 *)(puVar6 + 0x30) = 0;
          *(undefined8 *)(puVar6 + 0x38) = 0;
          *(long *)(puVar6 + 0x40) = lVar29;
          *(undefined **)(puVar6 + 0x48) = puVar24;
          *(code **)(unaff_x22 + 0x1c0) = FUN_101baca00;
          *(undefined **)(unaff_x22 + 0x1c8) = puVar6;
          *(undefined **)(unaff_x22 + 0x1a0) = PTR___NSConcreteStackBlock_11034bd00;
          *(undefined8 *)(unaff_x22 + 0x1a8) = 0x42000000;
          *(undefined **)(unaff_x22 + 0x1b0) = &UNK_100288f10;
          *(undefined **)(unaff_x22 + 0x1b8) = &UNK_1104506b0;
          lVar22 = unaff_x22 + 0x1a0;
          func_0x000107c60bc4(lVar22);
          uVar9 = *(undefined8 *)(unaff_x22 + 0x1c8);
          func_0x000107c61434(puVar24);
          func_0x000107c61434(uVar3);
          func_0x000107c61574(uVar9);
          func_0x000108ec0f10(uVar15,uVar18,lVar22);
          func_0x000107c60bd0(lVar22);
          func_0x000107c6142c(puVar24);
          func_0x000107c6142c(uVar3);
        }
        uVar3 = *(undefined8 *)(unaff_x22 + 0x370);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x368);
        func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x338));
        func_0x000107c6142c(uVar15);
        func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101ba3fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))(uVar21);
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba401c);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba4018);
    (*pcVar2)();
  }
  goto LAB_101ba3508;
LAB_101ba33e4:
  puVar26 = puVar4;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (puVar26 == (undefined1 *)0x0) {
    puVar20 = (undefined1 *)0x0;
    plVar27 = (long *)0x0;
  }
  else {
    puVar20 = puVar26;
    func_0x000107c5faec();
    func_0x000107c61170(puVar26);
  }
  lVar22 = *(long *)(unaff_x22 + 0x3e0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x3d0);
  puVar26 = puVar4;
  func_0x000107c3fd50();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  lVar29 = lVar22 + 1;
  func_0x000107c61434(uVar3);
  if (SCARRY8(lVar22,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba4028);
    (*pcVar2)();
  }
  uVar14 = 0;
  uVar3 = 0;
  lVar22 = *(long *)(unaff_x22 + 0x3f0);
  puVar16 = (undefined8 *)(unaff_x22 + 0x3d0);
  puVar17 = (undefined8 *)(unaff_x22 + 0x3c8);
  plVar19 = plVar7;
  goto LAB_101ba3038;
}



/* Entry: 101ba4040; end: 101ba507b;  */

void FUN_101ba4040(void)

{
  byte bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  long lVar16;
  long unaff_x22;
  undefined8 uVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 *puStack_80;
  code *UNRECOVERED_JUMPTABLE_00;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x430));
  puVar21 = *(undefined **)(unaff_x22 + 0x450);
  lVar26 = *(long *)(unaff_x22 + 1000);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x438);
  if (*(char *)(unaff_x22 + 0x542) == '\x01') {
LAB_101ba408c:
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
    func_0x000107c614ac(puVar21);
    uVar11 = *(ulong *)(unaff_x22 + 0x400);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x3f0);
LAB_101ba40a4:
    lVar25 = *(long *)(unaff_x22 + 0x3e0);
    do {
      puVar19 = *(undefined1 **)(unaff_x22 + 0x410);
      uVar6 = *(ulong *)(unaff_x22 + 0x3b8);
      if (puVar19 == *(undefined1 **)(unaff_x22 + 0x3d8)) {
        uVar14 = *(undefined8 *)(unaff_x22 + 0x3d0);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x3c0);
        func_0x000107c61430(uVar6,2);
        func_0x000107c6142c(uVar20);
        func_0x000107c6142c(uVar14);
        do {
          while( true ) {
            *(undefined8 *)(unaff_x22 + 0x470) = uVar23;
            *(undefined8 *)(unaff_x22 + 0x468) = uVar17;
            *(long *)(unaff_x22 + 0x460) = lVar26;
            *(long *)(unaff_x22 + 0x458) = lVar25;
            uVar6 = *(long *)(unaff_x22 + 0x3b0) + 1;
            if (uVar6 == *(ulong *)(unaff_x22 + 0x3a8)) {
              lVar25 = 0;
              lVar26 = 0;
              uVar6 = 0;
              goto LAB_101ba4618;
            }
            *(ulong *)(unaff_x22 + 0x3b0) = uVar6;
            if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba4eec);
              (*pcVar2)();
            }
            lVar9 = *(long *)(unaff_x22 + 0x3a0) + uVar6 * 0x20;
            uVar6 = *(ulong *)(lVar9 + 0x20);
            *(ulong *)(unaff_x22 + 0x3b8) = uVar6;
            uVar14 = *(undefined8 *)(lVar9 + 0x28);
            *(undefined8 *)(unaff_x22 + 0x3c0) = uVar14;
            *(undefined8 *)(unaff_x22 + 0x3c8) = *(undefined8 *)(lVar9 + 0x30);
            uVar20 = *(undefined8 *)(lVar9 + 0x38);
            *(undefined8 *)(unaff_x22 + 0x3d0) = uVar20;
            if (uVar6 >> 0x3e != 0) break;
            lVar9 = *(long *)((uVar6 & 0xffffffffffffff8) + 0x10);
            *(long *)(unaff_x22 + 0x3d8) = lVar9;
            if (lVar9 != 0) goto LAB_101ba4180;
          }
          uVar13 = uVar6 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar6) {
            uVar13 = uVar6;
          }
          func_0x000107c60480();
          *(ulong *)(unaff_x22 + 0x3d8) = uVar13;
        } while (uVar13 == 0);
LAB_101ba4180:
        func_0x000107c61438(uVar6,2);
        func_0x000107c61434(uVar14);
        func_0x000107c61434(uVar20);
        puVar19 = (undefined1 *)0x0;
        uVar6 = *(ulong *)(unaff_x22 + 0x3b8);
      }
      *(ulong *)(unaff_x22 + 0x400) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x3f8) = uVar23;
      *(undefined8 *)(unaff_x22 + 0x3f0) = uVar17;
      *(long *)(unaff_x22 + 1000) = lVar26;
      *(long *)(unaff_x22 + 0x3e0) = lVar25;
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(undefined1 **)((uVar6 & 0xffffffffffffff8) + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba5048);
          (*pcVar2)();
        }
        puVar3 = *(undefined1 **)(uVar6 + (long)puVar19 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar3 = puVar19;
        func_0x000101b9be90();
      }
      *(undefined1 **)(unaff_x22 + 0x408) = puVar3;
      *(undefined1 **)(unaff_x22 + 0x410) = puVar19 + 1;
      if (SCARRY8((long)puVar19,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba5038);
        (*pcVar2)();
      }
      if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
        FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x1f8);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x210);
        lVar26 = *(long *)(unaff_x22 + 0x218);
        uVar23 = uVar17;
        FUN_101bacf60(unaff_x22 + 0x1f8);
        func_0x000107c4a77c();
        func_0x000107c61180();
        if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba5078);
          (*pcVar2)();
        }
        puVar19 = puVar3;
        func_0x000107c5faec();
        func_0x000107c61170(puVar3);
        *(undefined8 *)(unaff_x22 + 0x418) = uVar23;
        piVar10 = *(int **)(lVar26 + 8);
        plVar12 = (long *)(ulong)(uint)piVar10[1];
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar10 + (long)piVar10);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x420) = plVar12;
        pcVar2 = FUN_101ba1ed8;
        goto LAB_101ba4ae4;
      }
      func_0x000107c51f9c();
      func_0x000107c61180();
      *(undefined1 **)(unaff_x22 + 0x430) = puVar3;
      if (puVar3 == (undefined1 *)0x0) goto LAB_101ba4400;
      puVar19 = puVar3;
      func_0x000107c5b420();
      if ((int)puVar19 != 4) {
        if ((int)puVar19 == 6) {
          *(long *)(unaff_x22 + 0x438) = *(long *)(unaff_x22 + 0x3f8) + 1;
          if (SCARRY8(*(long *)(unaff_x22 + 0x3f8),1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba504c);
            (*pcVar2)();
          }
          lVar26 = *(long *)(unaff_x22 + 0x408);
          func_0x000107c4a77c();
          func_0x000107c61180();
          if (lVar26 != 0) {
            lVar25 = lVar26;
            func_0x000107c5faec();
            func_0x000107c61170(lVar26);
            *(ulong *)(unaff_x22 + 0x440) = uVar6;
            plVar12 = (long *)0x60;
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x448) = plVar12;
            *plVar12 = unaff_x22;
            plVar12[1] = (long)FUN_101ba2f64;
            lVar26 = *(long *)(unaff_x22 + 0x3d0);
            plVar12[6] = *(long *)(unaff_x22 + 0x3c8);
            plVar12[7] = lVar26;
            plVar12[4] = lVar25;
            plVar12[5] = uVar6;
            plVar12[2] = unaff_x22 + 0x10;
            plVar12[3] = (long)puVar3;
            lVar26 = 0;
            func_0x000107c5eea4();
            plVar12[8] = lVar26;
            lVar26 = *(long *)(lVar26 + -8);
            plVar12[9] = lVar26;
            uVar11 = *(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            plVar12[10] = uVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_task_switch_110350130)(FUN_101bacab8,0,0);
            return;
          }
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba507c);
          (*pcVar2)();
        }
        func_0x000101b9d5ac();
        puVar21 = &UNK_1106c31f8;
        func_0x000107c613f8(&UNK_1106c31f8,puVar19,0,0);
        *puVar19 = 0x37;
        func_0x000107c61654();
        func_0x000107c61170(puVar3);
        lVar26 = *(long *)(unaff_x22 + 1000);
LAB_101ba44e8:
        uVar23 = *(undefined8 *)(unaff_x22 + 0x3f8);
        if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) break;
        goto LAB_101ba408c;
      }
      lVar26 = *(long *)(unaff_x22 + 1000) + 1;
      if (SCARRY8(*(long *)(unaff_x22 + 1000),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba5040);
        (*pcVar2)();
      }
      lVar25 = *(long *)(unaff_x22 + 0x408);
      func_0x000107c4a77c();
      func_0x000107c61180();
      if (lVar25 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba5068);
        (*pcVar2)();
      }
      lVar9 = lVar25;
      func_0x000107c5faec();
      func_0x000107c61170(lVar25);
      puVar19 = puVar3;
      func_0x000107c3fd58();
      func_0x000107c61180();
      if (puVar19 == (undefined1 *)0x0) {
        func_0x000101b9d5ac();
        puVar21 = &UNK_1106c31f8;
        func_0x000107c613f8(&UNK_1106c31f8,puVar19,0,0);
        *puVar19 = 0x3a;
        func_0x000107c61654();
LAB_101ba44d4:
        func_0x000107c6142c(uVar6);
        func_0x000107c61170(puVar3);
        goto LAB_101ba44e8;
      }
      puVar15 = puVar19;
      func_0x000107c5b67c();
      func_0x000107c61180();
      if (puVar15 == (undefined1 *)0x0) {
LAB_101ba4468:
        func_0x000101b9d5ac();
        puVar21 = &UNK_1106c31f8;
        func_0x000107c613f8(&UNK_1106c31f8,puVar15,0,0);
        *puVar15 = 0x3b;
        func_0x000107c61654();
        func_0x000107c61170(puVar19);
        goto LAB_101ba44d4;
      }
      lStack_70 = 0;
      plVar12 = &lStack_70;
      func_0x000107c5fc50();
      func_0x000107c61170();
      lVar16 = lStack_70;
      if (lStack_70 == 0) goto LAB_101ba4468;
      puVar3 = puVar19;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      if (puVar3 == (undefined1 *)0x0) {
        puVar15 = (undefined1 *)0x0;
        plVar12 = (long *)0x0;
      }
      else {
        puVar15 = puVar3;
        func_0x000107c5faec();
        func_0x000107c61170(puVar3);
      }
      lVar18 = *(long *)(unaff_x22 + 0x3e0);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x3d0);
      puVar3 = puVar19;
      func_0x000107c3fd50();
      func_0x000107c61180();
      func_0x000107c61170(puVar19);
      lVar25 = lVar18 + 1;
      func_0x000107c61434(uVar23);
      if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba5044);
        (*pcVar2)();
      }
      uVar23 = *(undefined8 *)(unaff_x22 + 0x3f8);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x3f0);
      uVar11 = *(ulong *)(unaff_x22 + 0x400);
      *(long *)(unaff_x22 + 0x100) = lVar9;
      *(ulong *)(unaff_x22 + 0x108) = uVar6;
      *(undefined1 *)(unaff_x22 + 0x110) = 0;
      *(undefined8 *)(unaff_x22 + 0x118) = 0;
      *(long *)(unaff_x22 + 0x120) = lVar16;
      *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x3d0);
      *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x3c8);
      *(undefined1 **)(unaff_x22 + 0x138) = puVar15;
      *(long **)(unaff_x22 + 0x140) = plVar12;
      *(undefined1 **)(unaff_x22 + 0x148) = puVar3;
      FUN_101b9d4cc(unaff_x22 + 0x100,unaff_x22 + 0x150);
      func_0x000107c61558();
      uVar13 = *(ulong *)(unaff_x22 + 0x400);
      uVar6 = uVar13;
      if ((uVar11 & 1) == 0) {
        uVar6 = 0;
        FUN_101b9bfcc(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
      }
      uVar13 = *(ulong *)(uVar6 + 0x10);
      uVar11 = uVar6;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar13) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_101b9bfcc(uVar11,uVar13 + 1,1,uVar6);
      }
      uVar14 = *(undefined8 *)(unaff_x22 + 0x430);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x408);
      *(ulong *)(uVar11 + 0x10) = uVar13 + 1;
      lVar9 = uVar11 + uVar13 * 0x50;
      uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
      *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(unaff_x22 + 0x108);
      *(undefined8 *)(lVar9 + 0x20) = uVar7;
      uVar8 = *(undefined8 *)(unaff_x22 + 0x118);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x130);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar30 = *(undefined8 *)(unaff_x22 + 0x140);
      *(undefined8 *)(lVar9 + 0x58) = *(undefined8 *)(unaff_x22 + 0x138);
      *(undefined8 *)(lVar9 + 0x50) = uVar29;
      *(undefined8 *)(lVar9 + 0x68) = uVar31;
      *(undefined8 *)(lVar9 + 0x60) = uVar30;
      *(undefined8 *)(lVar9 + 0x38) = uVar8;
      *(undefined8 *)(lVar9 + 0x30) = uVar7;
      *(undefined8 *)(lVar9 + 0x48) = uVar28;
      *(undefined8 *)(lVar9 + 0x40) = uVar27;
      func_0x000107c61170(uVar14);
      func_0x000107c61170(uVar20);
      func_0x000101b9d508(unaff_x22 + 0x100);
    } while( true );
  }
  *(undefined8 *)(unaff_x22 + 0x4f8) = uVar23;
  *(long *)(unaff_x22 + 0x4f0) = lVar26;
  *(undefined **)(unaff_x22 + 0x4e8) = puVar21;
  lVar26 = *(long *)(unaff_x22 + 0x408);
  FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x220);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x238);
  lVar25 = *(long *)(unaff_x22 + 0x240);
  uVar23 = uVar17;
  FUN_101bacf60(unaff_x22 + 0x220);
  func_0x000107c4a77c();
  func_0x000107c61180();
  if (lVar26 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba506c);
    (*pcVar2)();
  }
  lVar9 = lVar26;
  func_0x000107c5faec();
  func_0x000107c61170(lVar26);
  *(undefined8 *)(unaff_x22 + 0x500) = uVar23;
  func_0x000107c614cc(puVar21,unaff_x22 + 0x2d0,unaff_x22 + 0x298);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x2a0);
  FUN_101da5a48(uVar14,*(undefined8 *)(unaff_x22 + 0x2a8));
  piVar10 = *(int **)(lVar25 + 0x10);
  plVar12 = (long *)(ulong)(uint)piVar10[1];
  UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar10 + (long)piVar10);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x508) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_101ba6b18;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x370);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x328);
LAB_101ba4c00:
                    /* WARNING: Could not recover jumptable at 0x000101ba4c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(lVar9,uVar23,uVar20,uVar7,uVar14,uVar8,uVar17,lVar25);
  return;
LAB_101ba4618:
  *(ulong *)(unaff_x22 + 0x478) = uVar6;
  if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba503c);
    (*pcVar2)();
  }
  lVar9 = *(long *)(unaff_x22 + 0x3a0) + uVar6 * 0x20;
  uVar23 = *(undefined8 *)(lVar9 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x480) = uVar23;
  uVar6 = *(ulong *)(lVar9 + 0x28);
  *(ulong *)(unaff_x22 + 0x488) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x490) = *(undefined8 *)(lVar9 + 0x30);
  uVar17 = *(undefined8 *)(lVar9 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x498) = uVar17;
  if (uVar6 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    *(ulong *)(unaff_x22 + 0x4a0) = uVar13;
  }
  else {
    uVar13 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar13 = uVar6;
    }
    func_0x000107c60480(uVar13);
    func_0x000107c60480();
    *(ulong *)(unaff_x22 + 0x4a0) = uVar13;
  }
  if (uVar13 != 0) {
    func_0x000107c61438(uVar6,2);
    func_0x000107c61434(uVar23);
    func_0x000107c61434(uVar17);
    puVar19 = (undefined1 *)0x0;
    do {
      puVar21 = &UNK_1106c31f8;
      *(ulong *)(unaff_x22 + 0x4b8) = uVar11;
      *(long *)(unaff_x22 + 0x4b0) = lVar26;
      *(long *)(unaff_x22 + 0x4a8) = lVar25;
      uVar11 = *(ulong *)(unaff_x22 + 0x488);
      if ((uVar11 & 0xc000000000000001) == 0) {
        if (*(undefined1 **)((uVar11 & 0xffffffffffffff8) + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba5030);
          (*pcVar2)();
        }
        puVar3 = *(undefined1 **)(uVar11 + (long)puVar19 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar3 = puVar19;
        func_0x000101b9be7c();
      }
      *(undefined1 **)(unaff_x22 + 0x4c0) = puVar3;
      *(undefined1 **)(unaff_x22 + 0x4c8) = puVar19 + 1;
      if (SCARRY8((long)puVar19,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba5028);
        (*pcVar2)();
      }
      if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
        FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x248);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x260);
        lVar26 = *(long *)(unaff_x22 + 0x268);
        uVar23 = uVar17;
        FUN_101bacf60(unaff_x22 + 0x248);
        func_0x000107c4a77c();
        func_0x000107c61180();
        if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba5070);
          (*pcVar2)();
        }
        puVar19 = puVar3;
        func_0x000107c5faec();
        func_0x000107c61170(puVar3);
        *(undefined8 *)(unaff_x22 + 0x4d0) = uVar23;
        piVar10 = *(int **)(lVar26 + 8);
        plVar12 = (long *)(ulong)(uint)piVar10[1];
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar10 + (long)piVar10);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x4d8) = plVar12;
        pcVar2 = FUN_101ba507c;
LAB_101ba4ae4:
        *plVar12 = unaff_x22;
        plVar12[1] = (long)pcVar2;
                    /* WARNING: Could not recover jumptable at 0x000101ba4b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)
                  (*(undefined8 *)(unaff_x22 + 0x310),puVar19,uVar23,
                   *(undefined8 *)(unaff_x22 + 0x360),*(undefined8 *)(unaff_x22 + 0x368),
                   *(undefined8 *)(unaff_x22 + 0x370),uVar17,lVar26);
        return;
      }
      lVar26 = *(long *)(unaff_x22 + 0x4b0) + 1;
      if (SCARRY8(*(long *)(unaff_x22 + 0x4b0),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba502c);
        (*pcVar2)();
      }
      puVar4 = PTR_PTR_1126bf7f0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar5 = PTR_PTR_1126bf8d0;
      func_0x000107c610f8(PTR_PTR_1126bf8d0);
      func_0x000107c453e4();
      func_0x000107c53574(puVar4);
      func_0x000107c61170(puVar5);
      puVar19 = puVar4;
      func_0x000107c3fd58();
      func_0x000107c61180();
      if (puVar19 != (undefined1 *)0x0) {
        uVar23 = *(undefined8 *)(unaff_x22 + 0x4c0);
        func_0x000107c5b2dc(uVar23);
        func_0x000107c61180();
        func_0x000107c59588(puVar19);
        func_0x000107c61170(uVar23);
        func_0x000107c61170(puVar19);
      }
      puVar19 = puVar4;
      func_0x000107c3fd58();
      func_0x000107c61180();
      if (puVar19 != (undefined1 *)0x0) {
        uVar23 = *(undefined8 *)(unaff_x22 + 0x4c0);
        func_0x000107c3fd54(uVar23);
        func_0x000107c61180();
        func_0x000107c55d70(puVar19);
        func_0x000107c61170(uVar23);
        func_0x000107c61170(puVar19);
      }
      lVar25 = *(long *)(unaff_x22 + 0x4c0);
      func_0x000107c4a77c();
      func_0x000107c61180();
      if (lVar25 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba5064);
        (*pcVar2)();
      }
      lVar9 = lVar25;
      func_0x000107c5faec();
      func_0x000107c61170(lVar25);
      puVar19 = puVar4;
      func_0x000107c3fd58();
      func_0x000107c61180();
      if (puVar19 == (undefined1 *)0x0) {
        func_0x000101b9d5ac();
        func_0x000107c613f8(&UNK_1106c31f8,puVar19,0,0);
        *puVar19 = 0x3a;
        func_0x000107c61654();
LAB_101ba48d8:
        func_0x000107c6142c(uVar11);
        bVar1 = *(byte *)(unaff_x22 + 0x542);
        func_0x000107c61170(puVar4);
        if ((bVar1 & 1) == 0) {
          *(long *)(unaff_x22 + 0x520) = lVar26;
          *(undefined **)(unaff_x22 + 0x518) = puVar21;
          lVar26 = *(long *)(unaff_x22 + 0x4c0);
          FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x270);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x288);
          lVar25 = *(long *)(unaff_x22 + 0x290);
          uVar23 = uVar17;
          FUN_101bacf60(unaff_x22 + 0x270);
          func_0x000107c4a77c();
          func_0x000107c61180();
          if (lVar26 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba5074);
            (*pcVar2)();
          }
          lVar9 = lVar26;
          func_0x000107c5faec();
          func_0x000107c61170(lVar26);
          *(undefined8 *)(unaff_x22 + 0x528) = uVar23;
          func_0x000107c614cc(puVar21,unaff_x22 + 0x2e0,unaff_x22 + 0x2b0);
          uVar14 = *(undefined8 *)(unaff_x22 + 0x2b8);
          FUN_101da5a48(uVar14,*(undefined8 *)(unaff_x22 + 0x2c0));
          piVar10 = *(int **)(lVar25 + 0x10);
          plVar12 = (long *)(ulong)(uint)piVar10[1];
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar10 + (long)piVar10);
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x530) = plVar12;
          *plVar12 = unaff_x22;
          plVar12[1] = (long)FUN_101ba8dec;
          uVar8 = *(undefined8 *)(unaff_x22 + 0x370);
          uVar7 = *(undefined8 *)(unaff_x22 + 0x330);
          uVar20 = *(undefined8 *)(unaff_x22 + 0x328);
          goto LAB_101ba4c00;
        }
        func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x4c0));
        func_0x000107c614ac(puVar21);
        uVar11 = *(ulong *)(unaff_x22 + 0x4b8);
        lVar25 = *(long *)(unaff_x22 + 0x4a8);
      }
      else {
        puVar3 = puVar19;
        func_0x000107c5b67c();
        func_0x000107c61180();
        if (puVar3 == (undefined1 *)0x0) {
LAB_101ba4874:
          func_0x000101b9d5ac();
          func_0x000107c613f8(&UNK_1106c31f8,puVar3,0,0);
          *puVar3 = 0x3b;
          func_0x000107c61654();
          func_0x000107c61170(puVar19);
          goto LAB_101ba48d8;
        }
        lStack_70 = 0;
        plVar12 = &lStack_70;
        func_0x000107c5fc50();
        func_0x000107c61170();
        lVar25 = lStack_70;
        if (lStack_70 == 0) goto LAB_101ba4874;
        puVar3 = puVar19;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        if (puVar3 == (undefined1 *)0x0) {
          puStack_80 = (undefined1 *)0x0;
          plVar12 = (long *)0x0;
        }
        else {
          puStack_80 = puVar3;
          func_0x000107c5faec();
          func_0x000107c61170(puVar3);
        }
        uVar13 = *(ulong *)(unaff_x22 + 0x4b8);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x498);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x490);
        puVar3 = puVar19;
        func_0x000107c3fd50();
        func_0x000107c61180();
        func_0x000107c61170(puVar19);
        *(long *)(unaff_x22 + 0x60) = lVar9;
        *(ulong *)(unaff_x22 + 0x68) = uVar11;
        *(undefined1 *)(unaff_x22 + 0x70) = 0;
        *(undefined8 *)(unaff_x22 + 0x78) = 0;
        *(long *)(unaff_x22 + 0x80) = lVar25;
        *(undefined8 *)(unaff_x22 + 0x88) = uVar17;
        *(undefined8 *)(unaff_x22 + 0x90) = uVar23;
        *(undefined1 **)(unaff_x22 + 0x98) = puStack_80;
        *(long **)(unaff_x22 + 0xa0) = plVar12;
        *(undefined1 **)(unaff_x22 + 0xa8) = puVar3;
        func_0x000107c61434(uVar23);
        func_0x000107c61170(puVar4);
        FUN_101b9d4cc(unaff_x22 + 0x60,unaff_x22 + 0xb0);
        func_0x000107c61558();
        uVar11 = *(ulong *)(unaff_x22 + 0x4b8);
        uVar6 = uVar11;
        if ((uVar13 & 1) == 0) {
          uVar6 = 0;
          FUN_101b9bfcc(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
        }
        uVar13 = *(ulong *)(uVar6 + 0x10);
        uVar11 = uVar6;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar13) {
          uVar11 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
          FUN_101b9bfcc(uVar11,uVar13 + 1,1,uVar6);
        }
        uVar23 = *(undefined8 *)(unaff_x22 + 0x4c0);
        lVar9 = *(long *)(unaff_x22 + 0x4a8);
        *(ulong *)(uVar11 + 0x10) = uVar13 + 1;
        lVar25 = uVar11 + uVar13 * 0x50;
        uVar17 = *(undefined8 *)(unaff_x22 + 0x60);
        *(undefined8 *)(lVar25 + 0x28) = *(undefined8 *)(unaff_x22 + 0x68);
        *(undefined8 *)(lVar25 + 0x20) = uVar17;
        uVar14 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x70);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x80);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar28 = *(undefined8 *)(unaff_x22 + 0xa8);
        uVar27 = *(undefined8 *)(unaff_x22 + 0xa0);
        *(undefined8 *)(lVar25 + 0x58) = *(undefined8 *)(unaff_x22 + 0x98);
        *(undefined8 *)(lVar25 + 0x50) = uVar8;
        *(undefined8 *)(lVar25 + 0x68) = uVar28;
        *(undefined8 *)(lVar25 + 0x60) = uVar27;
        *(undefined8 *)(lVar25 + 0x38) = uVar14;
        *(undefined8 *)(lVar25 + 0x30) = uVar17;
        *(undefined8 *)(lVar25 + 0x48) = uVar7;
        *(undefined8 *)(lVar25 + 0x40) = uVar20;
        func_0x000107c61170(uVar23);
        func_0x000101b9d508(unaff_x22 + 0x60);
        lVar25 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba5034);
          (*pcVar2)();
        }
      }
      puVar19 = *(undefined1 **)(unaff_x22 + 0x4c8);
    } while (puVar19 != *(undefined1 **)(unaff_x22 + 0x4a0));
    uVar23 = *(undefined8 *)(unaff_x22 + 0x498);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x480);
    func_0x000107c61430(*(undefined8 *)(unaff_x22 + 0x488),2);
    func_0x000107c6142c(uVar17);
    func_0x000107c6142c(uVar23);
  }
  uVar6 = *(long *)(unaff_x22 + 0x478) + 1;
  if (uVar6 == *(ulong *)(unaff_x22 + 0x3a8)) {
    lVar18 = *(long *)(unaff_x22 + 0x470);
    lVar24 = *(long *)(unaff_x22 + 0x468);
    lVar16 = *(long *)(unaff_x22 + 0x460);
    lVar22 = *(long *)(unaff_x22 + 0x458);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x3a0);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x330));
    func_0x000107c6142c(uVar23);
    lVar9 = lVar18 - lVar24;
    if (SBORROW8(lVar18,lVar24)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba5050);
      (*pcVar2)();
    }
    lVar18 = lVar16 - lVar22;
    if (SBORROW8(lVar16,lVar22)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba5054);
      (*pcVar2)();
    }
    lVar16 = lVar26 - lVar25;
    if (SBORROW8(lVar26,lVar25)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba5058);
      (*pcVar2)();
    }
    if (!SCARRY8(lVar9,lVar18)) {
      if (!SCARRY8(lVar9 + lVar18,lVar16)) {
        if (0 < lVar9 + lVar18 + lVar16) {
          lVar25 = *(long *)(unaff_x22 + 0x308);
          lStack_70 = 0;
          uStack_68 = 0xe000000000000000;
          func_0x000107c602fc(0x5c);
          func_0x000107c5fb78(0xd00000000000002c,0x800000010f001ec0);
          *(long *)(unaff_x22 + 0x2f0) = lVar9;
          puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          puVar21 = PTR___sSiN_11034deb0;
          puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00)
          ;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar5);
          func_0x000107c5fb78(0xd000000000000011,0x800000010f001ef0);
          *(long *)(unaff_x22 + 0x2f8) = lVar18;
          puVar5 = puVar4;
          func_0x000107c6057c(puVar21,puVar4);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar5);
          func_0x000107c5fb78(0xd000000000000019,0x800000010f001f10);
          *(long *)(unaff_x22 + 0x300) = lVar16;
          func_0x000107c6057c(puVar21);
          puVar21 = puVar4;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar4);
          uVar23 = uStack_68;
          lVar26 = lStack_70;
          func_0x000107c5cab0();
          func_0x000107c61180();
          if (lVar25 == 0) {
            lVar9 = 0;
            puVar21 = (undefined *)0x0;
          }
          else {
            lVar9 = lVar25;
            func_0x000107c5faec();
            func_0x000107c61170(lVar25);
          }
          lVar25 = *(long *)(unaff_x22 + 0x318);
          uVar17 = *(undefined8 *)(lVar25 + 0x60);
          uVar14 = *(undefined8 *)(lVar25 + 0x28);
          puVar4 = &UNK_110450670;
          func_0x000107c613fc(&UNK_110450670,0x18,7);
          func_0x000107c61644(puVar4 + 0x10,lVar25);
          puVar5 = &UNK_110450698;
          func_0x000107c613fc(&UNK_110450698,0x50,7);
          *(undefined **)(puVar5 + 0x10) = puVar4;
          *(long *)(puVar5 + 0x18) = lVar26;
          *(undefined8 *)(puVar5 + 0x20) = uVar23;
          puVar5[0x28] = 1;
          *(undefined8 *)(puVar5 + 0x30) = 0;
          *(undefined8 *)(puVar5 + 0x38) = 0;
          *(long *)(puVar5 + 0x40) = lVar9;
          *(undefined **)(puVar5 + 0x48) = puVar21;
          *(code **)(unaff_x22 + 0x1c0) = FUN_101baca00;
          *(undefined **)(unaff_x22 + 0x1c8) = puVar5;
          *(undefined **)(unaff_x22 + 0x1a0) = PTR___NSConcreteStackBlock_11034bd00;
          *(undefined8 *)(unaff_x22 + 0x1a8) = 0x42000000;
          *(undefined **)(unaff_x22 + 0x1b0) = &UNK_100288f10;
          *(undefined **)(unaff_x22 + 0x1b8) = &UNK_1104506b0;
          lVar26 = unaff_x22 + 0x1a0;
          func_0x000107c60bc4(lVar26);
          uVar20 = *(undefined8 *)(unaff_x22 + 0x1c8);
          func_0x000107c61434(puVar21);
          func_0x000107c61434(uVar23);
          func_0x000107c61574(uVar20);
          func_0x000108ec0f10(uVar17,uVar14,lVar26);
          func_0x000107c60bd0(lVar26);
          func_0x000107c6142c(puVar21);
          func_0x000107c6142c(uVar23);
        }
        uVar23 = *(undefined8 *)(unaff_x22 + 0x370);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x368);
        func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x338));
        func_0x000107c6142c(uVar17);
        func_0x000107c61170(uVar23);
                    /* WARNING: Could not recover jumptable at 0x000101ba5020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))(uVar11);
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba5060);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba505c);
    (*pcVar2)();
  }
  goto LAB_101ba4618;
LAB_101ba4400:
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
  uVar11 = *(ulong *)(unaff_x22 + 0x400);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x3f8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x3f0);
  lVar26 = *(long *)(unaff_x22 + 1000);
  goto LAB_101ba40a4;
}



/* Entry: 101ba507c; end: 101ba50df;  */

void FUN_101ba507c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x4e0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x4d8));
  func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x4d0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101ba50e0;
  }
  else {
    pcVar1 = FUN_101ba97e8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101ba50e0; end: 101ba5a6b;  */

void FUN_101ba50e0(undefined8 param_1,ulong param_2)

{
  int iVar1;
  byte bVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x22;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 *puStack_88;
  long lStack_70;
  undefined8 uStack_68;
  
  FUN_101bacf10(unaff_x22 + 0x248);
  do {
    puVar14 = &UNK_1106c31f8;
    lVar16 = *(long *)(unaff_x22 + 0x4b0) + 1;
    if (SCARRY8(*(long *)(unaff_x22 + 0x4b0),1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba5a40);
      (*pcVar3)();
    }
    puVar4 = PTR_PTR_1126bf7f0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar5 = PTR_PTR_1126bf8d0;
    func_0x000107c610f8(PTR_PTR_1126bf8d0);
    func_0x000107c453e4();
    func_0x000107c53574(puVar4);
    func_0x000107c61170(puVar5);
    puVar6 = puVar4;
    func_0x000107c3fd58();
    func_0x000107c61180();
    if (puVar6 != (undefined1 *)0x0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x4c0);
      func_0x000107c5b2dc(uVar7);
      func_0x000107c61180();
      func_0x000107c59588(puVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(puVar6);
    }
    puVar6 = puVar4;
    func_0x000107c3fd58();
    func_0x000107c61180();
    if (puVar6 != (undefined1 *)0x0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x4c0);
      func_0x000107c3fd54(uVar7);
      func_0x000107c61180();
      func_0x000107c55d70(puVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(puVar6);
    }
    lVar8 = *(long *)(unaff_x22 + 0x4c0);
    func_0x000107c4a77c();
    func_0x000107c61180();
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba5a64);
      (*pcVar3)();
    }
    lVar12 = lVar8;
    func_0x000107c5faec();
    func_0x000107c61170(lVar8);
    puVar6 = puVar4;
    func_0x000107c3fd58();
    func_0x000107c61180();
    if (puVar6 == (undefined1 *)0x0) {
      func_0x000101b9d5ac();
      func_0x000107c613f8(&UNK_1106c31f8,puVar6,0,0);
      *puVar6 = 0x3a;
      func_0x000107c61654();
LAB_101ba5300:
      func_0x000107c6142c(param_2);
      bVar2 = *(byte *)(unaff_x22 + 0x542);
      func_0x000107c61170(puVar4);
      if ((bVar2 & 1) == 0) {
        *(long *)(unaff_x22 + 0x520) = lVar16;
        *(undefined **)(unaff_x22 + 0x518) = puVar14;
        lVar16 = *(long *)(unaff_x22 + 0x4c0);
        FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x270);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x288);
        lVar8 = *(long *)(unaff_x22 + 0x290);
        uVar7 = uVar15;
        FUN_101bacf60(unaff_x22 + 0x270);
        func_0x000107c4a77c();
        func_0x000107c61180();
        if (lVar16 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba5a68);
          (*pcVar3)();
        }
        lVar12 = lVar16;
        func_0x000107c5faec();
        func_0x000107c61170(lVar16);
        *(undefined8 *)(unaff_x22 + 0x528) = uVar7;
        func_0x000107c614cc(puVar14,unaff_x22 + 0x2e0,unaff_x22 + 0x2b0);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x2b8);
        FUN_101da5a48(uVar20,*(undefined8 *)(unaff_x22 + 0x2c0));
        piVar11 = *(int **)(lVar8 + 0x10);
        iVar1 = *piVar11;
        plVar24 = (long *)(ulong)(uint)piVar11[1];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x530) = plVar24;
        *plVar24 = unaff_x22;
        plVar24[1] = (long)FUN_101ba8dec;
                    /* WARNING: Could not recover jumptable at 0x000101ba5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar11))
                  (lVar12,uVar7,*(undefined8 *)(unaff_x22 + 0x328),
                   *(undefined8 *)(unaff_x22 + 0x330),uVar20,*(undefined8 *)(unaff_x22 + 0x370),
                   uVar15,lVar8);
        return;
      }
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x4c0));
      func_0x000107c614ac(puVar14);
      uVar10 = *(ulong *)(unaff_x22 + 0x4b8);
      lVar8 = *(long *)(unaff_x22 + 0x4a8);
    }
    else {
      puVar9 = puVar6;
      func_0x000107c5b67c();
      func_0x000107c61180();
      if (puVar9 == (undefined1 *)0x0) {
LAB_101ba529c:
        func_0x000101b9d5ac();
        func_0x000107c613f8(&UNK_1106c31f8,puVar9,0,0);
        *puVar9 = 0x3b;
        func_0x000107c61654();
        func_0x000107c61170(puVar6);
        goto LAB_101ba5300;
      }
      lStack_70 = 0;
      plVar24 = &lStack_70;
      func_0x000107c5fc50();
      func_0x000107c61170();
      lVar8 = lStack_70;
      if (lStack_70 == 0) goto LAB_101ba529c;
      puVar9 = puVar6;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      if (puVar9 == (undefined1 *)0x0) {
        puStack_88 = (undefined1 *)0x0;
        plVar24 = (long *)0x0;
      }
      else {
        puStack_88 = puVar9;
        func_0x000107c5faec();
        func_0x000107c61170(puVar9);
      }
      uVar10 = *(ulong *)(unaff_x22 + 0x4b8);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x498);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x490);
      puVar9 = puVar6;
      func_0x000107c3fd50();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      *(long *)(unaff_x22 + 0x60) = lVar12;
      *(ulong *)(unaff_x22 + 0x68) = param_2;
      *(undefined1 *)(unaff_x22 + 0x70) = 0;
      *(undefined8 *)(unaff_x22 + 0x78) = 0;
      *(long *)(unaff_x22 + 0x80) = lVar8;
      *(undefined8 *)(unaff_x22 + 0x88) = uVar7;
      *(undefined8 *)(unaff_x22 + 0x90) = uVar15;
      *(undefined1 **)(unaff_x22 + 0x98) = puStack_88;
      *(long **)(unaff_x22 + 0xa0) = plVar24;
      *(undefined1 **)(unaff_x22 + 0xa8) = puVar9;
      func_0x000107c61434(uVar15);
      func_0x000107c61170(puVar4);
      FUN_101b9d4cc(unaff_x22 + 0x60,unaff_x22 + 0xb0);
      func_0x000107c61558();
      uVar17 = *(ulong *)(unaff_x22 + 0x4b8);
      uVar18 = uVar17;
      if ((uVar10 & 1) == 0) {
        uVar18 = 0;
        FUN_101b9bfcc(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
      }
      uVar17 = *(ulong *)(uVar18 + 0x10);
      uVar10 = uVar18;
      if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar17) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar18 + 0x18));
        FUN_101b9bfcc(uVar10,uVar17 + 1,1,uVar18);
      }
      uVar7 = *(undefined8 *)(unaff_x22 + 0x4c0);
      lVar12 = *(long *)(unaff_x22 + 0x4a8);
      *(ulong *)(uVar10 + 0x10) = uVar17 + 1;
      lVar8 = uVar10 + uVar17 * 0x50;
      uVar15 = *(undefined8 *)(unaff_x22 + 0x60);
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(unaff_x22 + 0x68);
      *(undefined8 *)(lVar8 + 0x20) = uVar15;
      uVar20 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar28 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar27 = *(undefined8 *)(unaff_x22 + 0xa0);
      *(undefined8 *)(lVar8 + 0x58) = *(undefined8 *)(unaff_x22 + 0x98);
      *(undefined8 *)(lVar8 + 0x50) = uVar26;
      *(undefined8 *)(lVar8 + 0x68) = uVar28;
      *(undefined8 *)(lVar8 + 0x60) = uVar27;
      *(undefined8 *)(lVar8 + 0x38) = uVar20;
      *(undefined8 *)(lVar8 + 0x30) = uVar15;
      *(undefined8 *)(lVar8 + 0x48) = uVar25;
      *(undefined8 *)(lVar8 + 0x40) = uVar23;
      func_0x000107c61170(uVar7);
      func_0x000101b9d508(unaff_x22 + 0x60);
      lVar8 = lVar12 + 1;
      if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba5a60);
        (*pcVar3)();
      }
    }
    uVar18 = *(ulong *)(unaff_x22 + 0x4c8);
    param_2 = *(ulong *)(unaff_x22 + 0x488);
    if (uVar18 == *(ulong *)(unaff_x22 + 0x4a0)) {
      uVar15 = *(undefined8 *)(unaff_x22 + 0x498);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x480);
      func_0x000107c61430(param_2,2);
      func_0x000107c6142c(uVar7);
      func_0x000107c6142c(uVar15);
      do {
        while( true ) {
          uVar18 = *(long *)(unaff_x22 + 0x478) + 1;
          if (uVar18 == *(ulong *)(unaff_x22 + 0x3a8)) {
            lVar19 = *(long *)(unaff_x22 + 0x470);
            lVar22 = *(long *)(unaff_x22 + 0x468);
            lVar13 = *(long *)(unaff_x22 + 0x460);
            lVar21 = *(long *)(unaff_x22 + 0x458);
            uVar7 = *(undefined8 *)(unaff_x22 + 0x3a0);
            func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x330));
            func_0x000107c6142c(uVar7);
            lVar12 = lVar19 - lVar22;
            if (SBORROW8(lVar19,lVar22)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba5a4c);
              (*pcVar3)();
            }
            lVar19 = lVar13 - lVar21;
            if (SBORROW8(lVar13,lVar21)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba5a50);
              (*pcVar3)();
            }
            lVar13 = lVar16 - lVar8;
            if (SBORROW8(lVar16,lVar8)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba5a54);
              (*pcVar3)();
            }
            if (SCARRY8(lVar12,lVar19)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba5a58);
              (*pcVar3)();
            }
            if (SCARRY8(lVar12 + lVar19,lVar13)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba5a5c);
              (*pcVar3)();
            }
            if (0 < lVar12 + lVar19 + lVar13) {
              lVar8 = *(long *)(unaff_x22 + 0x308);
              lStack_70 = 0;
              uStack_68 = 0xe000000000000000;
              func_0x000107c602fc(0x5c);
              func_0x000107c5fb78(0xd00000000000002c,0x800000010f001ec0);
              *(long *)(unaff_x22 + 0x2f0) = lVar12;
              puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
              puVar14 = PTR___sSiN_11034deb0;
              puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
              func_0x000107c6057c(PTR___sSiN_11034deb0,
                                  PTR___sSis23CustomStringConvertiblesWP_11034df00);
              func_0x000107c5fb78();
              func_0x000107c6142c(puVar5);
              func_0x000107c5fb78(0xd000000000000011,0x800000010f001ef0);
              *(long *)(unaff_x22 + 0x2f8) = lVar19;
              puVar5 = puVar4;
              func_0x000107c6057c(puVar14,puVar4);
              func_0x000107c5fb78();
              func_0x000107c6142c(puVar5);
              func_0x000107c5fb78(0xd000000000000019,0x800000010f001f10);
              *(long *)(unaff_x22 + 0x300) = lVar13;
              func_0x000107c6057c(puVar14);
              puVar14 = puVar4;
              func_0x000107c5fb78();
              func_0x000107c6142c(puVar4);
              uVar7 = uStack_68;
              lVar16 = lStack_70;
              func_0x000107c5cab0();
              func_0x000107c61180();
              if (lVar8 == 0) {
                lVar12 = 0;
                puVar14 = (undefined *)0x0;
              }
              else {
                lVar12 = lVar8;
                func_0x000107c5faec();
                func_0x000107c61170(lVar8);
              }
              lVar8 = *(long *)(unaff_x22 + 0x318);
              uVar15 = *(undefined8 *)(lVar8 + 0x60);
              uVar20 = *(undefined8 *)(lVar8 + 0x28);
              puVar4 = &UNK_110450670;
              func_0x000107c613fc(&UNK_110450670,0x18,7);
              func_0x000107c61644(puVar4 + 0x10,lVar8);
              puVar5 = &UNK_110450698;
              func_0x000107c613fc(&UNK_110450698,0x50,7);
              *(undefined **)(puVar5 + 0x10) = puVar4;
              *(long *)(puVar5 + 0x18) = lVar16;
              *(undefined8 *)(puVar5 + 0x20) = uVar7;
              puVar5[0x28] = 1;
              *(undefined8 *)(puVar5 + 0x30) = 0;
              *(undefined8 *)(puVar5 + 0x38) = 0;
              *(long *)(puVar5 + 0x40) = lVar12;
              *(undefined **)(puVar5 + 0x48) = puVar14;
              *(code **)(unaff_x22 + 0x1c0) = FUN_101baca00;
              *(undefined **)(unaff_x22 + 0x1c8) = puVar5;
              *(undefined **)(unaff_x22 + 0x1a0) = PTR___NSConcreteStackBlock_11034bd00;
              *(undefined8 *)(unaff_x22 + 0x1a8) = 0x42000000;
              *(undefined **)(unaff_x22 + 0x1b0) = &UNK_100288f10;
              *(undefined **)(unaff_x22 + 0x1b8) = &UNK_1104506b0;
              lVar16 = unaff_x22 + 0x1a0;
              func_0x000107c60bc4(lVar16);
              uVar23 = *(undefined8 *)(unaff_x22 + 0x1c8);
              func_0x000107c61434(puVar14);
              func_0x000107c61434(uVar7);
              func_0x000107c61574(uVar23);
              func_0x000108ec0f10(uVar15,uVar20,lVar16);
              func_0x000107c60bd0(lVar16);
              func_0x000107c6142c(puVar14);
              func_0x000107c6142c(uVar7);
            }
            uVar15 = *(undefined8 *)(unaff_x22 + 0x370);
            uVar7 = *(undefined8 *)(unaff_x22 + 0x368);
            func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x338));
            func_0x000107c6142c(uVar7);
            func_0x000107c61170(uVar15);
                    /* WARNING: Could not recover jumptable at 0x000101ba5864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(unaff_x22 + 8))(uVar10);
            return;
          }
          *(ulong *)(unaff_x22 + 0x478) = uVar18;
          if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba5a3c);
            (*pcVar3)();
          }
          lVar12 = *(long *)(unaff_x22 + 0x3a0) + uVar18 * 0x20;
          uVar7 = *(undefined8 *)(lVar12 + 0x20);
          *(undefined8 *)(unaff_x22 + 0x480) = uVar7;
          uVar18 = *(ulong *)(lVar12 + 0x28);
          *(ulong *)(unaff_x22 + 0x488) = uVar18;
          *(undefined8 *)(unaff_x22 + 0x490) = *(undefined8 *)(lVar12 + 0x30);
          uVar15 = *(undefined8 *)(lVar12 + 0x38);
          *(undefined8 *)(unaff_x22 + 0x498) = uVar15;
          if (uVar18 >> 0x3e != 0) break;
          lVar12 = *(long *)((uVar18 & 0xffffffffffffff8) + 0x10);
          *(long *)(unaff_x22 + 0x4a0) = lVar12;
          if (lVar12 != 0) goto LAB_101ba54e0;
        }
        uVar17 = uVar18 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar18) {
          uVar17 = uVar18;
        }
        func_0x000107c60480(uVar17);
        func_0x000107c60480();
        *(ulong *)(unaff_x22 + 0x4a0) = uVar17;
      } while (uVar17 == 0);
LAB_101ba54e0:
      func_0x000107c61438(uVar18,2);
      func_0x000107c61434(uVar7);
      func_0x000107c61434(uVar15);
      uVar18 = 0;
      param_2 = *(ulong *)(unaff_x22 + 0x488);
    }
    *(ulong *)(unaff_x22 + 0x4b8) = uVar10;
    *(long *)(unaff_x22 + 0x4b0) = lVar16;
    *(long *)(unaff_x22 + 0x4a8) = lVar8;
    if ((param_2 & 0xc000000000000001) == 0) {
      if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba5a48);
        (*pcVar3)();
      }
      uVar10 = *(ulong *)(param_2 + uVar18 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar10 = uVar18;
      FUN_101b9be7c();
    }
    *(ulong *)(unaff_x22 + 0x4c0) = uVar10;
    *(ulong *)(unaff_x22 + 0x4c8) = uVar18 + 1;
    if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba5a44);
      (*pcVar3)();
    }
    if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
      FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x248);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x260);
      lVar16 = *(long *)(unaff_x22 + 0x268);
      uVar7 = uVar15;
      FUN_101bacf60(unaff_x22 + 0x248);
      func_0x000107c4a77c();
      func_0x000107c61180();
      if (uVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba5a6c);
        (*pcVar3)();
      }
      uVar18 = uVar10;
      func_0x000107c5faec();
      func_0x000107c61170(uVar10);
      *(undefined8 *)(unaff_x22 + 0x4d0) = uVar7;
      piVar11 = *(int **)(lVar16 + 8);
      iVar1 = *piVar11;
      plVar24 = (long *)(ulong)(uint)piVar11[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x4d8) = plVar24;
      *plVar24 = unaff_x22;
      plVar24[1] = (long)FUN_101ba507c;
                    /* WARNING: Could not recover jumptable at 0x000101ba5a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar11))
                (*(undefined8 *)(unaff_x22 + 0x310),uVar18,uVar7,*(undefined8 *)(unaff_x22 + 0x360),
                 *(undefined8 *)(unaff_x22 + 0x368),*(undefined8 *)(unaff_x22 + 0x370),uVar15,lVar16
                );
      return;
    }
  } while( true );
}



/* Entry: 101ba5a6c; end: 101ba6b17;  */

void FUN_101ba5a6c(void)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  long unaff_x22;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long *plStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *UNRECOVERED_JUMPTABLE_00;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x390));
  puVar16 = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar17 = *(long *)(unaff_x22 + 0x380);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x378);
  lVar11 = lVar17;
  func_0x000101bac174(lVar17,uVar15,PTR___swiftEmptySetSingleton_11034f1d8);
  *(long *)(unaff_x22 + 0x3a0) = lVar11;
  func_0x000107c6142c(puVar16);
  func_0x000107c6142c(lVar17);
  func_0x000107c6142c(uVar15);
  lVar11 = *(long *)(lVar11 + 0x10);
  *(long *)(unaff_x22 + 0x3a8) = lVar11;
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar11 == 0) {
    lVar17 = 0;
    lVar11 = 0;
    lVar24 = 0;
    lVar21 = 0;
    lVar25 = 0;
    lVar22 = 0;
  }
  else {
    lVar17 = 0;
    lVar11 = 0;
    uVar15 = 0;
    uVar26 = 0;
    uVar12 = 0;
    do {
      *(ulong *)(unaff_x22 + 0x3b0) = uVar12;
      if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6acc);
        (*pcVar3)();
      }
      lVar21 = *(long *)(unaff_x22 + 0x3a0) + uVar12 * 0x20;
      uVar12 = *(ulong *)(lVar21 + 0x20);
      *(ulong *)(unaff_x22 + 0x3b8) = uVar12;
      uVar18 = *(undefined8 *)(lVar21 + 0x28);
      *(undefined8 *)(unaff_x22 + 0x3c0) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x3c8) = *(undefined8 *)(lVar21 + 0x30);
      uVar23 = *(undefined8 *)(lVar21 + 0x38);
      *(undefined8 *)(unaff_x22 + 0x3d0) = uVar23;
      if (uVar12 >> 0x3e == 0) {
        uVar13 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
        *(ulong *)(unaff_x22 + 0x3d8) = uVar13;
      }
      else {
        uVar13 = uVar12 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar12) {
          uVar13 = uVar12;
        }
        func_0x000107c60480();
        *(ulong *)(unaff_x22 + 0x3d8) = uVar13;
      }
      if (uVar13 != 0) {
        func_0x000107c61438(uVar12,2);
        func_0x000107c61434(uVar18);
        func_0x000107c61434(uVar23);
        puVar19 = (undefined1 *)0x0;
        do {
          *(undefined **)(unaff_x22 + 0x400) = puVar16;
          *(undefined8 *)(unaff_x22 + 0x3f8) = uVar26;
          *(undefined8 *)(unaff_x22 + 0x3f0) = uVar15;
          *(long *)(unaff_x22 + 1000) = lVar11;
          *(long *)(unaff_x22 + 0x3e0) = lVar17;
          uVar12 = *(ulong *)(unaff_x22 + 0x3b8);
          if ((uVar12 & 0xc000000000000001) == 0) {
            if (*(undefined1 **)((uVar12 & 0xffffffffffffff8) + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6ab0);
              (*pcVar3)();
            }
            puVar8 = *(undefined1 **)(uVar12 + (long)puVar19 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar8 = puVar19;
            func_0x000101b9be90();
          }
          *(undefined1 **)(unaff_x22 + 0x408) = puVar8;
          *(undefined1 **)(unaff_x22 + 0x410) = puVar19 + 1;
          if (SCARRY8((long)puVar19,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6aac);
            (*pcVar3)();
          }
          if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
            FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x1f8);
            uVar26 = *(undefined8 *)(unaff_x22 + 0x210);
            lVar11 = *(long *)(unaff_x22 + 0x218);
            uVar15 = uVar26;
            FUN_101bacf60(unaff_x22 + 0x1f8);
            func_0x000107c4a77c();
            func_0x000107c61180();
            if (puVar8 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6b08);
              (*pcVar3)();
            }
            puVar19 = puVar8;
            func_0x000107c5faec();
            func_0x000107c61170(puVar8);
            *(undefined8 *)(unaff_x22 + 0x418) = uVar15;
            piVar14 = *(int **)(lVar11 + 8);
            plVar5 = (long *)(ulong)(uint)piVar14[1];
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar14 + (long)piVar14);
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x420) = plVar5;
            pcVar3 = FUN_101ba1ed8;
            goto LAB_101ba6190;
          }
          func_0x000107c51f9c();
          func_0x000107c61180();
          *(undefined1 **)(unaff_x22 + 0x430) = puVar8;
          if (puVar8 == (undefined1 *)0x0) {
            func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
            puVar16 = *(undefined **)(unaff_x22 + 0x400);
            uVar26 = *(undefined8 *)(unaff_x22 + 0x3f8);
            uVar15 = *(undefined8 *)(unaff_x22 + 0x3f0);
            lVar11 = *(long *)(unaff_x22 + 1000);
LAB_101ba5fa8:
            lVar17 = *(long *)(unaff_x22 + 0x3e0);
          }
          else {
            puVar19 = puVar8;
            func_0x000107c5b420();
            if ((int)puVar19 != 4) {
              if ((int)puVar19 == 6) {
                *(long *)(unaff_x22 + 0x438) = *(long *)(unaff_x22 + 0x3f8) + 1;
                if (SCARRY8(*(long *)(unaff_x22 + 0x3f8),1)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6af8);
                  (*pcVar3)();
                }
                lVar11 = *(long *)(unaff_x22 + 0x408);
                func_0x000107c4a77c();
                func_0x000107c61180();
                if (lVar11 != 0) {
                  lVar17 = lVar11;
                  func_0x000107c5faec();
                  func_0x000107c61170(lVar11);
                  *(ulong *)(unaff_x22 + 0x440) = uVar12;
                  plVar5 = (long *)0x60;
                  func_0x000107c615b8();
                  *(long **)(unaff_x22 + 0x448) = plVar5;
                  *plVar5 = unaff_x22;
                  plVar5[1] = (long)FUN_101ba2f64;
                  lVar11 = *(long *)(unaff_x22 + 0x3d0);
                  plVar5[6] = *(long *)(unaff_x22 + 0x3c8);
                  plVar5[7] = lVar11;
                  plVar5[4] = lVar17;
                  plVar5[5] = uVar12;
                  plVar5[2] = unaff_x22 + 0x10;
                  plVar5[3] = (long)puVar8;
                  lVar11 = 0;
                  func_0x000107c5eea4();
                  plVar5[8] = lVar11;
                  lVar11 = *(long *)(lVar11 + -8);
                  plVar5[9] = lVar11;
                  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
                  func_0x000107c615b8();
                  plVar5[10] = uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bacab8,0,0);
                  return;
                }
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6b10);
                (*pcVar3)();
              }
              func_0x000101b9d5ac();
              puVar16 = &UNK_1106c31f8;
              func_0x000107c613f8(&UNK_1106c31f8,puVar19,0,0);
              *puVar19 = 0x37;
              func_0x000107c61654();
              func_0x000107c61170(puVar8);
              lVar11 = *(long *)(unaff_x22 + 1000);
LAB_101ba5f80:
              uVar26 = *(undefined8 *)(unaff_x22 + 0x3f8);
              if (*(char *)(unaff_x22 + 0x542) == '\x01') {
                func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
                func_0x000107c614ac(puVar16);
                puVar16 = *(undefined **)(unaff_x22 + 0x400);
                uVar15 = *(undefined8 *)(unaff_x22 + 0x3f0);
                goto LAB_101ba5fa8;
              }
              *(undefined8 *)(unaff_x22 + 0x4f8) = uVar26;
              *(long *)(unaff_x22 + 0x4f0) = lVar11;
              *(undefined **)(unaff_x22 + 0x4e8) = puVar16;
              lVar11 = *(long *)(unaff_x22 + 0x408);
              FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x220);
              uVar26 = *(undefined8 *)(unaff_x22 + 0x238);
              lVar17 = *(long *)(unaff_x22 + 0x240);
              uVar15 = uVar26;
              FUN_101bacf60(unaff_x22 + 0x220);
              func_0x000107c4a77c();
              func_0x000107c61180();
              if (lVar11 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6b0c);
                (*pcVar3)();
              }
              lVar21 = lVar11;
              func_0x000107c5faec();
              func_0x000107c61170(lVar11);
              *(undefined8 *)(unaff_x22 + 0x500) = uVar15;
              func_0x000107c614cc(puVar16,unaff_x22 + 0x2d0,unaff_x22 + 0x298);
              uVar18 = *(undefined8 *)(unaff_x22 + 0x2a0);
              FUN_101da5a48(uVar18,*(undefined8 *)(unaff_x22 + 0x2a8));
              piVar14 = *(int **)(lVar17 + 0x10);
              plVar5 = (long *)(ulong)(uint)piVar14[1];
              UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar14 + (long)piVar14);
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0x508) = plVar5;
              *plVar5 = unaff_x22;
              plVar5[1] = (long)FUN_101ba6b18;
              uVar10 = *(undefined8 *)(unaff_x22 + 0x370);
              uVar9 = *(undefined8 *)(unaff_x22 + 0x330);
              uVar23 = *(undefined8 *)(unaff_x22 + 0x328);
              goto LAB_101ba62ac;
            }
            lVar11 = *(long *)(unaff_x22 + 1000) + 1;
            if (SCARRY8(*(long *)(unaff_x22 + 1000),1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6ab4);
              (*pcVar3)();
            }
            lVar17 = *(long *)(unaff_x22 + 0x408);
            func_0x000107c4a77c();
            func_0x000107c61180();
            if (lVar17 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6b00);
              (*pcVar3)();
            }
            lVar21 = lVar17;
            func_0x000107c5faec();
            func_0x000107c61170(lVar17);
            puVar19 = puVar8;
            func_0x000107c3fd58();
            func_0x000107c61180();
            if (puVar19 == (undefined1 *)0x0) {
              func_0x000101b9d5ac();
              puVar16 = &UNK_1106c31f8;
              func_0x000107c613f8(&UNK_1106c31f8,puVar19,0,0);
              *puVar19 = 0x3a;
              func_0x000107c61654();
LAB_101ba5f70:
              func_0x000107c6142c(uVar12);
              func_0x000107c61170(puVar8);
              goto LAB_101ba5f80;
            }
            puVar4 = puVar19;
            func_0x000107c5b67c();
            func_0x000107c61180();
            if (puVar4 == (undefined1 *)0x0) {
LAB_101ba5f04:
              func_0x000101b9d5ac();
              puVar16 = &UNK_1106c31f8;
              func_0x000107c613f8(&UNK_1106c31f8,puVar4,0,0);
              *puVar4 = 0x3b;
              func_0x000107c61654();
              func_0x000107c61170(puVar19);
              goto LAB_101ba5f70;
            }
            lStack_70 = 0;
            plVar5 = &lStack_70;
            func_0x000107c5fc50();
            func_0x000107c61170();
            lVar22 = lStack_70;
            if (lStack_70 == 0) goto LAB_101ba5f04;
            puVar8 = puVar19;
            func_0x000107c4b1dc();
            func_0x000107c61180();
            if (puVar8 == (undefined1 *)0x0) {
              puStack_88 = (undefined1 *)0x0;
              plVar5 = (long *)0x0;
            }
            else {
              puStack_88 = puVar8;
              func_0x000107c5faec();
              func_0x000107c61170(puVar8);
            }
            lVar24 = *(long *)(unaff_x22 + 0x3e0);
            uVar15 = *(undefined8 *)(unaff_x22 + 0x3d0);
            puVar8 = puVar19;
            func_0x000107c3fd50();
            func_0x000107c61180();
            func_0x000107c61170(puVar19);
            lVar17 = lVar24 + 1;
            func_0x000107c61434(uVar15);
            if (SCARRY8(lVar24,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6ad0);
              (*pcVar3)();
            }
            uVar26 = *(undefined8 *)(unaff_x22 + 0x3f8);
            uVar15 = *(undefined8 *)(unaff_x22 + 0x3f0);
            uVar13 = *(ulong *)(unaff_x22 + 0x400);
            *(long *)(unaff_x22 + 0x100) = lVar21;
            *(ulong *)(unaff_x22 + 0x108) = uVar12;
            *(undefined1 *)(unaff_x22 + 0x110) = 0;
            *(undefined8 *)(unaff_x22 + 0x118) = 0;
            *(long *)(unaff_x22 + 0x120) = lVar22;
            *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x3d0);
            *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x3c8);
            *(undefined1 **)(unaff_x22 + 0x138) = puStack_88;
            *(long **)(unaff_x22 + 0x140) = plVar5;
            *(undefined1 **)(unaff_x22 + 0x148) = puVar8;
            FUN_101b9d4cc(unaff_x22 + 0x100,unaff_x22 + 0x150);
            func_0x000107c61558();
            puVar16 = *(undefined **)(unaff_x22 + 0x400);
            puVar20 = puVar16;
            if ((uVar13 & 1) == 0) {
              puVar20 = (undefined *)0x0;
              FUN_101b9bfcc(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
            }
            uVar12 = *(ulong *)(puVar20 + 0x10);
            puVar16 = puVar20;
            if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar12) {
              puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar20 + 0x18));
              FUN_101b9bfcc(puVar16,uVar12 + 1,1,puVar20);
            }
            uVar18 = *(undefined8 *)(unaff_x22 + 0x430);
            uVar23 = *(undefined8 *)(unaff_x22 + 0x408);
            *(ulong *)(puVar16 + 0x10) = uVar12 + 1;
            uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x28) = *(undefined8 *)(unaff_x22 + 0x108);
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x20) = uVar9;
            uVar10 = *(undefined8 *)(unaff_x22 + 0x118);
            uVar9 = *(undefined8 *)(unaff_x22 + 0x110);
            uVar28 = *(undefined8 *)(unaff_x22 + 0x128);
            uVar27 = *(undefined8 *)(unaff_x22 + 0x120);
            uVar29 = *(undefined8 *)(unaff_x22 + 0x130);
            uVar31 = *(undefined8 *)(unaff_x22 + 0x148);
            uVar30 = *(undefined8 *)(unaff_x22 + 0x140);
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x58) = *(undefined8 *)(unaff_x22 + 0x138);
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x50) = uVar29;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x68) = uVar31;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x60) = uVar30;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x38) = uVar10;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x30) = uVar9;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x48) = uVar28;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x40) = uVar27;
            func_0x000107c61170(uVar18);
            func_0x000107c61170(uVar23);
            func_0x000101b9d508(unaff_x22 + 0x100);
          }
          puVar19 = *(undefined1 **)(unaff_x22 + 0x410);
        } while (puVar19 != *(undefined1 **)(unaff_x22 + 0x3d8));
        uVar18 = *(undefined8 *)(unaff_x22 + 0x3d0);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x3c0);
        func_0x000107c61430(*(undefined8 *)(unaff_x22 + 0x3b8),2);
        func_0x000107c6142c(uVar23);
        func_0x000107c6142c(uVar18);
      }
      *(undefined8 *)(unaff_x22 + 0x470) = uVar26;
      *(undefined8 *)(unaff_x22 + 0x468) = uVar15;
      *(long *)(unaff_x22 + 0x460) = lVar11;
      *(long *)(unaff_x22 + 0x458) = lVar17;
      uVar12 = *(long *)(unaff_x22 + 0x3b0) + 1;
    } while (uVar12 != *(ulong *)(unaff_x22 + 0x3a8));
    lVar17 = 0;
    lVar11 = 0;
    uVar12 = 0;
    do {
      *(ulong *)(unaff_x22 + 0x478) = uVar12;
      if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6afc);
        (*pcVar3)();
      }
      lVar21 = *(long *)(unaff_x22 + 0x3a0) + uVar12 * 0x20;
      uVar15 = *(undefined8 *)(lVar21 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x480) = uVar15;
      uVar12 = *(ulong *)(lVar21 + 0x28);
      *(ulong *)(unaff_x22 + 0x488) = uVar12;
      *(undefined8 *)(unaff_x22 + 0x490) = *(undefined8 *)(lVar21 + 0x30);
      uVar26 = *(undefined8 *)(lVar21 + 0x38);
      *(undefined8 *)(unaff_x22 + 0x498) = uVar26;
      if (uVar12 >> 0x3e == 0) {
        uVar13 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
        *(ulong *)(unaff_x22 + 0x4a0) = uVar13;
      }
      else {
        uVar13 = uVar12 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar12) {
          uVar13 = uVar12;
        }
        func_0x000107c60480(uVar13);
        func_0x000107c60480();
        *(ulong *)(unaff_x22 + 0x4a0) = uVar13;
      }
      if (uVar13 != 0) {
        func_0x000107c61438(uVar12,2);
        func_0x000107c61434(uVar15);
        func_0x000107c61434(uVar26);
        puVar19 = (undefined1 *)0x0;
        do {
          *(undefined **)(unaff_x22 + 0x4b8) = puVar16;
          *(long *)(unaff_x22 + 0x4b0) = lVar11;
          *(long *)(unaff_x22 + 0x4a8) = lVar17;
          uVar12 = *(ulong *)(unaff_x22 + 0x488);
          if ((uVar12 & 0xc000000000000001) == 0) {
            if (*(undefined1 **)((uVar12 & 0xffffffffffffff8) + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6af0);
              (*pcVar3)();
            }
            puVar8 = *(undefined1 **)(uVar12 + (long)puVar19 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar8 = puVar19;
            func_0x000101b9be7c();
          }
          *(undefined1 **)(unaff_x22 + 0x4c0) = puVar8;
          *(undefined1 **)(unaff_x22 + 0x4c8) = puVar19 + 1;
          if (SCARRY8((long)puVar19,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6ad4);
            (*pcVar3)();
          }
          if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
            FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x248);
            uVar26 = *(undefined8 *)(unaff_x22 + 0x260);
            lVar11 = *(long *)(unaff_x22 + 0x268);
            uVar15 = uVar26;
            FUN_101bacf60(unaff_x22 + 0x248);
            func_0x000107c4a77c();
            func_0x000107c61180();
            if (puVar8 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6b14);
              (*pcVar3)();
            }
            puVar19 = puVar8;
            func_0x000107c5faec();
            func_0x000107c61170(puVar8);
            *(undefined8 *)(unaff_x22 + 0x4d0) = uVar15;
            piVar14 = *(int **)(lVar11 + 8);
            plVar5 = (long *)(ulong)(uint)piVar14[1];
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar14 + (long)piVar14);
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x4d8) = plVar5;
            pcVar3 = FUN_101ba507c;
LAB_101ba6190:
            *plVar5 = unaff_x22;
            plVar5[1] = (long)pcVar3;
                    /* WARNING: Could not recover jumptable at 0x000101ba61dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)
                      (*(undefined8 *)(unaff_x22 + 0x310),puVar19,uVar15,
                       *(undefined8 *)(unaff_x22 + 0x360),*(undefined8 *)(unaff_x22 + 0x368),
                       *(undefined8 *)(unaff_x22 + 0x370),uVar26,lVar11);
            return;
          }
          lVar11 = *(long *)(unaff_x22 + 0x4b0) + 1;
          if (SCARRY8(*(long *)(unaff_x22 + 0x4b0),1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6ad8);
            (*pcVar3)();
          }
          puVar16 = PTR_PTR_1126bf7f0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar20 = PTR_PTR_1126bf8d0;
          func_0x000107c610f8(PTR_PTR_1126bf8d0);
          func_0x000107c453e4();
          func_0x000107c53574(puVar16);
          func_0x000107c61170(puVar20);
          puVar19 = puVar16;
          func_0x000107c3fd58();
          func_0x000107c61180();
          if (puVar19 != (undefined1 *)0x0) {
            uVar15 = *(undefined8 *)(unaff_x22 + 0x4c0);
            func_0x000107c5b2dc(uVar15);
            func_0x000107c61180();
            func_0x000107c59588(puVar19);
            func_0x000107c61170(uVar15);
            func_0x000107c61170(puVar19);
          }
          puVar19 = puVar16;
          func_0x000107c3fd58();
          func_0x000107c61180();
          if (puVar19 != (undefined1 *)0x0) {
            uVar15 = *(undefined8 *)(unaff_x22 + 0x4c0);
            func_0x000107c3fd54(uVar15);
            func_0x000107c61180();
            func_0x000107c55d70(puVar19);
            func_0x000107c61170(uVar15);
            func_0x000107c61170(puVar19);
          }
          lVar17 = *(long *)(unaff_x22 + 0x4c0);
          func_0x000107c4a77c();
          func_0x000107c61180();
          if (lVar17 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6b04);
            (*pcVar3)();
          }
          lVar21 = lVar17;
          func_0x000107c5faec();
          func_0x000107c61170(lVar17);
          puVar19 = puVar16;
          func_0x000107c3fd58();
          func_0x000107c61180();
          if (puVar19 == (undefined1 *)0x0) {
            func_0x000101b9d5ac();
            puVar20 = &UNK_1106c31f8;
            func_0x000107c613f8(&UNK_1106c31f8,puVar19,0,0);
            *puVar19 = 0x3a;
            func_0x000107c61654();
LAB_101ba67d0:
            func_0x000107c6142c(uVar12);
            bVar1 = *(byte *)(unaff_x22 + 0x542);
            func_0x000107c61170(puVar16);
            if ((bVar1 & 1) == 0) {
              *(long *)(unaff_x22 + 0x520) = lVar11;
              *(undefined **)(unaff_x22 + 0x518) = puVar20;
              lVar11 = *(long *)(unaff_x22 + 0x4c0);
              FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x270);
              uVar26 = *(undefined8 *)(unaff_x22 + 0x288);
              lVar17 = *(long *)(unaff_x22 + 0x290);
              uVar15 = uVar26;
              FUN_101bacf60(unaff_x22 + 0x270);
              func_0x000107c4a77c();
              func_0x000107c61180();
              if (lVar11 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6b18);
                (*pcVar3)();
              }
              lVar21 = lVar11;
              func_0x000107c5faec();
              func_0x000107c61170(lVar11);
              *(undefined8 *)(unaff_x22 + 0x528) = uVar15;
              func_0x000107c614cc(puVar20,unaff_x22 + 0x2e0,unaff_x22 + 0x2b0);
              uVar18 = *(undefined8 *)(unaff_x22 + 0x2b8);
              FUN_101da5a48(uVar18,*(undefined8 *)(unaff_x22 + 0x2c0));
              piVar14 = *(int **)(lVar17 + 0x10);
              plVar5 = (long *)(ulong)(uint)piVar14[1];
              UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar14 + (long)piVar14);
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0x530) = plVar5;
              *plVar5 = unaff_x22;
              plVar5[1] = (long)FUN_101ba8dec;
              uVar10 = *(undefined8 *)(unaff_x22 + 0x370);
              uVar9 = *(undefined8 *)(unaff_x22 + 0x330);
              uVar23 = *(undefined8 *)(unaff_x22 + 0x328);
LAB_101ba62ac:
                    /* WARNING: Could not recover jumptable at 0x000101ba62dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_00)(lVar21,uVar15,uVar23,uVar9,uVar18,uVar10,uVar26,lVar17);
              return;
            }
            func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x4c0));
            func_0x000107c614ac(puVar20);
            puVar16 = *(undefined **)(unaff_x22 + 0x4b8);
            lVar17 = *(long *)(unaff_x22 + 0x4a8);
          }
          else {
            puVar8 = puVar19;
            func_0x000107c5b67c();
            func_0x000107c61180();
            if (puVar8 == (undefined1 *)0x0) {
LAB_101ba6764:
              func_0x000101b9d5ac();
              puVar20 = &UNK_1106c31f8;
              func_0x000107c613f8(&UNK_1106c31f8,puVar8,0,0);
              *puVar8 = 0x3b;
              func_0x000107c61654();
              func_0x000107c61170(puVar19);
              goto LAB_101ba67d0;
            }
            lStack_70 = 0;
            plStack_90 = &lStack_70;
            func_0x000107c5fc50();
            func_0x000107c61170();
            lVar17 = lStack_70;
            if (lStack_70 == 0) goto LAB_101ba6764;
            puVar8 = puVar19;
            func_0x000107c4b1dc();
            func_0x000107c61180();
            if (puVar8 == (undefined1 *)0x0) {
              puStack_80 = (undefined1 *)0x0;
              plStack_90 = (long *)0x0;
            }
            else {
              puStack_80 = puVar8;
              func_0x000107c5faec();
              func_0x000107c61170(puVar8);
            }
            uVar13 = *(ulong *)(unaff_x22 + 0x4b8);
            uVar15 = *(undefined8 *)(unaff_x22 + 0x498);
            uVar26 = *(undefined8 *)(unaff_x22 + 0x490);
            puVar8 = puVar19;
            func_0x000107c3fd50();
            func_0x000107c61180();
            func_0x000107c61170(puVar19);
            *(long *)(unaff_x22 + 0x60) = lVar21;
            *(ulong *)(unaff_x22 + 0x68) = uVar12;
            *(undefined1 *)(unaff_x22 + 0x70) = 0;
            *(undefined8 *)(unaff_x22 + 0x78) = 0;
            *(long *)(unaff_x22 + 0x80) = lVar17;
            *(undefined8 *)(unaff_x22 + 0x88) = uVar26;
            *(undefined8 *)(unaff_x22 + 0x90) = uVar15;
            *(undefined1 **)(unaff_x22 + 0x98) = puStack_80;
            *(long **)(unaff_x22 + 0xa0) = plStack_90;
            *(undefined1 **)(unaff_x22 + 0xa8) = puVar8;
            func_0x000107c61434(uVar15);
            func_0x000107c61170(puVar16);
            FUN_101b9d4cc(unaff_x22 + 0x60,unaff_x22 + 0xb0);
            func_0x000107c61558();
            puVar16 = *(undefined **)(unaff_x22 + 0x4b8);
            puVar20 = puVar16;
            if ((uVar13 & 1) == 0) {
              puVar20 = (undefined *)0x0;
              FUN_101b9bfcc(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
            }
            uVar12 = *(ulong *)(puVar20 + 0x10);
            puVar16 = puVar20;
            if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar12) {
              puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar20 + 0x18));
              FUN_101b9bfcc(puVar16,uVar12 + 1,1,puVar20);
            }
            uVar15 = *(undefined8 *)(unaff_x22 + 0x4c0);
            lVar21 = *(long *)(unaff_x22 + 0x4a8);
            *(ulong *)(puVar16 + 0x10) = uVar12 + 1;
            uVar26 = *(undefined8 *)(unaff_x22 + 0x60);
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x28) = *(undefined8 *)(unaff_x22 + 0x68);
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x20) = uVar26;
            uVar18 = *(undefined8 *)(unaff_x22 + 0x78);
            uVar26 = *(undefined8 *)(unaff_x22 + 0x70);
            uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
            uVar23 = *(undefined8 *)(unaff_x22 + 0x80);
            uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
            uVar28 = *(undefined8 *)(unaff_x22 + 0xa8);
            uVar27 = *(undefined8 *)(unaff_x22 + 0xa0);
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x58) = *(undefined8 *)(unaff_x22 + 0x98);
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x50) = uVar10;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x68) = uVar28;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x60) = uVar27;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x38) = uVar18;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x30) = uVar26;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x48) = uVar9;
            *(undefined8 *)(puVar16 + uVar12 * 0x50 + 0x40) = uVar23;
            func_0x000107c61170(uVar15);
            func_0x000101b9d508(unaff_x22 + 0x60);
            lVar17 = lVar21 + 1;
            if (SCARRY8(lVar21,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6af4);
              (*pcVar3)();
            }
          }
          puVar19 = *(undefined1 **)(unaff_x22 + 0x4c8);
        } while (puVar19 != *(undefined1 **)(unaff_x22 + 0x4a0));
        uVar26 = *(undefined8 *)(unaff_x22 + 0x498);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x480);
        func_0x000107c61430(*(undefined8 *)(unaff_x22 + 0x488),2);
        func_0x000107c6142c(uVar15);
        func_0x000107c6142c(uVar26);
      }
      uVar12 = *(long *)(unaff_x22 + 0x478) + 1;
    } while (uVar12 != *(ulong *)(unaff_x22 + 0x3a8));
    lVar22 = *(long *)(unaff_x22 + 0x470);
    lVar25 = *(long *)(unaff_x22 + 0x468);
    lVar21 = *(long *)(unaff_x22 + 0x460);
    lVar24 = *(long *)(unaff_x22 + 0x458);
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0x3a0);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x330));
  func_0x000107c6142c(uVar15);
  lVar2 = lVar22 - lVar25;
  if (SBORROW8(lVar22,lVar25)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6adc);
    (*pcVar3)();
  }
  lVar22 = lVar21 - lVar24;
  if (SBORROW8(lVar21,lVar24)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6ae0);
    (*pcVar3)();
  }
  lVar21 = lVar11 - lVar17;
  if (SBORROW8(lVar11,lVar17)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6ae4);
    (*pcVar3)();
  }
  if (!SCARRY8(lVar2,lVar22)) {
    if (!SCARRY8(lVar2 + lVar22,lVar21)) {
      if (0 < lVar2 + lVar22 + lVar21) {
        lVar17 = *(long *)(unaff_x22 + 0x308);
        lStack_70 = 0;
        uStack_68 = 0xe000000000000000;
        func_0x000107c602fc(0x5c);
        func_0x000107c5fb78(0xd00000000000002c,0x800000010f001ec0);
        *(long *)(unaff_x22 + 0x2f0) = lVar2;
        puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        puVar20 = PTR___sSiN_11034deb0;
        puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar7);
        func_0x000107c5fb78(0xd000000000000011,0x800000010f001ef0);
        *(long *)(unaff_x22 + 0x2f8) = lVar22;
        puVar7 = puVar6;
        func_0x000107c6057c(puVar20,puVar6);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar7);
        func_0x000107c5fb78(0xd000000000000019,0x800000010f001f10);
        *(long *)(unaff_x22 + 0x300) = lVar21;
        func_0x000107c6057c(puVar20);
        puVar20 = puVar6;
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar6);
        uVar15 = uStack_68;
        lVar11 = lStack_70;
        func_0x000107c5cab0();
        func_0x000107c61180();
        if (lVar17 == 0) {
          lVar21 = 0;
          puVar20 = (undefined *)0x0;
        }
        else {
          lVar21 = lVar17;
          func_0x000107c5faec();
          func_0x000107c61170(lVar17);
        }
        lVar17 = *(long *)(unaff_x22 + 0x318);
        uVar26 = *(undefined8 *)(lVar17 + 0x60);
        uVar18 = *(undefined8 *)(lVar17 + 0x28);
        puVar6 = &UNK_110450670;
        func_0x000107c613fc(&UNK_110450670,0x18,7);
        func_0x000107c61644(puVar6 + 0x10,lVar17);
        puVar7 = &UNK_110450698;
        func_0x000107c613fc(&UNK_110450698,0x50,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(long *)(puVar7 + 0x18) = lVar11;
        *(undefined8 *)(puVar7 + 0x20) = uVar15;
        puVar7[0x28] = 1;
        *(undefined8 *)(puVar7 + 0x30) = 0;
        *(undefined8 *)(puVar7 + 0x38) = 0;
        *(long *)(puVar7 + 0x40) = lVar21;
        *(undefined **)(puVar7 + 0x48) = puVar20;
        *(code **)(unaff_x22 + 0x1c0) = FUN_101baca00;
        *(undefined **)(unaff_x22 + 0x1c8) = puVar7;
        *(undefined **)(unaff_x22 + 0x1a0) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x1a8) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x1b0) = &UNK_100288f10;
        *(undefined **)(unaff_x22 + 0x1b8) = &UNK_1104506b0;
        lVar11 = unaff_x22 + 0x1a0;
        func_0x000107c60bc4(lVar11);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x1c8);
        func_0x000107c61434(puVar20);
        func_0x000107c61434(uVar15);
        func_0x000107c61574(uVar23);
        func_0x000108ec0f10(uVar26,uVar18,lVar11);
        func_0x000107c60bd0(lVar11);
        func_0x000107c6142c(puVar20);
        func_0x000107c6142c(uVar15);
      }
      uVar15 = *(undefined8 *)(unaff_x22 + 0x370);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x368);
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x338));
      func_0x000107c6142c(uVar26);
      func_0x000107c61170(uVar15);
                    /* WARNING: Could not recover jumptable at 0x000101ba64b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(puVar16);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6aec);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba6ae8);
  (*pcVar3)();
}



/* Entry: 101ba6b18; end: 101ba6b7b;  */

void FUN_101ba6b18(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x510) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x508));
  func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x500));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101ba6b7c;
  }
  else {
    pcVar1 = FUN_101ba7cfc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101ba6b7c; end: 101ba7bc7;  */

void FUN_101ba6b7c(void)

{
  byte bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined1 *puVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *UNRECOVERED_JUMPTABLE_00;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar15 = *(undefined8 *)(unaff_x22 + 0x4e8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
  func_0x000107c614ac(uVar15);
  FUN_101bacf10(unaff_x22 + 0x220);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x4f8);
  lVar16 = *(long *)(unaff_x22 + 0x4f0);
  uVar13 = *(ulong *)(unaff_x22 + 0x400);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x3f0);
  lVar26 = *(long *)(unaff_x22 + 0x3e0);
LAB_101ba6bd4:
  do {
    puVar21 = *(undefined1 **)(unaff_x22 + 0x410);
    uVar8 = *(ulong *)(unaff_x22 + 0x3b8);
    if (puVar21 == *(undefined1 **)(unaff_x22 + 0x3d8)) {
      uVar20 = *(undefined8 *)(unaff_x22 + 0x3d0);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x3c0);
      func_0x000107c61430(uVar8,2);
      func_0x000107c6142c(uVar22);
      func_0x000107c6142c(uVar20);
      do {
        while( true ) {
          *(undefined8 *)(unaff_x22 + 0x470) = uVar24;
          *(undefined8 *)(unaff_x22 + 0x468) = uVar15;
          *(long *)(unaff_x22 + 0x460) = lVar16;
          *(long *)(unaff_x22 + 0x458) = lVar26;
          uVar8 = *(long *)(unaff_x22 + 0x3b0) + 1;
          if (uVar8 == *(ulong *)(unaff_x22 + 0x3a8)) {
            lVar26 = 0;
            lVar16 = 0;
            uVar8 = 0;
            goto LAB_101ba7098;
          }
          *(ulong *)(unaff_x22 + 0x3b0) = uVar8;
          if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7a38);
            (*pcVar2)();
          }
          lVar11 = *(long *)(unaff_x22 + 0x3a0) + uVar8 * 0x20;
          uVar8 = *(ulong *)(lVar11 + 0x20);
          *(ulong *)(unaff_x22 + 0x3b8) = uVar8;
          uVar20 = *(undefined8 *)(lVar11 + 0x28);
          *(undefined8 *)(unaff_x22 + 0x3c0) = uVar20;
          *(undefined8 *)(unaff_x22 + 0x3c8) = *(undefined8 *)(lVar11 + 0x30);
          uVar22 = *(undefined8 *)(lVar11 + 0x38);
          *(undefined8 *)(unaff_x22 + 0x3d0) = uVar22;
          if (uVar8 >> 0x3e != 0) break;
          lVar11 = *(long *)((uVar8 & 0xffffffffffffff8) + 0x10);
          *(long *)(unaff_x22 + 0x3d8) = lVar11;
          if (lVar11 != 0) goto LAB_101ba6cac;
        }
        uVar14 = uVar8 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar8) {
          uVar14 = uVar8;
        }
        func_0x000107c60480();
        *(ulong *)(unaff_x22 + 0x3d8) = uVar14;
      } while (uVar14 == 0);
LAB_101ba6cac:
      func_0x000107c61438(uVar8,2);
      func_0x000107c61434(uVar20);
      func_0x000107c61434(uVar22);
      puVar21 = (undefined1 *)0x0;
      uVar8 = *(ulong *)(unaff_x22 + 0x3b8);
    }
    *(ulong *)(unaff_x22 + 0x400) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x3f8) = uVar24;
    *(undefined8 *)(unaff_x22 + 0x3f0) = uVar15;
    *(long *)(unaff_x22 + 1000) = lVar16;
    *(long *)(unaff_x22 + 0x3e0) = lVar26;
    if ((uVar8 & 0xc000000000000001) == 0) {
      if (*(undefined1 **)((uVar8 & 0xffffffffffffff8) + 0x10) <= puVar21) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7b8c);
        (*pcVar2)();
      }
      puVar3 = *(undefined1 **)(uVar8 + (long)puVar21 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      puVar3 = puVar21;
      func_0x000101b9be90();
    }
    *(undefined1 **)(unaff_x22 + 0x408) = puVar3;
    *(undefined1 **)(unaff_x22 + 0x410) = puVar21 + 1;
    if (SCARRY8((long)puVar21,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7b84);
      (*pcVar2)();
    }
    if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
      FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x1f8);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x210);
      lVar16 = *(long *)(unaff_x22 + 0x218);
      uVar15 = uVar24;
      FUN_101bacf60(unaff_x22 + 0x1f8);
      func_0x000107c4a77c();
      func_0x000107c61180();
      if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7bc0);
        (*pcVar2)();
      }
      puVar21 = puVar3;
      func_0x000107c5faec();
      func_0x000107c61170(puVar3);
      *(undefined8 *)(unaff_x22 + 0x418) = uVar15;
      piVar12 = *(int **)(lVar16 + 8);
      plVar7 = (long *)(ulong)(uint)piVar12[1];
      UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar12 + (long)piVar12);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x420) = plVar7;
      pcVar2 = FUN_101ba1ed8;
LAB_101ba7560:
      *plVar7 = unaff_x22;
      plVar7[1] = (long)pcVar2;
                    /* WARNING: Could not recover jumptable at 0x000101ba75ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)
                (*(undefined8 *)(unaff_x22 + 0x310),puVar21,uVar15,
                 *(undefined8 *)(unaff_x22 + 0x360),*(undefined8 *)(unaff_x22 + 0x368),
                 *(undefined8 *)(unaff_x22 + 0x370),uVar24,lVar16);
      return;
    }
    func_0x000107c51f9c();
    func_0x000107c61180();
    *(undefined1 **)(unaff_x22 + 0x430) = puVar3;
    if (puVar3 == (undefined1 *)0x0) {
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
      uVar13 = *(ulong *)(unaff_x22 + 0x400);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x3f8);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x3f0);
      lVar16 = *(long *)(unaff_x22 + 1000);
LAB_101ba6f18:
      lVar26 = *(long *)(unaff_x22 + 0x3e0);
      goto LAB_101ba6bd4;
    }
    puVar21 = puVar3;
    func_0x000107c5b420();
    if ((int)puVar21 != 4) {
      if ((int)puVar21 == 6) {
        *(long *)(unaff_x22 + 0x438) = *(long *)(unaff_x22 + 0x3f8) + 1;
        if (SCARRY8(*(long *)(unaff_x22 + 0x3f8),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7bb0);
          (*pcVar2)();
        }
        lVar16 = *(long *)(unaff_x22 + 0x408);
        func_0x000107c4a77c();
        func_0x000107c61180();
        if (lVar16 != 0) {
          lVar26 = lVar16;
          func_0x000107c5faec();
          func_0x000107c61170(lVar16);
          *(ulong *)(unaff_x22 + 0x440) = uVar8;
          plVar7 = (long *)0x60;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x448) = plVar7;
          *plVar7 = unaff_x22;
          plVar7[1] = (long)FUN_101ba2f64;
          lVar16 = *(long *)(unaff_x22 + 0x3d0);
          plVar7[6] = *(long *)(unaff_x22 + 0x3c8);
          plVar7[7] = lVar16;
          plVar7[4] = lVar26;
          plVar7[5] = uVar8;
          plVar7[2] = unaff_x22 + 0x10;
          plVar7[3] = (long)puVar3;
          lVar16 = 0;
          func_0x000107c5eea4();
          plVar7[8] = lVar16;
          lVar16 = *(long *)(lVar16 + -8);
          plVar7[9] = lVar16;
          uVar13 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar7[10] = uVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(FUN_101bacab8,0,0);
          return;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7bc8);
        (*pcVar2)();
      }
      func_0x000101b9d5ac();
      puVar19 = &UNK_1106c31f8;
      func_0x000107c613f8(&UNK_1106c31f8,puVar21,0,0);
      *puVar21 = 0x37;
      func_0x000107c61654();
      func_0x000107c61170(puVar3);
      lVar16 = *(long *)(unaff_x22 + 1000);
LAB_101ba6eec:
      uVar24 = *(undefined8 *)(unaff_x22 + 0x3f8);
      if (*(char *)(unaff_x22 + 0x542) != '\x01') {
        *(undefined8 *)(unaff_x22 + 0x4f8) = uVar24;
        *(long *)(unaff_x22 + 0x4f0) = lVar16;
        *(undefined **)(unaff_x22 + 0x4e8) = puVar19;
        lVar16 = *(long *)(unaff_x22 + 0x408);
        FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x220);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x238);
        lVar26 = *(long *)(unaff_x22 + 0x240);
        uVar15 = uVar24;
        FUN_101bacf60(unaff_x22 + 0x220);
        func_0x000107c4a77c();
        func_0x000107c61180();
        if (lVar16 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7bc4);
          (*pcVar2)();
        }
        lVar11 = lVar16;
        func_0x000107c5faec();
        func_0x000107c61170(lVar16);
        *(undefined8 *)(unaff_x22 + 0x500) = uVar15;
        func_0x000107c614cc(puVar19,unaff_x22 + 0x2d0,unaff_x22 + 0x298);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x2a0);
        FUN_101da5a48(uVar20,*(undefined8 *)(unaff_x22 + 0x2a8));
        piVar12 = *(int **)(lVar26 + 0x10);
        plVar7 = (long *)(ulong)(uint)piVar12[1];
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar12 + (long)piVar12);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x508) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_101ba6b18;
        uVar10 = *(undefined8 *)(unaff_x22 + 0x370);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x330);
        uVar22 = *(undefined8 *)(unaff_x22 + 0x328);
LAB_101ba767c:
                    /* WARNING: Could not recover jumptable at 0x000101ba76ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(lVar11,uVar15,uVar22,uVar9,uVar20,uVar10,uVar24,lVar26);
        return;
      }
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
      func_0x000107c614ac(puVar19);
      uVar13 = *(ulong *)(unaff_x22 + 0x400);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x3f0);
      goto LAB_101ba6f18;
    }
    lVar16 = *(long *)(unaff_x22 + 1000) + 1;
    if (SCARRY8(*(long *)(unaff_x22 + 1000),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7b90);
      (*pcVar2)();
    }
    lVar26 = *(long *)(unaff_x22 + 0x408);
    func_0x000107c4a77c();
    func_0x000107c61180();
    if (lVar26 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7bb4);
      (*pcVar2)();
    }
    lVar11 = lVar26;
    func_0x000107c5faec();
    func_0x000107c61170(lVar26);
    puVar21 = puVar3;
    func_0x000107c3fd58();
    func_0x000107c61180();
    if (puVar21 == (undefined1 *)0x0) {
      func_0x000101b9d5ac();
      puVar19 = &UNK_1106c31f8;
      func_0x000107c613f8(&UNK_1106c31f8,puVar21,0,0);
      *puVar21 = 0x3a;
      func_0x000107c61654();
LAB_101ba6edc:
      func_0x000107c6142c(uVar8);
      func_0x000107c61170(puVar3);
      goto LAB_101ba6eec;
    }
    puVar4 = puVar21;
    func_0x000107c5b67c();
    func_0x000107c61180();
    if (puVar4 == (undefined1 *)0x0) {
LAB_101ba6e70:
      func_0x000101b9d5ac();
      puVar19 = &UNK_1106c31f8;
      func_0x000107c613f8(&UNK_1106c31f8,puVar4,0,0);
      *puVar4 = 0x3b;
      func_0x000107c61654();
      func_0x000107c61170(puVar21);
      goto LAB_101ba6edc;
    }
    lStack_70 = 0;
    plVar7 = &lStack_70;
    func_0x000107c5fc50();
    func_0x000107c61170();
    lVar18 = lStack_70;
    if (lStack_70 == 0) goto LAB_101ba6e70;
    puVar3 = puVar21;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (puVar3 == (undefined1 *)0x0) {
      puStack_88 = (undefined1 *)0x0;
      plVar7 = (long *)0x0;
    }
    else {
      puStack_88 = puVar3;
      func_0x000107c5faec();
      func_0x000107c61170(puVar3);
    }
    lVar17 = *(long *)(unaff_x22 + 0x3e0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x3d0);
    puVar3 = puVar21;
    func_0x000107c3fd50();
    func_0x000107c61180();
    func_0x000107c61170(puVar21);
    lVar26 = lVar17 + 1;
    func_0x000107c61434(uVar15);
    if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7b94);
      (*pcVar2)();
    }
    uVar24 = *(undefined8 *)(unaff_x22 + 0x3f8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x3f0);
    uVar13 = *(ulong *)(unaff_x22 + 0x400);
    *(long *)(unaff_x22 + 0x100) = lVar11;
    *(ulong *)(unaff_x22 + 0x108) = uVar8;
    *(undefined1 *)(unaff_x22 + 0x110) = 0;
    *(undefined8 *)(unaff_x22 + 0x118) = 0;
    *(long *)(unaff_x22 + 0x120) = lVar18;
    *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x3d0);
    *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x3c8);
    *(undefined1 **)(unaff_x22 + 0x138) = puStack_88;
    *(long **)(unaff_x22 + 0x140) = plVar7;
    *(undefined1 **)(unaff_x22 + 0x148) = puVar3;
    FUN_101b9d4cc(unaff_x22 + 0x100,unaff_x22 + 0x150);
    func_0x000107c61558();
    uVar14 = *(ulong *)(unaff_x22 + 0x400);
    uVar8 = uVar14;
    if ((uVar13 & 1) == 0) {
      uVar8 = 0;
      FUN_101b9bfcc(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
    }
    uVar14 = *(ulong *)(uVar8 + 0x10);
    uVar13 = uVar8;
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar14) {
      uVar13 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      FUN_101b9bfcc(uVar13,uVar14 + 1,1,uVar8);
    }
    uVar20 = *(undefined8 *)(unaff_x22 + 0x430);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x408);
    *(ulong *)(uVar13 + 0x10) = uVar14 + 1;
    lVar11 = uVar13 + uVar14 * 0x50;
    uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
    *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(unaff_x22 + 0x108);
    *(undefined8 *)(lVar11 + 0x20) = uVar9;
    uVar10 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x140);
    *(undefined8 *)(lVar11 + 0x58) = *(undefined8 *)(unaff_x22 + 0x138);
    *(undefined8 *)(lVar11 + 0x50) = uVar29;
    *(undefined8 *)(lVar11 + 0x68) = uVar31;
    *(undefined8 *)(lVar11 + 0x60) = uVar30;
    *(undefined8 *)(lVar11 + 0x38) = uVar10;
    *(undefined8 *)(lVar11 + 0x30) = uVar9;
    *(undefined8 *)(lVar11 + 0x48) = uVar28;
    *(undefined8 *)(lVar11 + 0x40) = uVar27;
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar22);
    func_0x000101b9d508(unaff_x22 + 0x100);
  } while( true );
LAB_101ba7098:
  *(ulong *)(unaff_x22 + 0x478) = uVar8;
  if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7b88);
    (*pcVar2)();
  }
  lVar11 = *(long *)(unaff_x22 + 0x3a0) + uVar8 * 0x20;
  uVar15 = *(undefined8 *)(lVar11 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x480) = uVar15;
  uVar8 = *(ulong *)(lVar11 + 0x28);
  *(ulong *)(unaff_x22 + 0x488) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x490) = *(undefined8 *)(lVar11 + 0x30);
  uVar24 = *(undefined8 *)(lVar11 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x498) = uVar24;
  if (uVar8 >> 0x3e == 0) {
    uVar14 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    *(ulong *)(unaff_x22 + 0x4a0) = uVar14;
  }
  else {
    uVar14 = uVar8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar8) {
      uVar14 = uVar8;
    }
    func_0x000107c60480(uVar14);
    func_0x000107c60480();
    *(ulong *)(unaff_x22 + 0x4a0) = uVar14;
  }
  if (uVar14 != 0) {
    func_0x000107c61438(uVar8,2);
    func_0x000107c61434(uVar15);
    func_0x000107c61434(uVar24);
    puVar21 = (undefined1 *)0x0;
    do {
      puVar19 = &UNK_1106c31f8;
      *(ulong *)(unaff_x22 + 0x4b8) = uVar13;
      *(long *)(unaff_x22 + 0x4b0) = lVar16;
      *(long *)(unaff_x22 + 0x4a8) = lVar26;
      uVar13 = *(ulong *)(unaff_x22 + 0x488);
      if ((uVar13 & 0xc000000000000001) == 0) {
        if (*(undefined1 **)((uVar13 & 0xffffffffffffff8) + 0x10) <= puVar21) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7b7c);
          (*pcVar2)();
        }
        puVar3 = *(undefined1 **)(uVar13 + (long)puVar21 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar3 = puVar21;
        func_0x000101b9be7c();
      }
      *(undefined1 **)(unaff_x22 + 0x4c0) = puVar3;
      *(undefined1 **)(unaff_x22 + 0x4c8) = puVar21 + 1;
      if (SCARRY8((long)puVar21,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7b74);
        (*pcVar2)();
      }
      if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
        FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x248);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x260);
        lVar16 = *(long *)(unaff_x22 + 0x268);
        uVar15 = uVar24;
        FUN_101bacf60(unaff_x22 + 0x248);
        func_0x000107c4a77c();
        func_0x000107c61180();
        if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7bb8);
          (*pcVar2)();
        }
        puVar21 = puVar3;
        func_0x000107c5faec();
        func_0x000107c61170(puVar3);
        *(undefined8 *)(unaff_x22 + 0x4d0) = uVar15;
        piVar12 = *(int **)(lVar16 + 8);
        plVar7 = (long *)(ulong)(uint)piVar12[1];
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar12 + (long)piVar12);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x4d8) = plVar7;
        pcVar2 = FUN_101ba507c;
        goto LAB_101ba7560;
      }
      lVar16 = *(long *)(unaff_x22 + 0x4b0) + 1;
      if (SCARRY8(*(long *)(unaff_x22 + 0x4b0),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7b78);
        (*pcVar2)();
      }
      puVar5 = PTR_PTR_1126bf7f0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar6 = PTR_PTR_1126bf8d0;
      func_0x000107c610f8(PTR_PTR_1126bf8d0);
      func_0x000107c453e4();
      func_0x000107c53574(puVar5);
      func_0x000107c61170(puVar6);
      puVar21 = puVar5;
      func_0x000107c3fd58();
      func_0x000107c61180();
      if (puVar21 != (undefined1 *)0x0) {
        uVar15 = *(undefined8 *)(unaff_x22 + 0x4c0);
        func_0x000107c5b2dc(uVar15);
        func_0x000107c61180();
        func_0x000107c59588(puVar21);
        func_0x000107c61170(uVar15);
        func_0x000107c61170(puVar21);
      }
      puVar21 = puVar5;
      func_0x000107c3fd58();
      func_0x000107c61180();
      if (puVar21 != (undefined1 *)0x0) {
        uVar15 = *(undefined8 *)(unaff_x22 + 0x4c0);
        func_0x000107c3fd54(uVar15);
        func_0x000107c61180();
        func_0x000107c55d70(puVar21);
        func_0x000107c61170(uVar15);
        func_0x000107c61170(puVar21);
      }
      lVar26 = *(long *)(unaff_x22 + 0x4c0);
      func_0x000107c4a77c();
      func_0x000107c61180();
      if (lVar26 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7bac);
        (*pcVar2)();
      }
      lVar11 = lVar26;
      func_0x000107c5faec();
      func_0x000107c61170(lVar26);
      puVar21 = puVar5;
      func_0x000107c3fd58();
      func_0x000107c61180();
      if (puVar21 == (undefined1 *)0x0) {
        func_0x000101b9d5ac();
        func_0x000107c613f8(&UNK_1106c31f8,puVar21,0,0);
        *puVar21 = 0x3a;
        func_0x000107c61654();
LAB_101ba713c:
        func_0x000107c6142c(uVar13);
        bVar1 = *(byte *)(unaff_x22 + 0x542);
        func_0x000107c61170(puVar5);
        if ((bVar1 & 1) == 0) {
          *(long *)(unaff_x22 + 0x520) = lVar16;
          *(undefined **)(unaff_x22 + 0x518) = puVar19;
          lVar16 = *(long *)(unaff_x22 + 0x4c0);
          FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x270);
          uVar24 = *(undefined8 *)(unaff_x22 + 0x288);
          lVar26 = *(long *)(unaff_x22 + 0x290);
          uVar15 = uVar24;
          FUN_101bacf60(unaff_x22 + 0x270);
          func_0x000107c4a77c();
          func_0x000107c61180();
          if (lVar16 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7bbc);
            (*pcVar2)();
          }
          lVar11 = lVar16;
          func_0x000107c5faec();
          func_0x000107c61170(lVar16);
          *(undefined8 *)(unaff_x22 + 0x528) = uVar15;
          func_0x000107c614cc(puVar19,unaff_x22 + 0x2e0,unaff_x22 + 0x2b0);
          uVar20 = *(undefined8 *)(unaff_x22 + 0x2b8);
          FUN_101da5a48(uVar20,*(undefined8 *)(unaff_x22 + 0x2c0));
          piVar12 = *(int **)(lVar26 + 0x10);
          plVar7 = (long *)(ulong)(uint)piVar12[1];
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar12 + (long)piVar12);
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x530) = plVar7;
          *plVar7 = unaff_x22;
          plVar7[1] = (long)FUN_101ba8dec;
          uVar10 = *(undefined8 *)(unaff_x22 + 0x370);
          uVar9 = *(undefined8 *)(unaff_x22 + 0x330);
          uVar22 = *(undefined8 *)(unaff_x22 + 0x328);
          goto LAB_101ba767c;
        }
        func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x4c0));
        func_0x000107c614ac(puVar19);
        uVar13 = *(ulong *)(unaff_x22 + 0x4b8);
        lVar26 = *(long *)(unaff_x22 + 0x4a8);
      }
      else {
        puVar3 = puVar21;
        func_0x000107c5b67c();
        func_0x000107c61180();
        if (puVar3 == (undefined1 *)0x0) {
LAB_101ba7108:
          func_0x000101b9d5ac();
          func_0x000107c613f8(&UNK_1106c31f8,puVar3,0,0);
          *puVar3 = 0x3b;
          func_0x000107c61654();
          func_0x000107c61170(puVar21);
          goto LAB_101ba713c;
        }
        lStack_70 = 0;
        plVar7 = &lStack_70;
        func_0x000107c5fc50();
        func_0x000107c61170();
        lVar26 = lStack_70;
        if (lStack_70 == 0) goto LAB_101ba7108;
        puVar3 = puVar21;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        if (puVar3 == (undefined1 *)0x0) {
          puStack_80 = (undefined1 *)0x0;
          plVar7 = (long *)0x0;
        }
        else {
          puStack_80 = puVar3;
          func_0x000107c5faec();
          func_0x000107c61170(puVar3);
        }
        uVar14 = *(ulong *)(unaff_x22 + 0x4b8);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x498);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x490);
        puVar3 = puVar21;
        func_0x000107c3fd50();
        func_0x000107c61180();
        func_0x000107c61170(puVar21);
        *(long *)(unaff_x22 + 0x60) = lVar11;
        *(ulong *)(unaff_x22 + 0x68) = uVar13;
        *(undefined1 *)(unaff_x22 + 0x70) = 0;
        *(undefined8 *)(unaff_x22 + 0x78) = 0;
        *(long *)(unaff_x22 + 0x80) = lVar26;
        *(undefined8 *)(unaff_x22 + 0x88) = uVar24;
        *(undefined8 *)(unaff_x22 + 0x90) = uVar15;
        *(undefined1 **)(unaff_x22 + 0x98) = puStack_80;
        *(long **)(unaff_x22 + 0xa0) = plVar7;
        *(undefined1 **)(unaff_x22 + 0xa8) = puVar3;
        func_0x000107c61434(uVar15);
        func_0x000107c61170(puVar5);
        FUN_101b9d4cc(unaff_x22 + 0x60,unaff_x22 + 0xb0);
        func_0x000107c61558();
        uVar13 = *(ulong *)(unaff_x22 + 0x4b8);
        uVar8 = uVar13;
        if ((uVar14 & 1) == 0) {
          uVar8 = 0;
          FUN_101b9bfcc(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
        }
        uVar14 = *(ulong *)(uVar8 + 0x10);
        uVar13 = uVar8;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar14) {
          uVar13 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
          FUN_101b9bfcc(uVar13,uVar14 + 1,1,uVar8);
        }
        uVar15 = *(undefined8 *)(unaff_x22 + 0x4c0);
        lVar11 = *(long *)(unaff_x22 + 0x4a8);
        *(ulong *)(uVar13 + 0x10) = uVar14 + 1;
        lVar26 = uVar13 + uVar14 * 0x50;
        uVar24 = *(undefined8 *)(unaff_x22 + 0x60);
        *(undefined8 *)(lVar26 + 0x28) = *(undefined8 *)(unaff_x22 + 0x68);
        *(undefined8 *)(lVar26 + 0x20) = uVar24;
        uVar20 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x70);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar22 = *(undefined8 *)(unaff_x22 + 0x80);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar28 = *(undefined8 *)(unaff_x22 + 0xa8);
        uVar27 = *(undefined8 *)(unaff_x22 + 0xa0);
        *(undefined8 *)(lVar26 + 0x58) = *(undefined8 *)(unaff_x22 + 0x98);
        *(undefined8 *)(lVar26 + 0x50) = uVar10;
        *(undefined8 *)(lVar26 + 0x68) = uVar28;
        *(undefined8 *)(lVar26 + 0x60) = uVar27;
        *(undefined8 *)(lVar26 + 0x38) = uVar20;
        *(undefined8 *)(lVar26 + 0x30) = uVar24;
        *(undefined8 *)(lVar26 + 0x48) = uVar9;
        *(undefined8 *)(lVar26 + 0x40) = uVar22;
        func_0x000107c61170(uVar15);
        func_0x000101b9d508(unaff_x22 + 0x60);
        lVar26 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7b80);
          (*pcVar2)();
        }
      }
      puVar21 = *(undefined1 **)(unaff_x22 + 0x4c8);
    } while (puVar21 != *(undefined1 **)(unaff_x22 + 0x4a0));
    uVar15 = *(undefined8 *)(unaff_x22 + 0x498);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x480);
    func_0x000107c61430(*(undefined8 *)(unaff_x22 + 0x488),2);
    func_0x000107c6142c(uVar24);
    func_0x000107c6142c(uVar15);
  }
  uVar8 = *(long *)(unaff_x22 + 0x478) + 1;
  if (uVar8 == *(ulong *)(unaff_x22 + 0x3a8)) {
    lVar17 = *(long *)(unaff_x22 + 0x470);
    lVar25 = *(long *)(unaff_x22 + 0x468);
    lVar18 = *(long *)(unaff_x22 + 0x460);
    lVar23 = *(long *)(unaff_x22 + 0x458);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x3a0);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x330));
    func_0x000107c6142c(uVar15);
    lVar11 = lVar17 - lVar25;
    if (SBORROW8(lVar17,lVar25)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7b98);
      (*pcVar2)();
    }
    lVar17 = lVar18 - lVar23;
    if (SBORROW8(lVar18,lVar23)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7b9c);
      (*pcVar2)();
    }
    lVar18 = lVar16 - lVar26;
    if (SBORROW8(lVar16,lVar26)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7ba0);
      (*pcVar2)();
    }
    if (!SCARRY8(lVar11,lVar17)) {
      if (!SCARRY8(lVar11 + lVar17,lVar18)) {
        if (0 < lVar11 + lVar17 + lVar18) {
          lVar26 = *(long *)(unaff_x22 + 0x308);
          lStack_70 = 0;
          uStack_68 = 0xe000000000000000;
          func_0x000107c602fc(0x5c);
          func_0x000107c5fb78(0xd00000000000002c,0x800000010f001ec0);
          *(long *)(unaff_x22 + 0x2f0) = lVar11;
          puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          puVar19 = PTR___sSiN_11034deb0;
          puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00)
          ;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar6);
          func_0x000107c5fb78(0xd000000000000011,0x800000010f001ef0);
          *(long *)(unaff_x22 + 0x2f8) = lVar17;
          puVar6 = puVar5;
          func_0x000107c6057c(puVar19,puVar5);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar6);
          func_0x000107c5fb78(0xd000000000000019,0x800000010f001f10);
          *(long *)(unaff_x22 + 0x300) = lVar18;
          func_0x000107c6057c(puVar19);
          puVar19 = puVar5;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar5);
          uVar15 = uStack_68;
          lVar16 = lStack_70;
          func_0x000107c5cab0();
          func_0x000107c61180();
          if (lVar26 == 0) {
            lVar11 = 0;
            puVar19 = (undefined *)0x0;
          }
          else {
            lVar11 = lVar26;
            func_0x000107c5faec();
            func_0x000107c61170(lVar26);
          }
          lVar26 = *(long *)(unaff_x22 + 0x318);
          uVar24 = *(undefined8 *)(lVar26 + 0x60);
          uVar20 = *(undefined8 *)(lVar26 + 0x28);
          puVar5 = &UNK_110450670;
          func_0x000107c613fc(&UNK_110450670,0x18,7);
          func_0x000107c61644(puVar5 + 0x10,lVar26);
          puVar6 = &UNK_110450698;
          func_0x000107c613fc(&UNK_110450698,0x50,7);
          *(undefined **)(puVar6 + 0x10) = puVar5;
          *(long *)(puVar6 + 0x18) = lVar16;
          *(undefined8 *)(puVar6 + 0x20) = uVar15;
          puVar6[0x28] = 1;
          *(undefined8 *)(puVar6 + 0x30) = 0;
          *(undefined8 *)(puVar6 + 0x38) = 0;
          *(long *)(puVar6 + 0x40) = lVar11;
          *(undefined **)(puVar6 + 0x48) = puVar19;
          *(code **)(unaff_x22 + 0x1c0) = FUN_101baca00;
          *(undefined **)(unaff_x22 + 0x1c8) = puVar6;
          *(undefined **)(unaff_x22 + 0x1a0) = PTR___NSConcreteStackBlock_11034bd00;
          *(undefined8 *)(unaff_x22 + 0x1a8) = 0x42000000;
          *(undefined **)(unaff_x22 + 0x1b0) = &UNK_100288f10;
          *(undefined **)(unaff_x22 + 0x1b8) = &UNK_1104506b0;
          lVar16 = unaff_x22 + 0x1a0;
          func_0x000107c60bc4(lVar16);
          uVar22 = *(undefined8 *)(unaff_x22 + 0x1c8);
          func_0x000107c61434(puVar19);
          func_0x000107c61434(uVar15);
          func_0x000107c61574(uVar22);
          func_0x000108ec0f10(uVar24,uVar20,lVar16);
          func_0x000107c60bd0(lVar16);
          func_0x000107c6142c(puVar19);
          func_0x000107c6142c(uVar15);
        }
        uVar15 = *(undefined8 *)(unaff_x22 + 0x370);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x368);
        func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x338));
        func_0x000107c6142c(uVar24);
        func_0x000107c61170(uVar15);
                    /* WARNING: Could not recover jumptable at 0x000101ba7b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))(uVar13);
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7ba8);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7ba4);
    (*pcVar2)();
  }
  goto LAB_101ba7098;
}



/* Entry: 101ba7bc8; end: 101ba7cfb;  */

void FUN_101ba7bc8(void)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  long lVar10;
  
  FUN_101bacf10(unaff_x22 + 0x1f8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x428);
  *(undefined8 *)(unaff_x22 + 0x4f8) = *(undefined8 *)(unaff_x22 + 0x3f8);
  *(undefined8 *)(unaff_x22 + 0x4f0) = *(undefined8 *)(unaff_x22 + 1000);
  *(undefined8 *)(unaff_x22 + 0x4e8) = uVar8;
  lVar10 = *(long *)(unaff_x22 + 0x408);
  FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x220);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x238);
  lVar9 = *(long *)(unaff_x22 + 0x240);
  uVar5 = uVar7;
  FUN_101bacf60(unaff_x22 + 0x220);
  func_0x000107c4a77c();
  func_0x000107c61180();
  if (lVar10 != 0) {
    lVar3 = lVar10;
    func_0x000107c5faec();
    func_0x000107c61170(lVar10);
    *(undefined8 *)(unaff_x22 + 0x500) = uVar5;
    func_0x000107c614cc(uVar8,unaff_x22 + 0x2d0,unaff_x22 + 0x298);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2a0);
    FUN_101da5a48(uVar8,*(undefined8 *)(unaff_x22 + 0x2a8));
    piVar6 = *(int **)(lVar9 + 0x10);
    iVar1 = *piVar6;
    plVar4 = (long *)(ulong)(uint)piVar6[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x508) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101ba6b18;
                    /* WARNING: Could not recover jumptable at 0x000101ba7cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar6))
              (lVar3,uVar5,*(undefined8 *)(unaff_x22 + 0x328),*(undefined8 *)(unaff_x22 + 0x330),
               uVar8,*(undefined8 *)(unaff_x22 + 0x370),uVar7,lVar9);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba7cfc);
  (*pcVar2)();
}



/* Entry: 101ba7cfc; end: 101ba8deb;  */

void FUN_101ba7cfc(void)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined *puVar20;
  long *plVar21;
  long lVar22;
  long unaff_x22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long *plStack_90;
  undefined1 *puStack_80;
  code *UNRECOVERED_JUMPTABLE_00;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 0x510);
  FUN_101bacf10(unaff_x22 + 0x220);
  *(undefined8 *)(unaff_x22 + 0x2d8) = uVar14;
  func_0x000107c614b0(uVar14);
  uVar14 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar13 = unaff_x22 + 0x540;
  func_0x000107c6147c(uVar13,unaff_x22 + 0x2d8,uVar14,&UNK_1106c31f8,6);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x510);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x4e8);
  if ((uVar13 & 1) == 0) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
    func_0x000107c614ac(uVar14);
    func_0x000107c614ac(uVar15);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x4f8);
    lVar28 = *(long *)(unaff_x22 + 0x4f0);
    uVar13 = *(ulong *)(unaff_x22 + 0x400);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x3f0);
    goto LAB_101ba8b54;
  }
  cVar1 = *(char *)(unaff_x22 + 0x540);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
  func_0x000107c614ac(uVar14);
  func_0x000107c614ac(uVar15);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x4f8);
  lVar28 = *(long *)(unaff_x22 + 0x4f0);
  uVar13 = *(ulong *)(unaff_x22 + 0x400);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x3f0);
  lVar26 = *(long *)(unaff_x22 + 0x3e0);
  if (cVar1 != '\'') goto LAB_101ba8b58;
  do {
    uVar18 = *(undefined8 *)(unaff_x22 + 0x3d0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x3c0);
    func_0x000107c61430(*(undefined8 *)(unaff_x22 + 0x3b8),2);
    func_0x000107c6142c(uVar23);
    func_0x000107c6142c(uVar18);
    do {
      while( true ) {
        *(undefined8 *)(unaff_x22 + 0x470) = uVar15;
        *(undefined8 *)(unaff_x22 + 0x468) = uVar14;
        *(long *)(unaff_x22 + 0x460) = lVar28;
        *(long *)(unaff_x22 + 0x458) = lVar26;
        uVar4 = *(long *)(unaff_x22 + 0x3b0) + 1;
        if (uVar4 == *(ulong *)(unaff_x22 + 0x3a8)) {
          lVar26 = 0;
          lVar28 = 0;
          uVar4 = 0;
          goto LAB_101ba7ef4;
        }
        *(ulong *)(unaff_x22 + 0x3b0) = uVar4;
        if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba86ac);
          (*pcVar3)();
        }
        lVar11 = *(long *)(unaff_x22 + 0x3a0) + uVar4 * 0x20;
        uVar4 = *(ulong *)(lVar11 + 0x20);
        *(ulong *)(unaff_x22 + 0x3b8) = uVar4;
        uVar18 = *(undefined8 *)(lVar11 + 0x28);
        *(undefined8 *)(unaff_x22 + 0x3c0) = uVar18;
        *(undefined8 *)(unaff_x22 + 0x3c8) = *(undefined8 *)(lVar11 + 0x30);
        uVar23 = *(undefined8 *)(lVar11 + 0x38);
        *(undefined8 *)(unaff_x22 + 0x3d0) = uVar23;
        if (uVar4 >> 0x3e != 0) break;
        lVar11 = *(long *)((uVar4 & 0xffffffffffffff8) + 0x10);
        *(long *)(unaff_x22 + 0x3d8) = lVar11;
        if (lVar11 != 0) goto LAB_101ba7e84;
      }
      uVar24 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar24 = uVar4;
      }
      func_0x000107c60480();
      *(ulong *)(unaff_x22 + 0x3d8) = uVar24;
    } while (uVar24 == 0);
LAB_101ba7e84:
    func_0x000107c61438(uVar4,2);
    func_0x000107c61434(uVar18);
    func_0x000107c61434(uVar23);
    puVar16 = (undefined1 *)0x0;
    do {
      *(ulong *)(unaff_x22 + 0x400) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x3f8) = uVar15;
      *(undefined8 *)(unaff_x22 + 0x3f0) = uVar14;
      *(long *)(unaff_x22 + 1000) = lVar28;
      *(long *)(unaff_x22 + 0x3e0) = lVar26;
      uVar13 = *(ulong *)(unaff_x22 + 0x3b8);
      if ((uVar13 & 0xc000000000000001) == 0) {
        if (*(undefined1 **)((uVar13 & 0xffffffffffffff8) + 0x10) <= puVar16) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba8d90);
          (*pcVar3)();
        }
        puVar7 = *(undefined1 **)(uVar13 + (long)puVar16 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar7 = puVar16;
        func_0x000101b9be90();
      }
      *(undefined1 **)(unaff_x22 + 0x408) = puVar7;
      *(undefined1 **)(unaff_x22 + 0x410) = puVar16 + 1;
      if (SCARRY8((long)puVar16,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba8d8c);
        (*pcVar3)();
      }
      if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
        FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x1f8);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x210);
        lVar28 = *(long *)(unaff_x22 + 0x218);
        uVar14 = uVar15;
        FUN_101bacf60(unaff_x22 + 0x1f8);
        func_0x000107c4a77c();
        func_0x000107c61180();
        if (puVar7 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba8de4);
          (*pcVar3)();
        }
        puVar16 = puVar7;
        func_0x000107c5faec();
        func_0x000107c61170(puVar7);
        *(undefined8 *)(unaff_x22 + 0x418) = uVar14;
        piVar12 = *(int **)(lVar28 + 8);
        plVar8 = (long *)(ulong)(uint)piVar12[1];
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar12 + (long)piVar12);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x420) = plVar8;
        pcVar3 = FUN_101ba1ed8;
LAB_101ba83c8:
        *plVar8 = unaff_x22;
        plVar8[1] = (long)pcVar3;
                    /* WARNING: Could not recover jumptable at 0x000101ba8414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)
                  (*(undefined8 *)(unaff_x22 + 0x310),puVar16,uVar14,
                   *(undefined8 *)(unaff_x22 + 0x360),*(undefined8 *)(unaff_x22 + 0x368),
                   *(undefined8 *)(unaff_x22 + 0x370),uVar15,lVar28);
        return;
      }
      func_0x000107c51f9c();
      func_0x000107c61180();
      *(undefined1 **)(unaff_x22 + 0x430) = puVar7;
      if (puVar7 == (undefined1 *)0x0) {
        func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
        uVar13 = *(ulong *)(unaff_x22 + 0x400);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x3f8);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x3f0);
        lVar28 = *(long *)(unaff_x22 + 1000);
LAB_101ba8b54:
        lVar26 = *(long *)(unaff_x22 + 0x3e0);
      }
      else {
        puVar16 = puVar7;
        func_0x000107c5b420();
        if ((int)puVar16 != 4) {
          if ((int)puVar16 == 6) {
            *(long *)(unaff_x22 + 0x438) = *(long *)(unaff_x22 + 0x3f8) + 1;
            if (SCARRY8(*(long *)(unaff_x22 + 0x3f8),1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba8ddc);
              (*pcVar3)();
            }
            lVar28 = *(long *)(unaff_x22 + 0x408);
            func_0x000107c4a77c();
            func_0x000107c61180();
            if (lVar28 != 0) {
              lVar26 = lVar28;
              func_0x000107c5faec();
              func_0x000107c61170(lVar28);
              *(ulong *)(unaff_x22 + 0x440) = uVar13;
              plVar8 = (long *)0x60;
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0x448) = plVar8;
              *plVar8 = unaff_x22;
              plVar8[1] = (long)FUN_101ba2f64;
              lVar28 = *(long *)(unaff_x22 + 0x3d0);
              plVar8[6] = *(long *)(unaff_x22 + 0x3c8);
              plVar8[7] = lVar28;
              plVar8[4] = lVar26;
              plVar8[5] = uVar13;
              plVar8[2] = unaff_x22 + 0x10;
              plVar8[3] = (long)puVar7;
              lVar28 = 0;
              func_0x000107c5eea4();
              plVar8[8] = lVar28;
              lVar28 = *(long *)(lVar28 + -8);
              plVar8[9] = lVar28;
              uVar13 = *(long *)(lVar28 + 0x40) + 0xfU & 0xfffffffffffffff0;
              func_0x000107c615b8();
              plVar8[10] = uVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__swift_task_switch_110350130)(FUN_101bacab8,0,0);
              return;
            }
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba8dec);
            (*pcVar3)();
          }
          func_0x000101b9d5ac();
          puVar20 = &UNK_1106c31f8;
          func_0x000107c613f8(&UNK_1106c31f8,puVar16,0,0);
          *puVar16 = 0x37;
          func_0x000107c61654();
          func_0x000107c61170(puVar7);
          lVar28 = *(long *)(unaff_x22 + 1000);
LAB_101ba8b28:
          uVar15 = *(undefined8 *)(unaff_x22 + 0x3f8);
          if (*(char *)(unaff_x22 + 0x542) != '\x01') {
            *(undefined8 *)(unaff_x22 + 0x4f8) = uVar15;
            *(long *)(unaff_x22 + 0x4f0) = lVar28;
            *(undefined **)(unaff_x22 + 0x4e8) = puVar20;
            lVar28 = *(long *)(unaff_x22 + 0x408);
            FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x220);
            uVar15 = *(undefined8 *)(unaff_x22 + 0x238);
            lVar26 = *(long *)(unaff_x22 + 0x240);
            uVar14 = uVar15;
            FUN_101bacf60(unaff_x22 + 0x220);
            func_0x000107c4a77c();
            func_0x000107c61180();
            if (lVar28 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba8de8);
              (*pcVar3)();
            }
            lVar11 = lVar28;
            func_0x000107c5faec();
            func_0x000107c61170(lVar28);
            *(undefined8 *)(unaff_x22 + 0x500) = uVar14;
            func_0x000107c614cc(puVar20,unaff_x22 + 0x2d0,unaff_x22 + 0x298);
            uVar18 = *(undefined8 *)(unaff_x22 + 0x2a0);
            FUN_101da5a48(uVar18,*(undefined8 *)(unaff_x22 + 0x2a8));
            piVar12 = *(int **)(lVar26 + 0x10);
            plVar8 = (long *)(ulong)(uint)piVar12[1];
            UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar12 + (long)piVar12);
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x508) = plVar8;
            *plVar8 = unaff_x22;
            plVar8[1] = (long)FUN_101ba6b18;
            uVar10 = *(undefined8 *)(unaff_x22 + 0x370);
            uVar9 = *(undefined8 *)(unaff_x22 + 0x330);
            uVar23 = *(undefined8 *)(unaff_x22 + 0x328);
LAB_101ba84e8:
                    /* WARNING: Could not recover jumptable at 0x000101ba8510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)(lVar11,uVar14,uVar23,uVar9,uVar18,uVar10,uVar15,lVar26);
            return;
          }
          func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x408));
          func_0x000107c614ac(puVar20);
          uVar13 = *(ulong *)(unaff_x22 + 0x400);
          uVar14 = *(undefined8 *)(unaff_x22 + 0x3f0);
          goto LAB_101ba8b54;
        }
        lVar28 = *(long *)(unaff_x22 + 1000) + 1;
        if (SCARRY8(*(long *)(unaff_x22 + 1000),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba8d94);
          (*pcVar3)();
        }
        lVar26 = *(long *)(unaff_x22 + 0x408);
        func_0x000107c4a77c();
        func_0x000107c61180();
        if (lVar26 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba8de0);
          (*pcVar3)();
        }
        lVar11 = lVar26;
        func_0x000107c5faec();
        func_0x000107c61170(lVar26);
        puVar16 = puVar7;
        func_0x000107c3fd58();
        func_0x000107c61180();
        if (puVar16 == (undefined1 *)0x0) {
          func_0x000101b9d5ac();
          puVar20 = &UNK_1106c31f8;
          func_0x000107c613f8(&UNK_1106c31f8,puVar16,0,0);
          *puVar16 = 0x3a;
          func_0x000107c61654();
LAB_101ba8b18:
          func_0x000107c6142c(uVar13);
          func_0x000107c61170(puVar7);
          goto LAB_101ba8b28;
        }
        puVar17 = puVar16;
        func_0x000107c5b67c();
        func_0x000107c61180();
        if (puVar17 == (undefined1 *)0x0) {
LAB_101ba8aac:
          func_0x000101b9d5ac();
          puVar20 = &UNK_1106c31f8;
          func_0x000107c613f8(&UNK_1106c31f8,puVar17,0,0);
          *puVar17 = 0x3b;
          func_0x000107c61654();
          func_0x000107c61170(puVar16);
          goto LAB_101ba8b18;
        }
        lStack_70 = 0;
        plVar8 = &lStack_70;
        func_0x000107c5fc50();
        func_0x000107c61170();
        lVar19 = lStack_70;
        if (lStack_70 == 0) goto LAB_101ba8aac;
        puVar7 = puVar16;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        puVar17 = (undefined1 *)0x0;
        plVar21 = (long *)0x0;
        if (puVar7 != (undefined1 *)0x0) {
          puVar17 = puVar7;
          func_0x000107c5faec();
          func_0x000107c61170(puVar7);
          plVar21 = plVar8;
        }
        lVar22 = *(long *)(unaff_x22 + 0x3e0);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x3d0);
        puVar7 = puVar16;
        func_0x000107c3fd50();
        func_0x000107c61180();
        func_0x000107c61170(puVar16);
        lVar26 = lVar22 + 1;
        func_0x000107c61434(uVar14);
        if (SCARRY8(lVar22,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba8d98);
          (*pcVar3)();
        }
        uVar15 = *(undefined8 *)(unaff_x22 + 0x3f8);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x3f0);
        uVar24 = *(ulong *)(unaff_x22 + 0x400);
        *(long *)(unaff_x22 + 0x100) = lVar11;
        *(ulong *)(unaff_x22 + 0x108) = uVar13;
        *(undefined1 *)(unaff_x22 + 0x110) = 0;
        *(undefined8 *)(unaff_x22 + 0x118) = 0;
        *(long *)(unaff_x22 + 0x120) = lVar19;
        *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x3d0);
        *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x3c8);
        *(undefined1 **)(unaff_x22 + 0x138) = puVar17;
        *(long **)(unaff_x22 + 0x140) = plVar21;
        *(undefined1 **)(unaff_x22 + 0x148) = puVar7;
        FUN_101b9d4cc(unaff_x22 + 0x100,unaff_x22 + 0x150);
        func_0x000107c61558();
        uVar13 = *(ulong *)(unaff_x22 + 0x400);
        uVar4 = uVar13;
        if ((uVar24 & 1) == 0) {
          uVar4 = 0;
          FUN_101b9bfcc(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
        }
        uVar24 = *(ulong *)(uVar4 + 0x10);
        uVar13 = uVar4;
        if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar24) {
          uVar13 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
          FUN_101b9bfcc(uVar13,uVar24 + 1,1,uVar4);
        }
        uVar18 = *(undefined8 *)(unaff_x22 + 0x430);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x408);
        *(ulong *)(uVar13 + 0x10) = uVar24 + 1;
        lVar11 = uVar13 + uVar24 * 0x50;
        uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
        *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(unaff_x22 + 0x108);
        *(undefined8 *)(lVar11 + 0x20) = uVar9;
        uVar10 = *(undefined8 *)(unaff_x22 + 0x118);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x110);
        uVar30 = *(undefined8 *)(unaff_x22 + 0x128);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x120);
        uVar31 = *(undefined8 *)(unaff_x22 + 0x130);
        uVar33 = *(undefined8 *)(unaff_x22 + 0x148);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x140);
        *(undefined8 *)(lVar11 + 0x58) = *(undefined8 *)(unaff_x22 + 0x138);
        *(undefined8 *)(lVar11 + 0x50) = uVar31;
        *(undefined8 *)(lVar11 + 0x68) = uVar33;
        *(undefined8 *)(lVar11 + 0x60) = uVar32;
        *(undefined8 *)(lVar11 + 0x38) = uVar10;
        *(undefined8 *)(lVar11 + 0x30) = uVar9;
        *(undefined8 *)(lVar11 + 0x48) = uVar30;
        *(undefined8 *)(lVar11 + 0x40) = uVar29;
        func_0x000107c61170(uVar18);
        func_0x000107c61170(uVar23);
        func_0x000101b9d508(unaff_x22 + 0x100);
      }
LAB_101ba8b58:
      puVar16 = *(undefined1 **)(unaff_x22 + 0x410);
    } while (puVar16 != *(undefined1 **)(unaff_x22 + 0x3d8));
  } while( true );
LAB_101ba7ef4:
  *(ulong *)(unaff_x22 + 0x478) = uVar4;
  if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba87f8);
    (*pcVar3)();
  }
  lVar11 = *(long *)(unaff_x22 + 0x3a0) + uVar4 * 0x20;
  uVar14 = *(undefined8 *)(lVar11 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x480) = uVar14;
  uVar4 = *(ulong *)(lVar11 + 0x28);
  *(ulong *)(unaff_x22 + 0x488) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x490) = *(undefined8 *)(lVar11 + 0x30);
  uVar15 = *(undefined8 *)(lVar11 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x498) = uVar15;
  if (uVar4 >> 0x3e == 0) {
    uVar24 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    *(ulong *)(unaff_x22 + 0x4a0) = uVar24;
  }
  else {
    uVar24 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar24 = uVar4;
    }
    func_0x000107c60480(uVar24);
    func_0x000107c60480();
    *(ulong *)(unaff_x22 + 0x4a0) = uVar24;
  }
  if (uVar24 != 0) {
    func_0x000107c61438(uVar4,2);
    func_0x000107c61434(uVar14);
    func_0x000107c61434(uVar15);
    puVar16 = (undefined1 *)0x0;
    do {
      *(ulong *)(unaff_x22 + 0x4b8) = uVar13;
      *(long *)(unaff_x22 + 0x4b0) = lVar28;
      *(long *)(unaff_x22 + 0x4a8) = lVar26;
      uVar13 = *(ulong *)(unaff_x22 + 0x488);
      if ((uVar13 & 0xc000000000000001) == 0) {
        if (*(undefined1 **)((uVar13 & 0xffffffffffffff8) + 0x10) <= puVar16) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba87f0);
          (*pcVar3)();
        }
        puVar7 = *(undefined1 **)(uVar13 + (long)puVar16 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar7 = puVar16;
        func_0x000101b9be7c();
      }
      *(undefined1 **)(unaff_x22 + 0x4c0) = puVar7;
      *(undefined1 **)(unaff_x22 + 0x4c8) = puVar16 + 1;
      if (SCARRY8((long)puVar16,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba87e8);
        (*pcVar3)();
      }
      if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
        FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x248);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x260);
        lVar28 = *(long *)(unaff_x22 + 0x268);
        uVar14 = uVar15;
        FUN_101bacf60(unaff_x22 + 0x248);
        func_0x000107c4a77c();
        func_0x000107c61180();
        if (puVar7 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba8814);
          (*pcVar3)();
        }
        puVar16 = puVar7;
        func_0x000107c5faec();
        func_0x000107c61170(puVar7);
        *(undefined8 *)(unaff_x22 + 0x4d0) = uVar14;
        piVar12 = *(int **)(lVar28 + 8);
        plVar8 = (long *)(ulong)(uint)piVar12[1];
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar12 + (long)piVar12);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x4d8) = plVar8;
        pcVar3 = FUN_101ba507c;
        goto LAB_101ba83c8;
      }
      lVar28 = *(long *)(unaff_x22 + 0x4b0) + 1;
      if (SCARRY8(*(long *)(unaff_x22 + 0x4b0),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba87ec);
        (*pcVar3)();
      }
      puVar20 = PTR_PTR_1126bf7f0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar5 = PTR_PTR_1126bf8d0;
      func_0x000107c610f8(PTR_PTR_1126bf8d0);
      func_0x000107c453e4();
      func_0x000107c53574(puVar20);
      func_0x000107c61170(puVar5);
      puVar16 = puVar20;
      func_0x000107c3fd58();
      func_0x000107c61180();
      if (puVar16 != (undefined1 *)0x0) {
        uVar14 = *(undefined8 *)(unaff_x22 + 0x4c0);
        func_0x000107c5b2dc(uVar14);
        func_0x000107c61180();
        func_0x000107c59588(puVar16);
        func_0x000107c61170(uVar14);
        func_0x000107c61170(puVar16);
      }
      puVar16 = puVar20;
      func_0x000107c3fd58();
      func_0x000107c61180();
      if (puVar16 != (undefined1 *)0x0) {
        uVar14 = *(undefined8 *)(unaff_x22 + 0x4c0);
        func_0x000107c3fd54(uVar14);
        func_0x000107c61180();
        func_0x000107c55d70(puVar16);
        func_0x000107c61170(uVar14);
        func_0x000107c61170(puVar16);
      }
      lVar26 = *(long *)(unaff_x22 + 0x4c0);
      func_0x000107c4a77c();
      func_0x000107c61180();
      if (lVar26 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba8810);
        (*pcVar3)();
      }
      lVar11 = lVar26;
      func_0x000107c5faec();
      func_0x000107c61170(lVar26);
      puVar16 = puVar20;
      func_0x000107c3fd58();
      func_0x000107c61180();
      if (puVar16 == (undefined1 *)0x0) {
        func_0x000101b9d5ac();
        puVar5 = &UNK_1106c31f8;
        func_0x000107c613f8(&UNK_1106c31f8,puVar16,0,0);
        *puVar16 = 0x3a;
        func_0x000107c61654();
LAB_101ba7f9c:
        func_0x000107c6142c(uVar13);
        bVar2 = *(byte *)(unaff_x22 + 0x542);
        func_0x000107c61170(puVar20);
        if ((bVar2 & 1) == 0) {
          *(long *)(unaff_x22 + 0x520) = lVar28;
          *(undefined **)(unaff_x22 + 0x518) = puVar5;
          lVar28 = *(long *)(unaff_x22 + 0x4c0);
          FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x270);
          uVar15 = *(undefined8 *)(unaff_x22 + 0x288);
          lVar26 = *(long *)(unaff_x22 + 0x290);
          uVar14 = uVar15;
          FUN_101bacf60(unaff_x22 + 0x270);
          func_0x000107c4a77c();
          func_0x000107c61180();
          if (lVar28 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba8818);
            (*pcVar3)();
          }
          lVar11 = lVar28;
          func_0x000107c5faec();
          func_0x000107c61170(lVar28);
          *(undefined8 *)(unaff_x22 + 0x528) = uVar14;
          func_0x000107c614cc(puVar5,unaff_x22 + 0x2e0,unaff_x22 + 0x2b0);
          uVar18 = *(undefined8 *)(unaff_x22 + 0x2b8);
          FUN_101da5a48(uVar18,*(undefined8 *)(unaff_x22 + 0x2c0));
          piVar12 = *(int **)(lVar26 + 0x10);
          plVar8 = (long *)(ulong)(uint)piVar12[1];
          UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar12 + (long)piVar12);
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x530) = plVar8;
          *plVar8 = unaff_x22;
          plVar8[1] = (long)FUN_101ba8dec;
          uVar10 = *(undefined8 *)(unaff_x22 + 0x370);
          uVar9 = *(undefined8 *)(unaff_x22 + 0x330);
          uVar23 = *(undefined8 *)(unaff_x22 + 0x328);
          goto LAB_101ba84e8;
        }
        func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x4c0));
        func_0x000107c614ac(puVar5);
        uVar13 = *(ulong *)(unaff_x22 + 0x4b8);
        lVar26 = *(long *)(unaff_x22 + 0x4a8);
      }
      else {
        puVar7 = puVar16;
        func_0x000107c5b67c();
        func_0x000107c61180();
        if (puVar7 == (undefined1 *)0x0) {
LAB_101ba7f64:
          func_0x000101b9d5ac();
          puVar5 = &UNK_1106c31f8;
          func_0x000107c613f8(&UNK_1106c31f8,puVar7,0,0);
          *puVar7 = 0x3b;
          func_0x000107c61654();
          func_0x000107c61170(puVar16);
          goto LAB_101ba7f9c;
        }
        lStack_70 = 0;
        plStack_90 = &lStack_70;
        func_0x000107c5fc50();
        func_0x000107c61170();
        lVar26 = lStack_70;
        if (lStack_70 == 0) goto LAB_101ba7f64;
        puVar7 = puVar16;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        if (puVar7 == (undefined1 *)0x0) {
          puStack_80 = (undefined1 *)0x0;
          plStack_90 = (long *)0x0;
        }
        else {
          puStack_80 = puVar7;
          func_0x000107c5faec();
          func_0x000107c61170(puVar7);
        }
        uVar24 = *(ulong *)(unaff_x22 + 0x4b8);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x498);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x490);
        puVar7 = puVar16;
        func_0x000107c3fd50();
        func_0x000107c61180();
        func_0x000107c61170(puVar16);
        *(long *)(unaff_x22 + 0x60) = lVar11;
        *(ulong *)(unaff_x22 + 0x68) = uVar13;
        *(undefined1 *)(unaff_x22 + 0x70) = 0;
        *(undefined8 *)(unaff_x22 + 0x78) = 0;
        *(long *)(unaff_x22 + 0x80) = lVar26;
        *(undefined8 *)(unaff_x22 + 0x88) = uVar15;
        *(undefined8 *)(unaff_x22 + 0x90) = uVar14;
        *(undefined1 **)(unaff_x22 + 0x98) = puStack_80;
        *(long **)(unaff_x22 + 0xa0) = plStack_90;
        *(undefined1 **)(unaff_x22 + 0xa8) = puVar7;
        func_0x000107c61434(uVar14);
        func_0x000107c61170(puVar20);
        FUN_101b9d4cc(unaff_x22 + 0x60,unaff_x22 + 0xb0);
        func_0x000107c61558();
        uVar13 = *(ulong *)(unaff_x22 + 0x4b8);
        uVar4 = uVar13;
        if ((uVar24 & 1) == 0) {
          uVar4 = 0;
          FUN_101b9bfcc(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
        }
        uVar24 = *(ulong *)(uVar4 + 0x10);
        uVar13 = uVar4;
        if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar24) {
          uVar13 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
          FUN_101b9bfcc(uVar13,uVar24 + 1,1,uVar4);
        }
        uVar14 = *(undefined8 *)(unaff_x22 + 0x4c0);
        lVar11 = *(long *)(unaff_x22 + 0x4a8);
        *(ulong *)(uVar13 + 0x10) = uVar24 + 1;
        lVar26 = uVar13 + uVar24 * 0x50;
        uVar15 = *(undefined8 *)(unaff_x22 + 0x60);
        *(undefined8 *)(lVar26 + 0x28) = *(undefined8 *)(unaff_x22 + 0x68);
        *(undefined8 *)(lVar26 + 0x20) = uVar15;
        uVar18 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x80);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar30 = *(undefined8 *)(unaff_x22 + 0xa8);
        uVar29 = *(undefined8 *)(unaff_x22 + 0xa0);
        *(undefined8 *)(lVar26 + 0x58) = *(undefined8 *)(unaff_x22 + 0x98);
        *(undefined8 *)(lVar26 + 0x50) = uVar10;
        *(undefined8 *)(lVar26 + 0x68) = uVar30;
        *(undefined8 *)(lVar26 + 0x60) = uVar29;
        *(undefined8 *)(lVar26 + 0x38) = uVar18;
        *(undefined8 *)(lVar26 + 0x30) = uVar15;
        *(undefined8 *)(lVar26 + 0x48) = uVar9;
        *(undefined8 *)(lVar26 + 0x40) = uVar23;
        func_0x000107c61170(uVar14);
        func_0x000101b9d508(unaff_x22 + 0x60);
        lVar26 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba87f4);
          (*pcVar3)();
        }
      }
      puVar16 = *(undefined1 **)(unaff_x22 + 0x4c8);
    } while (puVar16 != *(undefined1 **)(unaff_x22 + 0x4a0));
    uVar14 = *(undefined8 *)(unaff_x22 + 0x498);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x480);
    func_0x000107c61430(*(undefined8 *)(unaff_x22 + 0x488),2);
    func_0x000107c6142c(uVar15);
    func_0x000107c6142c(uVar14);
  }
  uVar4 = *(long *)(unaff_x22 + 0x478) + 1;
  if (uVar4 == *(ulong *)(unaff_x22 + 0x3a8)) {
    lVar22 = *(long *)(unaff_x22 + 0x470);
    lVar27 = *(long *)(unaff_x22 + 0x468);
    lVar19 = *(long *)(unaff_x22 + 0x460);
    lVar25 = *(long *)(unaff_x22 + 0x458);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x3a0);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x330));
    func_0x000107c6142c(uVar14);
    lVar11 = lVar22 - lVar27;
    if (SBORROW8(lVar22,lVar27)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba87fc);
      (*pcVar3)();
    }
    lVar22 = lVar19 - lVar25;
    if (SBORROW8(lVar19,lVar25)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba8800);
      (*pcVar3)();
    }
    lVar19 = lVar28 - lVar26;
    if (SBORROW8(lVar28,lVar26)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba8804);
      (*pcVar3)();
    }
    if (!SCARRY8(lVar11,lVar22)) {
      if (!SCARRY8(lVar11 + lVar22,lVar19)) {
        if (0 < lVar11 + lVar22 + lVar19) {
          lVar26 = *(long *)(unaff_x22 + 0x308);
          lStack_70 = 0;
          uStack_68 = 0xe000000000000000;
          func_0x000107c602fc(0x5c);
          func_0x000107c5fb78(0xd00000000000002c,0x800000010f001ec0);
          *(long *)(unaff_x22 + 0x2f0) = lVar11;
          puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          puVar20 = PTR___sSiN_11034deb0;
          puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00)
          ;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar6);
          func_0x000107c5fb78(0xd000000000000011,0x800000010f001ef0);
          *(long *)(unaff_x22 + 0x2f8) = lVar22;
          puVar6 = puVar5;
          func_0x000107c6057c(puVar20,puVar5);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar6);
          func_0x000107c5fb78(0xd000000000000019,0x800000010f001f10);
          *(long *)(unaff_x22 + 0x300) = lVar19;
          func_0x000107c6057c(puVar20);
          puVar20 = puVar5;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar5);
          uVar14 = uStack_68;
          lVar28 = lStack_70;
          func_0x000107c5cab0();
          func_0x000107c61180();
          if (lVar26 == 0) {
            lVar11 = 0;
            puVar20 = (undefined *)0x0;
          }
          else {
            lVar11 = lVar26;
            func_0x000107c5faec();
            func_0x000107c61170(lVar26);
          }
          lVar26 = *(long *)(unaff_x22 + 0x318);
          uVar15 = *(undefined8 *)(lVar26 + 0x60);
          uVar18 = *(undefined8 *)(lVar26 + 0x28);
          puVar5 = &UNK_110450670;
          func_0x000107c613fc(&UNK_110450670,0x18,7);
          func_0x000107c61644(puVar5 + 0x10,lVar26);
          puVar6 = &UNK_110450698;
          func_0x000107c613fc(&UNK_110450698,0x50,7);
          *(undefined **)(puVar6 + 0x10) = puVar5;
          *(long *)(puVar6 + 0x18) = lVar28;
          *(undefined8 *)(puVar6 + 0x20) = uVar14;
          puVar6[0x28] = 1;
          *(undefined8 *)(puVar6 + 0x30) = 0;
          *(undefined8 *)(puVar6 + 0x38) = 0;
          *(long *)(puVar6 + 0x40) = lVar11;
          *(undefined **)(puVar6 + 0x48) = puVar20;
          *(code **)(unaff_x22 + 0x1c0) = FUN_101baca00;
          *(undefined **)(unaff_x22 + 0x1c8) = puVar6;
          *(undefined **)(unaff_x22 + 0x1a0) = PTR___NSConcreteStackBlock_11034bd00;
          *(undefined8 *)(unaff_x22 + 0x1a8) = 0x42000000;
          *(undefined **)(unaff_x22 + 0x1b0) = &UNK_100288f10;
          *(undefined **)(unaff_x22 + 0x1b8) = &UNK_1104506b0;
          lVar28 = unaff_x22 + 0x1a0;
          func_0x000107c60bc4(lVar28);
          uVar23 = *(undefined8 *)(unaff_x22 + 0x1c8);
          func_0x000107c61434(puVar20);
          func_0x000107c61434(uVar14);
          func_0x000107c61574(uVar23);
          func_0x000108ec0f10(uVar15,uVar18,lVar28);
          func_0x000107c60bd0(lVar28);
          func_0x000107c6142c(puVar20);
          func_0x000107c6142c(uVar14);
        }
        uVar14 = *(undefined8 *)(unaff_x22 + 0x370);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x368);
        func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x338));
        func_0x000107c6142c(uVar15);
        func_0x000107c61170(uVar14);
                    /* WARNING: Could not recover jumptable at 0x000101ba87e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))(uVar13);
        return;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba880c);
      (*pcVar3)();
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba8808);
    (*pcVar3)();
  }
  goto LAB_101ba7ef4;
}



/* Entry: 101ba8dec; end: 101ba8e4f;  */

void FUN_101ba8dec(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x538) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x530));
  func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x528));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101ba8e50;
  }
  else {
    pcVar1 = FUN_101ba9914;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101ba8e50; end: 101ba97e7;  */

void FUN_101ba8e50(void)

{
  int iVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long unaff_x22;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long *plStack_90;
  undefined1 *puStack_80;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar15 = *(undefined8 *)(unaff_x22 + 0x518);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x4c0));
  func_0x000107c614ac(uVar15);
  FUN_101bacf10(unaff_x22 + 0x270);
  lVar24 = *(long *)(unaff_x22 + 0x520);
  uVar18 = *(ulong *)(unaff_x22 + 0x4b8);
  lVar17 = *(long *)(unaff_x22 + 0x4a8);
LAB_101ba8ea0:
  do {
    uVar19 = *(ulong *)(unaff_x22 + 0x4c8);
    uVar10 = *(ulong *)(unaff_x22 + 0x488);
    if (uVar19 == *(ulong *)(unaff_x22 + 0x4a0)) {
      uVar16 = *(undefined8 *)(unaff_x22 + 0x498);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x480);
      func_0x000107c61430(uVar10,2);
      func_0x000107c6142c(uVar15);
      func_0x000107c6142c(uVar16);
      do {
        while( true ) {
          uVar10 = *(long *)(unaff_x22 + 0x478) + 1;
          if (uVar10 == *(ulong *)(unaff_x22 + 0x3a8)) {
            lVar20 = *(long *)(unaff_x22 + 0x470);
            lVar22 = *(long *)(unaff_x22 + 0x468);
            lVar13 = *(long *)(unaff_x22 + 0x460);
            lVar21 = *(long *)(unaff_x22 + 0x458);
            uVar15 = *(undefined8 *)(unaff_x22 + 0x3a0);
            func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x330));
            func_0x000107c6142c(uVar15);
            lVar11 = lVar20 - lVar22;
            if (SBORROW8(lVar20,lVar22)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba97c8);
              (*pcVar3)();
            }
            lVar20 = lVar13 - lVar21;
            if (SBORROW8(lVar13,lVar21)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba97cc);
              (*pcVar3)();
            }
            lVar13 = lVar24 - lVar17;
            if (SBORROW8(lVar24,lVar17)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba97d0);
              (*pcVar3)();
            }
            if (SCARRY8(lVar11,lVar20)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba97d4);
              (*pcVar3)();
            }
            if (SCARRY8(lVar11 + lVar20,lVar13)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba97d8);
              (*pcVar3)();
            }
            if (0 < lVar11 + lVar20 + lVar13) {
              lVar17 = *(long *)(unaff_x22 + 0x308);
              lStack_70 = 0;
              uStack_68 = 0xe000000000000000;
              func_0x000107c602fc(0x5c);
              func_0x000107c5fb78(0xd00000000000002c,0x800000010f001ec0);
              *(long *)(unaff_x22 + 0x2f0) = lVar11;
              puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
              puVar14 = PTR___sSiN_11034deb0;
              puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
              func_0x000107c6057c(PTR___sSiN_11034deb0,
                                  PTR___sSis23CustomStringConvertiblesWP_11034df00);
              func_0x000107c5fb78();
              func_0x000107c6142c(puVar7);
              func_0x000107c5fb78(0xd000000000000011,0x800000010f001ef0);
              *(long *)(unaff_x22 + 0x2f8) = lVar20;
              puVar7 = puVar6;
              func_0x000107c6057c(puVar14,puVar6);
              func_0x000107c5fb78();
              func_0x000107c6142c(puVar7);
              func_0x000107c5fb78(0xd000000000000019,0x800000010f001f10);
              *(long *)(unaff_x22 + 0x300) = lVar13;
              func_0x000107c6057c(puVar14);
              puVar14 = puVar6;
              func_0x000107c5fb78();
              func_0x000107c6142c(puVar6);
              uVar15 = uStack_68;
              lVar24 = lStack_70;
              func_0x000107c5cab0();
              func_0x000107c61180();
              if (lVar17 == 0) {
                lVar11 = 0;
                puVar14 = (undefined *)0x0;
              }
              else {
                lVar11 = lVar17;
                func_0x000107c5faec();
                func_0x000107c61170(lVar17);
              }
              lVar17 = *(long *)(unaff_x22 + 0x318);
              uVar16 = *(undefined8 *)(lVar17 + 0x60);
              uVar9 = *(undefined8 *)(lVar17 + 0x28);
              puVar6 = &UNK_110450670;
              func_0x000107c613fc(&UNK_110450670,0x18,7);
              func_0x000107c61644(puVar6 + 0x10,lVar17);
              puVar7 = &UNK_110450698;
              func_0x000107c613fc(&UNK_110450698,0x50,7);
              *(undefined **)(puVar7 + 0x10) = puVar6;
              *(long *)(puVar7 + 0x18) = lVar24;
              *(undefined8 *)(puVar7 + 0x20) = uVar15;
              puVar7[0x28] = 1;
              *(undefined8 *)(puVar7 + 0x30) = 0;
              *(undefined8 *)(puVar7 + 0x38) = 0;
              *(long *)(puVar7 + 0x40) = lVar11;
              *(undefined **)(puVar7 + 0x48) = puVar14;
              *(code **)(unaff_x22 + 0x1c0) = FUN_101baca00;
              *(undefined **)(unaff_x22 + 0x1c8) = puVar7;
              *(undefined **)(unaff_x22 + 0x1a0) = PTR___NSConcreteStackBlock_11034bd00;
              *(undefined8 *)(unaff_x22 + 0x1a8) = 0x42000000;
              *(undefined **)(unaff_x22 + 0x1b0) = &UNK_100288f10;
              *(undefined **)(unaff_x22 + 0x1b8) = &UNK_1104506b0;
              lVar24 = unaff_x22 + 0x1a0;
              func_0x000107c60bc4(lVar24);
              uVar23 = *(undefined8 *)(unaff_x22 + 0x1c8);
              func_0x000107c61434(puVar14);
              func_0x000107c61434(uVar15);
              func_0x000107c61574(uVar23);
              func_0x000108ec0f10(uVar16,uVar9,lVar24);
              func_0x000107c60bd0(lVar24);
              func_0x000107c6142c(puVar14);
              func_0x000107c6142c(uVar15);
            }
            uVar16 = *(undefined8 *)(unaff_x22 + 0x370);
            uVar15 = *(undefined8 *)(unaff_x22 + 0x368);
            func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x338));
            func_0x000107c6142c(uVar15);
            func_0x000107c61170(uVar16);
                    /* WARNING: Could not recover jumptable at 0x000101ba95e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(unaff_x22 + 8))(uVar18);
            return;
          }
          *(ulong *)(unaff_x22 + 0x478) = uVar10;
          if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba97b8);
            (*pcVar3)();
          }
          lVar11 = *(long *)(unaff_x22 + 0x3a0) + uVar10 * 0x20;
          uVar15 = *(undefined8 *)(lVar11 + 0x20);
          *(undefined8 *)(unaff_x22 + 0x480) = uVar15;
          uVar10 = *(ulong *)(lVar11 + 0x28);
          *(ulong *)(unaff_x22 + 0x488) = uVar10;
          *(undefined8 *)(unaff_x22 + 0x490) = *(undefined8 *)(lVar11 + 0x30);
          uVar16 = *(undefined8 *)(lVar11 + 0x38);
          *(undefined8 *)(unaff_x22 + 0x498) = uVar16;
          if (uVar10 >> 0x3e != 0) break;
          lVar11 = *(long *)((uVar10 & 0xffffffffffffff8) + 0x10);
          *(long *)(unaff_x22 + 0x4a0) = lVar11;
          if (lVar11 != 0) goto LAB_101ba8f70;
        }
        uVar19 = uVar10 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar10) {
          uVar19 = uVar10;
        }
        func_0x000107c60480(uVar19);
        func_0x000107c60480();
        *(ulong *)(unaff_x22 + 0x4a0) = uVar19;
      } while (uVar19 == 0);
LAB_101ba8f70:
      func_0x000107c61438(uVar10,2);
      func_0x000107c61434(uVar15);
      func_0x000107c61434(uVar16);
      uVar19 = 0;
      uVar10 = *(ulong *)(unaff_x22 + 0x488);
    }
    *(ulong *)(unaff_x22 + 0x4b8) = uVar18;
    *(long *)(unaff_x22 + 0x4b0) = lVar24;
    *(long *)(unaff_x22 + 0x4a8) = lVar17;
    if ((uVar10 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba97c4);
        (*pcVar3)();
      }
      uVar18 = *(ulong *)(uVar10 + uVar19 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar18 = uVar19;
      FUN_101b9be7c();
    }
    *(ulong *)(unaff_x22 + 0x4c0) = uVar18;
    *(ulong *)(unaff_x22 + 0x4c8) = uVar19 + 1;
    if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba97bc);
      (*pcVar3)();
    }
    if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
      FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x248);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x260);
      lVar24 = *(long *)(unaff_x22 + 0x268);
      uVar15 = uVar16;
      FUN_101bacf60(unaff_x22 + 0x248);
      func_0x000107c4a77c();
      func_0x000107c61180();
      if (uVar18 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba97e4);
        (*pcVar3)();
      }
      uVar10 = uVar18;
      func_0x000107c5faec();
      func_0x000107c61170(uVar18);
      *(undefined8 *)(unaff_x22 + 0x4d0) = uVar15;
      piVar12 = *(int **)(lVar24 + 8);
      iVar1 = *piVar12;
      plVar8 = (long *)(ulong)(uint)piVar12[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x4d8) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_101ba507c;
                    /* WARNING: Could not recover jumptable at 0x000101ba96b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar12))
                (*(undefined8 *)(unaff_x22 + 0x310),uVar10,uVar15,*(undefined8 *)(unaff_x22 + 0x360)
                 ,*(undefined8 *)(unaff_x22 + 0x368),*(undefined8 *)(unaff_x22 + 0x370),uVar16,
                 lVar24);
      return;
    }
    lVar24 = *(long *)(unaff_x22 + 0x4b0) + 1;
    if (SCARRY8(*(long *)(unaff_x22 + 0x4b0),1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba97c0);
      (*pcVar3)();
    }
    puVar14 = PTR_PTR_1126bf7f0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar6 = PTR_PTR_1126bf8d0;
    func_0x000107c610f8(PTR_PTR_1126bf8d0);
    func_0x000107c453e4();
    func_0x000107c53574(puVar14);
    func_0x000107c61170(puVar6);
    puVar4 = puVar14;
    func_0x000107c3fd58();
    func_0x000107c61180();
    if (puVar4 != (undefined1 *)0x0) {
      uVar15 = *(undefined8 *)(unaff_x22 + 0x4c0);
      func_0x000107c5b2dc(uVar15);
      func_0x000107c61180();
      func_0x000107c59588(puVar4);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(puVar4);
    }
    puVar4 = puVar14;
    func_0x000107c3fd58();
    func_0x000107c61180();
    if (puVar4 != (undefined1 *)0x0) {
      uVar15 = *(undefined8 *)(unaff_x22 + 0x4c0);
      func_0x000107c3fd54(uVar15);
      func_0x000107c61180();
      func_0x000107c55d70(puVar4);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(puVar4);
    }
    lVar17 = *(long *)(unaff_x22 + 0x4c0);
    func_0x000107c4a77c();
    func_0x000107c61180();
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba97e0);
      (*pcVar3)();
    }
    lVar11 = lVar17;
    func_0x000107c5faec();
    func_0x000107c61170(lVar17);
    puVar4 = puVar14;
    func_0x000107c3fd58();
    func_0x000107c61180();
    if (puVar4 == (undefined1 *)0x0) {
      func_0x000101b9d5ac();
      puVar6 = &UNK_1106c31f8;
      func_0x000107c613f8(&UNK_1106c31f8,puVar4,0,0);
      *puVar4 = 0x3a;
      func_0x000107c61654();
LAB_101ba91d0:
      func_0x000107c6142c(uVar10);
      bVar2 = *(byte *)(unaff_x22 + 0x542);
      func_0x000107c61170(puVar14);
      if ((bVar2 & 1) == 0) {
        *(long *)(unaff_x22 + 0x520) = lVar24;
        *(undefined **)(unaff_x22 + 0x518) = puVar6;
        lVar24 = *(long *)(unaff_x22 + 0x4c0);
        FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x270);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x288);
        lVar17 = *(long *)(unaff_x22 + 0x290);
        uVar15 = uVar16;
        FUN_101bacf60(unaff_x22 + 0x270);
        func_0x000107c4a77c();
        func_0x000107c61180();
        if (lVar24 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba97e8);
          (*pcVar3)();
        }
        lVar11 = lVar24;
        func_0x000107c5faec();
        func_0x000107c61170(lVar24);
        *(undefined8 *)(unaff_x22 + 0x528) = uVar15;
        func_0x000107c614cc(puVar6,unaff_x22 + 0x2e0,unaff_x22 + 0x2b0);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x2b8);
        FUN_101da5a48(uVar9,*(undefined8 *)(unaff_x22 + 0x2c0));
        piVar12 = *(int **)(lVar17 + 0x10);
        iVar1 = *piVar12;
        plVar8 = (long *)(ulong)(uint)piVar12[1];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x530) = plVar8;
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_101ba8dec;
                    /* WARNING: Could not recover jumptable at 0x000101ba97b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar12))
                  (lVar11,uVar15,*(undefined8 *)(unaff_x22 + 0x328),
                   *(undefined8 *)(unaff_x22 + 0x330),uVar9,*(undefined8 *)(unaff_x22 + 0x370),
                   uVar16,lVar17);
        return;
      }
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x4c0));
      func_0x000107c614ac(puVar6);
      uVar18 = *(ulong *)(unaff_x22 + 0x4b8);
      lVar17 = *(long *)(unaff_x22 + 0x4a8);
      goto LAB_101ba8ea0;
    }
    puVar5 = puVar4;
    func_0x000107c5b67c();
    func_0x000107c61180();
    if (puVar5 == (undefined1 *)0x0) {
LAB_101ba9164:
      func_0x000101b9d5ac();
      puVar6 = &UNK_1106c31f8;
      func_0x000107c613f8(&UNK_1106c31f8,puVar5,0,0);
      *puVar5 = 0x3b;
      func_0x000107c61654();
      func_0x000107c61170(puVar4);
      goto LAB_101ba91d0;
    }
    lStack_70 = 0;
    plStack_90 = &lStack_70;
    func_0x000107c5fc50();
    func_0x000107c61170();
    lVar17 = lStack_70;
    if (lStack_70 == 0) goto LAB_101ba9164;
    puVar5 = puVar4;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (puVar5 == (undefined1 *)0x0) {
      puStack_80 = (undefined1 *)0x0;
      plStack_90 = (long *)0x0;
    }
    else {
      puStack_80 = puVar5;
      func_0x000107c5faec();
      func_0x000107c61170(puVar5);
    }
    uVar18 = *(ulong *)(unaff_x22 + 0x4b8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x498);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x490);
    puVar5 = puVar4;
    func_0x000107c3fd50();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    *(long *)(unaff_x22 + 0x60) = lVar11;
    *(ulong *)(unaff_x22 + 0x68) = uVar10;
    *(undefined1 *)(unaff_x22 + 0x70) = 0;
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    *(long *)(unaff_x22 + 0x80) = lVar17;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar16;
    *(undefined1 **)(unaff_x22 + 0x98) = puStack_80;
    *(long **)(unaff_x22 + 0xa0) = plStack_90;
    *(undefined1 **)(unaff_x22 + 0xa8) = puVar5;
    func_0x000107c61434(uVar16);
    func_0x000107c61170(puVar14);
    FUN_101b9d4cc(unaff_x22 + 0x60,unaff_x22 + 0xb0);
    func_0x000107c61558();
    uVar19 = *(ulong *)(unaff_x22 + 0x4b8);
    uVar10 = uVar19;
    if ((uVar18 & 1) == 0) {
      uVar10 = 0;
      FUN_101b9bfcc(0,*(long *)(uVar19 + 0x10) + 1,1,uVar19);
    }
    uVar19 = *(ulong *)(uVar10 + 0x10);
    uVar18 = uVar10;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar19) {
      uVar18 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      FUN_101b9bfcc(uVar18,uVar19 + 1,1,uVar10);
    }
    uVar15 = *(undefined8 *)(unaff_x22 + 0x4c0);
    lVar11 = *(long *)(unaff_x22 + 0x4a8);
    *(ulong *)(uVar18 + 0x10) = uVar19 + 1;
    lVar17 = uVar18 + uVar19 * 0x50;
    uVar16 = *(undefined8 *)(unaff_x22 + 0x60);
    *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)(unaff_x22 + 0x68);
    *(undefined8 *)(lVar17 + 0x20) = uVar16;
    uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar28 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar27 = *(undefined8 *)(unaff_x22 + 0xa0);
    *(undefined8 *)(lVar17 + 0x58) = *(undefined8 *)(unaff_x22 + 0x98);
    *(undefined8 *)(lVar17 + 0x50) = uVar26;
    *(undefined8 *)(lVar17 + 0x68) = uVar28;
    *(undefined8 *)(lVar17 + 0x60) = uVar27;
    *(undefined8 *)(lVar17 + 0x38) = uVar9;
    *(undefined8 *)(lVar17 + 0x30) = uVar16;
    *(undefined8 *)(lVar17 + 0x48) = uVar25;
    *(undefined8 *)(lVar17 + 0x40) = uVar23;
    func_0x000107c61170(uVar15);
    func_0x000101b9d508(unaff_x22 + 0x60);
    lVar17 = lVar11 + 1;
    if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ba97dc);
      (*pcVar3)();
    }
  } while( true );
}



/* Entry: 101ba97e8; end: 101ba9913;  */

void FUN_101ba97e8(void)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  long lVar10;
  
  FUN_101bacf10(unaff_x22 + 0x248);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x4e0);
  *(undefined8 *)(unaff_x22 + 0x520) = *(undefined8 *)(unaff_x22 + 0x4b0);
  *(undefined8 *)(unaff_x22 + 0x518) = uVar8;
  lVar10 = *(long *)(unaff_x22 + 0x4c0);
  FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x270);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x288);
  lVar9 = *(long *)(unaff_x22 + 0x290);
  uVar5 = uVar7;
  FUN_101bacf60(unaff_x22 + 0x270);
  func_0x000107c4a77c();
  func_0x000107c61180();
  if (lVar10 != 0) {
    lVar3 = lVar10;
    func_0x000107c5faec();
    func_0x000107c61170(lVar10);
    *(undefined8 *)(unaff_x22 + 0x528) = uVar5;
    func_0x000107c614cc(uVar8,unaff_x22 + 0x2e0,unaff_x22 + 0x2b0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2b8);
    FUN_101da5a48(uVar8,*(undefined8 *)(unaff_x22 + 0x2c0));
    piVar6 = *(int **)(lVar9 + 0x10);
    iVar1 = *piVar6;
    plVar4 = (long *)(ulong)(uint)piVar6[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x530) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101ba8dec;
                    /* WARNING: Could not recover jumptable at 0x000101ba990c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar6))
              (lVar3,uVar5,*(undefined8 *)(unaff_x22 + 0x328),*(undefined8 *)(unaff_x22 + 0x330),
               uVar8,*(undefined8 *)(unaff_x22 + 0x370),uVar7,lVar9);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ba9914);
  (*pcVar2)();
}



/* Entry: 101ba9914; end: 101baa31f;  */

void FUN_101ba9914(void)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puVar19;
  long unaff_x22;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 *puVar23;
  long lVar24;
  long *plVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar16 = *(undefined8 *)(unaff_x22 + 0x538);
  FUN_101bacf10(unaff_x22 + 0x270);
  *(undefined8 *)(unaff_x22 + 0x2e8) = uVar16;
  func_0x000107c614b0(uVar16);
  uVar16 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar15 = unaff_x22 + 0x541;
  func_0x000107c6147c(uVar15,unaff_x22 + 0x2e8,uVar16,&UNK_1106c31f8,6);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x538);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x518);
  if ((uVar15 & 1) == 0) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x4c0));
    func_0x000107c614ac(uVar16);
    func_0x000107c614ac(uVar17);
    lVar27 = *(long *)(unaff_x22 + 0x520);
    uVar15 = *(ulong *)(unaff_x22 + 0x4b8);
    goto LAB_101ba99e0;
  }
  cVar2 = *(char *)(unaff_x22 + 0x541);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x4c0));
  func_0x000107c614ac(uVar16);
  func_0x000107c614ac(uVar17);
  lVar27 = *(long *)(unaff_x22 + 0x520);
  uVar15 = *(ulong *)(unaff_x22 + 0x4b8);
  lVar22 = *(long *)(unaff_x22 + 0x4a8);
  if (cVar2 != '\'') goto LAB_101ba99e4;
  do {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x498);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x480);
    func_0x000107c61430(*(undefined8 *)(unaff_x22 + 0x488),2);
    func_0x000107c6142c(uVar17);
    func_0x000107c6142c(uVar16);
    do {
      while( true ) {
        uVar5 = *(long *)(unaff_x22 + 0x478) + 1;
        if (uVar5 == *(ulong *)(unaff_x22 + 0x3a8)) {
          lVar20 = *(long *)(unaff_x22 + 0x470);
          lVar24 = *(long *)(unaff_x22 + 0x468);
          lVar18 = *(long *)(unaff_x22 + 0x460);
          lVar21 = *(long *)(unaff_x22 + 0x458);
          uVar16 = *(undefined8 *)(unaff_x22 + 0x3a0);
          func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x330));
          func_0x000107c6142c(uVar16);
          lVar12 = lVar20 - lVar24;
          if (SBORROW8(lVar20,lVar24)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101baa2c0);
            (*pcVar4)();
          }
          lVar20 = lVar18 - lVar21;
          if (SBORROW8(lVar18,lVar21)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101baa2c4);
            (*pcVar4)();
          }
          lVar18 = lVar27 - lVar22;
          if (SBORROW8(lVar27,lVar22)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101baa2c8);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar20)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101baa2cc);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12 + lVar20,lVar18)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101baa2d0);
            (*pcVar4)();
          }
          if (0 < lVar12 + lVar20 + lVar18) {
            lVar22 = *(long *)(unaff_x22 + 0x308);
            lStack_70 = 0;
            uStack_68 = 0xe000000000000000;
            func_0x000107c602fc(0x5c);
            func_0x000107c5fb78(0xd00000000000002c,0x800000010f001ec0);
            *(long *)(unaff_x22 + 0x2f0) = lVar12;
            puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
            puVar19 = PTR___sSiN_11034deb0;
            puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
            func_0x000107c6057c(PTR___sSiN_11034deb0,
                                PTR___sSis23CustomStringConvertiblesWP_11034df00);
            func_0x000107c5fb78();
            func_0x000107c6142c(puVar9);
            func_0x000107c5fb78(0xd000000000000011,0x800000010f001ef0);
            *(long *)(unaff_x22 + 0x2f8) = lVar20;
            puVar9 = puVar8;
            func_0x000107c6057c(puVar19,puVar8);
            func_0x000107c5fb78();
            func_0x000107c6142c(puVar9);
            func_0x000107c5fb78(0xd000000000000019,0x800000010f001f10);
            *(long *)(unaff_x22 + 0x300) = lVar18;
            func_0x000107c6057c(puVar19);
            puVar19 = puVar8;
            func_0x000107c5fb78();
            func_0x000107c6142c(puVar8);
            uVar16 = uStack_68;
            lVar27 = lStack_70;
            func_0x000107c5cab0();
            func_0x000107c61180();
            if (lVar22 == 0) {
              lVar12 = 0;
              puVar19 = (undefined *)0x0;
            }
            else {
              lVar12 = lVar22;
              func_0x000107c5faec();
              func_0x000107c61170(lVar22);
            }
            lVar22 = *(long *)(unaff_x22 + 0x318);
            uVar17 = *(undefined8 *)(lVar22 + 0x60);
            uVar11 = *(undefined8 *)(lVar22 + 0x28);
            puVar8 = &UNK_110450670;
            func_0x000107c613fc(&UNK_110450670,0x18,7);
            func_0x000107c61644(puVar8 + 0x10,lVar22);
            puVar9 = &UNK_110450698;
            func_0x000107c613fc(&UNK_110450698,0x50,7);
            *(undefined **)(puVar9 + 0x10) = puVar8;
            *(long *)(puVar9 + 0x18) = lVar27;
            *(undefined8 *)(puVar9 + 0x20) = uVar16;
            puVar9[0x28] = 1;
            *(undefined8 *)(puVar9 + 0x30) = 0;
            *(undefined8 *)(puVar9 + 0x38) = 0;
            *(long *)(puVar9 + 0x40) = lVar12;
            *(undefined **)(puVar9 + 0x48) = puVar19;
            *(code **)(unaff_x22 + 0x1c0) = FUN_101baca00;
            *(undefined **)(unaff_x22 + 0x1c8) = puVar9;
            *(undefined **)(unaff_x22 + 0x1a0) = PTR___NSConcreteStackBlock_11034bd00;
            *(undefined8 *)(unaff_x22 + 0x1a8) = 0x42000000;
            *(undefined **)(unaff_x22 + 0x1b0) = &UNK_100288f10;
            *(undefined **)(unaff_x22 + 0x1b8) = &UNK_1104506b0;
            lVar27 = unaff_x22 + 0x1a0;
            func_0x000107c60bc4(lVar27);
            uVar26 = *(undefined8 *)(unaff_x22 + 0x1c8);
            func_0x000107c61434(puVar19);
            func_0x000107c61434(uVar16);
            func_0x000107c61574(uVar26);
            func_0x000108ec0f10(uVar17,uVar11,lVar27);
            func_0x000107c60bd0(lVar27);
            func_0x000107c6142c(puVar19);
            func_0x000107c6142c(uVar16);
          }
          uVar16 = *(undefined8 *)(unaff_x22 + 0x370);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x368);
          func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x338));
          func_0x000107c6142c(uVar17);
          func_0x000107c61170(uVar16);
                    /* WARNING: Could not recover jumptable at 0x000101baa0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))(uVar15);
          return;
        }
        *(ulong *)(unaff_x22 + 0x478) = uVar5;
        if (*(ulong *)(*(long *)(unaff_x22 + 0x3a0) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101baa2b4);
          (*pcVar4)();
        }
        lVar12 = *(long *)(unaff_x22 + 0x3a0) + uVar5 * 0x20;
        uVar16 = *(undefined8 *)(lVar12 + 0x20);
        *(undefined8 *)(unaff_x22 + 0x480) = uVar16;
        uVar5 = *(ulong *)(lVar12 + 0x28);
        *(ulong *)(unaff_x22 + 0x488) = uVar5;
        *(undefined8 *)(unaff_x22 + 0x490) = *(undefined8 *)(lVar12 + 0x30);
        uVar17 = *(undefined8 *)(lVar12 + 0x38);
        *(undefined8 *)(unaff_x22 + 0x498) = uVar17;
        if (uVar5 >> 0x3e != 0) break;
        lVar12 = *(long *)((uVar5 & 0xffffffffffffff8) + 0x10);
        *(long *)(unaff_x22 + 0x4a0) = lVar12;
        if (lVar12 != 0) goto LAB_101ba9ab0;
      }
      uVar13 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar13 = uVar5;
      }
      func_0x000107c60480(uVar13);
      func_0x000107c60480();
      *(ulong *)(unaff_x22 + 0x4a0) = uVar13;
    } while (uVar13 == 0);
LAB_101ba9ab0:
    func_0x000107c61438(uVar5,2);
    func_0x000107c61434(uVar16);
    func_0x000107c61434(uVar17);
    uVar5 = 0;
    do {
      *(ulong *)(unaff_x22 + 0x4b8) = uVar15;
      *(long *)(unaff_x22 + 0x4b0) = lVar27;
      *(long *)(unaff_x22 + 0x4a8) = lVar22;
      uVar15 = *(ulong *)(unaff_x22 + 0x488);
      if ((uVar15 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101baa2d4);
          (*pcVar4)();
        }
        uVar13 = *(ulong *)(uVar15 + uVar5 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar13 = uVar5;
        FUN_101b9be7c();
      }
      *(ulong *)(unaff_x22 + 0x4c0) = uVar13;
      *(ulong *)(unaff_x22 + 0x4c8) = uVar5 + 1;
      if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101baa2b8);
        (*pcVar4)();
      }
      if ((*(byte *)(unaff_x22 + 0x542) & 1) == 0) {
        FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x248);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x260);
        lVar27 = *(long *)(unaff_x22 + 0x268);
        uVar16 = uVar17;
        FUN_101bacf60(unaff_x22 + 0x248);
        func_0x000107c4a77c();
        func_0x000107c61180();
        if (uVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101baa31c);
          (*pcVar4)();
        }
        uVar15 = uVar13;
        func_0x000107c5faec();
        func_0x000107c61170(uVar13);
        *(undefined8 *)(unaff_x22 + 0x4d0) = uVar16;
        piVar14 = *(int **)(lVar27 + 8);
        iVar1 = *piVar14;
        plVar10 = (long *)(ulong)(uint)piVar14[1];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x4d8) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_101ba507c;
                    /* WARNING: Could not recover jumptable at 0x000101baa1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar14))
                  (*(undefined8 *)(unaff_x22 + 0x310),uVar15,uVar16,
                   *(undefined8 *)(unaff_x22 + 0x360),*(undefined8 *)(unaff_x22 + 0x368),
                   *(undefined8 *)(unaff_x22 + 0x370),uVar17,lVar27);
        return;
      }
      lVar27 = *(long *)(unaff_x22 + 0x4b0) + 1;
      if (SCARRY8(*(long *)(unaff_x22 + 0x4b0),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101baa2bc);
        (*pcVar4)();
      }
      puVar19 = PTR_PTR_1126bf7f0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar8 = PTR_PTR_1126bf8d0;
      func_0x000107c610f8(PTR_PTR_1126bf8d0);
      func_0x000107c453e4();
      func_0x000107c53574(puVar19);
      func_0x000107c61170(puVar8);
      puVar6 = puVar19;
      func_0x000107c3fd58();
      func_0x000107c61180();
      if (puVar6 != (undefined1 *)0x0) {
        uVar16 = *(undefined8 *)(unaff_x22 + 0x4c0);
        func_0x000107c5b2dc(uVar16);
        func_0x000107c61180();
        func_0x000107c59588(puVar6);
        func_0x000107c61170(uVar16);
        func_0x000107c61170(puVar6);
      }
      puVar6 = puVar19;
      func_0x000107c3fd58();
      func_0x000107c61180();
      if (puVar6 != (undefined1 *)0x0) {
        uVar16 = *(undefined8 *)(unaff_x22 + 0x4c0);
        func_0x000107c3fd54(uVar16);
        func_0x000107c61180();
        func_0x000107c55d70(puVar6);
        func_0x000107c61170(uVar16);
        func_0x000107c61170(puVar6);
      }
      lVar22 = *(long *)(unaff_x22 + 0x4c0);
      func_0x000107c4a77c();
      func_0x000107c61180();
      if (lVar22 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101baa318);
        (*pcVar4)();
      }
      lVar12 = lVar22;
      func_0x000107c5faec();
      func_0x000107c61170(lVar22);
      puVar6 = puVar19;
      func_0x000107c3fd58();
      func_0x000107c61180();
      if (puVar6 == (undefined1 *)0x0) {
        func_0x000101b9d5ac();
        puVar8 = &UNK_1106c31f8;
        func_0x000107c613f8(&UNK_1106c31f8,puVar6,0,0);
        *puVar6 = 0x3a;
        func_0x000107c61654();
LAB_101ba9f78:
        func_0x000107c6142c(uVar15);
        bVar3 = *(byte *)(unaff_x22 + 0x542);
        func_0x000107c61170(puVar19);
        if ((bVar3 & 1) == 0) {
          *(long *)(unaff_x22 + 0x520) = lVar27;
          *(undefined **)(unaff_x22 + 0x518) = puVar8;
          lVar27 = *(long *)(unaff_x22 + 0x4c0);
          FUN_101bac9bc(*(long *)(unaff_x22 + 0x318) + 0x30,unaff_x22 + 0x270);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x288);
          lVar22 = *(long *)(unaff_x22 + 0x290);
          uVar16 = uVar17;
          FUN_101bacf60(unaff_x22 + 0x270);
          func_0x000107c4a77c();
          func_0x000107c61180();
          if (lVar27 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101baa320);
            (*pcVar4)();
          }
          lVar12 = lVar27;
          func_0x000107c5faec();
          func_0x000107c61170(lVar27);
          *(undefined8 *)(unaff_x22 + 0x528) = uVar16;
          func_0x000107c614cc(puVar8,unaff_x22 + 0x2e0,unaff_x22 + 0x2b0);
          uVar11 = *(undefined8 *)(unaff_x22 + 0x2b8);
          FUN_101da5a48(uVar11,*(undefined8 *)(unaff_x22 + 0x2c0));
          piVar14 = *(int **)(lVar22 + 0x10);
          iVar1 = *piVar14;
          plVar10 = (long *)(ulong)(uint)piVar14[1];
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x530) = plVar10;
          *plVar10 = unaff_x22;
          plVar10[1] = (long)FUN_101ba8dec;
                    /* WARNING: Could not recover jumptable at 0x000101baa2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar1 + (long)piVar14))
                    (lVar12,uVar16,*(undefined8 *)(unaff_x22 + 0x328),
                     *(undefined8 *)(unaff_x22 + 0x330),uVar11,*(undefined8 *)(unaff_x22 + 0x370),
                     uVar17,lVar22);
          return;
        }
        func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x4c0));
        func_0x000107c614ac(puVar8);
        uVar15 = *(ulong *)(unaff_x22 + 0x4b8);
LAB_101ba99e0:
        lVar22 = *(long *)(unaff_x22 + 0x4a8);
      }
      else {
        puVar7 = puVar6;
        func_0x000107c5b67c();
        func_0x000107c61180();
        if (puVar7 == (undefined1 *)0x0) {
LAB_101ba9f0c:
          func_0x000101b9d5ac();
          puVar8 = &UNK_1106c31f8;
          func_0x000107c613f8(&UNK_1106c31f8,puVar7,0,0);
          *puVar7 = 0x3b;
          func_0x000107c61654();
          func_0x000107c61170(puVar6);
          goto LAB_101ba9f78;
        }
        lStack_70 = 0;
        plVar10 = &lStack_70;
        func_0x000107c5fc50();
        func_0x000107c61170();
        lVar22 = lStack_70;
        if (lStack_70 == 0) goto LAB_101ba9f0c;
        puVar7 = puVar6;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        puVar23 = (undefined1 *)0x0;
        plVar25 = (long *)0x0;
        if (puVar7 != (undefined1 *)0x0) {
          puVar23 = puVar7;
          func_0x000107c5faec();
          func_0x000107c61170(puVar7);
          plVar25 = plVar10;
        }
        uVar13 = *(ulong *)(unaff_x22 + 0x4b8);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x498);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x490);
        puVar7 = puVar6;
        func_0x000107c3fd50();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        *(long *)(unaff_x22 + 0x60) = lVar12;
        *(ulong *)(unaff_x22 + 0x68) = uVar15;
        *(undefined1 *)(unaff_x22 + 0x70) = 0;
        *(undefined8 *)(unaff_x22 + 0x78) = 0;
        *(long *)(unaff_x22 + 0x80) = lVar22;
        *(undefined8 *)(unaff_x22 + 0x88) = uVar16;
        *(undefined8 *)(unaff_x22 + 0x90) = uVar17;
        *(undefined1 **)(unaff_x22 + 0x98) = puVar23;
        *(long **)(unaff_x22 + 0xa0) = plVar25;
        *(undefined1 **)(unaff_x22 + 0xa8) = puVar7;
        func_0x000107c61434(uVar17);
        func_0x000107c61170(puVar19);
        FUN_101b9d4cc(unaff_x22 + 0x60,unaff_x22 + 0xb0);
        func_0x000107c61558();
        uVar15 = *(ulong *)(unaff_x22 + 0x4b8);
        uVar5 = uVar15;
        if ((uVar13 & 1) == 0) {
          uVar5 = 0;
          FUN_101b9bfcc(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
        }
        uVar13 = *(ulong *)(uVar5 + 0x10);
        uVar15 = uVar5;
        if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar13) {
          uVar15 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
          FUN_101b9bfcc(uVar15,uVar13 + 1,1,uVar5);
        }
        uVar16 = *(undefined8 *)(unaff_x22 + 0x4c0);
        lVar12 = *(long *)(unaff_x22 + 0x4a8);
        *(ulong *)(uVar15 + 0x10) = uVar13 + 1;
        lVar22 = uVar15 + uVar13 * 0x50;
        uVar17 = *(undefined8 *)(unaff_x22 + 0x60);
        *(undefined8 *)(lVar22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x68);
        *(undefined8 *)(lVar22 + 0x20) = uVar17;
        uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x70);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x80);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar31 = *(undefined8 *)(unaff_x22 + 0xa8);
        uVar30 = *(undefined8 *)(unaff_x22 + 0xa0);
        *(undefined8 *)(lVar22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x98);
        *(undefined8 *)(lVar22 + 0x50) = uVar29;
        *(undefined8 *)(lVar22 + 0x68) = uVar31;
        *(undefined8 *)(lVar22 + 0x60) = uVar30;
        *(undefined8 *)(lVar22 + 0x38) = uVar11;
        *(undefined8 *)(lVar22 + 0x30) = uVar17;
        *(undefined8 *)(lVar22 + 0x48) = uVar28;
        *(undefined8 *)(lVar22 + 0x40) = uVar26;
        func_0x000107c61170(uVar16);
        func_0x000101b9d508(unaff_x22 + 0x60);
        lVar22 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ba9f0c);
          (*pcVar4)();
        }
      }
LAB_101ba99e4:
      uVar5 = *(ulong *)(unaff_x22 + 0x4c8);
    } while (uVar5 != *(ulong *)(unaff_x22 + 0x4a0));
  } while( true );
}



/* Entry: 101baa320; end: 101baa453;  */

undefined * FUN_101baa320(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101b9b834(0,lVar5,0);
  puVar2 = PTR___sypN_11034f1a8;
  puVar1 = puStack_68;
  while( true ) {
    if (lVar5 == 0) {
      return puVar1;
    }
    param_1 = param_1 + 0x20;
    puStack_68 = puVar1;
    func_0x0001000bb420(param_1,auStack_88);
    func_0x000100102924(auStack_88,auStack_a8);
    uVar3 = 0;
    FUN_101bacea8(0,0x112d63638,&PTR_PTR_1126af4d0);
    uVar4 = 0;
    func_0x000107c6147c(&uStack_b0,auStack_a8,puVar2 + 8,uVar3,6);
    uVar3 = uStack_b0;
    if ((uVar4 & 1) == 0) break;
    uVar4 = *(ulong *)(puVar1 + 0x10);
    puStack_68 = puVar1;
    if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar4) {
      func_0x000101b9b834(1 < *(ulong *)(puVar1 + 0x18),uVar4 + 1,1);
    }
    *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
    *(undefined8 *)(puStack_68 + uVar4 * 8 + 0x20) = uVar3;
    lVar5 = lVar5 + -1;
    puVar1 = puStack_68;
  }
  func_0x000107c61574(puVar1);
  return (undefined *)0x0;
}



/* Entry: 101baa454; end: 101baa46b;  */

void FUN_101baa454(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101baa46c,0,0);
  return;
}



/* Entry: 101baa46c; end: 101baa8b7;  */

void FUN_101baa46c(undefined8 param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long unaff_x22;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined *puStack_70;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar16 = *(long *)(unaff_x22 + 0xb0);
  lVar17 = *(long *)(lVar16 + 0x10);
  if (lVar17 != 0) {
    lVar21 = 0;
    do {
      puVar1 = (ulong *)(lVar16 + 0x20 + lVar21 * 0x20);
      uVar14 = *puVar1;
      uVar2 = puVar1[1];
      uVar20 = puVar1[3];
      uVar23 = uVar14 & 0xffffffffffffff8;
      if (uVar14 >> 0x3e == 0) {
        uVar18 = *(ulong *)(uVar23 + 0x10);
      }
      else {
        uVar18 = uVar23;
        if (0x7fffffffffffffff < uVar14) {
          uVar18 = uVar14;
        }
        func_0x000107c60480();
      }
      func_0x000107c61434(uVar14);
      func_0x000107c61434(uVar2);
      func_0x000107c61434(uVar20);
      if (uVar18 == 0) {
        puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
        uVar8 = param_2;
      }
      else {
        puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
        uVar7 = 0;
        do {
          while( true ) {
            if ((uVar14 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar23 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101baa8b0);
                (*pcVar4)();
              }
              uVar5 = *(ulong *)(uVar14 + uVar7 * 8 + 0x20);
              func_0x000107c61174();
              uVar8 = param_2;
            }
            else {
              uVar5 = uVar7;
              uVar8 = uVar14;
              func_0x000101b9be90();
            }
            if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101baa8ac);
              (*pcVar4)();
            }
            uVar22 = uVar7 + 1;
            func_0x000107c61174();
            uVar6 = uVar5;
            func_0x000107c4a77c();
            func_0x000107c61180();
            if (uVar6 == 0) break;
            uVar7 = uVar6;
            func_0x000107c5faec();
            param_2 = uVar8;
            func_0x000107c61170(uVar6);
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar5);
            puVar11 = puStack_70;
            func_0x000107c61558();
            if (((ulong)puVar11 & 1) == 0) {
              param_2 = *(long *)(puStack_70 + 0x10) + 1;
              puStack_70 = (undefined *)0x0;
              func_0x0001000d182c(0,param_2,1);
            }
            uVar6 = *(ulong *)(puStack_70 + 0x10);
            uVar5 = uVar6 + 1;
            if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar6) {
              puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puStack_70 + 0x18));
              param_2 = uVar5;
              func_0x0001000d182c(puVar11,uVar5,1,puStack_70);
              puStack_70 = puVar11;
            }
            *(ulong *)(puStack_70 + 0x10) = uVar5;
            *(ulong *)(puStack_70 + uVar6 * 0x10 + 0x20) = uVar7;
            *(ulong *)(puStack_70 + uVar6 * 0x10 + 0x28) = uVar8;
            uVar8 = param_2;
            uVar7 = uVar22;
            if (uVar22 == uVar18) goto LAB_101baa6a0;
          }
          func_0x000107c61170(uVar5);
          func_0x000107c61170(uVar5);
          param_2 = uVar8;
          uVar7 = uVar7 + 1;
        } while (uVar22 != uVar18);
      }
LAB_101baa6a0:
      uVar23 = uVar2 & 0xffffffffffffff8;
      if (uVar2 >> 0x3e == 0) {
        uVar18 = *(ulong *)(uVar23 + 0x10);
        param_2 = uVar8;
        puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar18 = uVar23;
        if (0x7fffffffffffffff < uVar2) {
          uVar18 = uVar2;
        }
        func_0x000107c60480();
        param_2 = uVar8;
        puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar11;
      if (uVar18 != 0) {
        uVar7 = param_2;
        uVar5 = 0;
        do {
          while( true ) {
            if ((uVar2 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar23 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101baa8b8);
                (*pcVar4)();
              }
              uVar8 = *(ulong *)(uVar2 + uVar5 * 8 + 0x20);
              func_0x000107c61174();
              param_2 = uVar7;
            }
            else {
              uVar8 = uVar5;
              param_2 = uVar2;
              FUN_101b9be7c();
            }
            if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101baa8b4);
              (*pcVar4)();
            }
            uVar22 = uVar5 + 1;
            func_0x000107c61174();
            uVar6 = uVar8;
            func_0x000107c4a77c();
            func_0x000107c61180();
            if (uVar6 == 0) break;
            uVar5 = uVar6;
            func_0x000107c5faec();
            uVar7 = param_2;
            func_0x000107c61170(uVar6);
            func_0x000107c61170(uVar8);
            func_0x000107c61170(uVar8);
            puVar9 = puVar11;
            func_0x000107c61558();
            puVar10 = puVar11;
            if (((ulong)puVar9 & 1) == 0) {
              uVar7 = *(long *)(puVar11 + 0x10) + 1;
              puVar10 = (undefined *)0x0;
              func_0x0001000d182c(0,uVar7,1,puVar11);
            }
            uVar6 = *(ulong *)(puVar10 + 0x10);
            uVar8 = uVar6 + 1;
            puVar11 = puVar10;
            if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar6) {
              puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
              uVar7 = uVar8;
              func_0x0001000d182c(puVar11,uVar8,1,puVar10);
            }
            *(ulong *)(puVar11 + 0x10) = uVar8;
            *(ulong *)(puVar11 + uVar6 * 0x10 + 0x20) = uVar5;
            *(ulong *)(puVar11 + uVar6 * 0x10 + 0x28) = param_2;
            param_2 = uVar7;
            uVar5 = uVar22;
            if (uVar22 == uVar18) goto LAB_101baa4c4;
          }
          func_0x000107c61170(uVar8);
          func_0x000107c61170(uVar8);
          uVar7 = param_2;
          uVar5 = uVar5 + 1;
        } while (uVar22 != uVar18);
      }
LAB_101baa4c4:
      lVar21 = lVar21 + 1;
      func_0x000107c61434(puStack_70);
      func_0x00010109a32c(puVar11);
      func_0x000107c6142c(uVar14);
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(uVar20);
      func_0x000107c6142c(puStack_70);
      func_0x00010109a32c(puStack_70);
    } while (lVar21 != lVar17);
  }
  *(undefined **)(unaff_x22 + 0xc0) = puVar3;
  plVar19 = *(long **)(*(long *)(unaff_x22 + 0xb8) + 0x70);
  uVar12 = 0x112e06e98;
  func_0x0001000285a8(0x112e06e98,&UNK_10d9dade8);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar12;
  plVar13 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar13;
  plVar15 = plVar13;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0xd0) = plVar15;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_101baa8b8;
  plVar13[0xb] = (long)plVar15;
  plVar13[0xc] = unaff_x22 + 0xa0;
  plVar13[9] = unaff_x22 + 0x98;
  plVar13[10] = (long)&UNK_1107a6f08;
  plVar13[8] = unaff_x22 + 0x90;
  lVar17 = *plVar19;
  plVar13[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar16 = 0x10;
  _swift_task_alloc();
  plVar13[0xe] = lVar16;
  lVar16 = *(long *)(lVar17 + 0x50);
  plVar13[0xf] = lVar16;
  lVar16 = *(long *)(lVar16 + -8);
  plVar13[0x10] = lVar16;
  uVar14 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar13[0x11] = uVar14;
  plVar15 = (long *)0x70;
  _swift_task_alloc();
  plVar13[0x12] = (long)plVar15;
  *plVar15 = (long)plVar13;
  plVar15[1] = (long)&UNK_104876614;
  plVar15[5] = uVar14;
  plVar15[6] = (long)plVar19;
  lVar17 = *(long *)(*plVar19 + 0x50);
  plVar15[7] = lVar17;
  lVar16 = 0;
  __sSqMa(0,lVar17);
  plVar15[8] = lVar16;
  lVar16 = *(long *)(lVar16 + -8);
  plVar15[9] = lVar16;
  uVar14 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar15[10] = uVar14;
  lVar16 = *(long *)(lVar17 + -8);
  plVar15[0xb] = lVar16;
  uVar14 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar15[0xc] = uVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}


