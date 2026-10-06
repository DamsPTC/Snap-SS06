/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f17f50; end: 102f180af;  */

/* WARNING: Removing unreachable block (ram,0x000102f18038) */

bool FUN_102f17f50(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x000107c5b1f8();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_102f1c198(0,0x112d54e00,&PTR_PTR_1126bcf68);
  uVar3 = param_1;
  func_0x000107c5fc54(param_1,uVar2);
  func_0x000107c61170(param_1);
  if ((uVar3 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f180ac);
      (*pcVar1)();
    }
    lVar4 = *(long *)(uVar3 + 0x20);
    func_0x000107c61174();
  }
  else {
    lVar4 = 0;
    uVar2 = uVar3;
    func_0x000101016c54(0,uVar3);
  }
  func_0x000107c6142c(uVar3);
  lVar5 = lVar4;
  func_0x000107c3eea8();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar5;
  func_0x000107c5ee30();
  func_0x000107c61170(lVar5);
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  lVar5 = lVar4;
  func_0x0001010282b0(lVar4,uVar2);
  func_0x00010006c090(lVar4,uVar2);
  lVar4 = lVar5;
  func_0x000107c3e324();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar6 = lVar4;
    func_0x000107c3e32c();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    return lVar6 != 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f180b0);
  (*pcVar1)();
}



/* Entry: 102f180b0; end: 102f1ae8b;  */

undefined * FUN_102f180b0(long param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined1 auStack_a8 [32];
  long lStack_88;
  undefined *apuStack_80 [4];
  
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != 0) {
    func_0x000107c4fa70();
    func_0x000107c61180();
    puVar15 = PTR___sypN_11034f1a8;
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (param_1 != 0) {
      lVar4 = param_1;
      func_0x000107c5fc54();
      func_0x000107c61170(param_1);
      lVar18 = *(long *)(lVar4 + 0x10);
      if (lVar18 == 0) {
        func_0x000107c6142c(lVar4);
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        lVar14 = lVar4;
        do {
          lVar14 = lVar14 + 0x20;
          func_0x0001000bb420(lVar14,apuStack_80);
          func_0x000100102924(apuStack_80,auStack_a8);
          uVar7 = 0x112d6dfc8;
          func_0x0001000285a8(0x112d6dfc8,&UNK_10d9301c0);
          plVar8 = &lStack_88;
          func_0x000107c6147c(plVar8,auStack_a8,puVar15 + 8,uVar7,6);
          lVar2 = lStack_88;
          if ((((ulong)plVar8 & 1) != 0) && (lStack_88 != 0)) {
            puVar6 = puVar9;
            func_0x000107c61550();
            if (((int)puVar6 == 0) ||
               (((long)puVar9 < 0 || (puVar6 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)))) {
              if ((ulong)puVar9 >> 0x3e == 0) {
                puVar5 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar5 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar9) {
                  puVar5 = puVar9;
                }
                func_0x000107c60480(puVar5);
              }
              puVar6 = (undefined *)0x0;
              FUN_102ed62e0(0,puVar5 + 1,1,puVar9);
            }
            uVar13 = (ulong)puVar6 & 0xffffffffffffff8;
            uVar1 = *(ulong *)(uVar13 + 0x10);
            puVar9 = puVar6;
            if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar1) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
              FUN_102ed62e0(puVar9,uVar1 + 1,1,puVar6);
              uVar13 = (ulong)puVar9 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar13 + 0x10) = uVar1 + 1;
            *(long *)(uVar13 + uVar1 * 8 + 0x20) = lVar2;
          }
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        func_0x000107c6142c(lVar4);
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
    }
  }
  if ((ulong)puVar9 >> 0x3e == 0) {
    puVar15 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar15 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar9) {
      puVar15 = puVar9;
    }
    func_0x000107c60480();
  }
  if (puVar15 == (undefined *)0x0) {
    func_0x000107c6142c(puVar9);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar5 = (undefined *)((ulong)puVar15 & ((long)puVar15 >> 0x3f ^ 0xffffffffffffffffU));
    apuStack_80[0] = puVar6;
    func_0x000100403514(0,puVar5,0);
    if ((long)puVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102f183a4);
      (*pcVar3)();
    }
    puVar16 = (undefined *)0x0;
    do {
      puVar6 = apuStack_80[0];
      if (((ulong)puVar9 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10) <= (long)puVar16) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f18354);
          (*pcVar3)();
        }
        puVar17 = *(undefined **)(puVar9 + (long)puVar16 * 8 + 0x20);
        func_0x000107c615f0(puVar17);
        puVar12 = puVar5;
      }
      else {
        puVar17 = puVar16;
        puVar12 = puVar9;
        FUN_102f02de8();
      }
      puVar10 = puVar17;
      func_0x000107c5d984();
      func_0x000107c61180();
      if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102f183a8);
        (*pcVar3)();
      }
      puVar11 = puVar10;
      func_0x000107c5faec();
      puVar5 = puVar12;
      func_0x000107c615e8(puVar17);
      func_0x000107c61170(puVar10);
      uVar1 = *(ulong *)(puVar6 + 0x10);
      puVar17 = (undefined *)(uVar1 + 1);
      apuStack_80[0] = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        puVar5 = puVar17;
        func_0x000100403514(1 < *(ulong *)(puVar6 + 0x18),puVar17,1);
      }
      puVar6 = apuStack_80[0];
      puVar16 = puVar16 + 1;
      *(undefined **)(apuStack_80[0] + 0x10) = puVar17;
      *(undefined **)(apuStack_80[0] + uVar1 * 0x10 + 0x20) = puVar11;
      *(undefined **)(apuStack_80[0] + uVar1 * 0x10 + 0x28) = puVar12;
    } while (puVar15 != puVar16);
    func_0x000107c6142c(puVar9);
  }
  return puVar6;
}



/* Entry: 102f1ae8c; end: 102f1af1b;  */

void FUN_102f1ae8c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x000107c4491c();
  if ((uVar1 & 1) == 0) {
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (param_1 != 0) {
      uVar1 = param_1;
      func_0x000107c4e8ec();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      if (uVar1 != 0) {
        uVar2 = uVar1;
        func_0x000107c45370();
        func_0x000107c61180();
        func_0x000107c61170(uVar1);
        if (uVar2 != 0) {
          func_0x000107c61170(uVar2);
        }
      }
    }
  }
  return;
}



/* Entry: 102f1af1c; end: 102f1b2b7;  */

undefined * FUN_102f1af1c(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uStack_70;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar17 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar17 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar17 = param_1;
    }
    func_0x000107c60480();
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar14;
  if (puVar17 != (undefined *)0x0) {
    puVar9 = (undefined *)0x112f281c0;
    FUN_102f1b2b8(puVar14,0x112f281c0,&UNK_10db63bf0);
    lVar16 = 4;
    do {
      uVar15 = lVar16 - 4;
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f1b284);
          (*pcVar4)();
        }
        uVar5 = *(ulong *)(param_1 + lVar16 * 8);
        func_0x000107c61174();
        puVar10 = puVar9;
      }
      else {
        uVar5 = uVar15;
        puVar10 = param_1;
        func_0x000100fb1534();
      }
      puVar1 = (undefined *)(lVar16 + -3);
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102f1b27c);
        (*pcVar4)();
      }
      uVar15 = uVar5;
      func_0x000107c5bfcc(uVar5);
      func_0x000107c61180();
      uVar6 = uVar15;
      func_0x000107c5ee30();
      func_0x000107c61170(uVar15);
      puVar7 = PTR_PTR_1126cf408;
      func_0x000107c610f8();
      uVar15 = uVar6;
      func_0x000107c5ee20(uVar6,puVar10);
      uStack_70 = 0;
      func_0x000107c4636c();
      func_0x000107c61170(uVar15);
      if (puVar7 == (undefined *)0x0) {
        uVar18 = uStack_70;
        func_0x000107c61174();
        func_0x000107c5ed30(0);
        func_0x000107c61170(uVar18);
        func_0x000107c61654();
        func_0x000107c614ac(uStack_70);
        func_0x000107c61170(uVar5);
        func_0x00010006c090(uVar6);
        puVar9 = puVar10;
      }
      else {
        func_0x000107c61174();
        func_0x00010006c090(uVar6);
        uVar15 = uVar5;
        func_0x000107c5bfec();
        func_0x000107c61180();
        uVar6 = uVar15;
        func_0x000107c5faec();
        func_0x000107c61170(uVar15);
        func_0x000107c61174();
        puVar8 = puVar14;
        func_0x000107c61558();
        uVar15 = uVar6;
        puVar11 = puVar10;
        func_0x000100029284();
        uVar13 = (ulong)~(uint)puVar11 & 1;
        lVar2 = *(long *)(puVar14 + 0x10) + uVar13;
        if (SCARRY8(*(long *)(puVar14 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f1b280);
          (*pcVar4)();
        }
        if (*(long *)(puVar14 + 0x18) < lVar2) {
          FUN_102f0bde0(lVar2,puVar8,0x112f281c0,&UNK_10db63bf0);
          uVar15 = uVar6;
          puVar9 = puVar10;
          func_0x000100029284();
          if (((uint)puVar11 & 1) != ((uint)puVar9 & 1)) goto LAB_102f1b2a8;
        }
        else {
          puVar9 = puVar11;
          if (((ulong)puVar8 & 1) == 0) {
            puVar9 = &UNK_10db63bf0;
            FUN_102f0bc80(0x112f281c0);
          }
        }
        if (((ulong)puVar11 & 1) == 0) {
          *(ulong *)(puVar14 + (uVar15 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar14 + (uVar15 >> 6) * 8 + 0x40) | 1L << (uVar15 & 0x3f);
          puVar3 = (ulong *)(*(long *)(puVar14 + 0x30) + uVar15 * 0x10);
          *puVar3 = uVar6;
          puVar3[1] = (ulong)puVar10;
          *(undefined **)(*(long *)(puVar14 + 0x38) + uVar15 * 8) = puVar7;
          func_0x000107c61170(puVar7);
          func_0x000107c61170(uVar5);
          if (SCARRY8(*(long *)(puVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102f1b288);
            (*pcVar4)();
          }
          *(long *)(puVar14 + 0x10) = *(long *)(puVar14 + 0x10) + 1;
        }
        else {
          uVar18 = *(undefined8 *)(*(long *)(puVar14 + 0x38) + uVar15 * 8);
          *(undefined **)(*(long *)(puVar14 + 0x38) + uVar15 * 8) = puVar7;
          func_0x000107c61170(puVar7);
          func_0x000107c6142c(puVar10);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(uVar18);
        }
      }
      lVar16 = lVar16 + 1;
    } while (puVar1 != puVar17);
    if (*(long *)(puVar14 + 0x10) != 0) goto LAB_102f1b23c;
    func_0x000107c6142c(puVar14);
  }
  puVar14 = (undefined *)0x0;
LAB_102f1b23c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return puVar14;
  }
  func_0x000107c60e78();
LAB_102f1b2a8:
  func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102f1b2b8);
  (*pcVar4)();
}



/* Entry: 102f1b2b8; end: 102f1b3af;  */

undefined * FUN_102f1b2b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102f1b3ac);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102f1b3b0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102f1b3b0; end: 102f1b6e7;  */

void FUN_102f1b3b0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 auStack_c0 [32];
  long lStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar6 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uStack_90 = ~uVar6;
  puStack_98 = (ulong *)(param_1 + 0x40);
  uVar6 = -uVar6;
  uStack_80 = 0xffffffffffffffff;
  if (uVar6 < 0x40) {
    uStack_80 = ~(-1L << (uVar6 & 0x3f));
  }
  uStack_88 = 0;
  uStack_80 = uStack_80 & *puStack_98;
  lStack_a0 = param_1;
  uStack_78 = param_2;
  uStack_70 = param_3;
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  func_0x000100216040(&uStack_d0);
  uVar2 = uStack_c8;
  uVar6 = uStack_d0;
  if (uStack_c8 == 0) goto LAB_102f1b6a4;
  func_0x000100102924(auStack_c0,auStack_f0);
  lVar9 = *param_5;
  uVar4 = uVar6;
  uVar5 = uVar2;
  func_0x000100029284();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar10 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
LAB_102f1b6e0:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102f1b6e4);
    (*pcVar3)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar10) {
    func_0x000100102b0c(lVar10,param_4 & 1);
    uVar4 = uVar6;
    uVar8 = uVar2;
    func_0x000100029284();
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_102f1b4b4:
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102f1b4c4);
      (*pcVar3)();
    }
LAB_102f1b4c8:
    if ((uVar5 & 1) != 0) goto LAB_102f1b4cc;
LAB_102f1b524:
    lVar7 = *param_5;
    lVar10 = lVar7 + (uVar4 >> 6) * 8;
    *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
    *puVar1 = uVar6;
    puVar1[1] = uVar2;
    func_0x000100102924(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_102f1b6e4:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102f1b6e8);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  }
  else {
    if ((param_4 & 1) != 0) goto LAB_102f1b4c8;
    func_0x0001010fc388();
    if ((uVar5 & 1) == 0) goto LAB_102f1b524;
LAB_102f1b4cc:
    lVar10 = *param_5;
    func_0x0001000bb420(auStack_f0,auStack_110);
    func_0x000107c6142c(uVar2);
    func_0x000102f1bc04(auStack_f0);
    lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
    func_0x000102f1bc04(lVar10);
    func_0x000100102924(auStack_110,lVar10);
  }
  func_0x000100216040(&uStack_d0);
  uVar6 = uStack_d0;
  uVar2 = uStack_c8;
  while (uVar2 != 0) {
    uStack_d0 = uVar6;
    uStack_c8 = uVar2;
    func_0x000100102924(auStack_c0,auStack_f0);
    lVar9 = *param_5;
    uVar4 = uVar6;
    uVar5 = uVar2;
    func_0x000100029284();
    lVar7 = *(long *)(lVar9 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar10 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) goto LAB_102f1b6e0;
    if (*(long *)(lVar9 + 0x18) < lVar10) {
      func_0x000100102b0c(lVar10,1);
      uVar4 = uVar6;
      uVar8 = uVar2;
      func_0x000100029284();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) goto LAB_102f1b4b4;
    }
    if ((uVar5 & 1) == 0) {
      lVar7 = *param_5;
      lVar10 = lVar7 + (uVar4 >> 6) * 8;
      *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
      puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
      *puVar1 = uVar6;
      puVar1[1] = uVar2;
      func_0x000100102924(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_102f1b6e4;
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    }
    else {
      lVar10 = *param_5;
      func_0x0001000bb420(auStack_f0,auStack_110);
      func_0x000107c6142c(uVar2);
      func_0x000102f1bc04(auStack_f0);
      lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
      func_0x000102f1bc04(lVar10);
      func_0x000100102924(auStack_110,lVar10);
    }
    func_0x000100216040(&uStack_d0);
    uVar6 = uStack_d0;
    uVar2 = uStack_c8;
  }
LAB_102f1b6a4:
  func_0x000100d2bbe0(lStack_a0,puStack_98,uStack_90,uStack_88,uStack_80);
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 102f1b6e8; end: 102f1ba03;  */

undefined * FUN_102f1b6e8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  undefined1 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 auStack_b0 [4];
  undefined1 auStack_90 [8];
  undefined8 auStack_88 [3];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar11 = auStack_70 + lVar2;
  func_0x000107c5fadc(param_2,param_3);
  lVar3 = param_2;
  func_0x000108ea5f00();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  lVar4 = lVar3;
  func_0x000107c5faec();
  func_0x000107c61170(lVar3);
  lVar3 = lVar4;
  uVar9 = param_3;
  func_0x000107c5fb5c(lVar4,param_3);
  if (0 < lVar3) {
    lVar5 = *(long *)(param_1 + 0x10);
    func_0x000107c4008c();
    func_0x000107c61180();
    lVar3 = lVar5;
    func_0x000107c427c0();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar3 != 0) {
      lVar5 = lVar3;
      uStack_68 = param_4;
      func_0x000107c4a8c4(lVar3);
      func_0x000107c61180();
      lVar6 = lVar5;
      func_0x000107c5faec();
      uVar10 = uVar9;
      func_0x000107c61170(lVar5);
      lVar5 = lVar3;
      func_0x000107c4a804(lVar3);
      func_0x000107c61180();
      lVar12 = lVar5;
      func_0x000107c5faec();
      func_0x000107c61170(lVar5);
      func_0x0001044d64d8(0);
      func_0x000107c610f8();
      func_0x0001044d5bec(lVar6,uVar9,lVar12,uVar10);
      lVar12 = *(long *)(param_1 + 0x28);
      lVar5 = lVar12;
      FUN_102f14c50();
      if ((int)lVar5 != 0) {
        func_0x000107c4e8d8();
        func_0x000107c61180();
        if (lVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102f1ba00);
          (*pcVar1)();
        }
        lVar5 = lVar12;
        func_0x000107c4e8ec();
        func_0x000107c61180();
        func_0x000107c61170(lVar12);
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102f1ba04);
          (*pcVar1)();
        }
        func_0x000107c44b24();
        func_0x000107c61170(lVar5);
      }
      func_0x000107c49c14(uStack_68);
      func_0x000107c5ee80(puVar11,0x40f5180000000000);
      lVar5 = 0;
      func_0x000107c5eea4();
      lVar12 = *(long *)(lVar5 + -8);
      (**(code **)(lVar12 + 0x38))(puVar11,0,1,lVar5);
      func_0x000107c5fadc(lVar4,param_3);
      func_0x000107c6142c(param_3);
      puVar7 = puVar11;
      (**(code **)(lVar12 + 0x30))(puVar11,1,lVar5);
      puVar13 = (undefined1 *)0x0;
      if ((int)puVar7 != 1) {
        func_0x000107c5ee70();
        (**(code **)(lVar12 + 8))(puVar11,lVar5);
        puVar13 = puVar7;
      }
      puVar8 = PTR_PTR_1126c3390;
      func_0x000107c610f8(PTR_PTR_1126c3390);
      *(undefined8 *)((long)auStack_88 + lVar2 + 0x10) = 0;
      *(undefined8 *)((long)auStack_88 + lVar2 + 8) = 0;
      *(undefined8 *)((long)auStack_88 + lVar2) = 0;
      auStack_90[lVar2] = 0;
      *(undefined1 **)((long)auStack_b0 + lVar2 + 0x10) = puVar13;
      *(undefined8 *)((long)auStack_b0 + lVar2 + 0x18) = 0;
      *(undefined8 *)((long)auStack_b0 + lVar2 + 8) = 0;
      *(undefined8 *)((long)auStack_b0 + lVar2) = 0;
      func_0x000107c45b38();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar13);
      return puVar8;
    }
  }
  func_0x000107c6142c(param_3);
  return (undefined *)0x0;
}



/* Entry: 102f1ba04; end: 102f1bb63;  */

undefined * FUN_102f1ba04(long param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  
  uVar7 = *(ulong *)(param_1 + 8);
  if (uVar7 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar2 = uVar7;
    }
    func_0x000107c60480();
  }
  if (uVar2 == 0) {
    lVar8 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    if ((uVar7 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar7 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f1bb44);
        (*pcVar1)();
      }
      lVar8 = *(long *)(uVar7 + 0x20);
      func_0x000107c6157c(lVar8);
      uVar7 = param_2;
    }
    else {
      lVar8 = 0;
      FUN_102f02a90();
    }
    lVar3 = *(long *)(lVar8 + 0x38);
    func_0x000107c61174();
    func_0x000107c61574(lVar8);
    lVar8 = lVar3;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar8 != 0) {
      lVar4 = lVar8;
      func_0x000107c5faec();
      func_0x000107c61170(lVar8);
      puVar5 = (undefined *)0x0;
      func_0x0001000d182c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar2 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000d182c(puVar6,uVar2 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar2 + 1;
      *(long *)(puVar6 + uVar2 * 0x10 + 0x20) = lVar4;
      *(ulong *)(puVar6 + uVar2 * 0x10 + 0x28) = uVar7;
    }
    func_0x000107c61170(lVar3);
    lVar8 = *(long *)(puVar6 + 0x10);
  }
  if (lVar8 == 0) {
    func_0x000107c6142c();
    puVar6 = (undefined *)0x0;
  }
  return puVar6;
}



/* Entry: 102f1bb64; end: 102f1bbeb;  */

undefined8 FUN_102f1bb64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102f1bbec; end: 102f1bc23;  */

undefined8 * FUN_102f1bbec(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102f1bc24; end: 102f1c0af;  */

undefined1  [16] FUN_102f1bc24(long param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 != 0) {
    func_0x0001018740f8(0,lVar13,0);
    puVar12 = (undefined8 *)(param_1 + 0x28);
    do {
      puVar9 = (undefined *)puVar12[-1];
      uVar14 = *puVar12;
      puVar3 = PTR_PTR_1126b25c0;
      func_0x000107c610f8();
      func_0x00010006c00c(puVar9,uVar14);
      func_0x00010006c00c(puVar9,uVar14);
      puVar4 = puVar9;
      func_0x000107c5ee20(puVar9,uVar14);
      func_0x000107c4636c();
      func_0x000107c61170(puVar4);
      uVar5 = 0;
      if (puVar3 == (undefined *)0x0) {
        uVar7 = uVar5;
        func_0x000107c61174();
        func_0x000107c5ed30(0);
        func_0x000107c61170(uVar7);
        func_0x000107c61654();
        func_0x00010006c090(puVar9,uVar14);
        func_0x000107c614ac(uVar5);
      }
      else {
        func_0x000107c61174();
        uVar5 = uVar14;
        func_0x00010006c090(puVar9);
        puVar4 = puVar3;
        func_0x000107c44bb8();
        if (((ulong)puVar4 & 1) != 0) {
          puVar4 = puVar3;
          func_0x000107c5ca90();
          func_0x000107c61180();
          if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102f1c0a4);
            (*pcVar2)();
          }
          func_0x000107c59340();
          func_0x000107c61170(puVar4);
          puVar4 = puVar3;
          func_0x000107c5ca90();
          func_0x000107c61180();
          if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102f1c0a0);
            (*pcVar2)();
          }
          func_0x000107c563fc();
          func_0x000107c61170(puVar4);
          puVar4 = puVar3;
          func_0x000107c41214();
          func_0x000107c61180();
          if (puVar4 != (undefined *)0x0) {
            puVar6 = puVar4;
            func_0x000107c5ee30();
            func_0x000107c61170(puVar4);
            func_0x000107c61170(puVar3);
            func_0x00010006c090(puVar9,uVar14);
            puVar9 = puVar6;
            uVar14 = uVar5;
            goto LAB_102f1be00;
          }
        }
        func_0x000107c61170(puVar3);
      }
LAB_102f1be00:
      uVar1 = *(ulong *)(puVar11 + 0x10);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
        func_0x0001018740f8(1 < *(ulong *)(puVar11 + 0x18),uVar1 + 1,1);
      }
      puVar12 = puVar12 + 2;
      *(ulong *)(puVar11 + 0x10) = uVar1 + 1;
      *(undefined **)(puVar11 + uVar1 * 0x10 + 0x20) = puVar9;
      *(undefined8 *)(puVar11 + uVar1 * 0x10 + 0x28) = uVar14;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar13 = *(long *)(param_2 + 0x10);
  if (lVar13 != 0) {
    func_0x0001018740f8(0,lVar13,0);
    puVar12 = (undefined8 *)(param_2 + 0x28);
    do {
      puVar3 = (undefined *)puVar12[-1];
      uVar14 = *puVar12;
      puVar4 = PTR_PTR_1126b25c0;
      func_0x000107c610f8();
      func_0x00010006c00c(puVar3,uVar14);
      func_0x00010006c00c(puVar3,uVar14);
      puVar6 = puVar3;
      func_0x000107c5ee20(puVar3,uVar14);
      func_0x000107c4636c();
      func_0x000107c61170(puVar6);
      uVar5 = 0;
      if (puVar4 == (undefined *)0x0) {
        uVar7 = uVar5;
        func_0x000107c61174();
        func_0x000107c5ed30(0);
        func_0x000107c61170(uVar7);
        func_0x000107c61654();
        func_0x00010006c090(puVar3,uVar14);
        func_0x000107c614ac(uVar5);
      }
      else {
        func_0x000107c61174();
        uVar5 = uVar14;
        func_0x00010006c090(puVar3);
        puVar6 = puVar4;
        func_0x000107c44bb8();
        if (((ulong)puVar6 & 1) != 0) {
          puVar6 = puVar4;
          func_0x000107c5ca90();
          func_0x000107c61180();
          if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102f1c0ac);
            (*pcVar2)();
          }
          func_0x000107c59340();
          func_0x000107c61170(puVar6);
          puVar6 = puVar4;
          func_0x000107c5ca90();
          func_0x000107c61180();
          if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102f1c0a8);
            (*pcVar2)();
          }
          func_0x000107c563fc();
          func_0x000107c61170(puVar6);
          puVar6 = puVar4;
          func_0x000107c41214();
          func_0x000107c61180();
          if (puVar6 != (undefined *)0x0) {
            puVar8 = puVar6;
            func_0x000107c5ee30();
            func_0x000107c61170(puVar6);
            func_0x000107c61170(puVar4);
            func_0x00010006c090(puVar3,uVar14);
            puVar3 = puVar8;
            uVar14 = uVar5;
            goto LAB_102f1bff0;
          }
        }
        func_0x000107c61170(puVar4);
      }
LAB_102f1bff0:
      uVar1 = *(ulong *)(puVar9 + 0x10);
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
        func_0x0001018740f8(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
      }
      puVar12 = puVar12 + 2;
      *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
      *(undefined **)(puVar9 + uVar1 * 0x10 + 0x20) = puVar3;
      *(undefined8 *)(puVar9 + uVar1 * 0x10 + 0x28) = uVar14;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  puVar4 = puVar11;
  puVar3 = puVar9;
  func_0x000101731444(puVar11,puVar9);
  func_0x000107c6142c(puVar11);
  func_0x000107c6142c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    auVar15._4_4_ = 0;
    auVar15._0_4_ = (uint)puVar4 & 1;
    auVar15._8_8_ = puVar3;
    return auVar15;
  }
  func_0x000107c60e78();
  puVar11 = *(undefined **)(puVar9 + 8);
  if ((ulong)puVar11 >> 0x3e == 0) {
    puVar9 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar9 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar11) {
      puVar9 = puVar11;
    }
    func_0x000107c60480();
  }
  if (puVar9 != (undefined *)0x0) {
    if (((ulong)puVar11 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102f1c198);
        (*pcVar2)();
      }
      lVar13 = *(long *)(puVar11 + 0x20);
      func_0x000107c6157c(lVar13);
      puVar11 = puVar3;
    }
    else {
      lVar13 = 0;
      FUN_102f02a90(0,puVar11);
    }
    lVar10 = *(long *)(lVar13 + 0x38);
    func_0x000107c61174();
    func_0x000107c61574(lVar13);
    lVar13 = lVar10;
    func_0x000107c5b3e8();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    if (lVar13 != 0) {
      lVar10 = lVar13;
      func_0x000107c5faec(lVar13);
      func_0x000107c61170(lVar13);
      goto LAB_102f1c158;
    }
  }
  lVar10 = 0;
  puVar11 = (undefined *)0x0;
LAB_102f1c158:
  auVar16._8_8_ = puVar11;
  auVar16._0_8_ = lVar10;
  return auVar16;
}



/* Entry: 102f1c0b0; end: 102f1c197;  */

void FUN_102f1c0b0(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar2 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar2 != 0) {
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f1c198);
        (*pcVar1)();
      }
      lVar5 = *(long *)(uVar4 + 0x20);
      func_0x000107c6157c(lVar5);
    }
    else {
      lVar5 = 0;
      FUN_102f02a90(0,uVar4);
    }
    lVar3 = *(long *)(lVar5 + 0x38);
    func_0x000107c61174();
    func_0x000107c61574(lVar5);
    lVar5 = lVar3;
    func_0x000107c5b3e8();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar5 != 0) {
      func_0x000107c5faec(lVar5);
      func_0x000107c61170(lVar5);
    }
  }
  return;
}



/* Entry: 102f1c198; end: 102f1c1d7;  */

void FUN_102f1c198(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102f1c1d8; end: 102f1c217;  */

void FUN_102f1c1d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f281f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s10Foundation4DataVSTAAMc_110350af8;
  func_0x000107c61520(PTR___s10Foundation4DataVSTAAMc_110350af8,PTR___s10Foundation4DataVN_110350ae0
                     );
  puRam0000000112f281f0 = puVar1;
  return;
}



/* Entry: 102f1c218; end: 102f1c2db;  */

int FUN_102f1c218(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102f1c2dc; end: 102f1c313;  */

void FUN_102f1c2dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102f1c314; end: 102f1c33f;  */

void FUN_102f1c314(undefined8 *param_1,long param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 0x70);
  func_0x000107c61174();
  return;
}



/* Entry: 102f1c340; end: 102f1c34f;  */

void FUN_102f1c340(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x70) = 0;
  *param_1 = uVar1;
  return;
}



/* Entry: 102f1c350; end: 102f1c3cf;  */

void FUN_102f1c350(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(uVar3);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000102edda80(*(undefined8 *)(unaff_x20 + 0x88),*(undefined1 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 102f1c3d0; end: 102f1c40f;  */

void FUN_102f1c3d0(void)

{
  FUN_102f1c350();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102f1c410; end: 102f1c42f;  */

void FUN_102f1c410(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102f1c430; end: 102f1c48f;  */

ulong * FUN_102f1c430(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    *param_1 = *param_2;
    *(char *)(param_1 + 1) = (char)param_2[1];
    return param_1;
  }
  *param_1 = uVar2;
  *(char *)(param_1 + 1) = (char)param_2[1];
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 102f1c490; end: 102f1c55f;  */

ulong * FUN_102f1c490(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *param_1;
  uVar4 = uVar5;
  if (0xfffffffe < uVar5) {
    uVar4 = 0xffffffff;
  }
  uVar3 = *param_2;
  uVar1 = uVar3;
  if (0xfffffffe < uVar3) {
    uVar1 = 0xffffffff;
  }
  iVar2 = (int)uVar1 + -1;
  if ((int)uVar4 + -1 < 0) {
    if (iVar2 < 0) {
      *param_1 = uVar3;
      func_0x000107c61174(uVar3);
      func_0x000107c61170(uVar5);
      *(char *)(param_1 + 1) = (char)param_2[1];
    }
    else {
      func_0x000107c61170(uVar5);
      uVar4 = *param_2;
      *(char *)(param_1 + 1) = (char)param_2[1];
      *param_1 = uVar4;
    }
  }
  else if (iVar2 < 0) {
    *param_1 = uVar3;
    *(char *)(param_1 + 1) = (char)param_2[1];
    func_0x000107c61174(uVar3);
  }
  else {
    uVar4 = *param_2;
    *(char *)(param_1 + 1) = (char)param_2[1];
    *param_1 = uVar4;
  }
  return param_1;
}



/* Entry: 102f1c560; end: 102f1c5f3;  */

ulong * FUN_102f1c560(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if ((int)uVar1 + -1 < 0) {
    uVar3 = *param_2;
    uVar1 = uVar3;
    if (0xfffffffe < uVar3) {
      uVar1 = 0xffffffff;
    }
    if ((int)uVar1 + -1 < 0) {
      *param_1 = uVar3;
      func_0x000107c61170(uVar2);
    }
    else {
      func_0x000107c61170(uVar2);
      *param_1 = *param_2;
    }
    *(char *)(param_1 + 1) = (char)param_2[1];
  }
  else {
    *param_1 = *param_2;
    *(char *)(param_1 + 1) = (char)param_2[1];
  }
  return param_1;
}



/* Entry: 102f1c5f4; end: 102f1c713;  */

uint FUN_102f1c5f4(ulong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar3 = *param_1;
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar2 = (int)uVar3 - 1;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = 0;
  if (1 < uVar2 + 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 102f1c714; end: 102f1c79b;  */

/* WARNING: Possible PIC construction at 0x000102f1c728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f1c770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f1c780: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f1c774) */
/* WARNING: Removing unreachable block (ram,0x000102f1c72c) */
/* WARNING: Removing unreachable block (ram,0x000102f1c784) */

void FUN_102f1c714(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 102f1c79c; end: 102f1c8c7;  */

undefined8 * FUN_102f1c79c(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar1 = param_2[2];
  uVar5 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar5;
  uVar2 = param_2[4];
  uVar6 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar6;
  uVar3 = param_2[6];
  uVar7 = param_2[7];
  param_1[6] = uVar3;
  param_1[7] = uVar7;
  uVar12 = param_2[8];
  uVar10 = param_2[9];
  param_1[8] = uVar12;
  param_1[9] = uVar10;
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  uVar11 = param_2[0xb];
  param_1[0xb] = uVar11;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined2 *)((long)param_1 + 0x61) = *(undefined2 *)((long)param_2 + 0x61);
  uVar8 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar8;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  uVar9 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar9;
  uVar13 = param_2[0x12];
  param_1[0x12] = uVar13;
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c615f0(uVar1);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar2);
  func_0x000107c615f0(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x000107c615f0(uVar7);
  func_0x000107c61174(uVar12);
  func_0x000107c61434(uVar10);
  func_0x000107c61434(uVar11);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar9);
  func_0x000107c61434(uVar13);
  return param_1;
}



/* Entry: 102f1c8c8; end: 102f1ca83;  */

undefined8 * FUN_102f1c8c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)((long)param_1 + 0x51) = *(undefined1 *)((long)param_2 + 0x51);
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)((long)param_1 + 0x61) = *(undefined1 *)((long)param_2 + 0x61);
  *(undefined1 *)((long)param_1 + 0x62) = *(undefined1 *)((long)param_2 + 0x62);
  param_1[0xd] = param_2[0xd];
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  param_1[0x10] = param_2[0x10];
  uVar1 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102f1ca84; end: 102f1cb8f;  */

undefined8 * FUN_102f1ca84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  func_0x000107c615e8(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(param_1[6]);
  uVar1 = param_1[7];
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(param_1[8]);
  uVar1 = param_1[9];
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)((long)param_1 + 0x51) = *(undefined1 *)((long)param_2 + 0x51);
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)((long)param_1 + 0x61) = *(undefined1 *)((long)param_2 + 0x61);
  *(undefined1 *)((long)param_1 + 0x62) = *(undefined1 *)((long)param_2 + 0x62);
  uVar1 = param_2[0xe];
  uVar2 = param_1[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  param_1[0x10] = param_2[0x10];
  func_0x000107c6142c(param_1[0x11]);
  uVar1 = param_1[0x12];
  uVar2 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102f1cb90; end: 102f1cc4b;  */

int FUN_102f1cb90(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x13] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102f1cc4c; end: 102f1cc83;  */

void FUN_102f1cc4c(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
  func_0x000107c61170(param_1[1]);
  func_0x000107c61170(param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[4]);
  return;
}



/* Entry: 102f1cc84; end: 102f1cda3;  */

undefined8 * FUN_102f1cc84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  uVar3 = param_2[4];
  param_1[4] = uVar3;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 102f1cda4; end: 102f1ce17;  */

undefined8 * FUN_102f1cda4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61170(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Entry: 102f1ce18; end: 102f1cecf;  */

int FUN_102f1ce18(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102f1ced0; end: 102f1cf2f; -[_TtC24SCSnapDocSendServiceImpl26SnapDocStoryPostingSetting init] */

void FUN_102f1ced0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapDocSendServiceImpl.SnapDocStoryPostingSetting",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f1cefc);
  (*pcVar1)();
}



/* Entry: 102f1cf30; end: 102f1cf7b; -[_TtC24SCSnapDocSendServiceImpl26SnapDocStoryPostingSetting .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102f1cf4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f1cf50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f1cf30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f28358));
  return;
}



/* Entry: 102f1cf7c; end: 102f1cf8b; -[_TtC24SCSnapDocSendServiceImpl26SnapDocStoryPostingSetting showToastWhenComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102f1cf7c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f28350);
}



/* Entry: 102f1cf8c; end: 102f1cf97; -[_TtC24SCSnapDocSendServiceImpl26SnapDocStoryPostingSetting mentionedUserIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f1cf8c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112f28358);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 102f1cf98; end: 102f1cfa3; -[_TtC24SCSnapDocSendServiceImpl26SnapDocStoryPostingSetting trayMentionedUserIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f1cf98(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112f28360);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 102f1cfa4; end: 102f1cff3;  */

void FUN_102f1cfa4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 102f1cff4; end: 102f1cffb; -[_TtC24SCSnapDocSendServiceImpl26SnapDocStoryPostingSetting quotedStickerType] */

undefined8 FUN_102f1cff4(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 102f1cffc; end: 102f1d01b;  */

void FUN_102f1cffc(void)

{
  func_0x000107c61168(&PTR_PTR_1128abb10);
  return;
}



/* Entry: 102f1d01c; end: 102f1d077; -[_TtC24SCSnapDocSendServiceImpl26SnapDocStoryPostingSetting shareYoursId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f1d01c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f28368))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f28368);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102f1d078; end: 102f1d1b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f1d078(long param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar4 = param_1;
  func_0x000102f125a0();
  *(long *)(unaff_x20 + _DAT_112f28358) = lVar4;
  lVar4 = param_1;
  func_0x000102f17428();
  *(long *)(unaff_x20 + _DAT_112f28360) = lVar4;
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x000107c4008c();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c41844();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x000107c5bf1c();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  lVar4 = 0;
  func_0x000101345fdc();
  uVar3 = uVar2;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar2);
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(uVar3);
  *(bool *)(unaff_x20 + _DAT_112f28350) = 0 < (long)uVar2;
  func_0x000102f179a4();
  plVar1 = (long *)(unaff_x20 + _DAT_112f28368);
  *plVar1 = param_1;
  plVar1[1] = lVar4;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102f1d1b8; end: 102f1d1bb; -[_TtC24SCSnapDocSendServiceImpl26SnapDocStoryPostingSetting mentionedUsernames] */

void FUN_102f1d1b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102f1d1bc; end: 102f1d1bf; -[_TtC24SCSnapDocSendServiceImpl26SnapDocStoryPostingSetting quotedUserId] */

void FUN_102f1d1bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102f1d1c0; end: 102f1d1c3; -[_TtC24SCSnapDocSendServiceImpl26SnapDocStoryPostingSetting repostedMentionUserId] */

void FUN_102f1d1c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102f1d1c4; end: 102f1d227;  */

void FUN_102f1d1c4(undefined8 param_1)

{
  func_0x000102f1d40c();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uRam0000000113805150 = param_1;
  return;
}



/* Entry: 102f1d228; end: 102f1d293; +[SCSnapDocSendCaptureStore shared] */

void FUN_102f1d228(void)

{
  undefined1 auStack_38 [24];
  
  if (lRam00000001134f15c0 != -1) {
    func_0x000107c61568(0x1134f15c0,FUN_102f1d1c4);
  }
  func_0x000107c61428(0x113805150,auStack_38,0,0);
  func_0x000107c615f0(uRam0000000113805150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102f1d294; end: 102f1d30f; +[SCSnapDocSendCaptureStore setShared:] */

void FUN_102f1d294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = lRam00000001134f15c0;
  func_0x000107c615f0(param_3);
  if (lVar1 != -1) {
    func_0x000107c61568(0x1134f15c0,FUN_102f1d1c4);
  }
  func_0x000107c61428(0x113805150,auStack_38,1,0);
  uVar2 = uRam0000000113805150;
  uRam0000000113805150 = param_3;
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 102f1d310; end: 102f1d313;  */

void FUN_102f1d310(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102f1d314; end: 102f1d317; -[SCSnapDocSendCaptureStore .cxx_destruct] */

void FUN_102f1d314(void)

{
  return;
}



/* Entry: 102f1d318; end: 102f1d337;  */

void FUN_102f1d318(void)

{
  func_0x000107c61168(&PTR_PTR_1128abbe8);
  return;
}



/* Entry: 102f1d338; end: 102f1d33b; -[_TtC23SnapDocSendCaptureStoreP33_11049363AC570EB34CC77D4A47AFD55416NoOpCaptureStore setEnabled:] */

void FUN_102f1d338(void)

{
  return;
}



/* Entry: 102f1d33c; end: 102f1d373; -[_TtC23SnapDocSendCaptureStoreP33_11049363AC570EB34CC77D4A47AFD55416NoOpCaptureStore record:] */

void FUN_102f1d33c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c5ee30(param_3);
  func_0x00010006c090();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102f1d374; end: 102f1d397; -[_TtC23SnapDocSendCaptureStoreP33_11049363AC570EB34CC77D4A47AFD55416NoOpCaptureStore peek] */

void FUN_102f1d374(void)

{
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___s10Foundation4DataVN_110350ae0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102f1d398; end: 102f1d39b; -[_TtC23SnapDocSendCaptureStoreP33_11049363AC570EB34CC77D4A47AFD55416NoOpCaptureStore init] */

void FUN_102f1d398(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102f1d39c; end: 102f1d3d7;  */

void FUN_102f1d39c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102f1d3d8; end: 102f1d42b;  */

void FUN_102f1d3d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102f1d42c; end: 102f1d42f; -[_TtC23SnapDocSendCaptureStoreP33_11049363AC570EB34CC77D4A47AFD55416NoOpCaptureStore drain] */

void FUN_102f1d42c(void)

{
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___s10Foundation4DataVN_110350ae0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102f1d430; end: 102f1d437; -[SCSnapDocSendCaptureStore init] */

void FUN_102f1d430(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102f1d438; end: 102f1dd67;  */

void FUN_102f1d438(long *param_1,long param_2)

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
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x0001003879e8();
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
  func_0x0001000285a8(0x112e4ccf0,&UNK_10daaf8a0);
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
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x18) = puVar11;
  func_0x0001000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  uVar13 = uStack_d0;
  func_0x000107c6157c(uStack_d0);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x20) = puVar11;
  func_0x0001000285a8(0x112e4ccd8,&UNK_10da46ce0);
  func_0x000107c610f8();
  uVar13 = uStack_d8;
  func_0x000107c6157c(uStack_d8);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x28) = puVar11;
  puVar11 = PTR_PTR_1126ac7b8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar11;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1bf00);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2e2d0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2d400);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef1b9a0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f018e50);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar13 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef1a6f0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e00);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  uVar15 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef28160);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1a710);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef28140);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  uVar15 = uVar13;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
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
  *(undefined8 *)(param_2 + 0x80) = uVar15;
  *param_1 = param_2;
  return;
}



/* Entry: 102f1dd68; end: 102f1dda3;  */

void FUN_102f1dd68(void)

{
  long unaff_x20;
  
  FUN_102f1d438(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 102f1dda4; end: 102f1e59b;  */

void FUN_102f1dda4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  *(undefined8 *)(unaff_x20 + 0x50) = param_6;
  *(undefined8 *)(unaff_x20 + 0x58) = param_7;
  *(undefined8 *)(unaff_x20 + 0x60) = param_8;
  *(undefined8 *)(unaff_x20 + 0x68) = param_9;
  *(undefined8 *)(unaff_x20 + 0x70) = param_10;
  *(undefined8 *)(unaff_x20 + 0x78) = param_11;
  func_0x0001000285a8(0x112e4ccf0,&UNK_10daaf8a0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  uVar5 = param_12;
  func_0x000107c6157c(param_12);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  func_0x0001000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  uVar5 = param_13;
  func_0x000107c6157c(param_13);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  func_0x0001000285a8(0x112e4ccd8,&UNK_10da46ce0);
  func_0x000107c610f8();
  uVar5 = param_14;
  func_0x000107c6157c(param_14);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x28) = puVar3;
  puVar4 = PTR_PTR_1126ac7b8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar4;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1bf00);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2e2d0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar5 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2d400);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef1b9a0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f018e50);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef1a6f0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e00);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar5 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef28160);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1a710);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef28140);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  puVar1 = puVar4;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61574(param_12);
  func_0x000107c61574(param_13);
  func_0x000107c61574(param_14);
  *(undefined **)(unaff_x20 + 0x80) = puVar1;
  return;
}



/* Entry: 102f1e59c; end: 102f1e647;  */

void FUN_102f1e59c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 102f1e648; end: 102f1e69b;  */

void FUN_102f1e648(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x80);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102f1e69c; end: 102f1e6a3;  */

void FUN_102f1e69c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x80);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102f1e6a4; end: 102f1e6f3;  */

undefined8 FUN_102f1e6a4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102f1e6f4; end: 102f1e737;  */

undefined1  [16] FUN_102f1e6f4(void)

{
  return ZEXT816(0x1105e8a20);
}



/* Entry: 102f1e738; end: 102f1e75f;  */

void FUN_102f1e738(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102f1e760; end: 102f1e767;  */

undefined8 FUN_102f1e760(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102f1e768; end: 102f1f097;  */

void FUN_102f1e768(long *param_1,long param_2)

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
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100387be0();
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
  func_0x0001000285a8(0x112e4ccf0,&UNK_10daaf8a0);
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
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x18) = puVar11;
  func_0x0001000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  uVar13 = uStack_d0;
  func_0x000107c6157c(uStack_d0);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x20) = puVar11;
  func_0x0001000285a8(0x112e4ccd8,&UNK_10da46ce0);
  func_0x000107c610f8();
  uVar13 = uStack_d8;
  func_0x000107c6157c(uStack_d8);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x28) = puVar11;
  puVar11 = PTR_PTR_1126ac7c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar11;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1bf00);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2e2d0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2d400);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef1b9a0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f018e50);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar13 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef1a6f0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e00);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  uVar15 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef28160);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1a710);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef28140);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  uVar15 = uVar13;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
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
  *(undefined8 *)(param_2 + 0x80) = uVar15;
  *param_1 = param_2;
  return;
}



/* Entry: 102f1f098; end: 102f1f0d3;  */

void FUN_102f1f098(void)

{
  long unaff_x20;
  
  FUN_102f1e768(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 102f1f0d4; end: 102f1f8cb;  */

void FUN_102f1f0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  *(undefined8 *)(unaff_x20 + 0x50) = param_6;
  *(undefined8 *)(unaff_x20 + 0x58) = param_7;
  *(undefined8 *)(unaff_x20 + 0x60) = param_8;
  *(undefined8 *)(unaff_x20 + 0x68) = param_9;
  *(undefined8 *)(unaff_x20 + 0x70) = param_10;
  *(undefined8 *)(unaff_x20 + 0x78) = param_11;
  func_0x0001000285a8(0x112e4ccf0,&UNK_10daaf8a0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  uVar5 = param_12;
  func_0x000107c6157c(param_12);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  func_0x0001000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  uVar5 = param_13;
  func_0x000107c6157c(param_13);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  func_0x0001000285a8(0x112e4ccd8,&UNK_10da46ce0);
  func_0x000107c610f8();
  uVar5 = param_14;
  func_0x000107c6157c(param_14);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x28) = puVar3;
  puVar4 = PTR_PTR_1126ac7c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar4;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1bf00);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2e2d0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar5 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2d400);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef1b9a0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f018e50);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef1a6f0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e00);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar5 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef28160);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1a710);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef28140);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  puVar1 = puVar4;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61574(param_12);
  func_0x000107c61574(param_13);
  func_0x000107c61574(param_14);
  *(undefined **)(unaff_x20 + 0x80) = puVar1;
  return;
}



/* Entry: 102f1f8cc; end: 102f1f977;  */

void FUN_102f1f8cc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 102f1f978; end: 102f1f9cb;  */

void FUN_102f1f978(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x80);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102f1f9cc; end: 102f1f9d3;  */

void FUN_102f1f9cc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x80);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102f1f9d4; end: 102f1fa23;  */

undefined8 FUN_102f1f9d4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102f1fa24; end: 102f1fa67;  */

undefined1  [16] FUN_102f1fa24(void)

{
  return ZEXT816(0x1105e8ae8);
}



/* Entry: 102f1fa68; end: 102f1fa8f;  */

void FUN_102f1fa68(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102f1fa90; end: 102f1fa97;  */

undefined8 FUN_102f1fa90(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102f1fa98; end: 102f2052b;  */

void FUN_102f1fa98(long *param_1,long param_2)

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
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
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
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100369730();
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
  func_0x0001000285a8(0x112e51d58,&UNK_10da97cc0);
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
  func_0x000107c61174(uStack_d0);
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c61174(uStack_e0);
  uVar15 = uStack_e8;
  func_0x000107c61174();
  uVar18 = uStack_f0;
  func_0x000107c6157c(uStack_f0);
  func_0x00010017da58();
  puVar16 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar18);
  *(undefined **)(param_2 + 0x18) = puVar16;
  puVar16 = PTR_PTR_1126ac7c8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar16;
  func_0x000107c61174();
  uVar17 = auStack_70[0];
  func_0x000107c61174();
  uVar18 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(puVar16);
  uVar18 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000012;
  uVar18 = uVar20;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef20520);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2d400);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f114490);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(puVar16);
  uVar18 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef2c1e0);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f05c3f0);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efe1e20);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f018e50);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1bf00);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar18);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2e2d0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef19c70);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar18);
  func_0x000107c61174(uVar13);
  func_0x000107c61174();
  uVar18 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar18);
  func_0x000107c61174(uVar14);
  func_0x000107c61174();
  uVar18 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar18);
  func_0x000107c61174(uVar15);
  func_0x000107c61174();
  uVar18 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f05c6b0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  uVar18 = uVar19;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar17);
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
  func_0x000107c61574(uStack_f0);
  *(undefined8 *)(param_2 + 0x98) = uVar18;
  *param_1 = param_2;
  return;
}



/* Entry: 102f2052c; end: 102f2056f;  */

void FUN_102f2052c(void)

{
  long unaff_x20;
  
  FUN_102f1fa98(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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



/* Entry: 102f20570; end: 102f20e7f;  */

void FUN_102f20570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = param_12;
  *(undefined8 *)(unaff_x20 + 0x78) = param_13;
  *(undefined8 *)(unaff_x20 + 0x80) = param_14;
  *(undefined8 *)(unaff_x20 + 0x88) = param_15;
  *(undefined8 *)(unaff_x20 + 0x90) = param_16;
  func_0x0001000285a8(0x112e51d58,&UNK_10da97cc0);
  func_0x000107c610f8();
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
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  uVar3 = param_17;
  func_0x000107c6157c(param_17);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar2 = PTR_PTR_1126ac7c8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000012;
  uVar3 = uVar4;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef20520);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2d400);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f114490);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef2c1e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f05c3f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efe1e20);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f018e50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1bf00);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2e2d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef19c70);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_16);
  func_0x000107c61174();
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f05c6b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  puVar1 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61574(param_17);
  *(undefined **)(unaff_x20 + 0x98) = puVar1;
  return;
}



/* Entry: 102f20e80; end: 102f20f43;  */

void FUN_102f20e80(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 102f20f44; end: 102f20f97;  */

void FUN_102f20f44(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x98);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102f20f98; end: 102f20f9f;  */

void FUN_102f20f98(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x98);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102f20fa0; end: 102f20fef;  */

undefined8 FUN_102f20fa0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102f20ff0; end: 102f21033;  */

undefined1  [16] FUN_102f20ff0(void)

{
  return ZEXT816(0x1105e8bb0);
}



/* Entry: 102f21034; end: 102f2105b;  */

void FUN_102f21034(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102f2105c; end: 102f21063;  */

undefined8 FUN_102f2105c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102f21064; end: 102f210eb;  */

void FUN_102f21064(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  func_0x000100340a08();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_102f21234(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61574(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 102f210ec; end: 102f210f3;  */

void FUN_102f210ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_40);
  func_0x000100340a08();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_102f21234(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61574(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 102f210f4; end: 102f21153;  */

undefined8 FUN_102f210f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102f21234(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  return uVar1;
}



/* Entry: 102f21154; end: 102f2118f;  */

void FUN_102f21154(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102f21190; end: 102f211e3;  */

void FUN_102f21190(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102f211e4; end: 102f21233;  */

undefined8 FUN_102f211e4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102f21234; end: 102f2142b;  */

void FUN_102f21234(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  func_0x0001000285a8(0x112f20638,&UNK_10db595d0);
  func_0x000107c610f8();
  func_0x000107c6157c(param_2);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_2);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  puVar2 = PTR_PTR_1126ac7d0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f1144b0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar6 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f1144e0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar5 != 0) {
    *(long *)(unaff_x20 + 0x28) = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f2142c);
  (*pcVar1)();
}



/* Entry: 102f2142c; end: 102f21477;  */

void FUN_102f2142c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102f21478; end: 102f2149f;  */

void FUN_102f21478(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}


