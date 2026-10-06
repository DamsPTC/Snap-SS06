/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103764fb8; end: 103765277;  */

void FUN_103764fb8(long param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  long unaff_x21;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 != 0) {
    FUN_103790700(0,lVar15,0);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x78);
    puVar17 = (undefined1 *)(param_1 + 0x48);
    do {
      uVar5 = *(undefined8 *)(puVar17 + -0x28);
      lVar1 = *(long *)(puVar17 + -0x20);
      uVar14 = *(ulong *)(puVar17 + -0x18);
      uVar3 = puVar17[-0x10];
      uVar16 = *(undefined8 *)(puVar17 + -8);
      uVar2 = *puVar17;
      lVar13 = *(long *)(param_2 + 0x10);
      func_0x000107c61174();
      FUN_103765724(lVar1,uVar14,uVar3);
      uVar6 = uVar16;
      func_0x000107c61174();
      puVar18 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      if (lVar13 != 0) {
        func_0x000107c61434(param_2);
        lVar13 = lVar1;
        uVar9 = uVar14;
        FUN_10378de8c(lVar1,uVar14,uVar3);
        puVar18 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
        if ((uVar9 & 1) != 0) {
          puVar18 = *(undefined **)(*(long *)(param_2 + 0x38) + lVar13 * 8);
          func_0x000107c61434(puVar18);
        }
        func_0x000107c6142c(param_2);
      }
      func_0x0001000d224c(auStack_88);
      lVar13 = lStack_68;
      uVar11 = uStack_70;
      func_0x0001000a8868(auStack_88,uStack_70);
      uVar7 = uVar12;
      puVar10 = puVar18;
      (**(code **)(lVar13 + 8))();
      if (unaff_x21 != 0) {
        func_0x000107c61170(uVar5);
        func_0x00010376573c(lVar1,uVar14,uVar3);
        func_0x000107c6142c(puVar18);
        func_0x000107c61170(uVar6);
        func_0x0001000834e4(auStack_88);
        func_0x000107c61574(puVar4);
        return;
      }
      puVar8 = auStack_88;
      func_0x0001000834e4();
      if (((uint)uVar11 & 0xff) != 2) {
        func_0x000103765778();
        func_0x000107c613f8(&UNK_11068f608,puVar8,0,0);
        *puVar8 = uVar7;
        puVar8[1] = puVar10;
        *(byte *)(puVar8 + 2) = (byte)uVar11 | 0x40;
        func_0x000107c61654();
        func_0x000107c61170(uVar5);
        func_0x00010376573c(lVar1,uVar14,uVar3);
        func_0x000107c61574(puVar4);
        func_0x000107c6142c(puVar18);
        func_0x000107c61170(uVar6);
        return;
      }
      uVar9 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar9) {
        FUN_103790700(1 < *(ulong *)(puVar4 + 0x18),uVar9 + 1,1);
      }
      puVar17 = puVar17 + 0x30;
      *(ulong *)(puVar4 + 0x10) = uVar9 + 1;
      *(undefined8 *)(puVar4 + uVar9 * 0x40 + 0x20) = uVar5;
      *(long *)(puVar4 + uVar9 * 0x40 + 0x28) = lVar1;
      *(ulong *)(puVar4 + uVar9 * 0x40 + 0x30) = uVar14;
      puVar4[uVar9 * 0x40 + 0x38] = uVar3;
      *(undefined8 *)(puVar4 + uVar9 * 0x40 + 0x40) = uVar16;
      puVar4[uVar9 * 0x40 + 0x48] = uVar2;
      *(undefined **)(puVar4 + uVar9 * 0x40 + 0x50) = puVar18;
      *(undefined8 *)(puVar4 + uVar9 * 0x40 + 0x58) = uVar7;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}



/* Entry: 103765278; end: 1037654bb;  */

void FUN_103765278(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 in_x4;
  long *in_x5;
  undefined8 *in_x6;
  long unaff_x21;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  
  func_0x0001000d224c(auStack_90);
  func_0x0001000a8868(auStack_90,uStack_78);
  lVar5 = 0x112f90670;
  func_0x0001000285a8(0x112f90670,&UNK_10dc08bd0);
  func_0x000107c61534();
  *(undefined8 *)(lVar5 + 0x18) = 4;
  *(undefined8 *)(lVar5 + 0x10) = 2;
  *(undefined8 *)(lVar5 + 0x20) = 0x736469;
  *(undefined8 *)(lVar5 + 0x28) = 0xe300000000000000;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = *in_x5;
  lVar8 = *(long *)(lVar7 + 0x10);
  if (lVar8 != 0) {
    func_0x000107c61434(lVar7);
    func_0x000103790738(0,lVar8,0);
    puVar9 = (undefined8 *)(lVar7 + 0x28);
    do {
      uVar6 = puVar9[-1];
      uVar2 = *puVar9;
      uVar1 = *(ulong *)(puVar4 + 0x10);
      uVar3 = *(ulong *)(puVar4 + 0x18);
      func_0x000107c61434(uVar2);
      if (uVar3 >> 1 <= uVar1) {
        func_0x000103790738(1 < uVar3,uVar1 + 1,1);
      }
      puVar9 = puVar9 + 2;
      *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar4 + uVar1 * 0x18 + 0x20) = uVar6;
      *(undefined8 *)(puVar4 + uVar1 * 0x18 + 0x28) = uVar2;
      puVar4[uVar1 * 0x18 + 0x30] = 0;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    func_0x000107c6142c(lVar7);
  }
  uVar10 = (undefined1)uStack_78;
  *(undefined **)(lVar5 + 0x30) = puVar4;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined1 *)(lVar5 + 0x40) = 3;
  *(undefined8 *)(lVar5 + 0x48) = 0x6e65697069636572;
  *(undefined8 *)(lVar5 + 0x50) = 0xea00000000007374;
  *(undefined8 *)(lVar5 + 0x58) = *in_x6;
  *(undefined8 *)(lVar5 + 0x60) = 0;
  *(undefined1 *)(lVar5 + 0x68) = 4;
  func_0x000107c61434();
  lVar8 = lVar5;
  FUN_103796550();
  func_0x000107c61588(lVar5);
  uVar6 = 0x112f90678;
  func_0x0001000285a8(0x112f90678,&UNK_10dc08bd8);
  func_0x000107c61408((undefined8 *)(lVar5 + 0x20),2,uVar6);
  lVar5 = lVar8;
  (**(code **)(lStack_70 + 8))();
  func_0x000107c6142c(lVar8);
  if (unaff_x21 == 0) {
    *param_1 = in_x4;
    param_1[1] = lVar5;
    *(undefined1 *)(param_1 + 2) = uVar10;
  }
  func_0x0001000834e4(auStack_90);
  return;
}



/* Entry: 1037654bc; end: 103765507;  */

void FUN_1037654bc(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x5b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103765508;
  plVar1[0xb0] = unaff_x20;
  plVar1[0xaf] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103763ab4,0,0);
  return;
}



/* Entry: 103765508; end: 103765567;  */

void FUN_103765508(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103765564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103765568; end: 103765577;  */

void FUN_103765568(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000103765574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 103765578; end: 1037655ab;  */

undefined8 FUN_103765578(undefined8 param_1)

{
  (*(code *)(undefined *)0x10377d778)();
  return param_1;
}



/* Entry: 1037655ac; end: 103765723;  */

void FUN_1037655ac(ulong *param_1)

{
  bool bVar1;
  undefined *puVar2;
  double *pdVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  double *pdVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_98 [8];
  long lStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  uVar8 = *param_1;
  uVar6 = uVar8;
  func_0x000107c61558();
  if ((uVar6 & 1) == 0) {
    FUN_103766038();
  }
  uVar9 = *(ulong *)(uVar8 + 0x10);
  lStack_90 = uVar8 + 0x20;
  uVar6 = uVar9;
  uStack_88 = uVar9;
  func_0x000107c60574();
  if ((long)uVar6 < (long)uVar9) {
    puVar10 = (undefined *)(uVar9 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar9) {
      puVar2 = puVar10;
      func_0x000107c60380(puVar10,&UNK_110690d48);
      *(undefined **)(puVar2 + 0x10) = puVar10;
    }
    puStack_80 = puVar2 + 0x20;
    puStack_78 = puVar10;
    FUN_1037657dc(&puStack_80,auStack_98,&lStack_90,uVar6);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if ((uVar9 != 0) && (uVar9 != 1)) {
    pdVar7 = (double *)(uVar8 + 0x58);
    lVar4 = -1;
    uVar6 = 1;
    lVar5 = lVar4;
    pdVar3 = pdVar7;
LAB_103765658:
    do {
      if (*pdVar7 < pdVar7[8]) {
        dVar12 = pdVar7[2];
        dVar11 = pdVar7[1];
        dVar14 = pdVar7[4];
        dVar13 = pdVar7[3];
        dVar16 = pdVar7[6];
        dVar15 = pdVar7[5];
        dVar18 = pdVar7[8];
        dVar17 = pdVar7[7];
        pdVar7[2] = pdVar7[-6];
        pdVar7[1] = pdVar7[-7];
        pdVar7[4] = pdVar7[-4];
        pdVar7[3] = pdVar7[-5];
        pdVar7[6] = pdVar7[-2];
        pdVar7[5] = pdVar7[-3];
        pdVar7[8] = *pdVar7;
        pdVar7[7] = pdVar7[-1];
        pdVar7[-2] = dVar16;
        pdVar7[-3] = dVar15;
        *pdVar7 = dVar18;
        pdVar7[-1] = dVar17;
        pdVar7[-6] = dVar12;
        pdVar7[-7] = dVar11;
        pdVar7[-4] = dVar14;
        pdVar7[-5] = dVar13;
        pdVar7 = pdVar7 + -8;
        bVar1 = lVar4 != -1;
        lVar4 = lVar4 + 1;
        if (bVar1) goto LAB_103765658;
      }
      uVar6 = uVar6 + 1;
      pdVar7 = pdVar3 + 8;
      lVar4 = lVar5 + -1;
      lVar5 = lVar4;
      pdVar3 = pdVar7;
    } while (uVar6 != uVar9);
  }
  *param_1 = uVar8;
  return;
}



/* Entry: 103765724; end: 103765753;  */

void FUN_103765724(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 103765754; end: 1037657db;  */

void FUN_103765754(void)

{
  long unaff_x20;
  
  FUN_103765278(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1037657dc; end: 103765b97;  */

void FUN_1037657dc(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  ulong *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  double *pdVar18;
  long unaff_x21;
  ulong *puVar19;
  ulong uVar20;
  long lVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  double dVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  double dVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  double dVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar8 = param_3[1];
  if (0 < lVar8) {
    lVar10 = 0;
    do {
      puVar7 = puStack_58;
      lVar21 = lVar10 + 1;
      if (lVar21 < lVar8) {
        lVar11 = *param_3;
        dVar22 = *(double *)(lVar11 + lVar21 * 0x40 + 0x38);
        lVar21 = lVar11 + lVar10 * 0x40;
        dVar25 = *(double *)(lVar21 + 0x38);
        lVar16 = lVar10 + 2;
        pdVar18 = (double *)(lVar21 + 0xb8);
        dVar28 = dVar22;
        do {
          lVar17 = lVar16;
          lVar21 = lVar8;
          if (lVar8 == lVar17) break;
          dVar31 = *pdVar18;
          bVar4 = dVar31 <= dVar28;
          lVar16 = lVar17 + 1;
          pdVar18 = pdVar18 + 8;
          dVar28 = dVar31;
          lVar21 = lVar17;
        } while (dVar25 < dVar22 != bVar4);
        if (dVar25 < dVar22) {
          if (lVar21 < lVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103765b6c);
            (*pcVar3)();
          }
          if (lVar10 < lVar21) {
            puVar14 = (undefined8 *)(lVar11 + lVar10 * 0x40);
            lVar16 = lVar21;
            lVar8 = lVar10;
            puVar15 = (undefined8 *)(lVar11 + lVar21 * 0x40);
            do {
              puVar9 = puVar15 + -8;
              lVar16 = lVar16 + -1;
              if (lVar8 != lVar16) {
                if (lVar11 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x103765b8c);
                  (*pcVar3)();
                }
                uVar27 = puVar14[5];
                uVar26 = puVar14[4];
                uVar24 = puVar14[7];
                uVar23 = puVar14[6];
                uVar33 = puVar14[1];
                uVar32 = *puVar14;
                uVar30 = puVar14[3];
                uVar29 = puVar14[2];
                uVar34 = puVar15[-4];
                uVar36 = puVar15[-1];
                uVar35 = puVar15[-2];
                uVar40 = puVar15[-7];
                uVar39 = *puVar9;
                uVar38 = puVar15[-5];
                uVar37 = puVar15[-6];
                puVar14[5] = puVar15[-3];
                puVar14[4] = uVar34;
                puVar14[7] = uVar36;
                puVar14[6] = uVar35;
                puVar14[1] = uVar40;
                *puVar14 = uVar39;
                puVar14[3] = uVar38;
                puVar14[2] = uVar37;
                puVar15[-7] = uVar33;
                *puVar9 = uVar32;
                puVar15[-5] = uVar30;
                puVar15[-6] = uVar29;
                puVar15[-3] = uVar27;
                puVar15[-4] = uVar26;
                puVar15[-1] = uVar24;
                puVar15[-2] = uVar23;
              }
              lVar8 = lVar8 + 1;
              puVar14 = puVar14 + 8;
              puVar15 = puVar9;
            } while (lVar8 < lVar16);
            lVar8 = param_3[1];
          }
        }
      }
      lVar16 = lVar21;
      if (lVar21 < lVar8) {
        if (SBORROW8(lVar21,lVar10)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103765b68);
          (*pcVar3)();
        }
        if (lVar21 - lVar10 < param_4) {
          if (SCARRY8(lVar10,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103765b70);
            (*pcVar3)();
          }
          lVar11 = lVar10 + param_4;
          if (lVar8 <= lVar10 + param_4) {
            lVar11 = lVar8;
          }
          if (lVar11 < lVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103765b74);
            (*pcVar3)();
          }
          if (lVar21 != lVar11) {
            lVar12 = *param_3;
            puVar14 = (undefined8 *)(lVar12 + lVar21 * 0x40);
            lVar8 = lVar10 - lVar21;
            lVar17 = lVar8;
            puVar15 = puVar14;
LAB_103765978:
            do {
              if ((double)puVar14[-1] < (double)puVar14[7]) {
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x103765b78);
                  (*pcVar3)();
                }
                puVar9 = puVar14 + -8;
                uVar27 = puVar14[5];
                uVar26 = puVar14[4];
                uVar24 = puVar14[7];
                uVar23 = puVar14[6];
                uVar33 = puVar14[1];
                uVar32 = *puVar14;
                uVar30 = puVar14[3];
                uVar29 = puVar14[2];
                puVar14[1] = puVar14[-7];
                *puVar14 = *puVar9;
                puVar14[3] = puVar14[-5];
                puVar14[2] = puVar14[-6];
                puVar14[5] = puVar14[-3];
                puVar14[4] = puVar14[-4];
                puVar14[7] = puVar14[-1];
                puVar14[6] = puVar14[-2];
                puVar14[-7] = uVar33;
                *puVar9 = uVar32;
                puVar14[-5] = uVar30;
                puVar14[-6] = uVar29;
                puVar14[-3] = uVar27;
                puVar14[-4] = uVar26;
                puVar14[-1] = uVar24;
                puVar14[-2] = uVar23;
                bVar4 = lVar8 != -1;
                lVar8 = lVar8 + 1;
                puVar14 = puVar9;
                if (bVar4) goto LAB_103765978;
              }
              lVar21 = lVar21 + 1;
              puVar14 = puVar15 + 8;
              lVar8 = lVar17 + -1;
              lVar16 = lVar11;
              lVar17 = lVar8;
              puVar15 = puVar14;
            } while (lVar21 != lVar11);
          }
        }
      }
      if (lVar16 < lVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103765b58);
        (*pcVar3)();
      }
      puVar5 = puStack_58;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar20 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar20) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x0001000a91e0(puVar7,uVar20 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar20 + 1;
      *(long *)(puVar7 + uVar20 * 0x10 + 0x20) = lVar10;
      *(long *)(puVar7 + uVar20 * 0x10 + 0x28) = lVar16;
      puStack_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103765b90);
        (*pcVar3)();
      }
      FUN_103765b98(&puStack_58,*param_1,param_3);
      puVar7 = puStack_58;
      if (unaff_x21 != 0) goto LAB_103765b28;
      lVar8 = param_3[1];
      lVar10 = lVar16;
    } while (lVar16 < lVar8);
  }
  puVar7 = puStack_58;
  lVar8 = *param_1;
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103765b98);
    (*pcVar3)();
  }
  puVar5 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar5 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar19 = (ulong *)(puVar7 + 0x10);
  uVar20 = *puVar19;
  while (1 < uVar20) {
    lVar10 = *param_3;
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103765b94);
      (*pcVar3)();
    }
    plVar1 = (long *)(puVar7 + uVar20 * 0x10);
    lVar21 = *plVar1;
    puVar2 = puVar19 + uVar20 * 2;
    uVar13 = puVar2[1];
    FUN_103765e08(lVar10 + lVar21 * 0x40,lVar10 + *puVar2 * 0x40,lVar10 + uVar13 * 0x40,lVar8);
    if (unaff_x21 != 0) break;
    if ((long)uVar13 < lVar21) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103765b5c);
      (*pcVar3)();
    }
    if (*puVar19 <= uVar20 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103765b60);
      (*pcVar3)();
    }
    *plVar1 = lVar21;
    plVar1[1] = uVar13;
    uVar13 = *puVar19;
    lVar10 = uVar13 - uVar20;
    if (uVar13 < uVar20) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103765b64);
      (*pcVar3)();
    }
    uVar20 = uVar13 - 1;
    func_0x000107c610b8(puVar2,puVar2 + 2,lVar10 * 0x10);
    *puVar19 = uVar20;
  }
LAB_103765b28:
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 103765b98; end: 103765e07;  */

undefined8 FUN_103765b98(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *param_1;
  if (1 < *(ulong *)(uVar10 + 0x10)) {
    uVar14 = uVar10;
    func_0x000107c61558();
    if ((uVar14 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar10;
    lVar1 = uVar10 + 0x20;
    uVar14 = *(ulong *)(uVar10 + 0x10);
    do {
      uVar12 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar10 + 0x28),*(long *)(uVar10 + 0x20));
          lVar8 = *(long *)(uVar10 + 0x28) - *(long *)(uVar10 + 0x20);
          goto LAB_103765c70;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103765de8);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_103765cd0:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103765dd8);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar12 * 0x10);
        lVar8 = *plVar2;
        lVar11 = plVar2[1];
        if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103765de0);
          (*pcVar6)();
        }
        uVar13 = uVar12;
        if (lVar11 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103765dc0);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103765dc4);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar11 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar11;
        if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103765dcc);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103765dd4);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_103765c70:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103765dc8);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar10 + uVar14 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103765dd0);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103765ddc);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103765de4);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_103765cd0;
          uVar13 = uVar14 - 2;
          if (lVar5 <= lVar8) {
            uVar13 = uVar12;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar11 = plVar2[1];
          if (SBORROW8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103765dec);
            (*pcVar6)();
          }
          uVar13 = uVar14 - 2;
          if (lVar11 - lVar9 <= lVar8) {
            uVar13 = uVar12;
          }
        }
      }
      uVar12 = uVar13 - 1;
      if (uVar14 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103765db0);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar10;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103765e08);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar12 * 0x10);
      lVar11 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar13 * 0x10);
      lVar9 = plVar3[1];
      FUN_103765e08(lVar8 + lVar11 * 0x40,lVar8 + *plVar3 * 0x40,lVar8 + lVar9 * 0x40,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103765db4);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103765db8);
        (*pcVar6)();
      }
      *plVar2 = lVar11;
      plVar2[1] = lVar9;
      uVar12 = *(ulong *)(uVar10 + 0x10);
      if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103765dbc);
        (*pcVar6)();
      }
      uVar14 = uVar12 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar14 - uVar13) * 0x10);
      *(ulong *)(uVar10 + 0x10) = uVar14;
    } while (2 < uVar12);
    *param_1 = uVar10;
  }
  return 1;
}



/* Entry: 103765e08; end: 103766037;  */

undefined8
FUN_103765e08(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar5;
  
  lVar9 = (long)param_2 - (long)param_1;
  lVar2 = lVar9 + 0x3f;
  if (-1 < lVar9) {
    lVar2 = lVar9;
  }
  lVar2 = lVar2 >> 6;
  lVar10 = (long)param_3 - (long)param_2;
  lVar6 = lVar10 + 0x3f;
  if (-1 < lVar10) {
    lVar6 = lVar10;
  }
  lVar6 = lVar6 >> 6;
  if (lVar2 < lVar6) {
    if ((param_4 < param_1) || ((param_1 + lVar2 * 8 <= param_4 || (param_4 != param_1)))) {
      func_0x000107c610b8(param_4,param_1,lVar2 << 6);
    }
    puVar5 = param_4 + lVar2 * 8;
    puVar7 = param_1;
    if (0x3f < lVar9) {
      do {
        if (param_3 <= param_2) break;
        if ((double)param_2[7] <= (double)param_4[7]) {
          puVar8 = param_4 + 8;
          puVar3 = param_4;
        }
        else {
          puVar8 = param_4;
          puVar3 = param_2;
          param_2 = param_2 + 8;
        }
        param_4 = puVar8;
        if (puVar7 != puVar3) {
          uVar12 = puVar3[1];
          uVar11 = *puVar3;
          uVar14 = puVar3[3];
          uVar13 = puVar3[2];
          uVar15 = puVar3[4];
          uVar17 = puVar3[7];
          uVar16 = puVar3[6];
          puVar7[5] = puVar3[5];
          puVar7[4] = uVar15;
          puVar7[7] = uVar17;
          puVar7[6] = uVar16;
          puVar7[1] = uVar12;
          *puVar7 = uVar11;
          puVar7[3] = uVar14;
          puVar7[2] = uVar13;
        }
        puVar7 = puVar7 + 8;
      } while (param_4 < puVar5);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 * 8 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 6);
    }
    puVar3 = param_4 + lVar6 * 8;
    puVar5 = puVar3;
    puVar7 = param_2;
    if ((param_1 < param_2) && (0x3f < lVar10)) {
      do {
        while (puVar8 = param_3 + -8, (double)param_2[-1] < (double)puVar3[-1]) {
          puVar7 = param_2 + -8;
          if (param_3 != param_2) {
            uVar12 = param_2[-7];
            uVar11 = *puVar7;
            uVar14 = param_2[-5];
            uVar13 = param_2[-6];
            uVar15 = param_2[-4];
            uVar17 = param_2[-1];
            uVar16 = param_2[-2];
            param_3[-3] = param_2[-3];
            param_3[-4] = uVar15;
            param_3[-1] = uVar17;
            param_3[-2] = uVar16;
            param_3[-7] = uVar12;
            *puVar8 = uVar11;
            param_3[-5] = uVar14;
            param_3[-6] = uVar13;
          }
          puVar5 = puVar3;
          if ((puVar7 <= param_1) || (param_3 = puVar8, param_2 = puVar7, puVar3 <= param_4))
          goto LAB_103765fdc;
        }
        puVar5 = puVar3 + -8;
        if (param_3 != puVar3) {
          uVar12 = puVar3[-7];
          uVar11 = *puVar5;
          uVar14 = puVar3[-5];
          uVar13 = puVar3[-6];
          uVar15 = puVar3[-4];
          uVar17 = puVar3[-1];
          uVar16 = puVar3[-2];
          param_3[-3] = puVar3[-3];
          param_3[-4] = uVar15;
          param_3[-1] = uVar17;
          param_3[-2] = uVar16;
          param_3[-7] = uVar12;
          *puVar8 = uVar11;
          param_3[-5] = uVar14;
          param_3[-6] = uVar13;
        }
        puVar3 = puVar5;
        puVar7 = param_2;
        param_3 = puVar8;
      } while (param_4 < puVar5);
    }
  }
LAB_103765fdc:
  uVar4 = (long)puVar5 - (long)param_4;
  uVar1 = uVar4 + 0x3f;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((puVar7 != param_4) ||
     ((undefined8 *)((long)param_4 + (uVar1 & 0xffffffffffffffc0)) <= puVar7)) {
    func_0x000107c610b8(puVar7,param_4,((long)uVar1 >> 6) << 6);
  }
  return 1;
}



/* Entry: 103766038; end: 10376604b;  */

/* WARNING: Removing unreachable block (ram,0x0001037907e0) */
/* WARNING: Removing unreachable block (ram,0x0001037907f0) */
/* WARNING: Removing unreachable block (ram,0x0001037908c8) */
/* WARNING: Removing unreachable block (ram,0x0001037907fc) */
/* WARNING: Removing unreachable block (ram,0x000103790804) */
/* WARNING: Removing unreachable block (ram,0x00010379087c) */
/* WARNING: Removing unreachable block (ram,0x000103790884) */
/* WARNING: Removing unreachable block (ram,0x000103790888) */
/* WARNING: Removing unreachable block (ram,0x00010379088c) */
/* WARNING: Removing unreachable block (ram,0x000103790894) */

undefined * FUN_103766038(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112f90600;
    func_0x0001000285a8(0x112f90600,&UNK_10dc08ae0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar5;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 6) << 1;
  }
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar5,&UNK_110690d48);
  func_0x000107c61574(param_1);
  return puVar3;
}



/* Entry: 10376604c; end: 103766073;  */

void FUN_10376604c(undefined8 *param_1)

{
  FUN_103766074(*param_1,param_1[1],*(undefined1 *)(param_1 + 2),&SUB_101edeb30);
  return;
}



/* Entry: 103766074; end: 1037660a3;  */

void FUN_103766074(undefined8 param_1,undefined8 param_2,uint param_3,code *UNRECOVERED_JUMPTABLE_00
                  )

{
  uint uVar1;
  
  uVar1 = param_3 >> 6 & 3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      param_3 = param_3 & 0x3f;
    }
                    /* WARNING: Could not recover jumptable at 0x00010376608c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_3);
    return;
  }
  if (uVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010376609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_3 & 0x3f);
    return;
  }
  return;
}



/* Entry: 1037660a4; end: 103766157;  */

undefined8 * FUN_1037660a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_103766074(uVar1,uVar2,uVar3,&SUB_101edf31c);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 103766158; end: 1037661a3;  */

undefined8 * FUN_103766158(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_103766074(uVar3,uVar4,uVar2,&SUB_101edeb30);
  return param_1;
}



/* Entry: 1037661a4; end: 10376628b;  */

int FUN_1037661a4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x1d < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0x1e;
  }
  uVar1 = (*(byte *)(param_1 + 4) >> 1 & 0x1c | (uint)(*(byte *)(param_1 + 4) >> 6)) ^ 0x1f;
  if (0x1c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10376628c; end: 1037662af;  */

void FUN_10376628c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000103765778();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1037662b0; end: 1037662bf;  */

undefined8 * FUN_1037662b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_103766074(uVar1,uVar2,uVar3,&SUB_101edf31c);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 1037662c0; end: 10376635f;  */

void FUN_1037662c0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 103766360; end: 10376637f;  */

void FUN_103766360(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103766380; end: 1037664b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103766380(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  puVar2 = PTR_PTR_1126ad6e0;
  func_0x000107c610f8(PTR_PTR_1126ad6e0);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c48254(puVar2);
  func_0x000107c61170(param_1);
  puVar1 = (undefined8 *)(lVar5 + _DAT_112fe2258);
  lVar3 = puVar1[1];
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
    func_0x000107c61434(lVar3);
    func_0x000107c5fadc(uVar4,lVar3);
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c53820(puVar2);
  func_0x000107c61170(uVar4);
  puVar1 = (undefined8 *)(lVar5 + _DAT_112fe2250);
  lVar3 = puVar1[1];
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
    func_0x000107c61434(lVar3);
    func_0x000107c5fadc(uVar4,lVar3);
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c59564(puVar2);
  func_0x000107c61170(uVar4);
  return puVar2;
}



/* Entry: 1037664b4; end: 103766517;  */

void FUN_1037664b4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x260) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 600) = param_1;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x268) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x270) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x278) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103766518,0,0);
  return;
}



/* Entry: 103766518; end: 1037667db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103766518(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x22;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar10 = 0x6e776f6e6b6e75;
  lVar11 = *(long *)(unaff_x22 + 0x260);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x280) = param_1;
  func_0x000107c61428();
  uVar4 = *param_1;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000017;
  func_0x000100029b28(0xd000000000000017,0x800000010f163a20);
  *(undefined8 *)(unaff_x22 + 0x288) = uVar5;
  func_0x000107c61170(uVar4);
  func_0x0001000d224c(unaff_x22 + 0x1e0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x200);
  lVar6 = unaff_x22 + 0x1e0;
  uVar8 = uVar4;
  func_0x0001000a8868(lVar6);
  lVar11 = *(long *)(lVar11 + 0x10);
  uVar2 = *(uint *)(lVar11 + _DAT_112fe2248);
  if ((char)((long *)(lVar11 + _DAT_112fe2270))[1] == '\x01') {
    uVar13 = 0xe700000000000000;
  }
  else {
    lVar12 = *(long *)(lVar11 + _DAT_112fe2270);
    func_0x000106c97fd0();
    func_0x0001008cc2b4();
    func_0x000107c61180();
    if (lVar12 == 0) {
      uVar13 = 0xe700000000000000;
    }
    else {
      lVar10 = lVar12;
      func_0x000107c5faec();
      func_0x000107c61170(lVar12);
      uVar13 = uVar8;
      func_0x000107c5fb1c();
      func_0x000107c6142c(uVar8);
    }
  }
  if (4 < uVar2) {
    uVar2 = 5;
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0x278);
  lVar12 = *(long *)(unaff_x22 + 0x270);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar9 = *(undefined8 *)(unaff_x22 + 600);
  bVar3 = *(char *)(lVar11 + _DAT_112fe2278) == '\0';
  uVar8 = 0x65746e6573657270;
  if (bVar3) {
    uVar8 = 0x6e65736572706e75;
  }
  uVar1 = 0xe900000000000064;
  if (bVar3) {
    uVar1 = 0xeb00000000646574;
  }
  *(ulong *)(unaff_x22 + 0x150) = (ulong)uVar2;
  *(long *)(unaff_x22 + 0x158) = lVar10;
  *(undefined8 *)(unaff_x22 + 0x160) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x168) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x170) = uVar1;
  *(undefined1 *)(unaff_x22 + 0x178) = 0;
  FUN_10377d64c(unaff_x22 + 0x50,unaff_x22 + 0x150,uVar4,uVar5,lVar6);
  func_0x000107c6142c(uVar13);
  func_0x000107c6142c(uVar1);
  lVar6 = unaff_x22 + 0x1e0;
  func_0x000103768fc4();
  func_0x000107c5eec4(uVar14);
  func_0x000107c5eeac();
  *(long *)(unaff_x22 + 0x290) = lVar6;
  *(undefined8 *)(unaff_x22 + 0x298) = uVar4;
  (**(code **)(lVar12 + 8))(uVar14,uVar15);
  FUN_103766380(lVar6,uVar4);
  *(long *)(unaff_x22 + 0x2a0) = lVar6;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x250;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1037667dc;
  lVar10 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar10,1);
  puVar7 = &UNK_11068f7b8;
  func_0x000107c613fc(&UNK_11068f7b8,0x18,7);
  *(long *)(puVar7 + 0x10) = lVar10;
  FUN_103766b04(uVar9,lVar6,0x103768fe4,puVar7);
  func_0x000107c61574(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1037667dc; end: 103766847;  */

void FUN_1037667dc(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2a8) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x2b0) = *(undefined8 *)(lVar2 + 0x250);
    pcVar1 = FUN_103766848;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_103766958;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103766848; end: 103766957;  */

void FUN_103766848(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x288);
  puVar7 = *(undefined8 **)(unaff_x22 + 0x280);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x278);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x2a0));
  puVar2 = (undefined8 *)(unaff_x22 + 0xa8);
  func_0x0001000a8868(puVar2,*(undefined8 *)(unaff_x22 + 0xc0));
  uVar3 = puVar2[4];
  uVar9 = puVar2[7];
  uVar8 = puVar2[6];
  uVar13 = puVar2[1];
  uVar12 = *puVar2;
  uVar11 = puVar2[3];
  uVar10 = puVar2[2];
  *(undefined8 *)(unaff_x22 + 0x138) = puVar2[5];
  *(undefined8 *)(unaff_x22 + 0x130) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x148) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x118) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar10;
  FUN_10377cd3c(1);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar1 = *(long *)(unaff_x22 + 0x70);
  func_0x0001000a8868(unaff_x22 + 0x50,uVar3);
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x1d1) = *(undefined8 *)(unaff_x22 + 0x99);
  *(undefined8 *)(unaff_x22 + 0x1c9) = *(undefined8 *)(unaff_x22 + 0x91);
  (**(code **)(lVar1 + 8))(unaff_x22 + 0x1b0,uVar3,lVar1);
  func_0x000107c61428(puVar7,unaff_x22 + 0x238,0,0);
  uVar3 = *puVar7;
  func_0x000107c61174(uVar3);
  func_0x000100069b5c(uVar6);
  func_0x000107c61170(uVar3);
  FUN_103765578(unaff_x22 + 0x50);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000103766954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x290),uVar4,*(undefined8 *)(unaff_x22 + 0x2b0));
  return;
}



/* Entry: 103766958; end: 103766a63;  */

void FUN_103766958(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2a0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x288);
  puVar6 = *(undefined8 **)(unaff_x22 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x278);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x298));
  func_0x000107c61170(uVar4);
  puVar2 = (undefined8 *)(unaff_x22 + 0xa8);
  func_0x0001000a8868(puVar2,*(undefined8 *)(unaff_x22 + 0xc0));
  uVar4 = puVar2[4];
  uVar8 = puVar2[7];
  uVar7 = puVar2[6];
  uVar12 = puVar2[1];
  uVar11 = *puVar2;
  uVar10 = puVar2[3];
  uVar9 = puVar2[2];
  *(undefined8 *)(unaff_x22 + 0xf8) = puVar2[5];
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar12;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar9;
  FUN_10377cd3c(1);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar1 = *(long *)(unaff_x22 + 0x70);
  func_0x0001000a8868(unaff_x22 + 0x50,uVar4);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x1a1) = *(undefined8 *)(unaff_x22 + 0x99);
  *(undefined8 *)(unaff_x22 + 0x199) = *(undefined8 *)(unaff_x22 + 0x91);
  (**(code **)(lVar1 + 8))(unaff_x22 + 0x180,uVar4,lVar1);
  func_0x000107c61428(puVar6,unaff_x22 + 0x220,0,0);
  uVar4 = *puVar6;
  func_0x000107c61174(uVar4);
  func_0x000100069b5c(uVar5);
  func_0x000107c61170(uVar4);
  FUN_103765578(unaff_x22 + 0x50);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000103766a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103766a64; end: 103766b03;  */

void FUN_103766a64(undefined8 param_1,char param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_2 == '\x01') {
    FUN_103768b88();
    puVar1 = &UNK_11068f700;
    func_0x000107c613f8(&UNK_11068f700,param_1,0,0);
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_3,uVar2);
    return;
  }
  **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = param_1;
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_3);
  return;
}



/* Entry: 103766b04; end: 103766e4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103766b04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 *unaff_x20;
  long lVar13;
  undefined *puStack_120;
  long lStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
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
  long lStack_90;
  long lStack_88;
  undefined *puVar6;
  
  lVar13 = 0x6e776f6e6b6e75;
  puVar3 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000033;
  func_0x000100029b28(0xd000000000000033,0x800000010f163a40);
  func_0x000107c61170(uVar4);
  FUN_103768fec(unaff_x20 + 3,&uStack_f0);
  uVar4 = *unaff_x20;
  func_0x0001000d224c(&puStack_120);
  puVar6 = puStack_120;
  func_0x000107c614f0();
  bVar2 = (byte)puVar6;
  (**(code **)(lStack_118 + 0xa0))();
  func_0x000107c615e8(puStack_120);
  uVar1 = *(uint *)(unaff_x20[2] + _DAT_112fe2248);
  plVar10 = (long *)(unaff_x20[2] + _DAT_112fe2270);
  if ((char)plVar10[1] != '\x01') {
    lVar7 = *plVar10;
    func_0x000106c97fd0();
    func_0x0001008cc2b4();
    func_0x000107c61180();
    if (lVar7 != 0) {
      lVar13 = lVar7;
      lVar12 = lStack_118;
      func_0x000107c5faec();
      func_0x000107c61170(lVar7);
      lVar7 = lVar12;
      func_0x000107c5fb1c();
      func_0x000107c6142c(lVar12);
      goto LAB_103766c54;
    }
  }
  lVar7 = -0x1900000000000000;
LAB_103766c54:
  if (4 < uVar1) {
    uVar1 = 5;
  }
  lVar8 = 0;
  FUN_10376a344();
  lVar9 = lVar8;
  func_0x000107c610f8();
  lVar12 = _DAT_112f90700;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10379666c();
  *(undefined **)(lVar9 + lVar12) = puVar6;
  FUN_103768fec(&uStack_f0,lVar9 + _DAT_112f906d0);
  *(undefined8 **)(lVar9 + _DAT_112f906d8) = param_1;
  *(undefined8 *)(lVar9 + _DAT_112f906e0) = uVar4;
  *(byte *)(lVar9 + _DAT_112f906e8) = bVar2 & 1;
  *(char *)(lVar9 + _DAT_112f906f0) = (char)uVar1;
  plVar10 = (long *)(lVar9 + _DAT_112f906f8);
  *plVar10 = lVar13;
  plVar10[1] = lVar7;
  puVar6 = PTR_s_init_1125d9248;
  lStack_90 = lVar9;
  lStack_88 = lVar8;
  func_0x000107c61434(param_1);
  func_0x000107c6157c(uVar4);
  plVar10 = &lStack_90;
  func_0x000107c61154(plVar10,puVar6);
  func_0x000103768fc4(&uStack_f0);
  func_0x0001000d224c(&uStack_98);
  func_0x000103769030();
  puVar6 = &UNK_11068f7e0;
  func_0x000107c613fc(&UNK_11068f7e0,0x90,7);
  *(undefined8 **)(puVar6 + 0x10) = param_1;
  *(undefined8 *)(puVar6 + 0x18) = uVar5;
  *(undefined8 *)(puVar6 + 0x20) = param_3;
  *(undefined8 *)(puVar6 + 0x28) = param_4;
  *(undefined8 *)(puVar6 + 0x58) = uStack_c8;
  *(undefined8 *)(puVar6 + 0x50) = uStack_d0;
  *(undefined8 *)(puVar6 + 0x68) = uStack_b8;
  *(undefined8 *)(puVar6 + 0x60) = uStack_c0;
  *(undefined8 *)(puVar6 + 0x78) = uStack_a8;
  *(undefined8 *)(puVar6 + 0x70) = uStack_b0;
  *(undefined8 *)(puVar6 + 0x38) = uStack_e8;
  *(undefined8 *)(puVar6 + 0x30) = uStack_f0;
  *(undefined8 *)(puVar6 + 0x48) = uStack_d8;
  *(undefined8 *)(puVar6 + 0x40) = uStack_e0;
  *(undefined8 *)(puVar6 + 0x80) = uStack_a0;
  *(long **)(puVar6 + 0x88) = plVar10;
  pcStack_100 = FUN_103769064;
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_118 = 0x42000000;
  pcStack_110 = FUN_103767b30;
  puStack_108 = &UNK_11068f7f8;
  ppuVar11 = &puStack_120;
  puStack_f8 = puVar6;
  func_0x000107c60bc4(ppuVar11);
  puVar6 = puStack_f8;
  func_0x000107c61174(plVar10);
  func_0x000107c61434(param_1);
  func_0x000107c61174(plVar10);
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar6);
  func_0x000107c4f8a0(uStack_98);
  func_0x000107c61170(plVar10);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(plVar10);
  return;
}



/* Entry: 103766e50; end: 103766e6b;  */

void FUN_103766e50(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1a8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x198) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103766e6c,0,0);
  return;
}



/* Entry: 103766e6c; end: 10376701b;  */

void FUN_103766e6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
  lVar5 = *(long *)(unaff_x22 + 0x1a8);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x1b0) = param_1;
  func_0x000107c61428();
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000028;
  func_0x000100029b28(0xd000000000000028,0x800000010f1639f0);
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar3;
  func_0x000107c61170(uVar2);
  func_0x0001000d224c(unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar4 = unaff_x22 + 0x130;
  func_0x0001000a8868(lVar4,uVar2);
  *(undefined8 *)(unaff_x22 + 0xd0) = 2;
  *(undefined8 *)(unaff_x22 + 0xe0) = 0;
  *(undefined8 *)(unaff_x22 + 0xd8) = 0;
  *(undefined8 *)(unaff_x22 + 0xf0) = 0;
  *(undefined8 *)(unaff_x22 + 0xe8) = 0;
  *(undefined1 *)(unaff_x22 + 0xf8) = 5;
  FUN_10377d64c(unaff_x22 + 0x10,(undefined8 *)(unaff_x22 + 0xd0),uVar2,uVar3,lVar4);
  func_0x000103768fc4(unaff_x22 + 0x130);
  func_0x0001000d224c(unaff_x22 + 400);
  uVar3 = *(undefined8 *)(unaff_x22 + 400);
  uVar2 = uVar3;
  func_0x000107c42ec8();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = uVar2;
  func_0x000107c5fc54(uVar2,PTR___sSSN_11034da80);
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x000100403a6c();
  func_0x000107c6142c(uVar3);
  *(undefined8 *)(unaff_x22 + 0x188) = uVar2;
  func_0x000107c61434(uVar1);
  func_0x00010040448c();
  func_0x000107c6142c(uVar1);
  lVar4 = *(long *)(lVar5 + 0x30);
  lVar7 = *(long *)(lVar5 + 0x38);
  lVar5 = lVar5 + 0x18;
  func_0x0001000a8868(lVar5,lVar4);
  lVar9 = *(long *)(unaff_x22 + 0x188);
  *(long *)(unaff_x22 + 0x1c0) = lVar9;
  plVar6 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1c8) = plVar6;
  lVar7 = *(long *)(lVar7 + 8);
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10376701c;
  lVar8 = *(long *)(unaff_x22 + 0x198);
  plVar6[0xc] = lVar7;
  plVar6[0xd] = lVar5;
  plVar6[10] = lVar9;
  plVar6[0xb] = lVar4;
  plVar6[9] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10377bc30,0,0);
  return;
}



/* Entry: 10376701c; end: 10376706b;  */

void FUN_10376701c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x1d0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376706c,0,0);
  return;
}



/* Entry: 10376706c; end: 103767153;  */

void FUN_10376706c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b8);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x1b0);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x1c0));
  puVar3 = (undefined8 *)(unaff_x22 + 0x68);
  func_0x0001000a8868(puVar3,*(undefined8 *)(unaff_x22 + 0x80));
  uVar4 = puVar3[4];
  uVar7 = puVar3[7];
  uVar6 = puVar3[6];
  uVar11 = puVar3[1];
  uVar10 = *puVar3;
  uVar9 = puVar3[3];
  uVar8 = puVar3[2];
  *(undefined8 *)(unaff_x22 + 0xb8) = puVar3[5];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar4;
  *(undefined8 *)(unaff_x22 + 200) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar8;
  FUN_10377cd3c(1);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar4);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x121) = *(undefined8 *)(unaff_x22 + 0x59);
  *(undefined8 *)(unaff_x22 + 0x119) = *(undefined8 *)(unaff_x22 + 0x51);
  (**(code **)(lVar2 + 8))(unaff_x22 + 0x100,uVar4,lVar2);
  func_0x000107c61428(puVar5,unaff_x22 + 0x170,0,0);
  uVar4 = *puVar5;
  func_0x000107c61174(uVar4);
  func_0x000100069b5c(uVar1);
  func_0x000107c61170(uVar4);
  FUN_103765578(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000103767150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x1d0));
  return;
}



/* Entry: 103767154; end: 103767453;  */

undefined * FUN_103767154(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auStack_1c8 [32];
  undefined1 auStack_1a8 [24];
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_15f;
  undefined8 auStack_150 [3];
  undefined8 uStack_138;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_ef;
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
  undefined1 uStack_78;
  
  puVar5 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar6 = *puVar5;
  func_0x000107c61174(uVar6);
  uVar7 = 0xd000000000000026;
  func_0x000100029b28(0xd000000000000026,0x800000010f1639c0);
  func_0x000107c61170(uVar6);
  func_0x0001000d224c(&uStack_e0);
  uVar2 = uStack_c0;
  uVar6 = uStack_c8;
  puVar8 = &uStack_e0;
  func_0x0001000a8868(puVar8,uStack_c8);
  uStack_a0 = 4;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 5;
  FUN_10377d64c(auStack_1a8,&uStack_a0,uVar6,uVar2,puVar8);
  func_0x000103768fc4(&uStack_e0);
  lVar14 = param_1[2];
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar14 != 0) {
    param_1 = param_1 + 9;
    do {
      uVar11 = param_1[-1];
      uVar6 = param_1[-4];
      uVar2 = param_1[-3];
      uVar15 = param_1[-5];
      uVar3 = *(undefined1 *)(param_1 + -2);
      uStack_c8 = CONCAT71(uStack_c8._1_7_,uVar3);
      uStack_b8 = CONCAT71(uStack_b8._1_7_,*(undefined1 *)param_1);
      uStack_e0 = uVar15;
      uStack_d8 = uVar6;
      uStack_d0 = uVar2;
      uStack_c0 = uVar11;
      func_0x000107c61174();
      func_0x000107c61174(uVar15);
      FUN_103765724(uVar6,uVar2,uVar3);
      FUN_103767b9c(&lStack_110,&uStack_e0,param_2);
      func_0x000107c61170(uVar15);
      func_0x00010376573c(uVar6,uVar2,uVar3);
      func_0x000107c61170(uVar11);
      lVar4 = lStack_110;
      if (lStack_110 != 0) {
        puVar10 = puVar12;
        func_0x000107c61550();
        if ((((int)puVar10 == 0) || ((long)puVar12 < 0)) ||
           (puVar10 = puVar12, ((ulong)puVar12 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar12 >> 0x3e == 0) {
            puVar9 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar9 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar12) {
              puVar9 = puVar12;
            }
            func_0x000107c60480(puVar9);
          }
          puVar10 = (undefined *)0x0;
          FUN_103762880(0,puVar9 + 1,1,puVar12);
        }
        uVar13 = (ulong)puVar10 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar13 + 0x10);
        puVar12 = puVar10;
        if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar1) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
          FUN_103762880(puVar12,uVar1 + 1,1,puVar10);
          uVar13 = (ulong)puVar12 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar13 + 0x10) = uVar1 + 1;
        *(long *)(uVar13 + uVar1 * 8 + 0x20) = lVar4;
      }
      param_1 = param_1 + 6;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  puVar8 = auStack_150;
  func_0x0001000a8868(puVar8,uStack_138);
  uStack_d8 = puVar8[1];
  uStack_e0 = *puVar8;
  uStack_c8 = puVar8[3];
  uStack_d0 = puVar8[2];
  uStack_b8 = puVar8[5];
  uStack_c0 = puVar8[4];
  uStack_a8 = puVar8[7];
  uStack_b0 = puVar8[6];
  FUN_10377cd3c(1);
  func_0x0001000a8868(auStack_1a8,uStack_190);
  uStack_108 = uStack_178;
  lStack_110 = lStack_180;
  uStack_100 = uStack_170;
  uStack_ef = uStack_15f;
  (**(code **)(lStack_188 + 8))(&lStack_110,uStack_190,lStack_188);
  func_0x000107c61428(puVar5,auStack_1c8,0,0);
  uVar6 = *puVar5;
  func_0x000107c61174(uVar6);
  func_0x000100069b5c(uVar7);
  func_0x000107c61170(uVar6);
  FUN_103765578(auStack_1a8);
  return puVar12;
}



/* Entry: 103767454; end: 10376752f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103767454(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  func_0x000100069b5c(param_3);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_7 + _DAT_112f90700);
  func_0x000107c61434(uVar2);
  FUN_103767530(param_2,param_1,uVar2);
  func_0x000107c6142c(uVar2);
  (*param_4)(param_2,0);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 103767530; end: 103767b2f;  */

undefined * FUN_103767530(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong auStack_1d0 [4];
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined8 uStack_180;
  undefined1 auStack_178 [24];
  undefined8 uStack_160;
  long lStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_12f;
  ulong auStack_120 [3];
  undefined8 uStack_108;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  puVar5 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar6 = *puVar5;
  func_0x000107c61174(uVar6);
  uVar7 = 0xd00000000000002e;
  func_0x000100029b28(0xd00000000000002e,0x800000010f163a80);
  func_0x000107c61170(uVar6);
  func_0x0001000d224c(&uStack_e0);
  uVar8 = uStack_c0;
  uVar23 = uStack_c8;
  puVar17 = &uStack_e0;
  func_0x0001000a8868(puVar17,uStack_c8);
  uStack_a0 = 5;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 5;
  FUN_10377d64c(auStack_178,&uStack_a0,uVar23,uVar8,puVar17);
  func_0x000103768fc4(&uStack_e0);
  uVar24 = param_1[2];
  uVar8 = uVar24;
  func_0x000107c5f9f4(uVar24,PTR___sSSN_11034da80,&UNK_1106c9520,PTR___sSSSHsWP_11034da90);
  uVar23 = 0;
  do {
    uVar12 = uVar23;
    if (uVar23 <= uVar24) {
      uVar12 = uVar24;
    }
    puVar17 = param_1 + uVar23 * 6;
    do {
      puVar18 = puVar17;
      if (uVar24 == uVar23) {
        if (param_2 >> 0x3e == 0) {
          uVar23 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
          puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          uVar23 = param_2 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < param_2) {
            uVar23 = param_2;
          }
          func_0x000107c60480();
          puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        PTR___swiftEmptyArrayStorage_11034f1c8 = puVar14;
        if (uVar23 != 0) {
          uVar24 = 0;
          do {
            if ((param_2 & 0xc000000000000001) == 0) {
              if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103767a14);
                (*pcVar4)();
              }
              uVar12 = *(ulong *)(param_2 + uVar24 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar12 = uVar24;
              FUN_10378e3b8(uVar24,param_2);
            }
            if (SCARRY8(uVar24,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103767a10);
              (*pcVar4)();
            }
            uVar25 = uVar24 + 1;
            auStack_1d0[0] = uVar12;
            FUN_1037680fc(&uStack_e0,auStack_1d0,uVar8,param_3);
            func_0x000107c61170(uVar12);
            uVar12 = uStack_e0;
            uStack_1a8 = uStack_d0;
            uStack_1b0 = uStack_d8;
            uStack_1a0 = uStack_c8;
            uStack_198 = (undefined1)uStack_c0;
            uStack_197 = (undefined7)(uStack_c0 >> 8);
            uStack_188 = (undefined1)uStack_b0;
            uStack_187 = (undefined7)(uStack_b0 >> 8);
            uStack_190 = (undefined1)uStack_b8;
            uStack_18f = (undefined7)(uStack_b8 >> 8);
            uStack_180 = uStack_a8;
            if (uStack_e0 != 0) {
              puVar13 = puVar14;
              func_0x000107c61558();
              puVar15 = puVar14;
              if (((ulong)puVar13 & 1) == 0) {
                puVar15 = (undefined *)0x0;
                FUN_103762778(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
              }
              uVar11 = *(ulong *)(puVar15 + 0x10);
              puVar14 = puVar15;
              if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar11) {
                puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
                FUN_103762778(puVar14,uVar11 + 1,1,puVar15);
              }
              uStack_b0 = uStack_180;
              uStack_c8 = CONCAT71(uStack_197,uStack_198);
              uStack_b8 = CONCAT71(uStack_187,uStack_188);
              uStack_c0 = CONCAT71(uStack_18f,uStack_190);
              uStack_d0 = uStack_1a0;
              uStack_d8 = uStack_1a8;
              uStack_e0 = uStack_1b0;
              *(ulong *)(puVar14 + 0x10) = uVar11 + 1;
              *(ulong *)(puVar14 + uVar11 * 0x40 + 0x20) = uVar12;
              *(undefined8 *)(puVar14 + uVar11 * 0x40 + 0x58) = uStack_180;
              *(ulong *)(puVar14 + uVar11 * 0x40 + 0x50) = uStack_b8;
              *(ulong *)(puVar14 + uVar11 * 0x40 + 0x48) = uStack_c0;
              *(ulong *)(puVar14 + uVar11 * 0x40 + 0x40) = uStack_c8;
              *(ulong *)(puVar14 + uVar11 * 0x40 + 0x38) = uStack_1a0;
              *(ulong *)(puVar14 + uVar11 * 0x40 + 0x30) = uStack_1a8;
              *(ulong *)(puVar14 + uVar11 * 0x40 + 0x28) = uStack_1b0;
            }
            uVar24 = uVar24 + 1;
          } while (uVar25 != uVar23);
        }
        func_0x000107c6142c(uVar8);
        puVar17 = auStack_120;
        func_0x0001000a8868(puVar17,uStack_108);
        uStack_d8 = puVar17[1];
        uStack_e0 = *puVar17;
        uStack_c8 = puVar17[3];
        uStack_d0 = puVar17[2];
        uStack_b8 = puVar17[5];
        uStack_c0 = puVar17[4];
        uStack_a8 = puVar17[7];
        uStack_b0 = puVar17[6];
        FUN_10377cd3c(1);
        func_0x0001000a8868(auStack_178,uStack_160);
        uStack_1a8 = uStack_148;
        uStack_1b0 = uStack_150;
        uStack_1a0 = uStack_140;
        uStack_18f = (undefined7)uStack_12f;
        uStack_188 = (undefined1)((ulong)uStack_12f >> 0x38);
        (**(code **)(lStack_158 + 8))(&uStack_1b0,uStack_160,lStack_158);
        func_0x000107c61428(puVar5,auStack_1d0,0,0);
        uVar6 = *puVar5;
        func_0x000107c61174(uVar6);
        func_0x000100069b5c(uVar7);
        func_0x000107c61170(uVar6);
        FUN_103765578(auStack_178);
        return puVar14;
      }
      uVar23 = uVar23 + 1;
      if (uVar12 + 1 == uVar23) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103767a0c);
        (*pcVar4)();
      }
      bVar2 = (byte)puVar18[7];
      puVar17 = puVar18 + 6;
    } while (2 < bVar2);
    uVar12 = puVar18[4];
    uVar25 = puVar18[5];
    uVar21 = puVar18[6];
    uVar22 = puVar18[8];
    uVar3 = puVar18[9];
    FUN_103765724(uVar25,uVar21,bVar2);
    FUN_103765724(uVar25,uVar21,bVar2);
    uVar9 = uVar22;
    func_0x000107c61174();
    func_0x000107c61174();
    FUN_103765724(uVar25,uVar21,bVar2);
    func_0x000107c61174();
    func_0x000107c61174();
    uVar10 = uVar8;
    func_0x000107c61558();
    uVar11 = uVar25;
    uVar16 = uVar21;
    uStack_e0 = uVar8;
    func_0x000100029284();
    uVar19 = (ulong)~(uint)uVar16 & 1;
    lVar1 = *(long *)(uVar8 + 0x10) + uVar19;
    if (SCARRY8(*(long *)(uVar8 + 0x10),uVar19)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103767b1c);
      (*pcVar4)();
    }
    if (*(long *)(uVar8 + 0x18) < lVar1) {
      FUN_10378f8bc(lVar1,uVar10);
      uVar11 = uVar25;
      uVar8 = uVar21;
      func_0x000100029284();
      if (((uint)uVar16 & 1) != ((uint)uVar8 & 1)) {
        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103767b30);
        (*pcVar4)();
      }
joined_r0x000103767810:
      if ((uVar16 & 1) != 0) goto LAB_10376778c;
LAB_103767814:
      lVar1 = uStack_e0 + (uVar11 >> 6) * 8;
      *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar11 & 0x3f);
      puVar17 = (ulong *)(*(long *)(uStack_e0 + 0x30) + uVar11 * 0x10);
      *puVar17 = uVar25;
      puVar17[1] = uVar21;
      puVar17 = (ulong *)(*(long *)(uStack_e0 + 0x38) + uVar11 * 0x30);
      *puVar17 = uVar12;
      puVar17[1] = uVar25;
      puVar17[2] = uVar21;
      *(byte *)(puVar17 + 3) = bVar2;
      puVar17[4] = uVar22;
      *(char *)(puVar17 + 5) = (char)uVar3;
      if (SCARRY8(*(long *)(uStack_e0 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103767b20);
        (*pcVar4)();
      }
      *(long *)(uStack_e0 + 0x10) = *(long *)(uStack_e0 + 0x10) + 1;
      uVar8 = uStack_e0;
    }
    else {
      if ((uVar10 & 1) == 0) {
        func_0x00010378eadc();
        goto joined_r0x000103767810;
      }
      if ((uVar16 & 1) == 0) goto LAB_103767814;
LAB_10376778c:
      uVar8 = uStack_e0;
      puVar17 = (ulong *)(*(long *)(uStack_e0 + 0x38) + uVar11 * 0x30);
      uVar11 = *puVar17;
      uVar10 = puVar17[1];
      uVar19 = puVar17[2];
      uVar20 = puVar17[4];
      *puVar17 = uVar12;
      puVar17[1] = uVar25;
      puVar17[2] = uVar21;
      uVar16 = puVar17[3];
      *(byte *)(puVar17 + 3) = bVar2;
      puVar17[4] = uVar22;
      *(char *)(puVar17 + 5) = (char)uVar3;
      func_0x000107c61170(uVar11);
      func_0x00010376573c(uVar10,uVar19,(char)uVar16);
      func_0x000107c61170(uVar20);
      func_0x00010376573c(uVar25,uVar21,bVar2);
    }
    func_0x000107c61170(uVar12);
    func_0x00010376573c(uVar25,uVar21,bVar2);
    func_0x000107c61170(uVar9);
  } while( true );
}



/* Entry: 103767b30; end: 103767b9b;  */

void FUN_103767b30(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_103769094(0,0x112f906c0,&PTR_PTR_1126ad6d8);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103767b9c; end: 1037680fb;  */

void FUN_103767b9c(undefined8 *param_1,long param_2,long param_3)

{
  ulong *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 uVar7;
  code *pcVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong *puVar22;
  undefined *puVar23;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [40];
  
  lVar2 = *(long *)(param_2 + 8);
  uVar12 = *(ulong *)(param_2 + 0x10);
  bVar6 = *(byte *)(param_2 + 0x18);
  if (*(long *)(param_3 + 0x10) != 0) {
    func_0x000107c61434(param_3);
    lVar20 = lVar2;
    uVar19 = uVar12;
    FUN_10378de8c(lVar2,uVar12,bVar6);
    if ((uVar19 & 1) != 0) {
      puVar23 = *(undefined **)(*(long *)(param_3 + 0x38) + lVar20 * 8);
      func_0x000107c61434(puVar23);
      func_0x000107c6142c(param_3);
      goto LAB_103767c30;
    }
    func_0x000107c6142c(param_3);
  }
  puVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_103796550();
LAB_103767c30:
  uStack_f8 = *(ulong *)(puVar23 + 0x10);
  func_0x000107c5f9f4(uStack_f8,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                      PTR___sSSSHsWP_11034da90);
  puVar22 = (ulong *)(puVar23 + 0x40);
  uVar18 = -1L << ((ulong)(byte)puVar23[0x20] & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if (-uVar18 < 0x40) {
    uVar19 = ~(-1L << (-uVar18 & 0x3f));
  }
  uVar19 = uVar19 & *puVar22;
  func_0x000107c61434(puVar23);
  lVar20 = 0;
  lVar21 = lVar20;
  while( true ) {
    while (uVar19 != 0) {
      uVar11 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar19 = uVar19 - 1 & uVar19;
      uVar14 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar20 << 6;
      puVar1 = (ulong *)(*(long *)(puVar23 + 0x30) + uVar14 * 0x10);
      uVar11 = *puVar1;
      uVar4 = puVar1[1];
      puVar15 = (undefined8 *)(*(long *)(puVar23 + 0x38) + uVar14 * 0x18);
      uVar3 = *puVar15;
      uVar5 = puVar15[1];
      uVar7 = *(undefined1 *)(puVar15 + 2);
      func_0x000107c61434(uVar4);
      func_0x000101edf31c(uVar3,uVar5,uVar7);
      func_0x000103aa7f68(&uStack_a8,uVar3,uVar5,uVar7);
      lVar21 = lVar20;
      if (lStack_90 == 0) {
        func_0x000107c6142c(uVar4);
        func_0x000101edeb30(uVar3,uVar5,uVar7);
        func_0x00010006e7f4(&uStack_a8);
      }
      else {
        func_0x000100102924(&uStack_a8,auStack_88);
        func_0x0001000bb420(auStack_88,&uStack_a8);
        uStack_e8 = uStack_a0;
        uStack_f0 = uStack_a8;
        lStack_d8 = lStack_90;
        uStack_e0 = uStack_98;
        if (lStack_90 == 0) {
          func_0x000107c61434(uVar4);
          func_0x00010006e7f4(&uStack_f0);
          func_0x000107c61434(uStack_f8);
          uVar14 = uVar4;
          func_0x000100029284();
          func_0x000107c6142c(uStack_f8);
          if ((uVar14 & 1) == 0) {
            func_0x000107c61430(uVar4,2);
            func_0x000101edeb30(uVar3,uVar5,uVar7);
            func_0x000103768fc4(auStack_88);
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
          }
          else {
            uVar14 = uStack_f8;
            func_0x000107c61558();
            uStack_f0 = uStack_f8;
            if ((int)uVar14 == 0) {
              func_0x0001010fc388();
            }
            uStack_f8 = uStack_f0;
            func_0x000107c6142c(*(undefined8 *)(*(long *)(uStack_f0 + 0x30) + uVar11 * 0x10 + 8));
            func_0x000100102924(*(long *)(uStack_f8 + 0x38) + uVar11 * 0x20,&uStack_d0);
            func_0x0001010f6278(uVar11,uStack_f8);
            func_0x000107c61430(uVar4,2);
            func_0x000101edeb30(uVar3,uVar5,uVar7);
            func_0x000103768fc4(auStack_88);
          }
          func_0x00010006e7f4(&uStack_d0);
        }
        else {
          func_0x000100102924(&uStack_f0,&uStack_d0);
          func_0x000107c61434(uVar4);
          uVar14 = uStack_f8;
          func_0x000107c61558();
          uStack_f0 = uStack_f8;
          uVar10 = uVar11;
          uVar13 = uVar4;
          func_0x000100029284();
          uVar17 = (ulong)~(uint)uVar13 & 1;
          lVar16 = *(long *)(uStack_f8 + 0x10) + uVar17;
          if (SCARRY8(*(long *)(uStack_f8 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1037680e8);
            (*pcVar8)();
          }
          if (*(long *)(uStack_f8 + 0x18) < lVar16) {
            func_0x000100102b0c(lVar16,uVar14);
            uVar10 = uVar11;
            uVar14 = uVar4;
            func_0x000100029284();
            if (((uint)uVar13 & 1) != ((uint)uVar14 & 1)) {
              func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1037680fc);
              (*pcVar8)();
            }
          }
          else if ((uVar14 & 1) == 0) {
            func_0x0001010fc388();
          }
          uVar14 = uStack_f0;
          uStack_f8 = uStack_f0;
          if ((uVar13 & 1) == 0) {
            lVar16 = uStack_f0 + (uVar10 >> 6) * 8;
            *(ulong *)(lVar16 + 0x40) = *(ulong *)(lVar16 + 0x40) | 1L << (uVar10 & 0x3f);
            puVar1 = (ulong *)(*(long *)(uStack_f0 + 0x30) + uVar10 * 0x10);
            *puVar1 = uVar11;
            puVar1[1] = uVar4;
            func_0x000100102924(&uStack_d0,*(long *)(uStack_f0 + 0x38) + uVar10 * 0x20);
            func_0x000107c6142c(uVar4);
            func_0x000101edeb30(uVar3,uVar5,uVar7);
            func_0x000103768fc4(auStack_88);
            lVar16 = *(long *)(uVar14 + 0x10);
            if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1037680ec);
              (*pcVar8)();
            }
            *(long *)(uVar14 + 0x10) = lVar16 + 1;
          }
          else {
            lVar16 = *(long *)(uStack_f0 + 0x38) + uVar10 * 0x20;
            func_0x000103768fc4(lVar16);
            func_0x000100102924(&uStack_d0,lVar16);
            func_0x000107c61430(uVar4,2);
            func_0x000101edeb30(uVar3,uVar5,uVar7);
            func_0x000103768fc4(auStack_88);
          }
        }
      }
    }
    bVar9 = SCARRY8(lVar20,1);
    lVar20 = lVar20 + 1;
    if (bVar9) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1037680e4);
      (*pcVar8)();
    }
    if ((long)(0x3f - uVar18 >> 6) <= lVar20) break;
    uVar19 = puVar22[lVar20];
  }
  func_0x000107c6142c(puVar23);
  func_0x000101ee1938(puVar23,puVar22,~uVar18,lVar21,0);
  uVar19 = uVar12;
  lVar20 = lVar2;
  if (bVar6 != 2) {
    lVar20 = 0;
    uVar19 = 0xe000000000000000;
  }
  if (bVar6 < 2) {
    uVar19 = uVar12;
    lVar20 = lVar2;
  }
  puVar23 = PTR_PTR_1126ad6d0;
  func_0x000107c610f8();
  FUN_103765724(lVar2,uVar12,bVar6);
  func_0x000107c5fadc(lVar20,uVar19);
  func_0x000107c6142c(uVar19);
  uVar12 = uStack_f8;
  func_0x000107c5f9dc(uStack_f8,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                      PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(uStack_f8);
  func_0x000107c48b28();
  func_0x000107c61170(lVar20);
  func_0x000107c61170(uVar12);
  *param_1 = puVar23;
  return;
}



/* Entry: 1037680fc; end: 10376899b;  */

void FUN_1037680fc(undefined8 *param_1,undefined8 param_2,long *param_3,ulong param_4,long param_5)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  undefined *puVar27;
  undefined8 uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  undefined *puStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  undefined1 auStack_f0 [32];
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  lVar30 = *param_3;
  lVar8 = lVar30;
  uVar29 = param_4;
  func_0x000107c5c280();
  func_0x000107c61180();
  lVar22 = lVar8;
  func_0x000107c5c284();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  lVar8 = lVar22;
  func_0x000107c5faec();
  func_0x000107c61170(lVar22);
  if (*(long *)(param_4 + 0x10) == 0) {
LAB_10376824c:
    func_0x000107c6142c(uVar29);
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  func_0x000107c61434(param_4);
  uVar32 = uVar29;
  func_0x000100029284();
  if ((uVar32 & 1) == 0) {
    func_0x000107c6142c(uVar29);
    uVar29 = param_4;
    goto LAB_10376824c;
  }
  puVar18 = (undefined8 *)(*(long *)(param_4 + 0x38) + lVar8 * 0x30);
  uVar9 = *puVar18;
  lVar8 = puVar18[1];
  uVar32 = puVar18[2];
  uVar2 = *(undefined1 *)(puVar18 + 3);
  uVar28 = puVar18[4];
  uVar3 = *(undefined1 *)(puVar18 + 5);
  func_0x000107c61174();
  FUN_103765724(lVar8,uVar32,uVar2);
  func_0x000107c61174(uVar28);
  func_0x000107c6142c(uVar29);
  func_0x000107c6142c(param_4);
  if (*(long *)(param_5 + 0x10) != 0) {
    func_0x000107c61434(param_5);
    lVar22 = lVar8;
    uVar29 = uVar32;
    FUN_10378de8c(lVar8,uVar32,uVar2);
    if ((uVar29 & 1) != 0) {
      puVar27 = *(undefined **)(*(long *)(param_5 + 0x38) + lVar22 * 8);
      func_0x000107c61434(puVar27);
      func_0x000107c6142c(param_5);
      goto LAB_103768280;
    }
    func_0x000107c6142c(param_5);
  }
  puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_103796550();
LAB_103768280:
  puStack_70 = puVar27;
  func_0x000107c61434(puVar27);
  lVar22 = lVar30;
  func_0x000107c5c280();
  func_0x000107c61180();
  lVar26 = lVar22;
  func_0x000107c42ef0();
  func_0x000107c61180();
  func_0x000107c61170(lVar22);
  lVar10 = lVar26;
  func_0x000107c5f9e8(lVar26,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90)
  ;
  func_0x000107c61170(lVar26);
  lVar26 = *(long *)(puVar27 + 0x10);
  func_0x000107c6142c(puVar27);
  lVar22 = lVar26 + *(long *)(lVar10 + 0x10);
  if (SCARRY8(lVar26,*(long *)(lVar10 + 0x10))) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x103768970);
    (*pcVar7)();
  }
  if (SCARRY8(lVar22,1)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x103768974);
    (*pcVar7)();
  }
  uVar11 = 0x112f906c8;
  func_0x0001000285a8(0x112f906c8,&UNK_10dc08df8);
  func_0x000107c5f9f8(lVar22 + 1,uVar11);
  func_0x000107c519c8(lVar30);
  puVar27 = puStack_70;
  puVar12 = puStack_70;
  func_0x000107c61558(puStack_70);
  puStack_a0 = puVar27;
  func_0x000101ede9ac(param_2,0,2,0x65726f6373,0xe500000000000000,puVar12);
  puStack_70 = puStack_a0;
  uVar23 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
  uVar29 = 0xffffffffffffffff;
  if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
    uVar29 = ~(-1L << (uVar23 & 0x3f));
  }
  uVar29 = uVar29 & *(ulong *)(lVar10 + 0x40);
  uVar23 = uVar23 + 0x3f >> 6;
  puVar27 = puStack_a0;
  puVar12 = PTR___sypN_11034f1a8;
  lVar22 = 0;
  do {
    lVar26 = lVar22;
    if (uVar29 == 0) {
      uVar29 = uVar23;
      if ((long)uVar23 <= lVar22 + 1) {
        uVar29 = lVar22 + 1;
      }
      lVar31 = uVar29 - 1;
      do {
        lVar26 = lVar22 + 1;
        if (SCARRY8(lVar22,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10376896c);
          (*pcVar7)();
        }
        if ((long)uVar23 <= lVar26) {
          uVar29 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_c8 = 0;
          puStack_d0 = (undefined *)0x0;
          goto LAB_10376845c;
        }
        uVar29 = ((ulong *)(lVar10 + 0x40))[lVar26];
        lVar22 = lVar22 + 1;
      } while (uVar29 == 0);
    }
    uVar5 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar29 = uVar29 - 1 & uVar29;
    uVar19 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar26 << 6;
    puVar21 = (ulong *)(*(long *)(lVar10 + 0x30) + uVar19 * 0x10);
    puStack_d0 = (undefined *)*puVar21;
    uVar5 = puVar21[1];
    uStack_c8 = uVar5;
    func_0x0001000bb420(*(long *)(lVar10 + 0x38) + uVar19 * 0x20,&uStack_c0);
    func_0x000107c61434(uVar5);
    lVar31 = lVar26;
LAB_10376845c:
    uVar5 = uStack_c8;
    puVar6 = puStack_d0;
    uStack_98 = uStack_c8;
    puStack_a0 = puStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    if (uStack_c8 == 0) {
      uVar11 = uStack_b0;
      func_0x000107c61574(lVar10);
      func_0x000107c519c8(lVar30);
      *param_1 = uVar9;
      param_1[1] = lVar8;
      param_1[2] = uVar32;
      *(undefined1 *)(param_1 + 3) = uVar2;
      param_1[4] = uVar28;
      *(undefined1 *)(param_1 + 5) = uVar3;
      param_1[6] = puVar27;
      param_1[7] = uVar11;
      return;
    }
    uVar11 = uStack_b0;
    func_0x000100102924(&uStack_90,&puStack_d0);
    func_0x0001000bb420(&puStack_d0,auStack_f0);
    uVar13 = 0;
    FUN_103769094(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar14 = &puStack_100;
    func_0x000107c6147c(ppuVar14,auStack_f0,puVar12 + 8,uVar13,0);
    puVar15 = puStack_100;
    if ((int)ppuVar14 == 0) {
      ppuVar14 = &puStack_100;
      func_0x000107c6147c(ppuVar14,auStack_f0,puVar12 + 8,PTR___sSSN_11034da80,0);
      uVar19 = uStack_f8;
      puVar15 = puStack_100;
      if ((int)ppuVar14 == 0) {
        ppuVar14 = &puStack_108;
        func_0x000107c6147c(ppuVar14,auStack_f0,puVar12 + 8,PTR___sSbN_11034dd40,0);
        if ((int)ppuVar14 == 0) {
          func_0x000103768fc4(&puStack_d0);
          func_0x000107c6142c(uVar5);
        }
        else {
          uVar20 = (ulong)puStack_108 & 0xff;
          puVar12 = puVar27;
          func_0x000107c61558();
          puVar15 = puVar6;
          uVar19 = uVar5;
          puStack_100 = puVar27;
          func_0x000100029284();
          uVar17 = (uint)uVar19;
          uVar24 = (ulong)~uVar17 & 1;
          lVar22 = *(long *)(puVar27 + 0x10) + uVar24;
          if (SCARRY8(*(long *)(puVar27 + 0x10),uVar24)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x103768980);
            (*pcVar7)();
          }
          if (*(long *)(puVar27 + 0x18) < lVar22) {
            func_0x000101ee23bc(lVar22,puVar12);
            puVar15 = puVar6;
            uVar24 = uVar5;
            func_0x000100029284();
            uVar19 = uVar19 & 0xffffffff;
            if ((uVar17 & 1) != ((uint)uVar24 & 1)) goto LAB_10376898c;
          }
          else if (((ulong)puVar12 & 1) == 0) {
            func_0x000101ee20b4();
          }
          puVar27 = puStack_100;
          puVar12 = PTR___sypN_11034f1a8;
          if ((uVar19 & 1) == 0) {
            *(ulong *)(puStack_100 + ((ulong)puVar15 >> 6) * 8 + 0x40) =
                 *(ulong *)(puStack_100 + ((ulong)puVar15 >> 6) * 8 + 0x40) |
                 1L << ((ulong)puVar15 & 0x3f);
            puVar21 = (ulong *)(*(long *)(puStack_100 + 0x30) + (long)puVar15 * 0x10);
            *puVar21 = (ulong)puVar6;
            puVar21[1] = uVar5;
            puVar21 = (ulong *)(*(long *)(puStack_100 + 0x38) + (long)puVar15 * 0x18);
            *puVar21 = uVar20;
            puVar21[1] = 0;
            *(undefined1 *)(puVar21 + 2) = 1;
            func_0x000103768fc4(&puStack_d0);
            lVar22 = *(long *)(puVar27 + 0x10);
            if (SCARRY8(lVar22,1)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10376898c);
              (*pcVar7)();
            }
            goto LAB_1037688a4;
          }
          puVar21 = (ulong *)(*(long *)(puStack_100 + 0x38) + (long)puVar15 * 0x18);
          uVar24 = *puVar21;
          uVar25 = puVar21[1];
          *puVar21 = uVar20;
          puVar21[1] = 0;
          uVar4 = (undefined1)puVar21[2];
          *(undefined1 *)(puVar21 + 2) = 1;
LAB_103768838:
          func_0x000101edeb30(uVar24,uVar25,uVar4);
          func_0x000107c6142c(uVar5);
          func_0x000103768fc4(&puStack_d0);
        }
      }
      else {
        puVar12 = puVar27;
        func_0x000107c61558();
        puVar16 = puVar6;
        uVar24 = uVar5;
        puStack_108 = puVar27;
        func_0x000100029284();
        uVar17 = (uint)uVar24;
        uVar25 = (ulong)~uVar17 & 1;
        lVar22 = *(long *)(puVar27 + 0x10) + uVar25;
        if (SCARRY8(*(long *)(puVar27 + 0x10),uVar25)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10376897c);
          (*pcVar7)();
        }
        if (*(long *)(puVar27 + 0x18) < lVar22) {
          func_0x000101ee23bc(lVar22,puVar12);
          puVar16 = puVar6;
          uVar25 = uVar5;
          func_0x000100029284();
          uVar24 = uVar24 & 0xffffffff;
          if ((uVar17 & 1) != ((uint)uVar25 & 1)) goto LAB_10376898c;
        }
        else if (((ulong)puVar12 & 1) == 0) {
          func_0x000101ee20b4();
        }
        puVar27 = puStack_108;
        puVar12 = PTR___sypN_11034f1a8;
        if ((uVar24 & 1) != 0) {
          puVar21 = (ulong *)(*(long *)(puStack_108 + 0x38) + (long)puVar16 * 0x18);
          uVar24 = *puVar21;
          uVar25 = puVar21[1];
          *puVar21 = (ulong)puVar15;
          puVar21[1] = uVar19;
          uVar4 = (undefined1)puVar21[2];
          *(undefined1 *)(puVar21 + 2) = 0;
          goto LAB_103768838;
        }
        *(ulong *)(puStack_108 + ((ulong)puVar16 >> 6) * 8 + 0x40) =
             *(ulong *)(puStack_108 + ((ulong)puVar16 >> 6) * 8 + 0x40) |
             1L << ((ulong)puVar16 & 0x3f);
        puVar21 = (ulong *)(*(long *)(puStack_108 + 0x30) + (long)puVar16 * 0x10);
        *puVar21 = (ulong)puVar6;
        puVar21[1] = uVar5;
        puVar21 = (ulong *)(*(long *)(puStack_108 + 0x38) + (long)puVar16 * 0x18);
        *puVar21 = (ulong)puVar15;
        puVar21[1] = uVar19;
        *(undefined1 *)(puVar21 + 2) = 0;
        func_0x000103768fc4(&puStack_d0);
        lVar22 = *(long *)(puVar27 + 0x10);
        if (SCARRY8(lVar22,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x103768988);
          (*pcVar7)();
        }
LAB_1037688a4:
        *(long *)(puVar27 + 0x10) = lVar22 + 1;
      }
    }
    else {
      func_0x000107c4223c();
      puVar16 = puVar27;
      func_0x000107c61558();
      puVar12 = puVar6;
      uVar19 = uVar5;
      puStack_108 = puVar27;
      func_0x000100029284();
      uVar24 = (ulong)~(uint)uVar19 & 1;
      lVar22 = *(long *)(puVar27 + 0x10) + uVar24;
      if (SCARRY8(*(long *)(puVar27 + 0x10),uVar24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x103768978);
        (*pcVar7)();
      }
      if (*(long *)(puVar27 + 0x18) < lVar22) {
        func_0x000101ee23bc(lVar22,(ulong)puVar16 & 0xffffffff);
        puVar12 = puVar6;
        uVar24 = uVar5;
        func_0x000100029284();
        puVar27 = puStack_108;
        if (((uint)uVar19 & 1) != ((uint)uVar24 & 1)) {
LAB_10376898c:
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10376899c);
          (*pcVar7)();
        }
      }
      else {
        puVar27 = puStack_108;
        if (((ulong)puVar16 & 1) == 0) {
          func_0x000101ee20b4();
          puVar27 = puStack_108;
        }
      }
      puStack_108 = puVar27;
      if ((uVar19 & 1) == 0) {
        *(ulong *)(puVar27 + ((ulong)puVar12 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar27 + ((ulong)puVar12 >> 6) * 8 + 0x40) | 1L << ((ulong)puVar12 & 0x3f);
        puVar21 = (ulong *)(*(long *)(puVar27 + 0x30) + (long)puVar12 * 0x10);
        *puVar21 = (ulong)puVar6;
        puVar21[1] = uVar5;
        puVar18 = (undefined8 *)(*(long *)(puVar27 + 0x38) + (long)puVar12 * 0x18);
        *puVar18 = uVar11;
        puVar18[1] = 0;
        *(undefined1 *)(puVar18 + 2) = 2;
        func_0x000107c61170(puVar15);
        func_0x000103768fc4(&puStack_d0);
        if (SCARRY8(*(long *)(puVar27 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x103768984);
          (*pcVar7)();
        }
        *(long *)(puVar27 + 0x10) = *(long *)(puVar27 + 0x10) + 1;
        puVar12 = PTR___sypN_11034f1a8;
      }
      else {
        puVar18 = (undefined8 *)(*(long *)(puVar27 + 0x38) + (long)puVar12 * 0x18);
        uVar13 = *puVar18;
        uVar1 = puVar18[1];
        *puVar18 = uVar11;
        puVar18[1] = 0;
        uVar4 = *(undefined1 *)(puVar18 + 2);
        *(undefined1 *)(puVar18 + 2) = 2;
        func_0x000101edeb30(uVar13,uVar1,uVar4);
        func_0x000107c6142c(uVar5);
        func_0x000107c61170(puVar15);
        func_0x000103768fc4(&puStack_d0);
        puVar12 = PTR___sypN_11034f1a8;
      }
    }
    func_0x000103768fc4(auStack_f0);
    lVar22 = lVar31;
  } while( true );
}



/* Entry: 10376899c; end: 1037689e7;  */

void FUN_10376899c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x2c0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1037689e8;
  plVar3[0x4c] = unaff_x20;
  plVar3[0x4b] = param_1;
  lVar1 = 0;
  func_0x000107c5eec8();
  plVar3[0x4d] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[0x4e] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x4f] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103766518,0,0);
  return;
}



/* Entry: 1037689e8; end: 103768a47;  */

void FUN_1037689e8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103768a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103768a48; end: 103768aa7;  */

void FUN_103768a48(long param_1,long param_2)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = unaff_x20;
  plVar1 = (long *)0x1e0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103768aa8;
  plVar1[0x34] = param_2;
  plVar1[0x35] = unaff_x20;
  plVar1[0x33] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103766e6c,0,0);
  return;
}



/* Entry: 103768aa8; end: 103768af7;  */

void FUN_103768aa8(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103768af8,0,0);
  return;
}



/* Entry: 103768af8; end: 103768b3f;  */

void FUN_103768af8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  FUN_103767154(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103768b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 103768b40; end: 103768b43;  */

void FUN_103768b40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90680 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc08c80;
  func_0x000107c61520(&UNK_10dc08c80,&UNK_11068f700);
  puRam0000000112f90680 = puVar1;
  return;
}



/* Entry: 103768b44; end: 103768b83;  */

void FUN_103768b44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90680 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc08c80;
  func_0x000107c61520(&UNK_10dc08c80,&UNK_11068f700);
  puRam0000000112f90680 = puVar1;
  return;
}



/* Entry: 103768b84; end: 103768b87;  */

void FUN_103768b84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc08ce8;
  func_0x000107c61520(&UNK_10dc08ce8,&UNK_11068f700);
  puRam0000000112f90688 = puVar1;
  return;
}



/* Entry: 103768b88; end: 103768bc7;  */

void FUN_103768b88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc08ce8;
  func_0x000107c61520(&UNK_10dc08ce8,&UNK_11068f700);
  puRam0000000112f90688 = puVar1;
  return;
}



/* Entry: 103768bc8; end: 103768cb3;  */

uint FUN_103768bc8(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 103768cb4; end: 103768d27;  */

long FUN_103768cb4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103768d28; end: 103768dbf;  */

undefined8 * FUN_103768d28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  lVar4 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = lVar4;
  pcVar3 = (code *)**(undefined8 **)(lVar4 + -8);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar2);
  (*pcVar3)(param_1 + 3,param_2 + 3,lVar4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 103768dc0; end: 103768e77;  */

undefined8 * FUN_103768dc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  func_0x000100083374(param_1 + 3,param_2 + 3);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 103768e78; end: 103768f13;  */

undefined8 * FUN_103768e78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61170(uVar1);
  func_0x000103768fc4(param_1 + 3);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  param_1[7] = param_2[7];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61574(uVar1);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 103768f14; end: 103768feb;  */

int FUN_103768f14(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xb] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103768fec; end: 103769063;  */

long FUN_103768fec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103769064; end: 103769093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103769064(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x88);
  puVar2 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  func_0x000100069b5c(uVar6);
  func_0x000107c61170(uVar3);
  uVar6 = *(undefined8 *)(lVar5 + _DAT_112f90700);
  func_0x000107c61434(uVar6);
  FUN_103767530(uVar4,param_1,uVar6);
  func_0x000107c6142c(uVar6);
  (*pcVar1)(uVar4,0);
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 103769094; end: 1037690d3;  */

void FUN_103769094(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1037690d4; end: 10376936b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1037690d4(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x20;
  long alStack_e0 [2];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [40];
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x0001000d224c(auStack_d0);
  func_0x0001000a8868(auStack_d0,uStack_b8);
  uStack_80 = (ulong)*(byte *)(unaff_x20 + _DAT_112f906f0);
  uStack_78 = *(undefined8 *)(unaff_x20 + _DAT_112f906f8);
  uStack_70 = ((undefined8 *)(unaff_x20 + _DAT_112f906f8))[1];
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 1;
  (**(code **)(lStack_b0 + 0x18))(auStack_a8,&uStack_80,uStack_b8,lStack_b0);
  FUN_10376a914(auStack_d0);
  if (*(char *)(unaff_x20 + _DAT_112f906e8) == '\x01') {
    puVar3 = &UNK_11068f8c8;
    func_0x000107c613fc(&UNK_11068f8c8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    FUN_10376a364(auStack_a8,auStack_d0);
    puVar4 = &UNK_11068f918;
    func_0x000107c613fc(&UNK_11068f918,0x50,7);
    FUN_10376a3a8(auStack_d0,puVar4 + 0x10);
    *(undefined **)(puVar4 + 0x38) = puVar3;
    *(undefined8 *)(puVar4 + 0x40) = param_1;
    *(undefined **)(puVar4 + 0x48) = puVar1;
    func_0x000107c61434(param_1);
    func_0x000107c61174(puVar1);
    *(undefined **)((long)alStack_e0 + -extraout_x8) = PTR___sytN_11034f1b0 + 8;
    func_0x0001001ca524(7,0,100,3,0,0,&UNK_10dc08e48,puVar4);
    func_0x000107c61574(puVar4);
  }
  else {
    lVar2 = 0;
    func_0x000107c5fd0c();
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(auStack_d0 + -extraout_x8,1,1,lVar2);
    puVar3 = &UNK_11068f8c8;
    func_0x000107c613fc(&UNK_11068f8c8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    FUN_10376a364(auStack_a8,auStack_d0);
    puVar4 = &UNK_11068f8f0;
    func_0x000107c613fc(&UNK_11068f8f0,0x60,7);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 0x18) = 0;
    FUN_10376a3a8(auStack_d0,puVar4 + 0x20);
    *(undefined **)(puVar4 + 0x48) = puVar3;
    *(undefined8 *)(puVar4 + 0x50) = param_1;
    *(undefined **)(puVar4 + 0x58) = puVar1;
    func_0x000107c61434(param_1);
    func_0x000107c61174(puVar1);
    func_0x0001000abba4(0,0,auStack_d0 + -extraout_x8,&UNK_10dc08e38,puVar4);
  }
  func_0x000107c61574();
  FUN_10376a914(auStack_a8);
  return puVar1;
}



/* Entry: 10376936c; end: 103769387;  */

void FUN_10376936c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_4;
  *(undefined8 *)(unaff_x22 + 0x80) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103769388,0,0);
  return;
}



/* Entry: 103769388; end: 103769483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103769388(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x68);
  lVar2 = *(long *)(unaff_x22 + 0x70);
  func_0x0001000a8868(puVar1,puVar1[3]);
  uVar6 = puVar1[4];
  uVar8 = puVar1[7];
  uVar7 = puVar1[6];
  uVar12 = puVar1[1];
  uVar11 = *puVar1;
  uVar10 = puVar1[3];
  uVar9 = puVar1[2];
  *(undefined8 *)(unaff_x22 + 0x38) = puVar1[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  FUN_10377cd3c(1);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x50,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x88) = lVar2;
  if (lVar2 != 0) {
    lVar4 = *(long *)(unaff_x22 + 0x78);
    lVar3 = lVar4;
    func_0x000107c61434();
    func_0x000100403a6c();
    *(long *)(unaff_x22 + 0x90) = lVar3;
    func_0x000107c6142c(lVar4);
    lVar4 = _DAT_112f906d8;
    *(long *)(unaff_x22 + 0x98) = _DAT_112f906d8;
    lVar4 = *(long *)(lVar2 + lVar4);
    *(long *)(unaff_x22 + 0xa0) = lVar4;
    plVar5 = (long *)0x1c0;
    func_0x000107c61434(lVar4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa8) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_103769484;
    plVar5[0x32] = lVar3;
    plVar5[0x33] = lVar2;
    plVar5[0x31] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1037695cc,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103769480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103769484; end: 1037694e7;  */

void FUN_103769484(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xa0);
  uVar3 = *(undefined8 *)(lVar2 + 0x90);
  *(undefined8 *)(lVar2 + 0xb0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa8));
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037694e8,0,0);
  return;
}



/* Entry: 1037694e8; end: 1037695af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037694e8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar6 = *(long *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(lVar2 + _DAT_112f90700);
  *(undefined8 *)(lVar2 + _DAT_112f90700) = uVar3;
  func_0x000107c61434(uVar3);
  func_0x000107c6142c(uVar4);
  uVar5 = *(undefined8 *)(lVar2 + lVar6);
  uVar4 = uVar5;
  func_0x000107c61434(uVar5);
  FUN_103769830();
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar3);
  uVar5 = 0;
  FUN_10376a8d0(0);
  uVar3 = uVar4;
  func_0x000107c5fc48(uVar4,uVar5);
  func_0x000107c6142c(uVar4);
  func_0x000107c43b74(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001037695ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1037695b0; end: 1037695cb;  */

void FUN_1037695b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 400) = param_2;
  *(undefined8 *)(unaff_x22 + 0x198) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x188) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037695cc,0,0);
  return;
}



/* Entry: 1037695cc; end: 1037696ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037695cc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x198);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x1a0) = param_1;
  func_0x000107c61428();
  uVar3 = *param_1;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000028;
  func_0x000100029b28(0xd000000000000028,0x800000010f1639f0);
  *(undefined8 *)(unaff_x22 + 0x1a8) = uVar4;
  func_0x000107c61170(uVar3);
  func_0x0001000d224c(unaff_x22 + 0x130);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar5 = unaff_x22 + 0x130;
  func_0x0001000a8868(lVar5,uVar3);
  *(undefined8 *)(unaff_x22 + 0xd0) = 2;
  *(undefined8 *)(unaff_x22 + 0xe0) = 0;
  *(undefined8 *)(unaff_x22 + 0xd8) = 0;
  *(undefined8 *)(unaff_x22 + 0xf0) = 0;
  *(undefined8 *)(unaff_x22 + 0xe8) = 0;
  *(undefined1 *)(unaff_x22 + 0xf8) = 5;
  FUN_10377d64c(unaff_x22 + 0x10,(undefined8 *)(unaff_x22 + 0xd0),uVar3,uVar4,lVar5);
  FUN_10376a914(unaff_x22 + 0x130);
  lVar8 = lVar8 + _DAT_112f906d0;
  lVar5 = *(long *)(lVar8 + 0x18);
  lVar1 = *(long *)(lVar8 + 0x20);
  func_0x0001000a8868(lVar8,lVar5);
  plVar6 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1b0) = plVar6;
  lVar7 = *(long *)(lVar1 + 8);
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_103769700;
  lVar1 = *(long *)(unaff_x22 + 0x188);
  lVar2 = *(long *)(unaff_x22 + 400);
  plVar6[0xc] = lVar7;
  plVar6[0xd] = lVar8;
  plVar6[10] = lVar2;
  plVar6[0xb] = lVar5;
  plVar6[9] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10377bc30,0,0);
  return;
}



/* Entry: 103769700; end: 10376974f;  */

void FUN_103769700(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x1b8) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103769750,0,0);
  return;
}



/* Entry: 103769750; end: 10376982f;  */

void FUN_103769750(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x1a0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a8);
  puVar4 = (undefined8 *)(unaff_x22 + 0x68);
  func_0x0001000a8868(puVar4,*(undefined8 *)(unaff_x22 + 0x80));
  uVar5 = puVar4[4];
  uVar7 = puVar4[7];
  uVar6 = puVar4[6];
  uVar11 = puVar4[1];
  uVar10 = *puVar4;
  uVar9 = puVar4[3];
  uVar8 = puVar4[2];
  *(undefined8 *)(unaff_x22 + 0xb8) = puVar4[5];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar5;
  *(undefined8 *)(unaff_x22 + 200) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar8;
  FUN_10377cd3c(1);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar5);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x121) = *(undefined8 *)(unaff_x22 + 0x59);
  *(undefined8 *)(unaff_x22 + 0x119) = *(undefined8 *)(unaff_x22 + 0x51);
  (**(code **)(lVar3 + 8))(unaff_x22 + 0x100,uVar5,lVar3);
  func_0x000107c61428(puVar1,unaff_x22 + 0x170,0,0);
  uVar5 = *puVar1;
  func_0x000107c61174(uVar5);
  func_0x000100069b5c(uVar2);
  func_0x000107c61170(uVar5);
  FUN_103765578(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010376982c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x1b8));
  return;
}



/* Entry: 103769830; end: 103769b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103769830(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auStack_1c8 [32];
  undefined1 auStack_1a8 [24];
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_15f;
  undefined8 auStack_150 [3];
  undefined8 uStack_138;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_ef;
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
  undefined1 uStack_78;
  
  puVar5 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar6 = *puVar5;
  func_0x000107c61174(uVar6);
  uVar7 = 0xd000000000000026;
  func_0x000100029b28(0xd000000000000026,0x800000010f1639c0);
  func_0x000107c61170(uVar6);
  func_0x0001000d224c(&uStack_e0);
  uVar2 = uStack_c0;
  uVar6 = uStack_c8;
  puVar8 = &uStack_e0;
  func_0x0001000a8868(puVar8,uStack_c8);
  uStack_a0 = 4;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 5;
  FUN_10377d64c(auStack_1a8,&uStack_a0,uVar6,uVar2,puVar8);
  FUN_10376a914(&uStack_e0);
  lVar14 = param_1[2];
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar14 != 0) {
    param_1 = param_1 + 9;
    do {
      uVar11 = param_1[-1];
      uVar6 = param_1[-4];
      uVar2 = param_1[-3];
      uVar15 = param_1[-5];
      uVar3 = *(undefined1 *)(param_1 + -2);
      uStack_c8 = CONCAT71(uStack_c8._1_7_,uVar3);
      uStack_b8 = CONCAT71(uStack_b8._1_7_,*(undefined1 *)param_1);
      uStack_e0 = uVar15;
      uStack_d8 = uVar6;
      uStack_d0 = uVar2;
      uStack_c0 = uVar11;
      func_0x000107c61174();
      func_0x000107c61174(uVar15);
      FUN_103765724(uVar6,uVar2,uVar3);
      FUN_103769d18(&lStack_110,&uStack_e0,param_2);
      func_0x000107c61170(uVar15);
      func_0x00010376573c(uVar6,uVar2,uVar3);
      func_0x000107c61170(uVar11);
      lVar4 = lStack_110;
      if (lStack_110 != 0) {
        puVar10 = puVar12;
        func_0x000107c61550();
        if ((((int)puVar10 == 0) || ((long)puVar12 < 0)) ||
           (puVar10 = puVar12, ((ulong)puVar12 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar12 >> 0x3e == 0) {
            puVar9 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar9 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar12) {
              puVar9 = puVar12;
            }
            func_0x000107c60480(puVar9);
          }
          puVar10 = (undefined *)0x0;
          FUN_103762880(0,puVar9 + 1,1,puVar12);
        }
        uVar13 = (ulong)puVar10 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar13 + 0x10);
        puVar12 = puVar10;
        if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar1) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
          FUN_103762880(puVar12,uVar1 + 1,1,puVar10);
          uVar13 = (ulong)puVar12 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar13 + 0x10) = uVar1 + 1;
        *(long *)(uVar13 + uVar1 * 8 + 0x20) = lVar4;
      }
      param_1 = param_1 + 6;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  puVar8 = auStack_150;
  func_0x0001000a8868(puVar8,uStack_138);
  uStack_d8 = puVar8[1];
  uStack_e0 = *puVar8;
  uStack_c8 = puVar8[3];
  uStack_d0 = puVar8[2];
  uStack_b8 = puVar8[5];
  uStack_c0 = puVar8[4];
  uStack_a8 = puVar8[7];
  uStack_b0 = puVar8[6];
  FUN_10377cd3c(1);
  func_0x0001000a8868(auStack_1a8,uStack_190);
  uStack_108 = uStack_178;
  lStack_110 = lStack_180;
  uStack_100 = uStack_170;
  uStack_ef = uStack_15f;
  (**(code **)(lStack_188 + 8))(&lStack_110,uStack_190,lStack_188);
  func_0x000107c61428(puVar5,auStack_1c8,0,0);
  uVar6 = *puVar5;
  func_0x000107c61174(uVar6);
  func_0x000100069b5c(uVar7);
  func_0x000107c61170(uVar6);
  FUN_103765578(auStack_1a8);
  return puVar12;
}



/* Entry: 103769b38; end: 103769b53;  */

void FUN_103769b38(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x80) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x68) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x70) = in_x4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103769b54,0,0);
  return;
}



/* Entry: 103769b54; end: 103769c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103769b54(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x68);
  lVar2 = *(long *)(unaff_x22 + 0x70);
  func_0x0001000a8868(puVar1,puVar1[3]);
  uVar6 = puVar1[4];
  uVar8 = puVar1[7];
  uVar7 = puVar1[6];
  uVar12 = puVar1[1];
  uVar11 = *puVar1;
  uVar10 = puVar1[3];
  uVar9 = puVar1[2];
  *(undefined8 *)(unaff_x22 + 0x38) = puVar1[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  FUN_10377cd3c(1);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x50,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x88) = lVar2;
  if (lVar2 != 0) {
    lVar4 = *(long *)(unaff_x22 + 0x78);
    lVar3 = lVar4;
    func_0x000107c61434();
    func_0x000100403a6c();
    *(long *)(unaff_x22 + 0x90) = lVar3;
    func_0x000107c6142c(lVar4);
    lVar4 = _DAT_112f906d8;
    *(long *)(unaff_x22 + 0x98) = _DAT_112f906d8;
    lVar4 = *(long *)(lVar2 + lVar4);
    *(long *)(unaff_x22 + 0xa0) = lVar4;
    plVar5 = (long *)0x1c0;
    func_0x000107c61434(lVar4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa8) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_103769c50;
    plVar5[0x32] = lVar3;
    plVar5[0x33] = lVar2;
    plVar5[0x31] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1037695cc,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103769c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103769c50; end: 103769cb3;  */

void FUN_103769c50(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xa0);
  uVar3 = *(undefined8 *)(lVar2 + 0x90);
  *(undefined8 *)(lVar2 + 0xb0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa8));
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10376a940,0,0);
  return;
}



/* Entry: 103769cb4; end: 103769d17; -[_TtC20SendToRankingRecents36ComposerSendToRankingSubjectProvider getSubjectsWithFeaturesWithFeatureKeys:] */

void FUN_103769cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1037690d4(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103769d18; end: 10376a277;  */

void FUN_103769d18(undefined8 *param_1,long param_2,long param_3)

{
  ulong *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 uVar7;
  code *pcVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong *puVar22;
  undefined *puVar23;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [40];
  
  lVar2 = *(long *)(param_2 + 8);
  uVar12 = *(ulong *)(param_2 + 0x10);
  bVar6 = *(byte *)(param_2 + 0x18);
  if (*(long *)(param_3 + 0x10) != 0) {
    func_0x000107c61434(param_3);
    lVar20 = lVar2;
    uVar19 = uVar12;
    FUN_10378de8c(lVar2,uVar12,bVar6);
    if ((uVar19 & 1) != 0) {
      puVar23 = *(undefined **)(*(long *)(param_3 + 0x38) + lVar20 * 8);
      func_0x000107c61434(puVar23);
      func_0x000107c6142c(param_3);
      goto LAB_103769dac;
    }
    func_0x000107c6142c(param_3);
  }
  puVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_103796550();
LAB_103769dac:
  uStack_f8 = *(ulong *)(puVar23 + 0x10);
  func_0x000107c5f9f4(uStack_f8,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                      PTR___sSSSHsWP_11034da90);
  puVar22 = (ulong *)(puVar23 + 0x40);
  uVar18 = -1L << ((ulong)(byte)puVar23[0x20] & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if (-uVar18 < 0x40) {
    uVar19 = ~(-1L << (-uVar18 & 0x3f));
  }
  uVar19 = uVar19 & *puVar22;
  func_0x000107c61434(puVar23);
  lVar20 = 0;
  lVar21 = lVar20;
  while( true ) {
    while (uVar19 != 0) {
      uVar11 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar19 = uVar19 - 1 & uVar19;
      uVar14 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar20 << 6;
      puVar1 = (ulong *)(*(long *)(puVar23 + 0x30) + uVar14 * 0x10);
      uVar11 = *puVar1;
      uVar4 = puVar1[1];
      puVar15 = (undefined8 *)(*(long *)(puVar23 + 0x38) + uVar14 * 0x18);
      uVar3 = *puVar15;
      uVar5 = puVar15[1];
      uVar7 = *(undefined1 *)(puVar15 + 2);
      func_0x000107c61434(uVar4);
      func_0x000101edf31c(uVar3,uVar5,uVar7);
      func_0x000103aa7f68(&uStack_a8,uVar3,uVar5,uVar7);
      lVar21 = lVar20;
      if (lStack_90 == 0) {
        func_0x000107c6142c(uVar4);
        func_0x000101edeb30(uVar3,uVar5,uVar7);
        func_0x00010006e7f4(&uStack_a8);
      }
      else {
        func_0x000100102924(&uStack_a8,auStack_88);
        func_0x0001000bb420(auStack_88,&uStack_a8);
        uStack_e8 = uStack_a0;
        uStack_f0 = uStack_a8;
        lStack_d8 = lStack_90;
        uStack_e0 = uStack_98;
        if (lStack_90 == 0) {
          func_0x000107c61434(uVar4);
          func_0x00010006e7f4(&uStack_f0);
          func_0x000107c61434(uStack_f8);
          uVar14 = uVar4;
          func_0x000100029284();
          func_0x000107c6142c(uStack_f8);
          if ((uVar14 & 1) == 0) {
            func_0x000107c61430(uVar4,2);
            func_0x000101edeb30(uVar3,uVar5,uVar7);
            FUN_10376a914(auStack_88);
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
          }
          else {
            uVar14 = uStack_f8;
            func_0x000107c61558();
            uStack_f0 = uStack_f8;
            if ((int)uVar14 == 0) {
              func_0x0001010fc388();
            }
            uStack_f8 = uStack_f0;
            func_0x000107c6142c(*(undefined8 *)(*(long *)(uStack_f0 + 0x30) + uVar11 * 0x10 + 8));
            func_0x000100102924(*(long *)(uStack_f8 + 0x38) + uVar11 * 0x20,&uStack_d0);
            func_0x0001010f6278(uVar11,uStack_f8);
            func_0x000107c61430(uVar4,2);
            func_0x000101edeb30(uVar3,uVar5,uVar7);
            FUN_10376a914(auStack_88);
          }
          func_0x00010006e7f4(&uStack_d0);
        }
        else {
          func_0x000100102924(&uStack_f0,&uStack_d0);
          func_0x000107c61434(uVar4);
          uVar14 = uStack_f8;
          func_0x000107c61558();
          uStack_f0 = uStack_f8;
          uVar10 = uVar11;
          uVar13 = uVar4;
          func_0x000100029284();
          uVar17 = (ulong)~(uint)uVar13 & 1;
          lVar16 = *(long *)(uStack_f8 + 0x10) + uVar17;
          if (SCARRY8(*(long *)(uStack_f8 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10376a264);
            (*pcVar8)();
          }
          if (*(long *)(uStack_f8 + 0x18) < lVar16) {
            func_0x000100102b0c(lVar16,uVar14);
            uVar10 = uVar11;
            uVar14 = uVar4;
            func_0x000100029284();
            if (((uint)uVar13 & 1) != ((uint)uVar14 & 1)) {
              func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10376a278);
              (*pcVar8)();
            }
          }
          else if ((uVar14 & 1) == 0) {
            func_0x0001010fc388();
          }
          uVar14 = uStack_f0;
          uStack_f8 = uStack_f0;
          if ((uVar13 & 1) == 0) {
            lVar16 = uStack_f0 + (uVar10 >> 6) * 8;
            *(ulong *)(lVar16 + 0x40) = *(ulong *)(lVar16 + 0x40) | 1L << (uVar10 & 0x3f);
            puVar1 = (ulong *)(*(long *)(uStack_f0 + 0x30) + uVar10 * 0x10);
            *puVar1 = uVar11;
            puVar1[1] = uVar4;
            func_0x000100102924(&uStack_d0,*(long *)(uStack_f0 + 0x38) + uVar10 * 0x20);
            func_0x000107c6142c(uVar4);
            func_0x000101edeb30(uVar3,uVar5,uVar7);
            FUN_10376a914(auStack_88);
            lVar16 = *(long *)(uVar14 + 0x10);
            if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10376a268);
              (*pcVar8)();
            }
            *(long *)(uVar14 + 0x10) = lVar16 + 1;
          }
          else {
            lVar16 = *(long *)(uStack_f0 + 0x38) + uVar10 * 0x20;
            FUN_10376a914(lVar16);
            func_0x000100102924(&uStack_d0,lVar16);
            func_0x000107c61430(uVar4,2);
            func_0x000101edeb30(uVar3,uVar5,uVar7);
            FUN_10376a914(auStack_88);
          }
        }
      }
    }
    bVar9 = SCARRY8(lVar20,1);
    lVar20 = lVar20 + 1;
    if (bVar9) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10376a260);
      (*pcVar8)();
    }
    if ((long)(0x3f - uVar18 >> 6) <= lVar20) break;
    uVar19 = puVar22[lVar20];
  }
  func_0x000107c6142c(puVar23);
  func_0x000101ee1938(puVar23,puVar22,~uVar18,lVar21,0);
  uVar19 = uVar12;
  lVar20 = lVar2;
  if (bVar6 != 2) {
    lVar20 = 0;
    uVar19 = 0xe000000000000000;
  }
  if (bVar6 < 2) {
    uVar19 = uVar12;
    lVar20 = lVar2;
  }
  puVar23 = PTR_PTR_1126ad6d0;
  func_0x000107c610f8();
  FUN_103765724(lVar2,uVar12,bVar6);
  func_0x000107c5fadc(lVar20,uVar19);
  func_0x000107c6142c(uVar19);
  uVar12 = uStack_f8;
  func_0x000107c5f9dc(uStack_f8,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                      PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(uStack_f8);
  func_0x000107c48b28();
  func_0x000107c61170(lVar20);
  func_0x000107c61170(uVar12);
  *param_1 = puVar23;
  return;
}



/* Entry: 10376a278; end: 10376a2d7; -[_TtC20SendToRankingRecents36ComposerSendToRankingSubjectProvider init] */

void FUN_10376a278(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToRankingRecents.ComposerSendToRankingSubjectProvider",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10376a2a4);
  (*pcVar1)();
}



/* Entry: 10376a2d8; end: 10376a343; -[_TtC20SendToRankingRecents36ComposerSendToRankingSubjectProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010376a304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010376a328: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010376a308) */
/* WARNING: Removing unreachable block (ram,0x00010376a32c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10376a2d8(long param_1)

{
  FUN_10376a914(param_1 + _DAT_112f906d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f906d8));
  return;
}



/* Entry: 10376a344; end: 10376a363;  */

void FUN_10376a344(void)

{
  func_0x000107c61168(&PTR_PTR_1128e9e18);
  return;
}



/* Entry: 10376a364; end: 10376a3a7;  */

long FUN_10376a364(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10376a3a8; end: 10376a3bf;  */

undefined8 * FUN_10376a3a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 10376a3c0; end: 10376a44b;  */

void FUN_10376a3c0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  lVar2 = *(long *)(unaff_x20 + 0x50);
  lVar4 = *(long *)(unaff_x20 + 0x58);
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10376a93c;
  plVar3[0xf] = lVar2;
  plVar3[0x10] = lVar4;
  plVar3[0xd] = unaff_x20 + 0x20;
  plVar3[0xe] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103769b54,0,0);
  return;
}



/* Entry: 10376a44c; end: 10376a4c3;  */

void FUN_10376a44c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10376a4c4;
  plVar3[0xf] = lVar2;
  plVar3[0x10] = lVar4;
  plVar3[0xd] = unaff_x20 + 0x10;
  plVar3[0xe] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103769388,0,0);
  return;
}



/* Entry: 10376a4c4; end: 10376a4ff;  */

void FUN_10376a4c4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010376a4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10376a500; end: 10376a8cf;  */

void FUN_10376a500(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_a8 [72];
  
  uVar1 = param_2 + 0x40;
  uVar5 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar10 = param_1 + 1 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar1 + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0) {
    uVar5 = ~uVar5;
    uVar11 = param_1;
    uVar6 = uVar1;
    func_0x000107c6026c(param_1,uVar1,uVar5);
    uVar11 = uVar11 + 1 & uVar5;
    do {
      uVar9 = (ulong)*(byte *)(*(long *)(param_2 + 0x30) + uVar10);
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      FUN_1037713c4();
      func_0x000107c5fb58(auStack_a8,uVar9,uVar6);
      func_0x000107c6142c();
      func_0x000107c606a8();
      uVar6 = uVar6 & uVar5;
      if ((long)param_1 < (long)uVar11) {
        if (uVar6 < uVar11) {
LAB_10376a600:
          if ((long)param_1 < (long)uVar6) goto LAB_10376a588;
        }
        puVar2 = (undefined1 *)(*(long *)(param_2 + 0x30) + param_1);
        puVar3 = (undefined1 *)(*(long *)(param_2 + 0x30) + uVar10);
        if ((((long)param_1 < (long)uVar10) || (puVar3 + 1 <= puVar2)) || (param_1 != uVar10)) {
          *puVar2 = *puVar3;
        }
        puVar7 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 0x18);
        puVar8 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar10 * 0x18);
        if ((((long)param_1 < (long)uVar10) || (puVar8 + 3 <= puVar7)) || (param_1 != uVar10)) {
          uVar13 = puVar8[1];
          uVar12 = *puVar8;
          puVar7[2] = puVar8[2];
          puVar7[1] = uVar13;
          *puVar7 = uVar12;
          param_1 = uVar10;
        }
      }
      else if (uVar11 <= uVar6) goto LAB_10376a600;
LAB_10376a588:
      uVar10 = uVar10 + 1 & uVar5;
      uVar6 = uVar9;
    } while ((*(ulong *)(uVar1 + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0);
  }
  uVar5 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(uVar1 + uVar5) = *(ulong *)(uVar1 + uVar5) & (-1L << (param_1 & 0x3f)) - 1U;
  if (SBORROW8(*(long *)(param_2 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10376a6c0);
    (*pcVar4)();
  }
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  return;
}



/* Entry: 10376a8d0; end: 10376a913;  */

void FUN_10376a8d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f905e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ad6d0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f905e0 = puVar1;
  return;
}



/* Entry: 10376a914; end: 10376a943;  */

void FUN_10376a914(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010376a928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 10376a944; end: 10376a9b7;  */

long FUN_10376a944(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10376a9b8; end: 10376aaef;  */

undefined8 * FUN_10376a9b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  
  *param_1 = *param_2;
  lVar5 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = lVar5;
  pcVar4 = (code *)**(undefined8 **)(lVar5 + -8);
  func_0x000107c6157c();
  (*pcVar4)(param_1 + 1,param_2 + 1,lVar5);
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  uVar1 = param_2[8];
  uVar3 = param_2[9];
  param_1[8] = uVar1;
  param_1[9] = uVar3;
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar3);
  return param_1;
}



/* Entry: 10376aaf0; end: 10376ab7b;  */

undefined8 * FUN_10376aaf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61574(uVar1);
  FUN_10376c430(param_1 + 1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  func_0x000107c61170(uVar2);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61574(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61574(uVar1);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10376ab7c; end: 10376ac3f;  */

int FUN_10376ab7c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10376ac40; end: 10376adff;  */

void FUN_10376ac40(void)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0xd000000000000013;
  pcVar2 = "modelNotAvailable";
  if (cVar4 != '\x01') {
    uVar1 = 0xd000000000000011;
    pcVar2 = "pll:sendto:remoteRank";
  }
  pcVar3 = "invalidModelContent";
  uVar5 = 0xd000000000000011;
  if (cVar4 != '\0') {
    pcVar3 = pcVar2;
    uVar5 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar5,(ulong)pcVar3 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar3 | 0x8000000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 10376ae00; end: 10376ae83;  */

void FUN_10376ae00(undefined8 *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar1 = 0xd000000000000013;
  pcVar2 = "modelNotAvailable";
  if (*unaff_x20 != '\x01') {
    uVar1 = 0xd000000000000011;
    pcVar2 = "pll:sendto:remoteRank";
  }
  pcVar3 = "invalidModelContent";
  uVar4 = 0xd000000000000011;
  if (*unaff_x20 != '\0') {
    pcVar3 = pcVar2;
    uVar4 = uVar1;
  }
  *param_1 = uVar4;
  param_1[1] = (ulong)pcVar3 | 0x8000000000000000;
  return;
}



/* Entry: 10376ae84; end: 10376b08f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10376ae84(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  long lVar10;
  undefined8 uVar11;
  
  lVar9 = 0x6e776f6e6b6e75;
  lVar10 = *(long *)(unaff_x22 + 0x240);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x248) = param_1;
  func_0x000107c61428();
  uVar4 = *param_1;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000015;
  func_0x000100029b28(0xd000000000000015,0x800000010f163af0);
  *(undefined8 *)(unaff_x22 + 0x250) = uVar5;
  func_0x000107c61170(uVar4);
  func_0x0001000d224c(unaff_x22 + 0x1a0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar8 = uVar4;
  FUN_10376c498(unaff_x22 + 0x1a0);
  lVar10 = *(long *)(lVar10 + 0x48);
  uVar2 = *(uint *)(lVar10 + _DAT_112fe2248);
  if ((char)((long *)(lVar10 + _DAT_112fe2270))[1] != '\x01') {
    lVar6 = *(long *)(lVar10 + _DAT_112fe2270);
    func_0x000106c97fd0();
    func_0x0001008cc2b4();
    func_0x000107c61180();
    if (lVar6 != 0) {
      lVar9 = lVar6;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
      uVar11 = uVar8;
      func_0x000107c5fb1c();
      func_0x000107c6142c(uVar8);
      goto LAB_10376afac;
    }
  }
  uVar11 = 0xe700000000000000;
LAB_10376afac:
  if (4 < uVar2) {
    uVar2 = 5;
  }
  bVar3 = *(char *)(lVar10 + _DAT_112fe2278) == '\0';
  uVar8 = 0x65746e6573657270;
  if (bVar3) {
    uVar8 = 0x6e65736572706e75;
  }
  *(ulong *)(unaff_x22 + 0x110) = (ulong)uVar2;
  *(long *)(unaff_x22 + 0x118) = lVar9;
  uVar1 = 0xe900000000000064;
  if (bVar3) {
    uVar1 = 0xeb00000000646574;
  }
  *(undefined8 *)(unaff_x22 + 0x120) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar1;
  *(undefined1 *)(unaff_x22 + 0x138) = 0;
  FUN_10377d64c(unaff_x22 + 0x10,unaff_x22 + 0x110,uVar4,uVar5);
  func_0x000107c6142c(uVar11);
  func_0x000107c6142c(uVar1);
  FUN_10376c430(unaff_x22 + 0x1a0);
  plVar7 = (long *)0x130;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 600) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10376b090;
  lVar9 = *(long *)(unaff_x22 + 0x240);
  plVar7[0xd] = unaff_x22 + 0x1c8;
  plVar7[0xe] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376b500,0,0);
  return;
}



/* Entry: 10376b090; end: 10376b0eb;  */

void FUN_10376b090(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x260) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 600));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10376b0ec;
  }
  else {
    pcVar1 = FUN_10376b2e8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10376b0ec; end: 10376b16b;  */

void FUN_10376b0ec(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e0);
  lVar3 = *(long *)(unaff_x22 + 0x1e8);
  FUN_10376c498(unaff_x22 + 0x1c8,uVar2);
  piVar5 = *(int **)(lVar3 + 0x20);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x268) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10376b16c;
                    /* WARNING: Could not recover jumptable at 0x00010376b168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x238),uVar2,lVar3);
  return;
}



/* Entry: 10376b16c; end: 10376b1ef;  */

void FUN_10376b16c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x270) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x268));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x278) = param_3;
    *(undefined8 *)(lVar2 + 0x280) = param_2;
    *(undefined8 *)(lVar2 + 0x288) = param_1;
    pcVar1 = FUN_10376b1f0;
  }
  else {
    pcVar1 = FUN_10376b3e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10376b1f0; end: 10376b2e7;  */

void FUN_10376b1f0(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x250);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x248);
  FUN_10376c430(unaff_x22 + 0x1c8);
  puVar2 = (undefined8 *)(unaff_x22 + 0x68);
  FUN_10376c498(puVar2,*(undefined8 *)(unaff_x22 + 0x80));
  uVar3 = puVar2[4];
  uVar7 = puVar2[7];
  uVar6 = puVar2[6];
  uVar11 = puVar2[1];
  uVar10 = *puVar2;
  uVar9 = puVar2[3];
  uVar8 = puVar2[2];
  *(undefined8 *)(unaff_x22 + 0xf8) = puVar2[5];
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar8;
  FUN_10377cd3c(1);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  FUN_10376c498(unaff_x22 + 0x10,uVar3);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x191) = *(undefined8 *)(unaff_x22 + 0x59);
  *(undefined8 *)(unaff_x22 + 0x189) = *(undefined8 *)(unaff_x22 + 0x51);
  (**(code **)(lVar1 + 8))(unaff_x22 + 0x170,uVar3,lVar1);
  func_0x000107c61428(puVar5,unaff_x22 + 0x220,0,0);
  uVar3 = *puVar5;
  func_0x000107c61174(uVar3);
  func_0x000100069b5c(uVar4);
  func_0x000107c61170(uVar3);
  FUN_103765578(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010376b2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x288),*(undefined8 *)(unaff_x22 + 0x280),
             *(undefined8 *)(unaff_x22 + 0x278));
  return;
}



/* Entry: 10376b2e8; end: 10376b3e3;  */

void FUN_10376b2e8(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x250);
  puVar6 = *(undefined8 **)(unaff_x22 + 0x248);
  puVar2 = (undefined8 *)(unaff_x22 + 0x68);
  FUN_10376c498(puVar2,*(undefined8 *)(unaff_x22 + 0x80));
  uVar3 = puVar2[4];
  uVar8 = puVar2[7];
  uVar7 = puVar2[6];
  uVar12 = puVar2[1];
  uVar11 = *puVar2;
  uVar10 = puVar2[3];
  uVar9 = puVar2[2];
  *(undefined8 *)(unaff_x22 + 0xb8) = puVar2[5];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar3;
  *(undefined8 *)(unaff_x22 + 200) = uVar8;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar9;
  FUN_10377cd3c(0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  FUN_10376c498(unaff_x22 + 0x10,uVar3);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x161) = *(undefined8 *)(unaff_x22 + 0x59);
  *(undefined8 *)(unaff_x22 + 0x159) = *(undefined8 *)(unaff_x22 + 0x51);
  (**(code **)(lVar1 + 0x10))(unaff_x22 + 0x140,uVar4,uVar3,lVar1);
  func_0x000107c61428(puVar6,unaff_x22 + 0x208,0,0);
  uVar3 = *puVar6;
  func_0x000107c61174(uVar3);
  func_0x000100069b5c(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61654();
  FUN_103765578(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010376b3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10376b3e4; end: 10376b4e7;  */

void FUN_10376b3e4(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  FUN_10376c430(unaff_x22 + 0x1c8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x250);
  puVar6 = *(undefined8 **)(unaff_x22 + 0x248);
  puVar2 = (undefined8 *)(unaff_x22 + 0x68);
  FUN_10376c498(puVar2,*(undefined8 *)(unaff_x22 + 0x80));
  uVar3 = puVar2[4];
  uVar8 = puVar2[7];
  uVar7 = puVar2[6];
  uVar12 = puVar2[1];
  uVar11 = *puVar2;
  uVar10 = puVar2[3];
  uVar9 = puVar2[2];
  *(undefined8 *)(unaff_x22 + 0xb8) = puVar2[5];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar3;
  *(undefined8 *)(unaff_x22 + 200) = uVar8;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar9;
  FUN_10377cd3c(0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  FUN_10376c498(unaff_x22 + 0x10,uVar3);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x161) = *(undefined8 *)(unaff_x22 + 0x59);
  *(undefined8 *)(unaff_x22 + 0x159) = *(undefined8 *)(unaff_x22 + 0x51);
  (**(code **)(lVar1 + 0x10))(unaff_x22 + 0x140,uVar4,uVar3,lVar1);
  func_0x000107c61428(puVar6,unaff_x22 + 0x208,0,0);
  uVar3 = *puVar6;
  func_0x000107c61174(uVar3);
  func_0x000100069b5c(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61654();
  FUN_103765578(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010376b4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10376b4e8; end: 10376b4ff;  */

void FUN_10376b4e8(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376b500,0,0);
  return;
}



/* Entry: 10376b500; end: 10376b5cf;  */

void FUN_10376b500(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x22;
  
  puVar1 = *(undefined1 **)(*(long *)(unaff_x22 + 0x70) + 0x30);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0x78) = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    lVar6 = *(long *)(unaff_x22 + 0x70);
    puVar2 = puVar1;
    func_0x000107c614f0();
    *(undefined1 **)(unaff_x22 + 0x80) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(lVar6 + 0x40);
    plVar3 = (long *)0xd0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x90) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_10376b5d0;
    plVar3[0x12] = 1;
    plVar3[0x13] = (long)puVar1;
    lVar6 = 0x112f90770;
    func_0x0001000285a8(0x112f90770,&UNK_10dc08ed8);
    plVar3[0x14] = lVar6;
    uVar5 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xf;
    uVar4 = uVar5 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar3[0x15] = uVar4;
    uVar5 = uVar5 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar3[0x16] = uVar5;
    lVar6 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar5 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xf;
    uVar4 = uVar5 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar3[0x17] = uVar4;
    uVar5 = uVar5 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar3[0x18] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10376be1c,0,0);
    return;
  }
  FUN_10376bccc();
  func_0x000107c613f8(&UNK_11068fa90,puVar1,0,0);
  *puVar1 = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x00010376b5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10376b5d0; end: 10376b63b;  */

void FUN_10376b5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  *(undefined8 *)(lVar2 + 0x28) = param_3;
  *(undefined8 *)(lVar2 + 0x30) = param_4;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  *(undefined8 *)(lVar2 + 0x98) = param_2;
  *(undefined8 *)(lVar2 + 0xa0) = param_4;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10376b63c;
  }
  else {
    pcVar1 = FUN_10376b7ec;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}


